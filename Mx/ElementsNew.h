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
        
        struct TimeAttributes;
        using TimeAttributesPtr = std::shared_ptr<TimeAttributes>;
        
        struct TimeAttributes : public AttributesInterface
        {
        public:
            TimeAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::StaffNumber number;
            types::TimeSymbol symbol;
            types::TimeSeparator separator;
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
            types::YesNo printObject;
            bool hasNumber;
            bool hasSymbol;
            bool hasSeparator;
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
            bool hasPrintObject;
        };
        
        class Time;
        using TimePtr = std::shared_ptr<Time>;
        using TimeUPtr = std::unique_ptr<Time>;
        using TimeSet = std::vector<TimePtr>;
        using TimeSetIter = TimeSet::iterator;
        using TimeSetIterConst = TimeSet::const_iterator;
        inline TimePtr makeTime() { return std::make_shared<Time>(); }
        class Time : public ElementInterface
        {
        public:
            Time();
            virtual bool hasAttributes() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual bool hasContents() const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            TimeAttributesPtr getAttributes() const;
            void setAttributes( const TimeAttributesPtr& value );
            TimeChoicePtr getTimeChoice() const;
            void setTimeChoice( const TimeChoicePtr& value );
        private:
            TimeAttributesPtr myAttributes;
            TimeChoicePtr myChoice;
        };
        /*
         3481 [ equivalents 3481, 5393 ]
         <!--  ID = 3481 [3481, 5393] ------------------------->
         <xs:element name="string" type="string"/>
         <xs:complexType name="string">
         <xs:annotation>
         <xs:documentation>The string type is used with tablature notation, regular notation (where it is often circled), and chord diagrams. String numbers start with 1 for the highest string.</xs:documentation>
         </xs:annotation>
         <xs:simpleContent>
         <xs:extension base="string-number">
         <xs:attributeGroup ref="print-style"/>
         <xs:attributeGroup ref="placement"/>
         </xs:extension>
         </xs:simpleContent>
         </xs:complexType>
         */
        
        struct StringAttributes;
        using StringAttributesPtr = std::shared_ptr<StringAttributes>;
        
        struct StringAttributes : public AttributesInterface
        {
        public:
            StringAttributes();
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
        
        class String;
        using StringPtr = std::shared_ptr<String>;
        using StringUPtr = std::unique_ptr<String>;
        using StringSet = std::vector<StringPtr>;
        using StringSetIter = StringSet::iterator;
        using StringSetIterConst = StringSet::const_iterator;
        inline StringPtr makeString() { return std::make_shared<String>(); }
        inline StringPtr makeString( const types::StringNumber& value ) { return std::make_shared<String>( value ); }
		inline StringPtr makeString( types::StringNumber&& value ) { return std::make_shared<String>( std::move( value ) ); }
        
        class String : public ElementInterface
        {
        public:
            String();
            String( const types::StringNumber& value );
            virtual bool hasAttributes() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual bool hasContents() const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            StringAttributesPtr getAttributes() const;
            void setAttributes( const StringAttributesPtr& value );
            types::StringNumber getValue() const;
            void setValue( const types::StringNumber& value );
        private:
            StringAttributesPtr myAttributes;
            types::StringNumber myValue;
        };
        /*
         3455
         <!--  ID = 3455 [3455] ------------------------->
         <!-- min=1 max=4294967295 OneOrMMany  -->
         <!-- RecursiveSubElementCount = 4 -->
         <xs:element name="frame-note" type="frame-note" maxOccurs="unbounded"/>
         <xs:complexType name="frame-note">
         <xs:annotation>
         <xs:documentation>The frame-note type represents each note included in the frame. An open string will have a fret value of 0, while a muted string will not be associated with a frame-note element.</xs:documentation>
         </xs:annotation>
         <xs:sequence>
         <xs:element name="string" type="string"/>
         <xs:element name="fret" type="fret"/>
         <xs:element name="fingering" type="fingering" minOccurs="0"/>
         <xs:element name="barre" type="barre" minOccurs="0"/>
         </xs:sequence>
         </xs:complexType>
         */
        
        class FrameNote;
        using FrameNotePtr = std::shared_ptr<FrameNote>;
        using FrameNoteUPtr = std::unique_ptr<FrameNote>;
        using FrameNoteSet = std::vector<FrameNotePtr>;
        using FrameNoteSetIter = FrameNoteSet::iterator;
        using FrameNoteSetIterConst = FrameNoteSet::const_iterator;
        inline FrameNotePtr makeFrameNote() { return std::make_shared<FrameNote>(); }
        class FrameNote : public ElementInterface
        {
        public:
            FrameNote();
            virtual bool hasAttributes() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual bool hasContents() const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            /* _________ String minOccurs = 1, maxOccurs = 1 _________ */
            StringPtr getString() const;
            void setString( const StringPtr& value );
            /* _________ Fret minOccurs = 1, maxOccurs = 1 _________ */
            FretPtr getFret() const;
            void setFret( const FretPtr& value );
            /* _________ Fingering minOccurs = 0, maxOccurs = 1 _________ */
            FingeringPtr getFingering() const;
            void setFingering( const FingeringPtr& value );
            bool getHasFingering() const;
            void setHasFingering( const bool value );
            /* _________ Barre minOccurs = 0, maxOccurs = 1 _________ */
            BarrePtr getBarre() const;
            void setBarre( const BarrePtr& value );
            bool getHasBarre() const;
            void setHasBarre( const bool value );
        private:
            StringPtr myString;
            FretPtr myFret;
            FingeringPtr myFingering;
            bool myHasFingering;
            BarrePtr myBarre;
            bool myHasBarre;
        };
        /*
         3524
         <!--  ID = 3524 [3524] ------------------------->
         <!-- min=0 max=1 OptionalSingleOccurrence  -->
         <!-- RecursiveSubElementCount = 8 -->
         <xs:element name="frame" type="frame" minOccurs="0"/>
         <xs:complexType name="frame">
         <xs:annotation>
         <xs:documentation>The frame type represents a frame or fretboard diagram used together with a chord symbol. The representation is based on the NIFF guitar grid with additional information. The frame type's unplayed attribute indicates what to display above a string that has no associated frame-note element. Typical values are x and the empty string. If the attribute is not present, the display of the unplayed string is application-defined.</xs:documentation>
         </xs:annotation>
         <xs:sequence>
         <xs:element name="frame-strings" type="xs:positiveInteger">
         <xs:annotation>
         <xs:documentation>The frame-strings element gives the overall size of the frame in vertical lines (strings).</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:element name="frame-frets" type="xs:positiveInteger">
         <xs:annotation>
         <xs:documentation>The frame-frets element gives the overall size of the frame in horizontal spaces (frets).</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:element name="first-fret" type="first-fret" minOccurs="0"/>
         <xs:element name="frame-note" type="frame-note" maxOccurs="unbounded"/>
         </xs:sequence>
         <xs:attributeGroup ref="position"/>
         <xs:attributeGroup ref="color"/>
         <xs:attributeGroup ref="halign"/>
         <xs:attributeGroup ref="valign-image"/>
         <xs:attribute name="height" type="tenths"/>
         <xs:attribute name="width" type="tenths"/>
         <xs:attribute name="unplayed" type="xs:token"/>
         </xs:complexType>
         */
        
        struct FrameAttributes;
        using FrameAttributesPtr = std::shared_ptr<FrameAttributes>;
        
        struct FrameAttributes : public AttributesInterface
        {
        public:
            FrameAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::TenthsValue defaultX;
            types::TenthsValue defaultY;
            types::TenthsValue relativeX;
            types::TenthsValue relativeY;
            types::Color color;
            types::LeftCenterRight halign;
            types::ValignImage valign;
            types::TenthsValue height;
            types::TenthsValue width;
            types::XsToken unplayed;
            bool hasDefaultX;
            bool hasDefaultY;
            bool hasRelativeX;
            bool hasRelativeY;
            bool hasColor;
            bool hasHalign;
            bool hasValign;
            bool hasHeight;
            bool hasWidth;
            bool hasUnplayed;
        };
        
        class Frame;
        using FramePtr = std::shared_ptr<Frame>;
        using FrameUPtr = std::unique_ptr<Frame>;
        using FrameSet = std::vector<FramePtr>;
        using FrameSetIter = FrameSet::iterator;
        using FrameSetIterConst = FrameSet::const_iterator;
        inline FramePtr makeFrame() { return std::make_shared<Frame>(); }
        class Frame : public ElementInterface
        {
        public:
            Frame();
            virtual bool hasAttributes() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual bool hasContents() const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            FrameAttributesPtr getAttributes() const;
            void setAttributes( const FrameAttributesPtr& value );
            /* _________ FrameStrings minOccurs = 1, maxOccurs = 1 _________ */
            FrameStringsPtr getFrameStrings() const;
            void setFrameStrings( const FrameStringsPtr& value );
            /* _________ FrameFrets minOccurs = 1, maxOccurs = 1 _________ */
            FrameFretsPtr getFrameFrets() const;
            void setFrameFrets( const FrameFretsPtr& value );
            /* _________ FirstFret minOccurs = 0, maxOccurs = 1 _________ */
            FirstFretPtr getFirstFret() const;
            void setFirstFret( const FirstFretPtr& value );
            bool getHasFirstFret() const;
            void setHasFirstFret( const bool value );
            /* _________ FrameNote minOccurs = 1, maxOccurs = unbounded _________ */
            const FrameNoteSet& getFrameNoteSet() const;
            void addFrameNote( const FrameNotePtr& value );
            void removeFrameNote( const FrameNoteSetIterConst& value );
            void clearFrameNoteSet();
            FrameNotePtr getFrameNote( const FrameNoteSetIterConst& setIterator ) const;
        private:
            FrameAttributesPtr myAttributes;
            FrameStringsPtr myFrameStrings;
            FrameFretsPtr myFrameFrets;
            FirstFretPtr myFirstFret;
            bool myHasFirstFret;
            FrameNoteSet myFrameNoteSet;
        };
        /*
         3554
         <!--  ID = 3554 [3554] ------------------------->
         <!-- min=1 max=4294967295 OneOrMMany  -->
         <!-- RecursiveSubElementCount = 2 -->
         <xs:element name="pedal-tuning" type="pedal-tuning" maxOccurs="unbounded"/>
         <xs:complexType name="pedal-tuning">
         <xs:annotation>
         <xs:documentation>The pedal-tuning type specifies the tuning of a single harp pedal.</xs:documentation>
         </xs:annotation>
         <xs:sequence>
         <xs:element name="pedal-step" type="step">
         <xs:annotation>
         <xs:documentation>The pedal-step element defines the pitch step for a single harp pedal.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:element name="pedal-alter" type="semitones">
         <xs:annotation>
         <xs:documentation>The pedal-alter element defines the chromatic alteration for a single harp pedal.</xs:documentation>
         </xs:annotation>
         </xs:element>
         </xs:sequence>
         </xs:complexType>
         */
        
        class PedalTuning;
        using PedalTuningPtr = std::shared_ptr<PedalTuning>;
        using PedalTuningUPtr = std::unique_ptr<PedalTuning>;
        using PedalTuningSet = std::vector<PedalTuningPtr>;
        using PedalTuningSetIter = PedalTuningSet::iterator;
        using PedalTuningSetIterConst = PedalTuningSet::const_iterator;
        inline PedalTuningPtr makePedalTuning() { return std::make_shared<PedalTuning>(); }
        class PedalTuning : public ElementInterface
        {
        public:
            PedalTuning();
            virtual bool hasAttributes() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual bool hasContents() const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            /* _________ PedalStep minOccurs = 1, maxOccurs = 1 _________ */
            PedalStepPtr getPedalStep() const;
            void setPedalStep( const PedalStepPtr& value );
            /* _________ PedalAlter minOccurs = 1, maxOccurs = 1 _________ */
            PedalAlterPtr getPedalAlter() const;
            void setPedalAlter( const PedalAlterPtr& value );
        private:
            PedalStepPtr myPedalStep;
            PedalAlterPtr myPedalAlter;
        };
        /*
         3373
         <!--  ID = 3373 [3373] ------------------------->
         <!-- min=1 max=1 RequiredSingleOccurence  -->
         <!-- RecursiveSubElementCount = 3 -->
         <xs:element name="harp-pedals" type="harp-pedals"/>
         <xs:complexType name="harp-pedals">
         <xs:annotation>
         <xs:documentation>The harp-pedals type is used to create harp pedal diagrams. The pedal-step and pedal-alter elements use the same values as the step and alter elements. For easiest reading, the pedal-tuning elements should follow standard harp pedal order, with pedal-step values of D, C, B, E, F, G, and A.</xs:documentation>
         </xs:annotation>
         <xs:sequence>
         <xs:element name="pedal-tuning" type="pedal-tuning" maxOccurs="unbounded"/>
         </xs:sequence>
         <xs:attributeGroup ref="print-style-align"/>
         </xs:complexType>
         */
        struct HarpPedalsAttributes;
        using HarpPedalsAttributesPtr = std::shared_ptr<HarpPedalsAttributes>;
        
        struct HarpPedalsAttributes : public AttributesInterface
        {
        public:
            HarpPedalsAttributes();
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
        
        class HarpPedals;
        using HarpPedalsPtr = std::shared_ptr<HarpPedals>;
        using HarpPedalsUPtr = std::unique_ptr<HarpPedals>;
        using HarpPedalsSet = std::vector<HarpPedalsPtr>;
        using HarpPedalsSetIter = HarpPedalsSet::iterator;
        using HarpPedalsSetIterConst = HarpPedalsSet::const_iterator;
        inline HarpPedalsPtr makeHarpPedals() { return std::make_shared<HarpPedals>(); }
        class HarpPedals : public ElementInterface
        {
        public:
            HarpPedals();
            virtual bool hasAttributes() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual bool hasContents() const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            HarpPedalsAttributesPtr getAttributes() const;
            void setAttributes( const HarpPedalsAttributesPtr& value );
            /* _________ PedalTuning minOccurs = 1, maxOccurs = unbounded _________ */
            const PedalTuningSet& getPedalTuningSet() const;
            void addPedalTuning( const PedalTuningPtr& value );
            void removePedalTuning( const PedalTuningSetIterConst& value );
            void clearPedalTuningSet();
            PedalTuningPtr getPedalTuning( const PedalTuningSetIterConst& setIterator ) const;
        private:
            HarpPedalsAttributesPtr myAttributes;
            PedalTuningSet myPedalTuningSet;
        };
        /*
         3682
         
         
         <!--  ID = 3682 [3682] ------------------------->
         <!-- min=0 max=1 OptionalSingleOccurrence  -->
         <!-- MsItemElementKind::composite -->
         <!-- RecursiveSubElementCount = 4 -->
         <!-- All Sub Elements Are Implemented: true -->
         <xs:element name="metronome-tuplet" type="metronome-tuplet" minOccurs="0"/>
         <xs:complexType name="metronome-tuplet">
         <xs:annotation>
         <xs:documentation>The metronome-tuplet type uses the same element structure as the time-modification element along with some attributes from the tuplet element.</xs:documentation>
         </xs:annotation>
         <xs:complexContent>
         <xs:extension base="time-modification">
         <xs:attribute name="type" type="start-stop" use="required"/>
         <xs:attribute name="bracket" type="yes-no"/>
         <xs:attribute name="show-number" type="show-tuplet"/>
         </xs:extension>
         </xs:complexContent>
         </xs:complexType>
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
         </xs:complexType>
         */
        
        
        
        class TimeModificationNormalTypeNormalDot;
        using TimeModificationNormalTypeNormalDotPtr = std::shared_ptr<TimeModificationNormalTypeNormalDot>;
        using TimeModificationNormalTypeNormalDotUPtr = std::unique_ptr<TimeModificationNormalTypeNormalDot>;
        using TimeModificationNormalTypeNormalDotSet = std::vector<TimeModificationNormalTypeNormalDotPtr>;
        using TimeModificationNormalTypeNormalDotSetIter = TimeModificationNormalTypeNormalDotSet::iterator;
        using TimeModificationNormalTypeNormalDotSetIterConst = TimeModificationNormalTypeNormalDotSet::const_iterator;
        inline TimeModificationNormalTypeNormalDotPtr makeTimeModificationNormalTypeNormalDot() { return std::make_shared<TimeModificationNormalTypeNormalDot>(); }
        class TimeModificationNormalTypeNormalDot : public ElementInterface
        {
        public:
            TimeModificationNormalTypeNormalDot();
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
        
        struct MetronomeTupletAttributes;
        using MetronomeTupletAttributesPtr = std::shared_ptr<MetronomeTupletAttributes>;
        
        struct MetronomeTupletAttributes : public AttributesInterface
        {
        public:
            MetronomeTupletAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::StartStop type;
            types::YesNo bracket;
            types::ShowTuplet showNumber;
            const 	bool hasType;
            bool hasBracket;
            bool hasShowNumber;
        };
        
        class MetronomeTuplet;
        using MetronomeTupletPtr = std::shared_ptr<MetronomeTuplet>;
        using MetronomeTupletUPtr = std::unique_ptr<MetronomeTuplet>;
        using MetronomeTupletSet = std::vector<MetronomeTupletPtr>;
        using MetronomeTupletSetIter = MetronomeTupletSet::iterator;
        using MetronomeTupletSetIterConst = MetronomeTupletSet::const_iterator;
        inline MetronomeTupletPtr makeMetronomeTuplet() { return std::make_shared<MetronomeTuplet>(); }
        
        class MetronomeTuplet : public ElementInterface
        {
        public:
            MetronomeTuplet();
            virtual bool hasAttributes() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual bool hasContents() const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            MetronomeTupletAttributesPtr getAttributes() const;
            void setAttributes( const MetronomeTupletAttributesPtr& value );
            /* _________ ActualNotes minOccurs = 1, maxOccurs = 1 _________ */
            ActualNotesPtr getActualNotes() const;
            void setActualNotes( const ActualNotesPtr& value );
            /* _________ NormalNotes minOccurs = 1, maxOccurs = 1 _________ */
            NormalNotesPtr getNormalNotes() const;
            void setNormalNotes( const NormalNotesPtr& value );
            /* _________ TimeModificationNormalTypeNormalDot minOccurs = 0, maxOccurs = 1 _________ */
            TimeModificationNormalTypeNormalDotPtr getTimeModificationNormalTypeNormalDot() const;
            void setTimeModificationNormalTypeNormalDot( const TimeModificationNormalTypeNormalDotPtr& value );
            bool getHasTimeModificationNormalTypeNormalDot() const;
            void setHasTimeModificationNormalTypeNormalDot( const bool value );
        private:
            MetronomeTupletAttributesPtr myAttributes;
            ActualNotesPtr myActualNotes;
            NormalNotesPtr myNormalNotes;
            TimeModificationNormalTypeNormalDotPtr myTimeModificationNormalTypeNormalDot;
            bool myHasTimeModificationNormalTypeNormalDot;
        };
        /*
         3627 [ equivalents 3627, 3638 ]
         <!--  ID = 3627 [3627, 3638] ------------------------->
         <!-- min=1 max=4294967295 OneOrMMany  -->
         <xs:element name="metronome-note" type="metronome-note" maxOccurs="unbounded"/>
         <xs:complexType name="metronome-note">
         <xs:annotation>
         <xs:documentation>The metronome-note type defines the appearance of a note within a metric relationship mark.</xs:documentation>
         </xs:annotation>
         <xs:sequence>
         <xs:element name="metronome-type" type="note-type-value">
         <xs:annotation>
         <xs:documentation>The metronome-type element works like the type element in defining metric relationships.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:element name="metronome-dot" type="empty" minOccurs="0" maxOccurs="unbounded">
         <xs:annotation>
         <xs:documentation>The metronome-dot element works like the dot element in defining metric relationships.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:element name="metronome-beam" type="metronome-beam" minOccurs="0" maxOccurs="unbounded"/>
         <xs:element name="metronome-tuplet" type="metronome-tuplet" minOccurs="0"/>
         </xs:sequence>
         </xs:complexType>
         */
        
        class MetronomeNote;
        using MetronomeNotePtr = std::shared_ptr<MetronomeNote>;
        using MetronomeNoteUPtr = std::unique_ptr<MetronomeNote>;
        using MetronomeNoteSet = std::vector<MetronomeNotePtr>;
        using MetronomeNoteSetIter = MetronomeNoteSet::iterator;
        using MetronomeNoteSetIterConst = MetronomeNoteSet::const_iterator;
        inline MetronomeNotePtr makeMetronomeNote() { return std::make_shared<MetronomeNote>(); }
        class MetronomeNote : public ElementInterface
        {
        public:
            MetronomeNote();
            virtual bool hasAttributes() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual bool hasContents() const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            /* _________ MetronomeType minOccurs = 1, maxOccurs = 1 _________ */
            MetronomeTypePtr getMetronomeType() const;
            void setMetronomeType( const MetronomeTypePtr& value );
            /* _________ MetronomeDot minOccurs = 0, maxOccurs = unbounded _________ */
            const MetronomeDotSet& getMetronomeDotSet() const;
            void addMetronomeDot( const MetronomeDotPtr& value );
            void removeMetronomeDot( const MetronomeDotSetIterConst& value );
            void clearMetronomeDotSet();
            MetronomeDotPtr getMetronomeDot( const MetronomeDotSetIterConst& setIterator ) const;
            /* _________ MetronomeBeam minOccurs = 0, maxOccurs = unbounded _________ */
            const MetronomeBeamSet& getMetronomeBeamSet() const;
            void addMetronomeBeam( const MetronomeBeamPtr& value );
            void removeMetronomeBeam( const MetronomeBeamSetIterConst& value );
            void clearMetronomeBeamSet();
            MetronomeBeamPtr getMetronomeBeam( const MetronomeBeamSetIterConst& setIterator ) const;
            /* _________ MetronomeTuplet minOccurs = 0, maxOccurs = 1 _________ */
            MetronomeTupletPtr getMetronomeTuplet() const;
            void setMetronomeTuplet( const MetronomeTupletPtr& value );
            bool getHasMetronomeTuplet() const;
            void setHasMetronomeTuplet( const bool value );
        private:
            MetronomeTypePtr myMetronomeType;
            MetronomeDotSet myMetronomeDotSet;
            MetronomeBeamSet myMetronomeBeamSet;
            MetronomeTupletPtr myMetronomeTuplet;
            bool myHasMetronomeTuplet;
        };
        
        class BeatUnitGroup;
        using BeatUnitGroupPtr = std::shared_ptr<BeatUnitGroup>;
        using BeatUnitGroupUPtr = std::unique_ptr<BeatUnitGroup>;
        using BeatUnitGroupSet = std::vector<BeatUnitGroupPtr>;
        using BeatUnitGroupSetIter = BeatUnitGroupSet::iterator;
        using BeatUnitGroupSetIterConst = BeatUnitGroupSet::const_iterator;
        inline BeatUnitGroupPtr makeBeatUnitGroup() { return std::make_shared<BeatUnitGroup>(); }
        class BeatUnitGroup : public ElementInterface
        {
        public:
            BeatUnitGroup();
            virtual bool hasAttributes() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual bool hasContents() const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            /* _________ BeatUnit minOccurs = 1, maxOccurs = 1 _________ */
            BeatUnitPtr getBeatUnit() const;
            void setBeatUnit( const BeatUnitPtr& value );
            /* _________ BeatUnitDot minOccurs = 0, maxOccurs = unbounded _________ */
            const BeatUnitDotSet& getBeatUnitDotSet() const;
            void addBeatUnitDot( const BeatUnitDotPtr& value );
            void removeBeatUnitDot( const BeatUnitDotSetIterConst& setIterator );
            void clearBeatUnitDotSet();
        private:
            BeatUnitPtr myBeatUnit;
            BeatUnitDotSet myBeatUnitDotSet;
        };
        
        class MetronomeRelationGroup;
        using MetronomeRelationGroupPtr = std::shared_ptr<MetronomeRelationGroup>;
        using MetronomeRelationGroupUPtr = std::unique_ptr<MetronomeRelationGroup>;
        using MetronomeRelationGroupSet = std::vector<MetronomeRelationGroupPtr>;
        using MetronomeRelationGroupSetIter = MetronomeRelationGroupSet::iterator;
        using MetronomeRelationGroupSetIterConst = MetronomeRelationGroupSet::const_iterator;
        inline MetronomeRelationGroupPtr makeMetronomeRelationGroup() { return std::make_shared<MetronomeRelationGroup>(); }
        class MetronomeRelationGroup : public ElementInterface
        {
        public:
            MetronomeRelationGroup();
            virtual bool hasAttributes() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual bool hasContents() const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            /* _________ MetronomeRelation minOccurs = 1, maxOccurs = 1 _________ */
            MetronomeRelationPtr getMetronomeRelation() const;
            void setMetronomeRelation( const MetronomeRelationPtr& value );
            /* _________ MetronomeNote minOccurs = 1, maxOccurs = 1 _________ */
            MetronomeNotePtr getMetronomeNote() const;
            void setMetronomeNote( const MetronomeNotePtr& value );
        private:
            MetronomeRelationPtr myMetronomeRelation;
            MetronomeNotePtr myMetronomeNote;
        };
        
        class NoteRelationNote;
        using NoteRelationNotePtr = std::shared_ptr<NoteRelationNote>;
        using NoteRelationNoteUPtr = std::unique_ptr<NoteRelationNote>;
        using NoteRelationNoteSet = std::vector<NoteRelationNotePtr>;
        using NoteRelationNoteSetIter = NoteRelationNoteSet::iterator;
        using NoteRelationNoteSetIterConst = NoteRelationNoteSet::const_iterator;
        inline NoteRelationNotePtr makeNoteRelationNote() { return std::make_shared<NoteRelationNote>(); }
        class NoteRelationNote : public ElementInterface
        {
        public:
            NoteRelationNote();
            virtual bool hasAttributes() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual bool hasContents() const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            /* _________ MetronomeNote minOccurs = 1, maxOccurs = unbounded _________ */
            const MetronomeNoteSet& getMetronomeNoteSet() const;
            void addMetronomeNote( const MetronomeNotePtr& value );
            void removeMetronomeNote( const MetronomeNoteSetIterConst& setIterator );
            void clearMetronomeNoteSet();
            /* _________ MetronomeRelationGroup minOccurs = 0, maxOccurs = 1 _________ */
            MetronomeRelationGroupPtr getMetronomeRelationGroup() const;
            void setMetronomeRelationGroup( const MetronomeRelationGroupPtr& value );
            bool getHasMetronomeRelationGroup() const;
            void setHasMetronomeRelationGroup( const bool value );
        private:
            MetronomeNoteSet myMetronomeNoteSet;
            MetronomeRelationGroupPtr myMetronomeRelationGroup;
            bool myHasMetronomeRelationGroup;
        };
        
        class PerMinuteOrBeatUnitChoice;
        using PerMinuteOrBeatUnitChoicePtr = std::shared_ptr<PerMinuteOrBeatUnitChoice>;
        using PerMinuteOrBeatUnitChoiceUPtr = std::unique_ptr<PerMinuteOrBeatUnitChoice>;
        using PerMinuteOrBeatUnitChoiceSet = std::vector<PerMinuteOrBeatUnitChoicePtr>;
        using PerMinuteOrBeatUnitChoiceSetIter = PerMinuteOrBeatUnitChoiceSet::iterator;
        using PerMinuteOrBeatUnitChoiceSetIterConst = PerMinuteOrBeatUnitChoiceSet::const_iterator;
        inline PerMinuteOrBeatUnitChoicePtr makePerMinuteOrBeatUnitChoice() { return std::make_shared<PerMinuteOrBeatUnitChoice>(); }
        class PerMinuteOrBeatUnitChoice : public ElementInterface
        {
        public:
            enum class Choice
            {
                perMinute = 0,
                beatUnitGroup = 1
            };
            PerMinuteOrBeatUnitChoice();
            virtual bool hasAttributes() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual bool hasContents() const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            PerMinuteOrBeatUnitChoice::Choice getChoice() const;
            void setChoice( const PerMinuteOrBeatUnitChoice::Choice value );
            PerMinutePtr getPerMinute() const;
            void setPerMinute( const PerMinutePtr& value );
            BeatUnitGroupPtr getBeatUnitGroup() const;
            void setBeatUnitGroup( const BeatUnitGroupPtr& value );
        private:
            Choice myChoice;
            PerMinutePtr myPerMinute;
            BeatUnitGroupPtr myBeatUnitGroup;
        };
        
        class BeatUnitPer;
        using BeatUnitPerPtr = std::shared_ptr<BeatUnitPer>;
        using BeatUnitPerUPtr = std::unique_ptr<BeatUnitPer>;
        using BeatUnitPerSet = std::vector<BeatUnitPerPtr>;
        using BeatUnitPerSetIter = BeatUnitPerSet::iterator;
        using BeatUnitPerSetIterConst = BeatUnitPerSet::const_iterator;
        inline BeatUnitPerPtr makeBeatUnitPer() { return std::make_shared<BeatUnitPer>(); }
        class BeatUnitPer : public ElementInterface
        {
        public:
            BeatUnitPer();
            virtual bool hasAttributes() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual bool hasContents() const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            BeatUnitGroupPtr getBeatUnitGroup() const;
            void setBeatUnitGroup( const BeatUnitGroupPtr& value );
            PerMinuteOrBeatUnitChoicePtr getPerMinuteOrBeatUnitChoice() const;
            void setPerMinuteOtBeatUnitChoice( const PerMinuteOrBeatUnitChoicePtr& value );
        private:
            BeatUnitGroupPtr myBeatUnitGroup;
            PerMinuteOrBeatUnitChoicePtr myPerMinuteOrBeatUnitChoice;
        };
        
        
        
        class BeatUnitPerOrNoteRelationNoteChoice;
        using BeatUnitPerOrNoteRelationNoteChoicePtr = std::shared_ptr<BeatUnitPerOrNoteRelationNoteChoice>;
        using BeatUnitPerOrNoteRelationNoteChoiceUPtr = std::unique_ptr<BeatUnitPerOrNoteRelationNoteChoice>;
        using BeatUnitPerOrNoteRelationNoteChoiceSet = std::vector<BeatUnitPerOrNoteRelationNoteChoicePtr>;
        using BeatUnitPerOrNoteRelationNoteChoiceSetIter = BeatUnitPerOrNoteRelationNoteChoiceSet::iterator;
        using BeatUnitPerOrNoteRelationNoteChoiceSetIterConst = BeatUnitPerOrNoteRelationNoteChoiceSet::const_iterator;
        inline BeatUnitPerOrNoteRelationNoteChoicePtr makeBeatUnitPerOrNoteRelationNoteChoice() { return std::make_shared<BeatUnitPerOrNoteRelationNoteChoice>(); }
        class BeatUnitPerOrNoteRelationNoteChoice : public ElementInterface
        {
        public:
            enum class Choice
            {
                beatUnitPer = 0,
                noteRelationNote = 1
            };
            BeatUnitPerOrNoteRelationNoteChoice();
            virtual bool hasAttributes() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual bool hasContents() const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            BeatUnitPerOrNoteRelationNoteChoice::Choice getChoice() const;
            void setChoice( const BeatUnitPerOrNoteRelationNoteChoice::Choice value );
            BeatUnitPerPtr getBeatUnitPer() const;
            void setBeatUnitPer( const BeatUnitPerPtr& value );
            NoteRelationNotePtr getNoteRelationNote() const;
            void setNoteRelationNote( const NoteRelationNotePtr& value );
        private:
            Choice myChoice;
            BeatUnitPerPtr myBeatUnitPer;
            NoteRelationNotePtr myNoteRelationNote;
        };
        /*
        <!--  ID = 3367 [3367] ------------------------->
        <!-- min=1 max=1 RequiredSingleOccurence  -->
        <!-- MsItemElementKind::composite -->
        <!-- RecursiveSubElementCount = 24 -->
        <!-- All Sub Elements Are Implemented: true -->
        <xs:element name="metronome" type="metronome"/>
        <xs:complexType name="metronome">
        <xs:annotation>
		<xs:documentation>The metronome type represents metronome marks and other metric relationships. The beat-unit group and per-minute element specify regular metronome marks. The metronome-note and metronome-relation elements allow for the specification of more complicated metric relationships, such as swing tempo marks where two eighths are equated to a quarter note / eighth note triplet. The parentheses attribute indicates whether or not to put the metronome mark in parentheses; its value is no if not specified.</xs:documentation>
            </xs:annotation>
            <xs:choice> <!-- BeatUnitPerOrNoteRelationNoteChoice -->
            <xs:sequence> <!-- BeatUnitPer -->
			<xs:group ref="beat-unit"/> <!-- BeatUnitGroup -->
			<xs:choice> <!-- PerMinuteOrBeatUnitChoice -->
            <xs:element name="per-minute" type="per-minute"/>
            <xs:group ref="beat-unit"/> <!-- BeatUnitGroup -->
			</xs:choice>
            </xs:sequence>
            <xs:sequence> <!-- NoteRelationNote -->
			<xs:element name="metronome-note" type="metronome-note" maxOccurs="unbounded"/>
			<xs:sequence minOccurs="0"> <!-- MetronomeRelationGroup -->
            <xs:element name="metronome-relation" type="xs:string">
            <xs:annotation>
            <xs:documentation>The metronome-relation element describes the relationship symbol that goes between the two sets of metronome-note elements. The currently allowed value is equals, but this may expand in future versions. If the element is empty, the equals value is used.</xs:documentation>
            </xs:annotation>
            </xs:element>
            <xs:element name="metronome-note" type="metronome-note" maxOccurs="unbounded"/>
			</xs:sequence>
            </xs:sequence>
            </xs:choice>
            <xs:attributeGroup ref="print-style-align"/>
            <xs:attributeGroup ref="justify"/>
            <xs:attribute name="parentheses" type="yes-no"/>
            </xs:complexType>
            <xs:group name="beat-unit">
            <xs:annotation>
            <xs:documentation>The beat-unit group combines elements used repeatedly in the metronome element to specify a note within a metronome mark.</xs:documentation>
            </xs:annotation>
            <xs:sequence>
            <xs:element name="beat-unit" type="note-type-value">
			<xs:annotation>
            <xs:documentation>The beat-unit element indicates the graphical note type to use in a metronome mark.</xs:documentation>
			</xs:annotation>
            </xs:element>
            <xs:element name="beat-unit-dot" type="empty" minOccurs="0" maxOccurs="unbounded">
			<xs:annotation>
            <xs:documentation>The beat-unit-dot element is used to specify any augmentation dots for a metronome mark note.</xs:documentation>
			</xs:annotation>
            </xs:element>
            </xs:sequence>
            </xs:group> */
        
        struct MetronomeAttributes;
        using MetronomeAttributesPtr = std::shared_ptr<MetronomeAttributes>;
            
        struct MetronomeAttributes : public AttributesInterface
        {
        public:
            MetronomeAttributes();
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
            types::LeftCenterRight justify;
            types::YesNo parentheses;
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
            bool hasJustify;
            bool hasParentheses;
        };
        
        class Metronome;
        using MetronomePtr = std::shared_ptr<Metronome>;
        using MetronomeUPtr = std::unique_ptr<Metronome>;
        using MetronomeSet = std::vector<MetronomePtr>;
        using MetronomeSetIter = MetronomeSet::iterator;
        using MetronomeSetIterConst = MetronomeSet::const_iterator;
        inline MetronomePtr makeMetronome() { return std::make_shared<Metronome>(); }
        class Metronome : public ElementInterface
        {
        public:
            Metronome();
            virtual bool hasAttributes() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual bool hasContents() const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            MetronomeAttributesPtr getAttributes() const;
            void setAttributes( const MetronomeAttributesPtr& value );
            BeatUnitPerOrNoteRelationNoteChoicePtr getBeatUnitPerOrNoteRelationNoteChoice() const;
            void setBeatUnitPerOrNoteRelationNoteChoice( const BeatUnitPerOrNoteRelationNoteChoicePtr& value );
        private:
            MetronomeAttributesPtr myAttributes;
            BeatUnitPerOrNoteRelationNoteChoicePtr myBeatUnitPerOrNoteRelationNoteChoice;
        };
        /*
         3812
         <!--  ID = 3812 [3812] ------------------------->
         <!-- min=1 max=1 RequiredSingleOccurence  -->
         <!-- RecursiveSubElementCount = 2 -->
         <xs:element name="stick" type="stick"/>
         <xs:complexType name="stick">
         <xs:annotation>
         <xs:documentation>The stick type represents pictograms where the material of the stick, mallet, or beater is included.</xs:documentation>
         </xs:annotation>
         <xs:sequence>
         <xs:element name="stick-type" type="stick-type"/>
         <xs:element name="stick-material" type="stick-material"/>
         </xs:sequence>
         <xs:attribute name="tip" type="tip-direction"/>
         </xs:complexType> */
        
        struct StickAttributes;
        using StickAttributesPtr = std::shared_ptr<StickAttributes>;
        
        struct StickAttributes : public AttributesInterface
        {
        public:
            StickAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::TipDirection tip;
            bool hasTip;
        };
        
        class Stick;
        using StickPtr = std::shared_ptr<Stick>;
        using StickUPtr = std::unique_ptr<Stick>;
        using StickSet = std::vector<StickPtr>;
        using StickSetIter = StickSet::iterator;
        using StickSetIterConst = StickSet::const_iterator;
        inline StickPtr makeStick() { return std::make_shared<Stick>(); }
        class Stick : public ElementInterface
        {
        public:
            Stick();
            virtual bool hasAttributes() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual bool hasContents() const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            StickAttributesPtr getAttributes() const;
            void setAttributes( const StickAttributesPtr& value );
            /* _________ StickType minOccurs = 1, maxOccurs = 1 _________ */
            StickTypePtr getStickType() const;
            void setStickType( const StickTypePtr& value );
            /* _________ StickMaterial minOccurs = 1, maxOccurs = 1 _________ */
            StickMaterialPtr getStickMaterial() const;
            void setStickMaterial( const StickMaterialPtr& value );
        private:
            StickAttributesPtr myAttributes;
            StickTypePtr myStickType;
            StickMaterialPtr myStickMaterial;
        };
        /*
         <!--  ID = 3849 [3849] ------------------------->
         <!-- min=0 max=1 OptionalSingleOccurrence  -->
         <!-- MsItemElementKind::composite -->
         <!-- RecursiveSubElementCount = 1 -->
         <!-- All Sub Elements Are Implemented: true -->
         <xs:element name="measure-layout" type="measure-layout" minOccurs="0"/>
         <xs:complexType name="measure-layout">
         <xs:annotation>
         <xs:documentation>The measure-layout type includes the horizontal distance from the previous measure.</xs:documentation>
         </xs:annotation>
         <xs:sequence>
         <xs:element name="measure-distance" type="tenths" minOccurs="0">
         <xs:annotation>
         <xs:documentation>The measure-distance element specifies the horizontal distance from the previous measure. This value is only used for systems where there is horizontal whitespace in the middle of a system, as in systems with codas. To specify the measure width, use the width attribute of the measure element.</xs:documentation>
         </xs:annotation>
         </xs:element>
         </xs:sequence>
         </xs:complexType> */

        class MeasureLayout;
        using MeasureLayoutPtr = std::shared_ptr<MeasureLayout>;
        using MeasureLayoutUPtr = std::unique_ptr<MeasureLayout>;
        using MeasureLayoutSet = std::vector<MeasureLayoutPtr>;
        using MeasureLayoutSetIter = MeasureLayoutSet::iterator;
        using MeasureLayoutSetIterConst = MeasureLayoutSet::const_iterator;
        inline MeasureLayoutPtr makeMeasureLayout() { return std::make_shared<MeasureLayout>(); }
        class MeasureLayout : public ElementInterface
        {
        public:
            MeasureLayout();
            virtual bool hasAttributes() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual bool hasContents() const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            /* _________ MeasureDistance minOccurs = 0, maxOccurs = 1 _________ */
            MeasureDistancePtr getMeasureDistance() const;
            void setMeasureDistance( const MeasureDistancePtr& value );
            bool getHasMeasureDistance() const;
            void setHasMeasureDistance( const bool value );
        private:
            MeasureDistancePtr myMeasureDistance;
            bool myHasMeasureDistance;
        };
        /*
         <!--  ID = 3857 [3857, 5928] ------------------------->
         <!-- min=0 max=1 OptionalSingleOccurrence  -->
         <!-- MsItemElementKind::composite -->
         <!-- RecursiveSubElementCount = 2 -->
         <!-- All Sub Elements Are Implemented: true -->
         <xs:element name="part-name-display" type="name-display" minOccurs="0"/>
         <xs:complexType name="name-display">
         <xs:annotation>
         <xs:documentation>The name-display type is used for exact formatting of multi-font text in part and group names to the left of the system. The print-object attribute can be used to determine what, if anything, is printed at the start of each system. Enclosure for the display-text element is none by default. Language for the display-text element is Italian ("it") by default.</xs:documentation>
         </xs:annotation>
         <xs:sequence>
         <xs:choice minOccurs="0" maxOccurs="unbounded">
         <xs:element name="display-text" type="formatted-text"/>
         <xs:element name="accidental-text" type="accidental-text"/>
         </xs:choice>
         </xs:sequence>
         <xs:attributeGroup ref="print-object"/>
         </xs:complexType> */
        
        class DisplayTextOrAccidentalText;
        using DisplayTextOrAccidentalTextPtr = std::shared_ptr<DisplayTextOrAccidentalText>;
        using DisplayTextOrAccidentalTextUPtr = std::unique_ptr<DisplayTextOrAccidentalText>;
        using DisplayTextOrAccidentalTextSet = std::vector<DisplayTextOrAccidentalTextPtr>;
        using DisplayTextOrAccidentalTextSetIter = DisplayTextOrAccidentalTextSet::iterator;
        using DisplayTextOrAccidentalTextSetIterConst = DisplayTextOrAccidentalTextSet::const_iterator;
        inline DisplayTextOrAccidentalTextPtr makeDisplayTextOrAccidentalText() { return std::make_shared<DisplayTextOrAccidentalText>(); }
        class DisplayTextOrAccidentalText : public ElementInterface
        {
        public:
            enum class Choice
            {
                displayText = 1,
                accidentalText = 2
            };
            DisplayTextOrAccidentalText();
            virtual bool hasAttributes() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual bool hasContents() const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            DisplayTextOrAccidentalText::Choice getChoice() const;
            void setChoice( const DisplayTextOrAccidentalText::Choice value );
            DisplayTextPtr getDisplayText() const;
            void setDisplayText( const DisplayTextPtr& value );
            AccidentalTextPtr getAccidentalText() const;
            void setAccidentalText( const AccidentalTextPtr& value );
        private:
            Choice myChoice;
            DisplayTextPtr myDisplayText;
            AccidentalTextPtr myAccidentalText;
        };
        
        struct PartNameDisplayAttributes;
        using PartNameDisplayAttributesPtr = std::shared_ptr<PartNameDisplayAttributes>;
        
        struct PartNameDisplayAttributes : public AttributesInterface
        {
        public:
            PartNameDisplayAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::YesNo printObject;
            bool hasPrintObject;
        };
        
        class PartNameDisplay;
        using PartNameDisplayPtr = std::shared_ptr<PartNameDisplay>;
        using PartNameDisplayUPtr = std::unique_ptr<PartNameDisplay>;
        using PartNameDisplaySet = std::vector<PartNameDisplayPtr>;
        using PartNameDisplaySetIter = PartNameDisplaySet::iterator;
        using PartNameDisplaySetIterConst = PartNameDisplaySet::const_iterator;
        inline PartNameDisplayPtr makePartNameDisplay() { return std::make_shared<PartNameDisplay>(); }
        class PartNameDisplay : public ElementInterface
        {
        public:
            PartNameDisplay();
            virtual bool hasAttributes() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual bool hasContents() const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            PartNameDisplayAttributesPtr getAttributes() const;
            void setAttributes( const PartNameDisplayAttributesPtr& value );
            /* _________ DisplayTextOrAccidentalText minOccurs = 0, maxOccurs = unbounded _________ */
            const DisplayTextOrAccidentalTextSet& getDisplayTextOrAccidentalText() const;
            void addDisplayTextOrAccidentalText( const DisplayTextOrAccidentalTextPtr& value );
            void removeDisplayTextOrAccidentalText( const DisplayTextOrAccidentalTextSetIterConst& setIterator );
            void clearDisplayTextOrAccidentalTextSet();
            DisplayTextOrAccidentalTextPtr getDisplayTextOrAccidentalText( const DisplayTextOrAccidentalTextSetIterConst& setIterator ) const;
        private:
            PartNameDisplayAttributesPtr myAttributes;
            DisplayTextOrAccidentalTextSet myDisplayTextOrAccidentalTextSet;
        };
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