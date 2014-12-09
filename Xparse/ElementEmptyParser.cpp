/* See MusicXML License at the bottom of this code page. */

/* matthew james briggs */

#include "ElementEmptyParser.h"
#include "sanitizeString.h"
#include "removesymbols.h"
#include "XparseHelperFunctions.h"
#include "LexiconBaseObjects.h"
#include "ElementCategorize.h"
#include "CxEmptyParser.h"

namespace XsdClasses
{
    // std::string fetchName( const ElementPtr& e );
    
    /* ctor */
    ElementEmptyParser::ElementEmptyParser()
    :myXsd( new XsdDocument() )
    ,myElementEmptyNodes()
    {
        myElementEmptyNodes = ElementCategorize::getElementNodesOfType( ElementType::CxEmptyRef );
//        ElementPtr root = myXsd->getDocument()->root_element();
//        for ( int i = 0; i < root->count_children(); ++i )
//        {
//            ElementPtr e = root->get_child( i );
//            if ( e->name() == "xs:complexType" )
//            {
//                myElementEmptyNodes.push_back( e );
//            }
//        }
    }
    
    ElementEmptyInfos ElementEmptyParser::createElementEmptyInfos() const
    {
        ElementEmptyInfos infos;
        for ( auto e : myElementEmptyNodes )
        {
            HElementEmptyInfo info = createElementEmptyInfo( e );
            infos.push_back( info );
        }
        return infos;
    }
    
    HElementEmptyInfo ElementEmptyParser::createElementEmptyInfo( const ElementPtr& e ) const
    {
        HElementEmptyInfo info = ElementEmptyInfo::create();
        info->setID( e->getIndex() );
        info->setXmlName( ElementCategorize::getXmlName( e ) );
        info->setCppName( ElementCategorize::getCppName( e ) );
        info->setElement( e );
        info->setXsdDocument( myXsd );
        info->setReferencesComplexType( referencesComplexType( e, info ) );
        info->setDocumentation( ElementCategorize::getDocumentation( e ) );
        info->setSchemaXml( getSchemaXml( e ) );
        info->setCxType( getType( e ) );
        info->setAttributePods( getAttributePods( e ) );
        info->setCxEmptyBldr( createCxEmptyBldr( e ) );
        info->setMinOccurs( ElementCategorize::getMinOccurs( e ) );
        info->setMaxOccurs( ElementCategorize::getMaxOccurs( e ) );
        info->setIsMaxOccursUnbounded( ElementCategorize::isMaxOccursUnbounded( e ) );
        return info;
    }
    void ElementEmptyParser::retreiveAllUnderlyingAttributes( const ElementPtr& e, xparse::Attributes& attributes ) const
    {
        for ( int i=0; i < e->count_attributes(); ++i )
        {
            attributes.push_back( e->get_attribute( i ) );
        }
        for ( int i = 0; i < e->count_children(); ++i )
        {
            retreiveAllUnderlyingAttributes( e->get_child( i ), attributes );
        }
    }
    bool ElementEmptyParser::referencesComplexType( const ElementPtr& e, HElementEmptyInfo& info ) const
    {
        bool result = false;
        xparse::Attributes attributes;
        retreiveAllUnderlyingAttributes( e, attributes );
        StringSet foundTypeNames;
        for ( AttributePtr a : attributes )
        {
            if ( a->name() == "type" )
            {
                foundTypeNames.insert( a->value() );
            }
            else if ( a->name() == "base" )
            {
                foundTypeNames.insert( a->value() );
            }
            else if ( a->name() == "ref" )
            {
                foundTypeNames.insert( a->value() );
            }
        }
        for ( auto i = foundTypeNames.begin(); i != foundTypeNames.end(); )
        {
            if ( *i == e->get_attribute( 0 )->value() )
            {
                i = foundTypeNames.erase( i ); // more modern, typically accepted as C++03
            }
            else
            {
                ++ i; // do not include ++ i inside for ( )
            }
        }
        for ( auto s : foundTypeNames )
        {
            for ( auto e : myElementEmptyNodes )
            {
                if ( e->get_attribute( 0 )->value() == s )
                {
                    info->addReferencedComplexType( createElementEmptyInfo( e ) );
                    result = true;
                }
            }
        }
        return result;
    }
//    void ElementEmptyParser::getDocumentation( const ElementPtr& e, std::stringstream& documentation ) const
//    {
//        std::string temp;
//        if ( e->name() == "xs:complexType" )
//        {
//            if ( e->has_children() )
//            {
//                if ( e->get_child( 0 )->name() == "xs:annotation" )
//                {
//                    if ( e->get_child( 0 )->has_children() )
//                    {
//                        if ( e->get_child( 0 )->get_child( 0 )->name() == "xs:documentation" )
//                        {
//                            if ( e->get_child( 0 )->get_child( 0 )->has_text() )
//                            {
//                                temp = e->get_child( 0 )->get_child( 0 )->text();
//                                temp = sanitizeString( e->get_child( 0 )->get_child( 0 )->text() );
//                                documentation << temp;
//                            }
//                        }
//                    }
//                }
//            }
//        }
//    }
//    std::string ElementEmptyParser::getSimpleContentXmlDataType( const ElementPtr& e ) const
//    {
//        std::string output;
//        if ( e.get() != nullptr )
//        {
//            if ( e->count_children() >= 2 )
//            {
//                ElementPtr simpleContent = e->get_child( 1 );
//                if ( simpleContent )
//                {
//                    if ( simpleContent->name() == "xs:simpleContent" )
//                    {
//                        if ( simpleContent->count_children() >= 1 )
//                        {
//                            ElementPtr extension = simpleContent->get_child( 0 );
//                            if ( extension )
//                            {
//                                if ( extension->name() == "xs:extension" )
//                                {
//                                    if ( extension->count_attributes() >= 1 )
//                                    {
//                                        AttributePtr base = extension->get_attribute( 0 );
//                                        if ( base->name() == "base" )
//                                        {
//                                            output = base->value();
//                                        }
//                                    }
//                                }
//                            }
//                        }
//                    }
//                }
//            }
//        }
//        return output;
//    } // getSimpleContentXmlDataType
    
//    std::string ElementEmptyParser::getSimpleContentCppDataType( const ElementPtr& e ) const
//    {
//        using namespace lexicon;
//        XparseHelperFunctions helper;
//        ObjectList objects = helper.loadSimpleTypes();
//        std::string xmltypename = getSimpleContentXmlDataType( e );
//        for ( auto o : objects )
//        {
//            if ( o->getXmlTypeName() == xmltypename )
//            {
//                return o->getClassName();
//            }
//        }
//        return "";
//    }
    
//    std::string ElementEmptyParser::getDocumentation( const ElementPtr& e ) const
//    {
//        std::stringstream output;
//        getDocumentation( e, output );
//        return output.str();
//    }
    std::string ElementEmptyParser::getSchemaXml( const ElementPtr& e ) const
    {
        std::stringstream output;
        e->stream( output, 0 );
        return output.str();
    }
    CxType ElementEmptyParser::getType( const ElementPtr& e ) const
    {
        return CxCategorize::getType( e );
    }
    
    ElementEmptyInfo::AttributePods ElementEmptyParser::getAttributePods( const ElementPtr& input ) const
    {
        ElementPtr e = ElementCategorize::getReferencedNode( input );
        ElementEmptyInfo::AttributePods output;
        if ( e.get() != nullptr )
        {
            if ( e->name() == "xs:complexType" )
            {
                for ( int i = 0; i < e->count_children(); ++i )
                {
                    ElementPtr x = e->get_child( i );
                    if ( x.get() != nullptr )
                    {
                        if ( x->name() == "xs:attribute" )
                        {
                            if ( x->count_attributes() > 0 )
                            {
                                ElementEmptyInfo::AttributePod pod;
                                pod.type = ElementEmptyInfo::PodType::attribute;
                                AttributeInfoV2 info;
                                info.set( x );
                                pod.attribute = info;
                                output.push_back( pod );
                                if ( pod.attribute.getAttributeXmlType() == "unknown" )
                                {
                                    throw "problem";
                                }
                            }
                        }
                        else if ( x->name() == "xs:attributeGroup" )
                        {
                            AttGrpBldrs myAttGrpBldrs = createAttGrpBldrs();
                            ElementEmptyInfo::AttributePod pod;
                            pod.type = ElementEmptyInfo::PodType::attributeGroup;
                            HAttGrpBldr myAttGrpBldr;
                            for ( HAttGrpBldr h : myAttGrpBldrs )
                            {
                                if ( h->getInfo()->getName() == x->get_attribute( 0 )->value() )
                                {
                                    myAttGrpBldr = h;
                                    break;
                                }
                            }
                            pod.attributeGroup = myAttGrpBldr;
                            output.push_back( pod );
                        }
                    }
                }
            }
        }
        return output;
    }
    HCxEmptyBldr ElementEmptyParser::createCxEmptyBldr(const ElementPtr& e) const
    {
        ElementPtr input;
        HCxEmptyBldr output;
        if ( ElementCategorize::isElement( e ) )
        {
            input = ElementCategorize::getReferencedNode( e );
        }
        else if ( CxCategorize::isComplexType( e ) )
        {
            input = e;
        }
        CxEmptyParser parser;
        HCxEmptyInfo info = parser.createCxEmptyInfo( input );
        output = std::make_shared<CxEmptyBldr>( info );
        return output;
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

