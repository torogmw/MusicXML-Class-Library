/** *******************************************************
  * 
  * MxEsMultipleRestTest.cpp
  * Created: 2014-12-05 20:57:50
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxEsMultipleRest.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxEsMultipleRest )
{
	MxEsMultipleRest object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxEsMultipleRest )
{
	MxEsMultipleRest object;
	std::string expected = ( MxEnumYesNo(  ) ).toString();
	std::string actual = object.getUseSymbols().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* minOccurs maxOccurs ------------------------------------------------------ */

TEST( getMinOccurs, MxEsMultipleRest )
{
	MxEsMultipleRest object;
	int expected = 1;
	int actual = object.getMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getMaxOccurs, MxEsMultipleRest )
{
	MxEsMultipleRest object;
	int expected = 1;
	int actual = object.getMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsMaxOccursUnbounded, MxEsMultipleRest )
{
	MxEsMultipleRest object;
	bool expected = false;
	bool actual = object.getIsMaxOccursUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: minOccurs maxOccurs ------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValue0, MxEsMultipleRest )
{
	MxEsMultipleRest object( MxNumberPositiveIntegerOrEmpty( "" ) );
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
TEST( ctorValue2, MxEsMultipleRest )
{
	MxEsMultipleRest object( 1 );
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
TEST( ctorValue4, MxEsMultipleRest )
{
	MxEsMultipleRest object( 1 );
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
TEST( ctorValue6, MxEsMultipleRest )
{
	MxEsMultipleRest object( 1 );
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
TEST( ctorValue8, MxEsMultipleRest )
{
	MxEsMultipleRest object( 1 );
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

TEST( getClassName, MxEsMultipleRest )
{
	MxEsMultipleRest object;
	std::string expected = "MxEsMultipleRest";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxEsMultipleRest )
{
	MxEsMultipleRest object;
	std::string expected = "multiple-rest";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxEsMultipleRest )
{
	MxEsMultipleRest object;
	std::string expected = "( no documentation )";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setUseSymbols0, MxEsMultipleRest )
{
	MxEnumYesNo value1( lexicon::enums::YesNo::no );
	MxEnumYesNo value2( lexicon::enums::YesNo::yes );
	CHECK( ( value1 != value2 ) )
	MxEsMultipleRest object;
	object.setUseSymbols( value1 );
	MxEnumYesNo expected = value1;
	MxEnumYesNo actual = object.getUseSymbols();
	CHECK_EQUAL( expected, actual )
	object.setUseSymbols( value2 );
	expected = value2;
	actual = object.getUseSymbols();
	CHECK_EQUAL( expected, actual )
}

/* End: SetValue Functions -------------------------------------------------- */


/* Get IsAttributeRequired -------------------------------------------------- */

TEST( getIsUseSymbolsRequired0, MxEsMultipleRest )
{
	MxEsMultipleRest object;
	bool expected = false;
	bool actual = object.getIsUseSymbolsRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsUseSymbolsPresent0, MxEsMultipleRest )
{
	MxEsMultipleRest object;
	bool expected = false;
	bool actual = object.getIsUseSymbolsPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsUseSymbolsPresent( true );
	expected = true;
	actual = object.getIsUseSymbolsPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsUseSymbolsPresent( false );
	expected = false;
	actual = object.getIsUseSymbolsPresent();
	CHECK_EQUAL( expected, actual )
}

/* End: IsAttributePresent -------------------------------------------------- */


/* Is Default Defined ------------------------------------------------------- */

TEST( getIsUseSymbolsDefaultDefined, MxEsMultipleRest )
{
	MxEsMultipleRest object;
	bool expected = false;
	bool actual = object.getIsUseSymbolsDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getUseSymbolsDefaultValue, MxEsMultipleRest )
{
	MxEsMultipleRest object;
	MxEnumYesNo expected;
	MxEnumYesNo actual = object.getUseSymbolsDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxEsMultipleRest )
{
	MxEsMultipleRest object( 1 );
	std::string expected;
	std::string actual;
	object.setUseSymbols( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setIsUseSymbolsPresent( true );
	expected = "<multiple-rest use-symbols=\"yes\">1</multiple-rest>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxEsMultipleRest )
{
	MxEsMultipleRest object( 1 );
	std::string expected;
	std::string actual;
	object.setIsUseSymbolsPresent( false );
	object.setUseSymbols( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<multiple-rest>1</multiple-rest>";
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


