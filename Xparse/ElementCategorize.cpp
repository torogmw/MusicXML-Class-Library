/* See MusicXML License at the bottom of this code page. */

/* matthew james briggs */

#include "ElementCategorize.h"
#include "XsdDocument.h"
#include "CxCategorize.h"
#include "XparseHelperFunctions.h"
#include "removesymbols.h"
#include "sanitizeString.h"

namespace XsdClasses
{
    using namespace xparse;
    
    Elements ElementCategorize::ourElementNodes;
    xparse::Elements ElementCategorize::getElementNodes()
    {
        init();
        return ourElementNodes;
    }
    xparse::Elements ElementCategorize::getElementNodesOfType( ElementType type )
    {
        init();
        xparse::Elements output;
        for ( auto e : ourElementNodes )
        {
            if ( getType( e ) == type )
            {
                output.push_back( e );
            }
        }
        return output;
    }
    bool ElementCategorize::isElement( const xparse::ElementPtr& e )
    {
        if ( e )
        {
            return e->name() == "xs:element";
        }
        return false;
    }
    bool ElementCategorize::isTop( const xparse::ElementPtr& e )
    {
        if ( e )
        {
            if ( isElement( e ) )
            {
                Element* ptr = e->getParent();
                if ( ptr != nullptr )
                {
                    return ptr->getIndex() == 0;
                }
            }
        }
        return false;
    }
    
    ElementType ElementCategorize::getType( const xparse::ElementPtr& e )
    {
        ElementType type = ElementType::UnknownRef;
        if ( e )
        {
            if ( isElement( e ) )
            {
                ElementPtr complexType = CxCategorize::getComplexTypeNodeByName( ElementCategorize::getReferencedTypeString( e ) );
                if ( complexType )
                {
                    if ( complexType )
                    {
                        if ( CxCategorize::getType( complexType ) == CxType::simpleContentOnly )
                        {
                            return ElementType::CxSmpRef;
                        }
                        else if ( CxCategorize::getType( complexType ) == CxType::empty )
                        {
                            return ElementType::CxEmptyRef;
                        }
                        else if ( CxCategorize::getName( complexType ) == "directive" )
                        {
                            return ElementType::CxEmptyRef;
                        }
                        else
                        {
                            return ElementType::CxOther;
                        }
                    }
                }
                else if ( getReferencedTypeString( e ).substr( 0, 3 ) == "xs:" || getReferencedTypeString( e ).substr( 0, 3 ) == "xml" )
                {
                    return ElementType::XsTypeRef;
                }
                else if ( isMxSimpleType( getReferencedTypeString( e ) ) )
                {
                    return ElementType::MxSimpleTypeRef;
                }
            }
        }
        return type;
    }
    
    bool ElementCategorize::isMxSimpleType(const std::string& str )
    {
        lexicon::XparseHelperFunctions xh;
        for( auto obj : xh.loadSimpleTypes() )
        {
            if ( obj->getXmlTypeName() == str )
            {
                return true;
            }
        }
        return false;
    }
    
    void ElementCategorize::findElementNodes( const xparse::ElementPtr& root, xparse::Elements& output )
    {
        for ( int i = 0; i < root->count_children(); ++i )
        {
            ElementPtr e = root->get_child( i );
            if ( ElementCategorize::isElement( e ) )
            {
                output.push_back( e );
            }
            for ( int k = 0; k < e->count_children(); ++k )
            {
                ElementPtr child = e->get_child( k );
                ElementCategorize::findElementNodes( child, output );
            }
        }
    }
    
    void ElementCategorize::init()
    {
        if( ourElementNodes.size() == 0 )
        {
            XsdDocument doc;
            ElementPtr root = doc.getDocument()->root_element();
            findElementNodes( root, ourElementNodes );
        }
    }
    
    bool ElementCategorize::hasDocumentation( const xparse::ElementPtr& e )
    {
        ElementPtr throwawaytemp;
        return ElementCategorize::searchForXsTag( "xs:documentation", e, throwawaytemp );
    }
    std::string ElementCategorize::getDocumentation( const xparse::ElementPtr& e )
    {
        std::string documentation = "( no documentation )";
        if ( e )
        {
            ElementPtr docTag;
            if ( ElementCategorize::searchForXsTag( "xs:documentation", e, docTag ) )
            {
                documentation = sanitizeString( docTag->text() );
            }
        }
        return documentation;
    }
    std::string ElementCategorize::getReferencedTypeString( const xparse::ElementPtr& e )
    {
        std::string output = "not found";
        if ( e )
        {
            if ( isElement( e ) )
            {
                if ( e->has_attributes() )
                {
                    for ( int i = 0; i < e->count_attributes(); ++i )
                    {
                        AttributePtr current = e->get_attribute( i );
                        if ( current->name() == "name" && current->value() == "directive" && e->getIndex() == 2667 )
                        {
                            output = "directive";
                        }
                        else if ( current->name() == "type" )
                        {
                            output = current->value();
                        }
                    }
                }
            }
        }
        return output;
    }
    int ElementCategorize::getReferencedTypeID( const xparse::ElementPtr& e )
    {
        int ID = -1;
        ElementPtr ref = ElementCategorize::getReferencedNode( e );
        if ( ref )
        {
            ID = ref->getIndex();
        }
        return ID;
    }
    lexicon::HMxObject ElementCategorize::getReferencedTypeObject( const xparse::ElementPtr& e )
    {
        throw "not implemented";
    }
    bool ElementCategorize::isMinOccursSpecified( const xparse::ElementPtr& e )
    {
        throw "not implemented";
    }
    bool ElementCategorize::isMaxOccursSpecified( const xparse::ElementPtr& e )
    {
        throw "not implemented";
    }
    bool ElementCategorize::isMaxOccursUnbounded( const xparse::ElementPtr& e )
    {
        bool output = false;
        if ( e )
        {
            if ( isElement( e ) )
            {
                for ( int i = 0; i < e->count_attributes(); ++i )
                {
                    AttributePtr a = e->get_attribute( i );
                    if ( a -> name() == "maxOccurs" )
                    {
                        if ( a -> value() == "unbounded" )
                        {
                            return true;
                        }
                    }
                }
            }
        }
        return output;
    }
    int ElementCategorize::getMinOccurs( const xparse::ElementPtr& e )
    {
        int output = 1;
        if ( e )
        {
            if ( isElement( e ) )
            {
                for ( int i = 0; i < e->count_attributes(); ++i )
                {
                    AttributePtr a = e->get_attribute( i );
                    if ( a -> name() == "minOccurs" )
                    {
                        std::stringstream ss( a -> value() );
                        ss >> output;
                    }
                }
            }
        }
        return output;
    }
    int ElementCategorize::getMaxOccurs( const xparse::ElementPtr& e )
    {
        int output = 1;
        if ( e )
        {
            if ( isElement( e ) )
            {
                for ( int i = 0; i < e->count_attributes(); ++i )
                {
                    AttributePtr a = e->get_attribute( i );
                    if ( a -> name() == "maxOccurs" )
                    {
                        if ( a -> value() == "unbounded" )
                        {
                            return 32767;
                        }
                        std::stringstream ss( a -> value() );
                        ss >> output;
                    }
                }
            }
        }
        return output;
    }
    bool ElementCategorize::hasInternalComplexTypeSpecification( const xparse::ElementPtr& e )
    {
        // e.g. (<xs:element name="directive")
        throw "not implemented";
    }
    std::string ElementCategorize::getXmlName( const xparse::ElementPtr& e )
    {
        std::string output = "not found";
        if ( e )
        {
            if ( isElement( e ) )
            {
                if ( e->has_attributes() )
                {
                    for ( int i = 0; i < e->count_attributes(); ++i )
                    {
                        AttributePtr current = e->get_attribute( i );
                        if ( current->name() == "name" )
                        {
                            output = current->value();
                            return output;
                        }
                    }
                }
            }
        }
        return output;
    }
    std::string ElementCategorize::getCppName( const xparse::ElementPtr& e )
    {
        std::string output;
        output = removesymbols( ElementCategorize::getXmlName( e ), true );
        return output;
    }
    
    bool ElementCategorize::searchForXsTag( const std::string& XsTagToSearchFor
                               , const xparse::ElementPtr& ElementToSearchInsideOf
                               , xparse::ElementPtr& OutputElementFound )
    {
        if ( ElementToSearchInsideOf )
        {
            if ( ElementToSearchInsideOf->name() == XsTagToSearchFor )
            {
                OutputElementFound = ElementToSearchInsideOf;
                return true;
            }
            else
            {
                for ( int i = 0; i < ElementToSearchInsideOf->count_children(); ++i )
                {
                    ElementPtr child = ElementToSearchInsideOf->get_child( i );
                    searchForXsTag(XsTagToSearchFor, child, OutputElementFound );
                }
            }
            if ( ! OutputElementFound )
            {
                return false;
            }
            return OutputElementFound->name() == XsTagToSearchFor;
        }
        return false;
    }
    
    xparse::ElementPtr ElementCategorize::getReferencedNode( const xparse::ElementPtr& e )
    {
        ElementPtr output;
        std::string referencedTypeName = ElementCategorize::getReferencedTypeString( e );
        output = CxCategorize::getComplexTypeNodeByName( referencedTypeName );
        return output;
    }
    std::string ElementCategorize::getSimpleContentXmlDataType( const xparse::ElementPtr& e )
    {
        
        if ( e )
        {
            if( ElementCategorize::getType( e ) == ElementType::CxSmpRef )
            {
                ElementPtr simpleContentNode;
                ElementPtr extensionNode;
                for ( int i = 0; i < e->count_children(); ++i )
                {
                    
                    if ( e->get_child( i )->name() == "xs:simpleContent" )
                    {
                        simpleContentNode = e->get_child( i );
                        break;
                    }
                }
                if ( simpleContentNode )
                {
                    ElementPtr extension;
                    for ( int j = 0; j < simpleContentNode->count_children(); ++j )
                    {
                        if ( simpleContentNode->get_child( j )->name() == "xs:extension" )
                        {
                            extension = simpleContentNode->get_child( j );
                            break;
                        }
                    }
                    if ( extension )
                    {
                        for ( int k = 0; k < extensionNode->count_attributes(); ++k )
                        {
                            AttributePtr a = extensionNode->get_attribute( k );
                            if ( a->name() == "base" )
                            {
                                return a->value();
                            }
                        }
                    }
                }
            }
            else if ( ElementCategorize::getType( e ) == ElementType::MxSimpleTypeRef || ElementCategorize::getType( e ) == ElementType::XsTypeRef )
            {
                for ( int q = 0; q < e->count_attributes(); ++q )
                {
                    AttributePtr a = e->get_attribute( q );
                    if ( a->name() == "type" )
                    {
                        return a->value();
                    }
                }
            }
            
            
        }
        throw "blow";
        return "not found";
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

