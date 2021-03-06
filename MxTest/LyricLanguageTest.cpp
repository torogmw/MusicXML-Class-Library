/*
5727
<xs:element name="lyric-language" type="lyric-language" minOccurs="0" maxOccurs="unbounded"/>
<xs:complexType name="lyric-language">
	<xs:annotation>
		<xs:documentation>The lyric-language type specifies the default language for a particular name and number of lyric.</xs:documentation>
	</xs:annotation>
	<xs:attribute name="number" type="xs:NMTOKEN"/>
	<xs:attribute name="name" type="xs:token"/>
	<xs:attribute ref="xml:lang" use="required"/>
</xs:complexType>
*/
#include "MxTestCompileControl.h"
#ifdef RUN_PHASE2_TESTS
#include "TestHarness.h"
#include "Elements.h"
#include <sstream>

using namespace mx::t;
using namespace mx::e;

TEST( Test01, LyricLanguage )
{
	std::string indentString( INDENT );
	LyricLanguage object1;
	LyricLanguage object2;
	LyricLanguageAttributesPtr attributes1 = std::make_shared<LyricLanguageAttributes>();
	LyricLanguageAttributesPtr attributesNull;
	/* set some attribute1 values here */
    attributes1->hasNumber = true;
    attributes1->number = XsNMToken{ "ABC" };
    
	object2.setAttributes( attributes1 );
	object2.setAttributes( attributesNull ); /* should have no affect */
	std::stringstream default_constructed;
	object1.toStream( default_constructed, 0 );
	std::stringstream object2_stream;
	object2.toStream( object2_stream, 2 );
	std::string expected = R"(<lyric-language xml:lang="it"/>)";
	std::string actual = default_constructed.str();
	CHECK_EQUAL( expected, actual )
	expected = indentString+indentString+R"(<lyric-language number="ABC" xml:lang="it"/>)";
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