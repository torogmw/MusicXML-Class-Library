/*
4947
<xs:element name="non-arpeggiate" type="non-arpeggiate"/>
<xs:complexType name="non-arpeggiate">
	<xs:annotation>
		<xs:documentation>The non-arpeggiate type indicates that this note is at the top or bottom of a bracket indicating to not arpeggiate these notes. Since this does not involve playback, it is only used on the top or bottom notes, not on each note as for the arpeggiate type.</xs:documentation>
	</xs:annotation>
	<xs:attribute name="type" type="top-bottom" use="required"/>
	<xs:attribute name="number" type="number-level"/>
	<xs:attributeGroup ref="position"/>
	<xs:attributeGroup ref="placement"/>
	<xs:attributeGroup ref="color"/>
</xs:complexType>
*/
#include "TestHarness.h"
#include "Elements.h"
#include <sstream>

using namespace mx::types;
using namespace mx::e;

TEST( Test01, NonArpeggiate )
{
	std::string indentString( INDENT );
	NonArpeggiate object1;
	NonArpeggiate object2;
	NonArpeggiateAttributesPtr attributes1 = std::make_shared<NonArpeggiateAttributes>();
	NonArpeggiateAttributesPtr attributesNull;
	/* set some attribute1 values here */

	object2.setAttributes( attributes1 );
	object2.setAttributes( attributesNull ); /* should have no affect */
	std::stringstream default_constructed;
	object1.toStream( default_constructed, 0 );
	std::stringstream object2_stream;
	object2.toStream( object2_stream, 2 );
	std::string expected = R"(hello)";
	std::string actual = default_constructed.str();
	CHECK_EQUAL( expected, actual )
	expected = indentString+indentString+R"(hello2)";
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
