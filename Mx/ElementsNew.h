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
    }
}