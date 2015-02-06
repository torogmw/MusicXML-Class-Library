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
    
    ElementAnalyses buildElementAnalyses( const ElementPtr& root );
    
    class ElementAnalysis
    {

    public:
        ElementAnalysis( const ElementPtr& e );
        
    private:
        /* DATA */
        static XsdClasses::XsdDocument ourXsdDocument;
        ElementPtr myNode;
        bool myIsElement;
        int myId;
        std::string myXsdName;
        bool myIsImplemented;
        ElementAnalyses myDependencyElements;
        
        /* FUNCTIONS */
        void setIsElement();
        void setId();
        void setXsdName();
        void setIsImplemented();
        void setDependencyElements();
    };
}