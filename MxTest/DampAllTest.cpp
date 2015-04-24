/*
3381
<xs:element name="damp-all" type="empty-print-style-align">
	<xs:annotation>
		<xs:documentation>The damp-all element specifies a harp damping mark for all strings.</xs:documentation>
	</xs:annotation>
</xs:element>
<xs:complexType name="empty-print-style-align">
	<xs:annotation>
		<xs:documentation>The empty-print-style-align type represents an empty element with print-style-align attribute group.</xs:documentation>
	</xs:annotation>
	<xs:attributeGroup ref="print-style-align"/>
</xs:complexType>
*/
#include "MxTestCompileControl.h"
#ifdef RUN_PHASE1_TESTS
#include "TestHarness.h"
#include "Elements.h"
#include <sstream>

using namespace mx::t;
using namespace mx::e;

TEST( Test01, DampAll )
{
	std::string indentString( INDENT );
	DampAll object1;
	DampAll object2;
	EmptyPrintObjectStyleAlignAttributesPtr attributes1 = std::make_shared<EmptyPrintObjectStyleAlignAttributes>();
	EmptyPrintObjectStyleAlignAttributesPtr attributesNull;
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
	std::string expected = R"(<damp-all/>)";
	std::string actual = default_constructed.str();
	CHECK_EQUAL( expected, actual )
	expected = indentString+indentString+R"(<damp-all default-x="0.1" font-style="italic" font-weight="bold"/>)";
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
