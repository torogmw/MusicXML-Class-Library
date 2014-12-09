/** *******************************************************
  * 
  * MxCxEmptyLyricLanguageTest.cpp
  * Created: 2014-12-03 16:31:31
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxCxEmptyLyricLanguage.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxCxEmptyLyricLanguage )
{
	MxCxEmptyLyricLanguage object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxCxEmptyLyricLanguage )
{
	MxCxEmptyLyricLanguage object;
	std::string expected = ( XsNmToken(  ) ).toString();
	std::string actual = object.getNumber().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues1, MxCxEmptyLyricLanguage )
{
	MxCxEmptyLyricLanguage object;
	std::string expected = ( XsToken(  ) ).toString();
	std::string actual = object.getName().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues2, MxCxEmptyLyricLanguage )
{
	MxCxEmptyLyricLanguage object;
	std::string expected = ( XmlLang(  ) ).toString();
	std::string actual = object.getXmlLang().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValueAndElementName0, MxCxEmptyLyricLanguage )
{
	MxCxEmptyLyricLanguage object( "booksmart" );
	std::string expected;
	std::string actual;
	expected = "booksmart";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName2, MxCxEmptyLyricLanguage )
{
	MxCxEmptyLyricLanguage object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	expected = "musicxmlishard";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName4, MxCxEmptyLyricLanguage )
{
	MxCxEmptyLyricLanguage object( "charlie" );
	std::string expected;
	std::string actual;
	expected = "charlie";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName6, MxCxEmptyLyricLanguage )
{
	MxCxEmptyLyricLanguage object( "quiet" );
	std::string expected;
	std::string actual;
	expected = "quiet";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName8, MxCxEmptyLyricLanguage )
{
	MxCxEmptyLyricLanguage object( "bishop" );
	std::string expected;
	std::string actual;
	expected = "bishop";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}

/* End: Ctor tests with values  --------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxCxEmptyLyricLanguage )
{
	MxCxEmptyLyricLanguage object;
	std::string expected = "MxCxEmptyLyricLanguage";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxCxEmptyLyricLanguage )
{
	MxCxEmptyLyricLanguage object;
	std::string expected = "lyric-language";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxCxEmptyLyricLanguage )
{
	MxCxEmptyLyricLanguage object;
	std::string expected = "The lyric-language type specifies the default language for a particular name and number of lyric.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setNumber0, MxCxEmptyLyricLanguage )
{
	XsNmToken value1( "TOKEN1" );
	XsNmToken value2( "TOKEN2" );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyLyricLanguage object;
	object.setNumber( value1 );
	XsNmToken expected = value1;
	XsNmToken actual = object.getNumber();
	CHECK_EQUAL( expected, actual )
	object.setNumber( value2 );
	expected = value2;
	actual = object.getNumber();
	CHECK_EQUAL( expected, actual )
}
TEST( setName1, MxCxEmptyLyricLanguage )
{
	XsToken value1( "ABC" );
	XsToken value2( "XYZ" );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyLyricLanguage object;
	object.setName( value1 );
	XsToken expected = value1;
	XsToken actual = object.getName();
	CHECK_EQUAL( expected, actual )
	object.setName( value2 );
	expected = value2;
	actual = object.getName();
	CHECK_EQUAL( expected, actual )
}
TEST( setXmlLang2, MxCxEmptyLyricLanguage )
{
	XmlLang value1( "en" );
	XmlLang value2( "fr" );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyLyricLanguage object;
	object.setXmlLang( value1 );
	XmlLang expected = value1;
	XmlLang actual = object.getXmlLang();
	CHECK_EQUAL( expected, actual )
	object.setXmlLang( value2 );
	expected = value2;
	actual = object.getXmlLang();
	CHECK_EQUAL( expected, actual )
}

/* End: SetValue Functions -------------------------------------------------- */


/* Get IsAttributeRequired -------------------------------------------------- */

TEST( getIsNumberRequired0, MxCxEmptyLyricLanguage )
{
	MxCxEmptyLyricLanguage object;
	bool expected = false;
	bool actual = object.getIsNumberRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsNameRequired1, MxCxEmptyLyricLanguage )
{
	MxCxEmptyLyricLanguage object;
	bool expected = false;
	bool actual = object.getIsNameRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsXmlLangRequired2, MxCxEmptyLyricLanguage )
{
	MxCxEmptyLyricLanguage object;
	bool expected = true;
	bool actual = object.getIsXmlLangRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsNumberPresent0, MxCxEmptyLyricLanguage )
{
	MxCxEmptyLyricLanguage object;
	bool expected = false;
	bool actual = object.getIsNumberPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsNumberPresent( true );
	expected = true;
	actual = object.getIsNumberPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsNumberPresent( false );
	expected = false;
	actual = object.getIsNumberPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsNamePresent1, MxCxEmptyLyricLanguage )
{
	MxCxEmptyLyricLanguage object;
	bool expected = false;
	bool actual = object.getIsNamePresent();
	CHECK_EQUAL( expected, actual )
	object.setIsNamePresent( true );
	expected = true;
	actual = object.getIsNamePresent();
	CHECK_EQUAL( expected, actual )
	object.setIsNamePresent( false );
	expected = false;
	actual = object.getIsNamePresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsXmlLangPresent2, MxCxEmptyLyricLanguage )
{
	MxCxEmptyLyricLanguage object;
	bool expected = true;
	bool actual = object.getIsXmlLangPresent();
	CHECK_EQUAL( expected, actual )
	/* setter does not exist because this attribute is required */
	expected = true;
	actual = object.getIsXmlLangPresent();
	CHECK_EQUAL( expected, actual )
	/* setter does not exist because this attribute is required */
	expected = true;
	actual = object.getIsXmlLangPresent();
	CHECK_EQUAL( expected, actual )
}

/* End: IsAttributePresent -------------------------------------------------- */


/* Is Default Defined ------------------------------------------------------- */

TEST( getIsNumberDefaultDefined, MxCxEmptyLyricLanguage )
{
	MxCxEmptyLyricLanguage object;
	bool expected = false;
	bool actual = object.getIsNumberDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsNameDefaultDefined, MxCxEmptyLyricLanguage )
{
	MxCxEmptyLyricLanguage object;
	bool expected = false;
	bool actual = object.getIsNameDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsXmlLangDefaultDefined, MxCxEmptyLyricLanguage )
{
	MxCxEmptyLyricLanguage object;
	bool expected = false;
	bool actual = object.getIsXmlLangDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getNumberDefaultValue, MxCxEmptyLyricLanguage )
{
	MxCxEmptyLyricLanguage object;
	XsNmToken expected;
	XsNmToken actual = object.getNumberDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getNameDefaultValue, MxCxEmptyLyricLanguage )
{
	MxCxEmptyLyricLanguage object;
	XsToken expected;
	XsToken actual = object.getNameDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlLangDefaultValue, MxCxEmptyLyricLanguage )
{
	MxCxEmptyLyricLanguage object;
	XmlLang expected;
	XmlLang actual = object.getXmlLangDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxCxEmptyLyricLanguage )
{
	MxCxEmptyLyricLanguage object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setNumber( XsNmToken( "" ) );
	object.setName( XsToken( "" ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setIsNumberPresent( true );
	object.setIsNamePresent( true );
	expected = "<booksmart number=\"\" name=\"\" xml:lang=\"\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxCxEmptyLyricLanguage )
{
	MxCxEmptyLyricLanguage object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsNamePresent( true );
	object.setNumber( XsNmToken( "" ) );
	object.setName( XsToken( "" ) );
	object.setXmlLang( XmlLang( "" ) );
	expected = "<quiet name=\"\" xml:lang=\"\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString2, MxCxEmptyLyricLanguage )
{
	MxCxEmptyLyricLanguage object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsNamePresent( false );
	object.setNumber( XsNmToken( "" ) );
	object.setName( XsToken( "" ) );
	object.setXmlLang( XmlLang( "" ) );
	expected = "<musicxmlishard number=\"\" xml:lang=\"\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString3, MxCxEmptyLyricLanguage )
{
	MxCxEmptyLyricLanguage object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsNamePresent( false );
	object.setNumber( XsNmToken( "" ) );
	object.setName( XsToken( "" ) );
	object.setXmlLang( XmlLang( "" ) );
	expected = "<bishop xml:lang=\"\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString4, MxCxEmptyLyricLanguage )
{
	MxCxEmptyLyricLanguage object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsNamePresent( true );
	object.setNumber( XsNmToken( "" ) );
	object.setName( XsToken( "" ) );
	object.setXmlLang( XmlLang( "" ) );
	expected = "<charlie number=\"\" name=\"\" xml:lang=\"\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString5, MxCxEmptyLyricLanguage )
{
	MxCxEmptyLyricLanguage object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsNamePresent( true );
	object.setNumber( XsNmToken( "" ) );
	object.setName( XsToken( "" ) );
	object.setXmlLang( XmlLang( "" ) );
	expected = "<booksmart name=\"\" xml:lang=\"\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString6, MxCxEmptyLyricLanguage )
{
	MxCxEmptyLyricLanguage object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsNamePresent( false );
	object.setNumber( XsNmToken( "" ) );
	object.setName( XsToken( "" ) );
	object.setXmlLang( XmlLang( "" ) );
	expected = "<quiet number=\"\" xml:lang=\"\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString7, MxCxEmptyLyricLanguage )
{
	MxCxEmptyLyricLanguage object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsNamePresent( false );
	object.setNumber( XsNmToken( "" ) );
	object.setName( XsToken( "" ) );
	object.setXmlLang( XmlLang( "" ) );
	expected = "<musicxmlishard xml:lang=\"\"/>";
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


