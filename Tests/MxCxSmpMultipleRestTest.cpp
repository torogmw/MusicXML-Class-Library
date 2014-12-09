/** *******************************************************
  * 
  * MxCxSmpMultipleRestTest.cpp
  * Created: 2014-12-02 17:31:51
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxCxSmpMultipleRest.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxCxSmpMultipleRest )
{
	MxCxSmpMultipleRest object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxCxSmpMultipleRest )
{
	MxCxSmpMultipleRest object;
	std::string expected = ( MxEnumYesNo(  ) ).toString();
	std::string actual = object.getUseSymbols().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValueAndElementName0, MxCxSmpMultipleRest )
{
	MxCxSmpMultipleRest object( "booksmart", MxNumberPositiveIntegerOrEmpty(  ) );
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
TEST( ctorValueAndElementName2, MxCxSmpMultipleRest )
{
	MxCxSmpMultipleRest object( "musicxmlishard", MxNumberPositiveIntegerOrEmpty( 1 ) );
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
TEST( ctorValueAndElementName4, MxCxSmpMultipleRest )
{
	MxCxSmpMultipleRest object( "charlie", MxNumberPositiveIntegerOrEmpty( 1 ) );
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
TEST( ctorValueAndElementName6, MxCxSmpMultipleRest )
{
	MxCxSmpMultipleRest object( "quiet", MxNumberPositiveIntegerOrEmpty( 1 ) );
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
TEST( ctorValueAndElementName8, MxCxSmpMultipleRest )
{
	MxCxSmpMultipleRest object( "bishop", MxNumberPositiveIntegerOrEmpty( 1 ) );
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

TEST( getClassName, MxCxSmpMultipleRest )
{
	MxCxSmpMultipleRest object;
	std::string expected = "MxCxSmpMultipleRest";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxCxSmpMultipleRest )
{
	MxCxSmpMultipleRest object;
	std::string expected = "multiple-rest";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxCxSmpMultipleRest )
{
	MxCxSmpMultipleRest object;
	std::string expected = "The text of the multiple-rest type indicates the number of measures in the multiple rest. Multiple rests may use the 1-bar / 2-bar / 4-bar rest symbols, or a single shape. The use-symbols attribute indicates which to use; it is no if not specified. The element text is ignored when the type is stop.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setUseSymbols0, MxCxSmpMultipleRest )
{
	MxEnumYesNo value1( lexicon::enums::YesNo::no );
	MxEnumYesNo value2( lexicon::enums::YesNo::yes );
	CHECK( ( value1 != value2 ) )
	MxCxSmpMultipleRest object;
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

TEST( getIsUseSymbolsRequired0, MxCxSmpMultipleRest )
{
	MxCxSmpMultipleRest object;
	bool expected = false;
	bool actual = object.getIsUseSymbolsRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsUseSymbolsPresent0, MxCxSmpMultipleRest )
{
	MxCxSmpMultipleRest object;
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


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxCxSmpMultipleRest )
{
	MxCxSmpMultipleRest object( "booksmart", MxNumberPositiveIntegerOrEmpty( 1 ) );
	std::string expected;
	std::string actual;
	object.setUseSymbols( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setIsUseSymbolsPresent( true );
	expected = "<booksmart use-symbols=\"yes\">1</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxCxSmpMultipleRest )
{
	MxCxSmpMultipleRest object( "quiet", MxNumberPositiveIntegerOrEmpty( 1 ) );
	std::string expected;
	std::string actual;
	object.setIsUseSymbolsPresent( false );
	object.setUseSymbols( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<quiet>1</quiet>";
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

TEST( getIsUseSymbolsDefaultDefined, MxCxSmpMultipleRest )
{
	MxCxSmpMultipleRest object;
	bool expected = false;
	bool actual = object.getIsUseSymbolsDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getUseSymbolsDefaultValue, MxCxSmpMultipleRest )
{
	MxCxSmpMultipleRest object;
	MxEnumYesNo expected;
	MxEnumYesNo actual = object.getUseSymbolsDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


