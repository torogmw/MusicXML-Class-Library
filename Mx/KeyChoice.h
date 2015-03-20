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
#include "TraditionalKey.h"
#include "NonTraditionalKey.h"

namespace mx
{
    namespace e
    {
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
        class KeyChoice : public ElementInterface
        {
        public:

        private:

        };
    }
}