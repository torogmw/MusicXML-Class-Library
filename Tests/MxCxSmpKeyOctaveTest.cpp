/** *******************************************************
  * 
  * MxCxSmpKeyOctaveTest.cpp
  * Created: 2014-12-02 17:31:51
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxCxSmpKeyOctave.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxCxSmpKeyOctave )
{
	MxCxSmpKeyOctave object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxCxSmpKeyOctave )
{
	MxCxSmpKeyOctave object;
	std::string expected = ( XsPositiveInteger(  ) ).toString();
	std::string actual = object.getNumber().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues1, MxCxSmpKeyOctave )
{
	MxCxSmpKeyOctave object;
	std::string expected = ( MxEnumYesNo( lexicon::enums::YesNo::no ) ).toString();
	std::string actual = object.getCancel().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValueAndElementName0, MxCxSmpKeyOctave )
{
	MxCxSmpKeyOctave object( "booksmart", MxNumberOctave( 1 ) );
	std::string expected;
	std::string actual;
	expected = "booksmart";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "1";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxNumberOctave( 0 ) );
	expected = "0";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName2, MxCxSmpKeyOctave )
{
	MxCxSmpKeyOctave object( "musicxmlishard", MxNumberOctave( 0 ) );
	std::string expected;
	std::string actual;
	expected = "musicxmlishard";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "0";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxNumberOctave( 0 ) );
	expected = "0";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName4, MxCxSmpKeyOctave )
{
	MxCxSmpKeyOctave object( "charlie", MxNumberOctave( 0 ) );
	std::string expected;
	std::string actual;
	expected = "charlie";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "0";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxNumberOctave( 0 ) );
	expected = "0";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName6, MxCxSmpKeyOctave )
{
	MxCxSmpKeyOctave object( "quiet", MxNumberOctave( 0 ) );
	std::string expected;
	std::string actual;
	expected = "quiet";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "0";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxNumberOctave( 0 ) );
	expected = "0";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName8, MxCxSmpKeyOctave )
{
	MxCxSmpKeyOctave object( "bishop", MxNumberOctave( 0 ) );
	std::string expected;
	std::string actual;
	expected = "bishop";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "0";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxNumberOctave( 0 ) );
	expected = "0";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Ctor tests with values  --------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxCxSmpKeyOctave )
{
	MxCxSmpKeyOctave object;
	std::string expected = "MxCxSmpKeyOctave";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxCxSmpKeyOctave )
{
	MxCxSmpKeyOctave object;
	std::string expected = "key-octave";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxCxSmpKeyOctave )
{
	MxCxSmpKeyOctave object;
	std::string expected = "The key-octave element specifies in which octave an element of a key signature appears. The content specifies the octave value using the same values as the display-octave element. The number attribute is a positive integer that refers to the key signature element in left-to-right order. If the cancel attribute is set to yes, then this number refers to an element specified by the cancel element. It is no by default.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setNumber0, MxCxSmpKeyOctave )
{
	XsPositiveInteger value1( 1 );
	XsPositiveInteger value2( 2 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpKeyOctave object;
	object.setNumber( value1 );
	XsPositiveInteger expected = value1;
	XsPositiveInteger actual = object.getNumber();
	CHECK_EQUAL( expected, actual )
	object.setNumber( value2 );
	expected = value2;
	actual = object.getNumber();
	CHECK_EQUAL( expected, actual )
}
TEST( setCancel1, MxCxSmpKeyOctave )
{
	MxEnumYesNo value1( lexicon::enums::YesNo::no );
	MxEnumYesNo value2( lexicon::enums::YesNo::yes );
	CHECK( ( value1 != value2 ) )
	MxCxSmpKeyOctave object;
	object.setCancel( value1 );
	MxEnumYesNo expected = value1;
	MxEnumYesNo actual = object.getCancel();
	CHECK_EQUAL( expected, actual )
	object.setCancel( value2 );
	expected = value2;
	actual = object.getCancel();
	CHECK_EQUAL( expected, actual )
}

/* End: SetValue Functions -------------------------------------------------- */


/* Get IsAttributeRequired -------------------------------------------------- */

TEST( getIsNumberRequired0, MxCxSmpKeyOctave )
{
	MxCxSmpKeyOctave object;
	bool expected = true;
	bool actual = object.getIsNumberRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsCancelRequired1, MxCxSmpKeyOctave )
{
	MxCxSmpKeyOctave object;
	bool expected = false;
	bool actual = object.getIsCancelRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsNumberPresent0, MxCxSmpKeyOctave )
{
	MxCxSmpKeyOctave object;
	bool expected = true;
	bool actual = object.getIsNumberPresent();
	CHECK_EQUAL( expected, actual )
	/* setter does not exist because this attribute is required */
	expected = true;
	actual = object.getIsNumberPresent();
	CHECK_EQUAL( expected, actual )
	/* setter does not exist because this attribute is required */
	expected = true;
	actual = object.getIsNumberPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsCancelPresent1, MxCxSmpKeyOctave )
{
	MxCxSmpKeyOctave object;
	bool expected = false;
	bool actual = object.getIsCancelPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsCancelPresent( true );
	expected = true;
	actual = object.getIsCancelPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsCancelPresent( false );
	expected = false;
	actual = object.getIsCancelPresent();
	CHECK_EQUAL( expected, actual )
}

/* End: IsAttributePresent -------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxCxSmpKeyOctave )
{
	MxCxSmpKeyOctave object( "booksmart", MxNumberOctave( 0 ) );
	std::string expected;
	std::string actual;
	object.setNumber( XsPositiveInteger( 1 ) );
	object.setCancel( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setIsCancelPresent( true );
	expected = "<booksmart number=\"1\" cancel=\"yes\">0</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxCxSmpKeyOctave )
{
	MxCxSmpKeyOctave object( "quiet", MxNumberOctave( 0 ) );
	std::string expected;
	std::string actual;
	object.setIsCancelPresent( true );
	object.setNumber( XsPositiveInteger( 1 ) );
	object.setCancel( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<quiet number=\"1\" cancel=\"yes\">0</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString2, MxCxSmpKeyOctave )
{
	MxCxSmpKeyOctave object( "musicxmlishard", MxNumberOctave( 0 ) );
	std::string expected;
	std::string actual;
	object.setIsCancelPresent( false );
	object.setNumber( XsPositiveInteger( 1 ) );
	object.setCancel( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<musicxmlishard number=\"1\">0</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString3, MxCxSmpKeyOctave )
{
	MxCxSmpKeyOctave object( "bishop", MxNumberOctave( 0 ) );
	std::string expected;
	std::string actual;
	object.setIsCancelPresent( false );
	object.setNumber( XsPositiveInteger( 1 ) );
	object.setCancel( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<bishop number=\"1\">0</bishop>";
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

TEST( getIsNumberDefaultDefined, MxCxSmpKeyOctave )
{
	MxCxSmpKeyOctave object;
	bool expected = false;
	bool actual = object.getIsNumberDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsCancelDefaultDefined, MxCxSmpKeyOctave )
{
	MxCxSmpKeyOctave object;
	bool expected = true;
	bool actual = object.getIsCancelDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getNumberDefaultValue, MxCxSmpKeyOctave )
{
	MxCxSmpKeyOctave object;
	XsPositiveInteger expected;
	XsPositiveInteger actual = object.getNumberDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getCancelDefaultValue, MxCxSmpKeyOctave )
{
	MxCxSmpKeyOctave object;
	MxEnumYesNo expected( lexicon::enums::YesNo::no );
	MxEnumYesNo actual = object.getCancelDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


