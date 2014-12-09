/** *******************************************************
  * 
  * MxEeGroupTimeTest.cpp
  * Created: 2014-12-05 16:47:08
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxEeGroupTime.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxEeGroupTime )
{
	MxEeGroupTime object;
	CHECK( true )
}

/* End: Constructor --------------------------------------------------------- */


/* minOccurs maxOccurs ------------------------------------------------------ */

TEST( getMinOccurs, MxEeGroupTime )
{
	MxEeGroupTime object;
	int expected = 0;
	int actual = object.getMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getMaxOccurs, MxEeGroupTime )
{
	MxEeGroupTime object;
	int expected = 1;
	int actual = object.getMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsMaxOccursUnbounded, MxEeGroupTime )
{
	MxEeGroupTime object;
	bool expected = false;
	bool actual = object.getIsMaxOccursUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: minOccurs maxOccurs ------------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxEeGroupTime )
{
	MxEeGroupTime object;
	std::string expected = "MxEeGroupTime";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxEeGroupTime )
{
	MxEeGroupTime object;
	std::string expected = "group-time";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxEeGroupTime )
{
	MxEeGroupTime object;
	std::string expected = "The group-time element indicates that the displayed time signatures should stretch across all parts and staves in the group.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxEeGroupTime )
{
	MxEeGroupTime object;
	std::string expected;
	std::string actual;
	expected = "<group-time/>";
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


