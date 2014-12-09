/** *******************************************************
  * 
  * MxCxSmpHoleClosedTest.cpp
  * Created: 2014-12-02 17:31:54
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxCxSmpHoleClosed.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxCxSmpHoleClosed )
{
	MxCxSmpHoleClosed object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxCxSmpHoleClosed )
{
	MxCxSmpHoleClosed object;
	std::string expected = ( MxEnumHoleClosedLocation(  ) ).toString();
	std::string actual = object.getLocation().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValueAndElementName0, MxCxSmpHoleClosed )
{
	MxCxSmpHoleClosed object( "booksmart", MxEnumHoleClosedValue( lexicon::enums::HoleClosedValue::yes ) );
	std::string expected;
	std::string actual;
	expected = "booksmart";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "yes";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumHoleClosedValue( lexicon::enums::HoleClosedValue::no ) );
	expected = "no";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName2, MxCxSmpHoleClosed )
{
	MxCxSmpHoleClosed object( "musicxmlishard", MxEnumHoleClosedValue( lexicon::enums::HoleClosedValue::half ) );
	std::string expected;
	std::string actual;
	expected = "musicxmlishard";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "half";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumHoleClosedValue( lexicon::enums::HoleClosedValue::yes ) );
	expected = "yes";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName4, MxCxSmpHoleClosed )
{
	MxCxSmpHoleClosed object( "charlie", MxEnumHoleClosedValue( lexicon::enums::HoleClosedValue::no ) );
	std::string expected;
	std::string actual;
	expected = "charlie";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "no";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumHoleClosedValue( lexicon::enums::HoleClosedValue::half ) );
	expected = "half";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName6, MxCxSmpHoleClosed )
{
	MxCxSmpHoleClosed object( "quiet", MxEnumHoleClosedValue( lexicon::enums::HoleClosedValue::yes ) );
	std::string expected;
	std::string actual;
	expected = "quiet";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "yes";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumHoleClosedValue( lexicon::enums::HoleClosedValue::no ) );
	expected = "no";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName8, MxCxSmpHoleClosed )
{
	MxCxSmpHoleClosed object( "bishop", MxEnumHoleClosedValue( lexicon::enums::HoleClosedValue::half ) );
	std::string expected;
	std::string actual;
	expected = "bishop";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
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

TEST( getClassName, MxCxSmpHoleClosed )
{
	MxCxSmpHoleClosed object;
	std::string expected = "MxCxSmpHoleClosed";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxCxSmpHoleClosed )
{
	MxCxSmpHoleClosed object;
	std::string expected = "hole-closed";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxCxSmpHoleClosed )
{
	MxCxSmpHoleClosed object;
	std::string expected = "The hole-closed type represents whether the hole is closed, open, or half-open. The optional location attribute indicates which portion of the hole is filled in when the element value is half.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setLocation0, MxCxSmpHoleClosed )
{
	MxEnumHoleClosedLocation value1( lexicon::enums::HoleClosedLocation::top );
	MxEnumHoleClosedLocation value2( lexicon::enums::HoleClosedLocation::left );
	CHECK( ( value1 != value2 ) )
	MxCxSmpHoleClosed object;
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

TEST( getIsLocationRequired0, MxCxSmpHoleClosed )
{
	MxCxSmpHoleClosed object;
	bool expected = false;
	bool actual = object.getIsLocationRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsLocationPresent0, MxCxSmpHoleClosed )
{
	MxCxSmpHoleClosed object;
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


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxCxSmpHoleClosed )
{
	MxCxSmpHoleClosed object( "booksmart", MxEnumHoleClosedValue( lexicon::enums::HoleClosedValue::no ) );
	std::string expected;
	std::string actual;
	object.setLocation( MxEnumHoleClosedLocation( lexicon::enums::HoleClosedLocation::right ) );
	object.setIsLocationPresent( true );
	expected = "<booksmart location=\"right\">no</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxCxSmpHoleClosed )
{
	MxCxSmpHoleClosed object( "quiet", MxEnumHoleClosedValue( lexicon::enums::HoleClosedValue::no ) );
	std::string expected;
	std::string actual;
	object.setIsLocationPresent( false );
	object.setLocation( MxEnumHoleClosedLocation( lexicon::enums::HoleClosedLocation::right ) );
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

TEST( getIsLocationDefaultDefined, MxCxSmpHoleClosed )
{
	MxCxSmpHoleClosed object;
	bool expected = false;
	bool actual = object.getIsLocationDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getLocationDefaultValue, MxCxSmpHoleClosed )
{
	MxCxSmpHoleClosed object;
	MxEnumHoleClosedLocation expected;
	MxEnumHoleClosedLocation actual = object.getLocationDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


