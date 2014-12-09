/** *******************************************************
  * 
  * MxCxEmptyBarreTest.cpp
  * Created: 2014-12-03 16:31:28
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxCxEmptyBarre.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxCxEmptyBarre )
{
	MxCxEmptyBarre object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxCxEmptyBarre )
{
	MxCxEmptyBarre object;
	std::string expected = ( MxEnumStartStop(  ) ).toString();
	std::string actual = object.getType().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues1, MxCxEmptyBarre )
{
	MxCxEmptyBarre object;
	std::string expected = ( MxColor(  ) ).toString();
	std::string actual = object.getColor().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValueAndElementName0, MxCxEmptyBarre )
{
	MxCxEmptyBarre object( "booksmart" );
	std::string expected;
	std::string actual;
	expected = "booksmart";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName2, MxCxEmptyBarre )
{
	MxCxEmptyBarre object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	expected = "musicxmlishard";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName4, MxCxEmptyBarre )
{
	MxCxEmptyBarre object( "charlie" );
	std::string expected;
	std::string actual;
	expected = "charlie";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName6, MxCxEmptyBarre )
{
	MxCxEmptyBarre object( "quiet" );
	std::string expected;
	std::string actual;
	expected = "quiet";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName8, MxCxEmptyBarre )
{
	MxCxEmptyBarre object( "bishop" );
	std::string expected;
	std::string actual;
	expected = "bishop";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}

/* End: Ctor tests with values  --------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxCxEmptyBarre )
{
	MxCxEmptyBarre object;
	std::string expected = "MxCxEmptyBarre";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxCxEmptyBarre )
{
	MxCxEmptyBarre object;
	std::string expected = "barre";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxCxEmptyBarre )
{
	MxCxEmptyBarre object;
	std::string expected = "The barre element indicates placing a finger over multiple strings on a single fret. The type is 'start' for the lowest pitched string (e.g., the string with the highest MusicXML number) and is 'stop' for the highest pitched string.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setType0, MxCxEmptyBarre )
{
	MxEnumStartStop value1( lexicon::enums::StartStop::stop );
	MxEnumStartStop value2( lexicon::enums::StartStop::start );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyBarre object;
	object.setType( value1 );
	MxEnumStartStop expected = value1;
	MxEnumStartStop actual = object.getType();
	CHECK_EQUAL( expected, actual )
	object.setType( value2 );
	expected = value2;
	actual = object.getType();
	CHECK_EQUAL( expected, actual )
}
TEST( setColor1, MxCxEmptyBarre )
{
	MxColor value1( "#12131415" );
	MxColor value2( 155, 34, 145, 192 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyBarre object;
	object.setColor( value1 );
	MxColor expected = value1;
	MxColor actual = object.getColor();
	CHECK_EQUAL( expected, actual )
	object.setColor( value2 );
	expected = value2;
	actual = object.getColor();
	CHECK_EQUAL( expected, actual )
}

/* End: SetValue Functions -------------------------------------------------- */


/* Get IsAttributeRequired -------------------------------------------------- */

TEST( getIsTypeRequired0, MxCxEmptyBarre )
{
	MxCxEmptyBarre object;
	bool expected = true;
	bool actual = object.getIsTypeRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorRequired1, MxCxEmptyBarre )
{
	MxCxEmptyBarre object;
	bool expected = false;
	bool actual = object.getIsColorRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsTypePresent0, MxCxEmptyBarre )
{
	MxCxEmptyBarre object;
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
TEST( getIsColorPresent1, MxCxEmptyBarre )
{
	MxCxEmptyBarre object;
	bool expected = false;
	bool actual = object.getIsColorPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsColorPresent( true );
	expected = true;
	actual = object.getIsColorPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsColorPresent( false );
	expected = false;
	actual = object.getIsColorPresent();
	CHECK_EQUAL( expected, actual )
}

/* End: IsAttributePresent -------------------------------------------------- */


/* Is Default Defined ------------------------------------------------------- */

TEST( getIsTypeDefaultDefined, MxCxEmptyBarre )
{
	MxCxEmptyBarre object;
	bool expected = false;
	bool actual = object.getIsTypeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorDefaultDefined, MxCxEmptyBarre )
{
	MxCxEmptyBarre object;
	bool expected = false;
	bool actual = object.getIsColorDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getTypeDefaultValue, MxCxEmptyBarre )
{
	MxCxEmptyBarre object;
	MxEnumStartStop expected;
	MxEnumStartStop actual = object.getTypeDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getColorDefaultValue, MxCxEmptyBarre )
{
	MxCxEmptyBarre object;
	MxColor expected;
	MxColor actual = object.getColorDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxCxEmptyBarre )
{
	MxCxEmptyBarre object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setColor( MxColor( "#888786" ) );
	object.setIsColorPresent( true );
	expected = "<booksmart type=\"start\" color=\"#888786\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxCxEmptyBarre )
{
	MxCxEmptyBarre object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setColor( MxColor( "#898A8988" ) );
	expected = "<quiet type=\"start\" color=\"#898A8988\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString2, MxCxEmptyBarre )
{
	MxCxEmptyBarre object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setColor( MxColor( "#8C8B8A" ) );
	expected = "<musicxmlishard type=\"start\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString3, MxCxEmptyBarre )
{
	MxCxEmptyBarre object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStop( lexicon::enums::StartStop::start ) );
	object.setColor( MxColor( "#8D8E8D8C" ) );
	expected = "<bishop type=\"start\"/>";
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


