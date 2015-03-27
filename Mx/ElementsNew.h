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

    }
}