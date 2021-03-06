#include "MxTestCompileControl.h"
#ifdef RUN_PHASE1_TESTS
#include "TestHarness.h"
#include "Elements.h"
#include <sstream>

using namespace mx::t;
using namespace mx::e;

TEST( Test01, BarStyle )
{
	std::string indentString( INDENT );
	BarStyleEnum value1 = BarStyleEnum::heavy;
	BarStyleEnum value2 = BarStyleEnum::lightHeavy;
	BarStyle object1;
	BarStyle object2( value2 );
	BarStyleAttributesPtr attributes1 = std::make_shared<BarStyleAttributes>();
	BarStyleAttributesPtr attributesNull;
	/* set some attribute1 values here */
	object2.setAttributes( attributes1 );
    attributes1->hasColor = true;
    attributes1->color = Color{ 100, 101, 102, 103 };
	std::stringstream default_constructed;
	object1.toStream( default_constructed, 0 );
	std::stringstream object2_stream;
	object2.toStream( object2_stream, 2 );
	std::string expected = R"(<bar-style>regular</bar-style>)";
	std::string actual = default_constructed.str();
	CHECK_EQUAL( expected, actual )
	expected = indentString+indentString+R"(<bar-style color="#64656667">light-heavy</bar-style>)";
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
#endif