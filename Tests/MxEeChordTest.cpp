/** *******************************************************
  * 
  * MxEeChordTest.cpp
  * Created: 2014-12-05 16:47:08
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxEeChord.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxEeChord )
{
	MxEeChord object;
	CHECK( true )
}

/* End: Constructor --------------------------------------------------------- */


/* minOccurs maxOccurs ------------------------------------------------------ */

TEST( getMinOccurs, MxEeChord )
{
	MxEeChord object;
	int expected = 0;
	int actual = object.getMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getMaxOccurs, MxEeChord )
{
	MxEeChord object;
	int expected = 1;
	int actual = object.getMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsMaxOccursUnbounded, MxEeChord )
{
	MxEeChord object;
	bool expected = false;
	bool actual = object.getIsMaxOccursUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: minOccurs maxOccurs ------------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxEeChord )
{
	MxEeChord object;
	std::string expected = "MxEeChord";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxEeChord )
{
	MxEeChord object;
	std::string expected = "chord";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxEeChord )
{
	MxEeChord object;
	std::string expected = "The chord element indicates that this note is an additional chord tone with the preceding note. The duration of this note can be no longer than the preceding note. In MuseData, a missing duration indicates the same length as the previous note, but the MusicXML format requires a duration for chord notes too.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxEeChord )
{
	MxEeChord object;
	std::string expected;
	std::string actual;
	expected = "<chord/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}

/* End: toString ------------------------------------------------------------ */


