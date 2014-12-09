/** *******************************************************
  * 
  * MxEsGroupBarlineTest.cpp
  * Created: 2014-12-05 20:57:58
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxEsGroupBarline.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxEsGroupBarline )
{
	MxEsGroupBarline object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxEsGroupBarline )
{
	MxEsGroupBarline object;
	std::string expected = ( MxColor(  ) ).toString();
	std::string actual = object.getColor().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* minOccurs maxOccurs ------------------------------------------------------ */

TEST( getMinOccurs, MxEsGroupBarline )
{
	MxEsGroupBarline object;
	int expected = 0;
	int actual = object.getMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getMaxOccurs, MxEsGroupBarline )
{
	MxEsGroupBarline object;
	int expected = 1;
	int actual = object.getMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsMaxOccursUnbounded, MxEsGroupBarline )
{
	MxEsGroupBarline object;
	bool expected = false;
	bool actual = object.getIsMaxOccursUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: minOccurs maxOccurs ------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValue0, MxEsGroupBarline )
{
	MxEsGroupBarline object( lexicon::enums::GroupBarlineValue::yes );
	std::string expected;
	std::string actual;
	expected = "yes";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumGroupBarlineValue( lexicon::enums::GroupBarlineValue::no ) );
	expected = "no";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2, MxEsGroupBarline )
{
	MxEsGroupBarline object( lexicon::enums::GroupBarlineValue::mensurstrich );
	std::string expected;
	std::string actual;
	expected = "Mensurstrich";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumGroupBarlineValue( lexicon::enums::GroupBarlineValue::yes ) );
	expected = "yes";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue4, MxEsGroupBarline )
{
	MxEsGroupBarline object( lexicon::enums::GroupBarlineValue::no );
	std::string expected;
	std::string actual;
	expected = "no";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumGroupBarlineValue( lexicon::enums::GroupBarlineValue::mensurstrich ) );
	expected = "Mensurstrich";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue6, MxEsGroupBarline )
{
	MxEsGroupBarline object( lexicon::enums::GroupBarlineValue::yes );
	std::string expected;
	std::string actual;
	expected = "yes";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumGroupBarlineValue( lexicon::enums::GroupBarlineValue::no ) );
	expected = "no";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue8, MxEsGroupBarline )
{
	MxEsGroupBarline object( lexicon::enums::GroupBarlineValue::mensurstrich );
	std::string expected;
	std::string actual;
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

TEST( getClassName, MxEsGroupBarline )
{
	MxEsGroupBarline object;
	std::string expected = "MxEsGroupBarline";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxEsGroupBarline )
{
	MxEsGroupBarline object;
	std::string expected = "group-barline";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxEsGroupBarline )
{
	MxEsGroupBarline object;
	std::string expected = "( no documentation )";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setColor0, MxEsGroupBarline )
{
	MxColor value1( "#12131415" );
	MxColor value2( 155, 34, 145, 192 );
	CHECK( ( value1 != value2 ) )
	MxEsGroupBarline object;
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

TEST( getIsColorRequired0, MxEsGroupBarline )
{
	MxEsGroupBarline object;
	bool expected = false;
	bool actual = object.getIsColorRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsColorPresent0, MxEsGroupBarline )
{
	MxEsGroupBarline object;
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


/* Is Default Defined ------------------------------------------------------- */

TEST( getIsColorDefaultDefined, MxEsGroupBarline )
{
	MxEsGroupBarline object;
	bool expected = false;
	bool actual = object.getIsColorDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getColorDefaultValue, MxEsGroupBarline )
{
	MxEsGroupBarline object;
	MxColor expected;
	MxColor actual = object.getColorDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxEsGroupBarline )
{
	MxEsGroupBarline object( lexicon::enums::GroupBarlineValue::no );
	std::string expected;
	std::string actual;
	object.setColor( MxColor( "#55565554" ) );
	object.setIsColorPresent( true );
	expected = "<group-barline color=\"#55565554\">no</group-barline>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxEsGroupBarline )
{
	MxEsGroupBarline object( lexicon::enums::GroupBarlineValue::no );
	std::string expected;
	std::string actual;
	object.setIsColorPresent( false );
	object.setColor( MxColor( "#585756" ) );
	expected = "<group-barline>no</group-barline>";
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


