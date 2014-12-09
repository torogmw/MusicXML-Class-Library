/** *******************************************************
  * 
  * MxCxSmpMeasureRepeatTest.cpp
  * Created: 2014-12-02 17:31:51
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxCxSmpMeasureRepeat.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxCxSmpMeasureRepeat )
{
	MxCxSmpMeasureRepeat object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxCxSmpMeasureRepeat )
{
	MxCxSmpMeasureRepeat object;
	std::string expected = ( MxEnumStartStop(  ) ).toString();
	std::string actual = object.getType().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues1, MxCxSmpMeasureRepeat )
{
	MxCxSmpMeasureRepeat object;
	std::string expected = ( XsPositiveInteger(  ) ).toString();
	std::string actual = object.getSlashes().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValueAndElementName0, MxCxSmpMeasureRepeat )
{
	MxCxSmpMeasureRepeat object( "booksmart", MxNumberPositiveIntegerOrEmpty(  ) );
	std::string expected;
	std::string actual;
	expected = "booksmart";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxNumberPositiveIntegerOrEmpty( 1 ) );
	expected = "1";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName2, MxCxSmpMeasureRepeat )
{
	MxCxSmpMeasureRepeat object( "musicxmlishard", MxNumberPositiveIntegerOrEmpty( 1 ) );
	std::string expected;
	std::string actual;
	expected = "musicxmlishard";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "1";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxNumberPositiveIntegerOrEmpty( 1 ) );
	expected = "1";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName4, MxCxSmpMeasureRepeat )
{
	MxCxSmpMeasureRepeat object( "charlie", MxNumberPositiveIntegerOrEmpty( 1 ) );
	std::string expected;
	std::string actual;
	expected = "charlie";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "1";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxNumberPositiveIntegerOrEmpty( 1 ) );
	expected = "1";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName6, MxCxSmpMeasureRepeat )
{
	MxCxSmpMeasureRepeat object( "quiet", MxNumberPositiveIntegerOrEmpty( 1 ) );
	std::string expected;
	std::string actual;
	expected = "quiet";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "1";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxNumberPositiveIntegerOrEmpty( 1 ) );
	expected = "1";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName8, MxCxSmpMeasureRepeat )
{
	MxCxSmpMeasureRepeat object( "bishop", MxNumberPositiveIntegerOrEmpty( 1 ) );
	std::string expected;
	std::string actual;
	expected = "bishop";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "1";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxNumberPositiveIntegerOrEmpty( 1 ) );
	expected = "1";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Ctor tests with values  --------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxCxSmpMeasureRepeat )
{
	MxCxSmpMeasureRepeat object;
	std::string expected = "MxCxSmpMeasureRepeat";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxCxSmpMeasureRepeat )
{
	MxCxSmpMeasureRepeat object;
	std::string expected = "measure-repeat";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxCxSmpMeasureRepeat )
{
	MxCxSmpMeasureRepeat object;
	std::string expected = "The measure-repeat type is used for both single and multiple measure repeats. The text of the element indicates the number of measures to be repeated in a single pattern. The slashes attribute specifies the number of slashes to use in the repeat sign. It is 1 if not specified. Both the start and the stop of the measure-repeat must be specified. The text of the element is ignored when the type is stop. The measure-repeat element specifies a notation style for repetitions. The actual music being repeated needs to be repeated within the MusicXML file. This element specifies the notation that indicates the repeat.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setType0, MxCxSmpMeasureRepeat )
{
	MxEnumStartStop value1( lexicon::enums::StartStop::stop );
	MxEnumStartStop value2( lexicon::enums::StartStop::start );
	CHECK( ( value1 != value2 ) )
	MxCxSmpMeasureRepeat object;
	object.setType( value1 );
	MxEnumStartStop expected = value1;
	MxEnumStartStop actual = object.getType();
	CHECK_EQUAL( expected, actual )
	object.setType( value2 );
	expected = value2;
	actual = object.getType();
	CHECK_EQUAL( expected, actual )
}
TEST( setSlashes1, MxCxSmpMeasureRepeat )
{
	XsPositiveInteger value1( 1 );
	XsPositiveInteger value2( 2 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpMeasureRepeat object;
	object.setSlashes( value1 );
	XsPositiveInteger expected = value1;
	XsPositiveInteger actual = object.getSlashes();
	CHECK_EQUAL( expected, actual )
	object.setSlashes( value2 );
	expected = value2;
	actual = object.getSlashes();
	CHECK_EQUAL( expected, actual )
}

/* End: SetValue Functions -------------------------------------------------- */


/* Get IsAttributeRequired -------------------------------------------------- */

TEST( getIsTypeRequired0, MxCxSmpMeasureRepeat )
{
	MxCxSmpMeasureRepeat object;
	bool expected = true;
	bool actual = object.getIsTypeRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsSlashesRequired1, MxCxSmpMeasureRepeat )
{
	MxCxSmpMeasureRepeat object;
	bool expected = false;
	bool actual = object.getIsSlashesRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsTypePresent0, MxCxSmpMeasureRepeat )
{
	MxCxSmpMeasureRepeat object;
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
TEST( getIsSlashesPresent1, MxCxSmpMeasureRepeat )
{
	MxCxSmpMeasureRepeat object;
	bool expected = false;
	bool actual = object.getIsSlashesPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsSlashesPresent( true );
	expected = true;
	actual = object.getIsSlashesPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsSlashesPresent( false );
	expected = false;
	actual = object.getIsSlashesPresent();
	CHECK_EQUAL( expected, actual )
}

/* End: IsAttributePresent -------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxCxSmpMeasureRepeat )
{
	MxCxSmpMeasureRepeat object( "booksmart", MxNumberPositiveIntegerOrEmpty( 1 ) );
	std::string expected;
	std::string actual;
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setSlashes( XsPositiveInteger( 1 ) );
	object.setIsSlashesPresent( true );
	expected = "<booksmart type=\"start\" slashes=\"1\">1</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxCxSmpMeasureRepeat )
{
	MxCxSmpMeasureRepeat object( "quiet", MxNumberPositiveIntegerOrEmpty( 1 ) );
	std::string expected;
	std::string actual;
	object.setIsSlashesPresent( true );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setSlashes( XsPositiveInteger( 1 ) );
	expected = "<quiet type=\"start\" slashes=\"1\">1</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString2, MxCxSmpMeasureRepeat )
{
	MxCxSmpMeasureRepeat object( "musicxmlishard", MxNumberPositiveIntegerOrEmpty( 1 ) );
	std::string expected;
	std::string actual;
	object.setIsSlashesPresent( false );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setSlashes( XsPositiveInteger( 1 ) );
	expected = "<musicxmlishard type=\"start\">1</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString3, MxCxSmpMeasureRepeat )
{
	MxCxSmpMeasureRepeat object( "bishop", MxNumberPositiveIntegerOrEmpty( 1 ) );
	std::string expected;
	std::string actual;
	object.setIsSlashesPresent( false );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setSlashes( XsPositiveInteger( 1 ) );
	expected = "<bishop type=\"start\">1</bishop>";
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

TEST( getIsTypeDefaultDefined, MxCxSmpMeasureRepeat )
{
	MxCxSmpMeasureRepeat object;
	bool expected = false;
	bool actual = object.getIsTypeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsSlashesDefaultDefined, MxCxSmpMeasureRepeat )
{
	MxCxSmpMeasureRepeat object;
	bool expected = false;
	bool actual = object.getIsSlashesDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getTypeDefaultValue, MxCxSmpMeasureRepeat )
{
	MxCxSmpMeasureRepeat object;
	MxEnumStartStop expected;
	MxEnumStartStop actual = object.getTypeDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getSlashesDefaultValue, MxCxSmpMeasureRepeat )
{
	MxCxSmpMeasureRepeat object;
	XsPositiveInteger expected;
	XsPositiveInteger actual = object.getSlashesDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


