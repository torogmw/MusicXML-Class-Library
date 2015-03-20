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
        class NonTraditionalKey : public ElementInterface
        {
        public:
            NonTraditionalKey();
            virtual bool hasAttributes() const;
            virtual std::ostream& streamAttributes( std::ostream& os ) const;
            virtual std::ostream& streamName( std::ostream& os ) const;
            virtual bool hasContents() const;
            virtual std::ostream& streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const;
            
        private:
            KeyStepPtr myKeyStep;
            KeyAlterPtr myKeyAlter;
            KeyAccidentalPtr myKeyAccidental;
        };
    }
}