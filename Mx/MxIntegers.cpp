/* matthew james briggs */

#include "MxIntegers.h"
#include <sstream>

namespace mx
{
    namespace types
    {
        Int::Int( long value )
        :myValue( value )
        {}
        
        Int::Int()
        :myValue( 0 )
        {}
        
        Int::~Int() {}
        
        long Int::getValue() const
        {
            return myValue;
        }
        void Int::setValue( long value )
        {
            myValue = value;
        }
        void Int::parse( const std::string& value )
        {
            std::stringstream ss( value );
            long temp = 0;
            ss >> temp;
            setValue( temp );
        }
        
        IntRange::IntRange( long min, long max, long value )
        :Int( value )
        ,myMin( min )
        ,myMax( max )
        {
            setValue( value );
        }
        IntRange::~IntRange() {}
        
        void IntRange::setValue( long value )
        {
            if ( value < myMin )
            {
                Int::setValue( myMin );
            }
            else if ( value > myMax )
            {
                Int::setValue( myMax );
            }
            else
            {
                Int::setValue( value );
            }
        }
        void IntRange::parse( const std::string& value )
        {
            std::stringstream ss( value );
            long temp = 0;
            ss >> temp;
            setValue( temp );
        }
        
        std::string toString( const Int& value )
        {
            std::stringstream ss;
            toStream( ss, value );
            return ss.str();
        }
        std::ostream& toStream( std::ostream& os, const Int& value )
        {
            return os << value.getValue();
        }
        std::ostream& operator<<( std::ostream& os, const Int& value )
        {
            return toStream( os, value );
        }
//        bool operator==( const Int& lhs, const Int& rhs )
//        {
//            return lhs.getValue() == rhs.getValue();
//        }
//        bool operator!=( const Int& lhs, const Int& rhs )
//        {
//            return lhs.getValue() != rhs.getValue();
//        }
//        bool operator>=( const Int& lhs, const Int& rhs )
//        {
//            return lhs.getValue() >= rhs.getValue();
//        }
//        bool operator<=( const Int& lhs, const Int& rhs )
//        {
//            return lhs.getValue() <= rhs.getValue();
//        }
//        bool operator<( const Int& lhs, const Int& rhs )
//        {
//            return lhs.getValue() < rhs.getValue();
//        }
//        bool operator>( const Int& lhs, const Int& rhs )
//        {
//            return lhs.getValue() > rhs.getValue();
//        }
        
        AccordionMiddle::AccordionMiddle( long value )
        :IntRange( 1, 3, value ) {}
        AccordionMiddle::AccordionMiddle()
        :IntRange( 1, 3, 1 ) {}
        
        BeamLevel::BeamLevel( long value )
        :IntRange( 1, 8, value ) {}
        BeamLevel::BeamLevel()
        :IntRange( 1, 8, 1 ) {}
        
        Fifths::Fifths( long value )
        :Int( value ) {}
        Fifths::Fifths()
        :Int( 0 ) {}
    }
}