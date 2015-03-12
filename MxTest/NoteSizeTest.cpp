#include "TestHarness.h"
#include "Elements.h"
#include <sstream>

using namespace mx::types;
using namespace mx::e;

TEST( Test01, NoteSize )
{
	std::string indentString( INDENT );
	NonNegativeDecimal value1{ 2 };
	NonNegativeDecimal value2{ 3 };
	NoteSize object1;
	NoteSize object2( value2 );
	NoteSizeAttributesPtr attributes1 = std::make_shared<NoteSizeAttributes>();
	NoteSizeAttributesPtr attributesNull;
	/* set some attribute1 values here */
    attributes1->type = NoteSizeType::grace;
	object2.setAttributes( attributes1 );
	std::stringstream default_constructed;
	object1.toStream( default_constructed, 0 );
	std::stringstream object2_stream;
	object2.toStream( object2_stream, 2 );
	std::string expected = R"(<note-size type="large">0</note-size>)";
	std::string actual = default_constructed.str();
	CHECK_EQUAL( expected, actual )
	expected = indentString+indentString+R"(<note-size type="grace">3</note-size>)";
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
