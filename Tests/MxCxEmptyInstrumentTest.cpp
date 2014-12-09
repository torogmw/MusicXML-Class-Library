/** *******************************************************
  * 
  * MxCxEmptyInstrumentTest.cpp
  * Created: 2014-12-03 16:31:30
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxCxEmptyInstrument.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxCxEmptyInstrument )
{
	MxCxEmptyInstrument object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxCxEmptyInstrument )
{
	MxCxEmptyInstrument object;
	std::string expected = ( XsIdRef(  ) ).toString();
	std::string actual = object.getId().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValueAndElementName0, MxCxEmptyInstrument )
{
	MxCxEmptyInstrument object( "booksmart" );
	std::string expected;
	std::string actual;
	expected = "booksmart";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName2, MxCxEmptyInstrument )
{
	MxCxEmptyInstrument object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	expected = "musicxmlishard";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName4, MxCxEmptyInstrument )
{
	MxCxEmptyInstrument object( "charlie" );
	std::string expected;
	std::string actual;
	expected = "charlie";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName6, MxCxEmptyInstrument )
{
	MxCxEmptyInstrument object( "quiet" );
	std::string expected;
	std::string actual;
	expected = "quiet";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName8, MxCxEmptyInstrument )
{
	MxCxEmptyInstrument object( "bishop" );
	std::string expected;
	std::string actual;
	expected = "bishop";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}

/* End: Ctor tests with values  --------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxCxEmptyInstrument )
{
	MxCxEmptyInstrument object;
	std::string expected = "MxCxEmptyInstrument";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxCxEmptyInstrument )
{
	MxCxEmptyInstrument object;
	std::string expected = "instrument";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxCxEmptyInstrument )
{
	MxCxEmptyInstrument object;
	std::string expected = "The instrument type distinguishes between score-instrument elements in a score-part. The id attribute is an IDREF back to the score-instrument ID. If multiple score-instruments are specified on a score-part, there should be an instrument element for each note in the part.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setId0, MxCxEmptyInstrument )
{
	XsIdRef value1( "ID01" );
	XsIdRef value2( "ID02" );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyInstrument object;
	object.setId( value1 );
	XsIdRef expected = value1;
	XsIdRef actual = object.getId();
	CHECK_EQUAL( expected, actual )
	object.setId( value2 );
	expected = value2;
	actual = object.getId();
	CHECK_EQUAL( expected, actual )
}

/* End: SetValue Functions -------------------------------------------------- */


/* Get IsAttributeRequired -------------------------------------------------- */

TEST( getIsIdRequired0, MxCxEmptyInstrument )
{
	MxCxEmptyInstrument object;
	bool expected = true;
	bool actual = object.getIsIdRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsIdPresent0, MxCxEmptyInstrument )
{
	MxCxEmptyInstrument object;
	bool expected = true;
	bool actual = object.getIsIdPresent();
	CHECK_EQUAL( expected, actual )
	/* setter does not exist because this attribute is required */
	expected = true;
	actual = object.getIsIdPresent();
	CHECK_EQUAL( expected, actual )
	/* setter does not exist because this attribute is required */
	expected = true;
	actual = object.getIsIdPresent();
	CHECK_EQUAL( expected, actual )
}

/* End: IsAttributePresent -------------------------------------------------- */


/* Is Default Defined ------------------------------------------------------- */

TEST( getIsIdDefaultDefined, MxCxEmptyInstrument )
{
	MxCxEmptyInstrument object;
	bool expected = false;
	bool actual = object.getIsIdDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getIdDefaultValue, MxCxEmptyInstrument )
{
	MxCxEmptyInstrument object;
	XsIdRef expected;
	XsIdRef actual = object.getIdDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxCxEmptyInstrument )
{
	MxCxEmptyInstrument object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setId( XsIdRef( "" ) );
	expected = "<booksmart id=\"\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxCxEmptyInstrument )
{
	MxCxEmptyInstrument object( "quiet" );
	std::string expected;
	std::string actual;
	object.setId( XsIdRef( "" ) );
	expected = "<quiet id=\"\"/>";
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


