/** *******************************************************
  * 
  * MxCxEmptyGraceTest.cpp
  * Created: 2014-12-03 16:31:30
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxCxEmptyGrace.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxCxEmptyGrace )
{
	MxCxEmptyGrace object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxCxEmptyGrace )
{
	MxCxEmptyGrace object;
	std::string expected = ( MxNumberPercent(  ) ).toString();
	std::string actual = object.getStealTimePrevious().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues1, MxCxEmptyGrace )
{
	MxCxEmptyGrace object;
	std::string expected = ( MxNumberPercent(  ) ).toString();
	std::string actual = object.getStealTimeFollowing().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues2, MxCxEmptyGrace )
{
	MxCxEmptyGrace object;
	std::string expected = ( MxNumberDivisions(  ) ).toString();
	std::string actual = object.getMakeTime().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues3, MxCxEmptyGrace )
{
	MxCxEmptyGrace object;
	std::string expected = ( MxEnumYesNo(  ) ).toString();
	std::string actual = object.getSlash().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValueAndElementName0, MxCxEmptyGrace )
{
	MxCxEmptyGrace object( "booksmart" );
	std::string expected;
	std::string actual;
	expected = "booksmart";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName2, MxCxEmptyGrace )
{
	MxCxEmptyGrace object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	expected = "musicxmlishard";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName4, MxCxEmptyGrace )
{
	MxCxEmptyGrace object( "charlie" );
	std::string expected;
	std::string actual;
	expected = "charlie";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName6, MxCxEmptyGrace )
{
	MxCxEmptyGrace object( "quiet" );
	std::string expected;
	std::string actual;
	expected = "quiet";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName8, MxCxEmptyGrace )
{
	MxCxEmptyGrace object( "bishop" );
	std::string expected;
	std::string actual;
	expected = "bishop";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}

/* End: Ctor tests with values  --------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxCxEmptyGrace )
{
	MxCxEmptyGrace object;
	std::string expected = "MxCxEmptyGrace";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxCxEmptyGrace )
{
	MxCxEmptyGrace object;
	std::string expected = "grace";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxCxEmptyGrace )
{
	MxCxEmptyGrace object;
	std::string expected = "The grace type indicates the presence of a grace note. The slash attribute for a grace note is yes for slashed eighth notes. The other grace note attributes come from MuseData sound suggestions. The steal-time-previous attribute indicates the percentage of time to steal from the previous note for the grace note. The steal-time-following attribute indicates the percentage of time to steal from the following note for the grace note, as for appoggiaturas. The make-time attribute indicates to make time, not steal time; the units are in real-time divisions for the grace note.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setStealTimePrevious0, MxCxEmptyGrace )
{
	MxNumberPercent value1( 0.1 );
	MxNumberPercent value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyGrace object;
	object.setStealTimePrevious( value1 );
	MxNumberPercent expected = value1;
	MxNumberPercent actual = object.getStealTimePrevious();
	CHECK_EQUAL( expected, actual )
	object.setStealTimePrevious( value2 );
	expected = value2;
	actual = object.getStealTimePrevious();
	CHECK_EQUAL( expected, actual )
}
TEST( setStealTimeFollowing1, MxCxEmptyGrace )
{
	MxNumberPercent value1( 0.1 );
	MxNumberPercent value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyGrace object;
	object.setStealTimeFollowing( value1 );
	MxNumberPercent expected = value1;
	MxNumberPercent actual = object.getStealTimeFollowing();
	CHECK_EQUAL( expected, actual )
	object.setStealTimeFollowing( value2 );
	expected = value2;
	actual = object.getStealTimeFollowing();
	CHECK_EQUAL( expected, actual )
}
TEST( setMakeTime2, MxCxEmptyGrace )
{
	MxNumberDivisions value1( 0.1 );
	MxNumberDivisions value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyGrace object;
	object.setMakeTime( value1 );
	MxNumberDivisions expected = value1;
	MxNumberDivisions actual = object.getMakeTime();
	CHECK_EQUAL( expected, actual )
	object.setMakeTime( value2 );
	expected = value2;
	actual = object.getMakeTime();
	CHECK_EQUAL( expected, actual )
}
TEST( setSlash3, MxCxEmptyGrace )
{
	MxEnumYesNo value1( lexicon::enums::YesNo::no );
	MxEnumYesNo value2( lexicon::enums::YesNo::yes );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyGrace object;
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

TEST( getIsStealTimePreviousRequired0, MxCxEmptyGrace )
{
	MxCxEmptyGrace object;
	bool expected = false;
	bool actual = object.getIsStealTimePreviousRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsStealTimeFollowingRequired1, MxCxEmptyGrace )
{
	MxCxEmptyGrace object;
	bool expected = false;
	bool actual = object.getIsStealTimeFollowingRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsMakeTimeRequired2, MxCxEmptyGrace )
{
	MxCxEmptyGrace object;
	bool expected = false;
	bool actual = object.getIsMakeTimeRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsSlashRequired3, MxCxEmptyGrace )
{
	MxCxEmptyGrace object;
	bool expected = false;
	bool actual = object.getIsSlashRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsStealTimePreviousPresent0, MxCxEmptyGrace )
{
	MxCxEmptyGrace object;
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
TEST( getIsStealTimeFollowingPresent1, MxCxEmptyGrace )
{
	MxCxEmptyGrace object;
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
TEST( getIsMakeTimePresent2, MxCxEmptyGrace )
{
	MxCxEmptyGrace object;
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
TEST( getIsSlashPresent3, MxCxEmptyGrace )
{
	MxCxEmptyGrace object;
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

TEST( getIsStealTimePreviousDefaultDefined, MxCxEmptyGrace )
{
	MxCxEmptyGrace object;
	bool expected = false;
	bool actual = object.getIsStealTimePreviousDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsStealTimeFollowingDefaultDefined, MxCxEmptyGrace )
{
	MxCxEmptyGrace object;
	bool expected = false;
	bool actual = object.getIsStealTimeFollowingDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsMakeTimeDefaultDefined, MxCxEmptyGrace )
{
	MxCxEmptyGrace object;
	bool expected = false;
	bool actual = object.getIsMakeTimeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsSlashDefaultDefined, MxCxEmptyGrace )
{
	MxCxEmptyGrace object;
	bool expected = false;
	bool actual = object.getIsSlashDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getStealTimePreviousDefaultValue, MxCxEmptyGrace )
{
	MxCxEmptyGrace object;
	MxNumberPercent expected;
	MxNumberPercent actual = object.getStealTimePreviousDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getStealTimeFollowingDefaultValue, MxCxEmptyGrace )
{
	MxCxEmptyGrace object;
	MxNumberPercent expected;
	MxNumberPercent actual = object.getStealTimeFollowingDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getMakeTimeDefaultValue, MxCxEmptyGrace )
{
	MxCxEmptyGrace object;
	MxNumberDivisions expected;
	MxNumberDivisions actual = object.getMakeTimeDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getSlashDefaultValue, MxCxEmptyGrace )
{
	MxCxEmptyGrace object;
	MxEnumYesNo expected;
	MxEnumYesNo actual = object.getSlashDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxCxEmptyGrace )
{
	MxCxEmptyGrace object( "booksmart" );
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
	expected = "<booksmart steal-time-previous=\"1\" steal-time-following=\"1\" make-time=\"1\" slash=\"yes\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxCxEmptyGrace )
{
	MxCxEmptyGrace object( "quiet" );
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
	expected = "<quiet steal-time-following=\"1\" make-time=\"1\" slash=\"yes\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString2, MxCxEmptyGrace )
{
	MxCxEmptyGrace object( "musicxmlishard" );
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
	expected = "<musicxmlishard steal-time-previous=\"1\" make-time=\"1\" slash=\"yes\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString3, MxCxEmptyGrace )
{
	MxCxEmptyGrace object( "bishop" );
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
	expected = "<bishop slash=\"yes\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString4, MxCxEmptyGrace )
{
	MxCxEmptyGrace object( "charlie" );
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
	expected = "<charlie steal-time-previous=\"1\" steal-time-following=\"1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString5, MxCxEmptyGrace )
{
	MxCxEmptyGrace object( "booksmart" );
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
	expected = "<booksmart steal-time-following=\"1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString6, MxCxEmptyGrace )
{
	MxCxEmptyGrace object( "quiet" );
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
	expected = "<quiet steal-time-previous=\"1\" make-time=\"1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString7, MxCxEmptyGrace )
{
	MxCxEmptyGrace object( "musicxmlishard" );
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
	expected = "<musicxmlishard make-time=\"1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString8, MxCxEmptyGrace )
{
	MxCxEmptyGrace object( "bishop" );
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
	expected = "<bishop steal-time-following=\"1\" slash=\"yes\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString9, MxCxEmptyGrace )
{
	MxCxEmptyGrace object( "charlie" );
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
	expected = "<charlie steal-time-previous=\"1\" slash=\"yes\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString10, MxCxEmptyGrace )
{
	MxCxEmptyGrace object( "booksmart" );
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
	expected = "<booksmart slash=\"yes\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString11, MxCxEmptyGrace )
{
	MxCxEmptyGrace object( "quiet" );
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
	expected = "<quiet steal-time-previous=\"1\" steal-time-following=\"1\" make-time=\"1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString12, MxCxEmptyGrace )
{
	MxCxEmptyGrace object( "musicxmlishard" );
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
	expected = "<musicxmlishard steal-time-following=\"1\" make-time=\"1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString13, MxCxEmptyGrace )
{
	MxCxEmptyGrace object( "bishop" );
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
	expected = "<bishop steal-time-previous=\"1\" make-time=\"1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString14, MxCxEmptyGrace )
{
	MxCxEmptyGrace object( "charlie" );
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
	expected = "<charlie/>";
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


