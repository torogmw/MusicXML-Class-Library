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
    ,myID( -1 )
    ,myXsdName( "" )
    ,myIsImplemented( false )
    ,myReferencesAnotherType( false )
    ,mySubElements()
    ,mySubGroups()
    ,mySubSequences()
    ,mySubComplexTypes()
    {
        setIsElement();
        setID();
        setXsdName();
        setIsImplemented();
        setReferencesAnotherType();
        setSubElements();
        setSubGroups();
        setSubSequences();
        setSubComplexTypes();
    }
    
    /**********************************************
     SETTERS
     *********************************************/
    void ElementAnalysis::setIsElement()
    {
        myIsElement = ElementStaticParser::isElement( myNode );
    }
    void ElementAnalysis::setID()
    {
        myID = myNode->getIndex();
    }
    void ElementAnalysis::setXsdName()
    {
        myXsdName = ElementStaticParser::getXmlName( myNode );
    }
    void ElementAnalysis::setIsImplemented()
    {
        myIsImplemented = ourXsdDocument.isImplemented( myNode );
    }
    void ElementAnalysis::setReferencesAnotherType()
    {
        myReferencesAnotherType = false;
        if ( myNode )
        {
            for ( int i=0; i < myNode->count_attributes(); ++i )
            {
                AttributePtr a = myNode->get_attribute( i );
                if ( a->name() == "ref" || a->name() == "type" )
                {
                    if ( myNode->name() == "xs:element" )
                    {
                        myReferencesAnotherType = true;
                        return;
                    }
                }
            }
        }
    }
    void ElementAnalysis::setSubElements()
    {
        mySubElements.clear();
        mySubElements = buildElementAnalyses( myNode, false );
    }
    
    void ElementAnalysis::setSubGroups()
    {
        mySubGroups = findAllMatching( "xs:group", myNode, false );
    }
    void ElementAnalysis::setSubSequences()
    {
        if (getSubElementsCount() > 1)
        {
            int stop = 1;
        }
        mySubSequences = findAllMatching( "xs:sequence", myNode, false );
    }
    void ElementAnalysis::setSubComplexTypes()
    {
        mySubComplexTypes = findAllMatching( "xs:complexType", myNode, false );
    }
    
    ElementAnalyses buildElementAnalyses( const ElementPtr& root, bool includeRootInResults )
    {
        std::vector<ElementPtr> nodes = ElementStaticParser::findAllXsElements( root, includeRootInResults );
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
    
    /**********************************************
     GETTERS
     *********************************************/
    ElementPtr ElementAnalysis::getNode() const
    {
        return myNode;
    }
    bool ElementAnalysis::getIsElement() const
    {
        return myIsElement;
    }
    int ElementAnalysis::getID() const
    {
        return myID;
    }
    std::string ElementAnalysis::getXsdName() const
    {
        return myXsdName;
    }
    bool ElementAnalysis::getIsImplemented() const
    {
        return myIsImplemented;
    }
    
    ElementAnalyses::size_type ElementAnalysis::getSubElementsCount() const
    {
        return mySubElements.size();
    }
    ElementAnalysesIterConst ElementAnalysis::getSubElementsBegin() const
    {
        return mySubElements.cbegin();
    }
    ElementAnalysesIterConst ElementAnalysis::getSubElementsEnd() const
    {
        return mySubElements.cend();
    }
    
    /**********************************************
     PARSING FUNCTIONS
     *********************************************/
    void ElementAnalysis::findAllMatchingRecursive( const std::string& XsTag, const ElementPtr& root, ElementPtrs& outputt, bool includeRootInResults ) const
    {
        if ( root )
        {
            if ( includeRootInResults )
            {
                if ( root->name() == XsTag )
                {
                    outputt.push_back( root );
                }
            }
            if ( root->has_children() )
            {
                for( int i = 0; i < root->count_children(); ++i )
                {
                    ElementPtr c = root->get_child( i );
                    if ( c )
                    {
                        findAllMatchingRecursive( XsTag, c, outputt, true );
                    }
                }
            }
        }
    }
    
    ElementPtrs ElementAnalysis::findAllMatching( const std::string& XsTag, const ElementPtr& root, bool includeRootInResults  ) const
    {
        ElementPtrs o;
        findAllMatchingRecursive( XsTag, root, o, includeRootInResults );
        return o;
    }
}