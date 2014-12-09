/** *******************************************************
  * 
  * MxEsLevelTest.cpp
  * Created: 2014-12-05 20:57:59
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxEsLevel.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxEsLevel )
{
	MxEsLevel object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxEsLevel )
{
	MxEsLevel object;
	std::string expected = ( MxEnumYesNo( lexicon::enums::YesNo::no ) ).toString();
	std::string actual = object.getReference().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues1, MxEsLevel )
{
	MxEsLevel object;
	std::string expected = ( MxEnumYesNo(  ) ).toString();
	std::string actual = object.getParentheses().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues2, MxEsLevel )
{
	MxEsLevel object;
	std::string expected = ( MxEnumYesNo(  ) ).toString();
	std::string actual = object.getBracket().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues3, MxEsLevel )
{
	MxEsLevel object;
	std::string expected = ( MxEnumSymbolSize(  ) ).toString();
	std::string actual = object.getSize().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* minOccurs maxOccurs ------------------------------------------------------ */

TEST( getMinOccurs, MxEsLevel )
{
	MxEsLevel object;
	int expected = 1;
	int actual = object.getMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getMaxOccurs, MxEsLevel )
{
	MxEsLevel object;
	int expected = 1;
	int actual = object.getMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsMaxOccursUnbounded, MxEsLevel )
{
	MxEsLevel object;
	bool expected = false;
	bool actual = object.getIsMaxOccursUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: minOccurs maxOccurs ------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValue0, MxEsLevel )
{
	MxEsLevel object( XsString( "" ) );
	std::string expected;
	std::string actual;
	expected = "";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( XsString( XsString( "A,B,C" ) ) );
	expected = "A,B,C";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue2, MxEsLevel )
{
	MxEsLevel object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	expected = "D,E,F";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( XsString( XsString( "WOOF" ) ) );
	expected = "WOOF";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue4, MxEsLevel )
{
	MxEsLevel object( XsString( "X,Y,Z" ) );
	std::string expected;
	std::string actual;
	expected = "X,Y,Z";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( XsString( XsString( "A,B,C" ) ) );
	expected = "A,B,C";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue6, MxEsLevel )
{
	MxEsLevel object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	expected = "D,E,F";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( XsString( XsString( "WOOF" ) ) );
	expected = "WOOF";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValue8, MxEsLevel )
{
	MxEsLevel object( XsString( "X,Y,Z" ) );
	std::string expected;
	std::string actual;
	expected = "X,Y,Z";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( XsString( XsString( "A,B,C" ) ) );
	expected = "A,B,C";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Ctor tests with values  --------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxEsLevel )
{
	MxEsLevel object;
	std::string expected = "MxEsLevel";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxEsLevel )
{
	MxEsLevel object;
	std::string expected = "level";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxEsLevel )
{
	MxEsLevel object;
	std::string expected = "( no documentation )";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setReference0, MxEsLevel )
{
	MxEnumYesNo value1( lexicon::enums::YesNo::no );
	MxEnumYesNo value2( lexicon::enums::YesNo::yes );
	CHECK( ( value1 != value2 ) )
	MxEsLevel object;
	object.setReference( value1 );
	MxEnumYesNo expected = value1;
	MxEnumYesNo actual = object.getReference();
	CHECK_EQUAL( expected, actual )
	object.setReference( value2 );
	expected = value2;
	actual = object.getReference();
	CHECK_EQUAL( expected, actual )
}
TEST( setParentheses1, MxEsLevel )
{
	MxEnumYesNo value1( lexicon::enums::YesNo::no );
	MxEnumYesNo value2( lexicon::enums::YesNo::yes );
	CHECK( ( value1 != value2 ) )
	MxEsLevel object;
	object.setParentheses( value1 );
	MxEnumYesNo expected = value1;
	MxEnumYesNo actual = object.getParentheses();
	CHECK_EQUAL( expected, actual )
	object.setParentheses( value2 );
	expected = value2;
	actual = object.getParentheses();
	CHECK_EQUAL( expected, actual )
}
TEST( setBracket2, MxEsLevel )
{
	MxEnumYesNo value1( lexicon::enums::YesNo::no );
	MxEnumYesNo value2( lexicon::enums::YesNo::yes );
	CHECK( ( value1 != value2 ) )
	MxEsLevel object;
	object.setBracket( value1 );
	MxEnumYesNo expected = value1;
	MxEnumYesNo actual = object.getBracket();
	CHECK_EQUAL( expected, actual )
	object.setBracket( value2 );
	expected = value2;
	actual = object.getBracket();
	CHECK_EQUAL( expected, actual )
}
TEST( setSize3, MxEsLevel )
{
	MxEnumSymbolSize value1( lexicon::enums::SymbolSize::large );
	MxEnumSymbolSize value2( lexicon::enums::SymbolSize::cue );
	CHECK( ( value1 != value2 ) )
	MxEsLevel object;
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

TEST( getIsReferenceRequired0, MxEsLevel )
{
	MxEsLevel object;
	bool expected = false;
	bool actual = object.getIsReferenceRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsParenthesesRequired1, MxEsLevel )
{
	MxEsLevel object;
	bool expected = false;
	bool actual = object.getIsParenthesesRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsBracketRequired2, MxEsLevel )
{
	MxEsLevel object;
	bool expected = false;
	bool actual = object.getIsBracketRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsSizeRequired3, MxEsLevel )
{
	MxEsLevel object;
	bool expected = false;
	bool actual = object.getIsSizeRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsReferencePresent0, MxEsLevel )
{
	MxEsLevel object;
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
TEST( getIsParenthesesPresent1, MxEsLevel )
{
	MxEsLevel object;
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
TEST( getIsBracketPresent2, MxEsLevel )
{
	MxEsLevel object;
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
TEST( getIsSizePresent3, MxEsLevel )
{
	MxEsLevel object;
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

TEST( getIsReferenceDefaultDefined, MxEsLevel )
{
	MxEsLevel object;
	bool expected = true;
	bool actual = object.getIsReferenceDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsParenthesesDefaultDefined, MxEsLevel )
{
	MxEsLevel object;
	bool expected = false;
	bool actual = object.getIsParenthesesDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsBracketDefaultDefined, MxEsLevel )
{
	MxEsLevel object;
	bool expected = false;
	bool actual = object.getIsBracketDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsSizeDefaultDefined, MxEsLevel )
{
	MxEsLevel object;
	bool expected = false;
	bool actual = object.getIsSizeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getReferenceDefaultValue, MxEsLevel )
{
	MxEsLevel object;
	MxEnumYesNo expected( lexicon::enums::YesNo::no );
	MxEnumYesNo actual = object.getReferenceDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getParenthesesDefaultValue, MxEsLevel )
{
	MxEsLevel object;
	MxEnumYesNo expected;
	MxEnumYesNo actual = object.getParenthesesDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getBracketDefaultValue, MxEsLevel )
{
	MxEsLevel object;
	MxEnumYesNo expected;
	MxEnumYesNo actual = object.getBracketDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getSizeDefaultValue, MxEsLevel )
{
	MxEsLevel object;
	MxEnumSymbolSize expected;
	MxEnumSymbolSize actual = object.getSizeDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxEsLevel )
{
	MxEsLevel object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setReference( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::full ) );
	object.setIsReferencePresent( true );
	object.setIsParenthesesPresent( true );
	object.setIsBracketPresent( true );
	object.setIsSizePresent( true );
	expected = "<level reference=\"yes\" parentheses=\"yes\" bracket=\"yes\" size=\"full\">D,E,F</level>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxEsLevel )
{
	MxEsLevel object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsReferencePresent( false );
	object.setIsParenthesesPresent( true );
	object.setIsBracketPresent( true );
	object.setIsSizePresent( true );
	object.setReference( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::cue ) );
	expected = "<level parentheses=\"no\" bracket=\"no\" size=\"cue\">D,E,F</level>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString2, MxEsLevel )
{
	MxEsLevel object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsReferencePresent( true );
	object.setIsParenthesesPresent( false );
	object.setIsBracketPresent( true );
	object.setIsSizePresent( true );
	object.setReference( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::large ) );
	expected = "<level reference=\"yes\" bracket=\"yes\" size=\"large\">D,E,F</level>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString3, MxEsLevel )
{
	MxEsLevel object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsReferencePresent( false );
	object.setIsParenthesesPresent( false );
	object.setIsBracketPresent( false );
	object.setIsSizePresent( true );
	object.setReference( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::full ) );
	expected = "<level size=\"full\">D,E,F</level>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString4, MxEsLevel )
{
	MxEsLevel object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsReferencePresent( true );
	object.setIsParenthesesPresent( true );
	object.setIsBracketPresent( false );
	object.setIsSizePresent( false );
	object.setReference( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::cue ) );
	expected = "<level reference=\"yes\" parentheses=\"yes\">D,E,F</level>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString5, MxEsLevel )
{
	MxEsLevel object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsReferencePresent( false );
	object.setIsParenthesesPresent( true );
	object.setIsBracketPresent( false );
	object.setIsSizePresent( false );
	object.setReference( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::large ) );
	expected = "<level parentheses=\"no\">D,E,F</level>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString6, MxEsLevel )
{
	MxEsLevel object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsReferencePresent( true );
	object.setIsParenthesesPresent( false );
	object.setIsBracketPresent( true );
	object.setIsSizePresent( false );
	object.setReference( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::full ) );
	expected = "<level reference=\"yes\" bracket=\"yes\">D,E,F</level>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString7, MxEsLevel )
{
	MxEsLevel object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsReferencePresent( false );
	object.setIsParenthesesPresent( false );
	object.setIsBracketPresent( true );
	object.setIsSizePresent( false );
	object.setReference( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::cue ) );
	expected = "<level bracket=\"no\">D,E,F</level>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString8, MxEsLevel )
{
	MxEsLevel object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsReferencePresent( false );
	object.setIsParenthesesPresent( true );
	object.setIsBracketPresent( false );
	object.setIsSizePresent( true );
	object.setReference( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::large ) );
	expected = "<level parentheses=\"yes\" size=\"large\">D,E,F</level>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString9, MxEsLevel )
{
	MxEsLevel object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsReferencePresent( true );
	object.setIsParenthesesPresent( false );
	object.setIsBracketPresent( false );
	object.setIsSizePresent( true );
	object.setReference( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::full ) );
	expected = "<level reference=\"yes\" size=\"full\">D,E,F</level>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString10, MxEsLevel )
{
	MxEsLevel object( XsString( "D,E,F" ) );
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
	expected = "<level size=\"cue\">D,E,F</level>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString11, MxEsLevel )
{
	MxEsLevel object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsReferencePresent( true );
	object.setIsParenthesesPresent( true );
	object.setIsBracketPresent( true );
	object.setIsSizePresent( false );
	object.setReference( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::large ) );
	expected = "<level reference=\"yes\" parentheses=\"no\" bracket=\"no\">D,E,F</level>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString12, MxEsLevel )
{
	MxEsLevel object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsReferencePresent( false );
	object.setIsParenthesesPresent( true );
	object.setIsBracketPresent( true );
	object.setIsSizePresent( false );
	object.setReference( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::full ) );
	expected = "<level parentheses=\"yes\" bracket=\"yes\">D,E,F</level>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString13, MxEsLevel )
{
	MxEsLevel object( XsString( "D,E,F" ) );
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
	expected = "<level reference=\"yes\" bracket=\"no\">D,E,F</level>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString14, MxEsLevel )
{
	MxEsLevel object( XsString( "D,E,F" ) );
	std::string expected;
	std::string actual;
	object.setIsReferencePresent( false );
	object.setIsParenthesesPresent( false );
	object.setIsBracketPresent( false );
	object.setIsSizePresent( false );
	object.setReference( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::large ) );
	expected = "<level>D,E,F</level>";
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


