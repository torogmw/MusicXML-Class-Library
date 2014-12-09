/** *******************************************************
  * 
  * MxEeMetronomeDotTest.cpp
  * Created: 2014-12-05 16:47:05
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxEeMetronomeDot.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxEeMetronomeDot )
{
	MxEeMetronomeDot object;
	CHECK( true )
}

/* End: Constructor --------------------------------------------------------- */


/* minOccurs maxOccurs ------------------------------------------------------ */

TEST( getMinOccurs, MxEeMetronomeDot )
{
	MxEeMetronomeDot object;
	int expected = 0;
	int actual = object.getMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getMaxOccurs, MxEeMetronomeDot )
{
	MxEeMetronomeDot object;
	int expected = 32767;
	int actual = object.getMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsMaxOccursUnbounded, MxEeMetronomeDot )
{
	MxEeMetronomeDot object;
	bool expected = true;
	bool actual = object.getIsMaxOccursUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: minOccurs maxOccurs ------------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxEeMetronomeDot )
{
	MxEeMetronomeDot object;
	std::string expected = "MxEeMetronomeDot";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxEeMetronomeDot )
{
	MxEeMetronomeDot object;
	std::string expected = "metronome-dot";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxEeMetronomeDot )
{
	MxEeMetronomeDot object;
	std::string expected = "The metronome-dot element works like the dot element in defining metric relationships.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxEeMetronomeDot )
{
	MxEeMetronomeDot object;
	std::string expected;
	std::string actual;
	expected = "<metronome-dot/>";
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


