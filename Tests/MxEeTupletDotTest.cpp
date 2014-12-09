/** *******************************************************
  * 
  * MxEeTupletDotTest.cpp
  * Created: 2014-12-05 16:47:07
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxEeTupletDot.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxEeTupletDot )
{
	MxEeTupletDot object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxEeTupletDot )
{
	MxEeTupletDot object;
	std::string expected = ( MxCommaSeparatedText(  ) ).toString();
	std::string actual = object.getFontFamily().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues1, MxEeTupletDot )
{
	MxEeTupletDot object;
	std::string expected = ( MxEnumFontStyle(  ) ).toString();
	std::string actual = object.getFontStyle().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues2, MxEeTupletDot )
{
	MxEeTupletDot object;
	std::string expected = ( MxFontSize(  ) ).toString();
	std::string actual = object.getFontSize().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues3, MxEeTupletDot )
{
	MxEeTupletDot object;
	std::string expected = ( MxEnumFontWeight(  ) ).toString();
	std::string actual = object.getFontWeight().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues4, MxEeTupletDot )
{
	MxEeTupletDot object;
	std::string expected = ( MxColor(  ) ).toString();
	std::string actual = object.getColor().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* minOccurs maxOccurs ------------------------------------------------------ */

TEST( getMinOccurs, MxEeTupletDot )
{
	MxEeTupletDot object;
	int expected = 0;
	int actual = object.getMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getMaxOccurs, MxEeTupletDot )
{
	MxEeTupletDot object;
	int expected = 32767;
	int actual = object.getMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsMaxOccursUnbounded, MxEeTupletDot )
{
	MxEeTupletDot object;
	bool expected = true;
	bool actual = object.getIsMaxOccursUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: minOccurs maxOccurs ------------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxEeTupletDot )
{
	MxEeTupletDot object;
	std::string expected = "MxEeTupletDot";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxEeTupletDot )
{
	MxEeTupletDot object;
	std::string expected = "tuplet-dot";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxEeTupletDot )
{
	MxEeTupletDot object;
	std::string expected = "( no documentation )";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setFontFamily0, MxEeTupletDot )
{
	MxCommaSeparatedText value1( "ABC,UTF" );
	MxCommaSeparatedText value2( "XYZ,CRV" );
	CHECK( ( value1 != value2 ) )
	MxEeTupletDot object;
	object.setFontFamily( value1 );
	MxCommaSeparatedText expected = value1;
	MxCommaSeparatedText actual = object.getFontFamily();
	CHECK_EQUAL( expected, actual )
	object.setFontFamily( value2 );
	expected = value2;
	actual = object.getFontFamily();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontStyle1, MxEeTupletDot )
{
	MxEnumFontStyle value1( lexicon::enums::FontStyle::italic );
	MxEnumFontStyle value2( lexicon::enums::FontStyle::normal );
	CHECK( ( value1 != value2 ) )
	MxEeTupletDot object;
	object.setFontStyle( value1 );
	MxEnumFontStyle expected = value1;
	MxEnumFontStyle actual = object.getFontStyle();
	CHECK_EQUAL( expected, actual )
	object.setFontStyle( value2 );
	expected = value2;
	actual = object.getFontStyle();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontSize2, MxEeTupletDot )
{
	MxFontSize value1( 0.1L );
	MxFontSize value2( "small" );
	CHECK( ( value1 != value2 ) )
	MxEeTupletDot object;
	object.setFontSize( value1 );
	MxFontSize expected = value1;
	MxFontSize actual = object.getFontSize();
	CHECK_EQUAL( expected, actual )
	object.setFontSize( value2 );
	expected = value2;
	actual = object.getFontSize();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontWeight3, MxEeTupletDot )
{
	MxEnumFontWeight value1( lexicon::enums::FontWeight::bold );
	MxEnumFontWeight value2( lexicon::enums::FontWeight::normal );
	CHECK( ( value1 != value2 ) )
	MxEeTupletDot object;
	object.setFontWeight( value1 );
	MxEnumFontWeight expected = value1;
	MxEnumFontWeight actual = object.getFontWeight();
	CHECK_EQUAL( expected, actual )
	object.setFontWeight( value2 );
	expected = value2;
	actual = object.getFontWeight();
	CHECK_EQUAL( expected, actual )
}
TEST( setColor4, MxEeTupletDot )
{
	MxColor value1( "#12131415" );
	MxColor value2( 155, 34, 145, 192 );
	CHECK( ( value1 != value2 ) )
	MxEeTupletDot object;
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

TEST( getIsFontFamilyRequired0, MxEeTupletDot )
{
	MxEeTupletDot object;
	bool expected = false;
	bool actual = object.getIsFontFamilyRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontStyleRequired1, MxEeTupletDot )
{
	MxEeTupletDot object;
	bool expected = false;
	bool actual = object.getIsFontStyleRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontSizeRequired2, MxEeTupletDot )
{
	MxEeTupletDot object;
	bool expected = false;
	bool actual = object.getIsFontSizeRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontWeightRequired3, MxEeTupletDot )
{
	MxEeTupletDot object;
	bool expected = false;
	bool actual = object.getIsFontWeightRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorRequired4, MxEeTupletDot )
{
	MxEeTupletDot object;
	bool expected = false;
	bool actual = object.getIsColorRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsFontFamilyPresent0, MxEeTupletDot )
{
	MxEeTupletDot object;
	bool expected = false;
	bool actual = object.getIsFontFamilyPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsFontFamilyPresent( true );
	expected = true;
	actual = object.getIsFontFamilyPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsFontFamilyPresent( false );
	expected = false;
	actual = object.getIsFontFamilyPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontStylePresent1, MxEeTupletDot )
{
	MxEeTupletDot object;
	bool expected = false;
	bool actual = object.getIsFontStylePresent();
	CHECK_EQUAL( expected, actual )
	object.setIsFontStylePresent( true );
	expected = true;
	actual = object.getIsFontStylePresent();
	CHECK_EQUAL( expected, actual )
	object.setIsFontStylePresent( false );
	expected = false;
	actual = object.getIsFontStylePresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontSizePresent2, MxEeTupletDot )
{
	MxEeTupletDot object;
	bool expected = false;
	bool actual = object.getIsFontSizePresent();
	CHECK_EQUAL( expected, actual )
	object.setIsFontSizePresent( true );
	expected = true;
	actual = object.getIsFontSizePresent();
	CHECK_EQUAL( expected, actual )
	object.setIsFontSizePresent( false );
	expected = false;
	actual = object.getIsFontSizePresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontWeightPresent3, MxEeTupletDot )
{
	MxEeTupletDot object;
	bool expected = false;
	bool actual = object.getIsFontWeightPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsFontWeightPresent( true );
	expected = true;
	actual = object.getIsFontWeightPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsFontWeightPresent( false );
	expected = false;
	actual = object.getIsFontWeightPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorPresent4, MxEeTupletDot )
{
	MxEeTupletDot object;
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

TEST( getIsFontFamilyDefaultDefined, MxEeTupletDot )
{
	MxEeTupletDot object;
	bool expected = false;
	bool actual = object.getIsFontFamilyDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontStyleDefaultDefined, MxEeTupletDot )
{
	MxEeTupletDot object;
	bool expected = false;
	bool actual = object.getIsFontStyleDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontSizeDefaultDefined, MxEeTupletDot )
{
	MxEeTupletDot object;
	bool expected = false;
	bool actual = object.getIsFontSizeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontWeightDefaultDefined, MxEeTupletDot )
{
	MxEeTupletDot object;
	bool expected = false;
	bool actual = object.getIsFontWeightDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorDefaultDefined, MxEeTupletDot )
{
	MxEeTupletDot object;
	bool expected = false;
	bool actual = object.getIsColorDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getFontFamilyDefaultValue, MxEeTupletDot )
{
	MxEeTupletDot object;
	MxCommaSeparatedText expected;
	MxCommaSeparatedText actual = object.getFontFamilyDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontStyleDefaultValue, MxEeTupletDot )
{
	MxEeTupletDot object;
	MxEnumFontStyle expected;
	MxEnumFontStyle actual = object.getFontStyleDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontSizeDefaultValue, MxEeTupletDot )
{
	MxEeTupletDot object;
	MxFontSize expected;
	MxFontSize actual = object.getFontSizeDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontWeightDefaultValue, MxEeTupletDot )
{
	MxEeTupletDot object;
	MxEnumFontWeight expected;
	MxEnumFontWeight actual = object.getFontWeightDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getColorDefaultValue, MxEeTupletDot )
{
	MxEeTupletDot object;
	MxColor expected;
	MxColor actual = object.getColorDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxEeTupletDot )
{
	MxEeTupletDot object;
	std::string expected;
	std::string actual;
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#646362" ) );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	expected = "<tuplet-dot font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#646362\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxEeTupletDot )
{
	MxEeTupletDot object;
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#65666564" ) );
	expected = "<tuplet-dot font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#65666564\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString2, MxEeTupletDot )
{
	MxEeTupletDot object;
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#686766" ) );
	expected = "<tuplet-dot font-family=\"DEF\" font-size=\"large\" font-weight=\"normal\" color=\"#686766\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString3, MxEeTupletDot )
{
	MxEeTupletDot object;
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#696A6968" ) );
	expected = "<tuplet-dot font-weight=\"bold\" color=\"#696A6968\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString4, MxEeTupletDot )
{
	MxEeTupletDot object;
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#6C6B6A" ) );
	expected = "<tuplet-dot font-family=\"ABC\" font-style=\"normal\" color=\"#6C6B6A\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString5, MxEeTupletDot )
{
	MxEeTupletDot object;
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#6D6E6D6C" ) );
	expected = "<tuplet-dot font-style=\"italic\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString6, MxEeTupletDot )
{
	MxEeTupletDot object;
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#706F6E" ) );
	expected = "<tuplet-dot font-family=\"XYZ\" font-size=\"large\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString7, MxEeTupletDot )
{
	MxEeTupletDot object;
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#71727170" ) );
	expected = "<tuplet-dot font-size=\"1.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString8, MxEeTupletDot )
{
	MxEeTupletDot object;
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#747372" ) );
	expected = "<tuplet-dot font-family=\"DEF\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString9, MxEeTupletDot )
{
	MxEeTupletDot object;
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#75767574" ) );
	expected = "<tuplet-dot font-style=\"italic\" font-weight=\"bold\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString10, MxEeTupletDot )
{
	MxEeTupletDot object;
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#787776" ) );
	expected = "<tuplet-dot font-family=\"ABC\" font-weight=\"normal\" color=\"#787776\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString11, MxEeTupletDot )
{
	MxEeTupletDot object;
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#797A7978" ) );
	expected = "<tuplet-dot font-weight=\"bold\" color=\"#797A7978\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString12, MxEeTupletDot )
{
	MxEeTupletDot object;
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#7C7B7A" ) );
	expected = "<tuplet-dot font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\" color=\"#7C7B7A\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString13, MxEeTupletDot )
{
	MxEeTupletDot object;
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#7D7E7D7C" ) );
	expected = "<tuplet-dot font-style=\"italic\" font-size=\"1.1\" color=\"#7D7E7D7C\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString14, MxEeTupletDot )
{
	MxEeTupletDot object;
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#807F7E" ) );
	expected = "<tuplet-dot font-family=\"DEF\" font-size=\"large\" color=\"#807F7E\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString15, MxEeTupletDot )
{
	MxEeTupletDot object;
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#81828180" ) );
	expected = "<tuplet-dot/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString16, MxEeTupletDot )
{
	MxEeTupletDot object;
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#848382" ) );
	expected = "<tuplet-dot font-family=\"ABC\" font-style=\"normal\" font-weight=\"normal\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString17, MxEeTupletDot )
{
	MxEeTupletDot object;
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#85868584" ) );
	expected = "<tuplet-dot font-style=\"italic\" font-weight=\"bold\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString18, MxEeTupletDot )
{
	MxEeTupletDot object;
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#888786" ) );
	expected = "<tuplet-dot font-family=\"XYZ\" font-size=\"large\" font-weight=\"normal\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString19, MxEeTupletDot )
{
	MxEeTupletDot object;
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#898A8988" ) );
	expected = "<tuplet-dot font-size=\"1.1\" font-weight=\"bold\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString20, MxEeTupletDot )
{
	MxEeTupletDot object;
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#8C8B8A" ) );
	expected = "<tuplet-dot font-family=\"DEF\" font-style=\"normal\" font-size=\"large\" color=\"#8C8B8A\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString21, MxEeTupletDot )
{
	MxEeTupletDot object;
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#8D8E8D8C" ) );
	expected = "<tuplet-dot font-style=\"italic\" color=\"#8D8E8D8C\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString22, MxEeTupletDot )
{
	MxEeTupletDot object;
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#908F8E" ) );
	expected = "<tuplet-dot font-family=\"ABC\" color=\"#908F8E\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString23, MxEeTupletDot )
{
	MxEeTupletDot object;
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#91929190" ) );
	expected = "<tuplet-dot color=\"#91929190\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString24, MxEeTupletDot )
{
	MxEeTupletDot object;
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#949392" ) );
	expected = "<tuplet-dot font-style=\"normal\" font-size=\"large\" font-weight=\"normal\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString25, MxEeTupletDot )
{
	MxEeTupletDot object;
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#95969594" ) );
	expected = "<tuplet-dot font-family=\"ABC\" font-size=\"1.1\" font-weight=\"bold\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString26, MxEeTupletDot )
{
	MxEeTupletDot object;
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#989796" ) );
	expected = "<tuplet-dot font-weight=\"normal\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString27, MxEeTupletDot )
{
	MxEeTupletDot object;
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#999A9998" ) );
	expected = "<tuplet-dot font-family=\"XYZ\" font-style=\"italic\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString28, MxEeTupletDot )
{
	MxEeTupletDot object;
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#9C9B9A" ) );
	expected = "<tuplet-dot font-style=\"normal\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString29, MxEeTupletDot )
{
	MxEeTupletDot object;
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#9D9E9D9C" ) );
	expected = "<tuplet-dot font-family=\"DEF\" font-size=\"1.1\" color=\"#9D9E9D9C\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString30, MxEeTupletDot )
{
	MxEeTupletDot object;
	std::string expected;
	std::string actual;
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A09F9E" ) );
	expected = "<tuplet-dot font-size=\"large\" color=\"#A09F9E\"/>";
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


