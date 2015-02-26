#pragma once
#include <iostream>
#include <string>
#include <memory>
#include <cmath>

namespace mx
{
    namespace types
    {
        
        /* alias for the floating point size used by this library.
         Note, "decimal" is synonymous with "float" in this context.
         Also note that floating-points are the bane of my existence
         and are not handled well herein */
        using DecimalType = long double;
        
        /* this is the number being passed to
         std::precision for streaming and toString functions */
        const unsigned short kDefaultPrecision = 11;
        
        /* when a Decimal's range is Exclusive and you try to assign
         out-of-range, this amount will be added to the exclusive minimum.
         For example if a Decimal is constrainted to be a positive number,
         and you try to assign the value 0, the value will by set to 
         kNonZeroAmount */
        const DecimalType kNonZeroAmount = 0.00000000001;
        
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
        
        std::string toString( const Decimal& value, unsigned int precision = kDefaultPrecision );
		std::ostream& toStream( std::ostream& os, const Decimal& value, unsigned int precision = kDefaultPrecision );
		std::ostream& operator<<( std::ostream& os, const Decimal& value );
        
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
        
        /* MIN = 0 EXCLUSIVE!, MAX = N/A, DEFAULT = kNonZeroAmount */
        class PositiveDecimal: public Decimal
        {
        public:
            explicit PositiveDecimal( DecimalType value );
            PositiveDecimal();
            virtual ~PositiveDecimal();
            virtual void setValue( DecimalType value );
            virtual void parse( const std::string& value );
        };
        
        /* MIN = 0, MAX = N/A, DEFAULT = kNonZeroAmount */
        class NonNegativeDecimal: public Decimal
        {
        public:
            explicit NonNegativeDecimal( DecimalType value );
            virtual ~NonNegativeDecimal ();
            virtual void setValue( DecimalType value );
            virtual void parse( const std::string& value );
        };
        
        /* MIN = 0, MAX = N/A, DEFAULT = 0 */
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