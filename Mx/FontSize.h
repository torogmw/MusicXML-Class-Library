
#include <iostream>
#include "Decimals.h"
#include "Enums.h"

#if 0 == 0

namespace mx
{
    namespace types
    {
        class FontSize
        {
        public:
            explicit FontSize();
            explicit FontSize( const Decimal& value );
            explicit FontSize( const CssFontSize value );
            explicit FontSize( const std::string& value );
            virtual ~FontSize();
            FontSize( const FontSize& other );
            FontSize( FontSize&& other );
            FontSize& operator=( const FontSize& other );
            FontSize& operator=( FontSize&& other );
            
            bool getIsCssFontSize() const;
            bool getIsDecimal() const;
            void setValue( const CssFontSize value );
            void setValue( const Decimal& value );
            CssFontSize getValueCssFontSize() const;
            Decimal getValueDecimal() const;
            void parse( const std::string& value );
            
        private:
            class impl;
            std::unique_ptr<impl> myImpl;
        };
        
        std::string toString( const FontSize& value );
		std::ostream& toStream( std::ostream& os, const FontSize& value );
		std::ostream& operator<<( std::ostream& os, const FontSize& value );
    }
}

#endif