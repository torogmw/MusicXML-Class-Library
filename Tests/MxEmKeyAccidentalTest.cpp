/** *******************************************************
  * 
  * MxEmKeyAccidentalTest.cpp
  * Created: 2014-12-07 16:26:32
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxEmKeyAccidental.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxEmKeyAccidental )
{
	MxEmKeyAccidental object;
	CHECK( true )
}

/* End: Constructor --------------------------------------------------------- */


/* minOccurs maxOccurs ------------------------------------------------------ */

TEST( getMinOccurs, MxEmKeyAccidental )
{
	MxEmKeyAccidental object;
	int expected = 0;
	int actual = object.getMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getMaxOccurs, MxEmKeyAccidental )
{
	MxEmKeyAccidental object;
	int expected = 1;
	int actual = object.getMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsMaxOccursUnbounded, MxEmKeyAccidental )
{
	MxEmKeyAccidental object;
	bool expected = false;
	bool actual = object.getIsMaxOccursUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: minOccurs maxOccurs ------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValue0, MxEmKeyAccidental )
{
	MxEmKeyAccidental object( lexicon::enums::AccidentalValue::sharp );
	std::string expected;
	std::string actual;
	expected = "sharp";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumAccidentalValue( lexicon::enums::AccidentalValue::natural ) );
	expected = "natural";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2, MxEmKeyAccidental )
{
	MxEmKeyAccidental object( lexicon::enums::AccidentalValue::flat );
	std::string expected;
	std::string actual;
	expected = "flat";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumAccidentalValue( lexicon::enums::AccidentalValue::doubleSharp ) );
	expected = "double-sharp";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue4, MxEmKeyAccidental )
{
	MxEmKeyAccidental object( lexicon::enums::AccidentalValue::sharpSharp );
	std::string expected;
	std::string actual;
	expected = "sharp-sharp";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumAccidentalValue( lexicon::enums::AccidentalValue::flatFlat ) );
	expected = "flat-flat";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue6, MxEmKeyAccidental )
{
	MxEmKeyAccidental object( lexicon::enums::AccidentalValue::naturalSharp );
	std::string expected;
	std::string actual;
	expected = "natural-sharp";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumAccidentalValue( lexicon::enums::AccidentalValue::naturalFlat ) );
	expected = "natural-flat";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue8, MxEmKeyAccidental )
{
	MxEmKeyAccidental object( lexicon::enums::AccidentalValue::quarterFlat );
	std::string expected;
	std::string actual;
	expected = "quarter-flat";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumAccidentalValue( lexicon::enums::AccidentalValue::quarterSharp ) );
	expected = "quarter-sharp";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Ctor tests with values  --------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxEmKeyAccidental )
{
	MxEmKeyAccidental object;
	std::string expected = "MxEmKeyAccidental";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxEmKeyAccidental )
{
	MxEmKeyAccidental object;
	std::string expected = "key-accidental";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxEmKeyAccidental )
{
	MxEmKeyAccidental object;
	std::string expected = "Non-traditional key signatures can be represented using the Humdrum/Scot concept of a list of altered tones. The key-accidental element indicates the accidental to be displayed in the key signature, represented in the same manner as the accidental element. It is used for disambiguating microtonal accidentals.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxEmKeyAccidental )
{
	MxEmKeyAccidental object( lexicon::enums::AccidentalValue::threeQuartersFlat );
	std::string expected;
	std::string actual;
	expected = "<key-accidental>three-quarters-flat</key-accidental>";
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


