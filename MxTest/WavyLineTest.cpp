/*
3026, 5163
<xs:element name="wavy-line" type="wavy-line"/>
<xs:complexType name="wavy-line">
	<xs:annotation>
		<xs:documentation>Wavy lines are one way to indicate trills. When used with a measure element, they should always have type="continue" set.</xs:documentation>
	</xs:annotation>
	<xs:attribute name="type" type="start-stop-continue" use="required"/>
	<xs:attribute name="number" type="number-level"/>
	<xs:attributeGroup ref="position"/>
	<xs:attributeGroup ref="placement"/>
	<xs:attributeGroup ref="color"/>
	<xs:attributeGroup ref="trill-sound"/>
</xs:complexType>
*/
#include "TestHarness.h"
#include "Elements.h"
#include <sstream>

using namespace mx::types;
using namespace mx::e;

TEST( Test01, WavyLine )
{
	std::string indentString( INDENT );
	WavyLine object1;
	WavyLine object2;
	WavyLineAttributesPtr attributes1 = std::make_shared<WavyLineAttributes>();
	WavyLineAttributesPtr attributesNull;
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
