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

namespace mx
{
    namespace e
    {
        struct DynamicsAttributes;
        using DynamicsAttributesPtr = std::shared_ptr<DynamicsAttributes>;
        
        struct DynamicsAttributes : public AttributesInterface
        {
        public:
            DynamicsAttributes();
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
            types::LeftCenterRight halign;
            types::AboveBelow placement;
            types::NumberOfLines underline;
            types::NumberOfLines overline;
            types::NumberOfLines lineThrough;
            types::EnclosureShape enclosure;
            bool hasDefaultX;
            bool hasDefaultY;
            bool hasRelativeX;
            bool hasRelativeY;
            bool hasFontFamily;
            bool hasFontStyle;
            bool hasFontSize;
            bool hasFontWeight;
            bool hasHalign;
            bool hasPlacement;
            bool hasUnderline;
            bool hasOverline;
            bool hasLineThrough;
            bool hasEnclosure;
        };
        
		class Dynamics;
		using DynamicsPtr = std::shared_ptr<Dynamics>;
		using DynamicsUPtr = std::unique_ptr<Dynamics>;
		using DynamicsSet = std::vector<DynamicsPtr>;
		using DynamicsSetIter = DynamicsSet::iterator;
		using DynamicsSetIterConst = DynamicsSet::const_iterator;
		inline DynamicsPtr makeDynamics() { return std::make_shared<Dynamics>(); }
        class Dynamics : public ElementInterface
        {
        public:
            Dynamics( const types::DynamicsValue& value );
            Dynamics();
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            DynamicsAttributesPtr getAttributes() const;
            void setAttributes( const DynamicsAttributes& attributes );
            types::DynamicsValue getValue() const;
            void setValue( const types::DynamicsValue& value );
            
        private:
            types::DynamicsValue myValue;
            DynamicsAttributesPtr myAttributes;
        };
        
        /**************** AccidentalText ****************
         2520, 5117
         <xs:element name="accidental-text" type="accidental-text"/>
         <xs:complexType name="accidental-text">
         <xs:annotation>
         <xs:documentation>The accidental-text type represents an element with an accidental value and text-formatting attributes.</xs:documentation>
         </xs:annotation>
         <xs:simpleContent>
         <xs:extension base="accidental-value">
         <xs:attributeGroup ref="text-formatting"/>
         </xs:extension>
         </xs:simpleContent>
         </xs:complexType>
         <xs:simpleType name="accidental-value">
         <xs:annotation>
         <xs:documentation>The accidental-value type represents notated accidentals supported by MusicXML. In the MusicXML 2.0 DTD this was a string with values that could be included. The XSD strengthens the data typing to an enumerated list. The quarter- and three-quarters- accidentals are Tartini-style quarter-tone accidentals. The -down and -up accidentals are quarter-tone accidentals that include arrows pointing down or up. The slash- accidentals are used in Turkish classical music. The numbered sharp and flat accidentals are superscripted versions of the accidental signs, used in Turkish folk music. The sori and koron accidentals are microtonal sharp and flat accidentals used in Iranian and Persian music.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:string">
         <xs:enumeration value="sharp"/>
         <xs:enumeration value="natural"/>
         <xs:enumeration value="flat"/>
         <xs:enumeration value="double-sharp"/>
         <xs:enumeration value="sharp-sharp"/>
         <xs:enumeration value="flat-flat"/>
         <xs:enumeration value="natural-sharp"/>
         <xs:enumeration value="natural-flat"/>
         <xs:enumeration value="quarter-flat"/>
         <xs:enumeration value="quarter-sharp"/>
         <xs:enumeration value="three-quarters-flat"/>
         <xs:enumeration value="three-quarters-sharp"/>
         <xs:enumeration value="sharp-down"/>
         <xs:enumeration value="sharp-up"/>
         <xs:enumeration value="natural-down"/>
         <xs:enumeration value="natural-up"/>
         <xs:enumeration value="flat-down"/>
         <xs:enumeration value="flat-up"/>
         <xs:enumeration value="triple-sharp"/>
         <xs:enumeration value="triple-flat"/>
         <xs:enumeration value="slash-quarter-sharp"/>
         <xs:enumeration value="slash-sharp"/>
         <xs:enumeration value="slash-flat"/>
         <xs:enumeration value="double-slash-flat"/>
         <xs:enumeration value="sharp-1"/>
         <xs:enumeration value="sharp-2"/>
         <xs:enumeration value="sharp-3"/>
         <xs:enumeration value="sharp-5"/>
         <xs:enumeration value="flat-1"/>
         <xs:enumeration value="flat-2"/>
         <xs:enumeration value="flat-3"/>
         <xs:enumeration value="flat-4"/>
         <xs:enumeration value="sori"/>
         <xs:enumeration value="koron"/>
         </xs:restriction>
         </xs:simpleType>
         */
        struct AccidentalTextAttributes;
        using AccidentalTextAttributesPtr = std::shared_ptr<AccidentalTextAttributes>;
        
        struct AccidentalTextAttributes : public AttributesInterface
        {
        public:
            AccidentalTextAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::LeftCenterRight justify;
            types::TenthsValue defaultX;
            types::TenthsValue defaultY;
            types::TenthsValue relativeX;
            types::TenthsValue relativeY;
            types::CommaSeparatedText fontFamily;
            types::FontStyle fontStyle;
            types::FontSize fontSize;
            types::FontWeight fontWeight;
            types::LeftCenterRight halign;
            types::NumberOfLines underline;
            types::NumberOfLines overline;
            types::NumberOfLines lineThrough;
            types::RotationDegrees rotation;
            types::NumberOrNormal letterSpacing;
            types::NumberOrNormal lineHeight;
            types::XmlLang lang;
            types::XmlSpace space;
            types::EnclosureShape enclosure;
            bool hasJustify;
            bool hasDefaultX;
            bool hasDefaultY;
            bool hasRelativeX;
            bool hasRelativeY;
            bool hasFontFamily;
            bool hasFontStyle;
            bool hasFontSize;
            bool hasFontWeight;
            bool hasHalign;
            bool hasUnderline;
            bool hasOverline;
            bool hasLineThrough;
            bool hasRotation;
            bool hasLetterSpacing;
            bool hasLineHeight;
            bool hasLang;
            bool hasSpace;
            bool hasEnclosure;
        };
        
		class AccidentalText;
		using AccidentalTextPtr = std::shared_ptr<AccidentalText>;
		using AccidentalTextUPtr = std::unique_ptr<AccidentalText>;
		using AccidentalTextSet = std::vector<AccidentalTextPtr>;
		using AccidentalTextSetIter = AccidentalTextSet::iterator;
		using AccidentalTextSetIterConst = AccidentalTextSet::const_iterator;
		inline AccidentalTextPtr makeAccidentalText() { return std::make_shared<AccidentalText>(); }
        class AccidentalText : public ElementInterface
        {
        public:
            AccidentalText();
            AccidentalText( const types::AccidentalValue& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            AccidentalTextAttributesPtr getAttributes() const;
            void setAttributes( const AccidentalTextAttributesPtr& attributes );
            types::AccidentalValue getValue() const;
            void setValue( const types::AccidentalValue& value );
        private:
            types::AccidentalValue myValue;
            AccidentalTextAttributesPtr myAttributes;
        };
        
        /**************** DisplayText ****************
         2517, 5114
         <xs:element name="display-text" type="formatted-text"/>
         <xs:complexType name="formatted-text">
         <xs:annotation>
         <xs:documentation>The formatted-text type represents a text element with text-formatting attributes.</xs:documentation>
         </xs:annotation>
         <xs:simpleContent>
         <xs:extension base="xs:string">
         <xs:attributeGroup ref="text-formatting"/>
         </xs:extension>
         </xs:simpleContent>
         </xs:complexType>
         <xs:simpleType name="xs:string"/>
         */
        struct DisplayTextAttributes;
        using DisplayTextAttributesPtr = std::shared_ptr<DisplayTextAttributes>;
        
        struct DisplayTextAttributes : public AttributesInterface
        {
        public:
            DisplayTextAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::LeftCenterRight justify;
            types::TenthsValue defaultX;
            types::TenthsValue defaultY;
            types::TenthsValue relativeX;
            types::TenthsValue relativeY;
            types::CommaSeparatedText fontFamily;
            types::FontStyle fontStyle;
            types::FontSize fontSize;
            types::FontWeight fontWeight;
            types::LeftCenterRight halign;
            types::NumberOfLines underline;
            types::NumberOfLines overline;
            types::NumberOfLines lineThrough;
            types::RotationDegrees rotation;
            types::NumberOrNormal letterSpacing;
            types::NumberOrNormal lineHeight;
            types::XmlLang lang;
            types::XmlSpace space;
            types::EnclosureShape enclosure;
            bool hasJustify;
            bool hasDefaultX;
            bool hasDefaultY;
            bool hasRelativeX;
            bool hasRelativeY;
            bool hasFontFamily;
            bool hasFontStyle;
            bool hasFontSize;
            bool hasFontWeight;
            bool hasHalign;
            bool hasUnderline;
            bool hasOverline;
            bool hasLineThrough;
            bool hasRotation;
            bool hasLetterSpacing;
            bool hasLineHeight;
            bool hasLang;
            bool hasSpace;
            bool hasEnclosure;
        };
        
		class DisplayText;
		using DisplayTextPtr = std::shared_ptr<DisplayText>;
		using DisplayTextUPtr = std::unique_ptr<DisplayText>;
		using DisplayTextSet = std::vector<DisplayTextPtr>;
		using DisplayTextSetIter = DisplayTextSet::iterator;
		using DisplayTextSetIterConst = DisplayTextSet::const_iterator;
		inline DisplayTextPtr makeDisplayText() { return std::make_shared<DisplayText>(); }
        class DisplayText : public ElementInterface
        {
        public:
            DisplayText();
            DisplayText( const types::XsString& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            DisplayTextAttributesPtr getAttributes() const;
            void setAttributes( const DisplayTextAttributesPtr& attributes );
            types::XsString getValue() const;
            void setValue( const types::XsString& value );
        private:
            types::XsString myValue;
            DisplayTextAttributesPtr myAttributes;
        };
        
        
        
        /**************** DisplayText ****************
         2517, 5114
         <xs:element name="display-text" type="formatted-text"/>
         <xs:complexType name="formatted-text">
         <xs:annotation>
         <xs:documentation>The formatted-text type represents a text element with text-formatting attributes.</xs:documentation>
         </xs:annotation>
         <xs:simpleContent>
         <xs:extension base="xs:string">
         <xs:attributeGroup ref="text-formatting"/>
         </xs:extension>
         </xs:simpleContent>
         </xs:complexType>
         <xs:simpleType name="xs:string"/>
         */
        struct DisplayTextAttributes;
        using DisplayTextAttributesPtr = std::shared_ptr<DisplayTextAttributes>;
        
  
        
        
        /**************** OtherPlay ****************
         2555
         <xs:element name="other-play" type="other-play"/>
         <xs:complexType name="other-play">
         <xs:annotation>
         <xs:documentation>The other-play element represents other types of playback. The required type attribute indicates the type of playback to which the element content applies.</xs:documentation>
         </xs:annotation>
         <xs:simpleContent>
         <xs:extension base="xs:string">
         <xs:attribute name="type" type="xs:token" use="required"/>
         </xs:extension>
         </xs:simpleContent>
         </xs:complexType>
         <xs:simpleType name="xs:string"/>
         */
        struct OtherPlayAttributes;
        using OtherPlayAttributesPtr = std::shared_ptr<OtherPlayAttributes>;
        
        struct OtherPlayAttributes : public AttributesInterface
        {
        public:
            OtherPlayAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::XsToken type;
            const   bool hasType;
        };
        
		class OtherPlay;
		using OtherPlayPtr = std::shared_ptr<OtherPlay>;
		using OtherPlayUPtr = std::unique_ptr<OtherPlay>;
		using OtherPlaySet = std::vector<OtherPlayPtr>;
		using OtherPlaySetIter = OtherPlaySet::iterator;
		using OtherPlaySetIterConst = OtherPlaySet::const_iterator;
		inline OtherPlayPtr makeOtherPlay() { return std::make_shared<OtherPlay>(); }
        class OtherPlay : public ElementInterface
        {
        public:
            OtherPlay();
            OtherPlay( const types::XsString& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            OtherPlayAttributesPtr getAttributes() const;
            void setAttributes( const OtherPlayAttributesPtr& attributes );
            types::XsString getValue() const;
            void setValue( const types::XsString& value );
        private:
            types::XsString myValue;
            OtherPlayAttributesPtr myAttributes;
        };
        
        
        /**************** PartSymbol ****************
         2634
         <xs:element name="part-symbol" type="part-symbol" minOccurs="0">   <xs:annotation>     <xs:documentation>The part-symbol element indicates how a symbol for a multi-staff part is indicated in the score.</xs:documentation>   </xs:annotation></xs:element>
         <xs:complexType name="part-symbol">
         <xs:annotation>
         <xs:documentation>The part-symbol type indicates how a symbol for a multi-staff part is indicated in the score; brace is the default value. The top-staff and bottom-staff elements are used when the brace does not extend across the entire part. For example, in a 3-staff organ part, the top-staff will typically be 1 for the right hand, while the bottom-staff will typically be 2 for the left hand. Staff 3 for the pedals is usually outside the brace.</xs:documentation>
         </xs:annotation>
         <xs:simpleContent>
         <xs:extension base="group-symbol-value">
         <xs:attribute name="top-staff" type="staff-number"/>
         <xs:attribute name="bottom-staff" type="staff-number"/>
         <xs:attributeGroup ref="position"/>
         <xs:attributeGroup ref="color"/>
         </xs:extension>
         </xs:simpleContent>
         </xs:complexType>
         <xs:simpleType name="group-symbol-value">
         <xs:annotation>
         <xs:documentation>The group-symbol-value type indicates how the symbol for a group is indicated in the score. The default value is none.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:string">
         <xs:enumeration value="none"/>
         <xs:enumeration value="brace"/>
         <xs:enumeration value="line"/>
         <xs:enumeration value="bracket"/>
         <xs:enumeration value="square"/>
         </xs:restriction>
         </xs:simpleType>
         */
        struct PartSymbolAttributes;
        using PartSymbolAttributesPtr = std::shared_ptr<PartSymbolAttributes>;
        
        struct PartSymbolAttributes : public AttributesInterface
        {
        public:
            PartSymbolAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::StaffNumber topStaff;
            types::StaffNumber bottomStaff;
            types::TenthsValue defaultX;
            types::TenthsValue defaultY;
            types::TenthsValue relativeX;
            types::TenthsValue relativeY;
            bool hasTopStaff;
            bool hasBottomStaff;
            bool hasDefaultX;
            bool hasDefaultY;
            bool hasRelativeX;
            bool hasRelativeY;
        };
        
		class PartSymbol;
		using PartSymbolPtr = std::shared_ptr<PartSymbol>;
		using PartSymbolUPtr = std::unique_ptr<PartSymbol>;
		using PartSymbolSet = std::vector<PartSymbolPtr>;
		using PartSymbolSetIter = PartSymbolSet::iterator;
		using PartSymbolSetIterConst = PartSymbolSet::const_iterator;
		inline PartSymbolPtr makePartSymbol() { return std::make_shared<PartSymbol>(); }
        class PartSymbol : public ElementInterface
        {
        public:
            PartSymbol();
            PartSymbol( const types::GroupSymbolValue& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            PartSymbolAttributesPtr getAttributes() const;
            void setAttributes( const PartSymbolAttributesPtr& attributes );
            types::GroupSymbolValue getValue() const;
            void setValue( const types::GroupSymbolValue& value );
        private:
            types::GroupSymbolValue myValue;
            PartSymbolAttributesPtr myAttributes;
        };
        
        
        /**************** KeyOctave ****************
         2783
         <xs:element name="key-octave" type="key-octave" minOccurs="0" maxOccurs="unbounded">   <xs:annotation>     <xs:documentation>The optional list of key-octave elements is used to specify in which octave each element of the key signature appears.</xs:documentation> </xs:annotation></xs:element>
         <xs:complexType name="key-octave">
         <xs:annotation>
         <xs:documentation>The key-octave element specifies in which octave an element of a key signature appears. The content specifies the octave value using the same values as the display-octave element. The number attribute is a positive integer that refers to the key signature element in left-to-right order. If the cancel attribute is set to yes, then this number refers to an element specified by the cancel element. It is no by default.</xs:documentation>
         </xs:annotation>
         <xs:simpleContent>
         <xs:extension base="octave">
         <xs:attribute name="number" type="xs:positiveInteger" use="required"/>
         <xs:attribute name="cancel" type="yes-no"/>
         </xs:extension>
         </xs:simpleContent>
         </xs:complexType>
         <xs:simpleType name="octave">
         <xs:annotation>
         <xs:documentation>Octaves are represented by the numbers 0 to 9, where 4 indicates the octave started by middle C.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:integer">
         <xs:minInclusive value="0"/>
         <xs:maxInclusive value="9"/>
         </xs:restriction>
         </xs:simpleType>
         */
        struct KeyOctaveAttributes;
        using KeyOctaveAttributesPtr = std::shared_ptr<KeyOctaveAttributes>;
        
        struct KeyOctaveAttributes : public AttributesInterface
        {
        public:
            KeyOctaveAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::PositiveInteger number;
            types::YesNo cancel;
            const   bool hasNumber;
            bool hasCancel;
        };
        
		class KeyOctave;
		using KeyOctavePtr = std::shared_ptr<KeyOctave>;
		using KeyOctaveUPtr = std::unique_ptr<KeyOctave>;
		using KeyOctaveSet = std::vector<KeyOctavePtr>;
		using KeyOctaveSetIter = KeyOctaveSet::iterator;
		using KeyOctaveSetIterConst = KeyOctaveSet::const_iterator;
		inline KeyOctavePtr makeKeyOctave() { return std::make_shared<KeyOctave>(); }
        class KeyOctave : public ElementInterface
        {
        public:
            KeyOctave();
            KeyOctave( const types::OctaveValue& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            KeyOctaveAttributesPtr getAttributes() const;
            void setAttributes( const KeyOctaveAttributesPtr& attributes );
            types::OctaveValue getValue() const;
            void setValue( const types::OctaveValue& value );
        private:
            types::OctaveValue myValue;
            KeyOctaveAttributesPtr myAttributes;
        };
        
        
        /**************** MultipleRest ****************
         2830
         <xs:element name="multiple-rest" type="multiple-rest"/>
         <xs:complexType name="multiple-rest">
         <xs:annotation>
         <xs:documentation>The text of the multiple-rest type indicates the number of measures in the multiple rest. Multiple rests may use the 1-bar / 2-bar / 4-bar rest symbols, or a single shape. The use-symbols attribute indicates which to use; it is no if not specified. The element text is ignored when the type is stop.</xs:documentation>
         </xs:annotation>
         <xs:simpleContent>
         <xs:extension base="positive-integer-or-empty">
         <xs:attribute name="use-symbols" type="yes-no"/>
         </xs:extension>
         </xs:simpleContent>
         </xs:complexType>
         <xs:simpleType name="positive-integer-or-empty">
         <xs:annotation>
         <xs:documentation>The positive-integer-or-empty values can be either a positive integer or an empty string.</xs:documentation>
         </xs:annotation>
         <xs:union memberTypes="xs:positiveInteger">
         <xs:simpleType>
         <xs:restriction base="xs:string">
         <xs:enumeration value=""/>
         </xs:restriction>
         </xs:simpleType>
         </xs:union>
         </xs:simpleType>
         */
        struct MultipleRestAttributes;
        using MultipleRestAttributesPtr = std::shared_ptr<MultipleRestAttributes>;
        
        struct MultipleRestAttributes : public AttributesInterface
        {
        public:
            MultipleRestAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::YesNo useSymbols;
            bool hasUseSymbols;
        };
        
		class MultipleRest;
		using MultipleRestPtr = std::shared_ptr<MultipleRest>;
		using MultipleRestUPtr = std::unique_ptr<MultipleRest>;
		using MultipleRestSet = std::vector<MultipleRestPtr>;
		using MultipleRestSetIter = MultipleRestSet::iterator;
		using MultipleRestSetIterConst = MultipleRestSet::const_iterator;
		inline MultipleRestPtr makeMultipleRest() { return std::make_shared<MultipleRest>(); }
        class MultipleRest : public ElementInterface
        {
        public:
            MultipleRest();
            MultipleRest( const types::PositiveIntegerOrEmpty& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            MultipleRestAttributesPtr getAttributes() const;
            void setAttributes( const MultipleRestAttributesPtr& attributes );
            types::PositiveIntegerOrEmpty getValue() const;
            void setValue( const types::PositiveIntegerOrEmpty& value );
        private:
            types::PositiveIntegerOrEmpty myValue;
            MultipleRestAttributesPtr myAttributes;
        };
        
        
        /**************** MeasureRepeat ****************
         2833
         <xs:element name="measure-repeat" type="measure-repeat"/>
         <xs:complexType name="measure-repeat">
         <xs:annotation>
         <xs:documentation>The measure-repeat type is used for both single and multiple measure repeats. The text of the element indicates the number of measures to be repeated in a single pattern. The slashes attribute specifies the number of slashes to use in the repeat sign. It is 1 if not specified. Both the start and the stop of the measure-repeat must be specified. The text of the element is ignored when the type is stop.
         
         The measure-repeat element specifies a notation style for repetitions. The actual music being repeated needs to be repeated within the MusicXML file. This element specifies the notation that indicates the repeat.</xs:documentation>
         </xs:annotation>
         <xs:simpleContent>
         <xs:extension base="positive-integer-or-empty">
         <xs:attribute name="type" type="start-stop" use="required"/>
         <xs:attribute name="slashes" type="xs:positiveInteger"/>
         </xs:extension>
         </xs:simpleContent>
         </xs:complexType>
         <xs:simpleType name="positive-integer-or-empty">
         <xs:annotation>
         <xs:documentation>The positive-integer-or-empty values can be either a positive integer or an empty string.</xs:documentation>
         </xs:annotation>
         <xs:union memberTypes="xs:positiveInteger">
         <xs:simpleType>
         <xs:restriction base="xs:string">
         <xs:enumeration value=""/>
         </xs:restriction>
         </xs:simpleType>
         </xs:union>
         </xs:simpleType>
         */
        struct MeasureRepeatAttributes;
        using MeasureRepeatAttributesPtr = std::shared_ptr<MeasureRepeatAttributes>;
        
        struct MeasureRepeatAttributes : public AttributesInterface
        {
        public:
            MeasureRepeatAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::StartStop type;
            types::PositiveInteger slashes;
            const   bool hasType;
            bool hasSlashes;
        };
        
		class MeasureRepeat;
		using MeasureRepeatPtr = std::shared_ptr<MeasureRepeat>;
		using MeasureRepeatUPtr = std::unique_ptr<MeasureRepeat>;
		using MeasureRepeatSet = std::vector<MeasureRepeatPtr>;
		using MeasureRepeatSetIter = MeasureRepeatSet::iterator;
		using MeasureRepeatSetIterConst = MeasureRepeatSet::const_iterator;
		inline MeasureRepeatPtr makeMeasureRepeat() { return std::make_shared<MeasureRepeat>(); }
        class MeasureRepeat : public ElementInterface
        {
        public:
            MeasureRepeat();
            MeasureRepeat( const types::PositiveIntegerOrEmpty& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            MeasureRepeatAttributesPtr getAttributes() const;
            void setAttributes( const MeasureRepeatAttributesPtr& attributes );
            types::PositiveIntegerOrEmpty getValue() const;
            void setValue( const types::PositiveIntegerOrEmpty& value );
        private:
            types::PositiveIntegerOrEmpty myValue;
            MeasureRepeatAttributesPtr myAttributes;
        };
        
        
        /**************** BarStyle ****************
         3020
         <xs:element name="bar-style" type="bar-style-color" minOccurs="0"/>
         <xs:complexType name="bar-style-color">
         <xs:annotation>
         <xs:documentation>The bar-style-color type contains barline style and color information.</xs:documentation>
         </xs:annotation>
         <xs:simpleContent>
         <xs:extension base="bar-style">
         <xs:attributeGroup ref="color"/>
         </xs:extension>
         </xs:simpleContent>
         </xs:complexType>
         <xs:simpleType name="bar-style">
         <xs:annotation>
         <xs:documentation>The bar-style type represents barline style information. Choices are regular, dotted, dashed, heavy, light-light, light-heavy, heavy-light, heavy-heavy, tick (a short stroke through the top line), short (a partial barline between the 2nd and 4th lines), and none.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:string">
         <xs:enumeration value="regular"/>
         <xs:enumeration value="dotted"/>
         <xs:enumeration value="dashed"/>
         <xs:enumeration value="heavy"/>
         <xs:enumeration value="light-light"/>
         <xs:enumeration value="light-heavy"/>
         <xs:enumeration value="heavy-light"/>
         <xs:enumeration value="heavy-heavy"/>
         <xs:enumeration value="tick"/>
         <xs:enumeration value="short"/>
         <xs:enumeration value="none"/>
         </xs:restriction>
         </xs:simpleType>
         */
        struct BarStyleAttributes;
        using BarStyleAttributesPtr = std::shared_ptr<BarStyleAttributes>;
        
        struct BarStyleAttributes : public AttributesInterface
        {
        public:
            BarStyleAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::Color color;
            bool hasColor;
        };
        
		class BarStyle;
		using BarStylePtr = std::shared_ptr<BarStyle>;
		using BarStyleUPtr = std::unique_ptr<BarStyle>;
		using BarStyleSet = std::vector<BarStylePtr>;
		using BarStyleSetIter = BarStyleSet::iterator;
		using BarStyleSetIterConst = BarStyleSet::const_iterator;
		inline BarStylePtr makeBarStyle() { return std::make_shared<BarStyle>(); }
        class BarStyle : public ElementInterface
        {
        public:
            BarStyle();
            BarStyle( const types::BarStyleEnum& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            BarStyleAttributesPtr getAttributes() const;
            void setAttributes( const BarStyleAttributesPtr& attributes );
            types::BarStyleEnum getValue() const;
            void setValue( const types::BarStyleEnum& value );
        private:
            types::BarStyleEnum myValue;
            BarStyleAttributesPtr myAttributes;
        };
        
        
        /**************** Fermata ****************
         3038, 4941
         <xs:element name="fermata" type="fermata" minOccurs="0" maxOccurs="2"/>
         <xs:complexType name="fermata">
         <xs:annotation>
         <xs:documentation>The fermata text content represents the shape of the fermata sign. An empty fermata element represents a normal fermata. The fermata type is upright if not specified.</xs:documentation>
         </xs:annotation>
         <xs:simpleContent>
         <xs:extension base="fermata-shape">
         <xs:attribute name="type" type="upright-inverted"/>
         <xs:attributeGroup ref="print-style"/>
         </xs:extension>
         </xs:simpleContent>
         </xs:complexType>
         <xs:simpleType name="fermata-shape">
         <xs:annotation>
         <xs:documentation>The fermata-shape type represents the shape of the fermata sign. The empty value is equivalent to the normal value.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:string">
         <xs:enumeration value="normal"/>
         <xs:enumeration value="angled"/>
         <xs:enumeration value="square"/>
         <xs:enumeration value=""/>
         </xs:restriction>
         </xs:simpleType>
         */
        struct FermataAttributes;
        using FermataAttributesPtr = std::shared_ptr<FermataAttributes>;
        
        struct FermataAttributes : public AttributesInterface
        {
        public:
            FermataAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::UprightInverted type;
            types::TenthsValue defaultX;
            types::TenthsValue defaultY;
            types::TenthsValue relativeX;
            types::TenthsValue relativeY;
            types::CommaSeparatedText fontFamily;
            types::FontStyle fontStyle;
            types::FontSize fontSize;
            types::FontWeight fontWeight;
            bool hasType;
            bool hasDefaultX;
            bool hasDefaultY;
            bool hasRelativeX;
            bool hasRelativeY;
            bool hasFontFamily;
            bool hasFontStyle;
            bool hasFontSize;
            bool hasFontWeight;
        };
        
		class Fermata;
		using FermataPtr = std::shared_ptr<Fermata>;
		using FermataUPtr = std::unique_ptr<Fermata>;
		using FermataSet = std::vector<FermataPtr>;
		using FermataSetIter = FermataSet::iterator;
		using FermataSetIterConst = FermataSet::const_iterator;
		inline FermataPtr makeFermata() { return std::make_shared<Fermata>(); }
        class Fermata : public ElementInterface
        {
        public:
            Fermata();
            Fermata( const types::FermataShape& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            FermataAttributesPtr getAttributes() const;
            void setAttributes( const FermataAttributesPtr& attributes );
            types::FermataShape getValue() const;
            void setValue( const types::FermataShape& value );
        private:
            types::FermataShape myValue;
            FermataAttributesPtr myAttributes;
        };
        
        
        /**************** Ending ****************
         3043
         <xs:element name="ending" type="ending" minOccurs="0"/>
         <xs:complexType name="ending">
         <xs:annotation>
         <xs:documentation>The ending type represents multiple (e.g. first and second) endings. Typically, the start type is associated with the left barline of the first measure in an ending. The stop and discontinue types are associated with the right barline of the last measure in an ending. Stop is used when the ending mark concludes with a downward jog, as is typical for first endings. Discontinue is used when there is no downward jog, as is typical for second endings that do not conclude a piece. The length of the jog can be specified using the end-length attribute. The text-x and text-y attributes are offsets that specify where the baseline of the start of the ending text appears, relative to the start of the ending line.
         
         The number attribute reflects the numeric values of what is under the ending line. Single endings such as "1" or comma-separated multiple endings such as "1,2" may be used. The ending element text is used when the text displayed in the ending is different than what appears in the number attribute. The print-object element is used to indicate when an ending is present but not printed, as is often the case for many parts in a full score.</xs:documentation>
         </xs:annotation>
         <xs:simpleContent>
         <xs:extension base="xs:string">
         <xs:attribute name="number" type="ending-number" use="required"/>
         <xs:attribute name="type" type="start-stop-discontinue" use="required"/>
         <xs:attributeGroup ref="print-object"/>
         <xs:attributeGroup ref="print-style"/>
         <xs:attribute name="end-length" type="tenths"/>
         <xs:attribute name="text-x" type="tenths"/>
         <xs:attribute name="text-y" type="tenths"/>
         </xs:extension>
         </xs:simpleContent>
         </xs:complexType>
         <xs:simpleType name="xs:string"/>
         */
        struct EndingAttributes;
        using EndingAttributesPtr = std::shared_ptr<EndingAttributes>;
        
        struct EndingAttributes : public AttributesInterface
        {
        public:
            EndingAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::EndingNumber number;
            types::StartStopDiscontinue type;
            types::YesNo printObject;
            types::TenthsValue defaultX;
            types::TenthsValue defaultY;
            types::TenthsValue relativeX;
            types::TenthsValue relativeY;
            types::CommaSeparatedText fontFamily;
            types::FontStyle fontStyle;
            types::FontSize fontSize;
            types::FontWeight fontWeight;
            types::TenthsValue endLength;
            types::TenthsValue textX;
            types::TenthsValue textY;
            const   bool hasNumber;
            const   bool hasType;
            bool hasPrintObject;
            bool hasDefaultX;
            bool hasDefaultY;
            bool hasRelativeX;
            bool hasRelativeY;
            bool hasFontFamily;
            bool hasFontStyle;
            bool hasFontSize;
            bool hasFontWeight;
            bool hasEndLength;
            bool hasTextX;
            bool hasTextY;
        };
        
		class Ending;
		using EndingPtr = std::shared_ptr<Ending>;
		using EndingUPtr = std::unique_ptr<Ending>;
		using EndingSet = std::vector<EndingPtr>;
		using EndingSetIter = EndingSet::iterator;
		using EndingSetIterConst = EndingSet::const_iterator;
		inline EndingPtr makeEnding() { return std::make_shared<Ending>(); }
        class Ending : public ElementInterface
        {
        public:
            Ending();
            Ending( const types::XsString& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            EndingAttributesPtr getAttributes() const;
            void setAttributes( const EndingAttributesPtr& attributes );
            types::XsString getValue() const;
            void setValue( const types::XsString& value );
        private:
            types::XsString myValue;
            EndingAttributesPtr myAttributes;
        };
        
        
        /**************** BassStep ****************
         3155
         <xs:element name="bass-step" type="bass-step"/>
         <xs:complexType name="bass-step">
         <xs:annotation>
         <xs:documentation>The bass-step type represents the pitch step of the bass of the current chord within the harmony element. The text attribute indicates how the bass should appear in a score if not using the element contents.</xs:documentation>
         </xs:annotation>
         <xs:simpleContent>
         <xs:extension base="step">
         <xs:attribute name="text" type="xs:token"/>
         <xs:attributeGroup ref="print-style"/>
         </xs:extension>
         </xs:simpleContent>
         </xs:complexType>
         <xs:simpleType name="step">
         <xs:annotation>
         <xs:documentation>The step type represents a step of the diatonic scale, represented using the English letters A through G.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:string">
         <xs:enumeration value="A"/>
         <xs:enumeration value="B"/>
         <xs:enumeration value="C"/>
         <xs:enumeration value="D"/>
         <xs:enumeration value="E"/>
         <xs:enumeration value="F"/>
         <xs:enumeration value="G"/>
         </xs:restriction>
         </xs:simpleType>
         */
        struct BassStepAttributes;
        using BassStepAttributesPtr = std::shared_ptr<BassStepAttributes>;
        
        struct BassStepAttributes : public AttributesInterface
        {
        public:
            BassStepAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::XsToken text;
            types::TenthsValue defaultX;
            types::TenthsValue defaultY;
            types::TenthsValue relativeX;
            types::TenthsValue relativeY;
            types::CommaSeparatedText fontFamily;
            types::FontStyle fontStyle;
            types::FontSize fontSize;
            types::FontWeight fontWeight;
            bool hasText;
            bool hasDefaultX;
            bool hasDefaultY;
            bool hasRelativeX;
            bool hasRelativeY;
            bool hasFontFamily;
            bool hasFontStyle;
            bool hasFontSize;
            bool hasFontWeight;
        };
        
		class BassStep;
		using BassStepPtr = std::shared_ptr<BassStep>;
		using BassStepUPtr = std::unique_ptr<BassStep>;
		using BassStepSet = std::vector<BassStepPtr>;
		using BassStepSetIter = BassStepSet::iterator;
		using BassStepSetIterConst = BassStepSet::const_iterator;
		inline BassStepPtr makeBassStep() { return std::make_shared<BassStep>(); }
        class BassStep : public ElementInterface
        {
        public:
            BassStep();
            BassStep( const types::StepEnum& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            BassStepAttributesPtr getAttributes() const;
            void setAttributes( const BassStepAttributesPtr& attributes );
            types::StepEnum getValue() const;
            void setValue( const types::StepEnum& value );
        private:
            types::StepEnum myValue;
            BassStepAttributesPtr myAttributes;
        };
        
        
        /**************** BassAlter ****************
         3158
         <xs:element name="bass-alter" type="bass-alter" minOccurs="0"/>
         <xs:complexType name="bass-alter">
         <xs:annotation>
         <xs:documentation>The bass-alter type represents the chromatic alteration of the bass of the current chord within the harmony element. In some chord styles, the text for the bass-step element may include bass-alter information. In that case, the print-object attribute of the bass-alter element can be set to no. The location attribute indicates whether the alteration should appear to the left or the right of the bass-step; it is right by default.</xs:documentation>
         </xs:annotation>
         <xs:simpleContent>
         <xs:extension base="semitones">
         <xs:attributeGroup ref="print-object"/>
         <xs:attributeGroup ref="print-style"/>
         <xs:attribute name="location" type="left-right"/>
         </xs:extension>
         </xs:simpleContent>
         </xs:complexType>
         <xs:simpleType name="semitones">
         <xs:annotation>
         <xs:documentation>The semitones type is a number representing semitones, used for chromatic alteration. A value of -1 corresponds to a flat and a value of 1 to a sharp. Decimal values like 0.5 (quarter tone sharp) are used for microtones.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:decimal"/>
         </xs:simpleType>
         */
        struct BassAlterAttributes;
        using BassAlterAttributesPtr = std::shared_ptr<BassAlterAttributes>;
        
        struct BassAlterAttributes : public AttributesInterface
        {
        public:
            BassAlterAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::YesNo printObject;
            types::TenthsValue defaultX;
            types::TenthsValue defaultY;
            types::TenthsValue relativeX;
            types::TenthsValue relativeY;
            types::CommaSeparatedText fontFamily;
            types::FontStyle fontStyle;
            types::FontSize fontSize;
            types::FontWeight fontWeight;
            types::LeftRight location;
            bool hasPrintObject;
            bool hasDefaultX;
            bool hasDefaultY;
            bool hasRelativeX;
            bool hasRelativeY;
            bool hasFontFamily;
            bool hasFontStyle;
            bool hasFontSize;
            bool hasFontWeight;
            bool hasLocation;
        };
        
		class BassAlter;
		using BassAlterPtr = std::shared_ptr<BassAlter>;
		using BassAlterUPtr = std::unique_ptr<BassAlter>;
		using BassAlterSet = std::vector<BassAlterPtr>;
		using BassAlterSetIter = BassAlterSet::iterator;
		using BassAlterSetIterConst = BassAlterSet::const_iterator;
		inline BassAlterPtr makeBassAlter() { return std::make_shared<BassAlter>(); }
        class BassAlter : public ElementInterface
        {
        public:
            BassAlter();
            BassAlter( const types::Semitones& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            BassAlterAttributesPtr getAttributes() const;
            void setAttributes( const BassAlterAttributesPtr& attributes );
            types::Semitones getValue() const;
            void setValue( const types::Semitones& value );
        private:
            types::Semitones myValue;
            BassAlterAttributesPtr myAttributes;
        };
        
        
        /**************** DegreeValue ****************
         3246
         <xs:element name="degree-value" type="degree-value"/>
         <xs:complexType name="degree-value">
         <xs:annotation>
         <xs:documentation>The content of the degree-value type is a number indicating the degree of the chord (1 for the root, 3 for third, etc). The text attribute specifies how the type of the degree should be displayed in a score. The degree-value symbol attribute indicates that a symbol should be used in specifying the degree. If the symbol attribute is present, the value of the text attribute follows the symbol.</xs:documentation>
         </xs:annotation>
         <xs:simpleContent>
         <xs:extension base="xs:positiveInteger">
         <xs:attribute name="symbol" type="degree-symbol-value"/>
         <xs:attribute name="text" type="xs:token"/>
         <xs:attributeGroup ref="print-style"/>
         </xs:extension>
         </xs:simpleContent>
         </xs:complexType>
         <xs:simpleType name="xs:positiveInteger"/>
         */
        struct DegreeValueAttributes;
        using DegreeValueAttributesPtr = std::shared_ptr<DegreeValueAttributes>;
        
        struct DegreeValueAttributes : public AttributesInterface
        {
        public:
            DegreeValueAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::DegreeSymbolValue symbol;
            types::XsToken text;
            types::TenthsValue defaultX;
            types::TenthsValue defaultY;
            types::TenthsValue relativeX;
            types::TenthsValue relativeY;
            types::CommaSeparatedText fontFamily;
            types::FontStyle fontStyle;
            types::FontSize fontSize;
            types::FontWeight fontWeight;
            bool hasSymbol;
            bool hasText;
            bool hasDefaultX;
            bool hasDefaultY;
            bool hasRelativeX;
            bool hasRelativeY;
            bool hasFontFamily;
            bool hasFontStyle;
            bool hasFontSize;
            bool hasFontWeight;
        };
        
		class DegreeValue;
		using DegreeValuePtr = std::shared_ptr<DegreeValue>;
		using DegreeValueUPtr = std::unique_ptr<DegreeValue>;
		using DegreeValueSet = std::vector<DegreeValuePtr>;
		using DegreeValueSetIter = DegreeValueSet::iterator;
		using DegreeValueSetIterConst = DegreeValueSet::const_iterator;
		inline DegreeValuePtr makeDegreeValue() { return std::make_shared<DegreeValue>(); }
        class DegreeValue : public ElementInterface
        {
        public:
            DegreeValue();
            DegreeValue( const types::PositiveInteger& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            DegreeValueAttributesPtr getAttributes() const;
            void setAttributes( const DegreeValueAttributesPtr& attributes );
            types::PositiveInteger getValue() const;
            void setValue( const types::PositiveInteger& value );
        private:
            types::PositiveInteger myValue;
            DegreeValueAttributesPtr myAttributes;
        };
        
        
        /**************** DegreeAlter ****************
         3249
         <xs:element name="degree-alter" type="degree-alter"/>
         <xs:complexType name="degree-alter">
         <xs:annotation>
         <xs:documentation>The degree-alter type represents the chromatic alteration for the current degree. If the degree-type value is alter or subtract, the degree-alter value is relative to the degree already in the chord based on its kind element. If the degree-type value is add, the degree-alter is relative to a dominant chord (major and perfect intervals except for a minor seventh). The plus-minus attribute is used to indicate if plus and minus symbols should be used instead of sharp and flat symbols to display the degree alteration; it is no by default.</xs:documentation>
         </xs:annotation>
         <xs:simpleContent>
         <xs:extension base="semitones">
         <xs:attributeGroup ref="print-style"/>
         <xs:attribute name="plus-minus" type="yes-no"/>
         </xs:extension>
         </xs:simpleContent>
         </xs:complexType>
         <xs:simpleType name="semitones">
         <xs:annotation>
         <xs:documentation>The semitones type is a number representing semitones, used for chromatic alteration. A value of -1 corresponds to a flat and a value of 1 to a sharp. Decimal values like 0.5 (quarter tone sharp) are used for microtones.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:decimal"/>
         </xs:simpleType>
         */
        struct DegreeAlterAttributes;
        using DegreeAlterAttributesPtr = std::shared_ptr<DegreeAlterAttributes>;
        
        struct DegreeAlterAttributes : public AttributesInterface
        {
        public:
            DegreeAlterAttributes();
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
            types::YesNo plusMinus;
            bool hasDefaultX;
            bool hasDefaultY;
            bool hasRelativeX;
            bool hasRelativeY;
            bool hasFontFamily;
            bool hasFontStyle;
            bool hasFontSize;
            bool hasFontWeight;
            bool hasPlusMinus;
        };
        
		class DegreeAlter;
		using DegreeAlterPtr = std::shared_ptr<DegreeAlter>;
		using DegreeAlterUPtr = std::unique_ptr<DegreeAlter>;
		using DegreeAlterSet = std::vector<DegreeAlterPtr>;
		using DegreeAlterSetIter = DegreeAlterSet::iterator;
		using DegreeAlterSetIterConst = DegreeAlterSet::const_iterator;
		inline DegreeAlterPtr makeDegreeAlter() { return std::make_shared<DegreeAlter>(); }
        class DegreeAlter : public ElementInterface
        {
        public:
            DegreeAlter();
            DegreeAlter( const types::Semitones& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            DegreeAlterAttributesPtr getAttributes() const;
            void setAttributes( const DegreeAlterAttributesPtr& attributes );
            types::Semitones getValue() const;
            void setValue( const types::Semitones& value );
        private:
            types::Semitones myValue;
            DegreeAlterAttributesPtr myAttributes;
        };
        
        
        /**************** DegreeType ****************
         3252
         <xs:element name="degree-type" type="degree-type"/>
         <xs:complexType name="degree-type">
         <xs:annotation>
         <xs:documentation>The degree-type type indicates if this degree is an addition, alteration, or subtraction relative to the kind of the current chord. The value of the degree-type element affects the interpretation of the value of the degree-alter element. The text attribute specifies how the type of the degree should be displayed in a score.</xs:documentation>
         </xs:annotation>
         <xs:simpleContent>
         <xs:extension base="degree-type-value">
         <xs:attribute name="text" type="xs:token"/>
         <xs:attributeGroup ref="print-style"/>
         </xs:extension>
         </xs:simpleContent>
         </xs:complexType>
         <xs:simpleType name="degree-type-value">
         <xs:annotation>
         <xs:documentation>The degree-type-value type indicates whether the current degree element is an addition, alteration, or subtraction to the kind of the current chord in the harmony element.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:string">
         <xs:enumeration value="add"/>
         <xs:enumeration value="alter"/>
         <xs:enumeration value="subtract"/>
         </xs:restriction>
         </xs:simpleType>
         */
        struct DegreeTypeAttributes;
        using DegreeTypeAttributesPtr = std::shared_ptr<DegreeTypeAttributes>;
        
        struct DegreeTypeAttributes : public AttributesInterface
        {
        public:
            DegreeTypeAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::XsToken text;
            types::TenthsValue defaultX;
            types::TenthsValue defaultY;
            types::TenthsValue relativeX;
            types::TenthsValue relativeY;
            types::CommaSeparatedText fontFamily;
            types::FontStyle fontStyle;
            types::FontSize fontSize;
            types::FontWeight fontWeight;
            bool hasText;
            bool hasDefaultX;
            bool hasDefaultY;
            bool hasRelativeX;
            bool hasRelativeY;
            bool hasFontFamily;
            bool hasFontStyle;
            bool hasFontSize;
            bool hasFontWeight;
        };
        
		class DegreeType;
		using DegreeTypePtr = std::shared_ptr<DegreeType>;
		using DegreeTypeUPtr = std::unique_ptr<DegreeType>;
		using DegreeTypeSet = std::vector<DegreeTypePtr>;
		using DegreeTypeSetIter = DegreeTypeSet::iterator;
		using DegreeTypeSetIterConst = DegreeTypeSet::const_iterator;
		inline DegreeTypePtr makeDegreeType() { return std::make_shared<DegreeType>(); }
        class DegreeType : public ElementInterface
        {
        public:
            DegreeType();
            DegreeType( const types::DegreeTypeValue& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            DegreeTypeAttributesPtr getAttributes() const;
            void setAttributes( const DegreeTypeAttributesPtr& attributes );
            types::DegreeTypeValue getValue() const;
            void setValue( const types::DegreeTypeValue& value );
        private:
            types::DegreeTypeValue myValue;
            DegreeTypeAttributesPtr myAttributes;
        };
        
        
        /**************** Offset ****************
         3305, 3528, 3934
         <xs:element name="offset" type="offset" minOccurs="0"/>
         <xs:complexType name="offset">
         <xs:annotation>
         <xs:documentation>An offset is represented in terms of divisions, and indicates where the direction will appear relative to the current musical location. This affects the visual appearance of the direction. If the sound attribute is "yes", then the offset affects playback too. If the sound attribute is "no", then any sound associated with the direction takes effect at the current location. The sound attribute is "no" by default for compatibility with earlier versions of the MusicXML format. If an element within a direction includes a default-x attribute, the offset value will be ignored when determining the appearance of that element.</xs:documentation>
         </xs:annotation>
         <xs:simpleContent>
         <xs:extension base="divisions">
         <xs:attribute name="sound" type="yes-no"/>
         </xs:extension>
         </xs:simpleContent>
         </xs:complexType>
         <xs:simpleType name="divisions">
         <xs:annotation>
         <xs:documentation>The divisions type is used to express values in terms of the musical divisions defined by the divisions element. It is preferred that these be integer values both for MIDI interoperability and to avoid roundoff errors.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:decimal"/>
         </xs:simpleType>
         */
        struct OffsetAttributes;
        using OffsetAttributesPtr = std::shared_ptr<OffsetAttributes>;
        
        struct OffsetAttributes : public AttributesInterface
        {
        public:
            OffsetAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::YesNo sound;
            bool hasSound;
        };
        
		class Offset;
		using OffsetPtr = std::shared_ptr<Offset>;
		using OffsetUPtr = std::unique_ptr<Offset>;
		using OffsetSet = std::vector<OffsetPtr>;
		using OffsetSetIter = OffsetSet::iterator;
		using OffsetSetIterConst = OffsetSet::const_iterator;
		inline OffsetPtr makeOffset() { return std::make_shared<Offset>(); }
        class Offset : public ElementInterface
        {
        public:
            Offset();
            Offset( const types::DivisionsValue& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            OffsetAttributesPtr getAttributes() const;
            void setAttributes( const OffsetAttributesPtr& attributes );
            types::DivisionsValue getValue() const;
            void setValue( const types::DivisionsValue& value );
        private:
            types::DivisionsValue myValue;
            OffsetAttributesPtr myAttributes;
        };
        
        
        /**************** Rehearsal ****************
         3327
         <xs:element name="rehearsal" type="formatted-text" maxOccurs="unbounded">  <xs:annotation>     <xs:documentation>The rehearsal type specifies a rehearsal mark. Language is Italian ("it") by default. Enclosure is square by default. Left justification is assumed if not specified.</xs:documentation>  </xs:annotation></xs:element>
         <xs:complexType name="formatted-text">
         <xs:annotation>
         <xs:documentation>The formatted-text type represents a text element with text-formatting attributes.</xs:documentation>
         </xs:annotation>
         <xs:simpleContent>
         <xs:extension base="xs:string">
         <xs:attributeGroup ref="text-formatting"/>
         </xs:extension>
         </xs:simpleContent>
         </xs:complexType>
         <xs:simpleType name="xs:string"/>
         */
        struct RehearsalAttributes;
        using RehearsalAttributesPtr = std::shared_ptr<RehearsalAttributes>;
        
        struct RehearsalAttributes : public AttributesInterface
        {
        public:
            RehearsalAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::LeftCenterRight justify;
            types::TenthsValue defaultX;
            types::TenthsValue defaultY;
            types::TenthsValue relativeX;
            types::TenthsValue relativeY;
            types::CommaSeparatedText fontFamily;
            types::FontStyle fontStyle;
            types::FontSize fontSize;
            types::FontWeight fontWeight;
            types::LeftCenterRight halign;
            types::NumberOfLines underline;
            types::NumberOfLines overline;
            types::NumberOfLines lineThrough;
            types::RotationDegrees rotation;
            types::NumberOrNormal letterSpacing;
            types::NumberOrNormal lineHeight;
            types::XmlLang lang;
            types::XmlSpace space;
            types::EnclosureShape enclosure;
            bool hasJustify;
            bool hasDefaultX;
            bool hasDefaultY;
            bool hasRelativeX;
            bool hasRelativeY;
            bool hasFontFamily;
            bool hasFontStyle;
            bool hasFontSize;
            bool hasFontWeight;
            bool hasHalign;
            bool hasUnderline;
            bool hasOverline;
            bool hasLineThrough;
            bool hasRotation;
            bool hasLetterSpacing;
            bool hasLineHeight;
            bool hasLang;
            bool hasSpace;
            bool hasEnclosure;
        };
        
		class Rehearsal;
		using RehearsalPtr = std::shared_ptr<Rehearsal>;
		using RehearsalUPtr = std::unique_ptr<Rehearsal>;
		using RehearsalSet = std::vector<RehearsalPtr>;
		using RehearsalSetIter = RehearsalSet::iterator;
		using RehearsalSetIterConst = RehearsalSet::const_iterator;
		inline RehearsalPtr makeRehearsal() { return std::make_shared<Rehearsal>(); }
        class Rehearsal : public ElementInterface
        {
        public:
            Rehearsal();
            Rehearsal( const types::XsString& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            RehearsalAttributesPtr getAttributes() const;
            void setAttributes( const RehearsalAttributesPtr& attributes );
            types::XsString getValue() const;
            void setValue( const types::XsString& value );
        private:
            types::XsString myValue;
            RehearsalAttributesPtr myAttributes;
        };
        
        
        /**************** Words ****************
         3339
         <xs:element name="words" type="formatted-text" maxOccurs="unbounded">  <xs:annotation>     <xs:documentation>The words element specifies a standard text direction. Left justification is assumed if not specified. Language is Italian ("it") by default. Enclosure is none by default.</xs:documentation>    </xs:annotation></xs:element>
         <xs:complexType name="formatted-text">
         <xs:annotation>
         <xs:documentation>The formatted-text type represents a text element with text-formatting attributes.</xs:documentation>
         </xs:annotation>
         <xs:simpleContent>
         <xs:extension base="xs:string">
         <xs:attributeGroup ref="text-formatting"/>
         </xs:extension>
         </xs:simpleContent>
         </xs:complexType>
         <xs:simpleType name="xs:string"/>
         */
        struct WordsAttributes;
        using WordsAttributesPtr = std::shared_ptr<WordsAttributes>;
        
        struct WordsAttributes : public AttributesInterface
        {
        public:
            WordsAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::LeftCenterRight justify;
            types::TenthsValue defaultX;
            types::TenthsValue defaultY;
            types::TenthsValue relativeX;
            types::TenthsValue relativeY;
            types::CommaSeparatedText fontFamily;
            types::FontStyle fontStyle;
            types::FontSize fontSize;
            types::FontWeight fontWeight;
            types::LeftCenterRight halign;
            types::NumberOfLines underline;
            types::NumberOfLines overline;
            types::NumberOfLines lineThrough;
            types::RotationDegrees rotation;
            types::NumberOrNormal letterSpacing;
            types::NumberOrNormal lineHeight;
            types::XmlLang lang;
            types::XmlSpace space;
            types::EnclosureShape enclosure;
            bool hasJustify;
            bool hasDefaultX;
            bool hasDefaultY;
            bool hasRelativeX;
            bool hasRelativeY;
            bool hasFontFamily;
            bool hasFontStyle;
            bool hasFontSize;
            bool hasFontWeight;
            bool hasHalign;
            bool hasUnderline;
            bool hasOverline;
            bool hasLineThrough;
            bool hasRotation;
            bool hasLetterSpacing;
            bool hasLineHeight;
            bool hasLang;
            bool hasSpace;
            bool hasEnclosure;
        };
        
		class Words;
		using WordsPtr = std::shared_ptr<Words>;
		using WordsUPtr = std::unique_ptr<Words>;
		using WordsSet = std::vector<WordsPtr>;
		using WordsSetIter = WordsSet::iterator;
		using WordsSetIterConst = WordsSet::const_iterator;
		inline WordsPtr makeWords() { return std::make_shared<Words>(); }
        class Words : public ElementInterface
        {
        public:
            Words();
            Words( const types::XsString& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            WordsAttributesPtr getAttributes() const;
            void setAttributes( const WordsAttributesPtr& attributes );
            types::XsString getValue() const;
            void setValue( const types::XsString& value );
        private:
            types::XsString myValue;
            WordsAttributesPtr myAttributes;
        };
        
        
        /**************** PrincipalVoice ****************
         3400
         <xs:element name="principal-voice" type="principal-voice"/>
         <xs:complexType name="principal-voice">
         <xs:annotation>
         <xs:documentation>The principal-voice element represents principal and secondary voices in a score, either for analysis or for square bracket symbols that appear in a score. The symbol attribute indicates the type of symbol used at the start of the principal-voice. The content of the principal-voice element is used for analysis and may be any text value. When used for analysis separate from any printed score markings, the symbol attribute should be set to "none".</xs:documentation>
         </xs:annotation>
         <xs:simpleContent>
         <xs:extension base="xs:string">
         <xs:attribute name="type" type="start-stop" use="required"/>
         <xs:attribute name="symbol" type="principal-voice-symbol" use="required"/>
         <xs:attributeGroup ref="print-style-align"/>
         </xs:extension>
         </xs:simpleContent>
         </xs:complexType>
         <xs:simpleType name="xs:string"/>
         */
        struct PrincipalVoiceAttributes;
        using PrincipalVoiceAttributesPtr = std::shared_ptr<PrincipalVoiceAttributes>;
        
        struct PrincipalVoiceAttributes : public AttributesInterface
        {
        public:
            PrincipalVoiceAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::StartStop type;
            types::PrincipalVoiceSymbol symbol;
            types::TenthsValue defaultX;
            types::TenthsValue defaultY;
            types::TenthsValue relativeX;
            types::TenthsValue relativeY;
            types::CommaSeparatedText fontFamily;
            types::FontStyle fontStyle;
            types::FontSize fontSize;
            types::FontWeight fontWeight;
            types::LeftCenterRight halign;
            const   bool hasType;
            const   bool hasSymbol;
            bool hasDefaultX;
            bool hasDefaultY;
            bool hasRelativeX;
            bool hasRelativeY;
            bool hasFontFamily;
            bool hasFontStyle;
            bool hasFontSize;
            bool hasFontWeight;
            bool hasHalign;
        };
        
		class PrincipalVoice;
		using PrincipalVoicePtr = std::shared_ptr<PrincipalVoice>;
		using PrincipalVoiceUPtr = std::unique_ptr<PrincipalVoice>;
		using PrincipalVoiceSet = std::vector<PrincipalVoicePtr>;
		using PrincipalVoiceSetIter = PrincipalVoiceSet::iterator;
		using PrincipalVoiceSetIterConst = PrincipalVoiceSet::const_iterator;
		inline PrincipalVoicePtr makePrincipalVoice() { return std::make_shared<PrincipalVoice>(); }
        class PrincipalVoice : public ElementInterface
        {
        public:
            PrincipalVoice();
            PrincipalVoice( const types::XsString& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            PrincipalVoiceAttributesPtr getAttributes() const;
            void setAttributes( const PrincipalVoiceAttributesPtr& attributes );
            types::XsString getValue() const;
            void setValue( const types::XsString& value );
        private:
            types::XsString myValue;
            PrincipalVoiceAttributesPtr myAttributes;
        };
        
        
        /**************** OtherDirection ****************
         3410
         <xs:element name="other-direction" type="other-direction"/>
         <xs:complexType name="other-direction">
         <xs:annotation>
         <xs:documentation>The other-direction type is used to define any direction symbols not yet in the current version of the MusicXML format. This allows extended representation, though without application interoperability.</xs:documentation>
         </xs:annotation>
         <xs:simpleContent>
         <xs:extension base="xs:string">
         <xs:attributeGroup ref="print-object"/>
         <xs:attributeGroup ref="print-style-align"/>
         </xs:extension>
         </xs:simpleContent>
         </xs:complexType>
         <xs:simpleType name="xs:string"/>
         */
        struct OtherDirectionAttributes;
        using OtherDirectionAttributesPtr = std::shared_ptr<OtherDirectionAttributes>;
        
        struct OtherDirectionAttributes : public AttributesInterface
        {
        public:
            OtherDirectionAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::YesNo printObject;
            types::TenthsValue defaultX;
            types::TenthsValue defaultY;
            types::TenthsValue relativeX;
            types::TenthsValue relativeY;
            types::CommaSeparatedText fontFamily;
            types::FontStyle fontStyle;
            types::FontSize fontSize;
            types::FontWeight fontWeight;
            types::LeftCenterRight halign;
            bool hasPrintObject;
            bool hasDefaultX;
            bool hasDefaultY;
            bool hasRelativeX;
            bool hasRelativeY;
            bool hasFontFamily;
            bool hasFontStyle;
            bool hasFontSize;
            bool hasFontWeight;
            bool hasHalign;
        };
        
		class OtherDirection;
		using OtherDirectionPtr = std::shared_ptr<OtherDirection>;
		using OtherDirectionUPtr = std::unique_ptr<OtherDirection>;
		using OtherDirectionSet = std::vector<OtherDirectionPtr>;
		using OtherDirectionSetIter = OtherDirectionSet::iterator;
		using OtherDirectionSetIterConst = OtherDirectionSet::const_iterator;
		inline OtherDirectionPtr makeOtherDirection() { return std::make_shared<OtherDirection>(); }
        class OtherDirection : public ElementInterface
        {
        public:
            OtherDirection();
            OtherDirection( const types::XsString& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            OtherDirectionAttributesPtr getAttributes() const;
            void setAttributes( const OtherDirectionAttributesPtr& attributes );
            types::XsString getValue() const;
            void setValue( const types::XsString& value );
        private:
            types::XsString myValue;
            OtherDirectionAttributesPtr myAttributes;
        };
        
        
        /**************** FirstFret ****************
         3451
         <xs:element name="first-fret" type="first-fret" minOccurs="0"/>
         <xs:complexType name="first-fret">
         <xs:annotation>
         <xs:documentation>The first-fret type indicates which fret is shown in the top space of the frame; it is fret 1 if the element is not present. The optional text attribute indicates how this is represented in the fret diagram, while the location attribute indicates whether the text appears to the left or right of the frame.</xs:documentation>
         </xs:annotation>
         <xs:simpleContent>
         <xs:extension base="xs:positiveInteger">
         <xs:attribute name="text" type="xs:token"/>
         <xs:attribute name="location" type="left-right"/>
         </xs:extension>
         </xs:simpleContent>
         </xs:complexType>
         <xs:simpleType name="xs:positiveInteger"/>
         */
        struct FirstFretAttributes;
        using FirstFretAttributesPtr = std::shared_ptr<FirstFretAttributes>;
        
        struct FirstFretAttributes : public AttributesInterface
        {
        public:
            FirstFretAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::XsToken text;
            types::LeftRight location;
            bool hasText;
            bool hasLocation;
        };
        
		class FirstFret;
		using FirstFretPtr = std::shared_ptr<FirstFret>;
		using FirstFretUPtr = std::unique_ptr<FirstFret>;
		using FirstFretSet = std::vector<FirstFretPtr>;
		using FirstFretSetIter = FirstFretSet::iterator;
		using FirstFretSetIterConst = FirstFretSet::const_iterator;
		inline FirstFretPtr makeFirstFret() { return std::make_shared<FirstFret>(); }
        class FirstFret : public ElementInterface
        {
        public:
            FirstFret();
            FirstFret( const types::PositiveInteger& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            FirstFretAttributesPtr getAttributes() const;
            void setAttributes( const FirstFretAttributesPtr& attributes );
            types::PositiveInteger getValue() const;
            void setValue( const types::PositiveInteger& value );
        private:
            types::PositiveInteger myValue;
            FirstFretAttributesPtr myAttributes;
        };
        
        
        /**************** Fret ****************
         3484, 5390
         <xs:element name="fret" type="fret"/>
         <xs:complexType name="fret">
         <xs:annotation>
         <xs:documentation>The fret element is used with tablature notation and chord diagrams. Fret numbers start with 0 for an open string and 1 for the first fret.</xs:documentation>
         </xs:annotation>
         <xs:simpleContent>
         <xs:extension base="xs:nonNegativeInteger">
         <xs:attributeGroup ref="font"/>
         <xs:attributeGroup ref="color"/>
         </xs:extension>
         </xs:simpleContent>
         </xs:complexType>
         <xs:simpleType name="xs:nonNegativeInteger"/>
         */
        struct FretAttributes;
        using FretAttributesPtr = std::shared_ptr<FretAttributes>;
        
        struct FretAttributes : public AttributesInterface
        {
        public:
            FretAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::CommaSeparatedText fontFamily;
            types::FontStyle fontStyle;
            types::FontSize fontSize;
            types::FontWeight fontWeight;
            bool hasFontFamily;
            bool hasFontStyle;
            bool hasFontSize;
            bool hasFontWeight;
        };
        
		class Fret;
		using FretPtr = std::shared_ptr<Fret>;
		using FretUPtr = std::unique_ptr<Fret>;
		using FretSet = std::vector<FretPtr>;
		using FretSetIter = FretSet::iterator;
		using FretSetIterConst = FretSet::const_iterator;
		inline FretPtr makeFret() { return std::make_shared<Fret>(); }
        class Fret : public ElementInterface
        {
        public:
            Fret();
            Fret( const types::NonNegativeInteger& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            FretAttributesPtr getAttributes() const;
            void setAttributes( const FretAttributesPtr& attributes );
            types::NonNegativeInteger getValue() const;
            void setValue( const types::NonNegativeInteger& value );
        private:
            types::NonNegativeInteger myValue;
            FretAttributesPtr myAttributes;
        };
        
        
        /**************** Fingering ****************
         3487, 5362
         <xs:element name="fingering" type="fingering" minOccurs="0"/>
         <xs:complexType name="fingering">
         <xs:annotation>
         <xs:documentation>Fingering is typically indicated 1,2,3,4,5. Multiple fingerings may be given, typically to substitute fingerings in the middle of a note. The substitution and alternate values are "no" if the attribute is not present. For guitar and other fretted instruments, the fingering element represents the fretting finger; the pluck element represents the plucking finger.</xs:documentation>
         </xs:annotation>
         <xs:simpleContent>
         <xs:extension base="xs:string">
         <xs:attribute name="substitution" type="yes-no"/>
         <xs:attribute name="alternate" type="yes-no"/>
         <xs:attributeGroup ref="print-style"/>
         <xs:attributeGroup ref="placement"/>
         </xs:extension>
         </xs:simpleContent>
         </xs:complexType>
         <xs:simpleType name="xs:string"/>
         */
        struct FingeringAttributes;
        using FingeringAttributesPtr = std::shared_ptr<FingeringAttributes>;
        
        struct FingeringAttributes : public AttributesInterface
        {
        public:
            FingeringAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::YesNo substitution;
            types::YesNo alternate;
            types::TenthsValue defaultX;
            types::TenthsValue defaultY;
            types::TenthsValue relativeX;
            types::TenthsValue relativeY;
            types::CommaSeparatedText fontFamily;
            types::FontStyle fontStyle;
            types::FontSize fontSize;
            types::FontWeight fontWeight;
            types::AboveBelow placement;
            bool hasSubstitution;
            bool hasAlternate;
            bool hasDefaultX;
            bool hasDefaultY;
            bool hasRelativeX;
            bool hasRelativeY;
            bool hasFontFamily;
            bool hasFontStyle;
            bool hasFontSize;
            bool hasFontWeight;
            bool hasPlacement;
        };
        
		class Fingering;
		using FingeringPtr = std::shared_ptr<Fingering>;
		using FingeringUPtr = std::unique_ptr<Fingering>;
		using FingeringSet = std::vector<FingeringPtr>;
		using FingeringSetIter = FingeringSet::iterator;
		using FingeringSetIterConst = FingeringSet::const_iterator;
		inline FingeringPtr makeFingering() { return std::make_shared<Fingering>(); }
        class Fingering : public ElementInterface
        {
        public:
            Fingering();
            Fingering( const types::XsString& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            FingeringAttributesPtr getAttributes() const;
            void setAttributes( const FingeringAttributesPtr& attributes );
            types::XsString getValue() const;
            void setValue( const types::XsString& value );
        private:
            types::XsString myValue;
            FingeringAttributesPtr myAttributes;
        };
        
        
        /**************** Feature ****************
         3500
         <xs:element name="feature" type="feature" minOccurs="0" maxOccurs="unbounded"/>
         <xs:complexType name="feature">
         <xs:annotation>
         <xs:documentation>The feature type is a part of the grouping element used for musical analysis. The type attribute represents the type of the feature and the element content represents its value. This type is flexible to allow for different analyses.</xs:documentation>
         </xs:annotation>
         <xs:simpleContent>
         <xs:extension base="xs:string">
         <xs:attribute name="type" type="xs:token"/>
         </xs:extension>
         </xs:simpleContent>
         </xs:complexType>
         <xs:simpleType name="xs:string"/>
         */
        struct FeatureAttributes;
        using FeatureAttributesPtr = std::shared_ptr<FeatureAttributes>;
        
        struct FeatureAttributes : public AttributesInterface
        {
        public:
            FeatureAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::XsToken type;
            bool hasType;
        };
        
		class Feature;
		using FeaturePtr = std::shared_ptr<Feature>;
		using FeatureUPtr = std::unique_ptr<Feature>;
		using FeatureSet = std::vector<FeaturePtr>;
		using FeatureSetIter = FeatureSet::iterator;
		using FeatureSetIterConst = FeatureSet::const_iterator;
		inline FeaturePtr makeFeature() { return std::make_shared<Feature>(); }
        class Feature : public ElementInterface
        {
        public:
            Feature();
            Feature( const types::XsString& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            FeatureAttributesPtr getAttributes() const;
            void setAttributes( const FeatureAttributesPtr& attributes );
            types::XsString getValue() const;
            void setValue( const types::XsString& value );
        private:
            types::XsString myValue;
            FeatureAttributesPtr myAttributes;
        };
        
        
        /**************** Offset ****************
         3305, 3528, 3934
         <xs:element name="offset" type="offset" minOccurs="0"/>
         <xs:complexType name="offset">
         <xs:annotation>
         <xs:documentation>An offset is represented in terms of divisions, and indicates where the direction will appear relative to the current musical location. This affects the visual appearance of the direction. If the sound attribute is "yes", then the offset affects playback too. If the sound attribute is "no", then any sound associated with the direction takes effect at the current location. The sound attribute is "no" by default for compatibility with earlier versions of the MusicXML format. If an element within a direction includes a default-x attribute, the offset value will be ignored when determining the appearance of that element.</xs:documentation>
         </xs:annotation>
         <xs:simpleContent>
         <xs:extension base="divisions">
         <xs:attribute name="sound" type="yes-no"/>
         </xs:extension>
         </xs:simpleContent>
         </xs:complexType>
         <xs:simpleType name="divisions">
         <xs:annotation>
         <xs:documentation>The divisions type is used to express values in terms of the musical divisions defined by the divisions element. It is preferred that these be integer values both for MIDI interoperability and to avoid roundoff errors.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:decimal"/>
         </xs:simpleType>
         */
        
        
        
        /**************** PerMinute ****************
         3621
         <xs:element name="per-minute" type="per-minute"/>
         <xs:complexType name="per-minute">
         <xs:annotation>
         <xs:documentation>The per-minute type can be a number, or a text description including numbers. If a font is specified, it overrides the font specified for the overall metronome element. This allows separate specification of a music font for the beat-unit and a text font for the numeric value, in cases where a single metronome font is not used.</xs:documentation>
         </xs:annotation>
         <xs:simpleContent>
         <xs:extension base="xs:string">
         <xs:attributeGroup ref="font"/>
         </xs:extension>
         </xs:simpleContent>
         </xs:complexType>
         <xs:simpleType name="xs:string"/>
         */
        struct PerMinuteAttributes;
        using PerMinuteAttributesPtr = std::shared_ptr<PerMinuteAttributes>;
        
        struct PerMinuteAttributes : public AttributesInterface
        {
        public:
            PerMinuteAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::CommaSeparatedText fontFamily;
            types::FontStyle fontStyle;
            types::FontSize fontSize;
            types::FontWeight fontWeight;
            bool hasFontFamily;
            bool hasFontStyle;
            bool hasFontSize;
            bool hasFontWeight;
        };
        
		class PerMinute;
		using PerMinutePtr = std::shared_ptr<PerMinute>;
		using PerMinuteUPtr = std::unique_ptr<PerMinute>;
		using PerMinuteSet = std::vector<PerMinutePtr>;
		using PerMinuteSetIter = PerMinuteSet::iterator;
		using PerMinuteSetIterConst = PerMinuteSet::const_iterator;
		inline PerMinutePtr makePerMinute() { return std::make_shared<PerMinute>(); }
        class PerMinute : public ElementInterface
        {
        public:
            PerMinute();
            PerMinute( const types::XsString& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            PerMinuteAttributesPtr getAttributes() const;
            void setAttributes( const PerMinuteAttributesPtr& attributes );
            types::XsString getValue() const;
            void setValue( const types::XsString& value );
        private:
            types::XsString myValue;
            PerMinuteAttributesPtr myAttributes;
        };
        
        
        /**************** MetronomeBeam ****************
         3677
         <xs:element name="metronome-beam" type="metronome-beam" minOccurs="0" maxOccurs="unbounded"/>
         <xs:complexType name="metronome-beam">
         <xs:annotation>
         <xs:documentation>The metronome-beam type works like the beam type in defining metric relationships, but does not include all the attributes available in the beam type.</xs:documentation>
         </xs:annotation>
         <xs:simpleContent>
         <xs:extension base="beam-value">
         <xs:attribute name="number" type="beam-level" default="1"/>
         </xs:extension>
         </xs:simpleContent>
         </xs:complexType>
         <xs:simpleType name="beam-value">
         <xs:annotation>
         <xs:documentation>The beam-value type represents the type of beam associated with each of 8 beam levels (up to 1024th notes) available for each note.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:string">
         <xs:enumeration value="begin"/>
         <xs:enumeration value="continue"/>
         <xs:enumeration value="end"/>
         <xs:enumeration value="forward hook"/>
         <xs:enumeration value="backward hook"/>
         </xs:restriction>
         </xs:simpleType>
         */
        struct MetronomeBeamAttributes;
        using MetronomeBeamAttributesPtr = std::shared_ptr<MetronomeBeamAttributes>;
        
        struct MetronomeBeamAttributes : public AttributesInterface
        {
        public:
            MetronomeBeamAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::BeamLevel number;
            bool hasNumber;
        };
        
		class MetronomeBeam;
		using MetronomeBeamPtr = std::shared_ptr<MetronomeBeam>;
		using MetronomeBeamUPtr = std::unique_ptr<MetronomeBeam>;
		using MetronomeBeamSet = std::vector<MetronomeBeamPtr>;
		using MetronomeBeamSetIter = MetronomeBeamSet::iterator;
		using MetronomeBeamSetIterConst = MetronomeBeamSet::const_iterator;
		inline MetronomeBeamPtr makeMetronomeBeam() { return std::make_shared<MetronomeBeam>(); }
        class MetronomeBeam : public ElementInterface
        {
        public:
            MetronomeBeam();
            MetronomeBeam( const types::BeamValue& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            MetronomeBeamAttributesPtr getAttributes() const;
            void setAttributes( const MetronomeBeamAttributesPtr& attributes );
            types::BeamValue getValue() const;
            void setValue( const types::BeamValue& value );
        private:
            types::BeamValue myValue;
            MetronomeBeamAttributesPtr myAttributes;
        };
        
        
        /**************** Beater ****************
         3809
         <xs:element name="beater" type="beater"/>
         <xs:complexType name="beater">
         <xs:annotation>
         <xs:documentation>The beater type represents pictograms for beaters, mallets, and sticks that do not have different materials represented in the pictogram.</xs:documentation>
         </xs:annotation>
         <xs:simpleContent>
         <xs:extension base="beater-value">
         <xs:attribute name="tip" type="tip-direction"/>
         </xs:extension>
         </xs:simpleContent>
         </xs:complexType>
         <xs:simpleType name="beater-value">
         <xs:annotation>
         <xs:documentation>The beater-value type represents pictograms for beaters, mallets, and sticks that do not have different materials represented in the pictogram. The finger and hammer values are in addition to Stone's list.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:string">
         <xs:enumeration value="bow"/>
         <xs:enumeration value="chime hammer"/>
         <xs:enumeration value="coin"/>
         <xs:enumeration value="finger"/>
         <xs:enumeration value="fingernail"/>
         <xs:enumeration value="fist"/>
         <xs:enumeration value="guiro scraper"/>
         <xs:enumeration value="hammer"/>
         <xs:enumeration value="hand"/>
         <xs:enumeration value="jazz stick"/>
         <xs:enumeration value="knitting needle"/>
         <xs:enumeration value="metal hammer"/>
         <xs:enumeration value="snare stick"/>
         <xs:enumeration value="spoon mallet"/>
         <xs:enumeration value="triangle beater"/>
         <xs:enumeration value="triangle beater plain"/>
         <xs:enumeration value="wire brush"/>
         </xs:restriction>
         </xs:simpleType>
         */
        struct BeaterAttributes;
        using BeaterAttributesPtr = std::shared_ptr<BeaterAttributes>;
        
        struct BeaterAttributes : public AttributesInterface
        {
        public:
            BeaterAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::TipDirection tip;
            bool hasTip;
        };
        
		class Beater;
		using BeaterPtr = std::shared_ptr<Beater>;
		using BeaterUPtr = std::unique_ptr<Beater>;
		using BeaterSet = std::vector<BeaterPtr>;
		using BeaterSetIter = BeaterSet::iterator;
		using BeaterSetIterConst = BeaterSet::const_iterator;
		inline BeaterPtr makeBeater() { return std::make_shared<Beater>(); }
        class Beater : public ElementInterface
        {
        public:
            Beater();
            Beater( const types::BeaterValue& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            BeaterAttributesPtr getAttributes() const;
            void setAttributes( const BeaterAttributesPtr& attributes );
            types::BeaterValue getValue() const;
            void setValue( const types::BeaterValue& value );
        private:
            types::BeaterValue myValue;
            BeaterAttributesPtr myAttributes;
        };
        
        
        /**************** MeasureNumbering ****************
         3853
         <xs:element name="measure-numbering" type="measure-numbering" minOccurs="0"/>
         <xs:complexType name="measure-numbering">
         <xs:annotation>
         <xs:documentation>The measure-numbering type describes how frequently measure numbers are displayed on this part. The number attribute from the measure element is used for printing. Measures with an implicit attribute set to "yes" never display a measure number, regardless of the measure-numbering setting.</xs:documentation>
         </xs:annotation>
         <xs:simpleContent>
         <xs:extension base="measure-numbering-value">
         <xs:attributeGroup ref="print-style-align"/>
         </xs:extension>
         </xs:simpleContent>
         </xs:complexType>
         <xs:simpleType name="measure-numbering-value">
         <xs:annotation>
         <xs:documentation>The measure-numbering-value type describes how measure numbers are displayed on this part: no numbers, numbers every measure, or numbers every system.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:string">
         <xs:enumeration value="none"/>
         <xs:enumeration value="measure"/>
         <xs:enumeration value="system"/>
         </xs:restriction>
         </xs:simpleType>
         */
        struct MeasureNumberingAttributes;
        using MeasureNumberingAttributesPtr = std::shared_ptr<MeasureNumberingAttributes>;
        
        struct MeasureNumberingAttributes : public AttributesInterface
        {
        public:
            MeasureNumberingAttributes();
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
            types::LeftCenterRight halign;
            bool hasDefaultX;
            bool hasDefaultY;
            bool hasRelativeX;
            bool hasRelativeY;
            bool hasFontFamily;
            bool hasFontStyle;
            bool hasFontSize;
            bool hasFontWeight;
            bool hasHalign;
        };
        
		class MeasureNumbering;
		using MeasureNumberingPtr = std::shared_ptr<MeasureNumbering>;
		using MeasureNumberingUPtr = std::unique_ptr<MeasureNumbering>;
		using MeasureNumberingSet = std::vector<MeasureNumberingPtr>;
		using MeasureNumberingSetIter = MeasureNumberingSet::iterator;
		using MeasureNumberingSetIterConst = MeasureNumberingSet::const_iterator;
		inline MeasureNumberingPtr makeMeasureNumbering() { return std::make_shared<MeasureNumbering>(); }
        class MeasureNumbering : public ElementInterface
        {
        public:
            MeasureNumbering();
            MeasureNumbering( const types::MeasureNumberingValue& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            MeasureNumberingAttributesPtr getAttributes() const;
            void setAttributes( const MeasureNumberingAttributesPtr& attributes );
            types::MeasureNumberingValue getValue() const;
            void setValue( const types::MeasureNumberingValue& value );
        private:
            types::MeasureNumberingValue myValue;
            MeasureNumberingAttributesPtr myAttributes;
        };
        
        
        /**************** RootStep ****************
         3872
         <xs:element name="root-step" type="root-step"/>
         <xs:complexType name="root-step">
         <xs:annotation>
         <xs:documentation>The root-step type represents the pitch step of the root of the current chord within the harmony element. The text attribute indicates how the root should appear in a score if not using the element contents.</xs:documentation>
         </xs:annotation>
         <xs:simpleContent>
         <xs:extension base="step">
         <xs:attribute name="text" type="xs:token"/>
         <xs:attributeGroup ref="print-style"/>
         </xs:extension>
         </xs:simpleContent>
         </xs:complexType>
         <xs:simpleType name="step">
         <xs:annotation>
         <xs:documentation>The step type represents a step of the diatonic scale, represented using the English letters A through G.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:string">
         <xs:enumeration value="A"/>
         <xs:enumeration value="B"/>
         <xs:enumeration value="C"/>
         <xs:enumeration value="D"/>
         <xs:enumeration value="E"/>
         <xs:enumeration value="F"/>
         <xs:enumeration value="G"/>
         </xs:restriction>
         </xs:simpleType>
         */
        struct RootStepAttributes;
        using RootStepAttributesPtr = std::shared_ptr<RootStepAttributes>;
        
        struct RootStepAttributes : public AttributesInterface
        {
        public:
            RootStepAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::XsToken text;
            types::TenthsValue defaultX;
            types::TenthsValue defaultY;
            types::TenthsValue relativeX;
            types::TenthsValue relativeY;
            types::CommaSeparatedText fontFamily;
            types::FontStyle fontStyle;
            types::FontSize fontSize;
            types::FontWeight fontWeight;
            bool hasText;
            bool hasDefaultX;
            bool hasDefaultY;
            bool hasRelativeX;
            bool hasRelativeY;
            bool hasFontFamily;
            bool hasFontStyle;
            bool hasFontSize;
            bool hasFontWeight;
        };
        
		class RootStep;
		using RootStepPtr = std::shared_ptr<RootStep>;
		using RootStepUPtr = std::unique_ptr<RootStep>;
		using RootStepSet = std::vector<RootStepPtr>;
		using RootStepSetIter = RootStepSet::iterator;
		using RootStepSetIterConst = RootStepSet::const_iterator;
		inline RootStepPtr makeRootStep() { return std::make_shared<RootStep>(); }
        class RootStep : public ElementInterface
        {
        public:
            RootStep();
            RootStep( const types::StepEnum& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            RootStepAttributesPtr getAttributes() const;
            void setAttributes( const RootStepAttributesPtr& attributes );
            types::StepEnum getValue() const;
            void setValue( const types::StepEnum& value );
        private:
            types::StepEnum myValue;
            RootStepAttributesPtr myAttributes;
        };
        
        
        /**************** RootAlter ****************
         3875
         <xs:element name="root-alter" type="root-alter" minOccurs="0"/>
         <xs:complexType name="root-alter">
         <xs:annotation>
         <xs:documentation>The root-alter type represents the chromatic alteration of the root of the current chord within the harmony element. In some chord styles, the text for the root-step element may include root-alter information. In that case, the print-object attribute of the root-alter element can be set to no. The location attribute indicates whether the alteration should appear to the left or the right of the root-step; it is right by default.</xs:documentation>
         </xs:annotation>
         <xs:simpleContent>
         <xs:extension base="semitones">
         <xs:attributeGroup ref="print-object"/>
         <xs:attributeGroup ref="print-style"/>
         <xs:attribute name="location" type="left-right"/>
         </xs:extension>
         </xs:simpleContent>
         </xs:complexType>
         <xs:simpleType name="semitones">
         <xs:annotation>
         <xs:documentation>The semitones type is a number representing semitones, used for chromatic alteration. A value of -1 corresponds to a flat and a value of 1 to a sharp. Decimal values like 0.5 (quarter tone sharp) are used for microtones.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:decimal"/>
         </xs:simpleType>
         */
        struct RootAlterAttributes;
        using RootAlterAttributesPtr = std::shared_ptr<RootAlterAttributes>;
        
        struct RootAlterAttributes : public AttributesInterface
        {
        public:
            RootAlterAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::YesNo printObject;
            types::TenthsValue defaultX;
            types::TenthsValue defaultY;
            types::TenthsValue relativeX;
            types::TenthsValue relativeY;
            types::CommaSeparatedText fontFamily;
            types::FontStyle fontStyle;
            types::FontSize fontSize;
            types::FontWeight fontWeight;
            types::LeftRight location;
            bool hasPrintObject;
            bool hasDefaultX;
            bool hasDefaultY;
            bool hasRelativeX;
            bool hasRelativeY;
            bool hasFontFamily;
            bool hasFontStyle;
            bool hasFontSize;
            bool hasFontWeight;
            bool hasLocation;
        };
        
		class RootAlter;
		using RootAlterPtr = std::shared_ptr<RootAlter>;
		using RootAlterUPtr = std::unique_ptr<RootAlter>;
		using RootAlterSet = std::vector<RootAlterPtr>;
		using RootAlterSetIter = RootAlterSet::iterator;
		using RootAlterSetIterConst = RootAlterSet::const_iterator;
		inline RootAlterPtr makeRootAlter() { return std::make_shared<RootAlter>(); }
        class RootAlter : public ElementInterface
        {
        public:
            RootAlter();
            RootAlter( const types::Semitones& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            RootAlterAttributesPtr getAttributes() const;
            void setAttributes( const RootAlterAttributesPtr& attributes );
            types::Semitones getValue() const;
            void setValue( const types::Semitones& value );
        private:
            types::Semitones myValue;
            RootAlterAttributesPtr myAttributes;
        };
        
        
        /**************** MidiDevice ****************
         3922, 5955
         <xs:element name="midi-device" type="midi-device" minOccurs="0"/>
         <xs:complexType name="midi-device">
         <xs:annotation>
         <xs:documentation>The midi-device type corresponds to the DeviceName meta event in Standard MIDI Files. The optional port attribute is a number from 1 to 16 that can be used with the unofficial MIDI port (or cable) meta event. Unlike the DeviceName meta event, there can be multiple midi-device elements per MusicXML part starting in MusicXML 3.0. The optional id attribute refers to the score-instrument assigned to this device. If missing, the device assignment affects all score-instrument elements in the score-part.</xs:documentation>
         </xs:annotation>
         <xs:simpleContent>
         <xs:extension base="xs:string">
         <xs:attribute name="port" type="midi-16"/>
         <xs:attribute name="id" type="xs:IDREF"/>
         </xs:extension>
         </xs:simpleContent>
         </xs:complexType>
         <xs:simpleType name="xs:string"/>
         */
        struct MidiDeviceAttributes;
        using MidiDeviceAttributesPtr = std::shared_ptr<MidiDeviceAttributes>;
        
        struct MidiDeviceAttributes : public AttributesInterface
        {
        public:
            MidiDeviceAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::Midi16 port;
            types::XsIDREF id;
            bool hasPort;
            bool hasId;
        };
        
		class MidiDevice;
		using MidiDevicePtr = std::shared_ptr<MidiDevice>;
		using MidiDeviceUPtr = std::unique_ptr<MidiDevice>;
		using MidiDeviceSet = std::vector<MidiDevicePtr>;
		using MidiDeviceSetIter = MidiDeviceSet::iterator;
		using MidiDeviceSetIterConst = MidiDeviceSet::const_iterator;
		inline MidiDevicePtr makeMidiDevice() { return std::make_shared<MidiDevice>(); }
        class MidiDevice : public ElementInterface
        {
        public:
            MidiDevice();
            MidiDevice( const types::XsString& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            MidiDeviceAttributesPtr getAttributes() const;
            void setAttributes( const MidiDeviceAttributesPtr& attributes );
            types::XsString getValue() const;
            void setValue( const types::XsString& value );
        private:
            types::XsString myValue;
            MidiDeviceAttributesPtr myAttributes;
        };
        
        
        /**************** Offset ****************
         3305, 3528, 3934
         <xs:element name="offset" type="offset" minOccurs="0"/>
         <xs:complexType name="offset">
         <xs:annotation>
         <xs:documentation>An offset is represented in terms of divisions, and indicates where the direction will appear relative to the current musical location. This affects the visual appearance of the direction. If the sound attribute is "yes", then the offset affects playback too. If the sound attribute is "no", then any sound associated with the direction takes effect at the current location. The sound attribute is "no" by default for compatibility with earlier versions of the MusicXML format. If an element within a direction includes a default-x attribute, the offset value will be ignored when determining the appearance of that element.</xs:documentation>
         </xs:annotation>
         <xs:simpleContent>
         <xs:extension base="divisions">
         <xs:attribute name="sound" type="yes-no"/>
         </xs:extension>
         </xs:simpleContent>
         </xs:complexType>
         <xs:simpleType name="divisions">
         <xs:annotation>
         <xs:documentation>The divisions type is used to express values in terms of the musical divisions defined by the divisions element. It is preferred that these be integer values both for MIDI interoperability and to avoid roundoff errors.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:decimal"/>
         </xs:simpleType>
         */
        
        /**************** Encoder ****************
         4048
         <xs:element name="encoder" type="typed-text"/>
         <xs:complexType name="typed-text">
         <xs:annotation>
         <xs:documentation>The typed-text type represents a text element with a type attributes.</xs:documentation>
         </xs:annotation>
         <xs:simpleContent>
         <xs:extension base="xs:string">
         <xs:attribute name="type" type="xs:token"/>
         </xs:extension>
         </xs:simpleContent>
         </xs:complexType>
         <xs:simpleType name="xs:string"/>
         */
        struct EncoderAttributes;
        using EncoderAttributesPtr = std::shared_ptr<EncoderAttributes>;
        
        struct EncoderAttributes : public AttributesInterface
        {
        public:
            EncoderAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::XsToken type;
            bool hasType;
        };
        
		class Encoder;
		using EncoderPtr = std::shared_ptr<Encoder>;
		using EncoderUPtr = std::unique_ptr<Encoder>;
		using EncoderSet = std::vector<EncoderPtr>;
		using EncoderSetIter = EncoderSet::iterator;
		using EncoderSetIterConst = EncoderSet::const_iterator;
		inline EncoderPtr makeEncoder() { return std::make_shared<Encoder>(); }
        class Encoder : public ElementInterface
        {
        public:
            Encoder();
            Encoder( const types::XsString& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            EncoderAttributesPtr getAttributes() const;
            void setAttributes( const EncoderAttributesPtr& attributes );
            types::XsString getValue() const;
            void setValue( const types::XsString& value );
        private:
            types::XsString myValue;
            EncoderAttributesPtr myAttributes;
        };
        
        
        /**************** Creator ****************
         4065
         <xs:element name="creator" type="typed-text" minOccurs="0" maxOccurs="unbounded">  <xs:annotation>     <xs:documentation>The creator element is borrowed from Dublin Core. It is used for the creators of the score. The type attribute is used to distinguish different creative contributions. Thus there can be multiple creators within an identification. Standard type values are composer lyricist and arranger. Other type values may be used for different types of creative roles. The type attribute should usually be used even if there is just a single creator element. The MusicXML format does not use the creator / contributor distinction from Dublin Core.</xs:documentation> </xs:annotation></xs:element>
         <xs:complexType name="typed-text">
         <xs:annotation>
         <xs:documentation>The typed-text type represents a text element with a type attributes.</xs:documentation>
         </xs:annotation>
         <xs:simpleContent>
         <xs:extension base="xs:string">
         <xs:attribute name="type" type="xs:token"/>
         </xs:extension>
         </xs:simpleContent>
         </xs:complexType>
         <xs:simpleType name="xs:string"/>
         */
        struct CreatorAttributes;
        using CreatorAttributesPtr = std::shared_ptr<CreatorAttributes>;
        
        struct CreatorAttributes : public AttributesInterface
        {
        public:
            CreatorAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::XsToken type;
            bool hasType;
        };
        
		class Creator;
		using CreatorPtr = std::shared_ptr<Creator>;
		using CreatorUPtr = std::unique_ptr<Creator>;
		using CreatorSet = std::vector<CreatorPtr>;
		using CreatorSetIter = CreatorSet::iterator;
		using CreatorSetIterConst = CreatorSet::const_iterator;
		inline CreatorPtr makeCreator() { return std::make_shared<Creator>(); }
        class Creator : public ElementInterface
        {
        public:
            Creator();
            Creator( const types::XsString& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            CreatorAttributesPtr getAttributes() const;
            void setAttributes( const CreatorAttributesPtr& attributes );
            types::XsString getValue() const;
            void setValue( const types::XsString& value );
        private:
            types::XsString myValue;
            CreatorAttributesPtr myAttributes;
        };
        
        
        /**************** Rights ****************
         4072
         <xs:element name="rights" type="typed-text" minOccurs="0" maxOccurs="unbounded">   <xs:annotation>     <xs:documentation>The rights element is borrowed from Dublin Core. It contains copyright and other intellectual property notices. Words music and derivatives can have different types so multiple rights tags with different type attributes are supported. Standard type values are music words and arrangement but other types may be used. The type attribute is only needed when there are multiple rights elements.</xs:documentation>    </xs:annotation></xs:element>
         <xs:complexType name="typed-text">
         <xs:annotation>
         <xs:documentation>The typed-text type represents a text element with a type attributes.</xs:documentation>
         </xs:annotation>
         <xs:simpleContent>
         <xs:extension base="xs:string">
         <xs:attribute name="type" type="xs:token"/>
         </xs:extension>
         </xs:simpleContent>
         </xs:complexType>
         <xs:simpleType name="xs:string"/>
         */
        struct RightsAttributes;
        using RightsAttributesPtr = std::shared_ptr<RightsAttributes>;
        
        struct RightsAttributes : public AttributesInterface
        {
        public:
            RightsAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::XsToken type;
            bool hasType;
        };
        
		class Rights;
		using RightsPtr = std::shared_ptr<Rights>;
		using RightsUPtr = std::unique_ptr<Rights>;
		using RightsSet = std::vector<RightsPtr>;
		using RightsSetIter = RightsSet::iterator;
		using RightsSetIterConst = RightsSet::const_iterator;
		inline RightsPtr makeRights() { return std::make_shared<Rights>(); }
        class Rights : public ElementInterface
        {
        public:
            Rights();
            Rights( const types::XsString& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            RightsAttributesPtr getAttributes() const;
            void setAttributes( const RightsAttributesPtr& attributes );
            types::XsString getValue() const;
            void setValue( const types::XsString& value );
        private:
            types::XsString myValue;
            RightsAttributesPtr myAttributes;
        };
        
        
        /**************** Relation ****************
         4089
         <xs:element name="relation" type="typed-text" minOccurs="0" maxOccurs="unbounded"> <xs:annotation>     <xs:documentation>A related resource for the music that is encoded. This is similar to the Dublin Core relation element. Standard type values are music words and arrangement but other types may be used.</xs:documentation>   </xs:annotation></xs:element>
         <xs:complexType name="typed-text">
         <xs:annotation>
         <xs:documentation>The typed-text type represents a text element with a type attributes.</xs:documentation>
         </xs:annotation>
         <xs:simpleContent>
         <xs:extension base="xs:string">
         <xs:attribute name="type" type="xs:token"/>
         </xs:extension>
         </xs:simpleContent>
         </xs:complexType>
         <xs:simpleType name="xs:string"/>
         */
        struct RelationAttributes;
        using RelationAttributesPtr = std::shared_ptr<RelationAttributes>;
        
        struct RelationAttributes : public AttributesInterface
        {
        public:
            RelationAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::XsToken type;
            bool hasType;
        };
        
		class Relation;
		using RelationPtr = std::shared_ptr<Relation>;
		using RelationUPtr = std::unique_ptr<Relation>;
		using RelationSet = std::vector<RelationPtr>;
		using RelationSetIter = RelationSet::iterator;
		using RelationSetIterConst = RelationSet::const_iterator;
		inline RelationPtr makeRelation() { return std::make_shared<Relation>(); }
        class Relation : public ElementInterface
        {
        public:
            Relation();
            Relation( const types::XsString& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            RelationAttributesPtr getAttributes() const;
            void setAttributes( const RelationAttributesPtr& attributes );
            types::XsString getValue() const;
            void setValue( const types::XsString& value );
        private:
            types::XsString myValue;
            RelationAttributesPtr myAttributes;
        };
        
        
        /**************** MiscellaneousField ****************
         4105
         <xs:element name="miscellaneous-field" type="miscellaneous-field" minOccurs="0" maxOccurs="unbounded"/>
         <xs:complexType name="miscellaneous-field">
         <xs:annotation>
         <xs:documentation>If a program has other metadata not yet supported in the MusicXML format, each type of metadata can go in a miscellaneous-field element. The required name attribute indicates the type of metadata the element content represents.</xs:documentation>
         </xs:annotation>
         <xs:simpleContent>
         <xs:extension base="xs:string">
         <xs:attribute name="name" type="xs:token" use="required"/>
         </xs:extension>
         </xs:simpleContent>
         </xs:complexType>
         <xs:simpleType name="xs:string"/>
         */
        struct MiscellaneousFieldAttributes;
        using MiscellaneousFieldAttributesPtr = std::shared_ptr<MiscellaneousFieldAttributes>;
        
        struct MiscellaneousFieldAttributes : public AttributesInterface
        {
        public:
            MiscellaneousFieldAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::XsToken name;
            const   bool hasName;
        };
        
		class MiscellaneousField;
		using MiscellaneousFieldPtr = std::shared_ptr<MiscellaneousField>;
		using MiscellaneousFieldUPtr = std::unique_ptr<MiscellaneousField>;
		using MiscellaneousFieldSet = std::vector<MiscellaneousFieldPtr>;
		using MiscellaneousFieldSetIter = MiscellaneousFieldSet::iterator;
		using MiscellaneousFieldSetIterConst = MiscellaneousFieldSet::const_iterator;
		inline MiscellaneousFieldPtr makeMiscellaneousField() { return std::make_shared<MiscellaneousField>(); }
        class MiscellaneousField : public ElementInterface
        {
        public:
            MiscellaneousField();
            MiscellaneousField( const types::XsString& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            MiscellaneousFieldAttributesPtr getAttributes() const;
            void setAttributes( const MiscellaneousFieldAttributesPtr& attributes );
            types::XsString getValue() const;
            void setValue( const types::XsString& value );
        private:
            types::XsString myValue;
            MiscellaneousFieldAttributesPtr myAttributes;
        };
        
        
        /**************** LineWidth ****************
         4144
         <xs:element name="line-width" type="line-width" minOccurs="0" maxOccurs="unbounded"/>
         <xs:complexType name="line-width">
         <xs:annotation>
         <xs:documentation>The line-width type indicates the width of a line type in tenths. The type attribute defines what type of line is being defined. Values include beam, bracket, dashes, enclosure, ending, extend, heavy barline, leger, light barline, octave shift, pedal, slur middle, slur tip, staff, stem, tie middle, tie tip, tuplet bracket, and wedge. The text content is expressed in tenths.</xs:documentation>
         </xs:annotation>
         <xs:simpleContent>
         <xs:extension base="tenths">
         <xs:attribute name="type" type="line-width-type" use="required"/>
         </xs:extension>
         </xs:simpleContent>
         </xs:complexType>
         <xs:simpleType name="tenths">
         <xs:annotation>
         <xs:documentation>The tenths type is a number representing tenths of interline staff space (positive or negative). Both integer and decimal values are allowed, such as 5 for a half space and 2.5 for a quarter space. Interline space is measured from the middle of a staff line.
         
         Distances in a MusicXML file are measured in tenths of staff space. TenthsValue are then scaled to millimeters within the scaling element, used in the defaults element at the start of a score. Individual staves can apply a scaling factor to adjust staff size. When a MusicXML element or attribute refers to tenths, it means the global tenths defined by the scaling element, not the local tenths as adjusted by the staff-size element.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:decimal"/>
         </xs:simpleType>
         */
        struct LineWidthAttributes;
        using LineWidthAttributesPtr = std::shared_ptr<LineWidthAttributes>;
        
        struct LineWidthAttributes : public AttributesInterface
        {
        public:
            LineWidthAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::LineWidthType type;
            const bool hasType;
        };
        
		class LineWidth;
		using LineWidthPtr = std::shared_ptr<LineWidth>;
		using LineWidthUPtr = std::unique_ptr<LineWidth>;
		using LineWidthSet = std::vector<LineWidthPtr>;
		using LineWidthSetIter = LineWidthSet::iterator;
		using LineWidthSetIterConst = LineWidthSet::const_iterator;
		inline LineWidthPtr makeLineWidth() { return std::make_shared<LineWidth>(); }
        class LineWidth : public ElementInterface
        {
        public:
            LineWidth();
            LineWidth( const types::TenthsValue& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            LineWidthAttributesPtr getAttributes() const;
            void setAttributes( const LineWidthAttributesPtr& attributes );
            types::TenthsValue getValue() const;
            void setValue( const types::TenthsValue& value );
        private:
            types::TenthsValue myValue;
            LineWidthAttributesPtr myAttributes;
        };
        
        
        /**************** NoteSize ****************
         4149
         <xs:element name="note-size" type="note-size" minOccurs="0" maxOccurs="unbounded"/>
         <xs:complexType name="note-size">
         <xs:annotation>
         <xs:documentation>The note-size type indicates the percentage of the regular note size to use for notes with a cue and large size as defined in the type element. The grace type is used for notes of cue size that that include a grace element. The cue type is used for all other notes with cue size, whether defined explicitly or implicitly via a cue element. The large type is used for notes of large size. The text content represent the numeric percentage. A value of 100 would be identical to the size of a regular note as defined by the music font.</xs:documentation>
         </xs:annotation>
         <xs:simpleContent>
         <xs:extension base="non-negative-decimal">
         <xs:attribute name="type" type="note-size-type" use="required"/>
         </xs:extension>
         </xs:simpleContent>
         </xs:complexType>
         <xs:simpleType name="non-negative-decimal">
         <xs:annotation>
         <xs:documentation>The non-negative-decimal type specifies a non-negative decimal value.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:decimal">
         <xs:minInclusive value="0"/>
         </xs:restriction>
         </xs:simpleType>
         */
        struct NoteSizeAttributes;
        using NoteSizeAttributesPtr = std::shared_ptr<NoteSizeAttributes>;
        
        struct NoteSizeAttributes : public AttributesInterface
        {
        public:
            NoteSizeAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::NoteSizeType type;
            const   bool hasType;
        };
        
		class NoteSize;
		using NoteSizePtr = std::shared_ptr<NoteSize>;
		using NoteSizeUPtr = std::unique_ptr<NoteSize>;
		using NoteSizeSet = std::vector<NoteSizePtr>;
		using NoteSizeSetIter = NoteSizeSet::iterator;
		using NoteSizeSetIterConst = NoteSizeSet::const_iterator;
		inline NoteSizePtr makeNoteSize() { return std::make_shared<NoteSize>(); }
        class NoteSize : public ElementInterface
        {
        public:
            NoteSize();
            NoteSize( const types::NonNegativeDecimal& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            NoteSizeAttributesPtr getAttributes() const;
            void setAttributes( const NoteSizeAttributesPtr& attributes );
            types::NonNegativeDecimal getValue() const;
            void setValue( const types::NonNegativeDecimal& value );
        private:
            types::NonNegativeDecimal myValue;
            NoteSizeAttributesPtr myAttributes;
        };
        
        
        /**************** Distance ****************
         4154
         <xs:element name="distance" type="distance" minOccurs="0" maxOccurs="unbounded"/>
         <xs:complexType name="distance">
         <xs:annotation>
         <xs:documentation>The distance element represents standard distances between notation elements in tenths. The type attribute defines what type of distance is being defined. Valid values include hyphen (for hyphens in lyrics) and beam.</xs:documentation>
         </xs:annotation>
         <xs:simpleContent>
         <xs:extension base="tenths">
         <xs:attribute name="type" type="distance-type" use="required"/>
         </xs:extension>
         </xs:simpleContent>
         </xs:complexType>
         <xs:simpleType name="tenths">
         <xs:annotation>
         <xs:documentation>The tenths type is a number representing tenths of interline staff space (positive or negative). Both integer and decimal values are allowed, such as 5 for a half space and 2.5 for a quarter space. Interline space is measured from the middle of a staff line.
         
         Distances in a MusicXML file are measured in tenths of staff space. TenthsValue are then scaled to millimeters within the scaling element, used in the defaults element at the start of a score. Individual staves can apply a scaling factor to adjust staff size. When a MusicXML element or attribute refers to tenths, it means the global tenths defined by the scaling element, not the local tenths as adjusted by the staff-size element.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:decimal"/>
         </xs:simpleType>
         */
        struct DistanceAttributes;
        using DistanceAttributesPtr = std::shared_ptr<DistanceAttributes>;
        
        struct DistanceAttributes : public AttributesInterface
        {
        public:
            DistanceAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::DistanceType type;
            const   bool hasType;
        };
        
		class Distance;
		using DistancePtr = std::shared_ptr<Distance>;
		using DistanceUPtr = std::unique_ptr<Distance>;
		using DistanceSet = std::vector<DistancePtr>;
		using DistanceSetIter = DistanceSet::iterator;
		using DistanceSetIterConst = DistanceSet::const_iterator;
		inline DistancePtr makeDistance() { return std::make_shared<Distance>(); }
        class Distance : public ElementInterface
        {
        public:
            Distance();
            Distance( const types::TenthsValue& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            DistanceAttributesPtr getAttributes() const;
            void setAttributes( const DistanceAttributesPtr& attributes );
            types::TenthsValue getValue() const;
            void setValue( const types::TenthsValue& value );
        private:
            types::TenthsValue myValue;
            DistanceAttributesPtr myAttributes;
        };
        
        
        /**************** OtherAppearance ****************
         4159
         <xs:element name="other-appearance" type="other-appearance" minOccurs="0" maxOccurs="unbounded"/>
         <xs:complexType name="other-appearance">
         <xs:annotation>
         <xs:documentation>The other-appearance type is used to define any graphical settings not yet in the current version of the MusicXML format. This allows extended representation, though without application interoperability.</xs:documentation>
         </xs:annotation>
         <xs:simpleContent>
         <xs:extension base="xs:string">
         <xs:attribute name="type" type="xs:token" use="required"/>
         </xs:extension>
         </xs:simpleContent>
         </xs:complexType>
         <xs:simpleType name="xs:string"/>
         */
        struct OtherAppearanceAttributes;
        using OtherAppearanceAttributesPtr = std::shared_ptr<OtherAppearanceAttributes>;
        
        struct OtherAppearanceAttributes : public AttributesInterface
        {
        public:
            OtherAppearanceAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::XsToken type;
            const   bool hasType;
        };
        
		class OtherAppearance;
		using OtherAppearancePtr = std::shared_ptr<OtherAppearance>;
		using OtherAppearanceUPtr = std::unique_ptr<OtherAppearance>;
		using OtherAppearanceSet = std::vector<OtherAppearancePtr>;
		using OtherAppearanceSetIter = OtherAppearanceSet::iterator;
		using OtherAppearanceSetIterConst = OtherAppearanceSet::const_iterator;
		inline OtherAppearancePtr makeOtherAppearance() { return std::make_shared<OtherAppearance>(); }
        class OtherAppearance : public ElementInterface
        {
        public:
            OtherAppearance();
            OtherAppearance( const types::XsString& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            OtherAppearanceAttributesPtr getAttributes() const;
            void setAttributes( const OtherAppearanceAttributesPtr& attributes );
            types::XsString getValue() const;
            void setValue( const types::XsString& value );
        private:
            types::XsString myValue;
            OtherAppearanceAttributesPtr myAttributes;
        };
        
        
        /**************** BreathMark ****************
         4439
         <xs:element name="breath-mark" type="breath-mark"/>
         <xs:complexType name="breath-mark">
         <xs:annotation>
         <xs:documentation>The breath-mark element indicates a place to take a breath.</xs:documentation>
         </xs:annotation>
         <xs:simpleContent>
         <xs:extension base="breath-mark-value">
         <xs:attributeGroup ref="print-style"/>
         <xs:attributeGroup ref="placement"/>
         </xs:extension>
         </xs:simpleContent>
         </xs:complexType>
         <xs:simpleType name="breath-mark-value">
         <xs:annotation>
         <xs:documentation>The breath-mark-value type represents the symbol used for a breath mark.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:string">
         <xs:enumeration value=""/>
         <xs:enumeration value="comma"/>
         <xs:enumeration value="tick"/>
         </xs:restriction>
         </xs:simpleType>
         */
        struct BreathMarkAttributes;
        using BreathMarkAttributesPtr = std::shared_ptr<BreathMarkAttributes>;
        
        struct BreathMarkAttributes : public AttributesInterface
        {
        public:
            BreathMarkAttributes();
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
            types::AboveBelow placement;
            bool hasDefaultX;
            bool hasDefaultY;
            bool hasRelativeX;
            bool hasRelativeY;
            bool hasFontFamily;
            bool hasFontStyle;
            bool hasFontSize;
            bool hasFontWeight;
            bool hasPlacement;
        };
        
		class BreathMark;
		using BreathMarkPtr = std::shared_ptr<BreathMark>;
		using BreathMarkUPtr = std::unique_ptr<BreathMark>;
		using BreathMarkSet = std::vector<BreathMarkPtr>;
		using BreathMarkSetIter = BreathMarkSet::iterator;
		using BreathMarkSetIterConst = BreathMarkSet::const_iterator;
		inline BreathMarkPtr makeBreathMark() { return std::make_shared<BreathMark>(); }
        class BreathMark : public ElementInterface
        {
        public:
            BreathMark();
            BreathMark( const types::BreathMarkValue& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            BreathMarkAttributesPtr getAttributes() const;
            void setAttributes( const BreathMarkAttributesPtr& attributes );
            types::BreathMarkValue getValue() const;
            void setValue( const types::BreathMarkValue& value );
        private:
            types::BreathMarkValue myValue;
            BreathMarkAttributesPtr myAttributes;
        };
        
        
        /**************** OtherArticulation ****************
         4457
         <xs:element name="other-articulation" type="placement-text">   <xs:annotation>     <xs:documentation>The other-articulation element is used to define any articulations not yet in the MusicXML format. This allows extended representation though without application interoperability.</xs:documentation>    </xs:annotation></xs:element>
         <xs:complexType name="placement-text">
         <xs:annotation>
         <xs:documentation>The placement-text type represents a text element with print-style and placement attribute groups.</xs:documentation>
         </xs:annotation>
         <xs:simpleContent>
         <xs:extension base="xs:string">
         <xs:attributeGroup ref="print-style"/>
         <xs:attributeGroup ref="placement"/>
         </xs:extension>
         </xs:simpleContent>
         </xs:complexType>
         <xs:simpleType name="xs:string"/>
         */
        struct OtherArticulationAttributes;
        using OtherArticulationAttributesPtr = std::shared_ptr<OtherArticulationAttributes>;
        
        struct OtherArticulationAttributes : public AttributesInterface
        {
        public:
            OtherArticulationAttributes();
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
            types::AboveBelow placement;
            bool hasDefaultX;
            bool hasDefaultY;
            bool hasRelativeX;
            bool hasRelativeY;
            bool hasFontFamily;
            bool hasFontStyle;
            bool hasFontSize;
            bool hasFontWeight;
            bool hasPlacement;
        };
        
		class OtherArticulation;
		using OtherArticulationPtr = std::shared_ptr<OtherArticulation>;
		using OtherArticulationUPtr = std::unique_ptr<OtherArticulation>;
		using OtherArticulationSet = std::vector<OtherArticulationPtr>;
		using OtherArticulationSetIter = OtherArticulationSet::iterator;
		using OtherArticulationSetIterConst = OtherArticulationSet::const_iterator;
		inline OtherArticulationPtr makeOtherArticulation() { return std::make_shared<OtherArticulation>(); }
        class OtherArticulation : public ElementInterface
        {
        public:
            OtherArticulation();
            OtherArticulation( const types::XsString& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            OtherArticulationAttributesPtr getAttributes() const;
            void setAttributes( const OtherArticulationAttributesPtr& attributes );
            types::XsString getValue() const;
            void setValue( const types::XsString& value );
        private:
            types::XsString myValue;
            OtherArticulationAttributesPtr myAttributes;
        };
        
        
        /**************** WithBar ****************
         4532
         <xs:element name="with-bar" type="placement-text" minOccurs="0">   <xs:annotation>     <xs:documentation>The with-bar element indicates that the bend is to be done at the bridge with a whammy or vibrato bar. The content of the element indicates how this should be notated.</xs:documentation>    </xs:annotation></xs:element>
         <xs:complexType name="placement-text">
         <xs:annotation>
         <xs:documentation>The placement-text type represents a text element with print-style and placement attribute groups.</xs:documentation>
         </xs:annotation>
         <xs:simpleContent>
         <xs:extension base="xs:string">
         <xs:attributeGroup ref="print-style"/>
         <xs:attributeGroup ref="placement"/>
         </xs:extension>
         </xs:simpleContent>
         </xs:complexType>
         <xs:simpleType name="xs:string"/>
         */
        struct WithBarAttributes;
        using WithBarAttributesPtr = std::shared_ptr<WithBarAttributes>;
        
        struct WithBarAttributes : public AttributesInterface
        {
        public:
            WithBarAttributes();
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
            types::AboveBelow placement;
            bool hasDefaultX;
            bool hasDefaultY;
            bool hasRelativeX;
            bool hasRelativeY;
            bool hasFontFamily;
            bool hasFontStyle;
            bool hasFontSize;
            bool hasFontWeight;
            bool hasPlacement;
        };
        
		class WithBar;
		using WithBarPtr = std::shared_ptr<WithBar>;
		using WithBarUPtr = std::unique_ptr<WithBar>;
		using WithBarSet = std::vector<WithBarPtr>;
		using WithBarSetIter = WithBarSet::iterator;
		using WithBarSetIterConst = WithBarSet::const_iterator;
		inline WithBarPtr makeWithBar() { return std::make_shared<WithBar>(); }
        class WithBar : public ElementInterface
        {
        public:
            WithBar();
            WithBar( const types::XsString& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            WithBarAttributesPtr getAttributes() const;
            void setAttributes( const WithBarAttributesPtr& attributes );
            types::XsString getValue() const;
            void setValue( const types::XsString& value );
        private:
            types::XsString myValue;
            WithBarAttributesPtr myAttributes;
        };
        
        
        /**************** Prefix ****************
         4581
         <xs:element name="prefix" type="style-text" minOccurs="0"> <xs:annotation>     <xs:documentation>Values for the prefix element include the accidental values sharp flat natural double-sharp flat-flat and sharp-sharp. The prefix element may contain additional values for symbols specific to particular figured bass styles.</xs:documentation>    </xs:annotation></xs:element>
         <xs:complexType name="style-text">
         <xs:annotation>
         <xs:documentation>The style-text type represents a text element with a print-style attribute group.</xs:documentation>
         </xs:annotation>
         <xs:simpleContent>
         <xs:extension base="xs:string">
         <xs:attributeGroup ref="print-style"/>
         </xs:extension>
         </xs:simpleContent>
         </xs:complexType>
         <xs:simpleType name="xs:string"/>
         */
        struct PrefixAttributes;
        using PrefixAttributesPtr = std::shared_ptr<PrefixAttributes>;
        
        struct PrefixAttributes : public AttributesInterface
        {
        public:
            PrefixAttributes();
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
            bool hasDefaultX;
            bool hasDefaultY;
            bool hasRelativeX;
            bool hasRelativeY;
            bool hasFontFamily;
            bool hasFontStyle;
            bool hasFontSize;
            bool hasFontWeight;
        };
        
		class Prefix;
		using PrefixPtr = std::shared_ptr<Prefix>;
		using PrefixUPtr = std::unique_ptr<Prefix>;
		using PrefixSet = std::vector<PrefixPtr>;
		using PrefixSetIter = PrefixSet::iterator;
		using PrefixSetIterConst = PrefixSet::const_iterator;
		inline PrefixPtr makePrefix() { return std::make_shared<Prefix>(); }
        class Prefix : public ElementInterface
        {
        public:
            Prefix();
            Prefix( const types::XsString& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            PrefixAttributesPtr getAttributes() const;
            void setAttributes( const PrefixAttributesPtr& attributes );
            types::XsString getValue() const;
            void setValue( const types::XsString& value );
        private:
            types::XsString myValue;
            PrefixAttributesPtr myAttributes;
        };
        
        
        /**************** FigureNumber ****************
         4587
         <xs:element name="figure-number" type="style-text" minOccurs="0">  <xs:annotation>     <xs:documentation>A figure-number is a number. Overstrikes of the figure number are represented in the suffix element.</xs:documentation>   </xs:annotation></xs:element>
         <xs:complexType name="style-text">
         <xs:annotation>
         <xs:documentation>The style-text type represents a text element with a print-style attribute group.</xs:documentation>
         </xs:annotation>
         <xs:simpleContent>
         <xs:extension base="xs:string">
         <xs:attributeGroup ref="print-style"/>
         </xs:extension>
         </xs:simpleContent>
         </xs:complexType>
         <xs:simpleType name="xs:string"/>
         */
        struct FigureNumberAttributes;
        using FigureNumberAttributesPtr = std::shared_ptr<FigureNumberAttributes>;
        
        struct FigureNumberAttributes : public AttributesInterface
        {
        public:
            FigureNumberAttributes();
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
            bool hasDefaultX;
            bool hasDefaultY;
            bool hasRelativeX;
            bool hasRelativeY;
            bool hasFontFamily;
            bool hasFontStyle;
            bool hasFontSize;
            bool hasFontWeight;
        };
        
		class FigureNumber;
		using FigureNumberPtr = std::shared_ptr<FigureNumber>;
		using FigureNumberUPtr = std::unique_ptr<FigureNumber>;
		using FigureNumberSet = std::vector<FigureNumberPtr>;
		using FigureNumberSetIter = FigureNumberSet::iterator;
		using FigureNumberSetIterConst = FigureNumberSet::const_iterator;
		inline FigureNumberPtr makeFigureNumber() { return std::make_shared<FigureNumber>(); }
        class FigureNumber : public ElementInterface
        {
        public:
            FigureNumber();
            FigureNumber( const types::XsString& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            FigureNumberAttributesPtr getAttributes() const;
            void setAttributes( const FigureNumberAttributesPtr& attributes );
            types::XsString getValue() const;
            void setValue( const types::XsString& value );
        private:
            types::XsString myValue;
            FigureNumberAttributesPtr myAttributes;
        };
        
        
        /**************** Suffix ****************
         4593
         <xs:element name="suffix" type="style-text" minOccurs="0"> <xs:annotation>     <xs:documentation>Values for the suffix element include the accidental values sharp flat natural double-sharp flat-flat and sharp-sharp. Suffixes include both symbols that come after the figure number and those that overstrike the figure number. The suffix value slash is used for slashed numbers indicating chromatic alteration. The orientation and display of the slash usually depends on the figure number. The suffix element may contain additional values for symbols specific to particular figured bass styles.</xs:documentation>    </xs:annotation></xs:element>
         <xs:complexType name="style-text">
         <xs:annotation>
         <xs:documentation>The style-text type represents a text element with a print-style attribute group.</xs:documentation>
         </xs:annotation>
         <xs:simpleContent>
         <xs:extension base="xs:string">
         <xs:attributeGroup ref="print-style"/>
         </xs:extension>
         </xs:simpleContent>
         </xs:complexType>
         <xs:simpleType name="xs:string"/>
         */
        struct SuffixAttributes;
        using SuffixAttributesPtr = std::shared_ptr<SuffixAttributes>;
        
        struct SuffixAttributes : public AttributesInterface
        {
        public:
            SuffixAttributes();
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
            bool hasDefaultX;
            bool hasDefaultY;
            bool hasRelativeX;
            bool hasRelativeY;
            bool hasFontFamily;
            bool hasFontStyle;
            bool hasFontSize;
            bool hasFontWeight;
        };
        
		class Suffix;
		using SuffixPtr = std::shared_ptr<Suffix>;
		using SuffixUPtr = std::unique_ptr<Suffix>;
		using SuffixSet = std::vector<SuffixPtr>;
		using SuffixSetIter = SuffixSet::iterator;
		using SuffixSetIterConst = SuffixSet::const_iterator;
		inline SuffixPtr makeSuffix() { return std::make_shared<Suffix>(); }
        class Suffix : public ElementInterface
        {
        public:
            Suffix();
            Suffix( const types::XsString& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            SuffixAttributesPtr getAttributes() const;
            void setAttributes( const SuffixAttributesPtr& attributes );
            types::XsString getValue() const;
            void setValue( const types::XsString& value );
        private:
            types::XsString myValue;
            SuffixAttributesPtr myAttributes;
        };
        
        
        /**************** HoleClosed ****************
         4764
         <xs:element name="hole-closed" type="hole-closed"/>
         <xs:complexType name="hole-closed">
         <xs:annotation>
         <xs:documentation>The hole-closed type represents whether the hole is closed, open, or half-open. The optional location attribute indicates which portion of the hole is filled in when the element value is half.</xs:documentation>
         </xs:annotation>
         <xs:simpleContent>
         <xs:extension base="hole-closed-value">
         <xs:attribute name="location" type="hole-closed-location"/>
         </xs:extension>
         </xs:simpleContent>
         </xs:complexType>
         <xs:simpleType name="hole-closed-value">
         <xs:annotation>
         <xs:documentation>The hole-closed-value type represents whether the hole is closed, open, or half-open.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:string">
         <xs:enumeration value="yes"/>
         <xs:enumeration value="no"/>
         <xs:enumeration value="half"/>
         </xs:restriction>
         </xs:simpleType>
         */
        struct HoleClosedAttributes;
        using HoleClosedAttributesPtr = std::shared_ptr<HoleClosedAttributes>;
        
        struct HoleClosedAttributes : public AttributesInterface
        {
        public:
            HoleClosedAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::HoleClosedLocation location;
            bool hasLocation;
        };
        
		class HoleClosed;
		using HoleClosedPtr = std::shared_ptr<HoleClosed>;
		using HoleClosedUPtr = std::unique_ptr<HoleClosed>;
		using HoleClosedSet = std::vector<HoleClosedPtr>;
		using HoleClosedSetIter = HoleClosedSet::iterator;
		using HoleClosedSetIterConst = HoleClosedSet::const_iterator;
		inline HoleClosedPtr makeHoleClosed() { return std::make_shared<HoleClosed>(); }
        class HoleClosed : public ElementInterface
        {
        public:
            HoleClosed();
            HoleClosed( const types::HoleClosedValue& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            HoleClosedAttributesPtr getAttributes() const;
            void setAttributes( const HoleClosedAttributesPtr& attributes );
            types::HoleClosedValue getValue() const;
            void setValue( const types::HoleClosedValue& value );
        private:
            types::HoleClosedValue myValue;
            HoleClosedAttributesPtr myAttributes;
        };
        
        
        /**************** Text ****************
         4806, 4821
         <xs:element name="text" type="text-element-data"/>
         <xs:complexType name="text-element-data">
         <xs:annotation>
         <xs:documentation>The text-element-data type represents a syllable or portion of a syllable for lyric text underlay. A hyphen in the string content should only be used for an actual hyphenated word. Language names for text elements come from ISO 639, with optional country subcodes from ISO 3166.</xs:documentation>
         </xs:annotation>
         <xs:simpleContent>
         <xs:extension base="xs:string">
         <xs:attributeGroup ref="font"/>
         <xs:attributeGroup ref="color"/>
         <xs:attributeGroup ref="text-decoration"/>
         <xs:attributeGroup ref="text-rotation"/>
         <xs:attributeGroup ref="letter-spacing"/>
         <xs:attribute ref="xml:lang"/>
         <xs:attributeGroup ref="text-direction"/>
         </xs:extension>
         </xs:simpleContent>
         </xs:complexType>
         <xs:simpleType name="xs:string"/>
         */
        struct TextAttributes;
        using TextAttributesPtr = std::shared_ptr<TextAttributes>;
        
        struct TextAttributes : public AttributesInterface
        {
        public:
            TextAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::CommaSeparatedText fontFamily;
            types::FontStyle fontStyle;
            types::FontSize fontSize;
            types::FontWeight fontWeight;
            types::NumberOfLines underline;
            types::NumberOfLines overline;
            types::NumberOfLines lineThrough;
            types::RotationDegrees rotation;
            types::NumberOrNormal letterSpacing;
            types::XmlLang lang;
            bool hasFontFamily;
            bool hasFontStyle;
            bool hasFontSize;
            bool hasFontWeight;
            bool hasUnderline;
            bool hasOverline;
            bool hasLineThrough;
            bool hasRotation;
            bool hasLetterSpacing;
            bool hasLang;
        };
        
		class Text;
		using TextPtr = std::shared_ptr<Text>;
		using TextUPtr = std::unique_ptr<Text>;
		using TextSet = std::vector<TextPtr>;
		using TextSetIter = TextSet::iterator;
		using TextSetIterConst = TextSet::const_iterator;
		inline TextPtr makeText() { return std::make_shared<Text>(); }
        class Text : public ElementInterface
        {
        public:
            Text();
            Text( const types::XsString& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            TextAttributesPtr getAttributes() const;
            void setAttributes( const TextAttributesPtr& attributes );
            types::XsString getValue() const;
            void setValue( const types::XsString& value );
        private:
            types::XsString myValue;
            TextAttributesPtr myAttributes;
        };
        
        
        /**************** Elision ****************
         4814
         <xs:element name="elision" type="text-font-color"/>
         <xs:complexType name="text-font-color">
         <xs:annotation>
         <xs:documentation>The text-font-color type represents text with optional font and color information. It is used for the elision element.</xs:documentation>
         </xs:annotation>
         <xs:simpleContent>
         <xs:extension base="xs:string">
         <xs:attributeGroup ref="font"/>
         <xs:attributeGroup ref="color"/>
         <xs:attributeGroup ref="text-decoration"/>
         <xs:attributeGroup ref="text-rotation"/>
         <xs:attributeGroup ref="letter-spacing"/>
         <xs:attribute ref="xml:lang"/>
         <xs:attributeGroup ref="text-direction"/>
         </xs:extension>
         </xs:simpleContent>
         </xs:complexType>
         <xs:simpleType name="xs:string"/>
         */
        struct ElisionAttributes;
        using ElisionAttributesPtr = std::shared_ptr<ElisionAttributes>;
        
        struct ElisionAttributes : public AttributesInterface
        {
        public:
            ElisionAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::CommaSeparatedText fontFamily;
            types::FontStyle fontStyle;
            types::FontSize fontSize;
            types::FontWeight fontWeight;
            types::NumberOfLines underline;
            types::NumberOfLines overline;
            types::NumberOfLines lineThrough;
            types::RotationDegrees rotation;
            types::NumberOrNormal letterSpacing;
            types::XmlLang lang;
            bool hasFontFamily;
            bool hasFontStyle;
            bool hasFontSize;
            bool hasFontWeight;
            bool hasUnderline;
            bool hasOverline;
            bool hasLineThrough;
            bool hasRotation;
            bool hasLetterSpacing;
            bool hasLang;
        };
        
		class Elision;
		using ElisionPtr = std::shared_ptr<Elision>;
		using ElisionUPtr = std::unique_ptr<Elision>;
		using ElisionSet = std::vector<ElisionPtr>;
		using ElisionSetIter = ElisionSet::iterator;
		using ElisionSetIterConst = ElisionSet::const_iterator;
		inline ElisionPtr makeElision() { return std::make_shared<Elision>(); }
        class Elision : public ElementInterface
        {
        public:
            Elision();
            Elision( const types::XsString& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            ElisionAttributesPtr getAttributes() const;
            void setAttributes( const ElisionAttributesPtr& attributes );
            types::XsString getValue() const;
            void setValue( const types::XsString& value );
        private:
            types::XsString myValue;
            ElisionAttributesPtr myAttributes;
        };
        
        
        /**************** Text ****************
         4806, 4821
         <xs:element name="text" type="text-element-data"/>
         <xs:complexType name="text-element-data">
         <xs:annotation>
         <xs:documentation>The text-element-data type represents a syllable or portion of a syllable for lyric text underlay. A hyphen in the string content should only be used for an actual hyphenated word. Language names for text elements come from ISO 639, with optional country subcodes from ISO 3166.</xs:documentation>
         </xs:annotation>
         <xs:simpleContent>
         <xs:extension base="xs:string">
         <xs:attributeGroup ref="font"/>
         <xs:attributeGroup ref="color"/>
         <xs:attributeGroup ref="text-decoration"/>
         <xs:attributeGroup ref="text-rotation"/>
         <xs:attributeGroup ref="letter-spacing"/>
         <xs:attribute ref="xml:lang"/>
         <xs:attributeGroup ref="text-direction"/>
         </xs:extension>
         </xs:simpleContent>
         </xs:complexType>
         <xs:simpleType name="xs:string"/>
         */
        
        
        
        /**************** Glissando ****************
         4923
         <xs:element name="glissando" type="glissando"/>
         <xs:complexType name="glissando">
         <xs:annotation>
         <xs:documentation>Glissando and slide types both indicate rapidly moving from one pitch to the other so that individual notes are not discerned. The distinction is similar to that between NIFF's glissando and portamento elements. A glissando sounds the half notes in between the slide and defaults to a wavy line. The optional text is printed alongside the line.</xs:documentation>
         </xs:annotation>
         <xs:simpleContent>
         <xs:extension base="xs:string">
         <xs:attribute name="type" type="start-stop" use="required"/>
         <xs:attribute name="number" type="number-level" default="1"/>
         <xs:attributeGroup ref="line-type"/>
         <xs:attributeGroup ref="dashed-formatting"/>
         <xs:attributeGroup ref="print-style"/>
         </xs:extension>
         </xs:simpleContent>
         </xs:complexType>
         <xs:simpleType name="xs:string"/>
         */
        struct GlissandoAttributes;
        using GlissandoAttributesPtr = std::shared_ptr<GlissandoAttributes>;
        
        struct GlissandoAttributes : public AttributesInterface
        {
        public:
            GlissandoAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::StartStop type;
            types::NumberLevel number;
            types::TenthsValue dashLength;
            types::TenthsValue spaceLength;
            types::TenthsValue defaultX;
            types::TenthsValue defaultY;
            types::TenthsValue relativeX;
            types::TenthsValue relativeY;
            types::CommaSeparatedText fontFamily;
            types::FontStyle fontStyle;
            types::FontSize fontSize;
            types::FontWeight fontWeight;
            const   bool hasType;
            bool hasNumber;
            bool hasDashLength;
            bool hasSpaceLength;
            bool hasDefaultX;
            bool hasDefaultY;
            bool hasRelativeX;
            bool hasRelativeY;
            bool hasFontFamily;
            bool hasFontStyle;
            bool hasFontSize;
            bool hasFontWeight;
        };
        
		class Glissando;
		using GlissandoPtr = std::shared_ptr<Glissando>;
		using GlissandoUPtr = std::unique_ptr<Glissando>;
		using GlissandoSet = std::vector<GlissandoPtr>;
		using GlissandoSetIter = GlissandoSet::iterator;
		using GlissandoSetIterConst = GlissandoSet::const_iterator;
		inline GlissandoPtr makeGlissando() { return std::make_shared<Glissando>(); }
        class Glissando : public ElementInterface
        {
        public:
            Glissando();
            Glissando( const types::XsString& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            GlissandoAttributesPtr getAttributes() const;
            void setAttributes( const GlissandoAttributesPtr& attributes );
            types::XsString getValue() const;
            void setValue( const types::XsString& value );
        private:
            types::XsString myValue;
            GlissandoAttributesPtr myAttributes;
        };
        
        
        /**************** Slide ****************
         4926
         <xs:element name="slide" type="slide"/>
         <xs:complexType name="slide">
         <xs:annotation>
         <xs:documentation>Glissando and slide types both indicate rapidly moving from one pitch to the other so that individual notes are not discerned. The distinction is similar to that between NIFF's glissando and portamento elements. A slide is continuous between two notes and defaults to a solid line. The optional text for a is printed alongside the line.</xs:documentation>
         </xs:annotation>
         <xs:simpleContent>
         <xs:extension base="xs:string">
         <xs:attribute name="type" type="start-stop" use="required"/>
         <xs:attribute name="number" type="number-level" default="1"/>
         <xs:attributeGroup ref="line-type"/>
         <xs:attributeGroup ref="dashed-formatting"/>
         <xs:attributeGroup ref="print-style"/>
         <xs:attributeGroup ref="bend-sound"/>
         </xs:extension>
         </xs:simpleContent>
         </xs:complexType>
         <xs:simpleType name="xs:string"/>
         */
        struct SlideAttributes;
        using SlideAttributesPtr = std::shared_ptr<SlideAttributes>;
        
        struct SlideAttributes : public AttributesInterface
        {
        public:
            SlideAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::StartStop type;
            types::NumberLevel number;
            types::TenthsValue dashLength;
            types::TenthsValue spaceLength;
            types::TenthsValue defaultX;
            types::TenthsValue defaultY;
            types::TenthsValue relativeX;
            types::TenthsValue relativeY;
            types::CommaSeparatedText fontFamily;
            types::FontStyle fontStyle;
            types::FontSize fontSize;
            types::FontWeight fontWeight;
            types::YesNo accelerate;
            types::TrillBeats beats;
            types::Percent firstBeat;
            types::Percent lastBeat;
            const   bool hasType;
            bool hasNumber;
            bool hasDashLength;
            bool hasSpaceLength;
            bool hasDefaultX;
            bool hasDefaultY;
            bool hasRelativeX;
            bool hasRelativeY;
            bool hasFontFamily;
            bool hasFontStyle;
            bool hasFontSize;
            bool hasFontWeight;
            bool hasAccelerate;
            bool hasBeats;
            bool hasFirstBeat;
            bool hasLastBeat;
        };
        
		class Slide;
		using SlidePtr = std::shared_ptr<Slide>;
		using SlideUPtr = std::unique_ptr<Slide>;
		using SlideSet = std::vector<SlidePtr>;
		using SlideSetIter = SlideSet::iterator;
		using SlideSetIterConst = SlideSet::const_iterator;
		inline SlidePtr makeSlide() { return std::make_shared<Slide>(); }
        class Slide : public ElementInterface
        {
        public:
            Slide();
            Slide( const types::XsString& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            SlideAttributesPtr getAttributes() const;
            void setAttributes( const SlideAttributesPtr& attributes );
            types::XsString getValue() const;
            void setValue( const types::XsString& value );
        private:
            types::XsString myValue;
            SlideAttributesPtr myAttributes;
        };
        
        
        /**************** Fermata ****************
         3038, 4941
         <xs:element name="fermata" type="fermata"/>
         <xs:complexType name="fermata">
         <xs:annotation>
         <xs:documentation>The fermata text content represents the shape of the fermata sign. An empty fermata element represents a normal fermata. The fermata type is upright if not specified.</xs:documentation>
         </xs:annotation>
         <xs:simpleContent>
         <xs:extension base="fermata-shape">
         <xs:attribute name="type" type="upright-inverted"/>
         <xs:attributeGroup ref="print-style"/>
         </xs:extension>
         </xs:simpleContent>
         </xs:complexType>
         <xs:simpleType name="fermata-shape">
         <xs:annotation>
         <xs:documentation>The fermata-shape type represents the shape of the fermata sign. The empty value is equivalent to the normal value.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:string">
         <xs:enumeration value="normal"/>
         <xs:enumeration value="angled"/>
         <xs:enumeration value="square"/>
         <xs:enumeration value=""/>
         </xs:restriction>
         </xs:simpleType>
         */
        
        
        /**************** AccidentalMark ****************
         4950, 5189
         <xs:element name="accidental-mark" type="accidental-mark"/>
         <xs:complexType name="accidental-mark">
         <xs:annotation>
         <xs:documentation>An accidental-mark can be used as a separate notation or as part of an ornament. When used in an ornament, position and placement are relative to the ornament, not relative to the note.</xs:documentation>
         </xs:annotation>
         <xs:simpleContent>
         <xs:extension base="accidental-value">
         <xs:attributeGroup ref="print-style"/>
         <xs:attributeGroup ref="placement"/>
         </xs:extension>
         </xs:simpleContent>
         </xs:complexType>
         <xs:simpleType name="accidental-value">
         <xs:annotation>
         <xs:documentation>The accidental-value type represents notated accidentals supported by MusicXML. In the MusicXML 2.0 DTD this was a string with values that could be included. The XSD strengthens the data typing to an enumerated list. The quarter- and three-quarters- accidentals are Tartini-style quarter-tone accidentals. The -down and -up accidentals are quarter-tone accidentals that include arrows pointing down or up. The slash- accidentals are used in Turkish classical music. The numbered sharp and flat accidentals are superscripted versions of the accidental signs, used in Turkish folk music. The sori and koron accidentals are microtonal sharp and flat accidentals used in Iranian and Persian music.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:string">
         <xs:enumeration value="sharp"/>
         <xs:enumeration value="natural"/>
         <xs:enumeration value="flat"/>
         <xs:enumeration value="double-sharp"/>
         <xs:enumeration value="sharp-sharp"/>
         <xs:enumeration value="flat-flat"/>
         <xs:enumeration value="natural-sharp"/>
         <xs:enumeration value="natural-flat"/>
         <xs:enumeration value="quarter-flat"/>
         <xs:enumeration value="quarter-sharp"/>
         <xs:enumeration value="three-quarters-flat"/>
         <xs:enumeration value="three-quarters-sharp"/>
         <xs:enumeration value="sharp-down"/>
         <xs:enumeration value="sharp-up"/>
         <xs:enumeration value="natural-down"/>
         <xs:enumeration value="natural-up"/>
         <xs:enumeration value="flat-down"/>
         <xs:enumeration value="flat-up"/>
         <xs:enumeration value="triple-sharp"/>
         <xs:enumeration value="triple-flat"/>
         <xs:enumeration value="slash-quarter-sharp"/>
         <xs:enumeration value="slash-sharp"/>
         <xs:enumeration value="slash-flat"/>
         <xs:enumeration value="double-slash-flat"/>
         <xs:enumeration value="sharp-1"/>
         <xs:enumeration value="sharp-2"/>
         <xs:enumeration value="sharp-3"/>
         <xs:enumeration value="sharp-5"/>
         <xs:enumeration value="flat-1"/>
         <xs:enumeration value="flat-2"/>
         <xs:enumeration value="flat-3"/>
         <xs:enumeration value="flat-4"/>
         <xs:enumeration value="sori"/>
         <xs:enumeration value="koron"/>
         </xs:restriction>
         </xs:simpleType>
         */
        struct AccidentalMarkAttributes;
        using AccidentalMarkAttributesPtr = std::shared_ptr<AccidentalMarkAttributes>;
        
        struct AccidentalMarkAttributes : public AttributesInterface
        {
        public:
            AccidentalMarkAttributes();
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
            types::AboveBelow placement;
            bool hasDefaultX;
            bool hasDefaultY;
            bool hasRelativeX;
            bool hasRelativeY;
            bool hasFontFamily;
            bool hasFontStyle;
            bool hasFontSize;
            bool hasFontWeight;
            bool hasPlacement;
        };
        
		class AccidentalMark;
		using AccidentalMarkPtr = std::shared_ptr<AccidentalMark>;
		using AccidentalMarkUPtr = std::unique_ptr<AccidentalMark>;
		using AccidentalMarkSet = std::vector<AccidentalMarkPtr>;
		using AccidentalMarkSetIter = AccidentalMarkSet::iterator;
		using AccidentalMarkSetIterConst = AccidentalMarkSet::const_iterator;
		inline AccidentalMarkPtr makeAccidentalMark() { return std::make_shared<AccidentalMark>(); }
        class AccidentalMark : public ElementInterface
        {
        public:
            AccidentalMark();
            AccidentalMark( const types::AccidentalValue& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            AccidentalMarkAttributesPtr getAttributes() const;
            void setAttributes( const AccidentalMarkAttributesPtr& attributes );
            types::AccidentalValue getValue() const;
            void setValue( const types::AccidentalValue& value );
        private:
            types::AccidentalValue myValue;
            AccidentalMarkAttributesPtr myAttributes;
        };
        
        
        /**************** OtherNotation ****************
         4953
         <xs:element name="other-notation" type="other-notation"/>
         <xs:complexType name="other-notation">
         <xs:annotation>
         <xs:documentation>The other-notation type is used to define any notations not yet in the MusicXML format. This allows extended representation, though without application interoperability. It handles notations where more specific extension elements such as other-dynamics and other-technical are not appropriate.</xs:documentation>
         </xs:annotation>
         <xs:simpleContent>
         <xs:extension base="xs:string">
         <xs:attribute name="type" type="start-stop-single" use="required"/>
         <xs:attribute name="number" type="number-level" default="1"/>
         <xs:attributeGroup ref="print-object"/>
         <xs:attributeGroup ref="print-style"/>
         <xs:attributeGroup ref="placement"/>
         </xs:extension>
         </xs:simpleContent>
         </xs:complexType>
         <xs:simpleType name="xs:string"/>
         */
        struct OtherNotationAttributes;
        using OtherNotationAttributesPtr = std::shared_ptr<OtherNotationAttributes>;
        
        struct OtherNotationAttributes : public AttributesInterface
        {
        public:
            OtherNotationAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::StartStopSingle type;
            types::NumberLevel number;
            types::YesNo printObject;
            types::TenthsValue defaultX;
            types::TenthsValue defaultY;
            types::TenthsValue relativeX;
            types::TenthsValue relativeY;
            types::CommaSeparatedText fontFamily;
            types::FontStyle fontStyle;
            types::FontSize fontSize;
            types::FontWeight fontWeight;
            types::AboveBelow placement;
            const   bool hasType;
            bool hasNumber;
            bool hasPrintObject;
            bool hasDefaultX;
            bool hasDefaultY;
            bool hasRelativeX;
            bool hasRelativeY;
            bool hasFontFamily;
            bool hasFontStyle;
            bool hasFontSize;
            bool hasFontWeight;
            bool hasPlacement;
        };
        
		class OtherNotation;
		using OtherNotationPtr = std::shared_ptr<OtherNotation>;
		using OtherNotationUPtr = std::unique_ptr<OtherNotation>;
		using OtherNotationSet = std::vector<OtherNotationPtr>;
		using OtherNotationSetIter = OtherNotationSet::iterator;
		using OtherNotationSetIterConst = OtherNotationSet::const_iterator;
		inline OtherNotationPtr makeOtherNotation() { return std::make_shared<OtherNotation>(); }
        class OtherNotation : public ElementInterface
        {
        public:
            OtherNotation();
            OtherNotation( const types::XsString& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            OtherNotationAttributesPtr getAttributes() const;
            void setAttributes( const OtherNotationAttributesPtr& attributes );
            types::XsString getValue() const;
            void setValue( const types::XsString& value );
        private:
            types::XsString myValue;
            OtherNotationAttributesPtr myAttributes;
        };
        
        
        /**************** Type ****************
         5001
         <xs:element name="type" type="note-type" minOccurs="0"/>
         <xs:complexType name="note-type">
         <xs:annotation>
         <xs:documentation>The note-type type indicates the graphic note type. Values range from 256th to long. The size attribute indicates full, cue, or large size, with full the default for regular notes and cue the default for cue and grace notes.</xs:documentation>
         </xs:annotation>
         <xs:simpleContent>
         <xs:extension base="note-type-value">
         <xs:attribute name="size" type="symbol-size"/>
         </xs:extension>
         </xs:simpleContent>
         </xs:complexType>
         <xs:simpleType name="note-type-value">
         <xs:annotation>
         <xs:documentation>The note-type type is used for the MusicXML type element and represents the graphic note type, from 1024th (shortest) to maxima (longest).</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:string">
         <xs:enumeration value="1024th"/>
         <xs:enumeration value="512th"/>
         <xs:enumeration value="256th"/>
         <xs:enumeration value="128th"/>
         <xs:enumeration value="64th"/>
         <xs:enumeration value="32nd"/>
         <xs:enumeration value="16th"/>
         <xs:enumeration value="eighth"/>
         <xs:enumeration value="quarter"/>
         <xs:enumeration value="half"/>
         <xs:enumeration value="whole"/>
         <xs:enumeration value="breve"/>
         <xs:enumeration value="long"/>
         <xs:enumeration value="maxima"/>
         </xs:restriction>
         </xs:simpleType>
         */
        struct TypeAttributes;
        using TypeAttributesPtr = std::shared_ptr<TypeAttributes>;
        
        struct TypeAttributes : public AttributesInterface
        {
        public:
            TypeAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::SymbolSize size;
            bool hasSize;
        };
        
		class Type;
		using TypePtr = std::shared_ptr<Type>;
		using TypeUPtr = std::unique_ptr<Type>;
		using TypeSet = std::vector<TypePtr>;
		using TypeSetIter = TypeSet::iterator;
		using TypeSetIterConst = TypeSet::const_iterator;
		inline TypePtr makeType() { return std::make_shared<Type>(); }
        class Type : public ElementInterface
        {
        public:
            Type();
            Type( const types::NoteTypeValue& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            TypeAttributesPtr getAttributes() const;
            void setAttributes( const TypeAttributesPtr& attributes );
            types::NoteTypeValue getValue() const;
            void setValue( const types::NoteTypeValue& value );
        private:
            types::NoteTypeValue myValue;
            TypeAttributesPtr myAttributes;
        };
        
        
        /**************** Accidental ****************
         5012
         <xs:element name="accidental" type="accidental" minOccurs="0"/>
         <xs:complexType name="accidental">
         <xs:annotation>
         <xs:documentation>The accidental type represents actual notated accidentals. Editorial and cautionary indications are indicated by attributes. Values for these attributes are "no" if not present. Specific graphic display such as parentheses, brackets, and size are controlled by the level-display attribute group.</xs:documentation>
         </xs:annotation>
         <xs:simpleContent>
         <xs:extension base="accidental-value">
         <xs:attribute name="cautionary" type="yes-no"/>
         <xs:attribute name="editorial" type="yes-no"/>
         <xs:attributeGroup ref="level-display"/>
         <xs:attributeGroup ref="print-style"/>
         </xs:extension>
         </xs:simpleContent>
         </xs:complexType>
         <xs:simpleType name="accidental-value">
         <xs:annotation>
         <xs:documentation>The accidental-value type represents notated accidentals supported by MusicXML. In the MusicXML 2.0 DTD this was a string with values that could be included. The XSD strengthens the data typing to an enumerated list. The quarter- and three-quarters- accidentals are Tartini-style quarter-tone accidentals. The -down and -up accidentals are quarter-tone accidentals that include arrows pointing down or up. The slash- accidentals are used in Turkish classical music. The numbered sharp and flat accidentals are superscripted versions of the accidental signs, used in Turkish folk music. The sori and koron accidentals are microtonal sharp and flat accidentals used in Iranian and Persian music.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:string">
         <xs:enumeration value="sharp"/>
         <xs:enumeration value="natural"/>
         <xs:enumeration value="flat"/>
         <xs:enumeration value="double-sharp"/>
         <xs:enumeration value="sharp-sharp"/>
         <xs:enumeration value="flat-flat"/>
         <xs:enumeration value="natural-sharp"/>
         <xs:enumeration value="natural-flat"/>
         <xs:enumeration value="quarter-flat"/>
         <xs:enumeration value="quarter-sharp"/>
         <xs:enumeration value="three-quarters-flat"/>
         <xs:enumeration value="three-quarters-sharp"/>
         <xs:enumeration value="sharp-down"/>
         <xs:enumeration value="sharp-up"/>
         <xs:enumeration value="natural-down"/>
         <xs:enumeration value="natural-up"/>
         <xs:enumeration value="flat-down"/>
         <xs:enumeration value="flat-up"/>
         <xs:enumeration value="triple-sharp"/>
         <xs:enumeration value="triple-flat"/>
         <xs:enumeration value="slash-quarter-sharp"/>
         <xs:enumeration value="slash-sharp"/>
         <xs:enumeration value="slash-flat"/>
         <xs:enumeration value="double-slash-flat"/>
         <xs:enumeration value="sharp-1"/>
         <xs:enumeration value="sharp-2"/>
         <xs:enumeration value="sharp-3"/>
         <xs:enumeration value="sharp-5"/>
         <xs:enumeration value="flat-1"/>
         <xs:enumeration value="flat-2"/>
         <xs:enumeration value="flat-3"/>
         <xs:enumeration value="flat-4"/>
         <xs:enumeration value="sori"/>
         <xs:enumeration value="koron"/>
         </xs:restriction>
         </xs:simpleType>
         */
        struct AccidentalAttributes;
        using AccidentalAttributesPtr = std::shared_ptr<AccidentalAttributes>;
        
        struct AccidentalAttributes : public AttributesInterface
        {
        public:
            AccidentalAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::YesNo cautionary;
            types::YesNo editorial;
            types::YesNo parentheses;
            types::YesNo bracket;
            types::SymbolSize size;
            types::TenthsValue defaultX;
            types::TenthsValue defaultY;
            types::TenthsValue relativeX;
            types::TenthsValue relativeY;
            types::CommaSeparatedText fontFamily;
            types::FontStyle fontStyle;
            types::FontSize fontSize;
            types::FontWeight fontWeight;
            bool hasCautionary;
            bool hasEditorial;
            bool hasParentheses;
            bool hasBracket;
            bool hasSize;
            bool hasDefaultX;
            bool hasDefaultY;
            bool hasRelativeX;
            bool hasRelativeY;
            bool hasFontFamily;
            bool hasFontStyle;
            bool hasFontSize;
            bool hasFontWeight;
        };
        
		class Accidental;
		using AccidentalPtr = std::shared_ptr<Accidental>;
		using AccidentalUPtr = std::unique_ptr<Accidental>;
		using AccidentalSet = std::vector<AccidentalPtr>;
		using AccidentalSetIter = AccidentalSet::iterator;
		using AccidentalSetIterConst = AccidentalSet::const_iterator;
		inline AccidentalPtr makeAccidental() { return std::make_shared<Accidental>(); }
        class Accidental : public ElementInterface
        {
        public:
            Accidental();
            Accidental( const types::AccidentalValue& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            AccidentalAttributesPtr getAttributes() const;
            void setAttributes( const AccidentalAttributesPtr& attributes );
            types::AccidentalValue getValue() const;
            void setValue( const types::AccidentalValue& value );
        private:
            types::AccidentalValue myValue;
            AccidentalAttributesPtr myAttributes;
        };
        
        
        /**************** Stem ****************
         5020
         <xs:element name="stem" type="stem" minOccurs="0"/>
         <xs:complexType name="stem">
         <xs:annotation>
         <xs:documentation>Stems can be down, up, none, or double. For down and up stems, the position attributes can be used to specify stem length. The relative values specify the end of the stem relative to the program default. Default values specify an absolute end stem position. Negative values of relative-y that would flip a stem instead of shortening it are ignored. A stem element associated with a rest refers to a stemlet.</xs:documentation>
         </xs:annotation>
         <xs:simpleContent>
         <xs:extension base="stem-value">
         <xs:attributeGroup ref="y-position"/>
         <xs:attributeGroup ref="color"/>
         </xs:extension>
         </xs:simpleContent>
         </xs:complexType>
         <xs:simpleType name="stem-value">
         <xs:annotation>
         <xs:documentation>The stem type represents the notated stem direction.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:string">
         <xs:enumeration value="down"/>
         <xs:enumeration value="up"/>
         <xs:enumeration value="double"/>
         <xs:enumeration value="none"/>
         </xs:restriction>
         </xs:simpleType>
         */
        struct StemAttributes;
        using StemAttributesPtr = std::shared_ptr<StemAttributes>;
        
        struct StemAttributes : public AttributesInterface
        {
        public:
            StemAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::TenthsValue defaultX;
            types::TenthsValue defaultY;
            types::TenthsValue relativeX;
            types::TenthsValue relativeY;
            bool hasDefaultX;
            bool hasDefaultY;
            bool hasRelativeX;
            bool hasRelativeY;
        };
        
		class Stem;
		using StemPtr = std::shared_ptr<Stem>;
		using StemUPtr = std::unique_ptr<Stem>;
		using StemSet = std::vector<StemPtr>;
		using StemSetIter = StemSet::iterator;
		using StemSetIterConst = StemSet::const_iterator;
		inline StemPtr makeStem() { return std::make_shared<Stem>(); }
        class Stem : public ElementInterface
        {
        public:
            Stem();
            Stem( const types::StemValue& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            StemAttributesPtr getAttributes() const;
            void setAttributes( const StemAttributesPtr& attributes );
            types::StemValue getValue() const;
            void setValue( const types::StemValue& value );
        private:
            types::StemValue myValue;
            StemAttributesPtr myAttributes;
        };
        
        
        /**************** Notehead ****************
         5024
         <xs:element name="notehead" type="notehead" minOccurs="0"/>
         <xs:complexType name="notehead">
         <xs:annotation>
         <xs:documentation>The notehead element indicates shapes other than the open and closed ovals associated with note durations.
         
         For the enclosed shapes, the default is to be hollow for half notes and longer, and filled otherwise. The filled attribute can be set to change this if needed.
         
         If the parentheses attribute is set to yes, the notehead is parenthesized. It is no by default.</xs:documentation>
         </xs:annotation>
         <xs:simpleContent>
         <xs:extension base="notehead-value">
         <xs:attribute name="filled" type="yes-no"/>
         <xs:attribute name="parentheses" type="yes-no"/>
         <xs:attributeGroup ref="font"/>
         <xs:attributeGroup ref="color"/>
         </xs:extension>
         </xs:simpleContent>
         </xs:complexType>
         <xs:simpleType name="notehead-value">
         <xs:annotation>
         <xs:documentation>The notehead type indicates shapes other than the open and closed ovals associated with note durations. The values do, re, mi, fa, fa up, so, la, and ti correspond to Aikin's 7-shape system.  The fa up shape is typically used with upstems; the fa shape is typically used with downstems or no stems.
         
         The arrow shapes differ from triangle and inverted triangle by being centered on the stem. Slashed and back slashed notes include both the normal notehead and a slash. The triangle shape has the tip of the triangle pointing up; the inverted triangle shape has the tip of the triangle pointing down. The left triangle shape is a right triangle with the hypotenuse facing up and to the left.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:string">
         <xs:enumeration value="slash"/>
         <xs:enumeration value="triangle"/>
         <xs:enumeration value="diamond"/>
         <xs:enumeration value="square"/>
         <xs:enumeration value="cross"/>
         <xs:enumeration value="x"/>
         <xs:enumeration value="circle-x"/>
         <xs:enumeration value="inverted triangle"/>
         <xs:enumeration value="arrow down"/>
         <xs:enumeration value="arrow up"/>
         <xs:enumeration value="slashed"/>
         <xs:enumeration value="back slashed"/>
         <xs:enumeration value="normal"/>
         <xs:enumeration value="cluster"/>
         <xs:enumeration value="circle dot"/>
         <xs:enumeration value="left triangle"/>
         <xs:enumeration value="rectangle"/>
         <xs:enumeration value="none"/>
         <xs:enumeration value="do"/>
         <xs:enumeration value="re"/>
         <xs:enumeration value="mi"/>
         <xs:enumeration value="fa"/>
         <xs:enumeration value="fa up"/>
         <xs:enumeration value="so"/>
         <xs:enumeration value="la"/>
         <xs:enumeration value="ti"/>
         </xs:restriction>
         </xs:simpleType>
         */
        struct NoteheadAttributes;
        using NoteheadAttributesPtr = std::shared_ptr<NoteheadAttributes>;
        
        struct NoteheadAttributes : public AttributesInterface
        {
        public:
            NoteheadAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::YesNo filled;
            types::YesNo parentheses;
            types::CommaSeparatedText fontFamily;
            types::FontStyle fontStyle;
            types::FontSize fontSize;
            types::FontWeight fontWeight;
            bool hasFilled;
            bool hasParentheses;
            bool hasFontFamily;
            bool hasFontStyle;
            bool hasFontSize;
            bool hasFontWeight;
        };
        
		class Notehead;
		using NoteheadPtr = std::shared_ptr<Notehead>;
		using NoteheadUPtr = std::unique_ptr<Notehead>;
		using NoteheadSet = std::vector<NoteheadPtr>;
		using NoteheadSetIter = NoteheadSet::iterator;
		using NoteheadSetIterConst = NoteheadSet::const_iterator;
		inline NoteheadPtr makeNotehead() { return std::make_shared<Notehead>(); }
        class Notehead : public ElementInterface
        {
        public:
            Notehead();
            Notehead( const types::NoteheadValue& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            NoteheadAttributesPtr getAttributes() const;
            void setAttributes( const NoteheadAttributesPtr& attributes );
            types::NoteheadValue getValue() const;
            void setValue( const types::NoteheadValue& value );
        private:
            types::NoteheadValue myValue;
            NoteheadAttributesPtr myAttributes;
        };
        
        
        /**************** Beam ****************
         5035
         <xs:element name="beam" type="beam" minOccurs="0" maxOccurs="8"/>
         <xs:complexType name="beam">
         <xs:annotation>
         <xs:documentation>Beam values include begin, continue, end, forward hook, and backward hook. Up to eight concurrent beams are available to cover up to 1024th notes. Each beam in a note is represented with a separate beam element, starting with the eighth note beam using a number attribute of 1.
         
         Note that the beam number does not distinguish sets of beams that overlap, as it does for slur and other elements. Beaming groups are distinguished by being in different voices and/or the presence or absence of grace and cue elements.
         
         Beams that have a begin value can also have a fan attribute to indicate accelerandos and ritardandos using fanned beams. The fan attribute may also be used with a continue value if the fanning direction changes on that note. The value is "none" if not specified.
         
         The repeater attribute has been deprecated in MusicXML 3.0. Formerly used for tremolos, it needs to be specified with a "yes" value for each beam using it.</xs:documentation>
         </xs:annotation>
         <xs:simpleContent>
         <xs:extension base="beam-value">
         <xs:attribute name="number" type="beam-level" default="1"/>
         <xs:attribute name="repeater" type="yes-no"/>
         <xs:attribute name="fan" type="fan"/>
         <xs:attributeGroup ref="color"/>
         </xs:extension>
         </xs:simpleContent>
         </xs:complexType>
         <xs:simpleType name="beam-value">
         <xs:annotation>
         <xs:documentation>The beam-value type represents the type of beam associated with each of 8 beam levels (up to 1024th notes) available for each note.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:string">
         <xs:enumeration value="begin"/>
         <xs:enumeration value="continue"/>
         <xs:enumeration value="end"/>
         <xs:enumeration value="forward hook"/>
         <xs:enumeration value="backward hook"/>
         </xs:restriction>
         </xs:simpleType>
         */
        struct BeamAttributes;
        using BeamAttributesPtr = std::shared_ptr<BeamAttributes>;
        
        struct BeamAttributes : public AttributesInterface
        {
        public:
            BeamAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::BeamLevel number;
            types::YesNo repeater;
            types::Fan fan;
            bool hasNumber;
            bool hasRepeater;
            bool hasFan;
        };
        
		class Beam;
		using BeamPtr = std::shared_ptr<Beam>;
		using BeamUPtr = std::unique_ptr<Beam>;
		using BeamSet = std::vector<BeamPtr>;
		using BeamSetIter = BeamSet::iterator;
		using BeamSetIterConst = BeamSet::const_iterator;
		inline BeamPtr makeBeam() { return std::make_shared<Beam>(); }
        class Beam : public ElementInterface
        {
        public:
            Beam();
            Beam( const types::BeamValue& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            BeamAttributesPtr getAttributes() const;
            void setAttributes( const BeamAttributesPtr& attributes );
            types::BeamValue getValue() const;
            void setValue( const types::BeamValue& value );
        private:
            types::BeamValue myValue;
            BeamAttributesPtr myAttributes;
        };
        
        
        /**************** DisplayText ****************
         2517, 5114
         <xs:element name="display-text" type="formatted-text"/>
         <xs:complexType name="formatted-text">
         <xs:annotation>
         <xs:documentation>The formatted-text type represents a text element with text-formatting attributes.</xs:documentation>
         </xs:annotation>
         <xs:simpleContent>
         <xs:extension base="xs:string">
         <xs:attributeGroup ref="text-formatting"/>
         </xs:extension>
         </xs:simpleContent>
         </xs:complexType>
         <xs:simpleType name="xs:string"/>
         */
        
        
        /**************** Tremolo ****************
         5181
         <xs:element name="tremolo" type="tremolo"/>
         <xs:complexType name="tremolo">
         <xs:annotation>
         <xs:documentation>The tremolo ornament can be used to indicate either single-note or double-note tremolos. Single-note tremolos use the single type, while double-note tremolos use the start and stop types. The default is "single" for compatibility with Version 1.1. The text of the element indicates the number of tremolo marks and is an integer from 0 to 8. Note that the number of attached beams is not included in this value, but is represented separately using the beam element.
         
         When using double-note tremolos, the duration of each note in the tremolo should correspond to half of the notated type value. A time-modification element should also be added with an actual-notes value of 2 and a normal-notes value of 1. If used within a tuplet, this 2/1 ratio should be multiplied by the existing tuplet ratio.
         
         Using repeater beams for indicating tremolos is deprecated as of MusicXML 3.0.</xs:documentation>
         </xs:annotation>
         <xs:simpleContent>
         <xs:extension base="tremolo-marks">
         <xs:attribute name="type" type="start-stop-single" default="single"/>
         <xs:attributeGroup ref="print-style"/>
         <xs:attributeGroup ref="placement"/>
         </xs:extension>
         </xs:simpleContent>
         </xs:complexType>
         <xs:simpleType name="tremolo-marks">
         <xs:annotation>
         <xs:documentation>The number of tremolo marks is represented by a number from 0 to 8: the same as beam-level with 0 added.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:integer">
         <xs:minInclusive value="0"/>
         <xs:maxInclusive value="8"/>
         </xs:restriction>
         </xs:simpleType>
         */
        struct TremoloAttributes;
        using TremoloAttributesPtr = std::shared_ptr<TremoloAttributes>;
        
        struct TremoloAttributes : public AttributesInterface
        {
        public:
            TremoloAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::StartStopSingle type;
            types::TenthsValue defaultX;
            types::TenthsValue defaultY;
            types::TenthsValue relativeX;
            types::TenthsValue relativeY;
            types::CommaSeparatedText fontFamily;
            types::FontStyle fontStyle;
            types::FontSize fontSize;
            types::FontWeight fontWeight;
            types::AboveBelow placement;
            bool hasType;
            bool hasDefaultX;
            bool hasDefaultY;
            bool hasRelativeX;
            bool hasRelativeY;
            bool hasFontFamily;
            bool hasFontStyle;
            bool hasFontSize;
            bool hasFontWeight;
            bool hasPlacement;
        };
        
		class Tremolo;
		using TremoloPtr = std::shared_ptr<Tremolo>;
		using TremoloUPtr = std::unique_ptr<Tremolo>;
		using TremoloSet = std::vector<TremoloPtr>;
		using TremoloSetIter = TremoloSet::iterator;
		using TremoloSetIterConst = TremoloSet::const_iterator;
		inline TremoloPtr makeTremolo() { return std::make_shared<Tremolo>(); }
        class Tremolo : public ElementInterface
        {
        public:
            Tremolo();
            Tremolo( const types::TremoloMarks& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            TremoloAttributesPtr getAttributes() const;
            void setAttributes( const TremoloAttributesPtr& attributes );
            types::TremoloMarks getValue() const;
            void setValue( const types::TremoloMarks& value );
        private:
            types::TremoloMarks myValue;
            TremoloAttributesPtr myAttributes;
        };
        
        
        /**************** OtherOrnament ****************
         5184
         <xs:element name="other-ornament" type="placement-text">   <xs:annotation>     <xs:documentation>The other-ornament element is used to define any ornaments not yet in the MusicXML format. This allows extended representation though without application interoperability.</xs:documentation>    </xs:annotation></xs:element>
         <xs:complexType name="placement-text">
         <xs:annotation>
         <xs:documentation>The placement-text type represents a text element with print-style and placement attribute groups.</xs:documentation>
         </xs:annotation>
         <xs:simpleContent>
         <xs:extension base="xs:string">
         <xs:attributeGroup ref="print-style"/>
         <xs:attributeGroup ref="placement"/>
         </xs:extension>
         </xs:simpleContent>
         </xs:complexType>
         <xs:simpleType name="xs:string"/>
         */
        struct OtherOrnamentAttributes;
        using OtherOrnamentAttributesPtr = std::shared_ptr<OtherOrnamentAttributes>;
        
        struct OtherOrnamentAttributes : public AttributesInterface
        {
        public:
            OtherOrnamentAttributes();
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
            types::AboveBelow placement;
            bool hasDefaultX;
            bool hasDefaultY;
            bool hasRelativeX;
            bool hasRelativeY;
            bool hasFontFamily;
            bool hasFontStyle;
            bool hasFontSize;
            bool hasFontWeight;
            bool hasPlacement;
        };
        
		class OtherOrnament;
		using OtherOrnamentPtr = std::shared_ptr<OtherOrnament>;
		using OtherOrnamentUPtr = std::unique_ptr<OtherOrnament>;
		using OtherOrnamentSet = std::vector<OtherOrnamentPtr>;
		using OtherOrnamentSetIter = OtherOrnamentSet::iterator;
		using OtherOrnamentSetIterConst = OtherOrnamentSet::const_iterator;
		inline OtherOrnamentPtr makeOtherOrnament() { return std::make_shared<OtherOrnament>(); }
        class OtherOrnament : public ElementInterface
        {
        public:
            OtherOrnament();
            OtherOrnament( const types::XsString& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            OtherOrnamentAttributesPtr getAttributes() const;
            void setAttributes( const OtherOrnamentAttributesPtr& attributes );
            types::XsString getValue() const;
            void setValue( const types::XsString& value );
        private:
            types::XsString myValue;
            OtherOrnamentAttributesPtr myAttributes;
        };
        
        
        /**************** AccidentalMark ****************
         4950, 5189
         <xs:element name="accidental-mark" type="accidental-mark" minOccurs="0" maxOccurs="unbounded"/>
         <xs:complexType name="accidental-mark">
         <xs:annotation>
         <xs:documentation>An accidental-mark can be used as a separate notation or as part of an ornament. When used in an ornament, position and placement are relative to the ornament, not relative to the note.</xs:documentation>
         </xs:annotation>
         <xs:simpleContent>
         <xs:extension base="accidental-value">
         <xs:attributeGroup ref="print-style"/>
         <xs:attributeGroup ref="placement"/>
         </xs:extension>
         </xs:simpleContent>
         </xs:complexType>
         <xs:simpleType name="accidental-value">
         <xs:annotation>
         <xs:documentation>The accidental-value type represents notated accidentals supported by MusicXML. In the MusicXML 2.0 DTD this was a string with values that could be included. The XSD strengthens the data typing to an enumerated list. The quarter- and three-quarters- accidentals are Tartini-style quarter-tone accidentals. The -down and -up accidentals are quarter-tone accidentals that include arrows pointing down or up. The slash- accidentals are used in Turkish classical music. The numbered sharp and flat accidentals are superscripted versions of the accidental signs, used in Turkish folk music. The sori and koron accidentals are microtonal sharp and flat accidentals used in Iranian and Persian music.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:string">
         <xs:enumeration value="sharp"/>
         <xs:enumeration value="natural"/>
         <xs:enumeration value="flat"/>
         <xs:enumeration value="double-sharp"/>
         <xs:enumeration value="sharp-sharp"/>
         <xs:enumeration value="flat-flat"/>
         <xs:enumeration value="natural-sharp"/>
         <xs:enumeration value="natural-flat"/>
         <xs:enumeration value="quarter-flat"/>
         <xs:enumeration value="quarter-sharp"/>
         <xs:enumeration value="three-quarters-flat"/>
         <xs:enumeration value="three-quarters-sharp"/>
         <xs:enumeration value="sharp-down"/>
         <xs:enumeration value="sharp-up"/>
         <xs:enumeration value="natural-down"/>
         <xs:enumeration value="natural-up"/>
         <xs:enumeration value="flat-down"/>
         <xs:enumeration value="flat-up"/>
         <xs:enumeration value="triple-sharp"/>
         <xs:enumeration value="triple-flat"/>
         <xs:enumeration value="slash-quarter-sharp"/>
         <xs:enumeration value="slash-sharp"/>
         <xs:enumeration value="slash-flat"/>
         <xs:enumeration value="double-slash-flat"/>
         <xs:enumeration value="sharp-1"/>
         <xs:enumeration value="sharp-2"/>
         <xs:enumeration value="sharp-3"/>
         <xs:enumeration value="sharp-5"/>
         <xs:enumeration value="flat-1"/>
         <xs:enumeration value="flat-2"/>
         <xs:enumeration value="flat-3"/>
         <xs:enumeration value="flat-4"/>
         <xs:enumeration value="sori"/>
         <xs:enumeration value="koron"/>
         </xs:restriction>
         </xs:simpleType>
         */
        
        
        /**************** Fingering ****************
         3487, 5362
         <xs:element name="fingering" type="fingering"/>
         <xs:complexType name="fingering">
         <xs:annotation>
         <xs:documentation>Fingering is typically indicated 1,2,3,4,5. Multiple fingerings may be given, typically to substitute fingerings in the middle of a note. The substitution and alternate values are "no" if the attribute is not present. For guitar and other fretted instruments, the fingering element represents the fretting finger; the pluck element represents the plucking finger.</xs:documentation>
         </xs:annotation>
         <xs:simpleContent>
         <xs:extension base="xs:string">
         <xs:attribute name="substitution" type="yes-no"/>
         <xs:attribute name="alternate" type="yes-no"/>
         <xs:attributeGroup ref="print-style"/>
         <xs:attributeGroup ref="placement"/>
         </xs:extension>
         </xs:simpleContent>
         </xs:complexType>
         <xs:simpleType name="xs:string"/>
         */
        
        /**************** Pluck ****************
         5365
         <xs:element name="pluck" type="placement-text">    <xs:annotation>     <xs:documentation>The pluck element is used to specify the plucking fingering on a fretted instrument where the fingering element refers to the fretting fingering. Typical values are p i m a for pulgar/thumb indicio/index medio/middle and anular/ring fingers.</xs:documentation>  </xs:annotation></xs:element>
         <xs:complexType name="placement-text">
         <xs:annotation>
         <xs:documentation>The placement-text type represents a text element with print-style and placement attribute groups.</xs:documentation>
         </xs:annotation>
         <xs:simpleContent>
         <xs:extension base="xs:string">
         <xs:attributeGroup ref="print-style"/>
         <xs:attributeGroup ref="placement"/>
         </xs:extension>
         </xs:simpleContent>
         </xs:complexType>
         <xs:simpleType name="xs:string"/>
         */
        struct PluckAttributes;
        using PluckAttributesPtr = std::shared_ptr<PluckAttributes>;
        
        struct PluckAttributes : public AttributesInterface
        {
        public:
            PluckAttributes();
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
            types::AboveBelow placement;
            bool hasDefaultX;
            bool hasDefaultY;
            bool hasRelativeX;
            bool hasRelativeY;
            bool hasFontFamily;
            bool hasFontStyle;
            bool hasFontSize;
            bool hasFontWeight;
            bool hasPlacement;
        };
        
		class Pluck;
		using PluckPtr = std::shared_ptr<Pluck>;
		using PluckUPtr = std::unique_ptr<Pluck>;
		using PluckSet = std::vector<PluckPtr>;
		using PluckSetIter = PluckSet::iterator;
		using PluckSetIterConst = PluckSet::const_iterator;
		inline PluckPtr makePluck() { return std::make_shared<Pluck>(); }
        class Pluck : public ElementInterface
        {
        public:
            Pluck();
            Pluck( const types::XsString& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            PluckAttributesPtr getAttributes() const;
            void setAttributes( const PluckAttributesPtr& attributes );
            types::XsString getValue() const;
            void setValue( const types::XsString& value );
        private:
            types::XsString myValue;
            PluckAttributesPtr myAttributes;
        };
        
        
        /**************** Fret ****************
         3484, 5390
         <xs:element name="fret" type="fret"/>
         <xs:complexType name="fret">
         <xs:annotation>
         <xs:documentation>The fret element is used with tablature notation and chord diagrams. Fret numbers start with 0 for an open string and 1 for the first fret.</xs:documentation>
         </xs:annotation>
         <xs:simpleContent>
         <xs:extension base="xs:nonNegativeInteger">
         <xs:attributeGroup ref="font"/>
         <xs:attributeGroup ref="color"/>
         </xs:extension>
         </xs:simpleContent>
         </xs:complexType>
         <xs:simpleType name="xs:nonNegativeInteger"/>
         */
        
        /**************** HammerOn ****************
         5396
         <xs:element name="hammer-on" type="hammer-on-pull-off"/>
         <xs:complexType name="hammer-on-pull-off">
         <xs:annotation>
         <xs:documentation>The hammer-on and pull-off elements are used in guitar and fretted instrument notation. Since a single slur can be marked over many notes, the hammer-on and pull-off elements are separate so the individual pair of notes can be specified. The element content can be used to specify how the hammer-on or pull-off should be notated. An empty element leaves this choice up to the application.</xs:documentation>
         </xs:annotation>
         <xs:simpleContent>
         <xs:extension base="xs:string">
         <xs:attribute name="type" type="start-stop" use="required"/>
         <xs:attribute name="number" type="number-level" default="1"/>
         <xs:attributeGroup ref="print-style"/>
         <xs:attributeGroup ref="placement"/>
         </xs:extension>
         </xs:simpleContent>
         </xs:complexType>
         <xs:simpleType name="xs:string"/>
         */
        struct HammerOnAttributes;
        using HammerOnAttributesPtr = std::shared_ptr<HammerOnAttributes>;
        
        struct HammerOnAttributes : public AttributesInterface
        {
        public:
            HammerOnAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::StartStop type;
            types::NumberLevel number;
            types::TenthsValue defaultX;
            types::TenthsValue defaultY;
            types::TenthsValue relativeX;
            types::TenthsValue relativeY;
            types::CommaSeparatedText fontFamily;
            types::FontStyle fontStyle;
            types::FontSize fontSize;
            types::FontWeight fontWeight;
            types::AboveBelow placement;
            const   bool hasType;
            bool hasNumber;
            bool hasDefaultX;
            bool hasDefaultY;
            bool hasRelativeX;
            bool hasRelativeY;
            bool hasFontFamily;
            bool hasFontStyle;
            bool hasFontSize;
            bool hasFontWeight;
            bool hasPlacement;
        };
        
		class HammerOn;
		using HammerOnPtr = std::shared_ptr<HammerOn>;
		using HammerOnUPtr = std::unique_ptr<HammerOn>;
		using HammerOnSet = std::vector<HammerOnPtr>;
		using HammerOnSetIter = HammerOnSet::iterator;
		using HammerOnSetIterConst = HammerOnSet::const_iterator;
		inline HammerOnPtr makeHammerOn() { return std::make_shared<HammerOn>(); }
        class HammerOn : public ElementInterface
        {
        public:
            HammerOn();
            HammerOn( const types::XsString& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            HammerOnAttributesPtr getAttributes() const;
            void setAttributes( const HammerOnAttributesPtr& attributes );
            types::XsString getValue() const;
            void setValue( const types::XsString& value );
        private:
            types::XsString myValue;
            HammerOnAttributesPtr myAttributes;
        };
        
        
        /**************** PullOff ****************
         5399
         <xs:element name="pull-off" type="hammer-on-pull-off"/>
         <xs:complexType name="hammer-on-pull-off">
         <xs:annotation>
         <xs:documentation>The hammer-on and pull-off elements are used in guitar and fretted instrument notation. Since a single slur can be marked over many notes, the hammer-on and pull-off elements are separate so the individual pair of notes can be specified. The element content can be used to specify how the hammer-on or pull-off should be notated. An empty element leaves this choice up to the application.</xs:documentation>
         </xs:annotation>
         <xs:simpleContent>
         <xs:extension base="xs:string">
         <xs:attribute name="type" type="start-stop" use="required"/>
         <xs:attribute name="number" type="number-level" default="1"/>
         <xs:attributeGroup ref="print-style"/>
         <xs:attributeGroup ref="placement"/>
         </xs:extension>
         </xs:simpleContent>
         </xs:complexType>
         <xs:simpleType name="xs:string"/>
         */
        struct PullOffAttributes;
        using PullOffAttributesPtr = std::shared_ptr<PullOffAttributes>;
        
        struct PullOffAttributes : public AttributesInterface
        {
        public:
            PullOffAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::StartStop type;
            types::NumberLevel number;
            types::TenthsValue defaultX;
            types::TenthsValue defaultY;
            types::TenthsValue relativeX;
            types::TenthsValue relativeY;
            types::CommaSeparatedText fontFamily;
            types::FontStyle fontStyle;
            types::FontSize fontSize;
            types::FontWeight fontWeight;
            types::AboveBelow placement;
            const   bool hasType;
            bool hasNumber;
            bool hasDefaultX;
            bool hasDefaultY;
            bool hasRelativeX;
            bool hasRelativeY;
            bool hasFontFamily;
            bool hasFontStyle;
            bool hasFontSize;
            bool hasFontWeight;
            bool hasPlacement;
        };
        
		class PullOff;
		using PullOffPtr = std::shared_ptr<PullOff>;
		using PullOffUPtr = std::unique_ptr<PullOff>;
		using PullOffSet = std::vector<PullOffPtr>;
		using PullOffSetIter = PullOffSet::iterator;
		using PullOffSetIterConst = PullOffSet::const_iterator;
		inline PullOffPtr makePullOff() { return std::make_shared<PullOff>(); }
        class PullOff : public ElementInterface
        {
        public:
            PullOff();
            PullOff( const types::XsString& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            PullOffAttributesPtr getAttributes() const;
            void setAttributes( const PullOffAttributesPtr& attributes );
            types::XsString getValue() const;
            void setValue( const types::XsString& value );
        private:
            types::XsString myValue;
            PullOffAttributesPtr myAttributes;
        };
        
        
        /**************** Tap ****************
         5405
         <xs:element name="tap" type="placement-text">  <xs:annotation>     <xs:documentation>The tap element indicates a tap on the fretboard. The element content allows specification of the notation; + and T are common choices. If empty the display is application-specific.</xs:documentation>  </xs:annotation></xs:element>
         <xs:complexType name="placement-text">
         <xs:annotation>
         <xs:documentation>The placement-text type represents a text element with print-style and placement attribute groups.</xs:documentation>
         </xs:annotation>
         <xs:simpleContent>
         <xs:extension base="xs:string">
         <xs:attributeGroup ref="print-style"/>
         <xs:attributeGroup ref="placement"/>
         </xs:extension>
         </xs:simpleContent>
         </xs:complexType>
         <xs:simpleType name="xs:string"/>
         */
        struct TapAttributes;
        using TapAttributesPtr = std::shared_ptr<TapAttributes>;
        
        struct TapAttributes : public AttributesInterface
        {
        public:
            TapAttributes();
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
            types::AboveBelow placement;
            bool hasDefaultX;
            bool hasDefaultY;
            bool hasRelativeX;
            bool hasRelativeY;
            bool hasFontFamily;
            bool hasFontStyle;
            bool hasFontSize;
            bool hasFontWeight;
            bool hasPlacement;
        };
        
		class Tap;
		using TapPtr = std::shared_ptr<Tap>;
		using TapUPtr = std::unique_ptr<Tap>;
		using TapSet = std::vector<TapPtr>;
		using TapSetIter = TapSet::iterator;
		using TapSetIterConst = TapSet::const_iterator;
		inline TapPtr makeTap() { return std::make_shared<Tap>(); }
        class Tap : public ElementInterface
        {
        public:
            Tap();
            Tap( const types::XsString& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            TapAttributesPtr getAttributes() const;
            void setAttributes( const TapAttributesPtr& attributes );
            types::XsString getValue() const;
            void setValue( const types::XsString& value );
        private:
            types::XsString myValue;
            TapAttributesPtr myAttributes;
        };
        
        
        /**************** Handbell ****************
         5427
         <xs:element name="handbell" type="handbell"/>
         <xs:complexType name="handbell">
         <xs:annotation>
         <xs:documentation>The handbell element represents notation for various techniques used in handbell and handchime music.</xs:documentation>
         </xs:annotation>
         <xs:simpleContent>
         <xs:extension base="handbell-value">
         <xs:attributeGroup ref="print-style"/>
         <xs:attributeGroup ref="placement"/>
         </xs:extension>
         </xs:simpleContent>
         </xs:complexType>
         <xs:simpleType name="handbell-value">
         <xs:annotation>
         <xs:documentation>The handbell-value type represents the type of handbell technique being notated.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:string">
         <xs:enumeration value="damp"/>
         <xs:enumeration value="echo"/>
         <xs:enumeration value="gyro"/>
         <xs:enumeration value="hand martellato"/>
         <xs:enumeration value="mallet lift"/>
         <xs:enumeration value="mallet table"/>
         <xs:enumeration value="martellato"/>
         <xs:enumeration value="martellato lift"/>
         <xs:enumeration value="muted martellato"/>
         <xs:enumeration value="pluck lift"/>
         <xs:enumeration value="swing"/>
         </xs:restriction>
         </xs:simpleType>
         */
        struct HandbellAttributes;
        using HandbellAttributesPtr = std::shared_ptr<HandbellAttributes>;
        
        struct HandbellAttributes : public AttributesInterface
        {
        public:
            HandbellAttributes();
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
            types::AboveBelow placement;
            bool hasDefaultX;
            bool hasDefaultY;
            bool hasRelativeX;
            bool hasRelativeY;
            bool hasFontFamily;
            bool hasFontStyle;
            bool hasFontSize;
            bool hasFontWeight;
            bool hasPlacement;
        };
        
		class Handbell;
		using HandbellPtr = std::shared_ptr<Handbell>;
		using HandbellUPtr = std::unique_ptr<Handbell>;
		using HandbellSet = std::vector<HandbellPtr>;
		using HandbellSetIter = HandbellSet::iterator;
		using HandbellSetIterConst = HandbellSet::const_iterator;
		inline HandbellPtr makeHandbell() { return std::make_shared<Handbell>(); }
        class Handbell : public ElementInterface
        {
        public:
            Handbell();
            Handbell( const types::HandbellValue& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            HandbellAttributesPtr getAttributes() const;
            void setAttributes( const HandbellAttributesPtr& attributes );
            types::HandbellValue getValue() const;
            void setValue( const types::HandbellValue& value );
        private:
            types::HandbellValue myValue;
            HandbellAttributesPtr myAttributes;
        };
        
        
        /**************** OtherTechnical ****************
         5430
         <xs:element name="other-technical" type="placement-text">  <xs:annotation>     <xs:documentation>The other-technical element is used to define any technical indications not yet in the MusicXML format. This allows extended representation though without application interoperability.</xs:documentation>   </xs:annotation></xs:element>
         <xs:complexType name="placement-text">
         <xs:annotation>
         <xs:documentation>The placement-text type represents a text element with print-style and placement attribute groups.</xs:documentation>
         </xs:annotation>
         <xs:simpleContent>
         <xs:extension base="xs:string">
         <xs:attributeGroup ref="print-style"/>
         <xs:attributeGroup ref="placement"/>
         </xs:extension>
         </xs:simpleContent>
         </xs:complexType>
         <xs:simpleType name="xs:string"/>
         */
        struct OtherTechnicalAttributes;
        using OtherTechnicalAttributesPtr = std::shared_ptr<OtherTechnicalAttributes>;
        
        struct OtherTechnicalAttributes : public AttributesInterface
        {
        public:
            OtherTechnicalAttributes();
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
            types::AboveBelow placement;
            bool hasDefaultX;
            bool hasDefaultY;
            bool hasRelativeX;
            bool hasRelativeY;
            bool hasFontFamily;
            bool hasFontStyle;
            bool hasFontSize;
            bool hasFontWeight;
            bool hasPlacement;
        };
        
		class OtherTechnical;
		using OtherTechnicalPtr = std::shared_ptr<OtherTechnical>;
		using OtherTechnicalUPtr = std::unique_ptr<OtherTechnical>;
		using OtherTechnicalSet = std::vector<OtherTechnicalPtr>;
		using OtherTechnicalSetIter = OtherTechnicalSet::iterator;
		using OtherTechnicalSetIterConst = OtherTechnicalSet::const_iterator;
		inline OtherTechnicalPtr makeOtherTechnical() { return std::make_shared<OtherTechnical>(); }
        class OtherTechnical : public ElementInterface
        {
        public:
            OtherTechnical();
            OtherTechnical( const types::XsString& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            OtherTechnicalAttributesPtr getAttributes() const;
            void setAttributes( const OtherTechnicalAttributesPtr& attributes );
            types::XsString getValue() const;
            void setValue( const types::XsString& value );
        private:
            types::XsString myValue;
            OtherTechnicalAttributesPtr myAttributes;
        };
        
        
        /**************** TupletNumber ****************
         5620
         <xs:element name="tuplet-number" type="tuplet-number" minOccurs="0"/>
         <xs:complexType name="tuplet-number">
         <xs:annotation>
         <xs:documentation>The tuplet-number type indicates the number of notes for this portion of the tuplet.</xs:documentation>
         </xs:annotation>
         <xs:simpleContent>
         <xs:extension base="xs:nonNegativeInteger">
         <xs:attributeGroup ref="font"/>
         <xs:attributeGroup ref="color"/>
         </xs:extension>
         </xs:simpleContent>
         </xs:complexType>
         <xs:simpleType name="xs:nonNegativeInteger"/>
         */
        struct TupletNumberAttributes;
        using TupletNumberAttributesPtr = std::shared_ptr<TupletNumberAttributes>;
        
        struct TupletNumberAttributes : public AttributesInterface
        {
        public:
            TupletNumberAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::CommaSeparatedText fontFamily;
            types::FontStyle fontStyle;
            types::FontSize fontSize;
            types::FontWeight fontWeight;
            bool hasFontFamily;
            bool hasFontStyle;
            bool hasFontSize;
            bool hasFontWeight;
        };
        
		class TupletNumber;
		using TupletNumberPtr = std::shared_ptr<TupletNumber>;
		using TupletNumberUPtr = std::unique_ptr<TupletNumber>;
		using TupletNumberSet = std::vector<TupletNumberPtr>;
		using TupletNumberSetIter = TupletNumberSet::iterator;
		using TupletNumberSetIterConst = TupletNumberSet::const_iterator;
		inline TupletNumberPtr makeTupletNumber() { return std::make_shared<TupletNumber>(); }
        class TupletNumber : public ElementInterface
        {
        public:
            TupletNumber();
            TupletNumber( const types::NonNegativeInteger& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            TupletNumberAttributesPtr getAttributes() const;
            void setAttributes( const TupletNumberAttributesPtr& attributes );
            types::NonNegativeInteger getValue() const;
            void setValue( const types::NonNegativeInteger& value );
        private:
            types::NonNegativeInteger myValue;
            TupletNumberAttributesPtr myAttributes;
        };
        
        
        /**************** TupletType ****************
         5624
         <xs:element name="tuplet-type" type="tuplet-type" minOccurs="0"/>
         <xs:complexType name="tuplet-type">
         <xs:annotation>
         <xs:documentation>The tuplet-type type indicates the graphical note type of the notes for this portion of the tuplet.</xs:documentation>
         </xs:annotation>
         <xs:simpleContent>
         <xs:extension base="note-type-value">
         <xs:attributeGroup ref="font"/>
         <xs:attributeGroup ref="color"/>
         </xs:extension>
         </xs:simpleContent>
         </xs:complexType>
         <xs:simpleType name="note-type-value">
         <xs:annotation>
         <xs:documentation>The note-type type is used for the MusicXML type element and represents the graphic note type, from 1024th (shortest) to maxima (longest).</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:string">
         <xs:enumeration value="1024th"/>
         <xs:enumeration value="512th"/>
         <xs:enumeration value="256th"/>
         <xs:enumeration value="128th"/>
         <xs:enumeration value="64th"/>
         <xs:enumeration value="32nd"/>
         <xs:enumeration value="16th"/>
         <xs:enumeration value="eighth"/>
         <xs:enumeration value="quarter"/>
         <xs:enumeration value="half"/>
         <xs:enumeration value="whole"/>
         <xs:enumeration value="breve"/>
         <xs:enumeration value="long"/>
         <xs:enumeration value="maxima"/>
         </xs:restriction>
         </xs:simpleType>
         */
        struct TupletTypeAttributes;
        using TupletTypeAttributesPtr = std::shared_ptr<TupletTypeAttributes>;
        
        struct TupletTypeAttributes : public AttributesInterface
        {
        public:
            TupletTypeAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::CommaSeparatedText fontFamily;
            types::FontStyle fontStyle;
            types::FontSize fontSize;
            types::FontWeight fontWeight;
            bool hasFontFamily;
            bool hasFontStyle;
            bool hasFontSize;
            bool hasFontWeight;
        };
        
		class TupletType;
		using TupletTypePtr = std::shared_ptr<TupletType>;
		using TupletTypeUPtr = std::unique_ptr<TupletType>;
		using TupletTypeSet = std::vector<TupletTypePtr>;
		using TupletTypeSetIter = TupletTypeSet::iterator;
		using TupletTypeSetIterConst = TupletTypeSet::const_iterator;
		inline TupletTypePtr makeTupletType() { return std::make_shared<TupletType>(); }
        class TupletType : public ElementInterface
        {
        public:
            TupletType();
            TupletType( const types::NoteTypeValue& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            TupletTypeAttributesPtr getAttributes() const;
            void setAttributes( const TupletTypeAttributesPtr& attributes );
            types::NoteTypeValue getValue() const;
            void setValue( const types::NoteTypeValue& value );
        private:
            types::NoteTypeValue myValue;
            TupletTypeAttributesPtr myAttributes;
        };
        
        
        /**************** CreditWords ****************
         5677, 5693
         <xs:element name="credit-words" type="formatted-text"/>
         <xs:complexType name="formatted-text">
         <xs:annotation>
         <xs:documentation>The formatted-text type represents a text element with text-formatting attributes.</xs:documentation>
         </xs:annotation>
         <xs:simpleContent>
         <xs:extension base="xs:string">
         <xs:attributeGroup ref="text-formatting"/>
         </xs:extension>
         </xs:simpleContent>
         </xs:complexType>
         <xs:simpleType name="xs:string"/>
         */
        struct CreditWordsAttributes;
        using CreditWordsAttributesPtr = std::shared_ptr<CreditWordsAttributes>;
        
        struct CreditWordsAttributes : public AttributesInterface
        {
        public:
            CreditWordsAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::LeftCenterRight justify;
            types::TenthsValue defaultX;
            types::TenthsValue defaultY;
            types::TenthsValue relativeX;
            types::TenthsValue relativeY;
            types::CommaSeparatedText fontFamily;
            types::FontStyle fontStyle;
            types::FontSize fontSize;
            types::FontWeight fontWeight;
            types::LeftCenterRight halign;
            types::NumberOfLines underline;
            types::NumberOfLines overline;
            types::NumberOfLines lineThrough;
            types::RotationDegrees rotation;
            types::NumberOrNormal letterSpacing;
            types::NumberOrNormal lineHeight;
            types::XmlLang lang;
            types::XmlSpace space;
            types::EnclosureShape enclosure;
            bool hasJustify;
            bool hasDefaultX;
            bool hasDefaultY;
            bool hasRelativeX;
            bool hasRelativeY;
            bool hasFontFamily;
            bool hasFontStyle;
            bool hasFontSize;
            bool hasFontWeight;
            bool hasHalign;
            bool hasUnderline;
            bool hasOverline;
            bool hasLineThrough;
            bool hasRotation;
            bool hasLetterSpacing;
            bool hasLineHeight;
            bool hasLang;
            bool hasSpace;
            bool hasEnclosure;
        };
        
		class CreditWords;
		using CreditWordsPtr = std::shared_ptr<CreditWords>;
		using CreditWordsUPtr = std::unique_ptr<CreditWords>;
		using CreditWordsSet = std::vector<CreditWordsPtr>;
		using CreditWordsSetIter = CreditWordsSet::iterator;
		using CreditWordsSetIterConst = CreditWordsSet::const_iterator;
		inline CreditWordsPtr makeCreditWords() { return std::make_shared<CreditWords>(); }
        class CreditWords : public ElementInterface
        {
        public:
            CreditWords();
            CreditWords( const types::XsString& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            CreditWordsAttributesPtr getAttributes() const;
            void setAttributes( const CreditWordsAttributesPtr& attributes );
            types::XsString getValue() const;
            void setValue( const types::XsString& value );
        private:
            types::XsString myValue;
            CreditWordsAttributesPtr myAttributes;
        };
        
        
        /**************** CreditWords ****************
         5677, 5693
         <xs:element name="credit-words" type="formatted-text"/>
         <xs:complexType name="formatted-text">
         <xs:annotation>
         <xs:documentation>The formatted-text type represents a text element with text-formatting attributes.</xs:documentation>
         </xs:annotation>
         <xs:simpleContent>
         <xs:extension base="xs:string">
         <xs:attributeGroup ref="text-formatting"/>
         </xs:extension>
         </xs:simpleContent>
         </xs:complexType>
         <xs:simpleType name="xs:string"/>
         */
        
        /**************** GroupName ****************
         5803
         <xs:element name="group-name" type="group-name" minOccurs="0"/>
         <xs:complexType name="group-name">
         <xs:annotation>
         <xs:documentation>The group-name type describes the name or abbreviation of a part-group element. Formatting attributes in the group-name type are deprecated in Version 2.0 in favor of the new group-name-display and group-abbreviation-display elements.</xs:documentation>
         </xs:annotation>
         <xs:simpleContent>
         <xs:extension base="xs:string">
         <xs:attributeGroup ref="group-name-text"/>
         </xs:extension>
         </xs:simpleContent>
         </xs:complexType>
         <xs:simpleType name="xs:string"/>
         */
        struct GroupNameAttributes;
        using GroupNameAttributesPtr = std::shared_ptr<GroupNameAttributes>;
        
        struct GroupNameAttributes : public AttributesInterface
        {
        public:
            GroupNameAttributes();
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
            types::LeftCenterRight justify;
            bool hasDefaultX;
            bool hasDefaultY;
            bool hasRelativeX;
            bool hasRelativeY;
            bool hasFontFamily;
            bool hasFontStyle;
            bool hasFontSize;
            bool hasFontWeight;
            bool hasJustify;
        };
        
		class GroupName;
		using GroupNamePtr = std::shared_ptr<GroupName>;
		using GroupNameUPtr = std::unique_ptr<GroupName>;
		using GroupNameSet = std::vector<GroupNamePtr>;
		using GroupNameSetIter = GroupNameSet::iterator;
		using GroupNameSetIterConst = GroupNameSet::const_iterator;
		inline GroupNamePtr makeGroupName() { return std::make_shared<GroupName>(); }
        class GroupName : public ElementInterface
        {
        public:
            GroupName();
            GroupName( const types::XsString& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            GroupNameAttributesPtr getAttributes() const;
            void setAttributes( const GroupNameAttributesPtr& attributes );
            types::XsString getValue() const;
            void setValue( const types::XsString& value );
        private:
            types::XsString myValue;
            GroupNameAttributesPtr myAttributes;
        };
        
        
        /**************** GroupAbbreviation ****************
         5813
         <xs:element name="group-abbreviation" type="group-name" minOccurs="0"/>
         <xs:complexType name="group-name">
         <xs:annotation>
         <xs:documentation>The group-name type describes the name or abbreviation of a part-group element. Formatting attributes in the group-name type are deprecated in Version 2.0 in favor of the new group-name-display and group-abbreviation-display elements.</xs:documentation>
         </xs:annotation>
         <xs:simpleContent>
         <xs:extension base="xs:string">
         <xs:attributeGroup ref="group-name-text"/>
         </xs:extension>
         </xs:simpleContent>
         </xs:complexType>
         <xs:simpleType name="xs:string"/>
         */
        struct GroupAbbreviationAttributes;
        using GroupAbbreviationAttributesPtr = std::shared_ptr<GroupAbbreviationAttributes>;
        
        struct GroupAbbreviationAttributes : public AttributesInterface
        {
        public:
            GroupAbbreviationAttributes();
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
            types::LeftCenterRight justify;
            bool hasDefaultX;
            bool hasDefaultY;
            bool hasRelativeX;
            bool hasRelativeY;
            bool hasFontFamily;
            bool hasFontStyle;
            bool hasFontSize;
            bool hasFontWeight;
            bool hasJustify;
        };
        
		class GroupAbbreviation;
		using GroupAbbreviationPtr = std::shared_ptr<GroupAbbreviation>;
		using GroupAbbreviationUPtr = std::unique_ptr<GroupAbbreviation>;
		using GroupAbbreviationSet = std::vector<GroupAbbreviationPtr>;
		using GroupAbbreviationSetIter = GroupAbbreviationSet::iterator;
		using GroupAbbreviationSetIterConst = GroupAbbreviationSet::const_iterator;
		inline GroupAbbreviationPtr makeGroupAbbreviation() { return std::make_shared<GroupAbbreviation>(); }
        class GroupAbbreviation : public ElementInterface
        {
        public:
            GroupAbbreviation();
            GroupAbbreviation( const types::XsString& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            GroupAbbreviationAttributesPtr getAttributes() const;
            void setAttributes( const GroupAbbreviationAttributesPtr& attributes );
            types::XsString getValue() const;
            void setValue( const types::XsString& value );
        private:
            types::XsString myValue;
            GroupAbbreviationAttributesPtr myAttributes;
        };
        
        
        /**************** GroupSymbol ****************
         5823
         <xs:element name="group-symbol" type="group-symbol" minOccurs="0"/>
         <xs:complexType name="group-symbol">
         <xs:annotation>
         <xs:documentation>The group-symbol type indicates how the symbol for a group is indicated in the score.</xs:documentation>
         </xs:annotation>
         <xs:simpleContent>
         <xs:extension base="group-symbol-value">
         <xs:attributeGroup ref="position"/>
         <xs:attributeGroup ref="color"/>
         </xs:extension>
         </xs:simpleContent>
         </xs:complexType>
         <xs:simpleType name="group-symbol-value">
         <xs:annotation>
         <xs:documentation>The group-symbol-value type indicates how the symbol for a group is indicated in the score. The default value is none.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:string">
         <xs:enumeration value="none"/>
         <xs:enumeration value="brace"/>
         <xs:enumeration value="line"/>
         <xs:enumeration value="bracket"/>
         <xs:enumeration value="square"/>
         </xs:restriction>
         </xs:simpleType>
         */
        struct GroupSymbolAttributes;
        using GroupSymbolAttributesPtr = std::shared_ptr<GroupSymbolAttributes>;
        
        struct GroupSymbolAttributes : public AttributesInterface
        {
        public:
            GroupSymbolAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::TenthsValue defaultX;
            types::TenthsValue defaultY;
            types::TenthsValue relativeX;
            types::TenthsValue relativeY;
            bool hasDefaultX;
            bool hasDefaultY;
            bool hasRelativeX;
            bool hasRelativeY;
        };
        
		class GroupSymbol;
		using GroupSymbolPtr = std::shared_ptr<GroupSymbol>;
		using GroupSymbolUPtr = std::unique_ptr<GroupSymbol>;
		using GroupSymbolSet = std::vector<GroupSymbolPtr>;
		using GroupSymbolSetIter = GroupSymbolSet::iterator;
		using GroupSymbolSetIterConst = GroupSymbolSet::const_iterator;
		inline GroupSymbolPtr makeGroupSymbol() { return std::make_shared<GroupSymbol>(); }
        class GroupSymbol : public ElementInterface
        {
        public:
            GroupSymbol();
            GroupSymbol( const types::GroupSymbolValue& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            GroupSymbolAttributesPtr getAttributes() const;
            void setAttributes( const GroupSymbolAttributesPtr& attributes );
            types::GroupSymbolValue getValue() const;
            void setValue( const types::GroupSymbolValue& value );
        private:
            types::GroupSymbolValue myValue;
            GroupSymbolAttributesPtr myAttributes;
        };
        
        
        /**************** GroupBarline ****************
         5827
         <xs:element name="group-barline" type="group-barline" minOccurs="0"/>
         <xs:complexType name="group-barline">
         <xs:annotation>
         <xs:documentation>The group-barline type indicates if the group should have common barlines.</xs:documentation>
         </xs:annotation>
         <xs:simpleContent>
         <xs:extension base="group-barline-value">
         <xs:attributeGroup ref="color"/>
         </xs:extension>
         </xs:simpleContent>
         </xs:complexType>
         <xs:simpleType name="group-barline-value">
         <xs:annotation>
         <xs:documentation>The group-barline-value type indicates if the group should have common barlines.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:string">
         <xs:enumeration value="yes"/>
         <xs:enumeration value="no"/>
         <xs:enumeration value="Mensurstrich"/>
         </xs:restriction>
         </xs:simpleType>
         */
        struct GroupBarlineAttributes;
        using GroupBarlineAttributesPtr = std::shared_ptr<GroupBarlineAttributes>;
        
        struct GroupBarlineAttributes : public AttributesInterface
        {
        public:
            GroupBarlineAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::Color color;
            bool hasColor;
        };
        
		class GroupBarline;
		using GroupBarlinePtr = std::shared_ptr<GroupBarline>;
		using GroupBarlineUPtr = std::unique_ptr<GroupBarline>;
		using GroupBarlineSet = std::vector<GroupBarlinePtr>;
		using GroupBarlineSetIter = GroupBarlineSet::iterator;
		using GroupBarlineSetIterConst = GroupBarlineSet::const_iterator;
		inline GroupBarlinePtr makeGroupBarline() { return std::make_shared<GroupBarline>(); }
        class GroupBarline : public ElementInterface
        {
        public:
            GroupBarline();
            GroupBarline( const types::GroupBarlineValue& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            GroupBarlineAttributesPtr getAttributes() const;
            void setAttributes( const GroupBarlineAttributesPtr& attributes );
            types::GroupBarlineValue getValue() const;
            void setValue( const types::GroupBarlineValue& value );
        private:
            types::GroupBarlineValue myValue;
            GroupBarlineAttributesPtr myAttributes;
        };
        
        
        /**************** PartName ****************
         5925
         <xs:element name="part-name" type="part-name"/>
         <xs:complexType name="part-name">
         <xs:annotation>
         <xs:documentation>The part-name type describes the name or abbreviation of a score-part element. Formatting attributes for the part-name element are deprecated in Version 2.0 in favor of the new part-name-display and part-abbreviation-display elements.</xs:documentation>
         </xs:annotation>
         <xs:simpleContent>
         <xs:extension base="xs:string">
         <xs:attributeGroup ref="part-name-text"/>
         </xs:extension>
         </xs:simpleContent>
         </xs:complexType>
         <xs:simpleType name="xs:string"/>
         */
        struct PartNameAttributes;
        using PartNameAttributesPtr = std::shared_ptr<PartNameAttributes>;
        
        struct PartNameAttributes : public AttributesInterface
        {
        public:
            PartNameAttributes();
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
            types::YesNo printObject;
            types::LeftCenterRight justify;
            bool hasDefaultX;
            bool hasDefaultY;
            bool hasRelativeX;
            bool hasRelativeY;
            bool hasFontFamily;
            bool hasFontStyle;
            bool hasFontSize;
            bool hasFontWeight;
            bool hasPrintObject;
            bool hasJustify;
        };
        
		class PartName;
		using PartNamePtr = std::shared_ptr<PartName>;
		using PartNameUPtr = std::unique_ptr<PartName>;
		using PartNameSet = std::vector<PartNamePtr>;
		using PartNameSetIter = PartNameSet::iterator;
		using PartNameSetIterConst = PartNameSet::const_iterator;
		inline PartNamePtr makePartName() { return std::make_shared<PartName>(); }
        class PartName : public ElementInterface
        {
        public:
            PartName();
            PartName( const types::XsString& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            PartNameAttributesPtr getAttributes() const;
            void setAttributes( const PartNameAttributesPtr& attributes );
            types::XsString getValue() const;
            void setValue( const types::XsString& value );
        private:
            types::XsString myValue;
            PartNameAttributesPtr myAttributes;
        };
        
        
        /**************** PartAbbreviation ****************
         5932
         <xs:element name="part-abbreviation" type="part-name" minOccurs="0"/>
         <xs:complexType name="part-name">
         <xs:annotation>
         <xs:documentation>The part-name type describes the name or abbreviation of a score-part element. Formatting attributes for the part-name element are deprecated in Version 2.0 in favor of the new part-name-display and part-abbreviation-display elements.</xs:documentation>
         </xs:annotation>
         <xs:simpleContent>
         <xs:extension base="xs:string">
         <xs:attributeGroup ref="part-name-text"/>
         </xs:extension>
         </xs:simpleContent>
         </xs:complexType>
         <xs:simpleType name="xs:string"/>
         */
        struct PartAbbreviationAttributes;
        using PartAbbreviationAttributesPtr = std::shared_ptr<PartAbbreviationAttributes>;
        
        struct PartAbbreviationAttributes : public AttributesInterface
        {
        public:
            PartAbbreviationAttributes();
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
            types::YesNo printObject;
            types::LeftCenterRight justify;
            bool hasDefaultX;
            bool hasDefaultY;
            bool hasRelativeX;
            bool hasRelativeY;
            bool hasFontFamily;
            bool hasFontStyle;
            bool hasFontSize;
            bool hasFontWeight;
            bool hasPrintObject;
            bool hasJustify;
        };
        
		class PartAbbreviation;
		using PartAbbreviationPtr = std::shared_ptr<PartAbbreviation>;
		using PartAbbreviationUPtr = std::unique_ptr<PartAbbreviation>;
		using PartAbbreviationSet = std::vector<PartAbbreviationPtr>;
		using PartAbbreviationSetIter = PartAbbreviationSet::iterator;
		using PartAbbreviationSetIterConst = PartAbbreviationSet::const_iterator;
		inline PartAbbreviationPtr makePartAbbreviation() { return std::make_shared<PartAbbreviation>(); }
        class PartAbbreviation : public ElementInterface
        {
        public:
            PartAbbreviation();
            PartAbbreviation( const types::XsString& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            PartAbbreviationAttributesPtr getAttributes() const;
            void setAttributes( const PartAbbreviationAttributesPtr& attributes );
            types::XsString getValue() const;
            void setValue( const types::XsString& value );
        private:
            types::XsString myValue;
            PartAbbreviationAttributesPtr myAttributes;
        };
        
        
        /**************** MidiDevice ****************
         3922, 5955
         <xs:element name="midi-device" type="midi-device" minOccurs="0"/>
         <xs:complexType name="midi-device">
         <xs:annotation>
         <xs:documentation>The midi-device type corresponds to the DeviceName meta event in Standard MIDI Files. The optional port attribute is a number from 1 to 16 that can be used with the unofficial MIDI port (or cable) meta event. Unlike the DeviceName meta event, there can be multiple midi-device elements per MusicXML part starting in MusicXML 3.0. The optional id attribute refers to the score-instrument assigned to this device. If missing, the device assignment affects all score-instrument elements in the score-part.</xs:documentation>
         </xs:annotation>
         <xs:simpleContent>
         <xs:extension base="xs:string">
         <xs:attribute name="port" type="midi-16"/>
         <xs:attribute name="id" type="xs:IDREF"/>
         </xs:extension>
         </xs:simpleContent>
         </xs:complexType>
         <xs:simpleType name="xs:string"/>
         */
        
        /**************** Footnote ****************
         6049
         <xs:element name="footnote" type="formatted-text"/>
         <xs:complexType name="formatted-text">
         <xs:annotation>
         <xs:documentation>The formatted-text type represents a text element with text-formatting attributes.</xs:documentation>
         </xs:annotation>
         <xs:simpleContent>
         <xs:extension base="xs:string">
         <xs:attributeGroup ref="text-formatting"/>
         </xs:extension>
         </xs:simpleContent>
         </xs:complexType>
         <xs:simpleType name="xs:string"/>
         */
        struct FootnoteAttributes;
        using FootnoteAttributesPtr = std::shared_ptr<FootnoteAttributes>;
        
        struct FootnoteAttributes : public AttributesInterface
        {
        public:
            FootnoteAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::LeftCenterRight justify;
            types::TenthsValue defaultX;
            types::TenthsValue defaultY;
            types::TenthsValue relativeX;
            types::TenthsValue relativeY;
            types::CommaSeparatedText fontFamily;
            types::FontStyle fontStyle;
            types::FontSize fontSize;
            types::FontWeight fontWeight;
            types::LeftCenterRight halign;
            types::NumberOfLines underline;
            types::NumberOfLines overline;
            types::NumberOfLines lineThrough;
            types::RotationDegrees rotation;
            types::NumberOrNormal letterSpacing;
            types::NumberOrNormal lineHeight;
            types::XmlLang lang;
            types::XmlSpace space;
            types::EnclosureShape enclosure;
            bool hasJustify;
            bool hasDefaultX;
            bool hasDefaultY;
            bool hasRelativeX;
            bool hasRelativeY;
            bool hasFontFamily;
            bool hasFontStyle;
            bool hasFontSize;
            bool hasFontWeight;
            bool hasHalign;
            bool hasUnderline;
            bool hasOverline;
            bool hasLineThrough;
            bool hasRotation;
            bool hasLetterSpacing;
            bool hasLineHeight;
            bool hasLang;
            bool hasSpace;
            bool hasEnclosure;
        };
        
		class Footnote;
		using FootnotePtr = std::shared_ptr<Footnote>;
		using FootnoteUPtr = std::unique_ptr<Footnote>;
		using FootnoteSet = std::vector<FootnotePtr>;
		using FootnoteSetIter = FootnoteSet::iterator;
		using FootnoteSetIterConst = FootnoteSet::const_iterator;
		inline FootnotePtr makeFootnote() { return std::make_shared<Footnote>(); }
        class Footnote : public ElementInterface
        {
        public:
            Footnote();
            Footnote( const types::XsString& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            FootnoteAttributesPtr getAttributes() const;
            void setAttributes( const FootnoteAttributesPtr& attributes );
            types::XsString getValue() const;
            void setValue( const types::XsString& value );
        private:
            types::XsString myValue;
            FootnoteAttributesPtr myAttributes;
        };
        
        
        /**************** Level ****************
         6057
         <xs:element name="level" type="level"/>
         <xs:complexType name="level">
         <xs:annotation>
         <xs:documentation>The level type is used to specify editorial information for different MusicXML elements. If the reference attribute for the level element is yes, this indicates editorial information that is for display only and should not affect playback. For instance, a modern edition of older music may set reference="yes" on the attributes containing the music's original clef, key, and time signature. It is no by default.</xs:documentation>
         </xs:annotation>
         <xs:simpleContent>
         <xs:extension base="xs:string">
         <xs:attribute name="reference" type="yes-no"/>
         <xs:attributeGroup ref="level-display"/>
         </xs:extension>
         </xs:simpleContent>
         </xs:complexType>
         <xs:simpleType name="xs:string"/>
         */
        struct LevelAttributes;
        using LevelAttributesPtr = std::shared_ptr<LevelAttributes>;
        
        struct LevelAttributes : public AttributesInterface
        {
        public:
            LevelAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::YesNo reference;
            types::YesNo parentheses;
            types::YesNo bracket;
            types::SymbolSize size;
            bool hasReference;
            bool hasParentheses;
            bool hasBracket;
            bool hasSize;
        };
        
		class Level;
		using LevelPtr = std::shared_ptr<Level>;
		using LevelUPtr = std::unique_ptr<Level>;
		using LevelSet = std::vector<LevelPtr>;
		using LevelSetIter = LevelSet::iterator;
		using LevelSetIterConst = LevelSet::const_iterator;
		inline LevelPtr makeLevel() { return std::make_shared<Level>(); }
        class Level : public ElementInterface
        {
        public:
            Level();
            Level( const types::XsString& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            LevelAttributesPtr getAttributes() const;
            void setAttributes( const LevelAttributesPtr& attributes );
            types::XsString getValue() const;
            void setValue( const types::XsString& value );
        private:
            types::XsString myValue;
            LevelAttributesPtr myAttributes;
        };
        
        
        /**************** Cancel ****************
         6157
         <xs:element name="cancel" type="cancel" minOccurs="0"/>
         <xs:complexType name="cancel">
         <xs:annotation>
         <xs:documentation>A cancel element indicates that the old key signature should be cancelled before the new one appears. This will always happen when changing to C major or A minor and need not be specified then. The cancel value matches the fifths value of the cancelled key signature (e.g., a cancel of -2 will provide an explicit cancellation for changing from B flat major to F major). The optional location attribute indicates whether the cancellation appears relative to the new key signature.</xs:documentation>
         </xs:annotation>
         <xs:simpleContent>
         <xs:extension base="fifths">
         <xs:attribute name="location" type="cancel-location"/>
         </xs:extension>
         </xs:simpleContent>
         </xs:complexType>
         <xs:simpleType name="fifths">
         <xs:annotation>
         <xs:documentation>The fifths type represents the number of flats or sharps in a traditional key signature. Negative numbers are used for flats and positive numbers for sharps, reflecting the key's placement within the circle of fifths (hence the type name).</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:integer"/>
         </xs:simpleType>
         */
        struct CancelAttributes;
        using CancelAttributesPtr = std::shared_ptr<CancelAttributes>;
        
        struct CancelAttributes : public AttributesInterface
        {
        public:
            CancelAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::CancelLocation location;
            bool hasLocation;
        };
        
		class Cancel;
		using CancelPtr = std::shared_ptr<Cancel>;
		using CancelUPtr = std::unique_ptr<Cancel>;
		using CancelSet = std::vector<CancelPtr>;
		using CancelSetIter = CancelSet::iterator;
		using CancelSetIterConst = CancelSet::const_iterator;
		inline CancelPtr makeCancel() { return std::make_shared<Cancel>(); }
        class Cancel : public ElementInterface
        {
        public:
            Cancel();
            Cancel( const types::FifthsValue& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            CancelAttributesPtr getAttributes() const;
            void setAttributes( const CancelAttributesPtr& attributes );
            types::FifthsValue getValue() const;
            void setValue( const types::FifthsValue& value );
        private:
            types::FifthsValue myValue;
            CancelAttributesPtr myAttributes;
        };
        
        
        /**************** Function ****************
         6194
         <xs:element name="function" type="style-text"> <xs:annotation>     <xs:documentation>The function element is used to represent classical functional harmony with an indication like I II III rather than C D E. It is relative to the key that is specified in the MusicXML encoding.</xs:documentation>   </xs:annotation></xs:element>
         <xs:complexType name="style-text">
         <xs:annotation>
         <xs:documentation>The style-text type represents a text element with a print-style attribute group.</xs:documentation>
         </xs:annotation>
         <xs:simpleContent>
         <xs:extension base="xs:string">
         <xs:attributeGroup ref="print-style"/>
         </xs:extension>
         </xs:simpleContent>
         </xs:complexType>
         <xs:simpleType name="xs:string"/>
         */
        struct FunctionAttributes;
        using FunctionAttributesPtr = std::shared_ptr<FunctionAttributes>;
        
        struct FunctionAttributes : public AttributesInterface
        {
        public:
            FunctionAttributes();
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
            bool hasDefaultX;
            bool hasDefaultY;
            bool hasRelativeX;
            bool hasRelativeY;
            bool hasFontFamily;
            bool hasFontStyle;
            bool hasFontSize;
            bool hasFontWeight;
        };
        
		class Function;
		using FunctionPtr = std::shared_ptr<Function>;
		using FunctionUPtr = std::unique_ptr<Function>;
		using FunctionSet = std::vector<FunctionPtr>;
		using FunctionSetIter = FunctionSet::iterator;
		using FunctionSetIterConst = FunctionSet::const_iterator;
		inline FunctionPtr makeFunction() { return std::make_shared<Function>(); }
        class Function : public ElementInterface
        {
        public:
            Function();
            Function( const types::XsString& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            FunctionAttributesPtr getAttributes() const;
            void setAttributes( const FunctionAttributesPtr& attributes );
            types::XsString getValue() const;
            void setValue( const types::XsString& value );
        private:
            types::XsString myValue;
            FunctionAttributesPtr myAttributes;
        };
        
        
        /**************** Kind ****************
         6199
         <xs:element name="kind" type="kind"/>
         <xs:complexType name="kind">
         <xs:annotation>
         <xs:documentation>Kind indicates the type of chord. Degree elements can then add, subtract, or alter from these starting points
         
         The attributes are used to indicate the formatting of the symbol. Since the kind element is the constant in all the harmony-chord groups that can make up a polychord, many formatting attributes are here.
         
         The use-symbols attribute is yes if the kind should be represented when possible with harmony symbols rather than letters and numbers. These symbols include:
         
         major: a triangle, like Unicode 25B3
         minor: -, like Unicode 002D
         augmented: +, like Unicode 002B
         diminished: °, like Unicode 00B0
         half-diminished: ø, like Unicode 00F8
         
         For the major-minor kind, only the minor symbol is used when use-symbols is yes. The major symbol is set using the symbol attribute in the degree-value element. The corresponding degree-alter value will usually be 0 in this case.
         
         The text attribute describes how the kind should be spelled in a score. If use-symbols is yes, the value of the text attribute follows the symbol. The stack-degrees attribute is yes if the degree elements should be stacked above each other. The parentheses-degrees attribute is yes if all the degrees should be in parentheses. The bracket-degrees attribute is yes if all the degrees should be in a bracket. If not specified, these values are implementation-specific. The alignment attributes are for the entire harmony-chord group of which this kind element is a part.</xs:documentation>
         </xs:annotation>
         <xs:simpleContent>
         <xs:extension base="kind-value">
         <xs:attribute name="use-symbols" type="yes-no"/>
         <xs:attribute name="text" type="xs:token"/>
         <xs:attribute name="stack-degrees" type="yes-no"/>
         <xs:attribute name="parentheses-degrees" type="yes-no"/>
         <xs:attribute name="bracket-degrees" type="yes-no"/>
         <xs:attributeGroup ref="print-style"/>
         <xs:attributeGroup ref="halign"/>
         <xs:attributeGroup ref="valign"/>
         </xs:extension>
         </xs:simpleContent>
         </xs:complexType>
         <xs:simpleType name="kind-value">
         <xs:annotation>
         <xs:documentation>A kind-value indicates the type of chord. Degree elements can then add, subtract, or alter from these starting points. Values include:
         
         Triads:
         major (major third, perfect fifth)
         minor (minor third, perfect fifth)
         augmented (major third, augmented fifth)
         diminished (minor third, diminished fifth)
         Sevenths:
         dominant (major triad, minor seventh)
         major-seventh (major triad, major seventh)
         minor-seventh (minor triad, minor seventh)
         diminished-seventh (diminished triad, diminished seventh)
         augmented-seventh (augmented triad, minor seventh)
         half-diminished (diminished triad, minor seventh)
         major-minor (minor triad, major seventh)
         Sixths:
         major-sixth (major triad, added sixth)
         minor-sixth (minor triad, added sixth)
         Ninths:
         dominant-ninth (dominant-seventh, major ninth)
         major-ninth (major-seventh, major ninth)
         minor-ninth (minor-seventh, major ninth)
         11ths (usually as the basis for alteration):
         dominant-11th (dominant-ninth, perfect 11th)
         major-11th (major-ninth, perfect 11th)
         minor-11th (minor-ninth, perfect 11th)
         13ths (usually as the basis for alteration):
         dominant-13th (dominant-11th, major 13th)
         major-13th (major-11th, major 13th)
         minor-13th (minor-11th, major 13th)
         Suspended:
         suspended-second (major second, perfect fifth)
         suspended-fourth (perfect fourth, perfect fifth)
         Functional sixths:
         Neapolitan
         Italian
         French
         German
         Other:
         pedal (pedal-point bass)
         power (perfect fifth)
         Tristan
         
         The "other" kind is used when the harmony is entirely composed of add elements. The "none" kind is used to explicitly encode absence of chords or functional harmony.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:string">
         <xs:enumeration value="major"/>
         <xs:enumeration value="minor"/>
         <xs:enumeration value="augmented"/>
         <xs:enumeration value="diminished"/>
         <xs:enumeration value="dominant"/>
         <xs:enumeration value="major-seventh"/>
         <xs:enumeration value="minor-seventh"/>
         <xs:enumeration value="diminished-seventh"/>
         <xs:enumeration value="augmented-seventh"/>
         <xs:enumeration value="half-diminished"/>
         <xs:enumeration value="major-minor"/>
         <xs:enumeration value="major-sixth"/>
         <xs:enumeration value="minor-sixth"/>
         <xs:enumeration value="dominant-ninth"/>
         <xs:enumeration value="major-ninth"/>
         <xs:enumeration value="minor-ninth"/>
         <xs:enumeration value="dominant-11th"/>
         <xs:enumeration value="major-11th"/>
         <xs:enumeration value="minor-11th"/>
         <xs:enumeration value="dominant-13th"/>
         <xs:enumeration value="major-13th"/>
         <xs:enumeration value="minor-13th"/>
         <xs:enumeration value="suspended-second"/>
         <xs:enumeration value="suspended-fourth"/>
         <xs:enumeration value="Neapolitan"/>
         <xs:enumeration value="Italian"/>
         <xs:enumeration value="French"/>
         <xs:enumeration value="German"/>
         <xs:enumeration value="pedal"/>
         <xs:enumeration value="power"/>
         <xs:enumeration value="Tristan"/>
         <xs:enumeration value="other"/>
         <xs:enumeration value="none"/>
         </xs:restriction>
         </xs:simpleType>
         */
        struct KindAttributes;
        using KindAttributesPtr = std::shared_ptr<KindAttributes>;
        
        struct KindAttributes : public AttributesInterface
        {
        public:
            KindAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::YesNo useSymbols;
            types::XsToken text;
            types::YesNo stackDegrees;
            types::YesNo parenthesesDegrees;
            types::YesNo bracketDegrees;
            types::TenthsValue defaultX;
            types::TenthsValue defaultY;
            types::TenthsValue relativeX;
            types::TenthsValue relativeY;
            types::CommaSeparatedText fontFamily;
            types::FontStyle fontStyle;
            types::FontSize fontSize;
            types::FontWeight fontWeight;
            types::LeftCenterRight halign;
            bool hasUseSymbols;
            bool hasText;
            bool hasStackDegrees;
            bool hasParenthesesDegrees;
            bool hasBracketDegrees;
            bool hasDefaultX;
            bool hasDefaultY;
            bool hasRelativeX;
            bool hasRelativeY;
            bool hasFontFamily;
            bool hasFontStyle;
            bool hasFontSize;
            bool hasFontWeight;
            bool hasHalign;
        };
        
		class Kind;
		using KindPtr = std::shared_ptr<Kind>;
		using KindUPtr = std::unique_ptr<Kind>;
		using KindSet = std::vector<KindPtr>;
		using KindSetIter = KindSet::iterator;
		using KindSetIterConst = KindSet::const_iterator;
		inline KindPtr makeKind() { return std::make_shared<Kind>(); }
        class Kind : public ElementInterface
        {
        public:
            Kind();
            Kind( const types::KindValue& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            KindAttributesPtr getAttributes() const;
            void setAttributes( const KindAttributesPtr& attributes );
            types::KindValue getValue() const;
            void setValue( const types::KindValue& value );
        private:
            types::KindValue myValue;
            KindAttributesPtr myAttributes;
        };
        
        
        /**************** Inversion ****************
         6202
         <xs:element name="inversion" type="inversion" minOccurs="0"/>
         <xs:complexType name="inversion">
         <xs:annotation>
         <xs:documentation>The inversion type represents harmony inversions. The value is a number indicating which inversion is used: 0 for root position, 1 for first inversion, etc.</xs:documentation>
         </xs:annotation>
         <xs:simpleContent>
         <xs:extension base="xs:nonNegativeInteger">
         <xs:attributeGroup ref="print-style"/>
         </xs:extension>
         </xs:simpleContent>
         </xs:complexType>
         <xs:simpleType name="xs:nonNegativeInteger"/>
         */
        struct InversionAttributes;
        using InversionAttributesPtr = std::shared_ptr<InversionAttributes>;
        
        struct InversionAttributes : public AttributesInterface
        {
        public:
            InversionAttributes();
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
            bool hasDefaultX;
            bool hasDefaultY;
            bool hasRelativeX;
            bool hasRelativeY;
            bool hasFontFamily;
            bool hasFontStyle;
            bool hasFontSize;
            bool hasFontWeight;
        };
        
		class Inversion;
		using InversionPtr = std::shared_ptr<Inversion>;
		using InversionUPtr = std::unique_ptr<Inversion>;
		using InversionSet = std::vector<InversionPtr>;
		using InversionSetIter = InversionSet::iterator;
		using InversionSetIterConst = InversionSet::const_iterator;
		inline InversionPtr makeInversion() { return std::make_shared<Inversion>(); }
        class Inversion : public ElementInterface
        {
        public:
            Inversion();
            Inversion( const types::NonNegativeInteger& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            InversionAttributesPtr getAttributes() const;
            void setAttributes( const InversionAttributesPtr& attributes );
            types::NonNegativeInteger getValue() const;
            void setValue( const types::NonNegativeInteger& value );
        private:
            types::NonNegativeInteger myValue;
            InversionAttributesPtr myAttributes;
        };
        
        /***************************************************************************************************************************
         ***************************************************************************************************************************
         ***************************************************************************************************************************
         ***************************************************************************************************************************
         **********************      Value Elements with NO Attributes *************************************************************
         ***************************************************************************************************************************
         ***************************************************************************************************************************
         ***************************************************************************************************************************
         ***************************************************************************************************************************/
        
        
        /**************** MidiChannel ****************
         2457
         <xs:element name="midi-channel" type="midi-16" minOccurs="0">  <xs:annotation>     <xs:documentation>The midi-channel element specifies a MIDI 1.0 channel numbers ranging from 1 to 16.</xs:documentation>    </xs:annotation></xs:element>
         <xs:simpleType name="midi-16">
         <xs:annotation>
         <xs:documentation>The midi-16 type is used to express MIDI 1.0 values that range from 1 to 16.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:positiveInteger">
         <xs:minInclusive value="1"/>
         <xs:maxInclusive value="16"/>
         </xs:restriction>
         </xs:simpleType>
         <xs:simpleType name="midi-16">
         <xs:annotation>
         <xs:documentation>The midi-16 type is used to express MIDI 1.0 values that range from 1 to 16.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:positiveInteger">
         <xs:minInclusive value="1"/>
         <xs:maxInclusive value="16"/>
         </xs:restriction>
         </xs:simpleType>
         */
		class MidiChannel;
		using MidiChannelPtr = std::shared_ptr<MidiChannel>;
		using MidiChannelUPtr = std::unique_ptr<MidiChannel>;
		using MidiChannelSet = std::vector<MidiChannelPtr>;
		using MidiChannelSetIter = MidiChannelSet::iterator;
		using MidiChannelSetIterConst = MidiChannelSet::const_iterator;
		inline MidiChannelPtr makeMidiChannel() { return std::make_shared<MidiChannel>(); }
        class MidiChannel : public ElementInterface
        {
        public:
            MidiChannel();
            MidiChannel( const types::Midi16& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            types::Midi16 getValue() const;
            void setValue( const types::Midi16& value );
        private:
            types::Midi16 myValue;
        };
        
        
        /**************** MidiName ****************
         2463
         <xs:element name="midi-name" type="xs:string" minOccurs="0">   <xs:annotation>     <xs:documentation>The midi-name element corresponds to a ProgramName meta-event within a Standard MIDI File.</xs:documentation> </xs:annotation></xs:element>
         <xs:simpleType name="xs:string"/>
         <xs:simpleType name="xs:string"/>
         */
		class MidiName;
		using MidiNamePtr = std::shared_ptr<MidiName>;
		using MidiNameUPtr = std::unique_ptr<MidiName>;
		using MidiNameSet = std::vector<MidiNamePtr>;
		using MidiNameSetIter = MidiNameSet::iterator;
		using MidiNameSetIterConst = MidiNameSet::const_iterator;
		inline MidiNamePtr makeMidiName() { return std::make_shared<MidiName>(); }
        class MidiName : public ElementInterface
        {
        public:
            MidiName();
            MidiName( const types::XsString& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            types::XsString getValue() const;
            void setValue( const types::XsString& value );
        private:
            types::XsString myValue;
        };
        
        
        /**************** MidiBank ****************
         2469
         <xs:element name="midi-bank" type="midi-16384" minOccurs="0">  <xs:annotation>     <xs:documentation>The midi-bank element specified a MIDI 1.0 bank number ranging from 1 to 16384.</xs:documentation>    </xs:annotation></xs:element>
         <xs:simpleType name="midi-16384">
         <xs:annotation>
         <xs:documentation>The midi-16 type is used to express MIDI 1.0 values that range from 1 to 16,384.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:positiveInteger">
         <xs:minInclusive value="1"/>
         <xs:maxInclusive value="16384"/>
         </xs:restriction>
         </xs:simpleType>
         <xs:simpleType name="midi-16384">
         <xs:annotation>
         <xs:documentation>The midi-16 type is used to express MIDI 1.0 values that range from 1 to 16,384.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:positiveInteger">
         <xs:minInclusive value="1"/>
         <xs:maxInclusive value="16384"/>
         </xs:restriction>
         </xs:simpleType>
         */
		class MidiBank;
		using MidiBankPtr = std::shared_ptr<MidiBank>;
		using MidiBankUPtr = std::unique_ptr<MidiBank>;
		using MidiBankSet = std::vector<MidiBankPtr>;
		using MidiBankSetIter = MidiBankSet::iterator;
		using MidiBankSetIterConst = MidiBankSet::const_iterator;
		inline MidiBankPtr makeMidiBank() { return std::make_shared<MidiBank>(); }
        class MidiBank : public ElementInterface
        {
        public:
            MidiBank();
            MidiBank( const types::Midi16384& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            types::Midi16384 getValue() const;
            void setValue( const types::Midi16384& value );
        private:
            types::Midi16384 myValue;
        };
        
        
        /**************** MidiProgram ****************
         2475
         <xs:element name="midi-program" type="midi-128" minOccurs="0"> <xs:annotation>     <xs:documentation>The midi-program element specifies a MIDI 1.0 program number ranging from 1 to 128.</xs:documentation>    </xs:annotation></xs:element>
         <xs:simpleType name="midi-128">
         <xs:annotation>
         <xs:documentation>The midi-16 type is used to express MIDI 1.0 values that range from 1 to 128.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:positiveInteger">
         <xs:minInclusive value="1"/>
         <xs:maxInclusive value="128"/>
         </xs:restriction>
         </xs:simpleType>
         <xs:simpleType name="midi-128">
         <xs:annotation>
         <xs:documentation>The midi-16 type is used to express MIDI 1.0 values that range from 1 to 128.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:positiveInteger">
         <xs:minInclusive value="1"/>
         <xs:maxInclusive value="128"/>
         </xs:restriction>
         </xs:simpleType>
         */
		class MidiProgram;
		using MidiProgramPtr = std::shared_ptr<MidiProgram>;
		using MidiProgramUPtr = std::unique_ptr<MidiProgram>;
		using MidiProgramSet = std::vector<MidiProgramPtr>;
		using MidiProgramSetIter = MidiProgramSet::iterator;
		using MidiProgramSetIterConst = MidiProgramSet::const_iterator;
		inline MidiProgramPtr makeMidiProgram() { return std::make_shared<MidiProgram>(); }
        class MidiProgram : public ElementInterface
        {
        public:
            MidiProgram();
            MidiProgram( const types::Midi128& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            types::Midi128 getValue() const;
            void setValue( const types::Midi128& value );
        private:
            types::Midi128 myValue;
        };
        
        
        /**************** MidiUnpitched ****************
         2481
         <xs:element name="midi-unpitched" type="midi-128" minOccurs="0">   <xs:annotation>     <xs:documentation>For unpitched instruments the midi-unpitched element specifies a MIDI 1.0 note number ranging from 1 to 128. It is usually used with MIDI banks for percussion. Note that MIDI 1.0 note numbers are generally specified from 0 to 127 rather than the 1 to 128 numbering used in this element.</xs:documentation> </xs:annotation></xs:element>
         <xs:simpleType name="midi-128">
         <xs:annotation>
         <xs:documentation>The midi-16 type is used to express MIDI 1.0 values that range from 1 to 128.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:positiveInteger">
         <xs:minInclusive value="1"/>
         <xs:maxInclusive value="128"/>
         </xs:restriction>
         </xs:simpleType>
         <xs:simpleType name="midi-128">
         <xs:annotation>
         <xs:documentation>The midi-16 type is used to express MIDI 1.0 values that range from 1 to 128.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:positiveInteger">
         <xs:minInclusive value="1"/>
         <xs:maxInclusive value="128"/>
         </xs:restriction>
         </xs:simpleType>
         */
		class MidiUnpitched;
		using MidiUnpitchedPtr = std::shared_ptr<MidiUnpitched>;
		using MidiUnpitchedUPtr = std::unique_ptr<MidiUnpitched>;
		using MidiUnpitchedSet = std::vector<MidiUnpitchedPtr>;
		using MidiUnpitchedSetIter = MidiUnpitchedSet::iterator;
		using MidiUnpitchedSetIterConst = MidiUnpitchedSet::const_iterator;
		inline MidiUnpitchedPtr makeMidiUnpitched() { return std::make_shared<MidiUnpitched>(); }
        class MidiUnpitched : public ElementInterface
        {
        public:
            MidiUnpitched();
            MidiUnpitched( const types::Midi128& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            types::Midi128 getValue() const;
            void setValue( const types::Midi128& value );
        private:
            types::Midi128 myValue;
        };
        
        
        /**************** Volume ****************
         2487
         <xs:element name="volume" type="percent" minOccurs="0">    <xs:annotation>     <xs:documentation>The volume element value is a percentage of the maximum ranging from 0 to 100 with decimal values allowed. This corresponds to a scaling value for the MIDI 1.0 channel volume controller.</xs:documentation> </xs:annotation></xs:element>
         <xs:simpleType name="percent">
         <xs:annotation>
         <xs:documentation>The percent type specifies a percentage from 0 to 100.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:decimal">
         <xs:minInclusive value="0"/>
         <xs:maxInclusive value="100"/>
         </xs:restriction>
         </xs:simpleType>
         <xs:simpleType name="percent">
         <xs:annotation>
         <xs:documentation>The percent type specifies a percentage from 0 to 100.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:decimal">
         <xs:minInclusive value="0"/>
         <xs:maxInclusive value="100"/>
         </xs:restriction>
         </xs:simpleType>
         */
		class Volume;
		using VolumePtr = std::shared_ptr<Volume>;
		using VolumeUPtr = std::unique_ptr<Volume>;
		using VolumeSet = std::vector<VolumePtr>;
		using VolumeSetIter = VolumeSet::iterator;
		using VolumeSetIterConst = VolumeSet::const_iterator;
		inline VolumePtr makeVolume() { return std::make_shared<Volume>(); }
        class Volume : public ElementInterface
        {
        public:
            Volume();
            Volume( const types::Percent& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            types::Percent getValue() const;
            void setValue( const types::Percent& value );
        private:
            types::Percent myValue;
        };
        
        
        /**************** Pan ****************
         2493
         <xs:element name="pan" type="rotation-degrees" minOccurs="0">  <xs:annotation>     <xs:documentation>The pan and elevation elements allow placing of sound in a 3-D space relative to the listener. Both are expressed in degrees ranging from -180 to 180. For pan 0 is straight ahead -90 is hard left 90 is hard right and -180 and 180 are directly behind the listener.</xs:documentation>    </xs:annotation></xs:element>
         <xs:simpleType name="rotation-degrees">
         <xs:annotation>
         <xs:documentation>The rotation-degrees type specifies rotation, pan, and elevation values in degrees. Values range from -180 to 180.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:decimal">
         <xs:minInclusive value="-180"/>
         <xs:maxInclusive value="180"/>
         </xs:restriction>
         </xs:simpleType>
         <xs:simpleType name="rotation-degrees">
         <xs:annotation>
         <xs:documentation>The rotation-degrees type specifies rotation, pan, and elevation values in degrees. Values range from -180 to 180.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:decimal">
         <xs:minInclusive value="-180"/>
         <xs:maxInclusive value="180"/>
         </xs:restriction>
         </xs:simpleType>
         */
		class Pan;
		using PanPtr = std::shared_ptr<Pan>;
		using PanUPtr = std::unique_ptr<Pan>;
		using PanSet = std::vector<PanPtr>;
		using PanSetIter = PanSet::iterator;
		using PanSetIterConst = PanSet::const_iterator;
		inline PanPtr makePan() { return std::make_shared<Pan>(); }
        class Pan : public ElementInterface
        {
        public:
            Pan();
            Pan( const types::RotationDegrees& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            types::RotationDegrees getValue() const;
            void setValue( const types::RotationDegrees& value );
        private:
            types::RotationDegrees myValue;
        };
        
        
        /**************** Elevation ****************
         2499
         <xs:element name="elevation" type="rotation-degrees" minOccurs="0">    <xs:annotation>     <xs:documentation>The elevation and pan elements allow placing of sound in a 3-D space relative to the listener. Both are expressed in degrees ranging from -180 to 180. For elevation 0 is level with the listener 90 is directly above and -90 is directly below.</xs:documentation>  </xs:annotation></xs:element>
         <xs:simpleType name="rotation-degrees">
         <xs:annotation>
         <xs:documentation>The rotation-degrees type specifies rotation, pan, and elevation values in degrees. Values range from -180 to 180.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:decimal">
         <xs:minInclusive value="-180"/>
         <xs:maxInclusive value="180"/>
         </xs:restriction>
         </xs:simpleType>
         <xs:simpleType name="rotation-degrees">
         <xs:annotation>
         <xs:documentation>The rotation-degrees type specifies rotation, pan, and elevation values in degrees. Values range from -180 to 180.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:decimal">
         <xs:minInclusive value="-180"/>
         <xs:maxInclusive value="180"/>
         </xs:restriction>
         </xs:simpleType>
         */
		class Elevation;
		using ElevationPtr = std::shared_ptr<Elevation>;
		using ElevationUPtr = std::unique_ptr<Elevation>;
		using ElevationSet = std::vector<ElevationPtr>;
		using ElevationSetIter = ElevationSet::iterator;
		using ElevationSetIterConst = ElevationSet::const_iterator;
		inline ElevationPtr makeElevation() { return std::make_shared<Elevation>(); }
        class Elevation : public ElementInterface
        {
        public:
            Elevation();
            Elevation( const types::RotationDegrees& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            types::RotationDegrees getValue() const;
            void setValue( const types::RotationDegrees& value );
        private:
            types::RotationDegrees myValue;
        };
        
        
        /**************** Ipa ****************
         2544
         <xs:element name="ipa" type="xs:string">   <xs:annotation>     <xs:documentation>The ipa element represents International Phonetic Alphabet (IPA) sounds for vocal music. String content is limited to IPA 2005 symbols represented in Unicode 6.0.</xs:documentation> </xs:annotation></xs:element>
         <xs:simpleType name="xs:string"/>
         <xs:simpleType name="xs:string"/>
         */
		class Ipa;
		using IpaPtr = std::shared_ptr<Ipa>;
		using IpaUPtr = std::unique_ptr<Ipa>;
		using IpaSet = std::vector<IpaPtr>;
		using IpaSetIter = IpaSet::iterator;
		using IpaSetIterConst = IpaSet::const_iterator;
		inline IpaPtr makeIpa() { return std::make_shared<Ipa>(); }
        class Ipa : public ElementInterface
        {
        public:
            Ipa();
            Ipa( const types::XsString& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            types::XsString getValue() const;
            void setValue( const types::XsString& value );
        private:
            types::XsString myValue;
        };
        
        
        /**************** Mute ****************
         2549
         <xs:element name="mute" type="mute"/>
         <xs:simpleType name="mute">
         <xs:annotation>
         <xs:documentation>The mute type represents muting for different instruments, including brass, winds, and strings. The on and off values are used for undifferentiated mutes. The remaining values represent specific mutes.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:string">
         <xs:enumeration value="on"/>
         <xs:enumeration value="off"/>
         <xs:enumeration value="straight"/>
         <xs:enumeration value="cup"/>
         <xs:enumeration value="harmon-no-stem"/>
         <xs:enumeration value="harmon-stem"/>
         <xs:enumeration value="bucket"/>
         <xs:enumeration value="plunger"/>
         <xs:enumeration value="hat"/>
         <xs:enumeration value="solotone"/>
         <xs:enumeration value="practice"/>
         <xs:enumeration value="stop-mute"/>
         <xs:enumeration value="stop-hand"/>
         <xs:enumeration value="echo"/>
         <xs:enumeration value="palm"/>
         </xs:restriction>
         </xs:simpleType>
         <xs:simpleType name="mute">
         <xs:annotation>
         <xs:documentation>The mute type represents muting for different instruments, including brass, winds, and strings. The on and off values are used for undifferentiated mutes. The remaining values represent specific mutes.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:string">
         <xs:enumeration value="on"/>
         <xs:enumeration value="off"/>
         <xs:enumeration value="straight"/>
         <xs:enumeration value="cup"/>
         <xs:enumeration value="harmon-no-stem"/>
         <xs:enumeration value="harmon-stem"/>
         <xs:enumeration value="bucket"/>
         <xs:enumeration value="plunger"/>
         <xs:enumeration value="hat"/>
         <xs:enumeration value="solotone"/>
         <xs:enumeration value="practice"/>
         <xs:enumeration value="stop-mute"/>
         <xs:enumeration value="stop-hand"/>
         <xs:enumeration value="echo"/>
         <xs:enumeration value="palm"/>
         </xs:restriction>
         </xs:simpleType>
         */
		class Mute;
		using MutePtr = std::shared_ptr<Mute>;
		using MuteUPtr = std::unique_ptr<Mute>;
		using MuteSet = std::vector<MutePtr>;
		using MuteSetIter = MuteSet::iterator;
		using MuteSetIterConst = MuteSet::const_iterator;
		inline MutePtr makeMute() { return std::make_shared<Mute>(); }
        class Mute : public ElementInterface
        {
        public:
            Mute();
            Mute( const types::MuteEnum& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            types::MuteEnum getValue() const;
            void setValue( const types::MuteEnum& value );
        private:
            types::MuteEnum myValue;
        };
        
        
        /**************** SemiPitched ****************
         2552
         <xs:element name="semi-pitched" type="semi-pitched"/>
         <xs:simpleType name="semi-pitched">
         <xs:annotation>
         <xs:documentation>The semi-pitched type represents categories of indefinite pitch for percussion instruments.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:string">
         <xs:enumeration value="high"/>
         <xs:enumeration value="medium-high"/>
         <xs:enumeration value="medium"/>
         <xs:enumeration value="medium-low"/>
         <xs:enumeration value="low"/>
         <xs:enumeration value="very-low"/>
         </xs:restriction>
         </xs:simpleType>
         <xs:simpleType name="semi-pitched">
         <xs:annotation>
         <xs:documentation>The semi-pitched type represents categories of indefinite pitch for percussion instruments.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:string">
         <xs:enumeration value="high"/>
         <xs:enumeration value="medium-high"/>
         <xs:enumeration value="medium"/>
         <xs:enumeration value="medium-low"/>
         <xs:enumeration value="low"/>
         <xs:enumeration value="very-low"/>
         </xs:restriction>
         </xs:simpleType>
         */
		class SemiPitched;
		using SemiPitchedPtr = std::shared_ptr<SemiPitched>;
		using SemiPitchedUPtr = std::unique_ptr<SemiPitched>;
		using SemiPitchedSet = std::vector<SemiPitchedPtr>;
		using SemiPitchedSetIter = SemiPitchedSet::iterator;
		using SemiPitchedSetIterConst = SemiPitchedSet::const_iterator;
		inline SemiPitchedPtr makeSemiPitched() { return std::make_shared<SemiPitched>(); }
        class SemiPitched : public ElementInterface
        {
        public:
            SemiPitched();
            SemiPitched( const types::SemiPitchedEnum& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            types::SemiPitchedEnum getValue() const;
            void setValue( const types::SemiPitchedEnum& value );
        private:
            types::SemiPitchedEnum myValue;
        };
        
        
        /**************** Divisions ****************
         2608
         <xs:element name="divisions" type="positive-divisions" minOccurs="0">  <xs:annotation>     <xs:documentation>Musical notation duration is commonly represented as fractions. The divisions element indicates how many divisions per quarter note are used to indicate a note's duration. For example if duration = 1 and divisions = 2 this is an eighth note duration. Duration and divisions are used directly for generating sound output so they must be chosen to take tuplets into account. Using a divisions element lets us use just one number to represent a duration for each note in the score while retaining the full power of a fractional representation. If maximum compatibility with Standard MIDI 1.0 files is important do not have the divisions value exceed 16383.</xs:documentation>  </xs:annotation></xs:element>
         <xs:simpleType name="positive-divisions">
         <xs:annotation>
         <xs:documentation>The positive-divisions type restricts divisions values to positive numbers.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="divisions">
         <xs:minExclusive value="0"/>
         </xs:restriction>
         </xs:simpleType>
         <xs:simpleType name="positive-divisions">
         <xs:annotation>
         <xs:documentation>The positive-divisions type restricts divisions values to positive numbers.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="divisions">
         <xs:minExclusive value="0"/>
         </xs:restriction>
         </xs:simpleType>
         */
		class Divisions;
		using DivisionsPtr = std::shared_ptr<Divisions>;
		using DivisionsUPtr = std::unique_ptr<Divisions>;
		using DivisionsSet = std::vector<DivisionsPtr>;
		using DivisionsSetIter = DivisionsSet::iterator;
		using DivisionsSetIterConst = DivisionsSet::const_iterator;
		inline DivisionsPtr makeDivisions() { return std::make_shared<Divisions>(); }
        class Divisions : public ElementInterface
        {
        public:
            Divisions();
            Divisions( const types::PositiveDivisionsValue& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            types::PositiveDivisionsValue getValue() const;
            void setValue( const types::PositiveDivisionsValue& value );
        private:
            types::PositiveDivisionsValue myValue;
        };
        
        
        /**************** Staves ****************
         2628
         <xs:element name="staves" type="xs:nonNegativeInteger" minOccurs="0">  <xs:annotation>     <xs:documentation>The staves element is used if there is more than one staff represented in the given part (e.g. 2 staves for typical piano parts). If absent a value of 1 is assumed. Staves are ordered from top to bottom in a part in numerical order with staff 1 above staff 2.</xs:documentation>    </xs:annotation></xs:element>
         <xs:simpleType name="xs:nonNegativeInteger"/>
         <xs:simpleType name="xs:nonNegativeInteger"/>
         */
		class Staves;
		using StavesPtr = std::shared_ptr<Staves>;
		using StavesUPtr = std::unique_ptr<Staves>;
		using StavesSet = std::vector<StavesPtr>;
		using StavesSetIter = StavesSet::iterator;
		using StavesSetIterConst = StavesSet::const_iterator;
		inline StavesPtr makeStaves() { return std::make_shared<Staves>(); }
        class Staves : public ElementInterface
        {
        public:
            Staves();
            Staves( const types::NonNegativeInteger& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            types::NonNegativeInteger getValue() const;
            void setValue( const types::NonNegativeInteger& value );
        private:
            types::NonNegativeInteger myValue;
        };
        
        
        /**************** Instruments ****************
         2640
         <xs:element name="instruments" type="xs:nonNegativeInteger" minOccurs="0"> <xs:annotation>     <xs:documentation>The instruments element is only used if more than one instrument is represented in the part (e.g. oboe I and II where they play together most of the time). If absent a value of 1 is assumed.</xs:documentation> </xs:annotation></xs:element>
         <xs:simpleType name="xs:nonNegativeInteger"/>
         <xs:simpleType name="xs:nonNegativeInteger"/>
         */
		class Instruments;
		using InstrumentsPtr = std::shared_ptr<Instruments>;
		using InstrumentsUPtr = std::unique_ptr<Instruments>;
		using InstrumentsSet = std::vector<InstrumentsPtr>;
		using InstrumentsSetIter = InstrumentsSet::iterator;
		using InstrumentsSetIterConst = InstrumentsSet::const_iterator;
		inline InstrumentsPtr makeInstruments() { return std::make_shared<Instruments>(); }
        class Instruments : public ElementInterface
        {
        public:
            Instruments();
            Instruments( const types::NonNegativeInteger& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            types::NonNegativeInteger getValue() const;
            void setValue( const types::NonNegativeInteger& value );
        private:
            types::NonNegativeInteger myValue;
        };
        
        
        /**************** Sign ****************
         2720
         <xs:element name="sign" type="clef-sign">  <xs:annotation>     <xs:documentation>The sign element represents the clef symbol.</xs:documentation>   </xs:annotation></xs:element>
         <xs:simpleType name="clef-sign">
         <xs:annotation>
         <xs:documentation>The clef-sign element represents the different clef symbols. The jianpu sign indicates that the music that follows should be in jianpu numbered notation, just as the TAB sign indicates that the music that follows should be in tablature notation. Unlike TAB, a jianpu sign does not correspond to a visual clef notation.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:string">
         <xs:enumeration value="G"/>
         <xs:enumeration value="F"/>
         <xs:enumeration value="C"/>
         <xs:enumeration value="percussion"/>
         <xs:enumeration value="TAB"/>
         <xs:enumeration value="jianpu"/>
         <xs:enumeration value="none"/>
         </xs:restriction>
         </xs:simpleType>
         <xs:simpleType name="clef-sign">
         <xs:annotation>
         <xs:documentation>The clef-sign element represents the different clef symbols. The jianpu sign indicates that the music that follows should be in jianpu numbered notation, just as the TAB sign indicates that the music that follows should be in tablature notation. Unlike TAB, a jianpu sign does not correspond to a visual clef notation.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:string">
         <xs:enumeration value="G"/>
         <xs:enumeration value="F"/>
         <xs:enumeration value="C"/>
         <xs:enumeration value="percussion"/>
         <xs:enumeration value="TAB"/>
         <xs:enumeration value="jianpu"/>
         <xs:enumeration value="none"/>
         </xs:restriction>
         </xs:simpleType>
         */
		class Sign;
		using SignPtr = std::shared_ptr<Sign>;
		using SignUPtr = std::unique_ptr<Sign>;
		using SignSet = std::vector<SignPtr>;
		using SignSetIter = SignSet::iterator;
		using SignSetIterConst = SignSet::const_iterator;
		inline SignPtr makeSign() { return std::make_shared<Sign>(); }
        class Sign : public ElementInterface
        {
        public:
            Sign();
            Sign( const types::ClefSign& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            types::ClefSign getValue() const;
            void setValue( const types::ClefSign& value );
        private:
            types::ClefSign myValue;
        };
        
        
        /**************** Line ****************
         2725
         <xs:element name="line" type="staff-line" minOccurs="0">   <xs:annotation>     <xs:documentation>Line numbers are counted from the bottom of the staff. Standard values are 2 for the G sign (treble clef) 4 for the F sign (bass clef) 3 for the C sign (alto clef) and 5 for TAB (on a 6-line staff).</xs:documentation> </xs:annotation></xs:element>
         <xs:simpleType name="staff-line">
         <xs:annotation>
         <xs:documentation>The staff-line type indicates the line on a given staff. Staff lines are numbered from bottom to top, with 1 being the bottom line on a staff. Staff line values can be used to specify positions outside the staff, such as a C clef positioned in the middle of a grand staff.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:integer"/>
         </xs:simpleType>
         <xs:simpleType name="staff-line">
         <xs:annotation>
         <xs:documentation>The staff-line type indicates the line on a given staff. Staff lines are numbered from bottom to top, with 1 being the bottom line on a staff. Staff line values can be used to specify positions outside the staff, such as a C clef positioned in the middle of a grand staff.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:integer"/>
         </xs:simpleType>
         */
		class Line;
		using LinePtr = std::shared_ptr<Line>;
		using LineUPtr = std::unique_ptr<Line>;
		using LineSet = std::vector<LinePtr>;
		using LineSetIter = LineSet::iterator;
		using LineSetIterConst = LineSet::const_iterator;
		inline LinePtr makeLine() { return std::make_shared<Line>(); }
        class Line : public ElementInterface
        {
        public:
            Line();
            Line( const types::StaffLine& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            types::StaffLine getValue() const;
            void setValue( const types::StaffLine& value );
        private:
            types::StaffLine myValue;
        };
        
        
        /**************** ClefOctaveChange ****************
         2731
         <xs:element name="clef-octave-change" type="xs:integer" minOccurs="0"> <xs:annotation>     <xs:documentation>The clef-octave-change element is used for transposing clefs. A treble clef for tenors would have a value of -1.</xs:documentation>   </xs:annotation></xs:element>
         <xs:simpleType name="xs:integer"/>
         <xs:simpleType name="xs:integer"/>
         */
		class ClefOctaveChange;
		using ClefOctaveChangePtr = std::shared_ptr<ClefOctaveChange>;
		using ClefOctaveChangeUPtr = std::unique_ptr<ClefOctaveChange>;
		using ClefOctaveChangeSet = std::vector<ClefOctaveChangePtr>;
		using ClefOctaveChangeSetIter = ClefOctaveChangeSet::iterator;
		using ClefOctaveChangeSetIterConst = ClefOctaveChangeSet::const_iterator;
		inline ClefOctaveChangePtr makeClefOctaveChange() { return std::make_shared<ClefOctaveChange>(); }
        class ClefOctaveChange : public ElementInterface
        {
        public:
            ClefOctaveChange();
            ClefOctaveChange( const types::Integer& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            types::Integer getValue() const;
            void setValue( const types::Integer& value );
        private:
            types::Integer myValue;
        };
        
        
        /**************** TimeRelation ****************
         2758
         <xs:element name="time-relation" type="time-relation" minOccurs="0"/>
         <xs:simpleType name="time-relation">
         <xs:annotation>
         <xs:documentation>The time-relation type indicates the symbol used to represent the interchangeable aspect of dual time signatures.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:string">
         <xs:enumeration value="parentheses"/>
         <xs:enumeration value="bracket"/>
         <xs:enumeration value="equals"/>
         <xs:enumeration value="slash"/>
         <xs:enumeration value="space"/>
         <xs:enumeration value="hyphen"/>
         </xs:restriction>
         </xs:simpleType>
         <xs:simpleType name="time-relation">
         <xs:annotation>
         <xs:documentation>The time-relation type indicates the symbol used to represent the interchangeable aspect of dual time signatures.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:string">
         <xs:enumeration value="parentheses"/>
         <xs:enumeration value="bracket"/>
         <xs:enumeration value="equals"/>
         <xs:enumeration value="slash"/>
         <xs:enumeration value="space"/>
         <xs:enumeration value="hyphen"/>
         </xs:restriction>
         </xs:simpleType>
         */
		class TimeRelation;
		using TimeRelationPtr = std::shared_ptr<TimeRelation>;
		using TimeRelationUPtr = std::unique_ptr<TimeRelation>;
		using TimeRelationSet = std::vector<TimeRelationPtr>;
		using TimeRelationSetIter = TimeRelationSet::iterator;
		using TimeRelationSetIterConst = TimeRelationSet::const_iterator;
		inline TimeRelationPtr makeTimeRelation() { return std::make_shared<TimeRelation>(); }
        class TimeRelation : public ElementInterface
        {
        public:
            TimeRelation();
            TimeRelation( const types::TimeRelationEnum& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            types::TimeRelationEnum getValue() const;
            void setValue( const types::TimeRelationEnum& value );
        private:
            types::TimeRelationEnum myValue;
        };
        
        
        /**************** StaffType ****************
         2898
         <xs:element name="staff-type" type="staff-type" minOccurs="0"/>
         <xs:simpleType name="staff-type">
         <xs:annotation>
         <xs:documentation>The staff-type value can be ossia, cue, editorial, regular, or alternate. An alternate staff indicates one that shares the same musical data as the prior staff, but displayed differently (e.g., treble and bass clef, standard notation and tab).</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:string">
         <xs:enumeration value="ossia"/>
         <xs:enumeration value="cue"/>
         <xs:enumeration value="editorial"/>
         <xs:enumeration value="regular"/>
         <xs:enumeration value="alternate"/>
         </xs:restriction>
         </xs:simpleType>
         <xs:simpleType name="staff-type">
         <xs:annotation>
         <xs:documentation>The staff-type value can be ossia, cue, editorial, regular, or alternate. An alternate staff indicates one that shares the same musical data as the prior staff, but displayed differently (e.g., treble and bass clef, standard notation and tab).</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:string">
         <xs:enumeration value="ossia"/>
         <xs:enumeration value="cue"/>
         <xs:enumeration value="editorial"/>
         <xs:enumeration value="regular"/>
         <xs:enumeration value="alternate"/>
         </xs:restriction>
         </xs:simpleType>
         */
		class StaffType;
		using StaffTypePtr = std::shared_ptr<StaffType>;
		using StaffTypeUPtr = std::unique_ptr<StaffType>;
		using StaffTypeSet = std::vector<StaffTypePtr>;
		using StaffTypeSetIter = StaffTypeSet::iterator;
		using StaffTypeSetIterConst = StaffTypeSet::const_iterator;
		inline StaffTypePtr makeStaffType() { return std::make_shared<StaffType>(); }
        class StaffType : public ElementInterface
        {
        public:
            StaffType();
            StaffType( const types::StaffTypeEnum& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            types::StaffTypeEnum getValue() const;
            void setValue( const types::StaffTypeEnum& value );
        private:
            types::StaffTypeEnum myValue;
        };
        
        
        /**************** StaffLines ****************
         2902
         <xs:element name="staff-lines" type="xs:nonNegativeInteger" minOccurs="0"> <xs:annotation>     <xs:documentation>The staff-lines element specifies the number of lines for a non 5-line staff.</xs:documentation>  </xs:annotation></xs:element>
         <xs:simpleType name="xs:nonNegativeInteger"/>
         <xs:simpleType name="xs:nonNegativeInteger"/>
         */
		class StaffLines;
		using StaffLinesPtr = std::shared_ptr<StaffLines>;
		using StaffLinesUPtr = std::unique_ptr<StaffLines>;
		using StaffLinesSet = std::vector<StaffLinesPtr>;
		using StaffLinesSetIter = StaffLinesSet::iterator;
		using StaffLinesSetIterConst = StaffLinesSet::const_iterator;
		inline StaffLinesPtr makeStaffLines() { return std::make_shared<StaffLines>(); }
        class StaffLines : public ElementInterface
        {
        public:
            StaffLines();
            StaffLines( const types::NonNegativeInteger& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            types::NonNegativeInteger getValue() const;
            void setValue( const types::NonNegativeInteger& value );
        private:
            types::NonNegativeInteger myValue;
        };
        
        
        /**************** Capo ****************
         2913
         <xs:element name="capo" type="xs:nonNegativeInteger" minOccurs="0">    <xs:annotation>     <xs:documentation>The capo element indicates at which fret a capo should be placed on a fretted instrument. This changes the open tuning of the strings specified by staff-tuning by the specified number of half-steps.</xs:documentation> </xs:annotation></xs:element>
         <xs:simpleType name="xs:nonNegativeInteger"/>
         <xs:simpleType name="xs:nonNegativeInteger"/>
         */
		class Capo;
		using CapoPtr = std::shared_ptr<Capo>;
		using CapoUPtr = std::unique_ptr<Capo>;
		using CapoSet = std::vector<CapoPtr>;
		using CapoSetIter = CapoSet::iterator;
		using CapoSetIterConst = CapoSet::const_iterator;
		inline CapoPtr makeCapo() { return std::make_shared<Capo>(); }
        class Capo : public ElementInterface
        {
        public:
            Capo();
            Capo( const types::NonNegativeInteger& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            types::NonNegativeInteger getValue() const;
            void setValue( const types::NonNegativeInteger& value );
        private:
            types::NonNegativeInteger myValue;
        };
        
        
        /**************** StaffSize ****************
         2919
         <xs:element name="staff-size" type="non-negative-decimal" minOccurs="0">   <xs:annotation>     <xs:documentation>The staff-size element indicates how large a staff space is on this staff expressed as a percentage of the work's default scaling. Values less than 100 make the staff space smaller while values over 100 make the staff space larger. A staff-type of cue ossia or editorial implies a staff-size of less than 100 but the exact value is implementation-dependent unless specified here. Staff size affects staff height only not the relationship of the staff to the left and right margins.</xs:documentation>  </xs:annotation></xs:element>
         <xs:simpleType name="non-negative-decimal">
         <xs:annotation>
         <xs:documentation>The non-negative-decimal type specifies a non-negative decimal value.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:decimal">
         <xs:minInclusive value="0"/>
         </xs:restriction>
         </xs:simpleType>
         <xs:simpleType name="non-negative-decimal">
         <xs:annotation>
         <xs:documentation>The non-negative-decimal type specifies a non-negative decimal value.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:decimal">
         <xs:minInclusive value="0"/>
         </xs:restriction>
         </xs:simpleType>
         */
		class StaffSize;
		using StaffSizePtr = std::shared_ptr<StaffSize>;
		using StaffSizeUPtr = std::unique_ptr<StaffSize>;
		using StaffSizeSet = std::vector<StaffSizePtr>;
		using StaffSizeSetIter = StaffSizeSet::iterator;
		using StaffSizeSetIterConst = StaffSizeSet::const_iterator;
		inline StaffSizePtr makeStaffSize() { return std::make_shared<StaffSize>(); }
        class StaffSize : public ElementInterface
        {
        public:
            StaffSize();
            StaffSize( const types::NonNegativeDecimal& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            types::NonNegativeDecimal getValue() const;
            void setValue( const types::NonNegativeDecimal& value );
        private:
            types::NonNegativeDecimal myValue;
        };
        
        
        /**************** SenzaMisura ****************
         2957
         <xs:element name="senza-misura" type="xs:string">  <xs:annotation>     <xs:documentation>A senza-misura element explicitly indicates that no time signature is present. The optional element content indicates the symbol to be used if any such as an X. The time element's symbol attribute is not used when a senza-misura element is present.</xs:documentation>   </xs:annotation></xs:element>
         <xs:simpleType name="xs:string"/>
         <xs:simpleType name="xs:string"/>
         */
		class SenzaMisura;
		using SenzaMisuraPtr = std::shared_ptr<SenzaMisura>;
		using SenzaMisuraUPtr = std::unique_ptr<SenzaMisura>;
		using SenzaMisuraSet = std::vector<SenzaMisuraPtr>;
		using SenzaMisuraSetIter = SenzaMisuraSet::iterator;
		using SenzaMisuraSetIterConst = SenzaMisuraSet::const_iterator;
		inline SenzaMisuraPtr makeSenzaMisura() { return std::make_shared<SenzaMisura>(); }
        class SenzaMisura : public ElementInterface
        {
        public:
            SenzaMisura();
            SenzaMisura( const types::XsString& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            types::XsString getValue() const;
            void setValue( const types::XsString& value );
        private:
            types::XsString myValue;
        };
        
        
        /**************** Diatonic ****************
         2980
         <xs:element name="diatonic" type="xs:integer" minOccurs="0">   <xs:annotation>     <xs:documentation>The diatonic element specifies the number of pitch steps needed to go from written to sounding pitch. This allows for correct spelling of enharmonic transpositions.</xs:documentation>   </xs:annotation></xs:element>
         <xs:simpleType name="xs:integer"/>
         <xs:simpleType name="xs:integer"/>
         */
		class Diatonic;
		using DiatonicPtr = std::shared_ptr<Diatonic>;
		using DiatonicUPtr = std::unique_ptr<Diatonic>;
		using DiatonicSet = std::vector<DiatonicPtr>;
		using DiatonicSetIter = DiatonicSet::iterator;
		using DiatonicSetIterConst = DiatonicSet::const_iterator;
		inline DiatonicPtr makeDiatonic() { return std::make_shared<Diatonic>(); }
        class Diatonic : public ElementInterface
        {
        public:
            Diatonic();
            Diatonic( const types::Integer& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            types::Integer getValue() const;
            void setValue( const types::Integer& value );
        private:
            types::Integer myValue;
        };
        
        
        /**************** Chromatic ****************
         2986
         <xs:element name="chromatic" type="semitones"> <xs:annotation>     <xs:documentation>The chromatic element represents the number of semitones needed to get from written to sounding pitch. This value does not include octave-change values; the values for both elements need to be added to the written pitch to get the correct sounding pitch.</xs:documentation> </xs:annotation></xs:element>
         <xs:simpleType name="semitones">
         <xs:annotation>
         <xs:documentation>The semitones type is a number representing semitones, used for chromatic alteration. A value of -1 corresponds to a flat and a value of 1 to a sharp. Decimal values like 0.5 (quarter tone sharp) are used for microtones.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:decimal"/>
         </xs:simpleType>
         <xs:simpleType name="semitones">
         <xs:annotation>
         <xs:documentation>The semitones type is a number representing semitones, used for chromatic alteration. A value of -1 corresponds to a flat and a value of 1 to a sharp. Decimal values like 0.5 (quarter tone sharp) are used for microtones.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:decimal"/>
         </xs:simpleType>
         */
		class Chromatic;
		using ChromaticPtr = std::shared_ptr<Chromatic>;
		using ChromaticUPtr = std::unique_ptr<Chromatic>;
		using ChromaticSet = std::vector<ChromaticPtr>;
		using ChromaticSetIter = ChromaticSet::iterator;
		using ChromaticSetIterConst = ChromaticSet::const_iterator;
		inline ChromaticPtr makeChromatic() { return std::make_shared<Chromatic>(); }
        class Chromatic : public ElementInterface
        {
        public:
            Chromatic();
            Chromatic( const types::Semitones& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            types::Semitones getValue() const;
            void setValue( const types::Semitones& value );
        private:
            types::Semitones myValue;
        };
        
        
        /**************** OctaveChange ****************
         2991
         <xs:element name="octave-change" type="xs:integer" minOccurs="0">  <xs:annotation>     <xs:documentation>The octave-change element indicates how many octaves to add to get from written pitch to sounding pitch.</xs:documentation>   </xs:annotation></xs:element>
         <xs:simpleType name="xs:integer"/>
         <xs:simpleType name="xs:integer"/>
         */
		class OctaveChange;
		using OctaveChangePtr = std::shared_ptr<OctaveChange>;
		using OctaveChangeUPtr = std::unique_ptr<OctaveChange>;
		using OctaveChangeSet = std::vector<OctaveChangePtr>;
		using OctaveChangeSetIter = OctaveChangeSet::iterator;
		using OctaveChangeSetIterConst = OctaveChangeSet::const_iterator;
		inline OctaveChangePtr makeOctaveChange() { return std::make_shared<OctaveChange>(); }
        class OctaveChange : public ElementInterface
        {
        public:
            OctaveChange();
            OctaveChange( const types::Integer& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            types::Integer getValue() const;
            void setValue( const types::Integer& value );
        private:
            types::Integer myValue;
        };
        
        
        /**************** AccordionMiddle ****************
         3126
         <xs:element name="accordion-middle" type="accordion-middle" minOccurs="0"> <xs:annotation>     <xs:documentation>The accordion-middle element indicates the presence of 1 to 3 dots in the middle (8') section of the registration symbol.</xs:documentation>  </xs:annotation></xs:element>
         <xs:simpleType name="accordion-middle">
         <xs:annotation>
         <xs:documentation>The accordion-middle type may have values of 1, 2, or 3, corresponding to having 1 to 3 dots in the middle section of the accordion registration symbol.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:positiveInteger">
         <xs:minInclusive value="1"/>
         <xs:maxInclusive value="3"/>
         </xs:restriction>
         </xs:simpleType>
         <xs:simpleType name="accordion-middle">
         <xs:annotation>
         <xs:documentation>The accordion-middle type may have values of 1, 2, or 3, corresponding to having 1 to 3 dots in the middle section of the accordion registration symbol.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:positiveInteger">
         <xs:minInclusive value="1"/>
         <xs:maxInclusive value="3"/>
         </xs:restriction>
         </xs:simpleType>
         */
		class AccordionMiddle;
		using AccordionMiddlePtr = std::shared_ptr<AccordionMiddle>;
		using AccordionMiddleUPtr = std::unique_ptr<AccordionMiddle>;
		using AccordionMiddleSet = std::vector<AccordionMiddlePtr>;
		using AccordionMiddleSetIter = AccordionMiddleSet::iterator;
		using AccordionMiddleSetIterConst = AccordionMiddleSet::const_iterator;
		inline AccordionMiddlePtr makeAccordionMiddle() { return std::make_shared<AccordionMiddle>(); }
        class AccordionMiddle : public ElementInterface
        {
        public:
            AccordionMiddle();
            AccordionMiddle( const types::AccordionMiddleValue& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            types::AccordionMiddleValue getValue() const;
            void setValue( const types::AccordionMiddleValue& value );
        private:
            types::AccordionMiddleValue myValue;
        };
        
        
        /**************** FrameStrings ****************
         3441
         <xs:element name="frame-strings" type="xs:positiveInteger">    <xs:annotation>     <xs:documentation>The frame-strings element gives the overall size of the frame in vertical lines (strings).</xs:documentation> </xs:annotation></xs:element>
         <xs:simpleType name="xs:positiveInteger"/>
         <xs:simpleType name="xs:positiveInteger"/>
         */
		class FrameStrings;
		using FrameStringsPtr = std::shared_ptr<FrameStrings>;
		using FrameStringsUPtr = std::unique_ptr<FrameStrings>;
		using FrameStringsSet = std::vector<FrameStringsPtr>;
		using FrameStringsSetIter = FrameStringsSet::iterator;
		using FrameStringsSetIterConst = FrameStringsSet::const_iterator;
		inline FrameStringsPtr makeFrameStrings() { return std::make_shared<FrameStrings>(); }
        class FrameStrings : public ElementInterface
        {
        public:
            FrameStrings();
            FrameStrings( const types::PositiveInteger& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            types::PositiveInteger getValue() const;
            void setValue( const types::PositiveInteger& value );
        private:
            types::PositiveInteger myValue;
        };
        
        
        /**************** FrameFrets ****************
         3446
         <xs:element name="frame-frets" type="xs:positiveInteger">  <xs:annotation>     <xs:documentation>The frame-frets element gives the overall size of the frame in horizontal spaces (frets).</xs:documentation>  </xs:annotation></xs:element>
         <xs:simpleType name="xs:positiveInteger"/>
         <xs:simpleType name="xs:positiveInteger"/>
         */
		class FrameFrets;
		using FrameFretsPtr = std::shared_ptr<FrameFrets>;
		using FrameFretsUPtr = std::unique_ptr<FrameFrets>;
		using FrameFretsSet = std::vector<FrameFretsPtr>;
		using FrameFretsSetIter = FrameFretsSet::iterator;
		using FrameFretsSetIterConst = FrameFretsSet::const_iterator;
		inline FrameFretsPtr makeFrameFrets() { return std::make_shared<FrameFrets>(); }
        class FrameFrets : public ElementInterface
        {
        public:
            FrameFrets();
            FrameFrets( const types::PositiveInteger& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            types::PositiveInteger getValue() const;
            void setValue( const types::PositiveInteger& value );
        private:
            types::PositiveInteger myValue;
        };
        
        
        /**************** MetronomeRelation ****************
         3633
         <xs:element name="metronome-relation" type="xs:string">    <xs:annotation>     <xs:documentation>The metronome-relation element describes the relationship symbol that goes between the two sets of metronome-note elements. The currently allowed value is equals but this may expand in future versions. If the element is empty the equals value is used.</xs:documentation>    </xs:annotation></xs:element>
         <xs:simpleType name="xs:string"/>
         <xs:simpleType name="xs:string"/>
         */
		class MetronomeRelation;
		using MetronomeRelationPtr = std::shared_ptr<MetronomeRelation>;
		using MetronomeRelationUPtr = std::unique_ptr<MetronomeRelation>;
		using MetronomeRelationSet = std::vector<MetronomeRelationPtr>;
		using MetronomeRelationSetIter = MetronomeRelationSet::iterator;
		using MetronomeRelationSetIterConst = MetronomeRelationSet::const_iterator;
		inline MetronomeRelationPtr makeMetronomeRelation() { return std::make_shared<MetronomeRelation>(); }
        class MetronomeRelation : public ElementInterface
        {
        public:
            // This is weird, the only allowed value is "equals"
            // per the specification, so the client cannot change
            // the value.  No matter what you do here, MetronomeRelation's
            // value will always be "equals"
        public:
            MetronomeRelation();
            MetronomeRelation( const types::XsString& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            types::XsString getValue() const;
            void setValue( const types::XsString& value );
        private:
            types::XsString myValue;
        };
        
        
        /**************** MetronomeType ****************
         3665
         <xs:element name="metronome-type" type="note-type-value">  <xs:annotation>     <xs:documentation>The metronome-type element works like the type element in defining metric relationships.</xs:documentation>   </xs:annotation></xs:element>
         <xs:simpleType name="note-type-value">
         <xs:annotation>
         <xs:documentation>The note-type type is used for the MusicXML type element and represents the graphic note type, from 1024th (shortest) to maxima (longest).</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:string">
         <xs:enumeration value="1024th"/>
         <xs:enumeration value="512th"/>
         <xs:enumeration value="256th"/>
         <xs:enumeration value="128th"/>
         <xs:enumeration value="64th"/>
         <xs:enumeration value="32nd"/>
         <xs:enumeration value="16th"/>
         <xs:enumeration value="eighth"/>
         <xs:enumeration value="quarter"/>
         <xs:enumeration value="half"/>
         <xs:enumeration value="whole"/>
         <xs:enumeration value="breve"/>
         <xs:enumeration value="long"/>
         <xs:enumeration value="maxima"/>
         </xs:restriction>
         </xs:simpleType>
         <xs:simpleType name="note-type-value">
         <xs:annotation>
         <xs:documentation>The note-type type is used for the MusicXML type element and represents the graphic note type, from 1024th (shortest) to maxima (longest).</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:string">
         <xs:enumeration value="1024th"/>
         <xs:enumeration value="512th"/>
         <xs:enumeration value="256th"/>
         <xs:enumeration value="128th"/>
         <xs:enumeration value="64th"/>
         <xs:enumeration value="32nd"/>
         <xs:enumeration value="16th"/>
         <xs:enumeration value="eighth"/>
         <xs:enumeration value="quarter"/>
         <xs:enumeration value="half"/>
         <xs:enumeration value="whole"/>
         <xs:enumeration value="breve"/>
         <xs:enumeration value="long"/>
         <xs:enumeration value="maxima"/>
         </xs:restriction>
         </xs:simpleType>
         */
		class MetronomeType;
		using MetronomeTypePtr = std::shared_ptr<MetronomeType>;
		using MetronomeTypeUPtr = std::unique_ptr<MetronomeType>;
		using MetronomeTypeSet = std::vector<MetronomeTypePtr>;
		using MetronomeTypeSetIter = MetronomeTypeSet::iterator;
		using MetronomeTypeSetIterConst = MetronomeTypeSet::const_iterator;
		inline MetronomeTypePtr makeMetronomeType() { return std::make_shared<MetronomeType>(); }
        class MetronomeType : public ElementInterface
        {
        public:
            MetronomeType();
            MetronomeType( const types::NoteTypeValue& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            types::NoteTypeValue getValue() const;
            void setValue( const types::NoteTypeValue& value );
        private:
            types::NoteTypeValue myValue;
        };
        
        
        /**************** PedalStep ****************
         3764
         <xs:element name="pedal-step" type="step"> <xs:annotation>     <xs:documentation>The pedal-step element defines the pitch step for a single harp pedal.</xs:documentation> </xs:annotation></xs:element>
         <xs:simpleType name="step">
         <xs:annotation>
         <xs:documentation>The step type represents a step of the diatonic scale, represented using the English letters A through G.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:string">
         <xs:enumeration value="A"/>
         <xs:enumeration value="B"/>
         <xs:enumeration value="C"/>
         <xs:enumeration value="D"/>
         <xs:enumeration value="E"/>
         <xs:enumeration value="F"/>
         <xs:enumeration value="G"/>
         </xs:restriction>
         </xs:simpleType>
         <xs:simpleType name="step">
         <xs:annotation>
         <xs:documentation>The step type represents a step of the diatonic scale, represented using the English letters A through G.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:string">
         <xs:enumeration value="A"/>
         <xs:enumeration value="B"/>
         <xs:enumeration value="C"/>
         <xs:enumeration value="D"/>
         <xs:enumeration value="E"/>
         <xs:enumeration value="F"/>
         <xs:enumeration value="G"/>
         </xs:restriction>
         </xs:simpleType>
         */
		class PedalStep;
		using PedalStepPtr = std::shared_ptr<PedalStep>;
		using PedalStepUPtr = std::unique_ptr<PedalStep>;
		using PedalStepSet = std::vector<PedalStepPtr>;
		using PedalStepSetIter = PedalStepSet::iterator;
		using PedalStepSetIterConst = PedalStepSet::const_iterator;
		inline PedalStepPtr makePedalStep() { return std::make_shared<PedalStep>(); }
        class PedalStep : public ElementInterface
        {
        public:
            PedalStep();
            PedalStep( const types::StepEnum& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            types::StepEnum getValue() const;
            void setValue( const types::StepEnum& value );
        private:
            types::StepEnum myValue;
        };
        
        
        /**************** PedalAlter ****************
         3769
         <xs:element name="pedal-alter" type="semitones">   <xs:annotation>     <xs:documentation>The pedal-alter element defines the chromatic alteration for a single harp pedal.</xs:documentation>  </xs:annotation></xs:element>
         <xs:simpleType name="semitones">
         <xs:annotation>
         <xs:documentation>The semitones type is a number representing semitones, used for chromatic alteration. A value of -1 corresponds to a flat and a value of 1 to a sharp. Decimal values like 0.5 (quarter tone sharp) are used for microtones.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:decimal"/>
         </xs:simpleType>
         <xs:simpleType name="semitones">
         <xs:annotation>
         <xs:documentation>The semitones type is a number representing semitones, used for chromatic alteration. A value of -1 corresponds to a flat and a value of 1 to a sharp. Decimal values like 0.5 (quarter tone sharp) are used for microtones.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:decimal"/>
         </xs:simpleType>
         */
		class PedalAlter;
		using PedalAlterPtr = std::shared_ptr<PedalAlter>;
		using PedalAlterUPtr = std::unique_ptr<PedalAlter>;
		using PedalAlterSet = std::vector<PedalAlterPtr>;
		using PedalAlterSetIter = PedalAlterSet::iterator;
		using PedalAlterSetIterConst = PedalAlterSet::const_iterator;
		inline PedalAlterPtr makePedalAlter() { return std::make_shared<PedalAlter>(); }
        class PedalAlter : public ElementInterface
        {
        public:
            PedalAlter();
            PedalAlter( const types::Semitones& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            types::Semitones getValue() const;
            void setValue( const types::Semitones& value );
        private:
            types::Semitones myValue;
        };
        
        
        /**************** Glass ****************
         3788
         <xs:element name="glass" type="glass"/>
         <xs:simpleType name="glass">
         <xs:annotation>
         <xs:documentation>The glass type represents pictograms for glass percussion instruments.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:string">
         <xs:enumeration value="wind chimes"/>
         </xs:restriction>
         </xs:simpleType>
         <xs:simpleType name="glass">
         <xs:annotation>
         <xs:documentation>The glass type represents pictograms for glass percussion instruments.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:string">
         <xs:enumeration value="wind chimes"/>
         </xs:restriction>
         </xs:simpleType>
         */
		class Glass;
		using GlassPtr = std::shared_ptr<Glass>;
		using GlassUPtr = std::unique_ptr<Glass>;
		using GlassSet = std::vector<GlassPtr>;
		using GlassSetIter = GlassSet::iterator;
		using GlassSetIterConst = GlassSet::const_iterator;
		inline GlassPtr makeGlass() { return std::make_shared<Glass>(); }
        class Glass : public ElementInterface
        {
        public:
            Glass();
            Glass( const types::GlassEnum& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            types::GlassEnum getValue() const;
            void setValue( const types::GlassEnum& value );
        private:
            types::GlassEnum myValue;
        };
        
        
        /**************** Metal ****************
         3791
         <xs:element name="metal" type="metal"/>
         <xs:simpleType name="metal">
         <xs:annotation>
         <xs:documentation>The metal type represents pictograms for metal percussion instruments. The hi-hat value refers to a pictogram like Stone's high-hat cymbals but without the long vertical line at the bottom.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:string">
         <xs:enumeration value="almglocken"/>
         <xs:enumeration value="bell"/>
         <xs:enumeration value="bell plate"/>
         <xs:enumeration value="brake drum"/>
         <xs:enumeration value="Chinese cymbal"/>
         <xs:enumeration value="cowbell"/>
         <xs:enumeration value="crash cymbals"/>
         <xs:enumeration value="crotale"/>
         <xs:enumeration value="cymbal tongs"/>
         <xs:enumeration value="domed gong"/>
         <xs:enumeration value="finger cymbals"/>
         <xs:enumeration value="flexatone"/>
         <xs:enumeration value="gong"/>
         <xs:enumeration value="hi-hat"/>
         <xs:enumeration value="high-hat cymbals"/>
         <xs:enumeration value="handbell"/>
         <xs:enumeration value="sistrum"/>
         <xs:enumeration value="sizzle cymbal"/>
         <xs:enumeration value="sleigh bells"/>
         <xs:enumeration value="suspended cymbal"/>
         <xs:enumeration value="tam tam"/>
         <xs:enumeration value="triangle"/>
         <xs:enumeration value="Vietnamese hat"/>
         </xs:restriction>
         </xs:simpleType>
         <xs:simpleType name="metal">
         <xs:annotation>
         <xs:documentation>The metal type represents pictograms for metal percussion instruments. The hi-hat value refers to a pictogram like Stone's high-hat cymbals but without the long vertical line at the bottom.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:string">
         <xs:enumeration value="almglocken"/>
         <xs:enumeration value="bell"/>
         <xs:enumeration value="bell plate"/>
         <xs:enumeration value="brake drum"/>
         <xs:enumeration value="Chinese cymbal"/>
         <xs:enumeration value="cowbell"/>
         <xs:enumeration value="crash cymbals"/>
         <xs:enumeration value="crotale"/>
         <xs:enumeration value="cymbal tongs"/>
         <xs:enumeration value="domed gong"/>
         <xs:enumeration value="finger cymbals"/>
         <xs:enumeration value="flexatone"/>
         <xs:enumeration value="gong"/>
         <xs:enumeration value="hi-hat"/>
         <xs:enumeration value="high-hat cymbals"/>
         <xs:enumeration value="handbell"/>
         <xs:enumeration value="sistrum"/>
         <xs:enumeration value="sizzle cymbal"/>
         <xs:enumeration value="sleigh bells"/>
         <xs:enumeration value="suspended cymbal"/>
         <xs:enumeration value="tam tam"/>
         <xs:enumeration value="triangle"/>
         <xs:enumeration value="Vietnamese hat"/>
         </xs:restriction>
         </xs:simpleType>
         */
		class Metal;
		using MetalPtr = std::shared_ptr<Metal>;
		using MetalUPtr = std::unique_ptr<Metal>;
		using MetalSet = std::vector<MetalPtr>;
		using MetalSetIter = MetalSet::iterator;
		using MetalSetIterConst = MetalSet::const_iterator;
		inline MetalPtr makeMetal() { return std::make_shared<Metal>(); }
        class Metal : public ElementInterface
        {
        public:
            Metal();
            Metal( const types::MetalEnum& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            types::MetalEnum getValue() const;
            void setValue( const types::MetalEnum& value );
        private:
            types::MetalEnum myValue;
        };
        
        
        /**************** Wood ****************
         3794
         <xs:element name="wood" type="wood"/>
         <xs:simpleType name="wood">
         <xs:annotation>
         <xs:documentation>The wood type represents pictograms for wood percussion instruments. The maraca and maracas values distinguish the one- and two-maraca versions of the pictogram. The vibraslap and castanets values are in addition to Stone's list.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:string">
         <xs:enumeration value="board clapper"/>
         <xs:enumeration value="cabasa"/>
         <xs:enumeration value="castanets"/>
         <xs:enumeration value="claves"/>
         <xs:enumeration value="guiro"/>
         <xs:enumeration value="log drum"/>
         <xs:enumeration value="maraca"/>
         <xs:enumeration value="maracas"/>
         <xs:enumeration value="ratchet"/>
         <xs:enumeration value="sandpaper blocks"/>
         <xs:enumeration value="slit drum"/>
         <xs:enumeration value="temple block"/>
         <xs:enumeration value="vibraslap"/>
         <xs:enumeration value="wood block"/>
         </xs:restriction>
         </xs:simpleType>
         <xs:simpleType name="wood">
         <xs:annotation>
         <xs:documentation>The wood type represents pictograms for wood percussion instruments. The maraca and maracas values distinguish the one- and two-maraca versions of the pictogram. The vibraslap and castanets values are in addition to Stone's list.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:string">
         <xs:enumeration value="board clapper"/>
         <xs:enumeration value="cabasa"/>
         <xs:enumeration value="castanets"/>
         <xs:enumeration value="claves"/>
         <xs:enumeration value="guiro"/>
         <xs:enumeration value="log drum"/>
         <xs:enumeration value="maraca"/>
         <xs:enumeration value="maracas"/>
         <xs:enumeration value="ratchet"/>
         <xs:enumeration value="sandpaper blocks"/>
         <xs:enumeration value="slit drum"/>
         <xs:enumeration value="temple block"/>
         <xs:enumeration value="vibraslap"/>
         <xs:enumeration value="wood block"/>
         </xs:restriction>
         </xs:simpleType>
         */
		class Wood;
		using WoodPtr = std::shared_ptr<Wood>;
		using WoodUPtr = std::unique_ptr<Wood>;
		using WoodSet = std::vector<WoodPtr>;
		using WoodSetIter = WoodSet::iterator;
		using WoodSetIterConst = WoodSet::const_iterator;
		inline WoodPtr makeWood() { return std::make_shared<Wood>(); }
        class Wood : public ElementInterface
        {
        public:
            Wood();
            Wood( const types::WoodEnum& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            types::WoodEnum getValue() const;
            void setValue( const types::WoodEnum& value );
        private:
            types::WoodEnum myValue;
        };
        
        
        /**************** Pitched ****************
         3797
         <xs:element name="pitched" type="pitched"/>
         <xs:simpleType name="pitched">
         <xs:annotation>
         <xs:documentation>The pitched type represents pictograms for pitched percussion instruments. The chimes and tubular chimes values distinguish the single-line and double-line versions of the pictogram. The mallet value is in addition to Stone's list.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:string">
         <xs:enumeration value="chimes"/>
         <xs:enumeration value="glockenspiel"/>
         <xs:enumeration value="mallet"/>
         <xs:enumeration value="marimba"/>
         <xs:enumeration value="tubular chimes"/>
         <xs:enumeration value="vibraphone"/>
         <xs:enumeration value="xylophone"/>
         </xs:restriction>
         </xs:simpleType>
         <xs:simpleType name="pitched">
         <xs:annotation>
         <xs:documentation>The pitched type represents pictograms for pitched percussion instruments. The chimes and tubular chimes values distinguish the single-line and double-line versions of the pictogram. The mallet value is in addition to Stone's list.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:string">
         <xs:enumeration value="chimes"/>
         <xs:enumeration value="glockenspiel"/>
         <xs:enumeration value="mallet"/>
         <xs:enumeration value="marimba"/>
         <xs:enumeration value="tubular chimes"/>
         <xs:enumeration value="vibraphone"/>
         <xs:enumeration value="xylophone"/>
         </xs:restriction>
         </xs:simpleType>
         */
		class Pitched;
		using PitchedPtr = std::shared_ptr<Pitched>;
		using PitchedUPtr = std::unique_ptr<Pitched>;
		using PitchedSet = std::vector<PitchedPtr>;
		using PitchedSetIter = PitchedSet::iterator;
		using PitchedSetIterConst = PitchedSet::const_iterator;
		inline PitchedPtr makePitched() { return std::make_shared<Pitched>(); }
        class Pitched : public ElementInterface
        {
        public:
            Pitched();
            Pitched( const types::PitchedEnum& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            types::PitchedEnum getValue() const;
            void setValue( const types::PitchedEnum& value );
        private:
            types::PitchedEnum myValue;
        };
        
        
        /**************** Membrane ****************
         3800
         <xs:element name="membrane" type="membrane"/>
         <xs:simpleType name="membrane">
         <xs:annotation>
         <xs:documentation>The membrane type represents pictograms for membrane percussion instruments. The goblet drum value is in addition to Stone's list.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:string">
         <xs:enumeration value="bass drum"/>
         <xs:enumeration value="bass drum on side"/>
         <xs:enumeration value="bongos"/>
         <xs:enumeration value="conga drum"/>
         <xs:enumeration value="goblet drum"/>
         <xs:enumeration value="military drum"/>
         <xs:enumeration value="snare drum"/>
         <xs:enumeration value="snare drum snares off"/>
         <xs:enumeration value="tambourine"/>
         <xs:enumeration value="tenor drum"/>
         <xs:enumeration value="timbales"/>
         <xs:enumeration value="tomtom"/>
         </xs:restriction>
         </xs:simpleType>
         <xs:simpleType name="membrane">
         <xs:annotation>
         <xs:documentation>The membrane type represents pictograms for membrane percussion instruments. The goblet drum value is in addition to Stone's list.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:string">
         <xs:enumeration value="bass drum"/>
         <xs:enumeration value="bass drum on side"/>
         <xs:enumeration value="bongos"/>
         <xs:enumeration value="conga drum"/>
         <xs:enumeration value="goblet drum"/>
         <xs:enumeration value="military drum"/>
         <xs:enumeration value="snare drum"/>
         <xs:enumeration value="snare drum snares off"/>
         <xs:enumeration value="tambourine"/>
         <xs:enumeration value="tenor drum"/>
         <xs:enumeration value="timbales"/>
         <xs:enumeration value="tomtom"/>
         </xs:restriction>
         </xs:simpleType>
         */
		class Membrane;
		using MembranePtr = std::shared_ptr<Membrane>;
		using MembraneUPtr = std::unique_ptr<Membrane>;
		using MembraneSet = std::vector<MembranePtr>;
		using MembraneSetIter = MembraneSet::iterator;
		using MembraneSetIterConst = MembraneSet::const_iterator;
		inline MembranePtr makeMembrane() { return std::make_shared<Membrane>(); }
        class Membrane : public ElementInterface
        {
        public:
            Membrane();
            Membrane( const types::MembraneEnum& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            types::MembraneEnum getValue() const;
            void setValue( const types::MembraneEnum& value );
        private:
            types::MembraneEnum myValue;
        };
        
        
        /**************** Effect ****************
         3803
         <xs:element name="effect" type="effect"/>
         <xs:simpleType name="effect">
         <xs:annotation>
         <xs:documentation>The effect type represents pictograms for sound effect percussion instruments. The cannon value is in addition to Stone's list.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:string">
         <xs:enumeration value="anvil"/>
         <xs:enumeration value="auto horn"/>
         <xs:enumeration value="bird whistle"/>
         <xs:enumeration value="cannon"/>
         <xs:enumeration value="duck call"/>
         <xs:enumeration value="gun shot"/>
         <xs:enumeration value="klaxon horn"/>
         <xs:enumeration value="lions roar"/>
         <xs:enumeration value="police whistle"/>
         <xs:enumeration value="siren"/>
         <xs:enumeration value="slide whistle"/>
         <xs:enumeration value="thunder sheet"/>
         <xs:enumeration value="wind machine"/>
         <xs:enumeration value="wind whistle"/>
         </xs:restriction>
         </xs:simpleType>
         <xs:simpleType name="effect">
         <xs:annotation>
         <xs:documentation>The effect type represents pictograms for sound effect percussion instruments. The cannon value is in addition to Stone's list.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:string">
         <xs:enumeration value="anvil"/>
         <xs:enumeration value="auto horn"/>
         <xs:enumeration value="bird whistle"/>
         <xs:enumeration value="cannon"/>
         <xs:enumeration value="duck call"/>
         <xs:enumeration value="gun shot"/>
         <xs:enumeration value="klaxon horn"/>
         <xs:enumeration value="lions roar"/>
         <xs:enumeration value="police whistle"/>
         <xs:enumeration value="siren"/>
         <xs:enumeration value="slide whistle"/>
         <xs:enumeration value="thunder sheet"/>
         <xs:enumeration value="wind machine"/>
         <xs:enumeration value="wind whistle"/>
         </xs:restriction>
         </xs:simpleType>
         */
		class Effect;
		using EffectPtr = std::shared_ptr<Effect>;
		using EffectUPtr = std::unique_ptr<Effect>;
		using EffectSet = std::vector<EffectPtr>;
		using EffectSetIter = EffectSet::iterator;
		using EffectSetIterConst = EffectSet::const_iterator;
		inline EffectPtr makeEffect() { return std::make_shared<Effect>(); }
        class Effect : public ElementInterface
        {
        public:
            Effect();
            Effect( const types::EffectEnum& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            types::EffectEnum getValue() const;
            void setValue( const types::EffectEnum& value );
        private:
            types::EffectEnum myValue;
        };
        
        
        /**************** StickLocation ****************
         3815
         <xs:element name="stick-location" type="stick-location"/>
         <xs:simpleType name="stick-location">
         <xs:annotation>
         <xs:documentation>The stick-location type represents pictograms for the location of sticks, beaters, or mallets on cymbals, gongs, drums, and other instruments.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:string">
         <xs:enumeration value="center"/>
         <xs:enumeration value="rim"/>
         <xs:enumeration value="cymbal bell"/>
         <xs:enumeration value="cymbal edge"/>
         </xs:restriction>
         </xs:simpleType>
         <xs:simpleType name="stick-location">
         <xs:annotation>
         <xs:documentation>The stick-location type represents pictograms for the location of sticks, beaters, or mallets on cymbals, gongs, drums, and other instruments.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:string">
         <xs:enumeration value="center"/>
         <xs:enumeration value="rim"/>
         <xs:enumeration value="cymbal bell"/>
         <xs:enumeration value="cymbal edge"/>
         </xs:restriction>
         </xs:simpleType>
         */
		class StickLocation;
		using StickLocationPtr = std::shared_ptr<StickLocation>;
		using StickLocationUPtr = std::unique_ptr<StickLocation>;
		using StickLocationSet = std::vector<StickLocationPtr>;
		using StickLocationSetIter = StickLocationSet::iterator;
		using StickLocationSetIterConst = StickLocationSet::const_iterator;
		inline StickLocationPtr makeStickLocation() { return std::make_shared<StickLocation>(); }
        class StickLocation : public ElementInterface
        {
        public:
            StickLocation();
            StickLocation( const types::StickLocationEnum& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            types::StickLocationEnum getValue() const;
            void setValue( const types::StickLocationEnum& value );
        private:
            types::StickLocationEnum myValue;
        };
        
        
        /**************** OtherPercussion ****************
         3818
         <xs:element name="other-percussion" type="xs:string"/>
         <xs:simpleType name="xs:string"/>
         <xs:simpleType name="xs:string"/>
         */
		class OtherPercussion;
		using OtherPercussionPtr = std::shared_ptr<OtherPercussion>;
		using OtherPercussionUPtr = std::unique_ptr<OtherPercussion>;
		using OtherPercussionSet = std::vector<OtherPercussionPtr>;
		using OtherPercussionSetIter = OtherPercussionSet::iterator;
		using OtherPercussionSetIterConst = OtherPercussionSet::const_iterator;
		inline OtherPercussionPtr makeOtherPercussion() { return std::make_shared<OtherPercussion>(); }
        class OtherPercussion : public ElementInterface
        {
        public:
            OtherPercussion();
            OtherPercussion( const types::XsString& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            types::XsString getValue() const;
            void setValue( const types::XsString& value );
        private:
            types::XsString myValue;
        };
        
        
        /**************** StickType ****************
         3994
         <xs:element name="stick-type" type="stick-type"/>
         <xs:simpleType name="stick-type">
         <xs:annotation>
         <xs:documentation>The stick-type type represents the shape of pictograms where the material
         in the stick, mallet, or beater is represented in the pictogram.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:string">
         <xs:enumeration value="bass drum"/>
         <xs:enumeration value="double bass drum"/>
         <xs:enumeration value="timpani"/>
         <xs:enumeration value="xylophone"/>
         <xs:enumeration value="yarn"/>
         </xs:restriction>
         </xs:simpleType>
         <xs:simpleType name="stick-type">
         <xs:annotation>
         <xs:documentation>The stick-type type represents the shape of pictograms where the material
         in the stick, mallet, or beater is represented in the pictogram.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:string">
         <xs:enumeration value="bass drum"/>
         <xs:enumeration value="double bass drum"/>
         <xs:enumeration value="timpani"/>
         <xs:enumeration value="xylophone"/>
         <xs:enumeration value="yarn"/>
         </xs:restriction>
         </xs:simpleType>
         */
		class StickType;
		using StickTypePtr = std::shared_ptr<StickType>;
		using StickTypeUPtr = std::unique_ptr<StickType>;
		using StickTypeSet = std::vector<StickTypePtr>;
		using StickTypeSetIter = StickTypeSet::iterator;
		using StickTypeSetIterConst = StickTypeSet::const_iterator;
		inline StickTypePtr makeStickType() { return std::make_shared<StickType>(); }
        class StickType : public ElementInterface
        {
        public:
            StickType();
            StickType( const types::StickTypeEnum& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            types::StickTypeEnum getValue() const;
            void setValue( const types::StickTypeEnum& value );
        private:
            types::StickTypeEnum myValue;
        };
        
        
        /**************** StickMaterial ****************
         3997
         <xs:element name="stick-material" type="stick-material"/>
         <xs:simpleType name="stick-material">
         <xs:annotation>
         <xs:documentation>The stick-material type represents the material being displayed in a stick pictogram.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:string">
         <xs:enumeration value="soft"/>
         <xs:enumeration value="medium"/>
         <xs:enumeration value="hard"/>
         <xs:enumeration value="shaded"/>
         <xs:enumeration value="x"/>
         </xs:restriction>
         </xs:simpleType>
         <xs:simpleType name="stick-material">
         <xs:annotation>
         <xs:documentation>The stick-material type represents the material being displayed in a stick pictogram.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:string">
         <xs:enumeration value="soft"/>
         <xs:enumeration value="medium"/>
         <xs:enumeration value="hard"/>
         <xs:enumeration value="shaded"/>
         <xs:enumeration value="x"/>
         </xs:restriction>
         </xs:simpleType>
         */
		class StickMaterial;
		using StickMaterialPtr = std::shared_ptr<StickMaterial>;
		using StickMaterialUPtr = std::unique_ptr<StickMaterial>;
		using StickMaterialSet = std::vector<StickMaterialPtr>;
		using StickMaterialSetIter = StickMaterialSet::iterator;
		using StickMaterialSetIterConst = StickMaterialSet::const_iterator;
		inline StickMaterialPtr makeStickMaterial() { return std::make_shared<StickMaterial>(); }
        class StickMaterial : public ElementInterface
        {
        public:
            StickMaterial();
            StickMaterial( const types::StickMaterialEnum& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            types::StickMaterialEnum getValue() const;
            void setValue( const types::StickMaterialEnum& value );
        private:
            types::StickMaterialEnum myValue;
        };
        
        
        /**************** EncodingDate ****************
         4045
         <xs:element name="encoding-date" type="yyyy-mm-dd"/>
         <xs:simpleType name="yyyy-mm-dd">
         <xs:annotation>
         <xs:documentation>Calendar dates are represented yyyy-mm-dd format, following ISO 8601. This is a W3C XML Schema date type, but without the optional timezone data.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:date">
         <xs:pattern value="[^:Z]*"/>
         </xs:restriction>
         </xs:simpleType>
         <xs:simpleType name="yyyy-mm-dd">
         <xs:annotation>
         <xs:documentation>Calendar dates are represented yyyy-mm-dd format, following ISO 8601. This is a W3C XML Schema date type, but without the optional timezone data.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:date">
         <xs:pattern value="[^:Z]*"/>
         </xs:restriction>
         </xs:simpleType>
         */
		class EncodingDate;
		using EncodingDatePtr = std::shared_ptr<EncodingDate>;
		using EncodingDateUPtr = std::unique_ptr<EncodingDate>;
		using EncodingDateSet = std::vector<EncodingDatePtr>;
		using EncodingDateSetIter = EncodingDateSet::iterator;
		using EncodingDateSetIterConst = EncodingDateSet::const_iterator;
		inline EncodingDatePtr makeEncodingDate() { return std::make_shared<EncodingDate>(); }
        class EncodingDate : public ElementInterface
        {
        public:
            EncodingDate();
            EncodingDate( const types::Date& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            types::Date getValue() const;
            void setValue( const types::Date& value );
        private:
            types::Date myValue;
        };
        
        
        /**************** Software ****************
         4051
         <xs:element name="software" type="xs:string"/>
         <xs:simpleType name="xs:string"/>
         <xs:simpleType name="xs:string"/>
         */
		class Software;
		using SoftwarePtr = std::shared_ptr<Software>;
		using SoftwareUPtr = std::unique_ptr<Software>;
		using SoftwareSet = std::vector<SoftwarePtr>;
		using SoftwareSetIter = SoftwareSet::iterator;
		using SoftwareSetIterConst = SoftwareSet::const_iterator;
		inline SoftwarePtr makeSoftware() { return std::make_shared<Software>(); }
        class Software : public ElementInterface
        {
        public:
            Software();
            Software( const types::XsString& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            types::XsString getValue() const;
            void setValue( const types::XsString& value );
        private:
            types::XsString myValue;
        };
        
        
        /**************** EncodingDescription ****************
         4054
         <xs:element name="encoding-description" type="xs:string"/>
         <xs:simpleType name="xs:string"/>
         <xs:simpleType name="xs:string"/>
         */
		class EncodingDescription;
		using EncodingDescriptionPtr = std::shared_ptr<EncodingDescription>;
		using EncodingDescriptionUPtr = std::unique_ptr<EncodingDescription>;
		using EncodingDescriptionSet = std::vector<EncodingDescriptionPtr>;
		using EncodingDescriptionSetIter = EncodingDescriptionSet::iterator;
		using EncodingDescriptionSetIterConst = EncodingDescriptionSet::const_iterator;
		inline EncodingDescriptionPtr makeEncodingDescription() { return std::make_shared<EncodingDescription>(); }
        class EncodingDescription : public ElementInterface
        {
        public:
            EncodingDescription();
            EncodingDescription( const types::XsString& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            types::XsString getValue() const;
            void setValue( const types::XsString& value );
        private:
            types::XsString myValue;
        };
        
        
        /**************** Source ****************
         4083
         <xs:element name="source" type="xs:string" minOccurs="0">  <xs:annotation>     <xs:documentation>The source for the music that is encoded. This is similar to the Dublin Core source element.</xs:documentation>   </xs:annotation></xs:element>
         <xs:simpleType name="xs:string"/>
         <xs:simpleType name="xs:string"/>
         */
		class Source;
		using SourcePtr = std::shared_ptr<Source>;
		using SourceUPtr = std::unique_ptr<Source>;
		using SourceSet = std::vector<SourcePtr>;
		using SourceSetIter = SourceSet::iterator;
		using SourceSetIterConst = SourceSet::const_iterator;
		inline SourcePtr makeSource() { return std::make_shared<Source>(); }
        class Source : public ElementInterface
        {
        public:
            Source();
            Source( const types::XsString& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            types::XsString getValue() const;
            void setValue( const types::XsString& value );
        private:
            types::XsString myValue;
        };
        
        
        /**************** MeasureDistance ****************
         4191
         <xs:element name="measure-distance" type="tenths" minOccurs="0">   <xs:annotation>     <xs:documentation>The measure-distance element specifies the horizontal distance from the previous measure. This value is only used for systems where there is horizontal whitespace in the middle of a system as in systems with codas. To specify the measure width use the width attribute of the measure element.</xs:documentation>    </xs:annotation></xs:element>
         <xs:simpleType name="tenths">
         <xs:annotation>
         <xs:documentation>The tenths type is a number representing tenths of interline staff space (positive or negative). Both integer and decimal values are allowed, such as 5 for a half space and 2.5 for a quarter space. Interline space is measured from the middle of a staff line.
         
         Distances in a MusicXML file are measured in tenths of staff space. TenthsValue are then scaled to millimeters within the scaling element, used in the defaults element at the start of a score. Individual staves can apply a scaling factor to adjust staff size. When a MusicXML element or attribute refers to tenths, it means the global tenths defined by the scaling element, not the local tenths as adjusted by the staff-size element.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:decimal"/>
         </xs:simpleType>
         <xs:simpleType name="tenths">
         <xs:annotation>
         <xs:documentation>The tenths type is a number representing tenths of interline staff space (positive or negative). Both integer and decimal values are allowed, such as 5 for a half space and 2.5 for a quarter space. Interline space is measured from the middle of a staff line.
         
         Distances in a MusicXML file are measured in tenths of staff space. TenthsValue are then scaled to millimeters within the scaling element, used in the defaults element at the start of a score. Individual staves can apply a scaling factor to adjust staff size. When a MusicXML element or attribute refers to tenths, it means the global tenths defined by the scaling element, not the local tenths as adjusted by the staff-size element.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:decimal"/>
         </xs:simpleType>
         */
		class MeasureDistance;
		using MeasureDistancePtr = std::shared_ptr<MeasureDistance>;
		using MeasureDistanceUPtr = std::unique_ptr<MeasureDistance>;
		using MeasureDistanceSet = std::vector<MeasureDistancePtr>;
		using MeasureDistanceSetIter = MeasureDistanceSet::iterator;
		using MeasureDistanceSetIterConst = MeasureDistanceSet::const_iterator;
		inline MeasureDistancePtr makeMeasureDistance() { return std::make_shared<MeasureDistance>(); }
        class MeasureDistance : public ElementInterface
        {
        public:
            MeasureDistance();
            MeasureDistance( const types::TenthsValue& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            types::TenthsValue getValue() const;
            void setValue( const types::TenthsValue& value );
        private:
            types::TenthsValue myValue;
        };
        
        
        /**************** PageHeight ****************
         4226
         <xs:element name="page-height" type="tenths"/>
         <xs:simpleType name="tenths">
         <xs:annotation>
         <xs:documentation>The tenths type is a number representing tenths of interline staff space (positive or negative). Both integer and decimal values are allowed, such as 5 for a half space and 2.5 for a quarter space. Interline space is measured from the middle of a staff line.
         
         Distances in a MusicXML file are measured in tenths of staff space. TenthsValue are then scaled to millimeters within the scaling element, used in the defaults element at the start of a score. Individual staves can apply a scaling factor to adjust staff size. When a MusicXML element or attribute refers to tenths, it means the global tenths defined by the scaling element, not the local tenths as adjusted by the staff-size element.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:decimal"/>
         </xs:simpleType>
         <xs:simpleType name="tenths">
         <xs:annotation>
         <xs:documentation>The tenths type is a number representing tenths of interline staff space (positive or negative). Both integer and decimal values are allowed, such as 5 for a half space and 2.5 for a quarter space. Interline space is measured from the middle of a staff line.
         
         Distances in a MusicXML file are measured in tenths of staff space. TenthsValue are then scaled to millimeters within the scaling element, used in the defaults element at the start of a score. Individual staves can apply a scaling factor to adjust staff size. When a MusicXML element or attribute refers to tenths, it means the global tenths defined by the scaling element, not the local tenths as adjusted by the staff-size element.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:decimal"/>
         </xs:simpleType>
         */
		class PageHeight;
		using PageHeightPtr = std::shared_ptr<PageHeight>;
		using PageHeightUPtr = std::unique_ptr<PageHeight>;
		using PageHeightSet = std::vector<PageHeightPtr>;
		using PageHeightSetIter = PageHeightSet::iterator;
		using PageHeightSetIterConst = PageHeightSet::const_iterator;
		inline PageHeightPtr makePageHeight() { return std::make_shared<PageHeight>(); }
        class PageHeight : public ElementInterface
        {
        public:
            PageHeight();
            PageHeight( const types::TenthsValue& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            types::TenthsValue getValue() const;
            void setValue( const types::TenthsValue& value );
        private:
            types::TenthsValue myValue;
        };
        
        
        /**************** PageWidth ****************
         4229
         <xs:element name="page-width" type="tenths"/>
         <xs:simpleType name="tenths">
         <xs:annotation>
         <xs:documentation>The tenths type is a number representing tenths of interline staff space (positive or negative). Both integer and decimal values are allowed, such as 5 for a half space and 2.5 for a quarter space. Interline space is measured from the middle of a staff line.
         
         Distances in a MusicXML file are measured in tenths of staff space. TenthsValue are then scaled to millimeters within the scaling element, used in the defaults element at the start of a score. Individual staves can apply a scaling factor to adjust staff size. When a MusicXML element or attribute refers to tenths, it means the global tenths defined by the scaling element, not the local tenths as adjusted by the staff-size element.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:decimal"/>
         </xs:simpleType>
         <xs:simpleType name="tenths">
         <xs:annotation>
         <xs:documentation>The tenths type is a number representing tenths of interline staff space (positive or negative). Both integer and decimal values are allowed, such as 5 for a half space and 2.5 for a quarter space. Interline space is measured from the middle of a staff line.
         
         Distances in a MusicXML file are measured in tenths of staff space. TenthsValue are then scaled to millimeters within the scaling element, used in the defaults element at the start of a score. Individual staves can apply a scaling factor to adjust staff size. When a MusicXML element or attribute refers to tenths, it means the global tenths defined by the scaling element, not the local tenths as adjusted by the staff-size element.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:decimal"/>
         </xs:simpleType>
         */
		class PageWidth;
		using PageWidthPtr = std::shared_ptr<PageWidth>;
		using PageWidthUPtr = std::unique_ptr<PageWidth>;
		using PageWidthSet = std::vector<PageWidthPtr>;
		using PageWidthSetIter = PageWidthSet::iterator;
		using PageWidthSetIterConst = PageWidthSet::const_iterator;
		inline PageWidthPtr makePageWidth() { return std::make_shared<PageWidth>(); }
        class PageWidth : public ElementInterface
        {
        public:
            PageWidth();
            PageWidth( const types::TenthsValue& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            types::TenthsValue getValue() const;
            void setValue( const types::TenthsValue& value );
        private:
            types::TenthsValue myValue;
        };
        
        
        /**************** Millimeters ****************
         4251
         <xs:element name="millimeters" type="millimeters"/>
         <xs:simpleType name="millimeters">
         <xs:annotation>
         <xs:documentation>The millimeters type is a number representing millimeters. This is used in the scaling element to provide a default scaling from tenths to physical units.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:decimal"/>
         </xs:simpleType>
         <xs:simpleType name="millimeters">
         <xs:annotation>
         <xs:documentation>The millimeters type is a number representing millimeters. This is used in the scaling element to provide a default scaling from tenths to physical units.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:decimal"/>
         </xs:simpleType>
         */
		class Millimeters;
		using MillimetersPtr = std::shared_ptr<Millimeters>;
		using MillimetersUPtr = std::unique_ptr<Millimeters>;
		using MillimetersSet = std::vector<MillimetersPtr>;
		using MillimetersSetIter = MillimetersSet::iterator;
		using MillimetersSetIterConst = MillimetersSet::const_iterator;
		inline MillimetersPtr makeMillimeters() { return std::make_shared<Millimeters>(); }
        class Millimeters : public ElementInterface
        {
        public:
            Millimeters();
            Millimeters( const types::MillimetersValue& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            types::MillimetersValue getValue() const;
            void setValue( const types::MillimetersValue& value );
        private:
            types::MillimetersValue myValue;
        };
        
        
        /**************** TenthsValue ****************
         4254
         <xs:element name="tenths" type="tenths"/>
         <xs:simpleType name="tenths">
         <xs:annotation>
         <xs:documentation>The tenths type is a number representing tenths of interline staff space (positive or negative). Both integer and decimal values are allowed, such as 5 for a half space and 2.5 for a quarter space. Interline space is measured from the middle of a staff line.
         
         Distances in a MusicXML file are measured in tenths of staff space. TenthsValue are then scaled to millimeters within the scaling element, used in the defaults element at the start of a score. Individual staves can apply a scaling factor to adjust staff size. When a MusicXML element or attribute refers to tenths, it means the global tenths defined by the scaling element, not the local tenths as adjusted by the staff-size element.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:decimal"/>
         </xs:simpleType>
         <xs:simpleType name="tenths">
         <xs:annotation>
         <xs:documentation>The tenths type is a number representing tenths of interline staff space (positive or negative). Both integer and decimal values are allowed, such as 5 for a half space and 2.5 for a quarter space. Interline space is measured from the middle of a staff line.
         
         Distances in a MusicXML file are measured in tenths of staff space. TenthsValue are then scaled to millimeters within the scaling element, used in the defaults element at the start of a score. Individual staves can apply a scaling factor to adjust staff size. When a MusicXML element or attribute refers to tenths, it means the global tenths defined by the scaling element, not the local tenths as adjusted by the staff-size element.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:decimal"/>
         </xs:simpleType>
         */
		class Tenths;
		using TenthsPtr = std::shared_ptr<Tenths>;
		using TenthsUPtr = std::unique_ptr<Tenths>;
		using TenthsSet = std::vector<TenthsPtr>;
		using TenthsSetIter = TenthsSet::iterator;
		using TenthsSetIterConst = TenthsSet::const_iterator;
		inline TenthsPtr makeTenths() { return std::make_shared<Tenths>(); }
        class Tenths : public ElementInterface
        {
        public:
            Tenths();
            Tenths( const types::TenthsValue& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            types::TenthsValue getValue() const;
            void setValue( const types::TenthsValue& value );
        private:
            types::TenthsValue myValue;
        };
        
        
        /**************** StaffDistance ****************
         4262
         <xs:element name="staff-distance" type="tenths" minOccurs="0"/>
         <xs:simpleType name="tenths">
         <xs:annotation>
         <xs:documentation>The tenths type is a number representing tenths of interline staff space (positive or negative). Both integer and decimal values are allowed, such as 5 for a half space and 2.5 for a quarter space. Interline space is measured from the middle of a staff line.
         
         Distances in a MusicXML file are measured in tenths of staff space. TenthsValue are then scaled to millimeters within the scaling element, used in the defaults element at the start of a score. Individual staves can apply a scaling factor to adjust staff size. When a MusicXML element or attribute refers to tenths, it means the global tenths defined by the scaling element, not the local tenths as adjusted by the staff-size element.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:decimal"/>
         </xs:simpleType>
         <xs:simpleType name="tenths">
         <xs:annotation>
         <xs:documentation>The tenths type is a number representing tenths of interline staff space (positive or negative). Both integer and decimal values are allowed, such as 5 for a half space and 2.5 for a quarter space. Interline space is measured from the middle of a staff line.
         
         Distances in a MusicXML file are measured in tenths of staff space. TenthsValue are then scaled to millimeters within the scaling element, used in the defaults element at the start of a score. Individual staves can apply a scaling factor to adjust staff size. When a MusicXML element or attribute refers to tenths, it means the global tenths defined by the scaling element, not the local tenths as adjusted by the staff-size element.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:decimal"/>
         </xs:simpleType>
         */
		class StaffDistance;
		using StaffDistancePtr = std::shared_ptr<StaffDistance>;
		using StaffDistanceUPtr = std::unique_ptr<StaffDistance>;
		using StaffDistanceSet = std::vector<StaffDistancePtr>;
		using StaffDistanceSetIter = StaffDistanceSet::iterator;
		using StaffDistanceSetIterConst = StaffDistanceSet::const_iterator;
		inline StaffDistancePtr makeStaffDistance() { return std::make_shared<StaffDistance>(); }
        class StaffDistance : public ElementInterface
        {
        public:
            StaffDistance();
            StaffDistance( const types::TenthsValue& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            types::TenthsValue getValue() const;
            void setValue( const types::TenthsValue& value );
        private:
            types::TenthsValue myValue;
        };
        
        
        /**************** SystemDistance ****************
         4289
         <xs:element name="system-distance" type="tenths" minOccurs="0"/>
         <xs:simpleType name="tenths">
         <xs:annotation>
         <xs:documentation>The tenths type is a number representing tenths of interline staff space (positive or negative). Both integer and decimal values are allowed, such as 5 for a half space and 2.5 for a quarter space. Interline space is measured from the middle of a staff line.
         
         Distances in a MusicXML file are measured in tenths of staff space. TenthsValue are then scaled to millimeters within the scaling element, used in the defaults element at the start of a score. Individual staves can apply a scaling factor to adjust staff size. When a MusicXML element or attribute refers to tenths, it means the global tenths defined by the scaling element, not the local tenths as adjusted by the staff-size element.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:decimal"/>
         </xs:simpleType>
         <xs:simpleType name="tenths">
         <xs:annotation>
         <xs:documentation>The tenths type is a number representing tenths of interline staff space (positive or negative). Both integer and decimal values are allowed, such as 5 for a half space and 2.5 for a quarter space. Interline space is measured from the middle of a staff line.
         
         Distances in a MusicXML file are measured in tenths of staff space. TenthsValue are then scaled to millimeters within the scaling element, used in the defaults element at the start of a score. Individual staves can apply a scaling factor to adjust staff size. When a MusicXML element or attribute refers to tenths, it means the global tenths defined by the scaling element, not the local tenths as adjusted by the staff-size element.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:decimal"/>
         </xs:simpleType>
         */
		class SystemDistance;
		using SystemDistancePtr = std::shared_ptr<SystemDistance>;
		using SystemDistanceUPtr = std::unique_ptr<SystemDistance>;
		using SystemDistanceSet = std::vector<SystemDistancePtr>;
		using SystemDistanceSetIter = SystemDistanceSet::iterator;
		using SystemDistanceSetIterConst = SystemDistanceSet::const_iterator;
		inline SystemDistancePtr makeSystemDistance() { return std::make_shared<SystemDistance>(); }
        class SystemDistance : public ElementInterface
        {
        public:
            SystemDistance();
            SystemDistance( const types::TenthsValue& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            types::TenthsValue getValue() const;
            void setValue( const types::TenthsValue& value );
        private:
            types::TenthsValue myValue;
        };
        
        
        /**************** TopSystemDistance ****************
         4293
         <xs:element name="top-system-distance" type="tenths" minOccurs="0"/>
         <xs:simpleType name="tenths">
         <xs:annotation>
         <xs:documentation>The tenths type is a number representing tenths of interline staff space (positive or negative). Both integer and decimal values are allowed, such as 5 for a half space and 2.5 for a quarter space. Interline space is measured from the middle of a staff line.
         
         Distances in a MusicXML file are measured in tenths of staff space. TenthsValue are then scaled to millimeters within the scaling element, used in the defaults element at the start of a score. Individual staves can apply a scaling factor to adjust staff size. When a MusicXML element or attribute refers to tenths, it means the global tenths defined by the scaling element, not the local tenths as adjusted by the staff-size element.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:decimal"/>
         </xs:simpleType>
         <xs:simpleType name="tenths">
         <xs:annotation>
         <xs:documentation>The tenths type is a number representing tenths of interline staff space (positive or negative). Both integer and decimal values are allowed, such as 5 for a half space and 2.5 for a quarter space. Interline space is measured from the middle of a staff line.
         
         Distances in a MusicXML file are measured in tenths of staff space. TenthsValue are then scaled to millimeters within the scaling element, used in the defaults element at the start of a score. Individual staves can apply a scaling factor to adjust staff size. When a MusicXML element or attribute refers to tenths, it means the global tenths defined by the scaling element, not the local tenths as adjusted by the staff-size element.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:decimal"/>
         </xs:simpleType>
         */
		class TopSystemDistance;
		using TopSystemDistancePtr = std::shared_ptr<TopSystemDistance>;
		using TopSystemDistanceUPtr = std::unique_ptr<TopSystemDistance>;
		using TopSystemDistanceSet = std::vector<TopSystemDistancePtr>;
		using TopSystemDistanceSetIter = TopSystemDistanceSet::iterator;
		using TopSystemDistanceSetIterConst = TopSystemDistanceSet::const_iterator;
		inline TopSystemDistancePtr makeTopSystemDistance() { return std::make_shared<TopSystemDistance>(); }
        class TopSystemDistance : public ElementInterface
        {
        public:
            TopSystemDistance();
            TopSystemDistance( const types::TenthsValue& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            types::TenthsValue getValue() const;
            void setValue( const types::TenthsValue& value );
        private:
            types::TenthsValue myValue;
        };
        
        
        /**************** ArrowDirection ****************
         4468
         <xs:element name="arrow-direction" type="arrow-direction"/>
         <xs:simpleType name="arrow-direction">
         <xs:annotation>
         <xs:documentation>The arrow-direction type represents the direction in which an arrow points, using Unicode arrow terminology.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:string">
         <xs:enumeration value="left"/>
         <xs:enumeration value="up"/>
         <xs:enumeration value="right"/>
         <xs:enumeration value="down"/>
         <xs:enumeration value="northwest"/>
         <xs:enumeration value="northeast"/>
         <xs:enumeration value="southeast"/>
         <xs:enumeration value="southwest"/>
         <xs:enumeration value="left right"/>
         <xs:enumeration value="up down"/>
         <xs:enumeration value="northwest southeast"/>
         <xs:enumeration value="northeast southwest"/>
         <xs:enumeration value="other"/>
         </xs:restriction>
         </xs:simpleType>
         <xs:simpleType name="arrow-direction">
         <xs:annotation>
         <xs:documentation>The arrow-direction type represents the direction in which an arrow points, using Unicode arrow terminology.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:string">
         <xs:enumeration value="left"/>
         <xs:enumeration value="up"/>
         <xs:enumeration value="right"/>
         <xs:enumeration value="down"/>
         <xs:enumeration value="northwest"/>
         <xs:enumeration value="northeast"/>
         <xs:enumeration value="southeast"/>
         <xs:enumeration value="southwest"/>
         <xs:enumeration value="left right"/>
         <xs:enumeration value="up down"/>
         <xs:enumeration value="northwest southeast"/>
         <xs:enumeration value="northeast southwest"/>
         <xs:enumeration value="other"/>
         </xs:restriction>
         </xs:simpleType>
         */
		class ArrowDirection;
		using ArrowDirectionPtr = std::shared_ptr<ArrowDirection>;
		using ArrowDirectionUPtr = std::unique_ptr<ArrowDirection>;
		using ArrowDirectionSet = std::vector<ArrowDirectionPtr>;
		using ArrowDirectionSetIter = ArrowDirectionSet::iterator;
		using ArrowDirectionSetIterConst = ArrowDirectionSet::const_iterator;
		inline ArrowDirectionPtr makeArrowDirection() { return std::make_shared<ArrowDirection>(); }
        class ArrowDirection : public ElementInterface
        {
        public:
            ArrowDirection();
            ArrowDirection( const types::ArrowDirectionEnum& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            types::ArrowDirectionEnum getValue() const;
            void setValue( const types::ArrowDirectionEnum& value );
        private:
            types::ArrowDirectionEnum myValue;
        };
        
        
        /**************** ArrowStyle ****************
         4471
         <xs:element name="arrow-style" type="arrow-style" minOccurs="0"/>
         <xs:simpleType name="arrow-style">
         <xs:annotation>
         <xs:documentation>The arrow-style type represents the style of an arrow, using Unicode arrow terminology. Filled and hollow arrows indicate polygonal single arrows. Paired arrows are duplicate single arrows in the same direction. Combined arrows apply to double direction arrows like left right, indicating that an arrow in one direction should be combined with an arrow in the other direction.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:string">
         <xs:enumeration value="single"/>
         <xs:enumeration value="double"/>
         <xs:enumeration value="filled"/>
         <xs:enumeration value="hollow"/>
         <xs:enumeration value="paired"/>
         <xs:enumeration value="combined"/>
         <xs:enumeration value="other"/>
         </xs:restriction>
         </xs:simpleType>
         <xs:simpleType name="arrow-style">
         <xs:annotation>
         <xs:documentation>The arrow-style type represents the style of an arrow, using Unicode arrow terminology. Filled and hollow arrows indicate polygonal single arrows. Paired arrows are duplicate single arrows in the same direction. Combined arrows apply to double direction arrows like left right, indicating that an arrow in one direction should be combined with an arrow in the other direction.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:string">
         <xs:enumeration value="single"/>
         <xs:enumeration value="double"/>
         <xs:enumeration value="filled"/>
         <xs:enumeration value="hollow"/>
         <xs:enumeration value="paired"/>
         <xs:enumeration value="combined"/>
         <xs:enumeration value="other"/>
         </xs:restriction>
         </xs:simpleType>
         */
		class ArrowStyle;
		using ArrowStylePtr = std::shared_ptr<ArrowStyle>;
		using ArrowStyleUPtr = std::unique_ptr<ArrowStyle>;
		using ArrowStyleSet = std::vector<ArrowStylePtr>;
		using ArrowStyleSetIter = ArrowStyleSet::iterator;
		using ArrowStyleSetIterConst = ArrowStyleSet::const_iterator;
		inline ArrowStylePtr makeArrowStyle() { return std::make_shared<ArrowStyle>(); }
        class ArrowStyle : public ElementInterface
        {
        public:
            ArrowStyle();
            ArrowStyle( const types::ArrowStyleEnum& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            types::ArrowStyleEnum getValue() const;
            void setValue( const types::ArrowStyleEnum& value );
        private:
            types::ArrowStyleEnum myValue;
        };
        
        
        /**************** CircularArrow ****************
         4475
         <xs:element name="circular-arrow" type="circular-arrow"/>
         <xs:simpleType name="circular-arrow">
         <xs:annotation>
         <xs:documentation>The circular-arrow type represents the direction in which a circular arrow points, using Unicode arrow terminology.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:string">
         <xs:enumeration value="clockwise"/>
         <xs:enumeration value="anticlockwise"/>
         </xs:restriction>
         </xs:simpleType>
         <xs:simpleType name="circular-arrow">
         <xs:annotation>
         <xs:documentation>The circular-arrow type represents the direction in which a circular arrow points, using Unicode arrow terminology.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:string">
         <xs:enumeration value="clockwise"/>
         <xs:enumeration value="anticlockwise"/>
         </xs:restriction>
         </xs:simpleType>
         */
		class CircularArrow;
		using CircularArrowPtr = std::shared_ptr<CircularArrow>;
		using CircularArrowUPtr = std::unique_ptr<CircularArrow>;
		using CircularArrowSet = std::vector<CircularArrowPtr>;
		using CircularArrowSetIter = CircularArrowSet::iterator;
		using CircularArrowSetIterConst = CircularArrowSet::const_iterator;
		inline CircularArrowPtr makeCircularArrow() { return std::make_shared<CircularArrow>(); }
        class CircularArrow : public ElementInterface
        {
        public:
            CircularArrow();
            CircularArrow( const types::CircularArrowEnum& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            types::CircularArrowEnum getValue() const;
            void setValue( const types::CircularArrowEnum& value );
        private:
            types::CircularArrowEnum myValue;
        };
        
        
        /**************** BendAlter ****************
         4515
         <xs:element name="bend-alter" type="semitones">    <xs:annotation>     <xs:documentation>The bend-alter element indicates the number of steps in the bend similar to the alter element. As with the alter element numbers like 0.5 can be used to indicate microtones. Negative numbers indicate pre-bends or releases; the pre-bend and release elements are used to distinguish what is intended.</xs:documentation> </xs:annotation></xs:element>
         <xs:simpleType name="semitones">
         <xs:annotation>
         <xs:documentation>The semitones type is a number representing semitones, used for chromatic alteration. A value of -1 corresponds to a flat and a value of 1 to a sharp. Decimal values like 0.5 (quarter tone sharp) are used for microtones.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:decimal"/>
         </xs:simpleType>
         <xs:simpleType name="semitones">
         <xs:annotation>
         <xs:documentation>The semitones type is a number representing semitones, used for chromatic alteration. A value of -1 corresponds to a flat and a value of 1 to a sharp. Decimal values like 0.5 (quarter tone sharp) are used for microtones.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:decimal"/>
         </xs:simpleType>
         */
		class BendAlter;
		using BendAlterPtr = std::shared_ptr<BendAlter>;
		using BendAlterUPtr = std::unique_ptr<BendAlter>;
		using BendAlterSet = std::vector<BendAlterPtr>;
		using BendAlterSetIter = BendAlterSet::iterator;
		using BendAlterSetIterConst = BendAlterSet::const_iterator;
		inline BendAlterPtr makeBendAlter() { return std::make_shared<BendAlter>(); }
        class BendAlter : public ElementInterface
        {
        public:
            BendAlter();
            BendAlter( const types::Semitones& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            types::Semitones getValue() const;
            void setValue( const types::Semitones& value );
        private:
            types::Semitones myValue;
        };
        
        
        /**************** HoleType ****************
         4758
         <xs:element name="hole-type" type="xs:string" minOccurs="0">   <xs:annotation>     <xs:documentation>The content of the optional hole-type element indicates what the hole symbol represents in terms of instrument fingering or other techniques.</xs:documentation>  </xs:annotation></xs:element>
         <xs:simpleType name="xs:string"/>
         <xs:simpleType name="xs:string"/>
         */
		class HoleType;
		using HoleTypePtr = std::shared_ptr<HoleType>;
		using HoleTypeUPtr = std::unique_ptr<HoleType>;
		using HoleTypeSet = std::vector<HoleTypePtr>;
		using HoleTypeSetIter = HoleTypeSet::iterator;
		using HoleTypeSetIterConst = HoleTypeSet::const_iterator;
		inline HoleTypePtr makeHoleType() { return std::make_shared<HoleType>(); }
        class HoleType : public ElementInterface
        {
        public:
            HoleType();
            HoleType( const types::XsString& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            types::XsString getValue() const;
            void setValue( const types::XsString& value );
        private:
            types::XsString myValue;
        };
        
        
        /**************** HoleShape ****************
         4767
         <xs:element name="hole-shape" type="xs:string" minOccurs="0">  <xs:annotation>     <xs:documentation>The optional hole-shape element indicates the shape of the hole symbol; the default is a circle.</xs:documentation>   </xs:annotation></xs:element>
         <xs:simpleType name="xs:string"/>
         <xs:simpleType name="xs:string"/>
         */
		class HoleShape;
		using HoleShapePtr = std::shared_ptr<HoleShape>;
		using HoleShapeUPtr = std::unique_ptr<HoleShape>;
		using HoleShapeSet = std::vector<HoleShapePtr>;
		using HoleShapeSetIter = HoleShapeSet::iterator;
		using HoleShapeSetIterConst = HoleShapeSet::const_iterator;
		inline HoleShapePtr makeHoleShape() { return std::make_shared<HoleShape>(); }
        class HoleShape : public ElementInterface
        {
        public:
            HoleShape();
            HoleShape( const types::XsString& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            types::XsString getValue() const;
            void setValue( const types::XsString& value );
        private:
            types::XsString myValue;
        };
        
        
        /**************** Syllabic ****************
         4802, 4817
         <xs:element name="syllabic" type="syllabic" minOccurs="0"/>
         <xs:simpleType name="syllabic">
         <xs:annotation>
         <xs:documentation>Lyric hyphenation is indicated by the syllabic type. The single, begin, end, and middle values represent single-syllable words, word-beginning syllables, word-ending syllables, and mid-word syllables, respectively.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:string">
         <xs:enumeration value="single"/>
         <xs:enumeration value="begin"/>
         <xs:enumeration value="end"/>
         <xs:enumeration value="middle"/>
         </xs:restriction>
         </xs:simpleType>
         <xs:simpleType name="syllabic">
         <xs:annotation>
         <xs:documentation>Lyric hyphenation is indicated by the syllabic type. The single, begin, end, and middle values represent single-syllable words, word-beginning syllables, word-ending syllables, and mid-word syllables, respectively.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:string">
         <xs:enumeration value="single"/>
         <xs:enumeration value="begin"/>
         <xs:enumeration value="end"/>
         <xs:enumeration value="middle"/>
         </xs:restriction>
         </xs:simpleType>
         */
		class Syllabic;
		using SyllabicPtr = std::shared_ptr<Syllabic>;
		using SyllabicUPtr = std::unique_ptr<Syllabic>;
		using SyllabicSet = std::vector<SyllabicPtr>;
		using SyllabicSetIter = SyllabicSet::iterator;
		using SyllabicSetIterConst = SyllabicSet::const_iterator;
		inline SyllabicPtr makeSyllabic() { return std::make_shared<Syllabic>(); }
        class Syllabic : public ElementInterface
        {
        public:
            Syllabic();
            Syllabic( const types::SyllabicEnum& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            types::SyllabicEnum getValue() const;
            void setValue( const types::SyllabicEnum& value );
        private:
            types::SyllabicEnum myValue;
        };
        
        
        
        
        
        /**************** Step ****************
         5220
         <xs:element name="step" type="step"/>
         <xs:simpleType name="step">
         <xs:annotation>
         <xs:documentation>The step type represents a step of the diatonic scale, represented using the English letters A through G.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:string">
         <xs:enumeration value="A"/>
         <xs:enumeration value="B"/>
         <xs:enumeration value="C"/>
         <xs:enumeration value="D"/>
         <xs:enumeration value="E"/>
         <xs:enumeration value="F"/>
         <xs:enumeration value="G"/>
         </xs:restriction>
         </xs:simpleType>
         <xs:simpleType name="step">
         <xs:annotation>
         <xs:documentation>The step type represents a step of the diatonic scale, represented using the English letters A through G.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:string">
         <xs:enumeration value="A"/>
         <xs:enumeration value="B"/>
         <xs:enumeration value="C"/>
         <xs:enumeration value="D"/>
         <xs:enumeration value="E"/>
         <xs:enumeration value="F"/>
         <xs:enumeration value="G"/>
         </xs:restriction>
         </xs:simpleType>
         */
		class Step;
		using StepPtr = std::shared_ptr<Step>;
		using StepUPtr = std::unique_ptr<Step>;
		using StepSet = std::vector<StepPtr>;
		using StepSetIter = StepSet::iterator;
		using StepSetIterConst = StepSet::const_iterator;
		inline StepPtr makeStep() { return std::make_shared<Step>(); }
        class Step : public ElementInterface
        {
        public:
            Step();
            Step( const types::StepEnum& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            types::StepEnum getValue() const;
            void setValue( const types::StepEnum& value );
        private:
            types::StepEnum myValue;
        };
        
        
        /**************** Alter ****************
         5223
         <xs:element name="alter" type="semitones" minOccurs="0"/>
         <xs:simpleType name="semitones">
         <xs:annotation>
         <xs:documentation>The semitones type is a number representing semitones, used for chromatic alteration. A value of -1 corresponds to a flat and a value of 1 to a sharp. Decimal values like 0.5 (quarter tone sharp) are used for microtones.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:decimal"/>
         </xs:simpleType>
         <xs:simpleType name="semitones">
         <xs:annotation>
         <xs:documentation>The semitones type is a number representing semitones, used for chromatic alteration. A value of -1 corresponds to a flat and a value of 1 to a sharp. Decimal values like 0.5 (quarter tone sharp) are used for microtones.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:decimal"/>
         </xs:simpleType>
         */
		class Alter;
		using AlterPtr = std::shared_ptr<Alter>;
		using AlterUPtr = std::unique_ptr<Alter>;
		using AlterSet = std::vector<AlterPtr>;
		using AlterSetIter = AlterSet::iterator;
		using AlterSetIterConst = AlterSet::const_iterator;
		inline AlterPtr makeAlter() { return std::make_shared<Alter>(); }
        class Alter : public ElementInterface
        {
        public:
            Alter();
            Alter( const types::Semitones& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            types::Semitones getValue() const;
            void setValue( const types::Semitones& value );
        private:
            types::Semitones myValue;
        };
        
        
        /**************** Octave ****************
         5227
         <xs:element name="octave" type="octave"/>
         <xs:simpleType name="octave">
         <xs:annotation>
         <xs:documentation>Octaves are represented by the numbers 0 to 9, where 4 indicates the octave started by middle C.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:integer">
         <xs:minInclusive value="0"/>
         <xs:maxInclusive value="9"/>
         </xs:restriction>
         </xs:simpleType>
         <xs:simpleType name="octave">
         <xs:annotation>
         <xs:documentation>Octaves are represented by the numbers 0 to 9, where 4 indicates the octave started by middle C.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:integer">
         <xs:minInclusive value="0"/>
         <xs:maxInclusive value="9"/>
         </xs:restriction>
         </xs:simpleType>
         */
		class Octave;
		using OctavePtr = std::shared_ptr<Octave>;
		using OctaveUPtr = std::unique_ptr<Octave>;
		using OctaveSet = std::vector<OctavePtr>;
		using OctaveSetIter = OctaveSet::iterator;
		using OctaveSetIterConst = OctaveSet::const_iterator;
		inline OctavePtr makeOctave() { return std::make_shared<Octave>(); }
        class Octave : public ElementInterface
        {
        public:
            Octave();
            Octave( const types::OctaveValue& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            types::OctaveValue getValue() const;
            void setValue( const types::OctaveValue& value );
        private:
            types::OctaveValue myValue;
        };
        
        
        /**************** ActualNotes ****************
         5518
         <xs:element name="actual-notes" type="xs:nonNegativeInteger">  <xs:annotation>     <xs:documentation>The actual-notes element describes how many notes are played in the time usually occupied by the number in the normal-notes element.</xs:documentation>   </xs:annotation></xs:element>
         <xs:simpleType name="xs:nonNegativeInteger"/>
         <xs:simpleType name="xs:nonNegativeInteger"/>
         */
		class ActualNotes;
		using ActualNotesPtr = std::shared_ptr<ActualNotes>;
		using ActualNotesUPtr = std::unique_ptr<ActualNotes>;
		using ActualNotesSet = std::vector<ActualNotesPtr>;
		using ActualNotesSetIter = ActualNotesSet::iterator;
		using ActualNotesSetIterConst = ActualNotesSet::const_iterator;
		inline ActualNotesPtr makeActualNotes() { return std::make_shared<ActualNotes>(); }
        class ActualNotes : public ElementInterface
        {
        public:
            ActualNotes();
            ActualNotes( const types::NonNegativeInteger& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            types::NonNegativeInteger getValue() const;
            void setValue( const types::NonNegativeInteger& value );
        private:
            types::NonNegativeInteger myValue;
        };
        
        
        /**************** NormalNotes ****************
         5523
         <xs:element name="normal-notes" type="xs:nonNegativeInteger">  <xs:annotation>     <xs:documentation>The normal-notes element describes how many notes are usually played in the time occupied by the number in the actual-notes element.</xs:documentation>   </xs:annotation></xs:element>
         <xs:simpleType name="xs:nonNegativeInteger"/>
         <xs:simpleType name="xs:nonNegativeInteger"/>
         */
		class NormalNotes;
		using NormalNotesPtr = std::shared_ptr<NormalNotes>;
		using NormalNotesUPtr = std::unique_ptr<NormalNotes>;
		using NormalNotesSet = std::vector<NormalNotesPtr>;
		using NormalNotesSetIter = NormalNotesSet::iterator;
		using NormalNotesSetIterConst = NormalNotesSet::const_iterator;
		inline NormalNotesPtr makeNormalNotes() { return std::make_shared<NormalNotes>(); }
        class NormalNotes : public ElementInterface
        {
        public:
            NormalNotes();
            NormalNotes( const types::NonNegativeInteger& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            types::NonNegativeInteger getValue() const;
            void setValue( const types::NonNegativeInteger& value );
        private:
            types::NonNegativeInteger myValue;
        };
        
        
        /**************** NormalType ****************
         5530
         <xs:element name="normal-type" type="note-type-value"> <xs:annotation>     <xs:documentation>If the type associated with the number in the normal-notes element is different than the current note type (e.g. a quarter note within an eighth note triplet) then the normal-notes type (e.g. eighth) is specified in the normal-type and normal-dot elements.</xs:documentation>   </xs:annotation></xs:element>
         <xs:simpleType name="note-type-value">
         <xs:annotation>
         <xs:documentation>The note-type type is used for the MusicXML type element and represents the graphic note type, from 1024th (shortest) to maxima (longest).</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:string">
         <xs:enumeration value="1024th"/>
         <xs:enumeration value="512th"/>
         <xs:enumeration value="256th"/>
         <xs:enumeration value="128th"/>
         <xs:enumeration value="64th"/>
         <xs:enumeration value="32nd"/>
         <xs:enumeration value="16th"/>
         <xs:enumeration value="eighth"/>
         <xs:enumeration value="quarter"/>
         <xs:enumeration value="half"/>
         <xs:enumeration value="whole"/>
         <xs:enumeration value="breve"/>
         <xs:enumeration value="long"/>
         <xs:enumeration value="maxima"/>
         </xs:restriction>
         </xs:simpleType>
         <xs:simpleType name="note-type-value">
         <xs:annotation>
         <xs:documentation>The note-type type is used for the MusicXML type element and represents the graphic note type, from 1024th (shortest) to maxima (longest).</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:string">
         <xs:enumeration value="1024th"/>
         <xs:enumeration value="512th"/>
         <xs:enumeration value="256th"/>
         <xs:enumeration value="128th"/>
         <xs:enumeration value="64th"/>
         <xs:enumeration value="32nd"/>
         <xs:enumeration value="16th"/>
         <xs:enumeration value="eighth"/>
         <xs:enumeration value="quarter"/>
         <xs:enumeration value="half"/>
         <xs:enumeration value="whole"/>
         <xs:enumeration value="breve"/>
         <xs:enumeration value="long"/>
         <xs:enumeration value="maxima"/>
         </xs:restriction>
         </xs:simpleType>
         */
		class NormalType;
		using NormalTypePtr = std::shared_ptr<NormalType>;
		using NormalTypeUPtr = std::unique_ptr<NormalType>;
		using NormalTypeSet = std::vector<NormalTypePtr>;
		using NormalTypeSetIter = NormalTypeSet::iterator;
		using NormalTypeSetIterConst = NormalTypeSet::const_iterator;
		inline NormalTypePtr makeNormalType() { return std::make_shared<NormalType>(); }
        class NormalType : public ElementInterface
        {
        public:
            NormalType();
            NormalType( const types::NoteTypeValue& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            types::NoteTypeValue getValue() const;
            void setValue( const types::NoteTypeValue& value );
        private:
            types::NoteTypeValue myValue;
        };
        
        
        /**************** CreditType ****************
         5657
         <xs:element name="credit-type" type="xs:string" minOccurs="0" maxOccurs="unbounded"/>
         <xs:simpleType name="xs:string"/>
         <xs:simpleType name="xs:string"/>
         */
		class CreditType;
		using CreditTypePtr = std::shared_ptr<CreditType>;
		using CreditTypeUPtr = std::unique_ptr<CreditType>;
		using CreditTypeSet = std::vector<CreditTypePtr>;
		using CreditTypeSetIter = CreditTypeSet::iterator;
		using CreditTypeSetIterConst = CreditTypeSet::const_iterator;
		inline CreditTypePtr makeCreditType() { return std::make_shared<CreditType>(); }
        class CreditType : public ElementInterface
        {
        public:
            CreditType();
            CreditType( const types::XsString& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            types::XsString getValue() const;
            void setValue( const types::XsString& value );
        private:
            types::XsString myValue;
        };
        
        
        /**************** InstrumentName ****************
         5879
         <xs:element name="instrument-name" type="xs:string">   <xs:annotation>     <xs:documentation>The instrument-name element is typically used within a software application rather than appearing on the printed page of a score.</xs:documentation>  </xs:annotation></xs:element>
         <xs:simpleType name="xs:string"/>
         <xs:simpleType name="xs:string"/>
         */
		class InstrumentName;
		using InstrumentNamePtr = std::shared_ptr<InstrumentName>;
		using InstrumentNameUPtr = std::unique_ptr<InstrumentName>;
		using InstrumentNameSet = std::vector<InstrumentNamePtr>;
		using InstrumentNameSetIter = InstrumentNameSet::iterator;
		using InstrumentNameSetIterConst = InstrumentNameSet::const_iterator;
		inline InstrumentNamePtr makeInstrumentName() { return std::make_shared<InstrumentName>(); }
        class InstrumentName : public ElementInterface
        {
        public:
            InstrumentName();
            InstrumentName( const types::XsString& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            types::XsString getValue() const;
            void setValue( const types::XsString& value );
        private:
            types::XsString myValue;
        };
        
        
        /**************** InstrumentAbbreviation ****************
         5884
         <xs:element name="instrument-abbreviation" type="xs:string" minOccurs="0"> <xs:annotation>     <xs:documentation>The optional instrument-abbreviation element is typically used within a software application rather than appearing on the printed page of a score.</xs:documentation> </xs:annotation></xs:element>
         <xs:simpleType name="xs:string"/>
         <xs:simpleType name="xs:string"/>
         */
		class InstrumentAbbreviation;
		using InstrumentAbbreviationPtr = std::shared_ptr<InstrumentAbbreviation>;
		using InstrumentAbbreviationUPtr = std::unique_ptr<InstrumentAbbreviation>;
		using InstrumentAbbreviationSet = std::vector<InstrumentAbbreviationPtr>;
		using InstrumentAbbreviationSetIter = InstrumentAbbreviationSet::iterator;
		using InstrumentAbbreviationSetIterConst = InstrumentAbbreviationSet::const_iterator;
		inline InstrumentAbbreviationPtr makeInstrumentAbbreviation() { return std::make_shared<InstrumentAbbreviation>(); }
        class InstrumentAbbreviation : public ElementInterface
        {
        public:
            InstrumentAbbreviation();
            InstrumentAbbreviation( const types::XsString& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            types::XsString getValue() const;
            void setValue( const types::XsString& value );
        private:
            types::XsString myValue;
        };
        
        
        /**************** InstrumentSound ****************
         5890
         <xs:element name="instrument-sound" type="xs:string" minOccurs="0">    <xs:annotation>     <xs:documentation>The instrument-sound element describes the default timbre of the score-instrument. This description is independent of a particular virtual or MIDI instrument specification and allows playback to be shared more easily between applications and libraries.</xs:documentation>   </xs:annotation></xs:element>
         <xs:simpleType name="xs:string"/>
         <xs:simpleType name="xs:string"/>
         */
		class InstrumentSound;
		using InstrumentSoundPtr = std::shared_ptr<InstrumentSound>;
		using InstrumentSoundUPtr = std::unique_ptr<InstrumentSound>;
		using InstrumentSoundSet = std::vector<InstrumentSoundPtr>;
		using InstrumentSoundSetIter = InstrumentSoundSet::iterator;
		using InstrumentSoundSetIterConst = InstrumentSoundSet::const_iterator;
		inline InstrumentSoundPtr makeInstrumentSound() { return std::make_shared<InstrumentSound>(); }
        class InstrumentSound : public ElementInterface
        {
        public:
            InstrumentSound();
            InstrumentSound( const types::XsString& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            types::XsString getValue() const;
            void setValue( const types::XsString& value );
        private:
            types::XsString myValue;
        };
        
        
        /**************** Ensemble ****************
         5903
         <xs:element name="ensemble" type="positive-integer-or-empty">  <xs:annotation>     <xs:documentation>The ensemble element was added in Version 2.0. It is present if performance is intended by an ensemble such as an orchestral section. The text of the ensemble element contains the size of the section or is empty if the ensemble size is not specified.</xs:documentation> </xs:annotation></xs:element>
         <xs:simpleType name="positive-integer-or-empty">
         <xs:annotation>
         <xs:documentation>The positive-integer-or-empty values can be either a positive integer or an empty string.</xs:documentation>
         </xs:annotation>
         <xs:union memberTypes="xs:positiveInteger">
         <xs:simpleType>
         <xs:restriction base="xs:string">
         <xs:enumeration value=""/>
         </xs:restriction>
         </xs:simpleType>
         </xs:union>
         </xs:simpleType>
         <xs:simpleType name="positive-integer-or-empty">
         <xs:annotation>
         <xs:documentation>The positive-integer-or-empty values can be either a positive integer or an empty string.</xs:documentation>
         </xs:annotation>
         <xs:union memberTypes="xs:positiveInteger">
         <xs:simpleType>
         <xs:restriction base="xs:string">
         <xs:enumeration value=""/>
         </xs:restriction>
         </xs:simpleType>
         </xs:union>
         </xs:simpleType>
         */
		class Ensemble;
		using EnsemblePtr = std::shared_ptr<Ensemble>;
		using EnsembleUPtr = std::unique_ptr<Ensemble>;
		using EnsembleSet = std::vector<EnsemblePtr>;
		using EnsembleSetIter = EnsembleSet::iterator;
		using EnsembleSetIterConst = EnsembleSet::const_iterator;
		inline EnsemblePtr makeEnsemble() { return std::make_shared<Ensemble>(); }
        class Ensemble : public ElementInterface
        {
        public:
            Ensemble();
            Ensemble( const types::PositiveIntegerOrEmpty& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            types::PositiveIntegerOrEmpty getValue() const;
            void setValue( const types::PositiveIntegerOrEmpty& value );
        private:
            types::PositiveIntegerOrEmpty myValue;
        };
        
        
        /**************** Group ****************
         5940
         <xs:element name="group" type="xs:string" minOccurs="0" maxOccurs="unbounded"> <xs:annotation>     <xs:documentation>The group element allows the use of different versions of the part for different purposes. Typical values include score parts sound and data. Ordering information that is directly encoded in MuseData can be derived from the ordering within a MusicXML score or opus.</xs:documentation>  </xs:annotation></xs:element>
         <xs:simpleType name="xs:string"/>
         <xs:simpleType name="xs:string"/>
         */
		class Group;
		using GroupPtr = std::shared_ptr<Group>;
		using GroupUPtr = std::unique_ptr<Group>;
		using GroupSet = std::vector<GroupPtr>;
		using GroupSetIter = GroupSet::iterator;
		using GroupSetIterConst = GroupSet::const_iterator;
		inline GroupPtr makeGroup() { return std::make_shared<Group>(); }
        class Group : public ElementInterface
        {
        public:
            Group();
            Group( const types::XsString& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            types::XsString getValue() const;
            void setValue( const types::XsString& value );
        private:
            types::XsString myValue;
        };
        
        
        /**************** VirtualLibrary ****************
         5972
         <xs:element name="virtual-library" type="xs:string" minOccurs="0"> <xs:annotation>     <xs:documentation>The virtual-library element indicates the virtual instrument library name.</xs:documentation> </xs:annotation></xs:element>
         <xs:simpleType name="xs:string"/>
         <xs:simpleType name="xs:string"/>
         */
		class VirtualLibrary;
		using VirtualLibraryPtr = std::shared_ptr<VirtualLibrary>;
		using VirtualLibraryUPtr = std::unique_ptr<VirtualLibrary>;
		using VirtualLibrarySet = std::vector<VirtualLibraryPtr>;
		using VirtualLibrarySetIter = VirtualLibrarySet::iterator;
		using VirtualLibrarySetIterConst = VirtualLibrarySet::const_iterator;
		inline VirtualLibraryPtr makeVirtualLibrary() { return std::make_shared<VirtualLibrary>(); }
        class VirtualLibrary : public ElementInterface
        {
        public:
            VirtualLibrary();
            VirtualLibrary( const types::XsString& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            types::XsString getValue() const;
            void setValue( const types::XsString& value );
        private:
            types::XsString myValue;
        };
        
        
        /**************** VirtualName ****************
         5978
         <xs:element name="virtual-name" type="xs:string" minOccurs="0">    <xs:annotation>     <xs:documentation>The virtual-name element indicates the library-specific name for the virtual instrument.</xs:documentation>   </xs:annotation></xs:element>
         <xs:simpleType name="xs:string"/>
         <xs:simpleType name="xs:string"/>
         */
		class VirtualName;
		using VirtualNamePtr = std::shared_ptr<VirtualName>;
		using VirtualNameUPtr = std::unique_ptr<VirtualName>;
		using VirtualNameSet = std::vector<VirtualNamePtr>;
		using VirtualNameSetIter = VirtualNameSet::iterator;
		using VirtualNameSetIterConst = VirtualNameSet::const_iterator;
		inline VirtualNamePtr makeVirtualName() { return std::make_shared<VirtualName>(); }
        class VirtualName : public ElementInterface
        {
        public:
            VirtualName();
            VirtualName( const types::XsString& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            types::XsString getValue() const;
            void setValue( const types::XsString& value );
        private:
            types::XsString myValue;
        };
        
        
        /**************** WorkNumber ****************
         5989
         <xs:element name="work-number" type="xs:string" minOccurs="0"> <xs:annotation>     <xs:documentation>The work-number element specifies the number of a work such as its opus number.</xs:documentation>    </xs:annotation></xs:element>
         <xs:simpleType name="xs:string"/>
         <xs:simpleType name="xs:string"/>
         */
		class WorkNumber;
		using WorkNumberPtr = std::shared_ptr<WorkNumber>;
		using WorkNumberUPtr = std::unique_ptr<WorkNumber>;
		using WorkNumberSet = std::vector<WorkNumberPtr>;
		using WorkNumberSetIter = WorkNumberSet::iterator;
		using WorkNumberSetIterConst = WorkNumberSet::const_iterator;
		inline WorkNumberPtr makeWorkNumber() { return std::make_shared<WorkNumber>(); }
        class WorkNumber : public ElementInterface
        {
        public:
            WorkNumber();
            WorkNumber( const types::XsString& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            types::XsString getValue() const;
            void setValue( const types::XsString& value );
        private:
            types::XsString myValue;
        };
        
        
        /**************** WorkTitle ****************
         5995
         <xs:element name="work-title" type="xs:string" minOccurs="0">  <xs:annotation>     <xs:documentation>The work-title element specifies the title of a work not including its opus or other work number.</xs:documentation>  </xs:annotation></xs:element>
         <xs:simpleType name="xs:string"/>
         <xs:simpleType name="xs:string"/>
         */
		class WorkTitle;
		using WorkTitlePtr = std::shared_ptr<WorkTitle>;
		using WorkTitleUPtr = std::unique_ptr<WorkTitle>;
		using WorkTitleSet = std::vector<WorkTitlePtr>;
		using WorkTitleSetIter = WorkTitleSet::iterator;
		using WorkTitleSetIterConst = WorkTitleSet::const_iterator;
		inline WorkTitlePtr makeWorkTitle() { return std::make_shared<WorkTitle>(); }
        class WorkTitle : public ElementInterface
        {
        public:
            WorkTitle();
            WorkTitle( const types::XsString& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            types::XsString getValue() const;
            void setValue( const types::XsString& value );
        private:
            types::XsString myValue;
        };
        
        
        /**************** Staff ****************
         6065
         <xs:element name="staff" type="xs:positiveInteger">    <xs:annotation>     <xs:documentation>Staff assignment is only needed for music notated on multiple staves. Used by both notes and directions. Staff values are numbers with 1 referring to the top-most staff in a part.</xs:documentation>    </xs:annotation></xs:element>
         <xs:simpleType name="xs:positiveInteger"/>
         <xs:simpleType name="xs:positiveInteger"/>
         */
		class Staff;
		using StaffPtr = std::shared_ptr<Staff>;
		using StaffUPtr = std::unique_ptr<Staff>;
		using StaffSet = std::vector<StaffPtr>;
		using StaffSetIter = StaffSet::iterator;
		using StaffSetIterConst = StaffSet::const_iterator;
		inline StaffPtr makeStaff() { return std::make_shared<Staff>(); }
        class Staff : public ElementInterface
        {
        public:
            Staff();
            Staff( const types::PositiveInteger& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            types::PositiveInteger getValue() const;
            void setValue( const types::PositiveInteger& value );
        private:
            types::PositiveInteger myValue;
        };
        
        
        /**************** TuningStep ****************
         6075
         <xs:element name="tuning-step" type="step">    <xs:annotation>     <xs:documentation>The tuning-step element is represented like the step element with a different name to reflect is different function.</xs:documentation>   </xs:annotation></xs:element>
         <xs:simpleType name="step">
         <xs:annotation>
         <xs:documentation>The step type represents a step of the diatonic scale, represented using the English letters A through G.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:string">
         <xs:enumeration value="A"/>
         <xs:enumeration value="B"/>
         <xs:enumeration value="C"/>
         <xs:enumeration value="D"/>
         <xs:enumeration value="E"/>
         <xs:enumeration value="F"/>
         <xs:enumeration value="G"/>
         </xs:restriction>
         </xs:simpleType>
         <xs:simpleType name="step">
         <xs:annotation>
         <xs:documentation>The step type represents a step of the diatonic scale, represented using the English letters A through G.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:string">
         <xs:enumeration value="A"/>
         <xs:enumeration value="B"/>
         <xs:enumeration value="C"/>
         <xs:enumeration value="D"/>
         <xs:enumeration value="E"/>
         <xs:enumeration value="F"/>
         <xs:enumeration value="G"/>
         </xs:restriction>
         </xs:simpleType>
         */
		class TuningStep;
		using TuningStepPtr = std::shared_ptr<TuningStep>;
		using TuningStepUPtr = std::unique_ptr<TuningStep>;
		using TuningStepSet = std::vector<TuningStepPtr>;
		using TuningStepSetIter = TuningStepSet::iterator;
		using TuningStepSetIterConst = TuningStepSet::const_iterator;
		inline TuningStepPtr makeTuningStep() { return std::make_shared<TuningStep>(); }
        class TuningStep : public ElementInterface
        {
        public:
            TuningStep();
            TuningStep( const types::StepEnum& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            types::StepEnum getValue() const;
            void setValue( const types::StepEnum& value );
        private:
            types::StepEnum myValue;
        };
        
        
        /**************** TuningAlter ****************
         6080
         <xs:element name="tuning-alter" type="semitones" minOccurs="0">    <xs:annotation>     <xs:documentation>The tuning-alter element is represented like the alter element with a different name to reflect is different function.</xs:documentation> </xs:annotation></xs:element>
         <xs:simpleType name="semitones">
         <xs:annotation>
         <xs:documentation>The semitones type is a number representing semitones, used for chromatic alteration. A value of -1 corresponds to a flat and a value of 1 to a sharp. Decimal values like 0.5 (quarter tone sharp) are used for microtones.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:decimal"/>
         </xs:simpleType>
         <xs:simpleType name="semitones">
         <xs:annotation>
         <xs:documentation>The semitones type is a number representing semitones, used for chromatic alteration. A value of -1 corresponds to a flat and a value of 1 to a sharp. Decimal values like 0.5 (quarter tone sharp) are used for microtones.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:decimal"/>
         </xs:simpleType>
         */
		class TuningAlter;
		using TuningAlterPtr = std::shared_ptr<TuningAlter>;
		using TuningAlterUPtr = std::unique_ptr<TuningAlter>;
		using TuningAlterSet = std::vector<TuningAlterPtr>;
		using TuningAlterSetIter = TuningAlterSet::iterator;
		using TuningAlterSetIterConst = TuningAlterSet::const_iterator;
		inline TuningAlterPtr makeTuningAlter() { return std::make_shared<TuningAlter>(); }
        class TuningAlter : public ElementInterface
        {
        public:
            TuningAlter();
            TuningAlter( const types::Semitones& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            types::Semitones getValue() const;
            void setValue( const types::Semitones& value );
        private:
            types::Semitones myValue;
        };
        
        
        /**************** TuningOctave ****************
         6086
         <xs:element name="tuning-octave" type="octave">    <xs:annotation>     <xs:documentation>The tuning-octave element is represented like the octave element with a different name to reflect is different function.</xs:documentation>   </xs:annotation></xs:element>
         <xs:simpleType name="octave">
         <xs:annotation>
         <xs:documentation>Octaves are represented by the numbers 0 to 9, where 4 indicates the octave started by middle C.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:integer">
         <xs:minInclusive value="0"/>
         <xs:maxInclusive value="9"/>
         </xs:restriction>
         </xs:simpleType>
         <xs:simpleType name="octave">
         <xs:annotation>
         <xs:documentation>Octaves are represented by the numbers 0 to 9, where 4 indicates the octave started by middle C.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:integer">
         <xs:minInclusive value="0"/>
         <xs:maxInclusive value="9"/>
         </xs:restriction>
         </xs:simpleType>
         */
		class TuningOctave;
		using TuningOctavePtr = std::shared_ptr<TuningOctave>;
		using TuningOctaveUPtr = std::unique_ptr<TuningOctave>;
		using TuningOctaveSet = std::vector<TuningOctavePtr>;
		using TuningOctaveSetIter = TuningOctaveSet::iterator;
		using TuningOctaveSetIterConst = TuningOctaveSet::const_iterator;
		inline TuningOctavePtr makeTuningOctave() { return std::make_shared<TuningOctave>(); }
        class TuningOctave : public ElementInterface
        {
        public:
            TuningOctave();
            TuningOctave( const types::OctaveValue& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            types::OctaveValue getValue() const;
            void setValue( const types::OctaveValue& value );
        private:
            types::OctaveValue myValue;
        };
        
        
        /**************** Voice ****************
         6096
         <xs:element name="voice" type="xs:string"/>
         <xs:simpleType name="xs:string"/>
         <xs:simpleType name="xs:string"/>
         */
		class Voice;
		using VoicePtr = std::shared_ptr<Voice>;
		using VoiceUPtr = std::unique_ptr<Voice>;
		using VoiceSet = std::vector<VoicePtr>;
		using VoiceSetIter = VoiceSet::iterator;
		using VoiceSetIterConst = VoiceSet::const_iterator;
		inline VoicePtr makeVoice() { return std::make_shared<Voice>(); }
        class Voice : public ElementInterface
        {
        public:
            Voice();
            Voice( const types::XsString& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            types::XsString getValue() const;
            void setValue( const types::XsString& value );
        private:
            types::XsString myValue;
        };
        
        
        /**************** KeyStep ****************
         6104
         <xs:element name="key-step" type="step">   <xs:annotation>     <xs:documentation>Non-traditional key signatures can be represented using the Humdrum/Scot concept of a list of altered tones. The key-step element indicates the pitch step to be altered represented using the same names as in the step element.</xs:documentation>  </xs:annotation></xs:element>
         <xs:simpleType name="step">
         <xs:annotation>
         <xs:documentation>The step type represents a step of the diatonic scale, represented using the English letters A through G.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:string">
         <xs:enumeration value="A"/>
         <xs:enumeration value="B"/>
         <xs:enumeration value="C"/>
         <xs:enumeration value="D"/>
         <xs:enumeration value="E"/>
         <xs:enumeration value="F"/>
         <xs:enumeration value="G"/>
         </xs:restriction>
         </xs:simpleType>
         <xs:simpleType name="step">
         <xs:annotation>
         <xs:documentation>The step type represents a step of the diatonic scale, represented using the English letters A through G.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:string">
         <xs:enumeration value="A"/>
         <xs:enumeration value="B"/>
         <xs:enumeration value="C"/>
         <xs:enumeration value="D"/>
         <xs:enumeration value="E"/>
         <xs:enumeration value="F"/>
         <xs:enumeration value="G"/>
         </xs:restriction>
         </xs:simpleType>
         */
		class KeyStep;
		using KeyStepPtr = std::shared_ptr<KeyStep>;
		using KeyStepUPtr = std::unique_ptr<KeyStep>;
		using KeyStepSet = std::vector<KeyStepPtr>;
		using KeyStepSetIter = KeyStepSet::iterator;
		using KeyStepSetIterConst = KeyStepSet::const_iterator;
		inline KeyStepPtr makeKeyStep() { return std::make_shared<KeyStep>(); }
        class KeyStep : public ElementInterface
        {
        public:
            KeyStep();
            KeyStep( const types::StepEnum& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            types::StepEnum getValue() const;
            void setValue( const types::StepEnum& value );
        private:
            types::StepEnum myValue;
        };
        
        
        /**************** KeyAlter ****************
         6109
         <xs:element name="key-alter" type="semitones"> <xs:annotation>     <xs:documentation>Non-traditional key signatures can be represented using the Humdrum/Scot concept of a list of altered tones. The key-alter element represents the alteration for a given pitch step represented with semitones in the same manner as the alter element.</xs:documentation>    </xs:annotation></xs:element>
         <xs:simpleType name="semitones">
         <xs:annotation>
         <xs:documentation>The semitones type is a number representing semitones, used for chromatic alteration. A value of -1 corresponds to a flat and a value of 1 to a sharp. Decimal values like 0.5 (quarter tone sharp) are used for microtones.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:decimal"/>
         </xs:simpleType>
         <xs:simpleType name="semitones">
         <xs:annotation>
         <xs:documentation>The semitones type is a number representing semitones, used for chromatic alteration. A value of -1 corresponds to a flat and a value of 1 to a sharp. Decimal values like 0.5 (quarter tone sharp) are used for microtones.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:decimal"/>
         </xs:simpleType>
         */
		class KeyAlter;
		using KeyAlterPtr = std::shared_ptr<KeyAlter>;
		using KeyAlterUPtr = std::unique_ptr<KeyAlter>;
		using KeyAlterSet = std::vector<KeyAlterPtr>;
		using KeyAlterSetIter = KeyAlterSet::iterator;
		using KeyAlterSetIterConst = KeyAlterSet::const_iterator;
		inline KeyAlterPtr makeKeyAlter() { return std::make_shared<KeyAlter>(); }
        class KeyAlter : public ElementInterface
        {
        public:
            KeyAlter();
            KeyAlter( const types::Semitones& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            types::Semitones getValue() const;
            void setValue( const types::Semitones& value );
        private:
            types::Semitones myValue;
        };
        
        
        /**************** KeyAccidental ****************
         6114
         <xs:element name="key-accidental" type="accidental-value" minOccurs="0">   <xs:annotation>     <xs:documentation>Non-traditional key signatures can be represented using the Humdrum/Scot concept of a list of altered tones. The key-accidental element indicates the accidental to be displayed in the key signature represented in the same manner as the accidental element. It is used for disambiguating microtonal accidentals.</xs:documentation>  </xs:annotation></xs:element>
         <xs:simpleType name="accidental-value">
         <xs:annotation>
         <xs:documentation>The accidental-value type represents notated accidentals supported by MusicXML. In the MusicXML 2.0 DTD this was a string with values that could be included. The XSD strengthens the data typing to an enumerated list. The quarter- and three-quarters- accidentals are Tartini-style quarter-tone accidentals. The -down and -up accidentals are quarter-tone accidentals that include arrows pointing down or up. The slash- accidentals are used in Turkish classical music. The numbered sharp and flat accidentals are superscripted versions of the accidental signs, used in Turkish folk music. The sori and koron accidentals are microtonal sharp and flat accidentals used in Iranian and Persian music.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:string">
         <xs:enumeration value="sharp"/>
         <xs:enumeration value="natural"/>
         <xs:enumeration value="flat"/>
         <xs:enumeration value="double-sharp"/>
         <xs:enumeration value="sharp-sharp"/>
         <xs:enumeration value="flat-flat"/>
         <xs:enumeration value="natural-sharp"/>
         <xs:enumeration value="natural-flat"/>
         <xs:enumeration value="quarter-flat"/>
         <xs:enumeration value="quarter-sharp"/>
         <xs:enumeration value="three-quarters-flat"/>
         <xs:enumeration value="three-quarters-sharp"/>
         <xs:enumeration value="sharp-down"/>
         <xs:enumeration value="sharp-up"/>
         <xs:enumeration value="natural-down"/>
         <xs:enumeration value="natural-up"/>
         <xs:enumeration value="flat-down"/>
         <xs:enumeration value="flat-up"/>
         <xs:enumeration value="triple-sharp"/>
         <xs:enumeration value="triple-flat"/>
         <xs:enumeration value="slash-quarter-sharp"/>
         <xs:enumeration value="slash-sharp"/>
         <xs:enumeration value="slash-flat"/>
         <xs:enumeration value="double-slash-flat"/>
         <xs:enumeration value="sharp-1"/>
         <xs:enumeration value="sharp-2"/>
         <xs:enumeration value="sharp-3"/>
         <xs:enumeration value="sharp-5"/>
         <xs:enumeration value="flat-1"/>
         <xs:enumeration value="flat-2"/>
         <xs:enumeration value="flat-3"/>
         <xs:enumeration value="flat-4"/>
         <xs:enumeration value="sori"/>
         <xs:enumeration value="koron"/>
         </xs:restriction>
         </xs:simpleType>
         <xs:simpleType name="accidental-value">
         <xs:annotation>
         <xs:documentation>The accidental-value type represents notated accidentals supported by MusicXML. In the MusicXML 2.0 DTD this was a string with values that could be included. The XSD strengthens the data typing to an enumerated list. The quarter- and three-quarters- accidentals are Tartini-style quarter-tone accidentals. The -down and -up accidentals are quarter-tone accidentals that include arrows pointing down or up. The slash- accidentals are used in Turkish classical music. The numbered sharp and flat accidentals are superscripted versions of the accidental signs, used in Turkish folk music. The sori and koron accidentals are microtonal sharp and flat accidentals used in Iranian and Persian music.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:string">
         <xs:enumeration value="sharp"/>
         <xs:enumeration value="natural"/>
         <xs:enumeration value="flat"/>
         <xs:enumeration value="double-sharp"/>
         <xs:enumeration value="sharp-sharp"/>
         <xs:enumeration value="flat-flat"/>
         <xs:enumeration value="natural-sharp"/>
         <xs:enumeration value="natural-flat"/>
         <xs:enumeration value="quarter-flat"/>
         <xs:enumeration value="quarter-sharp"/>
         <xs:enumeration value="three-quarters-flat"/>
         <xs:enumeration value="three-quarters-sharp"/>
         <xs:enumeration value="sharp-down"/>
         <xs:enumeration value="sharp-up"/>
         <xs:enumeration value="natural-down"/>
         <xs:enumeration value="natural-up"/>
         <xs:enumeration value="flat-down"/>
         <xs:enumeration value="flat-up"/>
         <xs:enumeration value="triple-sharp"/>
         <xs:enumeration value="triple-flat"/>
         <xs:enumeration value="slash-quarter-sharp"/>
         <xs:enumeration value="slash-sharp"/>
         <xs:enumeration value="slash-flat"/>
         <xs:enumeration value="double-slash-flat"/>
         <xs:enumeration value="sharp-1"/>
         <xs:enumeration value="sharp-2"/>
         <xs:enumeration value="sharp-3"/>
         <xs:enumeration value="sharp-5"/>
         <xs:enumeration value="flat-1"/>
         <xs:enumeration value="flat-2"/>
         <xs:enumeration value="flat-3"/>
         <xs:enumeration value="flat-4"/>
         <xs:enumeration value="sori"/>
         <xs:enumeration value="koron"/>
         </xs:restriction>
         </xs:simpleType>
         */
		class KeyAccidental;
		using KeyAccidentalPtr = std::shared_ptr<KeyAccidental>;
		using KeyAccidentalUPtr = std::unique_ptr<KeyAccidental>;
		using KeyAccidentalSet = std::vector<KeyAccidentalPtr>;
		using KeyAccidentalSetIter = KeyAccidentalSet::iterator;
		using KeyAccidentalSetIterConst = KeyAccidentalSet::const_iterator;
		inline KeyAccidentalPtr makeKeyAccidental() { return std::make_shared<KeyAccidental>(); }
        class KeyAccidental : public ElementInterface
        {
        public:
            KeyAccidental();
            KeyAccidental( const types::AccidentalValue& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            types::AccidentalValue getValue() const;
            void setValue( const types::AccidentalValue& value );
        private:
            types::AccidentalValue myValue;
        };
        
        
        /**************** SlashType ****************
         6125
         <xs:element name="slash-type" type="note-type-value">  <xs:annotation>     <xs:documentation>The slash-type element indicates the graphical note type to use for the display of repetition marks.</xs:documentation>   </xs:annotation></xs:element>
         <xs:simpleType name="note-type-value">
         <xs:annotation>
         <xs:documentation>The note-type type is used for the MusicXML type element and represents the graphic note type, from 1024th (shortest) to maxima (longest).</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:string">
         <xs:enumeration value="1024th"/>
         <xs:enumeration value="512th"/>
         <xs:enumeration value="256th"/>
         <xs:enumeration value="128th"/>
         <xs:enumeration value="64th"/>
         <xs:enumeration value="32nd"/>
         <xs:enumeration value="16th"/>
         <xs:enumeration value="eighth"/>
         <xs:enumeration value="quarter"/>
         <xs:enumeration value="half"/>
         <xs:enumeration value="whole"/>
         <xs:enumeration value="breve"/>
         <xs:enumeration value="long"/>
         <xs:enumeration value="maxima"/>
         </xs:restriction>
         </xs:simpleType>
         <xs:simpleType name="note-type-value">
         <xs:annotation>
         <xs:documentation>The note-type type is used for the MusicXML type element and represents the graphic note type, from 1024th (shortest) to maxima (longest).</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:string">
         <xs:enumeration value="1024th"/>
         <xs:enumeration value="512th"/>
         <xs:enumeration value="256th"/>
         <xs:enumeration value="128th"/>
         <xs:enumeration value="64th"/>
         <xs:enumeration value="32nd"/>
         <xs:enumeration value="16th"/>
         <xs:enumeration value="eighth"/>
         <xs:enumeration value="quarter"/>
         <xs:enumeration value="half"/>
         <xs:enumeration value="whole"/>
         <xs:enumeration value="breve"/>
         <xs:enumeration value="long"/>
         <xs:enumeration value="maxima"/>
         </xs:restriction>
         </xs:simpleType>
         */
		class SlashType;
		using SlashTypePtr = std::shared_ptr<SlashType>;
		using SlashTypeUPtr = std::unique_ptr<SlashType>;
		using SlashTypeSet = std::vector<SlashTypePtr>;
		using SlashTypeSetIter = SlashTypeSet::iterator;
		using SlashTypeSetIterConst = SlashTypeSet::const_iterator;
		inline SlashTypePtr makeSlashType() { return std::make_shared<SlashType>(); }
        class SlashType : public ElementInterface
        {
        public:
            SlashType();
            SlashType( const types::NoteTypeValue& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            types::NoteTypeValue getValue() const;
            void setValue( const types::NoteTypeValue& value );
        private:
            types::NoteTypeValue myValue;
        };
        
        
        /**************** Beats ****************
         6142
         <xs:element name="beats" type="xs:string"> <xs:annotation>     <xs:documentation>The beats element indicates the number of beats as found in the numerator of a time signature.</xs:documentation> </xs:annotation></xs:element>
         <xs:simpleType name="xs:string"/>
         <xs:simpleType name="xs:string"/>
         */
		class Beats;
		using BeatsPtr = std::shared_ptr<Beats>;
		using BeatsUPtr = std::unique_ptr<Beats>;
		using BeatsSet = std::vector<BeatsPtr>;
		using BeatsSetIter = BeatsSet::iterator;
		using BeatsSetIterConst = BeatsSet::const_iterator;
		inline BeatsPtr makeBeats() { return std::make_shared<Beats>(); }
        class Beats : public ElementInterface
        {
        public:
            Beats();
            Beats( const types::XsString& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            types::XsString getValue() const;
            void setValue( const types::XsString& value );
        private:
            types::XsString myValue;
        };
        
        
        /**************** BeatType ****************
         6147
         <xs:element name="beat-type" type="xs:string"> <xs:annotation>     <xs:documentation>The beat-type element indicates the beat unit as found in the denominator of a time signature.</xs:documentation> </xs:annotation></xs:element>
         <xs:simpleType name="xs:string"/>
         <xs:simpleType name="xs:string"/>
         */
		class BeatType;
		using BeatTypePtr = std::shared_ptr<BeatType>;
		using BeatTypeUPtr = std::unique_ptr<BeatType>;
		using BeatTypeSet = std::vector<BeatTypePtr>;
		using BeatTypeSetIter = BeatTypeSet::iterator;
		using BeatTypeSetIterConst = BeatTypeSet::const_iterator;
		inline BeatTypePtr makeBeatType() { return std::make_shared<BeatType>(); }
        class BeatType : public ElementInterface
        {
        public:
            BeatType();
            BeatType( const types::XsString& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            types::XsString getValue() const;
            void setValue( const types::XsString& value );
        private:
            types::XsString myValue;
        };
        
        
        /**************** Fifths ****************
         6161
         <xs:element name="fifths" type="fifths"/>
         <xs:simpleType name="fifths">
         <xs:annotation>
         <xs:documentation>The fifths type represents the number of flats or sharps in a traditional key signature. Negative numbers are used for flats and positive numbers for sharps, reflecting the key's placement within the circle of fifths (hence the type name).</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:integer"/>
         </xs:simpleType>
         <xs:simpleType name="fifths">
         <xs:annotation>
         <xs:documentation>The fifths type represents the number of flats or sharps in a traditional key signature. Negative numbers are used for flats and positive numbers for sharps, reflecting the key's placement within the circle of fifths (hence the type name).</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:integer"/>
         </xs:simpleType>
         */
		class Fifths;
		using FifthsPtr = std::shared_ptr<Fifths>;
		using FifthsUPtr = std::unique_ptr<Fifths>;
		using FifthsSet = std::vector<FifthsPtr>;
		using FifthsSetIter = FifthsSet::iterator;
		using FifthsSetIterConst = FifthsSet::const_iterator;
		inline FifthsPtr makeFifths() { return std::make_shared<Fifths>(); }
        class Fifths : public ElementInterface
        {
        public:
            Fifths();
            Fifths( const types::FifthsValue& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            types::FifthsValue getValue() const;
            void setValue( const types::FifthsValue& value );
        private:
            types::FifthsValue myValue;
        };
        
        
        /**************** Mode ****************
         6164
         <xs:element name="mode" type="mode" minOccurs="0"/>
         <xs:simpleType name="mode">
         <xs:annotation>
         <xs:documentation>The mode type is used to specify major/minor and other mode distinctions. Valid mode values include major, minor, dorian, phrygian, lydian, mixolydian, aeolian, ionian, locrian, and none.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:string"/>
         </xs:simpleType>
         <xs:simpleType name="mode">
         <xs:annotation>
         <xs:documentation>The mode type is used to specify major/minor and other mode distinctions. Valid mode values include major, minor, dorian, phrygian, lydian, mixolydian, aeolian, ionian, locrian, and none.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:string"/>
         </xs:simpleType>
         */
		class Mode;
		using ModePtr = std::shared_ptr<Mode>;
		using ModeUPtr = std::unique_ptr<Mode>;
		using ModeSet = std::vector<ModePtr>;
		using ModeSetIter = ModeSet::iterator;
		using ModeSetIterConst = ModeSet::const_iterator;
		inline ModePtr makeMode() { return std::make_shared<Mode>(); }
        class Mode : public ElementInterface
        {
        public:
            Mode();
            Mode( const types::ModeValue& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            types::ModeValue getValue() const;
            void setValue( const types::ModeValue& value );
        private:
            types::ModeValue myValue;
        };
        
        
        /**************** BeatUnit ****************
         6173
         <xs:element name="beat-unit" type="note-type-value">   <xs:annotation>     <xs:documentation>The beat-unit element indicates the graphical note type to use in a metronome mark.</xs:documentation>    </xs:annotation></xs:element>
         <xs:simpleType name="note-type-value">
         <xs:annotation>
         <xs:documentation>The note-type type is used for the MusicXML type element and represents the graphic note type, from 1024th (shortest) to maxima (longest).</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:string">
         <xs:enumeration value="1024th"/>
         <xs:enumeration value="512th"/>
         <xs:enumeration value="256th"/>
         <xs:enumeration value="128th"/>
         <xs:enumeration value="64th"/>
         <xs:enumeration value="32nd"/>
         <xs:enumeration value="16th"/>
         <xs:enumeration value="eighth"/>
         <xs:enumeration value="quarter"/>
         <xs:enumeration value="half"/>
         <xs:enumeration value="whole"/>
         <xs:enumeration value="breve"/>
         <xs:enumeration value="long"/>
         <xs:enumeration value="maxima"/>
         </xs:restriction>
         </xs:simpleType>
         <xs:simpleType name="note-type-value">
         <xs:annotation>
         <xs:documentation>The note-type type is used for the MusicXML type element and represents the graphic note type, from 1024th (shortest) to maxima (longest).</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:string">
         <xs:enumeration value="1024th"/>
         <xs:enumeration value="512th"/>
         <xs:enumeration value="256th"/>
         <xs:enumeration value="128th"/>
         <xs:enumeration value="64th"/>
         <xs:enumeration value="32nd"/>
         <xs:enumeration value="16th"/>
         <xs:enumeration value="eighth"/>
         <xs:enumeration value="quarter"/>
         <xs:enumeration value="half"/>
         <xs:enumeration value="whole"/>
         <xs:enumeration value="breve"/>
         <xs:enumeration value="long"/>
         <xs:enumeration value="maxima"/>
         </xs:restriction>
         </xs:simpleType>
         */
		class BeatUnit;
		using BeatUnitPtr = std::shared_ptr<BeatUnit>;
		using BeatUnitUPtr = std::unique_ptr<BeatUnit>;
		using BeatUnitSet = std::vector<BeatUnitPtr>;
		using BeatUnitSetIter = BeatUnitSet::iterator;
		using BeatUnitSetIterConst = BeatUnitSet::const_iterator;
		inline BeatUnitPtr makeBeatUnit() { return std::make_shared<BeatUnit>(); }
        class BeatUnit : public ElementInterface
        {
        public:
            BeatUnit();
            BeatUnit( const types::NoteTypeValue& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            types::NoteTypeValue getValue() const;
            void setValue( const types::NoteTypeValue& value );
        private:
            types::NoteTypeValue myValue;
        };
        
        
        /**************** TopMargin ****************
         6222
         <xs:element name="top-margin" type="tenths"/>
         <xs:simpleType name="tenths">
         <xs:annotation>
         <xs:documentation>The tenths type is a number representing tenths of interline staff space (positive or negative). Both integer and decimal values are allowed, such as 5 for a half space and 2.5 for a quarter space. Interline space is measured from the middle of a staff line.
         
         Distances in a MusicXML file are measured in tenths of staff space. TenthsValue are then scaled to millimeters within the scaling element, used in the defaults element at the start of a score. Individual staves can apply a scaling factor to adjust staff size. When a MusicXML element or attribute refers to tenths, it means the global tenths defined by the scaling element, not the local tenths as adjusted by the staff-size element.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:decimal"/>
         </xs:simpleType>
         <xs:simpleType name="tenths">
         <xs:annotation>
         <xs:documentation>The tenths type is a number representing tenths of interline staff space (positive or negative). Both integer and decimal values are allowed, such as 5 for a half space and 2.5 for a quarter space. Interline space is measured from the middle of a staff line.
         
         Distances in a MusicXML file are measured in tenths of staff space. TenthsValue are then scaled to millimeters within the scaling element, used in the defaults element at the start of a score. Individual staves can apply a scaling factor to adjust staff size. When a MusicXML element or attribute refers to tenths, it means the global tenths defined by the scaling element, not the local tenths as adjusted by the staff-size element.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:decimal"/>
         </xs:simpleType>
         */
		class TopMargin;
		using TopMarginPtr = std::shared_ptr<TopMargin>;
		using TopMarginUPtr = std::unique_ptr<TopMargin>;
		using TopMarginSet = std::vector<TopMarginPtr>;
		using TopMarginSetIter = TopMarginSet::iterator;
		using TopMarginSetIterConst = TopMarginSet::const_iterator;
		inline TopMarginPtr makeTopMargin() { return std::make_shared<TopMargin>(); }
        class TopMargin : public ElementInterface
        {
        public:
            TopMargin();
            TopMargin( const types::TenthsValue& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            types::TenthsValue getValue() const;
            void setValue( const types::TenthsValue& value );
        private:
            types::TenthsValue myValue;
        };
        
        
        /**************** BottomMargin ****************
         6225
         <xs:element name="bottom-margin" type="tenths"/>
         <xs:simpleType name="tenths">
         <xs:annotation>
         <xs:documentation>The tenths type is a number representing tenths of interline staff space (positive or negative). Both integer and decimal values are allowed, such as 5 for a half space and 2.5 for a quarter space. Interline space is measured from the middle of a staff line.
         
         Distances in a MusicXML file are measured in tenths of staff space. TenthsValue are then scaled to millimeters within the scaling element, used in the defaults element at the start of a score. Individual staves can apply a scaling factor to adjust staff size. When a MusicXML element or attribute refers to tenths, it means the global tenths defined by the scaling element, not the local tenths as adjusted by the staff-size element.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:decimal"/>
         </xs:simpleType>
         <xs:simpleType name="tenths">
         <xs:annotation>
         <xs:documentation>The tenths type is a number representing tenths of interline staff space (positive or negative). Both integer and decimal values are allowed, such as 5 for a half space and 2.5 for a quarter space. Interline space is measured from the middle of a staff line.
         
         Distances in a MusicXML file are measured in tenths of staff space. TenthsValue are then scaled to millimeters within the scaling element, used in the defaults element at the start of a score. Individual staves can apply a scaling factor to adjust staff size. When a MusicXML element or attribute refers to tenths, it means the global tenths defined by the scaling element, not the local tenths as adjusted by the staff-size element.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:decimal"/>
         </xs:simpleType>
         */
		class BottomMargin;
		using BottomMarginPtr = std::shared_ptr<BottomMargin>;
		using BottomMarginUPtr = std::unique_ptr<BottomMargin>;
		using BottomMarginSet = std::vector<BottomMarginPtr>;
		using BottomMarginSetIter = BottomMarginSet::iterator;
		using BottomMarginSetIterConst = BottomMarginSet::const_iterator;
		inline BottomMarginPtr makeBottomMargin() { return std::make_shared<BottomMargin>(); }
        class BottomMargin : public ElementInterface
        {
        public:
            BottomMargin();
            BottomMargin( const types::TenthsValue& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            types::TenthsValue getValue() const;
            void setValue( const types::TenthsValue& value );
        private:
            types::TenthsValue myValue;
        };
        
        
        /**************** LeftMargin ****************
         6251
         <xs:element name="left-margin" type="tenths"/>
         <xs:simpleType name="tenths">
         <xs:annotation>
         <xs:documentation>The tenths type is a number representing tenths of interline staff space (positive or negative). Both integer and decimal values are allowed, such as 5 for a half space and 2.5 for a quarter space. Interline space is measured from the middle of a staff line.
         
         Distances in a MusicXML file are measured in tenths of staff space. TenthsValue are then scaled to millimeters within the scaling element, used in the defaults element at the start of a score. Individual staves can apply a scaling factor to adjust staff size. When a MusicXML element or attribute refers to tenths, it means the global tenths defined by the scaling element, not the local tenths as adjusted by the staff-size element.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:decimal"/>
         </xs:simpleType>
         <xs:simpleType name="tenths">
         <xs:annotation>
         <xs:documentation>The tenths type is a number representing tenths of interline staff space (positive or negative). Both integer and decimal values are allowed, such as 5 for a half space and 2.5 for a quarter space. Interline space is measured from the middle of a staff line.
         
         Distances in a MusicXML file are measured in tenths of staff space. TenthsValue are then scaled to millimeters within the scaling element, used in the defaults element at the start of a score. Individual staves can apply a scaling factor to adjust staff size. When a MusicXML element or attribute refers to tenths, it means the global tenths defined by the scaling element, not the local tenths as adjusted by the staff-size element.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:decimal"/>
         </xs:simpleType>
         */
		class LeftMargin;
		using LeftMarginPtr = std::shared_ptr<LeftMargin>;
		using LeftMarginUPtr = std::unique_ptr<LeftMargin>;
		using LeftMarginSet = std::vector<LeftMarginPtr>;
		using LeftMarginSetIter = LeftMarginSet::iterator;
		using LeftMarginSetIterConst = LeftMarginSet::const_iterator;
		inline LeftMarginPtr makeLeftMargin() { return std::make_shared<LeftMargin>(); }
        class LeftMargin : public ElementInterface
        {
        public:
            LeftMargin();
            LeftMargin( const types::TenthsValue& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            types::TenthsValue getValue() const;
            void setValue( const types::TenthsValue& value );
        private:
            types::TenthsValue myValue;
        };
        
        
        /**************** RightMargin ****************
         6254
         <xs:element name="right-margin" type="tenths"/>
         <xs:simpleType name="tenths">
         <xs:annotation>
         <xs:documentation>The tenths type is a number representing tenths of interline staff space (positive or negative). Both integer and decimal values are allowed, such as 5 for a half space and 2.5 for a quarter space. Interline space is measured from the middle of a staff line.
         
         Distances in a MusicXML file are measured in tenths of staff space. TenthsValue are then scaled to millimeters within the scaling element, used in the defaults element at the start of a score. Individual staves can apply a scaling factor to adjust staff size. When a MusicXML element or attribute refers to tenths, it means the global tenths defined by the scaling element, not the local tenths as adjusted by the staff-size element.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:decimal"/>
         </xs:simpleType>
         <xs:simpleType name="tenths">
         <xs:annotation>
         <xs:documentation>The tenths type is a number representing tenths of interline staff space (positive or negative). Both integer and decimal values are allowed, such as 5 for a half space and 2.5 for a quarter space. Interline space is measured from the middle of a staff line.
         
         Distances in a MusicXML file are measured in tenths of staff space. TenthsValue are then scaled to millimeters within the scaling element, used in the defaults element at the start of a score. Individual staves can apply a scaling factor to adjust staff size. When a MusicXML element or attribute refers to tenths, it means the global tenths defined by the scaling element, not the local tenths as adjusted by the staff-size element.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:decimal"/>
         </xs:simpleType>
         */
		class RightMargin;
		using RightMarginPtr = std::shared_ptr<RightMargin>;
		using RightMarginUPtr = std::unique_ptr<RightMargin>;
		using RightMarginSet = std::vector<RightMarginPtr>;
		using RightMarginSetIter = RightMarginSet::iterator;
		using RightMarginSetIterConst = RightMarginSet::const_iterator;
		inline RightMarginPtr makeRightMargin() { return std::make_shared<RightMargin>(); }
        class RightMargin : public ElementInterface
        {
        public:
            RightMargin();
            RightMargin( const types::TenthsValue& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            types::TenthsValue getValue() const;
            void setValue( const types::TenthsValue& value );
        private:
            types::TenthsValue myValue;
        };
        
        
        /**************** Duration ****************
         6262
         <xs:element name="duration" type="positive-divisions"> <xs:annotation>     <xs:documentation>Duration is a positive number specified in division units. This is the intended duration vs. notated duration (for instance swing eighths vs. even eighths or differences in dotted notes in Baroque-era music). Differences in duration specific to an interpretation or performance should use the note element's attack and release attributes.</xs:documentation> </xs:annotation></xs:element>
         <xs:simpleType name="positive-divisions">
         <xs:annotation>
         <xs:documentation>The positive-divisions type restricts divisions values to positive numbers.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="divisions">
         <xs:minExclusive value="0"/>
         </xs:restriction>
         </xs:simpleType>
         <xs:simpleType name="positive-divisions">
         <xs:annotation>
         <xs:documentation>The positive-divisions type restricts divisions values to positive numbers.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="divisions">
         <xs:minExclusive value="0"/>
         </xs:restriction>
         </xs:simpleType>
         */
		class Duration;
		using DurationPtr = std::shared_ptr<Duration>;
		using DurationUPtr = std::unique_ptr<Duration>;
		using DurationSet = std::vector<DurationPtr>;
		using DurationSetIter = DurationSet::iterator;
		using DurationSetIterConst = DurationSet::const_iterator;
		inline DurationPtr makeDuration() { return std::make_shared<Duration>(); }
        class Duration : public ElementInterface
        {
        public:
            Duration();
            Duration( const types::PositiveDivisionsValue& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            types::PositiveDivisionsValue getValue() const;
            void setValue( const types::PositiveDivisionsValue& value );
        private:
            types::PositiveDivisionsValue myValue;
        };
        
        
        /**************** DisplayStep ****************
         6272
         <xs:element name="display-step" type="step"/>
         <xs:simpleType name="step">
         <xs:annotation>
         <xs:documentation>The step type represents a step of the diatonic scale, represented using the English letters A through G.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:string">
         <xs:enumeration value="A"/>
         <xs:enumeration value="B"/>
         <xs:enumeration value="C"/>
         <xs:enumeration value="D"/>
         <xs:enumeration value="E"/>
         <xs:enumeration value="F"/>
         <xs:enumeration value="G"/>
         </xs:restriction>
         </xs:simpleType>
         <xs:simpleType name="step">
         <xs:annotation>
         <xs:documentation>The step type represents a step of the diatonic scale, represented using the English letters A through G.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:string">
         <xs:enumeration value="A"/>
         <xs:enumeration value="B"/>
         <xs:enumeration value="C"/>
         <xs:enumeration value="D"/>
         <xs:enumeration value="E"/>
         <xs:enumeration value="F"/>
         <xs:enumeration value="G"/>
         </xs:restriction>
         </xs:simpleType>
         */
		class DisplayStep;
		using DisplayStepPtr = std::shared_ptr<DisplayStep>;
		using DisplayStepUPtr = std::unique_ptr<DisplayStep>;
		using DisplayStepSet = std::vector<DisplayStepPtr>;
		using DisplayStepSetIter = DisplayStepSet::iterator;
		using DisplayStepSetIterConst = DisplayStepSet::const_iterator;
		inline DisplayStepPtr makeDisplayStep() { return std::make_shared<DisplayStep>(); }
        class DisplayStep : public ElementInterface
        {
        public:
            DisplayStep();
            DisplayStep( const types::StepEnum& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            types::StepEnum getValue() const;
            void setValue( const types::StepEnum& value );
        private:
            types::StepEnum myValue;
        };
        
        
        /**************** DisplayOctave ****************
         6275
         <xs:element name="display-octave" type="octave"/>
         <xs:simpleType name="octave">
         <xs:annotation>
         <xs:documentation>Octaves are represented by the numbers 0 to 9, where 4 indicates the octave started by middle C.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:integer">
         <xs:minInclusive value="0"/>
         <xs:maxInclusive value="9"/>
         </xs:restriction>
         </xs:simpleType>
         <xs:simpleType name="octave">
         <xs:annotation>
         <xs:documentation>Octaves are represented by the numbers 0 to 9, where 4 indicates the octave started by middle C.</xs:documentation>
         </xs:annotation>
         <xs:restriction base="xs:integer">
         <xs:minInclusive value="0"/>
         <xs:maxInclusive value="9"/>
         </xs:restriction>
         </xs:simpleType>
         */
		class DisplayOctave;
		using DisplayOctavePtr = std::shared_ptr<DisplayOctave>;
		using DisplayOctaveUPtr = std::unique_ptr<DisplayOctave>;
		using DisplayOctaveSet = std::vector<DisplayOctavePtr>;
		using DisplayOctaveSetIter = DisplayOctaveSet::iterator;
		using DisplayOctaveSetIterConst = DisplayOctaveSet::const_iterator;
		inline DisplayOctavePtr makeDisplayOctave() { return std::make_shared<DisplayOctave>(); }
        class DisplayOctave : public ElementInterface
        {
        public:
            DisplayOctave();
            DisplayOctave( const types::OctaveValue& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            types::OctaveValue getValue() const;
            void setValue( const types::OctaveValue& value );
        private:
            types::OctaveValue myValue;
        };
        
        
        /**************** MovementNumber ****************
         6363
         <xs:element name="movement-number" type="xs:string" minOccurs="0"> <xs:annotation>     <xs:documentation>The movement-number element specifies the number of a movement.</xs:documentation>    </xs:annotation></xs:element>
         <xs:simpleType name="xs:string"/>
         <xs:simpleType name="xs:string"/>
         */
		class MovementNumber;
		using MovementNumberPtr = std::shared_ptr<MovementNumber>;
		using MovementNumberUPtr = std::unique_ptr<MovementNumber>;
		using MovementNumberSet = std::vector<MovementNumberPtr>;
		using MovementNumberSetIter = MovementNumberSet::iterator;
		using MovementNumberSetIterConst = MovementNumberSet::const_iterator;
		inline MovementNumberPtr makeMovementNumber() { return std::make_shared<MovementNumber>(); }
        class MovementNumber : public ElementInterface
        {
        public:
            MovementNumber();
            MovementNumber( const types::XsString& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            types::XsString getValue() const;
            void setValue( const types::XsString& value );
        private:
            types::XsString myValue;
        };
        
        
        /**************** MovementTitle ****************
         6369
         <xs:element name="movement-title" type="xs:string" minOccurs="0">  <xs:annotation>     <xs:documentation>The movement-title element specifies the title of a movement not including its number.</xs:documentation> </xs:annotation></xs:element>
         <xs:simpleType name="xs:string"/>
         <xs:simpleType name="xs:string"/>
         */
		class MovementTitle;
		using MovementTitlePtr = std::shared_ptr<MovementTitle>;
		using MovementTitleUPtr = std::unique_ptr<MovementTitle>;
		using MovementTitleSet = std::vector<MovementTitlePtr>;
		using MovementTitleSetIter = MovementTitleSet::iterator;
		using MovementTitleSetIterConst = MovementTitleSet::const_iterator;
		inline MovementTitlePtr makeMovementTitle() { return std::make_shared<MovementTitle>(); }
        class MovementTitle : public ElementInterface
        {
        public:
            MovementTitle();
            MovementTitle( const types::XsString& value );
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            types::XsString getValue() const;
            void setValue( const types::XsString& value );
        private:
            types::XsString myValue;
        };
        
        
        
        
        /***************************************************************
         Empty Elements
         ***************************************************************/
        
        /*
         2997
         <xs:element name="double" type="empty" minOccurs="0">
         <xs:annotation>
         <xs:documentation>If the double element is present, it indicates that the music is doubled one octave down from what is currently written (as is the case for mixed cello / bass parts in orchestral literature).</xs:documentation>
         </xs:annotation>
         </xs:element> */
		class Double;
		using DoublePtr = std::shared_ptr<Double>;
		using DoubleUPtr = std::unique_ptr<Double>;
		using DoubleSet = std::vector<DoublePtr>;
		using DoubleSetIter = DoubleSet::iterator;
		using DoubleSetIterConst = DoubleSet::const_iterator;
		inline DoublePtr makeDouble() { return std::make_shared<Double>(); }
        class Double : public ElementInterface
        {
        public:
            Double();
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
        };
        
        /*
         3120
         <xs:element name="accordion-high" type="empty" minOccurs="0">
         <xs:annotation>
         <xs:documentation>The accordion-high element indicates the presence of a dot in the high (4') section of the registration symbol.</xs:documentation>
         </xs:annotation>
         </xs:element> */
		class AccordionHigh;
		using AccordionHighPtr = std::shared_ptr<AccordionHigh>;
		using AccordionHighUPtr = std::unique_ptr<AccordionHigh>;
		using AccordionHighSet = std::vector<AccordionHighPtr>;
		using AccordionHighSetIter = AccordionHighSet::iterator;
		using AccordionHighSetIterConst = AccordionHighSet::const_iterator;
		inline AccordionHighPtr makeAccordionHigh() { return std::make_shared<AccordionHigh>(); }
        class AccordionHigh : public ElementInterface
        {
        public:
            AccordionHigh();
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
        };
        
        /*
         3132
         <xs:element name="accordion-low" type="empty" minOccurs="0">
         <xs:annotation>
         <xs:documentation>The accordion-low element indicates the presence of a dot in the low (16') section of the registration symbol.</xs:documentation>
         </xs:annotation>
         </xs:element> */
		class AccordionLow;
		using AccordionLowPtr = std::shared_ptr<AccordionLow>;
		using AccordionLowUPtr = std::unique_ptr<AccordionLow>;
		using AccordionLowSet = std::vector<AccordionLowPtr>;
		using AccordionLowSetIter = AccordionLowSet::iterator;
		using AccordionLowSetIterConst = AccordionLowSet::const_iterator;
		inline AccordionLowPtr makeAccordionLow() { return std::make_shared<AccordionLow>(); }
        class AccordionLow : public ElementInterface
        {
        public:
            AccordionLow();
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
        };
        
        /*
         3670
         <xs:element name="metronome-dot" type="empty" minOccurs="0" maxOccurs="unbounded">
         <xs:annotation>
         <xs:documentation>The metronome-dot element works like the dot element in defining metric relationships.</xs:documentation>
         </xs:annotation>
         </xs:element> */
		class MetronomeDot;
		using MetronomeDotPtr = std::shared_ptr<MetronomeDot>;
		using MetronomeDotUPtr = std::unique_ptr<MetronomeDot>;
		using MetronomeDotSet = std::vector<MetronomeDotPtr>;
		using MetronomeDotSetIter = MetronomeDotSet::iterator;
		using MetronomeDotSetIterConst = MetronomeDotSet::const_iterator;
		inline MetronomeDotPtr makeMetronomeDot() { return std::make_shared<MetronomeDot>(); }
        class MetronomeDot : public ElementInterface
        {
        public:
            MetronomeDot();
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
        };
        
        /*
         3806
         <xs:element name="timpani" type="empty"/>
         
         */
		class Timpani;
		using TimpaniPtr = std::shared_ptr<Timpani>;
		using TimpaniUPtr = std::unique_ptr<Timpani>;
		using TimpaniSet = std::vector<TimpaniPtr>;
		using TimpaniSetIter = TimpaniSet::iterator;
		using TimpaniSetIterConst = TimpaniSet::const_iterator;
		inline TimpaniPtr makeTimpani() { return std::make_shared<Timpani>(); }
        class Timpani : public ElementInterface
        {
        public:
            Timpani();
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
        };
        
        /*
         4522
         <xs:element name="pre-bend" type="empty">
         <xs:annotation>
         <xs:documentation>The pre-bend element indicates that this is a pre-bend rather than a normal bend or a release.</xs:documentation>
         </xs:annotation>
         </xs:element> */
		class PreBend;
		using PreBendPtr = std::shared_ptr<PreBend>;
		using PreBendUPtr = std::unique_ptr<PreBend>;
		using PreBendSet = std::vector<PreBendPtr>;
		using PreBendSetIter = PreBendSet::iterator;
		using PreBendSetIterConst = PreBendSet::const_iterator;
		inline PreBendPtr makePreBend() { return std::make_shared<PreBend>(); }
        class PreBend : public ElementInterface
        {
        public:
            PreBend();
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
        };
        
        /*
         4527
         <xs:element name="release" type="empty">
         <xs:annotation>
         <xs:documentation>The release element indicates that this is a release rather than a normal bend or pre-bend.</xs:documentation>
         </xs:annotation>
         </xs:element> */
		class Release;
		using ReleasePtr = std::shared_ptr<Release>;
		using ReleaseUPtr = std::unique_ptr<Release>;
		using ReleaseSet = std::vector<ReleasePtr>;
		using ReleaseSetIter = ReleaseSet::iterator;
		using ReleaseSetIterConst = ReleaseSet::const_iterator;
		inline ReleasePtr makeRelease() { return std::make_shared<Release>(); }
        class Release : public ElementInterface
        {
        public:
            Release();
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
        };
        
        /*
         4710
         <xs:element name="natural" type="empty">
         <xs:annotation>
         <xs:documentation>The natural element indicates that this is a natural harmonic. These are usually notated at base pitch rather than sounding pitch.</xs:documentation>
         </xs:annotation>
         </xs:element> */
		class Natural;
		using NaturalPtr = std::shared_ptr<Natural>;
		using NaturalUPtr = std::unique_ptr<Natural>;
		using NaturalSet = std::vector<NaturalPtr>;
		using NaturalSetIter = NaturalSet::iterator;
		using NaturalSetIterConst = NaturalSet::const_iterator;
		inline NaturalPtr makeNatural() { return std::make_shared<Natural>(); }
        class Natural : public ElementInterface
        {
        public:
            Natural();
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
        };
        
        /*
         4715
         <xs:element name="artificial" type="empty">
         <xs:annotation>
         <xs:documentation>The artificial element indicates that this is an artificial harmonic.</xs:documentation>
         </xs:annotation>
         </xs:element> */
		class Artificial;
		using ArtificialPtr = std::shared_ptr<Artificial>;
		using ArtificialUPtr = std::unique_ptr<Artificial>;
		using ArtificialSet = std::vector<ArtificialPtr>;
		using ArtificialSetIter = ArtificialSet::iterator;
		using ArtificialSetIterConst = ArtificialSet::const_iterator;
		inline ArtificialPtr makeArtificial() { return std::make_shared<Artificial>(); }
        class Artificial : public ElementInterface
        {
        public:
            Artificial();
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
        };
        
        /*
         4722
         <xs:element name="base-pitch" type="empty">
         <xs:annotation>
         <xs:documentation>The base pitch is the pitch at which the string is played before touching to create the harmonic.</xs:documentation>
         </xs:annotation>
         </xs:element> */
		class BasePitch;
		using BasePitchPtr = std::shared_ptr<BasePitch>;
		using BasePitchUPtr = std::unique_ptr<BasePitch>;
		using BasePitchSet = std::vector<BasePitchPtr>;
		using BasePitchSetIter = BasePitchSet::iterator;
		using BasePitchSetIterConst = BasePitchSet::const_iterator;
		inline BasePitchPtr makeBasePitch() { return std::make_shared<BasePitch>(); }
        class BasePitch : public ElementInterface
        {
        public:
            BasePitch();
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
        };
        
        /*
         4727
         <xs:element name="touching-pitch" type="empty">
         <xs:annotation>
         <xs:documentation>The touching-pitch is the pitch at which the string is touched lightly to produce the harmonic.</xs:documentation>
         </xs:annotation>
         </xs:element> */
		class TouchingPitch;
		using TouchingPitchPtr = std::shared_ptr<TouchingPitch>;
		using TouchingPitchUPtr = std::unique_ptr<TouchingPitch>;
		using TouchingPitchSet = std::vector<TouchingPitchPtr>;
		using TouchingPitchSetIter = TouchingPitchSet::iterator;
		using TouchingPitchSetIterConst = TouchingPitchSet::const_iterator;
		inline TouchingPitchPtr makeTouchingPitch() { return std::make_shared<TouchingPitch>(); }
        class TouchingPitch : public ElementInterface
        {
        public:
            TouchingPitch();
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
        };
        
        /*
         4732
         <xs:element name="sounding-pitch" type="empty">
         <xs:annotation>
         <xs:documentation>The sounding-pitch is the pitch which is heard when playing the harmonic.</xs:documentation>
         </xs:annotation>
         </xs:element> */
		class SoundingPitch;
		using SoundingPitchPtr = std::shared_ptr<SoundingPitch>;
		using SoundingPitchUPtr = std::unique_ptr<SoundingPitch>;
		using SoundingPitchSet = std::vector<SoundingPitchPtr>;
		using SoundingPitchSetIter = SoundingPitchSet::iterator;
		using SoundingPitchSetIterConst = SoundingPitchSet::const_iterator;
		inline SoundingPitchPtr makeSoundingPitch() { return std::make_shared<SoundingPitch>(); }
        class SoundingPitch : public ElementInterface
        {
        public:
            SoundingPitch();
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
        };
        
        /*
         4831
         <xs:element name="laughing" type="empty">
         <xs:annotation>
         <xs:documentation>The laughing element is taken from Humdrum.</xs:documentation>
         </xs:annotation>
         </xs:element> */
		class Laughing;
		using LaughingPtr = std::shared_ptr<Laughing>;
		using LaughingUPtr = std::unique_ptr<Laughing>;
		using LaughingSet = std::vector<LaughingPtr>;
		using LaughingSetIter = LaughingSet::iterator;
		using LaughingSetIterConst = LaughingSet::const_iterator;
		inline LaughingPtr makeLaughing() { return std::make_shared<Laughing>(); }
        class Laughing : public ElementInterface
        {
        public:
            Laughing();
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
        };
        
        /*
         4836
         <xs:element name="humming" type="empty">
         <xs:annotation>
         <xs:documentation>The humming element is taken from Humdrum.</xs:documentation>
         </xs:annotation>
         </xs:element> */
		class Humming;
		using HummingPtr = std::shared_ptr<Humming>;
		using HummingUPtr = std::unique_ptr<Humming>;
		using HummingSet = std::vector<HummingPtr>;
		using HummingSetIter = HummingSet::iterator;
		using HummingSetIterConst = HummingSet::const_iterator;
		inline HummingPtr makeHumming() { return std::make_shared<Humming>(); }
        class Humming : public ElementInterface
        {
        public:
            Humming();
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
        };
        
        /*
         4841
         <xs:element name="end-line" type="empty" minOccurs="0">
         <xs:annotation>
         <xs:documentation>The end-line element comes from RP-017 for Standard MIDI File Lyric meta-events. It facilitates lyric display for Karaoke and similar applications.</xs:documentation>
         </xs:annotation>
         </xs:element> */
		class EndLine;
		using EndLinePtr = std::shared_ptr<EndLine>;
		using EndLineUPtr = std::unique_ptr<EndLine>;
		using EndLineSet = std::vector<EndLinePtr>;
		using EndLineSetIter = EndLineSet::iterator;
		using EndLineSetIterConst = EndLineSet::const_iterator;
		inline EndLinePtr makeEndLine() { return std::make_shared<EndLine>(); }
        class EndLine : public ElementInterface
        {
        public:
            EndLine();
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
        };
        
        /*
         4847
         <xs:element name="end-paragraph" type="empty" minOccurs="0">
         <xs:annotation>
         <xs:documentation>The end-paragraph element comes from RP-017 for Standard MIDI File Lyric meta-events. It facilitates lyric display for Karaoke and similar applications.</xs:documentation>
         </xs:annotation>
         </xs:element> */
		class EndParagraph;
		using EndParagraphPtr = std::shared_ptr<EndParagraph>;
		using EndParagraphUPtr = std::unique_ptr<EndParagraph>;
		using EndParagraphSet = std::vector<EndParagraphPtr>;
		using EndParagraphSetIter = EndParagraphSet::iterator;
		using EndParagraphSetIterConst = EndParagraphSet::const_iterator;
		inline EndParagraphPtr makeEndParagraph() { return std::make_shared<EndParagraph>(); }
        class EndParagraph : public ElementInterface
        {
        public:
            EndParagraph();
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
        };
        
        /*
         4976
         <xs:element name="cue" type="empty">
         <xs:annotation>
         <xs:documentation>The cue element indicates the presence of a cue note.</xs:documentation>
         </xs:annotation>
         </xs:element> */
		class Cue;
		using CuePtr = std::shared_ptr<Cue>;
		using CueUPtr = std::unique_ptr<Cue>;
		using CueSet = std::vector<CuePtr>;
		using CueSetIter = CueSet::iterator;
		using CueSetIterConst = CueSet::const_iterator;
		inline CuePtr makeCue() { return std::make_shared<Cue>(); }
        class Cue : public ElementInterface
        {
        public:
            Cue();
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
        };
        
        /*
         5535
         <xs:element name="normal-dot" type="empty" minOccurs="0" maxOccurs="unbounded">
         <xs:annotation>
         <xs:documentation>The normal-dot element is used to specify dotted normal tuplet types.</xs:documentation>
         </xs:annotation>
         </xs:element> */
		class NormalDot;
		using NormalDotPtr = std::shared_ptr<NormalDot>;
		using NormalDotUPtr = std::unique_ptr<NormalDot>;
		using NormalDotSet = std::vector<NormalDotPtr>;
		using NormalDotSetIter = NormalDotSet::iterator;
		using NormalDotSetIterConst = NormalDotSet::const_iterator;
		inline NormalDotPtr makeNormalDot() { return std::make_shared<NormalDot>(); }
        class NormalDot : public ElementInterface
        {
        public:
            NormalDot();
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
        };
        
        /*
         5831
         <xs:element name="group-time" type="empty" minOccurs="0">
         <xs:annotation>
         <xs:documentation>The group-time element indicates that the displayed time signatures should stretch across all parts and staves in the group.</xs:documentation>
         </xs:annotation>
         </xs:element> */
		class GroupTime;
		using GroupTimePtr = std::shared_ptr<GroupTime>;
		using GroupTimeUPtr = std::unique_ptr<GroupTime>;
		using GroupTimeSet = std::vector<GroupTimePtr>;
		using GroupTimeSetIter = GroupTimeSet::iterator;
		using GroupTimeSetIterConst = GroupTimeSet::const_iterator;
		inline GroupTimePtr makeGroupTime() { return std::make_shared<GroupTime>(); }
        class GroupTime : public ElementInterface
        {
        public:
            GroupTime();
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
        };
        
        /*
         5898
         <xs:element name="solo" type="empty">
         <xs:annotation>
         <xs:documentation>The solo element was added in Version 2.0. It is present if performance is intended by a solo instrument.</xs:documentation>
         </xs:annotation>
         </xs:element> */
		class Solo;
		using SoloPtr = std::shared_ptr<Solo>;
		using SoloUPtr = std::unique_ptr<Solo>;
		using SoloSet = std::vector<SoloPtr>;
		using SoloSetIter = SoloSet::iterator;
		using SoloSetIterConst = SoloSet::const_iterator;
		inline SoloPtr makeSolo() { return std::make_shared<Solo>(); }
        class Solo : public ElementInterface
        {
        public:
            Solo();
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
        };
        
        /*
         6130
         <xs:element name="slash-dot" type="empty" minOccurs="0" maxOccurs="unbounded">
         <xs:annotation>
         <xs:documentation>The slash-dot element is used to specify any augmentation dots in the note type used to display repetition marks.</xs:documentation>
         </xs:annotation>
         </xs:element> */
		class SlashDot;
		using SlashDotPtr = std::shared_ptr<SlashDot>;
		using SlashDotUPtr = std::unique_ptr<SlashDot>;
		using SlashDotSet = std::vector<SlashDotPtr>;
		using SlashDotSetIter = SlashDotSet::iterator;
		using SlashDotSetIterConst = SlashDotSet::const_iterator;
		inline SlashDotPtr makeSlashDot() { return std::make_shared<SlashDot>(); }
        class SlashDot : public ElementInterface
        {
        public:
            SlashDot();
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
        };
        
        /*
         6178
         <xs:element name="beat-unit-dot" type="empty" minOccurs="0" maxOccurs="unbounded">
         <xs:annotation>
         <xs:documentation>The beat-unit-dot element is used to specify any augmentation dots for a metronome mark note.</xs:documentation>
         </xs:annotation>
         </xs:element> */
		class BeatUnitDot;
		using BeatUnitDotPtr = std::shared_ptr<BeatUnitDot>;
		using BeatUnitDotUPtr = std::unique_ptr<BeatUnitDot>;
		using BeatUnitDotSet = std::vector<BeatUnitDotPtr>;
		using BeatUnitDotSetIter = BeatUnitDotSet::iterator;
		using BeatUnitDotSetIterConst = BeatUnitDotSet::const_iterator;
		inline BeatUnitDotPtr makeBeatUnitDot() { return std::make_shared<BeatUnitDot>(); }
        class BeatUnitDot : public ElementInterface
        {
        public:
            BeatUnitDot();
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
        };
        
        /*
         6283
         <xs:element name="chord" type="empty" minOccurs="0">
         <xs:annotation>
         <xs:documentation>The chord element indicates that this note is an additional chord tone with the preceding note. The duration of this note can be no longer than the preceding note. In MuseData, a missing duration indicates the same length as the previous note, but the MusicXML format requires a duration for chord notes too.</xs:documentation>
         </xs:annotation>
         </xs:element> */
		class Chord;
		using ChordPtr = std::shared_ptr<Chord>;
		using ChordUPtr = std::unique_ptr<Chord>;
		using ChordSet = std::vector<ChordPtr>;
		using ChordSetIter = ChordSet::iterator;
		using ChordSetIterConst = ChordSet::const_iterator;
		inline ChordPtr makeChord() { return std::make_shared<Chord>(); }
        class Chord : public ElementInterface
        {
        public:
            Chord();
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
        };
        
        /***************************************************************
         Empty Elements with Attributes
         ***************************************************************/
        
        struct EmptyPrintObjectStyleAlignAttributes;
        using EmptyPrintObjectStyleAlignAttributesPtr = std::shared_ptr<EmptyPrintObjectStyleAlignAttributes>;
        
        struct EmptyPrintObjectStyleAlignAttributes : public AttributesInterface
        {
        public:
            EmptyPrintObjectStyleAlignAttributes();
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
            types::LeftCenterRight halign;
            bool hasDefaultX;
            bool hasDefaultY;
            bool hasRelativeX;
            bool hasRelativeY;
            bool hasFontFamily;
            bool hasFontStyle;
            bool hasFontSize;
            bool hasFontWeight;
            bool hasHalign;
        };
        
        /*
         3030
         <xs:element name="segno" type="empty-print-style-align" minOccurs="0"/>
         <xs:complexType name="empty-print-style-align">
         <xs:annotation>
         <xs:documentation>The empty-print-style-align type represents an empty element with print-style-align attribute group.</xs:documentation>
         </xs:annotation>
         <xs:attributeGroup ref="print-style-align"/>
         </xs:complexType>
         */
		class Segno;
		using SegnoPtr = std::shared_ptr<Segno>;
		using SegnoUPtr = std::unique_ptr<Segno>;
		using SegnoSet = std::vector<SegnoPtr>;
		using SegnoSetIter = SegnoSet::iterator;
		using SegnoSetIterConst = SegnoSet::const_iterator;
		inline SegnoPtr makeSegno() { return std::make_shared<Segno>(); }
        class Segno : public ElementInterface
        {
        public:
            Segno();
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            EmptyPrintObjectStyleAlignAttributesPtr getAttributes() const;
            void setAttributes( const EmptyPrintObjectStyleAlignAttributesPtr& attributes );
        private:
            EmptyPrintObjectStyleAlignAttributesPtr myAttributes;
        };
        
        /*
         3034
         <xs:element name="coda" type="empty-print-style-align" minOccurs="0"/>
         <xs:complexType name="empty-print-style-align">
         <xs:annotation>
         <xs:documentation>The empty-print-style-align type represents an empty element with print-style-align attribute group.</xs:documentation>
         </xs:annotation>
         <xs:attributeGroup ref="print-style-align"/>
         </xs:complexType>
         */
		class Coda;
		using CodaPtr = std::shared_ptr<Coda>;
		using CodaUPtr = std::unique_ptr<Coda>;
		using CodaSet = std::vector<CodaPtr>;
		using CodaSetIter = CodaSet::iterator;
		using CodaSetIterConst = CodaSet::const_iterator;
		inline CodaPtr makeCoda() { return std::make_shared<Coda>(); }
        class Coda : public ElementInterface
        {
        public:
            Coda();
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            EmptyPrintObjectStyleAlignAttributesPtr getAttributes() const;
            void setAttributes( const EmptyPrintObjectStyleAlignAttributesPtr& attributes );
        private:
            EmptyPrintObjectStyleAlignAttributesPtr myAttributes;
        };
        
        /*
         3333
         <xs:element name="segno" type="empty-print-style-align" maxOccurs="unbounded">
         <xs:annotation>
         <xs:documentation>The segno element is the visual indicator of a segno sign. A sound element is needed to guide playback applications reliably.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:complexType name="empty-print-style-align">
         <xs:annotation>
         <xs:documentation>The empty-print-style-align type represents an empty element with print-style-align attribute group.</xs:documentation>
         </xs:annotation>
         <xs:attributeGroup ref="print-style-align"/>
         </xs:complexType>
         */
        
        
        /*
         3345
         <xs:element name="coda" type="empty-print-style-align" maxOccurs="unbounded">
         <xs:annotation>
         <xs:documentation>The coda element is the visual indicator of a coda sign. A sound element is needed to guide playback applications reliably.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:complexType name="empty-print-style-align">
         <xs:annotation>
         <xs:documentation>The empty-print-style-align type represents an empty element with print-style-align attribute group.</xs:documentation>
         </xs:annotation>
         <xs:attributeGroup ref="print-style-align"/>
         </xs:complexType>
         */
        
        /*
         3376
         <xs:element name="damp" type="empty-print-style-align">
         <xs:annotation>
         <xs:documentation>The damp element specifies a harp damping mark.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:complexType name="empty-print-style-align">
         <xs:annotation>
         <xs:documentation>The empty-print-style-align type represents an empty element with print-style-align attribute group.</xs:documentation>
         </xs:annotation>
         <xs:attributeGroup ref="print-style-align"/>
         </xs:complexType>
         */
		class Damp;
		using DampPtr = std::shared_ptr<Damp>;
		using DampUPtr = std::unique_ptr<Damp>;
		using DampSet = std::vector<DampPtr>;
		using DampSetIter = DampSet::iterator;
		using DampSetIterConst = DampSet::const_iterator;
		inline DampPtr makeDamp() { return std::make_shared<Damp>(); }
        class Damp : public ElementInterface
        {
        public:
            Damp();
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            EmptyPrintObjectStyleAlignAttributesPtr getAttributes() const;
            void setAttributes( const EmptyPrintObjectStyleAlignAttributesPtr& attributes );
        private:
            EmptyPrintObjectStyleAlignAttributesPtr myAttributes;
        };
        
        /*
         3381
         <xs:element name="damp-all" type="empty-print-style-align">
         <xs:annotation>
         <xs:documentation>The damp-all element specifies a harp damping mark for all strings.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:complexType name="empty-print-style-align">
         <xs:annotation>
         <xs:documentation>The empty-print-style-align type represents an empty element with print-style-align attribute group.</xs:documentation>
         </xs:annotation>
         <xs:attributeGroup ref="print-style-align"/>
         </xs:complexType>
         */
		class DampAll;
		using DampAllPtr = std::shared_ptr<DampAll>;
		using DampAllUPtr = std::unique_ptr<DampAll>;
		using DampAllSet = std::vector<DampAllPtr>;
		using DampAllSetIter = DampAllSet::iterator;
		using DampAllSetIterConst = DampAllSet::const_iterator;
		inline DampAllPtr makeDampAll() { return std::make_shared<DampAll>(); }
        class DampAll : public ElementInterface
        {
        public:
            DampAll();
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            EmptyPrintObjectStyleAlignAttributesPtr getAttributes() const;
            void setAttributes( const EmptyPrintObjectStyleAlignAttributesPtr& attributes );
        private:
            EmptyPrintObjectStyleAlignAttributesPtr myAttributes;
        };
        
        /*
         3386
         <xs:element name="eyeglasses" type="empty-print-style-align">
         <xs:annotation>
         <xs:documentation>The eyeglasses element specifies the eyeglasses symbol, common in commercial music.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:complexType name="empty-print-style-align">
         <xs:annotation>
         <xs:documentation>The empty-print-style-align type represents an empty element with print-style-align attribute group.</xs:documentation>
         </xs:annotation>
         <xs:attributeGroup ref="print-style-align"/>
         </xs:complexType>
         */
		class Eyeglasses;
		using EyeglassesPtr = std::shared_ptr<Eyeglasses>;
		using EyeglassesUPtr = std::unique_ptr<Eyeglasses>;
		using EyeglassesSet = std::vector<EyeglassesPtr>;
		using EyeglassesSetIter = EyeglassesSet::iterator;
		using EyeglassesSetIterConst = EyeglassesSet::const_iterator;
		inline EyeglassesPtr makeEyeglasses() { return std::make_shared<Eyeglasses>(); }
        class Eyeglasses : public ElementInterface
        {
        public:
            Eyeglasses();
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            EmptyPrintObjectStyleAlignAttributesPtr getAttributes() const;
            void setAttributes( const EmptyPrintObjectStyleAlignAttributesPtr& attributes );
        private:
            EmptyPrintObjectStyleAlignAttributesPtr myAttributes;
        };
        
        /*
         4274
         <xs:element name="left-divider" type="empty-print-object-style-align"/>
         <xs:complexType name="empty-print-object-style-align">
         <xs:annotation>
         <xs:documentation>The empty-print-style-align-object type represents an empty element with print-object and print-style-align attribute groups.</xs:documentation>
         </xs:annotation>
         <xs:attributeGroup ref="print-object"/>
         <xs:attributeGroup ref="print-style-align"/>
         </xs:complexType>
         */
		class LeftDivider;
		using LeftDividerPtr = std::shared_ptr<LeftDivider>;
		using LeftDividerUPtr = std::unique_ptr<LeftDivider>;
		using LeftDividerSet = std::vector<LeftDividerPtr>;
		using LeftDividerSetIter = LeftDividerSet::iterator;
		using LeftDividerSetIterConst = LeftDividerSet::const_iterator;
		inline LeftDividerPtr makeLeftDivider() { return std::make_shared<LeftDivider>(); }
        class LeftDivider : public ElementInterface
        {
        public:
            LeftDivider();
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            EmptyPrintObjectStyleAlignAttributesPtr getAttributes() const;
            void setAttributes( const EmptyPrintObjectStyleAlignAttributesPtr& attributes );
        private:
            EmptyPrintObjectStyleAlignAttributesPtr myAttributes;
        };
        
        /*
         4277
         <xs:element name="right-divider" type="empty-print-object-style-align"/>
         <xs:complexType name="empty-print-object-style-align">
         <xs:annotation>
         <xs:documentation>The empty-print-style-align-object type represents an empty element with print-object and print-style-align attribute groups.</xs:documentation>
         </xs:annotation>
         <xs:attributeGroup ref="print-object"/>
         <xs:attributeGroup ref="print-style-align"/>
         </xs:complexType>
         */
		class RightDivider;
		using RightDividerPtr = std::shared_ptr<RightDivider>;
		using RightDividerUPtr = std::unique_ptr<RightDivider>;
		using RightDividerSet = std::vector<RightDividerPtr>;
		using RightDividerSetIter = RightDividerSet::iterator;
		using RightDividerSetIterConst = RightDividerSet::const_iterator;
		inline RightDividerPtr makeRightDivider() { return std::make_shared<RightDivider>(); }
        class RightDivider : public ElementInterface
        {
        public:
            RightDivider();
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            EmptyPrintObjectStyleAlignAttributesPtr getAttributes() const;
            void setAttributes( const EmptyPrintObjectStyleAlignAttributesPtr& attributes );
        private:
            EmptyPrintObjectStyleAlignAttributesPtr myAttributes;
        };
        
        struct EmptyPlacementAttributes;
        using EmptyPlacementAttributesPtr = std::shared_ptr<EmptyPlacementAttributes>;
        
        struct EmptyPlacementAttributes : public AttributesInterface
        {
        public:
            EmptyPlacementAttributes();
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
            types::AboveBelow placement;
            bool hasDefaultX;
            bool hasDefaultY;
            bool hasRelativeX;
            bool hasRelativeY;
            bool hasFontFamily;
            bool hasFontStyle;
            bool hasFontSize;
            bool hasFontWeight;
            bool hasPlacement;
        };
        
        /*
         4384
         <xs:element name="accent" type="empty-placement">
         <xs:annotation>
         <xs:documentation>The accent element indicates a regular horizontal accent mark.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:complexType name="empty-placement">
         <xs:annotation>
         <xs:documentation>The empty-placement type represents an empty element with print-style and placement attributes.</xs:documentation>
         </xs:annotation>
         <xs:attributeGroup ref="print-style"/>
         <xs:attributeGroup ref="placement"/>
         </xs:complexType>
         */
		class Accent;
		using AccentPtr = std::shared_ptr<Accent>;
		using AccentUPtr = std::unique_ptr<Accent>;
		using AccentSet = std::vector<AccentPtr>;
		using AccentSetIter = AccentSet::iterator;
		using AccentSetIterConst = AccentSet::const_iterator;
		inline AccentPtr makeAccent() { return std::make_shared<Accent>(); }
        class Accent : public ElementInterface
        {
        public:
            Accent();
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            EmptyPlacementAttributesPtr getAttributes() const;
            void setAttributes( const EmptyPlacementAttributesPtr& attributes );
        private:
            EmptyPlacementAttributesPtr myAttributes;
        };
        
        /*
         4394
         <xs:element name="staccato" type="empty-placement">
         <xs:annotation>
         <xs:documentation>The staccato element is used for a dot articulation, as opposed to a stroke or a wedge.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:complexType name="empty-placement">
         <xs:annotation>
         <xs:documentation>The empty-placement type represents an empty element with print-style and placement attributes.</xs:documentation>
         </xs:annotation>
         <xs:attributeGroup ref="print-style"/>
         <xs:attributeGroup ref="placement"/>
         </xs:complexType>
         */
		class Staccato;
		using StaccatoPtr = std::shared_ptr<Staccato>;
		using StaccatoUPtr = std::unique_ptr<Staccato>;
		using StaccatoSet = std::vector<StaccatoPtr>;
		using StaccatoSetIter = StaccatoSet::iterator;
		using StaccatoSetIterConst = StaccatoSet::const_iterator;
		inline StaccatoPtr makeStaccato() { return std::make_shared<Staccato>(); }
        class Staccato : public ElementInterface
        {
        public:
            Staccato();
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            EmptyPlacementAttributesPtr getAttributes() const;
            void setAttributes( const EmptyPlacementAttributesPtr& attributes );
        private:
            EmptyPlacementAttributesPtr myAttributes;
        };
        
        /*
         4399
         <xs:element name="tenuto" type="empty-placement">
         <xs:annotation>
         <xs:documentation>The tenuto element indicates a tenuto line symbol.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:complexType name="empty-placement">
         <xs:annotation>
         <xs:documentation>The empty-placement type represents an empty element with print-style and placement attributes.</xs:documentation>
         </xs:annotation>
         <xs:attributeGroup ref="print-style"/>
         <xs:attributeGroup ref="placement"/>
         </xs:complexType>
         */
		class Tenuto;
		using TenutoPtr = std::shared_ptr<Tenuto>;
		using TenutoUPtr = std::unique_ptr<Tenuto>;
		using TenutoSet = std::vector<TenutoPtr>;
		using TenutoSetIter = TenutoSet::iterator;
		using TenutoSetIterConst = TenutoSet::const_iterator;
		inline TenutoPtr makeTenuto() { return std::make_shared<Tenuto>(); }
        class Tenuto : public ElementInterface
        {
        public:
            Tenuto();
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            EmptyPlacementAttributesPtr getAttributes() const;
            void setAttributes( const EmptyPlacementAttributesPtr& attributes );
        private:
            EmptyPlacementAttributesPtr myAttributes;
        };
        
        /*
         4404
         <xs:element name="detached-legato" type="empty-placement">
         <xs:annotation>
         <xs:documentation>The detached-legato element indicates the combination of a tenuto line and staccato dot symbol.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:complexType name="empty-placement">
         <xs:annotation>
         <xs:documentation>The empty-placement type represents an empty element with print-style and placement attributes.</xs:documentation>
         </xs:annotation>
         <xs:attributeGroup ref="print-style"/>
         <xs:attributeGroup ref="placement"/>
         </xs:complexType>
         */
		class DetachedLegato;
		using DetachedLegatoPtr = std::shared_ptr<DetachedLegato>;
		using DetachedLegatoUPtr = std::unique_ptr<DetachedLegato>;
		using DetachedLegatoSet = std::vector<DetachedLegatoPtr>;
		using DetachedLegatoSetIter = DetachedLegatoSet::iterator;
		using DetachedLegatoSetIterConst = DetachedLegatoSet::const_iterator;
		inline DetachedLegatoPtr makeDetachedLegato() { return std::make_shared<DetachedLegato>(); }
        class DetachedLegato : public ElementInterface
        {
        public:
            DetachedLegato();
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            EmptyPlacementAttributesPtr getAttributes() const;
            void setAttributes( const EmptyPlacementAttributesPtr& attributes );
        private:
            EmptyPlacementAttributesPtr myAttributes;
        };
        
        /*
         4409
         <xs:element name="staccatissimo" type="empty-placement">
         <xs:annotation>
         <xs:documentation>The staccatissimo element is used for a wedge articulation, as opposed to a dot or a stroke.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:complexType name="empty-placement">
         <xs:annotation>
         <xs:documentation>The empty-placement type represents an empty element with print-style and placement attributes.</xs:documentation>
         </xs:annotation>
         <xs:attributeGroup ref="print-style"/>
         <xs:attributeGroup ref="placement"/>
         </xs:complexType>
         */
		class Staccatissimo;
		using StaccatissimoPtr = std::shared_ptr<Staccatissimo>;
		using StaccatissimoUPtr = std::unique_ptr<Staccatissimo>;
		using StaccatissimoSet = std::vector<StaccatissimoPtr>;
		using StaccatissimoSetIter = StaccatissimoSet::iterator;
		using StaccatissimoSetIterConst = StaccatissimoSet::const_iterator;
		inline StaccatissimoPtr makeStaccatissimo() { return std::make_shared<Staccatissimo>(); }
        class Staccatissimo : public ElementInterface
        {
        public:
            Staccatissimo();
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            EmptyPlacementAttributesPtr getAttributes() const;
            void setAttributes( const EmptyPlacementAttributesPtr& attributes );
        private:
            EmptyPlacementAttributesPtr myAttributes;
        };
        
        /*
         4414
         <xs:element name="spiccato" type="empty-placement">
         <xs:annotation>
         <xs:documentation>The spiccato element is used for a stroke articulation, as opposed to a dot or a wedge.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:complexType name="empty-placement">
         <xs:annotation>
         <xs:documentation>The empty-placement type represents an empty element with print-style and placement attributes.</xs:documentation>
         </xs:annotation>
         <xs:attributeGroup ref="print-style"/>
         <xs:attributeGroup ref="placement"/>
         </xs:complexType>
         */
		class Spiccato;
		using SpiccatoPtr = std::shared_ptr<Spiccato>;
		using SpiccatoUPtr = std::unique_ptr<Spiccato>;
		using SpiccatoSet = std::vector<SpiccatoPtr>;
		using SpiccatoSetIter = SpiccatoSet::iterator;
		using SpiccatoSetIterConst = SpiccatoSet::const_iterator;
		inline SpiccatoPtr makeSpiccato() { return std::make_shared<Spiccato>(); }
        class Spiccato : public ElementInterface
        {
        public:
            Spiccato();
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            EmptyPlacementAttributesPtr getAttributes() const;
            void setAttributes( const EmptyPlacementAttributesPtr& attributes );
        private:
            EmptyPlacementAttributesPtr myAttributes;
        };
        
        struct EmptyLineAttributes;
        using EmptyLineAttributesPtr = std::shared_ptr<EmptyLineAttributes>;
        
        struct EmptyLineAttributes : public AttributesInterface
        {
        public:
            EmptyLineAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::TenthsValue dashLength;
            types::TenthsValue spaceLength;
            types::TenthsValue defaultX;
            types::TenthsValue defaultY;
            types::TenthsValue relativeX;
            types::TenthsValue relativeY;
            types::CommaSeparatedText fontFamily;
            types::FontStyle fontStyle;
            types::FontSize fontSize;
            types::FontWeight fontWeight;
            types::AboveBelow placement;
            bool hasDashLength;
            bool hasSpaceLength;
            bool hasDefaultX;
            bool hasDefaultY;
            bool hasRelativeX;
            bool hasRelativeY;
            bool hasFontFamily;
            bool hasFontStyle;
            bool hasFontSize;
            bool hasFontWeight;
            bool hasPlacement;
        };
        
        /*
         4419
         <xs:element name="scoop" type="empty-line">
         <xs:annotation>
         <xs:documentation>The scoop element is an indeterminate slide attached to a single note. The scoop element appears before the main note and comes from below the main pitch.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:complexType name="empty-line">
         <xs:annotation>
         <xs:documentation>The empty-line type represents an empty element with line-shape, line-type, dashed-formatting, print-style and placement attributes.</xs:documentation>
         </xs:annotation>
         <xs:attributeGroup ref="line-shape"/>
         <xs:attributeGroup ref="line-type"/>
         <xs:attributeGroup ref="dashed-formatting"/>
         <xs:attributeGroup ref="print-style"/>
         <xs:attributeGroup ref="placement"/>
         </xs:complexType>
         */
		class Scoop;
		using ScoopPtr = std::shared_ptr<Scoop>;
		using ScoopUPtr = std::unique_ptr<Scoop>;
		using ScoopSet = std::vector<ScoopPtr>;
		using ScoopSetIter = ScoopSet::iterator;
		using ScoopSetIterConst = ScoopSet::const_iterator;
		inline ScoopPtr makeScoop() { return std::make_shared<Scoop>(); }
        class Scoop : public ElementInterface
        {
        public:
            Scoop();
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            EmptyLineAttributesPtr getAttributes() const;
            void setAttributes( const EmptyLineAttributesPtr& attributes );
        private:
            EmptyLineAttributesPtr myAttributes;
        };
        
        /*
         4424
         <xs:element name="plop" type="empty-line">
         <xs:annotation>
         <xs:documentation>The plop element is an indeterminate slide attached to a single note. The plop element appears before the main note and comes from above the main pitch.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:complexType name="empty-line">
         <xs:annotation>
         <xs:documentation>The empty-line type represents an empty element with line-shape, line-type, dashed-formatting, print-style and placement attributes.</xs:documentation>
         </xs:annotation>
         <xs:attributeGroup ref="line-shape"/>
         <xs:attributeGroup ref="line-type"/>
         <xs:attributeGroup ref="dashed-formatting"/>
         <xs:attributeGroup ref="print-style"/>
         <xs:attributeGroup ref="placement"/>
         </xs:complexType>
         */
		class Plop;
		using PlopPtr = std::shared_ptr<Plop>;
		using PlopUPtr = std::unique_ptr<Plop>;
		using PlopSet = std::vector<PlopPtr>;
		using PlopSetIter = PlopSet::iterator;
		using PlopSetIterConst = PlopSet::const_iterator;
		inline PlopPtr makePlop() { return std::make_shared<Plop>(); }
        class Plop : public ElementInterface
        {
        public:
            Plop();
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            EmptyLineAttributesPtr getAttributes() const;
            void setAttributes( const EmptyLineAttributesPtr& attributes );
        private:
            EmptyLineAttributesPtr myAttributes;
        };
        
        /*
         4429
         <xs:element name="doit" type="empty-line">
         <xs:annotation>
         <xs:documentation>The doit element is an indeterminate slide attached to a single note. The doit element appears after the main note and goes above the main pitch.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:complexType name="empty-line">
         <xs:annotation>
         <xs:documentation>The empty-line type represents an empty element with line-shape, line-type, dashed-formatting, print-style and placement attributes.</xs:documentation>
         </xs:annotation>
         <xs:attributeGroup ref="line-shape"/>
         <xs:attributeGroup ref="line-type"/>
         <xs:attributeGroup ref="dashed-formatting"/>
         <xs:attributeGroup ref="print-style"/>
         <xs:attributeGroup ref="placement"/>
         </xs:complexType>
         */
		class Doit;
		using DoitPtr = std::shared_ptr<Doit>;
		using DoitUPtr = std::unique_ptr<Doit>;
		using DoitSet = std::vector<DoitPtr>;
		using DoitSetIter = DoitSet::iterator;
		using DoitSetIterConst = DoitSet::const_iterator;
		inline DoitPtr makeDoit() { return std::make_shared<Doit>(); }
        class Doit : public ElementInterface
        {
        public:
            Doit();
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            EmptyLineAttributesPtr getAttributes() const;
            void setAttributes( const EmptyLineAttributesPtr& attributes );
        private:
            EmptyLineAttributesPtr myAttributes;
        };
        
        /*
         4434
         <xs:element name="falloff" type="empty-line">
         <xs:annotation>
         <xs:documentation>The falloff element is an indeterminate slide attached to a single note. The falloff element appears before the main note and goes below the main pitch.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:complexType name="empty-line">
         <xs:annotation>
         <xs:documentation>The empty-line type represents an empty element with line-shape, line-type, dashed-formatting, print-style and placement attributes.</xs:documentation>
         </xs:annotation>
         <xs:attributeGroup ref="line-shape"/>
         <xs:attributeGroup ref="line-type"/>
         <xs:attributeGroup ref="dashed-formatting"/>
         <xs:attributeGroup ref="print-style"/>
         <xs:attributeGroup ref="placement"/>
         </xs:complexType>
         */
		class Falloff;
		using FalloffPtr = std::shared_ptr<Falloff>;
		using FalloffUPtr = std::unique_ptr<Falloff>;
		using FalloffSet = std::vector<FalloffPtr>;
		using FalloffSetIter = FalloffSet::iterator;
		using FalloffSetIterConst = FalloffSet::const_iterator;
		inline FalloffPtr makeFalloff() { return std::make_shared<Falloff>(); }
        class Falloff : public ElementInterface
        {
        public:
            Falloff();
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            EmptyLineAttributesPtr getAttributes() const;
            void setAttributes( const EmptyLineAttributesPtr& attributes );
        private:
            EmptyLineAttributesPtr myAttributes;
        };
        
        /*
         4442
         <xs:element name="caesura" type="empty-placement">
         <xs:annotation>
         <xs:documentation>The caesura element indicates a slight pause. It is notated using a "railroad tracks" symbol.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:complexType name="empty-placement">
         <xs:annotation>
         <xs:documentation>The empty-placement type represents an empty element with print-style and placement attributes.</xs:documentation>
         </xs:annotation>
         <xs:attributeGroup ref="print-style"/>
         <xs:attributeGroup ref="placement"/>
         </xs:complexType>
         */
		class Caesura;
		using CaesuraPtr = std::shared_ptr<Caesura>;
		using CaesuraUPtr = std::unique_ptr<Caesura>;
		using CaesuraSet = std::vector<CaesuraPtr>;
		using CaesuraSetIter = CaesuraSet::iterator;
		using CaesuraSetIterConst = CaesuraSet::const_iterator;
		inline CaesuraPtr makeCaesura() { return std::make_shared<Caesura>(); }
        class Caesura : public ElementInterface
        {
        public:
            Caesura();
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            EmptyPlacementAttributesPtr getAttributes() const;
            void setAttributes( const EmptyPlacementAttributesPtr& attributes );
        private:
            EmptyPlacementAttributesPtr myAttributes;
        };
        
        /*
         4447
         <xs:element name="stress" type="empty-placement">
         <xs:annotation>
         <xs:documentation>The stress element indicates a stressed note.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:complexType name="empty-placement">
         <xs:annotation>
         <xs:documentation>The empty-placement type represents an empty element with print-style and placement attributes.</xs:documentation>
         </xs:annotation>
         <xs:attributeGroup ref="print-style"/>
         <xs:attributeGroup ref="placement"/>
         </xs:complexType>
         */
		class Stress;
		using StressPtr = std::shared_ptr<Stress>;
		using StressUPtr = std::unique_ptr<Stress>;
		using StressSet = std::vector<StressPtr>;
		using StressSetIter = StressSet::iterator;
		using StressSetIterConst = StressSet::const_iterator;
		inline StressPtr makeStress() { return std::make_shared<Stress>(); }
        class Stress : public ElementInterface
        {
        public:
            Stress();
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            EmptyPlacementAttributesPtr getAttributes() const;
            void setAttributes( const EmptyPlacementAttributesPtr& attributes );
        private:
            EmptyPlacementAttributesPtr myAttributes;
        };
        
        /*
         4452
         <xs:element name="unstress" type="empty-placement">
         <xs:annotation>
         <xs:documentation>The unstress element indicates an unstressed note. It is often notated using a u-shaped symbol.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:complexType name="empty-placement">
         <xs:annotation>
         <xs:documentation>The empty-placement type represents an empty element with print-style and placement attributes.</xs:documentation>
         </xs:annotation>
         <xs:attributeGroup ref="print-style"/>
         <xs:attributeGroup ref="placement"/>
         </xs:complexType>
         */
		class Unstress;
		using UnstressPtr = std::shared_ptr<Unstress>;
		using UnstressUPtr = std::unique_ptr<Unstress>;
		using UnstressSet = std::vector<UnstressPtr>;
		using UnstressSetIter = UnstressSet::iterator;
		using UnstressSetIterConst = UnstressSet::const_iterator;
		inline UnstressPtr makeUnstress() { return std::make_shared<Unstress>(); }
        class Unstress : public ElementInterface
        {
        public:
            Unstress();
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            EmptyPlacementAttributesPtr getAttributes() const;
            void setAttributes( const EmptyPlacementAttributesPtr& attributes );
        private:
            EmptyPlacementAttributesPtr myAttributes;
        };
        
        /*
         5005
         <xs:element name="dot" type="empty-placement" minOccurs="0" maxOccurs="unbounded">
         <xs:annotation>
         <xs:documentation>One dot element is used for each dot of prolongation. The placement element is used to specify whether the dot should appear above or below the staff line. It is ignored for notes that appear on a staff space.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:complexType name="empty-placement">
         <xs:annotation>
         <xs:documentation>The empty-placement type represents an empty element with print-style and placement attributes.</xs:documentation>
         </xs:annotation>
         <xs:attributeGroup ref="print-style"/>
         <xs:attributeGroup ref="placement"/>
         </xs:complexType>
         */
		class Dot;
		using DotPtr = std::shared_ptr<Dot>;
		using DotUPtr = std::unique_ptr<Dot>;
		using DotSet = std::vector<DotPtr>;
		using DotSetIter = DotSet::iterator;
		using DotSetIterConst = DotSet::const_iterator;
		inline DotPtr makeDot() { return std::make_shared<Dot>(); }
        class Dot : public ElementInterface
        {
        public:
            Dot();
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            EmptyPlacementAttributesPtr getAttributes() const;
            void setAttributes( const EmptyPlacementAttributesPtr& attributes );
        private:
            EmptyPlacementAttributesPtr myAttributes;
        };
        
        struct EmptyTrillSoundAttributes;
        using EmptyTrillSoundAttributesPtr = std::shared_ptr<EmptyTrillSoundAttributes>;
        
        struct EmptyTrillSoundAttributes : public AttributesInterface
        {
        public:
            EmptyTrillSoundAttributes();
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
            types::AboveBelow placement;
            types::StartNote startNote;
            types::TrillStep trillStep;
            types::TwoNoteTurn twoNoteTurn;
            types::YesNo accelerate;
            types::TrillBeats beats;
            types::Percent secondBeat;
            types::Percent lastBeat;
            bool hasDefaultX;
            bool hasDefaultY;
            bool hasRelativeX;
            bool hasRelativeY;
            bool hasFontFamily;
            bool hasFontStyle;
            bool hasFontSize;
            bool hasFontWeight;
            bool hasPlacement;
            bool hasStartNote;
            bool hasTrillStep;
            bool hasTwoNoteTurn;
            bool hasAccelerate;
            bool hasBeats;
            bool hasSecondBeat;
            bool hasLastBeat;
        };
        
        /*
         5128
         <xs:element name="trill-mark" type="empty-trill-sound">
         <xs:annotation>
         <xs:documentation>The trill-mark element represents the trill-mark symbol.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:complexType name="empty-trill-sound">
         <xs:annotation>
         <xs:documentation>The empty-trill-sound type represents an empty element with print-style, placement, and trill-sound attributes.</xs:documentation>
         </xs:annotation>
         <xs:attributeGroup ref="print-style"/>
         <xs:attributeGroup ref="placement"/>
         <xs:attributeGroup ref="trill-sound"/>
         </xs:complexType>
         */
		class TrillMark;
		using TrillMarkPtr = std::shared_ptr<TrillMark>;
		using TrillMarkUPtr = std::unique_ptr<TrillMark>;
		using TrillMarkSet = std::vector<TrillMarkPtr>;
		using TrillMarkSetIter = TrillMarkSet::iterator;
		using TrillMarkSetIterConst = TrillMarkSet::const_iterator;
		inline TrillMarkPtr makeTrillMark() { return std::make_shared<TrillMark>(); }
        class TrillMark : public ElementInterface
        {
        public:
            TrillMark();
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            EmptyTrillSoundAttributesPtr getAttributes() const;
            void setAttributes( const EmptyTrillSoundAttributesPtr& attributes );
        private:
            EmptyTrillSoundAttributesPtr myAttributes;
        };
        
        /*
         5153
         <xs:element name="vertical-turn" type="empty-trill-sound">
         <xs:annotation>
         <xs:documentation>The vertical-turn element has the turn symbol shape arranged vertically going from upper left to lower right.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:complexType name="empty-trill-sound">
         <xs:annotation>
         <xs:documentation>The empty-trill-sound type represents an empty element with print-style, placement, and trill-sound attributes.</xs:documentation>
         </xs:annotation>
         <xs:attributeGroup ref="print-style"/>
         <xs:attributeGroup ref="placement"/>
         <xs:attributeGroup ref="trill-sound"/>
         </xs:complexType>
         */
		class VerticalTurn;
		using VerticalTurnPtr = std::shared_ptr<VerticalTurn>;
		using VerticalTurnUPtr = std::unique_ptr<VerticalTurn>;
		using VerticalTurnSet = std::vector<VerticalTurnPtr>;
		using VerticalTurnSetIter = VerticalTurnSet::iterator;
		using VerticalTurnSetIterConst = VerticalTurnSet::const_iterator;
		inline VerticalTurnPtr makeVerticalTurn() { return std::make_shared<VerticalTurn>(); }
        class VerticalTurn : public ElementInterface
        {
        public:
            VerticalTurn();
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            EmptyTrillSoundAttributesPtr getAttributes() const;
            void setAttributes( const EmptyTrillSoundAttributesPtr& attributes );
        private:
            EmptyTrillSoundAttributesPtr myAttributes;
        };
        
        /*
         5158
         <xs:element name="shake" type="empty-trill-sound">
         <xs:annotation>
         <xs:documentation>The shake element has a similar appearance to an inverted-mordent element.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:complexType name="empty-trill-sound">
         <xs:annotation>
         <xs:documentation>The empty-trill-sound type represents an empty element with print-style, placement, and trill-sound attributes.</xs:documentation>
         </xs:annotation>
         <xs:attributeGroup ref="print-style"/>
         <xs:attributeGroup ref="placement"/>
         <xs:attributeGroup ref="trill-sound"/>
         </xs:complexType>
         */
		class Shake;
		using ShakePtr = std::shared_ptr<Shake>;
		using ShakeUPtr = std::unique_ptr<Shake>;
		using ShakeSet = std::vector<ShakePtr>;
		using ShakeSetIter = ShakeSet::iterator;
		using ShakeSetIterConst = ShakeSet::const_iterator;
		inline ShakePtr makeShake() { return std::make_shared<Shake>(); }
        class Shake : public ElementInterface
        {
        public:
            Shake();
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            EmptyTrillSoundAttributesPtr getAttributes() const;
            void setAttributes( const EmptyTrillSoundAttributesPtr& attributes );
        private:
            EmptyTrillSoundAttributesPtr myAttributes;
        };
        
        /*
         5176
         <xs:element name="schleifer" type="empty-placement">
         <xs:annotation>
         <xs:documentation>The name for this ornament is based on the German, to avoid confusion with the more common slide element defined earlier.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:complexType name="empty-placement">
         <xs:annotation>
         <xs:documentation>The empty-placement type represents an empty element with print-style and placement attributes.</xs:documentation>
         </xs:annotation>
         <xs:attributeGroup ref="print-style"/>
         <xs:attributeGroup ref="placement"/>
         </xs:complexType>
         */
		class Schleifer;
		using SchleiferPtr = std::shared_ptr<Schleifer>;
		using SchleiferUPtr = std::unique_ptr<Schleifer>;
		using SchleiferSet = std::vector<SchleiferPtr>;
		using SchleiferSetIter = SchleiferSet::iterator;
		using SchleiferSetIterConst = SchleiferSet::const_iterator;
		inline SchleiferPtr makeSchleifer() { return std::make_shared<Schleifer>(); }
        class Schleifer : public ElementInterface
        {
        public:
            Schleifer();
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            EmptyPlacementAttributesPtr getAttributes() const;
            void setAttributes( const EmptyPlacementAttributesPtr& attributes );
        private:
            EmptyPlacementAttributesPtr myAttributes;
        };
        
        /*
         5339
         <xs:element name="up-bow" type="empty-placement">
         <xs:annotation>
         <xs:documentation>The up-bow element represents the symbol that is used both for up-bowing on bowed instruments, and up-stroke on plucked instruments.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:complexType name="empty-placement">
         <xs:annotation>
         <xs:documentation>The empty-placement type represents an empty element with print-style and placement attributes.</xs:documentation>
         </xs:annotation>
         <xs:attributeGroup ref="print-style"/>
         <xs:attributeGroup ref="placement"/>
         </xs:complexType>
         */
		class UpBow;
		using UpBowPtr = std::shared_ptr<UpBow>;
		using UpBowUPtr = std::unique_ptr<UpBow>;
		using UpBowSet = std::vector<UpBowPtr>;
		using UpBowSetIter = UpBowSet::iterator;
		using UpBowSetIterConst = UpBowSet::const_iterator;
		inline UpBowPtr makeUpBow() { return std::make_shared<UpBow>(); }
        class UpBow : public ElementInterface
        {
        public:
            UpBow();
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            EmptyPlacementAttributesPtr getAttributes() const;
            void setAttributes( const EmptyPlacementAttributesPtr& attributes );
        private:
            EmptyPlacementAttributesPtr myAttributes;
        };
        
        /*
         5344
         <xs:element name="down-bow" type="empty-placement">
         <xs:annotation>
         <xs:documentation>The down-bow element represents the symbol that is used both for down-bowing on bowed instruments, and down-stroke on plucked instruments.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:complexType name="empty-placement">
         <xs:annotation>
         <xs:documentation>The empty-placement type represents an empty element with print-style and placement attributes.</xs:documentation>
         </xs:annotation>
         <xs:attributeGroup ref="print-style"/>
         <xs:attributeGroup ref="placement"/>
         </xs:complexType>
         */
		class DownBow;
		using DownBowPtr = std::shared_ptr<DownBow>;
		using DownBowUPtr = std::unique_ptr<DownBow>;
		using DownBowSet = std::vector<DownBowPtr>;
		using DownBowSetIter = DownBowSet::iterator;
		using DownBowSetIterConst = DownBowSet::const_iterator;
		inline DownBowPtr makeDownBow() { return std::make_shared<DownBow>(); }
        class DownBow : public ElementInterface
        {
        public:
            DownBow();
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            EmptyPlacementAttributesPtr getAttributes() const;
            void setAttributes( const EmptyPlacementAttributesPtr& attributes );
        private:
            EmptyPlacementAttributesPtr myAttributes;
        };
        
        /*
         5352
         <xs:element name="open-string" type="empty-placement">
         <xs:annotation>
         <xs:documentation>The open-string element represents the zero-shaped open string symbol.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:complexType name="empty-placement">
         <xs:annotation>
         <xs:documentation>The empty-placement type represents an empty element with print-style and placement attributes.</xs:documentation>
         </xs:annotation>
         <xs:attributeGroup ref="print-style"/>
         <xs:attributeGroup ref="placement"/>
         </xs:complexType>
         */
		class OpenString;
		using OpenStringPtr = std::shared_ptr<OpenString>;
		using OpenStringUPtr = std::unique_ptr<OpenString>;
		using OpenStringSet = std::vector<OpenStringPtr>;
		using OpenStringSetIter = OpenStringSet::iterator;
		using OpenStringSetIterConst = OpenStringSet::const_iterator;
		inline OpenStringPtr makeOpenString() { return std::make_shared<OpenString>(); }
        class OpenString : public ElementInterface
        {
        public:
            OpenString();
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            EmptyPlacementAttributesPtr getAttributes() const;
            void setAttributes( const EmptyPlacementAttributesPtr& attributes );
        private:
            EmptyPlacementAttributesPtr myAttributes;
        };
        
        /*
         5357
         <xs:element name="thumb-position" type="empty-placement">
         <xs:annotation>
         <xs:documentation>The thumb-position element represents the thumb position symbol. This is a circle with a line, where the line does not come within the circle. It is distinct from the snap pizzicato symbol, where the line comes inside the circle.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:complexType name="empty-placement">
         <xs:annotation>
         <xs:documentation>The empty-placement type represents an empty element with print-style and placement attributes.</xs:documentation>
         </xs:annotation>
         <xs:attributeGroup ref="print-style"/>
         <xs:attributeGroup ref="placement"/>
         </xs:complexType>
         */
		class ThumbPosition;
		using ThumbPositionPtr = std::shared_ptr<ThumbPosition>;
		using ThumbPositionUPtr = std::unique_ptr<ThumbPosition>;
		using ThumbPositionSet = std::vector<ThumbPositionPtr>;
		using ThumbPositionSetIter = ThumbPositionSet::iterator;
		using ThumbPositionSetIterConst = ThumbPositionSet::const_iterator;
		inline ThumbPositionPtr makeThumbPosition() { return std::make_shared<ThumbPosition>(); }
        class ThumbPosition : public ElementInterface
        {
        public:
            ThumbPosition();
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            EmptyPlacementAttributesPtr getAttributes() const;
            void setAttributes( const EmptyPlacementAttributesPtr& attributes );
        private:
            EmptyPlacementAttributesPtr myAttributes;
        };
        
        /*
         5370
         <xs:element name="double-tongue" type="empty-placement">
         <xs:annotation>
         <xs:documentation>The double-tongue element represents the double tongue symbol (two dots arranged horizontally).</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:complexType name="empty-placement">
         <xs:annotation>
         <xs:documentation>The empty-placement type represents an empty element with print-style and placement attributes.</xs:documentation>
         </xs:annotation>
         <xs:attributeGroup ref="print-style"/>
         <xs:attributeGroup ref="placement"/>
         </xs:complexType>
         */
		class DoubleTongue;
		using DoubleTonguePtr = std::shared_ptr<DoubleTongue>;
		using DoubleTongueUPtr = std::unique_ptr<DoubleTongue>;
		using DoubleTongueSet = std::vector<DoubleTonguePtr>;
		using DoubleTongueSetIter = DoubleTongueSet::iterator;
		using DoubleTongueSetIterConst = DoubleTongueSet::const_iterator;
		inline DoubleTonguePtr makeDoubleTongue() { return std::make_shared<DoubleTongue>(); }
        class DoubleTongue : public ElementInterface
        {
        public:
            DoubleTongue();
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            EmptyPlacementAttributesPtr getAttributes() const;
            void setAttributes( const EmptyPlacementAttributesPtr& attributes );
        private:
            EmptyPlacementAttributesPtr myAttributes;
        };
        
        /*
         5375
         <xs:element name="triple-tongue" type="empty-placement">
         <xs:annotation>
         <xs:documentation>The triple-tongue element represents the triple tongue symbol (three dots arranged horizontally).</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:complexType name="empty-placement">
         <xs:annotation>
         <xs:documentation>The empty-placement type represents an empty element with print-style and placement attributes.</xs:documentation>
         </xs:annotation>
         <xs:attributeGroup ref="print-style"/>
         <xs:attributeGroup ref="placement"/>
         </xs:complexType>
         */
		class TripleTongue;
		using TripleTonguePtr = std::shared_ptr<TripleTongue>;
		using TripleTongueUPtr = std::unique_ptr<TripleTongue>;
		using TripleTongueSet = std::vector<TripleTonguePtr>;
		using TripleTongueSetIter = TripleTongueSet::iterator;
		using TripleTongueSetIterConst = TripleTongueSet::const_iterator;
		inline TripleTonguePtr makeTripleTongue() { return std::make_shared<TripleTongue>(); }
        class TripleTongue : public ElementInterface
        {
        public:
            TripleTongue();
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            EmptyPlacementAttributesPtr getAttributes() const;
            void setAttributes( const EmptyPlacementAttributesPtr& attributes );
        private:
            EmptyPlacementAttributesPtr myAttributes;
        };
        
        /*
         5380
         <xs:element name="stopped" type="empty-placement">
         <xs:annotation>
         <xs:documentation>The stopped element represents the stopped symbol, which looks like a plus sign.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:complexType name="empty-placement">
         <xs:annotation>
         <xs:documentation>The empty-placement type represents an empty element with print-style and placement attributes.</xs:documentation>
         </xs:annotation>
         <xs:attributeGroup ref="print-style"/>
         <xs:attributeGroup ref="placement"/>
         </xs:complexType>
         */
		class Stopped;
		using StoppedPtr = std::shared_ptr<Stopped>;
		using StoppedUPtr = std::unique_ptr<Stopped>;
		using StoppedSet = std::vector<StoppedPtr>;
		using StoppedSetIter = StoppedSet::iterator;
		using StoppedSetIterConst = StoppedSet::const_iterator;
		inline StoppedPtr makeStopped() { return std::make_shared<Stopped>(); }
        class Stopped : public ElementInterface
        {
        public:
            Stopped();
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            EmptyPlacementAttributesPtr getAttributes() const;
            void setAttributes( const EmptyPlacementAttributesPtr& attributes );
        private:
            EmptyPlacementAttributesPtr myAttributes;
        };
        
        /*
         5385
         <xs:element name="snap-pizzicato" type="empty-placement">
         <xs:annotation>
         <xs:documentation>The snap-pizzicato element represents the snap pizzicato symbol. This is a circle with a line, where the line comes inside the circle. It is distinct from the thumb-position symbol, where the line does not come inside the circle.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:complexType name="empty-placement">
         <xs:annotation>
         <xs:documentation>The empty-placement type represents an empty element with print-style and placement attributes.</xs:documentation>
         </xs:annotation>
         <xs:attributeGroup ref="print-style"/>
         <xs:attributeGroup ref="placement"/>
         </xs:complexType>
         */
		class SnapPizzicato;
		using SnapPizzicatoPtr = std::shared_ptr<SnapPizzicato>;
		using SnapPizzicatoUPtr = std::unique_ptr<SnapPizzicato>;
		using SnapPizzicatoSet = std::vector<SnapPizzicatoPtr>;
		using SnapPizzicatoSetIter = SnapPizzicatoSet::iterator;
		using SnapPizzicatoSetIterConst = SnapPizzicatoSet::const_iterator;
		inline SnapPizzicatoPtr makeSnapPizzicato() { return std::make_shared<SnapPizzicato>(); }
        class SnapPizzicato : public ElementInterface
        {
        public:
            SnapPizzicato();
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            EmptyPlacementAttributesPtr getAttributes() const;
            void setAttributes( const EmptyPlacementAttributesPtr& attributes );
        private:
            EmptyPlacementAttributesPtr myAttributes;
        };
        
        /*
         5416
         <xs:element name="fingernails" type="empty-placement">
         <xs:annotation>
         <xs:documentation>The fingernails element is used in notation for harp and other plucked string instruments.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:complexType name="empty-placement">
         <xs:annotation>
         <xs:documentation>The empty-placement type represents an empty element with print-style and placement attributes.</xs:documentation>
         </xs:annotation>
         <xs:attributeGroup ref="print-style"/>
         <xs:attributeGroup ref="placement"/>
         </xs:complexType>
         */
		class Fingernails;
		using FingernailsPtr = std::shared_ptr<Fingernails>;
		using FingernailsUPtr = std::unique_ptr<Fingernails>;
		using FingernailsSet = std::vector<FingernailsPtr>;
		using FingernailsSetIter = FingernailsSet::iterator;
		using FingernailsSetIterConst = FingernailsSet::const_iterator;
		inline FingernailsPtr makeFingernails() { return std::make_shared<Fingernails>(); }
        class Fingernails : public ElementInterface
        {
        public:
            Fingernails();
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            EmptyPlacementAttributesPtr getAttributes() const;
            void setAttributes( const EmptyPlacementAttributesPtr& attributes );
        private:
            EmptyPlacementAttributesPtr myAttributes;
        };
        
        struct EmptyFontAttributes;
        using EmptyFontAttributesPtr = std::shared_ptr<EmptyFontAttributes>;
        
        struct EmptyFontAttributes : public AttributesInterface
        {
        public:
            EmptyFontAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::CommaSeparatedText fontFamily;
            types::FontStyle fontStyle;
            types::FontSize fontSize;
            types::FontWeight fontWeight;
            bool hasFontFamily;
            bool hasFontStyle;
            bool hasFontSize;
            bool hasFontWeight;
        };
        
        /*
         5714
         <xs:element name="music-font" type="empty-font" minOccurs="0"/>
         <xs:complexType name="empty-font">
         <xs:annotation>
         <xs:documentation>The empty-font type represents an empty element with font attributes.</xs:documentation>
         </xs:annotation>
         <xs:attributeGroup ref="font"/>
         </xs:complexType>
         */
		class MusicFont;
		using MusicFontPtr = std::shared_ptr<MusicFont>;
		using MusicFontUPtr = std::unique_ptr<MusicFont>;
		using MusicFontSet = std::vector<MusicFontPtr>;
		using MusicFontSetIter = MusicFontSet::iterator;
		using MusicFontSetIterConst = MusicFontSet::const_iterator;
		inline MusicFontPtr makeMusicFont() { return std::make_shared<MusicFont>(); }
        class MusicFont : public ElementInterface
        {
        public:
            MusicFont();
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            EmptyFontAttributesPtr getAttributes() const;
            void setAttributes( const EmptyFontAttributesPtr& attributes );
        private:
            EmptyFontAttributesPtr myAttributes;
        };
        
        /*
         5718
         <xs:element name="word-font" type="empty-font" minOccurs="0"/>
         <xs:complexType name="empty-font">
         <xs:annotation>
         <xs:documentation>The empty-font type represents an empty element with font attributes.</xs:documentation>
         </xs:annotation>
         <xs:attributeGroup ref="font"/>
         </xs:complexType>
         */
		class WordFont;
		using WordFontPtr = std::shared_ptr<WordFont>;
		using WordFontUPtr = std::unique_ptr<WordFont>;
		using WordFontSet = std::vector<WordFontPtr>;
		using WordFontSetIter = WordFontSet::iterator;
		using WordFontSetIterConst = WordFontSet::const_iterator;
		inline WordFontPtr makeWordFont() { return std::make_shared<WordFont>(); }
        class WordFont : public ElementInterface
        {
        public:
            WordFont();
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            EmptyFontAttributesPtr getAttributes() const;
            void setAttributes( const EmptyFontAttributesPtr& attributes );
        private:
            EmptyFontAttributesPtr myAttributes;
        };
        
        /****************************************************************************
         MORE Empty Elements with Attributes
         ****************************************************************************/
        /*
         3026 [ equivalents 3026, 5163 ]
         <xs:element name="wavy-line" type="wavy-line" minOccurs="0"/>
         <xs:complexType name="wavy-line">
         <xs:annotation>
         <xs:documentation>Wavy lines are one way to indicate trills. When used with a measure element, they should always have type="continue" set.</xs:documentation>
         </xs:annotation>
         <xs:attribute name="type" type="start-stop-continue" use="required"/>
         <xs:attribute name="number" type="number-level"/>
         <xs:attributeGroup ref="position"/>
         <xs:attributeGroup ref="placement"/>
         <xs:attributeGroup ref="color"/>
         <xs:attributeGroup ref="trill-sound"/>
         </xs:complexType>
         */
        
        struct WavyLineAttributes;
        using WavyLineAttributesPtr = std::shared_ptr<WavyLineAttributes>;
        
        struct WavyLineAttributes : public AttributesInterface
        {
        public:
            WavyLineAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::StartStopContinue type;
            types::NumberLevel number;
            types::TenthsValue defaultX;
            types::TenthsValue defaultY;
            types::TenthsValue relativeX;
            types::TenthsValue relativeY;
            types::AboveBelow placement;
            types::StartNote startNote;
            types::TrillStep trillStep;
            types::TwoNoteTurn twoNoteTurn;
            types::YesNo accelerate;
            types::TrillBeats beats;
            types::Percent secondBeat;
            types::Percent lastBeat;
            const 	bool hasType;
            bool hasNumber;
            bool hasDefaultX;
            bool hasDefaultY;
            bool hasRelativeX;
            bool hasRelativeY;
            bool hasPlacement;
            bool hasStartNote;
            bool hasTrillStep;
            bool hasTwoNoteTurn;
            bool hasAccelerate;
            bool hasBeats;
            bool hasSecondBeat;
            bool hasLastBeat;
        };
        
		class WavyLine;
		using WavyLinePtr = std::shared_ptr<WavyLine>;
		using WavyLineUPtr = std::unique_ptr<WavyLine>;
		using WavyLineSet = std::vector<WavyLinePtr>;
		using WavyLineSetIter = WavyLineSet::iterator;
		using WavyLineSetIterConst = WavyLineSet::const_iterator;
		inline WavyLinePtr makeWavyLine() { return std::make_shared<WavyLine>(); }
        class WavyLine : public ElementInterface
        {
        public:
            WavyLine();
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            WavyLineAttributesPtr getAttributes() const;
            void setAttributes( const WavyLineAttributesPtr& attributes );
        private:
            WavyLineAttributesPtr myAttributes;
        };
        
        /*
         3047
         <xs:element name="repeat" type="repeat" minOccurs="0"/>
         <xs:complexType name="repeat">
         <xs:annotation>
         <xs:documentation>The repeat type represents repeat marks. The start of the repeat has a forward direction while the end of the repeat has a backward direction. Backward repeats that are not part of an ending can use the times attribute to indicate the number of times the repeated section is played.</xs:documentation>
         </xs:annotation>
         <xs:attribute name="direction" type="backward-forward" use="required"/>
         <xs:attribute name="times" type="xs:nonNegativeInteger"/>
         <xs:attribute name="winged" type="winged"/>
         </xs:complexType>
         */
        
        struct RepeatAttributes;
        using RepeatAttributesPtr = std::shared_ptr<RepeatAttributes>;
        
        struct RepeatAttributes : public AttributesInterface
        {
        public:
            RepeatAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::BackwardForward direction;
            types::NonNegativeInteger times;
            types::Winged winged;
            const 	bool hasDirection;
            bool hasTimes;
            bool hasWinged;
        };
        
		class Repeat;
		using RepeatPtr = std::shared_ptr<Repeat>;
		using RepeatUPtr = std::unique_ptr<Repeat>;
		using RepeatSet = std::vector<RepeatPtr>;
		using RepeatSetIter = RepeatSet::iterator;
		using RepeatSetIterConst = RepeatSet::const_iterator;
		inline RepeatPtr makeRepeat() { return std::make_shared<Repeat>(); }
        class Repeat : public ElementInterface
        {
        public:
            Repeat();
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            RepeatAttributesPtr getAttributes() const;
            void setAttributes( const RepeatAttributesPtr& attributes );
        private:
            RepeatAttributesPtr myAttributes;
        };
        
        /*
         3351
         <xs:element name="wedge" type="wedge"/>
         <xs:complexType name="wedge">
         <xs:annotation>
         <xs:documentation>The wedge type represents crescendo and diminuendo wedge symbols. The type attribute is crescendo for the start of a wedge that is closed at the left side, and diminuendo for the start of a wedge that is closed on the right side. Spread values are measured in tenths; those at the start of a crescendo wedge or end of a diminuendo wedge are ignored. The niente attribute is yes if a circle appears at the point of the wedge, indicating a crescendo from nothing or diminuendo to nothing. It is no by default, and used only when the type is crescendo, or the type is stop for a wedge that began with a diminuendo type. The line-type is solid by default.</xs:documentation>
         </xs:annotation>
         <xs:attribute name="type" type="wedge-type" use="required"/>
         <xs:attribute name="number" type="number-level"/>
         <xs:attribute name="spread" type="tenths"/>
         <xs:attribute name="niente" type="yes-no"/>
         <xs:attributeGroup ref="line-type"/>
         <xs:attributeGroup ref="dashed-formatting"/>
         <xs:attributeGroup ref="position"/>
         <xs:attributeGroup ref="color"/>
         </xs:complexType>
         */
        
        struct WedgeAttributes;
        using WedgeAttributesPtr = std::shared_ptr<WedgeAttributes>;
        
        struct WedgeAttributes : public AttributesInterface
        {
        public:
            WedgeAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::WedgeType type;
            types::NumberLevel number;
            types::TenthsValue spread;
            types::YesNo niente;
            types::TenthsValue dashLength;
            types::TenthsValue spaceLength;
            types::TenthsValue defaultX;
            types::TenthsValue defaultY;
            types::TenthsValue relativeX;
            types::TenthsValue relativeY;
            const 	bool hasType;
            bool hasNumber;
            bool hasSpread;
            bool hasNiente;
            bool hasDashLength;
            bool hasSpaceLength;
            bool hasDefaultX;
            bool hasDefaultY;
            bool hasRelativeX;
            bool hasRelativeY;
        };
        
		class Wedge;
		using WedgePtr = std::shared_ptr<Wedge>;
		using WedgeUPtr = std::unique_ptr<Wedge>;
		using WedgeSet = std::vector<WedgePtr>;
		using WedgeSetIter = WedgeSet::iterator;
		using WedgeSetIterConst = WedgeSet::const_iterator;
		inline WedgePtr makeWedge() { return std::make_shared<Wedge>(); }
        class Wedge : public ElementInterface
        {
        public:
            Wedge();
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            WedgeAttributesPtr getAttributes() const;
            void setAttributes( const WedgeAttributesPtr& attributes );
        private:
            WedgeAttributesPtr myAttributes;
        };
        
        /*
         3358
         <xs:element name="dashes" type="dashes"/>
         <xs:complexType name="dashes">
         <xs:annotation>
         <xs:documentation>The dashes type represents dashes, used for instance with cresc. and dim. marks.</xs:documentation>
         </xs:annotation>
         <xs:attribute name="type" type="start-stop-continue" use="required"/>
         <xs:attribute name="number" type="number-level"/>
         <xs:attributeGroup ref="dashed-formatting"/>
         <xs:attributeGroup ref="position"/>
         <xs:attributeGroup ref="color"/>
         </xs:complexType>
         */
        
        struct DashesAttributes;
        using DashesAttributesPtr = std::shared_ptr<DashesAttributes>;
        
        struct DashesAttributes : public AttributesInterface
        {
        public:
            DashesAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::StartStopContinue type;
            types::NumberLevel number;
            types::TenthsValue dashLength;
            types::TenthsValue spaceLength;
            types::TenthsValue defaultX;
            types::TenthsValue defaultY;
            types::TenthsValue relativeX;
            types::TenthsValue relativeY;
            const 	bool hasType;
            bool hasNumber;
            bool hasDashLength;
            bool hasSpaceLength;
            bool hasDefaultX;
            bool hasDefaultY;
            bool hasRelativeX;
            bool hasRelativeY;
        };
        
		class Dashes;
		using DashesPtr = std::shared_ptr<Dashes>;
		using DashesUPtr = std::unique_ptr<Dashes>;
		using DashesSet = std::vector<DashesPtr>;
		using DashesSetIter = DashesSet::iterator;
		using DashesSetIterConst = DashesSet::const_iterator;
		inline DashesPtr makeDashes() { return std::make_shared<Dashes>(); }
        class Dashes : public ElementInterface
        {
        public:
            Dashes();
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            DashesAttributesPtr getAttributes() const;
            void setAttributes( const DashesAttributesPtr& attributes );
        private:
            DashesAttributesPtr myAttributes;
        };
        
        /*
         3361
         <xs:element name="bracket" type="bracket"/>
         <xs:complexType name="bracket">
         <xs:annotation>
         <xs:documentation>Brackets are combined with words in a variety of modern directions. The line-end attribute specifies if there is a jog up or down (or both), an arrow, or nothing at the start or end of the bracket. If the line-end is up or down, the length of the jog can be specified using the end-length attribute. The line-type is solid by default.</xs:documentation>
         </xs:annotation>
         <xs:attribute name="type" type="start-stop-continue" use="required"/>
         <xs:attribute name="number" type="number-level"/>
         <xs:attribute name="line-end" type="line-end" use="required"/>
         <xs:attribute name="end-length" type="tenths"/>
         <xs:attributeGroup ref="line-type"/>
         <xs:attributeGroup ref="dashed-formatting"/>
         <xs:attributeGroup ref="position"/>
         <xs:attributeGroup ref="color"/>
         </xs:complexType>
         */
        
        struct BracketAttributes;
        using BracketAttributesPtr = std::shared_ptr<BracketAttributes>;
        
        struct BracketAttributes : public AttributesInterface
        {
        public:
            BracketAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::YesNo bracket;
            bool hasBracket;
        };
        
		class Bracket;
		using BracketPtr = std::shared_ptr<Bracket>;
		using BracketUPtr = std::unique_ptr<Bracket>;
		using BracketSet = std::vector<BracketPtr>;
		using BracketSetIter = BracketSet::iterator;
		using BracketSetIterConst = BracketSet::const_iterator;
		inline BracketPtr makeBracket() { return std::make_shared<Bracket>(); }
        class Bracket : public ElementInterface
        {
        public:
            Bracket();
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            BracketAttributesPtr getAttributes() const;
            void setAttributes( const BracketAttributesPtr& attributes );
        private:
            BracketAttributesPtr myAttributes;
        };
        
        /*
         3364
         <xs:element name="pedal" type="pedal"/>
         <xs:complexType name="pedal">
         <xs:annotation>
         <xs:documentation>The pedal type represents piano pedal marks. The line attribute is yes if pedal lines are used. The sign attribute is yes if Ped and * signs are used. For MusicXML 2.0 compatibility, the sign attribute is yes by default if the line attribute is no, and is no by default if the line attribute is yes. The change and continue types are used when the line attribute is yes. The change type indicates a pedal lift and retake indicated with an inverted V marking. The continue type allows more precise formatting across system breaks and for more complex pedaling lines. The alignment attributes are ignored if the line attribute is yes.</xs:documentation>
         </xs:annotation>
         <xs:attribute name="type" type="start-stop-change-continue" use="required"/>
         <xs:attribute name="line" type="yes-no"/>
         <xs:attribute name="sign" type="yes-no"/>
         <xs:attributeGroup ref="print-style-align"/>
         </xs:complexType>
         */
        
        struct PedalAttributes;
        using PedalAttributesPtr = std::shared_ptr<PedalAttributes>;
        
        struct PedalAttributes : public AttributesInterface
        {
        public:
            PedalAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::StartStopChangeContinue type;
            types::YesNo line;
            types::YesNo sign;
            types::TenthsValue defaultX;
            types::TenthsValue defaultY;
            types::TenthsValue relativeX;
            types::TenthsValue relativeY;
            types::CommaSeparatedText fontFamily;
            types::FontStyle fontStyle;
            types::FontSize fontSize;
            types::FontWeight fontWeight;
            types::LeftCenterRight halign;
            const 	bool hasType;
            bool hasLine;
            bool hasSign;
            bool hasDefaultX;
            bool hasDefaultY;
            bool hasRelativeX;
            bool hasRelativeY;
            bool hasFontFamily;
            bool hasFontStyle;
            bool hasFontSize;
            bool hasFontWeight;
            bool hasHalign;
        };
        
		class Pedal;
		using PedalPtr = std::shared_ptr<Pedal>;
		using PedalUPtr = std::unique_ptr<Pedal>;
		using PedalSet = std::vector<PedalPtr>;
		using PedalSetIter = PedalSet::iterator;
		using PedalSetIterConst = PedalSet::const_iterator;
		inline PedalPtr makePedal() { return std::make_shared<Pedal>(); }
        class Pedal : public ElementInterface
        {
        public:
            Pedal();
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            PedalAttributesPtr getAttributes() const;
            void setAttributes( const PedalAttributesPtr& attributes );
        private:
            PedalAttributesPtr myAttributes;
        };
        
        /*
         3370
         <xs:element name="octave-shift" type="octave-shift"/>
         <xs:complexType name="octave-shift">
         <xs:annotation>
         <xs:documentation>The octave shift type indicates where notes are shifted up or down from their true pitched values because of printing difficulty. Thus a treble clef line noted with 8va will be indicated with an octave-shift down from the pitch data indicated in the notes. A size of 8 indicates one octave; a size of 15 indicates two octaves.</xs:documentation>
         </xs:annotation>
         <xs:attribute name="type" type="up-down-stop-continue" use="required"/>
         <xs:attribute name="number" type="number-level"/>
         <xs:attribute name="size" type="xs:positiveInteger" default="8"/>
         <xs:attributeGroup ref="dashed-formatting"/>
         <xs:attributeGroup ref="print-style"/>
         </xs:complexType>
         */
        
        struct OctaveShiftAttributes;
        using OctaveShiftAttributesPtr = std::shared_ptr<OctaveShiftAttributes>;
        
        struct OctaveShiftAttributes : public AttributesInterface
        {
        public:
            OctaveShiftAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::UpDownStopContinue type;
            types::NumberLevel number;
            types::PositiveInteger size;
            types::TenthsValue dashLength;
            types::TenthsValue spaceLength;
            types::TenthsValue defaultX;
            types::TenthsValue defaultY;
            types::TenthsValue relativeX;
            types::TenthsValue relativeY;
            types::CommaSeparatedText fontFamily;
            types::FontStyle fontStyle;
            types::FontSize fontSize;
            types::FontWeight fontWeight;
            const 	bool hasType;
            bool hasNumber;
            bool hasSize;
            bool hasDashLength;
            bool hasSpaceLength;
            bool hasDefaultX;
            bool hasDefaultY;
            bool hasRelativeX;
            bool hasRelativeY;
            bool hasFontFamily;
            bool hasFontStyle;
            bool hasFontSize;
            bool hasFontWeight;
        };
        
		class OctaveShift;
		using OctaveShiftPtr = std::shared_ptr<OctaveShift>;
		using OctaveShiftUPtr = std::unique_ptr<OctaveShift>;
		using OctaveShiftSet = std::vector<OctaveShiftPtr>;
		using OctaveShiftSetIter = OctaveShiftSet::iterator;
		using OctaveShiftSetIterConst = OctaveShiftSet::const_iterator;
		inline OctaveShiftPtr makeOctaveShift() { return std::make_shared<OctaveShift>(); }
        class OctaveShift : public ElementInterface
        {
        public:
            OctaveShift();
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            OctaveShiftAttributesPtr getAttributes() const;
            void setAttributes( const OctaveShiftAttributesPtr& attributes );
        private:
            OctaveShiftAttributesPtr myAttributes;
        };
        
        /*
         3391
         <xs:element name="string-mute" type="string-mute"/>
         <xs:complexType name="string-mute">
         <xs:annotation>
         <xs:documentation>The string-mute type represents string mute on and mute off symbols.</xs:documentation>
         </xs:annotation>
         <xs:attribute name="type" type="on-off" use="required"/>
         <xs:attributeGroup ref="print-style-align"/>
         </xs:complexType>
         */
        
        struct StringMuteAttributes;
        using StringMuteAttributesPtr = std::shared_ptr<StringMuteAttributes>;
        
        struct StringMuteAttributes : public AttributesInterface
        {
        public:
            StringMuteAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::OnOff type;
            types::TenthsValue defaultX;
            types::TenthsValue defaultY;
            types::TenthsValue relativeX;
            types::TenthsValue relativeY;
            types::CommaSeparatedText fontFamily;
            types::FontStyle fontStyle;
            types::FontSize fontSize;
            types::FontWeight fontWeight;
            types::LeftCenterRight halign;
            const 	bool hasType;
            bool hasDefaultX;
            bool hasDefaultY;
            bool hasRelativeX;
            bool hasRelativeY;
            bool hasFontFamily;
            bool hasFontStyle;
            bool hasFontSize;
            bool hasFontWeight;
            bool hasHalign;
        };
        
		class StringMute;
		using StringMutePtr = std::shared_ptr<StringMute>;
		using StringMuteUPtr = std::unique_ptr<StringMute>;
		using StringMuteSet = std::vector<StringMutePtr>;
		using StringMuteSetIter = StringMuteSet::iterator;
		using StringMuteSetIterConst = StringMuteSet::const_iterator;
		inline StringMutePtr makeStringMute() { return std::make_shared<StringMute>(); }
        class StringMute : public ElementInterface
        {
        public:
            StringMute();
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            StringMuteAttributesPtr getAttributes() const;
            void setAttributes( const StringMuteAttributesPtr& attributes );
        private:
            StringMuteAttributesPtr myAttributes;
        };
        
        /*
         3397
         <xs:element name="image" type="image"/>
         <xs:complexType name="image">
         <xs:annotation>
         <xs:documentation>The image type is used to include graphical images in a score.</xs:documentation>
         </xs:annotation>
         <xs:attributeGroup ref="image-attributes"/>
         </xs:complexType>
         */
        
        struct ImageAttributes;
        using ImageAttributesPtr = std::shared_ptr<ImageAttributes>;
        
        struct ImageAttributes : public AttributesInterface
        {
        public:
            ImageAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::XsAnyUri source;
            types::XsToken type;
            types::TenthsValue defaultX;
            types::TenthsValue defaultY;
            types::TenthsValue relativeX;
            types::TenthsValue relativeY;
            types::LeftCenterRight halign;
            const 	bool hasSource;
            const 	bool hasType;
            bool hasDefaultX;
            bool hasDefaultY;
            bool hasRelativeX;
            bool hasRelativeY;
            bool hasHalign;
        };
        
		class Image;
		using ImagePtr = std::shared_ptr<Image>;
		using ImageUPtr = std::unique_ptr<Image>;
		using ImageSet = std::vector<ImagePtr>;
		using ImageSetIter = ImageSet::iterator;
		using ImageSetIterConst = ImageSet::const_iterator;
		inline ImagePtr makeImage() { return std::make_shared<Image>(); }
        class Image : public ElementInterface
        {
        public:
            Image();
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            ImageAttributesPtr getAttributes() const;
            void setAttributes( const ImageAttributesPtr& attributes );
        private:
            ImageAttributesPtr myAttributes;
        };
        
        /*
         3491
         <xs:element name="barre" type="barre" minOccurs="0"/>
         <xs:complexType name="barre">
         <xs:annotation>
         <xs:documentation>The barre element indicates placing a finger over multiple strings on a single fret. The type is "start" for the lowest pitched string (e.g., the string with the highest MusicXML number) and is "stop" for the highest pitched string.</xs:documentation>
         </xs:annotation>
         <xs:attribute name="type" type="start-stop" use="required"/>
         <xs:attributeGroup ref="color"/>
         </xs:complexType>
         */
        
        struct BarreAttributes;
        using BarreAttributesPtr = std::shared_ptr<BarreAttributes>;
        
        struct BarreAttributes : public AttributesInterface
        {
        public:
            BarreAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::StartStop type;
            const 	bool hasType;
        };
        
		class Barre;
		using BarrePtr = std::shared_ptr<Barre>;
		using BarreUPtr = std::unique_ptr<Barre>;
		using BarreSet = std::vector<BarrePtr>;
		using BarreSetIter = BarreSet::iterator;
		using BarreSetIterConst = BarreSet::const_iterator;
		inline BarrePtr makeBarre() { return std::make_shared<Barre>(); }
        class Barre : public ElementInterface
        {
        public:
            Barre();
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            BarreAttributesPtr getAttributes() const;
            void setAttributes( const BarreAttributesPtr& attributes );
        private:
            BarreAttributesPtr myAttributes;
        };
        
        /*
         4057
         <xs:element name="supports" type="supports"/>
         <xs:complexType name="supports">
         <xs:annotation>
         <xs:documentation>The supports type indicates if a MusicXML encoding supports a particular MusicXML element. This is recommended for elements like beam, stem, and accidental, where the absence of an element is ambiguous if you do not know if the encoding supports that element. For Version 2.0, the supports element is expanded to allow programs to indicate support for particular attributes or particular values. This lets applications communicate, for example, that all system and/or page breaks are contained in the MusicXML file.</xs:documentation>
         </xs:annotation>
         <xs:attribute name="type" type="yes-no" use="required"/>
         <xs:attribute name="element" type="xs:NMTOKEN" use="required"/>
         <xs:attribute name="attribute" type="xs:NMTOKEN"/>
         <xs:attribute name="value" type="xs:token"/>
         </xs:complexType>
         */
        
        struct SupportsAttributes;
        using SupportsAttributesPtr = std::shared_ptr<SupportsAttributes>;
        
        struct SupportsAttributes : public AttributesInterface
        {
        public:
            SupportsAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::YesNo type;
            types::XsNMToken element;
            types::XsNMToken attribute;
            types::XsToken value;
            const 	bool hasType;
            const 	bool hasElement;
            bool hasAttribute;
            bool hasValue;
        };
        
		class Supports;
		using SupportsPtr = std::shared_ptr<Supports>;
		using SupportsUPtr = std::unique_ptr<Supports>;
		using SupportsSet = std::vector<SupportsPtr>;
		using SupportsSetIter = SupportsSet::iterator;
		using SupportsSetIterConst = SupportsSet::const_iterator;
		inline SupportsPtr makeSupports() { return std::make_shared<Supports>(); }
        class Supports : public ElementInterface
        {
        public:
            Supports();
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            SupportsAttributesPtr getAttributes() const;
            void setAttributes( const SupportsAttributesPtr& attributes );
        private:
            SupportsAttributesPtr myAttributes;
        };
        
        /*
         4599 [ equivalents 4599, 4824, 4828 ]
         <xs:element name="extend" type="extend" minOccurs="0"/>
         <xs:complexType name="extend">
         <xs:annotation>
         <xs:documentation>The extend type represents lyric word extension / melisma lines as well as figured bass extensions. The optional type and position attributes are added in Version 3.0 to provide better formatting control.</xs:documentation>
         </xs:annotation>
         <xs:attribute name="type" type="start-stop-continue"/>
         <xs:attributeGroup ref="print-style"/>
         </xs:complexType>
         */
        
        struct ExtendAttributes;
        using ExtendAttributesPtr = std::shared_ptr<ExtendAttributes>;
        
        struct ExtendAttributes : public AttributesInterface
        {
        public:
            ExtendAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::StartStopContinue type;
            types::TenthsValue defaultX;
            types::TenthsValue defaultY;
            types::TenthsValue relativeX;
            types::TenthsValue relativeY;
            types::CommaSeparatedText fontFamily;
            types::FontStyle fontStyle;
            types::FontSize fontSize;
            types::FontWeight fontWeight;
            bool hasType;
            bool hasDefaultX;
            bool hasDefaultY;
            bool hasRelativeX;
            bool hasRelativeY;
            bool hasFontFamily;
            bool hasFontStyle;
            bool hasFontSize;
            bool hasFontWeight;
        };
        
		class Extend;
		using ExtendPtr = std::shared_ptr<Extend>;
		using ExtendUPtr = std::unique_ptr<Extend>;
		using ExtendSet = std::vector<ExtendPtr>;
		using ExtendSetIter = ExtendSet::iterator;
		using ExtendSetIterConst = ExtendSet::const_iterator;
		inline ExtendPtr makeExtend() { return std::make_shared<Extend>(); }
        class Extend : public ElementInterface
        {
        public:
            Extend();
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            ExtendAttributesPtr getAttributes() const;
            void setAttributes( const ExtendAttributesPtr& attributes );
        private:
            ExtendAttributesPtr myAttributes;
        };
        
        /*
         4824 [ equivalents 4599, 4824, 4828 ]
         <xs:element name="extend" type="extend" minOccurs="0"/>
         <xs:complexType name="extend">
         <xs:annotation>
         <xs:documentation>The extend type represents lyric word extension / melisma lines as well as figured bass extensions. The optional type and position attributes are added in Version 3.0 to provide better formatting control.</xs:documentation>
         </xs:annotation>
         <xs:attribute name="type" type="start-stop-continue"/>
         <xs:attributeGroup ref="print-style"/>
         </xs:complexType>
         */
        
        /*
         4828 [ equivalents 4599, 4824, 4828 ]
         <xs:element name="extend" type="extend"/>
         <xs:complexType name="extend">
         <xs:annotation>
         <xs:documentation>The extend type represents lyric word extension / melisma lines as well as figured bass extensions. The optional type and position attributes are added in Version 3.0 to provide better formatting control.</xs:documentation>
         </xs:annotation>
         <xs:attribute name="type" type="start-stop-continue"/>
         <xs:attributeGroup ref="print-style"/>
         </xs:complexType>
         */
        
        /*
         4914
         <xs:element name="tied" type="tied"/>
         <xs:complexType name="tied">
         <xs:annotation>
         <xs:documentation>The tied type represents the notated tie. The tie element represents the tie sound.
         
         The number attribute is rarely needed to disambiguate ties, since note pitches will usually suffice. The attribute is implied rather than defaulting to 1 as with most elements. It is available for use in more complex tied notation situations.</xs:documentation>
         </xs:annotation>
         <xs:attribute name="type" type="start-stop-continue" use="required"/>
         <xs:attribute name="number" type="number-level"/>
         <xs:attributeGroup ref="line-type"/>
         <xs:attributeGroup ref="dashed-formatting"/>
         <xs:attributeGroup ref="position"/>
         <xs:attributeGroup ref="placement"/>
         <xs:attributeGroup ref="orientation"/>
         <xs:attributeGroup ref="bezier"/>
         <xs:attributeGroup ref="color"/>
         </xs:complexType>
         */
        
        struct TiedAttributes;
        using TiedAttributesPtr = std::shared_ptr<TiedAttributes>;
        
        struct TiedAttributes : public AttributesInterface
        {
        public:
            TiedAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::StartStopContinue type;
            types::NumberLevel number;
            types::TenthsValue dashLength;
            types::TenthsValue spaceLength;
            types::TenthsValue defaultX;
            types::TenthsValue defaultY;
            types::TenthsValue relativeX;
            types::TenthsValue relativeY;
            types::AboveBelow placement;
            types::OverUnder orientation;
            types::DivisionsValue bezierOffset;
            types::DivisionsValue bezierOffset2;
            types::TenthsValue bezierX;
            types::TenthsValue bezierY;
            types::TenthsValue bezierX2;
            types::TenthsValue bezierY2;
            const 	bool hasType;
            bool hasNumber;
            bool hasDashLength;
            bool hasSpaceLength;
            bool hasDefaultX;
            bool hasDefaultY;
            bool hasRelativeX;
            bool hasRelativeY;
            bool hasPlacement;
            bool hasOrientation;
            bool hasBezierOffset;
            bool hasBezierOffset2;
            bool hasBezierX;
            bool hasBezierY;
            bool hasBezierX2;
            bool hasBezierY2;
        };
        
		class Tied;
		using TiedPtr = std::shared_ptr<Tied>;
		using TiedUPtr = std::unique_ptr<Tied>;
		using TiedSet = std::vector<TiedPtr>;
		using TiedSetIter = TiedSet::iterator;
		using TiedSetIterConst = TiedSet::const_iterator;
		inline TiedPtr makeTied() { return std::make_shared<Tied>(); }
        class Tied : public ElementInterface
        {
        public:
            Tied();
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            TiedAttributesPtr getAttributes() const;
            void setAttributes( const TiedAttributesPtr& attributes );
        private:
            TiedAttributesPtr myAttributes;
        };
        
        /*
         4917
         <xs:element name="slur" type="slur"/>
         <xs:complexType name="slur">
         <xs:annotation>
         <xs:documentation>Slur types are empty. Most slurs are represented with two elements: one with a start type, and one with a stop type. Slurs can add more elements using a continue type. This is typically used to specify the formatting of cross-system slurs, or to specify the shape of very complex slurs.</xs:documentation>
         </xs:annotation>
         <xs:attribute name="type" type="start-stop-continue" use="required"/>
         <xs:attribute name="number" type="number-level" default="1"/>
         <xs:attributeGroup ref="line-type"/>
         <xs:attributeGroup ref="dashed-formatting"/>
         <xs:attributeGroup ref="position"/>
         <xs:attributeGroup ref="placement"/>
         <xs:attributeGroup ref="orientation"/>
         <xs:attributeGroup ref="bezier"/>
         <xs:attributeGroup ref="color"/>
         </xs:complexType>
         */
        
        struct SlurAttributes;
        using SlurAttributesPtr = std::shared_ptr<SlurAttributes>;
        
        struct SlurAttributes : public AttributesInterface
        {
        public:
            SlurAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::StartStopContinue type;
            types::NumberLevel number;
            types::TenthsValue dashLength;
            types::TenthsValue spaceLength;
            types::TenthsValue defaultX;
            types::TenthsValue defaultY;
            types::TenthsValue relativeX;
            types::TenthsValue relativeY;
            types::AboveBelow placement;
            types::OverUnder orientation;
            types::DivisionsValue bezierOffset;
            types::DivisionsValue bezierOffset2;
            types::TenthsValue bezierX;
            types::TenthsValue bezierY;
            types::TenthsValue bezierX2;
            types::TenthsValue bezierY2;
            const 	bool hasType;
            bool hasNumber;
            bool hasDashLength;
            bool hasSpaceLength;
            bool hasDefaultX;
            bool hasDefaultY;
            bool hasRelativeX;
            bool hasRelativeY;
            bool hasPlacement;
            bool hasOrientation;
            bool hasBezierOffset;
            bool hasBezierOffset2;
            bool hasBezierX;
            bool hasBezierY;
            bool hasBezierX2;
            bool hasBezierY2;
        };
        
		class Slur;
		using SlurPtr = std::shared_ptr<Slur>;
		using SlurUPtr = std::unique_ptr<Slur>;
		using SlurSet = std::vector<SlurPtr>;
		using SlurSetIter = SlurSet::iterator;
		using SlurSetIterConst = SlurSet::const_iterator;
		inline SlurPtr makeSlur() { return std::make_shared<Slur>(); }
        class Slur : public ElementInterface
        {
        public:
            Slur();
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            SlurAttributesPtr getAttributes() const;
            void setAttributes( const SlurAttributesPtr& attributes );
        private:
            SlurAttributesPtr myAttributes;
        };
        
        /*
         4944
         <xs:element name="arpeggiate" type="arpeggiate"/>
         <xs:complexType name="arpeggiate">
         <xs:annotation>
         <xs:documentation>The arpeggiate type indicates that this note is part of an arpeggiated chord. The number attribute can be used to distinguish between two simultaneous chords arpeggiated separately (different numbers) or together (same number). The up-down attribute is used if there is an arrow on the arpeggio sign. By default, arpeggios go from the lowest to highest note.</xs:documentation>
         </xs:annotation>
         <xs:attribute name="number" type="number-level"/>
         <xs:attribute name="direction" type="up-down"/>
         <xs:attributeGroup ref="position"/>
         <xs:attributeGroup ref="placement"/>
         <xs:attributeGroup ref="color"/>
         </xs:complexType>
         */
        
        struct ArpeggiateAttributes;
        using ArpeggiateAttributesPtr = std::shared_ptr<ArpeggiateAttributes>;
        
        struct ArpeggiateAttributes : public AttributesInterface
        {
        public:
            ArpeggiateAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::NumberLevel number;
            types::UpDown direction;
            types::TenthsValue defaultX;
            types::TenthsValue defaultY;
            types::TenthsValue relativeX;
            types::TenthsValue relativeY;
            types::AboveBelow placement;
            bool hasNumber;
            bool hasDirection;
            bool hasDefaultX;
            bool hasDefaultY;
            bool hasRelativeX;
            bool hasRelativeY;
            bool hasPlacement;
        };
        
		class Arpeggiate;
		using ArpeggiatePtr = std::shared_ptr<Arpeggiate>;
		using ArpeggiateUPtr = std::unique_ptr<Arpeggiate>;
		using ArpeggiateSet = std::vector<ArpeggiatePtr>;
		using ArpeggiateSetIter = ArpeggiateSet::iterator;
		using ArpeggiateSetIterConst = ArpeggiateSet::const_iterator;
		inline ArpeggiatePtr makeArpeggiate() { return std::make_shared<Arpeggiate>(); }
        class Arpeggiate : public ElementInterface
        {
        public:
            Arpeggiate();
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            ArpeggiateAttributesPtr getAttributes() const;
            void setAttributes( const ArpeggiateAttributesPtr& attributes );
        private:
            ArpeggiateAttributesPtr myAttributes;
        };
        
        /*
         4947
         <xs:element name="non-arpeggiate" type="non-arpeggiate"/>
         <xs:complexType name="non-arpeggiate">
         <xs:annotation>
         <xs:documentation>The non-arpeggiate type indicates that this note is at the top or bottom of a bracket indicating to not arpeggiate these notes. Since this does not involve playback, it is only used on the top or bottom notes, not on each note as for the arpeggiate type.</xs:documentation>
         </xs:annotation>
         <xs:attribute name="type" type="top-bottom" use="required"/>
         <xs:attribute name="number" type="number-level"/>
         <xs:attributeGroup ref="position"/>
         <xs:attributeGroup ref="placement"/>
         <xs:attributeGroup ref="color"/>
         </xs:complexType>
         */
        
        struct NonArpeggiateAttributes;
        using NonArpeggiateAttributesPtr = std::shared_ptr<NonArpeggiateAttributes>;
        
        struct NonArpeggiateAttributes : public AttributesInterface
        {
        public:
            NonArpeggiateAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::TopBottom type;
            types::NumberLevel number;
            types::TenthsValue defaultX;
            types::TenthsValue defaultY;
            types::TenthsValue relativeX;
            types::TenthsValue relativeY;
            types::AboveBelow placement;
            const 	bool hasType;
            bool hasNumber;
            bool hasDefaultX;
            bool hasDefaultY;
            bool hasRelativeX;
            bool hasRelativeY;
            bool hasPlacement;
        };
        
		class NonArpeggiate;
		using NonArpeggiatePtr = std::shared_ptr<NonArpeggiate>;
		using NonArpeggiateUPtr = std::unique_ptr<NonArpeggiate>;
		using NonArpeggiateSet = std::vector<NonArpeggiatePtr>;
		using NonArpeggiateSetIter = NonArpeggiateSet::iterator;
		using NonArpeggiateSetIterConst = NonArpeggiateSet::const_iterator;
		inline NonArpeggiatePtr makeNonArpeggiate() { return std::make_shared<NonArpeggiate>(); }
        class NonArpeggiate : public ElementInterface
        {
        public:
            NonArpeggiate();
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            NonArpeggiateAttributesPtr getAttributes() const;
            void setAttributes( const NonArpeggiateAttributesPtr& attributes );
        private:
            NonArpeggiateAttributesPtr myAttributes;
        };
        
        /*
         4965
         <xs:element name="grace" type="grace"/>
         <xs:complexType name="grace">
         <xs:annotation>
         <xs:documentation>The grace type indicates the presence of a grace note. The slash attribute for a grace note is yes for slashed eighth notes. The other grace note attributes come from MuseData sound suggestions. The steal-time-previous attribute indicates the percentage of time to steal from the previous note for the grace note. The steal-time-following attribute indicates the percentage of time to steal from the following note for the grace note, as for appoggiaturas. The make-time attribute indicates to make time, not steal time; the units are in real-time divisions for the grace note.</xs:documentation>
         </xs:annotation>
         <xs:attribute name="steal-time-previous" type="percent"/>
         <xs:attribute name="steal-time-following" type="percent"/>
         <xs:attribute name="make-time" type="divisions"/>
         <xs:attribute name="slash" type="yes-no"/>
         </xs:complexType>
         */
        
        struct GraceAttributes;
        using GraceAttributesPtr = std::shared_ptr<GraceAttributes>;
        
        struct GraceAttributes : public AttributesInterface
        {
        public:
            GraceAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::Percent stealTimePrevious;
            types::Percent stealTimeFollowing;
            types::DivisionsValue makeTime;
            types::YesNo slash;
            bool hasStealTimePrevious;
            bool hasStealTimeFollowing;
            bool hasMakeTime;
            bool hasSlash;
        };
        
		class Grace;
		using GracePtr = std::shared_ptr<Grace>;
		using GraceUPtr = std::unique_ptr<Grace>;
		using GraceSet = std::vector<GracePtr>;
		using GraceSetIter = GraceSet::iterator;
		using GraceSetIterConst = GraceSet::const_iterator;
		inline GracePtr makeGrace() { return std::make_shared<Grace>(); }
        class Grace : public ElementInterface
        {
        public:
            Grace();
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            GraceAttributesPtr getAttributes() const;
            void setAttributes( const GraceAttributesPtr& attributes );
        private:
            GraceAttributesPtr myAttributes;
        };
        
        /*
         4970 [ equivalents 4970, 4990 ]
         <xs:element name="tie" type="tie" minOccurs="0" maxOccurs="2"/>
         <xs:complexType name="tie">
         <xs:annotation>
         <xs:documentation>The tie element indicates that a tie begins or ends with this note. If the tie element applies only particular times through a repeat, the time-only attribute indicates which times to apply it. The tie element indicates sound; the tied element indicates notation.</xs:documentation>
         </xs:annotation>
         <xs:attribute name="type" type="start-stop" use="required"/>
         <xs:attribute name="time-only" type="time-only"/>
         </xs:complexType>
         */
        
        struct TieAttributes;
        using TieAttributesPtr = std::shared_ptr<TieAttributes>;
        
        struct TieAttributes : public AttributesInterface
        {
        public:
            TieAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::StartStop type;
            types::TimeOnly timeOnly;
            const 	bool hasType;
            bool hasTimeOnly;
        };
        
		class Tie;
		using TiePtr = std::shared_ptr<Tie>;
		using TieUPtr = std::unique_ptr<Tie>;
		using TieSet = std::vector<TiePtr>;
		using TieSetIter = TieSet::iterator;
		using TieSetIterConst = TieSet::const_iterator;
		inline TiePtr makeTie() { return std::make_shared<Tie>(); }
        class Tie : public ElementInterface
        {
        public:
            Tie();
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            TieAttributesPtr getAttributes() const;
            void setAttributes( const TieAttributesPtr& attributes );
        private:
            TieAttributesPtr myAttributes;
        };
        
        /*
         4990 [ equivalents 4970, 4990 ]
         <xs:element name="tie" type="tie" minOccurs="0" maxOccurs="2"/>
         <xs:complexType name="tie">
         <xs:annotation>
         <xs:documentation>The tie element indicates that a tie begins or ends with this note. If the tie element applies only particular times through a repeat, the time-only attribute indicates which times to apply it. The tie element indicates sound; the tied element indicates notation.</xs:documentation>
         </xs:annotation>
         <xs:attribute name="type" type="start-stop" use="required"/>
         <xs:attribute name="time-only" type="time-only"/>
         </xs:complexType>
         */
        
        /*
         4995
         <xs:element name="instrument" type="instrument" minOccurs="0"/>
         <xs:complexType name="instrument">
         <xs:annotation>
         <xs:documentation>The instrument type distinguishes between score-instrument elements in a score-part. The id attribute is an IDREF back to the score-instrument ID. If multiple score-instruments are specified on a score-part, there should be an instrument element for each note in the part.</xs:documentation>
         </xs:annotation>
         <xs:attribute name="id" type="xs:IDREF" use="required"/>
         </xs:complexType>
         */
        
        struct InstrumentAttributes;
        using InstrumentAttributesPtr = std::shared_ptr<InstrumentAttributes>;
        
        struct InstrumentAttributes : public AttributesInterface
        {
        public:
            InstrumentAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::XsIDREF id;
            const 	bool hasId;
        };
        
		class Instrument;
		using InstrumentPtr = std::shared_ptr<Instrument>;
		using InstrumentUPtr = std::unique_ptr<Instrument>;
		using InstrumentSet = std::vector<InstrumentPtr>;
		using InstrumentSetIter = InstrumentSet::iterator;
		using InstrumentSetIterConst = InstrumentSet::const_iterator;
		inline InstrumentPtr makeInstrument() { return std::make_shared<Instrument>(); }
        class Instrument : public ElementInterface
        {
        public:
            Instrument();
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            InstrumentAttributesPtr getAttributes() const;
            void setAttributes( const InstrumentAttributesPtr& attributes );
        private:
            InstrumentAttributesPtr myAttributes;
        };
        
        /*
         5133
         <xs:element name="turn" type="horizontal-turn">
         <xs:annotation>
         <xs:documentation>The turn element is the normal turn shape which goes up then down.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:complexType name="horizontal-turn">
         <xs:annotation>
         <xs:documentation>The horizontal-turn type represents turn elements that are horizontal rather than vertical. These are empty elements with print-style, placement, trill-sound, and slash attributes. If the slash attribute is yes, then a vertical line is used to slash the turn; it is no by default.</xs:documentation>
         </xs:annotation>
         <xs:attributeGroup ref="print-style"/>
         <xs:attributeGroup ref="placement"/>
         <xs:attributeGroup ref="trill-sound"/>
         <xs:attribute name="slash" type="yes-no"/>
         </xs:complexType>
         */
        
        struct TurnAttributes;
        using TurnAttributesPtr = std::shared_ptr<TurnAttributes>;
        
        struct TurnAttributes : public AttributesInterface
        {
        public:
            TurnAttributes();
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
            types::AboveBelow placement;
            types::StartNote startNote;
            types::TrillStep trillStep;
            types::TwoNoteTurn twoNoteTurn;
            types::YesNo accelerate;
            types::TrillBeats beats;
            types::Percent secondBeat;
            types::Percent lastBeat;
            types::YesNo slash;
            bool hasDefaultX;
            bool hasDefaultY;
            bool hasRelativeX;
            bool hasRelativeY;
            bool hasFontFamily;
            bool hasFontStyle;
            bool hasFontSize;
            bool hasFontWeight;
            bool hasPlacement;
            bool hasStartNote;
            bool hasTrillStep;
            bool hasTwoNoteTurn;
            bool hasAccelerate;
            bool hasBeats;
            bool hasSecondBeat;
            bool hasLastBeat;
            bool hasSlash;
        };
        
		class Turn;
		using TurnPtr = std::shared_ptr<Turn>;
		using TurnUPtr = std::unique_ptr<Turn>;
		using TurnSet = std::vector<TurnPtr>;
		using TurnSetIter = TurnSet::iterator;
		using TurnSetIterConst = TurnSet::const_iterator;
		inline TurnPtr makeTurn() { return std::make_shared<Turn>(); }
        class Turn : public ElementInterface
        {
        public:
            Turn();
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            TurnAttributesPtr getAttributes() const;
            void setAttributes( const TurnAttributesPtr& attributes );
        private:
            TurnAttributesPtr myAttributes;
        };
        
        /*
         5138
         <xs:element name="delayed-turn" type="horizontal-turn">
         <xs:annotation>
         <xs:documentation>The delayed-turn element indicates a normal turn that is delayed until the end of the current note.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:complexType name="horizontal-turn">
         <xs:annotation>
         <xs:documentation>The horizontal-turn type represents turn elements that are horizontal rather than vertical. These are empty elements with print-style, placement, trill-sound, and slash attributes. If the slash attribute is yes, then a vertical line is used to slash the turn; it is no by default.</xs:documentation>
         </xs:annotation>
         <xs:attributeGroup ref="print-style"/>
         <xs:attributeGroup ref="placement"/>
         <xs:attributeGroup ref="trill-sound"/>
         <xs:attribute name="slash" type="yes-no"/>
         </xs:complexType>
         */
        
        struct DelayedTurnAttributes;
        using DelayedTurnAttributesPtr = std::shared_ptr<DelayedTurnAttributes>;
        
        struct DelayedTurnAttributes : public AttributesInterface
        {
        public:
            DelayedTurnAttributes();
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
            types::AboveBelow placement;
            types::StartNote startNote;
            types::TrillStep trillStep;
            types::TwoNoteTurn twoNoteTurn;
            types::YesNo accelerate;
            types::TrillBeats beats;
            types::Percent secondBeat;
            types::Percent lastBeat;
            types::YesNo slash;
            bool hasDefaultX;
            bool hasDefaultY;
            bool hasRelativeX;
            bool hasRelativeY;
            bool hasFontFamily;
            bool hasFontStyle;
            bool hasFontSize;
            bool hasFontWeight;
            bool hasPlacement;
            bool hasStartNote;
            bool hasTrillStep;
            bool hasTwoNoteTurn;
            bool hasAccelerate;
            bool hasBeats;
            bool hasSecondBeat;
            bool hasLastBeat;
            bool hasSlash;
        };
        
		class DelayedTurn;
		using DelayedTurnPtr = std::shared_ptr<DelayedTurn>;
		using DelayedTurnUPtr = std::unique_ptr<DelayedTurn>;
		using DelayedTurnSet = std::vector<DelayedTurnPtr>;
		using DelayedTurnSetIter = DelayedTurnSet::iterator;
		using DelayedTurnSetIterConst = DelayedTurnSet::const_iterator;
		inline DelayedTurnPtr makeDelayedTurn() { return std::make_shared<DelayedTurn>(); }
        class DelayedTurn : public ElementInterface
        {
        public:
            DelayedTurn();
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            DelayedTurnAttributesPtr getAttributes() const;
            void setAttributes( const DelayedTurnAttributesPtr& attributes );
        private:
            DelayedTurnAttributesPtr myAttributes;
        };
        
        /*
         5143
         <xs:element name="inverted-turn" type="horizontal-turn">
         <xs:annotation>
         <xs:documentation>The inverted-turn element has the shape which goes down and then up.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:complexType name="horizontal-turn">
         <xs:annotation>
         <xs:documentation>The horizontal-turn type represents turn elements that are horizontal rather than vertical. These are empty elements with print-style, placement, trill-sound, and slash attributes. If the slash attribute is yes, then a vertical line is used to slash the turn; it is no by default.</xs:documentation>
         </xs:annotation>
         <xs:attributeGroup ref="print-style"/>
         <xs:attributeGroup ref="placement"/>
         <xs:attributeGroup ref="trill-sound"/>
         <xs:attribute name="slash" type="yes-no"/>
         </xs:complexType>
         */
        
        struct InvertedTurnAttributes;
        using InvertedTurnAttributesPtr = std::shared_ptr<InvertedTurnAttributes>;
        
        struct InvertedTurnAttributes : public AttributesInterface
        {
        public:
            InvertedTurnAttributes();
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
            types::AboveBelow placement;
            types::StartNote startNote;
            types::TrillStep trillStep;
            types::TwoNoteTurn twoNoteTurn;
            types::YesNo accelerate;
            types::TrillBeats beats;
            types::Percent secondBeat;
            types::Percent lastBeat;
            types::YesNo slash;
            bool hasDefaultX;
            bool hasDefaultY;
            bool hasRelativeX;
            bool hasRelativeY;
            bool hasFontFamily;
            bool hasFontStyle;
            bool hasFontSize;
            bool hasFontWeight;
            bool hasPlacement;
            bool hasStartNote;
            bool hasTrillStep;
            bool hasTwoNoteTurn;
            bool hasAccelerate;
            bool hasBeats;
            bool hasSecondBeat;
            bool hasLastBeat;
            bool hasSlash;
        };
        
		class InvertedTurn;
		using InvertedTurnPtr = std::shared_ptr<InvertedTurn>;
		using InvertedTurnUPtr = std::unique_ptr<InvertedTurn>;
		using InvertedTurnSet = std::vector<InvertedTurnPtr>;
		using InvertedTurnSetIter = InvertedTurnSet::iterator;
		using InvertedTurnSetIterConst = InvertedTurnSet::const_iterator;
		inline InvertedTurnPtr makeInvertedTurn() { return std::make_shared<InvertedTurn>(); }
        class InvertedTurn : public ElementInterface
        {
        public:
            InvertedTurn();
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            InvertedTurnAttributesPtr getAttributes() const;
            void setAttributes( const InvertedTurnAttributesPtr& attributes );
        private:
            InvertedTurnAttributesPtr myAttributes;
        };
        
        /*
         5148
         <xs:element name="delayed-inverted-turn" type="horizontal-turn">
         <xs:annotation>
         <xs:documentation>The delayed-inverted-turn element indicates an inverted turn that is delayed until the end of the current note.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:complexType name="horizontal-turn">
         <xs:annotation>
         <xs:documentation>The horizontal-turn type represents turn elements that are horizontal rather than vertical. These are empty elements with print-style, placement, trill-sound, and slash attributes. If the slash attribute is yes, then a vertical line is used to slash the turn; it is no by default.</xs:documentation>
         </xs:annotation>
         <xs:attributeGroup ref="print-style"/>
         <xs:attributeGroup ref="placement"/>
         <xs:attributeGroup ref="trill-sound"/>
         <xs:attribute name="slash" type="yes-no"/>
         </xs:complexType>
         */
        
        struct DelayedInvertedTurnAttributes;
        using DelayedInvertedTurnAttributesPtr = std::shared_ptr<DelayedInvertedTurnAttributes>;
        
        struct DelayedInvertedTurnAttributes : public AttributesInterface
        {
        public:
            DelayedInvertedTurnAttributes();
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
            types::AboveBelow placement;
            types::StartNote startNote;
            types::TrillStep trillStep;
            types::TwoNoteTurn twoNoteTurn;
            types::YesNo accelerate;
            types::TrillBeats beats;
            types::Percent secondBeat;
            types::Percent lastBeat;
            types::YesNo slash;
            bool hasDefaultX;
            bool hasDefaultY;
            bool hasRelativeX;
            bool hasRelativeY;
            bool hasFontFamily;
            bool hasFontStyle;
            bool hasFontSize;
            bool hasFontWeight;
            bool hasPlacement;
            bool hasStartNote;
            bool hasTrillStep;
            bool hasTwoNoteTurn;
            bool hasAccelerate;
            bool hasBeats;
            bool hasSecondBeat;
            bool hasLastBeat;
            bool hasSlash;
        };
        
		class DelayedInvertedTurn;
		using DelayedInvertedTurnPtr = std::shared_ptr<DelayedInvertedTurn>;
		using DelayedInvertedTurnUPtr = std::unique_ptr<DelayedInvertedTurn>;
		using DelayedInvertedTurnSet = std::vector<DelayedInvertedTurnPtr>;
		using DelayedInvertedTurnSetIter = DelayedInvertedTurnSet::iterator;
		using DelayedInvertedTurnSetIterConst = DelayedInvertedTurnSet::const_iterator;
		inline DelayedInvertedTurnPtr makeDelayedInvertedTurn() { return std::make_shared<DelayedInvertedTurn>(); }
        class DelayedInvertedTurn : public ElementInterface
        {
        public:
            DelayedInvertedTurn();
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            DelayedInvertedTurnAttributesPtr getAttributes() const;
            void setAttributes( const DelayedInvertedTurnAttributesPtr& attributes );
        private:
            DelayedInvertedTurnAttributesPtr myAttributes;
        };
        
        /*
         5163 [ equivalents 3026, 5163 ]
         <xs:element name="wavy-line" type="wavy-line"/>
         <xs:complexType name="wavy-line">
         <xs:annotation>
         <xs:documentation>Wavy lines are one way to indicate trills. When used with a measure element, they should always have type="continue" set.</xs:documentation>
         </xs:annotation>
         <xs:attribute name="type" type="start-stop-continue" use="required"/>
         <xs:attribute name="number" type="number-level"/>
         <xs:attributeGroup ref="position"/>
         <xs:attributeGroup ref="placement"/>
         <xs:attributeGroup ref="color"/>
         <xs:attributeGroup ref="trill-sound"/>
         </xs:complexType>
         */
        
        /*
         5628
         <xs:element name="tuplet-dot" type="tuplet-dot" minOccurs="0" maxOccurs="unbounded"/>
         <xs:complexType name="tuplet-dot">
         <xs:annotation>
         <xs:documentation>The tuplet-dot type is used to specify dotted normal tuplet types.</xs:documentation>
         </xs:annotation>
         <xs:attributeGroup ref="font"/>
         <xs:attributeGroup ref="color"/>
         </xs:complexType>
         */
        
        struct TupletDotAttributes;
        using TupletDotAttributesPtr = std::shared_ptr<TupletDotAttributes>;
        
        struct TupletDotAttributes : public AttributesInterface
        {
        public:
            TupletDotAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::CommaSeparatedText fontFamily;
            types::FontStyle fontStyle;
            types::FontSize fontSize;
            types::FontWeight fontWeight;
            bool hasFontFamily;
            bool hasFontStyle;
            bool hasFontSize;
            bool hasFontWeight;
        };
        
		class TupletDot;
		using TupletDotPtr = std::shared_ptr<TupletDot>;
		using TupletDotUPtr = std::unique_ptr<TupletDot>;
		using TupletDotSet = std::vector<TupletDotPtr>;
		using TupletDotSetIter = TupletDotSet::iterator;
		using TupletDotSetIterConst = TupletDotSet::const_iterator;
		inline TupletDotPtr makeTupletDot() { return std::make_shared<TupletDot>(); }
        class TupletDot : public ElementInterface
        {
        public:
            TupletDot();
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            TupletDotAttributesPtr getAttributes() const;
            void setAttributes( const TupletDotAttributesPtr& attributes );
        private:
            TupletDotAttributesPtr myAttributes;
        };
        
        /*
         5662 [ equivalents 5662, 5683, 6340 ]
         <xs:element name="link" type="link" minOccurs="0" maxOccurs="unbounded"/>
         <xs:complexType name="link">
         <xs:annotation>
         <xs:documentation>The link type serves as an outgoing simple XLink. It is also used to connect a MusicXML score with a MusicXML opus. If a relative link is used within a document that is part of a compressed MusicXML file, the link is relative to the  root folder of the zip file.</xs:documentation>
         </xs:annotation>
         <xs:attributeGroup ref="link-attributes"/>
         <xs:attribute name="name" type="xs:token"/>
         <xs:attributeGroup ref="element-position"/>
         <xs:attributeGroup ref="position"/>
         </xs:complexType>
         */
        
        struct LinkAttributes;
        using LinkAttributesPtr = std::shared_ptr<LinkAttributes>;
        
        struct LinkAttributes : public AttributesInterface
        {
        public:
            LinkAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::XlinkHref href;
            const types::XlinkType type;
            types::XlinkRole role;
            types::XlinkTitle title;
            types::XlinkShow show;
            types::XlinkActuate actuate;
            types::XsToken name;
            types::XsNMToken element;
            types::PositiveInteger position;
            types::TenthsValue defaultX;
            types::TenthsValue defaultY;
            types::TenthsValue relativeX;
            types::TenthsValue relativeY;
            const 	bool hasHref;
            bool hasType;
            bool hasRole;
            bool hasTitle;
            bool hasShow;
            bool hasActuate;
            bool hasName;
            bool hasElement;
            bool hasPosition;
            bool hasDefaultX;
            bool hasDefaultY;
            bool hasRelativeX;
            bool hasRelativeY;
        };
        
		class Link;
		using LinkPtr = std::shared_ptr<Link>;
		using LinkUPtr = std::unique_ptr<Link>;
		using LinkSet = std::vector<LinkPtr>;
		using LinkSetIter = LinkSet::iterator;
		using LinkSetIterConst = LinkSet::const_iterator;
		inline LinkPtr makeLink() { return std::make_shared<Link>(); }
        class Link : public ElementInterface
        {
        public:
            Link();
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            LinkAttributesPtr getAttributes() const;
            void setAttributes( const LinkAttributesPtr& attributes );
        private:
            LinkAttributesPtr myAttributes;
        };
        
        /*
         5667 [ equivalents 5667, 5688, 6343 ]
         <xs:element name="bookmark" type="bookmark" minOccurs="0" maxOccurs="unbounded"/>
         <xs:complexType name="bookmark">
         <xs:annotation>
         <xs:documentation>The bookmark type serves as a well-defined target for an incoming simple XLink.</xs:documentation>
         </xs:annotation>
         <xs:attribute name="id" type="xs:ID" use="required"/>
         <xs:attribute name="name" type="xs:token"/>
         <xs:attributeGroup ref="element-position"/>
         </xs:complexType>
         */
        
        struct BookmarkAttributes;
        using BookmarkAttributesPtr = std::shared_ptr<BookmarkAttributes>;
        
        struct BookmarkAttributes : public AttributesInterface
        {
        public:
            BookmarkAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::XsID id;
            types::XsToken name;
            types::XsNMToken element;
            types::PositiveInteger position;
            const 	bool hasId;
            bool hasName;
            bool hasElement;
            bool hasPosition;
        };
        
		class Bookmark;
		using BookmarkPtr = std::shared_ptr<Bookmark>;
		using BookmarkUPtr = std::unique_ptr<Bookmark>;
		using BookmarkSet = std::vector<BookmarkPtr>;
		using BookmarkSetIter = BookmarkSet::iterator;
		using BookmarkSetIterConst = BookmarkSet::const_iterator;
		inline BookmarkPtr makeBookmark() { return std::make_shared<Bookmark>(); }
        class Bookmark : public ElementInterface
        {
        public:
            Bookmark();
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            BookmarkAttributesPtr getAttributes() const;
            void setAttributes( const BookmarkAttributesPtr& attributes );
        private:
            BookmarkAttributesPtr myAttributes;
        };
        
        /*
         5673
         <xs:element name="credit-image" type="image"/>
         <xs:complexType name="image">
         <xs:annotation>
         <xs:documentation>The image type is used to include graphical images in a score.</xs:documentation>
         </xs:annotation>
         <xs:attributeGroup ref="image-attributes"/>
         </xs:complexType>
         */
        
        struct CreditImageAttributes;
        using CreditImageAttributesPtr = std::shared_ptr<CreditImageAttributes>;
        
        struct CreditImageAttributes : public AttributesInterface
        {
        public:
            CreditImageAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::XsAnyUri source;
            types::XsToken type;
            types::TenthsValue defaultX;
            types::TenthsValue defaultY;
            types::TenthsValue relativeX;
            types::TenthsValue relativeY;
            types::LeftCenterRight halign;
            const 	bool hasSource;
            const 	bool hasType;
            bool hasDefaultX;
            bool hasDefaultY;
            bool hasRelativeX;
            bool hasRelativeY;
            bool hasHalign;
        };
        
		class CreditImage;
		using CreditImagePtr = std::shared_ptr<CreditImage>;
		using CreditImageUPtr = std::unique_ptr<CreditImage>;
		using CreditImageSet = std::vector<CreditImagePtr>;
		using CreditImageSetIter = CreditImageSet::iterator;
		using CreditImageSetIterConst = CreditImageSet::const_iterator;
		inline CreditImagePtr makeCreditImage() { return std::make_shared<CreditImage>(); }
        class CreditImage : public ElementInterface
        {
        public:
            CreditImage();
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            CreditImageAttributesPtr getAttributes() const;
            void setAttributes( const CreditImageAttributesPtr& attributes );
        private:
            CreditImageAttributesPtr myAttributes;
        };
        
        /*
         5683 [ equivalents 5662, 5683, 6340 ]
         <xs:element name="link" type="link" minOccurs="0" maxOccurs="unbounded"/>
         <xs:complexType name="link">
         <xs:annotation>
         <xs:documentation>The link type serves as an outgoing simple XLink. It is also used to connect a MusicXML score with a MusicXML opus. If a relative link is used within a document that is part of a compressed MusicXML file, the link is relative to the  root folder of the zip file.</xs:documentation>
         </xs:annotation>
         <xs:attributeGroup ref="link-attributes"/>
         <xs:attribute name="name" type="xs:token"/>
         <xs:attributeGroup ref="element-position"/>
         <xs:attributeGroup ref="position"/>
         </xs:complexType>
         */
        
        /*
         5688 [ equivalents 5667, 5688, 6343 ]
         <xs:element name="bookmark" type="bookmark" minOccurs="0" maxOccurs="unbounded"/>
         <xs:complexType name="bookmark">
         <xs:annotation>
         <xs:documentation>The bookmark type serves as a well-defined target for an incoming simple XLink.</xs:documentation>
         </xs:annotation>
         <xs:attribute name="id" type="xs:ID" use="required"/>
         <xs:attribute name="name" type="xs:token"/>
         <xs:attributeGroup ref="element-position"/>
         </xs:complexType>
         */
        
        /*
         5722
         <xs:element name="lyric-font" type="lyric-font" minOccurs="0" maxOccurs="unbounded"/>
         <xs:complexType name="lyric-font">
         <xs:annotation>
         <xs:documentation>The lyric-font type specifies the default font for a particular name and number of lyric.</xs:documentation>
         </xs:annotation>
         <xs:attribute name="number" type="xs:NMTOKEN"/>
         <xs:attribute name="name" type="xs:token"/>
         <xs:attributeGroup ref="font"/>
         </xs:complexType>
         */
        
        struct LyricFontAttributes;
        using LyricFontAttributesPtr = std::shared_ptr<LyricFontAttributes>;
        
        struct LyricFontAttributes : public AttributesInterface
        {
        public:
            LyricFontAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::XsNMToken number;
            types::XsToken name;
            types::CommaSeparatedText fontFamily;
            types::FontStyle fontStyle;
            types::FontSize fontSize;
            types::FontWeight fontWeight;
            bool hasNumber;
            bool hasName;
            bool hasFontFamily;
            bool hasFontStyle;
            bool hasFontSize;
            bool hasFontWeight;
        };
        
		class LyricFont;
		using LyricFontPtr = std::shared_ptr<LyricFont>;
		using LyricFontUPtr = std::unique_ptr<LyricFont>;
		using LyricFontSet = std::vector<LyricFontPtr>;
		using LyricFontSetIter = LyricFontSet::iterator;
		using LyricFontSetIterConst = LyricFontSet::const_iterator;
		inline LyricFontPtr makeLyricFont() { return std::make_shared<LyricFont>(); }
        class LyricFont : public ElementInterface
        {
        public:
            LyricFont();
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            LyricFontAttributesPtr getAttributes() const;
            void setAttributes( const LyricFontAttributesPtr& attributes );
        private:
            LyricFontAttributesPtr myAttributes;
        };
        
        /*
         5727
         <xs:element name="lyric-language" type="lyric-language" minOccurs="0" maxOccurs="unbounded"/>
         <xs:complexType name="lyric-language">
         <xs:annotation>
         <xs:documentation>The lyric-language type specifies the default language for a particular name and number of lyric.</xs:documentation>
         </xs:annotation>
         <xs:attribute name="number" type="xs:NMTOKEN"/>
         <xs:attribute name="name" type="xs:token"/>
         <xs:attribute ref="xml:lang" use="required"/>
         </xs:complexType>
         */
        
        struct LyricLanguageAttributes;
        using LyricLanguageAttributesPtr = std::shared_ptr<LyricLanguageAttributes>;
        
        struct LyricLanguageAttributes : public AttributesInterface
        {
        public:
            LyricLanguageAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::XsNMToken number;
            types::XsToken name;
            types::XmlLang lang;
            bool hasNumber;
            bool hasName;
            const 	bool hasLang;
        };
        
		class LyricLanguage;
		using LyricLanguagePtr = std::shared_ptr<LyricLanguage>;
		using LyricLanguageUPtr = std::unique_ptr<LyricLanguage>;
		using LyricLanguageSet = std::vector<LyricLanguagePtr>;
		using LyricLanguageSetIter = LyricLanguageSet::iterator;
		using LyricLanguageSetIterConst = LyricLanguageSet::const_iterator;
		inline LyricLanguagePtr makeLyricLanguage() { return std::make_shared<LyricLanguage>(); }
        class LyricLanguage : public ElementInterface
        {
        public:
            LyricLanguage();
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            LyricLanguageAttributesPtr getAttributes() const;
            void setAttributes( const LyricLanguageAttributesPtr& attributes );
        private:
            LyricLanguageAttributesPtr myAttributes;
        };
        
        /*
         6001
         <xs:element name="opus" type="opus" minOccurs="0"/>
         <xs:complexType name="opus">
         <xs:annotation>
         <xs:documentation>The opus type represents a link to a MusicXML opus document that composes multiple MusicXML scores into a collection.</xs:documentation>
         </xs:annotation>
         <xs:attributeGroup ref="link-attributes"/>
         </xs:complexType>
         */
        
        struct OpusAttributes;
        using OpusAttributesPtr = std::shared_ptr<OpusAttributes>;
        
        struct OpusAttributes : public AttributesInterface
        {
        public:
            OpusAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::XlinkHref href;
            const types::XlinkType type;
            types::XlinkRole role;
            types::XlinkTitle title;
            types::XlinkShow show;
            types::XlinkActuate actuate;
            const 	bool hasHref;
            bool hasType;
            bool hasRole;
            bool hasTitle;
            bool hasShow;
            bool hasActuate;
        };
        
		class Opus;
		using OpusPtr = std::shared_ptr<Opus>;
		using OpusUPtr = std::unique_ptr<Opus>;
		using OpusSet = std::vector<OpusPtr>;
		using OpusSetIter = OpusSet::iterator;
		using OpusSetIterConst = OpusSet::const_iterator;
		inline OpusPtr makeOpus() { return std::make_shared<Opus>(); }
        class Opus : public ElementInterface
        {
        public:
            Opus();
            virtual bool hasAttributes() const;
            virtual bool hasContents() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            OpusAttributesPtr getAttributes() const;
            void setAttributes( const OpusAttributesPtr& attributes );
        private:
            OpusAttributesPtr myAttributes;
        };
        
        /*
         6340 [ equivalents 5662, 5683, 6340 ]
         <xs:element name="link" type="link"/>
         <xs:complexType name="link">
         <xs:annotation>
         <xs:documentation>The link type serves as an outgoing simple XLink. It is also used to connect a MusicXML score with a MusicXML opus. If a relative link is used within a document that is part of a compressed MusicXML file, the link is relative to the  root folder of the zip file.</xs:documentation>
         </xs:annotation>
         <xs:attributeGroup ref="link-attributes"/>
         <xs:attribute name="name" type="xs:token"/>
         <xs:attributeGroup ref="element-position"/>
         <xs:attributeGroup ref="position"/>
         </xs:complexType>
         */
        
        /*
         6343 [ equivalents 5667, 5688, 6343 ]
         <xs:element name="bookmark" type="bookmark"/>
         <xs:complexType name="bookmark">
         <xs:annotation>
         <xs:documentation>The bookmark type serves as a well-defined target for an incoming simple XLink.</xs:documentation>
         </xs:annotation>
         <xs:attribute name="id" type="xs:ID" use="required"/>
         <xs:attribute name="name" type="xs:token"/>
         <xs:attributeGroup ref="element-position"/>
         </xs:complexType>
         */
        
        /*************************** COMPOSITE ELEMENTS ***************************/
        /*
         <xs:group name="traditional-key">
         <xs:annotation>
         <xs:documentation>The traditional-key group represents a traditional key signature using the cycle of fifths.</xs:documentation>
         </xs:annotation>
         <xs:sequence>
         <xs:element name="cancel" type="cancel" minOccurs="0"/>
         <xs:element name="fifths" type="fifths"/>
         <xs:element name="mode" type="mode" minOccurs="0"/>
         </xs:sequence>
         </xs:group>
         */
        class TraditionalKey;
        using TraditionalKeyPtr = std::shared_ptr<TraditionalKey>;
        using TraditionalKeyUPtr = std::unique_ptr<TraditionalKey>;
        using TraditionalKeySet = std::vector<TraditionalKey>;
        using TraditionalKeySetIter = TraditionalKeySet::iterator;
        using TraditionalKeySetIterConst = TraditionalKeySet::const_iterator;
		inline TraditionalKeyPtr makeTraditionalKey() { return std::make_shared<TraditionalKey>(); }
        class TraditionalKey : public ElementInterface
        {
        public:
            TraditionalKey();
            virtual bool hasAttributes() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual bool hasContents() const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            CancelPtr getCancel() const;
            void setCancel( const CancelPtr& value );
            bool getHasCancel() const;
            void setHasCancel( const bool value );
            FifthsPtr getFifths() const;
            void setFifths( const FifthsPtr& value );
            ModePtr getMode() const;
            void setMode( const ModePtr& value );
            bool getHasMode() const;
            void setHasMode( const bool value );
        private:
            CancelPtr myCancel;
            FifthsPtr myFifths;
            ModePtr myMode;
            bool myHasCancel;
            bool myHasMode;
        };
        
        /*
         <xs:group name="non-traditional-key">
         <xs:annotation>
         <xs:documentation>The non-traditional-key group represents a single alteration within a non-traditional key signature. A sequence of these groups makes up a non-traditional key signature</xs:documentation>
         </xs:annotation>
         <xs:sequence>
         <xs:element name="key-step" type="step">
         <xs:annotation>
         <xs:documentation>Non-traditional key signatures can be represented using the Humdrum/Scot concept of a list of altered tones. The key-step element indicates the pitch step to be altered, represented using the same names as in the step element.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:element name="key-alter" type="semitones">
         <xs:annotation>
         <xs:documentation>Non-traditional key signatures can be represented using the Humdrum/Scot concept of a list of altered tones. The key-alter element represents the alteration for a given pitch step, represented with semitones in the same manner as the alter element.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:element name="key-accidental" type="accidental-value" minOccurs="0">
         <xs:annotation>
         <xs:documentation>Non-traditional key signatures can be represented using the Humdrum/Scot concept of a list of altered tones. The key-accidental element indicates the accidental to be displayed in the key signature, represented in the same manner as the accidental element. It is used for disambiguating microtonal accidentals.</xs:documentation>
         </xs:annotation>
         </xs:element>
         </xs:sequence>
         </xs:group>
         */
        class NonTraditionalKey;
        using NonTraditionalKeyPtr = std::shared_ptr<NonTraditionalKey>;
        using NonTraditionalKeyUPtr = std::shared_ptr<NonTraditionalKey>;
        using NonTraditionalKeySet = std::vector<NonTraditionalKeyPtr>;
        using NonTraditionalKeySetIter = NonTraditionalKeySet::iterator;
        using NonTraditionalKeySetIterConst = NonTraditionalKeySet::const_iterator;
		inline NonTraditionalKeyPtr makeNonTraditionalKey() { return std::make_shared<NonTraditionalKey>(); }
        class NonTraditionalKey : public ElementInterface
        {
        public:
            NonTraditionalKey();
            virtual bool hasAttributes() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual bool hasContents() const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            KeyStepPtr getKeyStep() const;
            void setKeyStep( const KeyStepPtr& value );
            KeyAlterPtr getKeyAlter() const;
            void setKeyAlter( const KeyAlterPtr& value );
            KeyAccidentalPtr getKeyAccidental() const;
            void setKeyAccidental( const KeyAccidentalPtr& value );
            bool getHasKeyAccidental() const;
            void setHasKeyAccivental( const bool value );
        private:
            KeyStepPtr myKeyStep;
            KeyAlterPtr myKeyAlter;
            KeyAccidentalPtr myKeyAccidental;
            bool myHasKeyAccidental;
        };
        
        /*
         <xs:complexType name="key">
         <xs:annotation>
         <xs:documentation>The key type represents a key signature. Both traditional and non-traditional key signatures are supported. The optional number attribute refers to staff numbers. If absent, the key signature applies to all staves in the part. Key signatures appear at the start of each system unless the print-object attribute has been set to "no".</xs:documentation>
         </xs:annotation>
         <xs:sequence>
         <xs:choice>
         <xs:group ref="traditional-key"/>
         <xs:group ref="non-traditional-key" minOccurs="0" maxOccurs="unbounded"/>
         </xs:choice>
         <xs:element name="key-octave" type="key-octave" minOccurs="0" maxOccurs="unbounded">
         <xs:annotation>
         <xs:documentation>The optional list of key-octave elements is used to specify in which octave each element of the key signature appears.</xs:documentation>
         </xs:annotation>
         </xs:element>
         </xs:sequence>
         <xs:attribute name="number" type="staff-number"/>
         <xs:attributeGroup ref="print-style"/>
         <xs:attributeGroup ref="print-object"/>
         </xs:complexType>
         */
        
        class KeyChoice;
        using KeyChoicePtr = std::shared_ptr<KeyChoice>;
        using KeyChoiceUPtr = std::unique_ptr<KeyChoice>;
        using KeyChoiceSet = std::vector<KeyChoice>;
        using KeyChoiceSetIter = KeyChoiceSet::iterator;
        using KeyChoiceSetIterConst = KeyChoiceSet::const_iterator;
		inline KeyChoicePtr makeKeyChoice() { return std::make_shared<KeyChoice>(); }
        class KeyChoice : public ElementInterface
        {
        public:
            enum class Choice
            {
                traditionalKey = 0,
                nonTraditionalKey = 1
            };
            KeyChoice();
            virtual bool hasAttributes() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual bool hasContents() const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            Choice getChoice() const;
            void setChoice( const Choice value );
            TraditionalKeyPtr getTraditionalKey() const;
            void setTraditionalKey( const TraditionalKeyPtr& value );
            
            const NonTraditionalKeySet& getNonTraditionalKeySet() const;
            void removeNonTraditionalKey( const NonTraditionalKeySetIterConst& value );
            void addNonTraditionalKey( const NonTraditionalKeyPtr& value );
            void clearNonTraditionalKeySet();
            
        private:
            Choice myChoice;
            TraditionalKeyPtr myTraditionalKey;
            NonTraditionalKeySet myNonTraditionalKeySet;
        };
        
        /*
         2614
         <xs:element name="key" type="key" minOccurs="0" maxOccurs="unbounded">
         <xs:annotation>
         <xs:documentation>The key element represents a key signature. Both traditional and non-traditional key signatures are supported. The optional number attribute refers to staff numbers. If absent, the key signature applies to all staves in the part.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:complexType name="key">
         <xs:annotation>
         <xs:documentation>The key type represents a key signature. Both traditional and non-traditional key signatures are supported. The optional number attribute refers to staff numbers. If absent, the key signature applies to all staves in the part. Key signatures appear at the start of each system unless the print-object attribute has been set to "no".</xs:documentation>
         </xs:annotation>
         <xs:sequence>
         <xs:choice>
         <xs:group ref="traditional-key"/>
         <xs:group ref="non-traditional-key" minOccurs="0" maxOccurs="unbounded"/>
         </xs:choice>
         <xs:element name="key-octave" type="key-octave" minOccurs="0" maxOccurs="unbounded">
         <xs:annotation>
         <xs:documentation>The optional list of key-octave elements is used to specify in which octave each element of the key signature appears.</xs:documentation>
         </xs:annotation>
         </xs:element>
         </xs:sequence>
         <xs:attribute name="number" type="staff-number"/>
         <xs:attributeGroup ref="print-style"/>
         <xs:attributeGroup ref="print-object"/>
         </xs:complexType>
         */
        
        struct KeyAttributes;
        using KeyAttributesPtr = std::shared_ptr<KeyAttributes>;
        struct KeyAttributes : public AttributesInterface
        {
        public:
            KeyAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::StaffNumber number;
            types::TenthsValue defaultX;
            types::TenthsValue defaultY;
            types::TenthsValue relativeX;
            types::TenthsValue relativeY;
            types::CommaSeparatedText fontFamily;
            types::FontStyle fontStyle;
            types::FontSize fontSize;
            types::FontWeight fontWeight;
            types::YesNo printObject;
            bool hasNumber;
            bool hasDefaultX;
            bool hasDefaultY;
            bool hasRelativeX;
            bool hasRelativeY;
            bool hasFontFamily;
            bool hasFontStyle;
            bool hasFontSize;
            bool hasFontWeight;
            bool hasPrintObject;
        };
        
        class Key;
        using KeyPtr = std::shared_ptr<Key>;
        using KeyUPtr = std::unique_ptr<Key>;
        using KeySet = std::vector<KeyPtr>;
        using KeySetIter = KeySet::iterator;
        using KeySetIterConst = KeySet::const_iterator;
		inline KeyPtr makeKey() { return std::make_shared<Key>(); }
        class Key : public ElementInterface
        {
        public:
            Key();
            virtual bool hasAttributes() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual bool hasContents() const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            KeyAttributesPtr getAttributes() const;
            void setAttributes( const KeyAttributesPtr& value );
            KeyChoicePtr getKeyChoice() const;
            void setKeyChoice( const KeyChoicePtr& value );
            const KeyOctaveSet& getKeyOctaveSet() const;
            void removeKeyOctave( const KeyOctaveSetIterConst& value );
            void addKeyOctave( const KeyOctavePtr& value );
            void clearKeyOctaveSet();
        private:
            KeyAttributesPtr myAttributes;
            KeyChoicePtr myKeyChoice;
            KeyOctaveSet myKeyOctaveSet;
        };
    }
}