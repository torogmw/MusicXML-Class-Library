#include "TestHarness.h"
#include "Elements.h"
#include <sstream>

using namespace mx::types;
using namespace mx::e;

TEST( Test01, Footnote )
{
	std::string indentString( INDENT );
	XsString value1{ "internal" };
	XsString value2{ "external" };
	Footnote object1;
	Footnote object2( value2 );
	FootnoteAttributesPtr attributes1 = std::make_shared<FootnoteAttributes>();
	FootnoteAttributesPtr attributesNull;
	/* set some attribute1 values here */
    attributes1->hasEnclosure = true;
    attributes1->enclosure = EnclosureShape::diamond;
	object2.setAttributes( attributes1 );
	std::stringstream default_constructed;
	object1.toStream( default_constructed, 0 );
	std::stringstream object2_stream;
	object2.toStream( object2_stream, 2 );
	std::string expected = R"(<footnote></footnote>)";
	std::string actual = default_constructed.str();
	CHECK_EQUAL( expected, actual )
	expected = indentString+indentString+R"(<footnote enclosure="diamond">external</footnote>)";
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
