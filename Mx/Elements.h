
#include "ElementInterface.h"
#include "Enums.h"
#include "Strings.h"
#include "FontSize.h"
#include "Integers.h"
#include "Decimals.h"
#include "NumberOrNormal.h"
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
            types::Tenths defaultX;
            types::Tenths defaultY;
            types::Tenths relativeX;
            types::Tenths relativeY;
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
            types::Tenths defaultX;
            types::Tenths defaultY;
            types::Tenths relativeX;
            types::Tenths relativeY;
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
    }
}