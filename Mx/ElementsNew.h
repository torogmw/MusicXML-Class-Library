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
         2646
         <xs:element name="clef" type="clef" minOccurs="0" maxOccurs="unbounded">
         <xs:annotation>
         <xs:documentation>Clefs are represented by a combination of sign, line, and clef-octave-change elements.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:complexType name="clef">
         <xs:annotation>
         <xs:documentation>Clefs are represented by a combination of sign, line, and clef-octave-change elements. The optional number attribute refers to staff numbers within the part. A value of 1 is assumed if not present.
         
         Sometimes clefs are added to the staff in non-standard line positions, either to indicate cue passages, or when there are multiple clefs present simultaneously on one staff. In this situation, the additional attribute is set to "yes" and the line value is ignored. The size attribute is used for clefs where the additional attribute is "yes". It is typically used to indicate cue clefs.
         
         Sometimes clefs at the start of a measure need to appear after the barline rather than before, as for cues or for use after a repeated section. The after-barline attribute is set to "yes" in this situation. The attribute is ignored for mid-measure clefs.
         
         Clefs appear at the start of each system unless the print-object attribute has been set to "no" or the additional attribute has been set to "yes".</xs:documentation>
         </xs:annotation>
         <xs:sequence>
         <xs:element name="sign" type="clef-sign">
         <xs:annotation>
         <xs:documentation>The sign element represents the clef symbol.</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:element name="line" type="staff-line" minOccurs="0">
         <xs:annotation>
         <xs:documentation>Line numbers are counted from the bottom of the staff. Standard values are 2 for the G sign (treble clef), 4 for the F sign (bass clef), 3 for the C sign (alto clef) and 5 for TAB (on a 6-line staff).</xs:documentation>
         </xs:annotation>
         </xs:element>
         <xs:element name="clef-octave-change" type="xs:integer" minOccurs="0">
         <xs:annotation>
         <xs:documentation>The clef-octave-change element is used for transposing clefs. A treble clef for tenors would have a value of -1.</xs:documentation>
         </xs:annotation>
         </xs:element>
         </xs:sequence>
         <xs:attribute name="number" type="staff-number"/>
         <xs:attribute name="additional" type="yes-no"/>
         <xs:attribute name="size" type="symbol-size"/>
         <xs:attribute name="after-barline" type="yes-no"/>
         <xs:attributeGroup ref="print-style"/>
         <xs:attributeGroup ref="print-object"/>
         </xs:complexType>
         */
        
        struct ClefAttributes;
        using ClefAttributesPtr = std::shared_ptr<ClefAttributes>;
        
        struct ClefAttributes : public AttributesInterface
        {
        public:
            ClefAttributes();
            virtual bool hasValues() const;
            virtual std::ostream& toStream( std::ostream& os ) const;
            types::StaffNumber number;
            types::YesNo additional;
            types::SymbolSize size;
            types::YesNo afterBarline;
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
            bool hasAdditional;
            bool hasSize;
            bool hasAfterBarline;
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
        
        class Clef;
        using ClefPtr = std::shared_ptr<Clef>;
        using ClefUPtr = std::unique_ptr<Clef>;
        using ClefSet = std::vector<ClefPtr>;
        using ClefSetIter = ClefSet::iterator;
        using ClefSetIterConst = ClefSet::const_iterator;
        inline ClefPtr makeClef() { return std::make_shared<Clef>(); }
        class Clef : public ElementInterface
        {
        public:
            Clef();
            virtual bool hasAttributes() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual bool hasContents() const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            ClefAttributesPtr getAttributes() const;
            void setAttributes( const ClefAttributesPtr& value );
            /* _________ Sign minOccurs = 1, maxOccurs = 1 _________ */
            SignPtr getSign() const;
            void setSign( const SignPtr& value );
            /* _________ Line minOccurs = 0, maxOccurs = 1 _________ */
            LinePtr getLine() const;
            void setLine( const LinePtr& value );
            bool getHasLine() const;
            void setHasLine( const bool value );
            /* _________ ClefOctaveChange minOccurs = 0, maxOccurs = 1 _________ */
            ClefOctaveChangePtr getClefOctaveChange() const;
            void setClefOctaveChange( const ClefOctaveChangePtr& value );
            bool getHasClefOctaveChange() const;
            void setHasClefOctaveChange( const bool value );
        private:
            ClefAttributesPtr myAttributes;
            SignPtr mySign;
            LinePtr myLine;
            bool myHasLine;
            ClefOctaveChangePtr myClefOctaveChange;
            bool myHasClefOctaveChange;
        };
    }
}