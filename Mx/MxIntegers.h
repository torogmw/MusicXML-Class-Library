/* matthew james briggs */

#pragma once
#include <iostream>
#include <string>

namespace mx
{
    namespace types
    {
        class Int
        {
        public:
            explicit Int( long value );
            Int();
            virtual ~Int();
            long getValue() const;
            virtual void setValue( long value );
            virtual void parse( const std::string& value );
        private:
            long myValue;
        };
        
        class IntRange : public Int
        {
        public:
            explicit IntRange( long min, long max, long value );
            virtual ~IntRange();
            virtual void setValue( long value );
            virtual void parse( const std::string& value );
        private:
            const long myMin;
            const long myMax;
        };
        
        class PositiveInteger: public Int
        {
        public:
            explicit PositiveInteger( long value );
            PositiveInteger();
            virtual ~PositiveInteger();
            virtual void setValue( long value );
            virtual void parse( const std::string& value );
        };
        
        class NonNegativeInteger: public Int
        {
        public:
            explicit NonNegativeInteger( long value );
            virtual ~NonNegativeInteger();
            virtual void setValue( long value );
            virtual void parse( const std::string& value );
        };
        
		std::string toString( const Int& value );
		std::ostream& toStream( std::ostream& os, const Int& value );
		std::ostream& operator<<( std::ostream& os, const Int& value );
        
        /* MIN = 1, MAX = 3, DEFAULT = 1 */
        class AccordionMiddle : public IntRange
        {
            explicit AccordionMiddle( long value );
            AccordionMiddle();
        };
        
        /* MIN = 1, MAX = 8, DEFAULT = 1 */
        class BeamLevel : public IntRange
        {
            explicit BeamLevel( long value );
            BeamLevel();
        };
        
        /* MIN = N/A, MAX = N/A, DEFAULT = 0 */
        class Fifths : public Int
        {
            explicit Fifths( long value );
            Fifths();
        };
        
        /* MIN = 1, MAX = 16, DEFAULT = 1 */
        class Midi16 : public IntRange
        {
            explicit Midi16( long value );
            Midi16();
        };
        
        /* MIN = 1, MAX = 128, DEFAULT = 1 */
        class Midi128 : public IntRange
        {
            explicit Midi128( long value );
            Midi128();
        };
        
        /* MIN = 1, MAX = 16384, DEFAULT = 1 */
        class Midi16384 : public IntRange
        {
            explicit Midi16384( long value );
            Midi16384();
        };
        
        /* MIN = 1, MAX = 6, DEFAULT = 1 */
        class NumberLevel : public IntRange
        {
            explicit NumberLevel( long value );
            NumberLevel();
        };
        
        /* MIN = 0, MAX = 3, DEFAULT = 0 */
        class NumberOfLines : public IntRange
        {
            explicit NumberOfLines( long value );
            NumberOfLines();
        };
        
        /* MIN = 0, MAX = 9, DEFAULT = 0 */
        class Octave : public IntRange
        {
            explicit Octave( long value );
            Octave();
        };
        
        /* MIN = N/A, MAX = N/A, DEFAULT = 0 */
        class StaffLine : public Int
        {
            explicit StaffLine( long value );
            StaffLine();
        };
        
        /* MIN = 1, MAX = N/A, DEFAULT = 1 */
        using StaffNumber = PositiveInteger;
        
        /* MIN = 1, MAX = N/A, DEFAULT = 1 */
        using StringNumber = PositiveInteger;
        
        /* MIN = 0, MAX = 8, DEFAULT = 0 */
        class TremoloMarks : public IntRange
        {
            explicit TremoloMarks( long value );
            TremoloMarks();
        };
    }
}