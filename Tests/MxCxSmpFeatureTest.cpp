/** *******************************************************
  * 
  * MxCxSmpFeatureTest.cpp
  * Created: 2014-12-02 17:31:52
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxCxSmpFeature.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxCxSmpFeature )
{
	MxCxSmpFeature object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxCxSmpFeature )
{
	MxCxSmpFeature object;
	std::string expected = ( XsToken(  ) ).toString();
	std::string actual = object.getType().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValueAndElementName0, MxCxSmpFeature )
{
	MxCxSmpFeature object( "booksmart", XsString( "" ) );
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
TEST( ctorValueAndElementName2, MxCxSmpFeature )
{
	MxCxSmpFeature object( "musicxmlishard", XsString( "D,E,F" ) );
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
TEST( ctorValueAndElementName4, MxCxSmpFeature )
{
	MxCxSmpFeature object( "charlie", XsString( "X,Y,Z" ) );
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
TEST( ctorValueAndElementName6, MxCxSmpFeature )
{
	MxCxSmpFeature object( "quiet", XsString( "D,E,F" ) );
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
TEST( ctorValueAndElementName8, MxCxSmpFeature )
{
	MxCxSmpFeature object( "bishop", XsString( "X,Y,Z" ) );
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

TEST( getClassName, MxCxSmpFeature )
{
	MxCxSmpFeature object;
	std::string expected = "MxCxSmpFeature";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxCxSmpFeature )
{
	MxCxSmpFeature object;
	std::string expected = "feature";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxCxSmpFeature )
{
	MxCxSmpFeature object;
	std::string expected = "The feature type is a part of the grouping element used for musical analysis. The type attribute represents the type of the feature and the element content represents its value. This type is flexible to allow for different analyses.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setType0, MxCxSmpFeature )
{
	XsToken value1( "ABC" );
	XsToken value2( "XYZ" );
	CHECK( ( value1 != value2 ) )
	MxCxSmpFeature object;
	object.setType( value1 );
	XsToken expected = value1;
	XsToken actual = object.getType();
	CHECK_EQUAL( expected, actual )
	object.setType( value2 );
	expected = value2;
	actual = object.getType();
	CHECK_EQUAL( expected, actual )
}

/* End: SetValue Functions -------------------------------------------------- */


/* Get IsAttributeRequired -------------------------------------------------- */

TEST( getIsTypeRequired0, MxCxSmpFeature )
{
	MxCxSmpFeature object;
	bool expected = false;
	bool actual = object.getIsTypeRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsTypePresent0, MxCxSmpFeature )
{
	MxCxSmpFeature object;
	bool expected = false;
	bool actual = object.getIsTypePresent();
	CHECK_EQUAL( expected, actual )
	object.setIsTypePresent( true );
	expected = true;
	actual = object.getIsTypePresent();
	CHECK_EQUAL( expected, actual )
	object.setIsTypePresent( false );
	expected = false;
	actual = object.getIsTypePresent();
	CHECK_EQUAL( expected, actual )
}

/* End: IsAttributePresent -------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxCxSmpFeature )
{
	MxCxSmpFeature object( "booksmart", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setType( XsToken( "" ) );
	object.setIsTypePresent( true );
	expected = "<booksmart type=\"\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxCxSmpFeature )
{
	MxCxSmpFeature object( "quiet", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsTypePresent( false );
	object.setType( XsToken( "" ) );
	expected = "<quiet>D,E,F</quiet>";
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

TEST( getIsTypeDefaultDefined, MxCxSmpFeature )
{
	MxCxSmpFeature object;
	bool expected = false;
	bool actual = object.getIsTypeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getTypeDefaultValue, MxCxSmpFeature )
{
	MxCxSmpFeature object;
	XsToken expected;
	XsToken actual = object.getTypeDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


