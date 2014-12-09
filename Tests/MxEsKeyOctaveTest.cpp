/** *******************************************************
  * 
  * MxEsKeyOctaveTest.cpp
  * Created: 2014-12-05 20:57:50
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxEsKeyOctave.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxEsKeyOctave )
{
	MxEsKeyOctave object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxEsKeyOctave )
{
	MxEsKeyOctave object;
	std::string expected = ( XsPositiveInteger(  ) ).toString();
	std::string actual = object.getNumber().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues1, MxEsKeyOctave )
{
	MxEsKeyOctave object;
	std::string expected = ( MxEnumYesNo( lexicon::enums::YesNo::no ) ).toString();
	std::string actual = object.getCancel().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* minOccurs maxOccurs ------------------------------------------------------ */

TEST( getMinOccurs, MxEsKeyOctave )
{
	MxEsKeyOctave object;
	int expected = 0;
	int actual = object.getMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getMaxOccurs, MxEsKeyOctave )
{
	MxEsKeyOctave object;
	int expected = 32767;
	int actual = object.getMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsMaxOccursUnbounded, MxEsKeyOctave )
{
	MxEsKeyOctave object;
	bool expected = true;
	bool actual = object.getIsMaxOccursUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: minOccurs maxOccurs ------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValue0, MxEsKeyOctave )
{
	MxEsKeyOctave object( 1 );
	std::string expected;
	std::string actual;
	expected = "1";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxNumberOctave( 0 ) );
	expected = "0";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2, MxEsKeyOctave )
{
	MxEsKeyOctave object( 0 );
	std::string expected;
	std::string actual;
	expected = "0";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxNumberOctave( 0 ) );
	expected = "0";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue4, MxEsKeyOctave )
{
	MxEsKeyOctave object( 0 );
	std::string expected;
	std::string actual;
	expected = "0";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxNumberOctave( 0 ) );
	expected = "0";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue6, MxEsKeyOctave )
{
	MxEsKeyOctave object( 0 );
	std::string expected;
	std::string actual;
	expected = "0";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxNumberOctave( 0 ) );
	expected = "0";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue8, MxEsKeyOctave )
{
	MxEsKeyOctave object( 0 );
	std::string expected;
	std::string actual;
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

TEST( getClassName, MxEsKeyOctave )
{
	MxEsKeyOctave object;
	std::string expected = "MxEsKeyOctave";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxEsKeyOctave )
{
	MxEsKeyOctave object;
	std::string expected = "key-octave";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxEsKeyOctave )
{
	MxEsKeyOctave object;
	std::string expected = "The optional list of key-octave elements is used to specify in which octave each element of the key signature appears.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setNumber0, MxEsKeyOctave )
{
	XsPositiveInteger value1( 1 );
	XsPositiveInteger value2( 2 );
	CHECK( ( value1 != value2 ) )
	MxEsKeyOctave object;
	object.setNumber( value1 );
	XsPositiveInteger expected = value1;
	XsPositiveInteger actual = object.getNumber();
	CHECK_EQUAL( expected, actual )
	object.setNumber( value2 );
	expected = value2;
	actual = object.getNumber();
	CHECK_EQUAL( expected, actual )
}
TEST( setCancel1, MxEsKeyOctave )
{
	MxEnumYesNo value1( lexicon::enums::YesNo::no );
	MxEnumYesNo value2( lexicon::enums::YesNo::yes );
	CHECK( ( value1 != value2 ) )
	MxEsKeyOctave object;
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

TEST( getIsNumberRequired0, MxEsKeyOctave )
{
	MxEsKeyOctave object;
	bool expected = true;
	bool actual = object.getIsNumberRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsCancelRequired1, MxEsKeyOctave )
{
	MxEsKeyOctave object;
	bool expected = false;
	bool actual = object.getIsCancelRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsNumberPresent0, MxEsKeyOctave )
{
	MxEsKeyOctave object;
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
TEST( getIsCancelPresent1, MxEsKeyOctave )
{
	MxEsKeyOctave object;
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


/* Is Default Defined ------------------------------------------------------- */

TEST( getIsNumberDefaultDefined, MxEsKeyOctave )
{
	MxEsKeyOctave object;
	bool expected = false;
	bool actual = object.getIsNumberDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsCancelDefaultDefined, MxEsKeyOctave )
{
	MxEsKeyOctave object;
	bool expected = true;
	bool actual = object.getIsCancelDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getNumberDefaultValue, MxEsKeyOctave )
{
	MxEsKeyOctave object;
	XsPositiveInteger expected;
	XsPositiveInteger actual = object.getNumberDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getCancelDefaultValue, MxEsKeyOctave )
{
	MxEsKeyOctave object;
	MxEnumYesNo expected( lexicon::enums::YesNo::no );
	MxEnumYesNo actual = object.getCancelDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxEsKeyOctave )
{
	MxEsKeyOctave object( 0 );
	std::string expected;
	std::string actual;
	object.setNumber( XsPositiveInteger( 1 ) );
	object.setCancel( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setIsCancelPresent( true );
	expected = "<key-octave number=\"1\" cancel=\"yes\">0</key-octave>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxEsKeyOctave )
{
	MxEsKeyOctave object( 0 );
	std::string expected;
	std::string actual;
	object.setIsCancelPresent( true );
	object.setNumber( XsPositiveInteger( 1 ) );
	object.setCancel( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<key-octave number=\"1\" cancel=\"yes\">0</key-octave>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString2, MxEsKeyOctave )
{
	MxEsKeyOctave object( 0 );
	std::string expected;
	std::string actual;
	object.setIsCancelPresent( false );
	object.setNumber( XsPositiveInteger( 1 ) );
	object.setCancel( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<key-octave number=\"1\">0</key-octave>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString3, MxEsKeyOctave )
{
	MxEsKeyOctave object( 0 );
	std::string expected;
	std::string actual;
	object.setIsCancelPresent( false );
	object.setNumber( XsPositiveInteger( 1 ) );
	object.setCancel( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	expected = "<key-octave number=\"1\">0</key-octave>";
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


