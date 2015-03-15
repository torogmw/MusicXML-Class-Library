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
#include "TestHarness.h"
#include "Elements.h"
#include <sstream>

using namespace mx::types;
using namespace mx::e;

TEST( Test01, Scoop )
{
	std::string indentString( INDENT );
	Scoop object1;
	Scoop object2;
	EmptyLineAttributesPtr attributes1 = std::make_shared<EmptyLineAttributes>();
	EmptyLineAttributesPtr attributesNull;
	/* set some attribute1 values here */

	object2.setAttributes( attributes1 );
	object2.setAttributes( attributesNull ); /* should have no affect */
	std::stringstream default_constructed;
	object1.toStream( default_constructed, 0 );
	std::stringstream object2_stream;
	object2.toStream( object2_stream, 2 );
	std::string expected = R"(hello)";
	std::string actual = default_constructed.str();
	CHECK_EQUAL( expected, actual )
	expected = indentString+indentString+R"(hello2)";
	actual = object2_stream.str();
	CHECK_EQUAL( expected, actual )
	std::stringstream o1;	std::stringstream o2;	bool isOneLineOnly = false;
	object1.streamContents( o1, 0, isOneLineOnly );
	object2.streamContents( o2, 0, isOneLineOnly );
	CHECK( isOneLineOnly )
	CHECK_EQUAL( o1.str(), o2.str() )
	CHECK( !object1.hasContents() )
	CHECK( !object1.hasAttributes() )
	CHECK( object2.hasAttributes() )
}
