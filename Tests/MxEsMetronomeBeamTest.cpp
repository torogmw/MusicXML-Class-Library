/** *******************************************************
  * 
  * MxEsMetronomeBeamTest.cpp
  * Created: 2014-12-05 20:57:54
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxEsMetronomeBeam.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxEsMetronomeBeam )
{
	MxEsMetronomeBeam object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxEsMetronomeBeam )
{
	MxEsMetronomeBeam object;
	std::string expected = ( MxNumberBeamLevel( 1 ) ).toString();
	std::string actual = object.getNumber().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* minOccurs maxOccurs ------------------------------------------------------ */

TEST( getMinOccurs, MxEsMetronomeBeam )
{
	MxEsMetronomeBeam object;
	int expected = 0;
	int actual = object.getMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getMaxOccurs, MxEsMetronomeBeam )
{
	MxEsMetronomeBeam object;
	int expected = 32767;
	int actual = object.getMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsMaxOccursUnbounded, MxEsMetronomeBeam )
{
	MxEsMetronomeBeam object;
	bool expected = true;
	bool actual = object.getIsMaxOccursUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: minOccurs maxOccurs ------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValue0, MxEsMetronomeBeam )
{
	MxEsMetronomeBeam object( lexicon::enums::BeamValue::begin );
	std::string expected;
	std::string actual;
	expected = "begin";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumBeamValue( lexicon::enums::BeamValue::continue_ ) );
	expected = "continue";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2, MxEsMetronomeBeam )
{
	MxEsMetronomeBeam object( lexicon::enums::BeamValue::end );
	std::string expected;
	std::string actual;
	expected = "end";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumBeamValue( lexicon::enums::BeamValue::forwardHook ) );
	expected = "forward hook";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue4, MxEsMetronomeBeam )
{
	MxEsMetronomeBeam object( lexicon::enums::BeamValue::backwardHook );
	std::string expected;
	std::string actual;
	expected = "backward hook";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumBeamValue( lexicon::enums::BeamValue::begin ) );
	expected = "begin";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue6, MxEsMetronomeBeam )
{
	MxEsMetronomeBeam object( lexicon::enums::BeamValue::continue_ );
	std::string expected;
	std::string actual;
	expected = "continue";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumBeamValue( lexicon::enums::BeamValue::end ) );
	expected = "end";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue8, MxEsMetronomeBeam )
{
	MxEsMetronomeBeam object( lexicon::enums::BeamValue::forwardHook );
	std::string expected;
	std::string actual;
	expected = "forward hook";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumBeamValue( lexicon::enums::BeamValue::backwardHook ) );
	expected = "backward hook";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Ctor tests with values  --------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxEsMetronomeBeam )
{
	MxEsMetronomeBeam object;
	std::string expected = "MxEsMetronomeBeam";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxEsMetronomeBeam )
{
	MxEsMetronomeBeam object;
	std::string expected = "metronome-beam";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxEsMetronomeBeam )
{
	MxEsMetronomeBeam object;
	std::string expected = "( no documentation )";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setNumber0, MxEsMetronomeBeam )
{
	MxNumberBeamLevel value1( 1 );
	MxNumberBeamLevel value2( 2 );
	CHECK( ( value1 != value2 ) )
	MxEsMetronomeBeam object;
	object.setNumber( value1 );
	MxNumberBeamLevel expected = value1;
	MxNumberBeamLevel actual = object.getNumber();
	CHECK_EQUAL( expected, actual )
	object.setNumber( value2 );
	expected = value2;
	actual = object.getNumber();
	CHECK_EQUAL( expected, actual )
}

/* End: SetValue Functions -------------------------------------------------- */


/* Get IsAttributeRequired -------------------------------------------------- */

TEST( getIsNumberRequired0, MxEsMetronomeBeam )
{
	MxEsMetronomeBeam object;
	bool expected = false;
	bool actual = object.getIsNumberRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsNumberPresent0, MxEsMetronomeBeam )
{
	MxEsMetronomeBeam object;
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

/* End: IsAttributePresent -------------------------------------------------- */


/* Is Default Defined ------------------------------------------------------- */

TEST( getIsNumberDefaultDefined, MxEsMetronomeBeam )
{
	MxEsMetronomeBeam object;
	bool expected = true;
	bool actual = object.getIsNumberDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getNumberDefaultValue, MxEsMetronomeBeam )
{
	MxEsMetronomeBeam object;
	MxNumberBeamLevel expected( 1 );
	MxNumberBeamLevel actual = object.getNumberDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxEsMetronomeBeam )
{
	MxEsMetronomeBeam object( lexicon::enums::BeamValue::begin );
	std::string expected;
	std::string actual;
	object.setNumber( MxNumberBeamLevel( 1 ) );
	object.setIsNumberPresent( true );
	expected = "<metronome-beam number=\"1\">begin</metronome-beam>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxEsMetronomeBeam )
{
	MxEsMetronomeBeam object( lexicon::enums::BeamValue::begin );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setNumber( MxNumberBeamLevel( 1 ) );
	expected = "<metronome-beam>begin</metronome-beam>";
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


