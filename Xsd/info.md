
Element vs Element vs Attribute vs Attribute
============================================

The XSD document itself is also XML, which means it consists of elements and attributes.
However it describes an XML schema which means it also defines valid elements and attributes in the target space.
This can be very confusing.  Therefore, when parsing and manipulating the XSD DOM, I will use the terms

ITEM, PROPERTY

instead of ELEMENT, ATTRIBUTE

Thus, in this tag
<xs:element name="Bones" type="cat">
I will say the item is xs:element and the properties are name and type.

The words Element and Attribute will be reserved for MusicXML only.

Name vs Name
============================================

Overuse of the word "name" was also getting me confused.
In the XSD I will avoid using the word NAME to mean different things.
Instead the Item's "name" will be called "tag".
The Properties "name" will be called "label".

Thus:
<xs:element name="Bones" type="cat">
Item->Tag = "xs:element"
Property0->Label = "name"
Property0->Value = "Bones"

Type vs Type vs Type vs Type vs Type vs Type
============================================

We will need some synonyms for the word "Type" which is everywhere
in too many contexts.