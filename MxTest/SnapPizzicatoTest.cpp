/*
5385
<xs:element name="snap-pizzicato" type="empty-placement">
	<xs:annotation>
		<xs:documentation>The snap-pizzicato element represents the snap pizzicato symbol. This is a circle with a line, where the line comes inside the circle. It is distinct from the thumb-position symbol, where the line does not come inside the circle.</xs:documentation>
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

using namespace mx::types;
using namespace mx::e;

TEST( Test01, SnapPizzicato )
{
	std::string indentString( INDENT );
	SnapPizzicato object1;
	SnapPizzicato object2;
	EmptyPlacementAttributesPtr attributes1 = std::make_shared<EmptyPlacementAttributes>();
	EmptyPlacementAttributesPtr attributesNull;
	/* set some attribute1 values here */
    attributes1->hasDefaultX = true;
    attributes1->hasFontStyle = true;
    attributes1->hasFontWeight = true;
    attributes1->defaultX = TenthsValue{ 0.1 };
    attributes1->fontStyle = FontStyle::italic;
    attributes1->fontWeight = FontWeight::bold;

	object2.setAttributes( attributes1 );
	object2.setAttributes( attributesNull ); /* should have no affect */
	std::stringstream default_constructed;
	object1.toStream( default_constructed, 0 );
	std::stringstream object2_stream;
	object2.toStream( object2_stream, 2 );
	std::string expected = R"(<snap-pizzicato/>)";
	std::string actual = default_constructed.str();
	CHECK_EQUAL( expected, actual )
	expected = indentString+indentString+R"(<snap-pizzicato default-x="0.1" font-style="italic" font-weight="bold"/>)";
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
