/* MusicXML Class Library v0.1.0
 Copyright (c) 2015 by Matthew James Briggs */

#pragma once
#include <iostream>
#include "Decimals.h"

namespace mx
{
    namespace t
    {
        class NumberOrNormal
        {
        public:
            explicit NumberOrNormal();
            explicit NumberOrNormal( const Decimal& value );
            explicit NumberOrNormal( const std::string& value );
            virtual ~NumberOrNormal();
            NumberOrNormal( const NumberOrNormal& other );
            NumberOrNormal( NumberOrNormal&& other );
            NumberOrNormal& operator=( const NumberOrNormal& other );
            NumberOrNormal& operator=( NumberOrNormal&& other );
            
            bool getIsNormal() const;
            bool getIsNumber() const;
            void setValueNormal();
            void setValue( const Decimal& value );
            Decimal getValueNumber() const;
            void parse( const std::string& value );
            
        private:
            class impl;
            std::unique_ptr<impl> myImpl;
        };
        
        std::string toString( const NumberOrNormal& value );
		std::ostream& toStream( std::ostream& os, const NumberOrNormal& value );
		std::ostream& operator<<( std::ostream& os, const NumberOrNormal& value );
    }
}
