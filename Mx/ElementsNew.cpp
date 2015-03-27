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