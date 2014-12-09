/** *******************************************************
  * 
  * MxCxSmpLevelTest.cpp
  * Created: 2014-12-02 17:31:51
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxCxSmpLevel.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxCxSmpLevel )
{
	MxCxSmpLevel object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxCxSmpLevel )
{
	MxCxSmpLevel object;
	std::string expected = ( MxEnumYesNo( lexicon::enums::YesNo::no ) ).toString();
	std::string actual = object.getReference().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues1, MxCxSmpLevel )
{
	MxCxSmpLevel object;
	std::string expected = ( MxEnumYesNo(  ) ).toString();
	std::string actual = object.getParentheses().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues2, MxCxSmpLevel )
{
	MxCxSmpLevel object;
	std::string expected = ( MxEnumYesNo(  ) ).toString();
	std::string actual = object.getBracket().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues3, MxCxSmpLevel )
{
	MxCxSmpLevel object;
	std::string expected = ( MxEnumSymbolSize(  ) ).toString();
	std::string actual = object.getSize().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValueAndElementName0, MxCxSmpLevel )
{
	MxCxSmpLevel object( "booksmart", XsString( "" ) );
	std::string expected;
	std::string actual;
	expected = "booksmart";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( XsString( "A,B,C" ) );
	expected = "A,B,C";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName2, MxCxSmpLevel )
{
	MxCxSmpLevel object( "musicxmlishard", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	expected = "musicxmlishard";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "D,E,F";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( XsString( "WOOF" ) );
	expected = "WOOF";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName4, MxCxSmpLevel )
{
	MxCxSmpLevel object( "charlie", XsString( "X,Y,Z" ) );
	std::string expected;
	std::string actual;
	expected = "charlie";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "X,Y,Z";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( XsString( "A,B,C" ) );
	expected = "A,B,C";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName6, MxCxSmpLevel )
{
	MxCxSmpLevel object( "quiet", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	expected = "quiet";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "D,E,F";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( XsString( "WOOF" ) );
	expected = "WOOF";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName8, MxCxSmpLevel )
{
	MxCxSmpLevel object( "bishop", XsString( "X,Y,Z" ) );
	std::string expected;
	std::string actual;
	expected = "bishop";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "X,Y,Z";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( XsString( "A,B,C" ) );
	expected = "A,B,C";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Ctor tests with values  --------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxCxSmpLevel )
{
	MxCxSmpLevel object;
	std::string expected = "MxCxSmpLevel";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxCxSmpLevel )
{
	MxCxSmpLevel object;
	std::string expected = "level";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxCxSmpLevel )
{
	MxCxSmpLevel object;
	std::string expected = "The level type is used to specify editorial information for different MusicXML elements. If the reference attribute for the level element is yes, this indicates editorial information that is for display only and should not affect playback. For instance, a modern edition of older music may set reference='yes' on the attributes containing the music's original clef, key, and time signature. It is no by default.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setReference0, MxCxSmpLevel )
{
	MxEnumYesNo value1( lexicon::enums::YesNo::no );
	MxEnumYesNo value2( lexicon::enums::YesNo::yes );
	CHECK( ( value1 != value2 ) )
	MxCxSmpLevel object;
	object.setReference( value1 );
	MxEnumYesNo expected = value1;
	MxEnumYesNo actual = object.getReference();
	CHECK_EQUAL( expected, actual )
	object.setReference( value2 );
	expected = value2;
	actual = object.getReference();
	CHECK_EQUAL( expected, actual )
}
TEST( setParentheses1, MxCxSmpLevel )
{
	MxEnumYesNo value1( lexicon::enums::YesNo::no );
	MxEnumYesNo value2( lexicon::enums::YesNo::yes );
	CHECK( ( value1 != value2 ) )
	MxCxSmpLevel object;
	object.setParentheses( value1 );
	MxEnumYesNo expected = value1;
	MxEnumYesNo actual = object.getParentheses();
	CHECK_EQUAL( expected, actual )
	object.setParentheses( value2 );
	expected = value2;
	actual = object.getParentheses();
	CHECK_EQUAL( expected, actual )
}
TEST( setBracket2, MxCxSmpLevel )
{
	MxEnumYesNo value1( lexicon::enums::YesNo::no );
	MxEnumYesNo value2( lexicon::enums::YesNo::yes );
	CHECK( ( value1 != value2 ) )
	MxCxSmpLevel object;
	object.setBracket( value1 );
	MxEnumYesNo expected = value1;
	MxEnumYesNo actual = object.getBracket();
	CHECK_EQUAL( expected, actual )
	object.setBracket( value2 );
	expected = value2;
	actual = object.getBracket();
	CHECK_EQUAL( expected, actual )
}
TEST( setSize3, MxCxSmpLevel )
{
	MxEnumSymbolSize value1( lexicon::enums::SymbolSize::large );
	MxEnumSymbolSize value2( lexicon::enums::SymbolSize::cue );
	CHECK( ( value1 != value2 ) )
	MxCxSmpLevel object;
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

TEST( getIsReferenceRequired0, MxCxSmpLevel )
{
	MxCxSmpLevel object;
	bool expected = false;
	bool actual = object.getIsReferenceRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsParenthesesRequired1, MxCxSmpLevel )
{
	MxCxSmpLevel object;
	bool expected = false;
	bool actual = object.getIsParenthesesRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsBracketRequired2, MxCxSmpLevel )
{
	MxCxSmpLevel object;
	bool expected = false;
	bool actual = object.getIsBracketRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsSizeRequired3, MxCxSmpLevel )
{
	MxCxSmpLevel object;
	bool expected = false;
	bool actual = object.getIsSizeRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsReferencePresent0, MxCxSmpLevel )
{
	MxCxSmpLevel object;
	bool expected = false;
	bool actual = object.getIsReferencePresent();
	CHECK_EQUAL( expected, actual )
	object.setIsReferencePresent( true );
	expected = true;
	actual = object.getIsReferencePresent();
	CHECK_EQUAL( expected, actual )
	object.setIsReferencePresent( false );
	expected = false;
	actual = object.getIsReferencePresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsParenthesesPresent1, MxCxSmpLevel )
{
	MxCxSmpLevel object;
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
TEST( getIsBracketPresent2, MxCxSmpLevel )
{
	MxCxSmpLevel object;
	bool expected = false;
	bool actual = object.getIsBracketPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsBracketPresent( true );
	expected = true;
	actual = object.getIsBracketPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsBracketPresent( false );
	expected = false;
	actual = object.getIsBracketPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsSizePresent3, MxCxSmpLevel )
{
	MxCxSmpLevel object;
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

TEST( toString0, MxCxSmpLevel )
{
	MxCxSmpLevel object( "booksmart", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setReference( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::cue ) );
	object.setIsReferencePresent( true );
	object.setIsParenthesesPresent( true );
	object.setIsBracketPresent( true );
	object.setIsSizePresent( true );
	expected = "<booksmart reference=\"yes\" parentheses=\"no\" bracket=\"no\" size=\"cue\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxCxSmpLevel )
{
	MxCxSmpLevel object( "quiet", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsReferencePresent( false );
	object.setIsParenthesesPresent( true );
	object.setIsBracketPresent( true );
	object.setIsSizePresent( true );
	object.setReference( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::large ) );
	expected = "<quiet parentheses=\"yes\" bracket=\"yes\" size=\"large\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString2, MxCxSmpLevel )
{
	MxCxSmpLevel object( "musicxmlishard", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsReferencePresent( true );
	object.setIsParenthesesPresent( false );
	object.setIsBracketPresent( true );
	object.setIsSizePresent( true );
	object.setReference( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::full ) );
	expected = "<musicxmlishard reference=\"yes\" bracket=\"no\" size=\"full\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString3, MxCxSmpLevel )
{
	MxCxSmpLevel object( "bishop", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsReferencePresent( false );
	object.setIsParenthesesPresent( false );
	object.setIsBracketPresent( false );
	object.setIsSizePresent( true );
	object.setReference( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::cue ) );
	expected = "<bishop size=\"cue\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString4, MxCxSmpLevel )
{
	MxCxSmpLevel object( "charlie", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsReferencePresent( true );
	object.setIsParenthesesPresent( true );
	object.setIsBracketPresent( false );
	object.setIsSizePresent( false );
	object.setReference( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::large ) );
	expected = "<charlie reference=\"yes\" parentheses=\"no\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString5, MxCxSmpLevel )
{
	MxCxSmpLevel object( "booksmart", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsReferencePresent( false );
	object.setIsParenthesesPresent( true );
	object.setIsBracketPresent( false );
	object.setIsSizePresent( false );
	object.setReference( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::full ) );
	expected = "<booksmart parentheses=\"yes\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString6, MxCxSmpLevel )
{
	MxCxSmpLevel object( "quiet", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsReferencePresent( true );
	object.setIsParenthesesPresent( false );
	object.setIsBracketPresent( true );
	object.setIsSizePresent( false );
	object.setReference( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::cue ) );
	expected = "<quiet reference=\"yes\" bracket=\"no\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString7, MxCxSmpLevel )
{
	MxCxSmpLevel object( "musicxmlishard", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsReferencePresent( false );
	object.setIsParenthesesPresent( false );
	object.setIsBracketPresent( true );
	object.setIsSizePresent( false );
	object.setReference( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::large ) );
	expected = "<musicxmlishard bracket=\"yes\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString8, MxCxSmpLevel )
{
	MxCxSmpLevel object( "bishop", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsReferencePresent( false );
	object.setIsParenthesesPresent( true );
	object.setIsBracketPresent( false );
	object.setIsSizePresent( true );
	object.setReference( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::full ) );
	expected = "<bishop parentheses=\"no\" size=\"full\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString9, MxCxSmpLevel )
{
	MxCxSmpLevel object( "charlie", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsReferencePresent( true );
	object.setIsParenthesesPresent( false );
	object.setIsBracketPresent( false );
	object.setIsSizePresent( true );
	object.setReference( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::cue ) );
	expected = "<charlie reference=\"yes\" size=\"cue\">D,E,F</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString10, MxCxSmpLevel )
{
	MxCxSmpLevel object( "booksmart", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsReferencePresent( false );
	object.setIsParenthesesPresent( false );
	object.setIsBracketPresent( false );
	object.setIsSizePresent( true );
	object.setReference( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::large ) );
	expected = "<booksmart size=\"large\">D,E,F</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString11, MxCxSmpLevel )
{
	MxCxSmpLevel object( "quiet", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsReferencePresent( true );
	object.setIsParenthesesPresent( true );
	object.setIsBracketPresent( true );
	object.setIsSizePresent( false );
	object.setReference( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::full ) );
	expected = "<quiet reference=\"yes\" parentheses=\"yes\" bracket=\"yes\">D,E,F</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString12, MxCxSmpLevel )
{
	MxCxSmpLevel object( "musicxmlishard", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsReferencePresent( false );
	object.setIsParenthesesPresent( true );
	object.setIsBracketPresent( true );
	object.setIsSizePresent( false );
	object.setReference( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::cue ) );
	expected = "<musicxmlishard parentheses=\"no\" bracket=\"no\">D,E,F</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString13, MxCxSmpLevel )
{
	MxCxSmpLevel object( "bishop", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsReferencePresent( true );
	object.setIsParenthesesPresent( false );
	object.setIsBracketPresent( true );
	object.setIsSizePresent( false );
	object.setReference( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::large ) );
	expected = "<bishop reference=\"yes\" bracket=\"yes\">D,E,F</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString14, MxCxSmpLevel )
{
	MxCxSmpLevel object( "charlie", XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsReferencePresent( false );
	object.setIsParenthesesPresent( false );
	object.setIsBracketPresent( false );
	object.setIsSizePresent( false );
	object.setReference( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::full ) );
	expected = "<charlie>D,E,F</charlie>";
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

TEST( getIsReferenceDefaultDefined, MxCxSmpLevel )
{
	MxCxSmpLevel object;
	bool expected = true;
	bool actual = object.getIsReferenceDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsParenthesesDefaultDefined, MxCxSmpLevel )
{
	MxCxSmpLevel object;
	bool expected = false;
	bool actual = object.getIsParenthesesDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsBracketDefaultDefined, MxCxSmpLevel )
{
	MxCxSmpLevel object;
	bool expected = false;
	bool actual = object.getIsBracketDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsSizeDefaultDefined, MxCxSmpLevel )
{
	MxCxSmpLevel object;
	bool expected = false;
	bool actual = object.getIsSizeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getReferenceDefaultValue, MxCxSmpLevel )
{
	MxCxSmpLevel object;
	MxEnumYesNo expected( lexicon::enums::YesNo::no );
	MxEnumYesNo actual = object.getReferenceDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getParenthesesDefaultValue, MxCxSmpLevel )
{
	MxCxSmpLevel object;
	MxEnumYesNo expected;
	MxEnumYesNo actual = object.getParenthesesDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getBracketDefaultValue, MxCxSmpLevel )
{
	MxCxSmpLevel object;
	MxEnumYesNo expected;
	MxEnumYesNo actual = object.getBracketDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getSizeDefaultValue, MxCxSmpLevel )
{
	MxCxSmpLevel object;
	MxEnumSymbolSize expected;
	MxEnumSymbolSize actual = object.getSizeDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


