/* See MusicXML License at the bottom of this code page. */

/* matthew james briggs */

#include "XsNode.h"
#include <sstream>
#include "sanitizeString.h"
#include "mainConstants.h"
#include "ExecuteNonQuery.h"
#include "Document.h"
#include "XsdDocument.h"

namespace XsdClasses
{
    /* ctor */
    XsNode::XsNode( int ID, int parentID, const std::string& xsTag, XsNodeType xsNodeType )
    :myID( ID )
    ,myParentID( parentID )
    ,myXsTag( xsTag )
    ,myNameValue( "" )
    ,myIsTopLevel( false )
    ,myValue( "" )
    ,myDocumentation( "" )
    ,myXsNodeType( xsNodeType )
    ,myXsMetaName( "" )
    ,myXsMetaType( "" )
    ,myXsMetaValue( "" )
    ,myXsMetaRef( "" )
    ,myXsMetaMinOccurs( "" )
    ,myXsMetaBase( "" )
    ,myXsMetaMaxOccurs( "" )
    ,myXsMetaUse( "" )
    ,myXsMetaDefault( "" )
    ,myXsMetaMemberTypes( "" )
    ,myXsMetaBlock( "" )
    ,myXsMetaFinal( "" )
    ,myXsMetaNamespace( "" )
    ,myXsMetaSchemaLocation( "" )
    ,myXsMetaAttributeFormDefault( "" )
    ,myXsMetaElementFormDefault( "" )
    ,myXsMetaFixed( "" )
    ,myXsMetaXmlnsxlink( "" )
    ,myXsMetaXmlnsxs( "" )
    {}
    
    /* dtor */
    XsNode::~XsNode() {}
    
    int XsNode::getID() const
    {
        return myID;
    }
    void XsNode::setID(int value)
    {
        myID = value;
    }
    
    int XsNode::getParentID() const
    {
        return myParentID;
    }
    void XsNode::setParentID(int value)
    {
        myParentID = value;
    }
    
    std::string XsNode::getXsTag() const
    {
        return myXsTag;
    }
    void XsNode::setXsTag( const std::string& value )
    {
        myXsTag = value;
    }
    
    std::string XsNode::getNodeNameValue() const
    {
        return myNameValue;
    }
    void XsNode::setNodeNameValue( const std::string& value )
    {
        myNameValue = value;
    }
    
    bool XsNode::isTopLevel() const
    {
        return myIsTopLevel;
    }
    void XsNode::isTopLevel( const bool value )
    {
        myIsTopLevel = value;
    }
    
    std::string XsNode::getValue() const
    {
        return myValue;
    }
    void XsNode::setValue( const std::string& value )
    {
        myValue = value;
    }
    
    std::string XsNode::getDocumentation() const
    {
        return myDocumentation;
    }
    void XsNode::setDocumentation( const std::string& value )
    {
        myDocumentation = value;
    }
    
    XsNodeType XsNode::getXsNodeType() const
    {
        return myXsNodeType;
    }
    void XsNode::setXsNodeType( XsNodeType value )
    {
        myXsNodeType = value;
    }
    
    XsNode XsNode::create( xparse::ElementPtr source )
    {
        XsNode node(-1, -1, "", XsNodeType::XsElement);
        if( source )
        {
            node.setID( source->getIndex() );
            if ( source->getParent() )
            {
                node.setParentID( source->getParent()->getIndex() );
                node.isTopLevel( ( node.getID() > 0 ) &&  node.getParentID() == 0 );
            }
            else
            {
                node.setParentID( 0 );
                node.isTopLevel( false );
            }
            node.setXsTag( source->name() );
            
            if ( source->has_text() )
            {
                if ( source->name() == "xs:documentation" )
                {
                    node.setDocumentation( sanitizeString( source->text(), true ) );
                }
                else
                {
                    node.setValue( sanitizeString( source->text(), true ) );
                }
            }
            int attribute_count = source->count_attributes();
            if ( source->has_attributes() )
            {
                for ( int i=0; i < attribute_count; ++i )
                {
                    xparse::AttributePtr a = source->get_attribute( i );
                    if ( a )
                    {
                        if ( a->name() == "name" )
                        {
                            node.setNodeNameValue( a->value() );
                        }
                        if ( a->name() == "name" ) { node.setXsMetaName( a->value() ); }
                        if ( a->name() == "type" ) { node.setXsMetaType( a->value() ); }
                        if ( a->name() == "value" ) { node.setXsMetaValue( a->value() ); }
                        if ( a->name() == "ref" ) { node.setXsMetaRef( a->value() ); }
                        if ( a->name() == "minOccurs" ) { node.setXsMetaMinOccurs( a->value() ); }
                        if ( a->name() == "base" ) { node.setXsMetaBase( a->value() ); }
                        if ( a->name() == "maxOccurs" ) { node.setXsMetaMaxOccurs( a->value() ); }
                        if ( a->name() == "use" ) { node.setXsMetaUse( a->value() ); }
                        if ( a->name() == "default" ) { node.setXsMetaDefault( a->value() ); }
                        if ( a->name() == "memberTypes" ) { node.setXsMetaMemberTypes( a->value() ); }
                        if ( a->name() == "block" ) { node.setXsMetaBlock( a->value() ); }
                        if ( a->name() == "final" ) { node.setXsMetaFinal( a->value() ); }
                        if ( a->name() == "namespace" ) { node.setXsMetaNamespace( a->value() ); }
                        if ( a->name() == "schemaLocation" ) { node.setXsMetaSchemaLocation( a->value() ); }
                        if ( a->name() == "attributeFormDefault" ) { node.setXsMetaAttributeFormDefault( a->value() ); }
                        if ( a->name() == "elementFormDefault" ) { node.setXsMetaElementFormDefault( a->value() ); }
                        if ( a->name() == "fixed" ) { node.setXsMetaFixed( a->value() ); }
                        if ( a->name() == "xmlns:xlink" ) { node.setXsMetaXmlnsxlink( a->value() ); }
                        if ( a->name() == "xmlns:xs" ) { node.setXsMetaXmlnsxs( a->value() ); }
                    }
                }
            }
            else
            {
                attribute_count = 0;
            }
        }
        return node;
    }
    
    XsNode XsNode::create( xparse::AttributePtr source )
    {
        XsNode node(-1, -1, "", XsNodeType::XsMetadata);
        if ( source )
        {
            node.setXsTag( "XsMetadata" );
            node.setNodeNameValue( source->name() );
            node.setValue( source->value() );
            node.setID( source->getID() );
            if( source->getParentElement() != nullptr )
            {
                node.setParentID( source->getParentElement()->getIndex() );
            }
            
        }
        return node;
    }
    
    void XsNode::createRecursivelyFromElement( const xparse::ElementPtr& e, std::vector<XsdClasses::XsNode>& nodes )
    {
        if( e )
        {
            nodes.push_back( XsdClasses::XsNode::create( e ) );
            
            if ( e->has_attributes() )
            {
                for ( int i = 0; i < e->count_attributes(); ++i )
                {
                    xparse::AttributePtr a = e->get_attribute( i );
                    if( a )
                    {
                        nodes.push_back( XsdClasses::XsNode::create( a ) );
                    }
                }
            }
            
            if ( e->has_children() )
            {
                for ( int i = 0; i < e->count_children(); ++i )
                {
                    XsNode::createRecursivelyFromElement( e->get_child( i ), nodes );
                }
            }
        }
    }
    
    std::string XsNode::headerRow( char delimiter, char stringQualifier, bool showSqlDbTypes )
    {
        char d = delimiter;
        char q = stringQualifier;
        bool isFirst = true;
        std::string e = "";
        
        std::stringstream s;
        delimit( "ID", s, d, q, "int primary key", isFirst, showSqlDbTypes );
        delimit( "ParentID", s, d, q, "int", ! isFirst, showSqlDbTypes );
        delimit( "XsType", s, d, q, "varchar(50)", ! isFirst, showSqlDbTypes );
        delimit( "XsTag", s, d, q, "varchar(50)", ! isFirst, showSqlDbTypes );
        delimit( "Name", s, d, q, "varchar(50)", ! isFirst, showSqlDbTypes );
        delimit( "IsTop", s, d, q, "varchar(50)", ! isFirst, showSqlDbTypes );
        delimit( "Value", s, d, q, "varchar(50)", ! isFirst, showSqlDbTypes );
        delimit( "XsMetaName", s, d, q, "varchar(50)", ! isFirst, showSqlDbTypes );
        delimit( "XsMetaType", s, d, q, "varchar(50)", ! isFirst, showSqlDbTypes );
        delimit( "XsMetaValue", s, d, q, "varchar(50)", ! isFirst, showSqlDbTypes );
        delimit( "XsMetaRef", s, d, q, "varchar(50)", ! isFirst, showSqlDbTypes );
        delimit( "XsMetaMinOccurs", s, d, q, "varchar(50)", ! isFirst, showSqlDbTypes );
        delimit( "XsMetaBase", s, d, q, "varchar(50)", ! isFirst, showSqlDbTypes );
        delimit( "XsMetaMaxOccurs", s, d, q, "varchar(50)", ! isFirst, showSqlDbTypes );
        delimit( "XsMetaUse", s, d, q, "varchar(50)", ! isFirst, showSqlDbTypes );
        delimit( "XsMetaDefault", s, d, q, "varchar(50)", ! isFirst, showSqlDbTypes );
        delimit( "XsMetaMemberTypes", s, d, q, "varchar(50)", ! isFirst, showSqlDbTypes );
        delimit( "XsMetaBlock", s, d, q, "varchar(50)", ! isFirst, showSqlDbTypes );
        delimit( "XsMetaFinal", s, d, q, "varchar(50)", ! isFirst, showSqlDbTypes );
        delimit( "XsMetaNamespace", s, d, q, "varchar(50)", ! isFirst, showSqlDbTypes );
        delimit( "XsMetaSchemaLocation", s, d, q, "varchar(50)", ! isFirst, showSqlDbTypes );
        delimit( "XsMetaAttributeFormDefault", s, d, q, "varchar(50)", ! isFirst, showSqlDbTypes );
        delimit( "XsMetaElementFormDefault", s, d, q, "varchar(50)", ! isFirst, showSqlDbTypes );
        delimit( "XsMetaFixed", s, d, q, "varchar(50)", ! isFirst, showSqlDbTypes );
        delimit( "XsMetaXmlnsxlink", s, d, q, "varchar(50)", ! isFirst, showSqlDbTypes );
        delimit( "XsMetaXmlnsxs", s, d, q, "varchar(50)", ! isFirst, showSqlDbTypes );
        delimit( "Documentation", s, d, q, "text", ! isFirst, showSqlDbTypes );
        return s.str();

    }
    void XsNode::createDatabaseTable( XsNodeCollection& nodes, const std::string& tableName )
    {
        std::stringstream s;
        s << "drop table if exists "<< tableName <<"; ";
        
        mysqlpp::ConnectionValues cv = constants::getSqlConnectionValues( "matthfc8_musicxml" );
        mysqlpp::ExecuteNonQuery( cv, s.str() );
        
        s.str("");
        
        s << "create table "<< tableName <<" ( " << XsNode::headerRow( ',', '`', true ) << ");" << std::endl;

        int x = 1;
        
        if (mysqlpp::ExecuteNonQuery( cv, s.str() ))
        {
            for ( XsNode node: nodes )
            {
                
                XsNode::insertRow( node, tableName );
                if ( x%100 == 0 )
                {
                    std::cout << x << " rows inserted" << std::endl;
                }
                ++x;
            }
        }
    }
    std::string XsNode::toString( char delimiter, char stringQualifier, bool showSqlDbTypes ) const
    {
        // shorthand
        char d = delimiter;
        char q = stringQualifier;
        bool isFirst = true;
        std::string e = "";
        
        std::stringstream s;
        delimit( getID(), s, d, q, e, isFirst, showSqlDbTypes );
        delimit( getParentID(), s, d, q, e, ! isFirst, showSqlDbTypes );
        delimit( getXsNodeTypeString(), s, d, q, e, ! isFirst, showSqlDbTypes );
        delimit( getXsTag(), s, d, q, e, ! isFirst, showSqlDbTypes );
        delimit( getNodeNameValue(), s, d, q, e, ! isFirst, showSqlDbTypes );
        delimit( isTopLevel(), s, d, q, e, ! isFirst, showSqlDbTypes );
        delimit( getValue(), s, d, q, e, ! isFirst, showSqlDbTypes );
        delimit( getXsMetaName(), s, d, q, e, ! isFirst, showSqlDbTypes );
        delimit( getXsMetaType(), s, d, q, e, ! isFirst, showSqlDbTypes );
        delimit( getXsMetaValue(), s, d, q, e, ! isFirst, showSqlDbTypes );
        delimit( getXsMetaRef(), s, d, q, e, ! isFirst, showSqlDbTypes );
        delimit( getXsMetaMinOccurs(), s, d, q, e, ! isFirst, showSqlDbTypes );
        delimit( getXsMetaBase(), s, d, q, e, ! isFirst, showSqlDbTypes );
        delimit( getXsMetaMaxOccurs(), s, d, q, e, ! isFirst, showSqlDbTypes );
        delimit( getXsMetaUse(), s, d, q, e, ! isFirst, showSqlDbTypes );
        delimit( getXsMetaDefault(), s, d, q, e, ! isFirst, showSqlDbTypes );
        delimit( getXsMetaMemberTypes(), s, d, q, e, ! isFirst, showSqlDbTypes );
        delimit( getXsMetaBlock(), s, d, q, e, ! isFirst, showSqlDbTypes );
        delimit( getXsMetaFinal(), s, d, q, e, ! isFirst, showSqlDbTypes );
        delimit( getXsMetaNamespace(), s, d, q, e, ! isFirst, showSqlDbTypes );
        delimit( getXsMetaSchemaLocation(), s, d, q, e, ! isFirst, showSqlDbTypes );
        delimit( getXsMetaAttributeFormDefault(), s, d, q, e, ! isFirst, showSqlDbTypes );
        delimit( getXsMetaElementFormDefault(), s, d, q, e, ! isFirst, showSqlDbTypes );
        delimit( getXsMetaFixed(), s, d, q, e, ! isFirst, showSqlDbTypes );
        delimit( getXsMetaXmlnsxlink(), s, d, q, e, ! isFirst, showSqlDbTypes );
        delimit( getXsMetaXmlnsxs(), s, d, q, e, ! isFirst, showSqlDbTypes );
        delimit( getDocumentation(), s, d, q, "", ! isFirst, showSqlDbTypes );
        return s.str();
    }
    
    std::ostream& XsNode::delimit(const std::string &value, std::ostream &os, char d, char q, const std::string& sqlDbType, bool isFirst, bool showDbTypes )
    {
        if ( ! isFirst )
        {
            os << d;
        }
        if ( q != 0 )
        {
            os << q;
        }
        os << value;
        if ( q != 0 )
        {
            os << q;
        }
        if ( showDbTypes )
        {
            os << " " << sqlDbType;
        }
        return os;
    }
    std::ostream& XsNode::delimit( const int value, std::ostream &os, char d, char q, const std::string& sqlDbType, bool isFirst, bool showDbTypes )
    {
        std::stringstream t;
        t << value;
        return delimit( t.str(), os, d, 0, sqlDbType, isFirst, showDbTypes );
    }
    std::ostream& XsNode::delimit( const bool value, std::ostream &os, char d, char q, const std::string& sqlDbType, bool isFirst, bool showDbTypes )
    {
        std::stringstream t;
        t << std::boolalpha << value;
        return delimit( t.str(), os, d, q, sqlDbType, isFirst, showDbTypes );
    }
    std::ostream& XsNode::delimit( const char* value, std::ostream &os, char d, char q, const std::string& sqlDbType, bool isFirst, bool showDbTypes )
    {
        return delimit( std::string( value ), os, d, q, sqlDbType, isFirst, showDbTypes );
    }
    
    std::string XsNode::getXsNodeTypeString() const
    {
        if ( getXsNodeType() == XsNodeType::XsElement )
        {
            return "XsElement";
        }
        else
        {
            return "XsMetadata";
        }
    }
    
    bool XsNode::insertRow(const XsdClasses::XsNode &node, const std::string& tableName )
    {
        std::stringstream sql;
        sql << "insert into " << tableName << " (" << XsNode::headerRow( ',', '`', false ) << ") ";
        sql << "values ( " << node.toString( ',', '\'', false ) << " );" << std::endl;
        mysqlpp::ConnectionValues cv( constants::getSqlConnectionValues( "matthfc8_musicxml" ) );
        return mysqlpp::ExecuteNonQuery( cv, sql.str() );
    }
    
    std::string XsNode::getXsMetaName() const { return myXsMetaName; }
    std::string XsNode::getXsMetaType() const { return myXsMetaType; }
    std::string XsNode::getXsMetaValue() const { return myXsMetaValue; }
    std::string XsNode::getXsMetaRef() const { return myXsMetaRef; }
    std::string XsNode::getXsMetaMinOccurs() const { return myXsMetaMinOccurs; }
    std::string XsNode::getXsMetaBase() const { return myXsMetaBase; }
    std::string XsNode::getXsMetaMaxOccurs() const { return myXsMetaMaxOccurs; }
    std::string XsNode::getXsMetaUse() const { return myXsMetaUse; }
    std::string XsNode::getXsMetaDefault() const { return myXsMetaDefault; }
    std::string XsNode::getXsMetaMemberTypes() const { return myXsMetaMemberTypes; }
    std::string XsNode::getXsMetaBlock() const { return myXsMetaBlock; }
    std::string XsNode::getXsMetaFinal() const { return myXsMetaFinal; }
    std::string XsNode::getXsMetaNamespace() const { return myXsMetaNamespace; }
    std::string XsNode::getXsMetaSchemaLocation() const { return myXsMetaSchemaLocation; }
    std::string XsNode::getXsMetaAttributeFormDefault() const { return myXsMetaAttributeFormDefault; }
    std::string XsNode::getXsMetaElementFormDefault() const { return myXsMetaElementFormDefault; }
    std::string XsNode::getXsMetaFixed() const { return myXsMetaFixed; }
    std::string XsNode::getXsMetaXmlnsxlink() const { return myXsMetaXmlnsxlink; }
    std::string XsNode::getXsMetaXmlnsxs() const { return myXsMetaXmlnsxs; }
    
    void XsNode::setXsMetaName( const std::string& value ) { myXsMetaName = value; }
    void XsNode::setXsMetaType( const std::string& value ) { myXsMetaType = value; }
    void XsNode::setXsMetaValue( const std::string& value ) { myXsMetaValue = value; }
    void XsNode::setXsMetaRef( const std::string& value ) { myXsMetaRef = value; }
    void XsNode::setXsMetaMinOccurs( const std::string& value ) { myXsMetaMinOccurs = value; }
    void XsNode::setXsMetaBase( const std::string& value ) { myXsMetaBase = value; }
    void XsNode::setXsMetaMaxOccurs( const std::string& value ) { myXsMetaMaxOccurs = value; }
    void XsNode::setXsMetaUse( const std::string& value ) { myXsMetaUse = value; }
    void XsNode::setXsMetaDefault( const std::string& value ) { myXsMetaDefault = value; }
    void XsNode::setXsMetaMemberTypes( const std::string& value ) { myXsMetaMemberTypes = value; }
    void XsNode::setXsMetaBlock( const std::string& value ) { myXsMetaBlock = value; }
    void XsNode::setXsMetaFinal( const std::string& value ) { myXsMetaFinal = value; }
    void XsNode::setXsMetaNamespace( const std::string& value ) { myXsMetaNamespace = value; }
    void XsNode::setXsMetaSchemaLocation( const std::string& value ) { myXsMetaSchemaLocation = value; }
    void XsNode::setXsMetaAttributeFormDefault( const std::string& value ) { myXsMetaAttributeFormDefault = value; }
    void XsNode::setXsMetaElementFormDefault( const std::string& value ) { myXsMetaElementFormDefault = value; }
    void XsNode::setXsMetaFixed( const std::string& value ) { myXsMetaFixed = value; }
    void XsNode::setXsMetaXmlnsxlink( const std::string& value ) { myXsMetaXmlnsxlink = value; }
    void XsNode::setXsMetaXmlnsxs( const std::string& value ) { myXsMetaXmlnsxs = value; }
    
    std::vector<XsdClasses::XsNode>& XsNode::createNodesFromXsdDocument( const XsdDocument& xsd, std::vector<XsdClasses::XsNode>& nodes )
    {
        xparse::HDocument doc = xsd.getDocument();
        xparse::ElementPtr root = doc->root_element();
        nodes.clear();
        XsdClasses::XsNode::createRecursivelyFromElement( root, nodes );
        return nodes;
    }
}


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

