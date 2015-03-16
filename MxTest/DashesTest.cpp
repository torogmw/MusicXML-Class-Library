/*
3358
<xs:element name="dashes" type="dashes"/>
<xs:complexType name="dashes">
	<xs:annotation>
		<xs:documentation>The dashes type represents dashes, used for instance with cresc. and dim. marks.</xs:documentation>
	</xs:annotation>
	<xs:attribute name="type" type="start-stop-continue" use="required"/>
	<xs:attribute name="number" type="number-level"/>
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

TEST( Test01, Dashes )
{
	std::string indentString( INDENT );
	Dashes object1;
	Dashes object2;
	DashesAttributesPtr attributes1 = std::make_shared<DashesAttributes>();
	DashesAttributesPtr attributesNull;
	/* set some attribute1 values here */
    attributes1->hasDefaultX = true;
    attributes1->defaultX = TenthsValue{ 0.1 };
    attributes1->hasNumber = true;
    attributes1->number = NumberLevel{ 2 };
    
	object2.setAttributes( attributes1 );
	object2.setAttributes( attributesNull ); /* should have no affect */
	std::stringstream default_constructed;
	object1.toStream( default_constructed, 0 );
	std::stringstream object2_stream;
	object2.toStream( object2_stream, 2 );
	std::string expected = R"(<dashes type="start"/>)";
	std::string actual = default_constructed.str();
	CHECK_EQUAL( expected, actual )
	expected = indentString+indentString+R"(<dashes type="start" number="2" default-x="0.1"/>)";
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
