/*
4277
<xs:element name="right-divider" type="empty-print-object-style-align"/>
<xs:complexType name="empty-print-object-style-align">
	<xs:annotation>
		<xs:documentation>The empty-print-style-align-object type represents an empty element with print-object and print-style-align attribute groups.</xs:documentation>
	</xs:annotation>
	<xs:attributeGroup ref="print-object"/>
	<xs:attributeGroup ref="print-style-align"/>
</xs:complexType>
*/
#include "TestHarness.h"
#include "Elements.h"
#include <sstream>

using namespace mx::types;
using namespace mx::e;

TEST( Test01, RightDivider )
{
	std::string indentString( INDENT );
	RightDivider object1;
	RightDivider object2;
	EmptyPrintObjectStyleAlignAttributesPtr attributes1 = std::make_shared<EmptyPrintObjectStyleAlignAttributes>();
	EmptyPrintObjectStyleAlignAttributesPtr attributesNull;
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
