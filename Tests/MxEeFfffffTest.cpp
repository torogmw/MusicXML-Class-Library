/** *******************************************************
  * 
  * MxEeFfffffTest.cpp
  * Created: 2014-12-05 16:47:03
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxEeFfffff.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxEeFfffff )
{
	MxEeFfffff object;
	CHECK( true )
}

/* End: Constructor --------------------------------------------------------- */


/* minOccurs maxOccurs ------------------------------------------------------ */

TEST( getMinOccurs, MxEeFfffff )
{
	MxEeFfffff object;
	int expected = 1;
	int actual = object.getMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getMaxOccurs, MxEeFfffff )
{
	MxEeFfffff object;
	int expected = 1;
	int actual = object.getMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsMaxOccursUnbounded, MxEeFfffff )
{
	MxEeFfffff object;
	bool expected = false;
	bool actual = object.getIsMaxOccursUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: minOccurs maxOccurs ------------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxEeFfffff )
{
	MxEeFfffff object;
	std::string expected = "MxEeFfffff";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxEeFfffff )
{
	MxEeFfffff object;
	std::string expected = "ffffff";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxEeFfffff )
{
	MxEeFfffff object;
	std::string expected = "( no documentation )";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxEeFfffff )
{
	MxEeFfffff object;
	std::string expected;
	std::string actual;
	expected = "<ffffff/>";
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


