/* See MusicXML License at the bottom of this code page. */

/* matthew james briggs */

#include "ElementStaticParser.h"
#include "XsdDocument.h"
#include "CxCategorize.h"
#include "XparseHelperFunctions.h"
#include "removesymbols.h"
#include "sanitizeString.h"

namespace XsdClasses
{
    using namespace xparse;
    
    Elements ElementStaticParser::ourElementNodes;
    xparse::Elements ElementStaticParser::getElementNodes()
    {
        init();
        return ourElementNodes;
    }
    xparse::Elements ElementStaticParser::getElementNodesOfType( ElementType type )
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
    bool ElementStaticParser::isElement( const xparse::ElementPtr& e )
    {
        if ( e )
        {
            return e->name() == "xs:element";
        }
        return false;
    }
    bool ElementStaticParser::isTop( const xparse::ElementPtr& e )
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
    
    ElementType ElementStaticParser::getType( const xparse::ElementPtr& e )
    {
        ElementType type = ElementType::UnknownRef;
        if ( e )
        {
            if ( isElement( e ) )
            {
                ElementPtr complexType = CxCategorize::getComplexTypeNodeByName( ElementStaticParser::getReferencedTypeString( e ) );
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
    
    bool ElementStaticParser::isMxSimpleType(const std::string& str )
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
    
    void ElementStaticParser::findElementNodes( const xparse::ElementPtr& root, xparse::Elements& output )
    {
        for ( int i = 0; i < root->count_children(); ++i )
        {
            ElementPtr e = root->get_child( i );
            if ( ElementStaticParser::isElement( e ) )
            {
                output.push_back( e );
            }
            for ( int k = 0; k < e->count_children(); ++k )
            {
                ElementPtr child = e->get_child( k );
                ElementStaticParser::findElementNodes( child, output );
            }
        }
    }
    
    void ElementStaticParser::init()
    {
        if( ourElementNodes.size() == 0 )
        {
            XsdDocument doc;
            ElementPtr root = doc.getDocument()->root_element();
            findElementNodes( root, ourElementNodes );
        }
    }
    
    bool ElementStaticParser::hasDocumentation( const xparse::ElementPtr& e )
    {
        ElementPtr throwawaytemp;
        return ElementStaticParser::searchForXsTag( "xs:documentation", e, throwawaytemp );
    }
    std::string ElementStaticParser::getDocumentation( const xparse::ElementPtr& e )
    {
        std::string documentation = "( no documentation )";
        if ( e )
        {
            ElementPtr docTag;
            if ( ElementStaticParser::searchForXsTag( "xs:documentation", e, docTag ) )
            {
                documentation = sanitizeString( docTag->text() );
            }
        }
        return documentation;
    }
    std::string ElementStaticParser::getReferencedTypeString( const xparse::ElementPtr& e )
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
                        else if ( current->name() == "ref" )
                        {
                            output = current->value();
                        }
                    }
                }
            }
        }
        return output;
    }
    int ElementStaticParser::getReferencedTypeID( const xparse::ElementPtr& e )
    {
        int ID = -1;
        ElementPtr ref = ElementStaticParser::getReferencedNode( e );
        if ( ref )
        {
            ID = ref->getIndex();
        }
        return ID;
    }
    lexicon::HMxObject ElementStaticParser::getReferencedTypeObject( const xparse::ElementPtr& e )
    {
        throw "not implemented";
    }
    bool ElementStaticParser::isMinOccursSpecified( const xparse::ElementPtr& e )
    {
        throw "not implemented";
    }
    bool ElementStaticParser::isMaxOccursSpecified( const xparse::ElementPtr& e )
    {
        throw "not implemented";
    }
    bool ElementStaticParser::isMaxOccursUnbounded( const xparse::ElementPtr& e )
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
    int ElementStaticParser::getMinOccurs( const xparse::ElementPtr& e )
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
    int ElementStaticParser::getMaxOccurs( const xparse::ElementPtr& e )
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
    bool ElementStaticParser::hasInternalComplexTypeSpecification( const xparse::ElementPtr& e )
    {
        // e.g. (<xs:element name="directive")
        throw "not implemented";
    }
    std::string ElementStaticParser::getXmlName( const xparse::ElementPtr& e )
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
    std::string ElementStaticParser::getCppName( const xparse::ElementPtr& e )
    {
        std::string output;
        output = removesymbols( ElementStaticParser::getXmlName( e ), true );
        return output;
    }
    
    bool ElementStaticParser::searchForXsTag( const std::string& XsTagToSearchFor
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
    
    xparse::ElementPtr ElementStaticParser::getReferencedNode( const xparse::ElementPtr& e )
    {
        ElementPtr output;
        std::string referencedTypeName = ElementStaticParser::getReferencedTypeString( e );
        output = CxCategorize::getComplexTypeNodeByName( referencedTypeName );
        return output;
    }
    std::string ElementStaticParser::getSimpleContentXmlDataType( const xparse::ElementPtr& e )
    {
        
        if ( e )
        {
            if( ElementStaticParser::getType( e ) == ElementType::CxSmpRef )
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
            else if ( ElementStaticParser::getType( e ) == ElementType::MxSimpleTypeRef || ElementStaticParser::getType( e ) == ElementType::XsTypeRef )
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
    
    void ElementStaticParser::findAllXsElementsRecursiveImpl( const xparse::ElementPtr& e, std::vector<xparse::ElementPtr>& output, bool includeRootInResults )
    {
        if ( ElementStaticParser::isElement( e ) && includeRootInResults )
        {
            output.push_back( e );
        }
        if ( e->has_children() )
        {
            for ( int i = 0; i < e->count_children(); ++i )
            {
                ElementPtr child = e->get_child( i );
                if ( child )
                {
                    ElementStaticParser::findAllXsElementsRecursiveImpl( child, output, true );
                }
            }
        }
    }
    
    std::vector<xparse::ElementPtr> ElementStaticParser::findAllXsElements( const xparse::ElementPtr& root, bool includeRootInResults )
    {
        std::vector<ElementPtr> foundItems;
        if ( root )
        {
            ElementStaticParser::findAllXsElementsRecursiveImpl( root, foundItems, includeRootInResults );
        }
        return foundItems;
    }
}


