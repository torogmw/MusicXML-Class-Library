/* matthew james briggs */

#include "MxIntegers.h"
#include <sstream>

namespace mx
{
    namespace types
    {
        Int::Int( IntType value )
        :myValue( value )
        {}
        
        Int::Int()
        :myValue( 0 )
        {}
        
        Int::~Int() {}
        
        IntType Int::getValue() const
        {
            return myValue;
        }
        void Int::setValue( IntType value )
        {
            myValue = value;
        }
        void Int::parse( const std::string& value )
        {
            std::stringstream ss( value );
            IntType temp = 0;
            if ((ss >> temp).fail() || !(ss >> std::ws).eof())
            {
                return;
            }
            ss >> temp;
            setValue( temp );
        }
        
        IntRange::IntRange( IntType min, IntType max, IntType value )
        :Int( value )
        ,myMin( min )
        ,myMax( max )
        {
            setValue( value );
        }
        IntRange::~IntRange() {}
        
        void IntRange::setValue( IntType value )
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
            IntType temp = 0;
            if ((ss >> temp).fail() || !(ss >> std::ws).eof())
            {
                return;
            }
            setValue( temp );
        }
        
        PositiveInteger::PositiveInteger( IntType value )
        :Int( value )
        {
            setValue( value );
        }
        
        PositiveInteger::PositiveInteger()
        :Int( 1 ) {}
        
        PositiveInteger::~PositiveInteger() {}
        
        void PositiveInteger::setValue( IntType value )
        {
            if ( value < 1 )
            {
                Int::setValue( 1 );
            }
            else
            {
                Int::setValue( value );
            }
        }
        void PositiveInteger::parse( const std::string& value )
        {
            std::stringstream ss( value );
            IntType temp = 1;
            if ((ss >> temp).fail() || !(ss >> std::ws).eof())
            {
                return;
            }
            setValue( temp );
        }
        
        NonNegativeInteger::NonNegativeInteger( IntType value )
        :Int( value )
        {
            setValue( value );
        }
        NonNegativeInteger::~NonNegativeInteger() {}
        void NonNegativeInteger::setValue( IntType value )
        {
            if ( value < 0 )
            {
                Int::setValue( 0 );
            }
            else
            {
                Int::setValue( value );
            }
        }
        void NonNegativeInteger::parse( const std::string& value )
        {
            std::stringstream ss( value );
            IntType temp = 0;
            if ((ss >> temp).fail() || !(ss >> std::ws).eof())
            {
                return;
            }
            this->setValue( temp );
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
        
        AccordionMiddle::AccordionMiddle( IntType value )
        :IntRange( 1, 3, value ) {}
        AccordionMiddle::AccordionMiddle()
        :IntRange( 1, 3, 1 ) {}
        
        BeamLevel::BeamLevel( IntType value )
        :IntRange( 1, 8, value ) {}
        BeamLevel::BeamLevel()
        :IntRange( 1, 8, 1 ) {}
        
        Fifths::Fifths( IntType value )
        :Int( value ) {}
        Fifths::Fifths()
        :Int( 0 ) {}
        
        Midi16::Midi16( IntType value )
        :IntRange( 1, 16, value ) {}
        Midi16::Midi16()
        :IntRange( 1, 16, 1 ) {}
        
        Midi128::Midi128( IntType value )
        :IntRange( 1, 128, value ) {}
        Midi128::Midi128()
        :IntRange( 1, 128, 1 ) {}
        
        Midi16384::Midi16384( IntType value )
        :IntRange( 1, 16384, value ) {}
        Midi16384::Midi16384()
        :IntRange( 1, 16384, 1 ) {}
        
        NumberLevel::NumberLevel( IntType value )
        :IntRange( 1, 6, value ) {}
        NumberLevel::NumberLevel()
        :IntRange( 1, 6, 1 ) {}
        
        NumberOfLines::NumberOfLines( IntType value )
        :IntRange( 0, 3, value ) {}
        NumberOfLines::NumberOfLines()
        :IntRange( 0, 3, 0 ) {}
        
        Octave::Octave( IntType value )
        :IntRange( 0, 9, value ) {}
        Octave::Octave()
        :IntRange( 0, 9, 0 ) {}
        
        StaffLine::StaffLine( IntType value )
        :Int( value ) {}
        StaffLine::StaffLine()
        :Int( 0 ) {}
        
        TremoloMarks::TremoloMarks( IntType value )
        :IntRange( 0, 8, value ) {}
        TremoloMarks::TremoloMarks()
        :IntRange( 0, 8, 0 ) {}
        
    }
}