/** *******************************************************
  * 
  * MxEmSlashTypeTest.cpp
  * Created: 2014-12-07 16:26:32
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxEmSlashType.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxEmSlashType )
{
	MxEmSlashType object;
	CHECK( true )
}

/* End: Constructor --------------------------------------------------------- */


/* minOccurs maxOccurs ------------------------------------------------------ */

TEST( getMinOccurs, MxEmSlashType )
{
	MxEmSlashType object;
	int expected = 1;
	int actual = object.getMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getMaxOccurs, MxEmSlashType )
{
	MxEmSlashType object;
	int expected = 1;
	int actual = object.getMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsMaxOccursUnbounded, MxEmSlashType )
{
	MxEmSlashType object;
	bool expected = false;
	bool actual = object.getIsMaxOccursUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: minOccurs maxOccurs ------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValue0, MxEmSlashType )
{
	MxEmSlashType object( lexicon::enums::NoteTypeValue::n1024th );
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
TEST( ctorValue2, MxEmSlashType )
{
	MxEmSlashType object( lexicon::enums::NoteTypeValue::n256th );
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
TEST( ctorValue4, MxEmSlashType )
{
	MxEmSlashType object( lexicon::enums::NoteTypeValue::n64th );
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
TEST( ctorValue6, MxEmSlashType )
{
	MxEmSlashType object( lexicon::enums::NoteTypeValue::n16th );
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
TEST( ctorValue8, MxEmSlashType )
{
	MxEmSlashType object( lexicon::enums::NoteTypeValue::quarter );
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

TEST( getClassName, MxEmSlashType )
{
	MxEmSlashType object;
	std::string expected = "MxEmSlashType";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxEmSlashType )
{
	MxEmSlashType object;
	std::string expected = "slash-type";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxEmSlashType )
{
	MxEmSlashType object;
	std::string expected = "The slash-type element indicates the graphical note type to use for the display of repetition marks.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxEmSlashType )
{
	MxEmSlashType object( lexicon::enums::NoteTypeValue::whole );
	std::string expected;
	std::string actual;
	expected = "<slash-type>whole</slash-type>";
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


