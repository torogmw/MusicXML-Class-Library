/** *******************************************************
  * 
  * MxEeGraceTest.cpp
  * Created: 2014-12-05 16:47:06
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxEeGrace.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxEeGrace )
{
	MxEeGrace object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxEeGrace )
{
	MxEeGrace object;
	std::string expected = ( MxNumberPercent(  ) ).toString();
	std::string actual = object.getStealTimePrevious().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues1, MxEeGrace )
{
	MxEeGrace object;
	std::string expected = ( MxNumberPercent(  ) ).toString();
	std::string actual = object.getStealTimeFollowing().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues2, MxEeGrace )
{
	MxEeGrace object;
	std::string expected = ( MxNumberDivisions(  ) ).toString();
	std::string actual = object.getMakeTime().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues3, MxEeGrace )
{
	MxEeGrace object;
	std::string expected = ( MxEnumYesNo(  ) ).toString();
	std::string actual = object.getSlash().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* minOccurs maxOccurs ------------------------------------------------------ */

TEST( getMinOccurs, MxEeGrace )
{
	MxEeGrace object;
	int expected = 1;
	int actual = object.getMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getMaxOccurs, MxEeGrace )
{
	MxEeGrace object;
	int expected = 1;
	int actual = object.getMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsMaxOccursUnbounded, MxEeGrace )
{
	MxEeGrace object;
	bool expected = false;
	bool actual = object.getIsMaxOccursUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: minOccurs maxOccurs ------------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxEeGrace )
{
	MxEeGrace object;
	std::string expected = "MxEeGrace";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxEeGrace )
{
	MxEeGrace object;
	std::string expected = "grace";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxEeGrace )
{
	MxEeGrace object;
	std::string expected = "( no documentation )";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setStealTimePrevious0, MxEeGrace )
{
	MxNumberPercent value1( 0.1 );
	MxNumberPercent value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEeGrace object;
	object.setStealTimePrevious( value1 );
	MxNumberPercent expected = value1;
	MxNumberPercent actual = object.getStealTimePrevious();
	CHECK_EQUAL( expected, actual )
	object.setStealTimePrevious( value2 );
	expected = value2;
	actual = object.getStealTimePrevious();
	CHECK_EQUAL( expected, actual )
}
TEST( setStealTimeFollowing1, MxEeGrace )
{
	MxNumberPercent value1( 0.1 );
	MxNumberPercent value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEeGrace object;
	object.setStealTimeFollowing( value1 );
	MxNumberPercent expected = value1;
	MxNumberPercent actual = object.getStealTimeFollowing();
	CHECK_EQUAL( expected, actual )
	object.setStealTimeFollowing( value2 );
	expected = value2;
	actual = object.getStealTimeFollowing();
	CHECK_EQUAL( expected, actual )
}
TEST( setMakeTime2, MxEeGrace )
{
	MxNumberDivisions value1( 0.1 );
	MxNumberDivisions value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEeGrace object;
	object.setMakeTime( value1 );
	MxNumberDivisions expected = value1;
	MxNumberDivisions actual = object.getMakeTime();
	CHECK_EQUAL( expected, actual )
	object.setMakeTime( value2 );
	expected = value2;
	actual = object.getMakeTime();
	CHECK_EQUAL( expected, actual )
}
TEST( setSlash3, MxEeGrace )
{
	MxEnumYesNo value1( lexicon::enums::YesNo::no );
	MxEnumYesNo value2( lexicon::enums::YesNo::yes );
	CHECK( ( value1 != value2 ) )
	MxEeGrace object;
	object.setSlash( value1 );
	MxEnumYesNo expected = value1;
	MxEnumYesNo actual = object.getSlash();
	CHECK_EQUAL( expected, actual )
	object.setSlash( value2 );
	expected = value2;
	actual = object.getSlash();
	CHECK_EQUAL( expected, actual )
}

/* End: SetValue Functions -------------------------------------------------- */


/* Get IsAttributeRequired -------------------------------------------------- */

TEST( getIsStealTimePreviousRequired0, MxEeGrace )
{
	MxEeGrace object;
	bool expected = false;
	bool actual = object.getIsStealTimePreviousRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsStealTimeFollowingRequired1, MxEeGrace )
{
	MxEeGrace object;
	bool expected = false;
	bool actual = object.getIsStealTimeFollowingRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsMakeTimeRequired2, MxEeGrace )
{
	MxEeGrace object;
	bool expected = false;
	bool actual = object.getIsMakeTimeRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsSlashRequired3, MxEeGrace )
{
	MxEeGrace object;
	bool expected = false;
	bool actual = object.getIsSlashRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsStealTimePreviousPresent0, MxEeGrace )
{
	MxEeGrace object;
	bool expected = false;
	bool actual = object.getIsStealTimePreviousPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsStealTimePreviousPresent( true );
	expected = true;
	actual = object.getIsStealTimePreviousPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsStealTimePreviousPresent( false );
	expected = false;
	actual = object.getIsStealTimePreviousPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsStealTimeFollowingPresent1, MxEeGrace )
{
	MxEeGrace object;
	bool expected = false;
	bool actual = object.getIsStealTimeFollowingPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsStealTimeFollowingPresent( true );
	expected = true;
	actual = object.getIsStealTimeFollowingPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsStealTimeFollowingPresent( false );
	expected = false;
	actual = object.getIsStealTimeFollowingPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsMakeTimePresent2, MxEeGrace )
{
	MxEeGrace object;
	bool expected = false;
	bool actual = object.getIsMakeTimePresent();
	CHECK_EQUAL( expected, actual )
	object.setIsMakeTimePresent( true );
	expected = true;
	actual = object.getIsMakeTimePresent();
	CHECK_EQUAL( expected, actual )
	object.setIsMakeTimePresent( false );
	expected = false;
	actual = object.getIsMakeTimePresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsSlashPresent3, MxEeGrace )
{
	MxEeGrace object;
	bool expected = false;
	bool actual = object.getIsSlashPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsSlashPresent( true );
	expected = true;
	actual = object.getIsSlashPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsSlashPresent( false );
	expected = false;
	actual = object.getIsSlashPresent();
	CHECK_EQUAL( expected, actual )
}

/* End: IsAttributePresent -------------------------------------------------- */


/* Is Default Defined ------------------------------------------------------- */

TEST( getIsStealTimePreviousDefaultDefined, MxEeGrace )
{
	MxEeGrace object;
	bool expected = false;
	bool actual = object.getIsStealTimePreviousDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsStealTimeFollowingDefaultDefined, MxEeGrace )
{
	MxEeGrace object;
	bool expected = false;
	bool actual = object.getIsStealTimeFollowingDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsMakeTimeDefaultDefined, MxEeGrace )
{
	MxEeGrace object;
	bool expected = false;
	bool actual = object.getIsMakeTimeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsSlashDefaultDefined, MxEeGrace )
{
	MxEeGrace object;
	bool expected = false;
	bool actual = object.getIsSlashDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getStealTimePreviousDefaultValue, MxEeGrace )
{
	MxEeGrace object;
	MxNumberPercent expected;
	MxNumberPercent actual = object.getStealTimePreviousDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getStealTimeFollowingDefaultValue, MxEeGrace )
{
	MxEeGrace object;
	MxNumberPercent expected;
	MxNumberPercent actual = object.getStealTimeFollowingDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getMakeTimeDefaultValue, MxEeGrace )
{
	MxEeGrace object;
	MxNumberDivisions expected;
	MxNumberDivisions actual = object.getMakeTimeDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getSlashDefaultValue, MxEeGrace )
{
	MxEeGrace object;
	MxEnumYesNo expected;
	MxEnumYesNo actual = object.getSlashDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxEeGrace )
{
	MxEeGrace object;
	std::string expected;
	std::string actual;
	object.setStealTimePrevious( MxNumberPercent( 1 ) );
	object.setStealTimeFollowing( MxNumberPercent( 1 ) );
	object.setMakeTime( MxNumberDivisions( 1 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setIsStealTimePreviousPresent( true );
	object.setIsStealTimeFollowingPresent( true );
	object.setIsMakeTimePresent( true );
	object.setIsSlashPresent( true );
	expected = "<grace steal-time-previous=\"1\" steal-time-following=\"1\" make-time=\"1\" slash=\"yes\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxEeGrace )
{
	MxEeGrace object;
	std::string expected;
	std::string actual;
	object.setIsStealTimePreviousPresent( false );
	object.setIsStealTimeFollowingPresent( true );
	object.setIsMakeTimePresent( true );
	object.setIsSlashPresent( true );
	object.setStealTimePrevious( MxNumberPercent( 1 ) );
	object.setStealTimeFollowing( MxNumberPercent( 1 ) );
	object.setMakeTime( MxNumberDivisions( 1 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<grace steal-time-following=\"1\" make-time=\"1\" slash=\"yes\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString2, MxEeGrace )
{
	MxEeGrace object;
	std::string expected;
	std::string actual;
	object.setIsStealTimePreviousPresent( true );
	object.setIsStealTimeFollowingPresent( false );
	object.setIsMakeTimePresent( true );
	object.setIsSlashPresent( true );
	object.setStealTimePrevious( MxNumberPercent( 1 ) );
	object.setStealTimeFollowing( MxNumberPercent( 1 ) );
	object.setMakeTime( MxNumberDivisions( 1 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<grace steal-time-previous=\"1\" make-time=\"1\" slash=\"yes\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString3, MxEeGrace )
{
	MxEeGrace object;
	std::string expected;
	std::string actual;
	object.setIsStealTimePreviousPresent( false );
	object.setIsStealTimeFollowingPresent( false );
	object.setIsMakeTimePresent( false );
	object.setIsSlashPresent( true );
	object.setStealTimePrevious( MxNumberPercent( 1 ) );
	object.setStealTimeFollowing( MxNumberPercent( 1 ) );
	object.setMakeTime( MxNumberDivisions( 1 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<grace slash=\"yes\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString4, MxEeGrace )
{
	MxEeGrace object;
	std::string expected;
	std::string actual;
	object.setIsStealTimePreviousPresent( true );
	object.setIsStealTimeFollowingPresent( true );
	object.setIsMakeTimePresent( false );
	object.setIsSlashPresent( false );
	object.setStealTimePrevious( MxNumberPercent( 1 ) );
	object.setStealTimeFollowing( MxNumberPercent( 1 ) );
	object.setMakeTime( MxNumberDivisions( 1 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<grace steal-time-previous=\"1\" steal-time-following=\"1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString5, MxEeGrace )
{
	MxEeGrace object;
	std::string expected;
	std::string actual;
	object.setIsStealTimePreviousPresent( false );
	object.setIsStealTimeFollowingPresent( true );
	object.setIsMakeTimePresent( false );
	object.setIsSlashPresent( false );
	object.setStealTimePrevious( MxNumberPercent( 1 ) );
	object.setStealTimeFollowing( MxNumberPercent( 1 ) );
	object.setMakeTime( MxNumberDivisions( 1 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<grace steal-time-following=\"1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString6, MxEeGrace )
{
	MxEeGrace object;
	std::string expected;
	std::string actual;
	object.setIsStealTimePreviousPresent( true );
	object.setIsStealTimeFollowingPresent( false );
	object.setIsMakeTimePresent( true );
	object.setIsSlashPresent( false );
	object.setStealTimePrevious( MxNumberPercent( 1 ) );
	object.setStealTimeFollowing( MxNumberPercent( 1 ) );
	object.setMakeTime( MxNumberDivisions( 1 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<grace steal-time-previous=\"1\" make-time=\"1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString7, MxEeGrace )
{
	MxEeGrace object;
	std::string expected;
	std::string actual;
	object.setIsStealTimePreviousPresent( false );
	object.setIsStealTimeFollowingPresent( false );
	object.setIsMakeTimePresent( true );
	object.setIsSlashPresent( false );
	object.setStealTimePrevious( MxNumberPercent( 1 ) );
	object.setStealTimeFollowing( MxNumberPercent( 1 ) );
	object.setMakeTime( MxNumberDivisions( 1 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<grace make-time=\"1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString8, MxEeGrace )
{
	MxEeGrace object;
	std::string expected;
	std::string actual;
	object.setIsStealTimePreviousPresent( false );
	object.setIsStealTimeFollowingPresent( true );
	object.setIsMakeTimePresent( false );
	object.setIsSlashPresent( true );
	object.setStealTimePrevious( MxNumberPercent( 1 ) );
	object.setStealTimeFollowing( MxNumberPercent( 1 ) );
	object.setMakeTime( MxNumberDivisions( 1 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<grace steal-time-following=\"1\" slash=\"yes\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString9, MxEeGrace )
{
	MxEeGrace object;
	std::string expected;
	std::string actual;
	object.setIsStealTimePreviousPresent( true );
	object.setIsStealTimeFollowingPresent( false );
	object.setIsMakeTimePresent( false );
	object.setIsSlashPresent( true );
	object.setStealTimePrevious( MxNumberPercent( 1 ) );
	object.setStealTimeFollowing( MxNumberPercent( 1 ) );
	object.setMakeTime( MxNumberDivisions( 1 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<grace steal-time-previous=\"1\" slash=\"yes\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString10, MxEeGrace )
{
	MxEeGrace object;
	std::string expected;
	std::string actual;
	object.setIsStealTimePreviousPresent( false );
	object.setIsStealTimeFollowingPresent( false );
	object.setIsMakeTimePresent( false );
	object.setIsSlashPresent( true );
	object.setStealTimePrevious( MxNumberPercent( 1 ) );
	object.setStealTimeFollowing( MxNumberPercent( 1 ) );
	object.setMakeTime( MxNumberDivisions( 1 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<grace slash=\"yes\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString11, MxEeGrace )
{
	MxEeGrace object;
	std::string expected;
	std::string actual;
	object.setIsStealTimePreviousPresent( true );
	object.setIsStealTimeFollowingPresent( true );
	object.setIsMakeTimePresent( true );
	object.setIsSlashPresent( false );
	object.setStealTimePrevious( MxNumberPercent( 1 ) );
	object.setStealTimeFollowing( MxNumberPercent( 1 ) );
	object.setMakeTime( MxNumberDivisions( 1 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<grace steal-time-previous=\"1\" steal-time-following=\"1\" make-time=\"1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString12, MxEeGrace )
{
	MxEeGrace object;
	std::string expected;
	std::string actual;
	object.setIsStealTimePreviousPresent( false );
	object.setIsStealTimeFollowingPresent( true );
	object.setIsMakeTimePresent( true );
	object.setIsSlashPresent( false );
	object.setStealTimePrevious( MxNumberPercent( 1 ) );
	object.setStealTimeFollowing( MxNumberPercent( 1 ) );
	object.setMakeTime( MxNumberDivisions( 1 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<grace steal-time-following=\"1\" make-time=\"1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString13, MxEeGrace )
{
	MxEeGrace object;
	std::string expected;
	std::string actual;
	object.setIsStealTimePreviousPresent( true );
	object.setIsStealTimeFollowingPresent( false );
	object.setIsMakeTimePresent( true );
	object.setIsSlashPresent( false );
	object.setStealTimePrevious( MxNumberPercent( 1 ) );
	object.setStealTimeFollowing( MxNumberPercent( 1 ) );
	object.setMakeTime( MxNumberDivisions( 1 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<grace steal-time-previous=\"1\" make-time=\"1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString14, MxEeGrace )
{
	MxEeGrace object;
	std::string expected;
	std::string actual;
	object.setIsStealTimePreviousPresent( false );
	object.setIsStealTimeFollowingPresent( false );
	object.setIsMakeTimePresent( false );
	object.setIsSlashPresent( false );
	object.setStealTimePrevious( MxNumberPercent( 1 ) );
	object.setStealTimeFollowing( MxNumberPercent( 1 ) );
	object.setMakeTime( MxNumberDivisions( 1 ) );
	object.setSlash( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<grace/>";
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


