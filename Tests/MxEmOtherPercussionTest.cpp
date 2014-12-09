/** *******************************************************
  * 
  * MxEmOtherPercussionTest.cpp
  * Created: 2014-12-07 16:26:32
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxEmOtherPercussion.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxEmOtherPercussion )
{
	MxEmOtherPercussion object;
	CHECK( true )
}

/* End: Constructor --------------------------------------------------------- */


/* minOccurs maxOccurs ------------------------------------------------------ */

TEST( getMinOccurs, MxEmOtherPercussion )
{
	MxEmOtherPercussion object;
	int expected = 1;
	int actual = object.getMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getMaxOccurs, MxEmOtherPercussion )
{
	MxEmOtherPercussion object;
	int expected = 1;
	int actual = object.getMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsMaxOccursUnbounded, MxEmOtherPercussion )
{
	MxEmOtherPercussion object;
	bool expected = false;
	bool actual = object.getIsMaxOccursUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: minOccurs maxOccurs ------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValue0, MxEmOtherPercussion )
{
	MxEmOtherPercussion object( XsString( "" ) );
	std::string expected;
	std::string actual;
	expected = "";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( XsString( XsString( "A,B,C" ) ) );
	expected = "A,B,C";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2, MxEmOtherPercussion )
{
	MxEmOtherPercussion object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	expected = "D,E,F";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( XsString( XsString( "WOOF" ) ) );
	expected = "WOOF";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue4, MxEmOtherPercussion )
{
	MxEmOtherPercussion object( XsString( "X,Y,Z" ) );
	std::string expected;
	std::string actual;
	expected = "X,Y,Z";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( XsString( XsString( "A,B,C" ) ) );
	expected = "A,B,C";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue6, MxEmOtherPercussion )
{
	MxEmOtherPercussion object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	expected = "D,E,F";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( XsString( XsString( "WOOF" ) ) );
	expected = "WOOF";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue8, MxEmOtherPercussion )
{
	MxEmOtherPercussion object( XsString( "X,Y,Z" ) );
	std::string expected;
	std::string actual;
	expected = "X,Y,Z";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( XsString( XsString( "A,B,C" ) ) );
	expected = "A,B,C";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Ctor tests with values  --------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxEmOtherPercussion )
{
	MxEmOtherPercussion object;
	std::string expected = "MxEmOtherPercussion";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxEmOtherPercussion )
{
	MxEmOtherPercussion object;
	std::string expected = "other-percussion";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxEmOtherPercussion )
{
	MxEmOtherPercussion object;
	std::string expected = "( no documentation )";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxEmOtherPercussion )
{
	MxEmOtherPercussion object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	expected = "<other-percussion>D,E,F</other-percussion>";
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


