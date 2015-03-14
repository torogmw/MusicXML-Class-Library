#include "TestHarness.h"
#include "Elements.h"
#include <sstream>
using namespace mx::types;
using namespace mx::e;

/*
4522
<xs:element name="pre-bend" type="empty">
	<xs:annotation>
		<xs:documentation>The pre-bend element indicates that this is a pre-bend rather than a normal bend or a release.</xs:documentation>
	</xs:annotation>
</xs:element>
*/

TEST( Test01, PreBend )
{
   std::string indentString( INDENT );
   PreBend object1;
   std::stringstream default_constructed;
   object1.toStream( default_constructed, 0 );
   std::stringstream indented_stream;
   object1.toStream( indented_stream, 2 );
   std::string expected = "<pre-bend/>";
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
