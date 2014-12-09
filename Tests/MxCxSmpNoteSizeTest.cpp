/** *******************************************************
  * 
  * MxCxSmpNoteSizeTest.cpp
  * Created: 2014-12-02 17:31:53
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxCxSmpNoteSize.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxCxSmpNoteSize )
{
	MxCxSmpNoteSize object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxCxSmpNoteSize )
{
	MxCxSmpNoteSize object;
	std::string expected = ( MxEnumNoteSizeType(  ) ).toString();
	std::string actual = object.getType().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValueAndElementName0, MxCxSmpNoteSize )
{
	MxCxSmpNoteSize object( "booksmart", MxNumberNonNegativeDecimal( 1 ) );
	std::string expected;
	std::string actual;
	expected = "booksmart";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "1";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxNumberNonNegativeDecimal( 0 ) );
	expected = "0";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName2, MxCxSmpNoteSize )
{
	MxCxSmpNoteSize object( "musicxmlishard", MxNumberNonNegativeDecimal( 0 ) );
	std::string expected;
	std::string actual;
	expected = "musicxmlishard";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "0";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxNumberNonNegativeDecimal( 0 ) );
	expected = "0";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName4, MxCxSmpNoteSize )
{
	MxCxSmpNoteSize object( "charlie", MxNumberNonNegativeDecimal( 0 ) );
	std::string expected;
	std::string actual;
	expected = "charlie";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "0";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxNumberNonNegativeDecimal( 0 ) );
	expected = "0";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName6, MxCxSmpNoteSize )
{
	MxCxSmpNoteSize object( "quiet", MxNumberNonNegativeDecimal( 0 ) );
	std::string expected;
	std::string actual;
	expected = "quiet";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "0";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxNumberNonNegativeDecimal( 0 ) );
	expected = "0";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName8, MxCxSmpNoteSize )
{
	MxCxSmpNoteSize object( "bishop", MxNumberNonNegativeDecimal( 0 ) );
	std::string expected;
	std::string actual;
	expected = "bishop";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "0";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxNumberNonNegativeDecimal( 0 ) );
	expected = "0";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Ctor tests with values  --------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxCxSmpNoteSize )
{
	MxCxSmpNoteSize object;
	std::string expected = "MxCxSmpNoteSize";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxCxSmpNoteSize )
{
	MxCxSmpNoteSize object;
	std::string expected = "note-size";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxCxSmpNoteSize )
{
	MxCxSmpNoteSize object;
	std::string expected = "The note-size type indicates the percentage of the regular note size to use for notes with a cue and large size as defined in the type element. The grace type is used for notes of cue size that that include a grace element. The cue type is used for all other notes with cue size, whether defined explicitly or implicitly via a cue element. The large type is used for notes of large size. The text content represent the numeric percentage. A value of 100 would be identical to the size of a regular note as defined by the music font.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setType0, MxCxSmpNoteSize )
{
	MxEnumNoteSizeType value1( lexicon::enums::NoteSizeType::large );
	MxEnumNoteSizeType value2( lexicon::enums::NoteSizeType::grace );
	CHECK( ( value1 != value2 ) )
	MxCxSmpNoteSize object;
	object.setType( value1 );
	MxEnumNoteSizeType expected = value1;
	MxEnumNoteSizeType actual = object.getType();
	CHECK_EQUAL( expected, actual )
	object.setType( value2 );
	expected = value2;
	actual = object.getType();
	CHECK_EQUAL( expected, actual )
}

/* End: SetValue Functions -------------------------------------------------- */


/* Get IsAttributeRequired -------------------------------------------------- */

TEST( getIsTypeRequired0, MxCxSmpNoteSize )
{
	MxCxSmpNoteSize object;
	bool expected = true;
	bool actual = object.getIsTypeRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsTypePresent0, MxCxSmpNoteSize )
{
	MxCxSmpNoteSize object;
	bool expected = true;
	bool actual = object.getIsTypePresent();
	CHECK_EQUAL( expected, actual )
	/* setter does not exist because this attribute is required */
	expected = true;
	actual = object.getIsTypePresent();
	CHECK_EQUAL( expected, actual )
	/* setter does not exist because this attribute is required */
	expected = true;
	actual = object.getIsTypePresent();
	CHECK_EQUAL( expected, actual )
}

/* End: IsAttributePresent -------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxCxSmpNoteSize )
{
	MxCxSmpNoteSize object( "booksmart", MxNumberNonNegativeDecimal( 0 ) );
	std::string expected;
	std::string actual;
	object.setType( MxEnumNoteSizeType( lexicon::enums::NoteSizeType::cue ) );
	expected = "<booksmart type=\"cue\">0</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxCxSmpNoteSize )
{
	MxCxSmpNoteSize object( "quiet", MxNumberNonNegativeDecimal( 0 ) );
	std::string expected;
	std::string actual;
	object.setType( MxEnumNoteSizeType( lexicon::enums::NoteSizeType::cue ) );
	expected = "<quiet type=\"cue\">0</quiet>";
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

TEST( getIsTypeDefaultDefined, MxCxSmpNoteSize )
{
	MxCxSmpNoteSize object;
	bool expected = false;
	bool actual = object.getIsTypeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getTypeDefaultValue, MxCxSmpNoteSize )
{
	MxCxSmpNoteSize object;
	MxEnumNoteSizeType expected;
	MxEnumNoteSizeType actual = object.getTypeDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


