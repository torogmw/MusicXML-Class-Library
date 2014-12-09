/** *******************************************************
  * 
  * MxCxSmpOffsetTest.cpp
  * Created: 2014-12-02 17:31:52
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxCxSmpOffset.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxCxSmpOffset )
{
	MxCxSmpOffset object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxCxSmpOffset )
{
	MxCxSmpOffset object;
	std::string expected = ( MxEnumYesNo( lexicon::enums::YesNo::no ) ).toString();
	std::string actual = object.getSound().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValueAndElementName0, MxCxSmpOffset )
{
	MxCxSmpOffset object( "booksmart", MxNumberDivisions( 1 ) );
	std::string expected;
	std::string actual;
	expected = "booksmart";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "1";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxNumberDivisions( -1000 ) );
	expected = "-1000";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName2, MxCxSmpOffset )
{
	MxCxSmpOffset object( "musicxmlishard", MxNumberDivisions( -1000 ) );
	std::string expected;
	std::string actual;
	expected = "musicxmlishard";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "-1000";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxNumberDivisions( -1000 ) );
	expected = "-1000";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName4, MxCxSmpOffset )
{
	MxCxSmpOffset object( "charlie", MxNumberDivisions( -1000 ) );
	std::string expected;
	std::string actual;
	expected = "charlie";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "-1000";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxNumberDivisions( -1000 ) );
	expected = "-1000";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName6, MxCxSmpOffset )
{
	MxCxSmpOffset object( "quiet", MxNumberDivisions( -1000 ) );
	std::string expected;
	std::string actual;
	expected = "quiet";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "-1000";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxNumberDivisions( -1000 ) );
	expected = "-1000";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName8, MxCxSmpOffset )
{
	MxCxSmpOffset object( "bishop", MxNumberDivisions( -1000 ) );
	std::string expected;
	std::string actual;
	expected = "bishop";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "-1000";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxNumberDivisions( -1000 ) );
	expected = "-1000";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Ctor tests with values  --------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxCxSmpOffset )
{
	MxCxSmpOffset object;
	std::string expected = "MxCxSmpOffset";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxCxSmpOffset )
{
	MxCxSmpOffset object;
	std::string expected = "offset";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxCxSmpOffset )
{
	MxCxSmpOffset object;
	std::string expected = "An offset is represented in terms of divisions, and indicates where the direction will appear relative to the current musical location. This affects the visual appearance of the direction. If the sound attribute is 'yes', then the offset affects playback too. If the sound attribute is 'no', then any sound associated with the direction takes effect at the current location. The sound attribute is 'no' by default for compatibility with earlier versions of the MusicXML format. If an element within a direction includes a default-x attribute, the offset value will be ignored when determining the appearance of that element.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setSound0, MxCxSmpOffset )
{
	MxEnumYesNo value1( lexicon::enums::YesNo::no );
	MxEnumYesNo value2( lexicon::enums::YesNo::yes );
	CHECK( ( value1 != value2 ) )
	MxCxSmpOffset object;
	object.setSound( value1 );
	MxEnumYesNo expected = value1;
	MxEnumYesNo actual = object.getSound();
	CHECK_EQUAL( expected, actual )
	object.setSound( value2 );
	expected = value2;
	actual = object.getSound();
	CHECK_EQUAL( expected, actual )
}

/* End: SetValue Functions -------------------------------------------------- */


/* Get IsAttributeRequired -------------------------------------------------- */

TEST( getIsSoundRequired0, MxCxSmpOffset )
{
	MxCxSmpOffset object;
	bool expected = false;
	bool actual = object.getIsSoundRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsSoundPresent0, MxCxSmpOffset )
{
	MxCxSmpOffset object;
	bool expected = false;
	bool actual = object.getIsSoundPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsSoundPresent( true );
	expected = true;
	actual = object.getIsSoundPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsSoundPresent( false );
	expected = false;
	actual = object.getIsSoundPresent();
	CHECK_EQUAL( expected, actual )
}

/* End: IsAttributePresent -------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxCxSmpOffset )
{
	MxCxSmpOffset object( "booksmart", MxNumberDivisions( -1000 ) );
	std::string expected;
	std::string actual;
	object.setSound( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setIsSoundPresent( true );
	expected = "<booksmart sound=\"yes\">-1000</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxCxSmpOffset )
{
	MxCxSmpOffset object( "quiet", MxNumberDivisions( -1000 ) );
	std::string expected;
	std::string actual;
	object.setIsSoundPresent( false );
	object.setSound( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<quiet>-1000</quiet>";
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

TEST( getIsSoundDefaultDefined, MxCxSmpOffset )
{
	MxCxSmpOffset object;
	bool expected = true;
	bool actual = object.getIsSoundDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getSoundDefaultValue, MxCxSmpOffset )
{
	MxCxSmpOffset object;
	MxEnumYesNo expected( lexicon::enums::YesNo::no );
	MxEnumYesNo actual = object.getSoundDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


