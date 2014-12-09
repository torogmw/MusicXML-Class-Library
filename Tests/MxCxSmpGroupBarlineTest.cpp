/** *******************************************************
  * 
  * MxCxSmpGroupBarlineTest.cpp
  * Created: 2014-12-02 17:31:55
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxCxSmpGroupBarline.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxCxSmpGroupBarline )
{
	MxCxSmpGroupBarline object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxCxSmpGroupBarline )
{
	MxCxSmpGroupBarline object;
	std::string expected = ( MxColor(  ) ).toString();
	std::string actual = object.getColor().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValueAndElementName0, MxCxSmpGroupBarline )
{
	MxCxSmpGroupBarline object( "booksmart", MxEnumGroupBarlineValue( lexicon::enums::GroupBarlineValue::yes ) );
	std::string expected;
	std::string actual;
	expected = "booksmart";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "yes";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumGroupBarlineValue( lexicon::enums::GroupBarlineValue::no ) );
	expected = "no";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName2, MxCxSmpGroupBarline )
{
	MxCxSmpGroupBarline object( "musicxmlishard", MxEnumGroupBarlineValue( lexicon::enums::GroupBarlineValue::mensurstrich ) );
	std::string expected;
	std::string actual;
	expected = "musicxmlishard";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "Mensurstrich";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumGroupBarlineValue( lexicon::enums::GroupBarlineValue::yes ) );
	expected = "yes";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName4, MxCxSmpGroupBarline )
{
	MxCxSmpGroupBarline object( "charlie", MxEnumGroupBarlineValue( lexicon::enums::GroupBarlineValue::no ) );
	std::string expected;
	std::string actual;
	expected = "charlie";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "no";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumGroupBarlineValue( lexicon::enums::GroupBarlineValue::mensurstrich ) );
	expected = "Mensurstrich";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName6, MxCxSmpGroupBarline )
{
	MxCxSmpGroupBarline object( "quiet", MxEnumGroupBarlineValue( lexicon::enums::GroupBarlineValue::yes ) );
	std::string expected;
	std::string actual;
	expected = "quiet";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "yes";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumGroupBarlineValue( lexicon::enums::GroupBarlineValue::no ) );
	expected = "no";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName8, MxCxSmpGroupBarline )
{
	MxCxSmpGroupBarline object( "bishop", MxEnumGroupBarlineValue( lexicon::enums::GroupBarlineValue::mensurstrich ) );
	std::string expected;
	std::string actual;
	expected = "bishop";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "Mensurstrich";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumGroupBarlineValue( lexicon::enums::GroupBarlineValue::yes ) );
	expected = "yes";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Ctor tests with values  --------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxCxSmpGroupBarline )
{
	MxCxSmpGroupBarline object;
	std::string expected = "MxCxSmpGroupBarline";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxCxSmpGroupBarline )
{
	MxCxSmpGroupBarline object;
	std::string expected = "group-barline";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxCxSmpGroupBarline )
{
	MxCxSmpGroupBarline object;
	std::string expected = "The group-barline type indicates if the group should have common barlines.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setColor0, MxCxSmpGroupBarline )
{
	MxColor value1( "#12131415" );
	MxColor value2( 155, 34, 145, 192 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpGroupBarline object;
	object.setColor( value1 );
	MxColor expected = value1;
	MxColor actual = object.getColor();
	CHECK_EQUAL( expected, actual )
	object.setColor( value2 );
	expected = value2;
	actual = object.getColor();
	CHECK_EQUAL( expected, actual )
}

/* End: SetValue Functions -------------------------------------------------- */


/* Get IsAttributeRequired -------------------------------------------------- */

TEST( getIsColorRequired0, MxCxSmpGroupBarline )
{
	MxCxSmpGroupBarline object;
	bool expected = false;
	bool actual = object.getIsColorRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsColorPresent0, MxCxSmpGroupBarline )
{
	MxCxSmpGroupBarline object;
	bool expected = false;
	bool actual = object.getIsColorPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsColorPresent( true );
	expected = true;
	actual = object.getIsColorPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsColorPresent( false );
	expected = false;
	actual = object.getIsColorPresent();
	CHECK_EQUAL( expected, actual )
}

/* End: IsAttributePresent -------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxCxSmpGroupBarline )
{
	MxCxSmpGroupBarline object( "booksmart", MxEnumGroupBarlineValue( lexicon::enums::GroupBarlineValue::no ) );
	std::string expected;
	std::string actual;
	object.setColor( MxColor( "#1D1E1D1C" ) );
	object.setIsColorPresent( true );
	expected = "<booksmart color=\"#1D1E1D1C\">no</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxCxSmpGroupBarline )
{
	MxCxSmpGroupBarline object( "quiet", MxEnumGroupBarlineValue( lexicon::enums::GroupBarlineValue::no ) );
	std::string expected;
	std::string actual;
	object.setIsColorPresent( false );
	object.setColor( MxColor( "#201F1E" ) );
	expected = "<quiet>no</quiet>";
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

TEST( getIsColorDefaultDefined, MxCxSmpGroupBarline )
{
	MxCxSmpGroupBarline object;
	bool expected = false;
	bool actual = object.getIsColorDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getColorDefaultValue, MxCxSmpGroupBarline )
{
	MxCxSmpGroupBarline object;
	MxColor expected;
	MxColor actual = object.getColorDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


