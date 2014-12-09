/** *******************************************************
  * 
  * MxEeBeatUnitDotTest.cpp
  * Created: 2014-12-05 16:47:08
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxEeBeatUnitDot.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxEeBeatUnitDot )
{
	MxEeBeatUnitDot object;
	CHECK( true )
}

/* End: Constructor --------------------------------------------------------- */


/* minOccurs maxOccurs ------------------------------------------------------ */

TEST( getMinOccurs, MxEeBeatUnitDot )
{
	MxEeBeatUnitDot object;
	int expected = 0;
	int actual = object.getMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getMaxOccurs, MxEeBeatUnitDot )
{
	MxEeBeatUnitDot object;
	int expected = 32767;
	int actual = object.getMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsMaxOccursUnbounded, MxEeBeatUnitDot )
{
	MxEeBeatUnitDot object;
	bool expected = true;
	bool actual = object.getIsMaxOccursUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: minOccurs maxOccurs ------------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxEeBeatUnitDot )
{
	MxEeBeatUnitDot object;
	std::string expected = "MxEeBeatUnitDot";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxEeBeatUnitDot )
{
	MxEeBeatUnitDot object;
	std::string expected = "beat-unit-dot";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxEeBeatUnitDot )
{
	MxEeBeatUnitDot object;
	std::string expected = "The beat-unit-dot element is used to specify any augmentation dots for a metronome mark note.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxEeBeatUnitDot )
{
	MxEeBeatUnitDot object;
	std::string expected;
	std::string actual;
	expected = "<beat-unit-dot/>";
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


