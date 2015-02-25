#pragma once
#include <iostream>
#include <string>

namespace mx
{
    namespace types
    {
        /* alias for the floating point size used by this library.
         Note, "decimal" is synonymous with "float" in this context */
        using DecimalType = double;
        
        class Decimal
        {
        public:
            explicit Decimal( DecimalType value );
            Decimal();
            virtual ~Decimal();
            DecimalType getValue() const;
            virtual void setValue( DecimalType value );
            virtual void parse( const std::string& value );
        private:
            DecimalType myValue;
        };
        
        class DecimalRange : public Decimal
        {
        public:
            explicit DecimalRange( DecimalType min, DecimalType max, DecimalType value );
            virtual ~DecimalRange();
            virtual void setValue( DecimalType value );
            virtual void parse( const std::string& value );
        private:
            const DecimalType myMin;
            const DecimalType myMax;
        };
        
        class PositiveDecimal: public Decimal
        {
        public:
            explicit PositiveDecimal( DecimalType value );
            PositiveDecimal();
            virtual ~PositiveDecimal();
            virtual void setValue( DecimalType value );
            virtual void parse( const std::string& value );
        };
        
        class NonNegativeDecimal: public Decimal
        {
        public:
            explicit NonNegativeDecimal( DecimalType value );
            virtual ~NonNegativeDecimal ();
            virtual void setValue( DecimalType value );
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
        public:
            explicit Percent( DecimalType value );
            Percent();
        };
        
        using PositiveDivisions = PositiveDecimal;
        
        /* MIN = -180, MAX = 180, DEFAULT = 0 */
        class RotationalDegrees : DecimalRange
        {
        public:
            explicit RotationalDegrees( DecimalType value );
            RotationalDegrees();
        };
        
        using Semitones = Decimal;
        using Tenths = Decimal;
        
        /* MIN = 2, MAX = N/A, DEFAULT = 2 */
        class TrillBeats: public Decimal
        {
        public:
            explicit TrillBeats( DecimalType value );
            TrillBeats();
            virtual ~TrillBeats();
            virtual void setValue( DecimalType value );
            virtual void parse( const std::string& value );
        };
    }
}