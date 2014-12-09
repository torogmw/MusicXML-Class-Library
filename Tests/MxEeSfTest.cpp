/** *******************************************************
  * 
  * MxEeSfTest.cpp
  * Created: 2014-12-05 16:47:03
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxEeSf.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxEeSf )
{
	MxEeSf object;
	CHECK( true )
}

/* End: Constructor --------------------------------------------------------- */


/* minOccurs maxOccurs ------------------------------------------------------ */

TEST( getMinOccurs, MxEeSf )
{
	MxEeSf object;
	int expected = 1;
	int actual = object.getMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getMaxOccurs, MxEeSf )
{
	MxEeSf object;
	int expected = 1;
	int actual = object.getMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsMaxOccursUnbounded, MxEeSf )
{
	MxEeSf object;
	bool expected = false;
	bool actual = object.getIsMaxOccursUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: minOccurs maxOccurs ------------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxEeSf )
{
	MxEeSf object;
	std::string expected = "MxEeSf";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxEeSf )
{
	MxEeSf object;
	std::string expected = "sf";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxEeSf )
{
	MxEeSf object;
	std::string expected = "( no documentation )";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxEeSf )
{
	MxEeSf object;
	std::string expected;
	std::string actual;
	expected = "<sf/>";
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


