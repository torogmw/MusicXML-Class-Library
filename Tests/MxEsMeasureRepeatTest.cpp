/** *******************************************************
  * 
  * MxEsMeasureRepeatTest.cpp
  * Created: 2014-12-05 20:57:50
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxEsMeasureRepeat.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxEsMeasureRepeat )
{
	MxEsMeasureRepeat object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxEsMeasureRepeat )
{
	MxEsMeasureRepeat object;
	std::string expected = ( MxEnumStartStop(  ) ).toString();
	std::string actual = object.getType().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues1, MxEsMeasureRepeat )
{
	MxEsMeasureRepeat object;
	std::string expected = ( XsPositiveInteger(  ) ).toString();
	std::string actual = object.getSlashes().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* minOccurs maxOccurs ------------------------------------------------------ */

TEST( getMinOccurs, MxEsMeasureRepeat )
{
	MxEsMeasureRepeat object;
	int expected = 1;
	int actual = object.getMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getMaxOccurs, MxEsMeasureRepeat )
{
	MxEsMeasureRepeat object;
	int expected = 1;
	int actual = object.getMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsMaxOccursUnbounded, MxEsMeasureRepeat )
{
	MxEsMeasureRepeat object;
	bool expected = false;
	bool actual = object.getIsMaxOccursUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: minOccurs maxOccurs ------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValue0, MxEsMeasureRepeat )
{
	MxEsMeasureRepeat object( MxNumberPositiveIntegerOrEmpty( "" ) );
	std::string expected;
	std::string actual;
	expected = "";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxNumberPositiveIntegerOrEmpty( 1 ) );
	expected = "1";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2, MxEsMeasureRepeat )
{
	MxEsMeasureRepeat object( 1 );
	std::string expected;
	std::string actual;
	expected = "1";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxNumberPositiveIntegerOrEmpty( 1 ) );
	expected = "1";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue4, MxEsMeasureRepeat )
{
	MxEsMeasureRepeat object( 1 );
	std::string expected;
	std::string actual;
	expected = "1";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxNumberPositiveIntegerOrEmpty( 1 ) );
	expected = "1";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue6, MxEsMeasureRepeat )
{
	MxEsMeasureRepeat object( 1 );
	std::string expected;
	std::string actual;
	expected = "1";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxNumberPositiveIntegerOrEmpty( 1 ) );
	expected = "1";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue8, MxEsMeasureRepeat )
{
	MxEsMeasureRepeat object( 1 );
	std::string expected;
	std::string actual;
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

TEST( getClassName, MxEsMeasureRepeat )
{
	MxEsMeasureRepeat object;
	std::string expected = "MxEsMeasureRepeat";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxEsMeasureRepeat )
{
	MxEsMeasureRepeat object;
	std::string expected = "measure-repeat";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxEsMeasureRepeat )
{
	MxEsMeasureRepeat object;
	std::string expected = "( no documentation )";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setType0, MxEsMeasureRepeat )
{
	MxEnumStartStop value1( lexicon::enums::StartStop::stop );
	MxEnumStartStop value2( lexicon::enums::StartStop::start );
	CHECK( ( value1 != value2 ) )
	MxEsMeasureRepeat object;
	object.setType( value1 );
	MxEnumStartStop expected = value1;
	MxEnumStartStop actual = object.getType();
	CHECK_EQUAL( expected, actual )
	object.setType( value2 );
	expected = value2;
	actual = object.getType();
	CHECK_EQUAL( expected, actual )
}
TEST( setSlashes1, MxEsMeasureRepeat )
{
	XsPositiveInteger value1( 1 );
	XsPositiveInteger value2( 2 );
	CHECK( ( value1 != value2 ) )
	MxEsMeasureRepeat object;
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

TEST( getIsTypeRequired0, MxEsMeasureRepeat )
{
	MxEsMeasureRepeat object;
	bool expected = true;
	bool actual = object.getIsTypeRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsSlashesRequired1, MxEsMeasureRepeat )
{
	MxEsMeasureRepeat object;
	bool expected = false;
	bool actual = object.getIsSlashesRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsTypePresent0, MxEsMeasureRepeat )
{
	MxEsMeasureRepeat object;
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
TEST( getIsSlashesPresent1, MxEsMeasureRepeat )
{
	MxEsMeasureRepeat object;
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


/* Is Default Defined ------------------------------------------------------- */

TEST( getIsTypeDefaultDefined, MxEsMeasureRepeat )
{
	MxEsMeasureRepeat object;
	bool expected = false;
	bool actual = object.getIsTypeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsSlashesDefaultDefined, MxEsMeasureRepeat )
{
	MxEsMeasureRepeat object;
	bool expected = false;
	bool actual = object.getIsSlashesDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getTypeDefaultValue, MxEsMeasureRepeat )
{
	MxEsMeasureRepeat object;
	MxEnumStartStop expected;
	MxEnumStartStop actual = object.getTypeDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getSlashesDefaultValue, MxEsMeasureRepeat )
{
	MxEsMeasureRepeat object;
	XsPositiveInteger expected;
	XsPositiveInteger actual = object.getSlashesDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxEsMeasureRepeat )
{
	MxEsMeasureRepeat object( 1 );
	std::string expected;
	std::string actual;
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setSlashes( XsPositiveInteger( 1 ) );
	object.setIsSlashesPresent( true );
	expected = "<measure-repeat type=\"start\" slashes=\"1\">1</measure-repeat>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxEsMeasureRepeat )
{
	MxEsMeasureRepeat object( 1 );
	std::string expected;
	std::string actual;
	object.setIsSlashesPresent( true );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setSlashes( XsPositiveInteger( 1 ) );
	expected = "<measure-repeat type=\"start\" slashes=\"1\">1</measure-repeat>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString2, MxEsMeasureRepeat )
{
	MxEsMeasureRepeat object( 1 );
	std::string expected;
	std::string actual;
	object.setIsSlashesPresent( false );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setSlashes( XsPositiveInteger( 1 ) );
	expected = "<measure-repeat type=\"start\">1</measure-repeat>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString3, MxEsMeasureRepeat )
{
	MxEsMeasureRepeat object( 1 );
	std::string expected;
	std::string actual;
	object.setIsSlashesPresent( false );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setSlashes( XsPositiveInteger( 1 ) );
	expected = "<measure-repeat type=\"start\">1</measure-repeat>";
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


