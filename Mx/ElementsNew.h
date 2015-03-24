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
         2660
         <xs:element name="transpose" type="transpose" minOccurs="0" maxOccurs="unbounded">
         <xs:annotation>
         <xs:documentation>If the part is being encoded for a transposing instrument in written vs. concert pitch, the transposition must be encoded in the transpose element using the transpose type.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:complexType name="transpose">
         <xs:annotation>
         <xs:documentation>The transpose type represents what must be added to a written pitch to get a correct sounding pitch. The optional number attribute refers to staff numbers, from top to bottom on the system. If absent, the transposition applies to all staves in the part. Per-staff transposition is most often used in parts that represent multiple instruments.</xs:documentation>
         </xs:annotation>
         <xs:sequence>
         <xs:element name="diatonic" type="xs:integer" minOccurs="0">
         <xs:annotation>
         <xs:documentation>The diatonic element specifies the number of pitch steps needed to go from written to sounding pitch. This allows for correct spelling of enharmonic transpositions.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:element name="chromatic" type="semitones">
         <xs:annotation>
         <xs:documentation>The chromatic element represents the number of semitones needed to get from written to sounding pitch. This value does not include octave-change values; the values for both elements need to be added to the written pitch to get the correct sounding pitch.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:element name="octave-change" type="xs:integer" minOccurs="0">
         <xs:annotation>
         <xs:documentation>The octave-change element indicates how many octaves to add to get from written pitch to sounding pitch.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:element name="double" type="empty" minOccurs="0">
         <xs:annotation>
         <xs:documentation>If the double element is present, it indicates that the music is doubled one octave down from what is currently written (as is the case for mixed cello / bass parts in orchestral literature).</xs:documentation>
         </xs:annotation>
         </xs:element>
         </xs:sequence>
         <xs:attribute name="number" type="staff-number"/>
         </xs:complexType>
         */
        
        struct TransposeAttributes;
        using TransposeAttributesPtr = std::shared_ptr<TransposeAttributes>;
        
        struct TransposeAttributes : public AttributesInterface
        {
        public:
            TransposeAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::StaffNumber number;
            bool hasNumber;
        };
        
        class Transpose;
        using TransposePtr = std::shared_ptr<Transpose>;
        using TransposeUPtr = std::unique_ptr<Transpose>;
        using TransposeSet = std::vector<TransposePtr>;
        using TransposeSetIter = TransposeSet::iterator;
        using TransposeSetIterConst = TransposeSet::const_iterator;
        inline TransposePtr makeTranspose() { return std::make_shared<Transpose>(); }
        class Transpose : public ElementInterface
        {
        public:
            Transpose();
            virtual bool hasAttributes() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual bool hasContents() const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            TransposeAttributesPtr getAttributes() const;
            void setAttributes( const TransposeAttributesPtr& value );
            /* _________ Diatonic minOccurs = 0, maxOccurs = 1 _________ */
            DiatonicPtr getDiatonic() const;
            void setDiatonic( const DiatonicPtr& value );
            bool getHasDiatonic() const;
            void setHasDiatonic( const bool value );
            /* _________ Chromatic minOccurs = 1, maxOccurs = 1 _________ */
            ChromaticPtr getChromatic() const;
            void setChromatic( const ChromaticPtr& value );
            /* _________ OctaveChange minOccurs = 0, maxOccurs = 1 _________ */
            OctaveChangePtr getOctaveChange() const;
            void setOctaveChange( const OctaveChangePtr& value );
            bool getHasOctaveChange() const;
            void setHasOctaveChange( const bool value );
            /* _________ Double minOccurs = 0, maxOccurs = 1 _________ */
            DoublePtr getDouble() const;
            void setDouble( const DoublePtr& value );
            bool getHasDouble() const;
            void setHasDouble( const bool value );
        private:
            TransposeAttributesPtr myAttributes;
            DiatonicPtr myDiatonic;
            bool myHasDiatonic;
            ChromaticPtr myChromatic;
            OctaveChangePtr myOctaveChange;
            bool myHasOctaveChange;
            DoublePtr myDouble;
            bool myHasDouble;
        };
        
        /*
         2667
         <xs:element name="directive" minOccurs="0" maxOccurs="unbounded">
         <xs:annotation>
         <xs:documentation>Directives are like directions, but can be grouped together with attributes for convenience. This is typically used for tempo markings at the beginning of a piece of music. This element has been deprecated in Version 2.0 in favor of the directive attribute for direction elements. Language names come from ISO 639, with optional country subcodes from ISO 3166.</xs:documentation>
         </xs:annotation>
         <xs:complexType>
         <xs:simpleContent>
         <xs:extension base="xs:string">
         <xs:attributeGroup ref="print-style"/>
         <xs:attribute ref="xml:lang"/>
         </xs:extension>
         </xs:simpleContent>
         </xs:complexType>
         </xs:element>
         */
        
        struct DirectiveAttributes;
        using DirectiveAttributesPtr = std::shared_ptr<DirectiveAttributes>;
        
        struct DirectiveAttributes : public AttributesInterface
        {
        public:
            DirectiveAttributes();
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
            types::XmlLang lang;
            bool hasDefaultX;
            bool hasDefaultY;
            bool hasRelativeX;
            bool hasRelativeY;
            bool hasFontFamily;
            bool hasFontStyle;
            bool hasFontSize;
            bool hasFontWeight;
            bool hasLang;
        };
        
        class Directive;
        using DirectivePtr = std::shared_ptr<Directive>;
        using DirectiveUPtr = std::unique_ptr<Directive>;
        using DirectiveSet = std::vector<DirectivePtr>;
        using DirectiveSetIter = DirectiveSet::iterator;
        using DirectiveSetIterConst = DirectiveSet::const_iterator;
        inline DirectivePtr makeDirective() { return std::make_shared<Directive>(); }
        inline DirectivePtr makeDirective( const types::XsString& value ) { return std::make_shared<Directive>( value ); }
        inline DirectivePtr makeDirective( types::XsString&& value ) { return std::make_shared<Directive>( std::move( value ) ); }
        class Directive : public ElementInterface
        {
        public:
            Directive();
            Directive( const types::XsString& value );
            virtual bool hasAttributes() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual bool hasContents() const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            DirectiveAttributesPtr getAttributes() const;
            void setAttributes( const DirectiveAttributesPtr& value );
            types::XsString getValue() const;
            void setValue( const types::XsString& value );
        private:
            DirectiveAttributesPtr myAttributes;
            types::XsString myValue;
        };
        /*
         <!--  ID = 2836 [2836] ------------------------->
         <!-- min=1 max=1 RequiredSingleOccurence  -->
         <!-- RecursiveSubElementCount = 2 -->
         <xs:element name="beat-repeat" type="beat-repeat"/>
         <xs:complexType name="beat-repeat">
         <xs:annotation>
         <xs:documentation>The beat-repeat type is used to indicate that a single beat (but possibly many notes) is repeated. Both the start and stop of the beat being repeated should be specified. The slashes attribute specifies the number of slashes to use in the symbol. The use-dots attribute indicates whether or not to use dots as well (for instance, with mixed rhythm patterns). By default, the value for slashes is 1 and the value for use-dots is no.
         
         The beat-repeat element specifies a notation style for repetitions. The actual music being repeated needs to be repeated within the MusicXML file. This element specifies the notation that indicates the repeat.</xs:documentation>
         </xs:annotation>
         <xs:group ref="slash" minOccurs="0"/>
         <xs:attribute name="type" type="start-stop" use="required"/>
         <xs:attribute name="slashes" type="xs:positiveInteger"/>
         <xs:attribute name="use-dots" type="yes-no"/>
         </xs:complexType>
         <xs:group name="slash">
         <xs:annotation>
         <xs:documentation>The slash group combines elements used for more complete specification of the slash and beat-repeat measure-style elements. They have the same values as the type and dot elements, and define what the beat is for the display of repetition marks. If not present, the beat is based on the current time signature.</xs:documentation>
         </xs:annotation>
         <xs:sequence>
         <xs:element name="slash-type" type="note-type-value">
         <xs:annotation>
         <xs:documentation>The slash-type element indicates the graphical note type to use for the display of repetition marks.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:element name="slash-dot" type="empty" minOccurs="0" maxOccurs="unbounded">
         <xs:annotation>
         <xs:documentation>The slash-dot element is used to specify any augmentation dots in the note type used to display repetition marks.</xs:documentation>
         </xs:annotation>
         </xs:element>
         </xs:sequence>
         </xs:group>
         */
        
        struct BeatRepeatAttributes;
        using BeatRepeatAttributesPtr = std::shared_ptr<BeatRepeatAttributes>;
        
        struct BeatRepeatAttributes : public AttributesInterface
        {
        public:
            BeatRepeatAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            // types::YesNo slash;
            types::StartStop type;
            types::PositiveInteger slashes;
            types::YesNo useDots;
            bool hasSlash;
            const bool hasType;
            bool hasSlashes;
            bool hasUseDots;
        };
        
        class BeatRepeat;
        using BeatRepeatPtr = std::shared_ptr<BeatRepeat>;
        using BeatRepeatUPtr = std::unique_ptr<BeatRepeat>;
        using BeatRepeatSet = std::vector<BeatRepeatPtr>;
        using BeatRepeatSetIter = BeatRepeatSet::iterator;
        using BeatRepeatSetIterConst = BeatRepeatSet::const_iterator;
        inline BeatRepeatPtr makeBeatRepeat() { return std::make_shared<BeatRepeat>(); }
        class BeatRepeat : public ElementInterface
        {
        public:
            BeatRepeat();
            virtual bool hasAttributes() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual bool hasContents() const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            BeatRepeatAttributesPtr getAttributes() const;
            void setAttributes( const BeatRepeatAttributesPtr& value );
            /* _________ SlashType minOccurs = 1, maxOccurs = 1 _________ */
            SlashTypePtr getSlashType() const;
            void setSlashType( const SlashTypePtr& value );
            /* _________ SlashDot minOccurs = 0, maxOccurs = unbounded _________ */
            const SlashDotSet& getSlashDotSet() const;
            void addSlashDot( const SlashDotPtr& value );
            void removeSlashDot( const SlashDotSetIterConst& value );
            bool getHasSlashDot() const;
            void setHasSlashDot( const bool value );
            void clearSlashDotSet();
        private:
            BeatRepeatAttributesPtr myAttributes;
            SlashTypePtr mySlashType;
            SlashDotSet mySlashDotSet;
        };
        /*
         2839
         <!--  ID = 2839 [2839] ------------------------->
         <!-- RecursiveSubElementCount = 2 -->
         <xs:element name="slash" type="slash"/>
         <xs:complexType name="slash">
         <xs:annotation>
         <xs:documentation>The slash type is used to indicate that slash notation is to be used. If the slash is on every beat, use-stems is no (the default). To indicate rhythms but not pitches, use-stems is set to yes. The type attribute indicates whether this is the start or stop of a slash notation style. The use-dots attribute works as for the beat-repeat element, and only has effect if use-stems is no.</xs:documentation>
         </xs:annotation>
         <xs:group ref="slash" minOccurs="0"/>
         <xs:attribute name="type" type="start-stop" use="required"/>
         <xs:attribute name="use-dots" type="yes-no"/>
         <xs:attribute name="use-stems" type="yes-no"/>
         </xs:complexType>
         <xs:group name="slash">
         <xs:annotation>
         <xs:documentation>The slash group combines elements used for more complete specification of the slash and beat-repeat measure-style elements. They have the same values as the type and dot elements, and define what the beat is for the display of repetition marks. If not present, the beat is based on the current time signature.</xs:documentation>
         </xs:annotation>
         <xs:sequence>
         <xs:element name="slash-type" type="note-type-value">
         <xs:annotation>
         <xs:documentation>The slash-type element indicates the graphical note type to use for the display of repetition marks.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:element name="slash-dot" type="empty" minOccurs="0" maxOccurs="unbounded">
         <xs:annotation>
         <xs:documentation>The slash-dot element is used to specify any augmentation dots in the note type used to display repetition marks.</xs:documentation>
         </xs:annotation>
         </xs:element>
         </xs:sequence>
         </xs:group>
         */
        
        struct SlashAttributes;
        using SlashAttributesPtr = std::shared_ptr<SlashAttributes>;
        
        struct SlashAttributes : public AttributesInterface
        {
        public:
            SlashAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::StartStop type;
            types::YesNo useDots;
            types::YesNo useStems;
            const 	bool hasType;
            bool hasUseDots;
            bool hasUseStems;
        };
        
        class Slash;
        using SlashPtr = std::shared_ptr<Slash>;
        using SlashUPtr = std::unique_ptr<Slash>;
        using SlashSet = std::vector<SlashPtr>;
        using SlashSetIter = SlashSet::iterator;
        using SlashSetIterConst = SlashSet::const_iterator;
        inline SlashPtr makeSlash() { return std::make_shared<Slash>(); }
        class Slash : public ElementInterface
        {
        public:
            Slash();
            virtual bool hasAttributes() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual bool hasContents() const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            SlashAttributesPtr getAttributes() const;
            void setAttributes( const SlashAttributesPtr& value );
            /* _________ SlashType minOccurs = 1, maxOccurs = 1 _________ */
            SlashTypePtr getSlashType() const;
            void setSlashType( const SlashTypePtr& value );
            /* _________ SlashDot minOccurs = 0, maxOccurs = unbounded _________ */
            const SlashDotSet& getSlashDotSet() const;
            void addSlashDot( const SlashDotPtr& value );
            void removeSlashDot( const SlashDotSetIterConst& value );
            bool getHasSlashDot() const;
            void setHasSlashDot( const bool value );
            void clearSlashDotSet();
        private:
            SlashAttributesPtr myAttributes;
            SlashTypePtr mySlashType;
            SlashDotSet mySlashDotSet;
        };
        
        /*
         2908
         <!--  ID = 2908 [2908] ------------------------->
         <!-- min=0 max=4294967295 ZeroOrMany  -->
         <!-- MsItemElementKind::composite -->
         <!-- RecursiveSubElementCount = 3 -->
         <!-- All Sub Elements Are Implemented: true -->
         <xs:element name="staff-tuning" type="staff-tuning" minOccurs="0" maxOccurs="unbounded"/>
         <xs:complexType name="staff-tuning">
         <xs:annotation>
         <xs:documentation>The staff-tuning type specifies the open, non-capo tuning of the lines on a tablature staff.</xs:documentation>
         </xs:annotation>
         <xs:group ref="tuning"/>
         <xs:attribute name="line" type="staff-line"/>
         </xs:complexType>
         <xs:group name="tuning">
         <xs:annotation>
         <xs:documentation>The tuning group contains the sequence of elements common to the staff-tuning and accord elements.</xs:documentation>
         </xs:annotation>
         <xs:sequence>
         <xs:element name="tuning-step" type="step">
         <xs:annotation>
         <xs:documentation>The tuning-step element is represented like the step element, with a different name to reflect is different function.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:element name="tuning-alter" type="semitones" minOccurs="0">
         <xs:annotation>
         <xs:documentation>The tuning-alter element is represented like the alter element, with a different name to reflect is different function.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:element name="tuning-octave" type="octave">
         <xs:annotation>
         <xs:documentation>The tuning-octave element is represented like the octave element, with a different name to reflect is different function.</xs:documentation>
         </xs:annotation>
         </xs:element>
         </xs:sequence>
         </xs:group>
         */
        
        struct StaffTuningAttributes;
        using StaffTuningAttributesPtr = std::shared_ptr<StaffTuningAttributes>;
        
        struct StaffTuningAttributes : public AttributesInterface
        {
        public:
            StaffTuningAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::StaffLine line;
            bool hasLine;
        };
        
        class StaffTuning;
        using StaffTuningPtr = std::shared_ptr<StaffTuning>;
        using StaffTuningUPtr = std::unique_ptr<StaffTuning>;
        using StaffTuningSet = std::vector<StaffTuningPtr>;
        using StaffTuningSetIter = StaffTuningSet::iterator;
        using StaffTuningSetIterConst = StaffTuningSet::const_iterator;
        inline StaffTuningPtr makeStaffTuning() { return std::make_shared<StaffTuning>(); }
        class StaffTuning : public ElementInterface
        {
        public:
            StaffTuning();
            virtual bool hasAttributes() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual bool hasContents() const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            StaffTuningAttributesPtr getAttributes() const;
            void setAttributes( const StaffTuningAttributesPtr& value );
            /* _________ TuningStep minOccurs = 1, maxOccurs = 1 _________ */
            TuningStepPtr getTuningStep() const;
            void setTuningStep( const TuningStepPtr& value );
            /* _________ TuningAlter minOccurs = 0, maxOccurs = 1 _________ */
            TuningAlterPtr getTuningAlter() const;
            void setTuningAlter( const TuningAlterPtr& value );
            bool getHasTuningAlter() const;
            void setHasTuningAlter( const bool value );
            /* _________ TuningOctave minOccurs = 1, maxOccurs = 1 _________ */
            TuningOctavePtr getTuningOctave() const;
            void setTuningOctave( const TuningOctavePtr& value );
        private:
            StaffTuningAttributesPtr myAttributes;
            TuningStepPtr myTuningStep;
            TuningAlterPtr myTuningAlter;
            bool myHasTuningAlter;
            TuningOctavePtr myTuningOctave;
        };
    }
}