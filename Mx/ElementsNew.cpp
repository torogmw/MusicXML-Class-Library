#include "ElementsNew.h"

namespace mx
{
    namespace e
    {
        
        
		OrnamentsChoice::OrnamentsChoice()
		:myChoice( Choice::trillMark )
		,myTrillMark( makeTrillMark() )
		,myTurn( makeTurn() )
		,myDelayedTurn( makeDelayedTurn() )
		,myInvertedTurn( makeInvertedTurn() )
		,myDelayedInvertedTurn( makeDelayedInvertedTurn() )
		,myVerticalTurn( makeVerticalTurn() )
		,myShake( makeShake() )
		,myWavyLine( makeWavyLine() )
		,myMordent( makeMordent() )
		,myInvertedMordent( makeInvertedMordent() )
		,mySchleifer( makeSchleifer() )
		,myTremolo( makeTremolo() )
		,myOtherOrnament( makeOtherOrnament() )
		{}
		bool OrnamentsChoice::hasAttributes() const
		{
			return false;
		}
		std::ostream& OrnamentsChoice::streamAttributes( std::ostream& os ) const
		{
			return os;
		}
		std::ostream& OrnamentsChoice::streamName( std::ostream& os ) const
		{
			return os;
		}
		bool OrnamentsChoice::hasContents() const
		{
			return true;
		}
		std::ostream& OrnamentsChoice::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
		{
            switch ( myChoice )
            {
                case Choice::trillMark:
                {
                    myTrillMark->toStream( os, indentLevel );
                }
                    break;
                case Choice::turn:
                {
                    myTurn->toStream( os, indentLevel );
                }
                    break;
                case Choice::delayedTurn:
                {
                    myDelayedTurn->toStream( os, indentLevel );
                }
                    break;
                case Choice::invertedTurn:
                {
                    myInvertedTurn->toStream( os, indentLevel );
                }
                    break;
                case Choice::delayedInvertedTurn:
                {
                    myDelayedInvertedTurn->toStream( os, indentLevel );
                }
                    break;
                case Choice::verticalTurn:
                {
                    myVerticalTurn->toStream( os, indentLevel );
                }
                    break;
                case Choice::shake:
                {
                    myShake->toStream( os, indentLevel );
                }
                    break;
                case Choice::wavyLine:
                {
                    myWavyLine->toStream( os, indentLevel );
                }
                    break;
                case Choice::mordent:
                {
                    myMordent->toStream( os, indentLevel );
                }
                    break;
                case Choice::invertedMordent:
                {
                    myInvertedMordent->toStream( os, indentLevel );
                }
                    break;
                case Choice::schleifer:
                {
                    mySchleifer->toStream( os, indentLevel );
                }
                    break;
                case Choice::tremolo:
                {
                    myTremolo->toStream( os, indentLevel );
                }
                    break;
                case Choice::otherOrnament:
                {
                    myOtherOrnament->toStream( os, indentLevel );
                }
                    break;
                    
                default:
                    break;
            }
			return os;
		}
        /* _ Choice enum _ */
        OrnamentsChoice::Choice OrnamentsChoice::getChoice() const
        {
            return myChoice;
        }
        void OrnamentsChoice::setChoice( const OrnamentsChoice::Choice value )
        {
            myChoice = value;
        }
		/* _ TrillMark minOccurs = 1, maxOccurs = 1 _ */
		TrillMarkPtr OrnamentsChoice::getTrillMark() const
		{
			return myTrillMark;
		}
		void OrnamentsChoice::setTrillMark( const TrillMarkPtr& value )
		{
			if( value )
			{
				myTrillMark = value;
			}
		}
		/* _ Turn minOccurs = 1, maxOccurs = 1 _ */
		TurnPtr OrnamentsChoice::getTurn() const
		{
			return myTurn;
		}
		void OrnamentsChoice::setTurn( const TurnPtr& value )
		{
			if( value )
			{
				myTurn = value;
			}
		}
		/* _ DelayedTurn minOccurs = 1, maxOccurs = 1 _ */
		DelayedTurnPtr OrnamentsChoice::getDelayedTurn() const
		{
			return myDelayedTurn;
		}
		void OrnamentsChoice::setDelayedTurn( const DelayedTurnPtr& value )
		{
			if( value )
			{
				myDelayedTurn = value;
			}
		}
		/* _ InvertedTurn minOccurs = 1, maxOccurs = 1 _ */
		InvertedTurnPtr OrnamentsChoice::getInvertedTurn() const
		{
			return myInvertedTurn;
		}
		void OrnamentsChoice::setInvertedTurn( const InvertedTurnPtr& value )
		{
			if( value )
			{
				myInvertedTurn = value;
			}
		}
		/* _ DelayedInvertedTurn minOccurs = 1, maxOccurs = 1 _ */
		DelayedInvertedTurnPtr OrnamentsChoice::getDelayedInvertedTurn() const
		{
			return myDelayedInvertedTurn;
		}
		void OrnamentsChoice::setDelayedInvertedTurn( const DelayedInvertedTurnPtr& value )
		{
			if( value )
			{
				myDelayedInvertedTurn = value;
			}
		}
		/* _ VerticalTurn minOccurs = 1, maxOccurs = 1 _ */
		VerticalTurnPtr OrnamentsChoice::getVerticalTurn() const
		{
			return myVerticalTurn;
		}
		void OrnamentsChoice::setVerticalTurn( const VerticalTurnPtr& value )
		{
			if( value )
			{
				myVerticalTurn = value;
			}
		}
		/* _ Shake minOccurs = 1, maxOccurs = 1 _ */
		ShakePtr OrnamentsChoice::getShake() const
		{
			return myShake;
		}
		void OrnamentsChoice::setShake( const ShakePtr& value )
		{
			if( value )
			{
				myShake = value;
			}
		}
		/* _ WavyLine minOccurs = 1, maxOccurs = 1 _ */
		WavyLinePtr OrnamentsChoice::getWavyLine() const
		{
			return myWavyLine;
		}
		void OrnamentsChoice::setWavyLine( const WavyLinePtr& value )
		{
			if( value )
			{
				myWavyLine = value;
			}
		}
		/* _ Mordent minOccurs = 1, maxOccurs = 1 _ */
		MordentPtr OrnamentsChoice::getMordent() const
		{
			return myMordent;
		}
		void OrnamentsChoice::setMordent( const MordentPtr& value )
		{
			if( value )
			{
				myMordent = value;
			}
		}
		/* _ InvertedMordent minOccurs = 1, maxOccurs = 1 _ */
		InvertedMordentPtr OrnamentsChoice::getInvertedMordent() const
		{
			return myInvertedMordent;
		}
		void OrnamentsChoice::setInvertedMordent( const InvertedMordentPtr& value )
		{
			if( value )
			{
				myInvertedMordent = value;
			}
		}
		/* _ Schleifer minOccurs = 1, maxOccurs = 1 _ */
		SchleiferPtr OrnamentsChoice::getSchleifer() const
		{
			return mySchleifer;
		}
		void OrnamentsChoice::setSchleifer( const SchleiferPtr& value )
		{
			if( value )
			{
				mySchleifer = value;
			}
		}
		/* _ Tremolo minOccurs = 1, maxOccurs = 1 _ */
		TremoloPtr OrnamentsChoice::getTremolo() const
		{
			return myTremolo;
		}
		void OrnamentsChoice::setTremolo( const TremoloPtr& value )
		{
			if( value )
			{
				myTremolo = value;
			}
		}
		/* _ OtherOrnament minOccurs = 1, maxOccurs = 1 _ */
		OtherOrnamentPtr OrnamentsChoice::getOtherOrnament() const
		{
			return myOtherOrnament;
		}
		void OrnamentsChoice::setOtherOrnament( const OtherOrnamentPtr& value )
		{
			if( value )
			{
				myOtherOrnament = value;
			}
		}
		
        Ornaments::Ornaments()
		:myOrnamentsChoice( makeOrnamentsChoice() )
		,myAccidentalMarkSet()
		{}
		bool Ornaments::hasAttributes() const
		{
			return false;
		}
		std::ostream& Ornaments::streamAttributes( std::ostream& os ) const
		{
			return os;
		}
		std::ostream& Ornaments::streamName( std::ostream& os ) const
		{
			os << "ornaments";
			return os;
		}
		bool Ornaments::hasContents() const
		{
			return true;
		}
		std::ostream& Ornaments::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
		{
            os << std::endl;
            myOrnamentsChoice->streamContents( os, indentLevel+1, isOneLineOnly );
			for ( auto x : myAccidentalMarkSet )
            {
                os << std::endl;
                x->toStream( os, indentLevel+1 );
            }
            isOneLineOnly = false;
			os << std::endl;
			return os;
		}
		/* _________ OrnamentsChoice minOccurs = 1, maxOccurs = 1 _________ */
        OrnamentsChoicePtr Ornaments::getOrnamentsChoice() const
        {
            return myOrnamentsChoice;
        }
        void Ornaments::setOrnamentsChoice( const OrnamentsChoicePtr& value )
        {
            if ( value )
            {
                myOrnamentsChoice = value;
            }
        }
		/* _________ AccidentalMark minOccurs = 0, maxOccurs = unbounded _________ */
		const AccidentalMarkSet& Ornaments::getAccidentalMarkSet() const
		{
			return myAccidentalMarkSet;
		}
		void Ornaments::removeAccidentalMark( const AccidentalMarkSetIterConst& value )
		{
			if ( value != myAccidentalMarkSet.cend() )
			{
				myAccidentalMarkSet.erase( value );
			}
		}
		void Ornaments::addAccidentalMark( const AccidentalMarkPtr& value )
		{
			if ( value )
			{
				myAccidentalMarkSet.push_back( value );
			}
		}
		void Ornaments::clearAccidentalMarkSet()
		{
			myAccidentalMarkSet.clear();
		}
		AccidentalMarkPtr Ornaments::getAccidentalMark( const AccidentalMarkSetIterConst& setIterator ) const
		{
			if( setIterator != myAccidentalMarkSet.cend() )
			{
				return *setIterator;
			}
			return AccidentalMarkPtr();
		}

        BendChoice::BendChoice()
		:myChoice( Choice::preBend )
        ,myPreBend( makePreBend() )
        ,myRelease( makeRelease() )
		{}
		bool BendChoice::hasAttributes() const
		{
			return false;
		}
		std::ostream& BendChoice::streamAttributes( std::ostream& os ) const
		{
			return os;
		}
		std::ostream& BendChoice::streamName( std::ostream& os ) const
		{
			return os;
		}
		bool BendChoice::hasContents() const
		{
			return true;
		}
		std::ostream& BendChoice::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
		{
			switch ( myChoice )
            {
                case Choice::preBend:
                {
                    myPreBend->toStream( os, indentLevel );
                }
                    break;
                case Choice::release:
                {
                    myRelease->toStream( os, indentLevel );
                }
                    break;
                default:
                    break;
            }
            return os;
		}
        
        BendChoice::Choice BendChoice::getChoice() const
        {
            return myChoice;
        }
        void BendChoice::setChoice( BendChoice::Choice value )
        {
            myChoice = value;
        }
        /* _________ PreBend minOccurs = 1, maxOccurs = 1 _________ */
        PreBendPtr BendChoice::getPreBend() const
        {
            return myPreBend;
        }
        void BendChoice::setPreBend( const PreBendPtr& value )
        {
            if ( value )
            {
                myPreBend = value;
            }
        }
        /* _________ Release minOccurs = 1, maxOccurs = 1 _________ */
        ReleasePtr BendChoice::getRelease() const
        {
            return myRelease;
        }
        void BendChoice::setRelease( const ReleasePtr& value )
        {
            if ( value )
            {
                myRelease = value;
            }
        }
#if 1==0
#endif
        
    } // namespace e

} // namespace mx