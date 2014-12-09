/** *******************************************************
  * 
  * MxEeInstrumentTest.cpp
  * Created: 2014-12-05 16:47:07
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxEeInstrument.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxEeInstrument )
{
	MxEeInstrument object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxEeInstrument )
{
	MxEeInstrument object;
	std::string expected = ( XsIdRef(  ) ).toString();
	std::string actual = object.getId().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* minOccurs maxOccurs ------------------------------------------------------ */

TEST( getMinOccurs, MxEeInstrument )
{
	MxEeInstrument object;
	int expected = 0;
	int actual = object.getMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getMaxOccurs, MxEeInstrument )
{
	MxEeInstrument object;
	int expected = 1;
	int actual = object.getMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsMaxOccursUnbounded, MxEeInstrument )
{
	MxEeInstrument object;
	bool expected = false;
	bool actual = object.getIsMaxOccursUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: minOccurs maxOccurs ------------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxEeInstrument )
{
	MxEeInstrument object;
	std::string expected = "MxEeInstrument";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxEeInstrument )
{
	MxEeInstrument object;
	std::string expected = "instrument";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxEeInstrument )
{
	MxEeInstrument object;
	std::string expected = "( no documentation )";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setId0, MxEeInstrument )
{
	XsIdRef value1( "ID01" );
	XsIdRef value2( "ID02" );
	CHECK( ( value1 != value2 ) )
	MxEeInstrument object;
	object.setId( value1 );
	XsIdRef expected = value1;
	XsIdRef actual = object.getId();
	CHECK_EQUAL( expected, actual )
	object.setId( value2 );
	expected = value2;
	actual = object.getId();
	CHECK_EQUAL( expected, actual )
}

/* End: SetValue Functions -------------------------------------------------- */


/* Get IsAttributeRequired -------------------------------------------------- */

TEST( getIsIdRequired0, MxEeInstrument )
{
	MxEeInstrument object;
	bool expected = true;
	bool actual = object.getIsIdRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsIdPresent0, MxEeInstrument )
{
	MxEeInstrument object;
	bool expected = true;
	bool actual = object.getIsIdPresent();
	CHECK_EQUAL( expected, actual )
	/* setter does not exist because this attribute is required */
	expected = true;
	actual = object.getIsIdPresent();
	CHECK_EQUAL( expected, actual )
	/* setter does not exist because this attribute is required */
	expected = true;
	actual = object.getIsIdPresent();
	CHECK_EQUAL( expected, actual )
}

/* End: IsAttributePresent -------------------------------------------------- */


/* Is Default Defined ------------------------------------------------------- */

TEST( getIsIdDefaultDefined, MxEeInstrument )
{
	MxEeInstrument object;
	bool expected = false;
	bool actual = object.getIsIdDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getIdDefaultValue, MxEeInstrument )
{
	MxEeInstrument object;
	XsIdRef expected;
	XsIdRef actual = object.getIdDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxEeInstrument )
{
	MxEeInstrument object;
	std::string expected;
	std::string actual;
	object.setId( XsIdRef( "" ) );
	expected = "<instrument id=\"\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxEeInstrument )
{
	MxEeInstrument object;
	std::string expected;
	std::string actual;
	object.setId( XsIdRef( "" ) );
	expected = "<instrument id=\"\"/>";
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


