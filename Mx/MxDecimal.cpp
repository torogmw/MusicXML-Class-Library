#include "MxDecimal.h"
#include <sstream>

namespace mx
{
    namespace types
    {
        Decimal::Decimal( double value )
        :myValue( value )
        {}
        
        Decimal::Decimal()
        :myValue( 0 )
        {}
        
        Decimal::~Decimal() {}
        
        double Decimal::getValue() const
        {
            return myValue;
        }
        void Decimal::setValue( double value )
        {
            myValue = value;
        }
        void Decimal::parse( const std::string& value )
        {
            std::stringstream ss( value );
            double temp = 0;
            ss >> temp;
            setValue( temp );
        }
        
        DecimalRange::DecimalRange( double min, double max, double value )
        :Decimal( value )
        ,myMin( min )
        ,myMax( max )
        {
            setValue( value );
        }
        DecimalRange::~DecimalRange() {}
        
        void DecimalRange::setValue( double value )
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
            double temp = 0;
            if ((ss >> temp).fail() || !(ss >> std::ws).eof())
            {
                return;
            }
            setValue( temp );
        }
        
        PositiveDecimal::PositiveDecimal( double value )
        :Decimal( value )
        {
            setValue( value );
        }
        
        PositiveDecimal::PositiveDecimal()
        :Decimal( 1 ) {}
        
        PositiveDecimal::~PositiveDecimal() {}
        
        void PositiveDecimal::setValue( double value )
        {
            if ( value <= 0 )
            {
                Decimal::setValue( 0.0000001 );
            }
            else
            {
                Decimal::setValue( value );
            }
        }
        void PositiveDecimal::parse( const std::string& value )
        {
            std::stringstream ss( value );
            double temp = 0.0000001;
            if ((ss >> temp).fail() || !(ss >> std::ws).eof())
            {
                return;
            }
            setValue( temp );
        }
        
        NonNegativeDecimal::NonNegativeDecimal( double value )
        :Decimal( value )
        {
            setValue( value );
        }
        NonNegativeDecimal::~NonNegativeDecimal() {}
        void NonNegativeDecimal::setValue( double value )
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
            long temp = 0;
            if ((ss >> temp).fail() || !(ss >> std::ws).eof())
            {
                return;
            }
            this->setValue( temp );
        }
        
        std::string toString( const Decimal& value )
        {
            std::stringstream ss;
            toStream( ss, value );
            return ss.str();
        }
        std::ostream& toStream( std::ostream& os, const Decimal& value )
        {
            return os << value.getValue();
        }
        std::ostream& operator<<( std::ostream& os, const Decimal& value )
        {
            return toStream( os, value );
        }
        
        Percent::Percent( double value )
        :DecimalRange( 0, 100, value )
        {}
        
        Percent::Percent()
        :DecimalRange( 0, 100, 0 )
        {}
        
        RotationalDegrees::RotationalDegrees()
        :DecimalRange( -180, 180, 0 )
        {}
        
        TrillBeats::TrillBeats( double value )
        :Decimal( value )
        {
            this->setValue( value );
        }
        
        TrillBeats::TrillBeats()
        :Decimal( 2 ) {}

        TrillBeats::~TrillBeats() {}
        
        void TrillBeats::setValue( double value )
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
            long temp = 0;
            if ((ss >> temp).fail() || !(ss >> std::ws).eof())
            {
                return;
            }
            this->setValue( temp );
        }
    }
}