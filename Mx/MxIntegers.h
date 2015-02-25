/* matthew james briggs */

#pragma once
#include <iostream>
#include <string>

namespace mx
{
    namespace types
    {
        /* alias for the int size used by this library */
        using IntType = int;
        
        class Int
        {
        public:
            explicit Int( IntType value );
            Int();
            virtual ~Int();
            IntType getValue() const;
            virtual void setValue( IntType value );
            virtual void parse( const std::string& value );
        private:
            IntType myValue;
        };
        
        class IntRange : public Int
        {
        public:
            explicit IntRange( IntType min, IntType max, IntType value );
            virtual ~IntRange();
            virtual void setValue( IntType value );
            virtual void parse( const std::string& value );
        private:
            const IntType myMin;
            const IntType myMax;
        };
        
        class PositiveInteger: public Int
        {
        public:
            explicit PositiveInteger( IntType value );
            PositiveInteger();
            virtual ~PositiveInteger();
            virtual void setValue( IntType value );
            virtual void parse( const std::string& value );
        };
        
        class NonNegativeInteger: public Int
        {
        public:
            explicit NonNegativeInteger( IntType value );
            virtual ~NonNegativeInteger();
            virtual void setValue( IntType value );
            virtual void parse( const std::string& value );
        };
        
		std::string toString( const Int& value );
		std::ostream& toStream( std::ostream& os, const Int& value );
		std::ostream& operator<<( std::ostream& os, const Int& value );
        
        /* MIN = 1, MAX = 3, DEFAULT = 1 */
        class AccordionMiddle : public IntRange
        {
        public:
            explicit AccordionMiddle( IntType value );
            AccordionMiddle();
        };
        
        /* MIN = 1, MAX = 8, DEFAULT = 1 */
        class BeamLevel : public IntRange
        {
        public:
            explicit BeamLevel( IntType value );
            BeamLevel();
        };
        
        /* MIN = N/A, MAX = N/A, DEFAULT = 0 */
        class Fifths : public Int
        {
        public:
            explicit Fifths( IntType value );
            Fifths();
        };
        
        /* MIN = 1, MAX = 16, DEFAULT = 1 */
        class Midi16 : public IntRange
        {
        public:
            explicit Midi16( IntType value );
            Midi16();
        };
        
        /* MIN = 1, MAX = 128, DEFAULT = 1 */
        class Midi128 : public IntRange
        {
        public:
            explicit Midi128( IntType value );
            Midi128();
        };
        
        /* MIN = 1, MAX = 16384, DEFAULT = 1 */
        class Midi16384 : public IntRange
        {
        public:
            explicit Midi16384( IntType value );
            Midi16384();
        };
        
        /* MIN = 1, MAX = 6, DEFAULT = 1 */
        class NumberLevel : public IntRange
        {
        public:
            explicit NumberLevel( IntType value );
            NumberLevel();
        };
        
        /* MIN = 0, MAX = 3, DEFAULT = 0 */
        class NumberOfLines : public IntRange
        {
        public:
            explicit NumberOfLines( IntType value );
            NumberOfLines();
        };
        
        /* MIN = 0, MAX = 9, DEFAULT = 0 */
        class Octave : public IntRange
        {
        public:
            explicit Octave( IntType value );
            Octave();
        };
        
        /* MIN = N/A, MAX = N/A, DEFAULT = 0 */
        class StaffLine : public Int
        {
        public:
            explicit StaffLine( IntType value );
            StaffLine();
        };
        
        /* MIN = 1, MAX = N/A, DEFAULT = 1 */
        using StaffNumber = PositiveInteger;
        
        /* MIN = 1, MAX = N/A, DEFAULT = 1 */
        using StringNumber = PositiveInteger;
        
        /* MIN = 0, MAX = 8, DEFAULT = 0 */
        class TremoloMarks : public IntRange
        {
        public:
            explicit TremoloMarks( IntType value );
            TremoloMarks();
        };
    }
}