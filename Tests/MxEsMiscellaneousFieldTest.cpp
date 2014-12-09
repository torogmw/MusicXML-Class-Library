/** *******************************************************
  * 
  * MxEsMiscellaneousFieldTest.cpp
  * Created: 2014-12-05 20:57:54
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxEsMiscellaneousField.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxEsMiscellaneousField )
{
	MxEsMiscellaneousField object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxEsMiscellaneousField )
{
	MxEsMiscellaneousField object;
	std::string expected = ( XsToken(  ) ).toString();
	std::string actual = object.getName().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* minOccurs maxOccurs ------------------------------------------------------ */

TEST( getMinOccurs, MxEsMiscellaneousField )
{
	MxEsMiscellaneousField object;
	int expected = 0;
	int actual = object.getMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getMaxOccurs, MxEsMiscellaneousField )
{
	MxEsMiscellaneousField object;
	int expected = 32767;
	int actual = object.getMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsMaxOccursUnbounded, MxEsMiscellaneousField )
{
	MxEsMiscellaneousField object;
	bool expected = true;
	bool actual = object.getIsMaxOccursUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: minOccurs maxOccurs ------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValue0, MxEsMiscellaneousField )
{
	MxEsMiscellaneousField object( XsString( "" ) );
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
TEST( ctorValue2, MxEsMiscellaneousField )
{
	MxEsMiscellaneousField object( XsString( "D,E,F" ) );
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
TEST( ctorValue4, MxEsMiscellaneousField )
{
	MxEsMiscellaneousField object( XsString( "X,Y,Z" ) );
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
TEST( ctorValue6, MxEsMiscellaneousField )
{
	MxEsMiscellaneousField object( XsString( "D,E,F" ) );
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
TEST( ctorValue8, MxEsMiscellaneousField )
{
	MxEsMiscellaneousField object( XsString( "X,Y,Z" ) );
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

TEST( getClassName, MxEsMiscellaneousField )
{
	MxEsMiscellaneousField object;
	std::string expected = "MxEsMiscellaneousField";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxEsMiscellaneousField )
{
	MxEsMiscellaneousField object;
	std::string expected = "miscellaneous-field";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxEsMiscellaneousField )
{
	MxEsMiscellaneousField object;
	std::string expected = "( no documentation )";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setName0, MxEsMiscellaneousField )
{
	XsToken value1( "ABC" );
	XsToken value2( "XYZ" );
	CHECK( ( value1 != value2 ) )
	MxEsMiscellaneousField object;
	object.setName( value1 );
	XsToken expected = value1;
	XsToken actual = object.getName();
	CHECK_EQUAL( expected, actual )
	object.setName( value2 );
	expected = value2;
	actual = object.getName();
	CHECK_EQUAL( expected, actual )
}

/* End: SetValue Functions -------------------------------------------------- */


/* Get IsAttributeRequired -------------------------------------------------- */

TEST( getIsNameRequired0, MxEsMiscellaneousField )
{
	MxEsMiscellaneousField object;
	bool expected = true;
	bool actual = object.getIsNameRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsNamePresent0, MxEsMiscellaneousField )
{
	MxEsMiscellaneousField object;
	bool expected = true;
	bool actual = object.getIsNamePresent();
	CHECK_EQUAL( expected, actual )
	/* setter does not exist because this attribute is required */
	expected = true;
	actual = object.getIsNamePresent();
	CHECK_EQUAL( expected, actual )
	/* setter does not exist because this attribute is required */
	expected = true;
	actual = object.getIsNamePresent();
	CHECK_EQUAL( expected, actual )
}

/* End: IsAttributePresent -------------------------------------------------- */


/* Is Default Defined ------------------------------------------------------- */

TEST( getIsNameDefaultDefined, MxEsMiscellaneousField )
{
	MxEsMiscellaneousField object;
	bool expected = false;
	bool actual = object.getIsNameDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getNameDefaultValue, MxEsMiscellaneousField )
{
	MxEsMiscellaneousField object;
	XsToken expected;
	XsToken actual = object.getNameDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxEsMiscellaneousField )
{
	MxEsMiscellaneousField object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setName( XsToken( "" ) );
	expected = "<miscellaneous-field name=\"\">D,E,F</miscellaneous-field>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxEsMiscellaneousField )
{
	MxEsMiscellaneousField object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setName( XsToken( "" ) );
	expected = "<miscellaneous-field name=\"\">D,E,F</miscellaneous-field>";
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


