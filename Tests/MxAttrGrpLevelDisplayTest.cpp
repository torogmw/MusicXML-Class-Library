/** *******************************************************
  * 
  * MxAttrGrpLevelDisplayTest.cpp
  * Created: 2014-11-28 19:17:14
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxAttrGrpLevelDisplay.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxAttrGrpLevelDisplay )
{
	MxAttrGrpLevelDisplay object;
	CHECK( true )
}
TEST( ctorValues0, MxAttrGrpLevelDisplay )
{
	MxAttrGrpLevelDisplay object;
	std::string expected = ( MxEnumYesNo(  ) ).toString();
	std::string actual = object.getParentheses().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValues1, MxAttrGrpLevelDisplay )
{
	MxAttrGrpLevelDisplay object;
	std::string expected = ( MxEnumYesNo(  ) ).toString();
	std::string actual = object.getBracket().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValues2, MxAttrGrpLevelDisplay )
{
	MxAttrGrpLevelDisplay object;
	std::string expected = ( MxEnumSymbolSize(  ) ).toString();
	std::string actual = object.getSize().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxAttrGrpLevelDisplay )
{
	MxAttrGrpLevelDisplay object;
	std::string expected = "MxAttrGrpLevelDisplay";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxAttrGrpLevelDisplay )
{
	MxAttrGrpLevelDisplay object;
	std::string expected = "level-display";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxAttrGrpLevelDisplay )
{
	MxAttrGrpLevelDisplay object;
	std::string expected = "The level-display attribute group specifies three common ways to indicate editorial indications: putting parentheses or square brackets around a symbol, or making the symbol a different size. If not specified, they are left to application defaults. It is used by the level and accidental elements.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setParentheses0, MxAttrGrpLevelDisplay )
{
	MxEnumYesNo value1( lexicon::enums::YesNo::no );
	MxEnumYesNo value2( lexicon::enums::YesNo::yes );
	CHECK( ( value1 != value2 ) )
	MxAttrGrpLevelDisplay object;
	object.setParentheses( value1 );
	MxEnumYesNo expected = value1;
	MxEnumYesNo actual = object.getParentheses();
	CHECK_EQUAL( expected, actual )
	object.setParentheses( value2 );
	expected = value2;
	actual = object.getParentheses();
	CHECK_EQUAL( expected, actual )
}
TEST( setBracket1, MxAttrGrpLevelDisplay )
{
	MxEnumYesNo value1( lexicon::enums::YesNo::no );
	MxEnumYesNo value2( lexicon::enums::YesNo::yes );
	CHECK( ( value1 != value2 ) )
	MxAttrGrpLevelDisplay object;
	object.setBracket( value1 );
	MxEnumYesNo expected = value1;
	MxEnumYesNo actual = object.getBracket();
	CHECK_EQUAL( expected, actual )
	object.setBracket( value2 );
	expected = value2;
	actual = object.getBracket();
	CHECK_EQUAL( expected, actual )
}
TEST( setSize2, MxAttrGrpLevelDisplay )
{
	MxEnumSymbolSize value1( lexicon::enums::SymbolSize::large );
	MxEnumSymbolSize value2( lexicon::enums::SymbolSize::cue );
	CHECK( ( value1 != value2 ) )
	MxAttrGrpLevelDisplay object;
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

TEST( getIsParenthesesRequired0, MxAttrGrpLevelDisplay )
{
	MxAttrGrpLevelDisplay object;
	bool expected = false;
	bool actual = object.getIsParenthesesRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsBracketRequired1, MxAttrGrpLevelDisplay )
{
	MxAttrGrpLevelDisplay object;
	bool expected = false;
	bool actual = object.getIsBracketRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsSizeRequired2, MxAttrGrpLevelDisplay )
{
	MxAttrGrpLevelDisplay object;
	bool expected = false;
	bool actual = object.getIsSizeRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsParenthesesPresent0, MxAttrGrpLevelDisplay )
{
	MxAttrGrpLevelDisplay object;
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
TEST( getIsBracketPresent1, MxAttrGrpLevelDisplay )
{
	MxAttrGrpLevelDisplay object;
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
TEST( getIsSizePresent2, MxAttrGrpLevelDisplay )
{
	MxAttrGrpLevelDisplay object;
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

TEST( toString0, MxAttrGrpLevelDisplay )
{
	MxAttrGrpLevelDisplay object;
	std::string expected;
	std::string actual;
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::cue ) );
	object.setIsParenthesesPresent( true );
	object.setIsBracketPresent( true );
	object.setIsSizePresent( true );
	expected = "parentheses=\"no\" bracket=\"no\" size=\"cue\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxAttrGrpLevelDisplay )
{
	MxAttrGrpLevelDisplay object;
	std::string expected;
	std::string actual;
	object.setIsParenthesesPresent( false );
	object.setIsBracketPresent( true );
	object.setIsSizePresent( true );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::large ) );
	expected = "bracket=\"yes\" size=\"large\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString2, MxAttrGrpLevelDisplay )
{
	MxAttrGrpLevelDisplay object;
	std::string expected;
	std::string actual;
	object.setIsParenthesesPresent( true );
	object.setIsBracketPresent( false );
	object.setIsSizePresent( true );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::full ) );
	expected = "parentheses=\"no\" size=\"full\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString3, MxAttrGrpLevelDisplay )
{
	MxAttrGrpLevelDisplay object;
	std::string expected;
	std::string actual;
	object.setIsParenthesesPresent( false );
	object.setIsBracketPresent( false );
	object.setIsSizePresent( false );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::cue ) );
	expected = "";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString4, MxAttrGrpLevelDisplay )
{
	MxAttrGrpLevelDisplay object;
	std::string expected;
	std::string actual;
	object.setIsParenthesesPresent( true );
	object.setIsBracketPresent( true );
	object.setIsSizePresent( false );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::large ) );
	expected = "parentheses=\"no\" bracket=\"no\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString5, MxAttrGrpLevelDisplay )
{
	MxAttrGrpLevelDisplay object;
	std::string expected;
	std::string actual;
	object.setIsParenthesesPresent( false );
	object.setIsBracketPresent( true );
	object.setIsSizePresent( false );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::full ) );
	expected = "bracket=\"yes\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString6, MxAttrGrpLevelDisplay )
{
	MxAttrGrpLevelDisplay object;
	std::string expected;
	std::string actual;
	object.setIsParenthesesPresent( true );
	object.setIsBracketPresent( false );
	object.setIsSizePresent( true );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::no ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::cue ) );
	expected = "parentheses=\"no\" size=\"cue\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString7, MxAttrGrpLevelDisplay )
{
	MxAttrGrpLevelDisplay object;
	std::string expected;
	std::string actual;
	object.setIsParenthesesPresent( false );
	object.setIsBracketPresent( false );
	object.setIsSizePresent( true );
	object.setParentheses( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setBracket( MxEnumYesNo( lexicon::enums::YesNo::yes ) );
	object.setSize( MxEnumSymbolSize( lexicon::enums::SymbolSize::large ) );
	expected = "size=\"large\"";
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

TEST( getIsParenthesesDefaultDefined, MxAttrGrpLevelDisplay )
{
	MxAttrGrpLevelDisplay object;
	bool expected = false;
	bool actual = object.getIsParenthesesDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsBracketDefaultDefined, MxAttrGrpLevelDisplay )
{
	MxAttrGrpLevelDisplay object;
	bool expected = false;
	bool actual = object.getIsBracketDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsSizeDefaultDefined, MxAttrGrpLevelDisplay )
{
	MxAttrGrpLevelDisplay object;
	bool expected = false;
	bool actual = object.getIsSizeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getParenthesesDefaultValue, MxAttrGrpLevelDisplay )
{
	MxAttrGrpLevelDisplay object;
	MxEnumYesNo expected;
	MxEnumYesNo actual = object.getParenthesesDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getBracketDefaultValue, MxAttrGrpLevelDisplay )
{
	MxAttrGrpLevelDisplay object;
	MxEnumYesNo expected;
	MxEnumYesNo actual = object.getBracketDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getSizeDefaultValue, MxAttrGrpLevelDisplay )
{
	MxAttrGrpLevelDisplay object;
	MxEnumSymbolSize expected;
	MxEnumSymbolSize actual = object.getSizeDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


