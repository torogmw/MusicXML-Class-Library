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
        
        virtual std::string getHFile() const;
        virtual std::string getCppFile() const;
        virtual std::string getTestFile() const;
        
        /* VALUE OBJECT */
        virtual std::string getValueObjectObjectInstantiationString() const;
        virtual std::string getValueObjectToString() const;
        virtual void changeValueObjectValue() const;
        
    private:
        /* Functions */
        void init();
        
        /* Data Members */
        mjb::ClassBldrs myElementBldrs;
    };
}