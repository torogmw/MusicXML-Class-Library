/*
5662, 5683, 6340
<xs:element name="link" type="link"/>
<xs:complexType name="link">
	<xs:annotation>
		<xs:documentation>The link type serves as an outgoing simple XLink. It is also used to connect a MusicXML score with a MusicXML opus. If a relative link is used within a document that is part of a compressed MusicXML file, the link is relative to the  root folder of the zip file.</xs:documentation>
	</xs:annotation>
	<xs:attributeGroup ref="link-attributes"/>
	<xs:attribute name="name" type="xs:token"/>
	<xs:attributeGroup ref="element-position"/>
	<xs:attributeGroup ref="position"/>
</xs:complexType>
*/
#include "TestHarness.h"
#include "Elements.h"
#include <sstream>

using namespace mx::types;
using namespace mx::e;

TEST( Test01, Link )
{
	std::string indentString( INDENT );
	Link object1;
	Link object2;
	LinkAttributesPtr attributes1 = std::make_shared<LinkAttributes>();
	LinkAttributesPtr attributesNull;
	/* set some attribute1 values here */
    attributes1->hasDefaultX = true;
    attributes1->defaultX = TenthsValue{ 0.1 };
    
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
