/*
5158
<xs:element name="shake" type="empty-trill-sound">
	<xs:annotation>
		<xs:documentation>The shake element has a similar appearance to an inverted-mordent element.</xs:documentation>
	</xs:annotation>
</xs:element>
<xs:complexType name="empty-trill-sound">
	<xs:annotation>
		<xs:documentation>The empty-trill-sound type represents an empty element with print-style, placement, and trill-sound attributes.</xs:documentation>
	</xs:annotation>
	<xs:attributeGroup ref="print-style"/>
	<xs:attributeGroup ref="placement"/>
	<xs:attributeGroup ref="trill-sound"/>
</xs:complexType>
*/
#include "TestHarness.h"
#include "Elements.h"
#include <sstream>

using namespace mx::types;
using namespace mx::e;

TEST( Test01, Shake )
{
	std::string indentString( INDENT );
	Shake object1;
	Shake object2;
	EmptyTrillSoundAttributesPtr attributes1 = std::make_shared<EmptyTrillSoundAttributes>();
	EmptyTrillSoundAttributesPtr attributesNull;
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
