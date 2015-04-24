#include "MxTestCompileControl.h"
#ifdef RUN_PHASE1_TESTS
#include "TestHarness.h"
#include "Enums.h"

TEST( AboveBelow_BadParse, Enums )
{
	mx::t::AboveBelow actual = mx::t::parseAboveBelow( "above" );
	mx::t::AboveBelow expected = mx::t::AboveBelow::above;
	CHECK_EQUAL( expected, actual )
}

TEST( AboveBelow_above, Enums )
{
	mx::t::AboveBelow e = mx::t::AboveBelow::above;
	std::string expected = "above";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::AboveBelow e2 = mx::t::parseAboveBelow( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( AboveBelow_below, Enums )
{
	mx::t::AboveBelow e = mx::t::AboveBelow::below;
	std::string expected = "below";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::AboveBelow e2 = mx::t::parseAboveBelow( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( CssFontSize_BadParse, Enums )
{
	mx::t::CssFontSize actual = mx::t::parseCssFontSize( "xx-small" );
	mx::t::CssFontSize expected = mx::t::CssFontSize::xxSmall;
	CHECK_EQUAL( expected, actual )
}

TEST( CssFontSize_xxSmall, Enums )
{
	mx::t::CssFontSize e = mx::t::CssFontSize::xxSmall;
	std::string expected = "xx-small";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::CssFontSize e2 = mx::t::parseCssFontSize( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( CssFontSize_xSmall, Enums )
{
	mx::t::CssFontSize e = mx::t::CssFontSize::xSmall;
	std::string expected = "x-small";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::CssFontSize e2 = mx::t::parseCssFontSize( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( CssFontSize_small, Enums )
{
	mx::t::CssFontSize e = mx::t::CssFontSize::small;
	std::string expected = "small";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::CssFontSize e2 = mx::t::parseCssFontSize( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( CssFontSize_medium, Enums )
{
	mx::t::CssFontSize e = mx::t::CssFontSize::medium;
	std::string expected = "medium";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::CssFontSize e2 = mx::t::parseCssFontSize( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( CssFontSize_large, Enums )
{
	mx::t::CssFontSize e = mx::t::CssFontSize::large;
	std::string expected = "large";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::CssFontSize e2 = mx::t::parseCssFontSize( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( CssFontSize_xLarge, Enums )
{
	mx::t::CssFontSize e = mx::t::CssFontSize::xLarge;
	std::string expected = "x-large";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::CssFontSize e2 = mx::t::parseCssFontSize( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( CssFontSize_xxLarge, Enums )
{
	mx::t::CssFontSize e = mx::t::CssFontSize::xxLarge;
	std::string expected = "xx-large";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::CssFontSize e2 = mx::t::parseCssFontSize( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( EnclosureShape_BadParse, Enums )
{
	mx::t::EnclosureShape actual = mx::t::parseEnclosureShape( "rectangle" );
	mx::t::EnclosureShape expected = mx::t::EnclosureShape::rectangle;
	CHECK_EQUAL( expected, actual )
}

TEST( EnclosureShape_rectangle, Enums )
{
	mx::t::EnclosureShape e = mx::t::EnclosureShape::rectangle;
	std::string expected = "rectangle";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::EnclosureShape e2 = mx::t::parseEnclosureShape( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( EnclosureShape_square, Enums )
{
	mx::t::EnclosureShape e = mx::t::EnclosureShape::square;
	std::string expected = "square";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::EnclosureShape e2 = mx::t::parseEnclosureShape( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( EnclosureShape_oval, Enums )
{
	mx::t::EnclosureShape e = mx::t::EnclosureShape::oval;
	std::string expected = "oval";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::EnclosureShape e2 = mx::t::parseEnclosureShape( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( EnclosureShape_circle, Enums )
{
	mx::t::EnclosureShape e = mx::t::EnclosureShape::circle;
	std::string expected = "circle";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::EnclosureShape e2 = mx::t::parseEnclosureShape( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( EnclosureShape_bracket, Enums )
{
	mx::t::EnclosureShape e = mx::t::EnclosureShape::bracket;
	std::string expected = "bracket";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::EnclosureShape e2 = mx::t::parseEnclosureShape( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( EnclosureShape_triangle, Enums )
{
	mx::t::EnclosureShape e = mx::t::EnclosureShape::triangle;
	std::string expected = "triangle";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::EnclosureShape e2 = mx::t::parseEnclosureShape( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( EnclosureShape_diamond, Enums )
{
	mx::t::EnclosureShape e = mx::t::EnclosureShape::diamond;
	std::string expected = "diamond";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::EnclosureShape e2 = mx::t::parseEnclosureShape( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( EnclosureShape_none, Enums )
{
	mx::t::EnclosureShape e = mx::t::EnclosureShape::none;
	std::string expected = "none";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::EnclosureShape e2 = mx::t::parseEnclosureShape( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( FermataShape_BadParse, Enums )
{
	mx::t::FermataShape actual = mx::t::parseFermataShape( "normal" );
	mx::t::FermataShape expected = mx::t::FermataShape::normal;
	CHECK_EQUAL( expected, actual )
}

TEST( FermataShape_normal, Enums )
{
	mx::t::FermataShape e = mx::t::FermataShape::normal;
	std::string expected = "normal";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::FermataShape e2 = mx::t::parseFermataShape( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( FermataShape_angled, Enums )
{
	mx::t::FermataShape e = mx::t::FermataShape::angled;
	std::string expected = "angled";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::FermataShape e2 = mx::t::parseFermataShape( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( FermataShape_square, Enums )
{
	mx::t::FermataShape e = mx::t::FermataShape::square;
	std::string expected = "square";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::FermataShape e2 = mx::t::parseFermataShape( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( FermataShape_emptystring, Enums )
{
	mx::t::FermataShape e = mx::t::FermataShape::emptystring;
	std::string expected = "";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::FermataShape e2 = mx::t::parseFermataShape( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( FontStyle_BadParse, Enums )
{
	mx::t::FontStyle actual = mx::t::parseFontStyle( "normal" );
	mx::t::FontStyle expected = mx::t::FontStyle::normal;
	CHECK_EQUAL( expected, actual )
}

TEST( FontStyle_normal, Enums )
{
	mx::t::FontStyle e = mx::t::FontStyle::normal;
	std::string expected = "normal";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::FontStyle e2 = mx::t::parseFontStyle( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( FontStyle_italic, Enums )
{
	mx::t::FontStyle e = mx::t::FontStyle::italic;
	std::string expected = "italic";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::FontStyle e2 = mx::t::parseFontStyle( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( FontWeight_BadParse, Enums )
{
	mx::t::FontWeight actual = mx::t::parseFontWeight( "normal" );
	mx::t::FontWeight expected = mx::t::FontWeight::normal;
	CHECK_EQUAL( expected, actual )
}

TEST( FontWeight_normal, Enums )
{
	mx::t::FontWeight e = mx::t::FontWeight::normal;
	std::string expected = "normal";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::FontWeight e2 = mx::t::parseFontWeight( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( FontWeight_bold, Enums )
{
	mx::t::FontWeight e = mx::t::FontWeight::bold;
	std::string expected = "bold";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::FontWeight e2 = mx::t::parseFontWeight( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( LeftCenterRight_BadParse, Enums )
{
	mx::t::LeftCenterRight actual = mx::t::parseLeftCenterRight( "left" );
	mx::t::LeftCenterRight expected = mx::t::LeftCenterRight::left;
	CHECK_EQUAL( expected, actual )
}

TEST( LeftCenterRight_left, Enums )
{
	mx::t::LeftCenterRight e = mx::t::LeftCenterRight::left;
	std::string expected = "left";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::LeftCenterRight e2 = mx::t::parseLeftCenterRight( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( LeftCenterRight_center, Enums )
{
	mx::t::LeftCenterRight e = mx::t::LeftCenterRight::center;
	std::string expected = "center";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::LeftCenterRight e2 = mx::t::parseLeftCenterRight( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( LeftCenterRight_right, Enums )
{
	mx::t::LeftCenterRight e = mx::t::LeftCenterRight::right;
	std::string expected = "right";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::LeftCenterRight e2 = mx::t::parseLeftCenterRight( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( LeftRight_BadParse, Enums )
{
	mx::t::LeftRight actual = mx::t::parseLeftRight( "left" );
	mx::t::LeftRight expected = mx::t::LeftRight::left;
	CHECK_EQUAL( expected, actual )
}

TEST( LeftRight_left, Enums )
{
	mx::t::LeftRight e = mx::t::LeftRight::left;
	std::string expected = "left";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::LeftRight e2 = mx::t::parseLeftRight( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( LeftRight_right, Enums )
{
	mx::t::LeftRight e = mx::t::LeftRight::right;
	std::string expected = "right";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::LeftRight e2 = mx::t::parseLeftRight( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( LineShape_BadParse, Enums )
{
	mx::t::LineShape actual = mx::t::parseLineShape( "straight" );
	mx::t::LineShape expected = mx::t::LineShape::straight;
	CHECK_EQUAL( expected, actual )
}

TEST( LineShape_straight, Enums )
{
	mx::t::LineShape e = mx::t::LineShape::straight;
	std::string expected = "straight";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::LineShape e2 = mx::t::parseLineShape( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( LineShape_curved, Enums )
{
	mx::t::LineShape e = mx::t::LineShape::curved;
	std::string expected = "curved";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::LineShape e2 = mx::t::parseLineShape( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( LineType_BadParse, Enums )
{
	mx::t::LineType actual = mx::t::parseLineType( "solid" );
	mx::t::LineType expected = mx::t::LineType::solid;
	CHECK_EQUAL( expected, actual )
}

TEST( LineType_solid, Enums )
{
	mx::t::LineType e = mx::t::LineType::solid;
	std::string expected = "solid";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::LineType e2 = mx::t::parseLineType( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( LineType_dashed, Enums )
{
	mx::t::LineType e = mx::t::LineType::dashed;
	std::string expected = "dashed";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::LineType e2 = mx::t::parseLineType( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( LineType_dotted, Enums )
{
	mx::t::LineType e = mx::t::LineType::dotted;
	std::string expected = "dotted";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::LineType e2 = mx::t::parseLineType( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( LineType_wavy, Enums )
{
	mx::t::LineType e = mx::t::LineType::wavy;
	std::string expected = "wavy";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::LineType e2 = mx::t::parseLineType( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Mute_BadParse, Enums )
{
	mx::t::MuteEnum actual = mx::t::parseMuteEnum( "on" );
	mx::t::MuteEnum expected = mx::t::MuteEnum::on;
	CHECK_EQUAL( expected, actual )
}

TEST( Mute_on, Enums )
{
	mx::t::MuteEnum e = mx::t::MuteEnum::on;
	std::string expected = "on";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::MuteEnum e2 = mx::t::parseMuteEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Mute_off, Enums )
{
	mx::t::MuteEnum e = mx::t::MuteEnum::off;
	std::string expected = "off";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::MuteEnum e2 = mx::t::parseMuteEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Mute_straight, Enums )
{
	mx::t::MuteEnum e = mx::t::MuteEnum::straight;
	std::string expected = "straight";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::MuteEnum e2 = mx::t::parseMuteEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Mute_cup, Enums )
{
	mx::t::MuteEnum e = mx::t::MuteEnum::cup;
	std::string expected = "cup";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::MuteEnum e2 = mx::t::parseMuteEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Mute_harmonNoStem, Enums )
{
	mx::t::MuteEnum e = mx::t::MuteEnum::harmonNoStem;
	std::string expected = "harmon-no-stem";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::MuteEnum e2 = mx::t::parseMuteEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Mute_harmonStem, Enums )
{
	mx::t::MuteEnum e = mx::t::MuteEnum::harmonStem;
	std::string expected = "harmon-stem";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::MuteEnum e2 = mx::t::parseMuteEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Mute_bucket, Enums )
{
	mx::t::MuteEnum e = mx::t::MuteEnum::bucket;
	std::string expected = "bucket";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::MuteEnum e2 = mx::t::parseMuteEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Mute_plunger, Enums )
{
	mx::t::MuteEnum e = mx::t::MuteEnum::plunger;
	std::string expected = "plunger";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::MuteEnum e2 = mx::t::parseMuteEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Mute_hat, Enums )
{
	mx::t::MuteEnum e = mx::t::MuteEnum::hat;
	std::string expected = "hat";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::MuteEnum e2 = mx::t::parseMuteEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Mute_solotone, Enums )
{
	mx::t::MuteEnum e = mx::t::MuteEnum::solotone;
	std::string expected = "solotone";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::MuteEnum e2 = mx::t::parseMuteEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Mute_practice, Enums )
{
	mx::t::MuteEnum e = mx::t::MuteEnum::practice;
	std::string expected = "practice";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::MuteEnum e2 = mx::t::parseMuteEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Mute_stopMute, Enums )
{
	mx::t::MuteEnum e = mx::t::MuteEnum::stopMute;
	std::string expected = "stop-mute";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::MuteEnum e2 = mx::t::parseMuteEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Mute_stopHand, Enums )
{
	mx::t::MuteEnum e = mx::t::MuteEnum::stopHand;
	std::string expected = "stop-hand";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::MuteEnum e2 = mx::t::parseMuteEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Mute_echo, Enums )
{
	mx::t::MuteEnum e = mx::t::MuteEnum::echo;
	std::string expected = "echo";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::MuteEnum e2 = mx::t::parseMuteEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Mute_palm, Enums )
{
	mx::t::MuteEnum e = mx::t::MuteEnum::palm;
	std::string expected = "palm";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::MuteEnum e2 = mx::t::parseMuteEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( OverUnder_BadParse, Enums )
{
	mx::t::OverUnder actual = mx::t::parseOverUnder( "over" );
	mx::t::OverUnder expected = mx::t::OverUnder::over;
	CHECK_EQUAL( expected, actual )
}

TEST( OverUnder_over, Enums )
{
	mx::t::OverUnder e = mx::t::OverUnder::over;
	std::string expected = "over";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::OverUnder e2 = mx::t::parseOverUnder( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( OverUnder_under, Enums )
{
	mx::t::OverUnder e = mx::t::OverUnder::under;
	std::string expected = "under";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::OverUnder e2 = mx::t::parseOverUnder( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( SemiPitchedEnum_BadParse, Enums )
{
	mx::t::SemiPitchedEnum actual = mx::t::parseSemiPitchedEnum( "high" );
	mx::t::SemiPitchedEnum expected = mx::t::SemiPitchedEnum::high;
	CHECK_EQUAL( expected, actual )
}

TEST( SemiPitchedEnum_high, Enums )
{
	mx::t::SemiPitchedEnum e = mx::t::SemiPitchedEnum::high;
	std::string expected = "high";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::SemiPitchedEnum e2 = mx::t::parseSemiPitchedEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( SemiPitchedEnum_mediumHigh, Enums )
{
	mx::t::SemiPitchedEnum e = mx::t::SemiPitchedEnum::mediumHigh;
	std::string expected = "medium-high";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::SemiPitchedEnum e2 = mx::t::parseSemiPitchedEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( SemiPitchedEnum_medium, Enums )
{
	mx::t::SemiPitchedEnum e = mx::t::SemiPitchedEnum::medium;
	std::string expected = "medium";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::SemiPitchedEnum e2 = mx::t::parseSemiPitchedEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( SemiPitchedEnum_mediumLow, Enums )
{
	mx::t::SemiPitchedEnum e = mx::t::SemiPitchedEnum::mediumLow;
	std::string expected = "medium-low";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::SemiPitchedEnum e2 = mx::t::parseSemiPitchedEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( SemiPitchedEnum_low, Enums )
{
	mx::t::SemiPitchedEnum e = mx::t::SemiPitchedEnum::low;
	std::string expected = "low";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::SemiPitchedEnum e2 = mx::t::parseSemiPitchedEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( SemiPitchedEnum_veryLow, Enums )
{
	mx::t::SemiPitchedEnum e = mx::t::SemiPitchedEnum::veryLow;
	std::string expected = "very-low";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::SemiPitchedEnum e2 = mx::t::parseSemiPitchedEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( StartNote_BadParse, Enums )
{
	mx::t::StartNote actual = mx::t::parseStartNote( "upper" );
	mx::t::StartNote expected = mx::t::StartNote::upper;
	CHECK_EQUAL( expected, actual )
}

TEST( StartNote_upper, Enums )
{
	mx::t::StartNote e = mx::t::StartNote::upper;
	std::string expected = "upper";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::StartNote e2 = mx::t::parseStartNote( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( StartNote_main, Enums )
{
	mx::t::StartNote e = mx::t::StartNote::main;
	std::string expected = "main";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::StartNote e2 = mx::t::parseStartNote( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( StartNote_below, Enums )
{
	mx::t::StartNote e = mx::t::StartNote::below;
	std::string expected = "below";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::StartNote e2 = mx::t::parseStartNote( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( StartStop_BadParse, Enums )
{
	mx::t::StartStop actual = mx::t::parseStartStop( "start" );
	mx::t::StartStop expected = mx::t::StartStop::start;
	CHECK_EQUAL( expected, actual )
}

TEST( StartStop_start, Enums )
{
	mx::t::StartStop e = mx::t::StartStop::start;
	std::string expected = "start";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::StartStop e2 = mx::t::parseStartStop( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( StartStop_stop, Enums )
{
	mx::t::StartStop e = mx::t::StartStop::stop;
	std::string expected = "stop";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::StartStop e2 = mx::t::parseStartStop( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( StartStopContinue_BadParse, Enums )
{
	mx::t::StartStopContinue actual = mx::t::parseStartStopContinue( "start" );
	mx::t::StartStopContinue expected = mx::t::StartStopContinue::start;
	CHECK_EQUAL( expected, actual )
}

TEST( StartStopContinue_start, Enums )
{
	mx::t::StartStopContinue e = mx::t::StartStopContinue::start;
	std::string expected = "start";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::StartStopContinue e2 = mx::t::parseStartStopContinue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( StartStopContinue_stop, Enums )
{
	mx::t::StartStopContinue e = mx::t::StartStopContinue::stop;
	std::string expected = "stop";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::StartStopContinue e2 = mx::t::parseStartStopContinue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( StartStopContinue_continue_, Enums )
{
	mx::t::StartStopContinue e = mx::t::StartStopContinue::continue_;
	std::string expected = "continue";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::StartStopContinue e2 = mx::t::parseStartStopContinue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( StartStopSingle_BadParse, Enums )
{
	mx::t::StartStopSingle actual = mx::t::parseStartStopSingle( "start" );
	mx::t::StartStopSingle expected = mx::t::StartStopSingle::start;
	CHECK_EQUAL( expected, actual )
}

TEST( StartStopSingle_start, Enums )
{
	mx::t::StartStopSingle e = mx::t::StartStopSingle::start;
	std::string expected = "start";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::StartStopSingle e2 = mx::t::parseStartStopSingle( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( StartStopSingle_stop, Enums )
{
	mx::t::StartStopSingle e = mx::t::StartStopSingle::stop;
	std::string expected = "stop";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::StartStopSingle e2 = mx::t::parseStartStopSingle( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( StartStopSingle_single, Enums )
{
	mx::t::StartStopSingle e = mx::t::StartStopSingle::single;
	std::string expected = "single";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::StartStopSingle e2 = mx::t::parseStartStopSingle( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( SymbolSize_BadParse, Enums )
{
	mx::t::SymbolSize actual = mx::t::parseSymbolSize( "full" );
	mx::t::SymbolSize expected = mx::t::SymbolSize::full;
	CHECK_EQUAL( expected, actual )
}

TEST( SymbolSize_full, Enums )
{
	mx::t::SymbolSize e = mx::t::SymbolSize::full;
	std::string expected = "full";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::SymbolSize e2 = mx::t::parseSymbolSize( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( SymbolSize_cue, Enums )
{
	mx::t::SymbolSize e = mx::t::SymbolSize::cue;
	std::string expected = "cue";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::SymbolSize e2 = mx::t::parseSymbolSize( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( SymbolSize_large, Enums )
{
	mx::t::SymbolSize e = mx::t::SymbolSize::large;
	std::string expected = "large";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::SymbolSize e2 = mx::t::parseSymbolSize( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( TextDirection_BadParse, Enums )
{
	mx::t::TextDirection actual = mx::t::parseTextDirection( "ltr" );
	mx::t::TextDirection expected = mx::t::TextDirection::ltr;
	CHECK_EQUAL( expected, actual )
}

TEST( TextDirection_ltr, Enums )
{
	mx::t::TextDirection e = mx::t::TextDirection::ltr;
	std::string expected = "ltr";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::TextDirection e2 = mx::t::parseTextDirection( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( TextDirection_rtl, Enums )
{
	mx::t::TextDirection e = mx::t::TextDirection::rtl;
	std::string expected = "rtl";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::TextDirection e2 = mx::t::parseTextDirection( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( TextDirection_lro, Enums )
{
	mx::t::TextDirection e = mx::t::TextDirection::lro;
	std::string expected = "lro";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::TextDirection e2 = mx::t::parseTextDirection( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( TextDirection_rlo, Enums )
{
	mx::t::TextDirection e = mx::t::TextDirection::rlo;
	std::string expected = "rlo";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::TextDirection e2 = mx::t::parseTextDirection( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( TopBottom_BadParse, Enums )
{
	mx::t::TopBottom actual = mx::t::parseTopBottom( "top" );
	mx::t::TopBottom expected = mx::t::TopBottom::top;
	CHECK_EQUAL( expected, actual )
}

TEST( TopBottom_top, Enums )
{
	mx::t::TopBottom e = mx::t::TopBottom::top;
	std::string expected = "top";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::TopBottom e2 = mx::t::parseTopBottom( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( TopBottom_bottom, Enums )
{
	mx::t::TopBottom e = mx::t::TopBottom::bottom;
	std::string expected = "bottom";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::TopBottom e2 = mx::t::parseTopBottom( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( TrillStep_BadParse, Enums )
{
	mx::t::TrillStep actual = mx::t::parseTrillStep( "whole" );
	mx::t::TrillStep expected = mx::t::TrillStep::whole;
	CHECK_EQUAL( expected, actual )
}

TEST( TrillStep_whole, Enums )
{
	mx::t::TrillStep e = mx::t::TrillStep::whole;
	std::string expected = "whole";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::TrillStep e2 = mx::t::parseTrillStep( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( TrillStep_half, Enums )
{
	mx::t::TrillStep e = mx::t::TrillStep::half;
	std::string expected = "half";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::TrillStep e2 = mx::t::parseTrillStep( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( TrillStep_unison, Enums )
{
	mx::t::TrillStep e = mx::t::TrillStep::unison;
	std::string expected = "unison";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::TrillStep e2 = mx::t::parseTrillStep( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( TwoNoteTurn_BadParse, Enums )
{
	mx::t::TwoNoteTurn actual = mx::t::parseTwoNoteTurn( "whole" );
	mx::t::TwoNoteTurn expected = mx::t::TwoNoteTurn::whole;
	CHECK_EQUAL( expected, actual )
}

TEST( TwoNoteTurn_whole, Enums )
{
	mx::t::TwoNoteTurn e = mx::t::TwoNoteTurn::whole;
	std::string expected = "whole";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::TwoNoteTurn e2 = mx::t::parseTwoNoteTurn( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( TwoNoteTurn_half, Enums )
{
	mx::t::TwoNoteTurn e = mx::t::TwoNoteTurn::half;
	std::string expected = "half";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::TwoNoteTurn e2 = mx::t::parseTwoNoteTurn( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( TwoNoteTurn_none, Enums )
{
	mx::t::TwoNoteTurn e = mx::t::TwoNoteTurn::none;
	std::string expected = "none";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::TwoNoteTurn e2 = mx::t::parseTwoNoteTurn( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( UpDown_BadParse, Enums )
{
	mx::t::UpDown actual = mx::t::parseUpDown( "up" );
	mx::t::UpDown expected = mx::t::UpDown::up;
	CHECK_EQUAL( expected, actual )
}

TEST( UpDown_up, Enums )
{
	mx::t::UpDown e = mx::t::UpDown::up;
	std::string expected = "up";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::UpDown e2 = mx::t::parseUpDown( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( UpDown_down, Enums )
{
	mx::t::UpDown e = mx::t::UpDown::down;
	std::string expected = "down";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::UpDown e2 = mx::t::parseUpDown( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( UprightInverted_BadParse, Enums )
{
	mx::t::UprightInverted actual = mx::t::parseUprightInverted( "upright" );
	mx::t::UprightInverted expected = mx::t::UprightInverted::upright;
	CHECK_EQUAL( expected, actual )
}

TEST( UprightInverted_upright, Enums )
{
	mx::t::UprightInverted e = mx::t::UprightInverted::upright;
	std::string expected = "upright";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::UprightInverted e2 = mx::t::parseUprightInverted( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( UprightInverted_inverted, Enums )
{
	mx::t::UprightInverted e = mx::t::UprightInverted::inverted;
	std::string expected = "inverted";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::UprightInverted e2 = mx::t::parseUprightInverted( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Valign_BadParse, Enums )
{
	mx::t::Valign actual = mx::t::parseValign( "top" );
	mx::t::Valign expected = mx::t::Valign::top;
	CHECK_EQUAL( expected, actual )
}

TEST( Valign_top, Enums )
{
	mx::t::Valign e = mx::t::Valign::top;
	std::string expected = "top";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::Valign e2 = mx::t::parseValign( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Valign_middle, Enums )
{
	mx::t::Valign e = mx::t::Valign::middle;
	std::string expected = "middle";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::Valign e2 = mx::t::parseValign( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Valign_bottom, Enums )
{
	mx::t::Valign e = mx::t::Valign::bottom;
	std::string expected = "bottom";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::Valign e2 = mx::t::parseValign( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Valign_baseline, Enums )
{
	mx::t::Valign e = mx::t::Valign::baseline;
	std::string expected = "baseline";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::Valign e2 = mx::t::parseValign( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( ValignImage_BadParse, Enums )
{
	mx::t::ValignImage actual = mx::t::parseValignImage( "top" );
	mx::t::ValignImage expected = mx::t::ValignImage::top;
	CHECK_EQUAL( expected, actual )
}

TEST( ValignImage_top, Enums )
{
	mx::t::ValignImage e = mx::t::ValignImage::top;
	std::string expected = "top";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::ValignImage e2 = mx::t::parseValignImage( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( ValignImage_middle, Enums )
{
	mx::t::ValignImage e = mx::t::ValignImage::middle;
	std::string expected = "middle";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::ValignImage e2 = mx::t::parseValignImage( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( ValignImage_bottom, Enums )
{
	mx::t::ValignImage e = mx::t::ValignImage::bottom;
	std::string expected = "bottom";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::ValignImage e2 = mx::t::parseValignImage( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( YesNo_BadParse, Enums )
{
	mx::t::YesNo actual = mx::t::parseYesNo( "yes" );
	mx::t::YesNo expected = mx::t::YesNo::yes;
	CHECK_EQUAL( expected, actual )
}

TEST( YesNo_yes, Enums )
{
	mx::t::YesNo e = mx::t::YesNo::yes;
	std::string expected = "yes";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::YesNo e2 = mx::t::parseYesNo( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( YesNo_no, Enums )
{
	mx::t::YesNo e = mx::t::YesNo::no;
	std::string expected = "no";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::YesNo e2 = mx::t::parseYesNo( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( CancelLocation_BadParse, Enums )
{
	mx::t::CancelLocation actual = mx::t::parseCancelLocation( "left" );
	mx::t::CancelLocation expected = mx::t::CancelLocation::left;
	CHECK_EQUAL( expected, actual )
}

TEST( CancelLocation_left, Enums )
{
	mx::t::CancelLocation e = mx::t::CancelLocation::left;
	std::string expected = "left";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::CancelLocation e2 = mx::t::parseCancelLocation( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( CancelLocation_right, Enums )
{
	mx::t::CancelLocation e = mx::t::CancelLocation::right;
	std::string expected = "right";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::CancelLocation e2 = mx::t::parseCancelLocation( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( CancelLocation_beforeBarline, Enums )
{
	mx::t::CancelLocation e = mx::t::CancelLocation::beforeBarline;
	std::string expected = "before-barline";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::CancelLocation e2 = mx::t::parseCancelLocation( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( ClefSign_BadParse, Enums )
{
	mx::t::ClefSign actual = mx::t::parseClefSign( "G" );
	mx::t::ClefSign expected = mx::t::ClefSign::g;
	CHECK_EQUAL( expected, actual )
}

TEST( ClefSign_g, Enums )
{
	mx::t::ClefSign e = mx::t::ClefSign::g;
	std::string expected = "G";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::ClefSign e2 = mx::t::parseClefSign( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( ClefSign_f, Enums )
{
	mx::t::ClefSign e = mx::t::ClefSign::f;
	std::string expected = "F";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::ClefSign e2 = mx::t::parseClefSign( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( ClefSign_c, Enums )
{
	mx::t::ClefSign e = mx::t::ClefSign::c;
	std::string expected = "C";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::ClefSign e2 = mx::t::parseClefSign( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( ClefSign_percussion, Enums )
{
	mx::t::ClefSign e = mx::t::ClefSign::percussion;
	std::string expected = "percussion";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::ClefSign e2 = mx::t::parseClefSign( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( ClefSign_tab, Enums )
{
	mx::t::ClefSign e = mx::t::ClefSign::tab;
	std::string expected = "TAB";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::ClefSign e2 = mx::t::parseClefSign( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( ClefSign_jianpu, Enums )
{
	mx::t::ClefSign e = mx::t::ClefSign::jianpu;
	std::string expected = "jianpu";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::ClefSign e2 = mx::t::parseClefSign( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( ClefSign_none, Enums )
{
	mx::t::ClefSign e = mx::t::ClefSign::none;
	std::string expected = "none";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::ClefSign e2 = mx::t::parseClefSign( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( ShowFrets_BadParse, Enums )
{
	mx::t::ShowFrets actual = mx::t::parseShowFrets( "numbers" );
	mx::t::ShowFrets expected = mx::t::ShowFrets::numbers;
	CHECK_EQUAL( expected, actual )
}

TEST( ShowFrets_numbers, Enums )
{
	mx::t::ShowFrets e = mx::t::ShowFrets::numbers;
	std::string expected = "numbers";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::ShowFrets e2 = mx::t::parseShowFrets( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( ShowFrets_letters, Enums )
{
	mx::t::ShowFrets e = mx::t::ShowFrets::letters;
	std::string expected = "letters";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::ShowFrets e2 = mx::t::parseShowFrets( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( StaffType_BadParse, Enums )
{
	mx::t::StaffTypeEnum actual = mx::t::parseStaffTypeEnum ( "ossia" );
	mx::t::StaffTypeEnum expected = mx::t::StaffTypeEnum::ossia;
	CHECK_EQUAL( expected, actual )
}

TEST( StaffType_ossia, Enums )
{
	mx::t::StaffTypeEnum e = mx::t::StaffTypeEnum::ossia;
	std::string expected = "ossia";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::StaffTypeEnum e2 = mx::t::parseStaffTypeEnum ( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( StaffType_cue, Enums )
{
	mx::t::StaffTypeEnum e = mx::t::StaffTypeEnum::cue;
	std::string expected = "cue";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::StaffTypeEnum e2 = mx::t::parseStaffTypeEnum ( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( StaffType_editorial, Enums )
{
	mx::t::StaffTypeEnum e = mx::t::StaffTypeEnum::editorial;
	std::string expected = "editorial";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::StaffTypeEnum e2 = mx::t::parseStaffTypeEnum ( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( StaffType_regular, Enums )
{
	mx::t::StaffTypeEnum e = mx::t::StaffTypeEnum::regular;
	std::string expected = "regular";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::StaffTypeEnum e2 = mx::t::parseStaffTypeEnum ( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( StaffType_alternate, Enums )
{
	mx::t::StaffTypeEnum e = mx::t::StaffTypeEnum::alternate;
	std::string expected = "alternate";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::StaffTypeEnum e2 = mx::t::parseStaffTypeEnum ( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( TimeRelation_BadParse, Enums )
{
	mx::t::TimeRelationEnum actual = mx::t::parseTimeRelationEnum( "parentheses" );
	mx::t::TimeRelationEnum expected = mx::t::TimeRelationEnum::parentheses;
	CHECK_EQUAL( expected, actual )
}

TEST( TimeRelation_parentheses, Enums )
{
	mx::t::TimeRelationEnum e = mx::t::TimeRelationEnum::parentheses;
	std::string expected = "parentheses";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::TimeRelationEnum e2 = mx::t::parseTimeRelationEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( TimeRelation_bracket, Enums )
{
	mx::t::TimeRelationEnum e = mx::t::TimeRelationEnum::bracket;
	std::string expected = "bracket";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::TimeRelationEnum e2 = mx::t::parseTimeRelationEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( TimeRelation_equals, Enums )
{
	mx::t::TimeRelationEnum e = mx::t::TimeRelationEnum::equals;
	std::string expected = "equals";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::TimeRelationEnum e2 = mx::t::parseTimeRelationEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( TimeRelation_slash, Enums )
{
	mx::t::TimeRelationEnum e = mx::t::TimeRelationEnum::slash;
	std::string expected = "slash";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::TimeRelationEnum e2 = mx::t::parseTimeRelationEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( TimeRelation_space, Enums )
{
	mx::t::TimeRelationEnum e = mx::t::TimeRelationEnum::space;
	std::string expected = "space";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::TimeRelationEnum e2 = mx::t::parseTimeRelationEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( TimeRelation_hyphen, Enums )
{
	mx::t::TimeRelationEnum e = mx::t::TimeRelationEnum::hyphen;
	std::string expected = "hyphen";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::TimeRelationEnum e2 = mx::t::parseTimeRelationEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( TimeSeparator_BadParse, Enums )
{
	mx::t::TimeSeparator actual = mx::t::parseTimeSeparator( "none" );
	mx::t::TimeSeparator expected = mx::t::TimeSeparator::none;
	CHECK_EQUAL( expected, actual )
}

TEST( TimeSeparator_none, Enums )
{
	mx::t::TimeSeparator e = mx::t::TimeSeparator::none;
	std::string expected = "none";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::TimeSeparator e2 = mx::t::parseTimeSeparator( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( TimeSeparator_horizontal, Enums )
{
	mx::t::TimeSeparator e = mx::t::TimeSeparator::horizontal;
	std::string expected = "horizontal";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::TimeSeparator e2 = mx::t::parseTimeSeparator( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( TimeSeparator_diagonal, Enums )
{
	mx::t::TimeSeparator e = mx::t::TimeSeparator::diagonal;
	std::string expected = "diagonal";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::TimeSeparator e2 = mx::t::parseTimeSeparator( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( TimeSeparator_vertical, Enums )
{
	mx::t::TimeSeparator e = mx::t::TimeSeparator::vertical;
	std::string expected = "vertical";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::TimeSeparator e2 = mx::t::parseTimeSeparator( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( TimeSeparator_adjacent, Enums )
{
	mx::t::TimeSeparator e = mx::t::TimeSeparator::adjacent;
	std::string expected = "adjacent";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::TimeSeparator e2 = mx::t::parseTimeSeparator( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( TimeSymbol_BadParse, Enums )
{
	mx::t::TimeSymbol actual = mx::t::parseTimeSymbol( "common" );
	mx::t::TimeSymbol expected = mx::t::TimeSymbol::common;
	CHECK_EQUAL( expected, actual )
}

TEST( TimeSymbol_common, Enums )
{
	mx::t::TimeSymbol e = mx::t::TimeSymbol::common;
	std::string expected = "common";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::TimeSymbol e2 = mx::t::parseTimeSymbol( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( TimeSymbol_cut, Enums )
{
	mx::t::TimeSymbol e = mx::t::TimeSymbol::cut;
	std::string expected = "cut";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::TimeSymbol e2 = mx::t::parseTimeSymbol( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( TimeSymbol_singleNumber, Enums )
{
	mx::t::TimeSymbol e = mx::t::TimeSymbol::singleNumber;
	std::string expected = "single-number";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::TimeSymbol e2 = mx::t::parseTimeSymbol( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( TimeSymbol_note, Enums )
{
	mx::t::TimeSymbol e = mx::t::TimeSymbol::note;
	std::string expected = "note";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::TimeSymbol e2 = mx::t::parseTimeSymbol( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( TimeSymbol_dottedNote, Enums )
{
	mx::t::TimeSymbol e = mx::t::TimeSymbol::dottedNote;
	std::string expected = "dotted-note";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::TimeSymbol e2 = mx::t::parseTimeSymbol( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( TimeSymbol_normal, Enums )
{
	mx::t::TimeSymbol e = mx::t::TimeSymbol::normal;
	std::string expected = "normal";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::TimeSymbol e2 = mx::t::parseTimeSymbol( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( BackwardForward_BadParse, Enums )
{
	mx::t::BackwardForward actual = mx::t::parseBackwardForward( "backward" );
	mx::t::BackwardForward expected = mx::t::BackwardForward::backward;
	CHECK_EQUAL( expected, actual )
}

TEST( BackwardForward_backward, Enums )
{
	mx::t::BackwardForward e = mx::t::BackwardForward::backward;
	std::string expected = "backward";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::BackwardForward e2 = mx::t::parseBackwardForward( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( BackwardForward_forward, Enums )
{
	mx::t::BackwardForward e = mx::t::BackwardForward::forward;
	std::string expected = "forward";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::BackwardForward e2 = mx::t::parseBackwardForward( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( BarStyleEnum_BadParse, Enums )
{
	mx::t::BarStyleEnum actual = mx::t::parseBarStyleEnum( "regular" );
	mx::t::BarStyleEnum expected = mx::t::BarStyleEnum::regular;
	CHECK_EQUAL( expected, actual )
}

TEST( BarStyleEnum_regular, Enums )
{
	mx::t::BarStyleEnum e = mx::t::BarStyleEnum::regular;
	std::string expected = "regular";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::BarStyleEnum e2 = mx::t::parseBarStyleEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( BarStyleEnum_dotted, Enums )
{
	mx::t::BarStyleEnum e = mx::t::BarStyleEnum::dotted;
	std::string expected = "dotted";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::BarStyleEnum e2 = mx::t::parseBarStyleEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( BarStyleEnum_dashed, Enums )
{
	mx::t::BarStyleEnum e = mx::t::BarStyleEnum::dashed;
	std::string expected = "dashed";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::BarStyleEnum e2 = mx::t::parseBarStyleEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( BarStyleEnum_heavy, Enums )
{
	mx::t::BarStyleEnum e = mx::t::BarStyleEnum::heavy;
	std::string expected = "heavy";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::BarStyleEnum e2 = mx::t::parseBarStyleEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( BarStyleEnum_lightLight, Enums )
{
	mx::t::BarStyleEnum e = mx::t::BarStyleEnum::lightLight;
	std::string expected = "light-light";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::BarStyleEnum e2 = mx::t::parseBarStyleEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( BarStyleEnum_lightHeavy, Enums )
{
	mx::t::BarStyleEnum e = mx::t::BarStyleEnum::lightHeavy;
	std::string expected = "light-heavy";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::BarStyleEnum e2 = mx::t::parseBarStyleEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( BarStyleEnum_heavyLight, Enums )
{
	mx::t::BarStyleEnum e = mx::t::BarStyleEnum::heavyLight;
	std::string expected = "heavy-light";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::BarStyleEnum e2 = mx::t::parseBarStyleEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( BarStyleEnum_heavyHeavy, Enums )
{
	mx::t::BarStyleEnum e = mx::t::BarStyleEnum::heavyHeavy;
	std::string expected = "heavy-heavy";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::BarStyleEnum e2 = mx::t::parseBarStyleEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( BarStyleEnum_tick, Enums )
{
	mx::t::BarStyleEnum e = mx::t::BarStyleEnum::tick;
	std::string expected = "tick";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::BarStyleEnum e2 = mx::t::parseBarStyleEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( BarStyleEnum_short_, Enums )
{
	mx::t::BarStyleEnum e = mx::t::BarStyleEnum::short_;
	std::string expected = "short";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::BarStyleEnum e2 = mx::t::parseBarStyleEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( BarStyleEnum_none, Enums )
{
	mx::t::BarStyleEnum e = mx::t::BarStyleEnum::none;
	std::string expected = "none";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::BarStyleEnum e2 = mx::t::parseBarStyleEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( RightLeftMiddle_BadParse, Enums )
{
	mx::t::RightLeftMiddle actual = mx::t::parseRightLeftMiddle( "right" );
	mx::t::RightLeftMiddle expected = mx::t::RightLeftMiddle::right;
	CHECK_EQUAL( expected, actual )
}

TEST( RightLeftMiddle_right, Enums )
{
	mx::t::RightLeftMiddle e = mx::t::RightLeftMiddle::right;
	std::string expected = "right";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::RightLeftMiddle e2 = mx::t::parseRightLeftMiddle( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( RightLeftMiddle_left, Enums )
{
	mx::t::RightLeftMiddle e = mx::t::RightLeftMiddle::left;
	std::string expected = "left";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::RightLeftMiddle e2 = mx::t::parseRightLeftMiddle( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( RightLeftMiddle_middle, Enums )
{
	mx::t::RightLeftMiddle e = mx::t::RightLeftMiddle::middle;
	std::string expected = "middle";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::RightLeftMiddle e2 = mx::t::parseRightLeftMiddle( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( StartStopDiscontinue_BadParse, Enums )
{
	mx::t::StartStopDiscontinue actual = mx::t::parseStartStopDiscontinue( "start" );
	mx::t::StartStopDiscontinue expected = mx::t::StartStopDiscontinue::start;
	CHECK_EQUAL( expected, actual )
}

TEST( StartStopDiscontinue_start, Enums )
{
	mx::t::StartStopDiscontinue e = mx::t::StartStopDiscontinue::start;
	std::string expected = "start";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::StartStopDiscontinue e2 = mx::t::parseStartStopDiscontinue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( StartStopDiscontinue_stop, Enums )
{
	mx::t::StartStopDiscontinue e = mx::t::StartStopDiscontinue::stop;
	std::string expected = "stop";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::StartStopDiscontinue e2 = mx::t::parseStartStopDiscontinue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( StartStopDiscontinue_discontinue, Enums )
{
	mx::t::StartStopDiscontinue e = mx::t::StartStopDiscontinue::discontinue;
	std::string expected = "discontinue";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::StartStopDiscontinue e2 = mx::t::parseStartStopDiscontinue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Winged_BadParse, Enums )
{
	mx::t::Winged actual = mx::t::parseWinged( "none" );
	mx::t::Winged expected = mx::t::Winged::none;
	CHECK_EQUAL( expected, actual )
}

TEST( Winged_none, Enums )
{
	mx::t::Winged e = mx::t::Winged::none;
	std::string expected = "none";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::Winged e2 = mx::t::parseWinged( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Winged_straight, Enums )
{
	mx::t::Winged e = mx::t::Winged::straight;
	std::string expected = "straight";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::Winged e2 = mx::t::parseWinged( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Winged_curved, Enums )
{
	mx::t::Winged e = mx::t::Winged::curved;
	std::string expected = "curved";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::Winged e2 = mx::t::parseWinged( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Winged_doubleStraight, Enums )
{
	mx::t::Winged e = mx::t::Winged::doubleStraight;
	std::string expected = "double-straight";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::Winged e2 = mx::t::parseWinged( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Winged_doubleCurved, Enums )
{
	mx::t::Winged e = mx::t::Winged::doubleCurved;
	std::string expected = "double-curved";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::Winged e2 = mx::t::parseWinged( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( BeaterValue_BadParse, Enums )
{
	mx::t::BeaterValue actual = mx::t::parseBeaterValue( "bow" );
	mx::t::BeaterValue expected = mx::t::BeaterValue::bow;
	CHECK_EQUAL( expected, actual )
}

TEST( BeaterValue_bow, Enums )
{
	mx::t::BeaterValue e = mx::t::BeaterValue::bow;
	std::string expected = "bow";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::BeaterValue e2 = mx::t::parseBeaterValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( BeaterValue_chimeHammer, Enums )
{
	mx::t::BeaterValue e = mx::t::BeaterValue::chimeHammer;
	std::string expected = "chime hammer";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::BeaterValue e2 = mx::t::parseBeaterValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( BeaterValue_coin, Enums )
{
	mx::t::BeaterValue e = mx::t::BeaterValue::coin;
	std::string expected = "coin";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::BeaterValue e2 = mx::t::parseBeaterValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( BeaterValue_finger, Enums )
{
	mx::t::BeaterValue e = mx::t::BeaterValue::finger;
	std::string expected = "finger";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::BeaterValue e2 = mx::t::parseBeaterValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( BeaterValue_fingernail, Enums )
{
	mx::t::BeaterValue e = mx::t::BeaterValue::fingernail;
	std::string expected = "fingernail";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::BeaterValue e2 = mx::t::parseBeaterValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( BeaterValue_fist, Enums )
{
	mx::t::BeaterValue e = mx::t::BeaterValue::fist;
	std::string expected = "fist";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::BeaterValue e2 = mx::t::parseBeaterValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( BeaterValue_guiroScraper, Enums )
{
	mx::t::BeaterValue e = mx::t::BeaterValue::guiroScraper;
	std::string expected = "guiro scraper";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::BeaterValue e2 = mx::t::parseBeaterValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( BeaterValue_hammer, Enums )
{
	mx::t::BeaterValue e = mx::t::BeaterValue::hammer;
	std::string expected = "hammer";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::BeaterValue e2 = mx::t::parseBeaterValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( BeaterValue_hand, Enums )
{
	mx::t::BeaterValue e = mx::t::BeaterValue::hand;
	std::string expected = "hand";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::BeaterValue e2 = mx::t::parseBeaterValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( BeaterValue_jazzStick, Enums )
{
	mx::t::BeaterValue e = mx::t::BeaterValue::jazzStick;
	std::string expected = "jazz stick";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::BeaterValue e2 = mx::t::parseBeaterValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( BeaterValue_knittingNeedle, Enums )
{
	mx::t::BeaterValue e = mx::t::BeaterValue::knittingNeedle;
	std::string expected = "knitting needle";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::BeaterValue e2 = mx::t::parseBeaterValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( BeaterValue_metalHammer, Enums )
{
	mx::t::BeaterValue e = mx::t::BeaterValue::metalHammer;
	std::string expected = "metal hammer";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::BeaterValue e2 = mx::t::parseBeaterValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( BeaterValue_snareStick, Enums )
{
	mx::t::BeaterValue e = mx::t::BeaterValue::snareStick;
	std::string expected = "snare stick";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::BeaterValue e2 = mx::t::parseBeaterValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( BeaterValue_spoonMallet, Enums )
{
	mx::t::BeaterValue e = mx::t::BeaterValue::spoonMallet;
	std::string expected = "spoon mallet";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::BeaterValue e2 = mx::t::parseBeaterValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( BeaterValue_triangleBeater, Enums )
{
	mx::t::BeaterValue e = mx::t::BeaterValue::triangleBeater;
	std::string expected = "triangle beater";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::BeaterValue e2 = mx::t::parseBeaterValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( BeaterValue_triangleBeaterPlain, Enums )
{
	mx::t::BeaterValue e = mx::t::BeaterValue::triangleBeaterPlain;
	std::string expected = "triangle beater plain";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::BeaterValue e2 = mx::t::parseBeaterValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( BeaterValue_wireBrush, Enums )
{
	mx::t::BeaterValue e = mx::t::BeaterValue::wireBrush;
	std::string expected = "wire brush";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::BeaterValue e2 = mx::t::parseBeaterValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( DegreeSymbolValue_BadParse, Enums )
{
	mx::t::DegreeSymbolValue actual = mx::t::parseDegreeSymbolValue( "major" );
	mx::t::DegreeSymbolValue expected = mx::t::DegreeSymbolValue::major;
	CHECK_EQUAL( expected, actual )
}

TEST( DegreeSymbolValue_major, Enums )
{
	mx::t::DegreeSymbolValue e = mx::t::DegreeSymbolValue::major;
	std::string expected = "major";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::DegreeSymbolValue e2 = mx::t::parseDegreeSymbolValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( DegreeSymbolValue_minor, Enums )
{
	mx::t::DegreeSymbolValue e = mx::t::DegreeSymbolValue::minor;
	std::string expected = "minor";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::DegreeSymbolValue e2 = mx::t::parseDegreeSymbolValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( DegreeSymbolValue_augmented, Enums )
{
	mx::t::DegreeSymbolValue e = mx::t::DegreeSymbolValue::augmented;
	std::string expected = "augmented";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::DegreeSymbolValue e2 = mx::t::parseDegreeSymbolValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( DegreeSymbolValue_diminished, Enums )
{
	mx::t::DegreeSymbolValue e = mx::t::DegreeSymbolValue::diminished;
	std::string expected = "diminished";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::DegreeSymbolValue e2 = mx::t::parseDegreeSymbolValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( DegreeSymbolValue_halfDiminished, Enums )
{
	mx::t::DegreeSymbolValue e = mx::t::DegreeSymbolValue::halfDiminished;
	std::string expected = "half-diminished";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::DegreeSymbolValue e2 = mx::t::parseDegreeSymbolValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( DegreeTypeValue_BadParse, Enums )
{
	mx::t::DegreeTypeValue actual = mx::t::parseDegreeTypeValue( "add" );
	mx::t::DegreeTypeValue expected = mx::t::DegreeTypeValue::add;
	CHECK_EQUAL( expected, actual )
}

TEST( DegreeTypeValue_add, Enums )
{
	mx::t::DegreeTypeValue e = mx::t::DegreeTypeValue::add;
	std::string expected = "add";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::DegreeTypeValue e2 = mx::t::parseDegreeTypeValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( DegreeTypeValue_alter, Enums )
{
	mx::t::DegreeTypeValue e = mx::t::DegreeTypeValue::alter;
	std::string expected = "alter";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::DegreeTypeValue e2 = mx::t::parseDegreeTypeValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( DegreeTypeValue_subtract, Enums )
{
	mx::t::DegreeTypeValue e = mx::t::DegreeTypeValue::subtract;
	std::string expected = "subtract";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::DegreeTypeValue e2 = mx::t::parseDegreeTypeValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Effect_BadParse, Enums )
{
	mx::t::EffectEnum actual = mx::t::parseEffectEnum( "anvil" );
	mx::t::EffectEnum expected = mx::t::EffectEnum::anvil;
	CHECK_EQUAL( expected, actual )
}

TEST( Effect_anvil, Enums )
{
	mx::t::EffectEnum e = mx::t::EffectEnum::anvil;
	std::string expected = "anvil";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::EffectEnum e2 = mx::t::parseEffectEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Effect_autoHorn, Enums )
{
	mx::t::EffectEnum e = mx::t::EffectEnum::autoHorn;
	std::string expected = "auto horn";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::EffectEnum e2 = mx::t::parseEffectEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Effect_birdWhistle, Enums )
{
	mx::t::EffectEnum e = mx::t::EffectEnum::birdWhistle;
	std::string expected = "bird whistle";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::EffectEnum e2 = mx::t::parseEffectEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Effect_cannon, Enums )
{
	mx::t::EffectEnum e = mx::t::EffectEnum::cannon;
	std::string expected = "cannon";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::EffectEnum e2 = mx::t::parseEffectEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Effect_duckCall, Enums )
{
	mx::t::EffectEnum e = mx::t::EffectEnum::duckCall;
	std::string expected = "duck call";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::EffectEnum e2 = mx::t::parseEffectEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Effect_gunShot, Enums )
{
	mx::t::EffectEnum e = mx::t::EffectEnum::gunShot;
	std::string expected = "gun shot";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::EffectEnum e2 = mx::t::parseEffectEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Effect_klaxonHorn, Enums )
{
	mx::t::EffectEnum e = mx::t::EffectEnum::klaxonHorn;
	std::string expected = "klaxon horn";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::EffectEnum e2 = mx::t::parseEffectEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Effect_lionsRoar, Enums )
{
	mx::t::EffectEnum e = mx::t::EffectEnum::lionsRoar;
	std::string expected = "lions roar";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::EffectEnum e2 = mx::t::parseEffectEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Effect_policeWhistle, Enums )
{
	mx::t::EffectEnum e = mx::t::EffectEnum::policeWhistle;
	std::string expected = "police whistle";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::EffectEnum e2 = mx::t::parseEffectEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Effect_siren, Enums )
{
	mx::t::EffectEnum e = mx::t::EffectEnum::siren;
	std::string expected = "siren";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::EffectEnum e2 = mx::t::parseEffectEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Effect_slideWhistle, Enums )
{
	mx::t::EffectEnum e = mx::t::EffectEnum::slideWhistle;
	std::string expected = "slide whistle";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::EffectEnum e2 = mx::t::parseEffectEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Effect_thunderSheet, Enums )
{
	mx::t::EffectEnum e = mx::t::EffectEnum::thunderSheet;
	std::string expected = "thunder sheet";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::EffectEnum e2 = mx::t::parseEffectEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Effect_windMachine, Enums )
{
	mx::t::EffectEnum e = mx::t::EffectEnum::windMachine;
	std::string expected = "wind machine";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::EffectEnum e2 = mx::t::parseEffectEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Effect_windWhistle, Enums )
{
	mx::t::EffectEnum e = mx::t::EffectEnum::windWhistle;
	std::string expected = "wind whistle";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::EffectEnum e2 = mx::t::parseEffectEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Glass_BadParse, Enums )
{
	mx::t::GlassEnum actual = mx::t::parseGlassEnum( "wind chimes" );
	mx::t::GlassEnum expected = mx::t::GlassEnum::windChimes;
	CHECK_EQUAL( expected, actual )
}

TEST( Glass_windChimes, Enums )
{
	mx::t::GlassEnum e = mx::t::GlassEnum::windChimes;
	std::string expected = "wind chimes";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::GlassEnum e2 = mx::t::parseGlassEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( HarmonyType_BadParse, Enums )
{
	mx::t::HarmonyType actual = mx::t::parseHarmonyType( "explicit" );
	mx::t::HarmonyType expected = mx::t::HarmonyType::explicit_;
	CHECK_EQUAL( expected, actual )
}

TEST( HarmonyType_explicit_, Enums )
{
	mx::t::HarmonyType e = mx::t::HarmonyType::explicit_;
	std::string expected = "explicit";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::HarmonyType e2 = mx::t::parseHarmonyType( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( HarmonyType_implied, Enums )
{
	mx::t::HarmonyType e = mx::t::HarmonyType::implied;
	std::string expected = "implied";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::HarmonyType e2 = mx::t::parseHarmonyType( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( HarmonyType_alternate, Enums )
{
	mx::t::HarmonyType e = mx::t::HarmonyType::alternate;
	std::string expected = "alternate";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::HarmonyType e2 = mx::t::parseHarmonyType( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( KindValue_BadParse, Enums )
{
	mx::t::KindValue actual = mx::t::parseKindValue( "major" );
	mx::t::KindValue expected = mx::t::KindValue::major;
	CHECK_EQUAL( expected, actual )
}

TEST( KindValue_major, Enums )
{
	mx::t::KindValue e = mx::t::KindValue::major;
	std::string expected = "major";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::KindValue e2 = mx::t::parseKindValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( KindValue_minor, Enums )
{
	mx::t::KindValue e = mx::t::KindValue::minor;
	std::string expected = "minor";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::KindValue e2 = mx::t::parseKindValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( KindValue_augmented, Enums )
{
	mx::t::KindValue e = mx::t::KindValue::augmented;
	std::string expected = "augmented";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::KindValue e2 = mx::t::parseKindValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( KindValue_diminished, Enums )
{
	mx::t::KindValue e = mx::t::KindValue::diminished;
	std::string expected = "diminished";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::KindValue e2 = mx::t::parseKindValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( KindValue_dominant, Enums )
{
	mx::t::KindValue e = mx::t::KindValue::dominant;
	std::string expected = "dominant";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::KindValue e2 = mx::t::parseKindValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( KindValue_majorSeventh, Enums )
{
	mx::t::KindValue e = mx::t::KindValue::majorSeventh;
	std::string expected = "major-seventh";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::KindValue e2 = mx::t::parseKindValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( KindValue_minorSeventh, Enums )
{
	mx::t::KindValue e = mx::t::KindValue::minorSeventh;
	std::string expected = "minor-seventh";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::KindValue e2 = mx::t::parseKindValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( KindValue_diminishedSeventh, Enums )
{
	mx::t::KindValue e = mx::t::KindValue::diminishedSeventh;
	std::string expected = "diminished-seventh";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::KindValue e2 = mx::t::parseKindValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( KindValue_augmentedSeventh, Enums )
{
	mx::t::KindValue e = mx::t::KindValue::augmentedSeventh;
	std::string expected = "augmented-seventh";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::KindValue e2 = mx::t::parseKindValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( KindValue_halfDiminished, Enums )
{
	mx::t::KindValue e = mx::t::KindValue::halfDiminished;
	std::string expected = "half-diminished";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::KindValue e2 = mx::t::parseKindValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( KindValue_majorMinor, Enums )
{
	mx::t::KindValue e = mx::t::KindValue::majorMinor;
	std::string expected = "major-minor";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::KindValue e2 = mx::t::parseKindValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( KindValue_majorSixth, Enums )
{
	mx::t::KindValue e = mx::t::KindValue::majorSixth;
	std::string expected = "major-sixth";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::KindValue e2 = mx::t::parseKindValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( KindValue_minorSixth, Enums )
{
	mx::t::KindValue e = mx::t::KindValue::minorSixth;
	std::string expected = "minor-sixth";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::KindValue e2 = mx::t::parseKindValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( KindValue_dominantNinth, Enums )
{
	mx::t::KindValue e = mx::t::KindValue::dominantNinth;
	std::string expected = "dominant-ninth";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::KindValue e2 = mx::t::parseKindValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( KindValue_majorNinth, Enums )
{
	mx::t::KindValue e = mx::t::KindValue::majorNinth;
	std::string expected = "major-ninth";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::KindValue e2 = mx::t::parseKindValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( KindValue_minorNinth, Enums )
{
	mx::t::KindValue e = mx::t::KindValue::minorNinth;
	std::string expected = "minor-ninth";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::KindValue e2 = mx::t::parseKindValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( KindValue_dominant11Th, Enums )
{
	mx::t::KindValue e = mx::t::KindValue::dominant11Th;
	std::string expected = "dominant-11th";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::KindValue e2 = mx::t::parseKindValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( KindValue_major11Th, Enums )
{
	mx::t::KindValue e = mx::t::KindValue::major11Th;
	std::string expected = "major-11th";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::KindValue e2 = mx::t::parseKindValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( KindValue_minor11Th, Enums )
{
	mx::t::KindValue e = mx::t::KindValue::minor11Th;
	std::string expected = "minor-11th";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::KindValue e2 = mx::t::parseKindValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( KindValue_dominant13Th, Enums )
{
	mx::t::KindValue e = mx::t::KindValue::dominant13Th;
	std::string expected = "dominant-13th";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::KindValue e2 = mx::t::parseKindValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( KindValue_major13Th, Enums )
{
	mx::t::KindValue e = mx::t::KindValue::major13Th;
	std::string expected = "major-13th";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::KindValue e2 = mx::t::parseKindValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( KindValue_minor13Th, Enums )
{
	mx::t::KindValue e = mx::t::KindValue::minor13Th;
	std::string expected = "minor-13th";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::KindValue e2 = mx::t::parseKindValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( KindValue_suspendedSecond, Enums )
{
	mx::t::KindValue e = mx::t::KindValue::suspendedSecond;
	std::string expected = "suspended-second";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::KindValue e2 = mx::t::parseKindValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( KindValue_suspendedFourth, Enums )
{
	mx::t::KindValue e = mx::t::KindValue::suspendedFourth;
	std::string expected = "suspended-fourth";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::KindValue e2 = mx::t::parseKindValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( KindValue_neapolitan, Enums )
{
	mx::t::KindValue e = mx::t::KindValue::neapolitan;
	std::string expected = "Neapolitan";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::KindValue e2 = mx::t::parseKindValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( KindValue_italian, Enums )
{
	mx::t::KindValue e = mx::t::KindValue::italian;
	std::string expected = "Italian";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::KindValue e2 = mx::t::parseKindValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( KindValue_french, Enums )
{
	mx::t::KindValue e = mx::t::KindValue::french;
	std::string expected = "French";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::KindValue e2 = mx::t::parseKindValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( KindValue_german, Enums )
{
	mx::t::KindValue e = mx::t::KindValue::german;
	std::string expected = "German";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::KindValue e2 = mx::t::parseKindValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( KindValue_pedal, Enums )
{
	mx::t::KindValue e = mx::t::KindValue::pedal;
	std::string expected = "pedal";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::KindValue e2 = mx::t::parseKindValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( KindValue_power, Enums )
{
	mx::t::KindValue e = mx::t::KindValue::power;
	std::string expected = "power";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::KindValue e2 = mx::t::parseKindValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( KindValue_tristan, Enums )
{
	mx::t::KindValue e = mx::t::KindValue::tristan;
	std::string expected = "Tristan";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::KindValue e2 = mx::t::parseKindValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( KindValue_other, Enums )
{
	mx::t::KindValue e = mx::t::KindValue::other;
	std::string expected = "other";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::KindValue e2 = mx::t::parseKindValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( KindValue_none, Enums )
{
	mx::t::KindValue e = mx::t::KindValue::none;
	std::string expected = "none";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::KindValue e2 = mx::t::parseKindValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( LineEnd_BadParse, Enums )
{
	mx::t::LineEnd actual = mx::t::parseLineEnd( "up" );
	mx::t::LineEnd expected = mx::t::LineEnd::up;
	CHECK_EQUAL( expected, actual )
}

TEST( LineEnd_up, Enums )
{
	mx::t::LineEnd e = mx::t::LineEnd::up;
	std::string expected = "up";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::LineEnd e2 = mx::t::parseLineEnd( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( LineEnd_down, Enums )
{
	mx::t::LineEnd e = mx::t::LineEnd::down;
	std::string expected = "down";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::LineEnd e2 = mx::t::parseLineEnd( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( LineEnd_both, Enums )
{
	mx::t::LineEnd e = mx::t::LineEnd::both;
	std::string expected = "both";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::LineEnd e2 = mx::t::parseLineEnd( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( LineEnd_arrow, Enums )
{
	mx::t::LineEnd e = mx::t::LineEnd::arrow;
	std::string expected = "arrow";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::LineEnd e2 = mx::t::parseLineEnd( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( LineEnd_none, Enums )
{
	mx::t::LineEnd e = mx::t::LineEnd::none;
	std::string expected = "none";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::LineEnd e2 = mx::t::parseLineEnd( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( MeasureNumberingValue_BadParse, Enums )
{
	mx::t::MeasureNumberingValue actual = mx::t::parseMeasureNumberingValue( "none" );
	mx::t::MeasureNumberingValue expected = mx::t::MeasureNumberingValue::none;
	CHECK_EQUAL( expected, actual )
}

TEST( MeasureNumberingValue_none, Enums )
{
	mx::t::MeasureNumberingValue e = mx::t::MeasureNumberingValue::none;
	std::string expected = "none";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::MeasureNumberingValue e2 = mx::t::parseMeasureNumberingValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( MeasureNumberingValue_measure, Enums )
{
	mx::t::MeasureNumberingValue e = mx::t::MeasureNumberingValue::measure;
	std::string expected = "measure";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::MeasureNumberingValue e2 = mx::t::parseMeasureNumberingValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( MeasureNumberingValue_system, Enums )
{
	mx::t::MeasureNumberingValue e = mx::t::MeasureNumberingValue::system;
	std::string expected = "system";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::MeasureNumberingValue e2 = mx::t::parseMeasureNumberingValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Membrane_BadParse, Enums )
{
	mx::t::MembraneEnum actual = mx::t::parseMembraneEnum( "bass drum" );
	mx::t::MembraneEnum expected = mx::t::MembraneEnum::bassDrum;
	CHECK_EQUAL( expected, actual )
}

TEST( Membrane_bassDrum, Enums )
{
	mx::t::MembraneEnum e = mx::t::MembraneEnum::bassDrum;
	std::string expected = "bass drum";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::MembraneEnum e2 = mx::t::parseMembraneEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Membrane_bassDrumOnSide, Enums )
{
	mx::t::MembraneEnum e = mx::t::MembraneEnum::bassDrumOnSide;
	std::string expected = "bass drum on side";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::MembraneEnum e2 = mx::t::parseMembraneEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Membrane_bongos, Enums )
{
	mx::t::MembraneEnum e = mx::t::MembraneEnum::bongos;
	std::string expected = "bongos";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::MembraneEnum e2 = mx::t::parseMembraneEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Membrane_congaDrum, Enums )
{
	mx::t::MembraneEnum e = mx::t::MembraneEnum::congaDrum;
	std::string expected = "conga drum";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::MembraneEnum e2 = mx::t::parseMembraneEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Membrane_gobletDrum, Enums )
{
	mx::t::MembraneEnum e = mx::t::MembraneEnum::gobletDrum;
	std::string expected = "goblet drum";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::MembraneEnum e2 = mx::t::parseMembraneEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Membrane_militaryDrum, Enums )
{
	mx::t::MembraneEnum e = mx::t::MembraneEnum::militaryDrum;
	std::string expected = "military drum";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::MembraneEnum e2 = mx::t::parseMembraneEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Membrane_snareDrum, Enums )
{
	mx::t::MembraneEnum e = mx::t::MembraneEnum::snareDrum;
	std::string expected = "snare drum";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::MembraneEnum e2 = mx::t::parseMembraneEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Membrane_snareDrumSnaresOff, Enums )
{
	mx::t::MembraneEnum e = mx::t::MembraneEnum::snareDrumSnaresOff;
	std::string expected = "snare drum snares off";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::MembraneEnum e2 = mx::t::parseMembraneEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Membrane_tambourine, Enums )
{
	mx::t::MembraneEnum e = mx::t::MembraneEnum::tambourine;
	std::string expected = "tambourine";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::MembraneEnum e2 = mx::t::parseMembraneEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Membrane_tenorDrum, Enums )
{
	mx::t::MembraneEnum e = mx::t::MembraneEnum::tenorDrum;
	std::string expected = "tenor drum";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::MembraneEnum e2 = mx::t::parseMembraneEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Membrane_timbales, Enums )
{
	mx::t::MembraneEnum e = mx::t::MembraneEnum::timbales;
	std::string expected = "timbales";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::MembraneEnum e2 = mx::t::parseMembraneEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Membrane_tomtom, Enums )
{
	mx::t::MembraneEnum e = mx::t::MembraneEnum::tomtom;
	std::string expected = "tomtom";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::MembraneEnum e2 = mx::t::parseMembraneEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Metal_BadParse, Enums )
{
	mx::t::MetalEnum actual = mx::t::parseMetalEnum( "almglocken" );
	mx::t::MetalEnum expected = mx::t::MetalEnum::almglocken;
	CHECK_EQUAL( expected, actual )
}

TEST( Metal_almglocken, Enums )
{
	mx::t::MetalEnum e = mx::t::MetalEnum::almglocken;
	std::string expected = "almglocken";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::MetalEnum e2 = mx::t::parseMetalEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Metal_bell, Enums )
{
	mx::t::MetalEnum e = mx::t::MetalEnum::bell;
	std::string expected = "bell";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::MetalEnum e2 = mx::t::parseMetalEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Metal_bellPlate, Enums )
{
	mx::t::MetalEnum e = mx::t::MetalEnum::bellPlate;
	std::string expected = "bell plate";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::MetalEnum e2 = mx::t::parseMetalEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Metal_brakeDrum, Enums )
{
	mx::t::MetalEnum e = mx::t::MetalEnum::brakeDrum;
	std::string expected = "brake drum";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::MetalEnum e2 = mx::t::parseMetalEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Metal_chineseCymbal, Enums )
{
	mx::t::MetalEnum e = mx::t::MetalEnum::chineseCymbal;
	std::string expected = "Chinese cymbal";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::MetalEnum e2 = mx::t::parseMetalEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Metal_cowbell, Enums )
{
	mx::t::MetalEnum e = mx::t::MetalEnum::cowbell;
	std::string expected = "cowbell";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::MetalEnum e2 = mx::t::parseMetalEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Metal_crashCymbals, Enums )
{
	mx::t::MetalEnum e = mx::t::MetalEnum::crashCymbals;
	std::string expected = "crash cymbals";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::MetalEnum e2 = mx::t::parseMetalEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Metal_crotale, Enums )
{
	mx::t::MetalEnum e = mx::t::MetalEnum::crotale;
	std::string expected = "crotale";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::MetalEnum e2 = mx::t::parseMetalEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Metal_cymbalTongs, Enums )
{
	mx::t::MetalEnum e = mx::t::MetalEnum::cymbalTongs;
	std::string expected = "cymbal tongs";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::MetalEnum e2 = mx::t::parseMetalEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Metal_domedGong, Enums )
{
	mx::t::MetalEnum e = mx::t::MetalEnum::domedGong;
	std::string expected = "domed gong";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::MetalEnum e2 = mx::t::parseMetalEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Metal_fingerCymbals, Enums )
{
	mx::t::MetalEnum e = mx::t::MetalEnum::fingerCymbals;
	std::string expected = "finger cymbals";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::MetalEnum e2 = mx::t::parseMetalEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Metal_flexatone, Enums )
{
	mx::t::MetalEnum e = mx::t::MetalEnum::flexatone;
	std::string expected = "flexatone";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::MetalEnum e2 = mx::t::parseMetalEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Metal_gong, Enums )
{
	mx::t::MetalEnum e = mx::t::MetalEnum::gong;
	std::string expected = "gong";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::MetalEnum e2 = mx::t::parseMetalEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Metal_hiHat, Enums )
{
	mx::t::MetalEnum e = mx::t::MetalEnum::hiHat;
	std::string expected = "hi-hat";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::MetalEnum e2 = mx::t::parseMetalEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Metal_highHatCymbals, Enums )
{
	mx::t::MetalEnum e = mx::t::MetalEnum::highHatCymbals;
	std::string expected = "high-hat cymbals";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::MetalEnum e2 = mx::t::parseMetalEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Metal_handbell, Enums )
{
	mx::t::MetalEnum e = mx::t::MetalEnum::handbell;
	std::string expected = "handbell";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::MetalEnum e2 = mx::t::parseMetalEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Metal_sistrum, Enums )
{
	mx::t::MetalEnum e = mx::t::MetalEnum::sistrum;
	std::string expected = "sistrum";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::MetalEnum e2 = mx::t::parseMetalEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Metal_sizzleCymbal, Enums )
{
	mx::t::MetalEnum e = mx::t::MetalEnum::sizzleCymbal;
	std::string expected = "sizzle cymbal";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::MetalEnum e2 = mx::t::parseMetalEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Metal_sleighBells, Enums )
{
	mx::t::MetalEnum e = mx::t::MetalEnum::sleighBells;
	std::string expected = "sleigh bells";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::MetalEnum e2 = mx::t::parseMetalEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Metal_suspendedCymbal, Enums )
{
	mx::t::MetalEnum e = mx::t::MetalEnum::suspendedCymbal;
	std::string expected = "suspended cymbal";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::MetalEnum e2 = mx::t::parseMetalEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Metal_tamTam, Enums )
{
	mx::t::MetalEnum e = mx::t::MetalEnum::tamTam;
	std::string expected = "tam tam";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::MetalEnum e2 = mx::t::parseMetalEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Metal_triangle, Enums )
{
	mx::t::MetalEnum e = mx::t::MetalEnum::triangle;
	std::string expected = "triangle";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::MetalEnum e2 = mx::t::parseMetalEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Metal_vietnameseHat, Enums )
{
	mx::t::MetalEnum e = mx::t::MetalEnum::vietnameseHat;
	std::string expected = "Vietnamese hat";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::MetalEnum e2 = mx::t::parseMetalEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( OnOff_BadParse, Enums )
{
	mx::t::OnOff actual = mx::t::parseOnOff( "on" );
	mx::t::OnOff expected = mx::t::OnOff::on;
	CHECK_EQUAL( expected, actual )
}

TEST( OnOff_on, Enums )
{
	mx::t::OnOff e = mx::t::OnOff::on;
	std::string expected = "on";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::OnOff e2 = mx::t::parseOnOff( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( OnOff_off, Enums )
{
	mx::t::OnOff e = mx::t::OnOff::off;
	std::string expected = "off";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::OnOff e2 = mx::t::parseOnOff( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Pitched_BadParse, Enums )
{
	mx::t::PitchedEnum actual = mx::t::parsePitchedEnum( "chimes" );
	mx::t::PitchedEnum expected = mx::t::PitchedEnum::chimes;
	CHECK_EQUAL( expected, actual )
}

TEST( Pitched_chimes, Enums )
{
	mx::t::PitchedEnum e = mx::t::PitchedEnum::chimes;
	std::string expected = "chimes";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::PitchedEnum e2 = mx::t::parsePitchedEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Pitched_glockenspiel, Enums )
{
	mx::t::PitchedEnum e = mx::t::PitchedEnum::glockenspiel;
	std::string expected = "glockenspiel";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::PitchedEnum e2 = mx::t::parsePitchedEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Pitched_mallet, Enums )
{
	mx::t::PitchedEnum e = mx::t::PitchedEnum::mallet;
	std::string expected = "mallet";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::PitchedEnum e2 = mx::t::parsePitchedEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Pitched_marimba, Enums )
{
	mx::t::PitchedEnum e = mx::t::PitchedEnum::marimba;
	std::string expected = "marimba";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::PitchedEnum e2 = mx::t::parsePitchedEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Pitched_tubularChimes, Enums )
{
	mx::t::PitchedEnum e = mx::t::PitchedEnum::tubularChimes;
	std::string expected = "tubular chimes";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::PitchedEnum e2 = mx::t::parsePitchedEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Pitched_vibraphone, Enums )
{
	mx::t::PitchedEnum e = mx::t::PitchedEnum::vibraphone;
	std::string expected = "vibraphone";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::PitchedEnum e2 = mx::t::parsePitchedEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Pitched_xylophone, Enums )
{
	mx::t::PitchedEnum e = mx::t::PitchedEnum::xylophone;
	std::string expected = "xylophone";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::PitchedEnum e2 = mx::t::parsePitchedEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( PrincipalVoiceSymbol_BadParse, Enums )
{
	mx::t::PrincipalVoiceSymbol actual = mx::t::parsePrincipalVoiceSymbol( "Hauptstimme" );
	mx::t::PrincipalVoiceSymbol expected = mx::t::PrincipalVoiceSymbol::hauptstimme;
	CHECK_EQUAL( expected, actual )
}

TEST( PrincipalVoiceSymbol_hauptstimme, Enums )
{
	mx::t::PrincipalVoiceSymbol e = mx::t::PrincipalVoiceSymbol::hauptstimme;
	std::string expected = "Hauptstimme";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::PrincipalVoiceSymbol e2 = mx::t::parsePrincipalVoiceSymbol( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( PrincipalVoiceSymbol_nebenstimme, Enums )
{
	mx::t::PrincipalVoiceSymbol e = mx::t::PrincipalVoiceSymbol::nebenstimme;
	std::string expected = "Nebenstimme";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::PrincipalVoiceSymbol e2 = mx::t::parsePrincipalVoiceSymbol( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( PrincipalVoiceSymbol_plain, Enums )
{
	mx::t::PrincipalVoiceSymbol e = mx::t::PrincipalVoiceSymbol::plain;
	std::string expected = "plain";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::PrincipalVoiceSymbol e2 = mx::t::parsePrincipalVoiceSymbol( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( PrincipalVoiceSymbol_none, Enums )
{
	mx::t::PrincipalVoiceSymbol e = mx::t::PrincipalVoiceSymbol::none;
	std::string expected = "none";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::PrincipalVoiceSymbol e2 = mx::t::parsePrincipalVoiceSymbol( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( StartStopChangeContinue_BadParse, Enums )
{
	mx::t::StartStopChangeContinue actual = mx::t::parseStartStopChangeContinue( "start" );
	mx::t::StartStopChangeContinue expected = mx::t::StartStopChangeContinue::start;
	CHECK_EQUAL( expected, actual )
}

TEST( StartStopChangeContinue_start, Enums )
{
	mx::t::StartStopChangeContinue e = mx::t::StartStopChangeContinue::start;
	std::string expected = "start";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::StartStopChangeContinue e2 = mx::t::parseStartStopChangeContinue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( StartStopChangeContinue_stop, Enums )
{
	mx::t::StartStopChangeContinue e = mx::t::StartStopChangeContinue::stop;
	std::string expected = "stop";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::StartStopChangeContinue e2 = mx::t::parseStartStopChangeContinue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( StartStopChangeContinue_change, Enums )
{
	mx::t::StartStopChangeContinue e = mx::t::StartStopChangeContinue::change;
	std::string expected = "change";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::StartStopChangeContinue e2 = mx::t::parseStartStopChangeContinue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( StartStopChangeContinue_continue_, Enums )
{
	mx::t::StartStopChangeContinue e = mx::t::StartStopChangeContinue::continue_;
	std::string expected = "continue";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::StartStopChangeContinue e2 = mx::t::parseStartStopChangeContinue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( TipDirection_BadParse, Enums )
{
	mx::t::TipDirection actual = mx::t::parseTipDirection( "up" );
	mx::t::TipDirection expected = mx::t::TipDirection::up;
	CHECK_EQUAL( expected, actual )
}

TEST( TipDirection_up, Enums )
{
	mx::t::TipDirection e = mx::t::TipDirection::up;
	std::string expected = "up";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::TipDirection e2 = mx::t::parseTipDirection( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( TipDirection_down, Enums )
{
	mx::t::TipDirection e = mx::t::TipDirection::down;
	std::string expected = "down";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::TipDirection e2 = mx::t::parseTipDirection( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( TipDirection_left, Enums )
{
	mx::t::TipDirection e = mx::t::TipDirection::left;
	std::string expected = "left";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::TipDirection e2 = mx::t::parseTipDirection( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( TipDirection_right, Enums )
{
	mx::t::TipDirection e = mx::t::TipDirection::right;
	std::string expected = "right";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::TipDirection e2 = mx::t::parseTipDirection( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( TipDirection_northwest, Enums )
{
	mx::t::TipDirection e = mx::t::TipDirection::northwest;
	std::string expected = "northwest";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::TipDirection e2 = mx::t::parseTipDirection( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( TipDirection_northeast, Enums )
{
	mx::t::TipDirection e = mx::t::TipDirection::northeast;
	std::string expected = "northeast";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::TipDirection e2 = mx::t::parseTipDirection( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( TipDirection_southeast, Enums )
{
	mx::t::TipDirection e = mx::t::TipDirection::southeast;
	std::string expected = "southeast";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::TipDirection e2 = mx::t::parseTipDirection( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( TipDirection_southwest, Enums )
{
	mx::t::TipDirection e = mx::t::TipDirection::southwest;
	std::string expected = "southwest";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::TipDirection e2 = mx::t::parseTipDirection( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( StickLocation_BadParse, Enums )
{
	mx::t::StickLocationEnum actual = mx::t::parseStickLocationEnum( "center" );
	mx::t::StickLocationEnum expected = mx::t::StickLocationEnum::center;
	CHECK_EQUAL( expected, actual )
}

TEST( StickLocation_center, Enums )
{
	mx::t::StickLocationEnum e = mx::t::StickLocationEnum::center;
	std::string expected = "center";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::StickLocationEnum e2 = mx::t::parseStickLocationEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( StickLocation_rim, Enums )
{
	mx::t::StickLocationEnum e = mx::t::StickLocationEnum::rim;
	std::string expected = "rim";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::StickLocationEnum e2 = mx::t::parseStickLocationEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( StickLocation_cymbalBell, Enums )
{
	mx::t::StickLocationEnum e = mx::t::StickLocationEnum::cymbalBell;
	std::string expected = "cymbal bell";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::StickLocationEnum e2 = mx::t::parseStickLocationEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( StickLocation_cymbalEdge, Enums )
{
	mx::t::StickLocationEnum e = mx::t::StickLocationEnum::cymbalEdge;
	std::string expected = "cymbal edge";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::StickLocationEnum e2 = mx::t::parseStickLocationEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( StickMaterial_BadParse, Enums )
{
	mx::t::StickMaterialEnum actual = mx::t::parseStickMaterialEnum( "soft" );
	mx::t::StickMaterialEnum expected = mx::t::StickMaterialEnum::soft;
	CHECK_EQUAL( expected, actual )
}

TEST( StickMaterial_soft, Enums )
{
	mx::t::StickMaterialEnum e = mx::t::StickMaterialEnum::soft;
	std::string expected = "soft";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::StickMaterialEnum e2 = mx::t::parseStickMaterialEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( StickMaterial_medium, Enums )
{
	mx::t::StickMaterialEnum e = mx::t::StickMaterialEnum::medium;
	std::string expected = "medium";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::StickMaterialEnum e2 = mx::t::parseStickMaterialEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( StickMaterial_hard, Enums )
{
	mx::t::StickMaterialEnum e = mx::t::StickMaterialEnum::hard;
	std::string expected = "hard";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::StickMaterialEnum e2 = mx::t::parseStickMaterialEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( StickMaterial_shaded, Enums )
{
	mx::t::StickMaterialEnum e = mx::t::StickMaterialEnum::shaded;
	std::string expected = "shaded";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::StickMaterialEnum e2 = mx::t::parseStickMaterialEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( StickMaterial_x, Enums )
{
	mx::t::StickMaterialEnum e = mx::t::StickMaterialEnum::x;
	std::string expected = "x";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::StickMaterialEnum e2 = mx::t::parseStickMaterialEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( StickType_BadParse, Enums )
{
	mx::t::StickTypeEnum actual = mx::t::parseStickTypeEnum( "bass drum" );
	mx::t::StickTypeEnum expected = mx::t::StickTypeEnum::bassDrum;
	CHECK_EQUAL( expected, actual )
}

TEST( StickType_bassDrum, Enums )
{
	mx::t::StickTypeEnum e = mx::t::StickTypeEnum::bassDrum;
	std::string expected = "bass drum";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::StickTypeEnum e2 = mx::t::parseStickTypeEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( StickType_doubleBassDrum, Enums )
{
	mx::t::StickTypeEnum e = mx::t::StickTypeEnum::doubleBassDrum;
	std::string expected = "double bass drum";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::StickTypeEnum e2 = mx::t::parseStickTypeEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( StickType_timpani, Enums )
{
	mx::t::StickTypeEnum e = mx::t::StickTypeEnum::timpani;
	std::string expected = "timpani";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::StickTypeEnum e2 = mx::t::parseStickTypeEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( StickType_xylophone, Enums )
{
	mx::t::StickTypeEnum e = mx::t::StickTypeEnum::xylophone;
	std::string expected = "xylophone";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::StickTypeEnum e2 = mx::t::parseStickTypeEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( StickType_yarn, Enums )
{
	mx::t::StickTypeEnum e = mx::t::StickTypeEnum::yarn;
	std::string expected = "yarn";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::StickTypeEnum e2 = mx::t::parseStickTypeEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( UpDownStopContinue_BadParse, Enums )
{
	mx::t::UpDownStopContinue actual = mx::t::parseUpDownStopContinue( "up" );
	mx::t::UpDownStopContinue expected = mx::t::UpDownStopContinue::up;
	CHECK_EQUAL( expected, actual )
}

TEST( UpDownStopContinue_up, Enums )
{
	mx::t::UpDownStopContinue e = mx::t::UpDownStopContinue::up;
	std::string expected = "up";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::UpDownStopContinue e2 = mx::t::parseUpDownStopContinue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( UpDownStopContinue_down, Enums )
{
	mx::t::UpDownStopContinue e = mx::t::UpDownStopContinue::down;
	std::string expected = "down";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::UpDownStopContinue e2 = mx::t::parseUpDownStopContinue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( UpDownStopContinue_stop, Enums )
{
	mx::t::UpDownStopContinue e = mx::t::UpDownStopContinue::stop;
	std::string expected = "stop";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::UpDownStopContinue e2 = mx::t::parseUpDownStopContinue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( UpDownStopContinue_continue_, Enums )
{
	mx::t::UpDownStopContinue e = mx::t::UpDownStopContinue::continue_;
	std::string expected = "continue";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::UpDownStopContinue e2 = mx::t::parseUpDownStopContinue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( WedgeType_BadParse, Enums )
{
	mx::t::WedgeType actual = mx::t::parseWedgeType( "crescendo" );
	mx::t::WedgeType expected = mx::t::WedgeType::crescendo;
	CHECK_EQUAL( expected, actual )
}

TEST( WedgeType_crescendo, Enums )
{
	mx::t::WedgeType e = mx::t::WedgeType::crescendo;
	std::string expected = "crescendo";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::WedgeType e2 = mx::t::parseWedgeType( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( WedgeType_diminuendo, Enums )
{
	mx::t::WedgeType e = mx::t::WedgeType::diminuendo;
	std::string expected = "diminuendo";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::WedgeType e2 = mx::t::parseWedgeType( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( WedgeType_stop, Enums )
{
	mx::t::WedgeType e = mx::t::WedgeType::stop;
	std::string expected = "stop";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::WedgeType e2 = mx::t::parseWedgeType( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( WedgeType_continue_, Enums )
{
	mx::t::WedgeType e = mx::t::WedgeType::continue_;
	std::string expected = "continue";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::WedgeType e2 = mx::t::parseWedgeType( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Wood_BadParse, Enums )
{
	mx::t::WoodEnum actual = mx::t::parseWoodEnum( "board clapper" );
	mx::t::WoodEnum expected = mx::t::WoodEnum::boardClapper;
	CHECK_EQUAL( expected, actual )
}

TEST( Wood_boardClapper, Enums )
{
	mx::t::WoodEnum e = mx::t::WoodEnum::boardClapper;
	std::string expected = "board clapper";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::WoodEnum e2 = mx::t::parseWoodEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Wood_cabasa, Enums )
{
	mx::t::WoodEnum e = mx::t::WoodEnum::cabasa;
	std::string expected = "cabasa";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::WoodEnum e2 = mx::t::parseWoodEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Wood_castanets, Enums )
{
	mx::t::WoodEnum e = mx::t::WoodEnum::castanets;
	std::string expected = "castanets";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::WoodEnum e2 = mx::t::parseWoodEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Wood_claves, Enums )
{
	mx::t::WoodEnum e = mx::t::WoodEnum::claves;
	std::string expected = "claves";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::WoodEnum e2 = mx::t::parseWoodEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Wood_guiro, Enums )
{
	mx::t::WoodEnum e = mx::t::WoodEnum::guiro;
	std::string expected = "guiro";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::WoodEnum e2 = mx::t::parseWoodEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Wood_logDrum, Enums )
{
	mx::t::WoodEnum e = mx::t::WoodEnum::logDrum;
	std::string expected = "log drum";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::WoodEnum e2 = mx::t::parseWoodEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Wood_maraca, Enums )
{
	mx::t::WoodEnum e = mx::t::WoodEnum::maraca;
	std::string expected = "maraca";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::WoodEnum e2 = mx::t::parseWoodEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Wood_maracas, Enums )
{
	mx::t::WoodEnum e = mx::t::WoodEnum::maracas;
	std::string expected = "maracas";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::WoodEnum e2 = mx::t::parseWoodEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Wood_ratchet, Enums )
{
	mx::t::WoodEnum e = mx::t::WoodEnum::ratchet;
	std::string expected = "ratchet";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::WoodEnum e2 = mx::t::parseWoodEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Wood_sandpaperBlocks, Enums )
{
	mx::t::WoodEnum e = mx::t::WoodEnum::sandpaperBlocks;
	std::string expected = "sandpaper blocks";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::WoodEnum e2 = mx::t::parseWoodEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Wood_slitDrum, Enums )
{
	mx::t::WoodEnum e = mx::t::WoodEnum::slitDrum;
	std::string expected = "slit drum";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::WoodEnum e2 = mx::t::parseWoodEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Wood_templeBlock, Enums )
{
	mx::t::WoodEnum e = mx::t::WoodEnum::templeBlock;
	std::string expected = "temple block";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::WoodEnum e2 = mx::t::parseWoodEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Wood_vibraslap, Enums )
{
	mx::t::WoodEnum e = mx::t::WoodEnum::vibraslap;
	std::string expected = "vibraslap";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::WoodEnum e2 = mx::t::parseWoodEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Wood_woodBlock, Enums )
{
	mx::t::WoodEnum e = mx::t::WoodEnum::woodBlock;
	std::string expected = "wood block";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::WoodEnum e2 = mx::t::parseWoodEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( MarginType_BadParse, Enums )
{
	mx::t::MarginType actual = mx::t::parseMarginType( "odd" );
	mx::t::MarginType expected = mx::t::MarginType::odd;
	CHECK_EQUAL( expected, actual )
}

TEST( MarginType_odd, Enums )
{
	mx::t::MarginType e = mx::t::MarginType::odd;
	std::string expected = "odd";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::MarginType e2 = mx::t::parseMarginType( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( MarginType_even, Enums )
{
	mx::t::MarginType e = mx::t::MarginType::even;
	std::string expected = "even";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::MarginType e2 = mx::t::parseMarginType( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( MarginType_both, Enums )
{
	mx::t::MarginType e = mx::t::MarginType::both;
	std::string expected = "both";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::MarginType e2 = mx::t::parseMarginType( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( NoteSizeType_BadParse, Enums )
{
	mx::t::NoteSizeType actual = mx::t::parseNoteSizeType( "cue" );
	mx::t::NoteSizeType expected = mx::t::NoteSizeType::cue;
	CHECK_EQUAL( expected, actual )
}

TEST( NoteSizeType_cue, Enums )
{
	mx::t::NoteSizeType e = mx::t::NoteSizeType::cue;
	std::string expected = "cue";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::NoteSizeType e2 = mx::t::parseNoteSizeType( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( NoteSizeType_grace, Enums )
{
	mx::t::NoteSizeType e = mx::t::NoteSizeType::grace;
	std::string expected = "grace";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::NoteSizeType e2 = mx::t::parseNoteSizeType( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( NoteSizeType_large, Enums )
{
	mx::t::NoteSizeType e = mx::t::NoteSizeType::large;
	std::string expected = "large";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::NoteSizeType e2 = mx::t::parseNoteSizeType( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( AccidentalValue_BadParse, Enums )
{
	mx::t::AccidentalValue actual = mx::t::parseAccidentalValue( "sharp" );
	mx::t::AccidentalValue expected = mx::t::AccidentalValue::sharp;
	CHECK_EQUAL( expected, actual )
}

TEST( AccidentalValue_sharp, Enums )
{
	mx::t::AccidentalValue e = mx::t::AccidentalValue::sharp;
	std::string expected = "sharp";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::AccidentalValue e2 = mx::t::parseAccidentalValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( AccidentalValue_natural, Enums )
{
	mx::t::AccidentalValue e = mx::t::AccidentalValue::natural;
	std::string expected = "natural";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::AccidentalValue e2 = mx::t::parseAccidentalValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( AccidentalValue_flat, Enums )
{
	mx::t::AccidentalValue e = mx::t::AccidentalValue::flat;
	std::string expected = "flat";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::AccidentalValue e2 = mx::t::parseAccidentalValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( AccidentalValue_doubleSharp, Enums )
{
	mx::t::AccidentalValue e = mx::t::AccidentalValue::doubleSharp;
	std::string expected = "double-sharp";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::AccidentalValue e2 = mx::t::parseAccidentalValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( AccidentalValue_sharpSharp, Enums )
{
	mx::t::AccidentalValue e = mx::t::AccidentalValue::sharpSharp;
	std::string expected = "sharp-sharp";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::AccidentalValue e2 = mx::t::parseAccidentalValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( AccidentalValue_flatFlat, Enums )
{
	mx::t::AccidentalValue e = mx::t::AccidentalValue::flatFlat;
	std::string expected = "flat-flat";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::AccidentalValue e2 = mx::t::parseAccidentalValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( AccidentalValue_naturalSharp, Enums )
{
	mx::t::AccidentalValue e = mx::t::AccidentalValue::naturalSharp;
	std::string expected = "natural-sharp";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::AccidentalValue e2 = mx::t::parseAccidentalValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( AccidentalValue_naturalFlat, Enums )
{
	mx::t::AccidentalValue e = mx::t::AccidentalValue::naturalFlat;
	std::string expected = "natural-flat";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::AccidentalValue e2 = mx::t::parseAccidentalValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( AccidentalValue_quarterFlat, Enums )
{
	mx::t::AccidentalValue e = mx::t::AccidentalValue::quarterFlat;
	std::string expected = "quarter-flat";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::AccidentalValue e2 = mx::t::parseAccidentalValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( AccidentalValue_quarterSharp, Enums )
{
	mx::t::AccidentalValue e = mx::t::AccidentalValue::quarterSharp;
	std::string expected = "quarter-sharp";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::AccidentalValue e2 = mx::t::parseAccidentalValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( AccidentalValue_threeQuartersFlat, Enums )
{
	mx::t::AccidentalValue e = mx::t::AccidentalValue::threeQuartersFlat;
	std::string expected = "three-quarters-flat";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::AccidentalValue e2 = mx::t::parseAccidentalValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( AccidentalValue_threeQuartersSharp, Enums )
{
	mx::t::AccidentalValue e = mx::t::AccidentalValue::threeQuartersSharp;
	std::string expected = "three-quarters-sharp";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::AccidentalValue e2 = mx::t::parseAccidentalValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( AccidentalValue_sharpDown, Enums )
{
	mx::t::AccidentalValue e = mx::t::AccidentalValue::sharpDown;
	std::string expected = "sharp-down";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::AccidentalValue e2 = mx::t::parseAccidentalValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( AccidentalValue_sharpUp, Enums )
{
	mx::t::AccidentalValue e = mx::t::AccidentalValue::sharpUp;
	std::string expected = "sharp-up";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::AccidentalValue e2 = mx::t::parseAccidentalValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( AccidentalValue_naturalDown, Enums )
{
	mx::t::AccidentalValue e = mx::t::AccidentalValue::naturalDown;
	std::string expected = "natural-down";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::AccidentalValue e2 = mx::t::parseAccidentalValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( AccidentalValue_naturalUp, Enums )
{
	mx::t::AccidentalValue e = mx::t::AccidentalValue::naturalUp;
	std::string expected = "natural-up";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::AccidentalValue e2 = mx::t::parseAccidentalValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( AccidentalValue_flatDown, Enums )
{
	mx::t::AccidentalValue e = mx::t::AccidentalValue::flatDown;
	std::string expected = "flat-down";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::AccidentalValue e2 = mx::t::parseAccidentalValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( AccidentalValue_flatUp, Enums )
{
	mx::t::AccidentalValue e = mx::t::AccidentalValue::flatUp;
	std::string expected = "flat-up";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::AccidentalValue e2 = mx::t::parseAccidentalValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( AccidentalValue_tripleSharp, Enums )
{
	mx::t::AccidentalValue e = mx::t::AccidentalValue::tripleSharp;
	std::string expected = "triple-sharp";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::AccidentalValue e2 = mx::t::parseAccidentalValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( AccidentalValue_tripleFlat, Enums )
{
	mx::t::AccidentalValue e = mx::t::AccidentalValue::tripleFlat;
	std::string expected = "triple-flat";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::AccidentalValue e2 = mx::t::parseAccidentalValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( AccidentalValue_slashQuarterSharp, Enums )
{
	mx::t::AccidentalValue e = mx::t::AccidentalValue::slashQuarterSharp;
	std::string expected = "slash-quarter-sharp";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::AccidentalValue e2 = mx::t::parseAccidentalValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( AccidentalValue_slashSharp, Enums )
{
	mx::t::AccidentalValue e = mx::t::AccidentalValue::slashSharp;
	std::string expected = "slash-sharp";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::AccidentalValue e2 = mx::t::parseAccidentalValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( AccidentalValue_slashFlat, Enums )
{
	mx::t::AccidentalValue e = mx::t::AccidentalValue::slashFlat;
	std::string expected = "slash-flat";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::AccidentalValue e2 = mx::t::parseAccidentalValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( AccidentalValue_doubleSlashFlat, Enums )
{
	mx::t::AccidentalValue e = mx::t::AccidentalValue::doubleSlashFlat;
	std::string expected = "double-slash-flat";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::AccidentalValue e2 = mx::t::parseAccidentalValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( AccidentalValue_sharp1, Enums )
{
	mx::t::AccidentalValue e = mx::t::AccidentalValue::sharp1;
	std::string expected = "sharp-1";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::AccidentalValue e2 = mx::t::parseAccidentalValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( AccidentalValue_sharp2, Enums )
{
	mx::t::AccidentalValue e = mx::t::AccidentalValue::sharp2;
	std::string expected = "sharp-2";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::AccidentalValue e2 = mx::t::parseAccidentalValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( AccidentalValue_sharp3, Enums )
{
	mx::t::AccidentalValue e = mx::t::AccidentalValue::sharp3;
	std::string expected = "sharp-3";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::AccidentalValue e2 = mx::t::parseAccidentalValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( AccidentalValue_sharp5, Enums )
{
	mx::t::AccidentalValue e = mx::t::AccidentalValue::sharp5;
	std::string expected = "sharp-5";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::AccidentalValue e2 = mx::t::parseAccidentalValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( AccidentalValue_flat1, Enums )
{
	mx::t::AccidentalValue e = mx::t::AccidentalValue::flat1;
	std::string expected = "flat-1";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::AccidentalValue e2 = mx::t::parseAccidentalValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( AccidentalValue_flat2, Enums )
{
	mx::t::AccidentalValue e = mx::t::AccidentalValue::flat2;
	std::string expected = "flat-2";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::AccidentalValue e2 = mx::t::parseAccidentalValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( AccidentalValue_flat3, Enums )
{
	mx::t::AccidentalValue e = mx::t::AccidentalValue::flat3;
	std::string expected = "flat-3";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::AccidentalValue e2 = mx::t::parseAccidentalValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( AccidentalValue_flat4, Enums )
{
	mx::t::AccidentalValue e = mx::t::AccidentalValue::flat4;
	std::string expected = "flat-4";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::AccidentalValue e2 = mx::t::parseAccidentalValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( AccidentalValue_sori, Enums )
{
	mx::t::AccidentalValue e = mx::t::AccidentalValue::sori;
	std::string expected = "sori";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::AccidentalValue e2 = mx::t::parseAccidentalValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( AccidentalValue_koron, Enums )
{
	mx::t::AccidentalValue e = mx::t::AccidentalValue::koron;
	std::string expected = "koron";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::AccidentalValue e2 = mx::t::parseAccidentalValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( ArrowDirectionEnum_BadParse, Enums )
{
	mx::t::ArrowDirectionEnum actual = mx::t::parseArrowDirectionEnum( "left" );
	mx::t::ArrowDirectionEnum expected = mx::t::ArrowDirectionEnum::left;
	CHECK_EQUAL( expected, actual )
}

TEST( ArrowDirectionEnum_left, Enums )
{
	mx::t::ArrowDirectionEnum e = mx::t::ArrowDirectionEnum::left;
	std::string expected = "left";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::ArrowDirectionEnum e2 = mx::t::parseArrowDirectionEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( ArrowDirectionEnum_up, Enums )
{
	mx::t::ArrowDirectionEnum e = mx::t::ArrowDirectionEnum::up;
	std::string expected = "up";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::ArrowDirectionEnum e2 = mx::t::parseArrowDirectionEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( ArrowDirectionEnum_right, Enums )
{
	mx::t::ArrowDirectionEnum e = mx::t::ArrowDirectionEnum::right;
	std::string expected = "right";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::ArrowDirectionEnum e2 = mx::t::parseArrowDirectionEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( ArrowDirectionEnum_down, Enums )
{
	mx::t::ArrowDirectionEnum e = mx::t::ArrowDirectionEnum::down;
	std::string expected = "down";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::ArrowDirectionEnum e2 = mx::t::parseArrowDirectionEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( ArrowDirectionEnum_northwest, Enums )
{
	mx::t::ArrowDirectionEnum e = mx::t::ArrowDirectionEnum::northwest;
	std::string expected = "northwest";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::ArrowDirectionEnum e2 = mx::t::parseArrowDirectionEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( ArrowDirectionEnum_northeast, Enums )
{
	mx::t::ArrowDirectionEnum e = mx::t::ArrowDirectionEnum::northeast;
	std::string expected = "northeast";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::ArrowDirectionEnum e2 = mx::t::parseArrowDirectionEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( ArrowDirectionEnum_southeast, Enums )
{
	mx::t::ArrowDirectionEnum e = mx::t::ArrowDirectionEnum::southeast;
	std::string expected = "southeast";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::ArrowDirectionEnum e2 = mx::t::parseArrowDirectionEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( ArrowDirectionEnum_southwest, Enums )
{
	mx::t::ArrowDirectionEnum e = mx::t::ArrowDirectionEnum::southwest;
	std::string expected = "southwest";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::ArrowDirectionEnum e2 = mx::t::parseArrowDirectionEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( ArrowDirectionEnum_leftRight, Enums )
{
	mx::t::ArrowDirectionEnum e = mx::t::ArrowDirectionEnum::leftRight;
	std::string expected = "left right";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::ArrowDirectionEnum e2 = mx::t::parseArrowDirectionEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( ArrowDirectionEnum_upDown, Enums )
{
	mx::t::ArrowDirectionEnum e = mx::t::ArrowDirectionEnum::upDown;
	std::string expected = "up down";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::ArrowDirectionEnum e2 = mx::t::parseArrowDirectionEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( ArrowDirectionEnum_northwestSoutheast, Enums )
{
	mx::t::ArrowDirectionEnum e = mx::t::ArrowDirectionEnum::northwestSoutheast;
	std::string expected = "northwest southeast";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::ArrowDirectionEnum e2 = mx::t::parseArrowDirectionEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( ArrowDirectionEnum_northeastSouthwest, Enums )
{
	mx::t::ArrowDirectionEnum e = mx::t::ArrowDirectionEnum::northeastSouthwest;
	std::string expected = "northeast southwest";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::ArrowDirectionEnum e2 = mx::t::parseArrowDirectionEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( ArrowDirectionEnum_other, Enums )
{
	mx::t::ArrowDirectionEnum e = mx::t::ArrowDirectionEnum::other;
	std::string expected = "other";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::ArrowDirectionEnum e2 = mx::t::parseArrowDirectionEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( ArrowStyle_BadParse, Enums )
{
	mx::t::ArrowStyleEnum actual = mx::t::parseArrowStyleEnum( "single" );
	mx::t::ArrowStyleEnum expected = mx::t::ArrowStyleEnum::single;
	CHECK_EQUAL( expected, actual )
}

TEST( ArrowStyle_single, Enums )
{
	mx::t::ArrowStyleEnum e = mx::t::ArrowStyleEnum::single;
	std::string expected = "single";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::ArrowStyleEnum e2 = mx::t::parseArrowStyleEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( ArrowStyle_double_, Enums )
{
	mx::t::ArrowStyleEnum e = mx::t::ArrowStyleEnum::double_;
	std::string expected = "double";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::ArrowStyleEnum e2 = mx::t::parseArrowStyleEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( ArrowStyle_filled, Enums )
{
	mx::t::ArrowStyleEnum e = mx::t::ArrowStyleEnum::filled;
	std::string expected = "filled";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::ArrowStyleEnum e2 = mx::t::parseArrowStyleEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( ArrowStyle_hollow, Enums )
{
	mx::t::ArrowStyleEnum e = mx::t::ArrowStyleEnum::hollow;
	std::string expected = "hollow";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::ArrowStyleEnum e2 = mx::t::parseArrowStyleEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( ArrowStyle_paired, Enums )
{
	mx::t::ArrowStyleEnum e = mx::t::ArrowStyleEnum::paired;
	std::string expected = "paired";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::ArrowStyleEnum e2 = mx::t::parseArrowStyleEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( ArrowStyle_combined, Enums )
{
	mx::t::ArrowStyleEnum e = mx::t::ArrowStyleEnum::combined;
	std::string expected = "combined";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::ArrowStyleEnum e2 = mx::t::parseArrowStyleEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( ArrowStyle_other, Enums )
{
	mx::t::ArrowStyleEnum e = mx::t::ArrowStyleEnum::other;
	std::string expected = "other";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::ArrowStyleEnum e2 = mx::t::parseArrowStyleEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( BeamValue_BadParse, Enums )
{
	mx::t::BeamValue actual = mx::t::parseBeamValue( "begin" );
	mx::t::BeamValue expected = mx::t::BeamValue::begin;
	CHECK_EQUAL( expected, actual )
}

TEST( BeamValue_begin, Enums )
{
	mx::t::BeamValue e = mx::t::BeamValue::begin;
	std::string expected = "begin";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::BeamValue e2 = mx::t::parseBeamValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( BeamValue_continue_, Enums )
{
	mx::t::BeamValue e = mx::t::BeamValue::continue_;
	std::string expected = "continue";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::BeamValue e2 = mx::t::parseBeamValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( BeamValue_end, Enums )
{
	mx::t::BeamValue e = mx::t::BeamValue::end;
	std::string expected = "end";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::BeamValue e2 = mx::t::parseBeamValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( BeamValue_forwardHook, Enums )
{
	mx::t::BeamValue e = mx::t::BeamValue::forwardHook;
	std::string expected = "forward hook";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::BeamValue e2 = mx::t::parseBeamValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( BeamValue_backwardHook, Enums )
{
	mx::t::BeamValue e = mx::t::BeamValue::backwardHook;
	std::string expected = "backward hook";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::BeamValue e2 = mx::t::parseBeamValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( BreathMarkValue_BadParse, Enums )
{
	mx::t::BreathMarkValue actual = mx::t::parseBreathMarkValue( "" );
	mx::t::BreathMarkValue expected = mx::t::BreathMarkValue::emptystring;
	CHECK_EQUAL( expected, actual )
}

TEST( BreathMarkValue_emptystring, Enums )
{
	mx::t::BreathMarkValue e = mx::t::BreathMarkValue::emptystring;
	std::string expected = "";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::BreathMarkValue e2 = mx::t::parseBreathMarkValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( BreathMarkValue_comma, Enums )
{
	mx::t::BreathMarkValue e = mx::t::BreathMarkValue::comma;
	std::string expected = "comma";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::BreathMarkValue e2 = mx::t::parseBreathMarkValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( BreathMarkValue_tick, Enums )
{
	mx::t::BreathMarkValue e = mx::t::BreathMarkValue::tick;
	std::string expected = "tick";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::BreathMarkValue e2 = mx::t::parseBreathMarkValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( CircularArrow_BadParse, Enums )
{
	mx::t::CircularArrowEnum actual = mx::t::parseCircularArrowEnum( "clockwise" );
	mx::t::CircularArrowEnum expected = mx::t::CircularArrowEnum::clockwise;
	CHECK_EQUAL( expected, actual )
}

TEST( CircularArrow_clockwise, Enums )
{
	mx::t::CircularArrowEnum e = mx::t::CircularArrowEnum::clockwise;
	std::string expected = "clockwise";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::CircularArrowEnum e2 = mx::t::parseCircularArrowEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( CircularArrow_anticlockwise, Enums )
{
	mx::t::CircularArrowEnum e = mx::t::CircularArrowEnum::anticlockwise;
	std::string expected = "anticlockwise";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::CircularArrowEnum e2 = mx::t::parseCircularArrowEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Fan_BadParse, Enums )
{
	mx::t::Fan actual = mx::t::parseFan( "accel" );
	mx::t::Fan expected = mx::t::Fan::accel;
	CHECK_EQUAL( expected, actual )
}

TEST( Fan_accel, Enums )
{
	mx::t::Fan e = mx::t::Fan::accel;
	std::string expected = "accel";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::Fan e2 = mx::t::parseFan( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Fan_rit, Enums )
{
	mx::t::Fan e = mx::t::Fan::rit;
	std::string expected = "rit";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::Fan e2 = mx::t::parseFan( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Fan_none, Enums )
{
	mx::t::Fan e = mx::t::Fan::none;
	std::string expected = "none";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::Fan e2 = mx::t::parseFan( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( HandbellValue_BadParse, Enums )
{
	mx::t::HandbellValue actual = mx::t::parseHandbellValue( "damp" );
	mx::t::HandbellValue expected = mx::t::HandbellValue::damp;
	CHECK_EQUAL( expected, actual )
}

TEST( HandbellValue_damp, Enums )
{
	mx::t::HandbellValue e = mx::t::HandbellValue::damp;
	std::string expected = "damp";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::HandbellValue e2 = mx::t::parseHandbellValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( HandbellValue_echo, Enums )
{
	mx::t::HandbellValue e = mx::t::HandbellValue::echo;
	std::string expected = "echo";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::HandbellValue e2 = mx::t::parseHandbellValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( HandbellValue_gyro, Enums )
{
	mx::t::HandbellValue e = mx::t::HandbellValue::gyro;
	std::string expected = "gyro";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::HandbellValue e2 = mx::t::parseHandbellValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( HandbellValue_handMartellato, Enums )
{
	mx::t::HandbellValue e = mx::t::HandbellValue::handMartellato;
	std::string expected = "hand martellato";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::HandbellValue e2 = mx::t::parseHandbellValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( HandbellValue_malletLift, Enums )
{
	mx::t::HandbellValue e = mx::t::HandbellValue::malletLift;
	std::string expected = "mallet lift";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::HandbellValue e2 = mx::t::parseHandbellValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( HandbellValue_malletTable, Enums )
{
	mx::t::HandbellValue e = mx::t::HandbellValue::malletTable;
	std::string expected = "mallet table";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::HandbellValue e2 = mx::t::parseHandbellValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( HandbellValue_martellato, Enums )
{
	mx::t::HandbellValue e = mx::t::HandbellValue::martellato;
	std::string expected = "martellato";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::HandbellValue e2 = mx::t::parseHandbellValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( HandbellValue_martellatoLift, Enums )
{
	mx::t::HandbellValue e = mx::t::HandbellValue::martellatoLift;
	std::string expected = "martellato lift";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::HandbellValue e2 = mx::t::parseHandbellValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( HandbellValue_mutedMartellato, Enums )
{
	mx::t::HandbellValue e = mx::t::HandbellValue::mutedMartellato;
	std::string expected = "muted martellato";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::HandbellValue e2 = mx::t::parseHandbellValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( HandbellValue_pluckLift, Enums )
{
	mx::t::HandbellValue e = mx::t::HandbellValue::pluckLift;
	std::string expected = "pluck lift";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::HandbellValue e2 = mx::t::parseHandbellValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( HandbellValue_swing, Enums )
{
	mx::t::HandbellValue e = mx::t::HandbellValue::swing;
	std::string expected = "swing";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::HandbellValue e2 = mx::t::parseHandbellValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( HoleClosedLocation_BadParse, Enums )
{
	mx::t::HoleClosedLocation actual = mx::t::parseHoleClosedLocation( "right" );
	mx::t::HoleClosedLocation expected = mx::t::HoleClosedLocation::right;
	CHECK_EQUAL( expected, actual )
}

TEST( HoleClosedLocation_right, Enums )
{
	mx::t::HoleClosedLocation e = mx::t::HoleClosedLocation::right;
	std::string expected = "right";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::HoleClosedLocation e2 = mx::t::parseHoleClosedLocation( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( HoleClosedLocation_bottom, Enums )
{
	mx::t::HoleClosedLocation e = mx::t::HoleClosedLocation::bottom;
	std::string expected = "bottom";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::HoleClosedLocation e2 = mx::t::parseHoleClosedLocation( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( HoleClosedLocation_left, Enums )
{
	mx::t::HoleClosedLocation e = mx::t::HoleClosedLocation::left;
	std::string expected = "left";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::HoleClosedLocation e2 = mx::t::parseHoleClosedLocation( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( HoleClosedLocation_top, Enums )
{
	mx::t::HoleClosedLocation e = mx::t::HoleClosedLocation::top;
	std::string expected = "top";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::HoleClosedLocation e2 = mx::t::parseHoleClosedLocation( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( HoleClosedValue_BadParse, Enums )
{
	mx::t::HoleClosedValue actual = mx::t::parseHoleClosedValue( "yes" );
	mx::t::HoleClosedValue expected = mx::t::HoleClosedValue::yes;
	CHECK_EQUAL( expected, actual )
}

TEST( HoleClosedValue_yes, Enums )
{
	mx::t::HoleClosedValue e = mx::t::HoleClosedValue::yes;
	std::string expected = "yes";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::HoleClosedValue e2 = mx::t::parseHoleClosedValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( HoleClosedValue_no, Enums )
{
	mx::t::HoleClosedValue e = mx::t::HoleClosedValue::no;
	std::string expected = "no";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::HoleClosedValue e2 = mx::t::parseHoleClosedValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( HoleClosedValue_half, Enums )
{
	mx::t::HoleClosedValue e = mx::t::HoleClosedValue::half;
	std::string expected = "half";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::HoleClosedValue e2 = mx::t::parseHoleClosedValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( NoteTypeValue_BadParse, Enums )
{
	mx::t::NoteTypeValue actual = mx::t::parseNoteTypeValue( "1024th" );
	mx::t::NoteTypeValue expected = mx::t::NoteTypeValue::oneThousandTwentyFourth;
	CHECK_EQUAL( expected, actual )
}

TEST( NoteTypeValue_oneThousandTwentyFourth, Enums )
{
	mx::t::NoteTypeValue e = mx::t::NoteTypeValue::oneThousandTwentyFourth;
	std::string expected = "1024th";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::NoteTypeValue e2 = mx::t::parseNoteTypeValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( NoteTypeValue_fiveHundredTwelfth, Enums )
{
	mx::t::NoteTypeValue e = mx::t::NoteTypeValue::fiveHundredTwelfth;
	std::string expected = "512th";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::NoteTypeValue e2 = mx::t::parseNoteTypeValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( NoteTypeValue_twoHundredFifthySixth, Enums )
{
	mx::t::NoteTypeValue e = mx::t::NoteTypeValue::twoHundredFifthySixth;
	std::string expected = "256th";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::NoteTypeValue e2 = mx::t::parseNoteTypeValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( NoteTypeValue_oneHundredTwentyEighth, Enums )
{
	mx::t::NoteTypeValue e = mx::t::NoteTypeValue::oneHundredTwentyEighth;
	std::string expected = "128th";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::NoteTypeValue e2 = mx::t::parseNoteTypeValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( NoteTypeValue_sixtyFourth, Enums )
{
	mx::t::NoteTypeValue e = mx::t::NoteTypeValue::sixtyFourth;
	std::string expected = "64th";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::NoteTypeValue e2 = mx::t::parseNoteTypeValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( NoteTypeValue_thirtySecond, Enums )
{
	mx::t::NoteTypeValue e = mx::t::NoteTypeValue::thirtySecond;
	std::string expected = "32nd";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::NoteTypeValue e2 = mx::t::parseNoteTypeValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( NoteTypeValue_sixteenth, Enums )
{
	mx::t::NoteTypeValue e = mx::t::NoteTypeValue::sixteenth;
	std::string expected = "16th";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::NoteTypeValue e2 = mx::t::parseNoteTypeValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( NoteTypeValue_eighth, Enums )
{
	mx::t::NoteTypeValue e = mx::t::NoteTypeValue::eighth;
	std::string expected = "eighth";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::NoteTypeValue e2 = mx::t::parseNoteTypeValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( NoteTypeValue_quarter, Enums )
{
	mx::t::NoteTypeValue e = mx::t::NoteTypeValue::quarter;
	std::string expected = "quarter";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::NoteTypeValue e2 = mx::t::parseNoteTypeValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( NoteTypeValue_half, Enums )
{
	mx::t::NoteTypeValue e = mx::t::NoteTypeValue::half;
	std::string expected = "half";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::NoteTypeValue e2 = mx::t::parseNoteTypeValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( NoteTypeValue_whole, Enums )
{
	mx::t::NoteTypeValue e = mx::t::NoteTypeValue::whole;
	std::string expected = "whole";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::NoteTypeValue e2 = mx::t::parseNoteTypeValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( NoteTypeValue_breve, Enums )
{
	mx::t::NoteTypeValue e = mx::t::NoteTypeValue::breve;
	std::string expected = "breve";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::NoteTypeValue e2 = mx::t::parseNoteTypeValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( NoteTypeValue_long_, Enums )
{
	mx::t::NoteTypeValue e = mx::t::NoteTypeValue::long_;
	std::string expected = "long";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::NoteTypeValue e2 = mx::t::parseNoteTypeValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( NoteTypeValue_maxima, Enums )
{
	mx::t::NoteTypeValue e = mx::t::NoteTypeValue::maxima;
	std::string expected = "maxima";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::NoteTypeValue e2 = mx::t::parseNoteTypeValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( NoteheadValue_BadParse, Enums )
{
	mx::t::NoteheadValue actual = mx::t::parseNoteheadValue( "slash" );
	mx::t::NoteheadValue expected = mx::t::NoteheadValue::slash;
	CHECK_EQUAL( expected, actual )
}

TEST( NoteheadValue_slash, Enums )
{
	mx::t::NoteheadValue e = mx::t::NoteheadValue::slash;
	std::string expected = "slash";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::NoteheadValue e2 = mx::t::parseNoteheadValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( NoteheadValue_triangle, Enums )
{
	mx::t::NoteheadValue e = mx::t::NoteheadValue::triangle;
	std::string expected = "triangle";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::NoteheadValue e2 = mx::t::parseNoteheadValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( NoteheadValue_diamond, Enums )
{
	mx::t::NoteheadValue e = mx::t::NoteheadValue::diamond;
	std::string expected = "diamond";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::NoteheadValue e2 = mx::t::parseNoteheadValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( NoteheadValue_square, Enums )
{
	mx::t::NoteheadValue e = mx::t::NoteheadValue::square;
	std::string expected = "square";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::NoteheadValue e2 = mx::t::parseNoteheadValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( NoteheadValue_cross, Enums )
{
	mx::t::NoteheadValue e = mx::t::NoteheadValue::cross;
	std::string expected = "cross";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::NoteheadValue e2 = mx::t::parseNoteheadValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( NoteheadValue_x, Enums )
{
	mx::t::NoteheadValue e = mx::t::NoteheadValue::x;
	std::string expected = "x";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::NoteheadValue e2 = mx::t::parseNoteheadValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( NoteheadValue_circleX, Enums )
{
	mx::t::NoteheadValue e = mx::t::NoteheadValue::circleX;
	std::string expected = "circle-x";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::NoteheadValue e2 = mx::t::parseNoteheadValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( NoteheadValue_invertedTriangle, Enums )
{
	mx::t::NoteheadValue e = mx::t::NoteheadValue::invertedTriangle;
	std::string expected = "inverted triangle";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::NoteheadValue e2 = mx::t::parseNoteheadValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( NoteheadValue_arrowDown, Enums )
{
	mx::t::NoteheadValue e = mx::t::NoteheadValue::arrowDown;
	std::string expected = "arrow down";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::NoteheadValue e2 = mx::t::parseNoteheadValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( NoteheadValue_arrowUp, Enums )
{
	mx::t::NoteheadValue e = mx::t::NoteheadValue::arrowUp;
	std::string expected = "arrow up";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::NoteheadValue e2 = mx::t::parseNoteheadValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( NoteheadValue_slashed, Enums )
{
	mx::t::NoteheadValue e = mx::t::NoteheadValue::slashed;
	std::string expected = "slashed";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::NoteheadValue e2 = mx::t::parseNoteheadValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( NoteheadValue_backSlashed, Enums )
{
	mx::t::NoteheadValue e = mx::t::NoteheadValue::backSlashed;
	std::string expected = "back slashed";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::NoteheadValue e2 = mx::t::parseNoteheadValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( NoteheadValue_normal, Enums )
{
	mx::t::NoteheadValue e = mx::t::NoteheadValue::normal;
	std::string expected = "normal";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::NoteheadValue e2 = mx::t::parseNoteheadValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( NoteheadValue_cluster, Enums )
{
	mx::t::NoteheadValue e = mx::t::NoteheadValue::cluster;
	std::string expected = "cluster";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::NoteheadValue e2 = mx::t::parseNoteheadValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( NoteheadValue_circleDot, Enums )
{
	mx::t::NoteheadValue e = mx::t::NoteheadValue::circleDot;
	std::string expected = "circle dot";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::NoteheadValue e2 = mx::t::parseNoteheadValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( NoteheadValue_leftTriangle, Enums )
{
	mx::t::NoteheadValue e = mx::t::NoteheadValue::leftTriangle;
	std::string expected = "left triangle";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::NoteheadValue e2 = mx::t::parseNoteheadValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( NoteheadValue_rectangle, Enums )
{
	mx::t::NoteheadValue e = mx::t::NoteheadValue::rectangle;
	std::string expected = "rectangle";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::NoteheadValue e2 = mx::t::parseNoteheadValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( NoteheadValue_none, Enums )
{
	mx::t::NoteheadValue e = mx::t::NoteheadValue::none;
	std::string expected = "none";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::NoteheadValue e2 = mx::t::parseNoteheadValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( NoteheadValue_do_, Enums )
{
	mx::t::NoteheadValue e = mx::t::NoteheadValue::do_;
	std::string expected = "do";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::NoteheadValue e2 = mx::t::parseNoteheadValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( NoteheadValue_re, Enums )
{
	mx::t::NoteheadValue e = mx::t::NoteheadValue::re;
	std::string expected = "re";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::NoteheadValue e2 = mx::t::parseNoteheadValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( NoteheadValue_mi, Enums )
{
	mx::t::NoteheadValue e = mx::t::NoteheadValue::mi;
	std::string expected = "mi";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::NoteheadValue e2 = mx::t::parseNoteheadValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( NoteheadValue_fa, Enums )
{
	mx::t::NoteheadValue e = mx::t::NoteheadValue::fa;
	std::string expected = "fa";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::NoteheadValue e2 = mx::t::parseNoteheadValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( NoteheadValue_faUp, Enums )
{
	mx::t::NoteheadValue e = mx::t::NoteheadValue::faUp;
	std::string expected = "fa up";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::NoteheadValue e2 = mx::t::parseNoteheadValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( NoteheadValue_so, Enums )
{
	mx::t::NoteheadValue e = mx::t::NoteheadValue::so;
	std::string expected = "so";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::NoteheadValue e2 = mx::t::parseNoteheadValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( NoteheadValue_la, Enums )
{
	mx::t::NoteheadValue e = mx::t::NoteheadValue::la;
	std::string expected = "la";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::NoteheadValue e2 = mx::t::parseNoteheadValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( NoteheadValue_ti, Enums )
{
	mx::t::NoteheadValue e = mx::t::NoteheadValue::ti;
	std::string expected = "ti";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::NoteheadValue e2 = mx::t::parseNoteheadValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( ShowTuplet_BadParse, Enums )
{
	mx::t::ShowTuplet actual = mx::t::parseShowTuplet( "actual" );
	mx::t::ShowTuplet expected = mx::t::ShowTuplet::actual;
	CHECK_EQUAL( expected, actual )
}

TEST( ShowTuplet_actual, Enums )
{
	mx::t::ShowTuplet e = mx::t::ShowTuplet::actual;
	std::string expected = "actual";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::ShowTuplet e2 = mx::t::parseShowTuplet( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( ShowTuplet_both, Enums )
{
	mx::t::ShowTuplet e = mx::t::ShowTuplet::both;
	std::string expected = "both";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::ShowTuplet e2 = mx::t::parseShowTuplet( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( ShowTuplet_none, Enums )
{
	mx::t::ShowTuplet e = mx::t::ShowTuplet::none;
	std::string expected = "none";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::ShowTuplet e2 = mx::t::parseShowTuplet( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( StemValue_BadParse, Enums )
{
	mx::t::StemValue actual = mx::t::parseStemValue( "down" );
	mx::t::StemValue expected = mx::t::StemValue::down;
	CHECK_EQUAL( expected, actual )
}

TEST( StemValue_down, Enums )
{
	mx::t::StemValue e = mx::t::StemValue::down;
	std::string expected = "down";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::StemValue e2 = mx::t::parseStemValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( StemValue_up, Enums )
{
	mx::t::StemValue e = mx::t::StemValue::up;
	std::string expected = "up";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::StemValue e2 = mx::t::parseStemValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( StemValue_double_, Enums )
{
	mx::t::StemValue e = mx::t::StemValue::double_;
	std::string expected = "double";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::StemValue e2 = mx::t::parseStemValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( StemValue_none, Enums )
{
	mx::t::StemValue e = mx::t::StemValue::none;
	std::string expected = "none";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::StemValue e2 = mx::t::parseStemValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Step_BadParse, Enums )
{
	mx::t::StepEnum actual = mx::t::parseStepEnum( "A" );
	mx::t::StepEnum expected = mx::t::StepEnum::a;
	CHECK_EQUAL( expected, actual )
}

TEST( Step_a, Enums )
{
	mx::t::StepEnum e = mx::t::StepEnum::a;
	std::string expected = "A";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::StepEnum e2 = mx::t::parseStepEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Step_b, Enums )
{
	mx::t::StepEnum e = mx::t::StepEnum::b;
	std::string expected = "B";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::StepEnum e2 = mx::t::parseStepEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Step_c, Enums )
{
	mx::t::StepEnum e = mx::t::StepEnum::c;
	std::string expected = "C";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::StepEnum e2 = mx::t::parseStepEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Step_d, Enums )
{
	mx::t::StepEnum e = mx::t::StepEnum::d;
	std::string expected = "D";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::StepEnum e2 = mx::t::parseStepEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Step_e, Enums )
{
	mx::t::StepEnum e = mx::t::StepEnum::e;
	std::string expected = "E";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::StepEnum e2 = mx::t::parseStepEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Step_f, Enums )
{
	mx::t::StepEnum e = mx::t::StepEnum::f;
	std::string expected = "F";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::StepEnum e2 = mx::t::parseStepEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Step_g, Enums )
{
	mx::t::StepEnum e = mx::t::StepEnum::g;
	std::string expected = "G";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::StepEnum e2 = mx::t::parseStepEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Syllabic_BadParse, Enums )
{
	mx::t::SyllabicEnum actual = mx::t::parseSyllabicEnum( "single" );
	mx::t::SyllabicEnum expected = mx::t::SyllabicEnum::single;
	CHECK_EQUAL( expected, actual )
}

TEST( Syllabic_single, Enums )
{
	mx::t::SyllabicEnum e = mx::t::SyllabicEnum::single;
	std::string expected = "single";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::SyllabicEnum e2 = mx::t::parseSyllabicEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Syllabic_begin, Enums )
{
	mx::t::SyllabicEnum e = mx::t::SyllabicEnum::begin;
	std::string expected = "begin";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::SyllabicEnum e2 = mx::t::parseSyllabicEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Syllabic_end, Enums )
{
	mx::t::SyllabicEnum e = mx::t::SyllabicEnum::end;
	std::string expected = "end";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::SyllabicEnum e2 = mx::t::parseSyllabicEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Syllabic_middle, Enums )
{
	mx::t::SyllabicEnum e = mx::t::SyllabicEnum::middle;
	std::string expected = "middle";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::SyllabicEnum e2 = mx::t::parseSyllabicEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( GroupBarlineValue_BadParse, Enums )
{
	mx::t::GroupBarlineValue actual = mx::t::parseGroupBarlineValue( "yes" );
	mx::t::GroupBarlineValue expected = mx::t::GroupBarlineValue::yes;
	CHECK_EQUAL( expected, actual )
}

TEST( GroupBarlineValue_yes, Enums )
{
	mx::t::GroupBarlineValue e = mx::t::GroupBarlineValue::yes;
	std::string expected = "yes";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::GroupBarlineValue e2 = mx::t::parseGroupBarlineValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( GroupBarlineValue_no, Enums )
{
	mx::t::GroupBarlineValue e = mx::t::GroupBarlineValue::no;
	std::string expected = "no";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::GroupBarlineValue e2 = mx::t::parseGroupBarlineValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( GroupBarlineValue_mensurstrich, Enums )
{
	mx::t::GroupBarlineValue e = mx::t::GroupBarlineValue::mensurstrich;
	std::string expected = "Mensurstrich";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::GroupBarlineValue e2 = mx::t::parseGroupBarlineValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( GroupSymbolValue_BadParse, Enums )
{
	mx::t::GroupSymbolValue actual = mx::t::parseGroupSymbolValue( "none" );
	mx::t::GroupSymbolValue expected = mx::t::GroupSymbolValue::none;
	CHECK_EQUAL( expected, actual )
}

TEST( GroupSymbolValue_none, Enums )
{
	mx::t::GroupSymbolValue e = mx::t::GroupSymbolValue::none;
	std::string expected = "none";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::GroupSymbolValue e2 = mx::t::parseGroupSymbolValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( GroupSymbolValue_brace, Enums )
{
	mx::t::GroupSymbolValue e = mx::t::GroupSymbolValue::brace;
	std::string expected = "brace";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::GroupSymbolValue e2 = mx::t::parseGroupSymbolValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( GroupSymbolValue_line, Enums )
{
	mx::t::GroupSymbolValue e = mx::t::GroupSymbolValue::line;
	std::string expected = "line";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::GroupSymbolValue e2 = mx::t::parseGroupSymbolValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( GroupSymbolValue_bracket, Enums )
{
	mx::t::GroupSymbolValue e = mx::t::GroupSymbolValue::bracket;
	std::string expected = "bracket";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::GroupSymbolValue e2 = mx::t::parseGroupSymbolValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( GroupSymbolValue_square, Enums )
{
	mx::t::GroupSymbolValue e = mx::t::GroupSymbolValue::square;
	std::string expected = "square";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::t::GroupSymbolValue e2 = mx::t::parseGroupSymbolValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( ModeEnum_major, Enums )
{
	mx::t::ModeEnum e = mx::t::ModeEnum::major;
	std::string expected = "major";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );
    
	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	mx::t::ModeEnum e2 = mx::t::parseModeEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( ModeEnum_minor, Enums )
{
	mx::t::ModeEnum e = mx::t::ModeEnum::minor;
	std::string expected = "minor";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );
    
	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	mx::t::ModeEnum e2 = mx::t::parseModeEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( ModeEnum_dorian, Enums )
{
	mx::t::ModeEnum e = mx::t::ModeEnum::dorian;
	std::string expected = "dorian";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );
    
	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	mx::t::ModeEnum e2 = mx::t::parseModeEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( ModeEnum_phrygian, Enums )
{
	mx::t::ModeEnum e = mx::t::ModeEnum::phrygian;
	std::string expected = "phrygian";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );
    
	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	mx::t::ModeEnum e2 = mx::t::parseModeEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( ModeEnum_lydian, Enums )
{
	mx::t::ModeEnum e = mx::t::ModeEnum::lydian;
	std::string expected = "lydian";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );
    
	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	mx::t::ModeEnum e2 = mx::t::parseModeEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( ModeEnum_mixolydian, Enums )
{
	mx::t::ModeEnum e = mx::t::ModeEnum::mixolydian;
	std::string expected = "mixolydian";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );
    
	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	mx::t::ModeEnum e2 = mx::t::parseModeEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( ModeEnum_aeolian, Enums )
{
	mx::t::ModeEnum e = mx::t::ModeEnum::aeolian;
	std::string expected = "aeolian";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );
    
	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	mx::t::ModeEnum e2 = mx::t::parseModeEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( ModeEnum_ionian, Enums )
{
	mx::t::ModeEnum e = mx::t::ModeEnum::ionian;
	std::string expected = "ionian";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );
    
	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	mx::t::ModeEnum e2 = mx::t::parseModeEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( ModeEnum_locrian, Enums )
{
	mx::t::ModeEnum e = mx::t::ModeEnum::locrian;
	std::string expected = "locrian";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );
    
	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	mx::t::ModeEnum e2 = mx::t::parseModeEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( ModeEnum_none, Enums )
{
	mx::t::ModeEnum e = mx::t::ModeEnum::none;
	std::string expected = "none";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );
    
	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	mx::t::ModeEnum e2 = mx::t::parseModeEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( ModeEnum_other, Enums )
{
	mx::t::ModeEnum e = mx::t::ModeEnum::other;
	std::string expected = "other";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );
    
	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	mx::t::ModeEnum e2 = mx::t::parseModeEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Mode_default, Enums )
{
	mx::t::ModeValue object;
    mx::t::ModeEnum expected = mx::t::ModeEnum::major;
    mx::t::ModeEnum actual = object.getValue();
    CHECK_EQUAL( expected, actual )
}
TEST( Mode_major, Enums )
{
    mx::t::ModeEnum enumval = mx::t::ModeEnum::major;
    mx::t::ModeEnum diffval = mx::t::ModeEnum::other;
    std::string strval = mx::t::toString( enumval );
    std::string difval = "none";
    std::string badstr = "EORIUT";
    mx::t::ModeValue object( enumval );
    mx::t::ModeEnum expected = enumval;
    mx::t::ModeEnum actual = object.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::t::ModeValue object2( diffval );
    expected = diffval;
    actual = object2.getValue();
    CHECK_EQUAL( expected, actual )
    object2.setValue( enumval );
    expected = enumval;
    actual = object2.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::t::ModeValue object3( diffval );
    object3 = mx::t::parseModeValue( strval );
    expected = enumval;
    actual = object3.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::t::ModeValue object4( strval );
    expected = enumval;
    actual = object4.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::t::ModeValue object5( badstr );
    expected = mx::t::ModeEnum::other;
    actual = object5.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::t::ModeValue object6( enumval );
    std::string expected_str = strval;
    std::string actual_str = mx::t::toString( object6 );
    CHECK_EQUAL( expected_str, actual_str )
    
    std::stringstream ss;
    mx::t::toStream( ss, object6 );
    expected_str = strval;
    actual_str = ss.str();
    CHECK_EQUAL( expected_str, actual_str )
    
    object6 = mx::t::parseModeValue( badstr );
    expected_str = badstr;
    actual_str = mx::t::toString( object6 );
    CHECK_EQUAL( expected_str, actual_str )
    
    ss.str( "" );
    ss << object6;
    CHECK_EQUAL( expected_str, actual_str )
}

TEST( Mode_lydian, Enums )
{
    mx::t::ModeEnum enumval = mx::t::ModeEnum::lydian;
    mx::t::ModeEnum diffval = mx::t::ModeEnum::locrian;
    std::string strval = mx::t::toString( enumval );
    std::string difval = "locrian";
    std::string badstr = "Lydian";
    mx::t::ModeValue object( enumval );
    mx::t::ModeEnum expected = enumval;
    mx::t::ModeEnum actual = object.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::t::ModeValue object2( diffval );
    expected = diffval;
    actual = object2.getValue();
    CHECK_EQUAL( expected, actual )
    object2.setValue( enumval );
    expected = enumval;
    actual = object2.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::t::ModeValue object3( diffval );
    object3 = mx::t::parseModeValue( strval );
    expected = enumval;
    actual = object3.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::t::ModeValue object4( strval );
    expected = enumval;
    actual = object4.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::t::ModeValue object5( badstr );
    expected = mx::t::ModeEnum::other;
    actual = object5.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::t::ModeValue object6( enumval );
    std::string expected_str = strval;
    std::string actual_str = mx::t::toString( object6 );
    CHECK_EQUAL( expected_str, actual_str )
    
    std::stringstream ss;
    mx::t::toStream( ss, object6 );
    expected_str = strval;
    actual_str = ss.str();
    CHECK_EQUAL( expected_str, actual_str )
    
    object6 = mx::t::parseModeValue( badstr );
    expected_str = badstr;
    actual_str = mx::t::toString( object6 );
    CHECK_EQUAL( expected_str, actual_str )
    
    ss.str( "" );
    ss << object6;
    CHECK_EQUAL( expected_str, actual_str )
}

TEST( Mode_locrian, Enums )
{
    mx::t::ModeEnum enumval = mx::t::ModeEnum::locrian;
    mx::t::ModeEnum diffval = mx::t::ModeEnum::aeolian;
    std::string strval = mx::t::toString( enumval );
    std::string difval = "aeolian";
    std::string badstr = "pelog";
    mx::t::ModeValue object( enumval );
    mx::t::ModeEnum expected = enumval;
    mx::t::ModeEnum actual = object.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::t::ModeValue object2( diffval );
    expected = diffval;
    actual = object2.getValue();
    CHECK_EQUAL( expected, actual )
    object2.setValue( enumval );
    expected = enumval;
    actual = object2.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::t::ModeValue object3( diffval );
    object3 = mx::t::parseModeValue( strval );
    expected = enumval;
    actual = object3.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::t::ModeValue object4( strval );
    expected = enumval;
    actual = object4.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::t::ModeValue object5( badstr );
    expected = mx::t::ModeEnum::other;
    actual = object5.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::t::ModeValue object6( enumval );
    std::string expected_str = strval;
    std::string actual_str = mx::t::toString( object6 );
    CHECK_EQUAL( expected_str, actual_str )
    
    std::stringstream ss;
    mx::t::toStream( ss, object6 );
    expected_str = strval;
    actual_str = ss.str();
    CHECK_EQUAL( expected_str, actual_str )
    
    object6 = mx::t::parseModeValue( badstr );
    expected_str = badstr;
    actual_str = mx::t::toString( object6 );
    CHECK_EQUAL( expected_str, actual_str )
    
    ss.str( "" );
    ss << object6;
    CHECK_EQUAL( expected_str, actual_str )
}

TEST( Mode_other, Enums )
{
    mx::t::ModeEnum enumval = mx::t::ModeEnum::other;
    mx::t::ModeEnum diffval = mx::t::ModeEnum::aeolian;
    std::string strval = ""; // mx::t::toString( enumval );
    std::string difval = "aeolian";
    std::string badstr = "pelog";
    mx::t::ModeValue object( enumval );
    mx::t::ModeEnum expected = enumval;
    mx::t::ModeEnum actual = object.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::t::ModeValue object2( diffval );
    expected = diffval;
    actual = object2.getValue();
    CHECK_EQUAL( expected, actual )
    object2.setValue( enumval );
    expected = enumval;
    actual = object2.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::t::ModeValue object3( diffval );
    object3 = mx::t::parseModeValue( strval );
    expected = enumval;
    actual = object3.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::t::ModeValue object4( strval );
    expected = enumval;
    actual = object4.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::t::ModeValue object5( badstr );
    expected = mx::t::ModeEnum::other;
    actual = object5.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::t::ModeValue object6( enumval );
    std::string expected_str = strval;
    std::string actual_str = mx::t::toString( object6 );
    CHECK_EQUAL( expected_str, actual_str )
    
    std::stringstream ss;
    mx::t::toStream( ss, object6 );
    expected_str = strval;
    actual_str = ss.str();
    CHECK_EQUAL( expected_str, actual_str )
    
    object6 = mx::t::parseModeValue( badstr );
    expected_str = badstr;
    actual_str = mx::t::toString( object6 );
    CHECK_EQUAL( expected_str, actual_str )
    
    ss.str( "" );
    ss << object6;
    CHECK_EQUAL( expected_str, actual_str )
}

TEST( DistanceTypeEnum_beam, Enums )
{
	mx::t::DistanceTypeEnum e = mx::t::DistanceTypeEnum::beam;
	std::string expected = "beam";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );
    
	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	mx::t::DistanceTypeEnum e2 = mx::t::parseDistanceTypeEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( DistanceTypeEnum_hyphen, Enums )
{
	mx::t::DistanceTypeEnum e = mx::t::DistanceTypeEnum::hyphen;
	std::string expected = "hyphen";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );
    
	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	mx::t::DistanceTypeEnum e2 = mx::t::parseDistanceTypeEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( DistanceTypeEnum_other, Enums )
{
	mx::t::DistanceTypeEnum e = mx::t::DistanceTypeEnum::other;
	std::string expected = "other";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );
    
	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	mx::t::DistanceTypeEnum e2 = mx::t::parseDistanceTypeEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( DistanceType_beam, Enums )
{
    mx::t::DistanceTypeEnum enumval = mx::t::DistanceTypeEnum::beam;
    mx::t::DistanceTypeEnum diffval = mx::t::DistanceTypeEnum::hyphen;
    std::string strval = mx::t::toString( enumval );
    std::string difval = "hyphen";
    std::string badstr = "someothertype";
    mx::t::DistanceType object( enumval );
    mx::t::DistanceTypeEnum expected = enumval;
    mx::t::DistanceTypeEnum actual = object.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::t::DistanceType object2( diffval );
    expected = diffval;
    actual = object2.getValue();
    CHECK_EQUAL( expected, actual )
    object2.setValue( enumval );
    expected = enumval;
    actual = object2.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::t::DistanceType object3( diffval );
    object3 = mx::t::parseDistanceType( strval );
    expected = enumval;
    actual = object3.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::t::DistanceType object4( strval );
    expected = enumval;
    actual = object4.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::t::DistanceType object5( badstr );
    expected = mx::t::DistanceTypeEnum::other;
    actual = object5.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::t::DistanceType object6( enumval );
    std::string expected_str = strval;
    std::string actual_str = mx::t::toString( object6 );
    CHECK_EQUAL( expected_str, actual_str )
    
    std::stringstream ss;
    mx::t::toStream( ss, object6 );
    expected_str = strval;
    actual_str = ss.str();
    CHECK_EQUAL( expected_str, actual_str )
    
    object6 = mx::t::parseDistanceType( badstr );
    expected_str = badstr;
    actual_str = mx::t::toString( object6 );
    CHECK_EQUAL( expected_str, actual_str )
    
    ss.str( "" );
    ss << object6;
    CHECK_EQUAL( expected_str, actual_str )
}

TEST( DistanceType_hyphen, Enums )
{
    mx::t::DistanceTypeEnum enumval = mx::t::DistanceTypeEnum::hyphen;
    mx::t::DistanceTypeEnum diffval = mx::t::DistanceTypeEnum::beam;
    std::string strval = mx::t::toString( enumval );
    std::string difval = "beam";
    std::string badstr = "someothertype";
    mx::t::DistanceType object( enumval );
    mx::t::DistanceTypeEnum expected = enumval;
    mx::t::DistanceTypeEnum actual = object.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::t::DistanceType object2( diffval );
    expected = diffval;
    actual = object2.getValue();
    CHECK_EQUAL( expected, actual )
    object2.setValue( enumval );
    expected = enumval;
    actual = object2.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::t::DistanceType object3( diffval );
    object3 = mx::t::parseDistanceType( strval );
    expected = enumval;
    actual = object3.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::t::DistanceType object4( strval );
    expected = enumval;
    actual = object4.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::t::DistanceType object5( badstr );
    expected = mx::t::DistanceTypeEnum::other;
    actual = object5.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::t::DistanceType object6( enumval );
    std::string expected_str = strval;
    std::string actual_str = mx::t::toString( object6 );
    CHECK_EQUAL( expected_str, actual_str )
    
    std::stringstream ss;
    mx::t::toStream( ss, object6 );
    expected_str = strval;
    actual_str = ss.str();
    CHECK_EQUAL( expected_str, actual_str )
    
    object6 = mx::t::parseDistanceType( badstr );
    expected_str = badstr;
    actual_str = mx::t::toString( object6 );
    CHECK_EQUAL( expected_str, actual_str )
    
    ss.str( "" );
    ss << object6;
    CHECK_EQUAL( expected_str, actual_str )
}


TEST( DistanceType_other, Enums )
{
    mx::t::DistanceTypeEnum enumval = mx::t::DistanceTypeEnum::other;
    mx::t::DistanceTypeEnum diffval = mx::t::DistanceTypeEnum::beam;
    std::string strval = ""; // mx::t::toString( enumval );
    std::string difval = "beam";
    std::string badstr = "someothertype";
    mx::t::DistanceType object( enumval );
    mx::t::DistanceTypeEnum expected = enumval;
    mx::t::DistanceTypeEnum actual = object.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::t::DistanceType object2( diffval );
    expected = diffval;
    actual = object2.getValue();
    CHECK_EQUAL( expected, actual )
    object2.setValue( enumval );
    expected = enumval;
    actual = object2.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::t::DistanceType object3( diffval );
    object3 = mx::t::parseDistanceType( strval );
    expected = enumval;
    actual = object3.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::t::DistanceType object4( strval );
    expected = enumval;
    actual = object4.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::t::DistanceType object5( badstr );
    expected = mx::t::DistanceTypeEnum::other;
    actual = object5.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::t::DistanceType object6( enumval );
    std::string expected_str = strval;
    std::string actual_str = mx::t::toString( object6 );
    CHECK_EQUAL( expected_str, actual_str )
    
    std::stringstream ss;
    mx::t::toStream( ss, object6 );
    expected_str = strval;
    actual_str = ss.str();
    CHECK_EQUAL( expected_str, actual_str )
    
    object6 = mx::t::parseDistanceType( badstr );
    expected_str = badstr;
    actual_str = mx::t::toString( object6 );
    CHECK_EQUAL( expected_str, actual_str )
    
    ss.str( "" );
    ss << object6;
    CHECK_EQUAL( expected_str, actual_str )
}

TEST( LineWidthTypeEnum_beam, Enums )
{
	mx::t::LineWidthTypeEnum e = mx::t::LineWidthTypeEnum::beam;
	std::string expected = "beam";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );
    
	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	mx::t::LineWidthTypeEnum e2 = mx::t::parseLineWidthTypeEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( LineWidthTypeEnum_bracket, Enums )
{
	mx::t::LineWidthTypeEnum e = mx::t::LineWidthTypeEnum::bracket;
	std::string expected = "bracket";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );
    
	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	mx::t::LineWidthTypeEnum e2 = mx::t::parseLineWidthTypeEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( LineWidthTypeEnum_dashes, Enums )
{
	mx::t::LineWidthTypeEnum e = mx::t::LineWidthTypeEnum::dashes;
	std::string expected = "dashes";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );
    
	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	mx::t::LineWidthTypeEnum e2 = mx::t::parseLineWidthTypeEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( LineWidthTypeEnum_enclosure, Enums )
{
	mx::t::LineWidthTypeEnum e = mx::t::LineWidthTypeEnum::enclosure;
	std::string expected = "enclosure";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );
    
	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	mx::t::LineWidthTypeEnum e2 = mx::t::parseLineWidthTypeEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( LineWidthTypeEnum_ending, Enums )
{
	mx::t::LineWidthTypeEnum e = mx::t::LineWidthTypeEnum::ending;
	std::string expected = "ending";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );
    
	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	mx::t::LineWidthTypeEnum e2 = mx::t::parseLineWidthTypeEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( LineWidthTypeEnum_extend, Enums )
{
	mx::t::LineWidthTypeEnum e = mx::t::LineWidthTypeEnum::extend;
	std::string expected = "extend";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );
    
	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	mx::t::LineWidthTypeEnum e2 = mx::t::parseLineWidthTypeEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( LineWidthTypeEnum_heavyBarline, Enums )
{
	mx::t::LineWidthTypeEnum e = mx::t::LineWidthTypeEnum::heavyBarline;
	std::string expected = "heavy barline";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );
    
	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	mx::t::LineWidthTypeEnum e2 = mx::t::parseLineWidthTypeEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( LineWidthTypeEnum_leger, Enums )
{
	mx::t::LineWidthTypeEnum e = mx::t::LineWidthTypeEnum::leger;
	std::string expected = "leger";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );
    
	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	mx::t::LineWidthTypeEnum e2 = mx::t::parseLineWidthTypeEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( LineWidthTypeEnum_lightBarline, Enums )
{
	mx::t::LineWidthTypeEnum e = mx::t::LineWidthTypeEnum::lightBarline;
	std::string expected = "light barline";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );
    
	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	mx::t::LineWidthTypeEnum e2 = mx::t::parseLineWidthTypeEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( LineWidthTypeEnum_octaveShift, Enums )
{
	mx::t::LineWidthTypeEnum e = mx::t::LineWidthTypeEnum::octaveShift;
	std::string expected = "octave shift";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );
    
	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	mx::t::LineWidthTypeEnum e2 = mx::t::parseLineWidthTypeEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( LineWidthTypeEnum_pedal, Enums )
{
	mx::t::LineWidthTypeEnum e = mx::t::LineWidthTypeEnum::pedal;
	std::string expected = "pedal";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );
    
	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	mx::t::LineWidthTypeEnum e2 = mx::t::parseLineWidthTypeEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( LineWidthTypeEnum_slurMiddle, Enums )
{
	mx::t::LineWidthTypeEnum e = mx::t::LineWidthTypeEnum::slurMiddle;
	std::string expected = "slur middle";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );
    
	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	mx::t::LineWidthTypeEnum e2 = mx::t::parseLineWidthTypeEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( LineWidthTypeEnum_hyphen, Enums )
{
	mx::t::LineWidthTypeEnum e = mx::t::LineWidthTypeEnum::beam;
	std::string expected = "beam";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );
    
	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	mx::t::LineWidthTypeEnum e2 = mx::t::parseLineWidthTypeEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( LineWidthTypeEnum_slurTip, Enums )
{
	mx::t::LineWidthTypeEnum e = mx::t::LineWidthTypeEnum::slurTip;
	std::string expected = "slur tip";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );
    
	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	mx::t::LineWidthTypeEnum e2 = mx::t::parseLineWidthTypeEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( LineWidthTypeEnum_staff, Enums )
{
	mx::t::LineWidthTypeEnum e = mx::t::LineWidthTypeEnum::staff;
	std::string expected = "staff";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );
    
	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	mx::t::LineWidthTypeEnum e2 = mx::t::parseLineWidthTypeEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( LineWidthTypeEnum_stem, Enums )
{
	mx::t::LineWidthTypeEnum e = mx::t::LineWidthTypeEnum::stem;
	std::string expected = "stem";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );
    
	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	mx::t::LineWidthTypeEnum e2 = mx::t::parseLineWidthTypeEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( LineWidthTypeEnum_tieMiddle, Enums )
{
	mx::t::LineWidthTypeEnum e = mx::t::LineWidthTypeEnum::tieMiddle;
	std::string expected = "tie middle";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );
    
	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	mx::t::LineWidthTypeEnum e2 = mx::t::parseLineWidthTypeEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( LineWidthTypeEnum_tieTip, Enums )
{
	mx::t::LineWidthTypeEnum e = mx::t::LineWidthTypeEnum::tieTip;
	std::string expected = "tie tip";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );
    
	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	mx::t::LineWidthTypeEnum e2 = mx::t::parseLineWidthTypeEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( LineWidthTypeEnum_tupletBracket, Enums )
{
	mx::t::LineWidthTypeEnum e = mx::t::LineWidthTypeEnum::tupletBracket;
	std::string expected = "tuplet bracket";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );
    
	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	mx::t::LineWidthTypeEnum e2 = mx::t::parseLineWidthTypeEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( LineWidthTypeEnum_wedge, Enums )
{
	mx::t::LineWidthTypeEnum e = mx::t::LineWidthTypeEnum::wedge;
	std::string expected = "wedge";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );
    
	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	mx::t::LineWidthTypeEnum e2 = mx::t::parseLineWidthTypeEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( LineWidthTypeEnum_other, Enums )
{
	mx::t::LineWidthTypeEnum e = mx::t::LineWidthTypeEnum::other;
	std::string expected = "other";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );
    
	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	mx::t::LineWidthTypeEnum e2 = mx::t::parseLineWidthTypeEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( LineWidthType_beam, Enums )
{
    mx::t::LineWidthTypeEnum enumval = mx::t::LineWidthTypeEnum::beam;
    mx::t::LineWidthTypeEnum diffval = mx::t::LineWidthTypeEnum::enclosure;
    std::string strval = mx::t::toString( enumval );
    std::string difval = "enclosure";
    std::string badstr = "someothertype";
    mx::t::LineWidthType object( enumval );
    mx::t::LineWidthTypeEnum expected = enumval;
    mx::t::LineWidthTypeEnum actual = object.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::t::LineWidthType object2( diffval );
    expected = diffval;
    actual = object2.getValue();
    CHECK_EQUAL( expected, actual )
    object2.setValue( enumval );
    expected = enumval;
    actual = object2.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::t::LineWidthType object3( diffval );
    object3 = mx::t::parseLineWidthType( strval );
    expected = enumval;
    actual = object3.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::t::LineWidthType object4( strval );
    expected = enumval;
    actual = object4.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::t::LineWidthType object5( badstr );
    expected = mx::t::LineWidthTypeEnum::other;
    actual = object5.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::t::LineWidthType object6( enumval );
    std::string expected_str = strval;
    std::string actual_str = mx::t::toString( object6 );
    CHECK_EQUAL( expected_str, actual_str )
    
    std::stringstream ss;
    mx::t::toStream( ss, object6 );
    expected_str = strval;
    actual_str = ss.str();
    CHECK_EQUAL( expected_str, actual_str )
    
    object6 = mx::t::parseLineWidthType( badstr );
    expected_str = badstr;
    actual_str = mx::t::toString( object6 );
    CHECK_EQUAL( expected_str, actual_str )
    
    ss.str( "" );
    ss << object6;
    CHECK_EQUAL( expected_str, actual_str )
}

TEST( LineWidthType_tieTip, Enums )
{
    mx::t::LineWidthTypeEnum enumval = mx::t::LineWidthTypeEnum::tieTip;
    mx::t::LineWidthTypeEnum diffval = mx::t::LineWidthTypeEnum::leger;
    std::string strval = mx::t::toString( enumval );
    std::string difval = "leger";
    std::string badstr = "someothertype";
    mx::t::LineWidthType object( enumval );
    mx::t::LineWidthTypeEnum expected = enumval;
    mx::t::LineWidthTypeEnum actual = object.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::t::LineWidthType object2( diffval );
    expected = diffval;
    actual = object2.getValue();
    CHECK_EQUAL( expected, actual )
    object2.setValue( enumval );
    expected = enumval;
    actual = object2.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::t::LineWidthType object3( diffval );
    object3 = mx::t::parseLineWidthType( strval );
    expected = enumval;
    actual = object3.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::t::LineWidthType object4( strval );
    expected = enumval;
    actual = object4.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::t::LineWidthType object5( badstr );
    expected = mx::t::LineWidthTypeEnum::other;
    actual = object5.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::t::LineWidthType object6( enumval );
    std::string expected_str = strval;
    std::string actual_str = mx::t::toString( object6 );
    CHECK_EQUAL( expected_str, actual_str )
    
    std::stringstream ss;
    mx::t::toStream( ss, object6 );
    expected_str = strval;
    actual_str = ss.str();
    CHECK_EQUAL( expected_str, actual_str )
    
    object6 = mx::t::parseLineWidthType( badstr );
    expected_str = badstr;
    actual_str = mx::t::toString( object6 );
    CHECK_EQUAL( expected_str, actual_str )
    
    ss.str( "" );
    ss << object6;
    CHECK_EQUAL( expected_str, actual_str )
}

TEST( LineWidthType_other, Enums )
{
    mx::t::LineWidthTypeEnum enumval = mx::t::LineWidthTypeEnum::other;
    mx::t::LineWidthTypeEnum diffval = mx::t::LineWidthTypeEnum::wedge;
    std::string strval = ""; // mx::t::toString( enumval );
    std::string difval = "enclosure";
    std::string badstr = "someothertype";
    mx::t::LineWidthType object( enumval );
    mx::t::LineWidthTypeEnum expected = enumval;
    mx::t::LineWidthTypeEnum actual = object.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::t::LineWidthType object2( diffval );
    expected = diffval;
    actual = object2.getValue();
    CHECK_EQUAL( expected, actual )
    object2.setValue( enumval );
    expected = enumval;
    actual = object2.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::t::LineWidthType object3( diffval );
    object3 = mx::t::parseLineWidthType( strval );
    expected = enumval;
    actual = object3.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::t::LineWidthType object4( strval );
    expected = enumval;
    actual = object4.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::t::LineWidthType object5( badstr );
    expected = mx::t::LineWidthTypeEnum::other;
    actual = object5.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::t::LineWidthType object6( enumval );
    std::string expected_str = strval;
    std::string actual_str = mx::t::toString( object6 );
    CHECK_EQUAL( expected_str, actual_str )
    
    std::stringstream ss;
    mx::t::toStream( ss, object6 );
    expected_str = strval;
    actual_str = ss.str();
    CHECK_EQUAL( expected_str, actual_str )
    
    object6 = mx::t::parseLineWidthType( badstr );
    expected_str = badstr;
    actual_str = mx::t::toString( object6 );
    CHECK_EQUAL( expected_str, actual_str )
    
    ss.str( "" );
    ss << object6;
    CHECK_EQUAL( expected_str, actual_str )
}

TEST( XlinkActuate_BadParse, Enums )
{
	mx::t::XlinkActuate actual = mx::t::parseXlinkActuate( "onrequest" );
	mx::t::XlinkActuate expected = mx::t::XlinkActuate::onLoad;
	CHECK_EQUAL( expected, actual )
}

TEST( XlinkActuate_onLoad, Enums )
{
	mx::t::XlinkActuate e = mx::t::XlinkActuate::onLoad;
	std::string expected = "onLoad";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );
    
	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	mx::t::XlinkActuate e2 = mx::t::parseXlinkActuate( expected );
	CHECK_EQUAL( e, e2 )
}
TEST( XlinkActuate_onRequest, Enums )
{
	mx::t::XlinkActuate e = mx::t::XlinkActuate::onRequest;
	std::string expected = "onRequest";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );
    
	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	mx::t::XlinkActuate e2 = mx::t::parseXlinkActuate( expected );
	CHECK_EQUAL( e, e2 )
}
TEST( XlinkActuate_other, Enums )
{
	mx::t::XlinkActuate e = mx::t::XlinkActuate::other;
	std::string expected = "other";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );
    
	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	mx::t::XlinkActuate e2 = mx::t::parseXlinkActuate( expected );
	CHECK_EQUAL( e, e2 )
}
TEST( XlinkActuate_none, Enums )
{
	mx::t::XlinkActuate e = mx::t::XlinkActuate::none;
	std::string expected = "none";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );
    
	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	mx::t::XlinkActuate e2 = mx::t::parseXlinkActuate( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( XlinkShow_BadParse, Enums )
{
	mx::t::XlinkShow actual = mx::t::parseXlinkShow( "xyz" );
	mx::t::XlinkShow expected = mx::t::XlinkShow::new_;
	CHECK_EQUAL( expected, actual )
}
TEST( XlinkShow_new_, Enums )
{
	mx::t::XlinkShow e = mx::t::XlinkShow::new_;
	std::string expected = "new";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );
    
	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	mx::t::XlinkShow e2 = mx::t::parseXlinkShow( expected );
	CHECK_EQUAL( e, e2 )
}
TEST( XlinkShow_replace, Enums )
{
	mx::t::XlinkShow e = mx::t::XlinkShow::replace;
	std::string expected = "replace";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );
    
	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	mx::t::XlinkShow e2 = mx::t::parseXlinkShow( expected );
	CHECK_EQUAL( e, e2 )
}
TEST( XlinkShow_, Enums )
{
	mx::t::XlinkShow e = mx::t::XlinkShow::new_;
	std::string expected = "new";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );
    
	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	mx::t::XlinkShow e2 = mx::t::parseXlinkShow( expected );
	CHECK_EQUAL( e, e2 )
}
TEST( XlinkShow_embed, Enums )
{
	mx::t::XlinkShow e = mx::t::XlinkShow::embed;
	std::string expected = "embed";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );
    
	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	mx::t::XlinkShow e2 = mx::t::parseXlinkShow( expected );
	CHECK_EQUAL( e, e2 )
}
TEST( XlinkShow_other, Enums )
{
	mx::t::XlinkShow e = mx::t::XlinkShow::other;
	std::string expected = "other";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );
    
	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	mx::t::XlinkShow e2 = mx::t::parseXlinkShow( expected );
	CHECK_EQUAL( e, e2 )
}
TEST( XlinkShow_none, Enums )
{
	mx::t::XlinkShow e = mx::t::XlinkShow::none;
	std::string expected = "none";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );
    
	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	mx::t::XlinkShow e2 = mx::t::parseXlinkShow( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( XlinkType_BadParse, Enums )
{
	mx::t::XlinkType actual = mx::t::parseXlinkType( "xyz" );
	mx::t::XlinkType expected = mx::t::XlinkType::simple;
	CHECK_EQUAL( expected, actual )
}
TEST( XlinkType_simple, Enums )
{
	mx::t::XlinkType e = mx::t::XlinkType::simple;
	std::string expected = "simple";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );
    
	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	mx::t::XlinkType e2 = mx::t::parseXlinkType( expected );
	CHECK_EQUAL( e, e2 )
}
TEST( XlinkType_extended, Enums )
{
	mx::t::XlinkType e = mx::t::XlinkType::extended;
	std::string expected = "extended";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );
    
	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	mx::t::XlinkType e2 = mx::t::parseXlinkType( expected );
	CHECK_EQUAL( e, e2 )
}
TEST( XlinkType_title, Enums )
{
	mx::t::XlinkType e = mx::t::XlinkType::title;
	std::string expected = "title";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );
    
	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	mx::t::XlinkType e2 = mx::t::parseXlinkType( expected );
	CHECK_EQUAL( e, e2 )
}
TEST( XlinkType_resource, Enums )
{
	mx::t::XlinkType e = mx::t::XlinkType::resource;
	std::string expected = "resource";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );
    
	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	mx::t::XlinkType e2 = mx::t::parseXlinkType( expected );
	CHECK_EQUAL( e, e2 )
}
TEST( XlinkType_locator, Enums )
{
	mx::t::XlinkType e = mx::t::XlinkType::locator;
	std::string expected = "locator";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );
    
	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	mx::t::XlinkType e2 = mx::t::parseXlinkType( expected );
	CHECK_EQUAL( e, e2 )
}
TEST( XlinkType_arc, Enums )
{
	mx::t::XlinkType e = mx::t::XlinkType::arc;
	std::string expected = "arc";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );
    
	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	mx::t::XlinkType e2 = mx::t::parseXlinkType( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( XmlSpace_BadParse, Enums )
{
	mx::t::XmlSpace actual = mx::t::parseXmlSpace( "xyz" );
	mx::t::XmlSpace expected = mx::t::XmlSpace::default_;
	CHECK_EQUAL( expected, actual )
}
TEST( XmlSpace_default_, Enums )
{
	mx::t::XmlSpace e = mx::t::XmlSpace::default_;
	std::string expected = "default";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );
    
	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	mx::t::XmlSpace e2 = mx::t::parseXmlSpace( expected );
	CHECK_EQUAL( e, e2 )
}
TEST( XmlSpace_preserve, Enums )
{
	mx::t::XmlSpace e = mx::t::XmlSpace::preserve;
	std::string expected = "preserve";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );
    
	std::stringstream sstr;
	mx::t::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	mx::t::XmlSpace e2 = mx::t::parseXmlSpace( expected );
	CHECK_EQUAL( e, e2 )
}


TEST( DynamicsValue_beam, Enums )
{
    mx::t::DynamicsEnum enumval = mx::t::DynamicsEnum::ppppp;
    mx::t::DynamicsEnum diffval = mx::t::DynamicsEnum::pp;
    std::string strval = mx::t::toString( enumval );
    std::string difval = "enclosure";
    std::string badstr = "someothertype";
    mx::t::DynamicsValue object( enumval );
    mx::t::DynamicsEnum expected = enumval;
    mx::t::DynamicsEnum actual = object.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::t::DynamicsValue object2( diffval );
    expected = diffval;
    actual = object2.getValue();
    CHECK_EQUAL( expected, actual )
    object2.setValue( enumval );
    expected = enumval;
    actual = object2.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::t::DynamicsValue object3( diffval );
    object3 = mx::t::parseDynamicsValue( strval );
    expected = enumval;
    actual = object3.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::t::DynamicsValue object4( strval );
    expected = enumval;
    actual = object4.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::t::DynamicsValue object5( badstr );
    expected = mx::t::DynamicsEnum::otherDynamics;
    actual = object5.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::t::DynamicsValue object6( enumval );
    std::string expected_str = strval;
    std::string actual_str = mx::t::toString( object6 );
    CHECK_EQUAL( expected_str, actual_str )
    
    std::stringstream ss;
    mx::t::toStream( ss, object6 );
    expected_str = strval;
    actual_str = ss.str();
    CHECK_EQUAL( expected_str, actual_str )
    
    object6 = mx::t::parseDynamicsValue( badstr );
    expected_str = badstr;
    actual_str = mx::t::toString( object6 );
    CHECK_EQUAL( expected_str, actual_str )
    
    ss.str( "" );
    ss << object6;
    CHECK_EQUAL( expected_str, actual_str )
}

TEST( DynamicsValue_tieTip, Enums )
{
    mx::t::DynamicsEnum enumval = mx::t::DynamicsEnum::ff;
    mx::t::DynamicsEnum diffval = mx::t::DynamicsEnum::sffz;
    std::string strval = mx::t::toString( enumval );
    std::string difval = "leger";
    std::string badstr = "someothertype";
    mx::t::DynamicsValue object( enumval );
    mx::t::DynamicsEnum expected = enumval;
    mx::t::DynamicsEnum actual = object.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::t::DynamicsValue object2( diffval );
    expected = diffval;
    actual = object2.getValue();
    CHECK_EQUAL( expected, actual )
    object2.setValue( enumval );
    expected = enumval;
    actual = object2.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::t::DynamicsValue object3( diffval );
    object3 = mx::t::parseDynamicsValue( strval );
    expected = enumval;
    actual = object3.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::t::DynamicsValue object4( strval );
    expected = enumval;
    actual = object4.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::t::DynamicsValue object5( badstr );
    expected = mx::t::DynamicsEnum::otherDynamics;
    actual = object5.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::t::DynamicsValue object6( enumval );
    std::string expected_str = strval;
    std::string actual_str = mx::t::toString( object6 );
    CHECK_EQUAL( expected_str, actual_str )
    
    std::stringstream ss;
    mx::t::toStream( ss, object6 );
    expected_str = strval;
    actual_str = ss.str();
    CHECK_EQUAL( expected_str, actual_str )
    
    object6 = mx::t::parseDynamicsValue( badstr );
    expected_str = badstr;
    actual_str = mx::t::toString( object6 );
    CHECK_EQUAL( expected_str, actual_str )
    
    ss.str( "" );
    ss << object6;
    CHECK_EQUAL( expected_str, actual_str )
}

TEST( DynamicsValue_other, Enums )
{
    mx::t::DynamicsEnum enumval = mx::t::DynamicsEnum::otherDynamics;
    mx::t::DynamicsEnum diffval = mx::t::DynamicsEnum::rfz;
    std::string strval = ""; // mx::t::toString( enumval );
    std::string difval = "enclosure";
    std::string badstr = "someothertype";
    mx::t::DynamicsValue object( enumval );
    mx::t::DynamicsEnum expected = enumval;
    mx::t::DynamicsEnum actual = object.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::t::DynamicsValue object2( diffval );
    expected = diffval;
    actual = object2.getValue();
    CHECK_EQUAL( expected, actual )
    object2.setValue( enumval );
    expected = enumval;
    actual = object2.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::t::DynamicsValue object3( diffval );
    object3 = mx::t::parseDynamicsValue( strval );
    expected = enumval;
    actual = object3.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::t::DynamicsValue object4( strval );
    expected = enumval;
    actual = object4.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::t::DynamicsValue object5( badstr );
    expected = mx::t::DynamicsEnum::otherDynamics;
    actual = object5.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::t::DynamicsValue object6( enumval );
    std::string expected_str = strval;
    std::string actual_str = mx::t::toString( object6 );
    CHECK_EQUAL( expected_str, actual_str )
    
    std::stringstream ss;
    mx::t::toStream( ss, object6 );
    expected_str = strval;
    actual_str = ss.str();
    CHECK_EQUAL( expected_str, actual_str )
    
    object6 = mx::t::parseDynamicsValue( badstr );
    expected_str = badstr;
    actual_str = mx::t::toString( object6 );
    CHECK_EQUAL( expected_str, actual_str )
    
    ss.str( "" );
    ss << object6;
    CHECK_EQUAL( expected_str, actual_str )
}
#endif