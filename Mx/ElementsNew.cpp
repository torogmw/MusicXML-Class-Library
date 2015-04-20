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
        
        /**************** BendAttributes ****************/
        /* 5402 */
        BendAttributes::BendAttributes()
        :defaultX()
        ,defaultY()
        ,relativeX()
        ,relativeY()
        ,fontFamily()
        ,fontStyle( types::FontStyle::normal )
        ,fontSize( types::CssFontSize::medium )
        ,fontWeight( types::FontWeight::normal )
        ,color()
        ,accelerate( types::YesNo::no )
        ,beats()
        ,firstBeat()
        ,lastBeat()
        ,hasDefaultX( false )
        ,hasDefaultY( false )
        ,hasRelativeX( false )
        ,hasRelativeY( false )
        ,hasFontFamily( false )
        ,hasFontStyle( false )
        ,hasFontSize( false )
        ,hasFontWeight( false )
        ,hasColor( false )
        ,hasAccelerate( false )
        ,hasBeats( false )
        ,hasFirstBeat( false )
        ,hasLastBeat( false )
        {}
        
        bool BendAttributes::hasValues() const
        {
            return hasDefaultX ||
            hasDefaultY ||
            hasRelativeX ||
            hasRelativeY ||
            hasFontFamily ||
            hasFontStyle ||
            hasFontSize ||
            hasFontWeight ||
            hasColor ||
            hasAccelerate ||
            hasBeats ||
            hasFirstBeat ||
            hasLastBeat;
        }
        
        std::ostream& BendAttributes::toStream( std::ostream& os ) const
        {
            if ( hasValues() )
            {
                streamAttribute( os, defaultX, "default-x", hasDefaultX );
                streamAttribute( os, defaultY, "default-y", hasDefaultY );
                streamAttribute( os, relativeX, "relative-x", hasRelativeX );
                streamAttribute( os, relativeY, "relative-y", hasRelativeY );
                streamAttribute( os, fontFamily, "font-family", hasFontFamily );
                streamAttribute( os, fontStyle, "font-style", hasFontStyle );
                streamAttribute( os, fontSize, "font-size", hasFontSize );
                streamAttribute( os, fontWeight, "font-weight", hasFontWeight );
                streamAttribute( os, color, "color", hasColor );
                streamAttribute( os, accelerate, "accelerate", hasAccelerate );
                streamAttribute( os, beats, "beats", hasBeats );
                streamAttribute( os, firstBeat, "first-beat", hasFirstBeat );
                streamAttribute( os, lastBeat, "last-beat", hasLastBeat );
            }
            return os;
        }
        
		Bend::Bend()
		:myAttributes( std::make_shared<BendAttributes>() )
		,myBendAlter( makeBendAlter() )
		,myBendChoice( makeBendChoice() )
		,myWithBar( makeWithBar() )
		,myHasWithBar( false )
		{}
		bool Bend::hasAttributes() const
		{
			return myAttributes->hasValues();
		}
		std::ostream& Bend::streamAttributes( std::ostream& os ) const
		{
			return myAttributes->toStream( os );
			return os;
		}
		std::ostream& Bend::streamName( std::ostream& os ) const
		{
			os << "bend";
			return os;
		}
		bool Bend::hasContents() const
		{
			return true;
		}
		std::ostream& Bend::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
		{
            os << std::endl;
            myBendAlter->toStream( os, indentLevel+1 );
            os << std::endl;
            myBendChoice->streamContents( os, indentLevel+1, isOneLineOnly );
            if ( myHasWithBar )
            {
                os << std::endl;
                myWithBar->toStream( os, indentLevel+1 );
            }
            os << std::endl;
            isOneLineOnly = false;
			return os;
		}
		BendAttributesPtr Bend::getAttributes() const
		{
			return myAttributes;
		}
		void Bend::setAttributes( const BendAttributesPtr& value )
		{
			if ( value )
			{
				myAttributes = value;
			}
		}
		/* _________ BendAlter minOccurs = 1, maxOccurs = 1 _________ */
		BendAlterPtr Bend::getBendAlter() const
		{
			return myBendAlter;
		}
		void Bend::setBendAlter( const BendAlterPtr& value )
		{
			if( value )
			{
				myBendAlter = value;
			}
		}
        /* _________ BendChoice minOccurs = 1, maxOccurs = 1 _________ */
        BendChoicePtr Bend::getBendChoice() const
        {
            return myBendChoice;
        }
        void Bend::setBendChoice( const BendChoicePtr& value )
        {
            if ( value )
            {
                myBendChoice = value;
            }
        }
		/* _________ WithBar minOccurs = 0, maxOccurs = 1 _________ */
		WithBarPtr Bend::getWithBar() const
		{
			return myWithBar;
		}
		void Bend::setWithBar( const WithBarPtr& value )
		{
			if( value )
			{
				myWithBar = value;
			}
		}
		bool Bend::getHasWithBar() const
		{
			return myHasWithBar;
		}
		void Bend::setHasWithBar( const bool value )
		{
			myHasWithBar = value;
		}
        
        ArrowGroup::ArrowGroup()
        :myArrowDirection( makeArrowDirection() )
        ,myArrowStyle( makeArrowStyle() )
        ,myHasArrowStyle( false )
        {}
        bool ArrowGroup::hasAttributes() const
        {
            return false;
        }
        std::ostream& ArrowGroup::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& ArrowGroup::streamName( std::ostream& os ) const
        {
            return os;
        }
        bool ArrowGroup::hasContents() const
        {
            return true;
        }
        std::ostream& ArrowGroup::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
        {
            myArrowDirection->toStream( os, indentLevel );
            if ( myHasArrowStyle )
            {
                os << std::endl;
                myArrowStyle->toStream( os, indentLevel );
            }
            isOneLineOnly = false;
            return os;
        }
        /* _________ ArrowDirection minOccurs = 1, maxOccurs = 1 _________ */
        ArrowDirectionPtr ArrowGroup::getArrowDirection() const
        {
            return myArrowDirection;
        }
        void ArrowGroup::setArrowDirection( const ArrowDirectionPtr& value )
        {
            if ( value )
            {
                myArrowDirection = value;
            }
        }
        /* _________ ArrowStyle minOccurs = 0, maxOccurs = 1 _________ */
        ArrowStylePtr ArrowGroup::getArrowStyle() const
        {
            return myArrowStyle;
        }
        void ArrowGroup::setArrowStyle( const ArrowStylePtr& value )
        {
            if ( value )
            {
                myArrowStyle = value;
            }
        }
        bool ArrowGroup::getHasArrowStyle() const
        {
            return myHasArrowStyle;
        }
        void ArrowGroup::setHasArrowStyle( const bool value )
        {
            myHasArrowStyle = value;
        }
        
        
        
        /**************** ArrowAttributes ****************/
        /* 5424 */
        ArrowAttributes::ArrowAttributes()
        :defaultX()
        ,defaultY()
        ,relativeX()
        ,relativeY()
        ,fontFamily()
        ,fontStyle( types::FontStyle::normal )
        ,fontSize( types::CssFontSize::medium )
        ,fontWeight( types::FontWeight::normal )
        ,color()
        ,placement( types::AboveBelow::below )
        ,hasDefaultX( false )
        ,hasDefaultY( false )
        ,hasRelativeX( false )
        ,hasRelativeY( false )
        ,hasFontFamily( false )
        ,hasFontStyle( false )
        ,hasFontSize( false )
        ,hasFontWeight( false )
        ,hasColor( false )
        ,hasPlacement( false )
        {}
        
        bool ArrowAttributes::hasValues() const
        {
            return hasDefaultX ||
            hasDefaultY ||
            hasRelativeX ||
            hasRelativeY ||
            hasFontFamily ||
            hasFontStyle ||
            hasFontSize ||
            hasFontWeight ||
            hasColor ||
            hasPlacement;
        }
        
        std::ostream& ArrowAttributes::toStream( std::ostream& os ) const
        {
            if ( hasValues() )
            {
                streamAttribute( os, defaultX, "default-x", hasDefaultX );
                streamAttribute( os, defaultY, "default-y", hasDefaultY );
                streamAttribute( os, relativeX, "relative-x", hasRelativeX );
                streamAttribute( os, relativeY, "relative-y", hasRelativeY );
                streamAttribute( os, fontFamily, "font-family", hasFontFamily );
                streamAttribute( os, fontStyle, "font-style", hasFontStyle );
                streamAttribute( os, fontSize, "font-size", hasFontSize );
                streamAttribute( os, fontWeight, "font-weight", hasFontWeight );
                streamAttribute( os, color, "color", hasColor );
                streamAttribute( os, placement, "placement", hasPlacement );
            }
            return os;
        }
        
		Arrow::Arrow()
		:myAttributes( std::make_shared<ArrowAttributes>() )
		,myChoice( Choice::arrowGroup )
        ,myArrowGroup( makeArrowGroup() )
		,myCircularArrow( makeCircularArrow() )
		{}
		bool Arrow::hasAttributes() const
		{
			return myAttributes->hasValues();
		}
		std::ostream& Arrow::streamAttributes( std::ostream& os ) const
		{
			return myAttributes->toStream( os );
			return os;
		}
		std::ostream& Arrow::streamName( std::ostream& os ) const
		{
			os << "arrow";
			return os;
		}
		bool Arrow::hasContents() const
		{
			return true;
		}
		std::ostream& Arrow::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
		{
			switch ( myChoice )
            {
                case Choice::arrowGroup:
                {
                    os << std::endl;
                    myArrowGroup->streamContents( os, indentLevel+1, isOneLineOnly );
                    os << std::endl;
                    isOneLineOnly = false;
                }
                    break;
                case Choice::circularArrow:
                {
                    os << std::endl;
                    myCircularArrow->toStream( os, indentLevel+1 );
                    os << std::endl;
                    isOneLineOnly = false;
                }
                    break;
                default:
                    break;
            }
            return os;
		}
		ArrowAttributesPtr Arrow::getAttributes() const
		{
			return myAttributes;
		}
		void Arrow::setAttributes( const ArrowAttributesPtr& value )
		{
			if ( value )
			{
				myAttributes = value;
			}
		}
        Arrow::Choice Arrow::getChoice() const
        {
            return myChoice;
        }
        void Arrow::setChoice( const Arrow::Choice value )
        {
            myChoice = value;
        }
		/* _________ ArrowGroup minOccurs = 1, maxOccurs = 1 _________ */
		ArrowGroupPtr Arrow::getArrowGroup() const
		{
			return myArrowGroup;
		}
		void Arrow::setArrowGroup( const ArrowGroupPtr& value )
		{
			if( value )
			{
				myArrowGroup = value;
			}
		}
		/* _________ CircularArrow minOccurs = 1, maxOccurs = 1 _________ */
		CircularArrowPtr Arrow::getCircularArrow() const
		{
			return myCircularArrow;
		}
		void Arrow::setCircularArrow( const CircularArrowPtr& value )
		{
			if( value )
			{
				myCircularArrow = value;
			}
		}

        
        
        /**************** GroupNameDisplayAttributes ****************/
        /* 5807 */
        GroupNameDisplayAttributes::GroupNameDisplayAttributes()
        :printObject( types::YesNo::no )
        ,hasPrintObject( false )
        {}
        
        bool GroupNameDisplayAttributes::hasValues() const
        {
            return hasPrintObject;
        }
        
        std::ostream& GroupNameDisplayAttributes::toStream( std::ostream& os ) const
        {
            if ( hasValues() )
            {
                streamAttribute( os, printObject, "print-object", hasPrintObject );
            }
            return os;
        }
        
		GroupNameDisplay::GroupNameDisplay()
		:myAttributes( std::make_shared<GroupNameDisplayAttributes>() )
        ,myChoice( GroupNameDisplay::Choice::displayText )
		,myDisplayText( makeDisplayText() )
		,myAccidentalText( makeAccidentalText() )
		{}
		bool GroupNameDisplay::hasAttributes() const
		{
			return myAttributes->hasValues();
		}
		std::ostream& GroupNameDisplay::streamAttributes( std::ostream& os ) const
		{
			return myAttributes->toStream( os );
			return os;
		}
		std::ostream& GroupNameDisplay::streamName( std::ostream& os ) const
		{
			os << "group-name-display";
			return os;
		}
		bool GroupNameDisplay::hasContents() const
		{
			return true;
		}
		std::ostream& GroupNameDisplay::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
		{
            os << std::endl;
			switch ( myChoice )
            {
                case Choice::displayText:
                {
                    myDisplayText->toStream( os, indentLevel+1 );
                }
                    break;
                case Choice::accidentalText:
                {
                    myAccidentalText->toStream( os, indentLevel+1 );
                }
                    break;
                default:
                    break;
            }
            os << std::endl;
            isOneLineOnly = false;
            return os;
		}
		GroupNameDisplayAttributesPtr GroupNameDisplay::getAttributes() const
		{
			return myAttributes;
		}
		void GroupNameDisplay::setAttributes( const GroupNameDisplayAttributesPtr& value )
		{
			if ( value )
			{
				myAttributes = value;
			}
		}
        /* _________ Choice _________ */
        GroupNameDisplay::Choice GroupNameDisplay::getChoice() const
        {
            return myChoice;
        }
        void GroupNameDisplay::setChoice( const GroupNameDisplay::Choice value )
        {
            myChoice = value;
        }
		/* _________ DisplayText minOccurs = 1, maxOccurs = 1 _________ */
		DisplayTextPtr GroupNameDisplay::getDisplayText() const
		{
			return myDisplayText;
		}
		void GroupNameDisplay::setDisplayText( const DisplayTextPtr& value )
		{
			if( value )
			{
				myDisplayText = value;
			}
		}
		/* _________ AccidentalText minOccurs = 1, maxOccurs = 1 _________ */
		AccidentalTextPtr GroupNameDisplay::getAccidentalText() const
		{
			return myAccidentalText;
		}
		void GroupNameDisplay::setAccidentalText( const AccidentalTextPtr& value )
		{
			if( value )
			{
				myAccidentalText = value;
			}
		}

        /**************** GroupAbbreviationDisplayAttributes ****************/
        /* 5817 */
        GroupAbbreviationDisplayAttributes::GroupAbbreviationDisplayAttributes()
        :printObject( types::YesNo::no )
        ,hasPrintObject( false )
        {}
        
        bool GroupAbbreviationDisplayAttributes::hasValues() const
        {
            return hasPrintObject;
        }
        
        std::ostream& GroupAbbreviationDisplayAttributes::toStream( std::ostream& os ) const
        {
            if ( hasValues() )
            {
                streamAttribute( os, printObject, "print-object", hasPrintObject );
            }
            return os;
        }
        
		GroupAbbreviationDisplay::GroupAbbreviationDisplay()
		:myAttributes( std::make_shared<GroupAbbreviationDisplayAttributes>() )
        ,myChoice( GroupAbbreviationDisplay::Choice::displayText )
		,myDisplayText( makeDisplayText() )
		,myAccidentalText( makeAccidentalText() )
		{}
		bool GroupAbbreviationDisplay::hasAttributes() const
		{
			return myAttributes->hasValues();
		}
		std::ostream& GroupAbbreviationDisplay::streamAttributes( std::ostream& os ) const
		{
			return myAttributes->toStream( os );
			return os;
		}
		std::ostream& GroupAbbreviationDisplay::streamName( std::ostream& os ) const
		{
			os << "group-abbreviation-display";
			return os;
		}
		bool GroupAbbreviationDisplay::hasContents() const
		{
			return true;
		}
		std::ostream& GroupAbbreviationDisplay::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
		{
            os << std::endl;
			switch ( myChoice )
            {
                case Choice::displayText:
                {
                    myDisplayText->toStream( os, indentLevel+1 );
                }
                    break;
                case Choice::accidentalText:
                {
                    myAccidentalText->toStream( os, indentLevel+1 );
                }
                    break;
                default:
                    break;
            }
            os << std::endl;
            isOneLineOnly = false;
            return os;
		}
		GroupAbbreviationDisplayAttributesPtr GroupAbbreviationDisplay::getAttributes() const
		{
			return myAttributes;
		}
		void GroupAbbreviationDisplay::setAttributes( const GroupAbbreviationDisplayAttributesPtr& value )
		{
			if ( value )
			{
				myAttributes = value;
			}
		}
        /* _________ Choice _________ */
        GroupAbbreviationDisplay::Choice GroupAbbreviationDisplay::getChoice() const
        {
            return myChoice;
        }
        void GroupAbbreviationDisplay::setChoice( const GroupAbbreviationDisplay::Choice value )
        {
            myChoice = value;
        }
		/* _________ DisplayText minOccurs = 1, maxOccurs = 1 _________ */
		DisplayTextPtr GroupAbbreviationDisplay::getDisplayText() const
		{
			return myDisplayText;
		}
		void GroupAbbreviationDisplay::setDisplayText( const DisplayTextPtr& value )
		{
			if( value )
			{
				myDisplayText = value;
			}
		}
		/* _________ AccidentalText minOccurs = 1, maxOccurs = 1 _________ */
		AccidentalTextPtr GroupAbbreviationDisplay::getAccidentalText() const
		{
			return myAccidentalText;
		}
		void GroupAbbreviationDisplay::setAccidentalText( const AccidentalTextPtr& value )
		{
			if( value )
			{
				myAccidentalText = value;
			}
		}
        
		Identification::Identification()
		:myCreatorSet()
		,myRightsSet()
		,myEncoding( makeEncoding() )
		,myHasEncoding( false )
		,mySource( makeSource() )
		,myHasSource( false )
		,myRelationSet()
		,myMiscellaneous( makeMiscellaneous() )
		,myHasMiscellaneous( false )
		{}
		bool Identification::hasAttributes() const
		{
			return false;
		}
		std::ostream& Identification::streamAttributes( std::ostream& os ) const
		{
			return os;
		}
		std::ostream& Identification::streamName( std::ostream& os ) const
		{
			os << "identification";
			return os;
		}
		bool Identification::hasContents() const
		{
			return myCreatorSet.size() > 0
            || myRightsSet.size() > 0
            || myHasEncoding
            || myHasSource
            || myRelationSet.size() > 0
            || myHasMiscellaneous;
		}
		std::ostream& Identification::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
		{
			if ( hasContents() )
            {
                
                for ( auto x : myCreatorSet )
                {
                    os << std::endl;
                    x->toStream( os, indentLevel+1 );
                }
                for ( auto x : myRightsSet )
                {
                    os << std::endl;
                    x->toStream( os, indentLevel+1 );
                }
                if ( myHasEncoding )
                {
                    os << std::endl;
                    myEncoding->toStream( os, indentLevel+1 );
                }
                if ( myHasSource )
                {
                    os << std::endl;
                    mySource->toStream( os, indentLevel+1 );
                }
                for ( auto x : myRelationSet )
                {
                    os << std::endl;
                    x->toStream( os, indentLevel+1 );
                }
                
                if ( myHasMiscellaneous )
                {
                    os << std::endl;
                    myMiscellaneous->toStream( os, indentLevel+1 );
                }
                isOneLineOnly = false;
                os << std::endl;
            }
			else
            {
                isOneLineOnly = true;
            }
            return os;
		}
		/* _________ Creator minOccurs = 0, maxOccurs = unbounded _________ */
		const CreatorSet& Identification::getCreatorSet() const
		{
			return myCreatorSet;
		}
		void Identification::removeCreator( const CreatorSetIterConst& value )
		{
			if ( value != myCreatorSet.cend() )
			{
				myCreatorSet.erase( value );
			}
		}
		void Identification::addCreator( const CreatorPtr& value )
		{
			if ( value )
			{
				myCreatorSet.push_back( value );
			}
		}
		void Identification::clearCreatorSet()
		{
			myCreatorSet.clear();
		}
		CreatorPtr Identification::getCreator( const CreatorSetIterConst& setIterator ) const
		{
			if( setIterator != myCreatorSet.cend() )
			{
				return *setIterator;
			}
			return CreatorPtr();
		}
		/* _________ Rights minOccurs = 0, maxOccurs = unbounded _________ */
		const RightsSet& Identification::getRightsSet() const
		{
			return myRightsSet;
		}
		void Identification::removeRights( const RightsSetIterConst& value )
		{
			if ( value != myRightsSet.cend() )
			{
				myRightsSet.erase( value );
			}
		}
		void Identification::addRights( const RightsPtr& value )
		{
			if ( value )
			{
				myRightsSet.push_back( value );
			}
		}
		void Identification::clearRightsSet()
		{
			myRightsSet.clear();
		}
		RightsPtr Identification::getRights( const RightsSetIterConst& setIterator ) const
		{
			if( setIterator != myRightsSet.cend() )
			{
				return *setIterator;
			}
			return RightsPtr();
		}
		/* _________ Encoding minOccurs = 0, maxOccurs = 1 _________ */
		EncodingPtr Identification::getEncoding() const
		{
			return myEncoding;
		}
		void Identification::setEncoding( const EncodingPtr& value )
		{
			if( value )
			{
				myEncoding = value;
			}
		}
		bool Identification::getHasEncoding() const
		{
			return myHasEncoding;
		}
		void Identification::setHasEncoding( const bool value )
		{
			myHasEncoding = value;
		}
		/* _________ Source minOccurs = 0, maxOccurs = 1 _________ */
		SourcePtr Identification::getSource() const
		{
			return mySource;
		}
		void Identification::setSource( const SourcePtr& value )
		{
			if( value )
			{
				mySource = value;
			}
		}
		bool Identification::getHasSource() const
		{
			return myHasSource;
		}
		void Identification::setHasSource( const bool value )
		{
			myHasSource = value;
		}
		/* _________ Relation minOccurs = 0, maxOccurs = unbounded _________ */
		const RelationSet& Identification::getRelationSet() const
		{
			return myRelationSet;
		}
		void Identification::removeRelation( const RelationSetIterConst& value )
		{
			if ( value != myRelationSet.cend() )
			{
				myRelationSet.erase( value );
			}
		}
		void Identification::addRelation( const RelationPtr& value )
		{
			if ( value )
			{
				myRelationSet.push_back( value );
			}
		}
		void Identification::clearRelationSet()
		{
			myRelationSet.clear();
		}
		RelationPtr Identification::getRelation( const RelationSetIterConst& setIterator ) const
		{
			if( setIterator != myRelationSet.cend() )
			{
				return *setIterator;
			}
			return RelationPtr();
		}
		/* _________ Miscellaneous minOccurs = 0, maxOccurs = 1 _________ */
		MiscellaneousPtr Identification::getMiscellaneous() const
		{
			return myMiscellaneous;
		}
		void Identification::setMiscellaneous( const MiscellaneousPtr& value )
		{
			if( value )
			{
				myMiscellaneous = value;
			}
		}
		bool Identification::getHasMiscellaneous() const
		{
			return myHasMiscellaneous;
		}
		void Identification::setHasMiscellaneous( const bool value )
		{
			myHasMiscellaneous = value;
		}
		
        /**************** PartAbbreviationDisplayAttributes ****************/
        /* 3861, 5936 */
        PartAbbreviationDisplayAttributes::PartAbbreviationDisplayAttributes()
        :printObject( types::YesNo::no )
        ,hasPrintObject( false )
        {}
        
        bool PartAbbreviationDisplayAttributes::hasValues() const
        {
            return hasPrintObject;
        }
        
        std::ostream& PartAbbreviationDisplayAttributes::toStream( std::ostream& os ) const
        {
            if ( hasValues() )
            {
                streamAttribute( os, printObject, "print-object", hasPrintObject );
            }
            return os;
        }
        
		PartAbbreviationDisplay::PartAbbreviationDisplay()
		:myAttributes( std::make_shared<PartAbbreviationDisplayAttributes>() )
        ,myChoice( PartAbbreviationDisplay::Choice::displayText )
		,myDisplayText( makeDisplayText() )
		,myAccidentalText( makeAccidentalText() )
		{}
		bool PartAbbreviationDisplay::hasAttributes() const
		{
			return myAttributes->hasValues();
		}
		std::ostream& PartAbbreviationDisplay::streamAttributes( std::ostream& os ) const
		{
			return myAttributes->toStream( os );
			return os;
		}
		std::ostream& PartAbbreviationDisplay::streamName( std::ostream& os ) const
		{
			os << "part-abbreviation-display";
			return os;
		}
		bool PartAbbreviationDisplay::hasContents() const
		{
			return true;
		}
		std::ostream& PartAbbreviationDisplay::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
		{
            os << std::endl;
			switch ( myChoice )
            {
                case Choice::displayText:
                {
                    myDisplayText->toStream( os, indentLevel+1 );
                }
                    break;
                case Choice::accidentalText:
                {
                    myAccidentalText->toStream( os, indentLevel+1 );
                }
                    break;
                default:
                    break;
            }
            os << std::endl;
            isOneLineOnly = false;
            return os;
		}
		PartAbbreviationDisplayAttributesPtr PartAbbreviationDisplay::getAttributes() const
		{
			return myAttributes;
		}
		void PartAbbreviationDisplay::setAttributes( const PartAbbreviationDisplayAttributesPtr& value )
		{
			if ( value )
			{
				myAttributes = value;
			}
		}
        /* _________ Choice _________ */
        PartAbbreviationDisplay::Choice PartAbbreviationDisplay::getChoice() const
        {
            return myChoice;
        }
        void PartAbbreviationDisplay::setChoice( const PartAbbreviationDisplay::Choice value )
        {
            myChoice = value;
        }
		/* _________ DisplayText minOccurs = 1, maxOccurs = 1 _________ */
		DisplayTextPtr PartAbbreviationDisplay::getDisplayText() const
		{
			return myDisplayText;
		}
		void PartAbbreviationDisplay::setDisplayText( const DisplayTextPtr& value )
		{
			if( value )
			{
				myDisplayText = value;
			}
		}
		/* _________ AccidentalText minOccurs = 1, maxOccurs = 1 _________ */
		AccidentalTextPtr PartAbbreviationDisplay::getAccidentalText() const
		{
			return myAccidentalText;
		}
		void PartAbbreviationDisplay::setAccidentalText( const AccidentalTextPtr& value )
		{
			if( value )
			{
				myAccidentalText = value;
			}
		}
        
        SoloOrEnsemble::SoloOrEnsemble()
        :myChoice( Choice::solo )
        ,mySolo( makeSolo() )
        ,myEnsemble( makeEnsemble() )
        {}
        bool SoloOrEnsemble::hasAttributes() const
        {
            return false;
        }
        std::ostream& SoloOrEnsemble::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& SoloOrEnsemble::streamName( std::ostream& os ) const
        {
            return os;
        }
        bool SoloOrEnsemble::hasContents() const
        {
            return true;
        }
        std::ostream& SoloOrEnsemble::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
        {
            switch ( myChoice )
            {
                case Choice::solo:
                {
                    mySolo->toStream( os, indentLevel );
                }
                    break;
                case Choice::ensemble:
                {
                    myEnsemble->toStream( os, indentLevel );
                }
                    break;
                default:
                    break;
            }
            isOneLineOnly = true;
            return os;
        }
        /* _________ Choice  _________ */
        SoloOrEnsemble::Choice SoloOrEnsemble::getChoice() const
        {
            return myChoice;
        }
        void SoloOrEnsemble::setChoice( const SoloOrEnsemble::Choice value )
        {
            myChoice = value;
        }
        /* _________ Solo minOccurs = 1, maxOccurs = 1 _________ */
        SoloPtr SoloOrEnsemble::getSolo() const
        {
            return mySolo;
        }
        void SoloOrEnsemble::setSolo( const SoloPtr& value )
        {
            if ( value )
            {
                mySolo = value;
            }
        }
        /* _________ Ensemble minOccurs = 1, maxOccurs = 1 _________ */
        EnsemblePtr SoloOrEnsemble::getEnsemble() const
        {
            return myEnsemble;
        }
        void SoloOrEnsemble::setEnsemble( const EnsemblePtr& value )
        {
            if ( value )
            {
                myEnsemble = value;
            }
        }
        
        
        /**************** ScoreInstrumentAttributes ****************/
        /* 5947 */
        ScoreInstrumentAttributes::ScoreInstrumentAttributes()
        :id()
        ,hasId( true )
        {}
        
        bool ScoreInstrumentAttributes::hasValues() const
        {
            return hasId;
        }
        
        std::ostream& ScoreInstrumentAttributes::toStream( std::ostream& os ) const
        {
            if ( hasValues() )
            {
                streamAttribute( os, id, "id", hasId );
            }
            return os;
        }
        
		ScoreInstrument::ScoreInstrument()
		:myAttributes( std::make_shared<ScoreInstrumentAttributes>() )
		,myInstrumentName( makeInstrumentName() )
		,myInstrumentAbbreviation( makeInstrumentAbbreviation() )
		,myHasInstrumentAbbreviation( false )
		,myInstrumentSound( makeInstrumentSound() )
		,myHasInstrumentSound( false )
		,mySoloOrEnsemble( makeSoloOrEnsemble() )
        ,myHasSoloOrEnsemble( false )
		,myVirtualInstrument( makeVirtualInstrument() )
		,myHasVirtualInstrument( false )
		{}
		bool ScoreInstrument::hasAttributes() const
		{
			return myAttributes->hasValues();
		}
		std::ostream& ScoreInstrument::streamAttributes( std::ostream& os ) const
		{
			return myAttributes->toStream( os );
			return os;
		}
		std::ostream& ScoreInstrument::streamName( std::ostream& os ) const
		{
			os << "score-instrument";
			return os;
		}
		bool ScoreInstrument::hasContents() const
		{
			return true;
		}
		std::ostream& ScoreInstrument::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
		{
			os << std::endl;
			myInstrumentName->toStream( os, indentLevel+1 );
            if ( myHasInstrumentAbbreviation )
            {
                os << std::endl;
                myInstrumentAbbreviation->toStream( os, indentLevel+1 );
            }
            if ( myHasInstrumentSound )
            {
                os << std::endl;
                myInstrumentSound->toStream( os, indentLevel+1 );
            }
            if ( myHasSoloOrEnsemble )
            {
                os << std::endl;
                mySoloOrEnsemble->streamContents( os, indentLevel+1, isOneLineOnly );
            }
            if ( myHasVirtualInstrument )
            {
                os << std::endl;
                myVirtualInstrument->toStream( os, indentLevel+1 );
            }
            os << std::endl;
            isOneLineOnly = false;
			return os;
		}
		ScoreInstrumentAttributesPtr ScoreInstrument::getAttributes() const
		{
			return myAttributes;
		}
		void ScoreInstrument::setAttributes( const ScoreInstrumentAttributesPtr& value )
		{
			if ( value )
			{
				myAttributes = value;
			}
		}
		/* _________ InstrumentName minOccurs = 1, maxOccurs = 1 _________ */
		InstrumentNamePtr ScoreInstrument::getInstrumentName() const
		{
			return myInstrumentName;
		}
		void ScoreInstrument::setInstrumentName( const InstrumentNamePtr& value )
		{
			if( value )
			{
				myInstrumentName = value;
			}
		}
		/* _________ InstrumentAbbreviation minOccurs = 0, maxOccurs = 1 _________ */
		InstrumentAbbreviationPtr ScoreInstrument::getInstrumentAbbreviation() const
		{
			return myInstrumentAbbreviation;
		}
		void ScoreInstrument::setInstrumentAbbreviation( const InstrumentAbbreviationPtr& value )
		{
			if( value )
			{
				myInstrumentAbbreviation = value;
			}
		}
		bool ScoreInstrument::getHasInstrumentAbbreviation() const
		{
			return myHasInstrumentAbbreviation;
		}
		void ScoreInstrument::setHasInstrumentAbbreviation( const bool value )
		{
			myHasInstrumentAbbreviation = value;
		}
		/* _________ InstrumentSound minOccurs = 0, maxOccurs = 1 _________ */
		InstrumentSoundPtr ScoreInstrument::getInstrumentSound() const
		{
			return myInstrumentSound;
		}
		void ScoreInstrument::setInstrumentSound( const InstrumentSoundPtr& value )
		{
			if( value )
			{
				myInstrumentSound = value;
			}
		}
		bool ScoreInstrument::getHasInstrumentSound() const
		{
			return myHasInstrumentSound;
		}
		void ScoreInstrument::setHasInstrumentSound( const bool value )
		{
			myHasInstrumentSound = value;
		}
		/* _________ SoloOrEnsemble minOccurs = 0, maxOccurs = 1 _________ */
        SoloOrEnsemblePtr ScoreInstrument::getSoloOrEnsemble() const
        {
            return mySoloOrEnsemble;
        }
        void ScoreInstrument::setSoloOrEnsemble( const SoloOrEnsemblePtr& value )
        {
            if ( value )
            {
                mySoloOrEnsemble = value;
            }
        }
        bool ScoreInstrument::getHasSoloOrEnsemble() const
        {
            return myHasSoloOrEnsemble;
        }
        void ScoreInstrument::setHasSoloOrEnsemble( const bool value )
        {
            myHasSoloOrEnsemble = value;
        }
		/* _________ VirtualInstrument minOccurs = 0, maxOccurs = 1 _________ */
		VirtualInstrumentPtr ScoreInstrument::getVirtualInstrument() const
		{
			return myVirtualInstrument;
		}
		void ScoreInstrument::setVirtualInstrument( const VirtualInstrumentPtr& value )
		{
			if( value )
			{
				myVirtualInstrument = value;
			}
		}
		bool ScoreInstrument::getHasVirtualInstrument() const
		{
			return myHasVirtualInstrument;
		}
		void ScoreInstrument::setHasVirtualInstrument( const bool value )
		{
			myHasVirtualInstrument = value;
		}
        
        HarmonyChordGroup::HarmonyChordGroup()
        :myChoice( Choice::root )
        ,myRoot( makeRoot() )
        ,myFunction( makeFunction() )
        ,myKind( makeKind() )
        ,myBass( makeBass() )
        ,myHasBass( false )
        ,myDegreeSet()
        {}
        bool HarmonyChordGroup::hasAttributes() const
        {
            return false;
        }
        std::ostream& HarmonyChordGroup::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& HarmonyChordGroup::streamName( std::ostream& os ) const
        {
            return os;
        }
        bool HarmonyChordGroup::hasContents() const
        {
            return true;
        }
        std::ostream& HarmonyChordGroup::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
        {
            // os << std::endl;
            switch ( myChoice )
            {
                case Choice::root:
                    myRoot->toStream( os, indentLevel );
                    break;
                case Choice::function:
                    myFunction->toStream( os, indentLevel );
                    break;
                default:
                    break;
            }
            os << std::endl;
            myKind->toStream( os, indentLevel );
            if ( myHasBass )
            {
                os << std::endl;
                myBass->toStream( os, indentLevel );
            }
            for ( auto x : myDegreeSet )
            {
                os << std::endl;
                x->toStream( os, indentLevel );
            }
            // os << std::endl;
            isOneLineOnly = false;
            return os;
        }
        /* Choice */
        HarmonyChordGroup::Choice HarmonyChordGroup::getChoice() const
        {
            return myChoice;
        }
        void HarmonyChordGroup::setChoice( const HarmonyChordGroup::Choice value )
        {
            myChoice = value;
        }
        /* _________ Root minOccurs = 1, maxOccurs = 1 _________ */
        RootPtr HarmonyChordGroup::getRoot() const
        {
            return myRoot;
        }
        void HarmonyChordGroup::setRoot( const RootPtr& value )
        {
            if ( value )
            {
                myRoot = value;
            }
        }
        /* _________ Function minOccurs = 1, maxOccurs = 1 _________ */
        FunctionPtr HarmonyChordGroup::getFunction() const
        {
            return myFunction;
        }
        void HarmonyChordGroup::setFunction( const FunctionPtr& value )
        {
            if ( value )
            {
                myFunction = value;
            }
        }
        /* _________ Kind minOccurs = 1, maxOccurs = 1 _________ */
        KindPtr HarmonyChordGroup::getKind() const
        {
            return myKind;
        }
        void HarmonyChordGroup::setKind( const KindPtr& value )
        {
            if ( value )
            {
                myKind = value;
            }
        }
        /* _________ Inversion minOccurs = 0, maxOccurs = 1 _________ */
        InversionPtr HarmonyChordGroup::getInversion() const
        {
            return myInversion;
        }
        void HarmonyChordGroup::setInversion( const InversionPtr& value )
        {
            if ( value )
            {
                myInversion = value;
            }
        }
        bool HarmonyChordGroup::getHasInversion() const
        {
            return myHasInversion;
        }
        void HarmonyChordGroup::setHasInversion( const bool value )
        {
            myHasInversion = value;
        }
        /* _________ Bass minOccurs = 0, maxOccurs = 1 _________ */
        BassPtr HarmonyChordGroup::getBass() const
        {
            return myBass;
        }
        void HarmonyChordGroup::setBass( const BassPtr& value )
        {
            if ( value )
            {
                myBass = value;
            }
        }
        bool HarmonyChordGroup::getHasBass() const
        {
            return myHasBass;
        }
        void HarmonyChordGroup::setHasBass( const bool value )
        {
            myHasBass = value;
        }
        /* _________ Degree minOccurs = 0, maxOccurs = unbounded _________ */
        const DegreeSet& HarmonyChordGroup::getDegreeSet() const
        {
            return myDegreeSet;
        }
        void HarmonyChordGroup::addDegree( const DegreePtr& value )
        {
            if ( value )
            {
                myDegreeSet.push_back( value );
            }
        }
        void HarmonyChordGroup::removeDegree( const DegreeSetIterConst& value )
        {
            if ( value != myDegreeSet.cend() )
            {
                myDegreeSet.erase( value );
            }
        }
        void HarmonyChordGroup::clearDegreeSet()
        {
            myDegreeSet.clear();
        }
        DegreePtr HarmonyChordGroup::getDegree( const DegreeSetIterConst& setIterator ) const
        {
            if( setIterator != myDegreeSet.cend() )
            {
                return *setIterator;
            }
            return DegreePtr();
        }
        /**************** HarmonyAttributes ****************/
        /* 6322 */
        HarmonyAttributes::HarmonyAttributes()
        :type()
        ,printObject( types::YesNo::no )
        ,printFrame( types::YesNo::no )
        ,defaultX()
        ,defaultY()
        ,relativeX()
        ,relativeY()
        ,fontFamily()
        ,fontStyle( types::FontStyle::normal )
        ,fontSize( types::CssFontSize::medium )
        ,fontWeight( types::FontWeight::normal )
        ,color()
        ,placement( types::AboveBelow::below )
        ,hasType( false )
        ,hasPrintObject( false )
        ,hasPrintFrame( false )
        ,hasDefaultX( false )
        ,hasDefaultY( false )
        ,hasRelativeX( false )
        ,hasRelativeY( false )
        ,hasFontFamily( false )
        ,hasFontStyle( false )
        ,hasFontSize( false )
        ,hasFontWeight( false )
        ,hasColor( false )
        ,hasPlacement( false )
        {}
        
        bool HarmonyAttributes::hasValues() const
        {
            return hasType ||
            hasPrintObject ||
            hasPrintFrame ||
            hasDefaultX ||
            hasDefaultY ||
            hasRelativeX ||
            hasRelativeY ||
            hasFontFamily ||
            hasFontStyle ||
            hasFontSize ||
            hasFontWeight ||
            hasColor ||
            hasPlacement;
        }
        
        std::ostream& HarmonyAttributes::toStream( std::ostream& os ) const
        {
            if ( hasValues() )
            {
                streamAttribute( os, type, "type", hasType );
                streamAttribute( os, printObject, "print-object", hasPrintObject );
                streamAttribute( os, printFrame, "print-frame", hasPrintFrame );
                streamAttribute( os, defaultX, "default-x", hasDefaultX );
                streamAttribute( os, defaultY, "default-y", hasDefaultY );
                streamAttribute( os, relativeX, "relative-x", hasRelativeX );
                streamAttribute( os, relativeY, "relative-y", hasRelativeY );
                streamAttribute( os, fontFamily, "font-family", hasFontFamily );
                streamAttribute( os, fontStyle, "font-style", hasFontStyle );
                streamAttribute( os, fontSize, "font-size", hasFontSize );
                streamAttribute( os, fontWeight, "font-weight", hasFontWeight );
                streamAttribute( os, color, "color", hasColor );
                streamAttribute( os, placement, "placement", hasPlacement );
            }
            return os;
        }
        Harmony::Harmony()
        :myAttributes( std::make_shared<HarmonyAttributes>() )
        ,myHarmonyChordGroupSet()
        ,myFrame( makeFrame() )
        ,myHasFrame( false )
        ,myOffset( makeOffset() )
        ,myHasOffset( false )
        ,myEditorialGroup( makeEditorialGroup() )
        ,myStaff( makeStaff() )
        ,myHasStaff( false )
        {
            myHarmonyChordGroupSet.push_back( makeHarmonyChordGroup() );
        }
        bool Harmony::hasAttributes() const
        {
            return myAttributes->hasValues();
        }
        std::ostream& Harmony::streamAttributes( std::ostream& os ) const
        {
            return myAttributes->toStream( os );
        }
        std::ostream& Harmony::streamName( std::ostream& os ) const
        {
            os << "harmony";
            return os;
        }
        bool Harmony::hasContents() const
        {
            return true;
        }
        
        std::ostream& Harmony::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
        {
            for ( auto x : myHarmonyChordGroupSet )
            {
                os << std::endl;
                x->streamContents( os, indentLevel+1, isOneLineOnly );
            }
            if ( myHasFrame )
            {
                os << std::endl;
                myFrame->toStream( os, indentLevel+1 );
            }
            if ( myHasOffset )
            {
                os << std::endl;
                myOffset->toStream( os, indentLevel+1 );
            }
            if ( myEditorialGroup->hasContents() )
            {
                os << std::endl;
                myEditorialGroup->streamContents( os, indentLevel+1, isOneLineOnly );
            }
            if ( myHasStaff )
            {
                os << std::endl;
                myStaff->toStream( os, indentLevel+1 );
            }
            os << std::endl;
            isOneLineOnly = false;
            return os;
        }
        HarmonyAttributesPtr Harmony::getAttributes() const
        {
            return myAttributes;
        }
        void Harmony::setAttributes( const HarmonyAttributesPtr& value )
        {
            if ( value )
            {
                myAttributes = value;
            }
        }
        /* _________ HarmonyChordGroup minOccurs = 1, maxOccurs = unbounded _________ */
        const HarmonyChordGroupSet& Harmony::getHarmonyChordGroupSet() const
        {
            return myHarmonyChordGroupSet;
        }
        void Harmony::addHarmonyChordGroup( const HarmonyChordGroupPtr& value )
        {
            if ( value )
            {
                myHarmonyChordGroupSet.push_back( value );
            }
        }
        void Harmony::removeHarmonyChordGroup( const HarmonyChordGroupSetIterConst& value )
        {
            if ( value != myHarmonyChordGroupSet.cend() )
            {
                if( myHarmonyChordGroupSet.size() > 1 )
                {
                    myHarmonyChordGroupSet.erase( value );
                }
            }
        }
        void Harmony::clearHarmonyChordGroupSet()
        {
            myHarmonyChordGroupSet.clear();
            myHarmonyChordGroupSet.push_back( makeHarmonyChordGroup() );
        }
        HarmonyChordGroupPtr Harmony::getHarmonyChordGroup( const HarmonyChordGroupSetIterConst& setIterator ) const
        {
            if( setIterator != myHarmonyChordGroupSet.cend() )
            {
                return *setIterator;
            }
            return HarmonyChordGroupPtr();
        }
        /* _________ Frame minOccurs = 0, maxOccurs = 1 _________ */
        FramePtr Harmony::getFrame() const
        {
            return myFrame;
        }
        void Harmony::setFrame( const FramePtr& value )
        {
            if ( value )
            {
                myFrame = value;
            }
        }
        bool Harmony::getHasFrame() const
        {
            return myHasFrame;
        }
        void Harmony::setHasFrame( const bool value )
        {
            myHasFrame = value;
        }
        /* _________ Offset minOccurs = 0, maxOccurs = 1 _________ */
        OffsetPtr Harmony::getOffset() const
        {
            return myOffset;
        }
        void Harmony::setOffset( const OffsetPtr& value )
        {
            if ( value )
            {
                myOffset = value;
            }
        }
        bool Harmony::getHasOffset() const
        {
            return myHasOffset;
        }
        void Harmony::setHasOffset( const bool value )
        {
            myHasOffset = value;
        }
        /* _________ EditorialGroup minOccurs = 1, maxOccurs = 1 _________ */
        EditorialGroupPtr Harmony::getEditorialGroup() const
        {
            return myEditorialGroup;
        }
        void Harmony::setEditorialGroup( const EditorialGroupPtr& value )
        {
            if ( value )
            {
                myEditorialGroup = value;
            }
        }
        /* _________ Staff minOccurs = 0, maxOccurs = 1 _________ */
        StaffPtr Harmony::getStaff() const
        {
            return myStaff;
        }
        void Harmony::setStaff( const StaffPtr& value )
        {
            if ( value )
            {
                myStaff = value;
            }
        }
        bool Harmony::getHasStaff() const
        {
            return myHasStaff;
        }
        void Harmony::setHasStaff( const bool value )
        {
            myHasStaff = value;
        }
        
        CreditWordsGroup::CreditWordsGroup()
        :myLinkSet()
        ,myBookmarkSet()
        ,myCreditWords( makeCreditWords() )
        {}
        bool CreditWordsGroup::hasAttributes() const
        {
            return false;
        }
        std::ostream& CreditWordsGroup::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& CreditWordsGroup::streamName( std::ostream& os ) const
        {
            return os;
        }
        bool CreditWordsGroup::hasContents() const
        {
            return true;
        }
        std::ostream& CreditWordsGroup::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
        {
            bool isFirst = true;
            for ( auto x : myLinkSet )
            {
                if ( !isFirst )
                {
                    os << std::endl;
                }
                x->toStream( os, indentLevel );
                isFirst = false;
            }
            for ( auto x : myBookmarkSet )
            {
                if ( !isFirst )
                {
                    os << std::endl;
                }
                x->toStream( os, indentLevel );
                isFirst = false;
            }
            if ( !isFirst )
            {
                os << std::endl;
            }
            myCreditWords->toStream( os, indentLevel );
            isOneLineOnly = false;
            return os;
        }
        /* _________ Link minOccurs = 0, maxOccurs = unbounded _________ */
        const LinkSet& CreditWordsGroup::getLinkSet() const
        {
            return myLinkSet;
        }
        void CreditWordsGroup::addLink( const LinkPtr& value )
        {
            if ( value )
            {
                myLinkSet.push_back( value );
            }
        }
        void CreditWordsGroup::removeLink( const LinkSetIterConst& value )
        {
            if ( value != myLinkSet.cend() )
            {
                myLinkSet.erase( value );
            }
        }
        void CreditWordsGroup::clearLinkSet()
        {
            myLinkSet.clear();
        }
        LinkPtr CreditWordsGroup::getLink( const LinkSetIterConst& setIterator ) const
        {
            if( setIterator != myLinkSet.cend() )
            {
                return *setIterator;
            }
            return LinkPtr();
        }
        /* _________ Bookmark minOccurs = 0, maxOccurs = unbounded _________ */
        const BookmarkSet& CreditWordsGroup::getBookmarkSet() const
        {
            return myBookmarkSet;
        }
        void CreditWordsGroup::addBookmark( const BookmarkPtr& value )
        {
            if ( value )
            {
                myBookmarkSet.push_back( value );
            }
        }
        void CreditWordsGroup::removeBookmark( const BookmarkSetIterConst& value )
        {
            if ( value != myBookmarkSet.cend() )
            {
                myBookmarkSet.erase( value );
            }
        }
        void CreditWordsGroup::clearBookmarkSet()
        {
            myBookmarkSet.clear();
        }
        BookmarkPtr CreditWordsGroup::getBookmark( const BookmarkSetIterConst& setIterator ) const
        {
            if( setIterator != myBookmarkSet.cend() )
            {
                return *setIterator;
            }
            return BookmarkPtr();
        }
        /* _________ CreditWords minOccurs = 1, maxOccurs = 1 _________ */
        CreditWordsPtr CreditWordsGroup::getCreditWords() const
        {
            return myCreditWords;
        }
        void CreditWordsGroup::setCreditWords( const CreditWordsPtr& value )
        {
            if ( value )
            {
                myCreditWords = value;
            }
        }
        CreditChoice::CreditChoice()
        :myChoice( Choice::creditWords )
        ,myCreditImage( makeCreditImage() )
        ,myCreditWordsGroup( makeCreditWordsGroup() )
        {}
        bool CreditChoice::hasAttributes() const
        {
            return false;
        }
        std::ostream& CreditChoice::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& CreditChoice::streamName( std::ostream& os ) const
        {
            return os;
        }
        bool CreditChoice::hasContents() const
        {
            return true;
        }
        std::ostream& CreditChoice::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
        {
            switch ( myChoice )
            {
                case Choice::creditImage:
                    myCreditImage->toStream( os, indentLevel );
                    break;
                case Choice::creditWords:
                    myCreditWordsGroup->streamContents( os, indentLevel, isOneLineOnly );
                    break;
                default:
                    break;
            }
            isOneLineOnly = false;
            return os;
        }
        /* _________ Choice minOccurs = 1, maxOccurs = 1 _________ */
        CreditChoice::Choice CreditChoice::getChoice() const
        {
            return myChoice;
        }
        void CreditChoice::setChoice( const CreditChoice::Choice value )
        {
            myChoice = value;
        }
        /* _________ CreditImage minOccurs = 1, maxOccurs = 1 _________ */
        CreditImagePtr CreditChoice::getCreditImage() const
        {
            return myCreditImage;
        }
        void CreditChoice::setCreditImage( const CreditImagePtr& value )
        {
            if ( value )
            {
                myCreditImage = value;
            }
        }
        /* _________ CreditWordsGroup minOccurs = 1, maxOccurs = 1 _________ */
        CreditWordsGroupPtr CreditChoice::getCreditWordsGroup() const
        {
            return myCreditWordsGroup;
        }
        void CreditChoice::setCreditWordsGroup( const CreditWordsGroupPtr& value )
        {
            if ( value )
            {
                myCreditWordsGroup = value;
            }
        }
        
        /**************** CreditAttributes ****************/
        /* 6383 */
        CreditAttributes::CreditAttributes()
        :page()
        ,hasPage( false )
        {}
        
        bool CreditAttributes::hasValues() const
        {
            return hasPage;
        }
        
        std::ostream& CreditAttributes::toStream( std::ostream& os ) const
        {
            if ( hasValues() )
            {
                streamAttribute( os, page, "page", hasPage );
            }
            return os;
        }
        
		Credit::Credit()
		:myAttributes( std::make_shared<CreditAttributes>() )
		,myCreditTypeSet()
		,myLinkSet()
		,myBookmarkSet()
		,myCreditChoice( makeCreditChoice() )
		{}
		bool Credit::hasAttributes() const
		{
			return myAttributes->hasValues();
		}
		std::ostream& Credit::streamAttributes( std::ostream& os ) const
		{
			return myAttributes->toStream( os );
			return os;
		}
		std::ostream& Credit::streamName( std::ostream& os ) const
		{
			os << "credit";
			return os;
		}
		bool Credit::hasContents() const
		{
			return true;
		}
		std::ostream& Credit::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
		{
			for( auto x : myCreditTypeSet )
            {
                os << std::endl;
                x->toStream( os, indentLevel+1 );
            }
            for( auto x : myLinkSet )
            {
                os << std::endl;
                x->toStream( os, indentLevel+1 );
            }
            for( auto x : myBookmarkSet )
            {
                os << std::endl;
                x->toStream( os, indentLevel+1 );
            }
            os << std::endl;
            myCreditChoice->streamContents( os, indentLevel+1, isOneLineOnly );
            os << std::endl;
            isOneLineOnly = false;
            return os;
		}
		CreditAttributesPtr Credit::getAttributes() const
		{
			return myAttributes;
		}
		void Credit::setAttributes( const CreditAttributesPtr& value )
		{
			if ( value )
			{
				myAttributes = value;
			}
		}
		/* _________ CreditType minOccurs = 0, maxOccurs = unbounded _________ */
		const CreditTypeSet& Credit::getCreditTypeSet() const
		{
			return myCreditTypeSet;
		}
		void Credit::removeCreditType( const CreditTypeSetIterConst& value )
		{
			if ( value != myCreditTypeSet.cend() )
			{
				myCreditTypeSet.erase( value );
			}
		}
		void Credit::addCreditType( const CreditTypePtr& value )
		{
			if ( value )
			{
				myCreditTypeSet.push_back( value );
			}
		}
		void Credit::clearCreditTypeSet()
		{
			myCreditTypeSet.clear();
		}
		CreditTypePtr Credit::getCreditType( const CreditTypeSetIterConst& setIterator ) const
		{
			if( setIterator != myCreditTypeSet.cend() )
			{
				return *setIterator;
			}
			return CreditTypePtr();
		}
		/* _________ Link minOccurs = 0, maxOccurs = unbounded _________ */
		const LinkSet& Credit::getLinkSet() const
		{
			return myLinkSet;
		}
		void Credit::removeLink( const LinkSetIterConst& value )
		{
			if ( value != myLinkSet.cend() )
			{
				myLinkSet.erase( value );
			}
		}
		void Credit::addLink( const LinkPtr& value )
		{
			if ( value )
			{
				myLinkSet.push_back( value );
			}
		}
		void Credit::clearLinkSet()
		{
			myLinkSet.clear();
		}
		LinkPtr Credit::getLink( const LinkSetIterConst& setIterator ) const
		{
			if( setIterator != myLinkSet.cend() )
			{
				return *setIterator;
			}
			return LinkPtr();
		}
		/* _________ Bookmark minOccurs = 0, maxOccurs = unbounded _________ */
		const BookmarkSet& Credit::getBookmarkSet() const
		{
			return myBookmarkSet;
		}
		void Credit::removeBookmark( const BookmarkSetIterConst& value )
		{
			if ( value != myBookmarkSet.cend() )
			{
				myBookmarkSet.erase( value );
			}
		}
		void Credit::addBookmark( const BookmarkPtr& value )
		{
			if ( value )
			{
				myBookmarkSet.push_back( value );
			}
		}
		void Credit::clearBookmarkSet()
		{
			myBookmarkSet.clear();
		}
		BookmarkPtr Credit::getBookmark( const BookmarkSetIterConst& setIterator ) const
		{
			if( setIterator != myBookmarkSet.cend() )
			{
				return *setIterator;
			}
			return BookmarkPtr();
		}
		/* _________ CreditChoice minOccurs = 1, maxOccurs = 1 _________ */
		CreditChoicePtr Credit::getCreditChoice() const
		{
			return myCreditChoice;
		}
		void Credit::setCreditChoice( const CreditChoicePtr& value )
		{
			if( value )
			{
				myCreditChoice = value;
			}
		}
        HarmonicTypeChoice::HarmonicTypeChoice()
        :myChoice( Choice::natural )
        ,myNatural( makeNatural() )
        ,myArtificial( makeArtificial() )
        {}
        bool HarmonicTypeChoice::hasAttributes() const
        {
            return false;
        }
        std::ostream& HarmonicTypeChoice::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& HarmonicTypeChoice::streamName( std::ostream& os ) const
        {
            return os;
        }
        bool HarmonicTypeChoice::hasContents() const
        {
            return true;
        }
        std::ostream& HarmonicTypeChoice::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
        {
            switch ( myChoice )
            {
                case Choice::natural:
                    myNatural->toStream( os, indentLevel );
                    break;
                case Choice::artificial:
                    myArtificial->toStream( os, indentLevel );
                    break;
                default:
                    break;
            }
            isOneLineOnly = false;
            return os;
        }
        /* _________ Choice minOccurs = 1, maxOccurs = 1 _________ */
        HarmonicTypeChoice::Choice HarmonicTypeChoice::getChoice() const
        {
            return myChoice;
        }
        void HarmonicTypeChoice::setChoice( const HarmonicTypeChoice::Choice value )
        {
            myChoice = value;
        }
        /* _________ Natural minOccurs = 1, maxOccurs = 1 _________ */
        NaturalPtr HarmonicTypeChoice::getNatural() const
        {
            return myNatural;
        }
        void HarmonicTypeChoice::setNatural( const NaturalPtr& value )
        {
            if ( value )
            {
                myNatural = value;
            }
        }
        /* _________ Artificial minOccurs = 1, maxOccurs = 1 _________ */
        ArtificialPtr HarmonicTypeChoice::getArtificial() const
        {
            return myArtificial;
        }
        void HarmonicTypeChoice::setArtificial( const ArtificialPtr& value )
        {
            if ( value )
            {
                myArtificial = value;
            }
        }
        
        HarmonicInfoChoice::HarmonicInfoChoice()
        :myChoice( Choice::basePitch )
        ,myBasePitch( makeBasePitch() )
        ,myTouchingPitch( makeTouchingPitch() )
        ,mySoundingPitch( makeSoundingPitch() )
        {}
        bool HarmonicInfoChoice::hasAttributes() const
        {
            return false;
        }
        std::ostream& HarmonicInfoChoice::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& HarmonicInfoChoice::streamName( std::ostream& os ) const
        {
            return os;
        }
        bool HarmonicInfoChoice::hasContents() const
        {
            return true;
        }
        std::ostream& HarmonicInfoChoice::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
        {
            switch ( myChoice )
            {
                case Choice::basePitch:
                    myBasePitch->toStream( os, indentLevel );
                    break;
                case Choice::touchingPitch:
                    myTouchingPitch->toStream( os, indentLevel );
                    break;
                case Choice::soundingPitch:
                    mySoundingPitch->toStream( os, indentLevel );
                    break;
                default:
                    break;
            }
            isOneLineOnly = false;
            return os;
        }
        /* _________ Choice minOccurs = 1, maxOccurs = 1 _________ */
        HarmonicInfoChoice::Choice HarmonicInfoChoice::getChoice() const
        {
            return myChoice;
        }
        void HarmonicInfoChoice::setChoice( const HarmonicInfoChoice::Choice value )
        {
            myChoice = value;
        }
        /* _________ BasePitch minOccurs = 1, maxOccurs = 1 _________ */
        BasePitchPtr HarmonicInfoChoice::getBasePitch() const
        {
            return myBasePitch;
        }
        void HarmonicInfoChoice::setBasePitch( const BasePitchPtr& value )
        {
            if ( value )
            {
                myBasePitch = value;
            }
        }
        /* _________ TouchingPitch minOccurs = 1, maxOccurs = 1 _________ */
        TouchingPitchPtr HarmonicInfoChoice::getTouchingPitch() const
        {
            return myTouchingPitch;
        }
        void HarmonicInfoChoice::setTouchingPitch( const TouchingPitchPtr& value )
        {
            if ( value )
            {
                myTouchingPitch = value;
            }
        }
        /* _________ SoundingPitch minOccurs = 1, maxOccurs = 1 _________ */
        SoundingPitchPtr HarmonicInfoChoice::getSoundingPitch() const
        {
            return mySoundingPitch;
        }
        void HarmonicInfoChoice::setSoundingPitch( const SoundingPitchPtr& value )
        {
            if ( value )
            {
                mySoundingPitch = value;
            }
        }
        
        /**************** HarmonicAttributes ****************/
        /* 5349 */
        HarmonicAttributes::HarmonicAttributes()
        :printObject( types::YesNo::no )
        ,defaultX()
        ,defaultY()
        ,relativeX()
        ,relativeY()
        ,fontFamily()
        ,fontStyle( types::FontStyle::normal )
        ,fontSize( types::CssFontSize::medium )
        ,fontWeight( types::FontWeight::normal )
        ,color()
        ,placement( types::AboveBelow::below )
        ,hasPrintObject( false )
        ,hasDefaultX( false )
        ,hasDefaultY( false )
        ,hasRelativeX( false )
        ,hasRelativeY( false )
        ,hasFontFamily( false )
        ,hasFontStyle( false )
        ,hasFontSize( false )
        ,hasFontWeight( false )
        ,hasColor( false )
        ,hasPlacement( false )
        {}
        
        bool HarmonicAttributes::hasValues() const
        {
            return hasPrintObject ||
            hasDefaultX ||
            hasDefaultY ||
            hasRelativeX ||
            hasRelativeY ||
            hasFontFamily ||
            hasFontStyle ||
            hasFontSize ||
            hasFontWeight ||
            hasColor ||
            hasPlacement;
        }
        
        std::ostream& HarmonicAttributes::toStream( std::ostream& os ) const
        {
            if ( hasValues() )
            {
                streamAttribute( os, printObject, "print-object", hasPrintObject );
                streamAttribute( os, defaultX, "default-x", hasDefaultX );
                streamAttribute( os, defaultY, "default-y", hasDefaultY );
                streamAttribute( os, relativeX, "relative-x", hasRelativeX );
                streamAttribute( os, relativeY, "relative-y", hasRelativeY );
                streamAttribute( os, fontFamily, "font-family", hasFontFamily );
                streamAttribute( os, fontStyle, "font-style", hasFontStyle );
                streamAttribute( os, fontSize, "font-size", hasFontSize );
                streamAttribute( os, fontWeight, "font-weight", hasFontWeight );
                streamAttribute( os, color, "color", hasColor );
                streamAttribute( os, placement, "placement", hasPlacement );
            }
            return os;
        }
        
		Harmonic::Harmonic()
		:myAttributes( std::make_shared<HarmonicAttributes>() )
		,myHarmonicTypeChoice( makeHarmonicTypeChoice() )
        ,myHasHarmonicTypeChoice( false )
        ,myHarmonicInfoChoice( makeHarmonicInfoChoice() )
        ,myHasHarmonicInfoChoice( false )
		{}
		bool Harmonic::hasAttributes() const
		{
			return myAttributes->hasValues();
		}
		std::ostream& Harmonic::streamAttributes( std::ostream& os ) const
		{
			return myAttributes->toStream( os );
			return os;
		}
		std::ostream& Harmonic::streamName( std::ostream& os ) const
		{
			os << "harmonic";
			return os;
		}
		bool Harmonic::hasContents() const
		{
			return myHasHarmonicTypeChoice || myHasHarmonicInfoChoice;
		}
		std::ostream& Harmonic::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
		{
			if ( hasContents() )
            {
                if ( myHasHarmonicTypeChoice )
                {
                    os << std::endl;
                    myHarmonicTypeChoice->streamContents( os, indentLevel+1, isOneLineOnly );
                }
                if ( myHasHarmonicInfoChoice )
                {
                    os << std::endl;
                    myHarmonicInfoChoice->streamContents( os, indentLevel+1, isOneLineOnly );
                }
                os << std::endl;
                isOneLineOnly = false;
            }
            else
            {
                isOneLineOnly = true;
            }
            return os;
		}
        /* _________ HarmonicTypeChoice minOccurs = 0, maxOccurs = 1 _________ */
        HarmonicTypeChoicePtr Harmonic::getHarmonicTypeChoice() const
        {
            return myHarmonicTypeChoice;
        }
        void Harmonic::setHarmonicTypeChoice( const HarmonicTypeChoicePtr& value )
        {
            if ( value )
            {
                myHarmonicTypeChoice = value;
            }
        }
        bool Harmonic::getHasHarmonicTypeChoice() const
        {
            return myHasHarmonicTypeChoice;
        }
        void Harmonic::setHasHarmonicTypeChoice( const bool value )
        {
            myHasHarmonicTypeChoice = value;
        }
        HarmonicAttributesPtr Harmonic::getAttributes() const
        {
            return myAttributes;
        }
        void Harmonic::setAttributes( const HarmonicAttributesPtr& value )
        {
            if ( value )
            {
                myAttributes = value;
            }
        }
        /* _________ HarmonicInfoChoice minOccurs = 0, maxOccurs = 1 _________ */
        HarmonicInfoChoicePtr Harmonic::getHarmonicInfoChoice() const
        {
            return myHarmonicInfoChoice;
        }
        void Harmonic::setHarmonicInfoChoice( const HarmonicInfoChoicePtr& value )
        {
            if ( value )
            {
                myHarmonicInfoChoice = value;
            }
        }
        bool Harmonic::getHasHarmonicInfoChoice() const
        {
            return myHasHarmonicInfoChoice;
        }
        void Harmonic::setHasHarmonicInfoChoice( const bool value )
        {
            myHasHarmonicInfoChoice = value;
        }
        
        
        
        /**************** PrintAttributes ****************/
        /* 6328 */
        PrintAttributes::PrintAttributes()
        :staffSpacing()
        ,newSystem( types::YesNo::no )
        ,newPage( types::YesNo::no )
        ,blankPage()
        ,pageNumber()
        ,hasStaffSpacing( false )
        ,hasNewSystem( false )
        ,hasNewPage( false )
        ,hasBlankPage( false )
        ,hasPageNumber( false )
        {}
        
        bool PrintAttributes::hasValues() const
        {
            return hasStaffSpacing ||
            hasNewSystem ||
            hasNewPage ||
            hasBlankPage ||
            hasPageNumber;
        }
        
        std::ostream& PrintAttributes::toStream( std::ostream& os ) const
        {
            if ( hasValues() )
            {
                streamAttribute( os, staffSpacing, "staff-spacing", hasStaffSpacing );
                streamAttribute( os, newSystem, "new-system", hasNewSystem );
                streamAttribute( os, newPage, "new-page", hasNewPage );
                streamAttribute( os, blankPage, "blank-page", hasBlankPage );
                streamAttribute( os, pageNumber, "page-number", hasPageNumber );
            }
            return os;
        }
        
		Print::Print()
		:myAttributes( std::make_shared<PrintAttributes>() )
		,myLayoutGroup( makeLayoutGroup() )
        ,myMeasureLayout( makeMeasureLayout() )
        ,myHasMeasureLayout( false )
        ,myMeasureNumbering( makeMeasureNumbering() )
        ,myHasMeasureNumbering( false )
        ,myPartNameDisplay( makePartNameDisplay() )
        ,myHasPartNameDisplay( false )
        ,myPartAbbreviationDisplay( makePartAbbreviationDisplay() )
        ,myHasPartAbbreviationDisplay( false )
		{}
		bool Print::hasAttributes() const
		{
			return myAttributes->hasValues();
		}
		std::ostream& Print::streamAttributes( std::ostream& os ) const
		{
			return myAttributes->toStream( os );
			return os;
		}
		std::ostream& Print::streamName( std::ostream& os ) const
		{
			os << "print";
			return os;
		}
		bool Print::hasContents() const
		{
			return myLayoutGroup->hasContents()
            || myHasMeasureLayout
            || myHasMeasureNumbering
            || myHasPartNameDisplay
            || myHasPartAbbreviationDisplay;
		}
		std::ostream& Print::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
		{
            if ( hasContents() )
            {
                if ( myLayoutGroup->hasContents() )
                {
                    os << std::endl;
                    myLayoutGroup->streamContents( os, indentLevel+1, isOneLineOnly );
                }
                if ( myHasMeasureLayout )
                {
                    os << std::endl;
                    myMeasureLayout->toStream( os, indentLevel+1 );
                }
                if ( myHasMeasureNumbering )
                {
                    os << std::endl;
                    myMeasureNumbering->toStream( os, indentLevel+1 );
                }
                if ( myHasPartNameDisplay )
                {
                    os << std::endl;
                    myPartNameDisplay->toStream( os, indentLevel+1 );
                }
                if ( myHasPartAbbreviationDisplay )
                {
                    os << std::endl;
                    myPartAbbreviationDisplay->toStream( os, indentLevel+1 );
                }
                os << std::endl;
                isOneLineOnly = false;
            }
			else
            {
                isOneLineOnly = true;
            }
            return os;
		}
		PrintAttributesPtr Print::getAttributes() const
		{
			return myAttributes;
		}
		void Print::setAttributes( const PrintAttributesPtr& value )
		{
			if ( value )
			{
				myAttributes = value;
			}
		}
        /* _________ LayoutGroup minOccurs = 1, maxOccurs = 1 _________ */
        LayoutGroupPtr Print::getLayoutGroup() const
        {
            return myLayoutGroup;
        }
        void Print::setLayoutGroup( const LayoutGroupPtr& value )
        {
            if ( value )
            {
                myLayoutGroup = value;
            }
        }
        /* _________ MeasureLayout minOccurs = 0, maxOccurs = 1 _________ */
        MeasureLayoutPtr Print::getMeasureLayout() const
        {
            return myMeasureLayout;
        }
        void Print::setMeasureLayout( const MeasureLayoutPtr& value )
        {
            if ( value )
            {
                myMeasureLayout = value;
            }
        }
        bool Print::getHasMeasureLayout() const
        {
            return myHasMeasureLayout;
        }
        void Print::setHasMeasureLayout( const bool value )
        {
            myHasMeasureLayout = value;
        }
        /* _________ MeasureNumbering minOccurs = 0, maxOccurs = 1 _________ */
        MeasureNumberingPtr Print::getMeasureNumbering() const
        {
            return myMeasureNumbering;
        }
        void Print::setMeasureNumbering( const MeasureNumberingPtr& value )
        {
            if ( value )
            {
                myMeasureNumbering = value;
            }
        }
        bool Print::getHasMeasureNumbering() const
        {
            return myHasMeasureNumbering;
        }
        void Print::setHasMeasureNumbering( const bool value )
        {
            myHasMeasureNumbering = value;
        }
        /* _________ PartNameDisplay minOccurs = 0, maxOccurs = 1 _________ */
        PartNameDisplayPtr Print::getPartNameDisplay() const
        {
            return myPartNameDisplay;
        }
        void Print::setPartNameDisplay( const PartNameDisplayPtr& value )
        {
            if ( value )
            {
                myPartNameDisplay = value;
            }
        }
        bool Print::getHasPartNameDisplay() const
        {
            return myHasPartNameDisplay;
        }
        void Print::setHasPartNameDisplay( const bool value )
        {
            myHasPartNameDisplay = value;
        }
        /* _________ PartAbbreviationDisplay minOccurs = 0, maxOccurs = 1 _________ */
        PartAbbreviationDisplayPtr Print::getPartAbbreviationDisplay() const
        {
            return myPartAbbreviationDisplay;
        }
        void Print::setPartAbbreviationDisplay( const PartAbbreviationDisplayPtr& value )
        {
            if ( value )
            {
                myPartAbbreviationDisplay = value;
            }
        }
        bool Print::getHasPartAbbreviationDisplay() const
        {
            return myHasPartAbbreviationDisplay;
        }
        void Print::setHasPartAbbreviationDisplay( const bool value )
        {
            myHasPartAbbreviationDisplay = value;
        }
        
        
        
        /**************** PartGroupAttributes ****************/
        /* 6351 */
        PartGroupAttributes::PartGroupAttributes()
        :type( types::StartStop::start )
        ,number( types::XsToken( "1" ) )
        ,hasType( true )
        ,hasNumber( false )
        {}
        
        bool PartGroupAttributes::hasValues() const
        {
            return hasType ||
            hasNumber;
        }
        
        std::ostream& PartGroupAttributes::toStream( std::ostream& os ) const
        {
            if ( hasValues() )
            {
                streamAttribute( os, type, "type", hasType );
                streamAttribute( os, number, "number", hasNumber );
            }
            return os;
        }
        
		PartGroup::PartGroup()
		:myAttributes( std::make_shared<PartGroupAttributes>() )
		,myGroupName( makeGroupName() )
		,myHasGroupName( false )
		,myGroupNameDisplay( makeGroupNameDisplay() )
		,myHasGroupNameDisplay( false )
		,myGroupAbbreviation( makeGroupAbbreviation() )
		,myHasGroupAbbreviation( false )
		,myGroupAbbreviationDisplay( makeGroupAbbreviationDisplay() )
		,myHasGroupAbbreviationDisplay( false )
		,myGroupSymbol( makeGroupSymbol() )
		,myHasGroupSymbol( false )
		,myGroupBarline( makeGroupBarline() )
		,myHasGroupBarline( false )
		,myGroupTime( makeGroupTime() )
		,myHasGroupTime( false )
        ,myEditorialGroup( makeEditorialGroup() )
		{}
		bool PartGroup::hasAttributes() const
		{
			return myAttributes->hasValues();
		}
		std::ostream& PartGroup::streamAttributes( std::ostream& os ) const
		{
			return myAttributes->toStream( os );
			return os;
		}
		std::ostream& PartGroup::streamName( std::ostream& os ) const
		{
			os << "part-group";
			return os;
		}
		bool PartGroup::hasContents() const
		{
			return myHasGroupName
            || myHasGroupNameDisplay
            || myHasGroupAbbreviation
            || myHasGroupAbbreviationDisplay
            || myHasGroupSymbol
            || myHasGroupBarline
            || myHasGroupTime
            || myEditorialGroup->hasContents();
		}
		std::ostream& PartGroup::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
		{
			if ( hasContents() )
            {
                if ( myHasGroupName )
                {
                    os << std::endl;
                    myGroupName->toStream( os, indentLevel+1 );
                }
                if ( myHasGroupNameDisplay )
                {
                    os << std::endl;
                    myGroupNameDisplay->toStream( os, indentLevel+1 );
                }
                if ( myHasGroupAbbreviation )
                {
                    os << std::endl;
                    myGroupAbbreviation->toStream( os, indentLevel+1 );
                }
                if ( myHasGroupAbbreviationDisplay )
                {
                    os << std::endl;
                    myGroupAbbreviationDisplay->toStream( os, indentLevel+1 );
                }
                if ( myHasGroupSymbol )
                {
                    os << std::endl;
                    myGroupSymbol->toStream( os, indentLevel+1 );
                }
                if ( myHasGroupBarline )
                {
                    os << std::endl;
                    myGroupBarline->toStream( os, indentLevel+1 );
                }
                if ( myHasGroupTime )
                {
                    os << std::endl;
                    myGroupTime->toStream( os, indentLevel+1 );
                }
                if ( myEditorialGroup->hasContents() )
                {
                    os << std::endl;
                    myEditorialGroup->streamContents( os, indentLevel+1, isOneLineOnly );
                }
                os << std::endl;
                isOneLineOnly = false;
            }
            else
            {
                isOneLineOnly = true;
            }
            return os;
		}
		PartGroupAttributesPtr PartGroup::getAttributes() const
		{
			return myAttributes;
		}
		void PartGroup::setAttributes( const PartGroupAttributesPtr& value )
		{
			if ( value )
			{
				myAttributes = value;
			}
		}
		/* _________ GroupName minOccurs = 0, maxOccurs = 1 _________ */
		GroupNamePtr PartGroup::getGroupName() const
		{
			return myGroupName;
		}
		void PartGroup::setGroupName( const GroupNamePtr& value )
		{
			if( value )
			{
				myGroupName = value;
			}
		}
		bool PartGroup::getHasGroupName() const
		{
			return myHasGroupName;
		}
		void PartGroup::setHasGroupName( const bool value )
		{
			myHasGroupName = value;
		}
		/* _________ GroupNameDisplay minOccurs = 0, maxOccurs = 1 _________ */
		GroupNameDisplayPtr PartGroup::getGroupNameDisplay() const
		{
			return myGroupNameDisplay;
		}
		void PartGroup::setGroupNameDisplay( const GroupNameDisplayPtr& value )
		{
			if( value )
			{
				myGroupNameDisplay = value;
			}
		}
		bool PartGroup::getHasGroupNameDisplay() const
		{
			return myHasGroupNameDisplay;
		}
		void PartGroup::setHasGroupNameDisplay( const bool value )
		{
			myHasGroupNameDisplay = value;
		}
        /* _________ GroupAbbreviation minOccurs = 0, maxOccurs = 1 _________ */
		GroupAbbreviationPtr PartGroup::getGroupAbbreviation() const
		{
			return myGroupAbbreviation;
		}
		void PartGroup::setGroupAbbreviation( const GroupAbbreviationPtr& value )
		{
			if( value )
			{
				myGroupAbbreviation = value;
			}
		}
		bool PartGroup::getHasGroupAbbreviation() const
		{
			return myHasGroupAbbreviation;
		}
		void PartGroup::setHasGroupAbbreviation( const bool value )
		{
			myHasGroupAbbreviation = value;
		}
		/* _________ GroupAbbreviationDisplay minOccurs = 0, maxOccurs = 1 _________ */
		GroupAbbreviationDisplayPtr PartGroup::getGroupAbbreviationDisplay() const
		{
			return myGroupAbbreviationDisplay;
		}
		void PartGroup::setGroupAbbreviationDisplay( const GroupAbbreviationDisplayPtr& value )
		{
			if( value )
			{
				myGroupAbbreviationDisplay = value;
			}
		}
		bool PartGroup::getHasGroupAbbreviationDisplay() const
		{
			return myHasGroupAbbreviationDisplay;
		}
		void PartGroup::setHasGroupAbbreviationDisplay( const bool value )
		{
			myHasGroupAbbreviationDisplay = value;
		}
		/* _________ GroupSymbol minOccurs = 0, maxOccurs = 1 _________ */
		GroupSymbolPtr PartGroup::getGroupSymbol() const
		{
			return myGroupSymbol;
		}
		void PartGroup::setGroupSymbol( const GroupSymbolPtr& value )
		{
			if( value )
			{
				myGroupSymbol = value;
			}
		}
		bool PartGroup::getHasGroupSymbol() const
		{
			return myHasGroupSymbol;
		}
		void PartGroup::setHasGroupSymbol( const bool value )
		{
			myHasGroupSymbol = value;
		}
		/* _________ GroupBarline minOccurs = 0, maxOccurs = 1 _________ */
		GroupBarlinePtr PartGroup::getGroupBarline() const
		{
			return myGroupBarline;
		}
		void PartGroup::setGroupBarline( const GroupBarlinePtr& value )
		{
			if( value )
			{
				myGroupBarline = value;
			}
		}
		bool PartGroup::getHasGroupBarline() const
		{
			return myHasGroupBarline;
		}
		void PartGroup::setHasGroupBarline( const bool value )
		{
			myHasGroupBarline = value;
		}
		/* _________ GroupTime minOccurs = 0, maxOccurs = 1 _________ */
		GroupTimePtr PartGroup::getGroupTime() const
		{
			return myGroupTime;
		}
		void PartGroup::setGroupTime( const GroupTimePtr& value )
		{
			if( value )
			{
				myGroupTime = value;
			}
		}
		bool PartGroup::getHasGroupTime() const
		{
			return myHasGroupTime;
		}
		void PartGroup::setHasGroupTime( const bool value )
		{
			myHasGroupTime = value;
		}
		/* _________ EditorialGroup minOccurs = 1, maxOccurs = 1 _________ */
		EditorialGroupPtr PartGroup::getEditorialGroup() const
		{
			return myEditorialGroup;
		}
		void PartGroup::setEditorialGroup( const EditorialGroupPtr& value )
		{
			if( value )
			{
				myEditorialGroup = value;
			}
		}
        TechnicalChoice::TechnicalChoice()
		:myChoice( Choice::upBow )
		,myUpBow( makeUpBow() )
		,myDownBow( makeDownBow() )
		,myHarmonic( makeHarmonic() )
		,myOpenString( makeOpenString() )
		,myThumbPosition( makeThumbPosition() )
		,myFingering( makeFingering() )
		,myPluck( makePluck() )
		,myDoubleTongue( makeDoubleTongue() )
		,myTripleTongue( makeTripleTongue() )
		,myStopped( makeStopped() )
		,mySnapPizzicato( makeSnapPizzicato() )
		,myFret( makeFret() )
		,myString( makeString() )
		,myHammerOn( makeHammerOn() )
		,myPullOff( makePullOff() )
		,myBend( makeBend() )
		,myTap( makeTap() )
		,myHeel( makeHeel() )
		,myToe( makeToe() )
		,myFingernails( makeFingernails() )
		,myHole( makeHole() )
		,myArrow( makeArrow() )
		,myHandbell( makeHandbell() )
		,myOtherTechnical( makeOtherTechnical() )
		{}
		bool TechnicalChoice::hasAttributes() const
		{
			return false;
		}
		std::ostream& TechnicalChoice::streamAttributes( std::ostream& os ) const
		{
			return os;
		}
		std::ostream& TechnicalChoice::streamName( std::ostream& os ) const
		{
			os << "technical";
			return os;
		}
		bool TechnicalChoice::hasContents() const
		{
			return true;
		}
		std::ostream& TechnicalChoice::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
		{
            switch ( myChoice )
            {
                case Choice::upBow:
                {
                    myUpBow->toStream( os, indentLevel );
                }
                    break;
                case Choice::downBow:
                {
                    myDownBow->toStream( os, indentLevel );
                }
                    break;
                case Choice::harmonic:
                {
                    myHarmonic->toStream( os, indentLevel );
                }
                    break;
                case Choice::openString:
                {
                    myOpenString->toStream( os, indentLevel );
                }
                    break;
                case Choice::thumbPosition:
                {
                    myThumbPosition->toStream( os, indentLevel );
                }
                    break;
                case Choice::fingering:
                {
                    myFingering->toStream( os, indentLevel );
                }
                    break;
                case Choice::pluck:
                {
                    myPluck->toStream( os, indentLevel );
                }
                    break;
                case Choice::doubleTongue:
                {
                    myDoubleTongue->toStream( os, indentLevel );
                }
                    break;
                case Choice::tripleTounge:
                {
                    myTripleTongue->toStream( os, indentLevel );
                }
                    break;
                case Choice::stopped:
                {
                    myStopped->toStream( os, indentLevel );
                }
                    break;
                case Choice::snapPizzicato:
                {
                    mySnapPizzicato->toStream( os, indentLevel );
                }
                    break;
                case Choice::fret:
                {
                    myFret->toStream( os, indentLevel );
                }
                    break;
                case Choice::string_:
                {
                    myString->toStream( os, indentLevel );
                }
                    break;
                case Choice::hammerOn:
                {
                    myHammerOn->toStream( os, indentLevel );
                }
                    break;
                case Choice::pullOff:
                {
                    myPullOff->toStream( os, indentLevel );
                }
                    break;
                case Choice::bend:
                {
                    myBend->toStream( os, indentLevel );
                }
                    break;
                case Choice::tap:
                {
                    myTap->toStream( os, indentLevel );
                }
                    break;
                case Choice::heel:
                {
                    myHeel->toStream( os, indentLevel );
                }
                    break;
                case Choice::toe:
                {
                    myToe->toStream( os, indentLevel );
                }
                    break;
                case Choice::fingernails:
                {
                    myFingernails->toStream( os, indentLevel );
                }
                    break;
                case Choice::hole:
                {
                    myHole->toStream( os, indentLevel );
                }
                    break;
                case Choice::arrow:
                {
                    myArrow->toStream( os, indentLevel );
                }
                    break;
                case Choice::handbell:
                {
                    myHandbell->toStream( os, indentLevel );
                }
                    break;
                case Choice::otherTechnical:
                {
                    myOtherTechnical->toStream( os, indentLevel );
                }
                    break;
                default:
                    break;
            }
			isOneLineOnly = false;
			return os;
		}
        /* _________ Choice minOccurs = 1, maxOccurs = 1 _________ */
		TechnicalChoice::Choice TechnicalChoice::getChoice() const
		{
			return myChoice;
		}
		void TechnicalChoice::setChoice( const TechnicalChoice::Choice value )
		{
			myChoice = value;
		}
		/* _________ UpBow minOccurs = 1, maxOccurs = 1 _________ */
		UpBowPtr TechnicalChoice::getUpBow() const
		{
			return myUpBow;
		}
		void TechnicalChoice::setUpBow( const UpBowPtr& value )
		{
			if( value )
			{
				myUpBow = value;
			}
		}
		/* _________ DownBow minOccurs = 1, maxOccurs = 1 _________ */
		DownBowPtr TechnicalChoice::getDownBow() const
		{
			return myDownBow;
		}
		void TechnicalChoice::setDownBow( const DownBowPtr& value )
		{
			if( value )
			{
				myDownBow = value;
			}
		}
		/* _________ Harmonic minOccurs = 1, maxOccurs = 1 _________ */
		HarmonicPtr TechnicalChoice::getHarmonic() const
		{
			return myHarmonic;
		}
		void TechnicalChoice::setHarmonic( const HarmonicPtr& value )
		{
			if( value )
			{
				myHarmonic = value;
			}
		}
		/* _________ OpenString minOccurs = 1, maxOccurs = 1 _________ */
		OpenStringPtr TechnicalChoice::getOpenString() const
		{
			return myOpenString;
		}
		void TechnicalChoice::setOpenString( const OpenStringPtr& value )
		{
			if( value )
			{
				myOpenString = value;
			}
		}
		/* _________ ThumbPosition minOccurs = 1, maxOccurs = 1 _________ */
		ThumbPositionPtr TechnicalChoice::getThumbPosition() const
		{
			return myThumbPosition;
		}
		void TechnicalChoice::setThumbPosition( const ThumbPositionPtr& value )
		{
			if( value )
			{
				myThumbPosition = value;
			}
		}
		/* _________ Fingering minOccurs = 1, maxOccurs = 1 _________ */
		FingeringPtr TechnicalChoice::getFingering() const
		{
			return myFingering;
		}
		void TechnicalChoice::setFingering( const FingeringPtr& value )
		{
			if( value )
			{
				myFingering = value;
			}
		}
		/* _________ Pluck minOccurs = 1, maxOccurs = 1 _________ */
		PluckPtr TechnicalChoice::getPluck() const
		{
			return myPluck;
		}
		void TechnicalChoice::setPluck( const PluckPtr& value )
		{
			if( value )
			{
				myPluck = value;
			}
		}
		/* _________ DoubleTongue minOccurs = 1, maxOccurs = 1 _________ */
		DoubleTonguePtr TechnicalChoice::getDoubleTongue() const
		{
			return myDoubleTongue;
		}
		void TechnicalChoice::setDoubleTongue( const DoubleTonguePtr& value )
		{
			if( value )
			{
				myDoubleTongue = value;
			}
		}
		/* _________ TripleTongue minOccurs = 1, maxOccurs = 1 _________ */
		TripleTonguePtr TechnicalChoice::getTripleTongue() const
		{
			return myTripleTongue;
		}
		void TechnicalChoice::setTripleTongue( const TripleTonguePtr& value )
		{
			if( value )
			{
				myTripleTongue = value;
			}
		}
		/* _________ Stopped minOccurs = 1, maxOccurs = 1 _________ */
		StoppedPtr TechnicalChoice::getStopped() const
		{
			return myStopped;
		}
		void TechnicalChoice::setStopped( const StoppedPtr& value )
		{
			if( value )
			{
				myStopped = value;
			}
		}
		/* _________ SnapPizzicato minOccurs = 1, maxOccurs = 1 _________ */
		SnapPizzicatoPtr TechnicalChoice::getSnapPizzicato() const
		{
			return mySnapPizzicato;
		}
		void TechnicalChoice::setSnapPizzicato( const SnapPizzicatoPtr& value )
		{
			if( value )
			{
				mySnapPizzicato = value;
			}
		}
		/* _________ Fret minOccurs = 1, maxOccurs = 1 _________ */
		FretPtr TechnicalChoice::getFret() const
		{
			return myFret;
		}
		void TechnicalChoice::setFret( const FretPtr& value )
		{
			if( value )
			{
				myFret = value;
			}
		}
		/* _________ String minOccurs = 1, maxOccurs = 1 _________ */
		StringPtr TechnicalChoice::getString() const
		{
			return myString;
		}
		void TechnicalChoice::setString( const StringPtr& value )
		{
			if( value )
			{
				myString = value;
			}
		}
		/* _________ HammerOn minOccurs = 1, maxOccurs = 1 _________ */
		HammerOnPtr TechnicalChoice::getHammerOn() const
		{
			return myHammerOn;
		}
		void TechnicalChoice::setHammerOn( const HammerOnPtr& value )
		{
			if( value )
			{
				myHammerOn = value;
			}
		}
		/* _________ PullOff minOccurs = 1, maxOccurs = 1 _________ */
		PullOffPtr TechnicalChoice::getPullOff() const
		{
			return myPullOff;
		}
		void TechnicalChoice::setPullOff( const PullOffPtr& value )
		{
			if( value )
			{
				myPullOff = value;
			}
		}
		/* _________ Bend minOccurs = 1, maxOccurs = 1 _________ */
		BendPtr TechnicalChoice::getBend() const
		{
			return myBend;
		}
		void TechnicalChoice::setBend( const BendPtr& value )
		{
			if( value )
			{
				myBend = value;
			}
		}
				/* _________ Tap minOccurs = 1, maxOccurs = 1 _________ */
		TapPtr TechnicalChoice::getTap() const
		{
			return myTap;
		}
		void TechnicalChoice::setTap( const TapPtr& value )
		{
			if( value )
			{
				myTap = value;
			}
		}
		/* _________ Heel minOccurs = 1, maxOccurs = 1 _________ */
		HeelPtr TechnicalChoice::getHeel() const
		{
			return myHeel;
		}
		void TechnicalChoice::setHeel( const HeelPtr& value )
		{
			if( value )
			{
				myHeel = value;
			}
		}
		/* _________ Toe minOccurs = 1, maxOccurs = 1 _________ */
		ToePtr TechnicalChoice::getToe() const
		{
			return myToe;
		}
		void TechnicalChoice::setToe( const ToePtr& value )
		{
			if( value )
			{
				myToe = value;
			}
		}
		/* _________ Fingernails minOccurs = 1, maxOccurs = 1 _________ */
		FingernailsPtr TechnicalChoice::getFingernails() const
		{
			return myFingernails;
		}
		void TechnicalChoice::setFingernails( const FingernailsPtr& value )
		{
			if( value )
			{
				myFingernails = value;
			}
		}
		/* _________ Hole minOccurs = 1, maxOccurs = 1 _________ */
		HolePtr TechnicalChoice::getHole() const
		{
			return myHole;
		}
		void TechnicalChoice::setHole( const HolePtr& value )
		{
			if( value )
			{
				myHole = value;
			}
		}
		/* _________ Arrow minOccurs = 1, maxOccurs = 1 _________ */
		ArrowPtr TechnicalChoice::getArrow() const
		{
			return myArrow;
		}
		void TechnicalChoice::setArrow( const ArrowPtr& value )
		{
			if( value )
			{
				myArrow = value;
			}
		}
		/* _________ Handbell minOccurs = 1, maxOccurs = 1 _________ */
		HandbellPtr TechnicalChoice::getHandbell() const
		{
			return myHandbell;
		}
		void TechnicalChoice::setHandbell( const HandbellPtr& value )
		{
			if( value )
			{
				myHandbell = value;
			}
		}
		/* _________ OtherTechnical minOccurs = 1, maxOccurs = 1 _________ */
		OtherTechnicalPtr TechnicalChoice::getOtherTechnical() const
		{
			return myOtherTechnical;
		}
		void TechnicalChoice::setOtherTechnical( const OtherTechnicalPtr& value )
		{
			if( value )
			{
				myOtherTechnical = value;
			}
		}
        
        Technical::Technical()
        :myTechnicalChoiceSet()
        {}
        bool Technical::hasAttributes() const
        {
            return false;
        }
        std::ostream& Technical::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& Technical::streamName( std::ostream& os ) const
        {
            os << "technical";
            return os;
        }
        bool Technical::hasContents() const
        {
            return myTechnicalChoiceSet.size() > 0;
        }
        std::ostream& Technical::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
        {
            if ( hasContents() )
            {
                for ( auto x : myTechnicalChoiceSet )
                {
                    os << std::endl;
                    x->streamContents( os, indentLevel+1, isOneLineOnly );
                }
                os << std::endl;
            }
            else
            {
                isOneLineOnly = false;
            }
            return os;
        }
        /* _________ TechnicalChoice minOccurs = 0, maxOccurs = unbounded _________ */
        const TechnicalChoiceSet& Technical::getTechnicalChoiceSet() const
        {
            return myTechnicalChoiceSet;
        }
        void Technical::addTechnicalChoice( const TechnicalChoicePtr& value )
        {
            if ( value )
            {
                myTechnicalChoiceSet.push_back( value );
            }
        }
        void Technical::removeTechnicalChoice( const TechnicalChoiceSetIterConst& value )
        {
            if ( value != myTechnicalChoiceSet.cend() )
            {
                myTechnicalChoiceSet.erase( value );
            }
        }
        void Technical::clearTechnicalChoiceSet()
        {
            myTechnicalChoiceSet.clear();
        }
        TechnicalChoicePtr Technical::getTechnicalChoice( const TechnicalChoiceSetIterConst& setIterator ) const
        {
            if( setIterator != myTechnicalChoiceSet.cend() )
            {
                return *setIterator;
            }
            return TechnicalChoicePtr();
        }
        /**************** DirectionAttributes ****************/
        /* 6316 */
        DirectionAttributes::DirectionAttributes()
        :placement( types::AboveBelow::below )
        ,directive( types::YesNo::no )
        ,hasPlacement( false )
        ,hasDirective( false )
        {}
        
        bool DirectionAttributes::hasValues() const
        {
            return hasPlacement ||
            hasDirective;
        }
        
        std::ostream& DirectionAttributes::toStream( std::ostream& os ) const
        {
            if ( hasValues() )
            {
                streamAttribute( os, placement, "placement", hasPlacement );
                streamAttribute( os, directive, "directive", hasDirective );
            }
            return os;
        }
        
		Direction::Direction()
		:myAttributes( std::make_shared<DirectionAttributes>() )
		,myDirectionTypeSet()
        ,myOffset( makeOffset() )
        ,myHasOffset( false )
        ,myEditorialVoiceDirectionGroup( makeEditorialVoiceDirectionGroup() )
        ,myStaff( makeStaff() )
        ,myHasStaff( false )
        ,mySound( makeSound() )
        ,myHasSound( false )
		{
            myDirectionTypeSet.push_back( makeDirectionType() );
        }
		bool Direction::hasAttributes() const
		{
			return myAttributes->hasValues();
		}
		std::ostream& Direction::streamAttributes( std::ostream& os ) const
		{
			return myAttributes->toStream( os );
			return os;
		}
		std::ostream& Direction::streamName( std::ostream& os ) const
		{
			os << "direction";
			return os;
		}
		bool Direction::hasContents() const
		{
			return true;
		}
		std::ostream& Direction::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
		{
			for ( auto x : myDirectionTypeSet )
            {
                os << std::endl;
                x->toStream( os, indentLevel+1 );
            }
            if ( myHasOffset )
            {
                os << std::endl;
                myOffset->toStream( os, indentLevel+1 );
            }
            if ( myEditorialVoiceDirectionGroup->hasContents() )
            {
                os << std::endl;
                myEditorialVoiceDirectionGroup->streamContents( os, indentLevel+1, isOneLineOnly );
            }
            if ( myHasStaff )
            {
                os << std::endl;
                myStaff->toStream( os, indentLevel+1 );
            }
            if ( myHasSound )
            {
                os << std::endl;
                mySound->toStream( os, indentLevel+1 );
            }
            os << std::endl;
            isOneLineOnly = false;
            return os;
		}
		DirectionAttributesPtr Direction::getAttributes() const
		{
			return myAttributes;
		}
		void Direction::setAttributes( const DirectionAttributesPtr& value )
		{
			if ( value )
			{
				myAttributes = value;
			}
		}
        /* _________ DirectionType minOccurs = 0, maxOccurs = unbounded _________ */
        const DirectionTypeSet& Direction::getDirectionTypeSet() const
        {
            return myDirectionTypeSet;
        }
        void Direction::addDirectionType( const DirectionTypePtr& value )
        {
            if ( value )
            {
                myDirectionTypeSet.push_back( value );
            }
        }
        void Direction::removeDirectionType( const DirectionTypeSetIterConst& value )
        {
            if ( value != myDirectionTypeSet.cend() )
            {
                if( myDirectionTypeSet.size() > 1 )
                {
                    myDirectionTypeSet.erase( value );
                }
            }
        }
        void Direction::clearDirectionTypeSet()
        {
            myDirectionTypeSet.clear();
            myDirectionTypeSet.push_back( makeDirectionType() );
        }
        DirectionTypePtr Direction::getDirectionType( const DirectionTypeSetIterConst& setIterator ) const
        {
            if( setIterator != myDirectionTypeSet.cend() )
            {
                return *setIterator;
            }
            return DirectionTypePtr();
        }
        /* _________ Offset minOccurs = 0, maxOccurs = 1 _________ */
        OffsetPtr Direction::getOffset() const
        {
            return myOffset;
        }
        void Direction::setOffset( const OffsetPtr& value )
        {
            if ( value )
            {
                myOffset = value;
            }
        }
        bool Direction::getHasOffset() const
        {
            return myHasOffset;
        }
        void Direction::setHasOffset( const bool value )
        {
            myHasOffset = value;
        }
        /* _________ EditorialVoiceDirectionGroup minOccurs = 1, maxOccurs = 1 _________ */
        EditorialVoiceDirectionGroupPtr Direction::getEditorialVoiceDirectionGroup() const
        {
            return myEditorialVoiceDirectionGroup;
        }
        void Direction::setEditorialVoiceDirectionGroup( const EditorialVoiceDirectionGroupPtr& value )
        {
            if ( value )
            {
                myEditorialVoiceDirectionGroup = value;
            }
        }
        /* _________ Staff minOccurs = 0, maxOccurs = 1 _________ */
        StaffPtr Direction::getStaff() const
        {
            return myStaff;
        }
        void Direction::setStaff( const StaffPtr& value )
        {
            if ( value )
            {
                myStaff = value;
            }
        }
        bool Direction::getHasStaff() const
        {
            return myHasStaff;
        }
        void Direction::setHasStaff( const bool value )
        {
            myHasStaff = value;
        }
        /* _________ Sound minOccurs = 0, maxOccurs = 1 _________ */
        SoundPtr Direction::getSound() const
        {
            return mySound;
        }
        void Direction::setSound( const SoundPtr& value )
        {
            if ( value )
            {
                mySound = value;
            }
        }
        bool Direction::getHasSound() const
        {
            return myHasSound;
        }
        void Direction::setHasSound( const bool value )
        {
            myHasSound = value;
        }
        
        /* 6319 */
        
        Properties::Properties()
		:myEditorialGroup( makeEditorialGroup() )
		,myDivisions( makeDivisions() )
		,myHasDivisions( false )
		,myKeySet()
		,myTimeSet()
		,myStaves( makeStaves() )
		,myHasStaves( false )
		,myPartSymbol( makePartSymbol() )
		,myHasPartSymbol( false )
		,myInstruments( makeInstruments() )
		,myHasInstruments( false )
		,myClefSet()
		,myStaffDetailsSet()
		,myTransposeSet()
		,myDirectiveSet()
		,myMeasureStyleSet()
		{}
		bool Properties::hasAttributes() const
		{
			return false;
		}
		std::ostream& Properties::streamAttributes( std::ostream& os ) const
		{
			return os;
		}
		std::ostream& Properties::streamName( std::ostream& os ) const
		{
			os << "attributes";
			return os;
		}
		bool Properties::hasContents() const
		{
			return myEditorialGroup->hasContents()
            || myHasDivisions
            || myKeySet.size() > 0
            || myTimeSet.size() > 0
            || myHasStaves
            || myHasPartSymbol
            || myHasInstruments
            || myClefSet.size() > 0
            || myStaffDetailsSet.size() > 0
            || myTransposeSet.size() > 0
            || myDirectiveSet.size() > 0
            || myMeasureStyleSet.size() > 0;
		}
		std::ostream& Properties::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
		{
			if ( this->hasContents() )
            {
                if ( myEditorialGroup->hasContents() )
                {
                    os << std::endl;
                    myEditorialGroup->streamContents( os, indentLevel+1, isOneLineOnly );
                }
                if ( myHasDivisions )
                {
                    os << std::endl;
                    myDivisions->toStream( os, indentLevel+1 );
                }
                for ( auto x : myKeySet )
                {
                    os << std::endl;
                    x->toStream( os, indentLevel+1 );
                }
                for ( auto x : myTimeSet )
                {
                    os << std::endl;
                    x->toStream( os, indentLevel+1 );
                }
                if ( myHasStaves )
                {
                    os << std::endl;
                    myStaves->toStream( os, indentLevel+1 );
                }
                if ( myHasPartSymbol )
                {
                    os << std::endl;
                    myPartSymbol->toStream( os, indentLevel+1 );
                }
                if ( myHasInstruments )
                {
                    os << std::endl;
                    myInstruments->toStream( os, indentLevel+1 );
                }
                for ( auto x : myClefSet )
                {
                    os << std::endl;
                    x->toStream( os, indentLevel+1 );
                }
                for ( auto x : myStaffDetailsSet )
                {
                    os << std::endl;
                    x->toStream( os, indentLevel+1 );
                }
                for ( auto x : myTransposeSet )
                {
                    os << std::endl;
                    x->toStream( os, indentLevel+1 );
                }
                for ( auto x : myDirectiveSet )
                {
                    os << std::endl;
                    x->toStream( os, indentLevel+1 );
                }
                for ( auto x : myMeasureStyleSet )
                {
                    os << std::endl;
                    x->toStream( os, indentLevel+1 );
                }
                os << std::endl;
                isOneLineOnly = false;
            }
            else
            {
                isOneLineOnly = true;
            }
            return os;
		}
        /* _________ EditorialGroup minOccurs = 1, maxOccurs = 1 _________ */
        EditorialGroupPtr Properties::getEditorialGroup() const
        {
            return myEditorialGroup;
        }
        void Properties::setEditorialGroup( const EditorialGroupPtr& value )
        {
            if ( value )
            {
                myEditorialGroup = value;
            }
        }
		/* _________ Divisions minOccurs = 0, maxOccurs = 1 _________ */
		DivisionsPtr Properties::getDivisions() const
		{
			return myDivisions;
		}
		void Properties::setDivisions( const DivisionsPtr& value )
		{
			if( value )
			{
				myDivisions = value;
			}
		}
		bool Properties::getHasDivisions() const
		{
			return myHasDivisions;
		}
		void Properties::setHasDivisions( const bool value )
		{
			myHasDivisions = value;
		}
		/* _________ Key minOccurs = 0, maxOccurs = unbounded _________ */
		const KeySet& Properties::getKeySet() const
		{
			return myKeySet;
		}
		void Properties::removeKey( const KeySetIterConst& value )
		{
			if ( value != myKeySet.cend() )
			{
				myKeySet.erase( value );
			}
		}
		void Properties::addKey( const KeyPtr& value )
		{
			if ( value )
			{
				myKeySet.push_back( value );
			}
		}
		void Properties::clearKeySet()
		{
			myKeySet.clear();
		}
		KeyPtr Properties::getKey( const KeySetIterConst& setIterator ) const
		{
			if( setIterator != myKeySet.cend() )
			{
				return *setIterator;
			}
			return KeyPtr();
		}
		/* _________ Time minOccurs = 0, maxOccurs = unbounded _________ */
		const TimeSet& Properties::getTimeSet() const
		{
			return myTimeSet;
		}
		void Properties::removeTime( const TimeSetIterConst& value )
		{
			if ( value != myTimeSet.cend() )
			{
				myTimeSet.erase( value );
			}
		}
		void Properties::addTime( const TimePtr& value )
		{
			if ( value )
			{
				myTimeSet.push_back( value );
			}
		}
		void Properties::clearTimeSet()
		{
			myTimeSet.clear();
		}
		TimePtr Properties::getTime( const TimeSetIterConst& setIterator ) const
		{
			if( setIterator != myTimeSet.cend() )
			{
				return *setIterator;
			}
			return TimePtr();
		}
		/* _________ Staves minOccurs = 0, maxOccurs = 1 _________ */
		StavesPtr Properties::getStaves() const
		{
			return myStaves;
		}
		void Properties::setStaves( const StavesPtr& value )
		{
			if( value )
			{
				myStaves = value;
			}
		}
		bool Properties::getHasStaves() const
		{
			return myHasStaves;
		}
		void Properties::setHasStaves( const bool value )
		{
			myHasStaves = value;
		}
		/* _________ PartSymbol minOccurs = 0, maxOccurs = 1 _________ */
		PartSymbolPtr Properties::getPartSymbol() const
		{
			return myPartSymbol;
		}
		void Properties::setPartSymbol( const PartSymbolPtr& value )
		{
			if( value )
			{
				myPartSymbol = value;
			}
		}
		bool Properties::getHasPartSymbol() const
		{
			return myHasPartSymbol;
		}
		void Properties::setHasPartSymbol( const bool value )
		{
			myHasPartSymbol = value;
		}
		/* _________ Instruments minOccurs = 0, maxOccurs = 1 _________ */
		InstrumentsPtr Properties::getInstruments() const
		{
			return myInstruments;
		}
		void Properties::setInstruments( const InstrumentsPtr& value )
		{
			if( value )
			{
				myInstruments = value;
			}
		}
		bool Properties::getHasInstruments() const
		{
			return myHasInstruments;
		}
		void Properties::setHasInstruments( const bool value )
		{
			myHasInstruments = value;
		}
		/* _________ Clef minOccurs = 0, maxOccurs = unbounded _________ */
		const ClefSet& Properties::getClefSet() const
		{
			return myClefSet;
		}
		void Properties::removeClef( const ClefSetIterConst& value )
		{
			if ( value != myClefSet.cend() )
			{
				myClefSet.erase( value );
			}
		}
		void Properties::addClef( const ClefPtr& value )
		{
			if ( value )
			{
				myClefSet.push_back( value );
			}
		}
		void Properties::clearClefSet()
		{
			myClefSet.clear();
		}
		ClefPtr Properties::getClef( const ClefSetIterConst& setIterator ) const
		{
			if( setIterator != myClefSet.cend() )
			{
				return *setIterator;
			}
			return ClefPtr();
		}
		/* _________ StaffDetails minOccurs = 0, maxOccurs = unbounded _________ */
		const StaffDetailsSet& Properties::getStaffDetailsSet() const
		{
			return myStaffDetailsSet;
		}
		void Properties::removeStaffDetails( const StaffDetailsSetIterConst& value )
		{
			if ( value != myStaffDetailsSet.cend() )
			{
				myStaffDetailsSet.erase( value );
			}
		}
		void Properties::addStaffDetails( const StaffDetailsPtr& value )
		{
			if ( value )
			{
				myStaffDetailsSet.push_back( value );
			}
		}
		void Properties::clearStaffDetailsSet()
		{
			myStaffDetailsSet.clear();
		}
		StaffDetailsPtr Properties::getStaffDetails( const StaffDetailsSetIterConst& setIterator ) const
		{
			if( setIterator != myStaffDetailsSet.cend() )
			{
				return *setIterator;
			}
			return StaffDetailsPtr();
		}
		/* _________ Transpose minOccurs = 0, maxOccurs = unbounded _________ */
		const TransposeSet& Properties::getTransposeSet() const
		{
			return myTransposeSet;
		}
		void Properties::removeTranspose( const TransposeSetIterConst& value )
		{
			if ( value != myTransposeSet.cend() )
			{
				myTransposeSet.erase( value );
			}
		}
		void Properties::addTranspose( const TransposePtr& value )
		{
			if ( value )
			{
				myTransposeSet.push_back( value );
			}
		}
		void Properties::clearTransposeSet()
		{
			myTransposeSet.clear();
		}
		TransposePtr Properties::getTranspose( const TransposeSetIterConst& setIterator ) const
		{
			if( setIterator != myTransposeSet.cend() )
			{
				return *setIterator;
			}
			return TransposePtr();
		}
		/* _________ Directive minOccurs = 0, maxOccurs = unbounded _________ */
		const DirectiveSet& Properties::getDirectiveSet() const
		{
			return myDirectiveSet;
		}
		void Properties::removeDirective( const DirectiveSetIterConst& value )
		{
			if ( value != myDirectiveSet.cend() )
			{
				myDirectiveSet.erase( value );
			}
		}
		void Properties::addDirective( const DirectivePtr& value )
		{
			if ( value )
			{
				myDirectiveSet.push_back( value );
			}
		}
		void Properties::clearDirectiveSet()
		{
			myDirectiveSet.clear();
		}
		DirectivePtr Properties::getDirective( const DirectiveSetIterConst& setIterator ) const
		{
			if( setIterator != myDirectiveSet.cend() )
			{
				return *setIterator;
			}
			return DirectivePtr();
		}
		/* _________ MeasureStyle minOccurs = 0, maxOccurs = unbounded _________ */
		const MeasureStyleSet& Properties::getMeasureStyleSet() const
		{
			return myMeasureStyleSet;
		}
		void Properties::removeMeasureStyle( const MeasureStyleSetIterConst& value )
		{
			if ( value != myMeasureStyleSet.cend() )
			{
				myMeasureStyleSet.erase( value );
			}
		}
		void Properties::addMeasureStyle( const MeasureStylePtr& value )
		{
			if ( value )
			{
				myMeasureStyleSet.push_back( value );
			}
		}
		void Properties::clearMeasureStyleSet()
		{
			myMeasureStyleSet.clear();
		}
		MeasureStylePtr Properties::getMeasureStyle( const MeasureStyleSetIterConst& setIterator ) const
		{
			if( setIterator != myMeasureStyleSet.cend() )
			{
				return *setIterator;
			}
			return MeasureStylePtr();
		}
        MidiDeviceInstrumentGroup::MidiDeviceInstrumentGroup()
        :myMidiDevice( makeMidiDevice() )
        ,myHasMidiDevice( false )
        ,myMidiInstrument( makeMidiInstrument() )
        ,myHasMidiInstrument( false )
        {}
        bool MidiDeviceInstrumentGroup::hasAttributes() const
        {
            return false;
        }
        std::ostream& MidiDeviceInstrumentGroup::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& MidiDeviceInstrumentGroup::streamName( std::ostream& os ) const
        {
            return os;
        }
        bool MidiDeviceInstrumentGroup::hasContents() const
        {
            return myHasMidiDevice || myHasMidiInstrument;
        }
        std::ostream& MidiDeviceInstrumentGroup::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
        {
            if ( this->hasContents() )
            {
                if ( myHasMidiDevice )
                {
                    myMidiDevice->toStream( os, indentLevel );
                    if ( myHasMidiInstrument )
                    {
                        os << std::endl;
                    }
                }
                if ( myHasMidiInstrument )
                {
                    myMidiInstrument->toStream( os, indentLevel );
                }
                isOneLineOnly = false;
            }
            else
            {
                isOneLineOnly = true;
            }
            return os;
        }
        /* _________ MidiDevice minOccurs = 0, maxOccurs = 1 _________ */
        MidiDevicePtr MidiDeviceInstrumentGroup::getMidiDevice() const
        {
            return myMidiDevice;
        }
        void MidiDeviceInstrumentGroup::setMidiDevice( const MidiDevicePtr& value )
        {
            if ( value )
            {
                myMidiDevice = value;
            }
        }
        bool MidiDeviceInstrumentGroup::getHasMidiDevice() const
        {
            return myHasMidiDevice;
        }
        void MidiDeviceInstrumentGroup::setHasMidiDevice( const bool value )
        {
            myHasMidiDevice = value;
        }
        /* _________ MidiInstrument minOccurs = 0, maxOccurs = 1 _________ */
        MidiInstrumentPtr MidiDeviceInstrumentGroup::getMidiInstrument() const
        {
            return myMidiInstrument;
        }
        void MidiDeviceInstrumentGroup::setMidiInstrument( const MidiInstrumentPtr& value )
        {
            if ( value )
            {
                myMidiInstrument = value;
            }
        }
        bool MidiDeviceInstrumentGroup::getHasMidiInstrument() const
        {
            return myHasMidiInstrument;
        }
        void MidiDeviceInstrumentGroup::setHasMidiInstrument( const bool value )
        {
            myHasMidiInstrument = value;
        }
        
        
        
        /**************** ScorePartAttributes ****************/
        /* 6396 */
        ScorePartAttributes::ScorePartAttributes()
        :id()
        ,hasId( true )
        {}
        
        bool ScorePartAttributes::hasValues() const
        {
            return hasId;
        }
        
        std::ostream& ScorePartAttributes::toStream( std::ostream& os ) const
        {
            if ( hasValues() )
            {
                streamAttribute( os, id, "id", hasId );
            }
            return os;
        }
        
		ScorePart::ScorePart()
		:myAttributes( std::make_shared<ScorePartAttributes>() )
		,myIdentification( makeIdentification() )
		,myHasIdentification( false )
		,myPartName( makePartName() )
		,myPartNameDisplay( makePartNameDisplay() )
		,myHasPartNameDisplay( false )
		,myPartAbbreviation( makePartAbbreviation() )
		,myHasPartAbbreviation( false )
		,myPartAbbreviationDisplay( makePartAbbreviationDisplay() )
		,myHasPartAbbreviationDisplay( false )
		,myGroupSet()
		,myScoreInstrumentSet()
		,myMidiDeviceInstrumentGroupSet()
		{}
        
		bool ScorePart::hasAttributes() const
		{
			return myAttributes->hasValues();
		}
		std::ostream& ScorePart::streamAttributes( std::ostream& os ) const
		{
			return myAttributes->toStream( os );
			return os;
		}
		std::ostream& ScorePart::streamName( std::ostream& os ) const
		{
			os << "score-part";
			return os;
		}
		bool ScorePart::hasContents() const
		{
			return true;
		}
		std::ostream& ScorePart::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
		{
            if ( myHasIdentification )
            {
                os << std::endl;
                myIdentification->toStream( os, indentLevel+1 );
            }
            os << std::endl;
            myPartName->toStream( os, indentLevel+1 );
            if ( myHasPartNameDisplay )
            {
                os << std::endl;
                myPartNameDisplay->toStream( os, indentLevel+1 );
            }
            
            if ( myHasPartAbbreviation )
            {
                os << std::endl;
                myPartAbbreviation->toStream( os, indentLevel+1 );
            }
            if ( myHasPartAbbreviationDisplay )
            {
                os << std::endl;
                myPartAbbreviationDisplay->toStream( os, indentLevel+1 );
            }
            for ( auto x : myGroupSet )
            {
                os << std::endl;
                x->toStream( os, indentLevel+1 );
            }
            for ( auto x : myScoreInstrumentSet )
            {
                os << std::endl;
                x->toStream( os, indentLevel+1 );
            }
            for ( auto x : myMidiDeviceInstrumentGroupSet )
            {
                if ( x->hasContents() )
                {
                    os << std::endl;
                    x->streamContents( os, indentLevel+1, isOneLineOnly );
                }
            }
            isOneLineOnly = false;
			os << std::endl;
			return os;
		}
		ScorePartAttributesPtr ScorePart::getAttributes() const
		{
			return myAttributes;
		}
		void ScorePart::setAttributes( const ScorePartAttributesPtr& value )
		{
			if ( value )
			{
				myAttributes = value;
			}
		}
		/* _________ Identification minOccurs = 0, maxOccurs = 1 _________ */
		IdentificationPtr ScorePart::getIdentification() const
		{
			return myIdentification;
		}
		void ScorePart::setIdentification( const IdentificationPtr& value )
		{
			if( value )
			{
				myIdentification = value;
			}
		}
		bool ScorePart::getHasIdentification() const
		{
			return myHasIdentification;
		}
		void ScorePart::setHasIdentification( const bool value )
		{
			myHasIdentification = value;
		}
		/* _________ PartName minOccurs = 1, maxOccurs = 1 _________ */
		PartNamePtr ScorePart::getPartName() const
		{
			return myPartName;
		}
		void ScorePart::setPartName( const PartNamePtr& value )
		{
			if( value )
			{
				myPartName = value;
			}
		}
		/* _________ PartNameDisplay minOccurs = 0, maxOccurs = 1 _________ */
		PartNameDisplayPtr ScorePart::getPartNameDisplay() const
		{
			return myPartNameDisplay;
		}
		void ScorePart::setPartNameDisplay( const PartNameDisplayPtr& value )
		{
			if( value )
			{
				myPartNameDisplay = value;
			}
		}
		bool ScorePart::getHasPartNameDisplay() const
		{
			return myHasPartNameDisplay;
		}
		void ScorePart::setHasPartNameDisplay( const bool value )
		{
			myHasPartNameDisplay = value;
		}
		/* _________ PartAbbreviation minOccurs = 0, maxOccurs = 1 _________ */
		PartAbbreviationPtr ScorePart::getPartAbbreviation() const
		{
			return myPartAbbreviation;
		}
		void ScorePart::setPartAbbreviation( const PartAbbreviationPtr& value )
		{
			if( value )
			{
				myPartAbbreviation = value;
			}
		}
		bool ScorePart::getHasPartAbbreviation() const
		{
			return myHasPartAbbreviation;
		}
		void ScorePart::setHasPartAbbreviation( const bool value )
		{
			myHasPartAbbreviation = value;
		}
		/* _________ PartAbbreviationDisplay minOccurs = 0, maxOccurs = 1 _________ */
		PartAbbreviationDisplayPtr ScorePart::getPartAbbreviationDisplay() const
		{
			return myPartAbbreviationDisplay;
		}
		void ScorePart::setPartAbbreviationDisplay( const PartAbbreviationDisplayPtr& value )
		{
			if( value )
			{
				myPartAbbreviationDisplay = value;
			}
		}
		bool ScorePart::getHasPartAbbreviationDisplay() const
		{
			return myHasPartAbbreviationDisplay;
		}
		void ScorePart::setHasPartAbbreviationDisplay( const bool value )
		{
			myHasPartAbbreviationDisplay = value;
		}
		/* _________ Group minOccurs = 0, maxOccurs = unbounded _________ */
		const GroupSet& ScorePart::getGroupSet() const
		{
			return myGroupSet;
		}
		void ScorePart::removeGroup( const GroupSetIterConst& value )
		{
			if ( value != myGroupSet.cend() )
			{
				myGroupSet.erase( value );
			}
		}
		void ScorePart::addGroup( const GroupPtr& value )
		{
			if ( value )
			{
				myGroupSet.push_back( value );
			}
		}
		void ScorePart::clearGroupSet()
		{
			myGroupSet.clear();
		}
		GroupPtr ScorePart::getGroup( const GroupSetIterConst& setIterator ) const
		{
			if( setIterator != myGroupSet.cend() )
			{
				return *setIterator;
			}
			return GroupPtr();
		}
		/* _________ ScoreInstrument minOccurs = 0, maxOccurs = unbounded _________ */
		const ScoreInstrumentSet& ScorePart::getScoreInstrumentSet() const
		{
			return myScoreInstrumentSet;
		}
		void ScorePart::removeScoreInstrument( const ScoreInstrumentSetIterConst& value )
		{
			if ( value != myScoreInstrumentSet.cend() )
			{
				myScoreInstrumentSet.erase( value );
			}
		}
		void ScorePart::addScoreInstrument( const ScoreInstrumentPtr& value )
		{
			if ( value )
			{
				myScoreInstrumentSet.push_back( value );
			}
		}
		void ScorePart::clearScoreInstrumentSet()
		{
			myScoreInstrumentSet.clear();
		}
		ScoreInstrumentPtr ScorePart::getScoreInstrument( const ScoreInstrumentSetIterConst& setIterator ) const
		{
			if( setIterator != myScoreInstrumentSet.cend() )
			{
				return *setIterator;
			}
			return ScoreInstrumentPtr();
		}
		/* _________ MidiDeviceInstrumentGroup minOccurs = 0, maxOccurs = unbounded _________ */
        const MidiDeviceInstrumentGroupSet& ScorePart::getMidiDeviceInstrumentGroupSet() const
        {
            return myMidiDeviceInstrumentGroupSet;
        }
        void ScorePart::addMidiDeviceInstrumentGroup( const MidiDeviceInstrumentGroupPtr& value )
        {
            if ( value )
            {
                myMidiDeviceInstrumentGroupSet.push_back( value );
            }
        }
        void ScorePart::removeMidiDeviceInstrumentGroup( const MidiDeviceInstrumentGroupSetIterConst& value )
        {
            if ( value != myMidiDeviceInstrumentGroupSet.cend() )
            {
                myMidiDeviceInstrumentGroupSet.erase( value );
            }
        }
        void ScorePart::clearMidiDeviceInstrumentGroupSet()
        {
            myMidiDeviceInstrumentGroupSet.clear();
        }
        MidiDeviceInstrumentGroupPtr ScorePart::getMidiDeviceInstrumentGroup( const MidiDeviceInstrumentGroupSetIterConst& setIterator ) const
        {
            if( setIterator != myMidiDeviceInstrumentGroupSet.cend() )
            {
                return *setIterator;
            }
            return MidiDeviceInstrumentGroupPtr();
        }
        
        NotationsChoice::NotationsChoice()
		:myChoice( Choice::tied )
		,myTied( makeTied() )
		,mySlur( makeSlur() )
		,myTuplet( makeTuplet() )
		,myGlissando( makeGlissando() )
		,mySlide( makeSlide() )
		,myOrnaments( makeOrnaments() )
		,myTechnical( makeTechnical() )
		,myArticulations( makeArticulations() )
		,myDynamics( makeDynamics() )
		,myFermata( makeFermata() )
		,myArpeggiate( makeArpeggiate() )
		,myNonArpeggiate( makeNonArpeggiate() )
		,myAccidentalMark( makeAccidentalMark() )
		,myOtherNotation( makeOtherNotation() )
		{}
		bool NotationsChoice::hasAttributes() const
		{
			return false;
		}
		std::ostream& NotationsChoice::streamAttributes( std::ostream& os ) const
		{
			return os;
		}
		std::ostream& NotationsChoice::streamName( std::ostream& os ) const
		{
			return os;
		}
		bool NotationsChoice::hasContents() const
		{
            return true;
            /*
            bool tempHasContents = false;
			switch ( myChoice )
            {
                case Choice::tied:
                    tempHasContents = myTied->hasContents();
                    break;
                case Choice::slur:
                    tempHasContents = mySlur->hasContents();
                    break;
                case Choice::tuplet:
                    tempHasContents = myTuplet->hasContents();
                    break;
                case Choice::glissando:
                    tempHasContents = myGlissando->hasContents();
                    break;
                case Choice::slide:
                    tempHasContents = mySlide->hasContents();
                    break;
                case Choice::ornaments:
                    tempHasContents = myOrnaments->hasContents();
                    break;
                case Choice::technical:
                    tempHasContents = myTechnical->hasContents();
                    break;
                case Choice::articulations:
                    tempHasContents = myArticulations->hasContents();
                    break;
                case Choice::dynamics:
                    tempHasContents = myDynamics->hasContents();
                    break;
                case Choice::fermata:
                    tempHasContents = myFermata->hasContents();
                    break;
                case Choice::arpeggiate:
                    tempHasContents = myArpeggiate->hasContents();
                    break;
                case Choice::nonArpeggiate:
                    tempHasContents = myNonArpeggiate->hasContents();
                    break;
                case Choice::accidentalMark:
                    tempHasContents = myAccidentalMark->hasContents();
                    break;
                case Choice::otherNotation:
                    tempHasContents = myOtherNotation->hasContents();
                    break;
                default:
                    break;
            }
            return tempHasContents;
             */
		}
		std::ostream& NotationsChoice::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
		{
			switch ( myChoice )
            {
                case Choice::tied:
                    myTied->toStream( os, indentLevel );
                    break;
                case Choice::slur:
                    mySlur->toStream( os, indentLevel );
                    break;
                case Choice::tuplet:
                    myTuplet->toStream( os, indentLevel );
                    break;
                case Choice::glissando:
                    myGlissando->toStream( os, indentLevel );
                    break;
                case Choice::slide:
                    mySlide->toStream( os, indentLevel );
                    break;
                case Choice::ornaments:
                    myOrnaments->toStream( os, indentLevel );
                    break;
                case Choice::technical:
                    myTechnical->toStream( os, indentLevel );
                    break;
                case Choice::articulations:
                    myArticulations->toStream( os, indentLevel );
                    break;
                case Choice::dynamics:
                    myDynamics->toStream( os, indentLevel );
                    break;
                case Choice::fermata:
                    myFermata->toStream( os, indentLevel );
                    break;
                case Choice::arpeggiate:
                    myArpeggiate->toStream( os, indentLevel );
                    break;
                case Choice::nonArpeggiate:
                    myNonArpeggiate->toStream( os, indentLevel );
                    break;
                case Choice::accidentalMark:
                    myAccidentalMark->toStream( os, indentLevel );
                    break;
                case Choice::otherNotation:
                    myOtherNotation->toStream( os, indentLevel );
                    break;
                default:
                    break;
            }
            isOneLineOnly = hasContents();
            return os;
		}
        /* _________ Choice minOccurs = 1, maxOccurs = 1 _________ */
        NotationsChoice::Choice NotationsChoice::getChoice() const
        {
            return myChoice;
        }
        void NotationsChoice::setChoice( const NotationsChoice::Choice value )
        {
            myChoice = value;
        }
		/* _________ Tied minOccurs = 1, maxOccurs = 1 _________ */
		TiedPtr NotationsChoice::getTied() const
		{
			return myTied;
		}
		void NotationsChoice::setTied( const TiedPtr& value )
		{
			if( value )
			{
				myTied = value;
			}
		}
		/* _________ Slur minOccurs = 1, maxOccurs = 1 _________ */
		SlurPtr NotationsChoice::getSlur() const
		{
			return mySlur;
		}
		void NotationsChoice::setSlur( const SlurPtr& value )
		{
			if( value )
			{
				mySlur = value;
			}
		}
		/* _________ Tuplet minOccurs = 1, maxOccurs = 1 _________ */
		TupletPtr NotationsChoice::getTuplet() const
		{
			return myTuplet;
		}
		void NotationsChoice::setTuplet( const TupletPtr& value )
		{
			if( value )
			{
				myTuplet = value;
			}
		}
		/* _________ Glissando minOccurs = 1, maxOccurs = 1 _________ */
		GlissandoPtr NotationsChoice::getGlissando() const
		{
			return myGlissando;
		}
		void NotationsChoice::setGlissando( const GlissandoPtr& value )
		{
			if( value )
			{
				myGlissando = value;
			}
		}
		/* _________ Slide minOccurs = 1, maxOccurs = 1 _________ */
		SlidePtr NotationsChoice::getSlide() const
		{
			return mySlide;
		}
		void NotationsChoice::setSlide( const SlidePtr& value )
		{
			if( value )
			{
				mySlide = value;
			}
		}
		/* _________ Ornaments minOccurs = 1, maxOccurs = 1 _________ */
		OrnamentsPtr NotationsChoice::getOrnaments() const
		{
			return myOrnaments;
		}
		void NotationsChoice::setOrnaments( const OrnamentsPtr& value )
		{
			if( value )
			{
				myOrnaments = value;
			}
		}
		/* _________ Technical minOccurs = 1, maxOccurs = 1 _________ */
		TechnicalPtr NotationsChoice::getTechnical() const
		{
			return myTechnical;
		}
		void NotationsChoice::setTechnical( const TechnicalPtr& value )
		{
			if( value )
			{
				myTechnical = value;
			}
		}
		/* _________ Articulations minOccurs = 1, maxOccurs = 1 _________ */
		ArticulationsPtr NotationsChoice::getArticulations() const
		{
			return myArticulations;
		}
		void NotationsChoice::setArticulations( const ArticulationsPtr& value )
		{
			if( value )
			{
				myArticulations = value;
			}
		}
		/* _________ Dynamics minOccurs = 1, maxOccurs = 1 _________ */
		DynamicsPtr NotationsChoice::getDynamics() const
		{
			return myDynamics;
		}
		void NotationsChoice::setDynamics( const DynamicsPtr& value )
		{
			if( value )
			{
				myDynamics = value;
			}
		}
		/* _________ Fermata minOccurs = 1, maxOccurs = 1 _________ */
		FermataPtr NotationsChoice::getFermata() const
		{
			return myFermata;
		}
		void NotationsChoice::setFermata( const FermataPtr& value )
		{
			if( value )
			{
				myFermata = value;
			}
		}
		/* _________ Arpeggiate minOccurs = 1, maxOccurs = 1 _________ */
		ArpeggiatePtr NotationsChoice::getArpeggiate() const
		{
			return myArpeggiate;
		}
		void NotationsChoice::setArpeggiate( const ArpeggiatePtr& value )
		{
			if( value )
			{
				myArpeggiate = value;
			}
		}
		/* _________ NonArpeggiate minOccurs = 1, maxOccurs = 1 _________ */
		NonArpeggiatePtr NotationsChoice::getNonArpeggiate() const
		{
			return myNonArpeggiate;
		}
		void NotationsChoice::setNonArpeggiate( const NonArpeggiatePtr& value )
		{
			if( value )
			{
				myNonArpeggiate = value;
			}
		}
		/* _________ AccidentalMark minOccurs = 1, maxOccurs = 1 _________ */
		AccidentalMarkPtr NotationsChoice::getAccidentalMark() const
		{
			return myAccidentalMark;
		}
		void NotationsChoice::setAccidentalMark( const AccidentalMarkPtr& value )
		{
			if( value )
			{
				myAccidentalMark = value;
			}
		}
		/* _________ OtherNotation minOccurs = 1, maxOccurs = 1 _________ */
		OtherNotationPtr NotationsChoice::getOtherNotation() const
		{
			return myOtherNotation;
		}
		void NotationsChoice::setOtherNotation( const OtherNotationPtr& value )
		{
			if( value )
			{
				myOtherNotation = value;
			}
		}
        /**************** NotationsAttributes ****************/
        /* 5040 */
        NotationsAttributes::NotationsAttributes()
        :printObject( types::YesNo::no )
        ,hasPrintObject( false )
        {}
        
        bool NotationsAttributes::hasValues() const
        {
            return hasPrintObject;
        }
        
        std::ostream& NotationsAttributes::toStream( std::ostream& os ) const
        {
            if ( hasValues() )
            {
                streamAttribute( os, printObject, "print-object", hasPrintObject );
            }
            return os;
        }
        
		Notations::Notations()
		:myAttributes( std::make_shared<NotationsAttributes>() )
		,myEditorialGroup( makeEditorialGroup() )
        ,myNotationsChoiceSet()
		{}
        
		bool Notations::hasAttributes() const
		{
			return myAttributes->hasValues();
		}
		std::ostream& Notations::streamAttributes( std::ostream& os ) const
		{
			return myAttributes->toStream( os );
			return os;
		}
		std::ostream& Notations::streamName( std::ostream& os ) const
		{
			os << "notations";
			return os;
		}
		bool Notations::hasContents() const
		{
			return myEditorialGroup->hasContents() || myNotationsChoiceSet.size() > 0;
		}
		std::ostream& Notations::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
		{
            if ( hasContents() )
            {
                if ( myEditorialGroup->hasContents() )
                {
                    os << std::endl;
                    myEditorialGroup->streamContents( os, indentLevel+1, isOneLineOnly );
                }
                for ( auto x : myNotationsChoiceSet )
                {
                    os << std::endl;
                    x->streamContents( os, indentLevel+1, isOneLineOnly );
                }
                os << std::endl;
                isOneLineOnly = false;
            }
			else
            {
                isOneLineOnly = true;
            }
            return os;
		}
		NotationsAttributesPtr Notations::getAttributes() const
		{
			return myAttributes;
		}
		void Notations::setAttributes( const NotationsAttributesPtr& value )
		{
			if ( value )
			{
				myAttributes = value;
			}
		}
        /* _________ EditorialGroup minOccurs = 1, maxOccurs = 1 _________ */
        EditorialGroupPtr Notations::getEditorialGroup() const
        {
            return myEditorialGroup;
        }
        void Notations::setEditorialGroup( const EditorialGroupPtr& value )
        {
            if ( value )
            {
                myEditorialGroup = value;
            }
        }
        /* _________ NotationsChoice minOccurs = 0, maxOccurs = unbounded _________ */
        const NotationsChoiceSet& Notations::getNotationsChoiceSet() const
        {
            return myNotationsChoiceSet;
        }
        void Notations::addNotationsChoice( const NotationsChoicePtr& value )
        {
            if ( value )
            {
                myNotationsChoiceSet.push_back( value );
            }
        }
        void Notations::removeNotationsChoice( const NotationsChoiceSetIterConst& value )
        {
            if ( value != myNotationsChoiceSet.cend() )
            {
                myNotationsChoiceSet.erase( value );
            }
        }
        void Notations::clearNotationsChoiceSet()
        {
            myNotationsChoiceSet.clear();
        }
        NotationsChoicePtr Notations::getNotationsChoice( const NotationsChoiceSetIterConst& setIterator ) const
        {
            if( setIterator != myNotationsChoiceSet.cend() )
            {
                return *setIterator;
            }
            return NotationsChoicePtr();
        }
        
        FullNoteTypeChoice::FullNoteTypeChoice()
        :myChoice( Choice::pitch )
        ,myPitch( makePitch() )
        ,myUnpitched( makeUnpitched() )
        ,myRest( makeRest() )
        {}
        
        bool FullNoteTypeChoice::hasAttributes() const
        {
            return false;
        }
        std::ostream& FullNoteTypeChoice::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& FullNoteTypeChoice::streamName( std::ostream& os ) const
        {
            return os;
        }
        bool FullNoteTypeChoice::hasContents() const
        {
            return true;
        }
        std::ostream& FullNoteTypeChoice::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
        {
            switch ( myChoice )
            {
                case Choice::pitch:
                    myPitch->toStream( os, indentLevel );
                    break;
                case Choice::unpitched:
                    myUnpitched->toStream( os, indentLevel );
                    break;
                case Choice::rest:
                    myRest->toStream( os, indentLevel );
                    break;
                default:
                    break;
            }
            return os;
        }
        /* _________ Choice minOccurs = 1, maxOccurs = 1 _________ */
        FullNoteTypeChoice::Choice FullNoteTypeChoice::getChoice() const
        {
            return myChoice;
        }
        void FullNoteTypeChoice::setChoice( const FullNoteTypeChoice::Choice value )
        {
            myChoice = value;
        }
        /* _________ Pitch minOccurs = 1, maxOccurs = 1 _________ */
        PitchPtr FullNoteTypeChoice::getPitch() const
        {
            return myPitch;
        }
        void FullNoteTypeChoice::setPitch( const PitchPtr& value )
        {
            if ( value )
            {
                myPitch = value;
            }
        }
        /* _________ Unpitched minOccurs = 1, maxOccurs = 1 _________ */
        UnpitchedPtr FullNoteTypeChoice::getUnpitched() const
        {
            return myUnpitched;
        }
        void FullNoteTypeChoice::setUnpitched( const UnpitchedPtr& value )
        {
            if ( value )
            {
                myUnpitched = value;
            }
        }
        /* _________ Rest minOccurs = 1, maxOccurs = 1 _________ */
        RestPtr FullNoteTypeChoice::getRest() const
        {
            return myRest;
        }
        void FullNoteTypeChoice::setRest( const RestPtr& value )
        {
            if ( value )
            {
                myRest = value;
            }
        }
        
        FullNoteGroup::FullNoteGroup()
        :myChord( makeChord() )
        ,myHasChord( false )
        ,myFullNoteTypeChoice( makeFullNoteTypeChoice() )
        {}
        bool FullNoteGroup::hasAttributes() const
        {
            return false;
        }
        std::ostream& FullNoteGroup::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& FullNoteGroup::streamName( std::ostream& os ) const
        {
            return os;
        }
        bool FullNoteGroup::hasContents() const
        {
            return true;
        }
        std::ostream& FullNoteGroup::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
        {
            if ( myHasChord )
            {
                myChord->toStream( os, indentLevel );
                os << std::endl;
            }
            myFullNoteTypeChoice->streamContents( os, indentLevel, isOneLineOnly );
            isOneLineOnly = false;
            return os;
        }
        /* _________ Chord minOccurs = 0, maxOccurs = 1 _________ */
        ChordPtr FullNoteGroup::getChord() const
        {
            return myChord;
        }
        void FullNoteGroup::setChord( const ChordPtr& value )
        {
            if ( value )
            {
                myChord = value;
            }
        }
        bool FullNoteGroup::getHasChord() const
        {
            return myHasChord;
        }
        void FullNoteGroup::setHasChord( const bool value )
        {
            myHasChord = value;
        }
        /* _________ FullNoteTypeChoice minOccurs = 1, maxOccurs = 1 _________ */
        FullNoteTypeChoicePtr FullNoteGroup::getFullNoteTypeChoice() const
        {
            return myFullNoteTypeChoice;
        }
        void FullNoteGroup::setFullNoteTypeChoice( const FullNoteTypeChoicePtr& value )
        {
            if ( value )
            {
                myFullNoteTypeChoice = value;
            }
        }
        
        GraceNoteGroup::GraceNoteGroup()
        :myGrace( makeGrace() )
        ,myFullNoteGroup( makeFullNoteGroup() )
        ,myTieSet()
        {}
        bool GraceNoteGroup::hasAttributes() const
        {
            return false;
        }
        std::ostream& GraceNoteGroup::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& GraceNoteGroup::streamName( std::ostream& os ) const
        {
            return os;
        }
        bool GraceNoteGroup::hasContents() const
        {
            return true;
        }
        std::ostream& GraceNoteGroup::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
        {
            myGrace->toStream( os, indentLevel );
            os << std::endl;
            myFullNoteGroup->streamContents( os, indentLevel, isOneLineOnly );
            for ( auto x : myTieSet )
            {
                os << std::endl;
                x->toStream( os, indentLevel );
            }
            isOneLineOnly = false;
            return os;
        }
        /* _________ Grace minOccurs = 1, maxOccurs = 1 _________ */
        GracePtr GraceNoteGroup::getGrace() const
        {
            return myGrace;
        }
        void GraceNoteGroup::setGrace( const GracePtr& value )
        {
            if ( value )
            {
                myGrace = value;
            }
        }
        /* _________ FullNoteGroup minOccurs = 1, maxOccurs = 1 _________ */
        FullNoteGroupPtr GraceNoteGroup::getFullNoteGroup() const
        {
            return myFullNoteGroup;
        }
        void GraceNoteGroup::setFullNoteGroup( const FullNoteGroupPtr& value )
        {
            if ( value )
            {
                myFullNoteGroup = value;
            }
        }
        /* _________ Tie minOccurs = 0, maxOccurs = 2 _________ */
        const TieSet& GraceNoteGroup::getTieSet() const
        {
            return myTieSet;
        }
        void GraceNoteGroup::addTie( const TiePtr& value )
        {
            if ( value )
            {
                if ( myTieSet.size() < 2 )
                {
                    myTieSet.push_back( value );
                }
            }
        }
        void GraceNoteGroup::removeTie( const TieSetIterConst& value )
        {
            if ( value != myTieSet.cend() )
            {
                myTieSet.erase( value );
            }
        }
        void GraceNoteGroup::clearTieSet()
        {
            myTieSet.clear();
        }
        TiePtr GraceNoteGroup::getTie( const TieSetIterConst& setIterator ) const
        {
            if( setIterator != myTieSet.cend() )
            {
                return *setIterator;
            }
            return TiePtr();
        }
        
        CueNoteGroup::CueNoteGroup()
        :myCue( makeCue() )
        ,myFullNoteGroup( makeFullNoteGroup() )
        ,myDuration( makeDuration() )
        {}
        bool CueNoteGroup::hasAttributes() const
        {
            return false;
        }
        std::ostream& CueNoteGroup::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& CueNoteGroup::streamName( std::ostream& os ) const
        {
            return os;
        }
        bool CueNoteGroup::hasContents() const
        {
            return true;
        }
        std::ostream& CueNoteGroup::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
        {
            myCue->toStream( os, indentLevel );
            os << std::endl;
            myFullNoteGroup->streamContents( os, indentLevel, isOneLineOnly );
            os << std::endl;
            myDuration->toStream( os, indentLevel );
            isOneLineOnly = false;
            return os;
        }
        /* _________ Cue minOccurs = 1, maxOccurs = 1 _________ */
        CuePtr CueNoteGroup::getCue() const
        {
            return myCue;
        }
        void CueNoteGroup::setCue( const CuePtr& value )
        {
            if ( value )
            {
                myCue = value;
            }
        }
        /* _________ FullNoteGroup minOccurs = 1, maxOccurs = 1 _________ */
        FullNoteGroupPtr CueNoteGroup::getFullNoteGroup() const
        {
            return myFullNoteGroup;
        }
        void CueNoteGroup::setFullNoteGroup( const FullNoteGroupPtr& value )
        {
            if ( value )
            {
                myFullNoteGroup = value;
            }
        }
        /* _________ Duration minOccurs = 1, maxOccurs = 1 _________ */
        DurationPtr CueNoteGroup::getDuration() const
        {
            return myDuration;
        }
        void CueNoteGroup::setDuration( const DurationPtr& value )
        {
            if ( value )
            {
                myDuration = value;
            }
        }
        NormalNoteGroup::NormalNoteGroup()
        :myFullNoteGroup( makeFullNoteGroup() )
        ,myDuration( makeDuration() )
        ,myTieSet()
        {}
        bool NormalNoteGroup::hasAttributes() const
        {
            return false;
        }
        std::ostream& NormalNoteGroup::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& NormalNoteGroup::streamName( std::ostream& os ) const
        {
            return os;
        }
        bool NormalNoteGroup::hasContents() const
        {
            return true;
        }
        std::ostream& NormalNoteGroup::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
        {
            myFullNoteGroup->streamContents( os, indentLevel, isOneLineOnly );
            os << std::endl;
            myDuration->toStream( os, indentLevel );
            for ( auto x : myTieSet )
            {
                os << std::endl;
                x->toStream( os, indentLevel );
            }
            return os;
        }
        /* _________ FullNoteGroup minOccurs = 1, maxOccurs = 1 _________ */
        FullNoteGroupPtr NormalNoteGroup::getFullNoteGroup() const
        {
            return myFullNoteGroup;
        }
        void NormalNoteGroup::setFullNoteGroup( const FullNoteGroupPtr& value )
        {
            if ( value )
            {
                myFullNoteGroup = value;
            }
        }
        /* _________ Duration minOccurs = 1, maxOccurs = 1 _________ */
        DurationPtr NormalNoteGroup::getDuration() const
        {
            return myDuration;
        }
        void NormalNoteGroup::setDuration( const DurationPtr& value )
        {
            if ( value )
            {
                myDuration = value;
            }
        }
        /* _________ Tie minOccurs = 0, maxOccurs = 2 _________ */
        const TieSet& NormalNoteGroup::getTieSet() const
        {
            return myTieSet;
        }
        void NormalNoteGroup::addTie( const TiePtr& value )
        {
            if ( value )
            {
                if ( myTieSet.size() < 2 )
                {
                    myTieSet.push_back( value );
                }
            }
        }
        void NormalNoteGroup::removeTie( const TieSetIterConst& value )
        {
            if ( value != myTieSet.cend() )
            {
                myTieSet.erase( value );
            }
        }
        void NormalNoteGroup::clearTieSet()
        {
            myTieSet.clear();
        }
        TiePtr NormalNoteGroup::getTie( const TieSetIterConst& setIterator ) const
        {
            if( setIterator != myTieSet.cend() )
            {
                return *setIterator;
            }
            return TiePtr();
        }
        NoteChoice::NoteChoice()
        :myChoice( Choice::normal )
        ,myGraceNoteGroup( makeGraceNoteGroup() )
        ,myCueNoteGroup( makeCueNoteGroup() )
        ,myNormalNoteGroup( makeNormalNoteGroup() )
        {}
        bool NoteChoice::hasAttributes() const
        {
            return false;
        }
        std::ostream& NoteChoice::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& NoteChoice::streamName( std::ostream& os ) const
        {
            return os;
        }
        bool NoteChoice::hasContents() const
        {
            return true;
        }
        std::ostream& NoteChoice::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
        {
            switch ( myChoice )
            {
                case Choice::grace:
                    myGraceNoteGroup->streamContents( os, indentLevel, isOneLineOnly );
                    break;
                case Choice::cue:
                    myCueNoteGroup->streamContents( os, indentLevel, isOneLineOnly );
                    break;
                case Choice::normal:
                    myNormalNoteGroup->streamContents( os, indentLevel, isOneLineOnly );
                    break;
                default:
                    break;
            }
            isOneLineOnly = false;
            return os;
        }
        /* _________ Choice minOccurs = 1, maxOccurs = 1 _________ */
        NoteChoice::Choice NoteChoice::getChoice() const
        {
            return myChoice;
        }
        void NoteChoice::setChoice( const NoteChoice::Choice value )
        {
            myChoice = value;
        }
        /* _________ GraceNoteGroup minOccurs = 1, maxOccurs = 1 _________ */
        GraceNoteGroupPtr NoteChoice::getGraceNoteGroup() const
        {
            return myGraceNoteGroup;
        }
        void NoteChoice::setGraceNoteGroup( const GraceNoteGroupPtr& value )
        {
            if ( value )
            {
                myGraceNoteGroup = value;
            }
        }
        /* _________ CueNoteGroup minOccurs = 1, maxOccurs = 1 _________ */
        CueNoteGroupPtr NoteChoice::getCueNoteGroup() const
        {
            return myCueNoteGroup;
        }
        void NoteChoice::setCueNoteGroup( const CueNoteGroupPtr& value )
        {
            if ( value )
            {
                myCueNoteGroup = value;
            }
        }
        /* _________ NormalNoteGroup minOccurs = 1, maxOccurs = 1 _________ */
        NormalNoteGroupPtr NoteChoice::getNormalNoteGroup() const
        {
            return myNormalNoteGroup;
        }
        void NoteChoice::setNormalNoteGroup( const NormalNoteGroupPtr& value )
        {
            if ( value )
            {
                myNormalNoteGroup = value;
            }
        }
        
        
        
        /**************** NoteAttributes ****************/
        /* 6307 */
        NoteAttributes::NoteAttributes()
        :defaultX()
        ,defaultY()
        ,relativeX()
        ,relativeY()
        ,fontFamily()
        ,fontStyle( types::FontStyle::normal )
        ,fontSize( types::CssFontSize::medium )
        ,fontWeight( types::FontWeight::normal )
        ,color()
        ,printObject( types::YesNo::no )
        ,printDot( types::YesNo::no )
        ,printSpacing( types::YesNo::no )
        ,printLyric( types::YesNo::no )
        ,dynamics()
        ,endDynamics()
        ,attack()
        ,release()
        ,timeOnly()
        ,pizzicato( types::YesNo::no )
        ,hasDefaultX( false )
        ,hasDefaultY( false )
        ,hasRelativeX( false )
        ,hasRelativeY( false )
        ,hasFontFamily( false )
        ,hasFontStyle( false )
        ,hasFontSize( false )
        ,hasFontWeight( false )
        ,hasColor( false )
        ,hasPrintObject( false )
        ,hasPrintDot( false )
        ,hasPrintSpacing( false )
        ,hasPrintLyric( false )
        ,hasDynamics( false )
        ,hasEndDynamics( false )
        ,hasAttack( false )
        ,hasRelease( false )
        ,hasTimeOnly( false )
        ,hasPizzicato( false )
        {}
        
        bool NoteAttributes::hasValues() const
        {
            return hasDefaultX ||
            hasDefaultY ||
            hasRelativeX ||
            hasRelativeY ||
            hasFontFamily ||
            hasFontStyle ||
            hasFontSize ||
            hasFontWeight ||
            hasColor ||
            hasPrintObject ||
            hasPrintDot ||
            hasPrintSpacing ||
            hasPrintLyric ||
            hasDynamics ||
            hasEndDynamics ||
            hasAttack ||
            hasRelease ||
            hasTimeOnly ||
            hasPizzicato;
        }
        
        std::ostream& NoteAttributes::toStream( std::ostream& os ) const
        {
            if ( hasValues() )
            {
                streamAttribute( os, defaultX, "default-x", hasDefaultX );
                streamAttribute( os, defaultY, "default-y", hasDefaultY );
                streamAttribute( os, relativeX, "relative-x", hasRelativeX );
                streamAttribute( os, relativeY, "relative-y", hasRelativeY );
                streamAttribute( os, fontFamily, "font-family", hasFontFamily );
                streamAttribute( os, fontStyle, "font-style", hasFontStyle );
                streamAttribute( os, fontSize, "font-size", hasFontSize );
                streamAttribute( os, fontWeight, "font-weight", hasFontWeight );
                streamAttribute( os, color, "color", hasColor );
                streamAttribute( os, printObject, "print-object", hasPrintObject );
                streamAttribute( os, printDot, "print-dot", hasPrintDot );
                streamAttribute( os, printSpacing, "print-spacing", hasPrintSpacing );
                streamAttribute( os, printLyric, "print-lyric", hasPrintLyric );
                streamAttribute( os, dynamics, "dynamics", hasDynamics );
                streamAttribute( os, endDynamics, "end-dynamics", hasEndDynamics );
                streamAttribute( os, attack, "attack", hasAttack );
                streamAttribute( os, release, "release", hasRelease );
                streamAttribute( os, timeOnly, "time-only", hasTimeOnly );
                streamAttribute( os, pizzicato, "pizzicato", hasPizzicato );
            }
            return os;
        }
        
		Note::Note()
		:myAttributes( std::make_shared<NoteAttributes>() )
		,myNoteChoice( makeNoteChoice() )
		,myInstrument( makeInstrument() )
		,myHasInstrument( false )
        ,myEditorialVoiceGroup( makeEditorialVoiceGroup() )
		,myType( makeType() )
		,myHasType( false )
		,myDotSet()
		,myAccidental( makeAccidental() )
		,myHasAccidental( false )
		,myTimeModification( makeTimeModification() )
		,myHasTimeModification( false )
		,myStem( makeStem() )
		,myHasStem( false )
		,myNotehead( makeNotehead() )
		,myHasNotehead( false )
		,myNoteheadText( makeNoteheadText() )
		,myHasNoteheadText( false )
        ,myStaff( makeStaff() )
		,myBeamSet()
		,myNotationsSet()
		,myLyricSet()
		,myPlay( makePlay() )
		,myHasPlay( false )
		{}
		bool Note::hasAttributes() const
		{
			return myAttributes->hasValues();
		}
		std::ostream& Note::streamAttributes( std::ostream& os ) const
		{
			return myAttributes->toStream( os );
			return os;
		}
		std::ostream& Note::streamName( std::ostream& os ) const
		{
			os << "note";
			return os;
		}
		bool Note::hasContents() const
		{
			return true;
		}
		std::ostream& Note::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
		{
			os << std::endl;
            myNoteChoice->streamContents( os, indentLevel+1, isOneLineOnly );
            if ( myHasInstrument )
            {
                os << std::endl;
                myInstrument->toStream( os, indentLevel+1 );
            }
            if ( myEditorialVoiceGroup->hasContents() )
            {
                os << std::endl;
                myEditorialVoiceGroup->streamContents( os, indentLevel+1, isOneLineOnly );
            }
            if ( myHasType )
            {
                os << std::endl;
                myType->toStream( os, indentLevel+1 );
            }
            for ( auto x : myDotSet )
            {
                os << std::endl;
                x->toStream( os, indentLevel+1 );
            }
            if ( myHasAccidental )
            {
                os << std::endl;
                myAccidental->toStream( os, indentLevel+1 );
            }
            if ( myHasTimeModification )
            {
                os << std::endl;
                myTimeModification->toStream( os, indentLevel+1 );
            }
            if ( myHasStem )
            {
                os << std::endl;
                myStem->toStream( os, indentLevel+1 );
            }
            if ( myHasNotehead )
            {
                os << std::endl;
                myNotehead->toStream( os, indentLevel+1 );
            }
            if ( myHasNoteheadText )
            {
                os << std::endl;
                myNoteheadText->toStream( os, indentLevel+1 );
            }
            if ( myHasStaff )
            {
                os << std::endl;
                myStaff->toStream( os, indentLevel+1 );
            }
            for ( auto x : myBeamSet )
            {
                os << std::endl;
                x->toStream( os, indentLevel+1 );
            }
            for ( auto x : myNotationsSet )
            {
                os << std::endl;
                x->toStream( os, indentLevel+1 );
            }
            for ( auto x : myLyricSet )
            {
                os << std::endl;
                x->toStream( os, indentLevel+1 );
            }
            if ( myHasPlay )
            {
                os << std::endl;
                myPlay->toStream( os, indentLevel+1 );
            }
			isOneLineOnly = false;
			os << std::endl;
			return os;
		}
		NoteAttributesPtr Note::getAttributes() const
		{
			return myAttributes;
		}
		void Note::setAttributes( const NoteAttributesPtr& value )
		{
			if ( value )
			{
				myAttributes = value;
			}
		}
		/* _________ NoteChoice minOccurs = 1, maxOccurs = 1 _________ */
		NoteChoicePtr Note::getNoteChoice() const
		{
			return myNoteChoice;
		}
		void Note::setNoteChoice( const NoteChoicePtr& value )
		{
			if( value )
			{
				myNoteChoice = value;
			}
		}
		/* _________ Instrument minOccurs = 0, maxOccurs = 1 _________ */
		InstrumentPtr Note::getInstrument() const
		{
			return myInstrument;
		}
		void Note::setInstrument( const InstrumentPtr& value )
		{
			if( value )
			{
				myInstrument = value;
			}
		}
		bool Note::getHasInstrument() const
		{
			return myHasInstrument;
		}
		void Note::setHasInstrument( const bool value )
		{
			myHasInstrument = value;
		}
        /* _________ EditorialVoiceGroup minOccurs = 1, maxOccurs = 1 _________ */
        EditorialVoiceGroupPtr Note::getEditorialVoiceGroup() const
        {
            return myEditorialVoiceGroup;
        }
        void Note::setEditorialVoiceGroup( const EditorialVoiceGroupPtr& value )
        {
            if ( value )
            {
                myEditorialVoiceGroup = value;
            }
        }
		/* _________ Type minOccurs = 0, maxOccurs = 1 _________ */
		TypePtr Note::getType() const
		{
			return myType;
		}
		void Note::setType( const TypePtr& value )
		{
			if( value )
			{
				myType = value;
			}
		}
		bool Note::getHasType() const
		{
			return myHasType;
		}
		void Note::setHasType( const bool value )
		{
			myHasType = value;
		}
		/* _________ Dot minOccurs = 0, maxOccurs = unbounded _________ */
		const DotSet& Note::getDotSet() const
		{
			return myDotSet;
		}
		void Note::removeDot( const DotSetIterConst& value )
		{
			if ( value != myDotSet.cend() )
			{
				myDotSet.erase( value );
			}
		}
		void Note::addDot( const DotPtr& value )
		{
			if ( value )
			{
				myDotSet.push_back( value );
			}
		}
		void Note::clearDotSet()
		{
			myDotSet.clear();
		}
		DotPtr Note::getDot( const DotSetIterConst& setIterator ) const
		{
			if( setIterator != myDotSet.cend() )
			{
				return *setIterator;
			}
			return DotPtr();
		}
		/* _________ Accidental minOccurs = 0, maxOccurs = 1 _________ */
		AccidentalPtr Note::getAccidental() const
		{
			return myAccidental;
		}
		void Note::setAccidental( const AccidentalPtr& value )
		{
			if( value )
			{
				myAccidental = value;
			}
		}
		bool Note::getHasAccidental() const
		{
			return myHasAccidental;
		}
		void Note::setHasAccidental( const bool value )
		{
			myHasAccidental = value;
		}
		/* _________ TimeModification minOccurs = 0, maxOccurs = 1 _________ */
		TimeModificationPtr Note::getTimeModification() const
		{
			return myTimeModification;
		}
		void Note::setTimeModification( const TimeModificationPtr& value )
		{
			if( value )
			{
				myTimeModification = value;
			}
		}
		bool Note::getHasTimeModification() const
		{
			return myHasTimeModification;
		}
		void Note::setHasTimeModification( const bool value )
		{
			myHasTimeModification = value;
		}
		/* _________ Stem minOccurs = 0, maxOccurs = 1 _________ */
		StemPtr Note::getStem() const
		{
			return myStem;
		}
		void Note::setStem( const StemPtr& value )
		{
			if( value )
			{
				myStem = value;
			}
		}
		bool Note::getHasStem() const
		{
			return myHasStem;
		}
		void Note::setHasStem( const bool value )
		{
			myHasStem = value;
		}
		/* _________ Notehead minOccurs = 0, maxOccurs = 1 _________ */
		NoteheadPtr Note::getNotehead() const
		{
			return myNotehead;
		}
		void Note::setNotehead( const NoteheadPtr& value )
		{
			if( value )
			{
				myNotehead = value;
			}
		}
		bool Note::getHasNotehead() const
		{
			return myHasNotehead;
		}
		void Note::setHasNotehead( const bool value )
		{
			myHasNotehead = value;
		}
		/* _________ NoteheadText minOccurs = 0, maxOccurs = 1 _________ */
		NoteheadTextPtr Note::getNoteheadText() const
		{
			return myNoteheadText;
		}
		void Note::setNoteheadText( const NoteheadTextPtr& value )
		{
			if( value )
			{
				myNoteheadText = value;
			}
		}
		bool Note::getHasNoteheadText() const
		{
			return myHasNoteheadText;
		}
		void Note::setHasNoteheadText( const bool value )
		{
			myHasNoteheadText = value;
		}
        /* _________ Staff minOccurs = 0, maxOccurs = 1 _________ */
        StaffPtr Note::getStaff() const
        {
            return myStaff;
        }
        void Note::setStaff( const StaffPtr& value )
        {
            if ( value )
            {
                myStaff = value;
            }
        }
        bool Note::getHasStaff() const
        {
            return myHasStaff;
        }
        void Note::setHasStaff( const bool value )
        {
            myHasStaff = value;
        }
		/* _________ Beam minOccurs = 0, maxOccurs = 8 _________ */
		const BeamSet& Note::getBeamSet() const
		{
			return myBeamSet;
		}
		void Note::removeBeam( const BeamSetIterConst& value )
		{
			if ( value != myBeamSet.cend() )
			{
				myBeamSet.erase( value );
			}
		}
		void Note::addBeam( const BeamPtr& value )
		{
			if ( value )
			{
                if ( myBeamSet.size() < 8 )
                {
                    myBeamSet.push_back( value );
                }
			}
		}
		void Note::clearBeamSet()
		{
			myBeamSet.clear();
		}
		BeamPtr Note::getBeam( const BeamSetIterConst& setIterator ) const
		{
			if( setIterator != myBeamSet.cend() )
			{
				return *setIterator;
			}
			return BeamPtr();
		}
		/* _________ Notations minOccurs = 0, maxOccurs = unbounded _________ */
		const NotationsSet& Note::getNotationsSet() const
		{
			return myNotationsSet;
		}
		void Note::removeNotations( const NotationsSetIterConst& value )
		{
			if ( value != myNotationsSet.cend() )
			{
				myNotationsSet.erase( value );
			}
		}
		void Note::addNotations( const NotationsPtr& value )
		{
			if ( value )
			{
				myNotationsSet.push_back( value );
			}
		}
		void Note::clearNotationsSet()
		{
			myNotationsSet.clear();
		}
		NotationsPtr Note::getNotations( const NotationsSetIterConst& setIterator ) const
		{
			if( setIterator != myNotationsSet.cend() )
			{
				return *setIterator;
			}
			return NotationsPtr();
		}
		/* _________ Lyric minOccurs = 0, maxOccurs = unbounded _________ */
		const LyricSet& Note::getLyricSet() const
		{
			return myLyricSet;
		}
		void Note::removeLyric( const LyricSetIterConst& value )
		{
			if ( value != myLyricSet.cend() )
			{
				myLyricSet.erase( value );
			}
		}
		void Note::addLyric( const LyricPtr& value )
		{
			if ( value )
			{
				myLyricSet.push_back( value );
			}
		}
		void Note::clearLyricSet()
		{
			myLyricSet.clear();
		}
		LyricPtr Note::getLyric( const LyricSetIterConst& setIterator ) const
		{
			if( setIterator != myLyricSet.cend() )
			{
				return *setIterator;
			}
			return LyricPtr();
		}
		/* _________ Play minOccurs = 0, maxOccurs = 1 _________ */
		PlayPtr Note::getPlay() const
		{
			return myPlay;
		}
		void Note::setPlay( const PlayPtr& value )
		{
			if( value )
			{
				myPlay = value;
			}
		}
		bool Note::getHasPlay() const
		{
			return myHasPlay;
		}
		void Note::setHasPlay( const bool value )
		{
			myHasPlay = value;
		}
        
        PartGroupOrScorePart::PartGroupOrScorePart()
        :myChoice( Choice::partGroup )
        ,myPartGroup( makePartGroup() )
        ,myScorePart( makeScorePart() )
        {}
        bool PartGroupOrScorePart::hasAttributes() const
        {
            return false;
        }
        std::ostream& PartGroupOrScorePart::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& PartGroupOrScorePart::streamName( std::ostream& os ) const
        {
            return os;
        }
        bool PartGroupOrScorePart::hasContents() const
        {
            return ( myChoice == Choice::partGroup && myPartGroup->hasContents() )
            || ( myChoice == Choice::scorePart && myScorePart->hasContents() );
        }
        std::ostream& PartGroupOrScorePart::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
        {
            switch ( myChoice )
            {
                case Choice::partGroup:
                    myPartGroup->toStream( os, indentLevel );
                    break;
                case Choice::scorePart:
                    myScorePart->toStream( os, indentLevel );
                    break;
                default:
                    break;
            }
            isOneLineOnly = false;
            return os;
        }
        /* _________ Choice minOccurs = 1, maxOccurs = 1 _________ */
        PartGroupOrScorePart::Choice PartGroupOrScorePart::getChoice() const
        {
            return myChoice;
        }
        void PartGroupOrScorePart::setChoice( const PartGroupOrScorePart::Choice value )
        {
            myChoice = value;
        }
        /* _________ PartGroup minOccurs = 1, maxPartGroupOccurs = 1 _________ */
        PartGroupPtr PartGroupOrScorePart::getPartGroup() const
        {
            return myPartGroup;
        }
        void PartGroupOrScorePart::setPartGroup( const PartGroupPtr& value )
        {
            if ( value )
            {
                myPartGroup = value;
            }
        }
        /* _________ ScorePart minOccurs = 1, maxOccurs = 1 _________ */
        ScorePartPtr PartGroupOrScorePart::getScorePart() const
        {
            return myScorePart;
        }
        void PartGroupOrScorePart::setScorePart( const ScorePartPtr& value )
        {
            if ( value )
            {
                myScorePart = value;
            }
        }
#if 1==0
#endif
        
    } // namespace e

} // namespace mx