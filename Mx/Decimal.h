/* matthew james briggs */

#pragma once
#include <iostream>

namespace mx
{
    namespace types
    {
        /* alias for the floating point size used by this library.
         Note, "decimal" is synonymous with "float" in this context */
        using DecimalType = double;
        
        /* this is the number being passed to
         std::precision for streaming and toString functions */
        constexpr int kPrecision = 20;
        
        class Decimal
        {
        public:
            explicit Decimal( DecimalType value );
            Decimal();
            virtual ~Decimal();
            Decimal( const Decimal& other );
            Decimal( Decimal&& other ) = default;
            Decimal& operator=( const Decimal& other );
            
            DecimalType getValue() const;
            virtual void setValue( DecimalType value );
            virtual void parse( const std::string& value );
        private:
            class impl;
            std::unique_ptr<impl> myImpl;
        };
    }
}