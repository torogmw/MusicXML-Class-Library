/*
4429
<xs:element name="doit" type="empty-line">
	<xs:annotation>
		<xs:documentation>The doit element is an indeterminate slide attached to a single note. The doit element appears after the main note and goes above the main pitch.</xs:documentation>
	</xs:annotation>
</xs:element>
<xs:complexType name="empty-line">
	<xs:annotation>
		<xs:documentation>The empty-line type represents an empty element with line-shape, line-type, dashed-formatting, print-style and placement attributes.</xs:documentation>
	</xs:annotation>
	<xs:attributeGroup ref="line-shape"/>
	<xs:attributeGroup ref="line-type"/>
	<xs:attributeGroup ref="dashed-formatting"/>
	<xs:attributeGroup ref="print-style"/>
	<xs:attributeGroup ref="placement"/>
</xs:complexType>
*/
#include "MxTestCompileControl.h"
#ifdef RUN_PHASE1_TESTS
#include "TestHarness.h"
#include "Elements.h"
#include <sstream>

using namespace mx::t;
using namespace mx::e;

TEST( Test01, Doit )
{
	std::string indentString( INDENT );
	Doit object1;
	Doit object2;
	EmptyLineAttributesPtr attributes1 = std::make_shared<EmptyLineAttributes>();
	EmptyLineAttributesPtr attributesNull;
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
	std::string expected = R"(<doit/>)";
	std::string actual = default_constructed.str();
	CHECK_EQUAL( expected, actual )
	expected = indentString+indentString+R"(<doit default-x="0.1" font-style="italic" font-weight="bold"/>)";
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