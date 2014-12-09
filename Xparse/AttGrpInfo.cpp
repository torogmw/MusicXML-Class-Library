/* See MusicXML License at the bottom of this code page. */

/* matthew james briggs */

#include "AttGrpInfo.h"
#include "ExecuteQuery.h"
#include "end.h"
#include "ExecuteScalarString.h"
#include "end.h"

namespace XsdClasses
{
    /* ctor */
    AttGrpInfo::AttGrpInfo()
    :myFields()
    ,myChildAttributeGroups()
    {}
    
    /* dtor */
    AttGrpInfo::~AttGrpInfo() {}
    
    int AttGrpInfo::getID() const
    {
        return myFields.ID;
    }
    std::string AttGrpInfo::getName() const
    {
        return myFields.Name;
    }
    std::string AttGrpInfo::getCppName() const
    {
        return myFields.CppName;
    }
    AGCategory AttGrpInfo::getCategory() const
    {
        return myFields.Category;
    }
    int AttGrpInfo::getChildAttributeGroupCount() const
    {
        return (int)myChildAttributeGroups.size();
    }
    int AttGrpInfo::getChildAttributeCount() const
    {
        return (int)myAttributes.size();
    }
    bool AttGrpInfo::getIsImplemented() const
    {
        return myFields.IsImplemented;
    }
    std::string AttGrpInfo::getDocumentation() const
    {
        return myFields.Documentation;
    }
    Attributes AttGrpInfo::getAttributes() const
    {
        return myAttributes;
    }
    Attributes AttGrpInfo::getAttributesAndChildAttributes() const
    {
        Attributes attributes;
        for ( auto o : myOrder )
        {
            if ( o.Type == itemType::attribute )
            {
                attributes.push_back( o.attributeInfo );
            }
            else
            {
                for ( AttributeInfoV2 a : o.attributeGroup->getAttributesAndChildAttributes() )
                {
                    attributes.push_back( a );
                }
            }
        }
        return attributes;
    }
    DataMemberCollection AttGrpInfo::getDataMemberCollection() const
    {
        return getDataMemberCollection( "" );
    }
    DataMemberCollection AttGrpInfo::getDataMemberCollection( const std::string& attributeGroupNamePrefix ) const
    {
        DataMemberCollection dms;
        for ( Item item : myOrder )
        {
            if ( item.Type == itemType::attribute )
            {
                for ( AttributeInfoV2 attr : myAttributes )
                {
                    if ( attr.getAttributeID() == item.ID )
                    {
                        DataMember dm;
                        dm.setDataType( attr.getAttributeCppType() );
                        std::stringstream dmName;
                        dmName << "my" << attr.getAttributeCppName();
                        dm.setName( dmName.str() );
                        if ( attr.getHasDefault() )
                        {
                            dm.setMemberInitializationValue( attr.getDefaultValue() );
                        }
                        dms.push_back( dm );
                    }
                }
            }
            else if ( item.Type == itemType::attributeGroup )
            {
                for ( auto grp : myChildAttributeGroups )
                {
                    if ( grp.referencedAttributeGroup->getID() == item.ID )
                    {
                        DataMember dm;
                        std::stringstream dataType;
                        dataType << attributeGroupNamePrefix << grp.referencedAttributeGroup->getCppName();
                        dm.setDataType( dataType.str() );
                        std::stringstream dmName;
                        dmName << "my" << grp.referencedAttributeGroup->getCppName();
                        dm.setName( dmName.str() );
                        //dm.setMemberInitializationParameter( grp->getCppName() );
                        dms.push_back( dm );
                    }
                }
            }
            
        }
        for ( Item item : myOrder )
        {
            if ( item.Type == itemType::attribute )
            {
                for ( AttributeInfoV2 attr : myAttributes )
                {
                    if ( attr.getAttributeID() == item.ID )
                    {
                        DataMember dm;
                        dm.setDataType( "bool" );
                        std::stringstream dmName;
                        dmName << "myIs" << attr.getAttributeCppName() << "Present";
                        dm.setName( dmName.str() );
                        std::stringstream isRequired;
                        isRequired << std::boolalpha << attr.getIsRequired();
                        dm.setMemberInitializationValue( isRequired.str() );
                        dms.push_back( dm );
                    }
                }
            }
        }
        return dms;
    }
    AGs AttGrpInfo::getChildAttributeGroups() const
    {
        AGs output;
        for ( auto x : myChildAttributeGroups )
        {
            output.push_back( x.referencedAttributeGroup );
        }
        return output;
    }
    
    void AttGrpInfo::step01CreateNesting( AttributeGroupTable& tbl, AGs& ags )
    {
        for ( auto a : tbl )
        {
            HAttGrpInfo newinfo( new AttGrpInfo() );
            newinfo->myFields = a;
            ags.push_back( newinfo );
        }
        
        struct Vals { int ParentID; int ReferencedID; int AbsolutePositionID; };
        std::stringstream sql;
        sql << "SELECT" << std::endl;
        sql << " parent.ID AS ParentID" << std::endl;
        sql << ",ref.ID AS ReferencedID" << std::endl;
        sql << ",child.ID AS AbsolutePositionID" << std::endl;
        sql << "FROM xsd AS child" << std::endl;
        sql << "INNER JOIN xsd AS parent ON child.ParentID = parent.ID" << std::endl;
        sql << "INNER JOIN xsd AS ref ON ref.Name = child.XsMetaRef AND ref.XsTag = \"xs:attributeGroup\"" << std::endl;
        sql << "WHERE child.XsTag = \"xs:attributeGroup\" AND child.XsMetaRef <> ''" << std::endl;
        sql << "  AND parent.XsTag = 'xs:attributeGroup'" << std::endl;
        sql << "ORDER BY parent.ID, ref.ID" << std::endl;
        sql << ";" << std::endl;
        //std::cout << sql.str() << std::endl << std::endl;
        mysqlpp::StoreQueryResult res = mysqlpp::ExecuteQuery( sql.str() );
        std::vector<Vals> vals;
        for ( auto it = res.begin(); it != res.end(); ++it )
        {
            mysqlpp::Row row = *it;
            Vals v;
            v.ParentID = -1;
            v.ReferencedID = -1;
            v.ParentID  = mysqlpp::getFieldInt( row, "ParentID" );
            v.ReferencedID = mysqlpp::getFieldInt( row, "ReferencedID" );
            v.AbsolutePositionID = mysqlpp::getFieldInt( row, "AbsolutePositionID" );
            vals.push_back( v );
        }
        for ( auto p : vals )
        {

            HAttGrpInfo parent;
            for ( auto a : ags )
            {
                if ( a->myFields.ID == p.ParentID )
                {
                    parent = a;
                    //int break2 = 2;
                }
            }
            HAttGrpInfo referenced;
            for ( auto a : ags )
            {
                if ( a->myFields.ID == p.ReferencedID )
                {
                    referenced = a;
                    //int break3 = 3;
                }
            }
            ChildAG child;
            child.AbsolutePositionID = p.AbsolutePositionID;
            child.referencedAttributeGroup = referenced;
            parent->myChildAttributeGroups.push_back( child );
        }
        
        // set the myOrder datamember for each AttributeGroup
        for ( auto a : ags )
        {
            a->setOrder();
        }
    }
    
    void AttGrpInfo::step02AddAttributes( AGs &ags)
    {
        Attributes allAttributes;
        AttributeInfoV2::selectAttributeGroupAttributes( allAttributes );
        for ( AttributeInfoV2 a : allAttributes )
        {
            for ( HAttGrpInfo grp : ags )
            {
                if ( grp->myFields.ID == a.getAttributeGroupID() )
                {
                    grp->myAttributes.push_back( a );
                }
            }
        }
        // set the myOrder datamember for each AttributeGroup
        for ( auto a : ags )
        {
            a->setOrder();
        }
    }
    void AttGrpInfo::setOrder()
    {
        myOrder.clear();
        for ( auto grp : myChildAttributeGroups )
        {
            Item item;
            item.ID = grp.referencedAttributeGroup->getID();
            item.Type = itemType::attributeGroup;
            item.AbsolutePositionID = grp.AbsolutePositionID;
            item.attributeGroup = grp.referencedAttributeGroup.get();
            myOrder.push_back( item );
        }
        for( AttributeInfoV2 attr : myAttributes )
        {
            Item item;
            item.ID = attr.getAttributeID();
            item.Type = itemType::attribute;
            item.AbsolutePositionID = attr.getAttributeID();
            item.attributeInfo = attr;
            myOrder.push_back( item );
        }
        myOrder.sort();
    }
    std::string AttGrpInfo::replaceMyWith( const std::string& input, const std::string& replaceMyWithThis ) const
    {
        std::stringstream output;
        output << replaceMyWithThis;
        int i = 0;
        for ( char c : input )
        {
            if ( i > 1 )
            {
                output << c;
            }
        }
        return output.str();
    }
    std::string AttGrpInfo::replaceMyWithGet( const std::string& input ) const
    {
        return replaceMyWith( input, "get" );
    }
    
    std::string AttGrpInfo::replaceMyWithSet( const std::string& input ) const
    {
        return replaceMyWith( input, "set" );
    }
    
    FunctionCollection AttGrpInfo::getGetValueFunctions() const
    {
        FunctionCollection funcs;
        for ( Item item : myOrder )
        {
            if ( item.Type == itemType::attribute )
            {
                funcs.push_back( item.attributeInfo.getFuncGetValue() );
            }
            else if ( item.Type == itemType::attributeGroup )
            {
                for ( auto a : (item.attributeGroup)->getAttributesAndChildAttributes() )
                {
                    funcs.push_back( a.getFuncGetValue( item.attributeGroup ) );
                }
            }
        }
        return funcs;
    }
    
    FunctionCollection AttGrpInfo::getSetValueFunctions() const
    {
        FunctionCollection funcs;
        for ( Item item : myOrder )
        {
            if ( item.Type == itemType::attribute )
            {
                if ( item.attributeInfo.getIsFixed() )
                {
                    // do not add the setter
                }
                else
                {
                    funcs.push_back( item.attributeInfo.getFuncSetValue() );
                }
            }
            else if ( item.Type == itemType::attributeGroup )
            {
                for ( auto a : (item.attributeGroup)->getAttributesAndChildAttributes() )
                {
                    if ( a.getIsFixed() )
                    {
                        // do not add the setter
                    }
                    else
                    {
                        funcs.push_back( a.getFuncSetValue( item.attributeGroup ) );
                    }
                }
            }
        }
        return funcs;
    }
    
    
    FunctionCollection AttGrpInfo::getGetIsRequiredFunctions() const
    {
        FunctionCollection funcs;
        for ( Item item : myOrder )
        {
            if ( item.Type == itemType::attribute )
            {
                funcs.push_back( item.attributeInfo.getFuncGetIsRequired() );
            }
            else if ( item.Type == itemType::attributeGroup )
            {
                for ( auto a : (item.attributeGroup)->getAttributesAndChildAttributes() )
                {
                    funcs.push_back( a.getFuncGetIsRequired( item.attributeGroup ) );
                }
            }
        }
        return funcs;
    }
    
    FunctionCollection AttGrpInfo::getGetIsPresentFunctions() const
    {
        FunctionCollection funcs;
        for ( Item item : myOrder )
        {
            if ( item.Type == itemType::attribute )
            {
                funcs.push_back( item.attributeInfo.getFuncGetIsPresent() );
            }
            else if ( item.Type == itemType::attributeGroup )
            {
                for ( auto a : (item.attributeGroup)->getAttributesAndChildAttributes() )
                {
                    funcs.push_back( a.getFuncGetIsPresent( item.attributeGroup ) );
                }
            }
        }
        return funcs;
    }
    
    FunctionCollection AttGrpInfo::getSetIsPresentFunctions() const
    {
        FunctionCollection funcs;
        for ( Item item : myOrder )
        {
            if ( item.Type == itemType::attribute )
            {
                if ( ! item.attributeInfo.getIsRequired() )
                {
                    funcs.push_back( item.attributeInfo.getFuncSetIsPresent() );
                }
            }
            else if ( item.Type == itemType::attributeGroup )
            {
                for ( auto a : (item.attributeGroup)->getAttributesAndChildAttributes() )
                {
                    if ( ! a.getIsRequired() )
                    {
                        funcs.push_back( a.getFuncSetIsPresent( item.attributeGroup ) );
                    }
                }
            }
        }
        return funcs;
    }
    
    FunctionCollection AttGrpInfo::getHasDefaultFunctions() const
    {
        FunctionCollection funcs;
        for ( Item item : myOrder )
        {
            if ( item.Type == itemType::attribute )
            {
                funcs.push_back( item.attributeInfo.getFuncGetHasDefault() );
            }
            else if ( item.Type == itemType::attributeGroup )
            {
                for ( auto a : (item.attributeGroup)->getAttributesAndChildAttributes() )
                {
                    funcs.push_back( a.getFuncGetHasDefault( item.attributeGroup ) );
                }
            }
        }
        return funcs;
    }
    
    FunctionCollection AttGrpInfo::getGetDefaultValueFunctions() const
    {
        FunctionCollection funcs;
        for ( Item item : myOrder )
        {
            if ( item.Type == itemType::attribute )
            {
                funcs.push_back( item.attributeInfo.getFuncGetDefaultValue() );
            }
            else if ( item.Type == itemType::attributeGroup )
            {
                for ( auto a : (item.attributeGroup)->getAttributesAndChildAttributes() )
                {
                    funcs.push_back( a.getFuncGetDefaultValue( item.attributeGroup ) );
                }
            }
        }
        return funcs;
    }
    

    Function AttGrpInfo::getStreamFunction() const
    {
        FunctionCollection fcGetValue = getGetValueFunctions();
        FunctionCollection fcGetIsPresent = getGetIsPresentFunctions();
        FunctionIter itGetValue;
        FunctionIter itIsPresent;
        std::stringstream code;
        code << "bool isFirst = true;" << end();
        for ( itGetValue = fcGetValue.begin(), itIsPresent = fcGetIsPresent.begin();
             itGetValue != fcGetValue.end() && itIsPresent != fcGetIsPresent.end();
             ++itGetValue, ++itIsPresent )
        {
            code << "hidden::attributeStream( " << itIsPresent->getName() << "(), ";
            std::string attributeGetValueFunction = itGetValue->getName();
            std::string attributeCppName = attributeGetValueFunction.substr( 3 );
            std::stringstream sql;
            sql << "SELECT AttributeXmlName FROM attributeGroupAttributes WHERE AttributeCppName = '";
            sql << attributeCppName << "' LIMIT 1";
            std::string attributeName = mysqlpp::ExecuteScalarString( constants::getSqlConnectionValues(), sql.str() );
            code << "\"" << attributeName << "\", " << attributeGetValueFunction << "().toString(), ";
            code << "os_out, isFirst );" << end();
        }
        Function f;
        code << "return os_out;";
        f.setCode( code.str() );
        f.setName( "stream" );
        f.setReturnType( "std::ostream&" );
        f.isConst( true );
        f.setDocumentation( "Returns the attributeGroup's value as a string where each attribute is represented, if present, in the form attribute=\"vale\"." );
        Parameter p;
        p.setName( "os_out" );
        p.setDataType( "std::ostream" );
        p.isConst( false );
        f.addParameter( p );
        return f;
    }
    
    std::string AttGrpInfo::getSqlInsertFunction( const Function& f, int ID, const HAttGrpInfo& AGInfo, const std::string& FunctionGroup )
    {
        std::stringstream sql;
        sql << "INSERT INTO `mx`.`attributeGroupFunctions`" << end();
        sql << "(`ID`," << end();
        sql << " `attributeGroupID`," << end();
        sql << " `FunctionGroup`," << end();
        sql << " `ReturnType`," << end();
        sql << " `IsConst`," << end();
        sql << " `Name`," << end();
        sql << " `HasParameter`," << end();
        sql << " `ParameterType`," << end();
        sql << " `ParameterName`," << end();
        sql << " `IsParameterConst`," << end();
        sql << " `Code`," << end();
        sql << " `attributeID`)" << end();
        sql << "VALUES" << end();
        sql << "(" << ID <<"," << end();
        sql << AGInfo->getID() << "," << end();
        sql << " '" << FunctionGroup << "'," << end();
        sql << " '" << f.getReturnType() << "'," << end();
        sql << " '" << std::boolalpha << f.isConst() << "'," << end();
        sql << " '" << f.getName() << "'," << end();
        sql << " '" << std::boolalpha << ( f.getParameterCount() > 0 ) << "'," << end();
        
        if ( f.getParameterCount() == 1 )
        {
            sql << " '" << f.getParameter( 0 ).getDataType() << "'," << end();
            sql << " '" << f.getParameter( 0 ).getName() << "'," << end();
            sql << " '" << f.getParameter( 0 ).isConst() << "'," << end();
        }
        else if ( f.getParameterCount() == 0 )
        {
            sql << " ''," << end();
            sql << " ''," << end();
            sql << " 'false'," << end();
        }
        else
        {
            throw "The attributeGroup function has more than one parameter.";
        }
        sql << " '" << f.getCode() << "'," << end();
        sql << " " << ( (f.getNote().size() > 0 ) ? f.getNote() : "NULL" ) << ");" << end();
        return sql.str();
    }
    void AttGrpInfo::sqlDeleteFunctions( int attributeGroupID )
    {
        std::stringstream sql;
        sql << "DELETE FROM attributeGroupFunctions WHERE AttributeGroupID = ";
        sql << attributeGroupID << ";";
        mysqlpp::ExecuteNonQuery( constants::getSqlConnectionValues(), sql.str() );
    }
    void AttGrpInfo::sqlInsertFunctionGroup( const FunctionGroup& grp, int& FirstFunctionID, const HAttGrpInfo& AGInfo )
    {
        for ( auto it = grp.cbegin(); it != grp.cend(); ++it )
        {
            std::string sql;
            sql = getSqlInsertFunction( *it, FirstFunctionID, AGInfo, grp.getName() );
            ++FirstFunctionID;
            // std::cout << sql << end() << end();
            mysqlpp::ExecuteNonQuery( constants::getSqlConnectionValues(), sql );
        }
    }
    
    AttributeObjectList AttGrpInfo::getAttributeObjectList() const
    {
        Attributes attributes = getAttributesAndChildAttributes();
        AttributeObjectList output;
        for ( AttributeInfoV2 a : attributes )
        {
            AttributeWithObject newitem;
            newitem.Attribute = a;
            newitem.Object = a.getObject();
            switch ( a.getAttributeType() )
            {
                case AttributeType::String:
                    newitem.StringCast = a.createStringObject();
                    break;
                case AttributeType::MxEnum:
                    newitem.EnumCast = a.createMxEnum();
                    break;
                case AttributeType::MxNumberLongDouble:
                    newitem.LongDoubleCast = a.createMxNumberLongDouble();
                    break;
                case AttributeType::MxNumberInt:
                    newitem.IntCast = a.createMxNumberInt();
                    break;
                case AttributeType::MxColor:
                    newitem.MxColorCast = a.createMxColor();
                    break;
                case AttributeType::MxFontSize:
                    newitem.MxFontSizeCast = a.createMxFontSize();
                    break;
                default:
                    break;
            }
            output.push_back( newitem );
        }
        return output;
    }
    std::string AttGrpInfo::toString( const std::vector<bool>& isPresentPattern, const Attributes& attributes, bool escape )
    {
        if ( isPresentPattern.size() != attributes.size() )
        {
            throw "oops";
        }
        bool isFirst = true;
        int index = 0;
        std::stringstream output;
        for ( auto a : attributes )
        {

            if ( isPresentPattern[index] || a.getIsRequired() )
            {
                if ( ! isFirst )
                {
                    output << " ";
                }
                isFirst = false;
                output << a.getAttributeXmlName();
                output << "=";
                if ( escape )
                {
                    output << "\\";
                }
                output << '"';
                output << a.getObject()->toString();
                if ( escape )
                {
                    output << "\\";
                }
                output << '"';
            }
            ++index;
        }
        return output.str();
    }
} // namespace XsdClasses


/*

MusicXML™ Public License Version 3.0

This MusicXML™ work (including software, documents, or other related items) is being provided by the Copyright Holder under the following license. By obtaining, using and/or copying this work, each Contributor and Recipient (hereinafter, collectively known as "Licensee") agree that he/she has read, understood, and will comply with the following terms and conditions:

A. DEFINITIONS

"Copyright Holder" means MakeMusic, Inc.

"Contribution" means:

in the case of MakeMusic, Inc., the Original Program, and
in the case of each Contributor,
changes to the Program, and
additions to the Program;
where such changes and/or additions to the Program originate from and are distributed by that particular Contributor. A Contribution 'originates' from a Contributor if it was added to the Program by such Contributor itself or anyone acting on such Contributor's behalf. Contributions do not include additions to the Program which: (i) are separate modules of software distributed in conjunction with the Program under their own license agreement, and (ii) are not derivative works of the Program.
"Contributor" means MakeMusic, Inc. and any other entity that distributes the Program.

"MusicXML™ Mark" means the MusicXML™ trademark owned by MakeMusic, Inc.

"Original Program" means the original version of the software accompanying this Agreement as released by MakeMusic, Inc., including source code, object code and documentation, if any.

"Program" means the Original Program and Contributions.

"Recipient" means anyone who receives the Program under this Agreement, including all Contributors.

B. GRANT OF RIGHTS

Permission to use, copy, modify, and distribute the Program, with or without modification, for any purpose and without fee or royalty is hereby granted, provided that each Recipient include the following on ALL copies of the Program or portions thereof, including modifications, that he/she make:

The full text of this License in a location viewable to users of the redistributed or derivative work.

Any pre-existing intellectual property disclaimers, notices, or terms and conditions. If none exist, a short notice of the following form (hypertext is preferred, text is permitted) should be used within the body of any redistributed or derivative code: "© MakeMusic, Inc. All rights reserved. http://www.makemusic.com"

Notice of any changes or modifications to the MusicXML™ files, including the date changes were made. (We recommend you provide URLs to the location from which the code is derived.)

In addition, creators of derivative works must include the full text of this License in a location viewable to users of the derivative work.

Title to copyright in the Program will at all times remain with Copyright Holder.

C. NO WARRANTY

EXCEPT AS EXPRESSLY SET FORTH IN THIS AGREEMENT, THE PROGRAM IS PROVIDED ON AN "AS IS" BASIS, AND COPYRIGHT HOLDER MAKES NO WARRANTIES OR CONDITIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED INCLUDING, WITHOUT LIMITATION, ANY WARRANTIES OR CONDITIONS OF TITLE, NON-INFRINGEMENT, MERCHANTABILITY OR FITNESS FOR A PARTICULAR PURPOSE. Each Recipient is solely responsible for determining the appropriateness of using and distributing the Program and assumes all risks associated with its exercise of rights under this Agreement, including but not limited to the risks and costs of program errors, compliance with applicable laws, damage to or loss of data, programs or equipment, and unavailability or interruption of operations.

D. DISCLAIMER OF LIABILITY

EXCEPT AS EXPRESSLY SET FORTH IN THIS AGREEMENT, NEITHER COPYRIGHT HOLDER NOR ANY CONTRIBUTORS SHALL HAVE ANY LIABILITY FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING WITHOUT LIMITATION LOST PROFITS), HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OR DISTRIBUTION OF THE PROGRAM OR THE EXERCISE OF ANY RIGHTS GRANTED HEREUNDER, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGES.

E. TRADEMARK

1. The MusicXML™ Mark (or a derivative Mark, such as MusicXML™ Plus) may not be used to identify any product or service not originating from or licensed by Copyright Holder without specific, written prior permission. However, it is acceptable for a Contributor product or service to be described as being MusicXML™-compatible, assuming that the claim is true in Copyright Holder’s reasonable judgment.

2. This License does not grant any rights to use any other trademarks owned by Copyright Holder, including without limitation "Recordare®", "Dolet®", and "In the Beginning Was the Note®", even if such marks are included in the Program. For purposes of clarification and the avoidance of doubt, the trademarks "Recordare®", "Dolet®", and "In the Beginning Was the Note®" must not be used to endorse or promote Contributor versions of the Program without the prior written permission of Copyright Holder.

3. All rights not expressly granted herein by Copyright Holder with respect to the MusicXML™ Mark or any other trademarks owned by Copyright Holder are reserved by and to Copyright Holder.

F. GENERAL

If any provision of this Agreement is invalid or unenforceable under applicable law, it shall not affect the validity or enforceability of the remainder of the terms of this Agreement, and without further action by the parties hereto, such provision shall be reformed to the minimum extent necessary to make such provision valid and enforceable.

All Recipient's rights under this Agreement shall terminate if it fails to comply with any of the material terms or conditions of this Agreement and does not cure such failure in a reasonable period of time after becoming aware of such noncompliance. If all Recipient's rights under this Agreement terminate, Recipient agrees to cease use and distribution of the Program as soon as reasonably practicable. However, Recipient's obligations under this Agreement and any licenses granted by Recipient relating to the Program shall continue and survive.

MakeMusic, Inc. may publish new versions (including revisions) of this Agreement from time to time. Each new version of the Agreement will be given a distinguishing version number. The Program (including Contributions) may always be distributed subject to the version of the Agreement under which it was received. In addition, after a new version of the Agreement is published, Contributor may elect to distribute the Program (including its Contributions) under the new version. No one other than MakeMusic, Inc. has the right to modify this Agreement. Except as expressly stated in Sections B and E above, Recipient receives no rights or licenses to the intellectual property of any Contributor under this Agreement, whether expressly, by implication, estoppel or otherwise. All rights in the Program not expressly granted under this Agreement are reserved.

This Agreement is governed by the laws of the State of California and the intellectual property laws of the United States of America.


*/

