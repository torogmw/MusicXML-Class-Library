/** *******************************************************
  * 
  * MxEsHoleClosedTest.cpp
  * Created: 2014-12-05 20:57:55
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxEsHoleClosed.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxEsHoleClosed )
{
	MxEsHoleClosed object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxEsHoleClosed )
{
	MxEsHoleClosed object;
	std::string expected = ( MxEnumHoleClosedLocation(  ) ).toString();
	std::string actual = object.getLocation().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* minOccurs maxOccurs ------------------------------------------------------ */

TEST( getMinOccurs, MxEsHoleClosed )
{
	MxEsHoleClosed object;
	int expected = 1;
	int actual = object.getMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getMaxOccurs, MxEsHoleClosed )
{
	MxEsHoleClosed object;
	int expected = 1;
	int actual = object.getMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsMaxOccursUnbounded, MxEsHoleClosed )
{
	MxEsHoleClosed object;
	bool expected = false;
	bool actual = object.getIsMaxOccursUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: minOccurs maxOccurs ------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValue0, MxEsHoleClosed )
{
	MxEsHoleClosed object( lexicon::enums::HoleClosedValue::yes );
	std::string expected;
	std::string actual;
	expected = "yes";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumHoleClosedValue( lexicon::enums::HoleClosedValue::no ) );
	expected = "no";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2, MxEsHoleClosed )
{
	MxEsHoleClosed object( lexicon::enums::HoleClosedValue::half );
	std::string expected;
	std::string actual;
	expected = "half";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumHoleClosedValue( lexicon::enums::HoleClosedValue::yes ) );
	expected = "yes";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue4, MxEsHoleClosed )
{
	MxEsHoleClosed object( lexicon::enums::HoleClosedValue::no );
	std::string expected;
	std::string actual;
	expected = "no";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumHoleClosedValue( lexicon::enums::HoleClosedValue::half ) );
	expected = "half";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue6, MxEsHoleClosed )
{
	MxEsHoleClosed object( lexicon::enums::HoleClosedValue::yes );
	std::string expected;
	std::string actual;
	expected = "yes";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumHoleClosedValue( lexicon::enums::HoleClosedValue::no ) );
	expected = "no";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue8, MxEsHoleClosed )
{
	MxEsHoleClosed object( lexicon::enums::HoleClosedValue::half );
	std::string expected;
	std::string actual;
	expected = "half";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumHoleClosedValue( lexicon::enums::HoleClosedValue::yes ) );
	expected = "yes";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Ctor tests with values  --------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxEsHoleClosed )
{
	MxEsHoleClosed object;
	std::string expected = "MxEsHoleClosed";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxEsHoleClosed )
{
	MxEsHoleClosed object;
	std::string expected = "hole-closed";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxEsHoleClosed )
{
	MxEsHoleClosed object;
	std::string expected = "( no documentation )";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setLocation0, MxEsHoleClosed )
{
	MxEnumHoleClosedLocation value1( lexicon::enums::HoleClosedLocation::top );
	MxEnumHoleClosedLocation value2( lexicon::enums::HoleClosedLocation::left );
	CHECK( ( value1 != value2 ) )
	MxEsHoleClosed object;
	object.setLocation( value1 );
	MxEnumHoleClosedLocation expected = value1;
	MxEnumHoleClosedLocation actual = object.getLocation();
	CHECK_EQUAL( expected, actual )
	object.setLocation( value2 );
	expected = value2;
	actual = object.getLocation();
	CHECK_EQUAL( expected, actual )
}

/* End: SetValue Functions -------------------------------------------------- */


/* Get IsAttributeRequired -------------------------------------------------- */

TEST( getIsLocationRequired0, MxEsHoleClosed )
{
	MxEsHoleClosed object;
	bool expected = false;
	bool actual = object.getIsLocationRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsLocationPresent0, MxEsHoleClosed )
{
	MxEsHoleClosed object;
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

TEST( getIsLocationDefaultDefined, MxEsHoleClosed )
{
	MxEsHoleClosed object;
	bool expected = false;
	bool actual = object.getIsLocationDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getLocationDefaultValue, MxEsHoleClosed )
{
	MxEsHoleClosed object;
	MxEnumHoleClosedLocation expected;
	MxEnumHoleClosedLocation actual = object.getLocationDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxEsHoleClosed )
{
	MxEsHoleClosed object( lexicon::enums::HoleClosedValue::no );
	std::string expected;
	std::string actual;
	object.setLocation( MxEnumHoleClosedLocation( lexicon::enums::HoleClosedLocation::right ) );
	object.setIsLocationPresent( true );
	expected = "<hole-closed location=\"right\">no</hole-closed>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxEsHoleClosed )
{
	MxEsHoleClosed object( lexicon::enums::HoleClosedValue::no );
	std::string expected;
	std::string actual;
	object.setIsLocationPresent( false );
	object.setLocation( MxEnumHoleClosedLocation( lexicon::enums::HoleClosedLocation::right ) );
	expected = "<hole-closed>no</hole-closed>";
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


