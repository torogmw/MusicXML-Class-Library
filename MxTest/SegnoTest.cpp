/*
3030, 3333
<xs:element name="segno" type="empty-print-style-align" maxOccurs="unbounded">
	<xs:annotation>
		<xs:documentation>The segno element is the visual indicator of a segno sign. A sound element is needed to guide playback applications reliably.</xs:documentation>
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
#ifdef RUN_PHASE2_TESTS
#include "TestHarness.h"
#include "Elements.h"
#include <sstream>

using namespace mx::types;
using namespace mx::e;

TEST( Test01, Segno )
{
	std::string indentString( INDENT );
	Segno object1;
	Segno object2;
	EmptyPrintObjectStyleAlignAttributesPtr attributes1 = std::make_shared<EmptyPrintObjectStyleAlignAttributes>();
	EmptyPrintObjectStyleAlignAttributesPtr attributesNull;
	/* set some attribute1 values here */
    attributes1->hasHalign = true;
    attributes1->hasFontStyle = true;
    attributes1->hasFontWeight = true;
    attributes1->halign = LeftCenterRight::right;
    attributes1->fontStyle = FontStyle::italic;
    attributes1->fontWeight = FontWeight::bold;
	object2.setAttributes( attributes1 );
	object2.setAttributes( attributesNull ); /* should have no affect */
	std::stringstream default_constructed;
	object1.toStream( default_constructed, 0 );
	std::stringstream object2_stream;
	object2.toStream( object2_stream, 2 );
	std::string expected = R"(<segno/>)";
	std::string actual = default_constructed.str();
	CHECK_EQUAL( expected, actual )
	expected = indentString+indentString+R"(<segno font-style="italic" font-weight="bold" halign="right"/>)";
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