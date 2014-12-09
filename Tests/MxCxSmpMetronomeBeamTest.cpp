/** *******************************************************
  * 
  * MxCxSmpMetronomeBeamTest.cpp
  * Created: 2014-12-02 17:31:52
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxCxSmpMetronomeBeam.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxCxSmpMetronomeBeam )
{
	MxCxSmpMetronomeBeam object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxCxSmpMetronomeBeam )
{
	MxCxSmpMetronomeBeam object;
	std::string expected = ( MxNumberBeamLevel( 1 ) ).toString();
	std::string actual = object.getNumber().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValueAndElementName0, MxCxSmpMetronomeBeam )
{
	MxCxSmpMetronomeBeam object( "booksmart", MxEnumBeamValue( lexicon::enums::BeamValue::begin ) );
	std::string expected;
	std::string actual;
	expected = "booksmart";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "begin";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumBeamValue( lexicon::enums::BeamValue::continue_ ) );
	expected = "continue";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName2, MxCxSmpMetronomeBeam )
{
	MxCxSmpMetronomeBeam object( "musicxmlishard", MxEnumBeamValue( lexicon::enums::BeamValue::end ) );
	std::string expected;
	std::string actual;
	expected = "musicxmlishard";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "end";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumBeamValue( lexicon::enums::BeamValue::forwardHook ) );
	expected = "forward hook";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName4, MxCxSmpMetronomeBeam )
{
	MxCxSmpMetronomeBeam object( "charlie", MxEnumBeamValue( lexicon::enums::BeamValue::backwardHook ) );
	std::string expected;
	std::string actual;
	expected = "charlie";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "backward hook";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumBeamValue( lexicon::enums::BeamValue::begin ) );
	expected = "begin";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName6, MxCxSmpMetronomeBeam )
{
	MxCxSmpMetronomeBeam object( "quiet", MxEnumBeamValue( lexicon::enums::BeamValue::continue_ ) );
	std::string expected;
	std::string actual;
	expected = "quiet";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "continue";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumBeamValue( lexicon::enums::BeamValue::end ) );
	expected = "end";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName8, MxCxSmpMetronomeBeam )
{
	MxCxSmpMetronomeBeam object( "bishop", MxEnumBeamValue( lexicon::enums::BeamValue::forwardHook ) );
	std::string expected;
	std::string actual;
	expected = "bishop";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
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

TEST( getClassName, MxCxSmpMetronomeBeam )
{
	MxCxSmpMetronomeBeam object;
	std::string expected = "MxCxSmpMetronomeBeam";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxCxSmpMetronomeBeam )
{
	MxCxSmpMetronomeBeam object;
	std::string expected = "metronome-beam";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxCxSmpMetronomeBeam )
{
	MxCxSmpMetronomeBeam object;
	std::string expected = "The metronome-beam type works like the beam type in defining metric relationships, but does not include all the attributes available in the beam type.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setNumber0, MxCxSmpMetronomeBeam )
{
	MxNumberBeamLevel value1( 1 );
	MxNumberBeamLevel value2( 2 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpMetronomeBeam object;
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

TEST( getIsNumberRequired0, MxCxSmpMetronomeBeam )
{
	MxCxSmpMetronomeBeam object;
	bool expected = false;
	bool actual = object.getIsNumberRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsNumberPresent0, MxCxSmpMetronomeBeam )
{
	MxCxSmpMetronomeBeam object;
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


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxCxSmpMetronomeBeam )
{
	MxCxSmpMetronomeBeam object( "booksmart", MxEnumBeamValue( lexicon::enums::BeamValue::begin ) );
	std::string expected;
	std::string actual;
	object.setNumber( MxNumberBeamLevel( 1 ) );
	object.setIsNumberPresent( true );
	expected = "<booksmart number=\"1\">begin</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxCxSmpMetronomeBeam )
{
	MxCxSmpMetronomeBeam object( "quiet", MxEnumBeamValue( lexicon::enums::BeamValue::begin ) );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setNumber( MxNumberBeamLevel( 1 ) );
	expected = "<quiet>begin</quiet>";
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

TEST( getIsNumberDefaultDefined, MxCxSmpMetronomeBeam )
{
	MxCxSmpMetronomeBeam object;
	bool expected = true;
	bool actual = object.getIsNumberDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getNumberDefaultValue, MxCxSmpMetronomeBeam )
{
	MxCxSmpMetronomeBeam object;
	MxNumberBeamLevel expected( 1 );
	MxNumberBeamLevel actual = object.getNumberDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


