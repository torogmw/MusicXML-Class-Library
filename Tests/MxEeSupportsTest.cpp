/** *******************************************************
  * 
  * MxEeSupportsTest.cpp
  * Created: 2014-12-05 16:47:05
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxEeSupports.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxEeSupports )
{
	MxEeSupports object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxEeSupports )
{
	MxEeSupports object;
	std::string expected = ( MxEnumYesNo(  ) ).toString();
	std::string actual = object.getType().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues1, MxEeSupports )
{
	MxEeSupports object;
	std::string expected = ( XsNmToken(  ) ).toString();
	std::string actual = object.getElement().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues2, MxEeSupports )
{
	MxEeSupports object;
	std::string expected = ( XsNmToken(  ) ).toString();
	std::string actual = object.getAttribute().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues3, MxEeSupports )
{
	MxEeSupports object;
	std::string expected = ( XsToken(  ) ).toString();
	std::string actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* minOccurs maxOccurs ------------------------------------------------------ */

TEST( getMinOccurs, MxEeSupports )
{
	MxEeSupports object;
	int expected = 1;
	int actual = object.getMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getMaxOccurs, MxEeSupports )
{
	MxEeSupports object;
	int expected = 1;
	int actual = object.getMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsMaxOccursUnbounded, MxEeSupports )
{
	MxEeSupports object;
	bool expected = false;
	bool actual = object.getIsMaxOccursUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: minOccurs maxOccurs ------------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxEeSupports )
{
	MxEeSupports object;
	std::string expected = "MxEeSupports";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxEeSupports )
{
	MxEeSupports object;
	std::string expected = "supports";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxEeSupports )
{
	MxEeSupports object;
	std::string expected = "( no documentation )";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setType0, MxEeSupports )
{
	MxEnumYesNo value1( lexicon::enums::YesNo::no );
	MxEnumYesNo value2( lexicon::enums::YesNo::yes );
	CHECK( ( value1 != value2 ) )
	MxEeSupports object;
	object.setType( value1 );
	MxEnumYesNo expected = value1;
	MxEnumYesNo actual = object.getType();
	CHECK_EQUAL( expected, actual )
	object.setType( value2 );
	expected = value2;
	actual = object.getType();
	CHECK_EQUAL( expected, actual )
}
TEST( setElement1, MxEeSupports )
{
	XsNmToken value1( "TOKEN1" );
	XsNmToken value2( "TOKEN2" );
	CHECK( ( value1 != value2 ) )
	MxEeSupports object;
	object.setElement( value1 );
	XsNmToken expected = value1;
	XsNmToken actual = object.getElement();
	CHECK_EQUAL( expected, actual )
	object.setElement( value2 );
	expected = value2;
	actual = object.getElement();
	CHECK_EQUAL( expected, actual )
}
TEST( setAttribute2, MxEeSupports )
{
	XsNmToken value1( "TOKEN1" );
	XsNmToken value2( "TOKEN2" );
	CHECK( ( value1 != value2 ) )
	MxEeSupports object;
	object.setAttribute( value1 );
	XsNmToken expected = value1;
	XsNmToken actual = object.getAttribute();
	CHECK_EQUAL( expected, actual )
	object.setAttribute( value2 );
	expected = value2;
	actual = object.getAttribute();
	CHECK_EQUAL( expected, actual )
}
TEST( setValue3, MxEeSupports )
{
	XsToken value1( "ABC" );
	XsToken value2( "XYZ" );
	CHECK( ( value1 != value2 ) )
	MxEeSupports object;
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

TEST( getIsTypeRequired0, MxEeSupports )
{
	MxEeSupports object;
	bool expected = true;
	bool actual = object.getIsTypeRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsElementRequired1, MxEeSupports )
{
	MxEeSupports object;
	bool expected = true;
	bool actual = object.getIsElementRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsAttributeRequired2, MxEeSupports )
{
	MxEeSupports object;
	bool expected = false;
	bool actual = object.getIsAttributeRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsValueRequired3, MxEeSupports )
{
	MxEeSupports object;
	bool expected = false;
	bool actual = object.getIsValueRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsTypePresent0, MxEeSupports )
{
	MxEeSupports object;
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
TEST( getIsElementPresent1, MxEeSupports )
{
	MxEeSupports object;
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
TEST( getIsAttributePresent2, MxEeSupports )
{
	MxEeSupports object;
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
TEST( getIsValuePresent3, MxEeSupports )
{
	MxEeSupports object;
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

TEST( getIsTypeDefaultDefined, MxEeSupports )
{
	MxEeSupports object;
	bool expected = false;
	bool actual = object.getIsTypeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsElementDefaultDefined, MxEeSupports )
{
	MxEeSupports object;
	bool expected = false;
	bool actual = object.getIsElementDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsAttributeDefaultDefined, MxEeSupports )
{
	MxEeSupports object;
	bool expected = false;
	bool actual = object.getIsAttributeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsValueDefaultDefined, MxEeSupports )
{
	MxEeSupports object;
	bool expected = false;
	bool actual = object.getIsValueDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getTypeDefaultValue, MxEeSupports )
{
	MxEeSupports object;
	MxEnumYesNo expected;
	MxEnumYesNo actual = object.getTypeDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getElementDefaultValue, MxEeSupports )
{
	MxEeSupports object;
	XsNmToken expected;
	XsNmToken actual = object.getElementDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getAttributeDefaultValue, MxEeSupports )
{
	MxEeSupports object;
	XsNmToken expected;
	XsNmToken actual = object.getAttributeDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueDefaultValue, MxEeSupports )
{
	MxEeSupports object;
	XsToken expected;
	XsToken actual = object.getValueDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxEeSupports )
{
	MxEeSupports object;
	std::string expected;
	std::string actual;
	object.setType( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setElement( XsNmToken( "" ) );
	object.setAttribute( XsNmToken( "" ) );
	object.setValue( XsToken( "" ) );
	object.setIsAttributePresent( true );
	object.setIsValuePresent( true );
	expected = "<supports type=\"yes\" element=\"\" attribute=\"\" value=\"\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxEeSupports )
{
	MxEeSupports object;
	std::string expected;
	std::string actual;
	object.setIsAttributePresent( true );
	object.setIsValuePresent( true );
	object.setType( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setElement( XsNmToken( "" ) );
	object.setAttribute( XsNmToken( "" ) );
	object.setValue( XsToken( "" ) );
	expected = "<supports type=\"yes\" element=\"\" attribute=\"\" value=\"\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString2, MxEeSupports )
{
	MxEeSupports object;
	std::string expected;
	std::string actual;
	object.setIsAttributePresent( true );
	object.setIsValuePresent( true );
	object.setType( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setElement( XsNmToken( "" ) );
	object.setAttribute( XsNmToken( "" ) );
	object.setValue( XsToken( "" ) );
	expected = "<supports type=\"yes\" element=\"\" attribute=\"\" value=\"\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString3, MxEeSupports )
{
	MxEeSupports object;
	std::string expected;
	std::string actual;
	object.setIsAttributePresent( false );
	object.setIsValuePresent( true );
	object.setType( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setElement( XsNmToken( "" ) );
	object.setAttribute( XsNmToken( "" ) );
	object.setValue( XsToken( "" ) );
	expected = "<supports type=\"yes\" element=\"\" value=\"\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString4, MxEeSupports )
{
	MxEeSupports object;
	std::string expected;
	std::string actual;
	object.setIsAttributePresent( false );
	object.setIsValuePresent( false );
	object.setType( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setElement( XsNmToken( "" ) );
	object.setAttribute( XsNmToken( "" ) );
	object.setValue( XsToken( "" ) );
	expected = "<supports type=\"yes\" element=\"\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString5, MxEeSupports )
{
	MxEeSupports object;
	std::string expected;
	std::string actual;
	object.setIsAttributePresent( false );
	object.setIsValuePresent( false );
	object.setType( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setElement( XsNmToken( "" ) );
	object.setAttribute( XsNmToken( "" ) );
	object.setValue( XsToken( "" ) );
	expected = "<supports type=\"yes\" element=\"\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString6, MxEeSupports )
{
	MxEeSupports object;
	std::string expected;
	std::string actual;
	object.setIsAttributePresent( true );
	object.setIsValuePresent( false );
	object.setType( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setElement( XsNmToken( "" ) );
	object.setAttribute( XsNmToken( "" ) );
	object.setValue( XsToken( "" ) );
	expected = "<supports type=\"yes\" element=\"\" attribute=\"\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString7, MxEeSupports )
{
	MxEeSupports object;
	std::string expected;
	std::string actual;
	object.setIsAttributePresent( true );
	object.setIsValuePresent( false );
	object.setType( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setElement( XsNmToken( "" ) );
	object.setAttribute( XsNmToken( "" ) );
	object.setValue( XsToken( "" ) );
	expected = "<supports type=\"yes\" element=\"\" attribute=\"\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString8, MxEeSupports )
{
	MxEeSupports object;
	std::string expected;
	std::string actual;
	object.setIsAttributePresent( false );
	object.setIsValuePresent( true );
	object.setType( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setElement( XsNmToken( "" ) );
	object.setAttribute( XsNmToken( "" ) );
	object.setValue( XsToken( "" ) );
	expected = "<supports type=\"yes\" element=\"\" value=\"\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString9, MxEeSupports )
{
	MxEeSupports object;
	std::string expected;
	std::string actual;
	object.setIsAttributePresent( false );
	object.setIsValuePresent( true );
	object.setType( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setElement( XsNmToken( "" ) );
	object.setAttribute( XsNmToken( "" ) );
	object.setValue( XsToken( "" ) );
	expected = "<supports type=\"yes\" element=\"\" value=\"\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString10, MxEeSupports )
{
	MxEeSupports object;
	std::string expected;
	std::string actual;
	object.setIsAttributePresent( false );
	object.setIsValuePresent( true );
	object.setType( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setElement( XsNmToken( "" ) );
	object.setAttribute( XsNmToken( "" ) );
	object.setValue( XsToken( "" ) );
	expected = "<supports type=\"yes\" element=\"\" value=\"\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString11, MxEeSupports )
{
	MxEeSupports object;
	std::string expected;
	std::string actual;
	object.setIsAttributePresent( true );
	object.setIsValuePresent( false );
	object.setType( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setElement( XsNmToken( "" ) );
	object.setAttribute( XsNmToken( "" ) );
	object.setValue( XsToken( "" ) );
	expected = "<supports type=\"yes\" element=\"\" attribute=\"\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString12, MxEeSupports )
{
	MxEeSupports object;
	std::string expected;
	std::string actual;
	object.setIsAttributePresent( true );
	object.setIsValuePresent( false );
	object.setType( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setElement( XsNmToken( "" ) );
	object.setAttribute( XsNmToken( "" ) );
	object.setValue( XsToken( "" ) );
	expected = "<supports type=\"yes\" element=\"\" attribute=\"\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString13, MxEeSupports )
{
	MxEeSupports object;
	std::string expected;
	std::string actual;
	object.setIsAttributePresent( true );
	object.setIsValuePresent( false );
	object.setType( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setElement( XsNmToken( "" ) );
	object.setAttribute( XsNmToken( "" ) );
	object.setValue( XsToken( "" ) );
	expected = "<supports type=\"yes\" element=\"\" attribute=\"\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString14, MxEeSupports )
{
	MxEeSupports object;
	std::string expected;
	std::string actual;
	object.setIsAttributePresent( false );
	object.setIsValuePresent( false );
	object.setType( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setElement( XsNmToken( "" ) );
	object.setAttribute( XsNmToken( "" ) );
	object.setValue( XsToken( "" ) );
	expected = "<supports type=\"yes\" element=\"\"/>";
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


