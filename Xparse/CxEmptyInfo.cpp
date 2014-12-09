/* See MusicXML License at the bottom of this code page. */

/* matthew james briggs */

#include "CxEmptyInfo.h"

namespace XsdClasses
{
    /* ctor */
    CxEmptyInfo::CxEmptyInfo()
    :myID( -1 )
    ,myXmlName( "" )
    {
        
    }
    
    HCxEmptyInfo CxEmptyInfo::create()
    {
        return std::make_shared<CxEmptyInfo>();
    }
    
    /* MEMBER GET SET */
    int CxEmptyInfo::getID() const
    {
        return myID;
    }
    void CxEmptyInfo::setID( int value )
    {
        myID = value;
    }
    std::string CxEmptyInfo::getXmlName() const
    {
        return myXmlName;
    }
    void CxEmptyInfo::setXmlName( const std::string& value )
    {
        myXmlName = value;
    }
    std::string CxEmptyInfo::getCppName() const
    {
        return myCppName;
    }
    void CxEmptyInfo::setCppName( const std::string& value )
    {
        myCppName = value;
    }
    bool CxEmptyInfo::getReferencesComplexType() const
    {
        return myReferencesCmplxType;
    }
    void CxEmptyInfo::setReferencesComplexType( bool value )
    {
        myReferencesCmplxType = value;
    }
    CxEmptyInfos CxEmptyInfo::getReferencedComplexTypes() const
    {
        return myReferencedComplexTypes;
    }
    void CxEmptyInfo::addReferencedComplexType( const HCxEmptyInfo& info )
    {
        for ( auto i : myReferencedComplexTypes )
        {
            if ( i->getID() == info->getID() )
            {
                // don't add if already exists
                return;
            }
        }
        myReferencedComplexTypes.push_back( info );
    }
    std::string CxEmptyInfo::getDocumentation() const
    {
        return myDocumentation;
    }
    void CxEmptyInfo::setDocumentation( const std::string& value )
    {
        myDocumentation = value;
    }
    std::string CxEmptyInfo::getSchemaXml() const
    {
        return mySchemaXml;
    }
    void CxEmptyInfo::setSchemaXml( const std::string& value )
    {
        mySchemaXml = value;
    }
//    std::string CxEmptyInfo::getSimpleContentXmlDataType() const
//    {
//        return mySimpleContentXmlDataType;
//    }
//    void CxEmptyInfo::setSimpleContentXmlDataType( const std::string& value )
//    {
//        mySimpleContentXmlDataType = value;
//    }
//    std::string CxEmptyInfo::getSimpleContentCppDataType() const
//    {
//        return mySimpleContentCppDataType;
//    }
//    void CxEmptyInfo::setSimpleContentCppDataType( const std::string& value )
//    {
//        mySimpleContentCppDataType = value;
//    }
    CxType CxEmptyInfo::getCxType() const
    {
        return myCxType;
    }
    CxEmptyInfo::AttributePods CxEmptyInfo::getAttributePods() const
    {
        return myAttributePods;
    }
    void CxEmptyInfo::setAttributePods( const AttributePods& value )
    {
        myAttributePods = value;
        XsdClasses::Attributes attributes;
        for ( auto apod : myAttributePods )
        {
            if ( apod.type == PodType::attribute )
            {
                attributes.push_back( apod.attribute );
            }
            if ( apod.type == PodType::attributeGroup )
            {
                for ( auto a : apod.attributeGroup->getInfo()->getAttributesAndChildAttributes() )
                {
                    AttributeInfoV2 temp = a;
                    temp.setParentAttGrpBldr( apod.attributeGroup );
                    attributes.push_back( temp );
                }
            }
        }
        myAttributesAndChildAttributes = attributes;
    }
    XsdClasses::Attributes CxEmptyInfo::getAttributesAndChildAttributes() const
    {
        return myAttributesAndChildAttributes;
    }
    
    void CxEmptyInfo::setCxType( const CxType value )
    {
        myCxType = value;
    }
    ElementPtr CxEmptyInfo::getElement() const
    {
        return myElement;
    }
    void CxEmptyInfo::setElement( const ElementPtr& value )
    {
        myElement = value;
    }
    HXsdDocument CxEmptyInfo::getXsdDocument() const
    {
        return myXsd;
    }
    void CxEmptyInfo::setXsdDocument( const HXsdDocument value )
    {
        myXsd = value;
    }
    
    
    FunctionCollection CxEmptyInfo::getAttributeGetValueFunctions() const
    {
        FunctionCollection funcs;
        for ( auto a : getAttributesAndChildAttributes() )
        {
            funcs.push_back( a.getFuncGetValue( -1 ) );
        }
        return funcs;
    }

    FunctionCollection CxEmptyInfo::getAttributeSetValueFunctions() const
    {
        FunctionCollection funcs;
        for ( auto a : getAttributesAndChildAttributes() )
        {
            if ( ! a.getIsFixed() )
            {
                funcs.push_back( a.getFuncSetValue( -1 ) );
            }
        }
        return funcs;
    }
    
    
    FunctionCollection CxEmptyInfo::getAttributeGetIsRequiredFunctions() const
    {
        FunctionCollection funcs;
        for ( auto a : getAttributesAndChildAttributes() )
        {
            funcs.push_back( a.getFuncGetIsRequired( -1 ) );
        }
        return funcs;
    }
    
    FunctionCollection CxEmptyInfo::getAttributeGetIsPresentFunctions() const
    {
        FunctionCollection funcs;
        for ( auto a : getAttributesAndChildAttributes() )
        {
            funcs.push_back( a.getFuncGetIsPresent( -1 ) );
        }
        return funcs;
    }
    
    FunctionCollection CxEmptyInfo::getAttributeSetIsPresentFunctions() const
    {
        FunctionCollection funcs;
        for ( auto a : getAttributesAndChildAttributes() )
        {
            if ( ! a.getIsRequired() )
            {
                Function func = a.getFuncSetIsPresent( -1 );
                funcs.push_back( func );
            }
        }
        return funcs;
    }
    
    FunctionCollection CxEmptyInfo::getAttributeHasDefaultFunctions() const
    {
        FunctionCollection funcs;
        for ( auto a : getAttributesAndChildAttributes() )
        {
            funcs.push_back( a.getFuncGetHasDefault( -1 ) );
        }
        return funcs;
    }
    
    FunctionCollection CxEmptyInfo::getAttributeGetDefaultValueFunctions() const
    {
        FunctionCollection funcs;
        for ( auto a : getAttributesAndChildAttributes() )
        {
            funcs.push_back( a.getFuncGetDefaultValue( -1 ) );
        }
        return funcs;
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

