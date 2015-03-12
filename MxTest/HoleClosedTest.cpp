#include "TestHarness.h"
#include "Elements.h"
#include <sstream>

using namespace mx::types;
using namespace mx::e;

TEST( Test01, HoleClosed )
{
	std::string indentString( INDENT );
	HoleClosedValue value1 = HoleClosedValue::half;
	HoleClosedValue value2 = HoleClosedValue::yes;
	HoleClosed object1;
	HoleClosed object2( value2 );
	HoleClosedAttributesPtr attributes1 = std::make_shared<HoleClosedAttributes>();
	HoleClosedAttributesPtr attributesNull;
	/* set some attribute1 values here */
    attributes1->hasLocation = true;
    attributes1->location = HoleClosedLocation::bottom;
	object2.setAttributes( attributes1 );
	std::stringstream default_constructed;
	object1.toStream( default_constructed, 0 );
	std::stringstream object2_stream;
	object2.toStream( object2_stream, 2 );
	std::string expected = R"(<hole-closed>no</hole-closed>)";
	std::string actual = default_constructed.str();
	CHECK_EQUAL( expected, actual )
	expected = indentString+indentString+R"(<hole-closed location="bottom">yes</hole-closed>)";
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
