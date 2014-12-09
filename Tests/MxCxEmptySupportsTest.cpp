/** *******************************************************
  * 
  * MxCxEmptySupportsTest.cpp
  * Created: 2014-12-03 16:31:29
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxCxEmptySupports.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxCxEmptySupports )
{
	MxCxEmptySupports object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxCxEmptySupports )
{
	MxCxEmptySupports object;
	std::string expected = ( MxEnumYesNo(  ) ).toString();
	std::string actual = object.getType().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues1, MxCxEmptySupports )
{
	MxCxEmptySupports object;
	std::string expected = ( XsNmToken(  ) ).toString();
	std::string actual = object.getElement().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues2, MxCxEmptySupports )
{
	MxCxEmptySupports object;
	std::string expected = ( XsNmToken(  ) ).toString();
	std::string actual = object.getAttribute().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues3, MxCxEmptySupports )
{
	MxCxEmptySupports object;
	std::string expected = ( XsToken(  ) ).toString();
	std::string actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValueAndElementName0, MxCxEmptySupports )
{
	MxCxEmptySupports object( "booksmart" );
	std::string expected;
	std::string actual;
	expected = "booksmart";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName2, MxCxEmptySupports )
{
	MxCxEmptySupports object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	expected = "musicxmlishard";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName4, MxCxEmptySupports )
{
	MxCxEmptySupports object( "charlie" );
	std::string expected;
	std::string actual;
	expected = "charlie";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName6, MxCxEmptySupports )
{
	MxCxEmptySupports object( "quiet" );
	std::string expected;
	std::string actual;
	expected = "quiet";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName8, MxCxEmptySupports )
{
	MxCxEmptySupports object( "bishop" );
	std::string expected;
	std::string actual;
	expected = "bishop";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}

/* End: Ctor tests with values  --------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxCxEmptySupports )
{
	MxCxEmptySupports object;
	std::string expected = "MxCxEmptySupports";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxCxEmptySupports )
{
	MxCxEmptySupports object;
	std::string expected = "supports";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxCxEmptySupports )
{
	MxCxEmptySupports object;
	std::string expected = "The supports type indicates if a MusicXML encoding supports a particular MusicXML element. This is recommended for elements like beam, stem, and accidental, where the absence of an element is ambiguous if you do not know if the encoding supports that element. For Version 2.0, the supports element is expanded to allow programs to indicate support for particular attributes or particular values. This lets applications communicate, for example, that all system and/or page breaks are contained in the MusicXML file.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setType0, MxCxEmptySupports )
{
	MxEnumYesNo value1( lexicon::enums::YesNo::no );
	MxEnumYesNo value2( lexicon::enums::YesNo::yes );
	CHECK( ( value1 != value2 ) )
	MxCxEmptySupports object;
	object.setType( value1 );
	MxEnumYesNo expected = value1;
	MxEnumYesNo actual = object.getType();
	CHECK_EQUAL( expected, actual )
	object.setType( value2 );
	expected = value2;
	actual = object.getType();
	CHECK_EQUAL( expected, actual )
}
TEST( setElement1, MxCxEmptySupports )
{
	XsNmToken value1( "TOKEN1" );
	XsNmToken value2( "TOKEN2" );
	CHECK( ( value1 != value2 ) )
	MxCxEmptySupports object;
	object.setElement( value1 );
	XsNmToken expected = value1;
	XsNmToken actual = object.getElement();
	CHECK_EQUAL( expected, actual )
	object.setElement( value2 );
	expected = value2;
	actual = object.getElement();
	CHECK_EQUAL( expected, actual )
}
TEST( setAttribute2, MxCxEmptySupports )
{
	XsNmToken value1( "TOKEN1" );
	XsNmToken value2( "TOKEN2" );
	CHECK( ( value1 != value2 ) )
	MxCxEmptySupports object;
	object.setAttribute( value1 );
	XsNmToken expected = value1;
	XsNmToken actual = object.getAttribute();
	CHECK_EQUAL( expected, actual )
	object.setAttribute( value2 );
	expected = value2;
	actual = object.getAttribute();
	CHECK_EQUAL( expected, actual )
}
TEST( setValue3, MxCxEmptySupports )
{
	XsToken value1( "ABC" );
	XsToken value2( "XYZ" );
	CHECK( ( value1 != value2 ) )
	MxCxEmptySupports object;
	object.setValue( value1 );
	XsToken expected = value1;
	XsToken actual = object.getValue();
	CHECK_EQUAL( expected, actual )
	object.setValue( value2 );
	expected = value2;
	actual = object.getValue();
	CHECK_EQUAL( expected, actual )
}

/* End: SetValue Functions -------------------------------------------------- */


/* Get IsAttributeRequired -------------------------------------------------- */

TEST( getIsTypeRequired0, MxCxEmptySupports )
{
	MxCxEmptySupports object;
	bool expected = true;
	bool actual = object.getIsTypeRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsElementRequired1, MxCxEmptySupports )
{
	MxCxEmptySupports object;
	bool expected = true;
	bool actual = object.getIsElementRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsAttributeRequired2, MxCxEmptySupports )
{
	MxCxEmptySupports object;
	bool expected = false;
	bool actual = object.getIsAttributeRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsValueRequired3, MxCxEmptySupports )
{
	MxCxEmptySupports object;
	bool expected = false;
	bool actual = object.getIsValueRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsTypePresent0, MxCxEmptySupports )
{
	MxCxEmptySupports object;
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
TEST( getIsElementPresent1, MxCxEmptySupports )
{
	MxCxEmptySupports object;
	bool expected = true;
	bool actual = object.getIsElementPresent();
	CHECK_EQUAL( expected, actual )
	/* setter does not exist because this attribute is required */
	expected = true;
	actual = object.getIsElementPresent();
	CHECK_EQUAL( expected, actual )
	/* setter does not exist because this attribute is required */
	expected = true;
	actual = object.getIsElementPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsAttributePresent2, MxCxEmptySupports )
{
	MxCxEmptySupports object;
	bool expected = false;
	bool actual = object.getIsAttributePresent();
	CHECK_EQUAL( expected, actual )
	object.setIsAttributePresent( true );
	expected = true;
	actual = object.getIsAttributePresent();
	CHECK_EQUAL( expected, actual )
	object.setIsAttributePresent( false );
	expected = false;
	actual = object.getIsAttributePresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsValuePresent3, MxCxEmptySupports )
{
	MxCxEmptySupports object;
	bool expected = false;
	bool actual = object.getIsValuePresent();
	CHECK_EQUAL( expected, actual )
	object.setIsValuePresent( true );
	expected = true;
	actual = object.getIsValuePresent();
	CHECK_EQUAL( expected, actual )
	object.setIsValuePresent( false );
	expected = false;
	actual = object.getIsValuePresent();
	CHECK_EQUAL( expected, actual )
}

/* End: IsAttributePresent -------------------------------------------------- */


/* Is Default Defined ------------------------------------------------------- */

TEST( getIsTypeDefaultDefined, MxCxEmptySupports )
{
	MxCxEmptySupports object;
	bool expected = false;
	bool actual = object.getIsTypeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsElementDefaultDefined, MxCxEmptySupports )
{
	MxCxEmptySupports object;
	bool expected = false;
	bool actual = object.getIsElementDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsAttributeDefaultDefined, MxCxEmptySupports )
{
	MxCxEmptySupports object;
	bool expected = false;
	bool actual = object.getIsAttributeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsValueDefaultDefined, MxCxEmptySupports )
{
	MxCxEmptySupports object;
	bool expected = false;
	bool actual = object.getIsValueDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getTypeDefaultValue, MxCxEmptySupports )
{
	MxCxEmptySupports object;
	MxEnumYesNo expected;
	MxEnumYesNo actual = object.getTypeDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getElementDefaultValue, MxCxEmptySupports )
{
	MxCxEmptySupports object;
	XsNmToken expected;
	XsNmToken actual = object.getElementDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getAttributeDefaultValue, MxCxEmptySupports )
{
	MxCxEmptySupports object;
	XsNmToken expected;
	XsNmToken actual = object.getAttributeDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueDefaultValue, MxCxEmptySupports )
{
	MxCxEmptySupports object;
	XsToken expected;
	XsToken actual = object.getValueDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxCxEmptySupports )
{
	MxCxEmptySupports object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setType( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setElement( XsNmToken( "" ) );
	object.setAttribute( XsNmToken( "" ) );
	object.setValue( XsToken( "" ) );
	object.setIsAttributePresent( true );
	object.setIsValuePresent( true );
	expected = "<booksmart type=\"yes\" element=\"\" attribute=\"\" value=\"\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxCxEmptySupports )
{
	MxCxEmptySupports object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsAttributePresent( true );
	object.setIsValuePresent( true );
	object.setType( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setElement( XsNmToken( "" ) );
	object.setAttribute( XsNmToken( "" ) );
	object.setValue( XsToken( "" ) );
	expected = "<quiet type=\"yes\" element=\"\" attribute=\"\" value=\"\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString2, MxCxEmptySupports )
{
	MxCxEmptySupports object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsAttributePresent( true );
	object.setIsValuePresent( true );
	object.setType( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setElement( XsNmToken( "" ) );
	object.setAttribute( XsNmToken( "" ) );
	object.setValue( XsToken( "" ) );
	expected = "<musicxmlishard type=\"yes\" element=\"\" attribute=\"\" value=\"\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString3, MxCxEmptySupports )
{
	MxCxEmptySupports object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsAttributePresent( false );
	object.setIsValuePresent( true );
	object.setType( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setElement( XsNmToken( "" ) );
	object.setAttribute( XsNmToken( "" ) );
	object.setValue( XsToken( "" ) );
	expected = "<bishop type=\"yes\" element=\"\" value=\"\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString4, MxCxEmptySupports )
{
	MxCxEmptySupports object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsAttributePresent( false );
	object.setIsValuePresent( false );
	object.setType( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setElement( XsNmToken( "" ) );
	object.setAttribute( XsNmToken( "" ) );
	object.setValue( XsToken( "" ) );
	expected = "<charlie type=\"yes\" element=\"\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString5, MxCxEmptySupports )
{
	MxCxEmptySupports object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsAttributePresent( false );
	object.setIsValuePresent( false );
	object.setType( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setElement( XsNmToken( "" ) );
	object.setAttribute( XsNmToken( "" ) );
	object.setValue( XsToken( "" ) );
	expected = "<booksmart type=\"yes\" element=\"\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString6, MxCxEmptySupports )
{
	MxCxEmptySupports object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsAttributePresent( true );
	object.setIsValuePresent( false );
	object.setType( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setElement( XsNmToken( "" ) );
	object.setAttribute( XsNmToken( "" ) );
	object.setValue( XsToken( "" ) );
	expected = "<quiet type=\"yes\" element=\"\" attribute=\"\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString7, MxCxEmptySupports )
{
	MxCxEmptySupports object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsAttributePresent( true );
	object.setIsValuePresent( false );
	object.setType( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setElement( XsNmToken( "" ) );
	object.setAttribute( XsNmToken( "" ) );
	object.setValue( XsToken( "" ) );
	expected = "<musicxmlishard type=\"yes\" element=\"\" attribute=\"\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString8, MxCxEmptySupports )
{
	MxCxEmptySupports object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsAttributePresent( false );
	object.setIsValuePresent( true );
	object.setType( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setElement( XsNmToken( "" ) );
	object.setAttribute( XsNmToken( "" ) );
	object.setValue( XsToken( "" ) );
	expected = "<bishop type=\"yes\" element=\"\" value=\"\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString9, MxCxEmptySupports )
{
	MxCxEmptySupports object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsAttributePresent( false );
	object.setIsValuePresent( true );
	object.setType( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setElement( XsNmToken( "" ) );
	object.setAttribute( XsNmToken( "" ) );
	object.setValue( XsToken( "" ) );
	expected = "<charlie type=\"yes\" element=\"\" value=\"\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString10, MxCxEmptySupports )
{
	MxCxEmptySupports object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsAttributePresent( false );
	object.setIsValuePresent( true );
	object.setType( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setElement( XsNmToken( "" ) );
	object.setAttribute( XsNmToken( "" ) );
	object.setValue( XsToken( "" ) );
	expected = "<booksmart type=\"yes\" element=\"\" value=\"\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString11, MxCxEmptySupports )
{
	MxCxEmptySupports object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsAttributePresent( true );
	object.setIsValuePresent( false );
	object.setType( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setElement( XsNmToken( "" ) );
	object.setAttribute( XsNmToken( "" ) );
	object.setValue( XsToken( "" ) );
	expected = "<quiet type=\"yes\" element=\"\" attribute=\"\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString12, MxCxEmptySupports )
{
	MxCxEmptySupports object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsAttributePresent( true );
	object.setIsValuePresent( false );
	object.setType( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setElement( XsNmToken( "" ) );
	object.setAttribute( XsNmToken( "" ) );
	object.setValue( XsToken( "" ) );
	expected = "<musicxmlishard type=\"yes\" element=\"\" attribute=\"\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString13, MxCxEmptySupports )
{
	MxCxEmptySupports object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsAttributePresent( true );
	object.setIsValuePresent( false );
	object.setType( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setElement( XsNmToken( "" ) );
	object.setAttribute( XsNmToken( "" ) );
	object.setValue( XsToken( "" ) );
	expected = "<bishop type=\"yes\" element=\"\" attribute=\"\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString14, MxCxEmptySupports )
{
	MxCxEmptySupports object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsAttributePresent( false );
	object.setIsValuePresent( false );
	object.setType( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setElement( XsNmToken( "" ) );
	object.setAttribute( XsNmToken( "" ) );
	object.setValue( XsToken( "" ) );
	expected = "<charlie type=\"yes\" element=\"\"/>";
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


