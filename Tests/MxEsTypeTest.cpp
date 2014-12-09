/** *******************************************************
  * 
  * MxEsTypeTest.cpp
  * Created: 2014-12-05 20:57:55
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxEsType.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxEsType )
{
	MxEsType object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxEsType )
{
	MxEsType object;
	std::string expected = ( MxEnumSymbolSize( lexicon::enums::SymbolSize::full ) ).toString();
	std::string actual = object.getSize().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* minOccurs maxOccurs ------------------------------------------------------ */

TEST( getMinOccurs, MxEsType )
{
	MxEsType object;
	int expected = 0;
	int actual = object.getMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getMaxOccurs, MxEsType )
{
	MxEsType object;
	int expected = 1;
	int actual = object.getMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsMaxOccursUnbounded, MxEsType )
{
	MxEsType object;
	bool expected = false;
	bool actual = object.getIsMaxOccursUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: minOccurs maxOccurs ------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValue0, MxEsType )
{
	MxEsType object( lexicon::enums::NoteTypeValue::n1024th );
	std::string expected;
	std::string actual;
	expected = "1024th";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumNoteTypeValue( lexicon::enums::NoteTypeValue::n512th ) );
	expected = "512th";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2, MxEsType )
{
	MxEsType object( lexicon::enums::NoteTypeValue::n256th );
	std::string expected;
	std::string actual;
	expected = "256th";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumNoteTypeValue( lexicon::enums::NoteTypeValue::n128th ) );
	expected = "128th";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue4, MxEsType )
{
	MxEsType object( lexicon::enums::NoteTypeValue::n64th );
	std::string expected;
	std::string actual;
	expected = "64th";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumNoteTypeValue( lexicon::enums::NoteTypeValue::n32nd ) );
	expected = "32nd";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue6, MxEsType )
{
	MxEsType object( lexicon::enums::NoteTypeValue::n16th );
	std::string expected;
	std::string actual;
	expected = "16th";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumNoteTypeValue( lexicon::enums::NoteTypeValue::eighth ) );
	expected = "eighth";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue8, MxEsType )
{
	MxEsType object( lexicon::enums::NoteTypeValue::quarter );
	std::string expected;
	std::string actual;
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

TEST( getClassName, MxEsType )
{
	MxEsType object;
	std::string expected = "MxEsType";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxEsType )
{
	MxEsType object;
	std::string expected = "type";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxEsType )
{
	MxEsType object;
	std::string expected = "( no documentation )";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setSize0, MxEsType )
{
	MxEnumSymbolSize value1( lexicon::enums::SymbolSize::large );
	MxEnumSymbolSize value2( lexicon::enums::SymbolSize::cue );
	CHECK( ( value1 != value2 ) )
	MxEsType object;
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

TEST( getIsSizeRequired0, MxEsType )
{
	MxEsType object;
	bool expected = false;
	bool actual = object.getIsSizeRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsSizePresent0, MxEsType )
{
	MxEsType object;
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


/* Is Default Defined ------------------------------------------------------- */

TEST( getIsSizeDefaultDefined, MxEsType )
{
	MxEsType object;
	bool expected = true;
	bool actual = object.getIsSizeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getSizeDefaultValue, MxEsType )
{
	MxEsType object;
	MxEnumSymbolSize expected( lexicon::enums::SymbolSize::full );
	MxEnumSymbolSize actual = object.getSizeDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxEsType )
{
	MxEsType object( lexicon::enums::NoteTypeValue::whole );
	std::string expected;
	std::string actual;
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::full ) );
	object.setIsSizePresent( true );
	expected = "<type size=\"full\">whole</type>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxEsType )
{
	MxEsType object( lexicon::enums::NoteTypeValue::whole );
	std::string expected;
	std::string actual;
	object.setIsSizePresent( false );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::full ) );
	expected = "<type>whole</type>";
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


