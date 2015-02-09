#pragma once

namespace xsd
{

    enum class xntyp
    {
        unknown = -1,
        annotation = 0,
        attribute = 1,
        attributeGroup = 2,
        choice = 3,
        complexContent = 4,
        complexType = 5,
        documentation = 6,
        element = 7,
        enumeration = 8,
        extension = 9,
        group = 10,
        import = 11,
        maxInclusive = 12,
        minExclusive = 13,
        minInclusive = 14,
        pattern = 15,
        restriction = 16,
        schema = 17,
        sequence = 18,
        simpleContent = 19,
        simpleType = 20,
        onion = 21
    };
}