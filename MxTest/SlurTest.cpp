/*
4917
<xs:element name="slur" type="slur"/>
<xs:complexType name="slur">
	<xs:annotation>
		<xs:documentation>Slur types are empty. Most slurs are represented with two elements: one with a start type, and one with a stop type. Slurs can add more elements using a continue type. This is typically used to specify the formatting of cross-system slurs, or to specify the shape of very complex slurs.</xs:documentation>
	</xs:annotation>
	<xs:attribute name="type" type="start-stop-continue" use="required"/>
	<xs:attribute name="number" type="number-level" default="1"/>
	<xs:attributeGroup ref="line-type"/>
	<xs:attributeGroup ref="dashed-formatting"/>
	<xs:attributeGroup ref="position"/>
	<xs:attributeGroup ref="placement"/>
	<xs:attributeGroup ref="orientation"/>
	<xs:attributeGroup ref="bezier"/>
	<xs:attributeGroup ref="color"/>
</xs:complexType>
*/
#include "TestHarness.h"
#include "Elements.h"
#include <sstream>

using namespace mx::types;
using namespace mx::e;

TEST( Test01, Slur )
{
	std::string indentString( INDENT );
	Slur object1;
	Slur object2;
	SlurAttributesPtr attributes1 = std::make_shared<SlurAttributes>();
	SlurAttributesPtr attributesNull;
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
