/** *******************************************************
  * 
  * MxEeEndParagraphTest.cpp
  * Created: 2014-12-05 16:47:06
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxEeEndParagraph.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxEeEndParagraph )
{
	MxEeEndParagraph object;
	CHECK( true )
}

/* End: Constructor --------------------------------------------------------- */


/* minOccurs maxOccurs ------------------------------------------------------ */

TEST( getMinOccurs, MxEeEndParagraph )
{
	MxEeEndParagraph object;
	int expected = 0;
	int actual = object.getMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getMaxOccurs, MxEeEndParagraph )
{
	MxEeEndParagraph object;
	int expected = 1;
	int actual = object.getMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsMaxOccursUnbounded, MxEeEndParagraph )
{
	MxEeEndParagraph object;
	bool expected = false;
	bool actual = object.getIsMaxOccursUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: minOccurs maxOccurs ------------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxEeEndParagraph )
{
	MxEeEndParagraph object;
	std::string expected = "MxEeEndParagraph";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxEeEndParagraph )
{
	MxEeEndParagraph object;
	std::string expected = "end-paragraph";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxEeEndParagraph )
{
	MxEeEndParagraph object;
	std::string expected = "The end-paragraph element comes from RP-017 for Standard MIDI File Lyric meta-events. It facilitates lyric display for Karaoke and similar applications.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxEeEndParagraph )
{
	MxEeEndParagraph object;
	std::string expected;
	std::string actual;
	expected = "<end-paragraph/>";
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


