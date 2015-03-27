#include "MxTestCompileControl.h"
#ifdef RUN_PHASE2_TESTS
#include "TestHarness.h"
#include "Elements.h"
#include <sstream>
using namespace mx::types;
using namespace mx::e;

/*
4732
<xs:element name="sounding-pitch" type="empty">
	<xs:annotation>
		<xs:documentation>The sounding-pitch is the pitch which is heard when playing the harmonic.</xs:documentation>
	</xs:annotation>
</xs:element>
*/

TEST( Test01, SoundingPitch )
{
   std::string indentString( INDENT );
   SoundingPitch object1;
   std::stringstream default_constructed;
   object1.toStream( default_constructed, 0 );
   std::stringstream indented_stream;
   object1.toStream( indented_stream, 2 );
   std::string expected = "<sounding-pitch/>";
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