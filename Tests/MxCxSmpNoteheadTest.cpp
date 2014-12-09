/** *******************************************************
  * 
  * MxCxSmpNoteheadTest.cpp
  * Created: 2014-12-02 17:31:54
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxCxSmpNotehead.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxCxSmpNotehead )
{
	MxCxSmpNotehead object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxCxSmpNotehead )
{
	MxCxSmpNotehead object;
	std::string expected = ( MxEnumYesNo( lexicon::enums::YesNo::yes ) ).toString();
	std::string actual = object.getFilled().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues1, MxCxSmpNotehead )
{
	MxCxSmpNotehead object;
	std::string expected = ( MxEnumYesNo( lexicon::enums::YesNo::no ) ).toString();
	std::string actual = object.getParentheses().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues2, MxCxSmpNotehead )
{
	MxCxSmpNotehead object;
	std::string expected = ( MxCommaSeparatedText(  ) ).toString();
	std::string actual = object.getFontFamily().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues3, MxCxSmpNotehead )
{
	MxCxSmpNotehead object;
	std::string expected = ( MxEnumFontStyle(  ) ).toString();
	std::string actual = object.getFontStyle().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues4, MxCxSmpNotehead )
{
	MxCxSmpNotehead object;
	std::string expected = ( MxFontSize(  ) ).toString();
	std::string actual = object.getFontSize().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues5, MxCxSmpNotehead )
{
	MxCxSmpNotehead object;
	std::string expected = ( MxEnumFontWeight(  ) ).toString();
	std::string actual = object.getFontWeight().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues6, MxCxSmpNotehead )
{
	MxCxSmpNotehead object;
	std::string expected = ( MxColor(  ) ).toString();
	std::string actual = object.getColor().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValueAndElementName0, MxCxSmpNotehead )
{
	MxCxSmpNotehead object( "booksmart", MxEnumNoteheadValue( lexicon::enums::NoteheadValue::slash ) );
	std::string expected;
	std::string actual;
	expected = "booksmart";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "slash";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumNoteheadValue( lexicon::enums::NoteheadValue::triangle ) );
	expected = "triangle";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName2, MxCxSmpNotehead )
{
	MxCxSmpNotehead object( "musicxmlishard", MxEnumNoteheadValue( lexicon::enums::NoteheadValue::diamond ) );
	std::string expected;
	std::string actual;
	expected = "musicxmlishard";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "diamond";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumNoteheadValue( lexicon::enums::NoteheadValue::square ) );
	expected = "square";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName4, MxCxSmpNotehead )
{
	MxCxSmpNotehead object( "charlie", MxEnumNoteheadValue( lexicon::enums::NoteheadValue::cross ) );
	std::string expected;
	std::string actual;
	expected = "charlie";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "cross";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumNoteheadValue( lexicon::enums::NoteheadValue::x ) );
	expected = "x";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName6, MxCxSmpNotehead )
{
	MxCxSmpNotehead object( "quiet", MxEnumNoteheadValue( lexicon::enums::NoteheadValue::circleX ) );
	std::string expected;
	std::string actual;
	expected = "quiet";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "circle-x";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumNoteheadValue( lexicon::enums::NoteheadValue::invertedTriangle ) );
	expected = "inverted triangle";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName8, MxCxSmpNotehead )
{
	MxCxSmpNotehead object( "bishop", MxEnumNoteheadValue( lexicon::enums::NoteheadValue::arrowDown ) );
	std::string expected;
	std::string actual;
	expected = "bishop";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "arrow down";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumNoteheadValue( lexicon::enums::NoteheadValue::arrowUp ) );
	expected = "arrow up";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Ctor tests with values  --------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxCxSmpNotehead )
{
	MxCxSmpNotehead object;
	std::string expected = "MxCxSmpNotehead";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxCxSmpNotehead )
{
	MxCxSmpNotehead object;
	std::string expected = "notehead";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxCxSmpNotehead )
{
	MxCxSmpNotehead object;
	std::string expected = "The notehead element indicates shapes other than the open and closed ovals associated with note durations. For the enclosed shapes, the default is to be hollow for half notes and longer, and filled otherwise. The filled attribute can be set to change this if needed. If the parentheses attribute is set to yes, the notehead is parenthesized. It is no by default.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setFilled0, MxCxSmpNotehead )
{
	MxEnumYesNo value1( lexicon::enums::YesNo::no );
	MxEnumYesNo value2( lexicon::enums::YesNo::yes );
	CHECK( ( value1 != value2 ) )
	MxCxSmpNotehead object;
	object.setFilled( value1 );
	MxEnumYesNo expected = value1;
	MxEnumYesNo actual = object.getFilled();
	CHECK_EQUAL( expected, actual )
	object.setFilled( value2 );
	expected = value2;
	actual = object.getFilled();
	CHECK_EQUAL( expected, actual )
}
TEST( setParentheses1, MxCxSmpNotehead )
{
	MxEnumYesNo value1( lexicon::enums::YesNo::no );
	MxEnumYesNo value2( lexicon::enums::YesNo::yes );
	CHECK( ( value1 != value2 ) )
	MxCxSmpNotehead object;
	object.setParentheses( value1 );
	MxEnumYesNo expected = value1;
	MxEnumYesNo actual = object.getParentheses();
	CHECK_EQUAL( expected, actual )
	object.setParentheses( value2 );
	expected = value2;
	actual = object.getParentheses();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontFamily2, MxCxSmpNotehead )
{
	MxCommaSeparatedText value1( "ABC,UTF" );
	MxCommaSeparatedText value2( "XYZ,CRV" );
	CHECK( ( value1 != value2 ) )
	MxCxSmpNotehead object;
	object.setFontFamily( value1 );
	MxCommaSeparatedText expected = value1;
	MxCommaSeparatedText actual = object.getFontFamily();
	CHECK_EQUAL( expected, actual )
	object.setFontFamily( value2 );
	expected = value2;
	actual = object.getFontFamily();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontStyle3, MxCxSmpNotehead )
{
	MxEnumFontStyle value1( lexicon::enums::FontStyle::italic );
	MxEnumFontStyle value2( lexicon::enums::FontStyle::normal );
	CHECK( ( value1 != value2 ) )
	MxCxSmpNotehead object;
	object.setFontStyle( value1 );
	MxEnumFontStyle expected = value1;
	MxEnumFontStyle actual = object.getFontStyle();
	CHECK_EQUAL( expected, actual )
	object.setFontStyle( value2 );
	expected = value2;
	actual = object.getFontStyle();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontSize4, MxCxSmpNotehead )
{
	MxFontSize value1( 0.1L );
	MxFontSize value2( "small" );
	CHECK( ( value1 != value2 ) )
	MxCxSmpNotehead object;
	object.setFontSize( value1 );
	MxFontSize expected = value1;
	MxFontSize actual = object.getFontSize();
	CHECK_EQUAL( expected, actual )
	object.setFontSize( value2 );
	expected = value2;
	actual = object.getFontSize();
	CHECK_EQUAL( expected, actual )
}
TEST( setFontWeight5, MxCxSmpNotehead )
{
	MxEnumFontWeight value1( lexicon::enums::FontWeight::bold );
	MxEnumFontWeight value2( lexicon::enums::FontWeight::normal );
	CHECK( ( value1 != value2 ) )
	MxCxSmpNotehead object;
	object.setFontWeight( value1 );
	MxEnumFontWeight expected = value1;
	MxEnumFontWeight actual = object.getFontWeight();
	CHECK_EQUAL( expected, actual )
	object.setFontWeight( value2 );
	expected = value2;
	actual = object.getFontWeight();
	CHECK_EQUAL( expected, actual )
}
TEST( setColor6, MxCxSmpNotehead )
{
	MxColor value1( "#12131415" );
	MxColor value2( 155, 34, 145, 192 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpNotehead object;
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

TEST( getIsFilledRequired0, MxCxSmpNotehead )
{
	MxCxSmpNotehead object;
	bool expected = false;
	bool actual = object.getIsFilledRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsParenthesesRequired1, MxCxSmpNotehead )
{
	MxCxSmpNotehead object;
	bool expected = false;
	bool actual = object.getIsParenthesesRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontFamilyRequired2, MxCxSmpNotehead )
{
	MxCxSmpNotehead object;
	bool expected = false;
	bool actual = object.getIsFontFamilyRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontStyleRequired3, MxCxSmpNotehead )
{
	MxCxSmpNotehead object;
	bool expected = false;
	bool actual = object.getIsFontStyleRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontSizeRequired4, MxCxSmpNotehead )
{
	MxCxSmpNotehead object;
	bool expected = false;
	bool actual = object.getIsFontSizeRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontWeightRequired5, MxCxSmpNotehead )
{
	MxCxSmpNotehead object;
	bool expected = false;
	bool actual = object.getIsFontWeightRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorRequired6, MxCxSmpNotehead )
{
	MxCxSmpNotehead object;
	bool expected = false;
	bool actual = object.getIsColorRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsFilledPresent0, MxCxSmpNotehead )
{
	MxCxSmpNotehead object;
	bool expected = false;
	bool actual = object.getIsFilledPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsFilledPresent( true );
	expected = true;
	actual = object.getIsFilledPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsFilledPresent( false );
	expected = false;
	actual = object.getIsFilledPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsParenthesesPresent1, MxCxSmpNotehead )
{
	MxCxSmpNotehead object;
	bool expected = false;
	bool actual = object.getIsParenthesesPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsParenthesesPresent( true );
	expected = true;
	actual = object.getIsParenthesesPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsParenthesesPresent( false );
	expected = false;
	actual = object.getIsParenthesesPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontFamilyPresent2, MxCxSmpNotehead )
{
	MxCxSmpNotehead object;
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
TEST( getIsFontStylePresent3, MxCxSmpNotehead )
{
	MxCxSmpNotehead object;
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
TEST( getIsFontSizePresent4, MxCxSmpNotehead )
{
	MxCxSmpNotehead object;
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
TEST( getIsFontWeightPresent5, MxCxSmpNotehead )
{
	MxCxSmpNotehead object;
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
TEST( getIsColorPresent6, MxCxSmpNotehead )
{
	MxCxSmpNotehead object;
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

TEST( toString0, MxCxSmpNotehead )
{
	MxCxSmpNotehead object( "booksmart", MxEnumNoteheadValue( lexicon::enums::NoteheadValue::slashed ) );
	std::string expected;
	std::string actual;
	object.setFilled( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#181716" ) );
	object.setIsFilledPresent( true );
	object.setIsParenthesesPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	expected = "<booksmart filled=\"yes\" parentheses=\"yes\" font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#181716\">slashed</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxCxSmpNotehead )
{
	MxCxSmpNotehead object( "quiet", MxEnumNoteheadValue( lexicon::enums::NoteheadValue::slashed ) );
	std::string expected;
	std::string actual;
	object.setIsFilledPresent( false );
	object.setIsParenthesesPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setFilled( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#191A1918" ) );
	expected = "<quiet parentheses=\"yes\" font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#191A1918\">slashed</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString2, MxCxSmpNotehead )
{
	MxCxSmpNotehead object( "musicxmlishard", MxEnumNoteheadValue( lexicon::enums::NoteheadValue::slashed ) );
	std::string expected;
	std::string actual;
	object.setIsFilledPresent( true );
	object.setIsParenthesesPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setFilled( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#1C1B1A" ) );
	expected = "<musicxmlishard filled=\"yes\" font-family=\"ABC\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#1C1B1A\">slashed</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString3, MxCxSmpNotehead )
{
	MxCxSmpNotehead object( "bishop", MxEnumNoteheadValue( lexicon::enums::NoteheadValue::slashed ) );
	std::string expected;
	std::string actual;
	object.setIsFilledPresent( false );
	object.setIsParenthesesPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setFilled( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#1D1E1D1C" ) );
	expected = "<bishop font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#1D1E1D1C\">slashed</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString4, MxCxSmpNotehead )
{
	MxCxSmpNotehead object( "charlie", MxEnumNoteheadValue( lexicon::enums::NoteheadValue::slashed ) );
	std::string expected;
	std::string actual;
	object.setIsFilledPresent( true );
	object.setIsParenthesesPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setFilled( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#201F1E" ) );
	expected = "<charlie filled=\"yes\" parentheses=\"yes\" font-size=\"1.1\" font-weight=\"bold\" color=\"#201F1E\">slashed</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString5, MxCxSmpNotehead )
{
	MxCxSmpNotehead object( "booksmart", MxEnumNoteheadValue( lexicon::enums::NoteheadValue::slashed ) );
	std::string expected;
	std::string actual;
	object.setIsFilledPresent( false );
	object.setIsParenthesesPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setFilled( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#21222120" ) );
	expected = "<booksmart parentheses=\"yes\" font-weight=\"normal\" color=\"#21222120\">slashed</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString6, MxCxSmpNotehead )
{
	MxCxSmpNotehead object( "quiet", MxEnumNoteheadValue( lexicon::enums::NoteheadValue::slashed ) );
	std::string expected;
	std::string actual;
	object.setIsFilledPresent( true );
	object.setIsParenthesesPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setFilled( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#242322" ) );
	expected = "<quiet filled=\"yes\" font-family=\"DEF\" color=\"#242322\">slashed</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString7, MxCxSmpNotehead )
{
	MxCxSmpNotehead object( "musicxmlishard", MxEnumNoteheadValue( lexicon::enums::NoteheadValue::slashed ) );
	std::string expected;
	std::string actual;
	object.setIsFilledPresent( false );
	object.setIsParenthesesPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setFilled( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#25262524" ) );
	expected = "<musicxmlishard font-family=\"XYZ\">slashed</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString8, MxCxSmpNotehead )
{
	MxCxSmpNotehead object( "bishop", MxEnumNoteheadValue( lexicon::enums::NoteheadValue::slashed ) );
	std::string expected;
	std::string actual;
	object.setIsFilledPresent( true );
	object.setIsParenthesesPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setFilled( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#282726" ) );
	expected = "<bishop filled=\"yes\" parentheses=\"yes\" font-family=\"ABC\" font-style=\"italic\">slashed</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString9, MxCxSmpNotehead )
{
	MxCxSmpNotehead object( "charlie", MxEnumNoteheadValue( lexicon::enums::NoteheadValue::slashed ) );
	std::string expected;
	std::string actual;
	object.setIsFilledPresent( false );
	object.setIsParenthesesPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setFilled( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#292A2928" ) );
	expected = "<charlie parentheses=\"yes\" font-style=\"normal\">slashed</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString10, MxCxSmpNotehead )
{
	MxCxSmpNotehead object( "booksmart", MxEnumNoteheadValue( lexicon::enums::NoteheadValue::slashed ) );
	std::string expected;
	std::string actual;
	object.setIsFilledPresent( true );
	object.setIsParenthesesPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setFilled( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#2C2B2A" ) );
	expected = "<booksmart filled=\"yes\" font-style=\"italic\" font-size=\"1.1\">slashed</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString11, MxCxSmpNotehead )
{
	MxCxSmpNotehead object( "quiet", MxEnumNoteheadValue( lexicon::enums::NoteheadValue::slashed ) );
	std::string expected;
	std::string actual;
	object.setIsFilledPresent( false );
	object.setIsParenthesesPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setFilled( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#2D2E2D2C" ) );
	expected = "<quiet font-style=\"normal\" font-size=\"large\">slashed</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString12, MxCxSmpNotehead )
{
	MxCxSmpNotehead object( "musicxmlishard", MxEnumNoteheadValue( lexicon::enums::NoteheadValue::slashed ) );
	std::string expected;
	std::string actual;
	object.setIsFilledPresent( true );
	object.setIsParenthesesPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setFilled( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#302F2E" ) );
	expected = "<musicxmlishard filled=\"yes\" parentheses=\"yes\" font-family=\"DEF\" font-size=\"1.1\" font-weight=\"bold\">slashed</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString13, MxCxSmpNotehead )
{
	MxCxSmpNotehead object( "bishop", MxEnumNoteheadValue( lexicon::enums::NoteheadValue::slashed ) );
	std::string expected;
	std::string actual;
	object.setIsFilledPresent( false );
	object.setIsParenthesesPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setFilled( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#31323130" ) );
	expected = "<bishop parentheses=\"yes\" font-family=\"XYZ\" font-size=\"large\" font-weight=\"normal\">slashed</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString14, MxCxSmpNotehead )
{
	MxCxSmpNotehead object( "charlie", MxEnumNoteheadValue( lexicon::enums::NoteheadValue::slashed ) );
	std::string expected;
	std::string actual;
	object.setIsFilledPresent( true );
	object.setIsParenthesesPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setFilled( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#343332" ) );
	expected = "<charlie filled=\"yes\" font-family=\"ABC\" font-size=\"1.1\" font-weight=\"bold\" color=\"#343332\">slashed</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString15, MxCxSmpNotehead )
{
	MxCxSmpNotehead object( "booksmart", MxEnumNoteheadValue( lexicon::enums::NoteheadValue::slashed ) );
	std::string expected;
	std::string actual;
	object.setIsFilledPresent( false );
	object.setIsParenthesesPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setFilled( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#35363534" ) );
	expected = "<booksmart font-weight=\"normal\" color=\"#35363534\">slashed</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString16, MxCxSmpNotehead )
{
	MxCxSmpNotehead object( "quiet", MxEnumNoteheadValue( lexicon::enums::NoteheadValue::slashed ) );
	std::string expected;
	std::string actual;
	object.setIsFilledPresent( true );
	object.setIsParenthesesPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setFilled( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#383736" ) );
	expected = "<quiet filled=\"yes\" parentheses=\"yes\" font-style=\"italic\" font-weight=\"bold\" color=\"#383736\">slashed</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString17, MxCxSmpNotehead )
{
	MxCxSmpNotehead object( "musicxmlishard", MxEnumNoteheadValue( lexicon::enums::NoteheadValue::slashed ) );
	std::string expected;
	std::string actual;
	object.setIsFilledPresent( false );
	object.setIsParenthesesPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setFilled( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#393A3938" ) );
	expected = "<musicxmlishard parentheses=\"yes\" font-style=\"normal\" font-weight=\"normal\" color=\"#393A3938\">slashed</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString18, MxCxSmpNotehead )
{
	MxCxSmpNotehead object( "bishop", MxEnumNoteheadValue( lexicon::enums::NoteheadValue::slashed ) );
	std::string expected;
	std::string actual;
	object.setIsFilledPresent( true );
	object.setIsParenthesesPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setFilled( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#3C3B3A" ) );
	expected = "<bishop filled=\"yes\" font-family=\"DEF\" font-style=\"italic\" color=\"#3C3B3A\">slashed</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString19, MxCxSmpNotehead )
{
	MxCxSmpNotehead object( "charlie", MxEnumNoteheadValue( lexicon::enums::NoteheadValue::slashed ) );
	std::string expected;
	std::string actual;
	object.setIsFilledPresent( false );
	object.setIsParenthesesPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setFilled( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#3D3E3D3C" ) );
	expected = "<charlie font-family=\"XYZ\" font-style=\"normal\" color=\"#3D3E3D3C\">slashed</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString20, MxCxSmpNotehead )
{
	MxCxSmpNotehead object( "booksmart", MxEnumNoteheadValue( lexicon::enums::NoteheadValue::slashed ) );
	std::string expected;
	std::string actual;
	object.setIsFilledPresent( true );
	object.setIsParenthesesPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setFilled( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#403F3E" ) );
	expected = "<booksmart filled=\"yes\" parentheses=\"yes\" font-family=\"ABC\" font-size=\"1.1\" color=\"#403F3E\">slashed</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString21, MxCxSmpNotehead )
{
	MxCxSmpNotehead object( "quiet", MxEnumNoteheadValue( lexicon::enums::NoteheadValue::slashed ) );
	std::string expected;
	std::string actual;
	object.setIsFilledPresent( false );
	object.setIsParenthesesPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setFilled( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#41424140" ) );
	expected = "<quiet parentheses=\"yes\" font-size=\"large\">slashed</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString22, MxCxSmpNotehead )
{
	MxCxSmpNotehead object( "musicxmlishard", MxEnumNoteheadValue( lexicon::enums::NoteheadValue::slashed ) );
	std::string expected;
	std::string actual;
	object.setIsFilledPresent( true );
	object.setIsParenthesesPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setFilled( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#444342" ) );
	expected = "<musicxmlishard filled=\"yes\" font-size=\"1.1\">slashed</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString23, MxCxSmpNotehead )
{
	MxCxSmpNotehead object( "bishop", MxEnumNoteheadValue( lexicon::enums::NoteheadValue::slashed ) );
	std::string expected;
	std::string actual;
	object.setIsFilledPresent( false );
	object.setIsParenthesesPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setFilled( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#45464544" ) );
	expected = "<bishop font-size=\"large\">slashed</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString24, MxCxSmpNotehead )
{
	MxCxSmpNotehead object( "charlie", MxEnumNoteheadValue( lexicon::enums::NoteheadValue::slashed ) );
	std::string expected;
	std::string actual;
	object.setIsFilledPresent( true );
	object.setIsParenthesesPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setFilled( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#484746" ) );
	expected = "<charlie filled=\"yes\" parentheses=\"yes\" font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\">slashed</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString25, MxCxSmpNotehead )
{
	MxCxSmpNotehead object( "booksmart", MxEnumNoteheadValue( lexicon::enums::NoteheadValue::slashed ) );
	std::string expected;
	std::string actual;
	object.setIsFilledPresent( false );
	object.setIsParenthesesPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setFilled( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#494A4948" ) );
	expected = "<booksmart parentheses=\"yes\" font-family=\"XYZ\" font-style=\"normal\" font-weight=\"normal\">slashed</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString26, MxCxSmpNotehead )
{
	MxCxSmpNotehead object( "quiet", MxEnumNoteheadValue( lexicon::enums::NoteheadValue::slashed ) );
	std::string expected;
	std::string actual;
	object.setIsFilledPresent( true );
	object.setIsParenthesesPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setFilled( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#4C4B4A" ) );
	expected = "<quiet filled=\"yes\" font-family=\"ABC\" font-style=\"italic\" font-weight=\"bold\">slashed</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString27, MxCxSmpNotehead )
{
	MxCxSmpNotehead object( "musicxmlishard", MxEnumNoteheadValue( lexicon::enums::NoteheadValue::slashed ) );
	std::string expected;
	std::string actual;
	object.setIsFilledPresent( false );
	object.setIsParenthesesPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setFilled( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#4D4E4D4C" ) );
	expected = "<musicxmlishard font-style=\"normal\" font-weight=\"normal\">slashed</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString28, MxCxSmpNotehead )
{
	MxCxSmpNotehead object( "bishop", MxEnumNoteheadValue( lexicon::enums::NoteheadValue::slashed ) );
	std::string expected;
	std::string actual;
	object.setIsFilledPresent( true );
	object.setIsParenthesesPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setFilled( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#504F4E" ) );
	expected = "<bishop filled=\"yes\" parentheses=\"yes\" font-weight=\"bold\" color=\"#504F4E\">slashed</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString29, MxCxSmpNotehead )
{
	MxCxSmpNotehead object( "charlie", MxEnumNoteheadValue( lexicon::enums::NoteheadValue::slashed ) );
	std::string expected;
	std::string actual;
	object.setIsFilledPresent( false );
	object.setIsParenthesesPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setFilled( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#51525150" ) );
	expected = "<charlie parentheses=\"yes\" font-weight=\"normal\" color=\"#51525150\">slashed</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString30, MxCxSmpNotehead )
{
	MxCxSmpNotehead object( "booksmart", MxEnumNoteheadValue( lexicon::enums::NoteheadValue::slashed ) );
	std::string expected;
	std::string actual;
	object.setIsFilledPresent( true );
	object.setIsParenthesesPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setFilled( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#545352" ) );
	expected = "<booksmart filled=\"yes\" font-family=\"DEF\" font-size=\"1.1\" color=\"#545352\">slashed</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString31, MxCxSmpNotehead )
{
	MxCxSmpNotehead object( "quiet", MxEnumNoteheadValue( lexicon::enums::NoteheadValue::slashed ) );
	std::string expected;
	std::string actual;
	object.setIsFilledPresent( false );
	object.setIsParenthesesPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setFilled( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#55565554" ) );
	expected = "<quiet font-family=\"XYZ\" font-size=\"large\" color=\"#55565554\">slashed</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString32, MxCxSmpNotehead )
{
	MxCxSmpNotehead object( "musicxmlishard", MxEnumNoteheadValue( lexicon::enums::NoteheadValue::slashed ) );
	std::string expected;
	std::string actual;
	object.setIsFilledPresent( true );
	object.setIsParenthesesPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setFilled( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#585756" ) );
	expected = "<musicxmlishard filled=\"yes\" parentheses=\"yes\" font-family=\"ABC\" font-style=\"italic\" font-size=\"1.1\" color=\"#585756\">slashed</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString33, MxCxSmpNotehead )
{
	MxCxSmpNotehead object( "bishop", MxEnumNoteheadValue( lexicon::enums::NoteheadValue::slashed ) );
	std::string expected;
	std::string actual;
	object.setIsFilledPresent( false );
	object.setIsParenthesesPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setFilled( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#595A5958" ) );
	expected = "<bishop parentheses=\"yes\" font-style=\"normal\" font-size=\"large\" color=\"#595A5958\">slashed</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString34, MxCxSmpNotehead )
{
	MxCxSmpNotehead object( "charlie", MxEnumNoteheadValue( lexicon::enums::NoteheadValue::slashed ) );
	std::string expected;
	std::string actual;
	object.setIsFilledPresent( true );
	object.setIsParenthesesPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setFilled( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#5C5B5A" ) );
	expected = "<charlie filled=\"yes\" font-style=\"italic\" font-size=\"1.1\" color=\"#5C5B5A\">slashed</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString35, MxCxSmpNotehead )
{
	MxCxSmpNotehead object( "booksmart", MxEnumNoteheadValue( lexicon::enums::NoteheadValue::slashed ) );
	std::string expected;
	std::string actual;
	object.setIsFilledPresent( false );
	object.setIsParenthesesPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setFilled( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#5D5E5D5C" ) );
	expected = "<booksmart font-style=\"normal\">slashed</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString36, MxCxSmpNotehead )
{
	MxCxSmpNotehead object( "quiet", MxEnumNoteheadValue( lexicon::enums::NoteheadValue::slashed ) );
	std::string expected;
	std::string actual;
	object.setIsFilledPresent( true );
	object.setIsParenthesesPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setFilled( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#605F5E" ) );
	expected = "<quiet filled=\"yes\" parentheses=\"yes\" font-family=\"DEF\" font-weight=\"bold\">slashed</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString37, MxCxSmpNotehead )
{
	MxCxSmpNotehead object( "musicxmlishard", MxEnumNoteheadValue( lexicon::enums::NoteheadValue::slashed ) );
	std::string expected;
	std::string actual;
	object.setIsFilledPresent( false );
	object.setIsParenthesesPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setFilled( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#61626160" ) );
	expected = "<musicxmlishard parentheses=\"yes\" font-family=\"XYZ\" font-weight=\"normal\">slashed</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString38, MxCxSmpNotehead )
{
	MxCxSmpNotehead object( "bishop", MxEnumNoteheadValue( lexicon::enums::NoteheadValue::slashed ) );
	std::string expected;
	std::string actual;
	object.setIsFilledPresent( true );
	object.setIsParenthesesPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setFilled( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#646362" ) );
	expected = "<bishop filled=\"yes\" font-family=\"ABC\" font-weight=\"bold\">slashed</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString39, MxCxSmpNotehead )
{
	MxCxSmpNotehead object( "charlie", MxEnumNoteheadValue( lexicon::enums::NoteheadValue::slashed ) );
	std::string expected;
	std::string actual;
	object.setIsFilledPresent( false );
	object.setIsParenthesesPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setFilled( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#65666564" ) );
	expected = "<charlie font-weight=\"normal\">slashed</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString40, MxCxSmpNotehead )
{
	MxCxSmpNotehead object( "booksmart", MxEnumNoteheadValue( lexicon::enums::NoteheadValue::slashed ) );
	std::string expected;
	std::string actual;
	object.setIsFilledPresent( true );
	object.setIsParenthesesPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setFilled( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#686766" ) );
	expected = "<booksmart filled=\"yes\" parentheses=\"yes\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\">slashed</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString41, MxCxSmpNotehead )
{
	MxCxSmpNotehead object( "quiet", MxEnumNoteheadValue( lexicon::enums::NoteheadValue::slashed ) );
	std::string expected;
	std::string actual;
	object.setIsFilledPresent( false );
	object.setIsParenthesesPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setFilled( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#696A6968" ) );
	expected = "<quiet parentheses=\"yes\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\">slashed</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString42, MxCxSmpNotehead )
{
	MxCxSmpNotehead object( "musicxmlishard", MxEnumNoteheadValue( lexicon::enums::NoteheadValue::slashed ) );
	std::string expected;
	std::string actual;
	object.setIsFilledPresent( true );
	object.setIsParenthesesPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setFilled( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#6C6B6A" ) );
	expected = "<musicxmlishard filled=\"yes\" font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\" color=\"#6C6B6A\">slashed</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString43, MxCxSmpNotehead )
{
	MxCxSmpNotehead object( "bishop", MxEnumNoteheadValue( lexicon::enums::NoteheadValue::slashed ) );
	std::string expected;
	std::string actual;
	object.setIsFilledPresent( false );
	object.setIsParenthesesPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setFilled( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#6D6E6D6C" ) );
	expected = "<bishop font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\" color=\"#6D6E6D6C\">slashed</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString44, MxCxSmpNotehead )
{
	MxCxSmpNotehead object( "charlie", MxEnumNoteheadValue( lexicon::enums::NoteheadValue::slashed ) );
	std::string expected;
	std::string actual;
	object.setIsFilledPresent( true );
	object.setIsParenthesesPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setFilled( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#706F6E" ) );
	expected = "<charlie filled=\"yes\" parentheses=\"yes\" font-family=\"ABC\" font-size=\"1.1\" color=\"#706F6E\">slashed</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString45, MxCxSmpNotehead )
{
	MxCxSmpNotehead object( "booksmart", MxEnumNoteheadValue( lexicon::enums::NoteheadValue::slashed ) );
	std::string expected;
	std::string actual;
	object.setIsFilledPresent( false );
	object.setIsParenthesesPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setFilled( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#71727170" ) );
	expected = "<booksmart parentheses=\"yes\" color=\"#71727170\">slashed</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString46, MxCxSmpNotehead )
{
	MxCxSmpNotehead object( "quiet", MxEnumNoteheadValue( lexicon::enums::NoteheadValue::slashed ) );
	std::string expected;
	std::string actual;
	object.setIsFilledPresent( true );
	object.setIsParenthesesPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setFilled( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#747372" ) );
	expected = "<quiet filled=\"yes\" color=\"#747372\">slashed</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString47, MxCxSmpNotehead )
{
	MxCxSmpNotehead object( "musicxmlishard", MxEnumNoteheadValue( lexicon::enums::NoteheadValue::slashed ) );
	std::string expected;
	std::string actual;
	object.setIsFilledPresent( false );
	object.setIsParenthesesPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setFilled( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#75767574" ) );
	expected = "<musicxmlishard color=\"#75767574\">slashed</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString48, MxCxSmpNotehead )
{
	MxCxSmpNotehead object( "bishop", MxEnumNoteheadValue( lexicon::enums::NoteheadValue::slashed ) );
	std::string expected;
	std::string actual;
	object.setIsFilledPresent( true );
	object.setIsParenthesesPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setFilled( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#787776" ) );
	expected = "<bishop filled=\"yes\" parentheses=\"yes\" font-family=\"DEF\" font-style=\"italic\" font-weight=\"bold\" color=\"#787776\">slashed</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString49, MxCxSmpNotehead )
{
	MxCxSmpNotehead object( "charlie", MxEnumNoteheadValue( lexicon::enums::NoteheadValue::slashed ) );
	std::string expected;
	std::string actual;
	object.setIsFilledPresent( false );
	object.setIsParenthesesPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setFilled( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#797A7978" ) );
	expected = "<charlie parentheses=\"yes\" font-family=\"XYZ\" font-style=\"normal\" font-weight=\"normal\">slashed</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString50, MxCxSmpNotehead )
{
	MxCxSmpNotehead object( "booksmart", MxEnumNoteheadValue( lexicon::enums::NoteheadValue::slashed ) );
	std::string expected;
	std::string actual;
	object.setIsFilledPresent( true );
	object.setIsParenthesesPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setFilled( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#7C7B7A" ) );
	expected = "<booksmart filled=\"yes\" font-family=\"ABC\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\">slashed</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString51, MxCxSmpNotehead )
{
	MxCxSmpNotehead object( "quiet", MxEnumNoteheadValue( lexicon::enums::NoteheadValue::slashed ) );
	std::string expected;
	std::string actual;
	object.setIsFilledPresent( false );
	object.setIsParenthesesPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setFilled( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#7D7E7D7C" ) );
	expected = "<quiet font-style=\"normal\" font-size=\"large\" font-weight=\"normal\">slashed</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString52, MxCxSmpNotehead )
{
	MxCxSmpNotehead object( "musicxmlishard", MxEnumNoteheadValue( lexicon::enums::NoteheadValue::slashed ) );
	std::string expected;
	std::string actual;
	object.setIsFilledPresent( true );
	object.setIsParenthesesPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setFilled( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#807F7E" ) );
	expected = "<musicxmlishard filled=\"yes\" parentheses=\"yes\" font-size=\"1.1\" font-weight=\"bold\">slashed</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString53, MxCxSmpNotehead )
{
	MxCxSmpNotehead object( "bishop", MxEnumNoteheadValue( lexicon::enums::NoteheadValue::slashed ) );
	std::string expected;
	std::string actual;
	object.setIsFilledPresent( false );
	object.setIsParenthesesPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setFilled( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#81828180" ) );
	expected = "<bishop parentheses=\"yes\" font-size=\"large\" font-weight=\"normal\">slashed</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString54, MxCxSmpNotehead )
{
	MxCxSmpNotehead object( "charlie", MxEnumNoteheadValue( lexicon::enums::NoteheadValue::slashed ) );
	std::string expected;
	std::string actual;
	object.setIsFilledPresent( true );
	object.setIsParenthesesPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setFilled( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#848382" ) );
	expected = "<charlie filled=\"yes\" font-family=\"DEF\" font-size=\"1.1\">slashed</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString55, MxCxSmpNotehead )
{
	MxCxSmpNotehead object( "booksmart", MxEnumNoteheadValue( lexicon::enums::NoteheadValue::slashed ) );
	std::string expected;
	std::string actual;
	object.setIsFilledPresent( false );
	object.setIsParenthesesPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setFilled( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#85868584" ) );
	expected = "<booksmart font-family=\"XYZ\">slashed</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString56, MxCxSmpNotehead )
{
	MxCxSmpNotehead object( "quiet", MxEnumNoteheadValue( lexicon::enums::NoteheadValue::slashed ) );
	std::string expected;
	std::string actual;
	object.setIsFilledPresent( true );
	object.setIsParenthesesPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setFilled( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#888786" ) );
	expected = "<quiet filled=\"yes\" parentheses=\"yes\" font-family=\"ABC\" font-style=\"italic\" color=\"#888786\">slashed</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString57, MxCxSmpNotehead )
{
	MxCxSmpNotehead object( "musicxmlishard", MxEnumNoteheadValue( lexicon::enums::NoteheadValue::slashed ) );
	std::string expected;
	std::string actual;
	object.setIsFilledPresent( false );
	object.setIsParenthesesPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setFilled( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#898A8988" ) );
	expected = "<musicxmlishard parentheses=\"yes\" font-style=\"normal\" color=\"#898A8988\">slashed</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString58, MxCxSmpNotehead )
{
	MxCxSmpNotehead object( "bishop", MxEnumNoteheadValue( lexicon::enums::NoteheadValue::slashed ) );
	std::string expected;
	std::string actual;
	object.setIsFilledPresent( true );
	object.setIsParenthesesPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setFilled( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#8C8B8A" ) );
	expected = "<bishop filled=\"yes\" font-style=\"italic\" color=\"#8C8B8A\">slashed</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString59, MxCxSmpNotehead )
{
	MxCxSmpNotehead object( "charlie", MxEnumNoteheadValue( lexicon::enums::NoteheadValue::slashed ) );
	std::string expected;
	std::string actual;
	object.setIsFilledPresent( false );
	object.setIsParenthesesPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setFilled( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#8D8E8D8C" ) );
	expected = "<charlie font-style=\"normal\" color=\"#8D8E8D8C\">slashed</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString60, MxCxSmpNotehead )
{
	MxCxSmpNotehead object( "booksmart", MxEnumNoteheadValue( lexicon::enums::NoteheadValue::slashed ) );
	std::string expected;
	std::string actual;
	object.setIsFilledPresent( true );
	object.setIsParenthesesPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setFilled( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#908F8E" ) );
	expected = "<booksmart filled=\"yes\" parentheses=\"yes\" font-family=\"DEF\" font-size=\"1.1\" font-weight=\"bold\" color=\"#908F8E\">slashed</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString61, MxCxSmpNotehead )
{
	MxCxSmpNotehead object( "quiet", MxEnumNoteheadValue( lexicon::enums::NoteheadValue::slashed ) );
	std::string expected;
	std::string actual;
	object.setIsFilledPresent( false );
	object.setIsParenthesesPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setFilled( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#91929190" ) );
	expected = "<quiet parentheses=\"yes\" font-family=\"XYZ\" font-size=\"large\" font-weight=\"normal\" color=\"#91929190\">slashed</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString62, MxCxSmpNotehead )
{
	MxCxSmpNotehead object( "musicxmlishard", MxEnumNoteheadValue( lexicon::enums::NoteheadValue::slashed ) );
	std::string expected;
	std::string actual;
	object.setIsFilledPresent( true );
	object.setIsParenthesesPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setFilled( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#949392" ) );
	expected = "<musicxmlishard filled=\"yes\" font-family=\"ABC\" font-size=\"1.1\" font-weight=\"bold\" color=\"#949392\">slashed</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString63, MxCxSmpNotehead )
{
	MxCxSmpNotehead object( "bishop", MxEnumNoteheadValue( lexicon::enums::NoteheadValue::slashed ) );
	std::string expected;
	std::string actual;
	object.setIsFilledPresent( false );
	object.setIsParenthesesPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setFilled( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#95969594" ) );
	expected = "<bishop font-size=\"large\" font-weight=\"normal\">slashed</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString64, MxCxSmpNotehead )
{
	MxCxSmpNotehead object( "charlie", MxEnumNoteheadValue( lexicon::enums::NoteheadValue::slashed ) );
	std::string expected;
	std::string actual;
	object.setIsFilledPresent( true );
	object.setIsParenthesesPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setFilled( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#989796" ) );
	expected = "<charlie filled=\"yes\" parentheses=\"yes\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\">slashed</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString65, MxCxSmpNotehead )
{
	MxCxSmpNotehead object( "booksmart", MxEnumNoteheadValue( lexicon::enums::NoteheadValue::slashed ) );
	std::string expected;
	std::string actual;
	object.setIsFilledPresent( false );
	object.setIsParenthesesPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setFilled( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#999A9998" ) );
	expected = "<booksmart parentheses=\"yes\" font-style=\"normal\" font-weight=\"normal\">slashed</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString66, MxCxSmpNotehead )
{
	MxCxSmpNotehead object( "quiet", MxEnumNoteheadValue( lexicon::enums::NoteheadValue::slashed ) );
	std::string expected;
	std::string actual;
	object.setIsFilledPresent( true );
	object.setIsParenthesesPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setFilled( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#9C9B9A" ) );
	expected = "<quiet filled=\"yes\" font-family=\"DEF\" font-style=\"italic\">slashed</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString67, MxCxSmpNotehead )
{
	MxCxSmpNotehead object( "musicxmlishard", MxEnumNoteheadValue( lexicon::enums::NoteheadValue::slashed ) );
	std::string expected;
	std::string actual;
	object.setIsFilledPresent( false );
	object.setIsParenthesesPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setFilled( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#9D9E9D9C" ) );
	expected = "<musicxmlishard font-family=\"XYZ\" font-style=\"normal\">slashed</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString68, MxCxSmpNotehead )
{
	MxCxSmpNotehead object( "bishop", MxEnumNoteheadValue( lexicon::enums::NoteheadValue::slashed ) );
	std::string expected;
	std::string actual;
	object.setIsFilledPresent( true );
	object.setIsParenthesesPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setFilled( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A09F9E" ) );
	expected = "<bishop filled=\"yes\" parentheses=\"yes\" font-family=\"ABC\">slashed</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString69, MxCxSmpNotehead )
{
	MxCxSmpNotehead object( "charlie", MxEnumNoteheadValue( lexicon::enums::NoteheadValue::slashed ) );
	std::string expected;
	std::string actual;
	object.setIsFilledPresent( false );
	object.setIsParenthesesPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setFilled( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A1A2A1A0" ) );
	expected = "<charlie parentheses=\"yes\">slashed</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString70, MxCxSmpNotehead )
{
	MxCxSmpNotehead object( "booksmart", MxEnumNoteheadValue( lexicon::enums::NoteheadValue::slashed ) );
	std::string expected;
	std::string actual;
	object.setIsFilledPresent( true );
	object.setIsParenthesesPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setFilled( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A4A3A2" ) );
	expected = "<booksmart filled=\"yes\" font-size=\"1.1\" color=\"#A4A3A2\">slashed</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString71, MxCxSmpNotehead )
{
	MxCxSmpNotehead object( "quiet", MxEnumNoteheadValue( lexicon::enums::NoteheadValue::slashed ) );
	std::string expected;
	std::string actual;
	object.setIsFilledPresent( false );
	object.setIsParenthesesPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setFilled( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A5A6A5A4" ) );
	expected = "<quiet font-size=\"large\" color=\"#A5A6A5A4\">slashed</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString72, MxCxSmpNotehead )
{
	MxCxSmpNotehead object( "musicxmlishard", MxEnumNoteheadValue( lexicon::enums::NoteheadValue::slashed ) );
	std::string expected;
	std::string actual;
	object.setIsFilledPresent( false );
	object.setIsParenthesesPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setFilled( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#A8A7A6" ) );
	expected = "<musicxmlishard parentheses=\"yes\" font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\" font-weight=\"bold\" color=\"#A8A7A6\">slashed</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString73, MxCxSmpNotehead )
{
	MxCxSmpNotehead object( "bishop", MxEnumNoteheadValue( lexicon::enums::NoteheadValue::slashed ) );
	std::string expected;
	std::string actual;
	object.setIsFilledPresent( true );
	object.setIsParenthesesPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setFilled( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#A9AAA9A8" ) );
	expected = "<bishop filled=\"yes\" font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\" font-weight=\"normal\" color=\"#A9AAA9A8\">slashed</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString74, MxCxSmpNotehead )
{
	MxCxSmpNotehead object( "charlie", MxEnumNoteheadValue( lexicon::enums::NoteheadValue::slashed ) );
	std::string expected;
	std::string actual;
	object.setIsFilledPresent( false );
	object.setIsParenthesesPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setFilled( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#ACABAA" ) );
	expected = "<charlie font-style=\"italic\" font-weight=\"bold\" color=\"#ACABAA\">slashed</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString75, MxCxSmpNotehead )
{
	MxCxSmpNotehead object( "booksmart", MxEnumNoteheadValue( lexicon::enums::NoteheadValue::slashed ) );
	std::string expected;
	std::string actual;
	object.setIsFilledPresent( true );
	object.setIsParenthesesPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setFilled( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#ADAEADAC" ) );
	expected = "<booksmart filled=\"yes\" parentheses=\"yes\" font-weight=\"normal\" color=\"#ADAEADAC\">slashed</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString76, MxCxSmpNotehead )
{
	MxCxSmpNotehead object( "quiet", MxEnumNoteheadValue( lexicon::enums::NoteheadValue::slashed ) );
	std::string expected;
	std::string actual;
	object.setIsFilledPresent( false );
	object.setIsParenthesesPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setFilled( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B0AFAE" ) );
	expected = "<quiet parentheses=\"yes\" font-weight=\"bold\">slashed</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString77, MxCxSmpNotehead )
{
	MxCxSmpNotehead object( "musicxmlishard", MxEnumNoteheadValue( lexicon::enums::NoteheadValue::slashed ) );
	std::string expected;
	std::string actual;
	object.setIsFilledPresent( true );
	object.setIsParenthesesPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setFilled( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#B1B2B1B0" ) );
	expected = "<musicxmlishard filled=\"yes\" font-family=\"ABC\">slashed</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString78, MxCxSmpNotehead )
{
	MxCxSmpNotehead object( "bishop", MxEnumNoteheadValue( lexicon::enums::NoteheadValue::slashed ) );
	std::string expected;
	std::string actual;
	object.setIsFilledPresent( false );
	object.setIsParenthesesPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setFilled( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B4B3B2" ) );
	expected = "<bishop font-family=\"DEF\">slashed</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString79, MxCxSmpNotehead )
{
	MxCxSmpNotehead object( "charlie", MxEnumNoteheadValue( lexicon::enums::NoteheadValue::slashed ) );
	std::string expected;
	std::string actual;
	object.setIsFilledPresent( true );
	object.setIsParenthesesPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setFilled( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#B5B6B5B4" ) );
	expected = "<charlie filled=\"yes\" parentheses=\"yes\" font-family=\"XYZ\" font-style=\"normal\" font-size=\"large\">slashed</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString80, MxCxSmpNotehead )
{
	MxCxSmpNotehead object( "booksmart", MxEnumNoteheadValue( lexicon::enums::NoteheadValue::slashed ) );
	std::string expected;
	std::string actual;
	object.setIsFilledPresent( false );
	object.setIsParenthesesPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setFilled( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#B8B7B6" ) );
	expected = "<booksmart parentheses=\"yes\" font-style=\"italic\" font-size=\"1.1\">slashed</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString81, MxCxSmpNotehead )
{
	MxCxSmpNotehead object( "quiet", MxEnumNoteheadValue( lexicon::enums::NoteheadValue::slashed ) );
	std::string expected;
	std::string actual;
	object.setIsFilledPresent( true );
	object.setIsParenthesesPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setFilled( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#B9BAB9B8" ) );
	expected = "<quiet filled=\"yes\" font-style=\"normal\" font-size=\"large\">slashed</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString82, MxCxSmpNotehead )
{
	MxCxSmpNotehead object( "musicxmlishard", MxEnumNoteheadValue( lexicon::enums::NoteheadValue::slashed ) );
	std::string expected;
	std::string actual;
	object.setIsFilledPresent( false );
	object.setIsParenthesesPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setFilled( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#BCBBBA" ) );
	expected = "<musicxmlishard font-style=\"italic\" font-size=\"1.1\">slashed</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString83, MxCxSmpNotehead )
{
	MxCxSmpNotehead object( "bishop", MxEnumNoteheadValue( lexicon::enums::NoteheadValue::slashed ) );
	std::string expected;
	std::string actual;
	object.setIsFilledPresent( true );
	object.setIsParenthesesPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setFilled( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#BDBEBDBC" ) );
	expected = "<bishop filled=\"yes\" parentheses=\"yes\" font-family=\"ABC\" font-size=\"large\" font-weight=\"normal\" color=\"#BDBEBDBC\">slashed</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString84, MxCxSmpNotehead )
{
	MxCxSmpNotehead object( "charlie", MxEnumNoteheadValue( lexicon::enums::NoteheadValue::slashed ) );
	std::string expected;
	std::string actual;
	object.setIsFilledPresent( false );
	object.setIsParenthesesPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setFilled( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#C0BFBE" ) );
	expected = "<charlie parentheses=\"yes\" font-family=\"DEF\" font-weight=\"bold\" color=\"#C0BFBE\">slashed</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString85, MxCxSmpNotehead )
{
	MxCxSmpNotehead object( "booksmart", MxEnumNoteheadValue( lexicon::enums::NoteheadValue::slashed ) );
	std::string expected;
	std::string actual;
	object.setIsFilledPresent( true );
	object.setIsParenthesesPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setFilled( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#C1C2C1C0" ) );
	expected = "<booksmart filled=\"yes\" font-family=\"XYZ\" font-weight=\"normal\" color=\"#C1C2C1C0\">slashed</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString86, MxCxSmpNotehead )
{
	MxCxSmpNotehead object( "quiet", MxEnumNoteheadValue( lexicon::enums::NoteheadValue::slashed ) );
	std::string expected;
	std::string actual;
	object.setIsFilledPresent( false );
	object.setIsParenthesesPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setFilled( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#C4C3C2" ) );
	expected = "<quiet font-weight=\"bold\" color=\"#C4C3C2\">slashed</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString87, MxCxSmpNotehead )
{
	MxCxSmpNotehead object( "musicxmlishard", MxEnumNoteheadValue( lexicon::enums::NoteheadValue::slashed ) );
	std::string expected;
	std::string actual;
	object.setIsFilledPresent( true );
	object.setIsParenthesesPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setFilled( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#C5C6C5C4" ) );
	expected = "<musicxmlishard filled=\"yes\" parentheses=\"yes\" font-style=\"normal\" font-weight=\"normal\" color=\"#C5C6C5C4\">slashed</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString88, MxCxSmpNotehead )
{
	MxCxSmpNotehead object( "bishop", MxEnumNoteheadValue( lexicon::enums::NoteheadValue::slashed ) );
	std::string expected;
	std::string actual;
	object.setIsFilledPresent( false );
	object.setIsParenthesesPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setFilled( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#C8C7C6" ) );
	expected = "<bishop parentheses=\"yes\" font-style=\"italic\" font-weight=\"bold\" color=\"#C8C7C6\">slashed</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString89, MxCxSmpNotehead )
{
	MxCxSmpNotehead object( "charlie", MxEnumNoteheadValue( lexicon::enums::NoteheadValue::slashed ) );
	std::string expected;
	std::string actual;
	object.setIsFilledPresent( true );
	object.setIsParenthesesPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( true );
	object.setFilled( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#C9CAC9C8" ) );
	expected = "<charlie filled=\"yes\" font-family=\"ABC\" font-style=\"normal\" font-size=\"large\" color=\"#C9CAC9C8\">slashed</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString90, MxCxSmpNotehead )
{
	MxCxSmpNotehead object( "booksmart", MxEnumNoteheadValue( lexicon::enums::NoteheadValue::slashed ) );
	std::string expected;
	std::string actual;
	object.setIsFilledPresent( false );
	object.setIsParenthesesPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setFilled( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#CCCBCA" ) );
	expected = "<booksmart font-family=\"DEF\" font-style=\"italic\" font-size=\"1.1\">slashed</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString91, MxCxSmpNotehead )
{
	MxCxSmpNotehead object( "quiet", MxEnumNoteheadValue( lexicon::enums::NoteheadValue::slashed ) );
	std::string expected;
	std::string actual;
	object.setIsFilledPresent( true );
	object.setIsParenthesesPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setFilled( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#CDCECDCC" ) );
	expected = "<quiet filled=\"yes\" parentheses=\"yes\" font-family=\"XYZ\" font-size=\"large\">slashed</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString92, MxCxSmpNotehead )
{
	MxCxSmpNotehead object( "musicxmlishard", MxEnumNoteheadValue( lexicon::enums::NoteheadValue::slashed ) );
	std::string expected;
	std::string actual;
	object.setIsFilledPresent( false );
	object.setIsParenthesesPresent( true );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setFilled( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#D0CFCE" ) );
	expected = "<musicxmlishard parentheses=\"yes\" font-size=\"1.1\">slashed</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString93, MxCxSmpNotehead )
{
	MxCxSmpNotehead object( "bishop", MxEnumNoteheadValue( lexicon::enums::NoteheadValue::slashed ) );
	std::string expected;
	std::string actual;
	object.setIsFilledPresent( true );
	object.setIsParenthesesPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( true );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setFilled( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#D1D2D1D0" ) );
	expected = "<bishop filled=\"yes\" font-size=\"large\">slashed</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString94, MxCxSmpNotehead )
{
	MxCxSmpNotehead object( "charlie", MxEnumNoteheadValue( lexicon::enums::NoteheadValue::slashed ) );
	std::string expected;
	std::string actual;
	object.setIsFilledPresent( false );
	object.setIsParenthesesPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( false );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( false );
	object.setIsColorPresent( false );
	object.setFilled( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#D4D3D2" ) );
	expected = "<charlie>slashed</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString95, MxCxSmpNotehead )
{
	MxCxSmpNotehead object( "booksmart", MxEnumNoteheadValue( lexicon::enums::NoteheadValue::slashed ) );
	std::string expected;
	std::string actual;
	object.setIsFilledPresent( true );
	object.setIsParenthesesPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setFilled( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#D5D6D5D4" ) );
	expected = "<booksmart filled=\"yes\" parentheses=\"yes\" font-family=\"ABC\" font-style=\"normal\" font-weight=\"normal\">slashed</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString96, MxCxSmpNotehead )
{
	MxCxSmpNotehead object( "quiet", MxEnumNoteheadValue( lexicon::enums::NoteheadValue::slashed ) );
	std::string expected;
	std::string actual;
	object.setIsFilledPresent( false );
	object.setIsParenthesesPresent( true );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( false );
	object.setFilled( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFontFamily( MxCommaSeparatedText( "DEF" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#D8D7D6" ) );
	expected = "<quiet parentheses=\"yes\" font-family=\"DEF\" font-style=\"italic\" font-weight=\"bold\">slashed</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString97, MxCxSmpNotehead )
{
	MxCxSmpNotehead object( "musicxmlishard", MxEnumNoteheadValue( lexicon::enums::NoteheadValue::slashed ) );
	std::string expected;
	std::string actual;
	object.setIsFilledPresent( true );
	object.setIsParenthesesPresent( false );
	object.setIsFontFamilyPresent( true );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setFilled( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFontFamily( MxCommaSeparatedText( "XYZ" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::normal ) );
	object.setFontSize( MxFontSize( "large" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::normal ) );
	object.setColor( MxColor( "#D9DAD9D8" ) );
	expected = "<musicxmlishard filled=\"yes\" font-family=\"XYZ\" font-style=\"normal\" font-weight=\"normal\" color=\"#D9DAD9D8\">slashed</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString98, MxCxSmpNotehead )
{
	MxCxSmpNotehead object( "bishop", MxEnumNoteheadValue( lexicon::enums::NoteheadValue::slashed ) );
	std::string expected;
	std::string actual;
	object.setIsFilledPresent( false );
	object.setIsParenthesesPresent( false );
	object.setIsFontFamilyPresent( false );
	object.setIsFontStylePresent( true );
	object.setIsFontSizePresent( false );
	object.setIsFontWeightPresent( true );
	object.setIsColorPresent( true );
	object.setFilled( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setFontFamily( MxCommaSeparatedText( "ABC" ) );
	object.setFontStyle( MxEnumFontStyle( lexicon::enums::FontStyle::italic ) );
	object.setFontSize( MxFontSize( "1.1" ) );
	object.setFontWeight( MxEnumFontWeight( lexicon::enums::FontWeight::bold ) );
	object.setColor( MxColor( "#DCDBDA" ) );
	expected = "<bishop font-style=\"italic\" font-weight=\"bold\" color=\"#DCDBDA\">slashed</bishop>";
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

TEST( getIsFilledDefaultDefined, MxCxSmpNotehead )
{
	MxCxSmpNotehead object;
	bool expected = true;
	bool actual = object.getIsFilledDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsParenthesesDefaultDefined, MxCxSmpNotehead )
{
	MxCxSmpNotehead object;
	bool expected = true;
	bool actual = object.getIsParenthesesDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontFamilyDefaultDefined, MxCxSmpNotehead )
{
	MxCxSmpNotehead object;
	bool expected = false;
	bool actual = object.getIsFontFamilyDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontStyleDefaultDefined, MxCxSmpNotehead )
{
	MxCxSmpNotehead object;
	bool expected = false;
	bool actual = object.getIsFontStyleDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontSizeDefaultDefined, MxCxSmpNotehead )
{
	MxCxSmpNotehead object;
	bool expected = false;
	bool actual = object.getIsFontSizeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsFontWeightDefaultDefined, MxCxSmpNotehead )
{
	MxCxSmpNotehead object;
	bool expected = false;
	bool actual = object.getIsFontWeightDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorDefaultDefined, MxCxSmpNotehead )
{
	MxCxSmpNotehead object;
	bool expected = false;
	bool actual = object.getIsColorDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getFilledDefaultValue, MxCxSmpNotehead )
{
	MxCxSmpNotehead object;
	MxEnumYesNo expected( lexicon::enums::YesNo::yes );
	MxEnumYesNo actual = object.getFilledDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getParenthesesDefaultValue, MxCxSmpNotehead )
{
	MxCxSmpNotehead object;
	MxEnumYesNo expected( lexicon::enums::YesNo::no );
	MxEnumYesNo actual = object.getParenthesesDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontFamilyDefaultValue, MxCxSmpNotehead )
{
	MxCxSmpNotehead object;
	MxCommaSeparatedText expected;
	MxCommaSeparatedText actual = object.getFontFamilyDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontStyleDefaultValue, MxCxSmpNotehead )
{
	MxCxSmpNotehead object;
	MxEnumFontStyle expected;
	MxEnumFontStyle actual = object.getFontStyleDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontSizeDefaultValue, MxCxSmpNotehead )
{
	MxCxSmpNotehead object;
	MxFontSize expected;
	MxFontSize actual = object.getFontSizeDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getFontWeightDefaultValue, MxCxSmpNotehead )
{
	MxCxSmpNotehead object;
	MxEnumFontWeight expected;
	MxEnumFontWeight actual = object.getFontWeightDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getColorDefaultValue, MxCxSmpNotehead )
{
	MxCxSmpNotehead object;
	MxColor expected;
	MxColor actual = object.getColorDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


