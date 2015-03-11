#include "TestHarness.h"
#include "Elements.h"
#include <sstream>

using namespace mx::types;
using namespace mx::e;

TEST( Test01, Slide )
{
	std::string indentString( INDENT );
	XsString value1{ "Popin" };
	XsString value2{ "Fresh" };
	Slide object1;
	Slide object2( value2 );
	SlideAttributesPtr attributes1 = std::make_shared<SlideAttributes>();
	SlideAttributesPtr attributesNull;
	/* set some attribute1 values here */
    attributes1->hasFirstBeat = true;
    attributes1->firstBeat = Percent{ 0.321 };
    attributes1->hasLastBeat = true;
    attributes1->lastBeat = Percent{ 0.234 };
    attributes1->hasNumber = true;
    attributes1->number = NumberLevel{ 2 };
	object2.setAttributes( attributes1 );
	std::stringstream default_constructed;
	object1.toStream( default_constructed, 0 );
	std::stringstream object2_stream;
	object2.toStream( object2_stream, 2 );
	std::string expected = R"(<slide type="start"></slide>)";
	std::string actual = default_constructed.str();
	CHECK_EQUAL( expected, actual )
	expected = indentString+indentString+R"(<slide type="start" number="2" first-beat="0.321" last-beat="0.234">Fresh</slide>)";
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
