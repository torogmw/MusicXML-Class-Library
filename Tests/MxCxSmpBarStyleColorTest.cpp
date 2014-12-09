/** *******************************************************
  * 
  * MxCxSmpBarStyleColorTest.cpp
  * Created: 2014-12-02 17:31:51
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxCxSmpBarStyleColor.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxCxSmpBarStyleColor )
{
	MxCxSmpBarStyleColor object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxCxSmpBarStyleColor )
{
	MxCxSmpBarStyleColor object;
	std::string expected = ( MxColor(  ) ).toString();
	std::string actual = object.getColor().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValueAndElementName0, MxCxSmpBarStyleColor )
{
	MxCxSmpBarStyleColor object( "booksmart", MxEnumBarStyle( lexicon::enums::BarStyle::regular ) );
	std::string expected;
	std::string actual;
	expected = "booksmart";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "regular";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumBarStyle( lexicon::enums::BarStyle::dotted ) );
	expected = "dotted";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName2, MxCxSmpBarStyleColor )
{
	MxCxSmpBarStyleColor object( "musicxmlishard", MxEnumBarStyle( lexicon::enums::BarStyle::dashed ) );
	std::string expected;
	std::string actual;
	expected = "musicxmlishard";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "dashed";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumBarStyle( lexicon::enums::BarStyle::heavy ) );
	expected = "heavy";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName4, MxCxSmpBarStyleColor )
{
	MxCxSmpBarStyleColor object( "charlie", MxEnumBarStyle( lexicon::enums::BarStyle::lightLight ) );
	std::string expected;
	std::string actual;
	expected = "charlie";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "light-light";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumBarStyle( lexicon::enums::BarStyle::lightHeavy ) );
	expected = "light-heavy";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName6, MxCxSmpBarStyleColor )
{
	MxCxSmpBarStyleColor object( "quiet", MxEnumBarStyle( lexicon::enums::BarStyle::heavyLight ) );
	std::string expected;
	std::string actual;
	expected = "quiet";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "heavy-light";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumBarStyle( lexicon::enums::BarStyle::heavyHeavy ) );
	expected = "heavy-heavy";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName8, MxCxSmpBarStyleColor )
{
	MxCxSmpBarStyleColor object( "bishop", MxEnumBarStyle( lexicon::enums::BarStyle::tick ) );
	std::string expected;
	std::string actual;
	expected = "bishop";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
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

TEST( getClassName, MxCxSmpBarStyleColor )
{
	MxCxSmpBarStyleColor object;
	std::string expected = "MxCxSmpBarStyleColor";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxCxSmpBarStyleColor )
{
	MxCxSmpBarStyleColor object;
	std::string expected = "bar-style-color";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxCxSmpBarStyleColor )
{
	MxCxSmpBarStyleColor object;
	std::string expected = "The bar-style-color type contains barline style and color information.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setColor0, MxCxSmpBarStyleColor )
{
	MxColor value1( "#12131415" );
	MxColor value2( 155, 34, 145, 192 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpBarStyleColor object;
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

TEST( getIsColorRequired0, MxCxSmpBarStyleColor )
{
	MxCxSmpBarStyleColor object;
	bool expected = false;
	bool actual = object.getIsColorRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsColorPresent0, MxCxSmpBarStyleColor )
{
	MxCxSmpBarStyleColor object;
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


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxCxSmpBarStyleColor )
{
	MxCxSmpBarStyleColor object( "booksmart", MxEnumBarStyle( lexicon::enums::BarStyle::none ) );
	std::string expected;
	std::string actual;
	object.setColor( MxColor( "#F8F7F6" ) );
	object.setIsColorPresent( true );
	expected = "<booksmart color=\"#F8F7F6\">none</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxCxSmpBarStyleColor )
{
	MxCxSmpBarStyleColor object( "quiet", MxEnumBarStyle( lexicon::enums::BarStyle::none ) );
	std::string expected;
	std::string actual;
	object.setIsColorPresent( false );
	object.setColor( MxColor( "#F9FAF9F8" ) );
	expected = "<quiet>none</quiet>";
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

TEST( getIsColorDefaultDefined, MxCxSmpBarStyleColor )
{
	MxCxSmpBarStyleColor object;
	bool expected = false;
	bool actual = object.getIsColorDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getColorDefaultValue, MxCxSmpBarStyleColor )
{
	MxCxSmpBarStyleColor object;
	MxColor expected;
	MxColor actual = object.getColorDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


