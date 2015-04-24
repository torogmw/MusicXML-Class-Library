/*
3351
<xs:element name="wedge" type="wedge"/>
<xs:complexType name="wedge">
	<xs:annotation>
		<xs:documentation>The wedge type represents crescendo and diminuendo wedge symbols. The type attribute is crescendo for the start of a wedge that is closed at the left side, and diminuendo for the start of a wedge that is closed on the right side. Spread values are measured in tenths; those at the start of a crescendo wedge or end of a diminuendo wedge are ignored. The niente attribute is yes if a circle appears at the point of the wedge, indicating a crescendo from nothing or diminuendo to nothing. It is no by default, and used only when the type is crescendo, or the type is stop for a wedge that began with a diminuendo type. The line-type is solid by default.</xs:documentation>
	</xs:annotation>
	<xs:attribute name="type" type="wedge-type" use="required"/>
	<xs:attribute name="number" type="number-level"/>
	<xs:attribute name="spread" type="tenths"/>
	<xs:attribute name="niente" type="yes-no"/>
	<xs:attributeGroup ref="line-type"/>
	<xs:attributeGroup ref="dashed-formatting"/>
	<xs:attributeGroup ref="position"/>
	<xs:attributeGroup ref="color"/>
</xs:complexType>
*/
#include "MxTestCompileControl.h"
#ifdef RUN_PHASE2_TESTS
#include "TestHarness.h"
#include "Elements.h"
#include <sstream>

using namespace mx::t;
using namespace mx::e;

TEST( Test01, Wedge )
{
	std::string indentString( INDENT );
	Wedge object1;
	Wedge object2;
	WedgeAttributesPtr attributes1 = std::make_shared<WedgeAttributes>();
	WedgeAttributesPtr attributesNull;
	/* set some attribute1 values here */
    attributes1->hasDefaultX = true;
    attributes1->defaultX = TenthsValue{ 0.1 };
    attributes1->hasNumber = true;
    attributes1->number = NumberLevel{ 2 };
    attributes1->type = WedgeType::continue_;
	object2.setAttributes( attributes1 );
	object2.setAttributes( attributesNull ); /* should have no affect */
	std::stringstream default_constructed;
	object1.toStream( default_constructed, 0 );
	std::stringstream object2_stream;
	object2.toStream( object2_stream, 2 );
	std::string expected = R"(<wedge type="crescendo"/>)";
	std::string actual = default_constructed.str();
	CHECK_EQUAL( expected, actual )
	expected = indentString+indentString+R"(<wedge type="continue" number="2" default-x="0.1"/>)";
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