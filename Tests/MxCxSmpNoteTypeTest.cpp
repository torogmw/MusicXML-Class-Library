/** *******************************************************
  * 
  * MxCxSmpNoteTypeTest.cpp
  * Created: 2014-12-02 17:31:54
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxCxSmpNoteType.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxCxSmpNoteType )
{
	MxCxSmpNoteType object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxCxSmpNoteType )
{
	MxCxSmpNoteType object;
	std::string expected = ( MxEnumSymbolSize( lexicon::enums::SymbolSize::full ) ).toString();
	std::string actual = object.getSize().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValueAndElementName0, MxCxSmpNoteType )
{
	MxCxSmpNoteType object( "booksmart", MxEnumNoteTypeValue( lexicon::enums::NoteTypeValue::n1024th ) );
	std::string expected;
	std::string actual;
	expected = "booksmart";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "1024th";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumNoteTypeValue( lexicon::enums::NoteTypeValue::n512th ) );
	expected = "512th";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName2, MxCxSmpNoteType )
{
	MxCxSmpNoteType object( "musicxmlishard", MxEnumNoteTypeValue( lexicon::enums::NoteTypeValue::n256th ) );
	std::string expected;
	std::string actual;
	expected = "musicxmlishard";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "256th";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumNoteTypeValue( lexicon::enums::NoteTypeValue::n128th ) );
	expected = "128th";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName4, MxCxSmpNoteType )
{
	MxCxSmpNoteType object( "charlie", MxEnumNoteTypeValue( lexicon::enums::NoteTypeValue::n64th ) );
	std::string expected;
	std::string actual;
	expected = "charlie";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "64th";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumNoteTypeValue( lexicon::enums::NoteTypeValue::n32nd ) );
	expected = "32nd";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName6, MxCxSmpNoteType )
{
	MxCxSmpNoteType object( "quiet", MxEnumNoteTypeValue( lexicon::enums::NoteTypeValue::n16th ) );
	std::string expected;
	std::string actual;
	expected = "quiet";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "16th";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumNoteTypeValue( lexicon::enums::NoteTypeValue::eighth ) );
	expected = "eighth";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName8, MxCxSmpNoteType )
{
	MxCxSmpNoteType object( "bishop", MxEnumNoteTypeValue( lexicon::enums::NoteTypeValue::quarter ) );
	std::string expected;
	std::string actual;
	expected = "bishop";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "quarter";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumNoteTypeValue( lexicon::enums::NoteTypeValue::half ) );
	expected = "half";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Ctor tests with values  --------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxCxSmpNoteType )
{
	MxCxSmpNoteType object;
	std::string expected = "MxCxSmpNoteType";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxCxSmpNoteType )
{
	MxCxSmpNoteType object;
	std::string expected = "note-type";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxCxSmpNoteType )
{
	MxCxSmpNoteType object;
	std::string expected = "The note-type type indicates the graphic note type. Values range from 256th to long. The size attribute indicates full, cue, or large size, with full the default for regular notes and cue the default for cue and grace notes.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setSize0, MxCxSmpNoteType )
{
	MxEnumSymbolSize value1( lexicon::enums::SymbolSize::large );
	MxEnumSymbolSize value2( lexicon::enums::SymbolSize::cue );
	CHECK( ( value1 != value2 ) )
	MxCxSmpNoteType object;
	object.setSize( value1 );
	MxEnumSymbolSize expected = value1;
	MxEnumSymbolSize actual = object.getSize();
	CHECK_EQUAL( expected, actual )
	object.setSize( value2 );
	expected = value2;
	actual = object.getSize();
	CHECK_EQUAL( expected, actual )
}

/* End: SetValue Functions -------------------------------------------------- */


/* Get IsAttributeRequired -------------------------------------------------- */

TEST( getIsSizeRequired0, MxCxSmpNoteType )
{
	MxCxSmpNoteType object;
	bool expected = false;
	bool actual = object.getIsSizeRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsSizePresent0, MxCxSmpNoteType )
{
	MxCxSmpNoteType object;
	bool expected = false;
	bool actual = object.getIsSizePresent();
	CHECK_EQUAL( expected, actual )
	object.setIsSizePresent( true );
	expected = true;
	actual = object.getIsSizePresent();
	CHECK_EQUAL( expected, actual )
	object.setIsSizePresent( false );
	expected = false;
	actual = object.getIsSizePresent();
	CHECK_EQUAL( expected, actual )
}

/* End: IsAttributePresent -------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxCxSmpNoteType )
{
	MxCxSmpNoteType object( "booksmart", MxEnumNoteTypeValue( lexicon::enums::NoteTypeValue::whole ) );
	std::string expected;
	std::string actual;
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::full ) );
	object.setIsSizePresent( true );
	expected = "<booksmart size=\"full\">whole</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxCxSmpNoteType )
{
	MxCxSmpNoteType object( "quiet", MxEnumNoteTypeValue( lexicon::enums::NoteTypeValue::whole ) );
	std::string expected;
	std::string actual;
	object.setIsSizePresent( false );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::full ) );
	expected = "<quiet>whole</quiet>";
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

TEST( getIsSizeDefaultDefined, MxCxSmpNoteType )
{
	MxCxSmpNoteType object;
	bool expected = true;
	bool actual = object.getIsSizeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getSizeDefaultValue, MxCxSmpNoteType )
{
	MxCxSmpNoteType object;
	MxEnumSymbolSize expected( lexicon::enums::SymbolSize::full );
	MxEnumSymbolSize actual = object.getSizeDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


