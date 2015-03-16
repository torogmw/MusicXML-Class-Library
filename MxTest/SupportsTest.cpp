/*
4057
<xs:element name="supports" type="supports"/>
<xs:complexType name="supports">
	<xs:annotation>
		<xs:documentation>The supports type indicates if a MusicXML encoding supports a particular MusicXML element. This is recommended for elements like beam, stem, and accidental, where the absence of an element is ambiguous if you do not know if the encoding supports that element. For Version 2.0, the supports element is expanded to allow programs to indicate support for particular attributes or particular values. This lets applications communicate, for example, that all system and/or page breaks are contained in the MusicXML file.</xs:documentation>
	</xs:annotation>
	<xs:attribute name="type" type="yes-no" use="required"/>
	<xs:attribute name="element" type="xs:NMTOKEN" use="required"/>
	<xs:attribute name="attribute" type="xs:NMTOKEN"/>
	<xs:attribute name="value" type="xs:token"/>
</xs:complexType>
*/
#include "TestHarness.h"
#include "Elements.h"
#include <sstream>

using namespace mx::types;
using namespace mx::e;

TEST( Test01, Supports )
{
	std::string indentString( INDENT );
	Supports object1;
	Supports object2;
	SupportsAttributesPtr attributes1 = std::make_shared<SupportsAttributes>();
	SupportsAttributesPtr attributesNull;
	/* set some attribute1 values here */
    attributes1->hasValue = true;
    attributes1->hasAttribute = true;
    attributes1->attribute = XsNMToken{ "A" };
    attributes1->value = XsToken{ "B" };
    attributes1->type = YesNo::yes;
    attributes1->element = { "C" };
	object2.setAttributes( attributes1 );
	object2.setAttributes( attributesNull ); /* should have no affect */
	std::stringstream default_constructed;
	object1.toStream( default_constructed, 0 );
	std::stringstream object2_stream;
	object2.toStream( object2_stream, 2 );
	std::string expected = R"(<supports type="no" element=""/>)";
	std::string actual = default_constructed.str();
	CHECK_EQUAL( expected, actual )
	expected = indentString+indentString+R"(<supports type="yes" element="C" attribute="A" value="B"/>)";
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
