#include "MxTestCompileControl.h"
#ifdef RUN_PHASE1_TESTS
/*
4384
<xs:element name="accent" type="empty-placement">
	<xs:annotation>
		<xs:documentation>The accent element indicates a regular horizontal accent mark.</xs:documentation>
	</xs:annotation>
</xs:element>
<xs:complexType name="empty-placement">
	<xs:annotation>
		<xs:documentation>The empty-placement type represents an empty element with print-style and placement attributes.</xs:documentation>
	</xs:annotation>
	<xs:attributeGroup ref="print-style"/>
	<xs:attributeGroup ref="placement"/>
</xs:complexType>
*/
#include "TestHarness.h"
#include "Elements.h"
#include <sstream>

using namespace mx::t;
using namespace mx::e;

TEST( Test01, Accent )
{
	std::string indentString( INDENT );
	Accent object1;
	Accent object2;
	EmptyPlacementAttributesPtr attributes1 = std::make_shared<EmptyPlacementAttributes>();
	EmptyPlacementAttributesPtr attributesNull;
	/* set some attribute1 values here */
    attributes1->hasFontStyle = true;
    attributes1->hasFontWeight = true;
    attributes1->fontStyle = FontStyle::italic;
    attributes1->fontWeight = FontWeight::bold;

	object2.setAttributes( attributes1 );
	object2.setAttributes( attributesNull ); /* should have no affect */
	std::stringstream default_constructed;
	object1.toStream( default_constructed, 0 );
	std::stringstream object2_stream;
	object2.toStream( object2_stream, 2 );
	std::string expected = R"(<accent/>)";
	std::string actual = default_constructed.str();
	CHECK_EQUAL( expected, actual )
	expected = indentString+indentString+R"(<accent font-style="italic" font-weight="bold"/>)";
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
#endif