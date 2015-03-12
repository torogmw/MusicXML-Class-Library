#include "TestHarness.h"
#include "Elements.h"
#include <sstream>

using namespace mx::types;
using namespace mx::e;

TEST( Test01, OtherArticulation )
{
	std::string indentString( INDENT );
	XsString value1{ "ding" };
	XsString value2{ "dong" };
	OtherArticulation object1;
	OtherArticulation object2( value2 );
	OtherArticulationAttributesPtr attributes1 = std::make_shared<OtherArticulationAttributes>();
	OtherArticulationAttributesPtr attributesNull;
	/* set some attribute1 values here */
	object2.setAttributes( attributes1 );
    attributes1->hasPlacement = true;
    attributes1->placement = AboveBelow::above;
	std::stringstream default_constructed;
	object1.toStream( default_constructed, 0 );
	std::stringstream object2_stream;
	object2.toStream( object2_stream, 2 );
	std::string expected = R"(<other-articulation></other-articulation>)";
	std::string actual = default_constructed.str();
	CHECK_EQUAL( expected, actual )
	expected = indentString+indentString+R"(<other-articulation placement="above">dong</other-articulation>)";
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
