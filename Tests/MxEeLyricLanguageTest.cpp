/** *******************************************************
  * 
  * MxEeLyricLanguageTest.cpp
  * Created: 2014-12-05 16:47:08
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxEeLyricLanguage.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxEeLyricLanguage )
{
	MxEeLyricLanguage object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxEeLyricLanguage )
{
	MxEeLyricLanguage object;
	std::string expected = ( XsNmToken(  ) ).toString();
	std::string actual = object.getNumber().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues1, MxEeLyricLanguage )
{
	MxEeLyricLanguage object;
	std::string expected = ( XsToken(  ) ).toString();
	std::string actual = object.getName().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues2, MxEeLyricLanguage )
{
	MxEeLyricLanguage object;
	std::string expected = ( XmlLang(  ) ).toString();
	std::string actual = object.getXmlLang().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* minOccurs maxOccurs ------------------------------------------------------ */

TEST( getMinOccurs, MxEeLyricLanguage )
{
	MxEeLyricLanguage object;
	int expected = 0;
	int actual = object.getMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getMaxOccurs, MxEeLyricLanguage )
{
	MxEeLyricLanguage object;
	int expected = 32767;
	int actual = object.getMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsMaxOccursUnbounded, MxEeLyricLanguage )
{
	MxEeLyricLanguage object;
	bool expected = true;
	bool actual = object.getIsMaxOccursUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: minOccurs maxOccurs ------------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxEeLyricLanguage )
{
	MxEeLyricLanguage object;
	std::string expected = "MxEeLyricLanguage";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxEeLyricLanguage )
{
	MxEeLyricLanguage object;
	std::string expected = "lyric-language";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxEeLyricLanguage )
{
	MxEeLyricLanguage object;
	std::string expected = "( no documentation )";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setNumber0, MxEeLyricLanguage )
{
	XsNmToken value1( "TOKEN1" );
	XsNmToken value2( "TOKEN2" );
	CHECK( ( value1 != value2 ) )
	MxEeLyricLanguage object;
	object.setNumber( value1 );
	XsNmToken expected = value1;
	XsNmToken actual = object.getNumber();
	CHECK_EQUAL( expected, actual )
	object.setNumber( value2 );
	expected = value2;
	actual = object.getNumber();
	CHECK_EQUAL( expected, actual )
}
TEST( setName1, MxEeLyricLanguage )
{
	XsToken value1( "ABC" );
	XsToken value2( "XYZ" );
	CHECK( ( value1 != value2 ) )
	MxEeLyricLanguage object;
	object.setName( value1 );
	XsToken expected = value1;
	XsToken actual = object.getName();
	CHECK_EQUAL( expected, actual )
	object.setName( value2 );
	expected = value2;
	actual = object.getName();
	CHECK_EQUAL( expected, actual )
}
TEST( setXmlLang2, MxEeLyricLanguage )
{
	XmlLang value1( "en" );
	XmlLang value2( "fr" );
	CHECK( ( value1 != value2 ) )
	MxEeLyricLanguage object;
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

TEST( getIsNumberRequired0, MxEeLyricLanguage )
{
	MxEeLyricLanguage object;
	bool expected = false;
	bool actual = object.getIsNumberRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsNameRequired1, MxEeLyricLanguage )
{
	MxEeLyricLanguage object;
	bool expected = false;
	bool actual = object.getIsNameRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsXmlLangRequired2, MxEeLyricLanguage )
{
	MxEeLyricLanguage object;
	bool expected = true;
	bool actual = object.getIsXmlLangRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsNumberPresent0, MxEeLyricLanguage )
{
	MxEeLyricLanguage object;
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
TEST( getIsNamePresent1, MxEeLyricLanguage )
{
	MxEeLyricLanguage object;
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
TEST( getIsXmlLangPresent2, MxEeLyricLanguage )
{
	MxEeLyricLanguage object;
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

TEST( getIsNumberDefaultDefined, MxEeLyricLanguage )
{
	MxEeLyricLanguage object;
	bool expected = false;
	bool actual = object.getIsNumberDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsNameDefaultDefined, MxEeLyricLanguage )
{
	MxEeLyricLanguage object;
	bool expected = false;
	bool actual = object.getIsNameDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsXmlLangDefaultDefined, MxEeLyricLanguage )
{
	MxEeLyricLanguage object;
	bool expected = false;
	bool actual = object.getIsXmlLangDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getNumberDefaultValue, MxEeLyricLanguage )
{
	MxEeLyricLanguage object;
	XsNmToken expected;
	XsNmToken actual = object.getNumberDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getNameDefaultValue, MxEeLyricLanguage )
{
	MxEeLyricLanguage object;
	XsToken expected;
	XsToken actual = object.getNameDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlLangDefaultValue, MxEeLyricLanguage )
{
	MxEeLyricLanguage object;
	XmlLang expected;
	XmlLang actual = object.getXmlLangDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxEeLyricLanguage )
{
	MxEeLyricLanguage object;
	std::string expected;
	std::string actual;
	object.setNumber( XsNmToken( "" ) );
	object.setName( XsToken( "" ) );
	object.setXmlLang( XmlLang( "" ) );
	object.setIsNumberPresent( true );
	object.setIsNamePresent( true );
	expected = "<lyric-language number=\"\" name=\"\" xml:lang=\"\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxEeLyricLanguage )
{
	MxEeLyricLanguage object;
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsNamePresent( true );
	object.setNumber( XsNmToken( "" ) );
	object.setName( XsToken( "" ) );
	object.setXmlLang( XmlLang( "" ) );
	expected = "<lyric-language name=\"\" xml:lang=\"\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString2, MxEeLyricLanguage )
{
	MxEeLyricLanguage object;
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsNamePresent( false );
	object.setNumber( XsNmToken( "" ) );
	object.setName( XsToken( "" ) );
	object.setXmlLang( XmlLang( "" ) );
	expected = "<lyric-language number=\"\" xml:lang=\"\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString3, MxEeLyricLanguage )
{
	MxEeLyricLanguage object;
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsNamePresent( false );
	object.setNumber( XsNmToken( "" ) );
	object.setName( XsToken( "" ) );
	object.setXmlLang( XmlLang( "" ) );
	expected = "<lyric-language xml:lang=\"\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString4, MxEeLyricLanguage )
{
	MxEeLyricLanguage object;
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsNamePresent( true );
	object.setNumber( XsNmToken( "" ) );
	object.setName( XsToken( "" ) );
	object.setXmlLang( XmlLang( "" ) );
	expected = "<lyric-language number=\"\" name=\"\" xml:lang=\"\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString5, MxEeLyricLanguage )
{
	MxEeLyricLanguage object;
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsNamePresent( true );
	object.setNumber( XsNmToken( "" ) );
	object.setName( XsToken( "" ) );
	object.setXmlLang( XmlLang( "" ) );
	expected = "<lyric-language name=\"\" xml:lang=\"\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString6, MxEeLyricLanguage )
{
	MxEeLyricLanguage object;
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsNamePresent( false );
	object.setNumber( XsNmToken( "" ) );
	object.setName( XsToken( "" ) );
	object.setXmlLang( XmlLang( "" ) );
	expected = "<lyric-language number=\"\" xml:lang=\"\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString7, MxEeLyricLanguage )
{
	MxEeLyricLanguage object;
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsNamePresent( false );
	object.setNumber( XsNmToken( "" ) );
	object.setName( XsToken( "" ) );
	object.setXmlLang( XmlLang( "" ) );
	expected = "<lyric-language xml:lang=\"\"/>";
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


