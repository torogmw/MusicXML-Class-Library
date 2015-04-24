/*
3370
<xs:element name="octave-shift" type="octave-shift"/>
<xs:complexType name="octave-shift">
	<xs:annotation>
		<xs:documentation>The octave shift type indicates where notes are shifted up or down from their true pitched values because of printing difficulty. Thus a treble clef line noted with 8va will be indicated with an octave-shift down from the pitch data indicated in the notes. A size of 8 indicates one octave; a size of 15 indicates two octaves.</xs:documentation>
	</xs:annotation>
	<xs:attribute name="type" type="up-down-stop-continue" use="required"/>
	<xs:attribute name="number" type="number-level"/>
	<xs:attribute name="size" type="xs:positiveInteger" default="8"/>
	<xs:attributeGroup ref="dashed-formatting"/>
	<xs:attributeGroup ref="print-style"/>
</xs:complexType>
*/
#include "MxTestCompileControl.h"
#ifdef RUN_PHASE2_TESTS
#include "TestHarness.h"
#include "Elements.h"
#include <sstream>

using namespace mx::t;
using namespace mx::e;

TEST( Test01, OctaveShift )
{
	std::string indentString( INDENT );
	OctaveShift object1;
	OctaveShift object2;
	OctaveShiftAttributesPtr attributes1 = std::make_shared<OctaveShiftAttributes>();
	OctaveShiftAttributesPtr attributesNull;
	/* set some attribute1 values here */
    attributes1->hasDefaultX = true;
    attributes1->defaultX = TenthsValue{ 0.1 };
    attributes1->hasNumber = true;
    attributes1->number = NumberLevel{ 2 };
    
	object2.setAttributes( attributes1 );
	object2.setAttributes( attributesNull ); /* should have no affect */
	std::stringstream default_constructed;
	object1.toStream( default_constructed, 0 );
	std::stringstream object2_stream;
	object2.toStream( object2_stream, 2 );
	std::string expected = R"(<octave-shift type="up"/>)";
	std::string actual = default_constructed.str();
	CHECK_EQUAL( expected, actual )
	expected = indentString+indentString+R"(<octave-shift type="up" number="2" default-x="0.1"/>)";
	actual = object2_stream.str();
	CHECK_EQUAL( expected, actual )
	std::stringstream o1;	std::stringstream o2;	bool isOneLineOnly = false;
	object1.streamContents( o1, 0, isOneLineOnly );
	object2.streamContents( o2, 0, isOneLineOnly );
	CHECK( isOneLineOnly )
	CHECK_EQUAL( o1.str(), o2.str() )
	CHECK( !object1.hasContents() )
	CHECK( object1.hasAttributes() )
	CHECK( object2.hasAttributes() )
}
#endif