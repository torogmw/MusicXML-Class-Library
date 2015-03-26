#include "ElementsNew.h"

namespace mx
{
    namespace e
    {
        

#if 1==0
        X__X::X__X()
		:myBeatUnit( makeBeatUnit() )
        ,myBeatUnitDotSet()
		{}
		bool X__X::hasAttributes() const
		{
			return false;
		}
		std::ostream& X__X::streamAttributes( std::ostream& os ) const
		{
			return os;
		}
		std::ostream& X__X::streamName( std::ostream& os ) const
		{
			return os;
		}
		bool X__X::hasContents() const
		{
			return true;
		}
		std::ostream& X__X::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
		{
			isOneLineOnly = false;
			myBeatUnit->toStream( os, indentLevel );
            for ( auto x : myBeatUnitDotSet )
            {
                os << std::endl;
                x->toStream( os, indentLevel );
            }
			return os;
		}
		/* _________ BeatUnit minOccurs = 1, maxOccurs = 1 _________ */
        BeatUnitPtr X__X::getBeatUnit() const
        {
            return myBeatUnit;
        }
        void X__X::setBeatUnit( const BeatUnitPtr& value )
        {
            if ( value )
            {
                myBeatUnit = value;
            }
        }
        /* _________ BeatUnitDot minOccurs = 0, maxOccurs = unbounded _________ */
        const BeatUnitDotSet& X__X::getBeatUnitDotSet() const
        {
            return myBeatUnitDotSet;
        }
        void X__X::addBeatUnitDot( const BeatUnitDotPtr& value )
        {
            if ( value )
            {
                myBeatUnitDotSet.push_back( value );
            }
        }
        void X__X::removeBeatUnitDot( const BeatUnitDotSetIterConst& setIterator )
        {
            if ( setIterator != myBeatUnitDotSet.cend() )
            {
                myBeatUnitDotSet.erase( setIterator );
            }
        }
        void X__X::clearBeatUnitDotSet()
        {
            myBeatUnitDotSet.clear();
        }
#endif
    } // namespace e

} // namespace mx