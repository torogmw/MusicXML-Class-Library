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
                    myTrillMark->streamContents( os, indentLevel, isOneLineOnly );
                }
                    break;
                case Choice::turn:
                {
                    myTurn->streamContents( os, indentLevel, isOneLineOnly );
                }
                    break;
                case Choice::delayedTurn:
                {
                    myDelayedTurn->streamContents( os, indentLevel, isOneLineOnly );
                }
                    break;
                case Choice::invertedTurn:
                {
                    myInvertedTurn->streamContents( os, indentLevel, isOneLineOnly );
                }
                    break;
                case Choice::delayedInvertedTurn:
                {
                    myDelayedInvertedTurn->streamContents( os, indentLevel, isOneLineOnly );
                }
                    break;
                case Choice::verticalTurn:
                {
                    myVerticalTurn->streamContents( os, indentLevel, isOneLineOnly );
                }
                    break;
                case Choice::shake:
                {
                    myShake->streamContents( os, indentLevel, isOneLineOnly );
                }
                    break;
                case Choice::wavyLine:
                {
                    myWavyLine->streamContents( os, indentLevel, isOneLineOnly );
                }
                    break;
                case Choice::mordent:
                {
                    myMordent->streamContents( os, indentLevel, isOneLineOnly );
                }
                    break;
                case Choice::invertedMordent:
                {
                    myInvertedMordent->streamContents( os, indentLevel, isOneLineOnly );
                }
                    break;
                case Choice::schleifer:
                {
                    mySchleifer->streamContents( os, indentLevel, isOneLineOnly );
                }
                    break;
                case Choice::tremolo:
                {
                    myTremolo->streamContents( os, indentLevel, isOneLineOnly );
                }
                    break;
                case Choice::otherOrnament:
                {
                    myOtherOrnament->streamContents( os, indentLevel, isOneLineOnly );
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
		

#if 1==0
#endif
        
    } // namespace e

} // namespace mx