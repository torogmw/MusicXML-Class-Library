/** *******************************************************
  * 
  * MxCxSmpBeaterTest.cpp
  * Created: 2014-12-02 17:31:51
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxCxSmpBeater.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxCxSmpBeater )
{
	MxCxSmpBeater object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxCxSmpBeater )
{
	MxCxSmpBeater object;
	std::string expected = ( MxEnumTipDirection(  ) ).toString();
	std::string actual = object.getTip().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValueAndElementName0, MxCxSmpBeater )
{
	MxCxSmpBeater object( "booksmart", MxEnumBeaterValue( lexicon::enums::BeaterValue::bow ) );
	std::string expected;
	std::string actual;
	expected = "booksmart";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "bow";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumBeaterValue( lexicon::enums::BeaterValue::chimeHammer ) );
	expected = "chime hammer";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName2, MxCxSmpBeater )
{
	MxCxSmpBeater object( "musicxmlishard", MxEnumBeaterValue( lexicon::enums::BeaterValue::coin ) );
	std::string expected;
	std::string actual;
	expected = "musicxmlishard";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "coin";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumBeaterValue( lexicon::enums::BeaterValue::finger ) );
	expected = "finger";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName4, MxCxSmpBeater )
{
	MxCxSmpBeater object( "charlie", MxEnumBeaterValue( lexicon::enums::BeaterValue::fingernail ) );
	std::string expected;
	std::string actual;
	expected = "charlie";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "fingernail";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumBeaterValue( lexicon::enums::BeaterValue::fist ) );
	expected = "fist";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName6, MxCxSmpBeater )
{
	MxCxSmpBeater object( "quiet", MxEnumBeaterValue( lexicon::enums::BeaterValue::guiroScraper ) );
	std::string expected;
	std::string actual;
	expected = "quiet";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "guiro scraper";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumBeaterValue( lexicon::enums::BeaterValue::hammer ) );
	expected = "hammer";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName8, MxCxSmpBeater )
{
	MxCxSmpBeater object( "bishop", MxEnumBeaterValue( lexicon::enums::BeaterValue::hand ) );
	std::string expected;
	std::string actual;
	expected = "bishop";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
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

TEST( getClassName, MxCxSmpBeater )
{
	MxCxSmpBeater object;
	std::string expected = "MxCxSmpBeater";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxCxSmpBeater )
{
	MxCxSmpBeater object;
	std::string expected = "beater";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxCxSmpBeater )
{
	MxCxSmpBeater object;
	std::string expected = "The beater type represents pictograms for beaters, mallets, and sticks that do not have different materials represented in the pictogram.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setTip0, MxCxSmpBeater )
{
	MxEnumTipDirection value1( lexicon::enums::TipDirection::southwest );
	MxEnumTipDirection value2( lexicon::enums::TipDirection::southeast );
	CHECK( ( value1 != value2 ) )
	MxCxSmpBeater object;
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

TEST( getIsTipRequired0, MxCxSmpBeater )
{
	MxCxSmpBeater object;
	bool expected = false;
	bool actual = object.getIsTipRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsTipPresent0, MxCxSmpBeater )
{
	MxCxSmpBeater object;
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


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxCxSmpBeater )
{
	MxCxSmpBeater object( "booksmart", MxEnumBeaterValue( lexicon::enums::BeaterValue::knittingNeedle ) );
	std::string expected;
	std::string actual;
	object.setTip( MxEnumTipDirection( lexicon::enums::TipDirection::up ) );
	object.setIsTipPresent( true );
	expected = "<booksmart tip=\"up\">knitting needle</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxCxSmpBeater )
{
	MxCxSmpBeater object( "quiet", MxEnumBeaterValue( lexicon::enums::BeaterValue::knittingNeedle ) );
	std::string expected;
	std::string actual;
	object.setIsTipPresent( false );
	object.setTip( MxEnumTipDirection( lexicon::enums::TipDirection::up ) );
	expected = "<quiet>knitting needle</quiet>";
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

TEST( getIsTipDefaultDefined, MxCxSmpBeater )
{
	MxCxSmpBeater object;
	bool expected = false;
	bool actual = object.getIsTipDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getTipDefaultValue, MxCxSmpBeater )
{
	MxCxSmpBeater object;
	MxEnumTipDirection expected;
	MxEnumTipDirection actual = object.getTipDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


