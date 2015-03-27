/*
4599, 4824, 4828
<xs:element name="extend" type="extend"/>
<xs:complexType name="extend">
	<xs:annotation>
		<xs:documentation>The extend type represents lyric word extension / melisma lines as well as figured bass extensions. The optional type and position attributes are added in Version 3.0 to provide better formatting control.</xs:documentation>
	</xs:annotation>
	<xs:attribute name="type" type="start-stop-continue"/>
	<xs:attributeGroup ref="print-style"/>
</xs:complexType>
*/
#include "MxTestCompileControl.h"
#ifdef RUN_PHASE1_TESTS
#include "TestHarness.h"
#include "Elements.h"
#include <sstream>

using namespace mx::types;
using namespace mx::e;

TEST( Test01, Extend )
{
	std::string indentString( INDENT );
	Extend object1;
	Extend object2;
	ExtendAttributesPtr attributes1 = std::make_shared<ExtendAttributes>();
	ExtendAttributesPtr attributesNull;
	/* set some attribute1 values here */
    attributes1->hasDefaultX = true;
    attributes1->defaultX = TenthsValue{ 0.1 };
   
	object2.setAttributes( attributes1 );
	object2.setAttributes( attributesNull ); /* should have no affect */
	std::stringstream default_constructed;
	object1.toStream( default_constructed, 0 );
	std::stringstream object2_stream;
	object2.toStream( object2_stream, 2 );
	std::string expected = R"(<extend/>)";
	std::string actual = default_constructed.str();
	CHECK_EQUAL( expected, actual )
	expected = indentString+indentString+R"(<extend default-x="0.1"/>)";
	actual = object2_stream.str();
	CHECK_EQUAL( expected, actual )
	std::stringstream o1;	std::stringstream o2;	bool isOneLineOnly = false;
	object1.streamContents( o1, 0, isOneLineOnly );
	object2.streamContents( o2, 0, isOneLineOnly );
	CHECK( isOneLineOnly )
	CHECK_EQUAL( o1.str(), o2.str() )
	CHECK( !object1.hasContents() )
	CHECK( !object1.hasAttributes() )
	CHECK( object2.hasAttributes() )
}
#endif