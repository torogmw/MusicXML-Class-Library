/*
5667, 5688, 6343
<xs:element name="bookmark" type="bookmark"/>
<xs:complexType name="bookmark">
	<xs:annotation>
		<xs:documentation>The bookmark type serves as a well-defined target for an incoming simple XLink.</xs:documentation>
	</xs:annotation>
	<xs:attribute name="id" type="xs:ID" use="required"/>
	<xs:attribute name="name" type="xs:token"/>
	<xs:attributeGroup ref="element-position"/>
</xs:complexType>
*/
#include "TestHarness.h"
#include "Elements.h"
#include <sstream>

using namespace mx::types;
using namespace mx::e;

TEST( Test01, Bookmark )
{
	std::string indentString( INDENT );
	Bookmark object1;
	Bookmark object2;
	BookmarkAttributesPtr attributes1 = std::make_shared<BookmarkAttributes>();
	BookmarkAttributesPtr attributesNull;
	/* set some attribute1 values here */
    attributes1->id = XsID{ "X123" };
    attributes1->hasName = true;
    attributes1->name = XsToken{ "zoom" };
    attributes1->hasPosition = true;
    attributes1->position = PositiveInteger{ 3 };
	object2.setAttributes( attributes1 );
	object2.setAttributes( attributesNull ); /* should have no affect */
	std::stringstream default_constructed;
	object1.toStream( default_constructed, 0 );
	std::stringstream object2_stream;
	object2.toStream( object2_stream, 2 );
	std::string expected = R"(<bookmark id="ID"/>)";
	std::string actual = default_constructed.str();
	CHECK_EQUAL( expected, actual )
	expected = indentString+indentString+R"(<bookmark id="X123" name="zoom" position="3"/>)";
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
