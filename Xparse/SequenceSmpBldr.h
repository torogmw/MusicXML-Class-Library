/* matthew james briggs */

#pragma once
#include <iostream>
#include "IClassBldr.h"
#include "Element.h"
#include "SequenceParser.h"

namespace XsdClasses
{
    class SequenceSmpBldr : public mjb::IClassBldr
    {

    public:
        SequenceSmpBldr( const xparse::ElementPtr& e);
        virtual ~SequenceSmpBldr();
        
    private:
        /* Functions */
        void init();
        
        /* Data Members */
        SequenceParser myParser;
    };
}