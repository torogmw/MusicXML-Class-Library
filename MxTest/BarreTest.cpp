/*
3491
<xs:element name="barre" type="barre" minOccurs="0"/>
<xs:complexType name="barre">
	<xs:annotation>
		<xs:documentation>The barre element indicates placing a finger over multiple strings on a single fret. The type is "start" for the lowest pitched string (e.g., the string with the highest MusicXML number) and is "stop" for the highest pitched string.</xs:documentation>
	</xs:annotation>
	<xs:attribute name="type" type="start-stop" use="required"/>
	<xs:attributeGroup ref="color"/>
</xs:complexType>
*/
#include "TestHarness.h"
#include "Elements.h"
#include <sstream>

using namespace mx::types;
using namespace mx::e;

TEST( Test01, Barre )
{
	std::string indentString( INDENT );
	Barre object1;
	Barre object2;
	BarreAttributesPtr attributes1 = std::make_shared<BarreAttributes>();
	BarreAttributesPtr attributesNull;
	/* set some attribute1 values here */
    attributes1->type = StartStop::stop;
	object2.setAttributes( attributes1 );
	object2.setAttributes( attributesNull ); /* should have no affect */
	std::stringstream default_constructed;
	object1.toStream( default_constructed, 0 );
	std::stringstream object2_stream;
	object2.toStream( object2_stream, 2 );
	std::string expected = R"(<barre type="start"/>)";
	std::string actual = default_constructed.str();
	CHECK_EQUAL( expected, actual )
	expected = indentString+indentString+R"(<barre type="stop"/>)";
	actual = object2_stream.str();
	CHECK_EQUAL( expected, actual )
	std::stringstream o1;	std::stringstream o2;	bool isOneLineOnly = false;
	object1.streamContents( o1, 0, isOneLineOnly );
	object2.streamContents( o2, 0, isOneLineOnly );
	CHECK( isOneLineOnly )
	CHECK_EQUAL( o1.str(), o2.str() )
	CHECK( !object1.hasContents() )
	CHECK( object1.hasAttributes() )
	CHECK( object2.hasAttributes() )
}
