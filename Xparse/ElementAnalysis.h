/* matthew james briggs */

#pragma once
#include <iostream>
#include <Element.h>
#include <vector>
#include "XsdDocument.h"

namespace xparse
{
    class ElementAnalysis;
    using ElementAnalyses = std::vector<ElementAnalysis>;
    using ElementAnalysesIter = ElementAnalyses::iterator;
    using ElementAnalysesIterConst = ElementAnalyses::const_iterator;
    
    using ElementPtrs = std::vector<ElementPtr>;
    using ElementPtrsIter = ElementPtrs::iterator;
    using ElementPtrsIterConst = ElementPtrs::const_iterator;
    
    ElementAnalyses buildElementAnalyses( const ElementPtr& root, bool includeRootInResults );
    
    class ElementAnalysis
    {

    public:
        ElementAnalysis( const ElementPtr& e );
        
        ElementPtr getNode() const;
        bool getIsElement() const;
        int getID() const;
        std::string getXsdName() const;
        bool getIsImplemented() const;
        
        ElementAnalyses::size_type getSubElementsCount() const;
        ElementAnalysesIterConst getSubElementsBegin() const;
        ElementAnalysesIterConst getSubElementsEnd() const;
        
        
    private:
        /* DATA */
        static XsdClasses::XsdDocument ourXsdDocument;
        ElementPtr myNode;
        bool myIsElement;
        int myID;
        std::string myXsdName;
        bool myIsImplemented;
        bool myReferencesAnotherType;
        
        ElementAnalyses mySubElements;
        ElementPtrs mySubGroups;
        ElementPtrs mySubSequences;
        ElementPtrs mySubComplexTypes;
        
        
        /* FUNCTIONS */
        void setIsElement();
        void setID();
        void setXsdName();
        void setIsImplemented();
        void setReferencesAnotherType();
        void setSubElements();
        void setSubGroups();
        void setSubSequences();
        void setSubComplexTypes();
        
        ElementPtrs findAllMatching( const std::string& XsTag, const ElementPtr& root, bool includeRootInResults  ) const;
        void findAllMatchingRecursive( const std::string& XsTag, const ElementPtr& root, ElementPtrs& outputt, bool includeRootInResults ) const;
        
    };
}