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

    }
}