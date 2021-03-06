/*
5714
<xs:element name="music-font" type="empty-font" minOccurs="0"/>
<xs:complexType name="empty-font">
	<xs:annotation>
		<xs:documentation>The empty-font type represents an empty element with font attributes.</xs:documentation>
	</xs:annotation>
	<xs:attributeGroup ref="font"/>
</xs:complexType>
*/
#include "MxTestCompileControl.h"
#ifdef RUN_PHASE2_TESTS
#include "TestHarness.h"
#include "Elements.h"
#include <sstream>

using namespace mx::t;
using namespace mx::e;

TEST( Test01, MusicFont )
{
	std::string indentString( INDENT );
	MusicFont object1;
	MusicFont object2;
	EmptyFontAttributesPtr attributes1 = std::make_shared<EmptyFontAttributes>();
	EmptyFontAttributesPtr attributesNull;
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
	std::string expected = R"(<music-font/>)";
	std::string actual = default_constructed.str();
	CHECK_EQUAL( expected, actual )
	expected = indentString+indentString+R"(<music-font font-style="italic" font-weight="bold"/>)";
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