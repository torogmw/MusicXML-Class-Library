
The XSD document itself is also XML, which means it consists of elements and attributes.
However it describes an XML schema which means it also defines valid elements and attributes in the target space.
This can be very confusing.  Therefore, when parsing and manipulating the XSD DOM, I will use the terms

ITEM, PROPERTY

instead of ELEMENT, ATTRIBUTE

Thus, in this tag
<xs:element name="Bones" type="cat">
I will say the item is xs:element and the properties are name and type.

The words Element and Attribute will be reserved for MusicXML only.