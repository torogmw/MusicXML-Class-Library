/*
5143
<xs:element name="inverted-turn" type="horizontal-turn">
	<xs:annotation>
		<xs:documentation>The inverted-turn element has the shape which goes down and then up.</xs:documentation>
	</xs:annotation>
</xs:element>
<xs:complexType name="horizontal-turn">
	<xs:annotation>
		<xs:documentation>The horizontal-turn type represents turn elements that are horizontal rather than vertical. These are empty elements with print-style, placement, trill-sound, and slash attributes. If the slash attribute is yes, then a vertical line is used to slash the turn; it is no by default.</xs:documentation>
	</xs:annotation>
	<xs:attributeGroup ref="print-style"/>
	<xs:attributeGroup ref="placement"/>
	<xs:attributeGroup ref="trill-sound"/>
	<xs:attribute name="slash" type="yes-no"/>
</xs:complexType>
*/
#include "MxTestCompileControl.h"
#ifdef RUN_PHASE1_TESTS
#include "TestHarness.h"
#include "Elements.h"
#include <sstream>

using namespace mx::t;
using namespace mx::e;

TEST( Test01, InvertedTurn )
{
	std::string indentString( INDENT );
	InvertedTurn object1;
	InvertedTurn object2;
	InvertedTurnAttributesPtr attributes1 = std::make_shared<InvertedTurnAttributes>();
	InvertedTurnAttributesPtr attributesNull;
	/* set some attribute1 values here */
    attributes1->hasDefaultX = true;
    attributes1->defaultX = TenthsValue{ 0.1 };
    
	object2.setAttributes( attributes1 );
	object2.setAttributes( attributesNull ); /* should have no affect */
	std::stringstream default_constructed;
	object1.toStream( default_constructed, 0 );
	std::stringstream object2_stream;
	object2.toStream( object2_stream, 2 );
	std::string expected = R"(<inverted-turn/>)";
	std::string actual = default_constructed.str();
	CHECK_EQUAL( expected, actual )
	expected = indentString+indentString+R"(<inverted-turn default-x="0.1"/>)";
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