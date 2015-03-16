/*
3361
<xs:element name="bracket" type="bracket"/>
<xs:complexType name="bracket">
	<xs:annotation>
		<xs:documentation>Brackets are combined with words in a variety of modern directions. The line-end attribute specifies if there is a jog up or down (or both), an arrow, or nothing at the start or end of the bracket. If the line-end is up or down, the length of the jog can be specified using the end-length attribute. The line-type is solid by default.</xs:documentation>
	</xs:annotation>
	<xs:attribute name="type" type="start-stop-continue" use="required"/>
	<xs:attribute name="number" type="number-level"/>
	<xs:attribute name="line-end" type="line-end" use="required"/>
	<xs:attribute name="end-length" type="tenths"/>
	<xs:attributeGroup ref="line-type"/>
	<xs:attributeGroup ref="dashed-formatting"/>
	<xs:attributeGroup ref="position"/>
	<xs:attributeGroup ref="color"/>
</xs:complexType>
*/
#include "TestHarness.h"
#include "Elements.h"
#include <sstream>

using namespace mx::types;
using namespace mx::e;

TEST( Test01, Bracket )
{
	std::string indentString( INDENT );
	Bracket object1;
	Bracket object2;
	BracketAttributesPtr attributes1 = std::make_shared<BracketAttributes>();
	BracketAttributesPtr attributesNull;
	/* set some attribute1 values here */
    attributes1->hasBracket = true;
    attributes1->bracket = YesNo::yes;
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
