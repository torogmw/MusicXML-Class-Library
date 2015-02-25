#pragma once
#include <iostream>
#include <string>

namespace mx
{
    namespace types
    {
        class Decimal
        {
        public:
            explicit Decimal( double value );
            Decimal();
            virtual ~Decimal();
            double getValue() const;
            virtual void setValue( double value );
            virtual void parse( const std::string& value );
        private:
            double myValue;
        };
        
        class DecimalRange : public Decimal
        {
        public:
            explicit DecimalRange( double min, double max, double value );
            virtual ~DecimalRange();
            virtual void setValue( double value );
            virtual void parse( const std::string& value );
        private:
            const double myMin;
            const double myMax;
        };
        
        class PositiveDecimal: public Decimal
        {
        public:
            explicit PositiveDecimal( double value );
            PositiveDecimal();
            virtual ~PositiveDecimal();
            virtual void setValue( double value );
            virtual void parse( const std::string& value );
        };
        
        class NonNegativeDecimal: public Decimal
        {
        public:
            explicit NonNegativeDecimal( double value );
            virtual ~NonNegativeDecimal ();
            virtual void setValue( double value );
            virtual void parse( const std::string& value );
        };
        
        std::string toString( const Decimal& value );
		std::ostream& toStream( std::ostream& os, const Decimal& value );
		std::ostream& operator<<( std::ostream& os, const Decimal& value );
        
        using Divisions = Decimal;
        using Millimeters = Decimal;
        
        /* MIN = 0, MAX = 100, DEFAULT = 0 */
        class Percent : DecimalRange
        {
            explicit Percent( double value );
            Percent();
        };
        
        using PositiveDivisions = PositiveDecimal;
        
        /* MIN = -180, MAX = 180, DEFAULT = 0 */
        class RotationalDegrees : DecimalRange
        {
            explicit RotationalDegrees( double value );
            RotationalDegrees();
        };
        
        using Semitones = Decimal;
        using Tenths = Decimal;
        
        /* MIN = 2, MAX = N/A, DEFAULT = 2 */
        class TrillBeats: public Decimal
        {
        public:
            explicit TrillBeats( double value );
            TrillBeats();
            virtual ~TrillBeats();
            virtual void setValue( double value );
            virtual void parse( const std::string& value );
        };
    }
}