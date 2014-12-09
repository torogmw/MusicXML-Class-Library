/** *******************************************************
  * 
  * MxCxSmpOtherPlayTest.cpp
  * Created: 2014-12-02 17:31:51
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxCxSmpOtherPlay.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxCxSmpOtherPlay )
{
	MxCxSmpOtherPlay object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxCxSmpOtherPlay )
{
	MxCxSmpOtherPlay object;
	std::string expected = ( XsToken(  ) ).toString();
	std::string actual = object.getType().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValueAndElementName0, MxCxSmpOtherPlay )
{
	MxCxSmpOtherPlay object( "booksmart", XsString( "" ) );
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
TEST( ctorValueAndElementName2, MxCxSmpOtherPlay )
{
	MxCxSmpOtherPlay object( "musicxmlishard", XsString( "D,E,F" ) );
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
TEST( ctorValueAndElementName4, MxCxSmpOtherPlay )
{
	MxCxSmpOtherPlay object( "charlie", XsString( "X,Y,Z" ) );
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
TEST( ctorValueAndElementName6, MxCxSmpOtherPlay )
{
	MxCxSmpOtherPlay object( "quiet", XsString( "D,E,F" ) );
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
TEST( ctorValueAndElementName8, MxCxSmpOtherPlay )
{
	MxCxSmpOtherPlay object( "bishop", XsString( "X,Y,Z" ) );
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

TEST( getClassName, MxCxSmpOtherPlay )
{
	MxCxSmpOtherPlay object;
	std::string expected = "MxCxSmpOtherPlay";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxCxSmpOtherPlay )
{
	MxCxSmpOtherPlay object;
	std::string expected = "other-play";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxCxSmpOtherPlay )
{
	MxCxSmpOtherPlay object;
	std::string expected = "The other-play element represents other types of playback. The required type attribute indicates the type of playback to which the element content applies.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setType0, MxCxSmpOtherPlay )
{
	XsToken value1( "ABC" );
	XsToken value2( "XYZ" );
	CHECK( ( value1 != value2 ) )
	MxCxSmpOtherPlay object;
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

TEST( getIsTypeRequired0, MxCxSmpOtherPlay )
{
	MxCxSmpOtherPlay object;
	bool expected = true;
	bool actual = object.getIsTypeRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsTypePresent0, MxCxSmpOtherPlay )
{
	MxCxSmpOtherPlay object;
	bool expected = true;
	bool actual = object.getIsTypePresent();
	CHECK_EQUAL( expected, actual )
	/* setter does not exist because this attribute is required */
	expected = true;
	actual = object.getIsTypePresent();
	CHECK_EQUAL( expected, actual )
	/* setter does not exist because this attribute is required */
	expected = true;
	actual = object.getIsTypePresent();
	CHECK_EQUAL( expected, actual )
}

/* End: IsAttributePresent -------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxCxSmpOtherPlay )
{
	MxCxSmpOtherPlay object( "booksmart", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setType( XsToken( "" ) );
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
TEST( toString1, MxCxSmpOtherPlay )
{
	MxCxSmpOtherPlay object( "quiet", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setType( XsToken( "" ) );
	expected = "<quiet type=\"\">D,E,F</quiet>";
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

TEST( getIsTypeDefaultDefined, MxCxSmpOtherPlay )
{
	MxCxSmpOtherPlay object;
	bool expected = false;
	bool actual = object.getIsTypeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getTypeDefaultValue, MxCxSmpOtherPlay )
{
	MxCxSmpOtherPlay object;
	XsToken expected;
	XsToken actual = object.getTypeDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


