#include "TestHarness.h"
#include "Elements.h"
#include <sstream>

using namespace mx::types;
using namespace mx::e;

TEST( Test01, FirstFret )
{
	std::string indentString( INDENT );
	PositiveInteger value1{ 2 };
	PositiveInteger value2{ 33 };
	FirstFret object1;
	FirstFret object2( value2 );
	FirstFretAttributesPtr attributes1 = std::make_shared<FirstFretAttributes>();
	FirstFretAttributesPtr attributesNull;
	/* set some attribute1 values here */
    attributes1->hasText = true;
    attributes1->text = XsToken{ "sometext" };
    attributes1->hasLocation = true;
    attributes1->location = LeftRight::right;
	object2.setAttributes( attributes1 );
	std::stringstream default_constructed;
	object1.toStream( default_constructed, 0 );
	std::stringstream object2_stream;
	object2.toStream( object2_stream, 2 );
	std::string expected = R"(<first-fret>1</first-fret>)";
	std::string actual = default_constructed.str();
	CHECK_EQUAL( expected, actual )
	expected = indentString+indentString+R"(<first-fret text="sometext" location="right">33</first-fret>)";
	actual = object2_stream.str();
	CHECK_EQUAL( expected, actual )
	value1 = object2.getValue();
	object1.setValue( value1 );
	std::stringstream o1;	std::stringstream o2;	bool isOneLineOnly = false;
	object1.streamContents( o1, 0, isOneLineOnly );
	object2.streamContents( o2, 0, isOneLineOnly );
	CHECK( isOneLineOnly )
	CHECK_EQUAL( o1.str(), o2.str() )
}
