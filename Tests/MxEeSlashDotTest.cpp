/** *******************************************************
  * 
  * MxEeSlashDotTest.cpp
  * Created: 2014-12-05 16:47:08
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxEeSlashDot.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxEeSlashDot )
{
	MxEeSlashDot object;
	CHECK( true )
}

/* End: Constructor --------------------------------------------------------- */


/* minOccurs maxOccurs ------------------------------------------------------ */

TEST( getMinOccurs, MxEeSlashDot )
{
	MxEeSlashDot object;
	int expected = 0;
	int actual = object.getMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getMaxOccurs, MxEeSlashDot )
{
	MxEeSlashDot object;
	int expected = 32767;
	int actual = object.getMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsMaxOccursUnbounded, MxEeSlashDot )
{
	MxEeSlashDot object;
	bool expected = true;
	bool actual = object.getIsMaxOccursUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: minOccurs maxOccurs ------------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxEeSlashDot )
{
	MxEeSlashDot object;
	std::string expected = "MxEeSlashDot";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxEeSlashDot )
{
	MxEeSlashDot object;
	std::string expected = "slash-dot";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxEeSlashDot )
{
	MxEeSlashDot object;
	std::string expected = "The slash-dot element is used to specify any augmentation dots in the note type used to display repetition marks.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxEeSlashDot )
{
	MxEeSlashDot object;
	std::string expected;
	std::string actual;
	expected = "<slash-dot/>";
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


