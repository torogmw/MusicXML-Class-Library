
#include <iostream>
#include "MxIntegers.h"

namespace mx
{
    namespace types
    {
        class Color
        {
        public:
            enum class ColorType
            {
                RGB = 0,
                ARGB = 1
            };
            explicit Color( const IntType alpha,
                            const IntType red,
                            const IntType green,
                            const IntType blue);
            explicit Color( const IntType red,
                            const IntType green,
                            const IntType blue);
            explicit Color( const std::string& value );
            Color();
            virtual ~Color();
            Color( const Color& other );
            Color( Color&& other ) = default;
            Color& operator=( const Color& other );
            
            IntType getAlpha() const;
            IntType getRed() const;
            IntType getGreen() const;
            IntType getBlue() const;
            ColorType getColorType() const;
            
            void setAlpha( IntType value );
            void setRed( const IntType value );
            void setGreen( const IntType value );
            void setBlue( const IntType value );
            void setColorType( const ColorType value );
            
            void parse( const std::string& value );
            
        private:
            class impl;
            std::unique_ptr<impl> myImpl;
        };
        
        std::string toString( const Color& value );
		std::ostream& toStream( std::ostream& os, const Color& value );
		std::ostream& operator<<( std::ostream& os, const Color& value );
        
    }
}