#include "ElementsNew.h"

namespace mx
{
    namespace e
    {
        
        
        /**************** AttributesIterface ****************/
        /* 3301 */
		DirectionType::DirectionType()
		:myChoice( Choice::rehearsal )
        ,myRehearsalSet()
		,mySegnoSet()
		,myWordsSet()
		,myCodaSet()
		,myWedge( makeWedge() )
		,myDynamicsSet()
		,myDashes( makeDashes() )
		,myBracket( makeBracket() )
		,myPedal( makePedal() )
		,myMetronome( makeMetronome() )
		,myOctaveShift( makeOctaveShift() )
		,myHarpPedals( makeHarpPedals() )
		,myDamp( makeDamp() )
		,myDampAll( makeDampAll() )
		,myEyeglasses( makeEyeglasses() )
		,myStringMute( makeStringMute() )
		,myScordatura( makeScordatura() )
		,myImage( makeImage() )
		,myPrincipalVoice( makePrincipalVoice() )
		,myAccordionRegistration( makeAccordionRegistration() )
		,myPercussionSet()
		,myOtherDirection( makeOtherDirection() )
		{
            myRehearsalSet.push_back( makeRehearsal() );
            mySegnoSet.push_back( makeSegno() );
            myWordsSet.push_back( makeWords() );
            myCodaSet.push_back( makeCoda() );
            myDynamicsSet.push_back( makeDynamics() );
            myPercussionSet.push_back( makePercussion() );
            
        }
		bool DirectionType::hasAttributes() const
		{
			return false;
		}
		std::ostream& DirectionType::streamAttributes( std::ostream& os ) const
		{
			return os;
		}
		std::ostream& DirectionType::streamName( std::ostream& os ) const
		{
			os << "direction-type";
			return os;
		}
		bool DirectionType::hasContents() const
		{
			return true;
		}
		std::ostream& DirectionType::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
		{
			isOneLineOnly = false;
            switch ( myChoice )
            {
                case Choice::rehearsal:
                {
                	for( auto x : myRehearsalSet )
                	{
                		os << std::endl;
                    	x->toStream( os, indentLevel+1 );
                	}
                }
                    break;
                case Choice::segno:
                {
                	for( auto x : mySegnoSet )
                	{
                		os << std::endl;
                    	x->toStream( os, indentLevel+1 );
                	}
                }
                    break;
                case Choice::words:
                {
                	for( auto x : myWordsSet )
                	{
                		os << std::endl;
                    	x->toStream( os, indentLevel+1 );
                	}
                }
                    break;
                case Choice::coda:
                {
                    for( auto x : myCodaSet )
                	{
                		os << std::endl;
                    	x->toStream( os, indentLevel+1 );
                	}
                }
                    break;
                case Choice::wedge:
                {
                    os << std::endl;
                    myWedge->toStream( os, indentLevel+1 );
                }
                    break;
                case Choice::dynamics:
                {
                    for( auto x : myDynamicsSet )
                	{
                		os << std::endl;
                    	x->toStream( os, indentLevel+1 );
                	}
                }
                    break;
                case Choice::dashes:
                {
                    os << std::endl;
                    myDashes->toStream( os, indentLevel+1 );
                }
                    break;
                case Choice::bracket:
                {
                    os << std::endl;
                    myBracket->toStream( os, indentLevel+1 );
                }
                    break;
                case Choice::pedal:
                {
                    os << std::endl;
                    myPedal->toStream( os, indentLevel+1 );
                }
                    break;
                case Choice::metronome:
                {
                    os << std::endl;
                    myMetronome->toStream( os, indentLevel+1 );
                }
                    break;
                case Choice::octaveShift:
                {
                    os << std::endl;
                    myOctaveShift->toStream( os, indentLevel+1 );
                }
                    break;
                case Choice::harpPedals:
                {
                    os << std::endl;
                    myHarpPedals->toStream( os, indentLevel+1 );
                }
                    break;
                case Choice::damp:
                {
                    os << std::endl;
                    myDamp->toStream( os, indentLevel+1 );
                }
                    break;
                case Choice::dampAll:
                {
                    os << std::endl;
                    myDampAll->toStream( os, indentLevel+1 );
                }
                    break;
                case Choice::eyeglasses:
                {
                    os << std::endl;
                    myEyeglasses->toStream( os, indentLevel+1 );
                }
                    break;
                case Choice::stringMute:
                {
                    os << std::endl;
                    myStringMute->toStream( os, indentLevel+1 );
                }
                    break;
                case Choice::scordatura:
                {
                    os << std::endl;
                    myScordatura->toStream( os, indentLevel+1 );
                }
                    break;
                case Choice::image:
                {
                    os << std::endl;
                    myImage->toStream( os, indentLevel+1 );
                }
                    break;
                case Choice::principalVoice:
                {
                    os << std::endl;
                    myPrincipalVoice->toStream( os, indentLevel+1 );
                }
                    break;
                case Choice::accordionRegistration:
                {
                    os << std::endl;
                    myAccordionRegistration->toStream( os, indentLevel+1 );
                }
                    break;
                case Choice::percussion:
                {
                    for( auto x : myPercussionSet )
                	{
                		os << std::endl;
                    	x->toStream( os, indentLevel+1 );
                	}
                }
                    break;
                case Choice::otherDirection:
                {
                    os << std::endl;
                    myOtherDirection->toStream( os, indentLevel+1 );
                }
                    break;
                default:
                    break;
            }
			
			os << std::endl;
			isOneLineOnly = false;
			return os;
		}
		DirectionType::Choice DirectionType::getChoice() const
		{
			return myChoice;
		}
        void DirectionType::setChoice( const DirectionType::Choice value )
        {
        	myChoice = value;
        }
		/* _________ Rehearsal minOccurs = 1, maxOccurs = unbounded _________ */
		const RehearsalSet& DirectionType::getRehearsalSet() const
		{
			return myRehearsalSet;
		}
		void DirectionType::removeRehearsal( const RehearsalSetIterConst& value )
		{
			if ( value != myRehearsalSet.cend() )
			{
				if ( myRehearsalSet.size() > 1 )
				{
					myRehearsalSet.erase( value );
				}
			}
		}
		void DirectionType::addRehearsal( const RehearsalPtr& value )
		{
			if ( value )
			{
				myRehearsalSet.push_back( value );
			}
		}
		void DirectionType::clearRehearsalSet()
		{
			myRehearsalSet.clear();
			while( myRehearsalSet.size() < 1 )
			{
				myRehearsalSet.push_back( makeRehearsal() );
			}
		}
		RehearsalPtr DirectionType::getRehearsal( const RehearsalSetIterConst& setIterator ) const
		{
			if( setIterator != myRehearsalSet.cend() )
			{
				return *setIterator;
			}
			return RehearsalPtr();
		}
		/* _________ Segno minOccurs = 1, maxOccurs = unbounded _________ */
		const SegnoSet& DirectionType::getSegnoSet() const
		{
			return mySegnoSet;
		}
		void DirectionType::removeSegno( const SegnoSetIterConst& value )
		{
			if ( value != mySegnoSet.cend() )
			{
				if ( mySegnoSet.size() > 1 )
				{
					mySegnoSet.erase( value );
				}
			}
		}
		void DirectionType::addSegno( const SegnoPtr& value )
		{
			if ( value )
			{
				mySegnoSet.push_back( value );
			}
		}
		void DirectionType::clearSegnoSet()
		{
			mySegnoSet.clear();
			while( mySegnoSet.size() < 1 )
			{
				mySegnoSet.push_back( makeSegno() );
			}
		}
		SegnoPtr DirectionType::getSegno( const SegnoSetIterConst& setIterator ) const
		{
			if( setIterator != mySegnoSet.cend() )
			{
				return *setIterator;
			}
			return SegnoPtr();
		}
		/* _________ Words minOccurs = 1, maxOccurs = unbounded _________ */
		const WordsSet& DirectionType::getWordsSet() const
		{
			return myWordsSet;
		}
		void DirectionType::removeWords( const WordsSetIterConst& value )
		{
			if ( value != myWordsSet.cend() )
			{
				if ( myWordsSet.size() > 1 )
				{
					myWordsSet.erase( value );
				}
			}
		}
		void DirectionType::addWords( const WordsPtr& value )
		{
			if ( value )
			{
				myWordsSet.push_back( value );
			}
		}
		void DirectionType::clearWordsSet()
		{
			myWordsSet.clear();
			while( myWordsSet.size() < 1 )
			{
				myWordsSet.push_back( makeWords() );
			}
		}
		WordsPtr DirectionType::getWords( const WordsSetIterConst& setIterator ) const
		{
			if( setIterator != myWordsSet.cend() )
			{
				return *setIterator;
			}
			return WordsPtr();
		}
		/* _________ Coda minOccurs = 1, maxOccurs = unbounded _________ */
		const CodaSet& DirectionType::getCodaSet() const
		{
			return myCodaSet;
		}
		void DirectionType::removeCoda( const CodaSetIterConst& value )
		{
			if ( value != myCodaSet.cend() )
			{
				if ( myCodaSet.size() > 1 )
				{
					myCodaSet.erase( value );
				}
			}
		}
		void DirectionType::addCoda( const CodaPtr& value )
		{
			if ( value )
			{
				myCodaSet.push_back( value );
			}
		}
		void DirectionType::clearCodaSet()
		{
			myCodaSet.clear();
			while( myCodaSet.size() < 1 )
			{
				myCodaSet.push_back( makeCoda() );
			}
		}
		CodaPtr DirectionType::getCoda( const CodaSetIterConst& setIterator ) const
		{
			if( setIterator != myCodaSet.cend() )
			{
				return *setIterator;
			}
			return CodaPtr();
		}
		/* _________ Wedge minOccurs = 1, maxOccurs = 1 _________ */
		WedgePtr DirectionType::getWedge() const
		{
			return myWedge;
		}
		void DirectionType::setWedge( const WedgePtr& value )
		{
			if( value )
			{
				myWedge = value;
			}
		}
		/* _________ Dynamics minOccurs = 1, maxOccurs = unbounded _________ */
		const DynamicsSet& DirectionType::getDynamicsSet() const
		{
			return myDynamicsSet;
		}
		void DirectionType::removeDynamics( const DynamicsSetIterConst& value )
		{
			if ( value != myDynamicsSet.cend() )
			{
				if ( myDynamicsSet.size() > 1 )
				{
					myDynamicsSet.erase( value );
				}
			}
		}
		void DirectionType::addDynamics( const DynamicsPtr& value )
		{
			if ( value )
			{
				myDynamicsSet.push_back( value );
			}
		}
		void DirectionType::clearDynamicsSet()
		{
			myDynamicsSet.clear();
			while( myDynamicsSet.size() < 1 )
			{
				myDynamicsSet.push_back( makeDynamics() );
			}
		}
		DynamicsPtr DirectionType::getDynamics( const DynamicsSetIterConst& setIterator ) const
		{
			if( setIterator != myDynamicsSet.cend() )
			{
				return *setIterator;
			}
			return DynamicsPtr();
		}
		/* _________ Dashes minOccurs = 1, maxOccurs = 1 _________ */
		DashesPtr DirectionType::getDashes() const
		{
			return myDashes;
		}
		void DirectionType::setDashes( const DashesPtr& value )
		{
			if( value )
			{
				myDashes = value;
			}
		}
		/* _________ Bracket minOccurs = 1, maxOccurs = 1 _________ */
		BracketPtr DirectionType::getBracket() const
		{
			return myBracket;
		}
		void DirectionType::setBracket( const BracketPtr& value )
		{
			if( value )
			{
				myBracket = value;
			}
		}
		/* _________ Pedal minOccurs = 1, maxOccurs = 1 _________ */
		PedalPtr DirectionType::getPedal() const
		{
			return myPedal;
		}
		void DirectionType::setPedal( const PedalPtr& value )
		{
			if( value )
			{
				myPedal = value;
			}
		}
		/* _________ Metronome minOccurs = 1, maxOccurs = 1 _________ */
		MetronomePtr DirectionType::getMetronome() const
		{
			return myMetronome;
		}
		void DirectionType::setMetronome( const MetronomePtr& value )
		{
			if( value )
			{
				myMetronome = value;
			}
		}
		/* _________ OctaveShift minOccurs = 1, maxOccurs = 1 _________ */
		OctaveShiftPtr DirectionType::getOctaveShift() const
		{
			return myOctaveShift;
		}
		void DirectionType::setOctaveShift( const OctaveShiftPtr& value )
		{
			if( value )
			{
				myOctaveShift = value;
			}
		}
		/* _________ HarpPedals minOccurs = 1, maxOccurs = 1 _________ */
		HarpPedalsPtr DirectionType::getHarpPedals() const
		{
			return myHarpPedals;
		}
		void DirectionType::setHarpPedals( const HarpPedalsPtr& value )
		{
			if( value )
			{
				myHarpPedals = value;
			}
		}
		/* _________ Damp minOccurs = 1, maxOccurs = 1 _________ */
		DampPtr DirectionType::getDamp() const
		{
			return myDamp;
		}
		void DirectionType::setDamp( const DampPtr& value )
		{
			if( value )
			{
				myDamp = value;
			}
		}
		/* _________ DampAll minOccurs = 1, maxOccurs = 1 _________ */
		DampAllPtr DirectionType::getDampAll() const
		{
			return myDampAll;
		}
		void DirectionType::setDampAll( const DampAllPtr& value )
		{
			if( value )
			{
				myDampAll = value;
			}
		}
		/* _________ Eyeglasses minOccurs = 1, maxOccurs = 1 _________ */
		EyeglassesPtr DirectionType::getEyeglasses() const
		{
			return myEyeglasses;
		}
		void DirectionType::setEyeglasses( const EyeglassesPtr& value )
		{
			if( value )
			{
				myEyeglasses = value;
			}
		}
		/* _________ StringMute minOccurs = 1, maxOccurs = 1 _________ */
		StringMutePtr DirectionType::getStringMute() const
		{
			return myStringMute;
		}
		void DirectionType::setStringMute( const StringMutePtr& value )
		{
			if( value )
			{
				myStringMute = value;
			}
		}
		/* _________ Scordatura minOccurs = 1, maxOccurs = 1 _________ */
		ScordaturaPtr DirectionType::getScordatura() const
		{
			return myScordatura;
		}
		void DirectionType::setScordatura( const ScordaturaPtr& value )
		{
			if( value )
			{
				myScordatura = value;
			}
		}
		/* _________ Image minOccurs = 1, maxOccurs = 1 _________ */
		ImagePtr DirectionType::getImage() const
		{
			return myImage;
		}
		void DirectionType::setImage( const ImagePtr& value )
		{
			if( value )
			{
				myImage = value;
			}
		}
		/* _________ PrincipalVoice minOccurs = 1, maxOccurs = 1 _________ */
		PrincipalVoicePtr DirectionType::getPrincipalVoice() const
		{
			return myPrincipalVoice;
		}
		void DirectionType::setPrincipalVoice( const PrincipalVoicePtr& value )
		{
			if( value )
			{
				myPrincipalVoice = value;
			}
		}
		/* _________ AccordionRegistration minOccurs = 1, maxOccurs = 1 _________ */
		AccordionRegistrationPtr DirectionType::getAccordionRegistration() const
		{
			return myAccordionRegistration;
		}
		void DirectionType::setAccordionRegistration( const AccordionRegistrationPtr& value )
		{
			if( value )
			{
				myAccordionRegistration = value;
			}
		}
		/* _________ Percussion minOccurs = 1, maxOccurs = unbounded _________ */
		const PercussionSet& DirectionType::getPercussionSet() const
		{
			return myPercussionSet;
		}
		void DirectionType::removePercussion( const PercussionSetIterConst& value )
		{
			if ( value != myPercussionSet.cend() )
			{
				if ( myPercussionSet.size() > 1 )
				{
					myPercussionSet.erase( value );
				}
			}
		}
		void DirectionType::addPercussion( const PercussionPtr& value )
		{
			if ( value )
			{
				myPercussionSet.push_back( value );
			}
		}
		void DirectionType::clearPercussionSet()
		{
			myPercussionSet.clear();
			while( myPercussionSet.size() < 1 )
			{
				myPercussionSet.push_back( makePercussion() );
			}
		}
		PercussionPtr DirectionType::getPercussion( const PercussionSetIterConst& setIterator ) const
		{
			if( setIterator != myPercussionSet.cend() )
			{
				return *setIterator;
			}
			return PercussionPtr();
		}
		/* _________ OtherDirection minOccurs = 1, maxOccurs = 1 _________ */
		OtherDirectionPtr DirectionType::getOtherDirection() const
		{
			return myOtherDirection;
		}
		void DirectionType::setOtherDirection( const OtherDirectionPtr& value )
		{
			if( value )
			{
				myOtherDirection = value;
			}
		}

        /**************** MidiInstrumentAttributes ****************/
        /* 3926 */
        MidiInstrumentAttributes::MidiInstrumentAttributes()
        :id()
        ,hasId( true )
        {}
        
        bool MidiInstrumentAttributes::hasValues() const
        {
            return hasId;
        }
        
        std::ostream& MidiInstrumentAttributes::toStream( std::ostream& os ) const
        {
            if ( hasValues() )
            {
                streamAttribute( os, id, "id", hasId );
            }
            return os;
        }
        
		MidiInstrument::MidiInstrument()
		:myAttributes( std::make_shared<MidiInstrumentAttributes>() )
		,myMidiChannel( makeMidiChannel() )
		,myHasMidiChannel( false )
		,myMidiName( makeMidiName() )
		,myHasMidiName( false )
		,myMidiBank( makeMidiBank() )
		,myHasMidiBank( false )
		,myMidiProgram( makeMidiProgram() )
		,myHasMidiProgram( false )
		,myMidiUnpitched( makeMidiUnpitched() )
		,myHasMidiUnpitched( false )
		,myVolume( makeVolume() )
		,myHasVolume( false )
		,myPan( makePan() )
		,myHasPan( false )
		,myElevation( makeElevation() )
		,myHasElevation( false )
		{}
		bool MidiInstrument::hasAttributes() const
		{
			return myAttributes->hasValues();
		}
		std::ostream& MidiInstrument::streamAttributes( std::ostream& os ) const
		{
			return myAttributes->toStream( os );
			return os;
		}
		std::ostream& MidiInstrument::streamName( std::ostream& os ) const
		{
			os << "midi-instrument";
			return os;
		}
		bool MidiInstrument::hasContents() const
		{
			return myHasMidiChannel
            || myHasMidiName
            || myHasMidiBank
            || myHasMidiProgram
            || myHasMidiUnpitched
            || myHasVolume
            || myHasPan
            || myHasElevation;
		}
		std::ostream& MidiInstrument::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
		{
			if ( myHasMidiChannel )
            {
                os << std::endl;
                myMidiChannel->toStream( os, indentLevel+1 );
            }
            if ( myHasMidiName )
            {
                os << std::endl;
                myMidiName->toStream( os, indentLevel+1 );
            }
            if ( myHasMidiBank )
            {
                os << std::endl;
                myMidiBank->toStream( os, indentLevel+1 );
            }
            if ( myHasMidiProgram )
            {
                os << std::endl;
                myMidiProgram->toStream( os, indentLevel+1 );
            }
            if ( myHasMidiUnpitched )
            {
                os << std::endl;
                myMidiUnpitched->toStream( os, indentLevel+1 );
            }
            if ( myHasVolume )
            {
                os << std::endl;
                myVolume->toStream( os, indentLevel+1 );
            }
            if ( myHasPan )
            {
                os << std::endl;
                myPan->toStream( os, indentLevel+1 );
            }
            if ( myHasElevation )
            {
                os << std::endl;
                myElevation->toStream( os, indentLevel+1 );
            }
            if( hasContents() )
            {
                isOneLineOnly = false;
                os << std::endl;
            }
            else
            {
                isOneLineOnly = true;
            }
            return os;
		}
		MidiInstrumentAttributesPtr MidiInstrument::getAttributes() const
		{
			return myAttributes;
		}
		void MidiInstrument::setAttributes( const MidiInstrumentAttributesPtr& value )
		{
			if ( value )
			{
				myAttributes = value;
			}
		}
		/* _________ MidiChannel minOccurs = 0, maxOccurs = 1 _________ */
		MidiChannelPtr MidiInstrument::getMidiChannel() const
		{
			return myMidiChannel;
		}
		void MidiInstrument::setMidiChannel( const MidiChannelPtr& value )
		{
			if( value )
			{
				myMidiChannel = value;
			}
		}
		bool MidiInstrument::getHasMidiChannel() const
		{
			return myHasMidiChannel;
		}
		void MidiInstrument::setHasMidiChannel( const bool value )
		{
			myHasMidiChannel = value;
		}
		/* _________ MidiName minOccurs = 0, maxOccurs = 1 _________ */
		MidiNamePtr MidiInstrument::getMidiName() const
		{
			return myMidiName;
		}
		void MidiInstrument::setMidiName( const MidiNamePtr& value )
		{
			if( value )
			{
				myMidiName = value;
			}
		}
		bool MidiInstrument::getHasMidiName() const
		{
			return myHasMidiName;
		}
		void MidiInstrument::setHasMidiName( const bool value )
		{
			myHasMidiName = value;
		}
		/* _________ MidiBank minOccurs = 0, maxOccurs = 1 _________ */
		MidiBankPtr MidiInstrument::getMidiBank() const
		{
			return myMidiBank;
		}
		void MidiInstrument::setMidiBank( const MidiBankPtr& value )
		{
			if( value )
			{
				myMidiBank = value;
			}
		}
		bool MidiInstrument::getHasMidiBank() const
		{
			return myHasMidiBank;
		}
		void MidiInstrument::setHasMidiBank( const bool value )
		{
			myHasMidiBank = value;
		}
		/* _________ MidiProgram minOccurs = 0, maxOccurs = 1 _________ */
		MidiProgramPtr MidiInstrument::getMidiProgram() const
		{
			return myMidiProgram;
		}
		void MidiInstrument::setMidiProgram( const MidiProgramPtr& value )
		{
			if( value )
			{
				myMidiProgram = value;
			}
		}
		bool MidiInstrument::getHasMidiProgram() const
		{
			return myHasMidiProgram;
		}
		void MidiInstrument::setHasMidiProgram( const bool value )
		{
			myHasMidiProgram = value;
		}
		/* _________ MidiUnpitched minOccurs = 0, maxOccurs = 1 _________ */
		MidiUnpitchedPtr MidiInstrument::getMidiUnpitched() const
		{
			return myMidiUnpitched;
		}
		void MidiInstrument::setMidiUnpitched( const MidiUnpitchedPtr& value )
		{
			if( value )
			{
				myMidiUnpitched = value;
			}
		}
		bool MidiInstrument::getHasMidiUnpitched() const
		{
			return myHasMidiUnpitched;
		}
		void MidiInstrument::setHasMidiUnpitched( const bool value )
		{
			myHasMidiUnpitched = value;
		}
		/* _________ Volume minOccurs = 0, maxOccurs = 1 _________ */
		VolumePtr MidiInstrument::getVolume() const
		{
			return myVolume;
		}
		void MidiInstrument::setVolume( const VolumePtr& value )
		{
			if( value )
			{
				myVolume = value;
			}
		}
		bool MidiInstrument::getHasVolume() const
		{
			return myHasVolume;
		}
		void MidiInstrument::setHasVolume( const bool value )
		{
			myHasVolume = value;
		}
		/* _________ Pan minOccurs = 0, maxOccurs = 1 _________ */
		PanPtr MidiInstrument::getPan() const
		{
			return myPan;
		}
		void MidiInstrument::setPan( const PanPtr& value )
		{
			if( value )
			{
				myPan = value;
			}
		}
		bool MidiInstrument::getHasPan() const
		{
			return myHasPan;
		}
		void MidiInstrument::setHasPan( const bool value )
		{
			myHasPan = value;
		}
		/* _________ Elevation minOccurs = 0, maxOccurs = 1 _________ */
		ElevationPtr MidiInstrument::getElevation() const
		{
			return myElevation;
		}
		void MidiInstrument::setElevation( const ElevationPtr& value )
		{
			if( value )
			{
				myElevation = value;
			}
		}
		bool MidiInstrument::getHasElevation() const
		{
			return myHasElevation;
		}
		void MidiInstrument::setHasElevation( const bool value )
		{
			myHasElevation = value;
		}
        
        
        
        /**************** PlayAttributes ****************/
        /* 3930 */
        PlayAttributes::PlayAttributes()
        :id()
        ,hasId( false )
        {}
        
        bool PlayAttributes::hasValues() const
        {
            return hasId;
        }
        
        std::ostream& PlayAttributes::toStream( std::ostream& os ) const
        {
            if ( hasValues() )
            {
                streamAttribute( os, id, "id", hasId );
            }
            return os;
        }
        
		Play::Play()
		:myAttributes( std::make_shared<PlayAttributes>() )
		,myChoice( Choice::ipa )
        ,myIpa( makeIpa() )
		,myMute( makeMute() )
		,mySemiPitched( makeSemiPitched() )
		,myOtherPlay( makeOtherPlay() )
		{}
		bool Play::hasAttributes() const
		{
			return myAttributes->hasValues();
		}
		std::ostream& Play::streamAttributes( std::ostream& os ) const
		{
			return myAttributes->toStream( os );
			return os;
		}
		std::ostream& Play::streamName( std::ostream& os ) const
		{
			os << "play";
			return os;
		}
		bool Play::hasContents() const
		{
			return true;
		}
		std::ostream& Play::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
		{
            os << std::endl;
            switch ( myChoice )
            {
                case Choice::ipa:
                {
                    myIpa->toStream( os, indentLevel+1 );
                }
                    break;
                case Choice::mute:
                {
                    myMute->toStream( os, indentLevel+1 );
                }
                    break;
                case Choice::semiPitched:
                {
                    mySemiPitched->toStream( os, indentLevel+1 );
                }
                    break;
                case Choice::otherPlay:
                {
                    myOtherPlay->toStream( os, indentLevel+1 );
                }
                    break;
                default:
                    break;
            }
			isOneLineOnly = false;
			os << std::endl;
			return os;
		}
		PlayAttributesPtr Play::getAttributes() const
		{
			return myAttributes;
		}
		void Play::setAttributes( const PlayAttributesPtr& value )
		{
			if ( value )
			{
				myAttributes = value;
			}
		}
		/* _________ Choice __________ */
        Play::Choice Play::getChoice() const
        {
            return myChoice;
        }
        void Play::setChoice( const Play::Choice value )
        {
            myChoice = value;
        }
		/* _________ Ipa minOccurs = 1, maxOccurs = 1 _________ */
		IpaPtr Play::getIpa() const
		{
			return myIpa;
		}
		void Play::setIpa( const IpaPtr& value )
		{
			if( value )
			{
				myIpa = value;
			}
		}
		/* _________ Mute minOccurs = 1, maxOccurs = 1 _________ */
		MutePtr Play::getMute() const
		{
			return myMute;
		}
		void Play::setMute( const MutePtr& value )
		{
			if( value )
			{
				myMute = value;
			}
		}
		/* _________ SemiPitched minOccurs = 1, maxOccurs = 1 _________ */
		SemiPitchedPtr Play::getSemiPitched() const
		{
			return mySemiPitched;
		}
		void Play::setSemiPitched( const SemiPitchedPtr& value )
		{
			if( value )
			{
				mySemiPitched = value;
			}
		}
		/* _________ OtherPlay minOccurs = 1, maxOccurs = 1 _________ */
		OtherPlayPtr Play::getOtherPlay() const
		{
			return myOtherPlay;
		}
		void Play::setOtherPlay( const OtherPlayPtr& value )
		{
			if( value )
			{
				myOtherPlay = value;
			}
		}
        Encoding::Encoding()
		:myChoice( Choice::encodingDate )
		,myEncodingDate( makeEncodingDate() )
		,myEncoder( makeEncoder() )
		,mySoftware( makeSoftware() )
		,myEncodingDescription( makeEncodingDescription() )
		,mySupports( makeSupports() )
		{}
		bool Encoding::hasAttributes() const
		{
			return false;
		}
		std::ostream& Encoding::streamAttributes( std::ostream& os ) const
		{
			return os;
		}
		std::ostream& Encoding::streamName( std::ostream& os ) const
		{
			os << "encoding";
			return os;
		}
		bool Encoding::hasContents() const
		{
			return true;
		}
		std::ostream& Encoding::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
		{
			os << std::endl;
            switch ( myChoice )
            {
                case Choice::encodingDate:
                {
                    myEncodingDate->toStream( os, indentLevel+1 );
                }
                    break;
                case Choice::encoder:
                {
                    myEncoder->toStream( os, indentLevel+1 );
                }
                    break;
                case Choice::software:
                {
                    mySoftware->toStream( os, indentLevel+1 );
                }
                    break;
                case Choice::encodingDescription:
                {
                    myEncodingDescription->toStream( os, indentLevel+1 );
                }
                    break;
                case Choice::supports:
                {
                    mySupports->toStream( os, indentLevel+1 );
                }
                    break;
                default:
                    break;
            }
			isOneLineOnly = false;
			os << std::endl;
			return os;
		}
        /* _________ Choice _________ */
        Encoding::Choice Encoding::getChoice() const
        {
            return myChoice;
        }
        void Encoding::setChoice( const Encoding::Choice value )
        {
            myChoice = value;
        }
		/* _________ EncodingDate minOccurs = 1, maxOccurs = 1 _________ */
		EncodingDatePtr Encoding::getEncodingDate() const
		{
			return myEncodingDate;
		}
		void Encoding::setEncodingDate( const EncodingDatePtr& value )
		{
			if( value )
			{
				myEncodingDate = value;
			}
		}
		/* _________ Encoder minOccurs = 1, maxOccurs = 1 _________ */
		EncoderPtr Encoding::getEncoder() const
		{
			return myEncoder;
		}
		void Encoding::setEncoder( const EncoderPtr& value )
		{
			if( value )
			{
				myEncoder = value;
			}
		}
		/* _________ Software minOccurs = 1, maxOccurs = 1 _________ */
		SoftwarePtr Encoding::getSoftware() const
		{
			return mySoftware;
		}
		void Encoding::setSoftware( const SoftwarePtr& value )
		{
			if( value )
			{
				mySoftware = value;
			}
		}
		/* _________ EncodingDescription minOccurs = 1, maxOccurs = 1 _________ */
		EncodingDescriptionPtr Encoding::getEncodingDescription() const
		{
			return myEncodingDescription;
		}
		void Encoding::setEncodingDescription( const EncodingDescriptionPtr& value )
		{
			if( value )
			{
				myEncodingDescription = value;
			}
		}
		/* _________ Supports minOccurs = 1, maxOccurs = 1 _________ */
		SupportsPtr Encoding::getSupports() const
		{
			return mySupports;
		}
		void Encoding::setSupports( const SupportsPtr& value )
		{
			if( value )
			{
				mySupports = value;
			}
		}
        
        Miscellaneous::Miscellaneous()
		:myMiscellaneousFieldSet()
		{}
		bool Miscellaneous::hasAttributes() const
		{
			return false;
		}
		std::ostream& Miscellaneous::streamAttributes( std::ostream& os ) const
		{
			return os;
		}
		std::ostream& Miscellaneous::streamName( std::ostream& os ) const
		{
			os << "miscellaneous";
			return os;
		}
		bool Miscellaneous::hasContents() const
		{
			return myMiscellaneousFieldSet.size() > 0;
		}
		std::ostream& Miscellaneous::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
		{
            for( auto x : myMiscellaneousFieldSet )
            {
                os << std::endl;
                x->toStream( os, indentLevel+1 );
            }
			if ( hasContents() )
            {
                isOneLineOnly = false;
                os << std::endl;
            }
            else
            {
                isOneLineOnly = true;
            }
            return os;
		}
		/* _________ MiscellaneousField minOccurs = 0, maxOccurs = unbounded _________ */
		const MiscellaneousFieldSet& Miscellaneous::getMiscellaneousFieldSet() const
		{
			return myMiscellaneousFieldSet;
		}
		void Miscellaneous::removeMiscellaneousField( const MiscellaneousFieldSetIterConst& value )
		{
			if ( value != myMiscellaneousFieldSet.cend() )
			{
				myMiscellaneousFieldSet.erase( value );
			}
		}
		void Miscellaneous::addMiscellaneousField( const MiscellaneousFieldPtr& value )
		{
			if ( value )
			{
				myMiscellaneousFieldSet.push_back( value );
			}
		}
		void Miscellaneous::clearMiscellaneousFieldSet()
		{
			myMiscellaneousFieldSet.clear();
		}
		MiscellaneousFieldPtr Miscellaneous::getMiscellaneousField( const MiscellaneousFieldSetIterConst& setIterator ) const
		{
			if( setIterator != myMiscellaneousFieldSet.cend() )
			{
				return *setIterator;
			}
			return MiscellaneousFieldPtr();
		}
        
        
        
        /**************** SoundAttributes ****************/
        /* 3314 */
        SoundAttributes::SoundAttributes()
        :tempo()
        ,dynamics()
        ,dacapo( types::YesNo::no )
        ,segno()
        ,dalsegno()
        ,coda()
        ,tocoda()
        ,divisions()
        ,forwardRepeat( types::YesNo::no )
        ,fine()
        ,timeOnly()
        ,pizzicato( types::YesNo::no )
        ,pan()
        ,elevation()
        ,damperPedal()
        ,softPedal()
        ,sostenutoPedal()
        ,hasTempo( false )
        ,hasDynamics( false )
        ,hasDacapo( false )
        ,hasSegno( false )
        ,hasDalsegno( false )
        ,hasCoda( false )
        ,hasTocoda( false )
        ,hasDivisions( false )
        ,hasForwardRepeat( false )
        ,hasFine( false )
        ,hasTimeOnly( false )
        ,hasPizzicato( false )
        ,hasPan( false )
        ,hasElevation( false )
        ,hasDamperPedal( false )
        ,hasSoftPedal( false )
        ,hasSostenutoPedal( false )
        {}
        
        bool SoundAttributes::hasValues() const
        {
            return hasTempo ||
            hasDynamics ||
            hasDacapo ||
            hasSegno ||
            hasDalsegno ||
            hasCoda ||
            hasTocoda ||
            hasDivisions ||
            hasForwardRepeat ||
            hasFine ||
            hasTimeOnly ||
            hasPizzicato ||
            hasPan ||
            hasElevation ||
            hasDamperPedal ||
            hasSoftPedal ||
            hasSostenutoPedal;
        }
        
        std::ostream& SoundAttributes::toStream( std::ostream& os ) const
        {
            if ( hasValues() )
            {
                streamAttribute( os, tempo, "tempo", hasTempo );
                streamAttribute( os, dynamics, "dynamics", hasDynamics );
                streamAttribute( os, dacapo, "dacapo", hasDacapo );
                streamAttribute( os, segno, "segno", hasSegno );
                streamAttribute( os, dalsegno, "dalsegno", hasDalsegno );
                streamAttribute( os, coda, "coda", hasCoda );
                streamAttribute( os, tocoda, "tocoda", hasTocoda );
                streamAttribute( os, divisions, "divisions", hasDivisions );
                streamAttribute( os, forwardRepeat, "forward-repeat", hasForwardRepeat );
                streamAttribute( os, fine, "fine", hasFine );
                streamAttribute( os, timeOnly, "time-only", hasTimeOnly );
                streamAttribute( os, pizzicato, "pizzicato", hasPizzicato );
                streamAttribute( os, pan, "pan", hasPan );
                streamAttribute( os, elevation, "elevation", hasElevation );
                streamAttribute( os, damperPedal, "damper-pedal", hasDamperPedal );
                streamAttribute( os, softPedal, "soft-pedal", hasSoftPedal );
                streamAttribute( os, sostenutoPedal, "sostenuto-pedal", hasSostenutoPedal );
            }
            return os;
        }
        
		Sound::Sound()
		:myAttributes( std::make_shared<SoundAttributes>() )
		,myMidiDevice( makeMidiDevice() )
		,myHasMidiDevice( false )
		,myMidiInstrument( makeMidiInstrument() )
		,myHasMidiInstrument( false )
		,myPlay( makePlay() )
		,myHasPlay( false )
		{}
		bool Sound::hasAttributes() const
		{
			return myAttributes->hasValues();
		}
		std::ostream& Sound::streamAttributes( std::ostream& os ) const
		{
			return myAttributes->toStream( os );
			return os;
		}
		std::ostream& Sound::streamName( std::ostream& os ) const
		{
			os << "sound";
			return os;
		}
		bool Sound::hasContents() const
		{
			return myHasMidiDevice || myHasMidiInstrument || myHasPlay;
		}
		std::ostream& Sound::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
		{
			if ( myHasMidiDevice )
            {
                os << std::endl;
                myMidiDevice->toStream( os, indentLevel+1 );
            }
			if ( myMidiInstrument )
            {
                os << std::endl;
                myMidiInstrument->toStream( os, indentLevel+1 );
            }
			if ( myHasPlay )
            {
                os << std::endl;
                myPlay->toStream( os, indentLevel+1 );
            }
            if ( hasContents() )
            {
                os << std::endl;
                isOneLineOnly = false;
            }
            else
            {
                isOneLineOnly = true;
            }
            return os;
		}
		SoundAttributesPtr Sound::getAttributes() const
		{
			return myAttributes;
		}
		void Sound::setAttributes( const SoundAttributesPtr& value )
		{
			if ( value )
			{
				myAttributes = value;
			}
		}
		/* _________ MidiDevice minOccurs = 0, maxOccurs = 1 _________ */
		MidiDevicePtr Sound::getMidiDevice() const
		{
			return myMidiDevice;
		}
		void Sound::setMidiDevice( const MidiDevicePtr& value )
		{
			if( value )
			{
				myMidiDevice = value;
			}
		}
		bool Sound::getHasMidiDevice() const
		{
			return myHasMidiDevice;
		}
		void Sound::setHasMidiDevice( const bool value )
		{
			myHasMidiDevice = value;
		}
		/* _________ MidiInstrument minOccurs = 0, maxOccurs = 1 _________ */
		MidiInstrumentPtr Sound::getMidiInstrument() const
		{
			return myMidiInstrument;
		}
		void Sound::setMidiInstrument( const MidiInstrumentPtr& value )
		{
			if( value )
			{
				myMidiInstrument = value;
			}
		}
		bool Sound::getHasMidiInstrument() const
		{
			return myHasMidiInstrument;
		}
		void Sound::setHasMidiInstrument( const bool value )
		{
			myHasMidiInstrument = value;
		}
        /* _________ Play minOccurs = 0, maxOccurs = 1 _________ */
		PlayPtr Sound::getPlay() const
		{
			return myPlay;
		}
		void Sound::setPlay( const PlayPtr& value )
		{
			if( value )
			{
				myPlay = value;
			}
		}
		bool Sound::getHasPlay() const
		{
			return myHasPlay;
		}
		void Sound::setHasPlay( const bool value )
		{
			myHasPlay = value;
		}
        
        
        /**************** PageMarginsAttributes ****************/
        /* 4232 */
        PageMarginsAttributes::PageMarginsAttributes()
        :type( types::MarginType::both )
        ,hasType( false )
        {}
        
        bool PageMarginsAttributes::hasValues() const
        {
            return hasType;
        }
        
        std::ostream& PageMarginsAttributes::toStream( std::ostream& os ) const
        {
            if ( hasValues() )
            {
                streamAttribute( os, type, "type", hasType );
            }
            return os;
        }
        
		PageMargins::PageMargins()
		:myAttributes( std::make_shared<PageMarginsAttributes>() )
		,myLeftMargin( makeLeftMargin() )
		,myRightMargin( makeRightMargin() )
		,myTopMargin( makeTopMargin() )
		,myBottomMargin( makeBottomMargin() )
		{}
		bool PageMargins::hasAttributes() const
		{
			return myAttributes->hasValues();
		}
		std::ostream& PageMargins::streamAttributes( std::ostream& os ) const
		{
			return myAttributes->toStream( os );
			return os;
		}
		std::ostream& PageMargins::streamName( std::ostream& os ) const
		{
			os << "page-margins";
			return os;
		}
		bool PageMargins::hasContents() const
		{
			return true;
		}
		std::ostream& PageMargins::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
		{
			isOneLineOnly = false;
			os << std::endl;
			myLeftMargin->toStream( os, indentLevel+1 );
			os << std::endl;
			myRightMargin->toStream( os, indentLevel+1 );
			os << std::endl;
			myTopMargin->toStream( os, indentLevel+1 );
			os << std::endl;
			myBottomMargin->toStream( os, indentLevel+1 );
			os << std::endl;
			return os;
		}
		PageMarginsAttributesPtr PageMargins::getAttributes() const
		{
			return myAttributes;
		}
		void PageMargins::setAttributes( const PageMarginsAttributesPtr& value )
		{
			if ( value )
			{
				myAttributes = value;
			}
		}
		/* _________ LeftMargin minOccurs = 1, maxOccurs = 1 _________ */
		LeftMarginPtr PageMargins::getLeftMargin() const
		{
			return myLeftMargin;
		}
		void PageMargins::setLeftMargin( const LeftMarginPtr& value )
		{
			if( value )
			{
				myLeftMargin = value;
			}
		}
		/* _________ RightMargin minOccurs = 1, maxOccurs = 1 _________ */
		RightMarginPtr PageMargins::getRightMargin() const
		{
			return myRightMargin;
		}
		void PageMargins::setRightMargin( const RightMarginPtr& value )
		{
			if( value )
			{
				myRightMargin = value;
			}
		}
		/* _________ TopMargin minOccurs = 1, maxOccurs = 1 _________ */
		TopMarginPtr PageMargins::getTopMargin() const
		{
			return myTopMargin;
		}
		void PageMargins::setTopMargin( const TopMarginPtr& value )
		{
			if( value )
			{
				myTopMargin = value;
			}
		}
		/* _________ BottomMargin minOccurs = 1, maxOccurs = 1 _________ */
		BottomMarginPtr PageMargins::getBottomMargin() const
		{
			return myBottomMargin;
		}
		void PageMargins::setBottomMargin( const BottomMarginPtr& value )
		{
			if( value )
			{
				myBottomMargin = value;
			}
		}
        SystemMargins::SystemMargins()
		:myLeftMargin( makeLeftMargin() )
		,myRightMargin( makeRightMargin() )
		{}
		bool SystemMargins::hasAttributes() const
		{
			return false;
		}
		std::ostream& SystemMargins::streamAttributes( std::ostream& os ) const
		{
			return os;
		}
		std::ostream& SystemMargins::streamName( std::ostream& os ) const
		{
			os << "system-margins";
			return os;
		}
		bool SystemMargins::hasContents() const
		{
			return true;
		}
		std::ostream& SystemMargins::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
		{
			isOneLineOnly = false;
			os << std::endl;
			myLeftMargin->toStream( os, indentLevel+1 );
			os << std::endl;
			myRightMargin->toStream( os, indentLevel+1 );
			os << std::endl;
			return os;
		}
		/* _________ LeftMargin minOccurs = 1, maxOccurs = 1 _________ */
		LeftMarginPtr SystemMargins::getLeftMargin() const
		{
			return myLeftMargin;
		}
		void SystemMargins::setLeftMargin( const LeftMarginPtr& value )
		{
			if( value )
			{
				myLeftMargin = value;
			}
		}
		/* _________ RightMargin minOccurs = 1, maxOccurs = 1 _________ */
		RightMarginPtr SystemMargins::getRightMargin() const
		{
			return myRightMargin;
		}
		void SystemMargins::setRightMargin( const RightMarginPtr& value )
		{
			if( value )
			{
				myRightMargin = value;
			}
		}
        
		/* 4297 */
        
		SystemDividers::SystemDividers()
		:myLeftDivider( makeLeftDivider() )
		,myRightDivider( makeRightDivider() )
		{}
		bool SystemDividers::hasAttributes() const
		{
			return false;
		}
		std::ostream& SystemDividers::streamAttributes( std::ostream& os ) const
		{
			return os;
		}
		std::ostream& SystemDividers::streamName( std::ostream& os ) const
		{
			os << "system-dividers";
			return os;
		}
		bool SystemDividers::hasContents() const
		{
			return true;
		}
		std::ostream& SystemDividers::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
		{
			isOneLineOnly = false;
			os << std::endl;
			myLeftDivider->toStream( os, indentLevel+1 );
			os << std::endl;
			myRightDivider->toStream( os, indentLevel+1 );
			os << std::endl;
			return os;
		}
		/* _________ LeftDivider minOccurs = 1, maxOccurs = 1 _________ */
		LeftDividerPtr SystemDividers::getLeftDivider() const
		{
			return myLeftDivider;
		}
		void SystemDividers::setLeftDivider( const LeftDividerPtr& value )
		{
			if( value )
			{
				myLeftDivider = value;
			}
		}
		/* _________ RightDivider minOccurs = 1, maxOccurs = 1 _________ */
		RightDividerPtr SystemDividers::getRightDivider() const
		{
			return myRightDivider;
		}
		void SystemDividers::setRightDivider( const RightDividerPtr& value )
		{
			if( value )
			{
				myRightDivider = value;
			}
		}
        
        
        /**************** StrongAccentAttributes ****************/
        /* 4389 */
        StrongAccentAttributes::StrongAccentAttributes()
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
        ,type( types::UpDown::up )
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
        ,hasType( false )
        {}
        
        bool StrongAccentAttributes::hasValues() const
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
            hasPlacement ||
            hasType;
        }
        
        std::ostream& StrongAccentAttributes::toStream( std::ostream& os ) const
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
                streamAttribute( os, type, "type", hasType );
            }
            return os;
        }
        
		StrongAccent::StrongAccent()
		:myAttributes( std::make_shared<StrongAccentAttributes>() )
		{}
		bool StrongAccent::hasAttributes() const
		{
			return myAttributes->hasValues();
		}
		std::ostream& StrongAccent::streamAttributes( std::ostream& os ) const
		{
			return myAttributes->toStream( os );
			return os;
		}
		std::ostream& StrongAccent::streamName( std::ostream& os ) const
		{
			os << "strong-accent";
			return os;
		}
		bool StrongAccent::hasContents() const
		{
			return false;
		}
		std::ostream& StrongAccent::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
		{
			isOneLineOnly = true;
            return os;
		}
		StrongAccentAttributesPtr StrongAccent::getAttributes() const
		{
			return myAttributes;
		}
		void StrongAccent::setAttributes( const StrongAccentAttributesPtr& value )
		{
			if ( value )
			{
				myAttributes = value;
			}
		}
        
        /* 4608 */
        
		Figure::Figure()
		:myPrefix( makePrefix() )
		,myHasPrefix( false )
		,myFigureNumber( makeFigureNumber() )
		,myHasFigureNumber( false )
		,mySuffix( makeSuffix() )
		,myHasSuffix( false )
		,myExtend( makeExtend() )
		,myHasExtend( false )
		{}
		bool Figure::hasAttributes() const
		{
			return false;
		}
		std::ostream& Figure::streamAttributes( std::ostream& os ) const
		{
			return os;
		}
		std::ostream& Figure::streamName( std::ostream& os ) const
		{
			os << "figure";
			return os;
		}
		bool Figure::hasContents() const
		{
			return myHasPrefix || myHasFigureNumber || myHasSuffix || myHasExtend;
		}
		std::ostream& Figure::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
		{
            if ( myHasPrefix )
            {
                os << std::endl;
                myPrefix->toStream( os, indentLevel+1 );
            }
			if ( myHasFigureNumber )
            {
                os << std::endl;
                myFigureNumber->toStream( os, indentLevel+1 );
            }
            if ( myHasSuffix )
            {
                os << std::endl;
                mySuffix->toStream( os, indentLevel+1 );
            }
            if ( myHasExtend )
            {
                os << std::endl;
                myExtend->toStream( os, indentLevel+1 );
            }
            if ( hasContents() )
            {
                os << std::endl;
                isOneLineOnly = false;
            }
            else
            {
                isOneLineOnly = true;
            }
			return os;
		}
		/* _________ Prefix minOccurs = 0, maxOccurs = 1 _________ */
		PrefixPtr Figure::getPrefix() const
		{
			return myPrefix;
		}
		void Figure::setPrefix( const PrefixPtr& value )
		{
			if( value )
			{
				myPrefix = value;
			}
		}
		bool Figure::getHasPrefix() const
		{
			return myHasPrefix;
		}
		void Figure::setHasPrefix( const bool value )
		{
			myHasPrefix = value;
		}
		/* _________ FigureNumber minOccurs = 0, maxOccurs = 1 _________ */
		FigureNumberPtr Figure::getFigureNumber() const
		{
			return myFigureNumber;
		}
		void Figure::setFigureNumber( const FigureNumberPtr& value )
		{
			if( value )
			{
				myFigureNumber = value;
			}
		}
		bool Figure::getHasFigureNumber() const
		{
			return myHasFigureNumber;
		}
		void Figure::setHasFigureNumber( const bool value )
		{
			myHasFigureNumber = value;
		}
		/* _________ Suffix minOccurs = 0, maxOccurs = 1 _________ */
		SuffixPtr Figure::getSuffix() const
		{
			return mySuffix;
		}
		void Figure::setSuffix( const SuffixPtr& value )
		{
			if( value )
			{
				mySuffix = value;
			}
		}
		bool Figure::getHasSuffix() const
		{
			return myHasSuffix;
		}
		void Figure::setHasSuffix( const bool value )
		{
			myHasSuffix = value;
		}
		/* _________ Extend minOccurs = 0, maxOccurs = 1 _________ */
		ExtendPtr Figure::getExtend() const
		{
			return myExtend;
		}
		void Figure::setExtend( const ExtendPtr& value )
		{
			if( value )
			{
				myExtend = value;
			}
		}
		bool Figure::getHasExtend() const
		{
			return myHasExtend;
		}
		void Figure::setHasExtend( const bool value )
		{
			myHasExtend = value;
		}
        /* ______________________________________________________________________ */
		NormalTypeNormalDotGroup::NormalTypeNormalDotGroup()
		:myNormalType( makeNormalType() )
		,myNormalDotSet()
		{}
		bool NormalTypeNormalDotGroup::hasAttributes() const
		{
			return false;
		}
		std::ostream& NormalTypeNormalDotGroup::streamAttributes( std::ostream& os ) const
		{
			return os;
		}
		std::ostream& NormalTypeNormalDotGroup::streamName( std::ostream& os ) const
		{
			return os;
		}
		bool NormalTypeNormalDotGroup::hasContents() const
		{
			return true;
		}
		std::ostream& NormalTypeNormalDotGroup::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
		{
            
			isOneLineOnly = false;
			myNormalType->toStream( os, indentLevel );
			for ( auto x : myNormalDotSet )
            {
                os << std::endl;
                x->toStream( os, indentLevel );
            }
            return os;
		}
		/* _________ NormalType minOccurs = 1, maxOccurs = 1 _________ */
		NormalTypePtr NormalTypeNormalDotGroup::getNormalType() const
		{
			return myNormalType;
		}
		void NormalTypeNormalDotGroup::setNormalType( const NormalTypePtr& value )
		{
			if( value )
			{
				myNormalType = value;
			}
		}
		/* _________ NormalDot minOccurs = 0, maxOccurs = unbounded _________ */
		const NormalDotSet& NormalTypeNormalDotGroup::getNormalDotSet() const
		{
			return myNormalDotSet;
		}
		void NormalTypeNormalDotGroup::removeNormalDot( const NormalDotSetIterConst& value )
		{
			if ( value != myNormalDotSet.cend() )
			{
				myNormalDotSet.erase( value );
			}
		}
		void NormalTypeNormalDotGroup::addNormalDot( const NormalDotPtr& value )
		{
			if ( value )
			{
				myNormalDotSet.push_back( value );
			}
		}
		void NormalTypeNormalDotGroup::clearNormalDotSet()
		{
			myNormalDotSet.clear();
		}
		NormalDotPtr NormalTypeNormalDotGroup::getNormalDot( const NormalDotSetIterConst& setIterator ) const
		{
			if( setIterator != myNormalDotSet.cend() )
			{
				return *setIterator;
			}
			return NormalDotPtr();
		}

        /* ______________________________________________________________________ */
		TimeModification::TimeModification()
		:myActualNotes( makeActualNotes() )
		,myNormalNotes( makeNormalNotes() )
		,myNormalTypeNormalDotGroup( makeNormalTypeNormalDotGroup() )
        ,myHasNormalTypeNormalDotGroup( false )
		{}
		bool TimeModification::hasAttributes() const
		{
			return false;
		}
		std::ostream& TimeModification::streamAttributes( std::ostream& os ) const
		{
			return os;
		}
		std::ostream& TimeModification::streamName( std::ostream& os ) const
		{
			os << "time-modification";
			return os;
		}
		bool TimeModification::hasContents() const
		{
			return true;
		}
		std::ostream& TimeModification::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
		{
            os << std::endl;
			myActualNotes->toStream( os, indentLevel+1 );
            os << std::endl;
			myNormalNotes->toStream( os, indentLevel+1 );
            if ( myHasNormalTypeNormalDotGroup )
            {
                os << std::endl;
                myNormalTypeNormalDotGroup->streamContents( os, indentLevel+1, isOneLineOnly );
            }
			os << std::endl;
			isOneLineOnly = false;
			return os;
		}
		/* _________ ActualNotes minOccurs = 1, maxOccurs = 1 _________ */
		ActualNotesPtr TimeModification::getActualNotes() const
		{
			return myActualNotes;
		}
		void TimeModification::setActualNotes( const ActualNotesPtr& value )
		{
			if( value )
			{
				myActualNotes = value;
			}
		}
		/* _________ NormalNotes minOccurs = 1, maxOccurs = 1 _________ */
		NormalNotesPtr TimeModification::getNormalNotes() const
		{
			return myNormalNotes;
		}
		void TimeModification::setNormalNotes( const NormalNotesPtr& value )
		{
			if( value )
			{
				myNormalNotes = value;
			}
		}
		/* _________ NormalTypeNormalDotGroup minOccurs = 1, maxOccurs = 1 _________ */
		NormalTypeNormalDotGroupPtr TimeModification::getNormalTypeNormalDotGroup() const
		{
			return myNormalTypeNormalDotGroup;
		}
		void TimeModification::setNormalTypeNormalDotGroup( const NormalTypeNormalDotGroupPtr& value )
		{
			if( value )
			{
				myNormalTypeNormalDotGroup = value;
			}
		}
        bool TimeModification::getHasNormalTypeNormalDotGroup() const
        {
            return myHasNormalTypeNormalDotGroup;
        }
        void TimeModification::setHasNormalTypeNormalDotGroup( const bool value )
        {
            myHasNormalTypeNormalDotGroup = value;
        }
        NoteheadText::NoteheadText()
		:myDisplayText( makeDisplayText() )
		,myAccidentalText( makeAccidentalText() )
		{}
		bool NoteheadText::hasAttributes() const
		{
			return false;
		}
		std::ostream& NoteheadText::streamAttributes( std::ostream& os ) const
		{
			return os;
		}
		std::ostream& NoteheadText::streamName( std::ostream& os ) const
		{
			os << "notehead-text";
			return os;
		}
		bool NoteheadText::hasContents() const
		{
			return true;
		}
		std::ostream& NoteheadText::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
		{
			isOneLineOnly = false;
			os << std::endl;
			myDisplayText->toStream( os, indentLevel+1 );
			os << std::endl;
			myAccidentalText->toStream( os, indentLevel+1 );
            os << std::endl;
			return os;
		}
		/* _________ DisplayText minOccurs = 1, maxOccurs = 1 _________ */
		DisplayTextPtr NoteheadText::getDisplayText() const
		{
			return myDisplayText;
		}
		void NoteheadText::setDisplayText( const DisplayTextPtr& value )
		{
			if( value )
			{
				myDisplayText = value;
			}
		}
		/* _________ AccidentalText minOccurs = 1, maxOccurs = 1 _________ */
		AccidentalTextPtr NoteheadText::getAccidentalText() const
		{
			return myAccidentalText;
		}
		void NoteheadText::setAccidentalText( const AccidentalTextPtr& value )
		{
			if( value )
			{
				myAccidentalText = value;
			}
		}
        
        ArticulationsChoice::ArticulationsChoice()
		:myChoice( Choice::accent )
		,myAccent( makeAccent() )
		,myStrongAccent( makeStrongAccent() )
		,myStaccato( makeStaccato() )
		,myTenuto( makeTenuto() )
		,myDetachedLegato( makeDetachedLegato() )
		,myStaccatissimo( makeStaccatissimo() )
		,mySpiccato( makeSpiccato() )
		,myScoop( makeScoop() )
		,myPlop( makePlop() )
		,myDoit( makeDoit() )
		,myFalloff( makeFalloff() )
		,myBreathMark( makeBreathMark() )
		,myCaesura( makeCaesura() )
		,myStress( makeStress() )
		,myUnstress( makeUnstress() )
		,myOtherArticulation( makeOtherArticulation() )
		{}
		bool ArticulationsChoice::hasAttributes() const
		{
			return false;
		}
		std::ostream& ArticulationsChoice::streamAttributes( std::ostream& os ) const
		{
			return os;
		}
		std::ostream& ArticulationsChoice::streamName( std::ostream& os ) const
		{
			os << "articulations";
			return os;
		}
		bool ArticulationsChoice::hasContents() const
		{
			return true;
		}
		std::ostream& ArticulationsChoice::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
		{
            switch ( myChoice )
            {
                case Choice::accent:
                {
                    myAccent->toStream( os, indentLevel );
                }
                    break;
                case Choice::strongAccent:
                {
                    myStrongAccent->toStream( os, indentLevel );
                }
                    break;
                case Choice::staccato:
                {
                    myStaccato->toStream( os, indentLevel );
                }
                    break;
                case Choice::tenuto:
                {
                    myTenuto->toStream( os, indentLevel );
                }
                    break;
                case Choice::detachedLegato:
                {
                    myDetachedLegato->toStream( os, indentLevel );
                }
                    break;
                case Choice::stacatissimo:
                {
                    myStaccatissimo->toStream( os, indentLevel );
                }
                    break;
                case Choice::spiccato:
                {
                    mySpiccato->toStream( os, indentLevel );
                }
                    break;
                case Choice::scoop:
                {
                    myScoop->toStream( os, indentLevel );
                }
                    break;
                case Choice::plop:
                {
                    myPlop->toStream( os, indentLevel );
                }
                    break;
                case Choice::doit:
                {
                    myDoit->toStream( os, indentLevel );
                }
                    break;
                case Choice::falloff:
                {
                    myFalloff->toStream( os, indentLevel );
                }
                    break;
                case Choice::breathMark:
                {
                    myBreathMark->toStream( os, indentLevel );
                }
                    break;
                case Choice::caesura:
                {
                    myCaesura->toStream( os, indentLevel );
                }
                    break;
                case Choice::stress:
                {
                    myStress->toStream( os, indentLevel );
                }
                    break;
                case Choice::unstress:
                {
                    myUnstress->toStream( os, indentLevel );
                }
                    break;
                case Choice::otherArticulation:
                {
                    myOtherArticulation->toStream( os, indentLevel );
                }
                    break;
                default:
                    break;
            }
            return os;
		}
        /* _________ Choice minOccurs = 1, maxOccurs = 1 _________ */
        ArticulationsChoice::Choice ArticulationsChoice::getChoice() const
        {
            return myChoice;
        }
        void ArticulationsChoice::setChoice( const ArticulationsChoice::Choice value )
        {
            myChoice = value;
        }
		/* _________ Accent minOccurs = 1, maxOccurs = 1 _________ */
		AccentPtr ArticulationsChoice::getAccent() const
		{
			return myAccent;
		}
		void ArticulationsChoice::setAccent( const AccentPtr& value )
		{
			if( value )
			{
				myAccent = value;
			}
		}
		/* _________ StrongAccent minOccurs = 1, maxOccurs = 1 _________ */
		StrongAccentPtr ArticulationsChoice::getStrongAccent() const
		{
			return myStrongAccent;
		}
		void ArticulationsChoice::setStrongAccent( const StrongAccentPtr& value )
		{
			if( value )
			{
				myStrongAccent = value;
			}
		}
		/* _________ Staccato minOccurs = 1, maxOccurs = 1 _________ */
		StaccatoPtr ArticulationsChoice::getStaccato() const
		{
			return myStaccato;
		}
		void ArticulationsChoice::setStaccato( const StaccatoPtr& value )
		{
			if( value )
			{
				myStaccato = value;
			}
		}
		/* _________ Tenuto minOccurs = 1, maxOccurs = 1 _________ */
		TenutoPtr ArticulationsChoice::getTenuto() const
		{
			return myTenuto;
		}
		void ArticulationsChoice::setTenuto( const TenutoPtr& value )
		{
			if( value )
			{
				myTenuto = value;
			}
		}
		/* _________ DetachedLegato minOccurs = 1, maxOccurs = 1 _________ */
		DetachedLegatoPtr ArticulationsChoice::getDetachedLegato() const
		{
			return myDetachedLegato;
		}
		void ArticulationsChoice::setDetachedLegato( const DetachedLegatoPtr& value )
		{
			if( value )
			{
				myDetachedLegato = value;
			}
		}
		/* _________ Staccatissimo minOccurs = 1, maxOccurs = 1 _________ */
		StaccatissimoPtr ArticulationsChoice::getStaccatissimo() const
		{
			return myStaccatissimo;
		}
		void ArticulationsChoice::setStaccatissimo( const StaccatissimoPtr& value )
		{
			if( value )
			{
				myStaccatissimo = value;
			}
		}
		/* _________ Spiccato minOccurs = 1, maxOccurs = 1 _________ */
		SpiccatoPtr ArticulationsChoice::getSpiccato() const
		{
			return mySpiccato;
		}
		void ArticulationsChoice::setSpiccato( const SpiccatoPtr& value )
		{
			if( value )
			{
				mySpiccato = value;
			}
		}
		/* _________ Scoop minOccurs = 1, maxOccurs = 1 _________ */
		ScoopPtr ArticulationsChoice::getScoop() const
		{
			return myScoop;
		}
		void ArticulationsChoice::setScoop( const ScoopPtr& value )
		{
			if( value )
			{
				myScoop = value;
			}
		}
		/* _________ Plop minOccurs = 1, maxOccurs = 1 _________ */
		PlopPtr ArticulationsChoice::getPlop() const
		{
			return myPlop;
		}
		void ArticulationsChoice::setPlop( const PlopPtr& value )
		{
			if( value )
			{
				myPlop = value;
			}
		}
		/* _________ Doit minOccurs = 1, maxOccurs = 1 _________ */
		DoitPtr ArticulationsChoice::getDoit() const
		{
			return myDoit;
		}
		void ArticulationsChoice::setDoit( const DoitPtr& value )
		{
			if( value )
			{
				myDoit = value;
			}
		}
		/* _________ Falloff minOccurs = 1, maxOccurs = 1 _________ */
		FalloffPtr ArticulationsChoice::getFalloff() const
		{
			return myFalloff;
		}
		void ArticulationsChoice::setFalloff( const FalloffPtr& value )
		{
			if( value )
			{
				myFalloff = value;
			}
		}
		/* _________ BreathMark minOccurs = 1, maxOccurs = 1 _________ */
		BreathMarkPtr ArticulationsChoice::getBreathMark() const
		{
			return myBreathMark;
		}
		void ArticulationsChoice::setBreathMark( const BreathMarkPtr& value )
		{
			if( value )
			{
				myBreathMark = value;
			}
		}
		/* _________ Caesura minOccurs = 1, maxOccurs = 1 _________ */
		CaesuraPtr ArticulationsChoice::getCaesura() const
		{
			return myCaesura;
		}
		void ArticulationsChoice::setCaesura( const CaesuraPtr& value )
		{
			if( value )
			{
				myCaesura = value;
			}
		}
		/* _________ Stress minOccurs = 1, maxOccurs = 1 _________ */
		StressPtr ArticulationsChoice::getStress() const
		{
			return myStress;
		}
		void ArticulationsChoice::setStress( const StressPtr& value )
		{
			if( value )
			{
				myStress = value;
			}
		}
		/* _________ Unstress minOccurs = 1, maxOccurs = 1 _________ */
		UnstressPtr ArticulationsChoice::getUnstress() const
		{
			return myUnstress;
		}
		void ArticulationsChoice::setUnstress( const UnstressPtr& value )
		{
			if( value )
			{
				myUnstress = value;
			}
		}
		/* _________ OtherArticulation minOccurs = 1, maxOccurs = 1 _________ */
		OtherArticulationPtr ArticulationsChoice::getOtherArticulation() const
		{
			return myOtherArticulation;
		}
		void ArticulationsChoice::setOtherArticulation( const OtherArticulationPtr& value )
		{
			if( value )
			{
				myOtherArticulation = value;
			}
		}
        Articulations::Articulations()
        :myArticulationsChoiceSet()
        {}
        
        bool Articulations::hasAttributes() const
        {
            return false;
        }
        std::ostream& Articulations::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& Articulations::streamName( std::ostream& os ) const
        {
            return os << "articulations";
        }
        bool Articulations::hasContents() const
        {
            return myArticulationsChoiceSet.size() > 0;
        }
        std::ostream& Articulations::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
        {
            if ( hasContents() )
            {
                for ( auto x : myArticulationsChoiceSet )
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
        /* _________ ArticulationsChoice minOccurs = 0, maxOccurs = unbounded _________ */
        const ArticulationsChoiceSet& Articulations::getArticulationsChoiceSet() const
        {
            return myArticulationsChoiceSet;
        }
        void Articulations::addArticulationsChoice( const ArticulationsChoicePtr& value )
        {
            if ( value )
            {
                myArticulationsChoiceSet.push_back( value );
            }
        }
        void Articulations::removeArticulationsChoice( const ArticulationsChoiceSetIterConst& value )
        {
            if ( value != myArticulationsChoiceSet.cend() )
            {
                myArticulationsChoiceSet.erase( value );
            }
        }
        void Articulations::clearArticulationsChoiceSet()
        {
            myArticulationsChoiceSet.clear();
        }
        ArticulationsChoicePtr Articulations::getArticulationsChoice( const ArticulationsChoiceSetIterConst& setIterator ) const
        {
            if( setIterator != myArticulationsChoiceSet.cend() )
            {
                return *setIterator;
            }
            return ArticulationsChoicePtr();
        }
        
        ElisionSyllabicGroup::ElisionSyllabicGroup()
        :myElision( makeElision() )
        ,mySyllabic( makeSyllabic() )
        ,myHasSyllabic( false )
        {}
        
        bool ElisionSyllabicGroup::hasAttributes() const
        {
            return false;
        }
        std::ostream& ElisionSyllabicGroup::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& ElisionSyllabicGroup::streamName( std::ostream& os ) const
        {
            return os;
        }
        bool ElisionSyllabicGroup::hasContents() const
        {
            return true;
        }
        std::ostream& ElisionSyllabicGroup::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
        {
            isOneLineOnly = true;
            myElision->toStream( os, indentLevel );
            if ( myHasSyllabic )
            {
                isOneLineOnly = false;
                os << std::endl;
                mySyllabic->toStream( os, indentLevel );
            }
            return os;
        }
        /* _________ Elision minOccurs = 1, maxOccurs = 1 _________ */
        ElisionPtr ElisionSyllabicGroup::getElision() const
        {
            return myElision;
        }
        void ElisionSyllabicGroup::setElision( const ElisionPtr& value )
        {
            if ( value )
            {
                myElision = value;
            }
        }
        /* _________ Syllabic minOccurs = 0, maxOccurs = 1 _________ */
        SyllabicPtr ElisionSyllabicGroup::getSyllabic() const
        {
            return mySyllabic;
        }
        void ElisionSyllabicGroup::setSyllabic( const SyllabicPtr& value )
        {
            if ( value )
            {
                mySyllabic = value;
            }
        }
        bool ElisionSyllabicGroup::getHasSyllabic() const
        {
            return myHasSyllabic;
        }
        void ElisionSyllabicGroup::setHasSyllabic( const bool value )
        {
            myHasSyllabic = value;
        }
        
        /* _______________________________________________________________________________ */
        
        ElisionSyllabicTextGroup::ElisionSyllabicTextGroup()
        :myElisionSyllabicGroup( makeElisionSyllabicGroup() )
        ,myHasElisionSyllabicGroup( false )
        ,myText( makeText() )
        {}
        
        bool ElisionSyllabicTextGroup::hasAttributes() const
        {
            return false;
        }
        std::ostream& ElisionSyllabicTextGroup::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& ElisionSyllabicTextGroup::streamName( std::ostream& os ) const
        {
            return os;
        }
        bool ElisionSyllabicTextGroup::hasContents() const
        {
            return true;
        }
        std::ostream& ElisionSyllabicTextGroup::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
        {
            isOneLineOnly = true;
            if ( myHasElisionSyllabicGroup )
            {
                myElisionSyllabicGroup->streamContents( os, indentLevel, isOneLineOnly );
                isOneLineOnly = false;
                os << std::endl;
            }
            myText->toStream( os, indentLevel );
            return os;
        }
        
        /* _________ ElisionSyllabicGroup minOccurs = 0, maxOccurs = 1 _________ */
        ElisionSyllabicGroupPtr ElisionSyllabicTextGroup::getElisionSyllabicGroup() const
        {
            return myElisionSyllabicGroup;
        }
        void ElisionSyllabicTextGroup::setElisionSyllabicGroup( const ElisionSyllabicGroupPtr& value )
        {
            if ( value )
            {
                myElisionSyllabicGroup = value;
            }
        }
        bool ElisionSyllabicTextGroup::getHasElisionSyllabicGroup() const
        {
            return myHasElisionSyllabicGroup;
        }
        void ElisionSyllabicTextGroup::setHasElisionSyllabicGroup( const bool value )
        {
            myHasElisionSyllabicGroup = value;
        }
        /* _________ Text minOccurs = 1, maxOccurs = 1 _________ */
        TextPtr ElisionSyllabicTextGroup::getText() const
        {
            return myText;
        }
        void ElisionSyllabicTextGroup::setText( const TextPtr& value )
        {
            if ( value )
            {
                myText = value;
            }
        }
        
        /* _______________________________________________________________________________ */
        
        SyllabicTextGroup::SyllabicTextGroup()
        :mySyllabic( makeSyllabic() )
        ,myHasSyllabic( false )
        ,myText( makeText() )
        ,myElisionSyllabicTextGroupSet()
        ,myExtend( makeExtend() )
        ,myHasExtend( false )
        {}
        
        bool SyllabicTextGroup::hasAttributes() const
        {
            return false;
        }
        std::ostream& SyllabicTextGroup::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& SyllabicTextGroup::streamName( std::ostream& os ) const
        {
            return os;
        }
        bool SyllabicTextGroup::hasContents() const
        {
            return true;
        }
        std::ostream& SyllabicTextGroup::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
        {
            isOneLineOnly = true;
            if ( myHasSyllabic )
            {
                mySyllabic->toStream( os, indentLevel );
                os << std::endl;
            }
            myText->toStream( os, indentLevel );
            for ( auto x : myElisionSyllabicTextGroupSet )
            {
                os << std::endl;
                x->streamContents( os, indentLevel, isOneLineOnly );
            }
            if ( myHasExtend )
            {
                os << std::endl;
                myExtend->toStream( os, indentLevel );
            }
            isOneLineOnly = ! ( myHasSyllabic || myElisionSyllabicTextGroupSet.size() > 0 || myHasExtend );
            return os;
        }
        /* _________ Syllabic minOccurs = 0, maxOccurs = 1 _________ */
        SyllabicPtr SyllabicTextGroup::getSyllabic() const
        {
            return mySyllabic;
        }
        void SyllabicTextGroup::setSyllabic( const SyllabicPtr& value )
        {
            if ( value )
            {
                mySyllabic = value;
            }
        }
        bool SyllabicTextGroup::getHasSyllabic() const
        {
            return myHasSyllabic;
        }
        void SyllabicTextGroup::setHasSyllabic( const bool value )
        {
            myHasSyllabic = value;
        }
        /* _________ Text minOccurs = 1, maxOccurs = 1 _________ */
        TextPtr SyllabicTextGroup::getText() const
        {
            return myText;
        }
        void SyllabicTextGroup::setText( const TextPtr& value )
        {
            if ( value )
            {
                myText = value;
            }
        }
        /* _________ ElisionSyllabicTextGroup minOccurs = 0, maxOccurs = unbounded _________ */
        const ElisionSyllabicTextGroupSet& SyllabicTextGroup::getElisionSyllabicTextGroupSet() const
        {
            return myElisionSyllabicTextGroupSet;
        }
        void SyllabicTextGroup::addElisionSyllabicTextGroup( const ElisionSyllabicTextGroupPtr& value )
        {
            if ( value )
            {
                myElisionSyllabicTextGroupSet.push_back( value );
            }
        }
        void SyllabicTextGroup::removeElisionSyllabicTextGroup( const ElisionSyllabicTextGroupSetIterConst& value )
        {
            if ( value != myElisionSyllabicTextGroupSet.cend() )
            {
                myElisionSyllabicTextGroupSet.erase( value );
            }
        }
        void SyllabicTextGroup::clearElisionSyllabicTextGroupSet()
        {
            myElisionSyllabicTextGroupSet.clear();
        }
        ElisionSyllabicTextGroupPtr SyllabicTextGroup::getElisionSyllabicTextGroup( const ElisionSyllabicTextGroupSetIterConst& setIterator ) const
        {
            if( setIterator != myElisionSyllabicTextGroupSet.cend() )
            {
                return *setIterator;
            }
            return ElisionSyllabicTextGroupPtr();
        }
        /* _________ Extend minOccurs = 0, maxOccurs = 1 _________ */
        ExtendPtr SyllabicTextGroup::getExtend() const
        {
            return myExtend;
        }
        void SyllabicTextGroup::setExtend( const ExtendPtr& value )
        {
            if ( value )
            {
                myExtend = value;
            }
        }
        bool SyllabicTextGroup::getHasExtend() const
        {
            return myHasExtend;
        }
        void SyllabicTextGroup::setHasExtend( const bool value )
        {
            myHasExtend = value;
        }
        
        /* _______________________________________________________________________________ */
        
        LyricTextChoice::LyricTextChoice()
        :myChoice( Choice::syllabicTextGroup )
        ,mySyllabicTextGroup( makeSyllabicTextGroup() )
        ,myExtend( makeExtend() )
        ,myLaughing( makeLaughing() )
        ,myHumming( makeHumming() )
        {}
        bool LyricTextChoice::hasAttributes() const
        {
            return false;
        }
        std::ostream& LyricTextChoice::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& LyricTextChoice::streamName( std::ostream& os ) const
        {
            return os;
        }
        bool LyricTextChoice::hasContents() const
        {
            return myChoice == Choice::syllabicTextGroup;
        }
        std::ostream& LyricTextChoice::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
        {
            switch ( myChoice )
            {
                case Choice::syllabicTextGroup:
                {
                    mySyllabicTextGroup->streamContents( os, indentLevel, isOneLineOnly );
                }
                    break;
                case Choice::extend:
                {
                    myExtend->toStream( os, indentLevel );
                }
                    break;
                case Choice::laughing:
                {
                    myLaughing->toStream( os, indentLevel );
                }
                    break;
                case Choice::humming:
                {
                    myHumming->toStream( os, indentLevel );
                }
                    break;
                default:
                    break;
            }
            return os;
        }
        LyricTextChoice::Choice LyricTextChoice::getChoice() const
        {
            return myChoice;
        }
        void LyricTextChoice::setChoice( const LyricTextChoice::Choice value )
        {
            myChoice = value;
        }
        /* _________ SyllabicTextGroup minOccurs = 1, maxOccurs = 1 _________ */
        SyllabicTextGroupPtr LyricTextChoice::getSyllabicTextGroup() const
        {
            return mySyllabicTextGroup;
        }
        void LyricTextChoice::setSyllabicTextGroup( const SyllabicTextGroupPtr& value )
        {
            if ( value )
            {
                mySyllabicTextGroup = value;
            }
        }
        /* _________ Extend minOccurs = 1, maxOccurs = 1 _________ */
        ExtendPtr LyricTextChoice::getExtend() const
        {
            return myExtend;
        }
        void LyricTextChoice::setExtend( const ExtendPtr& value )
        {
            if ( value )
            {
                myExtend    = value;
            }
        }
        /* _________ Laughing minOccurs = 1, maxOccurs = 1 _________ */
        LaughingPtr LyricTextChoice::getLaughing() const
        {
            return myLaughing;
        }
        void LyricTextChoice::setLaughing( const LaughingPtr& value )
        {
            if ( value )
            {
                myLaughing = value;
            }
        }
        /* _________ Humming minOccurs = 1, maxOccurs = 1 _________ */
        HummingPtr LyricTextChoice::getHumming() const
        {
            return myHumming;
        }
        void LyricTextChoice::setHumming( const HummingPtr& value )
        {
            if ( value )
            {
                myHumming = value;
            }
        }
        
        /* _______________________________________________________________________________ */
        
        EditorialGroup::EditorialGroup()
        :myFootnote( makeFootnote() )
        ,myHasFootnote( false )
        ,myLevel( makeLevel() )
        ,myHasLevel( false )
        {}
        bool EditorialGroup::hasAttributes() const
        {
            return false;
        }
        std::ostream& EditorialGroup::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& EditorialGroup::streamName( std::ostream& os ) const
        {
            return os;
        }
        bool EditorialGroup::hasContents() const
        {
            return myHasFootnote || myHasLevel;
        }
        std::ostream& EditorialGroup::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
        {
            isOneLineOnly = true;
            if ( myHasFootnote )
            {
                myFootnote->toStream( os, indentLevel );
                if ( myHasLevel )
                {
                    os << std::endl;
                    isOneLineOnly = false;
                }
            }
            if ( myHasLevel )
            {
                myLevel->toStream( os, indentLevel );
            }
            return os;
        }
        /* _________ Footnote minOccurs = 0, maxOccurs = 1 _________ */
        FootnotePtr EditorialGroup::getFootnote() const
        {
            return myFootnote;
        }
        void EditorialGroup::setFootnote( const FootnotePtr& value )
        {
            if ( value )
            {
                myFootnote = value;
            }
        }
        bool EditorialGroup::getHasFootnote() const
        {
            return myHasFootnote;
        }
        void EditorialGroup::setHasFootnote( const bool value )
        {
            myHasFootnote = value;
        }
        /* _________ Level minOccurs = 0, maxOccurs = 1 _________ */
        LevelPtr EditorialGroup::getLevel() const
        {
            return myLevel;
        }
        void EditorialGroup::setLevel( const LevelPtr& value )
        {
            if ( value )
            {
                myLevel = value;
            }
        }
        bool EditorialGroup::getHasLevel() const
        {
            return myHasLevel;
        }
        void EditorialGroup::setHasLevel( const bool value )
        {
            myHasLevel = value;
        }
        
        
        
        /**************** LyricAttributes ****************/
        /* 5045 */
        LyricAttributes::LyricAttributes()
        :number()
        ,name()
        ,justify( types::LeftCenterRight::center )
        ,defaultX()
        ,defaultY()
        ,relativeX()
        ,relativeY()
        ,placement( types::AboveBelow::below )
        ,color()
        ,printObject( types::YesNo::no )
        ,hasNumber( false )
        ,hasName( false )
        ,hasJustify( false )
        ,hasDefaultX( false )
        ,hasDefaultY( false )
        ,hasRelativeX( false )
        ,hasRelativeY( false )
        ,hasPlacement( false )
        ,hasColor( false )
        ,hasPrintObject( false )
        {}
        
        bool LyricAttributes::hasValues() const
        {
            return hasNumber ||
            hasName ||
            hasJustify ||
            hasDefaultX ||
            hasDefaultY ||
            hasRelativeX ||
            hasRelativeY ||
            hasPlacement ||
            hasColor ||
            hasPrintObject;
        }
        
        std::ostream& LyricAttributes::toStream( std::ostream& os ) const
        {
            if ( hasValues() )
            {
                streamAttribute( os, number, "number", hasNumber );
                streamAttribute( os, name, "name", hasName );
                streamAttribute( os, justify, "justify", hasJustify );
                streamAttribute( os, defaultX, "default-x", hasDefaultX );
                streamAttribute( os, defaultY, "default-y", hasDefaultY );
                streamAttribute( os, relativeX, "relative-x", hasRelativeX );
                streamAttribute( os, relativeY, "relative-y", hasRelativeY );
                streamAttribute( os, placement, "placement", hasPlacement );
                streamAttribute( os, color, "color", hasColor );
                streamAttribute( os, printObject, "print-object", hasPrintObject );
            }
            return os;
        }
        
        /* _______________________________________________________________________________ */
        
        Lyric::Lyric()
        :myAttributes( std::make_shared<LyricAttributes>() )
        ,myLyricTextChoice( makeLyricTextChoice() )
        ,myEndLine( makeEndLine() )
        ,myHasEndLine( false )
        ,myEndParagraph( makeEndParagraph() )
        ,myHasEndParagraph( false )
        ,myEditorialGroup( makeEditorialGroup() )
        {}
        bool Lyric::hasAttributes() const
        {
            return false;
        }
        std::ostream& Lyric::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& Lyric::streamName( std::ostream& os ) const
        {
            return os << "lyric";
        }
        bool Lyric::hasContents() const
        {
            return true;
        }
        std::ostream& Lyric::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
        {
            os << std::endl;
            myLyricTextChoice->streamContents( os, indentLevel+1, isOneLineOnly );
            if ( myHasEndLine )
            {
                os << std::endl;
                myEndLine->toStream( os, indentLevel+1 );
            }
            if ( myHasEndParagraph )
            {
                os << std::endl;
                myEndParagraph->toStream( os, indentLevel+1 );
            }
            if( myEditorialGroup->hasContents() )
            {
                os << std::endl;
            }
            myEditorialGroup->streamContents( os, indentLevel+1, isOneLineOnly );
            os << std::endl;
            isOneLineOnly = false;
            return os;
        }
        /* _________ LyricTextChoice minOccurs = 1, maxOccurs = 1 _________ */
        LyricTextChoicePtr Lyric::getLyricTextChoice() const
        {
            return myLyricTextChoice;
        }
        void Lyric::setLyricTextChoice( const LyricTextChoicePtr& value )
        {
            if ( value )
            {
                myLyricTextChoice = value;
            }
        }
        /* _________ EndLine minOccurs = 0, maxOccurs = 1 _________ */
        EndLinePtr Lyric::getEndLine() const
        {
            return myEndLine;
        }
        void Lyric::setEndLine( const EndLinePtr& value )
        {
            if ( value )
            {
                myEndLine = value;
            }
        }
        bool Lyric::getHasEndLine() const
        {
            return myHasEndLine;
        }
        void Lyric::setHasEndLine( const bool value )
        {
            myHasEndLine = value;
        }
        /* _________ EndParagraph minOccurs = 0, maxOccurs = 1 _________ */
        EndParagraphPtr Lyric::getEndParagraph() const
        {
            return myEndParagraph;
        }
        void Lyric::setEndParagraph( const EndParagraphPtr& value )
        {
            if ( value )
            {
                myEndParagraph = value;
            }
        }
        bool Lyric::getHasEndParagraph() const
        {
            return myHasEndParagraph;
        }
        void Lyric::setHasEndParagraph( const bool value )
        {
            myHasEndParagraph = value;
        }
        /* _________ EditorialGroup minOccurs = 1, maxOccurs = 1 _________ */
        EditorialGroupPtr Lyric::getEditorialGroup() const
        {
            return myEditorialGroup;
        }
        void Lyric::setEditorialGroup( const EditorialGroupPtr& value )
        {
            if ( value )
            {
                myEditorialGroup = value;
            }
        }
    } // namespace e

} // namespace mx