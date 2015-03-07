#include "Decimals.h"
#include <sstream>
#include <iomanip>

namespace mx
{
    namespace types
    {
        class Decimal::impl
        {
        public:
            impl( const DecimalType value )
            :myValue( value ) {}
            ~impl () {}
            
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
        Decimal::Decimal( Decimal&& other ) = default;
        
        Decimal& Decimal::operator=( const Decimal& other )
        {
            this->myImpl = std::unique_ptr<Decimal::impl>( new Decimal::impl( other.getValue() ) );
            return *this;
        }
        Decimal& Decimal::operator=( Decimal&& other ) = default;
        
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
            if ( ( ss >> temp).fail() || !( ss >> std::ws).eof())
            {
                return;
            }
            setValue( temp );
        }
        
        std::string toString( const Decimal& value, unsigned int precision )
        {
            std::stringstream ss;
            ss << std::fixed;
            ss << std::setprecision( precision );
            ss << value.getValue();
            /* remove trailing zeros */
            std::string s = ss.str();
            s.erase(s.find_last_not_of('0') + 1, std::string::npos);
            if(s[s.size()-1] == '.')
            {
                s.erase(s.end()-1);
            }
            return s;
        }
        std::ostream& toStream( std::ostream& os, const Decimal& value, unsigned int precision )
        {
            return os << toString( value, precision );
        }
        std::ostream& operator<<( std::ostream& os, const Decimal& value )
        {
            return os << toString( value );
        }
        
        DecimalRange::DecimalRange( DecimalType min, DecimalType max, DecimalType value )
        :Decimal( value )
        ,myMin( min )
        ,myMax( max )
        {
            setValue( value );
        }
        // DecimalRange::~DecimalRange() {}
        
        void DecimalRange::setValue( DecimalType value )
        {
            if ( value < myMin )
            {
                Decimal::setValue( myMin );
            }
            else if ( value > myMax )
            {
                Decimal::setValue( myMax );
            }
            else
            {
                Decimal::setValue( value );
            }
        }
        void DecimalRange::parse( const std::string& value )
        {
            std::stringstream ss( value );
            DecimalType temp = 0;
            if ((ss >> temp).fail() || !(ss >> std::ws).eof())
            {
                return;
            }
            setValue( temp );
        }
        
        PositiveDecimal::PositiveDecimal( DecimalType value )
        :Decimal( value )
        {
            setValue( value );
        }
        
        PositiveDecimal::PositiveDecimal()
        :Decimal( kNonZeroAmount ) {}
        
        // PositiveDecimal::~PositiveDecimal() {}
        
        void PositiveDecimal::setValue( DecimalType value )
        {
            if ( value <= 0 )
            {
                Decimal::setValue( kNonZeroAmount );
            }
            else
            {
                Decimal::setValue( value );
            }
        }
        void PositiveDecimal::parse( const std::string& value )
        {
            std::stringstream ss( value );
            DecimalType temp = kNonZeroAmount;
            if ((ss >> temp).fail() || !(ss >> std::ws).eof())
            {
                return;
            }
            setValue( temp );
        }
        
        NonNegativeDecimal::NonNegativeDecimal( DecimalType value )
        :Decimal( value )
        {
            setValue( value );
        }
        NonNegativeDecimal::NonNegativeDecimal()
        :Decimal( 0 ) {}
        
        // NonNegativeDecimal::~NonNegativeDecimal() {}
        void NonNegativeDecimal::setValue( DecimalType value )
        {
            if ( value < 0 )
            {
                Decimal::setValue( 0 );
            }
            else
            {
                Decimal::setValue( value );
            }
        }
        void NonNegativeDecimal::parse( const std::string& value )
        {
            std::stringstream ss( value );
            DecimalType temp = 0;
            if ((ss >> temp).fail() || !(ss >> std::ws).eof())
            {
                return;
            }
            this->setValue( temp );
        }
        
        Percent::Percent( DecimalType value )
        :DecimalRange( 0, 100, value )
        {}
        
        Percent::Percent()
        :DecimalRange( 0, 100, 0 )
        {}
        
        RotationDegrees::RotationDegrees()
        :DecimalRange( -180, 180, 0 )
        {}
        
        RotationDegrees::RotationDegrees( DecimalType value )
        :DecimalRange( -180, 180, value )
        {}
        
        TrillBeats::TrillBeats( DecimalType value )
        :Decimal( value )
        {
            this->setValue( value );
        }
        
        TrillBeats::TrillBeats()
        :Decimal( 2 ) {}

        // TrillBeats::~TrillBeats() {}
        
        void TrillBeats::setValue( DecimalType value )
        {
            if ( value < 2 )
            {
                Decimal::setValue( 2 );
            }
            else
            {
                Decimal::setValue( value );
            }
        }
        void TrillBeats::parse( const std::string& value )
        {
            std::stringstream ss( value );
            DecimalType temp = 0;
            if ((ss >> temp).fail() || !(ss >> std::ws).eof())
            {
                return;
            }
            this->setValue( temp );
        }
    }
}