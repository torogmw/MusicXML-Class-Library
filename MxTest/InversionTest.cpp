#include "MxTestCompileControl.h"
#ifdef RUN_PHASE1_TESTS
#include "TestHarness.h"
#include "Elements.h"
#include <sstream>

using namespace mx::t;
using namespace mx::e;

TEST( Test01, Inversion )
{
	std::string indentString( INDENT );
	NonNegativeInteger value1{ 2 };
	NonNegativeInteger value2{ 3 };
	Inversion object1;
	Inversion object2( value2 );
	InversionAttributesPtr attributes1 = std::make_shared<InversionAttributes>();
	InversionAttributesPtr attributesNull;
	/* set some attribute1 values here */
    attributes1->hasFontStyle = true;
    attributes1->fontStyle = FontStyle::italic;
	object2.setAttributes( attributes1 );
	std::stringstream default_constructed;
	object1.toStream( default_constructed, 0 );
	std::stringstream object2_stream;
	object2.toStream( object2_stream, 2 );
	std::string expected = R"(<inversion>1</inversion>)";
	std::string actual = default_constructed.str();
	CHECK_EQUAL( expected, actual )
	expected = indentString+indentString+R"(<inversion font-style="italic">3</inversion>)";
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