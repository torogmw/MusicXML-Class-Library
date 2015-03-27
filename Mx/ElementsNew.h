#pragma once
#include "ElementInterface.h"
#include "Enums.h"
#include "Strings.h"
#include "FontSize.h"
#include "Integers.h"
#include "Decimals.h"
#include "NumberOrNormal.h"
#include "PositiveIntegerOrEmpty.h"
#include "Color.h"
#include "Date.h"
#include <memory>
#include "Elements.h"

namespace mx
{
    namespace e
    {
        /*
         <!--  ID = 3301 [3301] ------------------------->
         <!-- min=1 max=4294967295 OneOrMMany  -->
         <!-- MsItemElementKind::composite -->
         <!-- RecursiveSubElementCount = 93 -->
         <!-- All Sub Elements Are Implemented: true -->
         <xs:element name="direction-type" type="direction-type" maxOccurs="unbounded"/>
         <xs:complexType name="direction-type">
         <xs:annotation>
         <xs:documentation>Textual direction types may have more than 1 component due to multiple fonts. The dynamics element may also be used in the notations element. Attribute groups related to print suggestions apply to the individual direction-type, not to the overall direction.</xs:documentation>
         </xs:annotation>
         <xs:choice>
         <xs:element name="rehearsal" type="formatted-text" maxOccurs="unbounded">
         <xs:annotation>
         <xs:documentation>The rehearsal type specifies a rehearsal mark. Language is Italian ("it") by default. Enclosure is square by default. Left justification is assumed if not specified.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:element name="segno" type="empty-print-style-align" maxOccurs="unbounded">
         <xs:annotation>
         <xs:documentation>The segno element is the visual indicator of a segno sign. A sound element is needed to guide playback applications reliably.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:element name="words" type="formatted-text" maxOccurs="unbounded">
         <xs:annotation>
         <xs:documentation>The words element specifies a standard text direction. Left justification is assumed if not specified. Language is Italian ("it") by default. Enclosure is none by default.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:element name="coda" type="empty-print-style-align" maxOccurs="unbounded">
         <xs:annotation>
         <xs:documentation>The coda element is the visual indicator of a coda sign. A sound element is needed to guide playback applications reliably.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:element name="wedge" type="wedge"/>
         <xs:element name="dynamics" type="dynamics" maxOccurs="unbounded"/>
         <xs:element name="dashes" type="dashes"/>
         <xs:element name="bracket" type="bracket"/>
         <xs:element name="pedal" type="pedal"/>
         <xs:element name="metronome" type="metronome"/>
         <xs:element name="octave-shift" type="octave-shift"/>
         <xs:element name="harp-pedals" type="harp-pedals"/>
         <xs:element name="damp" type="empty-print-style-align">
         <xs:annotation>
         <xs:documentation>The damp element specifies a harp damping mark.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:element name="damp-all" type="empty-print-style-align">
         <xs:annotation>
         <xs:documentation>The damp-all element specifies a harp damping mark for all strings.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:element name="eyeglasses" type="empty-print-style-align">
         <xs:annotation>
         <xs:documentation>The eyeglasses element specifies the eyeglasses symbol, common in commercial music.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:element name="string-mute" type="string-mute"/>
         <xs:element name="scordatura" type="scordatura"/>
         <xs:element name="image" type="image"/>
         <xs:element name="principal-voice" type="principal-voice"/>
         <xs:element name="accordion-registration" type="accordion-registration"/>
         <xs:element name="percussion" type="percussion" maxOccurs="unbounded"/>
         <xs:element name="other-direction" type="other-direction"/>
         </xs:choice>
         </xs:complexType> */
        
        struct AttributesIterface;
        using AttributesIterfacePtr = std::shared_ptr<AttributesIterface>;
        
        struct AttributesIterface : public AttributesInterface
        {
        public:
            AttributesIterface();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
        };
        
        class DirectionType;
        using DirectionTypePtr = std::shared_ptr<DirectionType>;
        using DirectionTypeUPtr = std::unique_ptr<DirectionType>;
        using DirectionTypeSet = std::vector<DirectionTypePtr>;
        using DirectionTypeSetIter = DirectionTypeSet::iterator;
        using DirectionTypeSetIterConst = DirectionTypeSet::const_iterator;
        inline DirectionTypePtr makeDirectionType() { return std::make_shared<DirectionType>(); }
        class DirectionType : public ElementInterface
        {
        public:
            enum class Choice
            {
                rehearsal = 1,
                segno = 2,
                words = 3,
                coda = 4,
                wedge = 5,
                dynamics = 6,
                dashes = 7,
                bracket = 8,
                pedal = 9,
                metronome = 10,
                octaveShift = 11,
                harpPedals = 12,
                damp = 13,
                dampAll = 14,
                eyeglasses = 15,
                stringMute = 16,
                scordatura = 17,
                image = 18,
                principalVoice = 19,
                accordionRegistration = 20,
                percussion = 21,
                otherDirection = 22
            };
            DirectionType();
            virtual bool hasAttributes() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual bool hasContents() const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            DirectionType::Choice getChoice() const;
            void setChoice( const DirectionType::Choice value );
            /* _________ Rehearsal minOccurs = 1, maxOccurs = unbounded _________ */
            const RehearsalSet& getRehearsalSet() const;
            void addRehearsal( const RehearsalPtr& value );
            void removeRehearsal( const RehearsalSetIterConst& value );
            void clearRehearsalSet();
            RehearsalPtr getRehearsal( const RehearsalSetIterConst& setIterator ) const;
            /* _________ Segno minOccurs = 1, maxOccurs = unbounded _________ */
            const SegnoSet& getSegnoSet() const;
            void addSegno( const SegnoPtr& value );
            void removeSegno( const SegnoSetIterConst& value );
            void clearSegnoSet();
            SegnoPtr getSegno( const SegnoSetIterConst& setIterator ) const;
            /* _________ Words minOccurs = 1, maxOccurs = unbounded _________ */
            const WordsSet& getWordsSet() const;
            void addWords( const WordsPtr& value );
            void removeWords( const WordsSetIterConst& value );
            void clearWordsSet();
            WordsPtr getWords( const WordsSetIterConst& setIterator ) const;
            /* _________ Coda minOccurs = 1, maxOccurs = unbounded _________ */
            const CodaSet& getCodaSet() const;
            void addCoda( const CodaPtr& value );
            void removeCoda( const CodaSetIterConst& value );
            void clearCodaSet();
            CodaPtr getCoda( const CodaSetIterConst& setIterator ) const;
            /* _________ Wedge minOccurs = 1, maxOccurs = 1 _________ */
            WedgePtr getWedge() const;
            void setWedge( const WedgePtr& value );
            /* _________ Dynamics minOccurs = 1, maxOccurs = unbounded _________ */
            const DynamicsSet& getDynamicsSet() const;
            void addDynamics( const DynamicsPtr& value );
            void removeDynamics( const DynamicsSetIterConst& value );
            void clearDynamicsSet();
            DynamicsPtr getDynamics( const DynamicsSetIterConst& setIterator ) const;
            /* _________ Dashes minOccurs = 1, maxOccurs = 1 _________ */
            DashesPtr getDashes() const;
            void setDashes( const DashesPtr& value );
            /* _________ Bracket minOccurs = 1, maxOccurs = 1 _________ */
            BracketPtr getBracket() const;
            void setBracket( const BracketPtr& value );
            /* _________ Pedal minOccurs = 1, maxOccurs = 1 _________ */
            PedalPtr getPedal() const;
            void setPedal( const PedalPtr& value );
            /* _________ Metronome minOccurs = 1, maxOccurs = 1 _________ */
            MetronomePtr getMetronome() const;
            void setMetronome( const MetronomePtr& value );
            /* _________ OctaveShift minOccurs = 1, maxOccurs = 1 _________ */
            OctaveShiftPtr getOctaveShift() const;
            void setOctaveShift( const OctaveShiftPtr& value );
            /* _________ HarpPedals minOccurs = 1, maxOccurs = 1 _________ */
            HarpPedalsPtr getHarpPedals() const;
            void setHarpPedals( const HarpPedalsPtr& value );
            /* _________ Damp minOccurs = 1, maxOccurs = 1 _________ */
            DampPtr getDamp() const;
            void setDamp( const DampPtr& value );
            /* _________ DampAll minOccurs = 1, maxOccurs = 1 _________ */
            DampAllPtr getDampAll() const;
            void setDampAll( const DampAllPtr& value );
            /* _________ Eyeglasses minOccurs = 1, maxOccurs = 1 _________ */
            EyeglassesPtr getEyeglasses() const;
            void setEyeglasses( const EyeglassesPtr& value );
            /* _________ StringMute minOccurs = 1, maxOccurs = 1 _________ */
            StringMutePtr getStringMute() const;
            void setStringMute( const StringMutePtr& value );
            /* _________ Scordatura minOccurs = 1, maxOccurs = 1 _________ */
            ScordaturaPtr getScordatura() const;
            void setScordatura( const ScordaturaPtr& value );
            /* _________ Image minOccurs = 1, maxOccurs = 1 _________ */
            ImagePtr getImage() const;
            void setImage( const ImagePtr& value );
            /* _________ PrincipalVoice minOccurs = 1, maxOccurs = 1 _________ */
            PrincipalVoicePtr getPrincipalVoice() const;
            void setPrincipalVoice( const PrincipalVoicePtr& value );
            /* _________ AccordionRegistration minOccurs = 1, maxOccurs = 1 _________ */
            AccordionRegistrationPtr getAccordionRegistration() const;
            void setAccordionRegistration( const AccordionRegistrationPtr& value );
            /* _________ Percussion minOccurs = 1, maxOccurs = unbounded _________ */
            const PercussionSet& getPercussionSet() const;
            void addPercussion( const PercussionPtr& value );
            void removePercussion( const PercussionSetIterConst& value );
            void clearPercussionSet();
            PercussionPtr getPercussion( const PercussionSetIterConst& setIterator ) const;
            /* _________ OtherDirection minOccurs = 1, maxOccurs = 1 _________ */
            OtherDirectionPtr getOtherDirection() const;
            void setOtherDirection( const OtherDirectionPtr& value );
        private:
            Choice myChoice;
            RehearsalSet myRehearsalSet;
            SegnoSet mySegnoSet;
            WordsSet myWordsSet;
            CodaSet myCodaSet;
            WedgePtr myWedge;
            DynamicsSet myDynamicsSet;
            DashesPtr myDashes;
            BracketPtr myBracket;
            PedalPtr myPedal;
            MetronomePtr myMetronome;
            OctaveShiftPtr myOctaveShift;
            HarpPedalsPtr myHarpPedals;
            DampPtr myDamp;
            DampAllPtr myDampAll;
            EyeglassesPtr myEyeglasses;
            StringMutePtr myStringMute;
            ScordaturaPtr myScordatura;
            ImagePtr myImage;
            PrincipalVoicePtr myPrincipalVoice;
            AccordionRegistrationPtr myAccordionRegistration;
            PercussionSet myPercussionSet;
            OtherDirectionPtr myOtherDirection;
        };
        
        /*
         3926 [ equivalents 3926, 5959 ]
         <!--  ID = 3926 [3926, 5959] ------------------------->
         <!-- min=0 max=1 OptionalSingleOccurrence  -->
         <!-- MsItemElementKind::composite -->
         <!-- RecursiveSubElementCount = 8 -->
         <!-- All Sub Elements Are Implemented: true -->
         <xs:element name="midi-instrument" type="midi-instrument" minOccurs="0"/>
         <xs:complexType name="midi-instrument">
         <xs:annotation>
         <xs:documentation>The midi-instrument type defines MIDI 1.0 instrument playback. The midi-instrument element can be a part of either the score-instrument element at the start of a part, or the sound element within a part. The id attribute refers to the score-instrument affected by the change.</xs:documentation>
         </xs:annotation>
         <xs:sequence>
         <xs:element name="midi-channel" type="midi-16" minOccurs="0">
         <xs:annotation>
         <xs:documentation>The midi-channel element specifies a MIDI 1.0 channel numbers ranging from 1 to 16.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:element name="midi-name" type="xs:string" minOccurs="0">
         <xs:annotation>
         <xs:documentation>The midi-name element corresponds to a ProgramName meta-event within a Standard MIDI File.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:element name="midi-bank" type="midi-16384" minOccurs="0">
         <xs:annotation>
         <xs:documentation>The midi-bank element specified a MIDI 1.0 bank number ranging from 1 to 16,384.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:element name="midi-program" type="midi-128" minOccurs="0">
         <xs:annotation>
         <xs:documentation>The midi-program element specifies a MIDI 1.0 program number ranging from 1 to 128.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:element name="midi-unpitched" type="midi-128" minOccurs="0">
         <xs:annotation>
         <xs:documentation>For unpitched instruments, the midi-unpitched element specifies a MIDI 1.0 note number ranging from 1 to 128. It is usually used with MIDI banks for percussion. Note that MIDI 1.0 note numbers are generally specified from 0 to 127 rather than the 1 to 128 numbering used in this element.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:element name="volume" type="percent" minOccurs="0">
         <xs:annotation>
         <xs:documentation>The volume element value is a percentage of the maximum ranging from 0 to 100, with decimal values allowed. This corresponds to a scaling value for the MIDI 1.0 channel volume controller.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:element name="pan" type="rotation-degrees" minOccurs="0">
         <xs:annotation>
         <xs:documentation>The pan and elevation elements allow placing of sound in a 3-D space relative to the listener. Both are expressed in degrees ranging from -180 to 180. For pan, 0 is straight ahead, -90 is hard left, 90 is hard right, and -180 and 180 are directly behind the listener.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:element name="elevation" type="rotation-degrees" minOccurs="0">
         <xs:annotation>
         <xs:documentation>The elevation and pan elements allow placing of sound in a 3-D space relative to the listener. Both are expressed in degrees ranging from -180 to 180. For elevation, 0 is level with the listener, 90 is directly above, and -90 is directly below.</xs:documentation>
         </xs:annotation>
         </xs:element>
         </xs:sequence>
         <xs:attribute name="id" type="xs:IDREF" use="required"/>
         </xs:complexType> */
        
        struct MidiInstrumentAttributes;
        using MidiInstrumentAttributesPtr = std::shared_ptr<MidiInstrumentAttributes>;
        
        struct MidiInstrumentAttributes : public AttributesInterface
        {
        public:
            MidiInstrumentAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::XsIDREF id;
            const 	bool hasId;
        };
        
        class MidiInstrument;
        using MidiInstrumentPtr = std::shared_ptr<MidiInstrument>;
        using MidiInstrumentUPtr = std::unique_ptr<MidiInstrument>;
        using MidiInstrumentSet = std::vector<MidiInstrumentPtr>;
        using MidiInstrumentSetIter = MidiInstrumentSet::iterator;
        using MidiInstrumentSetIterConst = MidiInstrumentSet::const_iterator;
        inline MidiInstrumentPtr makeMidiInstrument() { return std::make_shared<MidiInstrument>(); }
        class MidiInstrument : public ElementInterface
        {
        public:
            MidiInstrument();
            virtual bool hasAttributes() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual bool hasContents() const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            MidiInstrumentAttributesPtr getAttributes() const;
            void setAttributes( const MidiInstrumentAttributesPtr& value );
            /* _________ MidiChannel minOccurs = 0, maxOccurs = 1 _________ */
            MidiChannelPtr getMidiChannel() const;
            void setMidiChannel( const MidiChannelPtr& value );
            bool getHasMidiChannel() const;
            void setHasMidiChannel( const bool value );
            /* _________ MidiName minOccurs = 0, maxOccurs = 1 _________ */
            MidiNamePtr getMidiName() const;
            void setMidiName( const MidiNamePtr& value );
            bool getHasMidiName() const;
            void setHasMidiName( const bool value );
            /* _________ MidiBank minOccurs = 0, maxOccurs = 1 _________ */
            MidiBankPtr getMidiBank() const;
            void setMidiBank( const MidiBankPtr& value );
            bool getHasMidiBank() const;
            void setHasMidiBank( const bool value );
            /* _________ MidiProgram minOccurs = 0, maxOccurs = 1 _________ */
            MidiProgramPtr getMidiProgram() const;
            void setMidiProgram( const MidiProgramPtr& value );
            bool getHasMidiProgram() const;
            void setHasMidiProgram( const bool value );
            /* _________ MidiUnpitched minOccurs = 0, maxOccurs = 1 _________ */
            MidiUnpitchedPtr getMidiUnpitched() const;
            void setMidiUnpitched( const MidiUnpitchedPtr& value );
            bool getHasMidiUnpitched() const;
            void setHasMidiUnpitched( const bool value );
            /* _________ Volume minOccurs = 0, maxOccurs = 1 _________ */
            VolumePtr getVolume() const;
            void setVolume( const VolumePtr& value );
            bool getHasVolume() const;
            void setHasVolume( const bool value );
            /* _________ Pan minOccurs = 0, maxOccurs = 1 _________ */
            PanPtr getPan() const;
            void setPan( const PanPtr& value );
            bool getHasPan() const;
            void setHasPan( const bool value );
            /* _________ Elevation minOccurs = 0, maxOccurs = 1 _________ */
            ElevationPtr getElevation() const;
            void setElevation( const ElevationPtr& value );
            bool getHasElevation() const;
            void setHasElevation( const bool value );
        private:
            MidiInstrumentAttributesPtr myAttributes;
            MidiChannelPtr myMidiChannel;
            bool myHasMidiChannel;
            MidiNamePtr myMidiName;
            bool myHasMidiName;
            MidiBankPtr myMidiBank;
            bool myHasMidiBank;
            MidiProgramPtr myMidiProgram;
            bool myHasMidiProgram;
            MidiUnpitchedPtr myMidiUnpitched;
            bool myHasMidiUnpitched;
            VolumePtr myVolume;
            bool myHasVolume;
            PanPtr myPan;
            bool myHasPan;
            ElevationPtr myElevation;
            bool myHasElevation;
        };
        
        
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
			return true;
		}
		std::ostream& MidiInstrument::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
		{
			isOneLineOnly = false;
			os << std::endl;
			// mySign->toStream( os, indentLevel+1 );
			throw std::runtime_error{ "not implemented" };
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
        class X_______X;
        using X_______XPtr = std::shared_ptr<X_______X>;
        using X_______XUPtr = std::unique_ptr<X_______X>;
        using X_______XSet = std::vector<X_______XPtr>;
        using X_______XSetIter = X_______XSet::iterator;
        using X_______XSetIterConst = X_______XSet::const_iterator;
        inline X_______XPtr makeX_______X() { return std::make_shared<X_______X>(); }
        class X_______X : public ElementInterface
        {
        public:
            X_______X();
            virtual bool hasAttributes() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual bool hasContents() const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
        private:
        };
        
        class X_______X;
        using X_______XPtr = std::shared_ptr<X_______X>;
        using X_______XUPtr = std::unique_ptr<X_______X>;
        using X_______XSet = std::vector<X_______XPtr>;
        using X_______XSetIter = X_______XSet::iterator;
        using X_______XSetIterConst = X_______XSet::const_iterator;
        inline X_______XPtr makeX_______X() { return std::make_shared<X_______X>(); }
        class X_______X : public ElementInterface
        {
        public:
            X_______X();
            virtual bool hasAttributes() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual bool hasContents() const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
        private:
        };
#endif
    }
}