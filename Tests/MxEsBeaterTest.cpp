/** *******************************************************
  * 
  * MxEsBeaterTest.cpp
  * Created: 2014-12-05 20:57:54
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxEsBeater.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxEsBeater )
{
	MxEsBeater object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxEsBeater )
{
	MxEsBeater object;
	std::string expected = ( MxEnumTipDirection(  ) ).toString();
	std::string actual = object.getTip().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* minOccurs maxOccurs ------------------------------------------------------ */

TEST( getMinOccurs, MxEsBeater )
{
	MxEsBeater object;
	int expected = 1;
	int actual = object.getMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getMaxOccurs, MxEsBeater )
{
	MxEsBeater object;
	int expected = 1;
	int actual = object.getMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsMaxOccursUnbounded, MxEsBeater )
{
	MxEsBeater object;
	bool expected = false;
	bool actual = object.getIsMaxOccursUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: minOccurs maxOccurs ------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValue0, MxEsBeater )
{
	MxEsBeater object( lexicon::enums::BeaterValue::bow );
	std::string expected;
	std::string actual;
	expected = "bow";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumBeaterValue( lexicon::enums::BeaterValue::chimeHammer ) );
	expected = "chime hammer";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2, MxEsBeater )
{
	MxEsBeater object( lexicon::enums::BeaterValue::coin );
	std::string expected;
	std::string actual;
	expected = "coin";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumBeaterValue( lexicon::enums::BeaterValue::finger ) );
	expected = "finger";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue4, MxEsBeater )
{
	MxEsBeater object( lexicon::enums::BeaterValue::fingernail );
	std::string expected;
	std::string actual;
	expected = "fingernail";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumBeaterValue( lexicon::enums::BeaterValue::fist ) );
	expected = "fist";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue6, MxEsBeater )
{
	MxEsBeater object( lexicon::enums::BeaterValue::guiroScraper );
	std::string expected;
	std::string actual;
	expected = "guiro scraper";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumBeaterValue( lexicon::enums::BeaterValue::hammer ) );
	expected = "hammer";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue8, MxEsBeater )
{
	MxEsBeater object( lexicon::enums::BeaterValue::hand );
	std::string expected;
	std::string actual;
	expected = "hand";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumBeaterValue( lexicon::enums::BeaterValue::jazzStick ) );
	expected = "jazz stick";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Ctor tests with values  --------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxEsBeater )
{
	MxEsBeater object;
	std::string expected = "MxEsBeater";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxEsBeater )
{
	MxEsBeater object;
	std::string expected = "beater";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxEsBeater )
{
	MxEsBeater object;
	std::string expected = "( no documentation )";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setTip0, MxEsBeater )
{
	MxEnumTipDirection value1( lexicon::enums::TipDirection::southwest );
	MxEnumTipDirection value2( lexicon::enums::TipDirection::southeast );
	CHECK( ( value1 != value2 ) )
	MxEsBeater object;
	object.setTip( value1 );
	MxEnumTipDirection expected = value1;
	MxEnumTipDirection actual = object.getTip();
	CHECK_EQUAL( expected, actual )
	object.setTip( value2 );
	expected = value2;
	actual = object.getTip();
	CHECK_EQUAL( expected, actual )
}

/* End: SetValue Functions -------------------------------------------------- */


/* Get IsAttributeRequired -------------------------------------------------- */

TEST( getIsTipRequired0, MxEsBeater )
{
	MxEsBeater object;
	bool expected = false;
	bool actual = object.getIsTipRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsTipPresent0, MxEsBeater )
{
	MxEsBeater object;
	bool expected = false;
	bool actual = object.getIsTipPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsTipPresent( true );
	expected = true;
	actual = object.getIsTipPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsTipPresent( false );
	expected = false;
	actual = object.getIsTipPresent();
	CHECK_EQUAL( expected, actual )
}

/* End: IsAttributePresent -------------------------------------------------- */


/* Is Default Defined ------------------------------------------------------- */

TEST( getIsTipDefaultDefined, MxEsBeater )
{
	MxEsBeater object;
	bool expected = false;
	bool actual = object.getIsTipDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getTipDefaultValue, MxEsBeater )
{
	MxEsBeater object;
	MxEnumTipDirection expected;
	MxEnumTipDirection actual = object.getTipDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxEsBeater )
{
	MxEsBeater object( lexicon::enums::BeaterValue::knittingNeedle );
	std::string expected;
	std::string actual;
	object.setTip( MxEnumTipDirection( lexicon::enums::TipDirection::up ) );
	object.setIsTipPresent( true );
	expected = "<beater tip=\"up\">knitting needle</beater>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxEsBeater )
{
	MxEsBeater object( lexicon::enums::BeaterValue::knittingNeedle );
	std::string expected;
	std::string actual;
	object.setIsTipPresent( false );
	object.setTip( MxEnumTipDirection( lexicon::enums::TipDirection::up ) );
	expected = "<beater>knitting needle</beater>";
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


