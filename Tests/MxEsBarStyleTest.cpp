/** *******************************************************
  * 
  * MxEsBarStyleTest.cpp
  * Created: 2014-12-05 20:57:50
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxEsBarStyle.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxEsBarStyle )
{
	MxEsBarStyle object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxEsBarStyle )
{
	MxEsBarStyle object;
	std::string expected = ( MxColor(  ) ).toString();
	std::string actual = object.getColor().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* minOccurs maxOccurs ------------------------------------------------------ */

TEST( getMinOccurs, MxEsBarStyle )
{
	MxEsBarStyle object;
	int expected = 0;
	int actual = object.getMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getMaxOccurs, MxEsBarStyle )
{
	MxEsBarStyle object;
	int expected = 1;
	int actual = object.getMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsMaxOccursUnbounded, MxEsBarStyle )
{
	MxEsBarStyle object;
	bool expected = false;
	bool actual = object.getIsMaxOccursUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: minOccurs maxOccurs ------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValue0, MxEsBarStyle )
{
	MxEsBarStyle object( lexicon::enums::BarStyle::regular );
	std::string expected;
	std::string actual;
	expected = "regular";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumBarStyle( lexicon::enums::BarStyle::dotted ) );
	expected = "dotted";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2, MxEsBarStyle )
{
	MxEsBarStyle object( lexicon::enums::BarStyle::dashed );
	std::string expected;
	std::string actual;
	expected = "dashed";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumBarStyle( lexicon::enums::BarStyle::heavy ) );
	expected = "heavy";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue4, MxEsBarStyle )
{
	MxEsBarStyle object( lexicon::enums::BarStyle::lightLight );
	std::string expected;
	std::string actual;
	expected = "light-light";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumBarStyle( lexicon::enums::BarStyle::lightHeavy ) );
	expected = "light-heavy";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue6, MxEsBarStyle )
{
	MxEsBarStyle object( lexicon::enums::BarStyle::heavyLight );
	std::string expected;
	std::string actual;
	expected = "heavy-light";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumBarStyle( lexicon::enums::BarStyle::heavyHeavy ) );
	expected = "heavy-heavy";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue8, MxEsBarStyle )
{
	MxEsBarStyle object( lexicon::enums::BarStyle::tick );
	std::string expected;
	std::string actual;
	expected = "tick";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumBarStyle( lexicon::enums::BarStyle::short_ ) );
	expected = "short";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Ctor tests with values  --------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxEsBarStyle )
{
	MxEsBarStyle object;
	std::string expected = "MxEsBarStyle";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxEsBarStyle )
{
	MxEsBarStyle object;
	std::string expected = "bar-style";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxEsBarStyle )
{
	MxEsBarStyle object;
	std::string expected = "( no documentation )";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setColor0, MxEsBarStyle )
{
	MxColor value1( "#12131415" );
	MxColor value2( 155, 34, 145, 192 );
	CHECK( ( value1 != value2 ) )
	MxEsBarStyle object;
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

TEST( getIsColorRequired0, MxEsBarStyle )
{
	MxEsBarStyle object;
	bool expected = false;
	bool actual = object.getIsColorRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsColorPresent0, MxEsBarStyle )
{
	MxEsBarStyle object;
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

TEST( getIsColorDefaultDefined, MxEsBarStyle )
{
	MxEsBarStyle object;
	bool expected = false;
	bool actual = object.getIsColorDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getColorDefaultValue, MxEsBarStyle )
{
	MxEsBarStyle object;
	MxColor expected;
	MxColor actual = object.getColorDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxEsBarStyle )
{
	MxEsBarStyle object( lexicon::enums::BarStyle::none );
	std::string expected;
	std::string actual;
	object.setColor( MxColor( "#C8C7C6" ) );
	object.setIsColorPresent( true );
	expected = "<bar-style color=\"#C8C7C6\">none</bar-style>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxEsBarStyle )
{
	MxEsBarStyle object( lexicon::enums::BarStyle::none );
	std::string expected;
	std::string actual;
	object.setIsColorPresent( false );
	object.setColor( MxColor( "#C9CAC9C8" ) );
	expected = "<bar-style>none</bar-style>";
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


