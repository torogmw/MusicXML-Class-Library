/** *******************************************************
  * 
  * MxEsCancelTest.cpp
  * Created: 2014-12-05 20:57:59
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxEsCancel.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxEsCancel )
{
	MxEsCancel object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxEsCancel )
{
	MxEsCancel object;
	std::string expected = ( MxEnumCancelLocation(  ) ).toString();
	std::string actual = object.getLocation().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* minOccurs maxOccurs ------------------------------------------------------ */

TEST( getMinOccurs, MxEsCancel )
{
	MxEsCancel object;
	int expected = 0;
	int actual = object.getMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getMaxOccurs, MxEsCancel )
{
	MxEsCancel object;
	int expected = 1;
	int actual = object.getMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsMaxOccursUnbounded, MxEsCancel )
{
	MxEsCancel object;
	bool expected = false;
	bool actual = object.getIsMaxOccursUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: minOccurs maxOccurs ------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValue0, MxEsCancel )
{
	MxEsCancel object( 1 );
	std::string expected;
	std::string actual;
	expected = "1";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxNumberFifths( -32767 ) );
	expected = "-32767";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2, MxEsCancel )
{
	MxEsCancel object( -32767 );
	std::string expected;
	std::string actual;
	expected = "-32767";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxNumberFifths( -32767 ) );
	expected = "-32767";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue4, MxEsCancel )
{
	MxEsCancel object( -32767 );
	std::string expected;
	std::string actual;
	expected = "-32767";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxNumberFifths( -32767 ) );
	expected = "-32767";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue6, MxEsCancel )
{
	MxEsCancel object( -32767 );
	std::string expected;
	std::string actual;
	expected = "-32767";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxNumberFifths( -32767 ) );
	expected = "-32767";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue8, MxEsCancel )
{
	MxEsCancel object( -32767 );
	std::string expected;
	std::string actual;
	expected = "-32767";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxNumberFifths( -32767 ) );
	expected = "-32767";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Ctor tests with values  --------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxEsCancel )
{
	MxEsCancel object;
	std::string expected = "MxEsCancel";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxEsCancel )
{
	MxEsCancel object;
	std::string expected = "cancel";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxEsCancel )
{
	MxEsCancel object;
	std::string expected = "( no documentation )";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setLocation0, MxEsCancel )
{
	MxEnumCancelLocation value1( lexicon::enums::CancelLocation::beforeBarline );
	MxEnumCancelLocation value2( lexicon::enums::CancelLocation::right );
	CHECK( ( value1 != value2 ) )
	MxEsCancel object;
	object.setLocation( value1 );
	MxEnumCancelLocation expected = value1;
	MxEnumCancelLocation actual = object.getLocation();
	CHECK_EQUAL( expected, actual )
	object.setLocation( value2 );
	expected = value2;
	actual = object.getLocation();
	CHECK_EQUAL( expected, actual )
}

/* End: SetValue Functions -------------------------------------------------- */


/* Get IsAttributeRequired -------------------------------------------------- */

TEST( getIsLocationRequired0, MxEsCancel )
{
	MxEsCancel object;
	bool expected = false;
	bool actual = object.getIsLocationRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsLocationPresent0, MxEsCancel )
{
	MxEsCancel object;
	bool expected = false;
	bool actual = object.getIsLocationPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsLocationPresent( true );
	expected = true;
	actual = object.getIsLocationPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsLocationPresent( false );
	expected = false;
	actual = object.getIsLocationPresent();
	CHECK_EQUAL( expected, actual )
}

/* End: IsAttributePresent -------------------------------------------------- */


/* Is Default Defined ------------------------------------------------------- */

TEST( getIsLocationDefaultDefined, MxEsCancel )
{
	MxEsCancel object;
	bool expected = false;
	bool actual = object.getIsLocationDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getLocationDefaultValue, MxEsCancel )
{
	MxEsCancel object;
	MxEnumCancelLocation expected;
	MxEnumCancelLocation actual = object.getLocationDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxEsCancel )
{
	MxEsCancel object( -32767 );
	std::string expected;
	std::string actual;
	object.setLocation( MxEnumCancelLocation( lexicon::enums::CancelLocation::left ) );
	object.setIsLocationPresent( true );
	expected = "<cancel location=\"left\">-32767</cancel>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxEsCancel )
{
	MxEsCancel object( -32767 );
	std::string expected;
	std::string actual;
	object.setIsLocationPresent( false );
	object.setLocation( MxEnumCancelLocation( lexicon::enums::CancelLocation::left ) );
	expected = "<cancel>-32767</cancel>";
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


