#include "MxTestCompileControl.h"
#ifdef RUN_PHASE1_TESTS
#include "TestHarness.h"
#include "Elements.h"
#include <sstream>
using namespace mx::t;
using namespace mx::e;

/*
4847
<xs:element name="end-paragraph" type="empty" minOccurs="0">
	<xs:annotation>
		<xs:documentation>The end-paragraph element comes from RP-017 for Standard MIDI File Lyric meta-events. It facilitates lyric display for Karaoke and similar applications.</xs:documentation>
	</xs:annotation>
</xs:element>
*/

TEST( Test01, EndParagraph )
{
   std::string indentString( INDENT );
   EndParagraph object1;
   std::stringstream default_constructed;
   object1.toStream( default_constructed, 0 );
   std::stringstream indented_stream;
   object1.toStream( indented_stream, 2 );
   std::string expected = "<end-paragraph/>";
   std::string actual = default_constructed.str();
   CHECK_EQUAL( expected, actual )
   expected = indentString+indentString+expected;
   actual = indented_stream.str();
   CHECK_EQUAL( expected, actual )
   std::stringstream o1;
   bool isOneLineOnly = false;
   object1.streamContents( o1, 0, isOneLineOnly );
   CHECK( isOneLineOnly )
   CHECK_EQUAL( o1.str(), "" )
   CHECK( ! object1.hasAttributes() )
   CHECK( ! object1.hasContents() )
}
#endif