/* matthew james briggs */

#include "ElementAnalysis.h"
#include "ElementStaticParser.h"
#include "XsdDocument.h"

using namespace XsdClasses;

namespace xparse
{
    XsdDocument ElementAnalysis::ourXsdDocument;
    
    /* ctor */
    ElementAnalysis::ElementAnalysis( const ElementPtr& e )
    :myNode( e )
    ,myIsElement( false )
    ,myId( -1 )
    ,myXsdName( "" )
    ,myIsImplemented( false )
    ,myDependencyElements()
    {
        setIsElement();
        setId();
        setXsdName();
        setIsImplemented();
        setDependencyElements();
    }
    
    
    void ElementAnalysis::setIsElement()
    {
        myIsElement = ElementStaticParser::isElement( myNode );
    }
    void ElementAnalysis::setId()
    {
        myId = myNode->getIndex();
    }
    void ElementAnalysis::setXsdName()
    {
        myXsdName = ElementStaticParser::getXmlName( myNode );
    }
    void ElementAnalysis::setIsImplemented()
    {
        myIsImplemented = ourXsdDocument.isImplemented( myNode );
    }
    void ElementAnalysis::setDependencyElements()
    {
        std::vector<ElementPtr> children;
        for ( int i = 0; i < myNode->count_children(); ++i )
        {
            ElementPtr child = myNode->get_child( i );
            if ( child )
            {
                ElementStaticParser::findAllXsElementsRecursiveImpl( child, children );
            }
        }
        myDependencyElements.clear();
        for ( auto c : children )
        {
            myDependencyElements.push_back( ElementAnalysis( c ) );
        }
    }
    
    ElementAnalyses buildElementAnalyses( const ElementPtr& root )
    {
        std::vector<ElementPtr> nodes = ElementStaticParser::findAllXsElements( root );
        ElementAnalyses output;
        for ( ElementPtr e : nodes )
        {
            if ( e )
            {
                output.push_back( ElementAnalysis( e ) );
            }
        }
        return output;
    }
}