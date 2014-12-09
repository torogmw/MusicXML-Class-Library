/** *******************************************************
  * 
  * MxCxSmpCancelTest.cpp
  * Created: 2014-12-02 17:31:51
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxCxSmpCancel.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxCxSmpCancel )
{
	MxCxSmpCancel object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxCxSmpCancel )
{
	MxCxSmpCancel object;
	std::string expected = ( MxEnumCancelLocation(  ) ).toString();
	std::string actual = object.getLocation().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValueAndElementName0, MxCxSmpCancel )
{
	MxCxSmpCancel object( "booksmart", MxNumberFifths( 1 ) );
	std::string expected;
	std::string actual;
	expected = "booksmart";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "1";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxNumberFifths( -32767 ) );
	expected = "-32767";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName2, MxCxSmpCancel )
{
	MxCxSmpCancel object( "musicxmlishard", MxNumberFifths( -32767 ) );
	std::string expected;
	std::string actual;
	expected = "musicxmlishard";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "-32767";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxNumberFifths( -32767 ) );
	expected = "-32767";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName4, MxCxSmpCancel )
{
	MxCxSmpCancel object( "charlie", MxNumberFifths( -32767 ) );
	std::string expected;
	std::string actual;
	expected = "charlie";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "-32767";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxNumberFifths( -32767 ) );
	expected = "-32767";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName6, MxCxSmpCancel )
{
	MxCxSmpCancel object( "quiet", MxNumberFifths( -32767 ) );
	std::string expected;
	std::string actual;
	expected = "quiet";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "-32767";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxNumberFifths( -32767 ) );
	expected = "-32767";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName8, MxCxSmpCancel )
{
	MxCxSmpCancel object( "bishop", MxNumberFifths( -32767 ) );
	std::string expected;
	std::string actual;
	expected = "bishop";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "-32767";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxNumberFifths( -32767 ) );
	expected = "-32767";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Ctor tests with values  --------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxCxSmpCancel )
{
	MxCxSmpCancel object;
	std::string expected = "MxCxSmpCancel";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxCxSmpCancel )
{
	MxCxSmpCancel object;
	std::string expected = "cancel";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxCxSmpCancel )
{
	MxCxSmpCancel object;
	std::string expected = "A cancel element indicates that the old key signature should be cancelled before the new one appears. This will always happen when changing to C major or A minor and need not be specified then. The cancel value matches the fifths value of the cancelled key signature (e.g., a cancel of -2 will provide an explicit cancellation for changing from B flat major to F major). The optional location attribute indicates whether the cancellation appears relative to the new key signature.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setLocation0, MxCxSmpCancel )
{
	MxEnumCancelLocation value1( lexicon::enums::CancelLocation::beforeBarline );
	MxEnumCancelLocation value2( lexicon::enums::CancelLocation::right );
	CHECK( ( value1 != value2 ) )
	MxCxSmpCancel object;
	object.setLocation( value1 );
	MxEnumCancelLocation expected = value1;
	MxEnumCancelLocation actual = object.getLocation();
	CHECK_EQUAL( expected, actual )
	object.setLocation( value2 );
	expected = value2;
	actual = object.getLocation();
	CHECK_EQUAL( expected, actual )
}

/* End: SetValue Functions -------------------------------------------------- */


/* Get IsAttributeRequired -------------------------------------------------- */

TEST( getIsLocationRequired0, MxCxSmpCancel )
{
	MxCxSmpCancel object;
	bool expected = false;
	bool actual = object.getIsLocationRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsLocationPresent0, MxCxSmpCancel )
{
	MxCxSmpCancel object;
	bool expected = false;
	bool actual = object.getIsLocationPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsLocationPresent( true );
	expected = true;
	actual = object.getIsLocationPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsLocationPresent( false );
	expected = false;
	actual = object.getIsLocationPresent();
	CHECK_EQUAL( expected, actual )
}

/* End: IsAttributePresent -------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxCxSmpCancel )
{
	MxCxSmpCancel object( "booksmart", MxNumberFifths( -32767 ) );
	std::string expected;
	std::string actual;
	object.setLocation( MxEnumCancelLocation( lexicon::enums::CancelLocation::left ) );
	object.setIsLocationPresent( true );
	expected = "<booksmart location=\"left\">-32767</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxCxSmpCancel )
{
	MxCxSmpCancel object( "quiet", MxNumberFifths( -32767 ) );
	std::string expected;
	std::string actual;
	object.setIsLocationPresent( false );
	object.setLocation( MxEnumCancelLocation( lexicon::enums::CancelLocation::left ) );
	expected = "<quiet>-32767</quiet>";
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

TEST( getIsLocationDefaultDefined, MxCxSmpCancel )
{
	MxCxSmpCancel object;
	bool expected = false;
	bool actual = object.getIsLocationDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getLocationDefaultValue, MxCxSmpCancel )
{
	MxCxSmpCancel object;
	MxEnumCancelLocation expected;
	MxEnumCancelLocation actual = object.getLocationDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


