/*
6001
<xs:element name="opus" type="opus" minOccurs="0"/>
<xs:complexType name="opus">
	<xs:annotation>
		<xs:documentation>The opus type represents a link to a MusicXML opus document that composes multiple MusicXML scores into a collection.</xs:documentation>
	</xs:annotation>
	<xs:attributeGroup ref="link-attributes"/>
</xs:complexType>
*/
#include "MxTestCompileControl.h"
#ifdef RUN_PHASE2_TESTS
#include "TestHarness.h"
#include "Elements.h"
#include <sstream>

using namespace mx::types;
using namespace mx::e;

TEST( Test01, Opus )
{
	std::string indentString( INDENT );
	Opus object1;
	Opus object2;
	OpusAttributesPtr attributes1 = std::make_shared<OpusAttributes>();
	OpusAttributesPtr attributesNull;
	/* set some attribute1 values here */
    attributes1->hasActuate = true;
    attributes1->hasRole = true;
    attributes1->hasTitle = true;
    attributes1->hasType = true;
    attributes1->title = XlinkTitle{ "Hello World" };
    attributes1->role = XlinkRole{ "This is my role" };
    attributes1->actuate = XlinkActuate::none;
	object2.setAttributes( attributes1 );
	object2.setAttributes( attributesNull ); /* should have no affect */
	std::stringstream default_constructed;
	object1.toStream( default_constructed, 0 );
	std::stringstream object2_stream;
	object2.toStream( object2_stream, 2 );
	std::string expected = R"(<opus xlink:href=""/>)";
	std::string actual = default_constructed.str();
	CHECK_EQUAL( expected, actual )
	expected = indentString+indentString+R"(<opus xlink:href="" xlink:type="simple" xlink:role="This is my role" xlink:title="Hello World" xlink:actuate="none"/>)";
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
#endif