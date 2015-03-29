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
        
        /*
         3930 [ equivalents 3930, 5050 ]
         <!--  ID = 3930 [3930, 5050] ------------------------->
         <!-- min=0 max=1 OptionalSingleOccurrence  -->
         <!-- MsItemElementKind::composite -->
         <!-- RecursiveSubElementCount = 4 -->
         <!-- All Sub Elements Are Implemented: true -->
         <xs:element name="play" type="play" minOccurs="0"/>
         <xs:complexType name="play">
         <xs:annotation>
         <xs:documentation>The play type, new in Version 3.0, specifies playback techniques to be used in conjunction with the instrument-sound element. When used as part of a sound element, it applies to all notes going forward in score order. In multi-instrument parts, the affected instrument should be specified using the id attribute. When used as part of a note element, it applies to the current note only.</xs:documentation>
         </xs:annotation>
         <xs:sequence>
         <xs:choice minOccurs="0" maxOccurs="unbounded">
         <xs:element name="ipa" type="xs:string">
         <xs:annotation>
         <xs:documentation>The ipa element represents International Phonetic Alphabet (IPA) sounds for vocal music. String content is limited to IPA 2005 symbols represented in Unicode 6.0.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:element name="mute" type="mute"/>
         <xs:element name="semi-pitched" type="semi-pitched"/>
         <xs:element name="other-play" type="other-play"/>
         </xs:choice>
         </xs:sequence>
         <xs:attribute name="id" type="xs:IDREF"/>
         </xs:complexType> */
        
        struct PlayAttributes;
        using PlayAttributesPtr = std::shared_ptr<PlayAttributes>;
        
        struct PlayAttributes : public AttributesInterface
        {
        public:
            PlayAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::XsIDREF id;
            bool hasId;
        };
        
        class Play;
        using PlayPtr = std::shared_ptr<Play>;
        using PlayUPtr = std::unique_ptr<Play>;
        using PlaySet = std::vector<PlayPtr>;
        using PlaySetIter = PlaySet::iterator;
        using PlaySetIterConst = PlaySet::const_iterator;
        inline PlayPtr makePlay() { return std::make_shared<Play>(); }
        class Play : public ElementInterface
        {
        public:
            enum class Choice
            {
                ipa = 1,
                mute = 2,
                semiPitched = 3,
                otherPlay = 4
            };
            Play();
            virtual bool hasAttributes() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual bool hasContents() const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            PlayAttributesPtr getAttributes() const;
            void setAttributes( const PlayAttributesPtr& value );
            /* _________ Choice __________ */
            Play::Choice getChoice() const;
            void setChoice( const Play::Choice value );
            /* _________ Ipa minOccurs = 1, maxOccurs = 1 _________ */
            IpaPtr getIpa() const;
            void setIpa( const IpaPtr& value );
            /* _________ Mute minOccurs = 1, maxOccurs = 1 _________ */
            MutePtr getMute() const;
            void setMute( const MutePtr& value );
            /* _________ SemiPitched minOccurs = 1, maxOccurs = 1 _________ */
            SemiPitchedPtr getSemiPitched() const;
            void setSemiPitched( const SemiPitchedPtr& value );
            /* _________ OtherPlay minOccurs = 1, maxOccurs = 1 _________ */
            OtherPlayPtr getOtherPlay() const;
            void setOtherPlay( const OtherPlayPtr& value );
            
        private:
            PlayAttributesPtr myAttributes;
            Choice myChoice;
            IpaPtr myIpa;
            MutePtr myMute;
            SemiPitchedPtr mySemiPitched;
            OtherPlayPtr myOtherPlay;
        };
        /*
         4079
         <!-- min=0 max=1 OptionalSingleOccurrence  -->
         <!-- MsItemElementKind::composite -->
         <!-- RecursiveSubElementCount = 5 -->
         <!-- All Sub Elements Are Implemented: true -->
         <xs:element name="encoding" type="encoding" minOccurs="0"/>
         <xs:complexType name="encoding">
         <xs:annotation>
         <xs:documentation>The encoding element contains information about who did the digital encoding, when, with what software, and in what aspects. Standard type values for the encoder element are music, words, and arrangement, but other types may be used. The type attribute is only needed when there are multiple encoder elements.</xs:documentation>
         </xs:annotation>
         <xs:choice minOccurs="0" maxOccurs="unbounded">
         <xs:element name="encoding-date" type="yyyy-mm-dd"/>
         <xs:element name="encoder" type="typed-text"/>
         <xs:element name="software" type="xs:string"/>
         <xs:element name="encoding-description" type="xs:string"/>
         <xs:element name="supports" type="supports"/>
         </xs:choice>
         </xs:complexType> */
        
        class Encoding;
        using EncodingPtr = std::shared_ptr<Encoding>;
        using EncodingUPtr = std::unique_ptr<Encoding>;
        using EncodingSet = std::vector<EncodingPtr>;
        using EncodingSetIter = EncodingSet::iterator;
        using EncodingSetIterConst = EncodingSet::const_iterator;
        inline EncodingPtr makeEncoding() { return std::make_shared<Encoding>(); }
        class Encoding : public ElementInterface
        {
        public:
            enum class Choice
            {
                encodingDate = 1,
                encoder = 2,
                software = 3,
                encodingDescription = 4,
                supports = 5
            };
            Encoding();
            virtual bool hasAttributes() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual bool hasContents() const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            /* _________ Choice _________ */
            Encoding::Choice getChoice() const;
            void setChoice( const Encoding::Choice value );
            /* _________ EncodingDate minOccurs = 1, maxOccurs = 1 _________ */
            EncodingDatePtr getEncodingDate() const;
            void setEncodingDate( const EncodingDatePtr& value );
            /* _________ Encoder minOccurs = 1, maxOccurs = 1 _________ */
            EncoderPtr getEncoder() const;
            void setEncoder( const EncoderPtr& value );
            /* _________ Software minOccurs = 1, maxOccurs = 1 _________ */
            SoftwarePtr getSoftware() const;
            void setSoftware( const SoftwarePtr& value );
            /* _________ EncodingDescription minOccurs = 1, maxOccurs = 1 _________ */
            EncodingDescriptionPtr getEncodingDescription() const;
            void setEncodingDescription( const EncodingDescriptionPtr& value );
            /* _________ Supports minOccurs = 1, maxOccurs = 1 _________ */
            SupportsPtr getSupports() const;
            void setSupports( const SupportsPtr& value );
        private:
            Choice myChoice;
            EncodingDatePtr myEncodingDate;
            EncoderPtr myEncoder;
            SoftwarePtr mySoftware;
            EncodingDescriptionPtr myEncodingDescription;
            SupportsPtr mySupports;
        };
        /*
         4096
         <!--  ID = 4096 [4096] ------------------------->
         <!-- min=0 max=1 OptionalSingleOccurrence  -->
         <!-- MsItemElementKind::composite -->
         <!-- RecursiveSubElementCount = 1 -->
         <!-- All Sub Elements Are Implemented: true -->
         <xs:element name="miscellaneous" type="miscellaneous" minOccurs="0"/>
         <xs:complexType name="miscellaneous">
         <xs:annotation>
         <xs:documentation>If a program has other metadata not yet supported in the MusicXML format, it can go in the miscellaneous element. The miscellaneous type puts each separate part of metadata into its own miscellaneous-field type.</xs:documentation>
         </xs:annotation>
         <xs:sequence>
         <xs:element name="miscellaneous-field" type="miscellaneous-field" minOccurs="0" maxOccurs="unbounded"/>
         </xs:sequence>
         </xs:complexType> */
        
        class Miscellaneous;
        using MiscellaneousPtr = std::shared_ptr<Miscellaneous>;
        using MiscellaneousUPtr = std::unique_ptr<Miscellaneous>;
        using MiscellaneousSet = std::vector<MiscellaneousPtr>;
        using MiscellaneousSetIter = MiscellaneousSet::iterator;
        using MiscellaneousSetIterConst = MiscellaneousSet::const_iterator;
        inline MiscellaneousPtr makeMiscellaneous() { return std::make_shared<Miscellaneous>(); }
        class Miscellaneous : public ElementInterface
        {
        public:
            Miscellaneous();
            virtual bool hasAttributes() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual bool hasContents() const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            /* _________ MiscellaneousField minOccurs = 0, maxOccurs = unbounded _________ */
            const MiscellaneousFieldSet& getMiscellaneousFieldSet() const;
            void addMiscellaneousField( const MiscellaneousFieldPtr& value );
            void removeMiscellaneousField( const MiscellaneousFieldSetIterConst& value );
            void clearMiscellaneousFieldSet();
            MiscellaneousFieldPtr getMiscellaneousField( const MiscellaneousFieldSetIterConst& setIterator ) const;
        private:
            MiscellaneousFieldSet myMiscellaneousFieldSet;
        };
        /*
         3314 [ equivalents 3314, 6331 ]
         <!--  ID = 3314 [3314, 6331] ------------------------->
         <!-- min=0 max=1 OptionalSingleOccurrence  -->
         <!-- MsItemElementKind::composite -->
         <!-- RecursiveSubElementCount = 16 -->
         <!-- All Sub Elements Are Implemented: true -->
         <xs:element name="sound" type="sound" minOccurs="0"/>
         <xs:complexType name="sound">
         <xs:annotation>
         <xs:documentation>The sound element contains general playback parameters. They can stand alone within a part/measure, or be a component element within a direction.
         
         Tempo is expressed in quarter notes per minute. If 0, the sound-generating program should prompt the user at the time of compiling a sound (MIDI) file.
         
         Dynamics (or MIDI velocity) are expressed as a percentage of the default forte value (90 for MIDI 1.0).
         
         Dacapo indicates to go back to the beginning of the movement. When used it always has the value "yes".
         
         Segno and dalsegno are used for backwards jumps to a segno sign; coda and tocoda are used for forward jumps to a coda sign. If there are multiple jumps, the value of these parameters can be used to name and distinguish them. If segno or coda is used, the divisions attribute can also be used to indicate the number of divisions per quarter note. Otherwise sound and MIDI generating programs may have to recompute this.
         
         By default, a dalsegno or dacapo attribute indicates that the jump should occur the first time through, while a tocoda attribute indicates the jump should occur the second time through. The time that jumps occur can be changed by using the time-only attribute.
         
         Forward-repeat is used when a forward repeat sign is implied, and usually follows a bar line. When used it always has the value of "yes".
         
         The fine attribute follows the final note or rest in a movement with a da capo or dal segno direction. If numeric, the value represents the actual duration of the final note or rest, which can be ambiguous in written notation and different among parts and voices. The value may also be "yes" to indicate no change to the final duration.
         
         If the sound element applies only particular times through a repeat, the time-only attribute indicates which times to apply the sound element.
         
         Pizzicato in a sound element effects all following notes. Yes indicates pizzicato, no indicates arco.
         
         The pan and elevation attributes are deprecated in Version 2.0. The pan and elevation elements in the midi-instrument element should be used instead. The meaning of the pan and elevation attributes is the same as for the pan and elevation elements. If both are present, the mid-instrument elements take priority.
         
         The damper-pedal, soft-pedal, and sostenuto-pedal attributes effect playback of the three common piano pedals and their MIDI controller equivalents. The yes value indicates the pedal is depressed; no indicates the pedal is released. A numeric value from 0 to 100 may also be used for half pedaling. This value is the percentage that the pedal is depressed. A value of 0 is equivalent to no, and a value of 100 is equivalent to yes.
         
         MIDI devices, MIDI instruments, and playback techniques are changed using the midi-device, midi-instrument, and play elements. When there are multiple instances of these elements, they should be grouped together by instrument using the id attribute values.
         
         The offset element is used to indicate that the sound takes place offset from the current score position. If the sound element is a child of a direction element, the sound offset element overrides the direction offset element if both elements are present. Note that the offset reflects the intended musical position for the change in sound. It should not be used to compensate for latency issues in particular hardware configurations.</xs:documentation>
         </xs:annotation>
         <xs:sequence>
         <xs:sequence minOccurs="0" maxOccurs="unbounded">
         <xs:element name="midi-device" type="midi-device" minOccurs="0"/>
         <xs:element name="midi-instrument" type="midi-instrument" minOccurs="0"/>
         <xs:element name="play" type="play" minOccurs="0"/>
         </xs:sequence>
         <xs:element name="offset" type="offset" minOccurs="0"/>
         </xs:sequence>
         <xs:attribute name="tempo" type="non-negative-decimal"/>
         <xs:attribute name="dynamics" type="non-negative-decimal"/>
         <xs:attribute name="dacapo" type="yes-no"/>
         <xs:attribute name="segno" type="xs:token"/>
         <xs:attribute name="dalsegno" type="xs:token"/>
         <xs:attribute name="coda" type="xs:token"/>
         <xs:attribute name="tocoda" type="xs:token"/>
         <xs:attribute name="divisions" type="divisions"/>
         <xs:attribute name="forward-repeat" type="yes-no"/>
         <xs:attribute name="fine" type="xs:token"/>
         <xs:attribute name="time-only" type="time-only"/>
         <xs:attribute name="pizzicato" type="yes-no"/>
         <xs:attribute name="pan" type="rotation-degrees"/>
         <xs:attribute name="elevation" type="rotation-degrees"/>
         <xs:attribute name="damper-pedal" type="yes-no-number"/>
         <xs:attribute name="soft-pedal" type="yes-no-number"/>
         <xs:attribute name="sostenuto-pedal" type="yes-no-number"/>
         </xs:complexType> */
        
        struct SoundAttributes;
        using SoundAttributesPtr = std::shared_ptr<SoundAttributes>;
        
        struct SoundAttributes : public AttributesInterface
        {
        public:
            SoundAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::NonNegativeDecimal tempo;
            types::NonNegativeDecimal dynamics;
            types::YesNo dacapo;
            types::XsToken segno;
            types::XsToken dalsegno;
            types::XsToken coda;
            types::XsToken tocoda;
            types::DivisionsValue divisions;
            types::YesNo forwardRepeat;
            types::XsToken fine;
            types::TimeOnly timeOnly;
            types::YesNo pizzicato;
            types::RotationDegrees pan;
            types::RotationDegrees elevation;
            types::YesNoNumber damperPedal;
            types::YesNoNumber softPedal;
            types::YesNoNumber sostenutoPedal;
            bool hasTempo;
            bool hasDynamics;
            bool hasDacapo;
            bool hasSegno;
            bool hasDalsegno;
            bool hasCoda;
            bool hasTocoda;
            bool hasDivisions;
            bool hasForwardRepeat;
            bool hasFine;
            bool hasTimeOnly;
            bool hasPizzicato;
            bool hasPan;
            bool hasElevation;
            bool hasDamperPedal;
            bool hasSoftPedal;
            bool hasSostenutoPedal;
        };
        
        class Sound;
        using SoundPtr = std::shared_ptr<Sound>;
        using SoundUPtr = std::unique_ptr<Sound>;
        using SoundSet = std::vector<SoundPtr>;
        using SoundSetIter = SoundSet::iterator;
        using SoundSetIterConst = SoundSet::const_iterator;
        inline SoundPtr makeSound() { return std::make_shared<Sound>(); }
        class Sound : public ElementInterface
        {
        public:
            Sound();
            virtual bool hasAttributes() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual bool hasContents() const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            SoundAttributesPtr getAttributes() const;
            void setAttributes( const SoundAttributesPtr& value );
            /* _________ MidiDevice minOccurs = 0, maxOccurs = 1 _________ */
            MidiDevicePtr getMidiDevice() const;
            void setMidiDevice( const MidiDevicePtr& value );
            bool getHasMidiDevice() const;
            void setHasMidiDevice( const bool value );
            /* _________ MidiInstrument minOccurs = 0, maxOccurs = 1 _________ */
            MidiInstrumentPtr getMidiInstrument() const;
            void setMidiInstrument( const MidiInstrumentPtr& value );
            bool getHasMidiInstrument() const;
            void setHasMidiInstrument( const bool value );
            /* _________ Play minOccurs = 0, maxOccurs = 1 _________ */
            PlayPtr getPlay() const;
            void setPlay( const PlayPtr& value );
            bool getHasPlay() const;
            void setHasPlay( const bool value );
        private:
            SoundAttributesPtr myAttributes;
            MidiDevicePtr myMidiDevice;
            bool myHasMidiDevice;
            MidiInstrumentPtr myMidiInstrument;
            bool myHasMidiInstrument;
            PlayPtr myPlay;
            bool myHasPlay;
        };
        /*
         4232
         <!--  ID = 4232 [4232] ------------------------->
         <!-- min=0 max=2 RangeBound  -->
         <!-- MsItemElementKind::composite -->
         <!-- RecursiveSubElementCount = 4 -->
         <!-- All Sub Elements Are Implemented: true -->
         <xs:element name="page-margins" type="page-margins" minOccurs="0" maxOccurs="2"/>
         
         <xs:complexType name="page-margins">
         <xs:annotation>
         <xs:documentation>Page margins are specified either for both even and odd pages, or via separate odd and even page number values. The type attribute is not needed when used as part of a print element. If omitted when the page-margins type is used in the defaults element, "both" is the default value.</xs:documentation>
         </xs:annotation>
         <xs:group ref="all-margins"/>
         <xs:attribute name="type" type="margin-type"/>
         </xs:complexType>
         
         <xs:group name="all-margins">
         <xs:annotation>
         <xs:documentation>The all-margins group specifies both horizontal and vertical margins in tenths.</xs:documentation>
         </xs:annotation>
         <xs:sequence>
         <xs:group ref="left-right-margins"/>
         <xs:element name="top-margin" type="tenths"/>
         <xs:element name="bottom-margin" type="tenths"/>
         </xs:sequence>
         </xs:group>
         
         <xs:group name="left-right-margins">
         <xs:annotation>
         <xs:documentation>The left-right-margins group specifies horizontal margins in tenths.</xs:documentation>
         </xs:annotation>
         <xs:sequence>
         <xs:element name="left-margin" type="tenths"/>
         <xs:element name="right-margin" type="tenths"/>
         </xs:sequence>
         </xs:group> */
        
        struct PageMarginsAttributes;
        using PageMarginsAttributesPtr = std::shared_ptr<PageMarginsAttributes>;
        
        struct PageMarginsAttributes : public AttributesInterface
        {
        public:
            PageMarginsAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::MarginType type;
            bool hasType;
        };
        
        class PageMargins;
        using PageMarginsPtr = std::shared_ptr<PageMargins>;
        using PageMarginsUPtr = std::unique_ptr<PageMargins>;
        using PageMarginsSet = std::vector<PageMarginsPtr>;
        using PageMarginsSetIter = PageMarginsSet::iterator;
        using PageMarginsSetIterConst = PageMarginsSet::const_iterator;
        inline PageMarginsPtr makePageMargins() { return std::make_shared<PageMargins>(); }
        class PageMargins : public ElementInterface
        {
        public:
            PageMargins();
            virtual bool hasAttributes() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual bool hasContents() const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            PageMarginsAttributesPtr getAttributes() const;
            void setAttributes( const PageMarginsAttributesPtr& value );
            /* _________ LeftMargin minOccurs = 1, maxOccurs = 1 _________ */
            LeftMarginPtr getLeftMargin() const;
            void setLeftMargin( const LeftMarginPtr& value );
            /* _________ RightMargin minOccurs = 1, maxOccurs = 1 _________ */
            RightMarginPtr getRightMargin() const;
            void setRightMargin( const RightMarginPtr& value );
            /* _________ TopMargin minOccurs = 1, maxOccurs = 1 _________ */
            TopMarginPtr getTopMargin() const;
            void setTopMargin( const TopMarginPtr& value );
            /* _________ BottomMargin minOccurs = 1, maxOccurs = 1 _________ */
            BottomMarginPtr getBottomMargin() const;
            void setBottomMargin( const BottomMarginPtr& value );
        private:
            PageMarginsAttributesPtr myAttributes;
            LeftMarginPtr myLeftMargin;
            RightMarginPtr myRightMargin;
            TopMarginPtr myTopMargin;
            BottomMarginPtr myBottomMargin;
        };
        /*
         <!--  ID = 4285 [4285] ------------------------->
         <!-- min=0 max=1 OptionalSingleOccurrence  -->
         <!-- MsItemElementKind::composite -->
         <!-- RecursiveSubElementCount = 2 -->
         <!-- All Sub Elements Are Implemented: true -->
         <xs:element name="system-margins" type="system-margins" minOccurs="0"/>
         <xs:complexType name="system-margins">
         <xs:annotation>
         <xs:documentation>System margins are relative to the page margins. Positive values indent and negative values reduce the margin size.</xs:documentation>
         </xs:annotation>
         <xs:group ref="left-right-margins"/>
         </xs:complexType>
         <xs:group name="left-right-margins">
         <xs:annotation>
         <xs:documentation>The left-right-margins group specifies horizontal margins in tenths.</xs:documentation>
         </xs:annotation>
         <xs:sequence>
         <xs:element name="left-margin" type="tenths"/>
         <xs:element name="right-margin" type="tenths"/>
         </xs:sequence>
         </xs:group> */
        
        class SystemMargins;
        using SystemMarginsPtr = std::shared_ptr<SystemMargins>;
        using SystemMarginsUPtr = std::unique_ptr<SystemMargins>;
        using SystemMarginsSet = std::vector<SystemMarginsPtr>;
        using SystemMarginsSetIter = SystemMarginsSet::iterator;
        using SystemMarginsSetIterConst = SystemMarginsSet::const_iterator;
        inline SystemMarginsPtr makeSystemMargins() { return std::make_shared<SystemMargins>(); }
        class SystemMargins : public ElementInterface
        {
        public:
            SystemMargins();
            virtual bool hasAttributes() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual bool hasContents() const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            /* _________ LeftMargin minOccurs = 1, maxOccurs = 1 _________ */
            LeftMarginPtr getLeftMargin() const;
            void setLeftMargin( const LeftMarginPtr& value );
            /* _________ RightMargin minOccurs = 1, maxOccurs = 1 _________ */
            RightMarginPtr getRightMargin() const;
            void setRightMargin( const RightMarginPtr& value );
        private:
            LeftMarginPtr myLeftMargin;
            RightMarginPtr myRightMargin;
        };
        /* <!--  ID = 4297 [4297] ------------------------->
         <!-- min=0 max=1 OptionalSingleOccurrence  -->
         <!-- MsItemElementKind::composite -->
         <!-- RecursiveSubElementCount = 2 -->
         <!-- All Sub Elements Are Implemented: true -->
         <xs:element name="system-dividers" type="system-dividers" minOccurs="0"/>
         <xs:complexType name="system-dividers">
         <xs:annotation>
         <xs:documentation>The system-dividers element indicates the presence or absence of system dividers (also known as system separation marks) between systems displayed on the same page. Dividers on the left and right side of the page are controlled by the left-divider and right-divider elements respectively. The default vertical position is half the system-distance value from the top of the system that is below the divider. The default horizontal position is the left and right system margin, respectively.
         
         When used in the print element, the system-dividers element affects the dividers that would appear between the current system and the previous system.</xs:documentation>
         </xs:annotation>
         <xs:sequence>
         <xs:element name="left-divider" type="empty-print-object-style-align"/>
         <xs:element name="right-divider" type="empty-print-object-style-align"/>
         </xs:sequence>
         </xs:complexType> */
        
        class SystemDividers;
        using SystemDividersPtr = std::shared_ptr<SystemDividers>;
        using SystemDividersUPtr = std::unique_ptr<SystemDividers>;
        using SystemDividersSet = std::vector<SystemDividersPtr>;
        using SystemDividersSetIter = SystemDividersSet::iterator;
        using SystemDividersSetIterConst = SystemDividersSet::const_iterator;
        inline SystemDividersPtr makeSystemDividers() { return std::make_shared<SystemDividers>(); }
        class SystemDividers : public ElementInterface
        {
        public:
            SystemDividers();
            virtual bool hasAttributes() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual bool hasContents() const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            /* _________ LeftDivider minOccurs = 1, maxOccurs = 1 _________ */
            LeftDividerPtr getLeftDivider() const;
            void setLeftDivider( const LeftDividerPtr& value );
            /* _________ RightDivider minOccurs = 1, maxOccurs = 1 _________ */
            RightDividerPtr getRightDivider() const;
            void setRightDivider( const RightDividerPtr& value );
        private:
            LeftDividerPtr myLeftDivider;
            RightDividerPtr myRightDivider;
        };
        /* <!--  ID = 4389 [4389] ------------------------->
         <!-- min=1 max=1 RequiredSingleOccurence  -->
         <!-- MsItemElementKind::simple -->
         <!-- RecursiveSubElementCount = 0 -->
         <!-- All Sub Elements Are Implemented: true -->
         <xs:element name="strong-accent" type="strong-accent">
         <xs:annotation>
         <xs:documentation>The strong-accent element indicates a vertical accent mark.</xs:documentation>
         </xs:annotation>
         </xs:element>
         
         <xs:complexType name="strong-accent">
         <xs:annotation>
         <xs:documentation>The strong-accent type indicates a vertical accent mark. The type attribute indicates if the point of the accent is down or up.</xs:documentation>
         </xs:annotation>
         <xs:complexContent>
         <xs:extension base="empty-placement">
         <xs:attribute name="type" type="up-down" default="up"/>
         </xs:extension>
         </xs:complexContent>
         </xs:complexType>
         
         <xs:complexType name="empty-placement">
         <xs:annotation>
         <xs:documentation>The empty-placement type represents an empty element with print-style and placement attributes.</xs:documentation>
         </xs:annotation>
         <xs:attributeGroup ref="print-style"/>
         <xs:attributeGroup ref="placement"/>
         </xs:complexType>
         
         <xs:attributeGroup name="print-style">
         <xs:annotation>
         <xs:documentation>The print-style attribute group collects the most popular combination of printing attributes: position, font, and color.</xs:documentation>
         </xs:annotation>
         <xs:attributeGroup ref="position"/>
         <xs:attributeGroup ref="font"/>
         <xs:attributeGroup ref="color"/>
         </xs:attributeGroup>
         
         <xs:attributeGroup name="placement">
         <xs:annotation>
         <xs:documentation>The placement attribute indicates whether something is above or below another element, such as a note or a notation.</xs:documentation>
         </xs:annotation>
         <xs:attribute name="placement" type="above-below"/>
         </xs:attributeGroup> */
        
        struct StrongAccentAttributes;
        using StrongAccentAttributesPtr = std::shared_ptr<StrongAccentAttributes>;
        
        struct StrongAccentAttributes : public AttributesInterface
        {
        public:
            StrongAccentAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::TenthsValue defaultX;
            types::TenthsValue defaultY;
            types::TenthsValue relativeX;
            types::TenthsValue relativeY;
            types::CommaSeparatedText fontFamily;
            types::FontStyle fontStyle;
            types::FontSize fontSize;
            types::FontWeight fontWeight;
            types::Color color;
            types::AboveBelow placement;
            types::UpDown type;
            bool hasDefaultX;
            bool hasDefaultY;
            bool hasRelativeX;
            bool hasRelativeY;
            bool hasFontFamily;
            bool hasFontStyle;
            bool hasFontSize;
            bool hasFontWeight;
            bool hasColor;
            bool hasPlacement;
            bool hasType;
        };
        
        class StrongAccent;
        using StrongAccentPtr = std::shared_ptr<StrongAccent>;
        using StrongAccentUPtr = std::unique_ptr<StrongAccent>;
        using StrongAccentSet = std::vector<StrongAccentPtr>;
        using StrongAccentSetIter = StrongAccentSet::iterator;
        using StrongAccentSetIterConst = StrongAccentSet::const_iterator;
        inline StrongAccentPtr makeStrongAccent() { return std::make_shared<StrongAccent>(); }
        class StrongAccent : public ElementInterface
        {
        public:
            StrongAccent();
            virtual bool hasAttributes() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual bool hasContents() const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            StrongAccentAttributesPtr getAttributes() const;
            void setAttributes( const StrongAccentAttributesPtr& value );
        private:
            StrongAccentAttributesPtr myAttributes;
        };
        /*
         4608 <!--  ID = 4608 [4608] ------------------------->
         <!-- min=1 max=4294967295 OneOrMMany  -->
         <!-- MsItemElementKind::composite -->
         <!-- RecursiveSubElementCount = 4 -->
         <!-- All Sub Elements Are Implemented: true -->
         <xs:element name="figure" type="figure" maxOccurs="unbounded"/>
         <xs:complexType name="figure">
         <xs:annotation>
         <xs:documentation>The figure type represents a single figure within a figured-bass element.</xs:documentation>
         </xs:annotation>
         <xs:sequence>
         <xs:element name="prefix" type="style-text" minOccurs="0">
         <xs:annotation>
         <xs:documentation>Values for the prefix element include the accidental values sharp, flat, natural, double-sharp, flat-flat, and sharp-sharp. The prefix element may contain additional values for symbols specific to particular figured bass styles.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:element name="figure-number" type="style-text" minOccurs="0">
         <xs:annotation>
         <xs:documentation>A figure-number is a number. Overstrikes of the figure number are represented in the suffix element.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:element name="suffix" type="style-text" minOccurs="0">
         <xs:annotation>
         <xs:documentation>Values for the suffix element include the accidental values sharp, flat, natural, double-sharp, flat-flat, and sharp-sharp. Suffixes include both symbols that come after the figure number and those that overstrike the figure number. The suffix value slash is used for slashed numbers indicating chromatic alteration. The orientation and display of the slash usually depends on the figure number. The suffix element may contain additional values for symbols specific to particular figured bass styles.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:element name="extend" type="extend" minOccurs="0"/>
         </xs:sequence>
         </xs:complexType> */
        
        class Figure;
        using FigurePtr = std::shared_ptr<Figure>;
        using FigureUPtr = std::unique_ptr<Figure>;
        using FigureSet = std::vector<FigurePtr>;
        using FigureSetIter = FigureSet::iterator;
        using FigureSetIterConst = FigureSet::const_iterator;
        inline FigurePtr makeFigure() { return std::make_shared<Figure>(); }
        class Figure : public ElementInterface
        {
        public:
            Figure();
            virtual bool hasAttributes() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual bool hasContents() const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            /* _________ Prefix minOccurs = 0, maxOccurs = 1 _________ */
            PrefixPtr getPrefix() const;
            void setPrefix( const PrefixPtr& value );
            bool getHasPrefix() const;
            void setHasPrefix( const bool value );
            /* _________ FigureNumber minOccurs = 0, maxOccurs = 1 _________ */
            FigureNumberPtr getFigureNumber() const;
            void setFigureNumber( const FigureNumberPtr& value );
            bool getHasFigureNumber() const;
            void setHasFigureNumber( const bool value );
            /* _________ Suffix minOccurs = 0, maxOccurs = 1 _________ */
            SuffixPtr getSuffix() const;
            void setSuffix( const SuffixPtr& value );
            bool getHasSuffix() const;
            void setHasSuffix( const bool value );
            /* _________ Extend minOccurs = 0, maxOccurs = 1 _________ */
            ExtendPtr getExtend() const;
            void setExtend( const ExtendPtr& value );
            bool getHasExtend() const;
            void setHasExtend( const bool value );
        private:
            PrefixPtr myPrefix;
            bool myHasPrefix;
            FigureNumberPtr myFigureNumber;
            bool myHasFigureNumber;
            SuffixPtr mySuffix;
            bool myHasSuffix;
            ExtendPtr myExtend;
            bool myHasExtend;
        };
        /* <!--  ID = 5016 [5016] ------------------------->
         <!-- min=0 max=1 OptionalSingleOccurrence  -->
         <!-- MsItemElementKind::composite -->
         <!-- RecursiveSubElementCount = 4 -->
         <!-- All Sub Elements Are Implemented: true -->
         <xs:element name="time-modification" type="time-modification" minOccurs="0"/>
         <xs:complexType name="time-modification">
         <xs:annotation>
         <xs:documentation>Time modification indicates tuplets, double-note tremolos, and other durational changes. A time-modification element shows how the cumulative, sounding effect of tuplets and double-note tremolos compare to the written note type represented by the type and dot elements. Nested tuplets and other notations that use more detailed information need both the time-modification and tuplet elements to be represented accurately.</xs:documentation>
         </xs:annotation>
         <xs:sequence>
         <xs:element name="actual-notes" type="xs:nonNegativeInteger">
         <xs:annotation>
         <xs:documentation>The actual-notes element describes how many notes are played in the time usually occupied by the number in the normal-notes element.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:element name="normal-notes" type="xs:nonNegativeInteger">
         <xs:annotation>
         <xs:documentation>The normal-notes element describes how many notes are usually played in the time occupied by the number in the actual-notes element.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:sequence minOccurs="0">
         <xs:element name="normal-type" type="note-type-value">
         <xs:annotation>
         <xs:documentation>If the type associated with the number in the normal-notes element is different than the current note type (e.g., a quarter note within an eighth note triplet), then the normal-notes type (e.g. eighth) is specified in the normal-type and normal-dot elements.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:element name="normal-dot" type="empty" minOccurs="0" maxOccurs="unbounded">
         <xs:annotation>
         <xs:documentation>The normal-dot element is used to specify dotted normal tuplet types.</xs:documentation>
         </xs:annotation>
         </xs:element>
         </xs:sequence>
         </xs:sequence>
         </xs:complexType> */
        class NormalTypeNormalDotGroup;
        using NormalTypeNormalDotGroupPtr = std::shared_ptr<NormalTypeNormalDotGroup>;
        using NormalTypeNormalDotGroupUPtr = std::unique_ptr<NormalTypeNormalDotGroup>;
        using NormalTypeNormalDotGroupSet = std::vector<NormalTypeNormalDotGroupPtr>;
        using NormalTypeNormalDotGroupSetIter = NormalTypeNormalDotGroupSet::iterator;
        using NormalTypeNormalDotGroupSetIterConst = NormalTypeNormalDotGroupSet::const_iterator;
        inline NormalTypeNormalDotGroupPtr makeNormalTypeNormalDotGroup() { return std::make_shared<NormalTypeNormalDotGroup>(); }
        class NormalTypeNormalDotGroup : public ElementInterface
        {
        public:
            NormalTypeNormalDotGroup();
            virtual bool hasAttributes() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual bool hasContents() const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            /* _________ NormalType minOccurs = 1, maxOccurs = 1 _________ */
            NormalTypePtr getNormalType() const;
            void setNormalType( const NormalTypePtr& value );
            /* _________ NormalDot minOccurs = 0, maxOccurs = unbounded _________ */
            const NormalDotSet& getNormalDotSet() const;
            void addNormalDot( const NormalDotPtr& value );
            void removeNormalDot( const NormalDotSetIterConst& value );
            void clearNormalDotSet();
            NormalDotPtr getNormalDot( const NormalDotSetIterConst& setIterator ) const;
        private:
            NormalTypePtr myNormalType;
            NormalDotSet myNormalDotSet;
        };
        
        class TimeModification;
        using TimeModificationPtr = std::shared_ptr<TimeModification>;
        using TimeModificationUPtr = std::unique_ptr<TimeModification>;
        using TimeModificationSet = std::vector<TimeModificationPtr>;
        using TimeModificationSetIter = TimeModificationSet::iterator;
        using TimeModificationSetIterConst = TimeModificationSet::const_iterator;
        inline TimeModificationPtr makeTimeModification() { return std::make_shared<TimeModification>(); }
        class TimeModification : public ElementInterface
        {
        public:
            TimeModification();
            virtual bool hasAttributes() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual bool hasContents() const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            /* _________ ActualNotes minOccurs = 1, maxOccurs = 1 _________ */
            ActualNotesPtr getActualNotes() const;
            void setActualNotes( const ActualNotesPtr& value );
            /* _________ NormalNotes minOccurs = 1, maxOccurs = 1 _________ */
            NormalNotesPtr getNormalNotes() const;
            void setNormalNotes( const NormalNotesPtr& value );
            /* _________ NormalTypeNormalDotGroup minOccurs = 0, maxOccurs = 1 _________ */
            NormalTypeNormalDotGroupPtr getNormalTypeNormalDotGroup() const;
            void setNormalTypeNormalDotGroup( const NormalTypeNormalDotGroupPtr& value );
            bool getHasNormalTypeNormalDotGroup() const;
            void setHasNormalTypeNormalDotGroup( const bool value );
        private:
            ActualNotesPtr myActualNotes;
            NormalNotesPtr myNormalNotes;
            NormalTypeNormalDotGroupPtr myNormalTypeNormalDotGroup;
            bool myHasNormalTypeNormalDotGroup;
        };
        /*
         <!--  ID = 5028 [5028] ------------------------->
         <!-- min=0 max=1 OptionalSingleOccurrence  -->
         <!-- MsItemElementKind::composite -->
         <!-- RecursiveSubElementCount = 2 -->
         <!-- All Sub Elements Are Implemented: true -->
         <xs:element name="notehead-text" type="notehead-text" minOccurs="0"/>
         <xs:complexType name="notehead-text">
         <xs:annotation>
         <xs:documentation>The notehead-text type represents text that is displayed inside a notehead, as is done in some educational music. It is not needed for the numbers used in tablature or jianpu notation. The presence of a TAB or jianpu clefs is sufficient to indicate that numbers are used. The display-text and accidental-text elements allow display of fully formatted text and accidentals.</xs:documentation>
         </xs:annotation>
         <xs:sequence>
         <xs:choice maxOccurs="unbounded">
         <xs:element name="display-text" type="formatted-text"/>
         <xs:element name="accidental-text" type="accidental-text"/>
         </xs:choice>
         </xs:sequence>
         </xs:complexType> */
        
        class NoteheadText;
        using NoteheadTextPtr = std::shared_ptr<NoteheadText>;
        using NoteheadTextUPtr = std::unique_ptr<NoteheadText>;
        using NoteheadTextSet = std::vector<NoteheadTextPtr>;
        using NoteheadTextSetIter = NoteheadTextSet::iterator;
        using NoteheadTextSetIterConst = NoteheadTextSet::const_iterator;
        inline NoteheadTextPtr makeNoteheadText() { return std::make_shared<NoteheadText>(); }
        class NoteheadText : public ElementInterface
        {
        public:
            NoteheadText();
            virtual bool hasAttributes() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual bool hasContents() const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            /* _________ DisplayText minOccurs = 1, maxOccurs = 1 _________ */
            DisplayTextPtr getDisplayText() const;
            void setDisplayText( const DisplayTextPtr& value );
            /* _________ AccidentalText minOccurs = 1, maxOccurs = 1 _________ */
            AccidentalTextPtr getAccidentalText() const;
            void setAccidentalText( const AccidentalTextPtr& value );
        private:
            DisplayTextPtr myDisplayText;
            AccidentalTextPtr myAccidentalText;
        };
        /*
         <!--  ID = 4935 [4935] ------------------------->
         <!-- min=1 max=1 RequiredSingleOccurence  -->
         <!-- MsItemElementKind::composite -->
         <!-- RecursiveSubElementCount = 16 -->
         <!-- All Sub Elements Are Implemented: true -->
         <xs:element name="articulations" type="articulations"/>
         <xs:complexType name="articulations">
         <xs:annotation>
         <xs:documentation>Articulations and accents are grouped together here.</xs:documentation>
         </xs:annotation>
         <xs:choice minOccurs="0" maxOccurs="unbounded">
         <xs:element name="accent" type="empty-placement">
         <xs:annotation>
         <xs:documentation>The accent element indicates a regular horizontal accent mark.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:element name="strong-accent" type="strong-accent">
         <xs:annotation>
         <xs:documentation>The strong-accent element indicates a vertical accent mark.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:element name="staccato" type="empty-placement">
         <xs:annotation>
         <xs:documentation>The staccato element is used for a dot articulation, as opposed to a stroke or a wedge.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:element name="tenuto" type="empty-placement">
         <xs:annotation>
         <xs:documentation>The tenuto element indicates a tenuto line symbol.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:element name="detached-legato" type="empty-placement">
         <xs:annotation>
         <xs:documentation>The detached-legato element indicates the combination of a tenuto line and staccato dot symbol.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:element name="staccatissimo" type="empty-placement">
         <xs:annotation>
         <xs:documentation>The staccatissimo element is used for a wedge articulation, as opposed to a dot or a stroke.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:element name="spiccato" type="empty-placement">
         <xs:annotation>
         <xs:documentation>The spiccato element is used for a stroke articulation, as opposed to a dot or a wedge.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:element name="scoop" type="empty-line">
         <xs:annotation>
         <xs:documentation>The scoop element is an indeterminate slide attached to a single note. The scoop element appears before the main note and comes from below the main pitch.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:element name="plop" type="empty-line">
         <xs:annotation>
         <xs:documentation>The plop element is an indeterminate slide attached to a single note. The plop element appears before the main note and comes from above the main pitch.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:element name="doit" type="empty-line">
         <xs:annotation>
         <xs:documentation>The doit element is an indeterminate slide attached to a single note. The doit element appears after the main note and goes above the main pitch.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:element name="falloff" type="empty-line">
         <xs:annotation>
         <xs:documentation>The falloff element is an indeterminate slide attached to a single note. The falloff element appears before the main note and goes below the main pitch.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:element name="breath-mark" type="breath-mark"/>
         <xs:element name="caesura" type="empty-placement">
         <xs:annotation>
         <xs:documentation>The caesura element indicates a slight pause. It is notated using a "railroad tracks" symbol.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:element name="stress" type="empty-placement">
         <xs:annotation>
         <xs:documentation>The stress element indicates a stressed note.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:element name="unstress" type="empty-placement">
         <xs:annotation>
         <xs:documentation>The unstress element indicates an unstressed note. It is often notated using a u-shaped symbol.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:element name="other-articulation" type="placement-text">
         <xs:annotation>
         <xs:documentation>The other-articulation element is used to define any articulations not yet in the MusicXML format. This allows extended representation, though without application interoperability.</xs:documentation>
         </xs:annotation>
         </xs:element>
         </xs:choice>
         </xs:complexType> */
        
        class ArticulationsChoice;
        using ArticulationsChoicePtr = std::shared_ptr<ArticulationsChoice>;
        using ArticulationsChoiceUPtr = std::unique_ptr<ArticulationsChoice>;
        using ArticulationsChoiceSet = std::vector<ArticulationsChoicePtr>;
        using ArticulationsChoiceSetIter = ArticulationsChoiceSet::iterator;
        using ArticulationsChoiceSetIterConst = ArticulationsChoiceSet::const_iterator;
        inline ArticulationsChoicePtr makeArticulationsChoice() { return std::make_shared<ArticulationsChoice>(); }
        class ArticulationsChoice : public ElementInterface
        {
        public:
            enum class Choice
            {
                accent = 1,
                strongAccent = 2,
                staccato = 3,
                tenuto = 4,
                detachedLegato = 5,
                stacatissimo = 6,
                spiccato = 7,
                scoop = 8,
                plop = 9,
                doit = 10,
                falloff = 11,
                breathMark = 12,
                caesura = 13,
                stress = 14,
                unstress = 15,
                otherArticulation = 16
            };
            ArticulationsChoice();
            virtual bool hasAttributes() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual bool hasContents() const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            /* _________ Choice minOccurs = 1, maxOccurs = 1 _________ */
            ArticulationsChoice::Choice getChoice() const;
            void setChoice( const ArticulationsChoice::Choice value );
            /* _________ Accent minOccurs = 1, maxOccurs = 1 _________ */
            AccentPtr getAccent() const;
            void setAccent( const AccentPtr& value );
            /* _________ StrongAccent minOccurs = 1, maxOccurs = 1 _________ */
            StrongAccentPtr getStrongAccent() const;
            void setStrongAccent( const StrongAccentPtr& value );
            /* _________ Staccato minOccurs = 1, maxOccurs = 1 _________ */
            StaccatoPtr getStaccato() const;
            void setStaccato( const StaccatoPtr& value );
            /* _________ Tenuto minOccurs = 1, maxOccurs = 1 _________ */
            TenutoPtr getTenuto() const;
            void setTenuto( const TenutoPtr& value );
            /* _________ DetachedLegato minOccurs = 1, maxOccurs = 1 _________ */
            DetachedLegatoPtr getDetachedLegato() const;
            void setDetachedLegato( const DetachedLegatoPtr& value );
            /* _________ Staccatissimo minOccurs = 1, maxOccurs = 1 _________ */
            StaccatissimoPtr getStaccatissimo() const;
            void setStaccatissimo( const StaccatissimoPtr& value );
            /* _________ Spiccato minOccurs = 1, maxOccurs = 1 _________ */
            SpiccatoPtr getSpiccato() const;
            void setSpiccato( const SpiccatoPtr& value );
            /* _________ Scoop minOccurs = 1, maxOccurs = 1 _________ */
            ScoopPtr getScoop() const;
            void setScoop( const ScoopPtr& value );
            /* _________ Plop minOccurs = 1, maxOccurs = 1 _________ */
            PlopPtr getPlop() const;
            void setPlop( const PlopPtr& value );
            /* _________ Doit minOccurs = 1, maxOccurs = 1 _________ */
            DoitPtr getDoit() const;
            void setDoit( const DoitPtr& value );
            /* _________ Falloff minOccurs = 1, maxOccurs = 1 _________ */
            FalloffPtr getFalloff() const;
            void setFalloff( const FalloffPtr& value );
            /* _________ BreathMark minOccurs = 1, maxOccurs = 1 _________ */
            BreathMarkPtr getBreathMark() const;
            void setBreathMark( const BreathMarkPtr& value );
            /* _________ Caesura minOccurs = 1, maxOccurs = 1 _________ */
            CaesuraPtr getCaesura() const;
            void setCaesura( const CaesuraPtr& value );
            /* _________ Stress minOccurs = 1, maxOccurs = 1 _________ */
            StressPtr getStress() const;
            void setStress( const StressPtr& value );
            /* _________ Unstress minOccurs = 1, maxOccurs = 1 _________ */
            UnstressPtr getUnstress() const;
            void setUnstress( const UnstressPtr& value );
            /* _________ OtherArticulation minOccurs = 1, maxOccurs = 1 _________ */
            OtherArticulationPtr getOtherArticulation() const;
            void setOtherArticulation( const OtherArticulationPtr& value );
        private:
            Choice myChoice;
            AccentPtr myAccent;
            StrongAccentPtr myStrongAccent;
            StaccatoPtr myStaccato;
            TenutoPtr myTenuto;
            DetachedLegatoPtr myDetachedLegato;
            StaccatissimoPtr myStaccatissimo;
            SpiccatoPtr mySpiccato;
            ScoopPtr myScoop;
            PlopPtr myPlop;
            DoitPtr myDoit;
            FalloffPtr myFalloff;
            BreathMarkPtr myBreathMark;
            CaesuraPtr myCaesura;
            StressPtr myStress;
            UnstressPtr myUnstress;
            OtherArticulationPtr myOtherArticulation;
        };
        class Articulations;
        using ArticulationsPtr = std::shared_ptr<Articulations>;
        using ArticulationsUPtr = std::unique_ptr<Articulations>;
        using ArticulationsSet = std::vector<ArticulationsPtr>;
        using ArticulationsSetIter = ArticulationsSet::iterator;
        using ArticulationsSetIterConst = ArticulationsSet::const_iterator;
        inline ArticulationsPtr makeArticulations() { return std::make_shared<Articulations>(); }
        class Articulations : public ElementInterface
        {
        public:
            Articulations();
            virtual bool hasAttributes() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual bool hasContents() const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            /* _________ ArticulationsChoice minOccurs = 0, maxOccurs = unbounded _________ */
            const ArticulationsChoiceSet& getArticulationsChoiceSet() const;
            void addArticulationsChoice( const ArticulationsChoicePtr& value );
            void removeArticulationsChoice( const ArticulationsChoiceSetIterConst& value );
            void clearArticulationsChoiceSet();
            ArticulationsChoicePtr getArticulationsChoice( const ArticulationsChoiceSetIterConst& setIterator ) const;
        private:
            ArticulationsChoiceSet myArticulationsChoiceSet;
        };

        /* <!--  ID = 5045 [5045] ------------------------->
         <!-- min=0 max=4294967295 ZeroOrMany  -->
         <!-- MsItemElementKind::composite -->
         <!-- RecursiveSubElementCount = 13 -->
         <!-- All Sub Elements Are Implemented: true -->
         <xs:element name="lyric" type="lyric" minOccurs="0" maxOccurs="unbounded"/>
         
         <xs:complexType name="lyric">
         <xs:annotation>
         <xs:documentation>The lyric type represents text underlays for lyrics, based on Humdrum with support for other formats. Two text elements that are not separated by an elision element are part of the same syllable, but may have different text formatting. The MusicXML 2.0 XSD is more strict than the 2.0 DTD in enforcing this by disallowing a second syllabic element unless preceded by an elision element. The lyric number indicates multiple lines, though a name can be used as well (as in Finale's verse / chorus / section specification). Justification is center by default; placement is below by default. The content of the elision type is used to specify the symbol used to display the elision. Common values are a no-break space (Unicode 00A0), an underscore (Unicode 005F), or an undertie (Unicode 203F).</xs:documentation>
         </xs:annotation>
         
         <xs:sequence>
         <xs:choice> <!-- LyricTextChoice -->
         <xs:sequence> <!-- SyllabicTextGroup -->
         <xs:element name="syllabic" type="syllabic" minOccurs="0"/>
         <xs:element name="text" type="text-element-data"/>
         <xs:sequence minOccurs="0" maxOccurs="unbounded">
         <xs:sequence minOccurs="0"> <!-- ElisionSyllabicGroup -->
         <xs:element name="elision" type="text-font-color"/>
         <xs:element name="syllabic" type="syllabic" minOccurs="0"/>
         </xs:sequence>
         <xs:element name="text" type="text-element-data"/>
         </xs:sequence> <!-- /SyllabicTextGroup -->
         <xs:element name="extend" type="extend" minOccurs="0"/>
         </xs:sequence> <!-- /SyllabicTextGroup -->
         <xs:element name="extend" type="extend"/>
         <xs:element name="laughing" type="empty">
         <xs:annotation>
         <xs:documentation>The laughing element is taken from Humdrum.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:element name="humming" type="empty">
         <xs:annotation>
         <xs:documentation>The humming element is taken from Humdrum.</xs:documentation>
         </xs:annotation>
         </xs:element>
         </xs:choice> <!-- /LyricTextChoice -->
         <xs:element name="end-line" type="empty" minOccurs="0">
         <xs:annotation>
         <xs:documentation>The end-line element comes from RP-017 for Standard MIDI File Lyric meta-events. It facilitates lyric display for Karaoke and similar applications.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:element name="end-paragraph" type="empty" minOccurs="0">
         <xs:annotation>
         <xs:documentation>The end-paragraph element comes from RP-017 for Standard MIDI File Lyric meta-events. It facilitates lyric display for Karaoke and similar applications.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:group ref="editorial"/> <!-- EditorialGroup -->
         </xs:sequence>
         
         <xs:attribute name="number" type="xs:NMTOKEN"/>
         <xs:attribute name="name" type="xs:token"/>
         <xs:attributeGroup ref="justify"/>
         <xs:attributeGroup ref="position"/>
         <xs:attributeGroup ref="placement"/>
         <xs:attributeGroup ref="color"/>
         <xs:attributeGroup ref="print-object"/>
         </xs:complexType>
         
         <xs:group name="editorial"> <!-- EditorialGroup -->
         <xs:annotation>
         <xs:documentation>The editorial group specifies editorial information for a musical element.</xs:documentation>
         </xs:annotation>
         <xs:sequence>
         <xs:group ref="footnote" minOccurs="0"/>
         <xs:group ref="level" minOccurs="0"/>
         </xs:sequence>
         </xs:group> 
         
         <xs:group name="footnote">
         <xs:annotation>
         <xs:documentation>The footnote element specifies editorial information that appears in footnotes in the printed score. It is defined within a group due to its multiple uses within the MusicXML schema.</xs:documentation>
         </xs:annotation>
         <xs:sequence>
         <xs:element name="footnote" type="formatted-text"/>
         </xs:sequence>
         </xs:group>
         
         <xs:group name="level">
         <xs:annotation>
         <xs:documentation>The level element specifies editorial information for different MusicXML elements. It is defined within a group due to its multiple uses within the MusicXML schema.</xs:documentation>
         </xs:annotation>
         <xs:sequence>
         <xs:element name="level" type="level"/>
         </xs:sequence>
         </xs:group> */
        
        class ElisionSyllabicGroup;
        using ElisionSyllabicGroupPtr = std::shared_ptr<ElisionSyllabicGroup>;
        using ElisionSyllabicGroupUPtr = std::unique_ptr<ElisionSyllabicGroup>;
        using ElisionSyllabicGroupSet = std::vector<ElisionSyllabicGroupPtr>;
        using ElisionSyllabicGroupSetIter = ElisionSyllabicGroupSet::iterator;
        using ElisionSyllabicGroupSetIterConst = ElisionSyllabicGroupSet::const_iterator;
        inline ElisionSyllabicGroupPtr makeElisionSyllabicGroup() { return std::make_shared<ElisionSyllabicGroup>(); }
        class ElisionSyllabicGroup : public ElementInterface
        {
        public:
            ElisionSyllabicGroup();
            virtual bool hasAttributes() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual bool hasContents() const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            /* _________ Elision minOccurs = 1, maxOccurs = 1 _________ */
            ElisionPtr getElision() const;
            void setElision( const ElisionPtr& value );
            /* _________ Syllabic minOccurs = 0, maxOccurs = 1 _________ */
            SyllabicPtr getSyllabic() const;
            void setSyllabic( const SyllabicPtr& value );
            bool getHasSyllabic() const;
            void setHasSyllabic( const bool value );
        private:
            ElisionPtr myElision;
            SyllabicPtr mySyllabic;
            bool myHasSyllabic;
        };
        
        class ElisionSyllabicTextGroup;
        using ElisionSyllabicTextGroupPtr = std::shared_ptr<ElisionSyllabicTextGroup>;
        using ElisionSyllabicTextGroupUPtr = std::unique_ptr<ElisionSyllabicTextGroup>;
        using ElisionSyllabicTextGroupSet = std::vector<ElisionSyllabicTextGroupPtr>;
        using ElisionSyllabicTextGroupSetIter = ElisionSyllabicTextGroupSet::iterator;
        using ElisionSyllabicTextGroupSetIterConst = ElisionSyllabicTextGroupSet::const_iterator;
        inline ElisionSyllabicTextGroupPtr makeElisionSyllabicTextGroup() { return std::make_shared<ElisionSyllabicTextGroup>(); }
        class ElisionSyllabicTextGroup : public ElementInterface
        {
        public:
            ElisionSyllabicTextGroup();
            virtual bool hasAttributes() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual bool hasContents() const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            /* _________ ElisionSyllabicGroup minOccurs = 0, maxOccurs = 1 _________ */
            ElisionSyllabicGroupPtr getElisionSyllabicGroup() const;
            void setElisionSyllabicGroup( const ElisionSyllabicGroupPtr& value );
            bool getHasElisionSyllabicGroup() const;
            void setHasElisionSyllabicGroup( const bool value );
            /* _________ Text minOccurs = 1, maxOccurs = 1 _________ */
            TextPtr getText() const;
            void setText( const TextPtr& value );
        private:
            ElisionSyllabicGroupPtr myElisionSyllabicGroup;
            bool myHasElisionSyllabicGroup;
            TextPtr myText;
        };
        

        class SyllabicTextGroup;
        using SyllabicTextGroupPtr = std::shared_ptr<SyllabicTextGroup>;
        using SyllabicTextGroupUPtr = std::unique_ptr<SyllabicTextGroup>;
        using SyllabicTextGroupSet = std::vector<SyllabicTextGroupPtr>;
        using SyllabicTextGroupSetIter = SyllabicTextGroupSet::iterator;
        using SyllabicTextGroupSetIterConst = SyllabicTextGroupSet::const_iterator;
        inline SyllabicTextGroupPtr makeSyllabicTextGroup() { return std::make_shared<SyllabicTextGroup>(); }
        class SyllabicTextGroup : public ElementInterface
        {
        public:
            SyllabicTextGroup();
            virtual bool hasAttributes() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual bool hasContents() const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            /* _________ Syllabic minOccurs = 0, maxOccurs = 1 _________ */
            SyllabicPtr getSyllabic() const;
            void setSyllabic( const SyllabicPtr& value );
            bool getHasSyllabic() const;
            void setHasSyllabic( const bool value );
            /* _________ Text minOccurs = 1, maxOccurs = 1 _________ */
            TextPtr getText() const;
            void setText( const TextPtr& value );
            /* _________ ElisionSyllabicTextGroup minOccurs = 0, maxOccurs = unbounded _________ */
            const ElisionSyllabicTextGroupSet& getElisionSyllabicTextGroupSet() const;
            void addElisionSyllabicTextGroup( const ElisionSyllabicTextGroupPtr& value );
            void removeElisionSyllabicTextGroup( const ElisionSyllabicTextGroupSetIterConst& value );
            void clearElisionSyllabicTextGroupSet();
            ElisionSyllabicTextGroupPtr getElisionSyllabicTextGroup( const ElisionSyllabicTextGroupSetIterConst& setIterator ) const;
            /* _________ Extend minOccurs = 0, maxOccurs = 1 _________ */
            ExtendPtr getExtend() const;
            void setExtend( const ExtendPtr& value );
            bool getHasExtend() const;
            void setHasExtend( const bool value );
        private:
            SyllabicPtr mySyllabic;
            bool myHasSyllabic;
            TextPtr myText;
            ElisionSyllabicTextGroupSet myElisionSyllabicTextGroupSet;
            ExtendPtr myExtend;
            bool myHasExtend;
        };


        class LyricTextChoice;
        using LyricTextChoicePtr = std::shared_ptr<LyricTextChoice>;
        using LyricTextChoiceUPtr = std::unique_ptr<LyricTextChoice>;
        using LyricTextChoiceSet = std::vector<LyricTextChoicePtr>;
        using LyricTextChoiceSetIter = LyricTextChoiceSet::iterator;
        using LyricTextChoiceSetIterConst = LyricTextChoiceSet::const_iterator;
        inline LyricTextChoicePtr makeLyricTextChoice() { return std::make_shared<LyricTextChoice>(); }
        class LyricTextChoice : public ElementInterface
        {
        public:
            enum class Choice
            {
                syllabicTextGroup = 1,
                extend = 2,
                laughing = 3,
                humming = 4
            };
            LyricTextChoice();
            virtual bool hasAttributes() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual bool hasContents() const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            LyricTextChoice::Choice getChoice() const;
            void setChoice( const LyricTextChoice::Choice value );
            /* _________ SyllabicTextGroup minOccurs = 1, maxOccurs = 1 _________ */
            SyllabicTextGroupPtr getSyllabicTextGroup() const;
            void setSyllabicTextGroup( const SyllabicTextGroupPtr& value );
            /* _________ Extend minOccurs = 1, maxOccurs = 1 _________ */
            ExtendPtr getExtend() const;
            void setExtend( const ExtendPtr& value );
            /* _________ Laughing minOccurs = 1, maxOccurs = 1 _________ */
            LaughingPtr getLaughing() const;
            void setLaughing( const LaughingPtr& value );
            /* _________ Humming minOccurs = 1, maxOccurs = 1 _________ */
            HummingPtr getHumming() const;
            void setHumming( const HummingPtr& value );
        private:
            Choice myChoice;
            SyllabicTextGroupPtr mySyllabicTextGroup;
            ExtendPtr myExtend;
            LaughingPtr myLaughing;
            HummingPtr myHumming;
        };


        class EditorialGroup;
        using EditorialGroupPtr = std::shared_ptr<EditorialGroup>;
        using EditorialGroupUPtr = std::unique_ptr<EditorialGroup>;
        using EditorialGroupSet = std::vector<EditorialGroupPtr>;
        using EditorialGroupSetIter = EditorialGroupSet::iterator;
        using EditorialGroupSetIterConst = EditorialGroupSet::const_iterator;
        inline EditorialGroupPtr makeEditorialGroup() { return std::make_shared<EditorialGroup>(); }
        class EditorialGroup : public ElementInterface
        {
        public:
            EditorialGroup();
            virtual bool hasAttributes() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual bool hasContents() const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            /* _________ Footnote minOccurs = 0, maxOccurs = 1 _________ */
            FootnotePtr getFootnote() const;
            void setFootnote( const FootnotePtr& value );
            bool getHasFootnote() const;
            void setHasFootnote( const bool value );
            /* _________ Level minOccurs = 0, maxOccurs = 1 _________ */
            LevelPtr getLevel() const;
            void setLevel( const LevelPtr& value );
            bool getHasLevel() const;
            void setHasLevel( const bool value );
        private:
            FootnotePtr myFootnote;
            bool myHasFootnote;
            LevelPtr myLevel;
            bool myHasLevel;
        };


        struct LyricAttributes;
        using LyricAttributesPtr = std::shared_ptr<LyricAttributes>;
        
        struct LyricAttributes : public AttributesInterface
        {
        public:
            LyricAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::XsNMToken number;
            types::XsToken name;
            types::LeftCenterRight justify;
            types::TenthsValue defaultX;
            types::TenthsValue defaultY;
            types::TenthsValue relativeX;
            types::TenthsValue relativeY;
            types::AboveBelow placement;
            types::Color color;
            types::YesNo printObject;
            bool hasNumber;
            bool hasName;
            bool hasJustify;
            bool hasDefaultX;
            bool hasDefaultY;
            bool hasRelativeX;
            bool hasRelativeY;
            bool hasPlacement;
            bool hasColor;
            bool hasPrintObject;
        };
        
        class Lyric;
        using LyricPtr = std::shared_ptr<Lyric>;
        using LyricUPtr = std::unique_ptr<Lyric>;
        using LyricSet = std::vector<LyricPtr>;
        using LyricSetIter = LyricSet::iterator;
        using LyricSetIterConst = LyricSet::const_iterator;
        inline LyricPtr makeLyric() { return std::make_shared<Lyric>(); }
        class Lyric : public ElementInterface
        {
        public:
            Lyric();
            virtual bool hasAttributes() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual bool hasContents() const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            LyricAttributesPtr getAttributes() const;
            void setAttributes( const LyricAttributesPtr& value );
            /* _________ LyricTextChoice minOccurs = 1, maxOccurs = 1 _________ */
            LyricTextChoicePtr getLyricTextChoice() const;
            void setLyricTextChoice( const LyricTextChoicePtr& value );
            /* _________ EndLine minOccurs = 0, maxOccurs = 1 _________ */
            EndLinePtr getEndLine() const;
            void setEndLine( const EndLinePtr& value );
            bool getHasEndLine() const;
            void setHasEndLine( const bool value );
            /* _________ EndParagraph minOccurs = 0, maxOccurs = 1 _________ */
            EndParagraphPtr getEndParagraph() const;
            void setEndParagraph( const EndParagraphPtr& value );
            bool getHasEndParagraph() const;
            void setHasEndParagraph( const bool value );
            /* _________ EditorialGroup minOccurs = 1, maxOccurs = 1 _________ */
            EditorialGroupPtr getEditorialGroup() const;
            void setEditorialGroup( const EditorialGroupPtr& value );
        private:
            LyricAttributesPtr myAttributes;
            LyricTextChoicePtr myLyricTextChoice;
            EndLinePtr myEndLine;
            bool myHasEndLine;
            EndParagraphPtr myEndParagraph;
            bool myHasEndParagraph;
            EditorialGroupPtr myEditorialGroup;
        };
        
        
        /*
         <!--  ID = 5166 [5166] ------------------------->
         <!-- min=1 max=1 RequiredSingleOccurence  -->
         <!-- MsItemElementKind::simple -->
         <!-- RecursiveSubElementCount = 0 -->
         <!-- All Sub Elements Are Implemented: true -->
         <xs:element name="mordent" type="mordent">
         <xs:annotation>
         <xs:documentation>The mordent element represents the sign with the vertical line. The long attribute is "no" by default.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:complexType name="mordent">
         <xs:annotation>
         <xs:documentation>The mordent type is used for both represents the mordent sign with the vertical line and the inverted-mordent sign without the line. The long attribute is "no" by default. The approach and departure attributes are used for compound ornaments, indicating how the beginning and ending of the ornament look relative to the main part of the mordent.</xs:documentation>
         </xs:annotation>
         <xs:complexContent>
         <xs:extension base="empty-trill-sound">
         <xs:attribute name="long" type="yes-no"/>
         <xs:attribute name="approach" type="above-below"/>
         <xs:attribute name="departure" type="above-below"/>
         </xs:extension>
         </xs:complexContent>
         </xs:complexType> */
        
        struct MordentAttributes;
        using MordentAttributesPtr = std::shared_ptr<MordentAttributes>;
        
        struct MordentAttributes : public AttributesInterface
        {
        public:
            MordentAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::TenthsValue defaultX;
            types::TenthsValue defaultY;
            types::TenthsValue relativeX;
            types::TenthsValue relativeY;
            types::CommaSeparatedText fontFamily;
            types::FontStyle fontStyle;
            types::FontSize fontSize;
            types::FontWeight fontWeight;
            types::Color color;
            types::AboveBelow placement;
            types::StartNote startNote;
            types::TrillStep trillStep;
            types::TwoNoteTurn twoNoteTurn;
            types::YesNo accelerate;
            types::TrillBeats beats;
            types::Percent secondBeat;
            types::Percent lastBeat;
            types::YesNo long_;
            types::AboveBelow approach;
            types::AboveBelow departure;
            bool hasDefaultX;
            bool hasDefaultY;
            bool hasRelativeX;
            bool hasRelativeY;
            bool hasFontFamily;
            bool hasFontStyle;
            bool hasFontSize;
            bool hasFontWeight;
            bool hasColor;
            bool hasPlacement;
            bool hasStartNote;
            bool hasTrillStep;
            bool hasTwoNoteTurn;
            bool hasAccelerate;
            bool hasBeats;
            bool hasSecondBeat;
            bool hasLastBeat;
            bool hasLong;
            bool hasApproach;
            bool hasDeparture;
        };
        
        
        
        class Mordent;
        using MordentPtr = std::shared_ptr<Mordent>;
        using MordentUPtr = std::unique_ptr<Mordent>;
        using MordentSet = std::vector<MordentPtr>;
        using MordentSetIter = MordentSet::iterator;
        using MordentSetIterConst = MordentSet::const_iterator;
        inline MordentPtr makeMordent() { return std::make_shared<Mordent>(); }
        class Mordent : public ElementInterface
        {
        public:
            Mordent();
            virtual bool hasAttributes() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual bool hasContents() const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            MordentAttributesPtr getAttributes() const;
            void setAttributes( const MordentAttributesPtr& value );
        private:
            MordentAttributesPtr myAttributes;
        };
        
        /*<!--  ID = 5171 [5171] ------------------------->
         <!-- min=1 max=1 RequiredSingleOccurence  -->
         <!-- MsItemElementKind::simple -->
         <!-- RecursiveSubElementCount = 0 -->
         <!-- All Sub Elements Are Implemented: true -->
         <xs:element name="inverted-mordent" type="mordent">
         <xs:annotation>
         <xs:documentation>The inverted-mordent element represents the sign without the vertical line. The long attribute is "no" by default.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:complexType name="mordent">
         <xs:annotation>
         <xs:documentation>The mordent type is used for both represents the mordent sign with the vertical line and the inverted-mordent sign without the line. The long attribute is "no" by default. The approach and departure attributes are used for compound ornaments, indicating how the beginning and ending of the ornament look relative to the main part of the mordent.</xs:documentation>
         </xs:annotation>
         <xs:complexContent>
         <xs:extension base="empty-trill-sound">
         <xs:attribute name="long" type="yes-no"/>
         <xs:attribute name="approach" type="above-below"/>
         <xs:attribute name="departure" type="above-below"/>
         </xs:extension>
         </xs:complexContent>
         </xs:complexType> */
        
        using InvertedMordentAttributes = MordentAttributes;
        using InvertedMordentAttributesPtr = std::shared_ptr<InvertedMordentAttributes>;
        
        class InvertedMordent;
        using InvertedMordentPtr = std::shared_ptr<InvertedMordent>;
        using InvertedMordentUPtr = std::unique_ptr<InvertedMordent>;
        using InvertedMordentSet = std::vector<InvertedMordentPtr>;
        using InvertedMordentSetIter = InvertedMordentSet::iterator;
        using InvertedMordentSetIterConst = InvertedMordentSet::const_iterator;
        inline InvertedMordentPtr makeInvertedMordent() { return std::make_shared<InvertedMordent>(); }
        class InvertedMordent : public ElementInterface
        {
        public:
            InvertedMordent();
            virtual bool hasAttributes() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual bool hasContents() const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            InvertedMordentAttributesPtr getAttributes() const;
            void setAttributes( const InvertedMordentAttributesPtr& value );
        private:
            InvertedMordentAttributesPtr myAttributes;
        };
        
        /* <!--  ID = 5410 [5410] ------------------------->
         <!-- min=1 max=1 RequiredSingleOccurence  -->
         <!-- MsItemElementKind::simple -->
         <!-- RecursiveSubElementCount = 0 -->
         <!-- All Sub Elements Are Implemented: true -->
         <xs:element name="heel" type="heel-toe"/>
         <xs:complexType name="heel-toe">
         <xs:annotation>
         <xs:documentation>The heel and toe elements are used with organ pedals. The substitution value is "no" if the attribute is not present.</xs:documentation>
         </xs:annotation>
         <xs:complexContent>
         <xs:extension base="empty-placement">
         <xs:attribute name="substitution" type="yes-no"/>
         </xs:extension>
         </xs:complexContent>
         </xs:complexType> */
        
        struct HeelAttributes;
        using HeelAttributesPtr = std::shared_ptr<HeelAttributes>;
        
        struct HeelAttributes : public AttributesInterface
        {
        public:
            HeelAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::TenthsValue defaultX;
            types::TenthsValue defaultY;
            types::TenthsValue relativeX;
            types::TenthsValue relativeY;
            types::CommaSeparatedText fontFamily;
            types::FontStyle fontStyle;
            types::FontSize fontSize;
            types::FontWeight fontWeight;
            types::Color color;
            types::AboveBelow placement;
            types::YesNo substitution;
            bool hasDefaultX;
            bool hasDefaultY;
            bool hasRelativeX;
            bool hasRelativeY;
            bool hasFontFamily;
            bool hasFontStyle;
            bool hasFontSize;
            bool hasFontWeight;
            bool hasColor;
            bool hasPlacement;
            bool hasSubstitution;
        };
        
        class Heel;
        using HeelPtr = std::shared_ptr<Heel>;
        using HeelUPtr = std::unique_ptr<Heel>;
        using HeelSet = std::vector<HeelPtr>;
        using HeelSetIter = HeelSet::iterator;
        using HeelSetIterConst = HeelSet::const_iterator;
        inline HeelPtr makeHeel() { return std::make_shared<Heel>(); }
        class Heel : public ElementInterface
        {
        public:
            Heel();
            virtual bool hasAttributes() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual bool hasContents() const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            HeelAttributesPtr getAttributes() const;
            void setAttributes( const HeelAttributesPtr& value );
        private:
            HeelAttributesPtr myAttributes;
        };
        
        /* <!--  ID = 5413 [5413] ------------------------->
         <!-- min=1 max=1 RequiredSingleOccurence  -->
         <!-- MsItemElementKind::simple -->
         <!-- RecursiveSubElementCount = 0 -->
         <!-- All Sub Elements Are Implemented: true -->
         <xs:element name="toe" type="heel-toe"/>
         <xs:complexType name="heel-toe">
         <xs:annotation>
         <xs:documentation>The heel and toe elements are used with organ pedals. The substitution value is "no" if the attribute is not present.</xs:documentation>
         </xs:annotation>
         <xs:complexContent>
         <xs:extension base="empty-placement">
         <xs:attribute name="substitution" type="yes-no"/>
         </xs:extension>
         </xs:complexContent>
         </xs:complexType> */
        
        using ToeAttributes = HeelAttributes;
        using ToeAttributesPtr = HeelAttributesPtr;
        
        class Toe;
        using ToePtr = std::shared_ptr<Toe>;
        using ToeUPtr = std::unique_ptr<Toe>;
        using ToeSet = std::vector<ToePtr>;
        using ToeSetIter = ToeSet::iterator;
        using ToeSetIterConst = ToeSet::const_iterator;
        inline ToePtr makeToe() { return std::make_shared<Toe>(); }
        class Toe : public ElementInterface
        {
        public:
            Toe();
            virtual bool hasAttributes() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual bool hasContents() const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            ToeAttributesPtr getAttributes() const;
            void setAttributes( const ToeAttributesPtr& value );
        private:
            ToeAttributesPtr myAttributes;
        };
        
        /* !--  ID = 5421 [5421] ------------------------->
         <!-- min=1 max=1 RequiredSingleOccurence  -->
         <!-- MsItemElementKind::composite -->
         <!-- RecursiveSubElementCount = 3 -->
         <!-- All Sub Elements Are Implemented: true -->
         <xs:element name="hole" type="hole"/>
         <xs:complexType name="hole">
         <xs:annotation>
         <xs:documentation>The hole type represents the symbols used for woodwind and brass fingerings as well as other notations.</xs:documentation>
         </xs:annotation>
         <xs:sequence>
         <xs:element name="hole-type" type="xs:string" minOccurs="0">
         <xs:annotation>
         <xs:documentation>The content of the optional hole-type element indicates what the hole symbol represents in terms of instrument fingering or other techniques.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:element name="hole-closed" type="hole-closed"/>
         <xs:element name="hole-shape" type="xs:string" minOccurs="0">
         <xs:annotation>
         <xs:documentation>The optional hole-shape element indicates the shape of the hole symbol; the default is a circle.</xs:documentation>
         </xs:annotation>
         </xs:element>
         </xs:sequence>
         <xs:attributeGroup ref="print-style"/>
         <xs:attributeGroup ref="placement"/>
         </xs:complexType> */
        
        struct HoleAttributes;
        using HoleAttributesPtr = std::shared_ptr<HoleAttributes>;
        
        struct HoleAttributes : public AttributesInterface
        {
        public:
            HoleAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::TenthsValue defaultX;
            types::TenthsValue defaultY;
            types::TenthsValue relativeX;
            types::TenthsValue relativeY;
            types::CommaSeparatedText fontFamily;
            types::FontStyle fontStyle;
            types::FontSize fontSize;
            types::FontWeight fontWeight;
            types::Color color;
            types::AboveBelow placement;
            bool hasDefaultX;
            bool hasDefaultY;
            bool hasRelativeX;
            bool hasRelativeY;
            bool hasFontFamily;
            bool hasFontStyle;
            bool hasFontSize;
            bool hasFontWeight;
            bool hasColor;
            bool hasPlacement;
        };
        
        class Hole;
        using HolePtr = std::shared_ptr<Hole>;
        using HoleUPtr = std::unique_ptr<Hole>;
        using HoleSet = std::vector<HolePtr>;
        using HoleSetIter = HoleSet::iterator;
        using HoleSetIterConst = HoleSet::const_iterator;
        inline HolePtr makeHole() { return std::make_shared<Hole>(); }
        class Hole : public ElementInterface
        {
        public:
            Hole();
            virtual bool hasAttributes() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual bool hasContents() const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            HoleAttributesPtr getAttributes() const;
            void setAttributes( const HoleAttributesPtr& value );
            /* _________ HoleType minOccurs = 0, maxOccurs = 1 _________ */
            HoleTypePtr getHoleType() const;
            void setHoleType( const HoleTypePtr& value );
            bool getHasHoleType() const;
            void setHasHoleType( const bool value );
            /* _________ HoleClosed minOccurs = 1, maxOccurs = 1 _________ */
            HoleClosedPtr getHoleClosed() const;
            void setHoleClosed( const HoleClosedPtr& value );
            /* _________ HoleShape minOccurs = 0, maxOccurs = 1 _________ */
            HoleShapePtr getHoleShape() const;
            void setHoleShape( const HoleShapePtr& value );
            bool getHasHoleShape() const;
            void setHasHoleShape( const bool value );
        private:
            HoleAttributesPtr myAttributes;
            HoleTypePtr myHoleType;
            bool myHasHoleType;
            HoleClosedPtr myHoleClosed;
            HoleShapePtr myHoleShape;
            bool myHasHoleShape;
        };
        /* <!--  ID = 5562 [5562] ------------------------->
         <!-- min=0 max=1 OptionalSingleOccurrence  -->
         <!-- MsItemElementKind::composite -->
         <!-- RecursiveSubElementCount = 3 -->
         <!-- All Sub Elements Are Implemented: true -->
         <xs:element name="tuplet-actual" type="tuplet-portion" minOccurs="0">
         <xs:annotation>
         <xs:documentation>The tuplet-actual element provide optional full control over how the actual part of the tuplet is displayed, including number and note type (with dots). If any of these elements are absent, their values are based on the time-modification element.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:complexType name="tuplet-portion">
         <xs:annotation>
         <xs:documentation>The tuplet-portion type provides optional full control over tuplet specifications. It allows the number and note type (including dots) to be set for the actual and normal portions of a single tuplet. If any of these elements are absent, their values are based on the time-modification element.</xs:documentation>
         </xs:annotation>
         <xs:sequence>
         <xs:element name="tuplet-number" type="tuplet-number" minOccurs="0"/>
         <xs:element name="tuplet-type" type="tuplet-type" minOccurs="0"/>
         <xs:element name="tuplet-dot" type="tuplet-dot" minOccurs="0" maxOccurs="unbounded"/>
         </xs:sequence>
         </xs:complexType> */
        
        class TupletActual;
        using TupletActualPtr = std::shared_ptr<TupletActual>;
        using TupletActualUPtr = std::unique_ptr<TupletActual>;
        using TupletActualSet = std::vector<TupletActualPtr>;
        using TupletActualSetIter = TupletActualSet::iterator;
        using TupletActualSetIterConst = TupletActualSet::const_iterator;
        inline TupletActualPtr makeTupletActual() { return std::make_shared<TupletActual>(); }
        class TupletActual : public ElementInterface
        {
        public:
            TupletActual();
            virtual bool hasAttributes() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual bool hasContents() const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            /* _________ TupletNumber minOccurs = 0, maxOccurs = 1 _________ */
            TupletNumberPtr getTupletNumber() const;
            void setTupletNumber( const TupletNumberPtr& value );
            bool getHasTupletNumber() const;
            void setHasTupletNumber( const bool value );
            /* _________ TupletType minOccurs = 0, maxOccurs = 1 _________ */
            TupletTypePtr getTupletType() const;
            void setTupletType( const TupletTypePtr& value );
            bool getHasTupletType() const;
            void setHasTupletType( const bool value );
            /* _________ TupletDot minOccurs = 0, maxOccurs = unbounded _________ */
            const TupletDotSet& getTupletDotSet() const;
            void addTupletDot( const TupletDotPtr& value );
            void removeTupletDot( const TupletDotSetIterConst& value );
            void clearTupletDotSet();
            TupletDotPtr getTupletDot( const TupletDotSetIterConst& setIterator ) const;
        private:
            TupletNumberPtr myTupletNumber;
            bool myHasTupletNumber;
            TupletTypePtr myTupletType;
            bool myHasTupletType;
            TupletDotSet myTupletDotSet;
        };
        
        /* <!--  ID = 5568 [5568] ------------------------->
         <!-- min=0 max=1 OptionalSingleOccurrence  -->
         <!-- MsItemElementKind::composite -->
         <!-- RecursiveSubElementCount = 3 -->
         <!-- All Sub Elements Are Implemented: true -->
         <xs:element name="tuplet-normal" type="tuplet-portion" minOccurs="0">
         <xs:annotation>
         <xs:documentation>The tuplet-normal element provide optional full control over how the normal part of the tuplet is displayed, including number and note type (with dots). If any of these elements are absent, their values are based on the time-modification element.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:complexType name="tuplet-portion">
         <xs:annotation>
         <xs:documentation>The tuplet-portion type provides optional full control over tuplet specifications. It allows the number and note type (including dots) to be set for the actual and normal portions of a single tuplet. If any of these elements are absent, their values are based on the time-modification element.</xs:documentation>
         </xs:annotation>
         <xs:sequence>
         <xs:element name="tuplet-number" type="tuplet-number" minOccurs="0"/>
         <xs:element name="tuplet-type" type="tuplet-type" minOccurs="0"/>
         <xs:element name="tuplet-dot" type="tuplet-dot" minOccurs="0" maxOccurs="unbounded"/>
         </xs:sequence>
         </xs:complexType> */
        
        class TupletNormal;
        using TupletNormalPtr = std::shared_ptr<TupletNormal>;
        using TupletNormalUPtr = std::unique_ptr<TupletNormal>;
        using TupletNormalSet = std::vector<TupletNormalPtr>;
        using TupletNormalSetIter = TupletNormalSet::iterator;
        using TupletNormalSetIterConst = TupletNormalSet::const_iterator;
        inline TupletNormalPtr makeTupletNormal() { return std::make_shared<TupletNormal>(); }
        class TupletNormal : public ElementInterface
        {
        public:
            TupletNormal();
            virtual bool hasAttributes() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual bool hasContents() const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            /* _________ TupletNumber minOccurs = 0, maxOccurs = 1 _________ */
            TupletNumberPtr getTupletNumber() const;
            void setTupletNumber( const TupletNumberPtr& value );
            bool getHasTupletNumber() const;
            void setHasTupletNumber( const bool value );
            /* _________ TupletType minOccurs = 0, maxOccurs = 1 _________ */
            TupletTypePtr getTupletType() const;
            void setTupletType( const TupletTypePtr& value );
            bool getHasTupletType() const;
            void setHasTupletType( const bool value );
            /* _________ TupletDot minOccurs = 0, maxOccurs = unbounded _________ */
            const TupletDotSet& getTupletDotSet() const;
            void addTupletDot( const TupletDotPtr& value );
            void removeTupletDot( const TupletDotSetIterConst& value );
            void clearTupletDotSet();
            TupletDotPtr getTupletDot( const TupletDotSetIterConst& setIterator ) const;
        private:
            TupletNumberPtr myTupletNumber;
            bool myHasTupletNumber;
            TupletTypePtr myTupletType;
            bool myHasTupletType;
            TupletDotSet myTupletDotSet;
        };
    }
}