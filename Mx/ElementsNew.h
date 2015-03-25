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
         2653
         <!--  ID = 2653 [2653] ------------------------->
         <!-- min=0 max=4294967295 ZeroOrMany  -->
         <!-- RecursiveSubElementCount = 8 -->
         <xs:element name="staff-details" type="staff-details" minOccurs="0" maxOccurs="unbounded">
         <xs:annotation>
         <xs:documentation>The staff-details element is used to indicate different types of staves.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:complexType name="staff-details">
         <xs:annotation>
         <xs:documentation>The staff-details element is used to indicate different types of staves. The optional number attribute specifies the staff number from top to bottom on the system, as with clef. The print-object attribute is used to indicate when a staff is not printed in a part, usually in large scores where empty parts are omitted. It is yes by default. If print-spacing is yes while print-object is no, the score is printed in cutaway format where vertical space is left for the empty part.</xs:documentation>
         </xs:annotation>
         <xs:sequence>
         <xs:element name="staff-type" type="staff-type" minOccurs="0"/>
         <xs:element name="staff-lines" type="xs:nonNegativeInteger" minOccurs="0">
         <xs:annotation>
         <xs:documentation>The staff-lines element specifies the number of lines for a non 5-line staff.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:element name="staff-tuning" type="staff-tuning" minOccurs="0" maxOccurs="unbounded"/>
         <xs:element name="capo" type="xs:nonNegativeInteger" minOccurs="0">
         <xs:annotation>
         <xs:documentation>The capo element indicates at which fret a capo should be placed on a fretted instrument. This changes the open tuning of the strings specified by staff-tuning by the specified number of half-steps.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:element name="staff-size" type="non-negative-decimal" minOccurs="0">
         <xs:annotation>
         <xs:documentation>The staff-size element indicates how large a staff space is on this staff, expressed as a percentage of the work's default scaling. Values less than 100 make the staff space smaller while values over 100 make the staff space larger. A staff-type of cue, ossia, or editorial implies a staff-size of less than 100, but the exact value is implementation-dependent unless specified here. Staff size affects staff height only, not the relationship of the staff to the left and right margins.</xs:documentation>
         </xs:annotation>
         </xs:element>
         </xs:sequence>
         <xs:attribute name="number" type="staff-number"/>
         <xs:attribute name="show-frets" type="show-frets"/>
         <xs:attributeGroup ref="print-object"/>
         <xs:attributeGroup ref="print-spacing"/>
         </xs:complexType>
         */
        
        struct StaffDetailsAttributes;
        using StaffDetailsAttributesPtr = std::shared_ptr<StaffDetailsAttributes>;
        
        struct StaffDetailsAttributes : public AttributesInterface
        {
        public:
            StaffDetailsAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::StaffNumber number;
            types::ShowFrets showFrets;
            types::YesNo printObject;
            types::YesNo printSpacing;
            bool hasNumber;
            bool hasShowFrets;
            bool hasPrintObject;
            bool hasPrintSpacing;
        };
        
        class StaffDetails;
        using StaffDetailsPtr = std::shared_ptr<StaffDetails>;
        using StaffDetailsUPtr = std::unique_ptr<StaffDetails>;
        using StaffDetailsSet = std::vector<StaffDetailsPtr>;
        using StaffDetailsSetIter = StaffDetailsSet::iterator;
        using StaffDetailsSetIterConst = StaffDetailsSet::const_iterator;
        inline StaffDetailsPtr makeStaffDetails() { return std::make_shared<StaffDetails>(); }
        class StaffDetails : public ElementInterface
        {
        public:
            StaffDetails();
            virtual bool hasAttributes() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual bool hasContents() const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            StaffDetailsAttributesPtr getAttributes() const;
            void setAttributes( const StaffDetailsAttributesPtr& value );
            /* _________ StaffType minOccurs = 0, maxOccurs = 1 _________ */
            StaffTypePtr getStaffType() const;
            void setStaffType( const StaffTypePtr& value );
            bool getHasStaffType() const;
            void setHasStaffType( const bool value );
            /* _________ StaffLines minOccurs = 0, maxOccurs = 1 _________ */
            StaffLinesPtr getStaffLines() const;
            void setStaffLines( const StaffLinesPtr& value );
            bool getHasStaffLines() const;
            void setHasStaffLines( const bool value );
            /* _________ StaffTuning minOccurs = 0, maxOccurs = unbounded _________ */
            const StaffTuningSet& getStaffTuningSet() const;
            void addStaffTuning( const StaffTuningPtr& value );
            void removeStaffTuning( const StaffTuningSetIterConst& value );
            bool getHasStaffTuning() const;
            void setHasStaffTuning( const bool value );
            void clearStaffTuningSet();
            /* _________ Capo minOccurs = 0, maxOccurs = 1 _________ */
            CapoPtr getCapo() const;
            void setCapo( const CapoPtr& value );
            bool getHasCapo() const;
            void setHasCapo( const bool value );
            /* _________ StaffSize minOccurs = 0, maxOccurs = 1 _________ */
            StaffSizePtr getStaffSize() const;
            void setStaffSize( const StaffSizePtr& value );
            bool getHasStaffSize() const;
            void setHasStaffSize( const bool value );
        private:
            StaffDetailsAttributesPtr myAttributes;
            StaffTypePtr myStaffType;
            bool myHasStaffType;
            StaffLinesPtr myStaffLines;
            bool myHasStaffLines;
            StaffTuningSet myStaffTuningSet;
            CapoPtr myCapo;
            bool myHasCapo;
            StaffSizePtr myStaffSize;
            bool myHasStaffSize;
        };
        /*
         2681
         <!--  ID = 2681 [2681] ------------------------->
         <!-- min=0 max=4294967295 ZeroOrMany  -->
         <!-- RecursiveSubElementCount = 8 -->
         <xs:element name="measure-style" type="measure-style" minOccurs="0" maxOccurs="unbounded">
         <xs:annotation>
         <xs:documentation>A measure-style indicates a special way to print partial to multiple measures within a part. This includes multiple rests over several measures, repeats of beats, single, or multiple measures, and use of slash notation.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:complexType name="measure-style">
         <xs:annotation>
         <xs:documentation>A measure-style indicates a special way to print partial to multiple measures within a part. This includes multiple rests over several measures, repeats of beats, single, or multiple measures, and use of slash notation.
         
         The multiple-rest and measure-repeat symbols indicate the number of measures covered in the element content. The beat-repeat and slash elements can cover partial measures. All but the multiple-rest element use a type attribute to indicate starting and stopping the use of the style. The optional number attribute specifies the staff number from top to bottom on the system, as with clef.</xs:documentation>
         </xs:annotation>
         <xs:choice>
         <xs:element name="multiple-rest" type="multiple-rest"/>
         <xs:element name="measure-repeat" type="measure-repeat"/>
         <xs:element name="beat-repeat" type="beat-repeat"/>
         <xs:element name="slash" type="slash"/>
         </xs:choice>
         <xs:attribute name="number" type="staff-number"/>
         <xs:attributeGroup ref="font"/>
         <xs:attributeGroup ref="color"/>
         </xs:complexType>         */
        
        class MeasureStyleChoice;
        using MeasureStyleChoicePtr = std::shared_ptr<MeasureStyleChoice>;
        using MeasureStyleChoiceUPtr = std::unique_ptr<MeasureStyleChoice>;
        using MeasureStyleChoiceSet = std::vector<MeasureStyleChoicePtr>;
        using MeasureStyleChoiceSetIter = MeasureStyleChoiceSet::iterator;
        using MeasureStyleChoiceSetIterConst = MeasureStyleChoiceSet::const_iterator;
        inline MeasureStyleChoicePtr makeMeasureStyleChoice() { return std::make_shared<MeasureStyleChoice>(); }
        class MeasureStyleChoice : public ElementInterface
        {
        public:
            enum class Choice
            {
                multipleRest = 0,
                measureRepeat = 1,
                beatRepeat = 2,
                slash = 3
            };
            MeasureStyleChoice();
            virtual bool hasAttributes() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual bool hasContents() const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            Choice getChoice() const;
            void setChoice( const Choice value );
            MultipleRestPtr getMultipleRest() const;
            void setMultipleRest( const MultipleRestPtr& value );
            MeasureRepeatPtr getMeasureRepeat() const;
            void setMeasureRepeat( const MeasureRepeatPtr& value );
            BeatRepeatPtr getBeatRepeat() const;
            void setBeatRepeat( const BeatRepeatPtr& value );
            SlashPtr getSlash() const;
            void setSlash( const SlashPtr& value );
        private:
            Choice myChoice;
            MultipleRestPtr myMultipleRest;
            MeasureRepeatPtr myMeasureRepeat;
            BeatRepeatPtr myBeatRepeat;
            SlashPtr mySlash;
        };
        
        struct MeasureStyleAttributes;
        using MeasureStyleAttributesPtr = std::shared_ptr<MeasureStyleAttributes>;
        
        struct MeasureStyleAttributes : public AttributesInterface
        {
        public:
            MeasureStyleAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::StaffNumber number;
            types::CommaSeparatedText fontFamily;
            types::FontStyle fontStyle;
            types::FontSize fontSize;
            types::FontWeight fontWeight;
            types::Color color;
            bool hasNumber;
            bool hasFontFamily;
            bool hasFontStyle;
            bool hasFontSize;
            bool hasFontWeight;
            bool hasColor;
        };
        
        class MeasureStyle;
        using MeasureStylePtr = std::shared_ptr<MeasureStyle>;
        using MeasureStyleUPtr = std::unique_ptr<MeasureStyle>;
        using MeasureStyleSet = std::vector<MeasureStylePtr>;
        using MeasureStyleSetIter = MeasureStyleSet::iterator;
        using MeasureStyleSetIterConst = MeasureStyleSet::const_iterator;
        inline MeasureStylePtr makeMeasureStyle() { return std::make_shared<MeasureStyle>(); }
        class MeasureStyle : public ElementInterface
        {
        public:
            MeasureStyle();
            virtual bool hasAttributes() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual bool hasContents() const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            MeasureStyleAttributesPtr getAttributes() const;
            void setAttributes( const MeasureStyleAttributesPtr& value );
            MeasureStyleChoicePtr getMeasureStyleChoice() const;
            void setMeasureStyleChoice( const MeasureStyleChoicePtr& value );
        private:
            MeasureStyleAttributesPtr myAttributes;
            MeasureStyleChoicePtr myChoice;
        };
        
        /*
         2953
         <!--  ID = 2953 [2953] ------------------------->
         <!-- min=0 max=1 OptionalSingleOccurrence  -->
         <!-- RecursiveSubElementCount = 3 -->
         <xs:element name="interchangeable" type="interchangeable" minOccurs="0"/>
         <xs:complexType name="interchangeable">
         <xs:annotation>
         <xs:documentation>The interchangeable type is used to represent the second in a pair of interchangeable dual time signatures, such as the 6/8 in 3/4 (6/8). A separate symbol attribute value is available compared to the time element's symbol attribute, which applies to the first of the dual time signatures. The parentheses attribute value is yes by default.</xs:documentation>
         </xs:annotation>
         <xs:sequence>
         <xs:element name="time-relation" type="time-relation" minOccurs="0"/>
         <xs:group ref="time-signature" maxOccurs="unbounded"/>
         </xs:sequence>
         <xs:attribute name="symbol" type="time-symbol"/>
         <xs:attribute name="separator" type="time-separator"/>
         </xs:complexType>
         <xs:group name="time-signature">
         <xs:annotation>
         <xs:documentation>Time signatures are represented by the beats element for the numerator and the beat-type element for the denominator.</xs:documentation>
         </xs:annotation>
         <xs:sequence>
         <xs:element name="beats" type="xs:string">
         <xs:annotation>
         <xs:documentation>The beats element indicates the number of beats, as found in the numerator of a time signature.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:element name="beat-type" type="xs:string">
         <xs:annotation>
         <xs:documentation>The beat-type element indicates the beat unit, as found in the denominator of a time signature.</xs:documentation>
         </xs:annotation>
         </xs:element>
         </xs:sequence>
         </xs:group>
         */
        
        struct InterchangeableAttributes;
        using InterchangeableAttributesPtr = std::shared_ptr<InterchangeableAttributes>;
        
        struct InterchangeableAttributes : public AttributesInterface
        {
        public:
            InterchangeableAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::TimeSymbol symbol;
            types::TimeSeparator separator;
            bool hasSymbol;
            bool hasSeparator;
        };
        
        class Interchangeable;
        using InterchangeablePtr = std::shared_ptr<Interchangeable>;
        using InterchangeableUPtr = std::unique_ptr<Interchangeable>;
        using InterchangeableSet = std::vector<InterchangeablePtr>;
        using InterchangeableSetIter = InterchangeableSet::iterator;
        using InterchangeableSetIterConst = InterchangeableSet::const_iterator;
        inline InterchangeablePtr makeInterchangeable() { return std::make_shared<Interchangeable>(); }
        class Interchangeable : public ElementInterface
        {
        public:
            Interchangeable();
            virtual bool hasAttributes() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual bool hasContents() const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            InterchangeableAttributesPtr getAttributes() const;
            void setAttributes( const InterchangeableAttributesPtr& value );
            /* _________ TimeRelation minOccurs = 0, maxOccurs = 1 _________ */
            TimeRelationPtr getTimeRelation() const;
            void setTimeRelation( const TimeRelationPtr& value );
            bool getHasTimeRelation() const;
            void setHasTimeRelation( const bool value );
            /* _________ Beats minOccurs = 1, maxOccurs = 1 _________ */
            BeatsPtr getBeats() const;
            void setBeats( const BeatsPtr& value );
            /* _________ BeatType minOccurs = 1, maxOccurs = 1 _________ */
            BeatTypePtr getBeatType() const;
            void setBeatType( const BeatTypePtr& value );
        private:
            InterchangeableAttributesPtr myAttributes;
            TimeRelationPtr myTimeRelation;
            bool myHasTimeRelation;
            BeatsPtr myBeats;
            BeatTypePtr myBeatType;
        };
        /*
         3403<!--  ID = 3403 [3403] ------------------------->
         <!-- min=1 max=1 RequiredSingleOccurence  -->
         <!-- RecursiveSubElementCount = 3 -->
         <xs:element name="accordion-registration" type="accordion-registration"/>
         <xs:complexType name="accordion-registration">
         <xs:annotation>
         <xs:documentation>The accordion-registration type is use for accordion registration symbols. These are circular symbols divided horizontally into high, middle, and low sections that correspond to 4', 8', and 16' pipes. Each accordion-high, accordion-middle, and accordion-low element represents the presence of one or more dots in the registration diagram. An accordion-registration element needs to have at least one of the child elements present.</xs:documentation>
         </xs:annotation>
         <xs:sequence>
         <xs:element name="accordion-high" type="empty" minOccurs="0">
         <xs:annotation>
         <xs:documentation>The accordion-high element indicates the presence of a dot in the high (4') section of the registration symbol.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:element name="accordion-middle" type="accordion-middle" minOccurs="0">
         <xs:annotation>
         <xs:documentation>The accordion-middle element indicates the presence of 1 to 3 dots in the middle (8') section of the registration symbol.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:element name="accordion-low" type="empty" minOccurs="0">
         <xs:annotation>
         <xs:documentation>The accordion-low element indicates the presence of a dot in the low (16') section of the registration symbol.</xs:documentation>
         </xs:annotation>
         </xs:element>
         </xs:sequence>
         <xs:attributeGroup ref="print-style-align"/>
         </xs:complexType>
         */
        
        struct AccordionRegistrationAttributes;
        using AccordionRegistrationAttributesPtr = std::shared_ptr<AccordionRegistrationAttributes>;
        
        struct AccordionRegistrationAttributes : public AttributesInterface
        {
        public:
            AccordionRegistrationAttributes();
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
            types::LeftCenterRight halign;
            types::Valign valign;
            bool hasDefaultX;
            bool hasDefaultY;
            bool hasRelativeX;
            bool hasRelativeY;
            bool hasFontFamily;
            bool hasFontStyle;
            bool hasFontSize;
            bool hasFontWeight;
            bool hasColor;
            bool hasHalign;
            bool hasValign;
        };
        
        class AccordionRegistration;
        using AccordionRegistrationPtr = std::shared_ptr<AccordionRegistration>;
        using AccordionRegistrationUPtr = std::unique_ptr<AccordionRegistration>;
        using AccordionRegistrationSet = std::vector<AccordionRegistrationPtr>;
        using AccordionRegistrationSetIter = AccordionRegistrationSet::iterator;
        using AccordionRegistrationSetIterConst = AccordionRegistrationSet::const_iterator;
        inline AccordionRegistrationPtr makeAccordionRegistration() { return std::make_shared<AccordionRegistration>(); }
        class AccordionRegistration : public ElementInterface
        {
        public:
            AccordionRegistration();
            virtual bool hasAttributes() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual bool hasContents() const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            AccordionRegistrationAttributesPtr getAttributes() const;
            void setAttributes( const AccordionRegistrationAttributesPtr& value );
            /* _________ AccordionHigh minOccurs = 0, maxOccurs = 1 _________ */
            AccordionHighPtr getAccordionHigh() const;
            void setAccordionHigh( const AccordionHighPtr& value );
            bool getHasAccordionHigh() const;
            void setHasAccordionHigh( const bool value );
            /* _________ AccordionMiddle minOccurs = 0, maxOccurs = 1 _________ */
            AccordionMiddlePtr getAccordionMiddle() const;
            void setAccordionMiddle( const AccordionMiddlePtr& value );
            bool getHasAccordionMiddle() const;
            void setHasAccordionMiddle( const bool value );
            /* _________ AccordionLow minOccurs = 0, maxOccurs = 1 _________ */
            AccordionLowPtr getAccordionLow() const;
            void setAccordionLow( const AccordionLowPtr& value );
            bool getHasAccordionLow() const;
            void setHasAccordionLow( const bool value );
        private:
            AccordionRegistrationAttributesPtr myAttributes;
            AccordionHighPtr myAccordionHigh;
            bool myHasAccordionHigh;
            AccordionMiddlePtr myAccordionMiddle;
            bool myHasAccordionMiddle;
            AccordionLowPtr myAccordionLow;
            bool myHasAccordionLow;
        };
        
        /*
         2621
         <!--  ID = 2621 [2621] ------------------------->
         <!-- min=0 max=4294967295 ZeroOrMany  -->
         <!-- RecursiveSubElementCount = 7 -->
         <xs:element name="time" type="time" minOccurs="0" maxOccurs="unbounded">
         <xs:annotation>
         <xs:documentation>Time signatures are represented by the beats element for the numerator and the beat-type element for the denominator.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:complexType name="time">
         <xs:annotation>
         <xs:documentation>Time signatures are represented by the beats element for the numerator and the beat-type element for the denominator. The symbol attribute is used indicate common and cut time symbols as well as a single number display. Multiple pairs of beat and beat-type elements are used for composite time signatures with multiple denominators, such as 2/4 + 3/8. A composite such as 3+2/8 requires only one beat/beat-type pair.
         
         The print-object attribute allows a time signature to be specified but not printed, as is the case for excerpts from the middle of a score. The value is "yes" if not present. The optional number attribute refers to staff numbers within the part. If absent, the time signature applies to all staves in the part.</xs:documentation>
         </xs:annotation>
         <xs:choice>
         <xs:sequence>
         <xs:group ref="time-signature" maxOccurs="unbounded"/>
         <xs:element name="interchangeable" type="interchangeable" minOccurs="0"/>
         </xs:sequence>
         <xs:element name="senza-misura" type="xs:string">
         <xs:annotation>
         <xs:documentation>A senza-misura element explicitly indicates that no time signature is present. The optional element content indicates the symbol to be used, if any, such as an X. The time element's symbol attribute is not used when a senza-misura element is present.</xs:documentation>
         </xs:annotation>
         </xs:element>
         </xs:choice>
         <xs:attribute name="number" type="staff-number"/>
         <xs:attribute name="symbol" type="time-symbol"/>
         <xs:attribute name="separator" type="time-separator"/>
         <xs:attributeGroup ref="print-style-align"/>
         <xs:attributeGroup ref="print-object"/>
         </xs:complexType>
         <xs:group name="time-signature">
         <xs:annotation>
         <xs:documentation>Time signatures are represented by the beats element for the numerator and the beat-type element for the denominator.</xs:documentation>
         </xs:annotation>
         <xs:sequence>
         <xs:element name="beats" type="xs:string">
         <xs:annotation>
         <xs:documentation>The beats element indicates the number of beats, as found in the numerator of a time signature.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:element name="beat-type" type="xs:string">
         <xs:annotation>
         <xs:documentation>The beat-type element indicates the beat unit, as found in the denominator of a time signature.</xs:documentation>
         </xs:annotation>
         </xs:element>
         </xs:sequence>
         </xs:group>
         */
        class TimeSignature;
        using TimeSignaturePtr = std::shared_ptr<TimeSignature>;
        using TimeSignatureUPtr = std::unique_ptr<TimeSignature>;
        using TimeSignatureSet = std::vector<TimeSignaturePtr>;
        using TimeSignatureSetIter = TimeSignatureSet::iterator;
        using TimeSignatureSetIterConst = TimeSignatureSet::const_iterator;
        inline TimeSignaturePtr makeTimeSignature() { return std::make_shared<TimeSignature>(); }
        class TimeSignature : public ElementInterface
        {
        public:
            TimeSignature();
            virtual bool hasAttributes() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual bool hasContents() const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            BeatsPtr getBeats() const;
            void setBeats( const BeatsPtr& value );
            BeatTypePtr getBeatType() const;
            void setBeatType( const BeatTypePtr& value );
            InterchangeablePtr getInterchangeable() const;
            void setInterchangeable( const InterchangeablePtr& value );
            bool getHasInterchangeable() const;
            void setHasInterchangeable( const bool value );
        private:
            BeatsPtr myBeats;
            BeatTypePtr myBeatType;
            InterchangeablePtr myInterchangeable;
            bool myHasInterchangeable;
        };
        
        class TimeChoice;
        using TimeChoicePtr = std::shared_ptr<TimeChoice>;
        using TimeChoiceUPtr = std::unique_ptr<TimeChoice>;
        using TimeChoiceSet = std::vector<TimeChoicePtr>;
        using TimeChoiceSetIter = TimeChoiceSet::iterator;
        using TimeChoiceSetIterConst = TimeChoiceSet::const_iterator;
        inline TimeChoicePtr makeTimeChoice() { return std::make_shared<TimeChoice>(); }
        class TimeChoice : public ElementInterface
        {
        public:
            enum class Choice
            {
                timeSignature = 0,
                senzaMisura = 1
            };
            TimeChoice();
            virtual bool hasAttributes() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual bool hasContents() const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            Choice getChoice() const;
            void setChoice( const Choice value );
            TimeSignaturePtr getTimeSignature() const;
            void setTimeSignature( const TimeSignaturePtr& value );
            SenzaMisuraPtr getSenzaMisura() const;
            void setSenzaMisura( const SenzaMisuraPtr& value );
        private:
            Choice myChoice;
            TimeSignaturePtr myTimeSignature;
            SenzaMisuraPtr mySenzaMisura;
        };
    }
}