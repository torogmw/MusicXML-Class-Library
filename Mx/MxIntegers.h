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
        
		std::string toString( const Int& value );
		std::ostream& toStream( std::ostream& os, const Int& value );
		std::ostream& operator<<( std::ostream& os, const Int& value );
//        bool operator==( const Int& lhs, const Int& rhs );
//        bool operator!=( const Int& lhs, const Int& rhs );
//        bool operator>=( const Int& lhs, const Int& rhs );
//        bool operator<=( const Int& lhs, const Int& rhs );
//        bool operator<( const Int& lhs, const Int& rhs );
//        bool operator>( const Int& lhs, const Int& rhs );
        
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
        
        
    }
}