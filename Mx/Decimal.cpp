/* matthew james briggs */

#include "Decimal.h"
#include <sstream>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>

namespace mx
{
    namespace types
    {
        const int kFixDecPrecision = 9;
        
        
        class Decimal::impl
        {
        public:
            impl( const DecimalType value )
            :myValue( value ) {}
            
            void setValue( DecimalType value )
            {
                myValue = value;
            }
            DecimalType getValue() const
            {
                return myValue;
            }
        private:
            DecimalType myValue;
        };
        
        
        Decimal::Decimal( DecimalType value )
        :myImpl( new Decimal::impl( value ) )
        {}

        Decimal::Decimal()
        :myImpl( new Decimal::impl( 0 ) )
        {}

        Decimal::~Decimal() {}
        
        Decimal::Decimal( const Decimal& other )
        :myImpl( new Decimal::impl( other.getValue() ) )
        { }
        
        Decimal& Decimal::operator=( const Decimal& other )
        {
            this->myImpl = std::unique_ptr<Decimal::impl>( new Decimal::impl( other.getValue() ) );
            return *this;
        }
        

        DecimalType Decimal::getValue() const
        {
            return myImpl->getValue();
        }
        void Decimal::setValue( DecimalType value )
        {
            myImpl->setValue( value );
        }
        void Decimal::parse( const std::string& value )
        {
            std::stringstream ss( value );
            DecimalType temp = 0;
            ss >> temp;
            myImpl->setValue( temp );
        }
    }
}