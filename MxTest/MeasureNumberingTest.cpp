#include "MxTestCompileControl.h"
#ifdef RUN_PHASE2_TESTS
#include "TestHarness.h"
#include "Elements.h"
#include <sstream>

using namespace mx::t;
using namespace mx::e;

TEST( Test01, MeasureNumbering )
{
	std::string indentString( INDENT );
	MeasureNumberingValue value1 = MeasureNumberingValue::measure;
	MeasureNumberingValue value2 = MeasureNumberingValue::system;
	MeasureNumbering object1;
	MeasureNumbering object2( value2 );
	MeasureNumberingAttributesPtr attributes1 = std::make_shared<MeasureNumberingAttributes>();
	MeasureNumberingAttributesPtr attributesNull;
	/* set some attribute1 values here */
    attributes1->hasHalign = true;
    attributes1->halign = LeftCenterRight::right;
	object2.setAttributes( attributes1 );
	std::stringstream default_constructed;
	object1.toStream( default_constructed, 0 );
	std::stringstream object2_stream;
	object2.toStream( object2_stream, 2 );
	std::string expected = R"(<measure-numbering>none</measure-numbering>)";
	std::string actual = default_constructed.str();
	CHECK_EQUAL( expected, actual )
	expected = indentString+indentString+R"(<measure-numbering halign="right">system</measure-numbering>)";
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