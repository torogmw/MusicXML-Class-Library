#include "TestHarness.h"
#include "Elements.h"
#include <sstream>

using namespace mx::types;
using namespace mx::e;

TEST( Test01, Cancel )
{
	std::string indentString( INDENT );
	Fifths value1{ 2 };
	Fifths value2{ 10 };
	Cancel object1;
	Cancel object2( value2 );
	CancelAttributesPtr attributes1 = std::make_shared<CancelAttributes>();
	CancelAttributesPtr attributesNull;
	/* set some attribute1 values here */
    attributes1->location = CancelLocation::beforeBarline;
    attributes1->hasLocation = true;
	object2.setAttributes( attributes1 );
	std::stringstream default_constructed;
	object1.toStream( default_constructed, 0 );
	std::stringstream object2_stream;
	object2.toStream( object2_stream, 2 );
	std::string expected = R"(<cancel>0</cancel>)";
	std::string actual = default_constructed.str();
	CHECK_EQUAL( expected, actual )
	expected = indentString+indentString+R"(<cancel location="before-barline">10</cancel>)";
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
