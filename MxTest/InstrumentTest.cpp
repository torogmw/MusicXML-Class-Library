/*
4995
<xs:element name="instrument" type="instrument" minOccurs="0"/>
<xs:complexType name="instrument">
	<xs:annotation>
		<xs:documentation>The instrument type distinguishes between score-instrument elements in a score-part. The id attribute is an IDREF back to the score-instrument ID. If multiple score-instruments are specified on a score-part, there should be an instrument element for each note in the part.</xs:documentation>
	</xs:annotation>
	<xs:attribute name="id" type="xs:IDREF" use="required"/>
</xs:complexType>
*/
#include "TestHarness.h"
#include "Elements.h"
#include <sstream>

using namespace mx::types;
using namespace mx::e;

TEST( Test01, Instrument )
{
	std::string indentString( INDENT );
	Instrument object1;
	Instrument object2;
	InstrumentAttributesPtr attributes1 = std::make_shared<InstrumentAttributes>();
	InstrumentAttributesPtr attributesNull;
	/* set some attribute1 values here */
    attributes1->id = XsID{ "ID0023" };
	object2.setAttributes( attributes1 );
	object2.setAttributes( attributesNull ); /* should have no affect */
	std::stringstream default_constructed;
	object1.toStream( default_constructed, 0 );
	std::stringstream object2_stream;
	object2.toStream( object2_stream, 2 );
	std::string expected = R"(<instrument id="ID"/>)";
	std::string actual = default_constructed.str();
	CHECK_EQUAL( expected, actual )
	expected = indentString+indentString+R"(<instrument id="ID0023"/>)";
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
