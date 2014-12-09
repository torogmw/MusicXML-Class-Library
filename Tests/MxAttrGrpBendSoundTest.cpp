/** *******************************************************
  * 
  * MxAttrGrpBendSoundTest.cpp
  * Created: 2014-11-28 19:17:14
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxAttrGrpBendSound.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxAttrGrpBendSound )
{
	MxAttrGrpBendSound object;
	CHECK( true )
}
TEST( ctorValues0, MxAttrGrpBendSound )
{
	MxAttrGrpBendSound object;
	std::string expected = ( MxEnumYesNo( lexicon::enums::YesNo::yes ) ).toString();
	std::string actual = object.getAccelerate().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValues1, MxAttrGrpBendSound )
{
	MxAttrGrpBendSound object;
	std::string expected = ( MxNumberTrillBeats( 4 ) ).toString();
	std::string actual = object.getBeats().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValues2, MxAttrGrpBendSound )
{
	MxAttrGrpBendSound object;
	std::string expected = ( MxNumberPercent( 0.25 ) ).toString();
	std::string actual = object.getFirstBeat().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValues3, MxAttrGrpBendSound )
{
	MxAttrGrpBendSound object;
	std::string expected = ( MxNumberPercent( 0.75 ) ).toString();
	std::string actual = object.getLastBeat().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxAttrGrpBendSound )
{
	MxAttrGrpBendSound object;
	std::string expected = "MxAttrGrpBendSound";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxAttrGrpBendSound )
{
	MxAttrGrpBendSound object;
	std::string expected = "bend-sound";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxAttrGrpBendSound )
{
	MxAttrGrpBendSound object;
	std::string expected = "The bend-sound type is used for bend and slide elements, and is similar to the trill-sound attribute group. Here the beats element refers to the number of discrete elements (like MIDI pitch bends) used to represent a continuous bend or slide. The first-beat indicates the percentage of the direction for starting a bend; the last-beat the percentage for ending it. The default choices are: accelerate = no beats = 4 first-beat = 25 last-beat = 75";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setAccelerate0, MxAttrGrpBendSound )
{
	MxEnumYesNo value1( lexicon::enums::YesNo::no );
	MxEnumYesNo value2( lexicon::enums::YesNo::yes );
	CHECK( ( value1 != value2 ) )
	MxAttrGrpBendSound object;
	object.setAccelerate( value1 );
	MxEnumYesNo expected = value1;
	MxEnumYesNo actual = object.getAccelerate();
	CHECK_EQUAL( expected, actual )
	object.setAccelerate( value2 );
	expected = value2;
	actual = object.getAccelerate();
	CHECK_EQUAL( expected, actual )
}
TEST( setBeats1, MxAttrGrpBendSound )
{
	MxNumberTrillBeats value1( 2.1 );
	MxNumberTrillBeats value2( 2.2 );
	CHECK( ( value1 != value2 ) )
	MxAttrGrpBendSound object;
	object.setBeats( value1 );
	MxNumberTrillBeats expected = value1;
	MxNumberTrillBeats actual = object.getBeats();
	CHECK_EQUAL( expected, actual )
	object.setBeats( value2 );
	expected = value2;
	actual = object.getBeats();
	CHECK_EQUAL( expected, actual )
}
TEST( setFirstBeat2, MxAttrGrpBendSound )
{
	MxNumberPercent value1( 0.1 );
	MxNumberPercent value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxAttrGrpBendSound object;
	object.setFirstBeat( value1 );
	MxNumberPercent expected = value1;
	MxNumberPercent actual = object.getFirstBeat();
	CHECK_EQUAL( expected, actual )
	object.setFirstBeat( value2 );
	expected = value2;
	actual = object.getFirstBeat();
	CHECK_EQUAL( expected, actual )
}
TEST( setLastBeat3, MxAttrGrpBendSound )
{
	MxNumberPercent value1( 0.1 );
	MxNumberPercent value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxAttrGrpBendSound object;
	object.setLastBeat( value1 );
	MxNumberPercent expected = value1;
	MxNumberPercent actual = object.getLastBeat();
	CHECK_EQUAL( expected, actual )
	object.setLastBeat( value2 );
	expected = value2;
	actual = object.getLastBeat();
	CHECK_EQUAL( expected, actual )
}

/* End: SetValue Functions -------------------------------------------------- */


/* Get IsAttributeRequired -------------------------------------------------- */

TEST( getIsAccelerateRequired0, MxAttrGrpBendSound )
{
	MxAttrGrpBendSound object;
	bool expected = false;
	bool actual = object.getIsAccelerateRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsBeatsRequired1, MxAttrGrpBendSound )
{
	MxAttrGrpBendSound object;
	bool expected = false;
	bool actual = object.getIsBeatsRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFirstBeatRequired2, MxAttrGrpBendSound )
{
	MxAttrGrpBendSound object;
	bool expected = false;
	bool actual = object.getIsFirstBeatRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsLastBeatRequired3, MxAttrGrpBendSound )
{
	MxAttrGrpBendSound object;
	bool expected = false;
	bool actual = object.getIsLastBeatRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsAcceleratePresent0, MxAttrGrpBendSound )
{
	MxAttrGrpBendSound object;
	bool expected = false;
	bool actual = object.getIsAcceleratePresent();
	CHECK_EQUAL( expected, actual )
	object.setIsAcceleratePresent( true );
	expected = true;
	actual = object.getIsAcceleratePresent();
	CHECK_EQUAL( expected, actual )
	object.setIsAcceleratePresent( false );
	expected = false;
	actual = object.getIsAcceleratePresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsBeatsPresent1, MxAttrGrpBendSound )
{
	MxAttrGrpBendSound object;
	bool expected = false;
	bool actual = object.getIsBeatsPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsBeatsPresent( true );
	expected = true;
	actual = object.getIsBeatsPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsBeatsPresent( false );
	expected = false;
	actual = object.getIsBeatsPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFirstBeatPresent2, MxAttrGrpBendSound )
{
	MxAttrGrpBendSound object;
	bool expected = false;
	bool actual = object.getIsFirstBeatPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsFirstBeatPresent( true );
	expected = true;
	actual = object.getIsFirstBeatPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsFirstBeatPresent( false );
	expected = false;
	actual = object.getIsFirstBeatPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsLastBeatPresent3, MxAttrGrpBendSound )
{
	MxAttrGrpBendSound object;
	bool expected = false;
	bool actual = object.getIsLastBeatPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsLastBeatPresent( true );
	expected = true;
	actual = object.getIsLastBeatPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsLastBeatPresent( false );
	expected = false;
	actual = object.getIsLastBeatPresent();
	CHECK_EQUAL( expected, actual )
}

/* End: IsAttributePresent -------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxAttrGrpBendSound )
{
	MxAttrGrpBendSound object;
	std::string expected;
	std::string actual;
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 2.1 ) );
	object.setFirstBeat( MxNumberPercent( 1.1 ) );
	object.setLastBeat( MxNumberPercent( 1.1 ) );
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( true );
	object.setIsFirstBeatPresent( true );
	object.setIsLastBeatPresent( true );
	expected = "accelerate=\"no\" beats=\"2.1\" first-beat=\"1.1\" last-beat=\"1.1\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxAttrGrpBendSound )
{
	MxAttrGrpBendSound object;
	std::string expected;
	std::string actual;
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( true );
	object.setIsFirstBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 2.2 ) );
	object.setFirstBeat( MxNumberPercent( 1.2 ) );
	object.setLastBeat( MxNumberPercent( 1.2 ) );
	expected = "beats=\"2.2\" first-beat=\"1.2\" last-beat=\"1.2\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString2, MxAttrGrpBendSound )
{
	MxAttrGrpBendSound object;
	std::string expected;
	std::string actual;
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( false );
	object.setIsFirstBeatPresent( true );
	object.setIsLastBeatPresent( true );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 2.3 ) );
	object.setFirstBeat( MxNumberPercent( 1.3 ) );
	object.setLastBeat( MxNumberPercent( 1.3 ) );
	expected = "accelerate=\"no\" first-beat=\"1.3\" last-beat=\"1.3\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString3, MxAttrGrpBendSound )
{
	MxAttrGrpBendSound object;
	std::string expected;
	std::string actual;
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( false );
	object.setIsFirstBeatPresent( false );
	object.setIsLastBeatPresent( true );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 2.4 ) );
	object.setFirstBeat( MxNumberPercent( 1.4 ) );
	object.setLastBeat( MxNumberPercent( 1.4 ) );
	expected = "last-beat=\"1.4\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString4, MxAttrGrpBendSound )
{
	MxAttrGrpBendSound object;
	std::string expected;
	std::string actual;
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( true );
	object.setIsFirstBeatPresent( false );
	object.setIsLastBeatPresent( false );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 2.5 ) );
	object.setFirstBeat( MxNumberPercent( 1.5 ) );
	object.setLastBeat( MxNumberPercent( 1.5 ) );
	expected = "accelerate=\"no\" beats=\"2.5\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString5, MxAttrGrpBendSound )
{
	MxAttrGrpBendSound object;
	std::string expected;
	std::string actual;
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( true );
	object.setIsFirstBeatPresent( false );
	object.setIsLastBeatPresent( false );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 2.6 ) );
	object.setFirstBeat( MxNumberPercent( 1.6 ) );
	object.setLastBeat( MxNumberPercent( 1.6 ) );
	expected = "beats=\"2.6\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString6, MxAttrGrpBendSound )
{
	MxAttrGrpBendSound object;
	std::string expected;
	std::string actual;
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( false );
	object.setIsFirstBeatPresent( true );
	object.setIsLastBeatPresent( false );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 2.7 ) );
	object.setFirstBeat( MxNumberPercent( 1.7 ) );
	object.setLastBeat( MxNumberPercent( 1.7 ) );
	expected = "accelerate=\"no\" first-beat=\"1.7\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString7, MxAttrGrpBendSound )
{
	MxAttrGrpBendSound object;
	std::string expected;
	std::string actual;
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( false );
	object.setIsFirstBeatPresent( true );
	object.setIsLastBeatPresent( false );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 2.8 ) );
	object.setFirstBeat( MxNumberPercent( 1.8 ) );
	object.setLastBeat( MxNumberPercent( 1.8 ) );
	expected = "first-beat=\"1.8\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString8, MxAttrGrpBendSound )
{
	MxAttrGrpBendSound object;
	std::string expected;
	std::string actual;
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( true );
	object.setIsFirstBeatPresent( false );
	object.setIsLastBeatPresent( true );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 2.9 ) );
	object.setFirstBeat( MxNumberPercent( 1.9 ) );
	object.setLastBeat( MxNumberPercent( 1.9 ) );
	expected = "beats=\"2.9\" last-beat=\"1.9\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString9, MxAttrGrpBendSound )
{
	MxAttrGrpBendSound object;
	std::string expected;
	std::string actual;
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( false );
	object.setIsFirstBeatPresent( false );
	object.setIsLastBeatPresent( true );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 3 ) );
	object.setFirstBeat( MxNumberPercent( 2 ) );
	object.setLastBeat( MxNumberPercent( 2 ) );
	expected = "accelerate=\"yes\" last-beat=\"2\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString10, MxAttrGrpBendSound )
{
	MxAttrGrpBendSound object;
	std::string expected;
	std::string actual;
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( false );
	object.setIsFirstBeatPresent( false );
	object.setIsLastBeatPresent( true );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 3.1 ) );
	object.setFirstBeat( MxNumberPercent( 2.1 ) );
	object.setLastBeat( MxNumberPercent( 2.1 ) );
	expected = "last-beat=\"2.1\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString11, MxAttrGrpBendSound )
{
	MxAttrGrpBendSound object;
	std::string expected;
	std::string actual;
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( true );
	object.setIsFirstBeatPresent( true );
	object.setIsLastBeatPresent( false );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 3.2 ) );
	object.setFirstBeat( MxNumberPercent( 2.2 ) );
	object.setLastBeat( MxNumberPercent( 2.2 ) );
	expected = "accelerate=\"yes\" beats=\"3.2\" first-beat=\"2.2\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString12, MxAttrGrpBendSound )
{
	MxAttrGrpBendSound object;
	std::string expected;
	std::string actual;
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( true );
	object.setIsFirstBeatPresent( true );
	object.setIsLastBeatPresent( false );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 3.3 ) );
	object.setFirstBeat( MxNumberPercent( 2.3 ) );
	object.setLastBeat( MxNumberPercent( 2.3 ) );
	expected = "beats=\"3.3\" first-beat=\"2.3\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString13, MxAttrGrpBendSound )
{
	MxAttrGrpBendSound object;
	std::string expected;
	std::string actual;
	object.setIsAcceleratePresent( true );
	object.setIsBeatsPresent( false );
	object.setIsFirstBeatPresent( true );
	object.setIsLastBeatPresent( false );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBeats( MxNumberTrillBeats( 3.4 ) );
	object.setFirstBeat( MxNumberPercent( 2.4 ) );
	object.setLastBeat( MxNumberPercent( 2.4 ) );
	expected = "accelerate=\"yes\" first-beat=\"2.4\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString14, MxAttrGrpBendSound )
{
	MxAttrGrpBendSound object;
	std::string expected;
	std::string actual;
	object.setIsAcceleratePresent( false );
	object.setIsBeatsPresent( false );
	object.setIsFirstBeatPresent( false );
	object.setIsLastBeatPresent( false );
	object.setAccelerate( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBeats( MxNumberTrillBeats( 3.5 ) );
	object.setFirstBeat( MxNumberPercent( 2.5 ) );
	object.setLastBeat( MxNumberPercent( 2.5 ) );
	expected = "";
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

TEST( getIsAccelerateDefaultDefined, MxAttrGrpBendSound )
{
	MxAttrGrpBendSound object;
	bool expected = true;
	bool actual = object.getIsAccelerateDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsBeatsDefaultDefined, MxAttrGrpBendSound )
{
	MxAttrGrpBendSound object;
	bool expected = true;
	bool actual = object.getIsBeatsDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFirstBeatDefaultDefined, MxAttrGrpBendSound )
{
	MxAttrGrpBendSound object;
	bool expected = true;
	bool actual = object.getIsFirstBeatDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsLastBeatDefaultDefined, MxAttrGrpBendSound )
{
	MxAttrGrpBendSound object;
	bool expected = true;
	bool actual = object.getIsLastBeatDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getAccelerateDefaultValue, MxAttrGrpBendSound )
{
	MxAttrGrpBendSound object;
	MxEnumYesNo expected( lexicon::enums::YesNo::yes );
	MxEnumYesNo actual = object.getAccelerateDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getBeatsDefaultValue, MxAttrGrpBendSound )
{
	MxAttrGrpBendSound object;
	MxNumberTrillBeats expected( 4 );
	MxNumberTrillBeats actual = object.getBeatsDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFirstBeatDefaultValue, MxAttrGrpBendSound )
{
	MxAttrGrpBendSound object;
	MxNumberPercent expected( 0.25 );
	MxNumberPercent actual = object.getFirstBeatDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getLastBeatDefaultValue, MxAttrGrpBendSound )
{
	MxAttrGrpBendSound object;
	MxNumberPercent expected( 0.75 );
	MxNumberPercent actual = object.getLastBeatDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


