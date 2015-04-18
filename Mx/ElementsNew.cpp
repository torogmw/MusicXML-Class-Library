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
			os << "group-abbreviation-display";
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
#if 1==0
#endif
        
    } // namespace e

} // namespace mx