
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
        
        //        struct DisplayTextAttributes : public AttributesInterface
        //        {
        //        public:
        //            DisplayTextAttributes();
        //            virtual bool hasValues() const;
        //            virtual std::ostream& toStream( std::ostream& os ) const;
        //            types::LeftCenterRight justify;
        //            types::TenthsValue defaultX;
        //            types::TenthsValue defaultY;
        //            types::TenthsValue relativeX;
        //            types::TenthsValue relativeY;
        //            types::CommaSeparatedText fontFamily;
        //            types::FontStyle fontStyle;
        //            types::FontSize fontSize;
        //            types::FontWeight fontWeight;
        //            types::LeftCenterRight halign;
        //            types::NumberOfLines underline;
        //            types::NumberOfLines overline;
        //            types::NumberOfLines lineThrough;
        //            types::RotationDegrees rotation;
        //            types::NumberOrNormal letterSpacing;
        //            types::NumberOrNormal lineHeight;
        //            types::XmlLang lang;
        //            types::XmlSpace space;
        //            types::EnclosureShape enclosure;
        //            bool hasJustify;
        //            bool hasDefaultX;
        //            bool hasDefaultY;
        //            bool hasRelativeX;
        //            bool hasRelativeY;
        //            bool hasFontFamily;
        //            bool hasFontStyle;
        //            bool hasFontSize;
        //            bool hasFontWeight;
        //            bool hasHalign;
        //            bool hasUnderline;
        //            bool hasOverline;
        //            bool hasLineThrough;
        //            bool hasRotation;
        //            bool hasLetterSpacing;
        //            bool hasLineHeight;
        //            bool hasLang;
        //            bool hasSpace;
        //            bool hasEnclosure;
        //        };
        
        //        class DisplayText : public ElementInterface
        //        {
        //        public:
        //            DisplayText();
        //            DisplayText( const types::XsString& value );
        //            virtual bool hasAttributes() const;
        //            virtual std::ostream& streamAttributes( std::ostream& os ) const;
        //            virtual std::ostream& streamName( std::ostream& os ) const;
        //            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
        //            DisplayTextAttributesPtr getAttributes() const;
        //            void setAttributes( const DisplayTextAttributesPtr& attributes );
        //            types::XsString getValue() const;
        //            void setValue( const types::XsString& value );
        //        private:
        //            types::XsString myValue;
        //            DisplayTextAttributesPtr myAttributes;
        //        };
        
        
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
        //        struct OffsetAttributes;
        //        using OffsetAttributesPtr = std::shared_ptr<OffsetAttributes>;
        
        //        struct OffsetAttributes : public AttributesInterface
        //        {
        //        public:
        //            OffsetAttributes();
        //            virtual bool hasValues() const;
        //            virtual std::ostream& toStream( std::ostream& os ) const;
        //            types::YesNo sound;
        //            bool hasSound;
        //        };
        //
        //        class Offset : public ElementInterface
        //        {
        //        public:
        //            Offset();
        //            Offset( const types::DivisionsValue& value );
        //            virtual bool hasAttributes() const;
        //            virtual std::ostream& streamAttributes( std::ostream& os ) const;
        //            virtual std::ostream& streamName( std::ostream& os ) const;
        //            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
        //            OffsetAttributesPtr getAttributes() const;
        //            void setAttributes( const OffsetAttributesPtr& attributes );
        //            types::DivisionsValue getValue() const;
        //            void setValue( const types::DivisionsValue& value );
        //        private:
        //            types::DivisionsValue myValue;
        //            OffsetAttributesPtr myAttributes;
        //        };
        
        
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
        //        struct OffsetAttributes;
        //        using OffsetAttributesPtr = std::shared_ptr<OffsetAttributes>;
        //
        //        struct OffsetAttributes : public AttributesInterface
        //        {
        //        public:
        //            OffsetAttributes();
        //            virtual bool hasValues() const;
        //            virtual std::ostream& toStream( std::ostream& os ) const;
        //            types::YesNo sound;
        //            bool hasSound;
        //        };
        //
        //        class Offset : public ElementInterface
        //        {
        //        public:
        //            Offset();
        //            Offset( const types::DivisionsValue& value );
        //            virtual bool hasAttributes() const;
        //            virtual std::ostream& streamAttributes( std::ostream& os ) const;
        //            virtual std::ostream& streamName( std::ostream& os ) const;
        //            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
        //            OffsetAttributesPtr getAttributes() const;
        //            void setAttributes( const OffsetAttributesPtr& attributes );
        //            types::DivisionsValue getValue() const;
        //            void setValue( const types::DivisionsValue& value );
        //        private:
        //            types::DivisionsValue myValue;
        //            OffsetAttributesPtr myAttributes;
        //        };
        
        
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
        //        struct TextAttributes;
        //        using TextAttributesPtr = std::shared_ptr<TextAttributes>;
        //
        //        struct TextAttributes : public AttributesInterface
        //        {
        //        public:
        //            TextAttributes();
        //            virtual bool hasValues() const;
        //            virtual std::ostream& toStream( std::ostream& os ) const;
        //            types::CommaSeparatedText fontFamily;
        //            types::FontStyle fontStyle;
        //            types::FontSize fontSize;
        //            types::FontWeight fontWeight;
        //            types::NumberOfLines underline;
        //            types::NumberOfLines overline;
        //            types::NumberOfLines lineThrough;
        //            types::RotationDegrees rotation;
        //            types::NumberOrNormal letterSpacing;
        //            types::XmlLang lang;
        //            bool hasFontFamily;
        //            bool hasFontStyle;
        //            bool hasFontSize;
        //            bool hasFontWeight;
        //            bool hasUnderline;
        //            bool hasOverline;
        //            bool hasLineThrough;
        //            bool hasRotation;
        //            bool hasLetterSpacing;
        //            bool hasLang;
        //        };
        //
        //        class Text : public ElementInterface
        //        {
        //        public:
        //            Text();
        //            Text( const types::XsString& value );
        //            virtual bool hasAttributes() const;
        //            virtual std::ostream& streamAttributes( std::ostream& os ) const;
        //            virtual std::ostream& streamName( std::ostream& os ) const;
        //            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
        //            TextAttributesPtr getAttributes() const;
        //            void setAttributes( const TextAttributesPtr& attributes );
        //            types::XsString getValue() const;
        //            void setValue( const types::XsString& value );
        //        private:
        //            types::XsString myValue;
        //            TextAttributesPtr myAttributes;
        //        };
        
        
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
        //        struct FermataAttributes;
        //        using FermataAttributesPtr = std::shared_ptr<FermataAttributes>;
        //
        //        struct FermataAttributes : public AttributesInterface
        //        {
        //        public:
        //            FermataAttributes();
        //            virtual bool hasValues() const;
        //            virtual std::ostream& toStream( std::ostream& os ) const;
        //            types::UprightInverted type;
        //            types::TenthsValue defaultX;
        //            types::TenthsValue defaultY;
        //            types::TenthsValue relativeX;
        //            types::TenthsValue relativeY;
        //            types::CommaSeparatedText fontFamily;
        //            types::FontStyle fontStyle;
        //            types::FontSize fontSize;
        //            types::FontWeight fontWeight;
        //            bool hasType;
        //            bool hasDefaultX;
        //            bool hasDefaultY;
        //            bool hasRelativeX;
        //            bool hasRelativeY;
        //            bool hasFontFamily;
        //            bool hasFontStyle;
        //            bool hasFontSize;
        //            bool hasFontWeight;
        //        };
        
        //        class Fermata : public ElementInterface
        //        {
        //        public:
        //            Fermata();
        //            Fermata( const types::FermataShape& value );
        //            virtual bool hasAttributes() const;
        //            virtual std::ostream& streamAttributes( std::ostream& os ) const;
        //            virtual std::ostream& streamName( std::ostream& os ) const;
        //            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
        //            FermataAttributesPtr getAttributes() const;
        //            void setAttributes( const FermataAttributesPtr& attributes );
        //            types::FermataShape getValue() const;
        //            void setValue( const types::FermataShape& value );
        //        private:
        //            types::FermataShape myValue;
        //            FermataAttributesPtr myAttributes;
        //        };
        
        
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
        //        struct DisplayTextAttributes;
        //        using DisplayTextAttributesPtr = std::shared_ptr<DisplayTextAttributes>;
        //
        //        struct DisplayTextAttributes : public AttributesInterface
        //        {
        //        public:
        //            DisplayTextAttributes();
        //            virtual bool hasValues() const;
        //            virtual std::ostream& toStream( std::ostream& os ) const;
        //            types::LeftCenterRight justify;
        //            types::TenthsValue defaultX;
        //            types::TenthsValue defaultY;
        //            types::TenthsValue relativeX;
        //            types::TenthsValue relativeY;
        //            types::CommaSeparatedText fontFamily;
        //            types::FontStyle fontStyle;
        //            types::FontSize fontSize;
        //            types::FontWeight fontWeight;
        //            types::LeftCenterRight halign;
        //            types::NumberOfLines underline;
        //            types::NumberOfLines overline;
        //            types::NumberOfLines lineThrough;
        //            types::RotationDegrees rotation;
        //            types::NumberOrNormal letterSpacing;
        //            types::NumberOrNormal lineHeight;
        //            types::XmlLang lang;
        //            types::XmlSpace space;
        //            types::EnclosureShape enclosure;
        //            bool hasJustify;
        //            bool hasDefaultX;
        //            bool hasDefaultY;
        //            bool hasRelativeX;
        //            bool hasRelativeY;
        //            bool hasFontFamily;
        //            bool hasFontStyle;
        //            bool hasFontSize;
        //            bool hasFontWeight;
        //            bool hasHalign;
        //            bool hasUnderline;
        //            bool hasOverline;
        //            bool hasLineThrough;
        //            bool hasRotation;
        //            bool hasLetterSpacing;
        //            bool hasLineHeight;
        //            bool hasLang;
        //            bool hasSpace;
        //            bool hasEnclosure;
        //        };
        
        //        class DisplayText : public ElementInterface
        //        {
        //        public:
        //            DisplayText();
        //            DisplayText( const types::XsString& value );
        //            virtual bool hasAttributes() const;
        //            virtual std::ostream& streamAttributes( std::ostream& os ) const;
        //            virtual std::ostream& streamName( std::ostream& os ) const;
        //            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
        //            DisplayTextAttributesPtr getAttributes() const;
        //            void setAttributes( const DisplayTextAttributesPtr& attributes );
        //            types::XsString getValue() const;
        //            void setValue( const types::XsString& value );
        //        private:
        //            types::XsString myValue;
        //            DisplayTextAttributesPtr myAttributes;
        //        };
        
        
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
        //        struct AccidentalMarkAttributes;
        //        using AccidentalMarkAttributesPtr = std::shared_ptr<AccidentalMarkAttributes>;
        //
        //        struct AccidentalMarkAttributes : public AttributesInterface
        //        {
        //        public:
        //            AccidentalMarkAttributes();
        //            virtual bool hasValues() const;
        //            virtual std::ostream& toStream( std::ostream& os ) const;
        //            types::TenthsValue defaultX;
        //            types::TenthsValue defaultY;
        //            types::TenthsValue relativeX;
        //            types::TenthsValue relativeY;
        //            types::CommaSeparatedText fontFamily;
        //            types::FontStyle fontStyle;
        //            types::FontSize fontSize;
        //            types::FontWeight fontWeight;
        //            types::AboveBelow placement;
        //            bool hasDefaultX;
        //            bool hasDefaultY;
        //            bool hasRelativeX;
        //            bool hasRelativeY;
        //            bool hasFontFamily;
        //            bool hasFontStyle;
        //            bool hasFontSize;
        //            bool hasFontWeight;
        //            bool hasPlacement;
        //        };
        //
        //        class AccidentalMark : public ElementInterface
        //        {
        //        public:
        //            AccidentalMark();
        //            AccidentalMark( const types::AccidentalValue& value );
        //            virtual bool hasAttributes() const;
        //            virtual std::ostream& streamAttributes( std::ostream& os ) const;
        //            virtual std::ostream& streamName( std::ostream& os ) const;
        //            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
        //            AccidentalMarkAttributesPtr getAttributes() const;
        //            void setAttributes( const AccidentalMarkAttributesPtr& attributes );
        //            types::AccidentalValue getValue() const;
        //            void setValue( const types::AccidentalValue& value );
        //        private:
        //            types::AccidentalValue myValue;
        //            AccidentalMarkAttributesPtr myAttributes;
        //        };
        
        
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
        //        struct FingeringAttributes;
        //        using FingeringAttributesPtr = std::shared_ptr<FingeringAttributes>;
        //
        //        struct FingeringAttributes : public AttributesInterface
        //        {
        //        public:
        //            FingeringAttributes();
        //            virtual bool hasValues() const;
        //            virtual std::ostream& toStream( std::ostream& os ) const;
        //            types::YesNo substitution;
        //            types::YesNo alternate;
        //            types::TenthsValue defaultX;
        //            types::TenthsValue defaultY;
        //            types::TenthsValue relativeX;
        //            types::TenthsValue relativeY;
        //            types::CommaSeparatedText fontFamily;
        //            types::FontStyle fontStyle;
        //            types::FontSize fontSize;
        //            types::FontWeight fontWeight;
        //            types::AboveBelow placement;
        //            bool hasSubstitution;
        //            bool hasAlternate;
        //            bool hasDefaultX;
        //            bool hasDefaultY;
        //            bool hasRelativeX;
        //            bool hasRelativeY;
        //            bool hasFontFamily;
        //            bool hasFontStyle;
        //            bool hasFontSize;
        //            bool hasFontWeight;
        //            bool hasPlacement;
        //        };
        //
        //        class Fingering : public ElementInterface
        //        {
        //        public:
        //            Fingering();
        //            Fingering( const types::XsString& value );
        //            virtual bool hasAttributes() const;
        //            virtual std::ostream& streamAttributes( std::ostream& os ) const;
        //            virtual std::ostream& streamName( std::ostream& os ) const;
        //            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
        //            FingeringAttributesPtr getAttributes() const;
        //            void setAttributes( const FingeringAttributesPtr& attributes );
        //            types::XsString getValue() const;
        //            void setValue( const types::XsString& value );
        //        private:
        //            types::XsString myValue;
        //            FingeringAttributesPtr myAttributes;
        //        };
        
        
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
        //        struct FretAttributes;
        //        using FretAttributesPtr = std::shared_ptr<FretAttributes>;
        //
        //        struct FretAttributes : public AttributesInterface
        //        {
        //        public:
        //            FretAttributes();
        //            virtual bool hasValues() const;
        //            virtual std::ostream& toStream( std::ostream& os ) const;
        //            types::CommaSeparatedText fontFamily;
        //            types::FontStyle fontStyle;
        //            types::FontSize fontSize;
        //            types::FontWeight fontWeight;
        //            bool hasFontFamily;
        //            bool hasFontStyle;
        //            bool hasFontSize;
        //            bool hasFontWeight;
        //        };
        //
        //        class Fret : public ElementInterface
        //        {
        //        public:
        //            Fret();
        //            Fret( const types::NonNegativeInteger& value );
        //            virtual bool hasAttributes() const;
        //            virtual std::ostream& streamAttributes( std::ostream& os ) const;
        //            virtual std::ostream& streamName( std::ostream& os ) const;
        //            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
        //            FretAttributesPtr getAttributes() const;
        //            void setAttributes( const FretAttributesPtr& attributes );
        //            types::NonNegativeInteger getValue() const;
        //            void setValue( const types::NonNegativeInteger& value );
        //        private:
        //            types::NonNegativeInteger myValue;
        //            FretAttributesPtr myAttributes;
        //        };
        
        
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
        //        struct CreditWordsAttributes;
        //        using CreditWordsAttributesPtr = std::shared_ptr<CreditWordsAttributes>;
        //
        //        struct CreditWordsAttributes : public AttributesInterface
        //        {
        //        public:
        //            CreditWordsAttributes();
        //            virtual bool hasValues() const;
        //            virtual std::ostream& toStream( std::ostream& os ) const;
        //            types::LeftCenterRight justify;
        //            types::TenthsValue defaultX;
        //            types::TenthsValue defaultY;
        //            types::TenthsValue relativeX;
        //            types::TenthsValue relativeY;
        //            types::CommaSeparatedText fontFamily;
        //            types::FontStyle fontStyle;
        //            types::FontSize fontSize;
        //            types::FontWeight fontWeight;
        //            types::LeftCenterRight halign;
        //            types::NumberOfLines underline;
        //            types::NumberOfLines overline;
        //            types::NumberOfLines lineThrough;
        //            types::RotationDegrees rotation;
        //            types::NumberOrNormal letterSpacing;
        //            types::NumberOrNormal lineHeight;
        //            types::XmlLang lang;
        //            types::XmlSpace space;
        //            types::EnclosureShape enclosure;
        //            bool hasJustify;
        //            bool hasDefaultX;
        //            bool hasDefaultY;
        //            bool hasRelativeX;
        //            bool hasRelativeY;
        //            bool hasFontFamily;
        //            bool hasFontStyle;
        //            bool hasFontSize;
        //            bool hasFontWeight;
        //            bool hasHalign;
        //            bool hasUnderline;
        //            bool hasOverline;
        //            bool hasLineThrough;
        //            bool hasRotation;
        //            bool hasLetterSpacing;
        //            bool hasLineHeight;
        //            bool hasLang;
        //            bool hasSpace;
        //            bool hasEnclosure;
        //        };
        //
        //        class CreditWords : public ElementInterface
        //        {
        //        public:
        //            CreditWords();
        //            CreditWords( const types::XsString& value );
        //            virtual bool hasAttributes() const;
        //            virtual std::ostream& streamAttributes( std::ostream& os ) const;
        //            virtual std::ostream& streamName( std::ostream& os ) const;
        //            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
        //            CreditWordsAttributesPtr getAttributes() const;
        //            void setAttributes( const CreditWordsAttributesPtr& attributes );
        //            types::XsString getValue() const;
        //            void setValue( const types::XsString& value );
        //        private:
        //            types::XsString myValue;
        //            CreditWordsAttributesPtr myAttributes;
        //        };
        
        
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
        //        struct MidiDeviceAttributes;
        //        using MidiDeviceAttributesPtr = std::shared_ptr<MidiDeviceAttributes>;
        //
        //        struct MidiDeviceAttributes : public AttributesInterface
        //        {
        //        public:
        //            MidiDeviceAttributes();
        //            virtual bool hasValues() const;
        //            virtual std::ostream& toStream( std::ostream& os ) const;
        //            types::Midi16 port;
        //            types::XsIDREF id;
        //            bool hasPort;
        //            bool hasId;
        //        };
        //
        //        class MidiDevice : public ElementInterface
        //        {
        //        public:
        //            MidiDevice();
        //            MidiDevice( const types::XsString& value );
        //            virtual bool hasAttributes() const;
        //            virtual std::ostream& streamAttributes( std::ostream& os ) const;
        //            virtual std::ostream& streamName( std::ostream& os ) const;
        //            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
        //            MidiDeviceAttributesPtr getAttributes() const;
        //            void setAttributes( const MidiDeviceAttributesPtr& attributes );
        //            types::XsString getValue() const;
        //            void setValue( const types::XsString& value );
        //        private:
        //            types::XsString myValue;
        //            MidiDeviceAttributesPtr myAttributes;
        //        };
        
        
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
        class MetronomeRelation : public ElementInterface
        {
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
        
        
        //        /**************** Syllabic ****************
        //         4802, 4817
        //         <xs:element name="syllabic" type="syllabic" minOccurs="0"/>
        //         <xs:simpleType name="syllabic">
        //         <xs:annotation>
        //         <xs:documentation>Lyric hyphenation is indicated by the syllabic type. The single, begin, end, and middle values represent single-syllable words, word-beginning syllables, word-ending syllables, and mid-word syllables, respectively.</xs:documentation>
        //         </xs:annotation>
        //         <xs:restriction base="xs:string">
        //         <xs:enumeration value="single"/>
        //         <xs:enumeration value="begin"/>
        //         <xs:enumeration value="end"/>
        //         <xs:enumeration value="middle"/>
        //         </xs:restriction>
        //         </xs:simpleType>
        //         <xs:simpleType name="syllabic">
        //         <xs:annotation>
        //         <xs:documentation>Lyric hyphenation is indicated by the syllabic type. The single, begin, end, and middle values represent single-syllable words, word-beginning syllables, word-ending syllables, and mid-word syllables, respectively.</xs:documentation>
        //         </xs:annotation>
        //         <xs:restriction base="xs:string">
        //         <xs:enumeration value="single"/>
        //         <xs:enumeration value="begin"/>
        //         <xs:enumeration value="end"/>
        //         <xs:enumeration value="middle"/>
        //         </xs:restriction>
        //         </xs:simpleType>
        //         */
        //        class Syllabic : public ElementInterface
        //        {
        //        public:
        //            Syllabic();
        //            Syllabic( const types::SyllabicEnum& value );
        //            virtual bool hasAttributes() const;
        //            virtual std::ostream& streamAttributes( std::ostream& os ) const;
        //            virtual std::ostream& streamName( std::ostream& os ) const;
        //            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
        //            types::SyllabicEnum getValue() const;
        //            void setValue( const types::SyllabicEnum& value );
        //        private:
        //            types::SyllabicEnum myValue;
        //        };
        
        
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
    }
}