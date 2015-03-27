/*
4944
<xs:element name="arpeggiate" type="arpeggiate"/>
<xs:complexType name="arpeggiate">
	<xs:annotation>
		<xs:documentation>The arpeggiate type indicates that this note is part of an arpeggiated chord. The number attribute can be used to distinguish between two simultaneous chords arpeggiated separately (different numbers) or together (same number). The up-down attribute is used if there is an arrow on the arpeggio sign. By default, arpeggios go from the lowest to highest note.</xs:documentation>
	</xs:annotation>
	<xs:attribute name="number" type="number-level"/>
	<xs:attribute name="direction" type="up-down"/>
	<xs:attributeGroup ref="position"/>
	<xs:attributeGroup ref="placement"/>
	<xs:attributeGroup ref="color"/>
</xs:complexType>
*/
#include "MxTestCompileControl.h"
#ifdef RUN_PHASE1_TESTS
#include "TestHarness.h"
#include "Elements.h"
#include <sstream>

using namespace mx::types;
using namespace mx::e;

TEST( Test01, Arpeggiate )
{
	std::string indentString( INDENT );
	Arpeggiate object1;
	Arpeggiate object2;
	ArpeggiateAttributesPtr attributes1 = std::make_shared<ArpeggiateAttributes>();
	ArpeggiateAttributesPtr attributesNull;
	/* set some attribute1 values here */
    attributes1->hasDefaultX = true;
    attributes1->defaultX = TenthsValue{ 0.1 };
    attributes1->hasDirection = true;
    attributes1->direction = UpDown::up;
    attributes1->hasNumber = true;
    attributes1->number = NumberLevel{ 2 };
    
	object2.setAttributes( attributes1 );
	object2.setAttributes( attributesNull ); /* should have no affect */
	std::stringstream default_constructed;
	object1.toStream( default_constructed, 0 );
	std::stringstream object2_stream;
	object2.toStream( object2_stream, 2 );
	std::string expected = R"(<arpeggiate/>)";
	std::string actual = default_constructed.str();
	CHECK_EQUAL( expected, actual )
	expected = indentString+indentString+R"(<arpeggiate number="2" direction="up" default-x="0.1"/>)";
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