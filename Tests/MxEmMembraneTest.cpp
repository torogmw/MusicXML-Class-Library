/** *******************************************************
  * 
  * MxEmMembraneTest.cpp
  * Created: 2014-12-07 16:26:32
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxEmMembrane.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxEmMembrane )
{
	MxEmMembrane object;
	CHECK( true )
}

/* End: Constructor --------------------------------------------------------- */


/* minOccurs maxOccurs ------------------------------------------------------ */

TEST( getMinOccurs, MxEmMembrane )
{
	MxEmMembrane object;
	int expected = 1;
	int actual = object.getMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getMaxOccurs, MxEmMembrane )
{
	MxEmMembrane object;
	int expected = 1;
	int actual = object.getMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsMaxOccursUnbounded, MxEmMembrane )
{
	MxEmMembrane object;
	bool expected = false;
	bool actual = object.getIsMaxOccursUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: minOccurs maxOccurs ------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValue0, MxEmMembrane )
{
	MxEmMembrane object( lexicon::enums::Membrane::bassDrum );
	std::string expected;
	std::string actual;
	expected = "bass drum";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumMembrane( lexicon::enums::Membrane::bassDrumOnSide ) );
	expected = "bass drum on side";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2, MxEmMembrane )
{
	MxEmMembrane object( lexicon::enums::Membrane::bongos );
	std::string expected;
	std::string actual;
	expected = "bongos";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumMembrane( lexicon::enums::Membrane::congaDrum ) );
	expected = "conga drum";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue4, MxEmMembrane )
{
	MxEmMembrane object( lexicon::enums::Membrane::gobletDrum );
	std::string expected;
	std::string actual;
	expected = "goblet drum";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumMembrane( lexicon::enums::Membrane::militaryDrum ) );
	expected = "military drum";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue6, MxEmMembrane )
{
	MxEmMembrane object( lexicon::enums::Membrane::snareDrum );
	std::string expected;
	std::string actual;
	expected = "snare drum";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumMembrane( lexicon::enums::Membrane::snareDrumSnaresOff ) );
	expected = "snare drum snares off";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue8, MxEmMembrane )
{
	MxEmMembrane object( lexicon::enums::Membrane::tambourine );
	std::string expected;
	std::string actual;
	expected = "tambourine";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumMembrane( lexicon::enums::Membrane::tenorDrum ) );
	expected = "tenor drum";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Ctor tests with values  --------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxEmMembrane )
{
	MxEmMembrane object;
	std::string expected = "MxEmMembrane";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxEmMembrane )
{
	MxEmMembrane object;
	std::string expected = "membrane";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxEmMembrane )
{
	MxEmMembrane object;
	std::string expected = "( no documentation )";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxEmMembrane )
{
	MxEmMembrane object( lexicon::enums::Membrane::timbales );
	std::string expected;
	std::string actual;
	expected = "<membrane>timbales</membrane>";
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


