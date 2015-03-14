#include "TestHarness.h"
#include "Elements.h"
using namespace mx::types;
using namespace mx::e;

TEST( TempTest, TempTest )
{
    std::string indentString( INDENT );
	AccordionHigh object1;
	std::stringstream default_constructed;
	object1.toStream( default_constructed, 0 );
	std::stringstream indented_stream;
	object1.toStream( indented_stream, 2 );
	std::string expected = R"(<accordion-high/>)";
	std::string actual = default_constructed.str();
	CHECK_EQUAL( expected, actual )
	expected = indentString+indentString+expected;
	actual = indented_stream.str();
	CHECK_EQUAL( expected, actual )
	std::stringstream o1;
    bool isOneLineOnly = false;
	object1.streamContents( o1, 0, isOneLineOnly );
	CHECK( isOneLineOnly )
	CHECK_EQUAL( o1.str(), "" )
    CHECK( ! object1.hasAttributes() )
    CHECK( ! object1.hasContents() )
}