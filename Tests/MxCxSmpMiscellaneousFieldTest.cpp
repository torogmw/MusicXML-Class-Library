/** *******************************************************
  * 
  * MxCxSmpMiscellaneousFieldTest.cpp
  * Created: 2014-12-02 17:31:53
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxCxSmpMiscellaneousField.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxCxSmpMiscellaneousField )
{
	MxCxSmpMiscellaneousField object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxCxSmpMiscellaneousField )
{
	MxCxSmpMiscellaneousField object;
	std::string expected = ( XsToken(  ) ).toString();
	std::string actual = object.getName().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValueAndElementName0, MxCxSmpMiscellaneousField )
{
	MxCxSmpMiscellaneousField object( "booksmart", XsString( "" ) );
	std::string expected;
	std::string actual;
	expected = "booksmart";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( XsString( "A,B,C" ) );
	expected = "A,B,C";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName2, MxCxSmpMiscellaneousField )
{
	MxCxSmpMiscellaneousField object( "musicxmlishard", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	expected = "musicxmlishard";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "D,E,F";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( XsString( "WOOF" ) );
	expected = "WOOF";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName4, MxCxSmpMiscellaneousField )
{
	MxCxSmpMiscellaneousField object( "charlie", XsString( "X,Y,Z" ) );
	std::string expected;
	std::string actual;
	expected = "charlie";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "X,Y,Z";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( XsString( "A,B,C" ) );
	expected = "A,B,C";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName6, MxCxSmpMiscellaneousField )
{
	MxCxSmpMiscellaneousField object( "quiet", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	expected = "quiet";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "D,E,F";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( XsString( "WOOF" ) );
	expected = "WOOF";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName8, MxCxSmpMiscellaneousField )
{
	MxCxSmpMiscellaneousField object( "bishop", XsString( "X,Y,Z" ) );
	std::string expected;
	std::string actual;
	expected = "bishop";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "X,Y,Z";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( XsString( "A,B,C" ) );
	expected = "A,B,C";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Ctor tests with values  --------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxCxSmpMiscellaneousField )
{
	MxCxSmpMiscellaneousField object;
	std::string expected = "MxCxSmpMiscellaneousField";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxCxSmpMiscellaneousField )
{
	MxCxSmpMiscellaneousField object;
	std::string expected = "miscellaneous-field";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxCxSmpMiscellaneousField )
{
	MxCxSmpMiscellaneousField object;
	std::string expected = "If a program has other metadata not yet supported in the MusicXML format, each type of metadata can go in a miscellaneous-field element. The required name attribute indicates the type of metadata the element content represents.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setName0, MxCxSmpMiscellaneousField )
{
	XsToken value1( "ABC" );
	XsToken value2( "XYZ" );
	CHECK( ( value1 != value2 ) )
	MxCxSmpMiscellaneousField object;
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

TEST( getIsNameRequired0, MxCxSmpMiscellaneousField )
{
	MxCxSmpMiscellaneousField object;
	bool expected = true;
	bool actual = object.getIsNameRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsNamePresent0, MxCxSmpMiscellaneousField )
{
	MxCxSmpMiscellaneousField object;
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


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxCxSmpMiscellaneousField )
{
	MxCxSmpMiscellaneousField object( "booksmart", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setName( XsToken( "" ) );
	expected = "<booksmart name=\"\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxCxSmpMiscellaneousField )
{
	MxCxSmpMiscellaneousField object( "quiet", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setName( XsToken( "" ) );
	expected = "<quiet name=\"\">D,E,F</quiet>";
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


/* Is Default Defined ------------------------------------------------------- */

TEST( getIsNameDefaultDefined, MxCxSmpMiscellaneousField )
{
	MxCxSmpMiscellaneousField object;
	bool expected = false;
	bool actual = object.getIsNameDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getNameDefaultValue, MxCxSmpMiscellaneousField )
{
	MxCxSmpMiscellaneousField object;
	XsToken expected;
	XsToken actual = object.getNameDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


