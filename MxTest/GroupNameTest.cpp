#include "MxTestCompileControl.h"
#ifdef RUN_PHASE1_TESTS
#include "TestHarness.h"
#include "Elements.h"
#include <sstream>

using namespace mx::t;
using namespace mx::e;

TEST( Test01, GroupName )
{
	std::string indentString( INDENT );
	XsString value1{ "Piano" };
	XsString value2{ "Strings" };
	GroupName object1;
	GroupName object2( value2 );
	GroupNameAttributesPtr attributes1 = std::make_shared<GroupNameAttributes>();
	GroupNameAttributesPtr attributesNull;
	/* set some attribute1 values here */
    attributes1->hasFontSize = true;
    attributes1->fontSize = FontSize{ Decimal{ 12.1 } };
    attributes1->defaultY = TenthsValue{ 8.1 };
    attributes1->hasDefaultY = true;
	object2.setAttributes( attributes1 );
    object2.setAttributes( attributesNull );
	std::stringstream default_constructed;
	object1.toStream( default_constructed, 0 );
	std::stringstream object2_stream;
	object2.toStream( object2_stream, 2 );
	std::string expected = R"(<group-name></group-name>)";
	std::string actual = default_constructed.str();
	CHECK_EQUAL( expected, actual )
	expected = indentString+indentString+R"(<group-name default-y="8.1" font-size="12.1">Strings</group-name>)";
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