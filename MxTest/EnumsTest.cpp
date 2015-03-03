#include "TestHarness.h"
#include "Enums.h"

TEST( AboveBelow_BadParse, Enums )
{
	mx::types::AboveBelow actual = mx::types::parseAboveBelow( "above" );
	mx::types::AboveBelow expected = mx::types::AboveBelow::above;
	CHECK_EQUAL( expected, actual )
}

TEST( AboveBelow_above, Enums )
{
	mx::types::AboveBelow e = mx::types::AboveBelow::above;
	std::string expected = "above";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::AboveBelow e2 = mx::types::parseAboveBelow( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( AboveBelow_below, Enums )
{
	mx::types::AboveBelow e = mx::types::AboveBelow::below;
	std::string expected = "below";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::AboveBelow e2 = mx::types::parseAboveBelow( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( CssFontSize_BadParse, Enums )
{
	mx::types::CssFontSize actual = mx::types::parseCssFontSize( "xx-small" );
	mx::types::CssFontSize expected = mx::types::CssFontSize::xxSmall;
	CHECK_EQUAL( expected, actual )
}

TEST( CssFontSize_xxSmall, Enums )
{
	mx::types::CssFontSize e = mx::types::CssFontSize::xxSmall;
	std::string expected = "xx-small";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::CssFontSize e2 = mx::types::parseCssFontSize( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( CssFontSize_xSmall, Enums )
{
	mx::types::CssFontSize e = mx::types::CssFontSize::xSmall;
	std::string expected = "x-small";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::CssFontSize e2 = mx::types::parseCssFontSize( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( CssFontSize_small, Enums )
{
	mx::types::CssFontSize e = mx::types::CssFontSize::small;
	std::string expected = "small";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::CssFontSize e2 = mx::types::parseCssFontSize( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( CssFontSize_medium, Enums )
{
	mx::types::CssFontSize e = mx::types::CssFontSize::medium;
	std::string expected = "medium";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::CssFontSize e2 = mx::types::parseCssFontSize( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( CssFontSize_large, Enums )
{
	mx::types::CssFontSize e = mx::types::CssFontSize::large;
	std::string expected = "large";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::CssFontSize e2 = mx::types::parseCssFontSize( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( CssFontSize_xLarge, Enums )
{
	mx::types::CssFontSize e = mx::types::CssFontSize::xLarge;
	std::string expected = "x-large";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::CssFontSize e2 = mx::types::parseCssFontSize( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( CssFontSize_xxLarge, Enums )
{
	mx::types::CssFontSize e = mx::types::CssFontSize::xxLarge;
	std::string expected = "xx-large";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::CssFontSize e2 = mx::types::parseCssFontSize( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( EnclosureShape_BadParse, Enums )
{
	mx::types::EnclosureShape actual = mx::types::parseEnclosureShape( "rectangle" );
	mx::types::EnclosureShape expected = mx::types::EnclosureShape::rectangle;
	CHECK_EQUAL( expected, actual )
}

TEST( EnclosureShape_rectangle, Enums )
{
	mx::types::EnclosureShape e = mx::types::EnclosureShape::rectangle;
	std::string expected = "rectangle";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::EnclosureShape e2 = mx::types::parseEnclosureShape( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( EnclosureShape_square, Enums )
{
	mx::types::EnclosureShape e = mx::types::EnclosureShape::square;
	std::string expected = "square";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::EnclosureShape e2 = mx::types::parseEnclosureShape( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( EnclosureShape_oval, Enums )
{
	mx::types::EnclosureShape e = mx::types::EnclosureShape::oval;
	std::string expected = "oval";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::EnclosureShape e2 = mx::types::parseEnclosureShape( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( EnclosureShape_circle, Enums )
{
	mx::types::EnclosureShape e = mx::types::EnclosureShape::circle;
	std::string expected = "circle";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::EnclosureShape e2 = mx::types::parseEnclosureShape( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( EnclosureShape_bracket, Enums )
{
	mx::types::EnclosureShape e = mx::types::EnclosureShape::bracket;
	std::string expected = "bracket";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::EnclosureShape e2 = mx::types::parseEnclosureShape( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( EnclosureShape_triangle, Enums )
{
	mx::types::EnclosureShape e = mx::types::EnclosureShape::triangle;
	std::string expected = "triangle";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::EnclosureShape e2 = mx::types::parseEnclosureShape( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( EnclosureShape_diamond, Enums )
{
	mx::types::EnclosureShape e = mx::types::EnclosureShape::diamond;
	std::string expected = "diamond";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::EnclosureShape e2 = mx::types::parseEnclosureShape( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( EnclosureShape_none, Enums )
{
	mx::types::EnclosureShape e = mx::types::EnclosureShape::none;
	std::string expected = "none";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::EnclosureShape e2 = mx::types::parseEnclosureShape( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( FermataShape_BadParse, Enums )
{
	mx::types::FermataShape actual = mx::types::parseFermataShape( "normal" );
	mx::types::FermataShape expected = mx::types::FermataShape::normal;
	CHECK_EQUAL( expected, actual )
}

TEST( FermataShape_normal, Enums )
{
	mx::types::FermataShape e = mx::types::FermataShape::normal;
	std::string expected = "normal";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::FermataShape e2 = mx::types::parseFermataShape( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( FermataShape_angled, Enums )
{
	mx::types::FermataShape e = mx::types::FermataShape::angled;
	std::string expected = "angled";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::FermataShape e2 = mx::types::parseFermataShape( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( FermataShape_square, Enums )
{
	mx::types::FermataShape e = mx::types::FermataShape::square;
	std::string expected = "square";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::FermataShape e2 = mx::types::parseFermataShape( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( FermataShape_emptystring, Enums )
{
	mx::types::FermataShape e = mx::types::FermataShape::emptystring;
	std::string expected = "";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::FermataShape e2 = mx::types::parseFermataShape( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( FontStyle_BadParse, Enums )
{
	mx::types::FontStyle actual = mx::types::parseFontStyle( "normal" );
	mx::types::FontStyle expected = mx::types::FontStyle::normal;
	CHECK_EQUAL( expected, actual )
}

TEST( FontStyle_normal, Enums )
{
	mx::types::FontStyle e = mx::types::FontStyle::normal;
	std::string expected = "normal";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::FontStyle e2 = mx::types::parseFontStyle( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( FontStyle_italic, Enums )
{
	mx::types::FontStyle e = mx::types::FontStyle::italic;
	std::string expected = "italic";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::FontStyle e2 = mx::types::parseFontStyle( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( FontWeight_BadParse, Enums )
{
	mx::types::FontWeight actual = mx::types::parseFontWeight( "normal" );
	mx::types::FontWeight expected = mx::types::FontWeight::normal;
	CHECK_EQUAL( expected, actual )
}

TEST( FontWeight_normal, Enums )
{
	mx::types::FontWeight e = mx::types::FontWeight::normal;
	std::string expected = "normal";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::FontWeight e2 = mx::types::parseFontWeight( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( FontWeight_bold, Enums )
{
	mx::types::FontWeight e = mx::types::FontWeight::bold;
	std::string expected = "bold";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::FontWeight e2 = mx::types::parseFontWeight( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( LeftCenterRight_BadParse, Enums )
{
	mx::types::LeftCenterRight actual = mx::types::parseLeftCenterRight( "left" );
	mx::types::LeftCenterRight expected = mx::types::LeftCenterRight::left;
	CHECK_EQUAL( expected, actual )
}

TEST( LeftCenterRight_left, Enums )
{
	mx::types::LeftCenterRight e = mx::types::LeftCenterRight::left;
	std::string expected = "left";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::LeftCenterRight e2 = mx::types::parseLeftCenterRight( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( LeftCenterRight_center, Enums )
{
	mx::types::LeftCenterRight e = mx::types::LeftCenterRight::center;
	std::string expected = "center";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::LeftCenterRight e2 = mx::types::parseLeftCenterRight( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( LeftCenterRight_right, Enums )
{
	mx::types::LeftCenterRight e = mx::types::LeftCenterRight::right;
	std::string expected = "right";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::LeftCenterRight e2 = mx::types::parseLeftCenterRight( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( LeftRight_BadParse, Enums )
{
	mx::types::LeftRight actual = mx::types::parseLeftRight( "left" );
	mx::types::LeftRight expected = mx::types::LeftRight::left;
	CHECK_EQUAL( expected, actual )
}

TEST( LeftRight_left, Enums )
{
	mx::types::LeftRight e = mx::types::LeftRight::left;
	std::string expected = "left";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::LeftRight e2 = mx::types::parseLeftRight( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( LeftRight_right, Enums )
{
	mx::types::LeftRight e = mx::types::LeftRight::right;
	std::string expected = "right";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::LeftRight e2 = mx::types::parseLeftRight( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( LineShape_BadParse, Enums )
{
	mx::types::LineShape actual = mx::types::parseLineShape( "straight" );
	mx::types::LineShape expected = mx::types::LineShape::straight;
	CHECK_EQUAL( expected, actual )
}

TEST( LineShape_straight, Enums )
{
	mx::types::LineShape e = mx::types::LineShape::straight;
	std::string expected = "straight";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::LineShape e2 = mx::types::parseLineShape( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( LineShape_curved, Enums )
{
	mx::types::LineShape e = mx::types::LineShape::curved;
	std::string expected = "curved";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::LineShape e2 = mx::types::parseLineShape( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( LineType_BadParse, Enums )
{
	mx::types::LineType actual = mx::types::parseLineType( "solid" );
	mx::types::LineType expected = mx::types::LineType::solid;
	CHECK_EQUAL( expected, actual )
}

TEST( LineType_solid, Enums )
{
	mx::types::LineType e = mx::types::LineType::solid;
	std::string expected = "solid";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::LineType e2 = mx::types::parseLineType( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( LineType_dashed, Enums )
{
	mx::types::LineType e = mx::types::LineType::dashed;
	std::string expected = "dashed";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::LineType e2 = mx::types::parseLineType( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( LineType_dotted, Enums )
{
	mx::types::LineType e = mx::types::LineType::dotted;
	std::string expected = "dotted";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::LineType e2 = mx::types::parseLineType( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( LineType_wavy, Enums )
{
	mx::types::LineType e = mx::types::LineType::wavy;
	std::string expected = "wavy";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::LineType e2 = mx::types::parseLineType( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Mute_BadParse, Enums )
{
	mx::types::Mute actual = mx::types::parseMute( "on" );
	mx::types::Mute expected = mx::types::Mute::on;
	CHECK_EQUAL( expected, actual )
}

TEST( Mute_on, Enums )
{
	mx::types::Mute e = mx::types::Mute::on;
	std::string expected = "on";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::Mute e2 = mx::types::parseMute( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Mute_off, Enums )
{
	mx::types::Mute e = mx::types::Mute::off;
	std::string expected = "off";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::Mute e2 = mx::types::parseMute( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Mute_straight, Enums )
{
	mx::types::Mute e = mx::types::Mute::straight;
	std::string expected = "straight";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::Mute e2 = mx::types::parseMute( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Mute_cup, Enums )
{
	mx::types::Mute e = mx::types::Mute::cup;
	std::string expected = "cup";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::Mute e2 = mx::types::parseMute( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Mute_harmonNoStem, Enums )
{
	mx::types::Mute e = mx::types::Mute::harmonNoStem;
	std::string expected = "harmon-no-stem";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::Mute e2 = mx::types::parseMute( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Mute_harmonStem, Enums )
{
	mx::types::Mute e = mx::types::Mute::harmonStem;
	std::string expected = "harmon-stem";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::Mute e2 = mx::types::parseMute( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Mute_bucket, Enums )
{
	mx::types::Mute e = mx::types::Mute::bucket;
	std::string expected = "bucket";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::Mute e2 = mx::types::parseMute( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Mute_plunger, Enums )
{
	mx::types::Mute e = mx::types::Mute::plunger;
	std::string expected = "plunger";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::Mute e2 = mx::types::parseMute( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Mute_hat, Enums )
{
	mx::types::Mute e = mx::types::Mute::hat;
	std::string expected = "hat";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::Mute e2 = mx::types::parseMute( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Mute_solotone, Enums )
{
	mx::types::Mute e = mx::types::Mute::solotone;
	std::string expected = "solotone";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::Mute e2 = mx::types::parseMute( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Mute_practice, Enums )
{
	mx::types::Mute e = mx::types::Mute::practice;
	std::string expected = "practice";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::Mute e2 = mx::types::parseMute( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Mute_stopMute, Enums )
{
	mx::types::Mute e = mx::types::Mute::stopMute;
	std::string expected = "stop-mute";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::Mute e2 = mx::types::parseMute( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Mute_stopHand, Enums )
{
	mx::types::Mute e = mx::types::Mute::stopHand;
	std::string expected = "stop-hand";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::Mute e2 = mx::types::parseMute( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Mute_echo, Enums )
{
	mx::types::Mute e = mx::types::Mute::echo;
	std::string expected = "echo";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::Mute e2 = mx::types::parseMute( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Mute_palm, Enums )
{
	mx::types::Mute e = mx::types::Mute::palm;
	std::string expected = "palm";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::Mute e2 = mx::types::parseMute( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( OverUnder_BadParse, Enums )
{
	mx::types::OverUnder actual = mx::types::parseOverUnder( "over" );
	mx::types::OverUnder expected = mx::types::OverUnder::over;
	CHECK_EQUAL( expected, actual )
}

TEST( OverUnder_over, Enums )
{
	mx::types::OverUnder e = mx::types::OverUnder::over;
	std::string expected = "over";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::OverUnder e2 = mx::types::parseOverUnder( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( OverUnder_under, Enums )
{
	mx::types::OverUnder e = mx::types::OverUnder::under;
	std::string expected = "under";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::OverUnder e2 = mx::types::parseOverUnder( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( SemiPitched_BadParse, Enums )
{
	mx::types::SemiPitched actual = mx::types::parseSemiPitched( "high" );
	mx::types::SemiPitched expected = mx::types::SemiPitched::high;
	CHECK_EQUAL( expected, actual )
}

TEST( SemiPitched_high, Enums )
{
	mx::types::SemiPitched e = mx::types::SemiPitched::high;
	std::string expected = "high";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::SemiPitched e2 = mx::types::parseSemiPitched( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( SemiPitched_mediumHigh, Enums )
{
	mx::types::SemiPitched e = mx::types::SemiPitched::mediumHigh;
	std::string expected = "medium-high";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::SemiPitched e2 = mx::types::parseSemiPitched( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( SemiPitched_medium, Enums )
{
	mx::types::SemiPitched e = mx::types::SemiPitched::medium;
	std::string expected = "medium";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::SemiPitched e2 = mx::types::parseSemiPitched( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( SemiPitched_mediumLow, Enums )
{
	mx::types::SemiPitched e = mx::types::SemiPitched::mediumLow;
	std::string expected = "medium-low";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::SemiPitched e2 = mx::types::parseSemiPitched( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( SemiPitched_low, Enums )
{
	mx::types::SemiPitched e = mx::types::SemiPitched::low;
	std::string expected = "low";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::SemiPitched e2 = mx::types::parseSemiPitched( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( SemiPitched_veryLow, Enums )
{
	mx::types::SemiPitched e = mx::types::SemiPitched::veryLow;
	std::string expected = "very-low";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::SemiPitched e2 = mx::types::parseSemiPitched( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( StartNote_BadParse, Enums )
{
	mx::types::StartNote actual = mx::types::parseStartNote( "upper" );
	mx::types::StartNote expected = mx::types::StartNote::upper;
	CHECK_EQUAL( expected, actual )
}

TEST( StartNote_upper, Enums )
{
	mx::types::StartNote e = mx::types::StartNote::upper;
	std::string expected = "upper";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::StartNote e2 = mx::types::parseStartNote( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( StartNote_main, Enums )
{
	mx::types::StartNote e = mx::types::StartNote::main;
	std::string expected = "main";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::StartNote e2 = mx::types::parseStartNote( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( StartNote_below, Enums )
{
	mx::types::StartNote e = mx::types::StartNote::below;
	std::string expected = "below";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::StartNote e2 = mx::types::parseStartNote( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( StartStop_BadParse, Enums )
{
	mx::types::StartStop actual = mx::types::parseStartStop( "start" );
	mx::types::StartStop expected = mx::types::StartStop::start;
	CHECK_EQUAL( expected, actual )
}

TEST( StartStop_start, Enums )
{
	mx::types::StartStop e = mx::types::StartStop::start;
	std::string expected = "start";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::StartStop e2 = mx::types::parseStartStop( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( StartStop_stop, Enums )
{
	mx::types::StartStop e = mx::types::StartStop::stop;
	std::string expected = "stop";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::StartStop e2 = mx::types::parseStartStop( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( StartStopContinue_BadParse, Enums )
{
	mx::types::StartStopContinue actual = mx::types::parseStartStopContinue( "start" );
	mx::types::StartStopContinue expected = mx::types::StartStopContinue::start;
	CHECK_EQUAL( expected, actual )
}

TEST( StartStopContinue_start, Enums )
{
	mx::types::StartStopContinue e = mx::types::StartStopContinue::start;
	std::string expected = "start";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::StartStopContinue e2 = mx::types::parseStartStopContinue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( StartStopContinue_stop, Enums )
{
	mx::types::StartStopContinue e = mx::types::StartStopContinue::stop;
	std::string expected = "stop";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::StartStopContinue e2 = mx::types::parseStartStopContinue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( StartStopContinue_continue_, Enums )
{
	mx::types::StartStopContinue e = mx::types::StartStopContinue::continue_;
	std::string expected = "continue";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::StartStopContinue e2 = mx::types::parseStartStopContinue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( StartStopSingle_BadParse, Enums )
{
	mx::types::StartStopSingle actual = mx::types::parseStartStopSingle( "start" );
	mx::types::StartStopSingle expected = mx::types::StartStopSingle::start;
	CHECK_EQUAL( expected, actual )
}

TEST( StartStopSingle_start, Enums )
{
	mx::types::StartStopSingle e = mx::types::StartStopSingle::start;
	std::string expected = "start";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::StartStopSingle e2 = mx::types::parseStartStopSingle( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( StartStopSingle_stop, Enums )
{
	mx::types::StartStopSingle e = mx::types::StartStopSingle::stop;
	std::string expected = "stop";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::StartStopSingle e2 = mx::types::parseStartStopSingle( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( StartStopSingle_single, Enums )
{
	mx::types::StartStopSingle e = mx::types::StartStopSingle::single;
	std::string expected = "single";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::StartStopSingle e2 = mx::types::parseStartStopSingle( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( SymbolSize_BadParse, Enums )
{
	mx::types::SymbolSize actual = mx::types::parseSymbolSize( "full" );
	mx::types::SymbolSize expected = mx::types::SymbolSize::full;
	CHECK_EQUAL( expected, actual )
}

TEST( SymbolSize_full, Enums )
{
	mx::types::SymbolSize e = mx::types::SymbolSize::full;
	std::string expected = "full";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::SymbolSize e2 = mx::types::parseSymbolSize( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( SymbolSize_cue, Enums )
{
	mx::types::SymbolSize e = mx::types::SymbolSize::cue;
	std::string expected = "cue";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::SymbolSize e2 = mx::types::parseSymbolSize( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( SymbolSize_large, Enums )
{
	mx::types::SymbolSize e = mx::types::SymbolSize::large;
	std::string expected = "large";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::SymbolSize e2 = mx::types::parseSymbolSize( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( TextDirection_BadParse, Enums )
{
	mx::types::TextDirection actual = mx::types::parseTextDirection( "ltr" );
	mx::types::TextDirection expected = mx::types::TextDirection::ltr;
	CHECK_EQUAL( expected, actual )
}

TEST( TextDirection_ltr, Enums )
{
	mx::types::TextDirection e = mx::types::TextDirection::ltr;
	std::string expected = "ltr";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::TextDirection e2 = mx::types::parseTextDirection( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( TextDirection_rtl, Enums )
{
	mx::types::TextDirection e = mx::types::TextDirection::rtl;
	std::string expected = "rtl";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::TextDirection e2 = mx::types::parseTextDirection( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( TextDirection_lro, Enums )
{
	mx::types::TextDirection e = mx::types::TextDirection::lro;
	std::string expected = "lro";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::TextDirection e2 = mx::types::parseTextDirection( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( TextDirection_rlo, Enums )
{
	mx::types::TextDirection e = mx::types::TextDirection::rlo;
	std::string expected = "rlo";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::TextDirection e2 = mx::types::parseTextDirection( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( TopBottom_BadParse, Enums )
{
	mx::types::TopBottom actual = mx::types::parseTopBottom( "top" );
	mx::types::TopBottom expected = mx::types::TopBottom::top;
	CHECK_EQUAL( expected, actual )
}

TEST( TopBottom_top, Enums )
{
	mx::types::TopBottom e = mx::types::TopBottom::top;
	std::string expected = "top";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::TopBottom e2 = mx::types::parseTopBottom( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( TopBottom_bottom, Enums )
{
	mx::types::TopBottom e = mx::types::TopBottom::bottom;
	std::string expected = "bottom";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::TopBottom e2 = mx::types::parseTopBottom( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( TrillStep_BadParse, Enums )
{
	mx::types::TrillStep actual = mx::types::parseTrillStep( "whole" );
	mx::types::TrillStep expected = mx::types::TrillStep::whole;
	CHECK_EQUAL( expected, actual )
}

TEST( TrillStep_whole, Enums )
{
	mx::types::TrillStep e = mx::types::TrillStep::whole;
	std::string expected = "whole";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::TrillStep e2 = mx::types::parseTrillStep( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( TrillStep_half, Enums )
{
	mx::types::TrillStep e = mx::types::TrillStep::half;
	std::string expected = "half";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::TrillStep e2 = mx::types::parseTrillStep( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( TrillStep_unison, Enums )
{
	mx::types::TrillStep e = mx::types::TrillStep::unison;
	std::string expected = "unison";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::TrillStep e2 = mx::types::parseTrillStep( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( TwoNoteTurn_BadParse, Enums )
{
	mx::types::TwoNoteTurn actual = mx::types::parseTwoNoteTurn( "whole" );
	mx::types::TwoNoteTurn expected = mx::types::TwoNoteTurn::whole;
	CHECK_EQUAL( expected, actual )
}

TEST( TwoNoteTurn_whole, Enums )
{
	mx::types::TwoNoteTurn e = mx::types::TwoNoteTurn::whole;
	std::string expected = "whole";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::TwoNoteTurn e2 = mx::types::parseTwoNoteTurn( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( TwoNoteTurn_half, Enums )
{
	mx::types::TwoNoteTurn e = mx::types::TwoNoteTurn::half;
	std::string expected = "half";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::TwoNoteTurn e2 = mx::types::parseTwoNoteTurn( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( TwoNoteTurn_none, Enums )
{
	mx::types::TwoNoteTurn e = mx::types::TwoNoteTurn::none;
	std::string expected = "none";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::TwoNoteTurn e2 = mx::types::parseTwoNoteTurn( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( UpDown_BadParse, Enums )
{
	mx::types::UpDown actual = mx::types::parseUpDown( "up" );
	mx::types::UpDown expected = mx::types::UpDown::up;
	CHECK_EQUAL( expected, actual )
}

TEST( UpDown_up, Enums )
{
	mx::types::UpDown e = mx::types::UpDown::up;
	std::string expected = "up";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::UpDown e2 = mx::types::parseUpDown( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( UpDown_down, Enums )
{
	mx::types::UpDown e = mx::types::UpDown::down;
	std::string expected = "down";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::UpDown e2 = mx::types::parseUpDown( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( UprightInverted_BadParse, Enums )
{
	mx::types::UprightInverted actual = mx::types::parseUprightInverted( "upright" );
	mx::types::UprightInverted expected = mx::types::UprightInverted::upright;
	CHECK_EQUAL( expected, actual )
}

TEST( UprightInverted_upright, Enums )
{
	mx::types::UprightInverted e = mx::types::UprightInverted::upright;
	std::string expected = "upright";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::UprightInverted e2 = mx::types::parseUprightInverted( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( UprightInverted_inverted, Enums )
{
	mx::types::UprightInverted e = mx::types::UprightInverted::inverted;
	std::string expected = "inverted";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::UprightInverted e2 = mx::types::parseUprightInverted( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Valign_BadParse, Enums )
{
	mx::types::Valign actual = mx::types::parseValign( "top" );
	mx::types::Valign expected = mx::types::Valign::top;
	CHECK_EQUAL( expected, actual )
}

TEST( Valign_top, Enums )
{
	mx::types::Valign e = mx::types::Valign::top;
	std::string expected = "top";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::Valign e2 = mx::types::parseValign( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Valign_middle, Enums )
{
	mx::types::Valign e = mx::types::Valign::middle;
	std::string expected = "middle";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::Valign e2 = mx::types::parseValign( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Valign_bottom, Enums )
{
	mx::types::Valign e = mx::types::Valign::bottom;
	std::string expected = "bottom";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::Valign e2 = mx::types::parseValign( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Valign_baseline, Enums )
{
	mx::types::Valign e = mx::types::Valign::baseline;
	std::string expected = "baseline";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::Valign e2 = mx::types::parseValign( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( ValignImage_BadParse, Enums )
{
	mx::types::ValignImage actual = mx::types::parseValignImage( "top" );
	mx::types::ValignImage expected = mx::types::ValignImage::top;
	CHECK_EQUAL( expected, actual )
}

TEST( ValignImage_top, Enums )
{
	mx::types::ValignImage e = mx::types::ValignImage::top;
	std::string expected = "top";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::ValignImage e2 = mx::types::parseValignImage( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( ValignImage_middle, Enums )
{
	mx::types::ValignImage e = mx::types::ValignImage::middle;
	std::string expected = "middle";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::ValignImage e2 = mx::types::parseValignImage( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( ValignImage_bottom, Enums )
{
	mx::types::ValignImage e = mx::types::ValignImage::bottom;
	std::string expected = "bottom";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::ValignImage e2 = mx::types::parseValignImage( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( YesNo_BadParse, Enums )
{
	mx::types::YesNo actual = mx::types::parseYesNo( "yes" );
	mx::types::YesNo expected = mx::types::YesNo::yes;
	CHECK_EQUAL( expected, actual )
}

TEST( YesNo_yes, Enums )
{
	mx::types::YesNo e = mx::types::YesNo::yes;
	std::string expected = "yes";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::YesNo e2 = mx::types::parseYesNo( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( YesNo_no, Enums )
{
	mx::types::YesNo e = mx::types::YesNo::no;
	std::string expected = "no";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::YesNo e2 = mx::types::parseYesNo( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( CancelLocation_BadParse, Enums )
{
	mx::types::CancelLocation actual = mx::types::parseCancelLocation( "left" );
	mx::types::CancelLocation expected = mx::types::CancelLocation::left;
	CHECK_EQUAL( expected, actual )
}

TEST( CancelLocation_left, Enums )
{
	mx::types::CancelLocation e = mx::types::CancelLocation::left;
	std::string expected = "left";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::CancelLocation e2 = mx::types::parseCancelLocation( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( CancelLocation_right, Enums )
{
	mx::types::CancelLocation e = mx::types::CancelLocation::right;
	std::string expected = "right";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::CancelLocation e2 = mx::types::parseCancelLocation( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( CancelLocation_beforeBarline, Enums )
{
	mx::types::CancelLocation e = mx::types::CancelLocation::beforeBarline;
	std::string expected = "before-barline";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::CancelLocation e2 = mx::types::parseCancelLocation( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( ClefSign_BadParse, Enums )
{
	mx::types::ClefSign actual = mx::types::parseClefSign( "G" );
	mx::types::ClefSign expected = mx::types::ClefSign::g;
	CHECK_EQUAL( expected, actual )
}

TEST( ClefSign_g, Enums )
{
	mx::types::ClefSign e = mx::types::ClefSign::g;
	std::string expected = "G";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::ClefSign e2 = mx::types::parseClefSign( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( ClefSign_f, Enums )
{
	mx::types::ClefSign e = mx::types::ClefSign::f;
	std::string expected = "F";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::ClefSign e2 = mx::types::parseClefSign( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( ClefSign_c, Enums )
{
	mx::types::ClefSign e = mx::types::ClefSign::c;
	std::string expected = "C";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::ClefSign e2 = mx::types::parseClefSign( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( ClefSign_percussion, Enums )
{
	mx::types::ClefSign e = mx::types::ClefSign::percussion;
	std::string expected = "percussion";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::ClefSign e2 = mx::types::parseClefSign( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( ClefSign_tab, Enums )
{
	mx::types::ClefSign e = mx::types::ClefSign::tab;
	std::string expected = "TAB";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::ClefSign e2 = mx::types::parseClefSign( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( ClefSign_jianpu, Enums )
{
	mx::types::ClefSign e = mx::types::ClefSign::jianpu;
	std::string expected = "jianpu";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::ClefSign e2 = mx::types::parseClefSign( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( ClefSign_none, Enums )
{
	mx::types::ClefSign e = mx::types::ClefSign::none;
	std::string expected = "none";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::ClefSign e2 = mx::types::parseClefSign( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( ShowFrets_BadParse, Enums )
{
	mx::types::ShowFrets actual = mx::types::parseShowFrets( "numbers" );
	mx::types::ShowFrets expected = mx::types::ShowFrets::numbers;
	CHECK_EQUAL( expected, actual )
}

TEST( ShowFrets_numbers, Enums )
{
	mx::types::ShowFrets e = mx::types::ShowFrets::numbers;
	std::string expected = "numbers";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::ShowFrets e2 = mx::types::parseShowFrets( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( ShowFrets_letters, Enums )
{
	mx::types::ShowFrets e = mx::types::ShowFrets::letters;
	std::string expected = "letters";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::ShowFrets e2 = mx::types::parseShowFrets( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( StaffType_BadParse, Enums )
{
	mx::types::StaffType actual = mx::types::parseStaffType( "ossia" );
	mx::types::StaffType expected = mx::types::StaffType::ossia;
	CHECK_EQUAL( expected, actual )
}

TEST( StaffType_ossia, Enums )
{
	mx::types::StaffType e = mx::types::StaffType::ossia;
	std::string expected = "ossia";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::StaffType e2 = mx::types::parseStaffType( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( StaffType_cue, Enums )
{
	mx::types::StaffType e = mx::types::StaffType::cue;
	std::string expected = "cue";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::StaffType e2 = mx::types::parseStaffType( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( StaffType_editorial, Enums )
{
	mx::types::StaffType e = mx::types::StaffType::editorial;
	std::string expected = "editorial";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::StaffType e2 = mx::types::parseStaffType( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( StaffType_regular, Enums )
{
	mx::types::StaffType e = mx::types::StaffType::regular;
	std::string expected = "regular";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::StaffType e2 = mx::types::parseStaffType( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( StaffType_alternate, Enums )
{
	mx::types::StaffType e = mx::types::StaffType::alternate;
	std::string expected = "alternate";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::StaffType e2 = mx::types::parseStaffType( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( TimeRelation_BadParse, Enums )
{
	mx::types::TimeRelation actual = mx::types::parseTimeRelation( "parentheses" );
	mx::types::TimeRelation expected = mx::types::TimeRelation::parentheses;
	CHECK_EQUAL( expected, actual )
}

TEST( TimeRelation_parentheses, Enums )
{
	mx::types::TimeRelation e = mx::types::TimeRelation::parentheses;
	std::string expected = "parentheses";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::TimeRelation e2 = mx::types::parseTimeRelation( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( TimeRelation_bracket, Enums )
{
	mx::types::TimeRelation e = mx::types::TimeRelation::bracket;
	std::string expected = "bracket";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::TimeRelation e2 = mx::types::parseTimeRelation( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( TimeRelation_equals, Enums )
{
	mx::types::TimeRelation e = mx::types::TimeRelation::equals;
	std::string expected = "equals";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::TimeRelation e2 = mx::types::parseTimeRelation( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( TimeRelation_slash, Enums )
{
	mx::types::TimeRelation e = mx::types::TimeRelation::slash;
	std::string expected = "slash";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::TimeRelation e2 = mx::types::parseTimeRelation( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( TimeRelation_space, Enums )
{
	mx::types::TimeRelation e = mx::types::TimeRelation::space;
	std::string expected = "space";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::TimeRelation e2 = mx::types::parseTimeRelation( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( TimeRelation_hyphen, Enums )
{
	mx::types::TimeRelation e = mx::types::TimeRelation::hyphen;
	std::string expected = "hyphen";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::TimeRelation e2 = mx::types::parseTimeRelation( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( TimeSeparator_BadParse, Enums )
{
	mx::types::TimeSeparator actual = mx::types::parseTimeSeparator( "none" );
	mx::types::TimeSeparator expected = mx::types::TimeSeparator::none;
	CHECK_EQUAL( expected, actual )
}

TEST( TimeSeparator_none, Enums )
{
	mx::types::TimeSeparator e = mx::types::TimeSeparator::none;
	std::string expected = "none";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::TimeSeparator e2 = mx::types::parseTimeSeparator( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( TimeSeparator_horizontal, Enums )
{
	mx::types::TimeSeparator e = mx::types::TimeSeparator::horizontal;
	std::string expected = "horizontal";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::TimeSeparator e2 = mx::types::parseTimeSeparator( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( TimeSeparator_diagonal, Enums )
{
	mx::types::TimeSeparator e = mx::types::TimeSeparator::diagonal;
	std::string expected = "diagonal";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::TimeSeparator e2 = mx::types::parseTimeSeparator( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( TimeSeparator_vertical, Enums )
{
	mx::types::TimeSeparator e = mx::types::TimeSeparator::vertical;
	std::string expected = "vertical";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::TimeSeparator e2 = mx::types::parseTimeSeparator( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( TimeSeparator_adjacent, Enums )
{
	mx::types::TimeSeparator e = mx::types::TimeSeparator::adjacent;
	std::string expected = "adjacent";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::TimeSeparator e2 = mx::types::parseTimeSeparator( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( TimeSymbol_BadParse, Enums )
{
	mx::types::TimeSymbol actual = mx::types::parseTimeSymbol( "common" );
	mx::types::TimeSymbol expected = mx::types::TimeSymbol::common;
	CHECK_EQUAL( expected, actual )
}

TEST( TimeSymbol_common, Enums )
{
	mx::types::TimeSymbol e = mx::types::TimeSymbol::common;
	std::string expected = "common";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::TimeSymbol e2 = mx::types::parseTimeSymbol( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( TimeSymbol_cut, Enums )
{
	mx::types::TimeSymbol e = mx::types::TimeSymbol::cut;
	std::string expected = "cut";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::TimeSymbol e2 = mx::types::parseTimeSymbol( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( TimeSymbol_singleNumber, Enums )
{
	mx::types::TimeSymbol e = mx::types::TimeSymbol::singleNumber;
	std::string expected = "single-number";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::TimeSymbol e2 = mx::types::parseTimeSymbol( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( TimeSymbol_note, Enums )
{
	mx::types::TimeSymbol e = mx::types::TimeSymbol::note;
	std::string expected = "note";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::TimeSymbol e2 = mx::types::parseTimeSymbol( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( TimeSymbol_dottedNote, Enums )
{
	mx::types::TimeSymbol e = mx::types::TimeSymbol::dottedNote;
	std::string expected = "dotted-note";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::TimeSymbol e2 = mx::types::parseTimeSymbol( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( TimeSymbol_normal, Enums )
{
	mx::types::TimeSymbol e = mx::types::TimeSymbol::normal;
	std::string expected = "normal";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::TimeSymbol e2 = mx::types::parseTimeSymbol( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( BackwardForward_BadParse, Enums )
{
	mx::types::BackwardForward actual = mx::types::parseBackwardForward( "backward" );
	mx::types::BackwardForward expected = mx::types::BackwardForward::backward;
	CHECK_EQUAL( expected, actual )
}

TEST( BackwardForward_backward, Enums )
{
	mx::types::BackwardForward e = mx::types::BackwardForward::backward;
	std::string expected = "backward";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::BackwardForward e2 = mx::types::parseBackwardForward( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( BackwardForward_forward, Enums )
{
	mx::types::BackwardForward e = mx::types::BackwardForward::forward;
	std::string expected = "forward";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::BackwardForward e2 = mx::types::parseBackwardForward( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( BarStyle_BadParse, Enums )
{
	mx::types::BarStyle actual = mx::types::parseBarStyle( "regular" );
	mx::types::BarStyle expected = mx::types::BarStyle::regular;
	CHECK_EQUAL( expected, actual )
}

TEST( BarStyle_regular, Enums )
{
	mx::types::BarStyle e = mx::types::BarStyle::regular;
	std::string expected = "regular";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::BarStyle e2 = mx::types::parseBarStyle( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( BarStyle_dotted, Enums )
{
	mx::types::BarStyle e = mx::types::BarStyle::dotted;
	std::string expected = "dotted";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::BarStyle e2 = mx::types::parseBarStyle( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( BarStyle_dashed, Enums )
{
	mx::types::BarStyle e = mx::types::BarStyle::dashed;
	std::string expected = "dashed";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::BarStyle e2 = mx::types::parseBarStyle( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( BarStyle_heavy, Enums )
{
	mx::types::BarStyle e = mx::types::BarStyle::heavy;
	std::string expected = "heavy";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::BarStyle e2 = mx::types::parseBarStyle( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( BarStyle_lightLight, Enums )
{
	mx::types::BarStyle e = mx::types::BarStyle::lightLight;
	std::string expected = "light-light";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::BarStyle e2 = mx::types::parseBarStyle( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( BarStyle_lightHeavy, Enums )
{
	mx::types::BarStyle e = mx::types::BarStyle::lightHeavy;
	std::string expected = "light-heavy";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::BarStyle e2 = mx::types::parseBarStyle( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( BarStyle_heavyLight, Enums )
{
	mx::types::BarStyle e = mx::types::BarStyle::heavyLight;
	std::string expected = "heavy-light";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::BarStyle e2 = mx::types::parseBarStyle( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( BarStyle_heavyHeavy, Enums )
{
	mx::types::BarStyle e = mx::types::BarStyle::heavyHeavy;
	std::string expected = "heavy-heavy";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::BarStyle e2 = mx::types::parseBarStyle( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( BarStyle_tick, Enums )
{
	mx::types::BarStyle e = mx::types::BarStyle::tick;
	std::string expected = "tick";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::BarStyle e2 = mx::types::parseBarStyle( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( BarStyle_short_, Enums )
{
	mx::types::BarStyle e = mx::types::BarStyle::short_;
	std::string expected = "short";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::BarStyle e2 = mx::types::parseBarStyle( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( BarStyle_none, Enums )
{
	mx::types::BarStyle e = mx::types::BarStyle::none;
	std::string expected = "none";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::BarStyle e2 = mx::types::parseBarStyle( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( RightLeftMiddle_BadParse, Enums )
{
	mx::types::RightLeftMiddle actual = mx::types::parseRightLeftMiddle( "right" );
	mx::types::RightLeftMiddle expected = mx::types::RightLeftMiddle::right;
	CHECK_EQUAL( expected, actual )
}

TEST( RightLeftMiddle_right, Enums )
{
	mx::types::RightLeftMiddle e = mx::types::RightLeftMiddle::right;
	std::string expected = "right";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::RightLeftMiddle e2 = mx::types::parseRightLeftMiddle( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( RightLeftMiddle_left, Enums )
{
	mx::types::RightLeftMiddle e = mx::types::RightLeftMiddle::left;
	std::string expected = "left";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::RightLeftMiddle e2 = mx::types::parseRightLeftMiddle( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( RightLeftMiddle_middle, Enums )
{
	mx::types::RightLeftMiddle e = mx::types::RightLeftMiddle::middle;
	std::string expected = "middle";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::RightLeftMiddle e2 = mx::types::parseRightLeftMiddle( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( StartStopDiscontinue_BadParse, Enums )
{
	mx::types::StartStopDiscontinue actual = mx::types::parseStartStopDiscontinue( "start" );
	mx::types::StartStopDiscontinue expected = mx::types::StartStopDiscontinue::start;
	CHECK_EQUAL( expected, actual )
}

TEST( StartStopDiscontinue_start, Enums )
{
	mx::types::StartStopDiscontinue e = mx::types::StartStopDiscontinue::start;
	std::string expected = "start";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::StartStopDiscontinue e2 = mx::types::parseStartStopDiscontinue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( StartStopDiscontinue_stop, Enums )
{
	mx::types::StartStopDiscontinue e = mx::types::StartStopDiscontinue::stop;
	std::string expected = "stop";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::StartStopDiscontinue e2 = mx::types::parseStartStopDiscontinue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( StartStopDiscontinue_discontinue, Enums )
{
	mx::types::StartStopDiscontinue e = mx::types::StartStopDiscontinue::discontinue;
	std::string expected = "discontinue";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::StartStopDiscontinue e2 = mx::types::parseStartStopDiscontinue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Winged_BadParse, Enums )
{
	mx::types::Winged actual = mx::types::parseWinged( "none" );
	mx::types::Winged expected = mx::types::Winged::none;
	CHECK_EQUAL( expected, actual )
}

TEST( Winged_none, Enums )
{
	mx::types::Winged e = mx::types::Winged::none;
	std::string expected = "none";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::Winged e2 = mx::types::parseWinged( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Winged_straight, Enums )
{
	mx::types::Winged e = mx::types::Winged::straight;
	std::string expected = "straight";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::Winged e2 = mx::types::parseWinged( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Winged_curved, Enums )
{
	mx::types::Winged e = mx::types::Winged::curved;
	std::string expected = "curved";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::Winged e2 = mx::types::parseWinged( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Winged_doubleStraight, Enums )
{
	mx::types::Winged e = mx::types::Winged::doubleStraight;
	std::string expected = "double-straight";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::Winged e2 = mx::types::parseWinged( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Winged_doubleCurved, Enums )
{
	mx::types::Winged e = mx::types::Winged::doubleCurved;
	std::string expected = "double-curved";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::Winged e2 = mx::types::parseWinged( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( BeaterValue_BadParse, Enums )
{
	mx::types::BeaterValue actual = mx::types::parseBeaterValue( "bow" );
	mx::types::BeaterValue expected = mx::types::BeaterValue::bow;
	CHECK_EQUAL( expected, actual )
}

TEST( BeaterValue_bow, Enums )
{
	mx::types::BeaterValue e = mx::types::BeaterValue::bow;
	std::string expected = "bow";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::BeaterValue e2 = mx::types::parseBeaterValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( BeaterValue_chimeHammer, Enums )
{
	mx::types::BeaterValue e = mx::types::BeaterValue::chimeHammer;
	std::string expected = "chime hammer";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::BeaterValue e2 = mx::types::parseBeaterValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( BeaterValue_coin, Enums )
{
	mx::types::BeaterValue e = mx::types::BeaterValue::coin;
	std::string expected = "coin";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::BeaterValue e2 = mx::types::parseBeaterValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( BeaterValue_finger, Enums )
{
	mx::types::BeaterValue e = mx::types::BeaterValue::finger;
	std::string expected = "finger";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::BeaterValue e2 = mx::types::parseBeaterValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( BeaterValue_fingernail, Enums )
{
	mx::types::BeaterValue e = mx::types::BeaterValue::fingernail;
	std::string expected = "fingernail";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::BeaterValue e2 = mx::types::parseBeaterValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( BeaterValue_fist, Enums )
{
	mx::types::BeaterValue e = mx::types::BeaterValue::fist;
	std::string expected = "fist";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::BeaterValue e2 = mx::types::parseBeaterValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( BeaterValue_guiroScraper, Enums )
{
	mx::types::BeaterValue e = mx::types::BeaterValue::guiroScraper;
	std::string expected = "guiro scraper";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::BeaterValue e2 = mx::types::parseBeaterValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( BeaterValue_hammer, Enums )
{
	mx::types::BeaterValue e = mx::types::BeaterValue::hammer;
	std::string expected = "hammer";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::BeaterValue e2 = mx::types::parseBeaterValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( BeaterValue_hand, Enums )
{
	mx::types::BeaterValue e = mx::types::BeaterValue::hand;
	std::string expected = "hand";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::BeaterValue e2 = mx::types::parseBeaterValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( BeaterValue_jazzStick, Enums )
{
	mx::types::BeaterValue e = mx::types::BeaterValue::jazzStick;
	std::string expected = "jazz stick";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::BeaterValue e2 = mx::types::parseBeaterValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( BeaterValue_knittingNeedle, Enums )
{
	mx::types::BeaterValue e = mx::types::BeaterValue::knittingNeedle;
	std::string expected = "knitting needle";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::BeaterValue e2 = mx::types::parseBeaterValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( BeaterValue_metalHammer, Enums )
{
	mx::types::BeaterValue e = mx::types::BeaterValue::metalHammer;
	std::string expected = "metal hammer";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::BeaterValue e2 = mx::types::parseBeaterValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( BeaterValue_snareStick, Enums )
{
	mx::types::BeaterValue e = mx::types::BeaterValue::snareStick;
	std::string expected = "snare stick";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::BeaterValue e2 = mx::types::parseBeaterValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( BeaterValue_spoonMallet, Enums )
{
	mx::types::BeaterValue e = mx::types::BeaterValue::spoonMallet;
	std::string expected = "spoon mallet";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::BeaterValue e2 = mx::types::parseBeaterValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( BeaterValue_triangleBeater, Enums )
{
	mx::types::BeaterValue e = mx::types::BeaterValue::triangleBeater;
	std::string expected = "triangle beater";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::BeaterValue e2 = mx::types::parseBeaterValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( BeaterValue_triangleBeaterPlain, Enums )
{
	mx::types::BeaterValue e = mx::types::BeaterValue::triangleBeaterPlain;
	std::string expected = "triangle beater plain";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::BeaterValue e2 = mx::types::parseBeaterValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( BeaterValue_wireBrush, Enums )
{
	mx::types::BeaterValue e = mx::types::BeaterValue::wireBrush;
	std::string expected = "wire brush";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::BeaterValue e2 = mx::types::parseBeaterValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( DegreeSymbolValue_BadParse, Enums )
{
	mx::types::DegreeSymbolValue actual = mx::types::parseDegreeSymbolValue( "major" );
	mx::types::DegreeSymbolValue expected = mx::types::DegreeSymbolValue::major;
	CHECK_EQUAL( expected, actual )
}

TEST( DegreeSymbolValue_major, Enums )
{
	mx::types::DegreeSymbolValue e = mx::types::DegreeSymbolValue::major;
	std::string expected = "major";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::DegreeSymbolValue e2 = mx::types::parseDegreeSymbolValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( DegreeSymbolValue_minor, Enums )
{
	mx::types::DegreeSymbolValue e = mx::types::DegreeSymbolValue::minor;
	std::string expected = "minor";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::DegreeSymbolValue e2 = mx::types::parseDegreeSymbolValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( DegreeSymbolValue_augmented, Enums )
{
	mx::types::DegreeSymbolValue e = mx::types::DegreeSymbolValue::augmented;
	std::string expected = "augmented";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::DegreeSymbolValue e2 = mx::types::parseDegreeSymbolValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( DegreeSymbolValue_diminished, Enums )
{
	mx::types::DegreeSymbolValue e = mx::types::DegreeSymbolValue::diminished;
	std::string expected = "diminished";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::DegreeSymbolValue e2 = mx::types::parseDegreeSymbolValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( DegreeSymbolValue_halfDiminished, Enums )
{
	mx::types::DegreeSymbolValue e = mx::types::DegreeSymbolValue::halfDiminished;
	std::string expected = "half-diminished";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::DegreeSymbolValue e2 = mx::types::parseDegreeSymbolValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( DegreeTypeValue_BadParse, Enums )
{
	mx::types::DegreeTypeValue actual = mx::types::parseDegreeTypeValue( "add" );
	mx::types::DegreeTypeValue expected = mx::types::DegreeTypeValue::add;
	CHECK_EQUAL( expected, actual )
}

TEST( DegreeTypeValue_add, Enums )
{
	mx::types::DegreeTypeValue e = mx::types::DegreeTypeValue::add;
	std::string expected = "add";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::DegreeTypeValue e2 = mx::types::parseDegreeTypeValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( DegreeTypeValue_alter, Enums )
{
	mx::types::DegreeTypeValue e = mx::types::DegreeTypeValue::alter;
	std::string expected = "alter";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::DegreeTypeValue e2 = mx::types::parseDegreeTypeValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( DegreeTypeValue_subtract, Enums )
{
	mx::types::DegreeTypeValue e = mx::types::DegreeTypeValue::subtract;
	std::string expected = "subtract";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::DegreeTypeValue e2 = mx::types::parseDegreeTypeValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Effect_BadParse, Enums )
{
	mx::types::Effect actual = mx::types::parseEffect( "anvil" );
	mx::types::Effect expected = mx::types::Effect::anvil;
	CHECK_EQUAL( expected, actual )
}

TEST( Effect_anvil, Enums )
{
	mx::types::Effect e = mx::types::Effect::anvil;
	std::string expected = "anvil";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::Effect e2 = mx::types::parseEffect( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Effect_autoHorn, Enums )
{
	mx::types::Effect e = mx::types::Effect::autoHorn;
	std::string expected = "auto horn";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::Effect e2 = mx::types::parseEffect( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Effect_birdWhistle, Enums )
{
	mx::types::Effect e = mx::types::Effect::birdWhistle;
	std::string expected = "bird whistle";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::Effect e2 = mx::types::parseEffect( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Effect_cannon, Enums )
{
	mx::types::Effect e = mx::types::Effect::cannon;
	std::string expected = "cannon";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::Effect e2 = mx::types::parseEffect( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Effect_duckCall, Enums )
{
	mx::types::Effect e = mx::types::Effect::duckCall;
	std::string expected = "duck call";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::Effect e2 = mx::types::parseEffect( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Effect_gunShot, Enums )
{
	mx::types::Effect e = mx::types::Effect::gunShot;
	std::string expected = "gun shot";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::Effect e2 = mx::types::parseEffect( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Effect_klaxonHorn, Enums )
{
	mx::types::Effect e = mx::types::Effect::klaxonHorn;
	std::string expected = "klaxon horn";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::Effect e2 = mx::types::parseEffect( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Effect_lionsRoar, Enums )
{
	mx::types::Effect e = mx::types::Effect::lionsRoar;
	std::string expected = "lions roar";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::Effect e2 = mx::types::parseEffect( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Effect_policeWhistle, Enums )
{
	mx::types::Effect e = mx::types::Effect::policeWhistle;
	std::string expected = "police whistle";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::Effect e2 = mx::types::parseEffect( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Effect_siren, Enums )
{
	mx::types::Effect e = mx::types::Effect::siren;
	std::string expected = "siren";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::Effect e2 = mx::types::parseEffect( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Effect_slideWhistle, Enums )
{
	mx::types::Effect e = mx::types::Effect::slideWhistle;
	std::string expected = "slide whistle";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::Effect e2 = mx::types::parseEffect( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Effect_thunderSheet, Enums )
{
	mx::types::Effect e = mx::types::Effect::thunderSheet;
	std::string expected = "thunder sheet";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::Effect e2 = mx::types::parseEffect( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Effect_windMachine, Enums )
{
	mx::types::Effect e = mx::types::Effect::windMachine;
	std::string expected = "wind machine";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::Effect e2 = mx::types::parseEffect( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Effect_windWhistle, Enums )
{
	mx::types::Effect e = mx::types::Effect::windWhistle;
	std::string expected = "wind whistle";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::Effect e2 = mx::types::parseEffect( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Glass_BadParse, Enums )
{
	mx::types::Glass actual = mx::types::parseGlass( "wind chimes" );
	mx::types::Glass expected = mx::types::Glass::windChimes;
	CHECK_EQUAL( expected, actual )
}

TEST( Glass_windChimes, Enums )
{
	mx::types::Glass e = mx::types::Glass::windChimes;
	std::string expected = "wind chimes";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::Glass e2 = mx::types::parseGlass( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( HarmonyType_BadParse, Enums )
{
	mx::types::HarmonyType actual = mx::types::parseHarmonyType( "explicit" );
	mx::types::HarmonyType expected = mx::types::HarmonyType::explicit_;
	CHECK_EQUAL( expected, actual )
}

TEST( HarmonyType_explicit_, Enums )
{
	mx::types::HarmonyType e = mx::types::HarmonyType::explicit_;
	std::string expected = "explicit";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::HarmonyType e2 = mx::types::parseHarmonyType( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( HarmonyType_implied, Enums )
{
	mx::types::HarmonyType e = mx::types::HarmonyType::implied;
	std::string expected = "implied";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::HarmonyType e2 = mx::types::parseHarmonyType( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( HarmonyType_alternate, Enums )
{
	mx::types::HarmonyType e = mx::types::HarmonyType::alternate;
	std::string expected = "alternate";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::HarmonyType e2 = mx::types::parseHarmonyType( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( KindValue_BadParse, Enums )
{
	mx::types::KindValue actual = mx::types::parseKindValue( "major" );
	mx::types::KindValue expected = mx::types::KindValue::major;
	CHECK_EQUAL( expected, actual )
}

TEST( KindValue_major, Enums )
{
	mx::types::KindValue e = mx::types::KindValue::major;
	std::string expected = "major";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::KindValue e2 = mx::types::parseKindValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( KindValue_minor, Enums )
{
	mx::types::KindValue e = mx::types::KindValue::minor;
	std::string expected = "minor";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::KindValue e2 = mx::types::parseKindValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( KindValue_augmented, Enums )
{
	mx::types::KindValue e = mx::types::KindValue::augmented;
	std::string expected = "augmented";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::KindValue e2 = mx::types::parseKindValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( KindValue_diminished, Enums )
{
	mx::types::KindValue e = mx::types::KindValue::diminished;
	std::string expected = "diminished";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::KindValue e2 = mx::types::parseKindValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( KindValue_dominant, Enums )
{
	mx::types::KindValue e = mx::types::KindValue::dominant;
	std::string expected = "dominant";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::KindValue e2 = mx::types::parseKindValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( KindValue_majorSeventh, Enums )
{
	mx::types::KindValue e = mx::types::KindValue::majorSeventh;
	std::string expected = "major-seventh";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::KindValue e2 = mx::types::parseKindValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( KindValue_minorSeventh, Enums )
{
	mx::types::KindValue e = mx::types::KindValue::minorSeventh;
	std::string expected = "minor-seventh";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::KindValue e2 = mx::types::parseKindValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( KindValue_diminishedSeventh, Enums )
{
	mx::types::KindValue e = mx::types::KindValue::diminishedSeventh;
	std::string expected = "diminished-seventh";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::KindValue e2 = mx::types::parseKindValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( KindValue_augmentedSeventh, Enums )
{
	mx::types::KindValue e = mx::types::KindValue::augmentedSeventh;
	std::string expected = "augmented-seventh";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::KindValue e2 = mx::types::parseKindValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( KindValue_halfDiminished, Enums )
{
	mx::types::KindValue e = mx::types::KindValue::halfDiminished;
	std::string expected = "half-diminished";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::KindValue e2 = mx::types::parseKindValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( KindValue_majorMinor, Enums )
{
	mx::types::KindValue e = mx::types::KindValue::majorMinor;
	std::string expected = "major-minor";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::KindValue e2 = mx::types::parseKindValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( KindValue_majorSixth, Enums )
{
	mx::types::KindValue e = mx::types::KindValue::majorSixth;
	std::string expected = "major-sixth";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::KindValue e2 = mx::types::parseKindValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( KindValue_minorSixth, Enums )
{
	mx::types::KindValue e = mx::types::KindValue::minorSixth;
	std::string expected = "minor-sixth";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::KindValue e2 = mx::types::parseKindValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( KindValue_dominantNinth, Enums )
{
	mx::types::KindValue e = mx::types::KindValue::dominantNinth;
	std::string expected = "dominant-ninth";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::KindValue e2 = mx::types::parseKindValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( KindValue_majorNinth, Enums )
{
	mx::types::KindValue e = mx::types::KindValue::majorNinth;
	std::string expected = "major-ninth";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::KindValue e2 = mx::types::parseKindValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( KindValue_minorNinth, Enums )
{
	mx::types::KindValue e = mx::types::KindValue::minorNinth;
	std::string expected = "minor-ninth";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::KindValue e2 = mx::types::parseKindValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( KindValue_dominant11Th, Enums )
{
	mx::types::KindValue e = mx::types::KindValue::dominant11Th;
	std::string expected = "dominant-11th";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::KindValue e2 = mx::types::parseKindValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( KindValue_major11Th, Enums )
{
	mx::types::KindValue e = mx::types::KindValue::major11Th;
	std::string expected = "major-11th";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::KindValue e2 = mx::types::parseKindValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( KindValue_minor11Th, Enums )
{
	mx::types::KindValue e = mx::types::KindValue::minor11Th;
	std::string expected = "minor-11th";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::KindValue e2 = mx::types::parseKindValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( KindValue_dominant13Th, Enums )
{
	mx::types::KindValue e = mx::types::KindValue::dominant13Th;
	std::string expected = "dominant-13th";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::KindValue e2 = mx::types::parseKindValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( KindValue_major13Th, Enums )
{
	mx::types::KindValue e = mx::types::KindValue::major13Th;
	std::string expected = "major-13th";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::KindValue e2 = mx::types::parseKindValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( KindValue_minor13Th, Enums )
{
	mx::types::KindValue e = mx::types::KindValue::minor13Th;
	std::string expected = "minor-13th";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::KindValue e2 = mx::types::parseKindValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( KindValue_suspendedSecond, Enums )
{
	mx::types::KindValue e = mx::types::KindValue::suspendedSecond;
	std::string expected = "suspended-second";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::KindValue e2 = mx::types::parseKindValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( KindValue_suspendedFourth, Enums )
{
	mx::types::KindValue e = mx::types::KindValue::suspendedFourth;
	std::string expected = "suspended-fourth";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::KindValue e2 = mx::types::parseKindValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( KindValue_neapolitan, Enums )
{
	mx::types::KindValue e = mx::types::KindValue::neapolitan;
	std::string expected = "Neapolitan";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::KindValue e2 = mx::types::parseKindValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( KindValue_italian, Enums )
{
	mx::types::KindValue e = mx::types::KindValue::italian;
	std::string expected = "Italian";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::KindValue e2 = mx::types::parseKindValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( KindValue_french, Enums )
{
	mx::types::KindValue e = mx::types::KindValue::french;
	std::string expected = "French";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::KindValue e2 = mx::types::parseKindValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( KindValue_german, Enums )
{
	mx::types::KindValue e = mx::types::KindValue::german;
	std::string expected = "German";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::KindValue e2 = mx::types::parseKindValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( KindValue_pedal, Enums )
{
	mx::types::KindValue e = mx::types::KindValue::pedal;
	std::string expected = "pedal";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::KindValue e2 = mx::types::parseKindValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( KindValue_power, Enums )
{
	mx::types::KindValue e = mx::types::KindValue::power;
	std::string expected = "power";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::KindValue e2 = mx::types::parseKindValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( KindValue_tristan, Enums )
{
	mx::types::KindValue e = mx::types::KindValue::tristan;
	std::string expected = "Tristan";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::KindValue e2 = mx::types::parseKindValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( KindValue_other, Enums )
{
	mx::types::KindValue e = mx::types::KindValue::other;
	std::string expected = "other";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::KindValue e2 = mx::types::parseKindValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( KindValue_none, Enums )
{
	mx::types::KindValue e = mx::types::KindValue::none;
	std::string expected = "none";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::KindValue e2 = mx::types::parseKindValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( LineEnd_BadParse, Enums )
{
	mx::types::LineEnd actual = mx::types::parseLineEnd( "up" );
	mx::types::LineEnd expected = mx::types::LineEnd::up;
	CHECK_EQUAL( expected, actual )
}

TEST( LineEnd_up, Enums )
{
	mx::types::LineEnd e = mx::types::LineEnd::up;
	std::string expected = "up";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::LineEnd e2 = mx::types::parseLineEnd( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( LineEnd_down, Enums )
{
	mx::types::LineEnd e = mx::types::LineEnd::down;
	std::string expected = "down";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::LineEnd e2 = mx::types::parseLineEnd( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( LineEnd_both, Enums )
{
	mx::types::LineEnd e = mx::types::LineEnd::both;
	std::string expected = "both";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::LineEnd e2 = mx::types::parseLineEnd( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( LineEnd_arrow, Enums )
{
	mx::types::LineEnd e = mx::types::LineEnd::arrow;
	std::string expected = "arrow";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::LineEnd e2 = mx::types::parseLineEnd( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( LineEnd_none, Enums )
{
	mx::types::LineEnd e = mx::types::LineEnd::none;
	std::string expected = "none";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::LineEnd e2 = mx::types::parseLineEnd( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( MeasureNumberingValue_BadParse, Enums )
{
	mx::types::MeasureNumberingValue actual = mx::types::parseMeasureNumberingValue( "none" );
	mx::types::MeasureNumberingValue expected = mx::types::MeasureNumberingValue::none;
	CHECK_EQUAL( expected, actual )
}

TEST( MeasureNumberingValue_none, Enums )
{
	mx::types::MeasureNumberingValue e = mx::types::MeasureNumberingValue::none;
	std::string expected = "none";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::MeasureNumberingValue e2 = mx::types::parseMeasureNumberingValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( MeasureNumberingValue_measure, Enums )
{
	mx::types::MeasureNumberingValue e = mx::types::MeasureNumberingValue::measure;
	std::string expected = "measure";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::MeasureNumberingValue e2 = mx::types::parseMeasureNumberingValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( MeasureNumberingValue_system, Enums )
{
	mx::types::MeasureNumberingValue e = mx::types::MeasureNumberingValue::system;
	std::string expected = "system";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::MeasureNumberingValue e2 = mx::types::parseMeasureNumberingValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Membrane_BadParse, Enums )
{
	mx::types::Membrane actual = mx::types::parseMembrane( "bass drum" );
	mx::types::Membrane expected = mx::types::Membrane::bassDrum;
	CHECK_EQUAL( expected, actual )
}

TEST( Membrane_bassDrum, Enums )
{
	mx::types::Membrane e = mx::types::Membrane::bassDrum;
	std::string expected = "bass drum";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::Membrane e2 = mx::types::parseMembrane( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Membrane_bassDrumOnSide, Enums )
{
	mx::types::Membrane e = mx::types::Membrane::bassDrumOnSide;
	std::string expected = "bass drum on side";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::Membrane e2 = mx::types::parseMembrane( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Membrane_bongos, Enums )
{
	mx::types::Membrane e = mx::types::Membrane::bongos;
	std::string expected = "bongos";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::Membrane e2 = mx::types::parseMembrane( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Membrane_congaDrum, Enums )
{
	mx::types::Membrane e = mx::types::Membrane::congaDrum;
	std::string expected = "conga drum";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::Membrane e2 = mx::types::parseMembrane( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Membrane_gobletDrum, Enums )
{
	mx::types::Membrane e = mx::types::Membrane::gobletDrum;
	std::string expected = "goblet drum";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::Membrane e2 = mx::types::parseMembrane( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Membrane_militaryDrum, Enums )
{
	mx::types::Membrane e = mx::types::Membrane::militaryDrum;
	std::string expected = "military drum";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::Membrane e2 = mx::types::parseMembrane( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Membrane_snareDrum, Enums )
{
	mx::types::Membrane e = mx::types::Membrane::snareDrum;
	std::string expected = "snare drum";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::Membrane e2 = mx::types::parseMembrane( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Membrane_snareDrumSnaresOff, Enums )
{
	mx::types::Membrane e = mx::types::Membrane::snareDrumSnaresOff;
	std::string expected = "snare drum snares off";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::Membrane e2 = mx::types::parseMembrane( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Membrane_tambourine, Enums )
{
	mx::types::Membrane e = mx::types::Membrane::tambourine;
	std::string expected = "tambourine";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::Membrane e2 = mx::types::parseMembrane( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Membrane_tenorDrum, Enums )
{
	mx::types::Membrane e = mx::types::Membrane::tenorDrum;
	std::string expected = "tenor drum";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::Membrane e2 = mx::types::parseMembrane( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Membrane_timbales, Enums )
{
	mx::types::Membrane e = mx::types::Membrane::timbales;
	std::string expected = "timbales";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::Membrane e2 = mx::types::parseMembrane( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Membrane_tomtom, Enums )
{
	mx::types::Membrane e = mx::types::Membrane::tomtom;
	std::string expected = "tomtom";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::Membrane e2 = mx::types::parseMembrane( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Metal_BadParse, Enums )
{
	mx::types::Metal actual = mx::types::parseMetal( "almglocken" );
	mx::types::Metal expected = mx::types::Metal::almglocken;
	CHECK_EQUAL( expected, actual )
}

TEST( Metal_almglocken, Enums )
{
	mx::types::Metal e = mx::types::Metal::almglocken;
	std::string expected = "almglocken";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::Metal e2 = mx::types::parseMetal( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Metal_bell, Enums )
{
	mx::types::Metal e = mx::types::Metal::bell;
	std::string expected = "bell";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::Metal e2 = mx::types::parseMetal( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Metal_bellPlate, Enums )
{
	mx::types::Metal e = mx::types::Metal::bellPlate;
	std::string expected = "bell plate";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::Metal e2 = mx::types::parseMetal( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Metal_brakeDrum, Enums )
{
	mx::types::Metal e = mx::types::Metal::brakeDrum;
	std::string expected = "brake drum";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::Metal e2 = mx::types::parseMetal( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Metal_chineseCymbal, Enums )
{
	mx::types::Metal e = mx::types::Metal::chineseCymbal;
	std::string expected = "Chinese cymbal";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::Metal e2 = mx::types::parseMetal( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Metal_cowbell, Enums )
{
	mx::types::Metal e = mx::types::Metal::cowbell;
	std::string expected = "cowbell";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::Metal e2 = mx::types::parseMetal( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Metal_crashCymbals, Enums )
{
	mx::types::Metal e = mx::types::Metal::crashCymbals;
	std::string expected = "crash cymbals";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::Metal e2 = mx::types::parseMetal( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Metal_crotale, Enums )
{
	mx::types::Metal e = mx::types::Metal::crotale;
	std::string expected = "crotale";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::Metal e2 = mx::types::parseMetal( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Metal_cymbalTongs, Enums )
{
	mx::types::Metal e = mx::types::Metal::cymbalTongs;
	std::string expected = "cymbal tongs";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::Metal e2 = mx::types::parseMetal( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Metal_domedGong, Enums )
{
	mx::types::Metal e = mx::types::Metal::domedGong;
	std::string expected = "domed gong";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::Metal e2 = mx::types::parseMetal( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Metal_fingerCymbals, Enums )
{
	mx::types::Metal e = mx::types::Metal::fingerCymbals;
	std::string expected = "finger cymbals";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::Metal e2 = mx::types::parseMetal( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Metal_flexatone, Enums )
{
	mx::types::Metal e = mx::types::Metal::flexatone;
	std::string expected = "flexatone";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::Metal e2 = mx::types::parseMetal( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Metal_gong, Enums )
{
	mx::types::Metal e = mx::types::Metal::gong;
	std::string expected = "gong";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::Metal e2 = mx::types::parseMetal( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Metal_hiHat, Enums )
{
	mx::types::Metal e = mx::types::Metal::hiHat;
	std::string expected = "hi-hat";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::Metal e2 = mx::types::parseMetal( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Metal_highHatCymbals, Enums )
{
	mx::types::Metal e = mx::types::Metal::highHatCymbals;
	std::string expected = "high-hat cymbals";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::Metal e2 = mx::types::parseMetal( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Metal_handbell, Enums )
{
	mx::types::Metal e = mx::types::Metal::handbell;
	std::string expected = "handbell";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::Metal e2 = mx::types::parseMetal( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Metal_sistrum, Enums )
{
	mx::types::Metal e = mx::types::Metal::sistrum;
	std::string expected = "sistrum";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::Metal e2 = mx::types::parseMetal( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Metal_sizzleCymbal, Enums )
{
	mx::types::Metal e = mx::types::Metal::sizzleCymbal;
	std::string expected = "sizzle cymbal";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::Metal e2 = mx::types::parseMetal( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Metal_sleighBells, Enums )
{
	mx::types::Metal e = mx::types::Metal::sleighBells;
	std::string expected = "sleigh bells";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::Metal e2 = mx::types::parseMetal( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Metal_suspendedCymbal, Enums )
{
	mx::types::Metal e = mx::types::Metal::suspendedCymbal;
	std::string expected = "suspended cymbal";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::Metal e2 = mx::types::parseMetal( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Metal_tamTam, Enums )
{
	mx::types::Metal e = mx::types::Metal::tamTam;
	std::string expected = "tam tam";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::Metal e2 = mx::types::parseMetal( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Metal_triangle, Enums )
{
	mx::types::Metal e = mx::types::Metal::triangle;
	std::string expected = "triangle";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::Metal e2 = mx::types::parseMetal( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Metal_vietnameseHat, Enums )
{
	mx::types::Metal e = mx::types::Metal::vietnameseHat;
	std::string expected = "Vietnamese hat";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::Metal e2 = mx::types::parseMetal( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( OnOff_BadParse, Enums )
{
	mx::types::OnOff actual = mx::types::parseOnOff( "on" );
	mx::types::OnOff expected = mx::types::OnOff::on;
	CHECK_EQUAL( expected, actual )
}

TEST( OnOff_on, Enums )
{
	mx::types::OnOff e = mx::types::OnOff::on;
	std::string expected = "on";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::OnOff e2 = mx::types::parseOnOff( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( OnOff_off, Enums )
{
	mx::types::OnOff e = mx::types::OnOff::off;
	std::string expected = "off";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::OnOff e2 = mx::types::parseOnOff( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Pitched_BadParse, Enums )
{
	mx::types::Pitched actual = mx::types::parsePitched( "chimes" );
	mx::types::Pitched expected = mx::types::Pitched::chimes;
	CHECK_EQUAL( expected, actual )
}

TEST( Pitched_chimes, Enums )
{
	mx::types::Pitched e = mx::types::Pitched::chimes;
	std::string expected = "chimes";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::Pitched e2 = mx::types::parsePitched( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Pitched_glockenspiel, Enums )
{
	mx::types::Pitched e = mx::types::Pitched::glockenspiel;
	std::string expected = "glockenspiel";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::Pitched e2 = mx::types::parsePitched( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Pitched_mallet, Enums )
{
	mx::types::Pitched e = mx::types::Pitched::mallet;
	std::string expected = "mallet";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::Pitched e2 = mx::types::parsePitched( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Pitched_marimba, Enums )
{
	mx::types::Pitched e = mx::types::Pitched::marimba;
	std::string expected = "marimba";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::Pitched e2 = mx::types::parsePitched( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Pitched_tubularChimes, Enums )
{
	mx::types::Pitched e = mx::types::Pitched::tubularChimes;
	std::string expected = "tubular chimes";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::Pitched e2 = mx::types::parsePitched( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Pitched_vibraphone, Enums )
{
	mx::types::Pitched e = mx::types::Pitched::vibraphone;
	std::string expected = "vibraphone";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::Pitched e2 = mx::types::parsePitched( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Pitched_xylophone, Enums )
{
	mx::types::Pitched e = mx::types::Pitched::xylophone;
	std::string expected = "xylophone";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::Pitched e2 = mx::types::parsePitched( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( PrincipalVoiceSymbol_BadParse, Enums )
{
	mx::types::PrincipalVoiceSymbol actual = mx::types::parsePrincipalVoiceSymbol( "Hauptstimme" );
	mx::types::PrincipalVoiceSymbol expected = mx::types::PrincipalVoiceSymbol::hauptstimme;
	CHECK_EQUAL( expected, actual )
}

TEST( PrincipalVoiceSymbol_hauptstimme, Enums )
{
	mx::types::PrincipalVoiceSymbol e = mx::types::PrincipalVoiceSymbol::hauptstimme;
	std::string expected = "Hauptstimme";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::PrincipalVoiceSymbol e2 = mx::types::parsePrincipalVoiceSymbol( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( PrincipalVoiceSymbol_nebenstimme, Enums )
{
	mx::types::PrincipalVoiceSymbol e = mx::types::PrincipalVoiceSymbol::nebenstimme;
	std::string expected = "Nebenstimme";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::PrincipalVoiceSymbol e2 = mx::types::parsePrincipalVoiceSymbol( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( PrincipalVoiceSymbol_plain, Enums )
{
	mx::types::PrincipalVoiceSymbol e = mx::types::PrincipalVoiceSymbol::plain;
	std::string expected = "plain";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::PrincipalVoiceSymbol e2 = mx::types::parsePrincipalVoiceSymbol( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( PrincipalVoiceSymbol_none, Enums )
{
	mx::types::PrincipalVoiceSymbol e = mx::types::PrincipalVoiceSymbol::none;
	std::string expected = "none";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::PrincipalVoiceSymbol e2 = mx::types::parsePrincipalVoiceSymbol( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( StartStopChangeContinue_BadParse, Enums )
{
	mx::types::StartStopChangeContinue actual = mx::types::parseStartStopChangeContinue( "start" );
	mx::types::StartStopChangeContinue expected = mx::types::StartStopChangeContinue::start;
	CHECK_EQUAL( expected, actual )
}

TEST( StartStopChangeContinue_start, Enums )
{
	mx::types::StartStopChangeContinue e = mx::types::StartStopChangeContinue::start;
	std::string expected = "start";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::StartStopChangeContinue e2 = mx::types::parseStartStopChangeContinue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( StartStopChangeContinue_stop, Enums )
{
	mx::types::StartStopChangeContinue e = mx::types::StartStopChangeContinue::stop;
	std::string expected = "stop";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::StartStopChangeContinue e2 = mx::types::parseStartStopChangeContinue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( StartStopChangeContinue_change, Enums )
{
	mx::types::StartStopChangeContinue e = mx::types::StartStopChangeContinue::change;
	std::string expected = "change";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::StartStopChangeContinue e2 = mx::types::parseStartStopChangeContinue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( StartStopChangeContinue_continue_, Enums )
{
	mx::types::StartStopChangeContinue e = mx::types::StartStopChangeContinue::continue_;
	std::string expected = "continue";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::StartStopChangeContinue e2 = mx::types::parseStartStopChangeContinue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( TipDirection_BadParse, Enums )
{
	mx::types::TipDirection actual = mx::types::parseTipDirection( "up" );
	mx::types::TipDirection expected = mx::types::TipDirection::up;
	CHECK_EQUAL( expected, actual )
}

TEST( TipDirection_up, Enums )
{
	mx::types::TipDirection e = mx::types::TipDirection::up;
	std::string expected = "up";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::TipDirection e2 = mx::types::parseTipDirection( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( TipDirection_down, Enums )
{
	mx::types::TipDirection e = mx::types::TipDirection::down;
	std::string expected = "down";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::TipDirection e2 = mx::types::parseTipDirection( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( TipDirection_left, Enums )
{
	mx::types::TipDirection e = mx::types::TipDirection::left;
	std::string expected = "left";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::TipDirection e2 = mx::types::parseTipDirection( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( TipDirection_right, Enums )
{
	mx::types::TipDirection e = mx::types::TipDirection::right;
	std::string expected = "right";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::TipDirection e2 = mx::types::parseTipDirection( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( TipDirection_northwest, Enums )
{
	mx::types::TipDirection e = mx::types::TipDirection::northwest;
	std::string expected = "northwest";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::TipDirection e2 = mx::types::parseTipDirection( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( TipDirection_northeast, Enums )
{
	mx::types::TipDirection e = mx::types::TipDirection::northeast;
	std::string expected = "northeast";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::TipDirection e2 = mx::types::parseTipDirection( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( TipDirection_southeast, Enums )
{
	mx::types::TipDirection e = mx::types::TipDirection::southeast;
	std::string expected = "southeast";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::TipDirection e2 = mx::types::parseTipDirection( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( TipDirection_southwest, Enums )
{
	mx::types::TipDirection e = mx::types::TipDirection::southwest;
	std::string expected = "southwest";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::TipDirection e2 = mx::types::parseTipDirection( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( StickLocation_BadParse, Enums )
{
	mx::types::StickLocation actual = mx::types::parseStickLocation( "center" );
	mx::types::StickLocation expected = mx::types::StickLocation::center;
	CHECK_EQUAL( expected, actual )
}

TEST( StickLocation_center, Enums )
{
	mx::types::StickLocation e = mx::types::StickLocation::center;
	std::string expected = "center";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::StickLocation e2 = mx::types::parseStickLocation( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( StickLocation_rim, Enums )
{
	mx::types::StickLocation e = mx::types::StickLocation::rim;
	std::string expected = "rim";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::StickLocation e2 = mx::types::parseStickLocation( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( StickLocation_cymbalBell, Enums )
{
	mx::types::StickLocation e = mx::types::StickLocation::cymbalBell;
	std::string expected = "cymbal bell";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::StickLocation e2 = mx::types::parseStickLocation( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( StickLocation_cymbalEdge, Enums )
{
	mx::types::StickLocation e = mx::types::StickLocation::cymbalEdge;
	std::string expected = "cymbal edge";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::StickLocation e2 = mx::types::parseStickLocation( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( StickMaterial_BadParse, Enums )
{
	mx::types::StickMaterial actual = mx::types::parseStickMaterial( "soft" );
	mx::types::StickMaterial expected = mx::types::StickMaterial::soft;
	CHECK_EQUAL( expected, actual )
}

TEST( StickMaterial_soft, Enums )
{
	mx::types::StickMaterial e = mx::types::StickMaterial::soft;
	std::string expected = "soft";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::StickMaterial e2 = mx::types::parseStickMaterial( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( StickMaterial_medium, Enums )
{
	mx::types::StickMaterial e = mx::types::StickMaterial::medium;
	std::string expected = "medium";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::StickMaterial e2 = mx::types::parseStickMaterial( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( StickMaterial_hard, Enums )
{
	mx::types::StickMaterial e = mx::types::StickMaterial::hard;
	std::string expected = "hard";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::StickMaterial e2 = mx::types::parseStickMaterial( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( StickMaterial_shaded, Enums )
{
	mx::types::StickMaterial e = mx::types::StickMaterial::shaded;
	std::string expected = "shaded";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::StickMaterial e2 = mx::types::parseStickMaterial( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( StickMaterial_x, Enums )
{
	mx::types::StickMaterial e = mx::types::StickMaterial::x;
	std::string expected = "x";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::StickMaterial e2 = mx::types::parseStickMaterial( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( StickType_BadParse, Enums )
{
	mx::types::StickType actual = mx::types::parseStickType( "bass drum" );
	mx::types::StickType expected = mx::types::StickType::bassDrum;
	CHECK_EQUAL( expected, actual )
}

TEST( StickType_bassDrum, Enums )
{
	mx::types::StickType e = mx::types::StickType::bassDrum;
	std::string expected = "bass drum";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::StickType e2 = mx::types::parseStickType( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( StickType_doubleBassDrum, Enums )
{
	mx::types::StickType e = mx::types::StickType::doubleBassDrum;
	std::string expected = "double bass drum";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::StickType e2 = mx::types::parseStickType( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( StickType_timpani, Enums )
{
	mx::types::StickType e = mx::types::StickType::timpani;
	std::string expected = "timpani";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::StickType e2 = mx::types::parseStickType( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( StickType_xylophone, Enums )
{
	mx::types::StickType e = mx::types::StickType::xylophone;
	std::string expected = "xylophone";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::StickType e2 = mx::types::parseStickType( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( StickType_yarn, Enums )
{
	mx::types::StickType e = mx::types::StickType::yarn;
	std::string expected = "yarn";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::StickType e2 = mx::types::parseStickType( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( UpDownStopContinue_BadParse, Enums )
{
	mx::types::UpDownStopContinue actual = mx::types::parseUpDownStopContinue( "up" );
	mx::types::UpDownStopContinue expected = mx::types::UpDownStopContinue::up;
	CHECK_EQUAL( expected, actual )
}

TEST( UpDownStopContinue_up, Enums )
{
	mx::types::UpDownStopContinue e = mx::types::UpDownStopContinue::up;
	std::string expected = "up";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::UpDownStopContinue e2 = mx::types::parseUpDownStopContinue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( UpDownStopContinue_down, Enums )
{
	mx::types::UpDownStopContinue e = mx::types::UpDownStopContinue::down;
	std::string expected = "down";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::UpDownStopContinue e2 = mx::types::parseUpDownStopContinue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( UpDownStopContinue_stop, Enums )
{
	mx::types::UpDownStopContinue e = mx::types::UpDownStopContinue::stop;
	std::string expected = "stop";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::UpDownStopContinue e2 = mx::types::parseUpDownStopContinue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( UpDownStopContinue_continue_, Enums )
{
	mx::types::UpDownStopContinue e = mx::types::UpDownStopContinue::continue_;
	std::string expected = "continue";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::UpDownStopContinue e2 = mx::types::parseUpDownStopContinue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( WedgeType_BadParse, Enums )
{
	mx::types::WedgeType actual = mx::types::parseWedgeType( "crescendo" );
	mx::types::WedgeType expected = mx::types::WedgeType::crescendo;
	CHECK_EQUAL( expected, actual )
}

TEST( WedgeType_crescendo, Enums )
{
	mx::types::WedgeType e = mx::types::WedgeType::crescendo;
	std::string expected = "crescendo";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::WedgeType e2 = mx::types::parseWedgeType( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( WedgeType_diminuendo, Enums )
{
	mx::types::WedgeType e = mx::types::WedgeType::diminuendo;
	std::string expected = "diminuendo";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::WedgeType e2 = mx::types::parseWedgeType( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( WedgeType_stop, Enums )
{
	mx::types::WedgeType e = mx::types::WedgeType::stop;
	std::string expected = "stop";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::WedgeType e2 = mx::types::parseWedgeType( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( WedgeType_continue_, Enums )
{
	mx::types::WedgeType e = mx::types::WedgeType::continue_;
	std::string expected = "continue";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::WedgeType e2 = mx::types::parseWedgeType( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Wood_BadParse, Enums )
{
	mx::types::Wood actual = mx::types::parseWood( "board clapper" );
	mx::types::Wood expected = mx::types::Wood::boardClapper;
	CHECK_EQUAL( expected, actual )
}

TEST( Wood_boardClapper, Enums )
{
	mx::types::Wood e = mx::types::Wood::boardClapper;
	std::string expected = "board clapper";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::Wood e2 = mx::types::parseWood( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Wood_cabasa, Enums )
{
	mx::types::Wood e = mx::types::Wood::cabasa;
	std::string expected = "cabasa";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::Wood e2 = mx::types::parseWood( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Wood_castanets, Enums )
{
	mx::types::Wood e = mx::types::Wood::castanets;
	std::string expected = "castanets";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::Wood e2 = mx::types::parseWood( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Wood_claves, Enums )
{
	mx::types::Wood e = mx::types::Wood::claves;
	std::string expected = "claves";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::Wood e2 = mx::types::parseWood( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Wood_guiro, Enums )
{
	mx::types::Wood e = mx::types::Wood::guiro;
	std::string expected = "guiro";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::Wood e2 = mx::types::parseWood( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Wood_logDrum, Enums )
{
	mx::types::Wood e = mx::types::Wood::logDrum;
	std::string expected = "log drum";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::Wood e2 = mx::types::parseWood( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Wood_maraca, Enums )
{
	mx::types::Wood e = mx::types::Wood::maraca;
	std::string expected = "maraca";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::Wood e2 = mx::types::parseWood( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Wood_maracas, Enums )
{
	mx::types::Wood e = mx::types::Wood::maracas;
	std::string expected = "maracas";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::Wood e2 = mx::types::parseWood( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Wood_ratchet, Enums )
{
	mx::types::Wood e = mx::types::Wood::ratchet;
	std::string expected = "ratchet";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::Wood e2 = mx::types::parseWood( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Wood_sandpaperBlocks, Enums )
{
	mx::types::Wood e = mx::types::Wood::sandpaperBlocks;
	std::string expected = "sandpaper blocks";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::Wood e2 = mx::types::parseWood( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Wood_slitDrum, Enums )
{
	mx::types::Wood e = mx::types::Wood::slitDrum;
	std::string expected = "slit drum";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::Wood e2 = mx::types::parseWood( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Wood_templeBlock, Enums )
{
	mx::types::Wood e = mx::types::Wood::templeBlock;
	std::string expected = "temple block";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::Wood e2 = mx::types::parseWood( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Wood_vibraslap, Enums )
{
	mx::types::Wood e = mx::types::Wood::vibraslap;
	std::string expected = "vibraslap";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::Wood e2 = mx::types::parseWood( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Wood_woodBlock, Enums )
{
	mx::types::Wood e = mx::types::Wood::woodBlock;
	std::string expected = "wood block";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::Wood e2 = mx::types::parseWood( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( MarginType_BadParse, Enums )
{
	mx::types::MarginType actual = mx::types::parseMarginType( "odd" );
	mx::types::MarginType expected = mx::types::MarginType::odd;
	CHECK_EQUAL( expected, actual )
}

TEST( MarginType_odd, Enums )
{
	mx::types::MarginType e = mx::types::MarginType::odd;
	std::string expected = "odd";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::MarginType e2 = mx::types::parseMarginType( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( MarginType_even, Enums )
{
	mx::types::MarginType e = mx::types::MarginType::even;
	std::string expected = "even";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::MarginType e2 = mx::types::parseMarginType( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( MarginType_both, Enums )
{
	mx::types::MarginType e = mx::types::MarginType::both;
	std::string expected = "both";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::MarginType e2 = mx::types::parseMarginType( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( NoteSizeType_BadParse, Enums )
{
	mx::types::NoteSizeType actual = mx::types::parseNoteSizeType( "cue" );
	mx::types::NoteSizeType expected = mx::types::NoteSizeType::cue;
	CHECK_EQUAL( expected, actual )
}

TEST( NoteSizeType_cue, Enums )
{
	mx::types::NoteSizeType e = mx::types::NoteSizeType::cue;
	std::string expected = "cue";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::NoteSizeType e2 = mx::types::parseNoteSizeType( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( NoteSizeType_grace, Enums )
{
	mx::types::NoteSizeType e = mx::types::NoteSizeType::grace;
	std::string expected = "grace";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::NoteSizeType e2 = mx::types::parseNoteSizeType( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( NoteSizeType_large, Enums )
{
	mx::types::NoteSizeType e = mx::types::NoteSizeType::large;
	std::string expected = "large";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::NoteSizeType e2 = mx::types::parseNoteSizeType( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( AccidentalValue_BadParse, Enums )
{
	mx::types::AccidentalValue actual = mx::types::parseAccidentalValue( "sharp" );
	mx::types::AccidentalValue expected = mx::types::AccidentalValue::sharp;
	CHECK_EQUAL( expected, actual )
}

TEST( AccidentalValue_sharp, Enums )
{
	mx::types::AccidentalValue e = mx::types::AccidentalValue::sharp;
	std::string expected = "sharp";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::AccidentalValue e2 = mx::types::parseAccidentalValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( AccidentalValue_natural, Enums )
{
	mx::types::AccidentalValue e = mx::types::AccidentalValue::natural;
	std::string expected = "natural";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::AccidentalValue e2 = mx::types::parseAccidentalValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( AccidentalValue_flat, Enums )
{
	mx::types::AccidentalValue e = mx::types::AccidentalValue::flat;
	std::string expected = "flat";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::AccidentalValue e2 = mx::types::parseAccidentalValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( AccidentalValue_doubleSharp, Enums )
{
	mx::types::AccidentalValue e = mx::types::AccidentalValue::doubleSharp;
	std::string expected = "double-sharp";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::AccidentalValue e2 = mx::types::parseAccidentalValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( AccidentalValue_sharpSharp, Enums )
{
	mx::types::AccidentalValue e = mx::types::AccidentalValue::sharpSharp;
	std::string expected = "sharp-sharp";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::AccidentalValue e2 = mx::types::parseAccidentalValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( AccidentalValue_flatFlat, Enums )
{
	mx::types::AccidentalValue e = mx::types::AccidentalValue::flatFlat;
	std::string expected = "flat-flat";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::AccidentalValue e2 = mx::types::parseAccidentalValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( AccidentalValue_naturalSharp, Enums )
{
	mx::types::AccidentalValue e = mx::types::AccidentalValue::naturalSharp;
	std::string expected = "natural-sharp";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::AccidentalValue e2 = mx::types::parseAccidentalValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( AccidentalValue_naturalFlat, Enums )
{
	mx::types::AccidentalValue e = mx::types::AccidentalValue::naturalFlat;
	std::string expected = "natural-flat";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::AccidentalValue e2 = mx::types::parseAccidentalValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( AccidentalValue_quarterFlat, Enums )
{
	mx::types::AccidentalValue e = mx::types::AccidentalValue::quarterFlat;
	std::string expected = "quarter-flat";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::AccidentalValue e2 = mx::types::parseAccidentalValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( AccidentalValue_quarterSharp, Enums )
{
	mx::types::AccidentalValue e = mx::types::AccidentalValue::quarterSharp;
	std::string expected = "quarter-sharp";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::AccidentalValue e2 = mx::types::parseAccidentalValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( AccidentalValue_threeQuartersFlat, Enums )
{
	mx::types::AccidentalValue e = mx::types::AccidentalValue::threeQuartersFlat;
	std::string expected = "three-quarters-flat";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::AccidentalValue e2 = mx::types::parseAccidentalValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( AccidentalValue_threeQuartersSharp, Enums )
{
	mx::types::AccidentalValue e = mx::types::AccidentalValue::threeQuartersSharp;
	std::string expected = "three-quarters-sharp";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::AccidentalValue e2 = mx::types::parseAccidentalValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( AccidentalValue_sharpDown, Enums )
{
	mx::types::AccidentalValue e = mx::types::AccidentalValue::sharpDown;
	std::string expected = "sharp-down";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::AccidentalValue e2 = mx::types::parseAccidentalValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( AccidentalValue_sharpUp, Enums )
{
	mx::types::AccidentalValue e = mx::types::AccidentalValue::sharpUp;
	std::string expected = "sharp-up";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::AccidentalValue e2 = mx::types::parseAccidentalValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( AccidentalValue_naturalDown, Enums )
{
	mx::types::AccidentalValue e = mx::types::AccidentalValue::naturalDown;
	std::string expected = "natural-down";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::AccidentalValue e2 = mx::types::parseAccidentalValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( AccidentalValue_naturalUp, Enums )
{
	mx::types::AccidentalValue e = mx::types::AccidentalValue::naturalUp;
	std::string expected = "natural-up";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::AccidentalValue e2 = mx::types::parseAccidentalValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( AccidentalValue_flatDown, Enums )
{
	mx::types::AccidentalValue e = mx::types::AccidentalValue::flatDown;
	std::string expected = "flat-down";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::AccidentalValue e2 = mx::types::parseAccidentalValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( AccidentalValue_flatUp, Enums )
{
	mx::types::AccidentalValue e = mx::types::AccidentalValue::flatUp;
	std::string expected = "flat-up";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::AccidentalValue e2 = mx::types::parseAccidentalValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( AccidentalValue_tripleSharp, Enums )
{
	mx::types::AccidentalValue e = mx::types::AccidentalValue::tripleSharp;
	std::string expected = "triple-sharp";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::AccidentalValue e2 = mx::types::parseAccidentalValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( AccidentalValue_tripleFlat, Enums )
{
	mx::types::AccidentalValue e = mx::types::AccidentalValue::tripleFlat;
	std::string expected = "triple-flat";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::AccidentalValue e2 = mx::types::parseAccidentalValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( AccidentalValue_slashQuarterSharp, Enums )
{
	mx::types::AccidentalValue e = mx::types::AccidentalValue::slashQuarterSharp;
	std::string expected = "slash-quarter-sharp";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::AccidentalValue e2 = mx::types::parseAccidentalValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( AccidentalValue_slashSharp, Enums )
{
	mx::types::AccidentalValue e = mx::types::AccidentalValue::slashSharp;
	std::string expected = "slash-sharp";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::AccidentalValue e2 = mx::types::parseAccidentalValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( AccidentalValue_slashFlat, Enums )
{
	mx::types::AccidentalValue e = mx::types::AccidentalValue::slashFlat;
	std::string expected = "slash-flat";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::AccidentalValue e2 = mx::types::parseAccidentalValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( AccidentalValue_doubleSlashFlat, Enums )
{
	mx::types::AccidentalValue e = mx::types::AccidentalValue::doubleSlashFlat;
	std::string expected = "double-slash-flat";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::AccidentalValue e2 = mx::types::parseAccidentalValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( AccidentalValue_sharp1, Enums )
{
	mx::types::AccidentalValue e = mx::types::AccidentalValue::sharp1;
	std::string expected = "sharp-1";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::AccidentalValue e2 = mx::types::parseAccidentalValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( AccidentalValue_sharp2, Enums )
{
	mx::types::AccidentalValue e = mx::types::AccidentalValue::sharp2;
	std::string expected = "sharp-2";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::AccidentalValue e2 = mx::types::parseAccidentalValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( AccidentalValue_sharp3, Enums )
{
	mx::types::AccidentalValue e = mx::types::AccidentalValue::sharp3;
	std::string expected = "sharp-3";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::AccidentalValue e2 = mx::types::parseAccidentalValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( AccidentalValue_sharp5, Enums )
{
	mx::types::AccidentalValue e = mx::types::AccidentalValue::sharp5;
	std::string expected = "sharp-5";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::AccidentalValue e2 = mx::types::parseAccidentalValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( AccidentalValue_flat1, Enums )
{
	mx::types::AccidentalValue e = mx::types::AccidentalValue::flat1;
	std::string expected = "flat-1";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::AccidentalValue e2 = mx::types::parseAccidentalValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( AccidentalValue_flat2, Enums )
{
	mx::types::AccidentalValue e = mx::types::AccidentalValue::flat2;
	std::string expected = "flat-2";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::AccidentalValue e2 = mx::types::parseAccidentalValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( AccidentalValue_flat3, Enums )
{
	mx::types::AccidentalValue e = mx::types::AccidentalValue::flat3;
	std::string expected = "flat-3";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::AccidentalValue e2 = mx::types::parseAccidentalValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( AccidentalValue_flat4, Enums )
{
	mx::types::AccidentalValue e = mx::types::AccidentalValue::flat4;
	std::string expected = "flat-4";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::AccidentalValue e2 = mx::types::parseAccidentalValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( AccidentalValue_sori, Enums )
{
	mx::types::AccidentalValue e = mx::types::AccidentalValue::sori;
	std::string expected = "sori";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::AccidentalValue e2 = mx::types::parseAccidentalValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( AccidentalValue_koron, Enums )
{
	mx::types::AccidentalValue e = mx::types::AccidentalValue::koron;
	std::string expected = "koron";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::AccidentalValue e2 = mx::types::parseAccidentalValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( ArrowDirection_BadParse, Enums )
{
	mx::types::ArrowDirection actual = mx::types::parseArrowDirection( "left" );
	mx::types::ArrowDirection expected = mx::types::ArrowDirection::left;
	CHECK_EQUAL( expected, actual )
}

TEST( ArrowDirection_left, Enums )
{
	mx::types::ArrowDirection e = mx::types::ArrowDirection::left;
	std::string expected = "left";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::ArrowDirection e2 = mx::types::parseArrowDirection( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( ArrowDirection_up, Enums )
{
	mx::types::ArrowDirection e = mx::types::ArrowDirection::up;
	std::string expected = "up";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::ArrowDirection e2 = mx::types::parseArrowDirection( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( ArrowDirection_right, Enums )
{
	mx::types::ArrowDirection e = mx::types::ArrowDirection::right;
	std::string expected = "right";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::ArrowDirection e2 = mx::types::parseArrowDirection( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( ArrowDirection_down, Enums )
{
	mx::types::ArrowDirection e = mx::types::ArrowDirection::down;
	std::string expected = "down";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::ArrowDirection e2 = mx::types::parseArrowDirection( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( ArrowDirection_northwest, Enums )
{
	mx::types::ArrowDirection e = mx::types::ArrowDirection::northwest;
	std::string expected = "northwest";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::ArrowDirection e2 = mx::types::parseArrowDirection( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( ArrowDirection_northeast, Enums )
{
	mx::types::ArrowDirection e = mx::types::ArrowDirection::northeast;
	std::string expected = "northeast";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::ArrowDirection e2 = mx::types::parseArrowDirection( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( ArrowDirection_southeast, Enums )
{
	mx::types::ArrowDirection e = mx::types::ArrowDirection::southeast;
	std::string expected = "southeast";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::ArrowDirection e2 = mx::types::parseArrowDirection( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( ArrowDirection_southwest, Enums )
{
	mx::types::ArrowDirection e = mx::types::ArrowDirection::southwest;
	std::string expected = "southwest";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::ArrowDirection e2 = mx::types::parseArrowDirection( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( ArrowDirection_leftRight, Enums )
{
	mx::types::ArrowDirection e = mx::types::ArrowDirection::leftRight;
	std::string expected = "left right";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::ArrowDirection e2 = mx::types::parseArrowDirection( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( ArrowDirection_upDown, Enums )
{
	mx::types::ArrowDirection e = mx::types::ArrowDirection::upDown;
	std::string expected = "up down";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::ArrowDirection e2 = mx::types::parseArrowDirection( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( ArrowDirection_northwestSoutheast, Enums )
{
	mx::types::ArrowDirection e = mx::types::ArrowDirection::northwestSoutheast;
	std::string expected = "northwest southeast";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::ArrowDirection e2 = mx::types::parseArrowDirection( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( ArrowDirection_northeastSouthwest, Enums )
{
	mx::types::ArrowDirection e = mx::types::ArrowDirection::northeastSouthwest;
	std::string expected = "northeast southwest";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::ArrowDirection e2 = mx::types::parseArrowDirection( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( ArrowDirection_other, Enums )
{
	mx::types::ArrowDirection e = mx::types::ArrowDirection::other;
	std::string expected = "other";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::ArrowDirection e2 = mx::types::parseArrowDirection( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( ArrowStyle_BadParse, Enums )
{
	mx::types::ArrowStyle actual = mx::types::parseArrowStyle( "single" );
	mx::types::ArrowStyle expected = mx::types::ArrowStyle::single;
	CHECK_EQUAL( expected, actual )
}

TEST( ArrowStyle_single, Enums )
{
	mx::types::ArrowStyle e = mx::types::ArrowStyle::single;
	std::string expected = "single";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::ArrowStyle e2 = mx::types::parseArrowStyle( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( ArrowStyle_double_, Enums )
{
	mx::types::ArrowStyle e = mx::types::ArrowStyle::double_;
	std::string expected = "double";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::ArrowStyle e2 = mx::types::parseArrowStyle( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( ArrowStyle_filled, Enums )
{
	mx::types::ArrowStyle e = mx::types::ArrowStyle::filled;
	std::string expected = "filled";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::ArrowStyle e2 = mx::types::parseArrowStyle( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( ArrowStyle_hollow, Enums )
{
	mx::types::ArrowStyle e = mx::types::ArrowStyle::hollow;
	std::string expected = "hollow";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::ArrowStyle e2 = mx::types::parseArrowStyle( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( ArrowStyle_paired, Enums )
{
	mx::types::ArrowStyle e = mx::types::ArrowStyle::paired;
	std::string expected = "paired";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::ArrowStyle e2 = mx::types::parseArrowStyle( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( ArrowStyle_combined, Enums )
{
	mx::types::ArrowStyle e = mx::types::ArrowStyle::combined;
	std::string expected = "combined";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::ArrowStyle e2 = mx::types::parseArrowStyle( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( ArrowStyle_other, Enums )
{
	mx::types::ArrowStyle e = mx::types::ArrowStyle::other;
	std::string expected = "other";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::ArrowStyle e2 = mx::types::parseArrowStyle( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( BeamValue_BadParse, Enums )
{
	mx::types::BeamValue actual = mx::types::parseBeamValue( "begin" );
	mx::types::BeamValue expected = mx::types::BeamValue::begin;
	CHECK_EQUAL( expected, actual )
}

TEST( BeamValue_begin, Enums )
{
	mx::types::BeamValue e = mx::types::BeamValue::begin;
	std::string expected = "begin";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::BeamValue e2 = mx::types::parseBeamValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( BeamValue_continue_, Enums )
{
	mx::types::BeamValue e = mx::types::BeamValue::continue_;
	std::string expected = "continue";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::BeamValue e2 = mx::types::parseBeamValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( BeamValue_end, Enums )
{
	mx::types::BeamValue e = mx::types::BeamValue::end;
	std::string expected = "end";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::BeamValue e2 = mx::types::parseBeamValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( BeamValue_forwardHook, Enums )
{
	mx::types::BeamValue e = mx::types::BeamValue::forwardHook;
	std::string expected = "forward hook";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::BeamValue e2 = mx::types::parseBeamValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( BeamValue_backwardHook, Enums )
{
	mx::types::BeamValue e = mx::types::BeamValue::backwardHook;
	std::string expected = "backward hook";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::BeamValue e2 = mx::types::parseBeamValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( BreathMarkValue_BadParse, Enums )
{
	mx::types::BreathMarkValue actual = mx::types::parseBreathMarkValue( "" );
	mx::types::BreathMarkValue expected = mx::types::BreathMarkValue::emptystring;
	CHECK_EQUAL( expected, actual )
}

TEST( BreathMarkValue_emptystring, Enums )
{
	mx::types::BreathMarkValue e = mx::types::BreathMarkValue::emptystring;
	std::string expected = "";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::BreathMarkValue e2 = mx::types::parseBreathMarkValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( BreathMarkValue_comma, Enums )
{
	mx::types::BreathMarkValue e = mx::types::BreathMarkValue::comma;
	std::string expected = "comma";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::BreathMarkValue e2 = mx::types::parseBreathMarkValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( BreathMarkValue_tick, Enums )
{
	mx::types::BreathMarkValue e = mx::types::BreathMarkValue::tick;
	std::string expected = "tick";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::BreathMarkValue e2 = mx::types::parseBreathMarkValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( CircularArrow_BadParse, Enums )
{
	mx::types::CircularArrow actual = mx::types::parseCircularArrow( "clockwise" );
	mx::types::CircularArrow expected = mx::types::CircularArrow::clockwise;
	CHECK_EQUAL( expected, actual )
}

TEST( CircularArrow_clockwise, Enums )
{
	mx::types::CircularArrow e = mx::types::CircularArrow::clockwise;
	std::string expected = "clockwise";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::CircularArrow e2 = mx::types::parseCircularArrow( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( CircularArrow_anticlockwise, Enums )
{
	mx::types::CircularArrow e = mx::types::CircularArrow::anticlockwise;
	std::string expected = "anticlockwise";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::CircularArrow e2 = mx::types::parseCircularArrow( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Fan_BadParse, Enums )
{
	mx::types::Fan actual = mx::types::parseFan( "accel" );
	mx::types::Fan expected = mx::types::Fan::accel;
	CHECK_EQUAL( expected, actual )
}

TEST( Fan_accel, Enums )
{
	mx::types::Fan e = mx::types::Fan::accel;
	std::string expected = "accel";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::Fan e2 = mx::types::parseFan( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Fan_rit, Enums )
{
	mx::types::Fan e = mx::types::Fan::rit;
	std::string expected = "rit";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::Fan e2 = mx::types::parseFan( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Fan_none, Enums )
{
	mx::types::Fan e = mx::types::Fan::none;
	std::string expected = "none";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::Fan e2 = mx::types::parseFan( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( HandbellValue_BadParse, Enums )
{
	mx::types::HandbellValue actual = mx::types::parseHandbellValue( "damp" );
	mx::types::HandbellValue expected = mx::types::HandbellValue::damp;
	CHECK_EQUAL( expected, actual )
}

TEST( HandbellValue_damp, Enums )
{
	mx::types::HandbellValue e = mx::types::HandbellValue::damp;
	std::string expected = "damp";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::HandbellValue e2 = mx::types::parseHandbellValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( HandbellValue_echo, Enums )
{
	mx::types::HandbellValue e = mx::types::HandbellValue::echo;
	std::string expected = "echo";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::HandbellValue e2 = mx::types::parseHandbellValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( HandbellValue_gyro, Enums )
{
	mx::types::HandbellValue e = mx::types::HandbellValue::gyro;
	std::string expected = "gyro";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::HandbellValue e2 = mx::types::parseHandbellValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( HandbellValue_handMartellato, Enums )
{
	mx::types::HandbellValue e = mx::types::HandbellValue::handMartellato;
	std::string expected = "hand martellato";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::HandbellValue e2 = mx::types::parseHandbellValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( HandbellValue_malletLift, Enums )
{
	mx::types::HandbellValue e = mx::types::HandbellValue::malletLift;
	std::string expected = "mallet lift";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::HandbellValue e2 = mx::types::parseHandbellValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( HandbellValue_malletTable, Enums )
{
	mx::types::HandbellValue e = mx::types::HandbellValue::malletTable;
	std::string expected = "mallet table";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::HandbellValue e2 = mx::types::parseHandbellValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( HandbellValue_martellato, Enums )
{
	mx::types::HandbellValue e = mx::types::HandbellValue::martellato;
	std::string expected = "martellato";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::HandbellValue e2 = mx::types::parseHandbellValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( HandbellValue_martellatoLift, Enums )
{
	mx::types::HandbellValue e = mx::types::HandbellValue::martellatoLift;
	std::string expected = "martellato lift";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::HandbellValue e2 = mx::types::parseHandbellValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( HandbellValue_mutedMartellato, Enums )
{
	mx::types::HandbellValue e = mx::types::HandbellValue::mutedMartellato;
	std::string expected = "muted martellato";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::HandbellValue e2 = mx::types::parseHandbellValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( HandbellValue_pluckLift, Enums )
{
	mx::types::HandbellValue e = mx::types::HandbellValue::pluckLift;
	std::string expected = "pluck lift";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::HandbellValue e2 = mx::types::parseHandbellValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( HandbellValue_swing, Enums )
{
	mx::types::HandbellValue e = mx::types::HandbellValue::swing;
	std::string expected = "swing";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::HandbellValue e2 = mx::types::parseHandbellValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( HoleClosedLocation_BadParse, Enums )
{
	mx::types::HoleClosedLocation actual = mx::types::parseHoleClosedLocation( "right" );
	mx::types::HoleClosedLocation expected = mx::types::HoleClosedLocation::right;
	CHECK_EQUAL( expected, actual )
}

TEST( HoleClosedLocation_right, Enums )
{
	mx::types::HoleClosedLocation e = mx::types::HoleClosedLocation::right;
	std::string expected = "right";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::HoleClosedLocation e2 = mx::types::parseHoleClosedLocation( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( HoleClosedLocation_bottom, Enums )
{
	mx::types::HoleClosedLocation e = mx::types::HoleClosedLocation::bottom;
	std::string expected = "bottom";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::HoleClosedLocation e2 = mx::types::parseHoleClosedLocation( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( HoleClosedLocation_left, Enums )
{
	mx::types::HoleClosedLocation e = mx::types::HoleClosedLocation::left;
	std::string expected = "left";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::HoleClosedLocation e2 = mx::types::parseHoleClosedLocation( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( HoleClosedLocation_top, Enums )
{
	mx::types::HoleClosedLocation e = mx::types::HoleClosedLocation::top;
	std::string expected = "top";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::HoleClosedLocation e2 = mx::types::parseHoleClosedLocation( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( HoleClosedValue_BadParse, Enums )
{
	mx::types::HoleClosedValue actual = mx::types::parseHoleClosedValue( "yes" );
	mx::types::HoleClosedValue expected = mx::types::HoleClosedValue::yes;
	CHECK_EQUAL( expected, actual )
}

TEST( HoleClosedValue_yes, Enums )
{
	mx::types::HoleClosedValue e = mx::types::HoleClosedValue::yes;
	std::string expected = "yes";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::HoleClosedValue e2 = mx::types::parseHoleClosedValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( HoleClosedValue_no, Enums )
{
	mx::types::HoleClosedValue e = mx::types::HoleClosedValue::no;
	std::string expected = "no";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::HoleClosedValue e2 = mx::types::parseHoleClosedValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( HoleClosedValue_half, Enums )
{
	mx::types::HoleClosedValue e = mx::types::HoleClosedValue::half;
	std::string expected = "half";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::HoleClosedValue e2 = mx::types::parseHoleClosedValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( NoteTypeValue_BadParse, Enums )
{
	mx::types::NoteTypeValue actual = mx::types::parseNoteTypeValue( "1024th" );
	mx::types::NoteTypeValue expected = mx::types::NoteTypeValue::one024Th;
	CHECK_EQUAL( expected, actual )
}

TEST( NoteTypeValue_one024Th, Enums )
{
	mx::types::NoteTypeValue e = mx::types::NoteTypeValue::one024Th;
	std::string expected = "1024th";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::NoteTypeValue e2 = mx::types::parseNoteTypeValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( NoteTypeValue_five12Th, Enums )
{
	mx::types::NoteTypeValue e = mx::types::NoteTypeValue::five12Th;
	std::string expected = "512th";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::NoteTypeValue e2 = mx::types::parseNoteTypeValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( NoteTypeValue_two56Th, Enums )
{
	mx::types::NoteTypeValue e = mx::types::NoteTypeValue::two56Th;
	std::string expected = "256th";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::NoteTypeValue e2 = mx::types::parseNoteTypeValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( NoteTypeValue_one28Th, Enums )
{
	mx::types::NoteTypeValue e = mx::types::NoteTypeValue::one28Th;
	std::string expected = "128th";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::NoteTypeValue e2 = mx::types::parseNoteTypeValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( NoteTypeValue_six4Th, Enums )
{
	mx::types::NoteTypeValue e = mx::types::NoteTypeValue::six4Th;
	std::string expected = "64th";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::NoteTypeValue e2 = mx::types::parseNoteTypeValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( NoteTypeValue_three2Nd, Enums )
{
	mx::types::NoteTypeValue e = mx::types::NoteTypeValue::three2Nd;
	std::string expected = "32nd";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::NoteTypeValue e2 = mx::types::parseNoteTypeValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( NoteTypeValue_one6Th, Enums )
{
	mx::types::NoteTypeValue e = mx::types::NoteTypeValue::one6Th;
	std::string expected = "16th";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::NoteTypeValue e2 = mx::types::parseNoteTypeValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( NoteTypeValue_eighth, Enums )
{
	mx::types::NoteTypeValue e = mx::types::NoteTypeValue::eighth;
	std::string expected = "eighth";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::NoteTypeValue e2 = mx::types::parseNoteTypeValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( NoteTypeValue_quarter, Enums )
{
	mx::types::NoteTypeValue e = mx::types::NoteTypeValue::quarter;
	std::string expected = "quarter";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::NoteTypeValue e2 = mx::types::parseNoteTypeValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( NoteTypeValue_half, Enums )
{
	mx::types::NoteTypeValue e = mx::types::NoteTypeValue::half;
	std::string expected = "half";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::NoteTypeValue e2 = mx::types::parseNoteTypeValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( NoteTypeValue_whole, Enums )
{
	mx::types::NoteTypeValue e = mx::types::NoteTypeValue::whole;
	std::string expected = "whole";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::NoteTypeValue e2 = mx::types::parseNoteTypeValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( NoteTypeValue_breve, Enums )
{
	mx::types::NoteTypeValue e = mx::types::NoteTypeValue::breve;
	std::string expected = "breve";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::NoteTypeValue e2 = mx::types::parseNoteTypeValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( NoteTypeValue_long_, Enums )
{
	mx::types::NoteTypeValue e = mx::types::NoteTypeValue::long_;
	std::string expected = "long";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::NoteTypeValue e2 = mx::types::parseNoteTypeValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( NoteTypeValue_maxima, Enums )
{
	mx::types::NoteTypeValue e = mx::types::NoteTypeValue::maxima;
	std::string expected = "maxima";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::NoteTypeValue e2 = mx::types::parseNoteTypeValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( NoteheadValue_BadParse, Enums )
{
	mx::types::NoteheadValue actual = mx::types::parseNoteheadValue( "slash" );
	mx::types::NoteheadValue expected = mx::types::NoteheadValue::slash;
	CHECK_EQUAL( expected, actual )
}

TEST( NoteheadValue_slash, Enums )
{
	mx::types::NoteheadValue e = mx::types::NoteheadValue::slash;
	std::string expected = "slash";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::NoteheadValue e2 = mx::types::parseNoteheadValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( NoteheadValue_triangle, Enums )
{
	mx::types::NoteheadValue e = mx::types::NoteheadValue::triangle;
	std::string expected = "triangle";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::NoteheadValue e2 = mx::types::parseNoteheadValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( NoteheadValue_diamond, Enums )
{
	mx::types::NoteheadValue e = mx::types::NoteheadValue::diamond;
	std::string expected = "diamond";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::NoteheadValue e2 = mx::types::parseNoteheadValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( NoteheadValue_square, Enums )
{
	mx::types::NoteheadValue e = mx::types::NoteheadValue::square;
	std::string expected = "square";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::NoteheadValue e2 = mx::types::parseNoteheadValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( NoteheadValue_cross, Enums )
{
	mx::types::NoteheadValue e = mx::types::NoteheadValue::cross;
	std::string expected = "cross";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::NoteheadValue e2 = mx::types::parseNoteheadValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( NoteheadValue_x, Enums )
{
	mx::types::NoteheadValue e = mx::types::NoteheadValue::x;
	std::string expected = "x";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::NoteheadValue e2 = mx::types::parseNoteheadValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( NoteheadValue_circleX, Enums )
{
	mx::types::NoteheadValue e = mx::types::NoteheadValue::circleX;
	std::string expected = "circle-x";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::NoteheadValue e2 = mx::types::parseNoteheadValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( NoteheadValue_invertedTriangle, Enums )
{
	mx::types::NoteheadValue e = mx::types::NoteheadValue::invertedTriangle;
	std::string expected = "inverted triangle";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::NoteheadValue e2 = mx::types::parseNoteheadValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( NoteheadValue_arrowDown, Enums )
{
	mx::types::NoteheadValue e = mx::types::NoteheadValue::arrowDown;
	std::string expected = "arrow down";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::NoteheadValue e2 = mx::types::parseNoteheadValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( NoteheadValue_arrowUp, Enums )
{
	mx::types::NoteheadValue e = mx::types::NoteheadValue::arrowUp;
	std::string expected = "arrow up";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::NoteheadValue e2 = mx::types::parseNoteheadValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( NoteheadValue_slashed, Enums )
{
	mx::types::NoteheadValue e = mx::types::NoteheadValue::slashed;
	std::string expected = "slashed";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::NoteheadValue e2 = mx::types::parseNoteheadValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( NoteheadValue_backSlashed, Enums )
{
	mx::types::NoteheadValue e = mx::types::NoteheadValue::backSlashed;
	std::string expected = "back slashed";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::NoteheadValue e2 = mx::types::parseNoteheadValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( NoteheadValue_normal, Enums )
{
	mx::types::NoteheadValue e = mx::types::NoteheadValue::normal;
	std::string expected = "normal";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::NoteheadValue e2 = mx::types::parseNoteheadValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( NoteheadValue_cluster, Enums )
{
	mx::types::NoteheadValue e = mx::types::NoteheadValue::cluster;
	std::string expected = "cluster";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::NoteheadValue e2 = mx::types::parseNoteheadValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( NoteheadValue_circleDot, Enums )
{
	mx::types::NoteheadValue e = mx::types::NoteheadValue::circleDot;
	std::string expected = "circle dot";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::NoteheadValue e2 = mx::types::parseNoteheadValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( NoteheadValue_leftTriangle, Enums )
{
	mx::types::NoteheadValue e = mx::types::NoteheadValue::leftTriangle;
	std::string expected = "left triangle";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::NoteheadValue e2 = mx::types::parseNoteheadValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( NoteheadValue_rectangle, Enums )
{
	mx::types::NoteheadValue e = mx::types::NoteheadValue::rectangle;
	std::string expected = "rectangle";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::NoteheadValue e2 = mx::types::parseNoteheadValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( NoteheadValue_none, Enums )
{
	mx::types::NoteheadValue e = mx::types::NoteheadValue::none;
	std::string expected = "none";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::NoteheadValue e2 = mx::types::parseNoteheadValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( NoteheadValue_do_, Enums )
{
	mx::types::NoteheadValue e = mx::types::NoteheadValue::do_;
	std::string expected = "do";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::NoteheadValue e2 = mx::types::parseNoteheadValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( NoteheadValue_re, Enums )
{
	mx::types::NoteheadValue e = mx::types::NoteheadValue::re;
	std::string expected = "re";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::NoteheadValue e2 = mx::types::parseNoteheadValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( NoteheadValue_mi, Enums )
{
	mx::types::NoteheadValue e = mx::types::NoteheadValue::mi;
	std::string expected = "mi";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::NoteheadValue e2 = mx::types::parseNoteheadValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( NoteheadValue_fa, Enums )
{
	mx::types::NoteheadValue e = mx::types::NoteheadValue::fa;
	std::string expected = "fa";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::NoteheadValue e2 = mx::types::parseNoteheadValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( NoteheadValue_faUp, Enums )
{
	mx::types::NoteheadValue e = mx::types::NoteheadValue::faUp;
	std::string expected = "fa up";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::NoteheadValue e2 = mx::types::parseNoteheadValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( NoteheadValue_so, Enums )
{
	mx::types::NoteheadValue e = mx::types::NoteheadValue::so;
	std::string expected = "so";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::NoteheadValue e2 = mx::types::parseNoteheadValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( NoteheadValue_la, Enums )
{
	mx::types::NoteheadValue e = mx::types::NoteheadValue::la;
	std::string expected = "la";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::NoteheadValue e2 = mx::types::parseNoteheadValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( NoteheadValue_ti, Enums )
{
	mx::types::NoteheadValue e = mx::types::NoteheadValue::ti;
	std::string expected = "ti";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::NoteheadValue e2 = mx::types::parseNoteheadValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( ShowTuplet_BadParse, Enums )
{
	mx::types::ShowTuplet actual = mx::types::parseShowTuplet( "actual" );
	mx::types::ShowTuplet expected = mx::types::ShowTuplet::actual;
	CHECK_EQUAL( expected, actual )
}

TEST( ShowTuplet_actual, Enums )
{
	mx::types::ShowTuplet e = mx::types::ShowTuplet::actual;
	std::string expected = "actual";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::ShowTuplet e2 = mx::types::parseShowTuplet( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( ShowTuplet_both, Enums )
{
	mx::types::ShowTuplet e = mx::types::ShowTuplet::both;
	std::string expected = "both";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::ShowTuplet e2 = mx::types::parseShowTuplet( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( ShowTuplet_none, Enums )
{
	mx::types::ShowTuplet e = mx::types::ShowTuplet::none;
	std::string expected = "none";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::ShowTuplet e2 = mx::types::parseShowTuplet( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( StemValue_BadParse, Enums )
{
	mx::types::StemValue actual = mx::types::parseStemValue( "down" );
	mx::types::StemValue expected = mx::types::StemValue::down;
	CHECK_EQUAL( expected, actual )
}

TEST( StemValue_down, Enums )
{
	mx::types::StemValue e = mx::types::StemValue::down;
	std::string expected = "down";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::StemValue e2 = mx::types::parseStemValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( StemValue_up, Enums )
{
	mx::types::StemValue e = mx::types::StemValue::up;
	std::string expected = "up";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::StemValue e2 = mx::types::parseStemValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( StemValue_double_, Enums )
{
	mx::types::StemValue e = mx::types::StemValue::double_;
	std::string expected = "double";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::StemValue e2 = mx::types::parseStemValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( StemValue_none, Enums )
{
	mx::types::StemValue e = mx::types::StemValue::none;
	std::string expected = "none";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::StemValue e2 = mx::types::parseStemValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Step_BadParse, Enums )
{
	mx::types::Step actual = mx::types::parseStep( "A" );
	mx::types::Step expected = mx::types::Step::a;
	CHECK_EQUAL( expected, actual )
}

TEST( Step_a, Enums )
{
	mx::types::Step e = mx::types::Step::a;
	std::string expected = "A";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::Step e2 = mx::types::parseStep( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Step_b, Enums )
{
	mx::types::Step e = mx::types::Step::b;
	std::string expected = "B";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::Step e2 = mx::types::parseStep( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Step_c, Enums )
{
	mx::types::Step e = mx::types::Step::c;
	std::string expected = "C";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::Step e2 = mx::types::parseStep( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Step_d, Enums )
{
	mx::types::Step e = mx::types::Step::d;
	std::string expected = "D";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::Step e2 = mx::types::parseStep( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Step_e, Enums )
{
	mx::types::Step e = mx::types::Step::e;
	std::string expected = "E";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::Step e2 = mx::types::parseStep( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Step_f, Enums )
{
	mx::types::Step e = mx::types::Step::f;
	std::string expected = "F";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::Step e2 = mx::types::parseStep( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Step_g, Enums )
{
	mx::types::Step e = mx::types::Step::g;
	std::string expected = "G";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::Step e2 = mx::types::parseStep( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Syllabic_BadParse, Enums )
{
	mx::types::Syllabic actual = mx::types::parseSyllabic( "single" );
	mx::types::Syllabic expected = mx::types::Syllabic::single;
	CHECK_EQUAL( expected, actual )
}

TEST( Syllabic_single, Enums )
{
	mx::types::Syllabic e = mx::types::Syllabic::single;
	std::string expected = "single";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::Syllabic e2 = mx::types::parseSyllabic( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Syllabic_begin, Enums )
{
	mx::types::Syllabic e = mx::types::Syllabic::begin;
	std::string expected = "begin";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::Syllabic e2 = mx::types::parseSyllabic( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Syllabic_end, Enums )
{
	mx::types::Syllabic e = mx::types::Syllabic::end;
	std::string expected = "end";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::Syllabic e2 = mx::types::parseSyllabic( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Syllabic_middle, Enums )
{
	mx::types::Syllabic e = mx::types::Syllabic::middle;
	std::string expected = "middle";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::Syllabic e2 = mx::types::parseSyllabic( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( GroupBarlineValue_BadParse, Enums )
{
	mx::types::GroupBarlineValue actual = mx::types::parseGroupBarlineValue( "yes" );
	mx::types::GroupBarlineValue expected = mx::types::GroupBarlineValue::yes;
	CHECK_EQUAL( expected, actual )
}

TEST( GroupBarlineValue_yes, Enums )
{
	mx::types::GroupBarlineValue e = mx::types::GroupBarlineValue::yes;
	std::string expected = "yes";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::GroupBarlineValue e2 = mx::types::parseGroupBarlineValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( GroupBarlineValue_no, Enums )
{
	mx::types::GroupBarlineValue e = mx::types::GroupBarlineValue::no;
	std::string expected = "no";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::GroupBarlineValue e2 = mx::types::parseGroupBarlineValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( GroupBarlineValue_mensurstrich, Enums )
{
	mx::types::GroupBarlineValue e = mx::types::GroupBarlineValue::mensurstrich;
	std::string expected = "Mensurstrich";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::GroupBarlineValue e2 = mx::types::parseGroupBarlineValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( GroupSymbolValue_BadParse, Enums )
{
	mx::types::GroupSymbolValue actual = mx::types::parseGroupSymbolValue( "none" );
	mx::types::GroupSymbolValue expected = mx::types::GroupSymbolValue::none;
	CHECK_EQUAL( expected, actual )
}

TEST( GroupSymbolValue_none, Enums )
{
	mx::types::GroupSymbolValue e = mx::types::GroupSymbolValue::none;
	std::string expected = "none";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::GroupSymbolValue e2 = mx::types::parseGroupSymbolValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( GroupSymbolValue_brace, Enums )
{
	mx::types::GroupSymbolValue e = mx::types::GroupSymbolValue::brace;
	std::string expected = "brace";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::GroupSymbolValue e2 = mx::types::parseGroupSymbolValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( GroupSymbolValue_line, Enums )
{
	mx::types::GroupSymbolValue e = mx::types::GroupSymbolValue::line;
	std::string expected = "line";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::GroupSymbolValue e2 = mx::types::parseGroupSymbolValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( GroupSymbolValue_bracket, Enums )
{
	mx::types::GroupSymbolValue e = mx::types::GroupSymbolValue::bracket;
	std::string expected = "bracket";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::GroupSymbolValue e2 = mx::types::parseGroupSymbolValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( GroupSymbolValue_square, Enums )
{
	mx::types::GroupSymbolValue e = mx::types::GroupSymbolValue::square;
	std::string expected = "square";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );

	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );

	mx::types::GroupSymbolValue e2 = mx::types::parseGroupSymbolValue( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( ModeEnum_major, Enums )
{
	mx::types::ModeEnum e = mx::types::ModeEnum::major;
	std::string expected = "major";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );
    
	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	mx::types::ModeEnum e2 = mx::types::parseModeEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( ModeEnum_minor, Enums )
{
	mx::types::ModeEnum e = mx::types::ModeEnum::minor;
	std::string expected = "minor";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );
    
	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	mx::types::ModeEnum e2 = mx::types::parseModeEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( ModeEnum_dorian, Enums )
{
	mx::types::ModeEnum e = mx::types::ModeEnum::dorian;
	std::string expected = "dorian";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );
    
	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	mx::types::ModeEnum e2 = mx::types::parseModeEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( ModeEnum_phrygian, Enums )
{
	mx::types::ModeEnum e = mx::types::ModeEnum::phrygian;
	std::string expected = "phrygian";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );
    
	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	mx::types::ModeEnum e2 = mx::types::parseModeEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( ModeEnum_lydian, Enums )
{
	mx::types::ModeEnum e = mx::types::ModeEnum::lydian;
	std::string expected = "lydian";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );
    
	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	mx::types::ModeEnum e2 = mx::types::parseModeEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( ModeEnum_mixolydian, Enums )
{
	mx::types::ModeEnum e = mx::types::ModeEnum::mixolydian;
	std::string expected = "mixolydian";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );
    
	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	mx::types::ModeEnum e2 = mx::types::parseModeEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( ModeEnum_aeolian, Enums )
{
	mx::types::ModeEnum e = mx::types::ModeEnum::aeolian;
	std::string expected = "aeolian";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );
    
	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	mx::types::ModeEnum e2 = mx::types::parseModeEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( ModeEnum_ionian, Enums )
{
	mx::types::ModeEnum e = mx::types::ModeEnum::ionian;
	std::string expected = "ionian";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );
    
	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	mx::types::ModeEnum e2 = mx::types::parseModeEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( ModeEnum_locrian, Enums )
{
	mx::types::ModeEnum e = mx::types::ModeEnum::locrian;
	std::string expected = "locrian";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );
    
	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	mx::types::ModeEnum e2 = mx::types::parseModeEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( ModeEnum_none, Enums )
{
	mx::types::ModeEnum e = mx::types::ModeEnum::none;
	std::string expected = "none";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );
    
	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	mx::types::ModeEnum e2 = mx::types::parseModeEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( ModeEnum_other, Enums )
{
	mx::types::ModeEnum e = mx::types::ModeEnum::other;
	std::string expected = "other";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );
    
	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	mx::types::ModeEnum e2 = mx::types::parseModeEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( Mode_default, Enums )
{
	mx::types::Mode object;
    mx::types::ModeEnum expected = mx::types::ModeEnum::major;
    mx::types::ModeEnum actual = object.getValue();
    CHECK_EQUAL( expected, actual )
}
TEST( Mode_major, Enums )
{
    mx::types::ModeEnum enumval = mx::types::ModeEnum::major;
    mx::types::ModeEnum diffval = mx::types::ModeEnum::other;
    std::string strval = mx::types::toString( enumval );
    std::string difval = "none";
    std::string badstr = "EORIUT";
    mx::types::Mode object( enumval );
    mx::types::ModeEnum expected = enumval;
    mx::types::ModeEnum actual = object.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::types::Mode object2( diffval );
    expected = diffval;
    actual = object2.getValue();
    CHECK_EQUAL( expected, actual )
    object2.setValue( enumval );
    expected = enumval;
    actual = object2.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::types::Mode object3( diffval );
    object3 = mx::types::parseMode( strval );
    expected = enumval;
    actual = object3.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::types::Mode object4( strval );
    expected = enumval;
    actual = object4.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::types::Mode object5( badstr );
    expected = mx::types::ModeEnum::other;
    actual = object5.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::types::Mode object6( enumval );
    std::string expected_str = strval;
    std::string actual_str = mx::types::toString( object6 );
    CHECK_EQUAL( expected_str, actual_str )
    
    std::stringstream ss;
    mx::types::toStream( ss, object6 );
    expected_str = strval;
    actual_str = ss.str();
    CHECK_EQUAL( expected_str, actual_str )
    
    object6 = mx::types::parseMode( badstr );
    expected_str = badstr;
    actual_str = mx::types::toString( object6 );
    CHECK_EQUAL( expected_str, actual_str )
    
    ss.str( "" );
    ss << object6;
    CHECK_EQUAL( expected_str, actual_str )
}

TEST( Mode_lydian, Enums )
{
    mx::types::ModeEnum enumval = mx::types::ModeEnum::lydian;
    mx::types::ModeEnum diffval = mx::types::ModeEnum::locrian;
    std::string strval = mx::types::toString( enumval );
    std::string difval = "locrian";
    std::string badstr = "Lydian";
    mx::types::Mode object( enumval );
    mx::types::ModeEnum expected = enumval;
    mx::types::ModeEnum actual = object.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::types::Mode object2( diffval );
    expected = diffval;
    actual = object2.getValue();
    CHECK_EQUAL( expected, actual )
    object2.setValue( enumval );
    expected = enumval;
    actual = object2.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::types::Mode object3( diffval );
    object3 = mx::types::parseMode( strval );
    expected = enumval;
    actual = object3.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::types::Mode object4( strval );
    expected = enumval;
    actual = object4.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::types::Mode object5( badstr );
    expected = mx::types::ModeEnum::other;
    actual = object5.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::types::Mode object6( enumval );
    std::string expected_str = strval;
    std::string actual_str = mx::types::toString( object6 );
    CHECK_EQUAL( expected_str, actual_str )
    
    std::stringstream ss;
    mx::types::toStream( ss, object6 );
    expected_str = strval;
    actual_str = ss.str();
    CHECK_EQUAL( expected_str, actual_str )
    
    object6 = mx::types::parseMode( badstr );
    expected_str = badstr;
    actual_str = mx::types::toString( object6 );
    CHECK_EQUAL( expected_str, actual_str )
    
    ss.str( "" );
    ss << object6;
    CHECK_EQUAL( expected_str, actual_str )
}

TEST( Mode_locrian, Enums )
{
    mx::types::ModeEnum enumval = mx::types::ModeEnum::locrian;
    mx::types::ModeEnum diffval = mx::types::ModeEnum::aeolian;
    std::string strval = mx::types::toString( enumval );
    std::string difval = "aeolian";
    std::string badstr = "pelog";
    mx::types::Mode object( enumval );
    mx::types::ModeEnum expected = enumval;
    mx::types::ModeEnum actual = object.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::types::Mode object2( diffval );
    expected = diffval;
    actual = object2.getValue();
    CHECK_EQUAL( expected, actual )
    object2.setValue( enumval );
    expected = enumval;
    actual = object2.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::types::Mode object3( diffval );
    object3 = mx::types::parseMode( strval );
    expected = enumval;
    actual = object3.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::types::Mode object4( strval );
    expected = enumval;
    actual = object4.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::types::Mode object5( badstr );
    expected = mx::types::ModeEnum::other;
    actual = object5.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::types::Mode object6( enumval );
    std::string expected_str = strval;
    std::string actual_str = mx::types::toString( object6 );
    CHECK_EQUAL( expected_str, actual_str )
    
    std::stringstream ss;
    mx::types::toStream( ss, object6 );
    expected_str = strval;
    actual_str = ss.str();
    CHECK_EQUAL( expected_str, actual_str )
    
    object6 = mx::types::parseMode( badstr );
    expected_str = badstr;
    actual_str = mx::types::toString( object6 );
    CHECK_EQUAL( expected_str, actual_str )
    
    ss.str( "" );
    ss << object6;
    CHECK_EQUAL( expected_str, actual_str )
}

TEST( Mode_other, Enums )
{
    mx::types::ModeEnum enumval = mx::types::ModeEnum::other;
    mx::types::ModeEnum diffval = mx::types::ModeEnum::aeolian;
    std::string strval = ""; // mx::types::toString( enumval );
    std::string difval = "aeolian";
    std::string badstr = "pelog";
    mx::types::Mode object( enumval );
    mx::types::ModeEnum expected = enumval;
    mx::types::ModeEnum actual = object.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::types::Mode object2( diffval );
    expected = diffval;
    actual = object2.getValue();
    CHECK_EQUAL( expected, actual )
    object2.setValue( enumval );
    expected = enumval;
    actual = object2.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::types::Mode object3( diffval );
    object3 = mx::types::parseMode( strval );
    expected = enumval;
    actual = object3.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::types::Mode object4( strval );
    expected = enumval;
    actual = object4.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::types::Mode object5( badstr );
    expected = mx::types::ModeEnum::other;
    actual = object5.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::types::Mode object6( enumval );
    std::string expected_str = strval;
    std::string actual_str = mx::types::toString( object6 );
    CHECK_EQUAL( expected_str, actual_str )
    
    std::stringstream ss;
    mx::types::toStream( ss, object6 );
    expected_str = strval;
    actual_str = ss.str();
    CHECK_EQUAL( expected_str, actual_str )
    
    object6 = mx::types::parseMode( badstr );
    expected_str = badstr;
    actual_str = mx::types::toString( object6 );
    CHECK_EQUAL( expected_str, actual_str )
    
    ss.str( "" );
    ss << object6;
    CHECK_EQUAL( expected_str, actual_str )
}

TEST( DistanceTypeEnum_beam, Enums )
{
	mx::types::DistanceTypeEnum e = mx::types::DistanceTypeEnum::beam;
	std::string expected = "beam";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );
    
	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	mx::types::DistanceTypeEnum e2 = mx::types::parseDistanceTypeEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( DistanceTypeEnum_hyphen, Enums )
{
	mx::types::DistanceTypeEnum e = mx::types::DistanceTypeEnum::hyphen;
	std::string expected = "hyphen";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );
    
	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	mx::types::DistanceTypeEnum e2 = mx::types::parseDistanceTypeEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( DistanceTypeEnum_other, Enums )
{
	mx::types::DistanceTypeEnum e = mx::types::DistanceTypeEnum::other;
	std::string expected = "other";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );
    
	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	mx::types::DistanceTypeEnum e2 = mx::types::parseDistanceTypeEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( DistanceType_beam, Enums )
{
    mx::types::DistanceTypeEnum enumval = mx::types::DistanceTypeEnum::beam;
    mx::types::DistanceTypeEnum diffval = mx::types::DistanceTypeEnum::hyphen;
    std::string strval = mx::types::toString( enumval );
    std::string difval = "hyphen";
    std::string badstr = "someothertype";
    mx::types::DistanceType object( enumval );
    mx::types::DistanceTypeEnum expected = enumval;
    mx::types::DistanceTypeEnum actual = object.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::types::DistanceType object2( diffval );
    expected = diffval;
    actual = object2.getValue();
    CHECK_EQUAL( expected, actual )
    object2.setValue( enumval );
    expected = enumval;
    actual = object2.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::types::DistanceType object3( diffval );
    object3 = mx::types::parseDistanceType( strval );
    expected = enumval;
    actual = object3.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::types::DistanceType object4( strval );
    expected = enumval;
    actual = object4.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::types::DistanceType object5( badstr );
    expected = mx::types::DistanceTypeEnum::other;
    actual = object5.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::types::DistanceType object6( enumval );
    std::string expected_str = strval;
    std::string actual_str = mx::types::toString( object6 );
    CHECK_EQUAL( expected_str, actual_str )
    
    std::stringstream ss;
    mx::types::toStream( ss, object6 );
    expected_str = strval;
    actual_str = ss.str();
    CHECK_EQUAL( expected_str, actual_str )
    
    object6 = mx::types::parseDistanceType( badstr );
    expected_str = badstr;
    actual_str = mx::types::toString( object6 );
    CHECK_EQUAL( expected_str, actual_str )
    
    ss.str( "" );
    ss << object6;
    CHECK_EQUAL( expected_str, actual_str )
}

TEST( DistanceType_hyphen, Enums )
{
    mx::types::DistanceTypeEnum enumval = mx::types::DistanceTypeEnum::hyphen;
    mx::types::DistanceTypeEnum diffval = mx::types::DistanceTypeEnum::beam;
    std::string strval = mx::types::toString( enumval );
    std::string difval = "beam";
    std::string badstr = "someothertype";
    mx::types::DistanceType object( enumval );
    mx::types::DistanceTypeEnum expected = enumval;
    mx::types::DistanceTypeEnum actual = object.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::types::DistanceType object2( diffval );
    expected = diffval;
    actual = object2.getValue();
    CHECK_EQUAL( expected, actual )
    object2.setValue( enumval );
    expected = enumval;
    actual = object2.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::types::DistanceType object3( diffval );
    object3 = mx::types::parseDistanceType( strval );
    expected = enumval;
    actual = object3.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::types::DistanceType object4( strval );
    expected = enumval;
    actual = object4.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::types::DistanceType object5( badstr );
    expected = mx::types::DistanceTypeEnum::other;
    actual = object5.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::types::DistanceType object6( enumval );
    std::string expected_str = strval;
    std::string actual_str = mx::types::toString( object6 );
    CHECK_EQUAL( expected_str, actual_str )
    
    std::stringstream ss;
    mx::types::toStream( ss, object6 );
    expected_str = strval;
    actual_str = ss.str();
    CHECK_EQUAL( expected_str, actual_str )
    
    object6 = mx::types::parseDistanceType( badstr );
    expected_str = badstr;
    actual_str = mx::types::toString( object6 );
    CHECK_EQUAL( expected_str, actual_str )
    
    ss.str( "" );
    ss << object6;
    CHECK_EQUAL( expected_str, actual_str )
}


TEST( DistanceType_other, Enums )
{
    mx::types::DistanceTypeEnum enumval = mx::types::DistanceTypeEnum::other;
    mx::types::DistanceTypeEnum diffval = mx::types::DistanceTypeEnum::beam;
    std::string strval = ""; // mx::types::toString( enumval );
    std::string difval = "beam";
    std::string badstr = "someothertype";
    mx::types::DistanceType object( enumval );
    mx::types::DistanceTypeEnum expected = enumval;
    mx::types::DistanceTypeEnum actual = object.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::types::DistanceType object2( diffval );
    expected = diffval;
    actual = object2.getValue();
    CHECK_EQUAL( expected, actual )
    object2.setValue( enumval );
    expected = enumval;
    actual = object2.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::types::DistanceType object3( diffval );
    object3 = mx::types::parseDistanceType( strval );
    expected = enumval;
    actual = object3.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::types::DistanceType object4( strval );
    expected = enumval;
    actual = object4.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::types::DistanceType object5( badstr );
    expected = mx::types::DistanceTypeEnum::other;
    actual = object5.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::types::DistanceType object6( enumval );
    std::string expected_str = strval;
    std::string actual_str = mx::types::toString( object6 );
    CHECK_EQUAL( expected_str, actual_str )
    
    std::stringstream ss;
    mx::types::toStream( ss, object6 );
    expected_str = strval;
    actual_str = ss.str();
    CHECK_EQUAL( expected_str, actual_str )
    
    object6 = mx::types::parseDistanceType( badstr );
    expected_str = badstr;
    actual_str = mx::types::toString( object6 );
    CHECK_EQUAL( expected_str, actual_str )
    
    ss.str( "" );
    ss << object6;
    CHECK_EQUAL( expected_str, actual_str )
}

TEST( LineWidthTypeEnum_beam, Enums )
{
	mx::types::LineWidthTypeEnum e = mx::types::LineWidthTypeEnum::beam;
	std::string expected = "beam";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );
    
	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	mx::types::LineWidthTypeEnum e2 = mx::types::parseLineWidthTypeEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( LineWidthTypeEnum_bracket, Enums )
{
	mx::types::LineWidthTypeEnum e = mx::types::LineWidthTypeEnum::bracket;
	std::string expected = "bracket";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );
    
	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	mx::types::LineWidthTypeEnum e2 = mx::types::parseLineWidthTypeEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( LineWidthTypeEnum_dashes, Enums )
{
	mx::types::LineWidthTypeEnum e = mx::types::LineWidthTypeEnum::dashes;
	std::string expected = "dashes";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );
    
	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	mx::types::LineWidthTypeEnum e2 = mx::types::parseLineWidthTypeEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( LineWidthTypeEnum_enclosure, Enums )
{
	mx::types::LineWidthTypeEnum e = mx::types::LineWidthTypeEnum::enclosure;
	std::string expected = "enclosure";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );
    
	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	mx::types::LineWidthTypeEnum e2 = mx::types::parseLineWidthTypeEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( LineWidthTypeEnum_ending, Enums )
{
	mx::types::LineWidthTypeEnum e = mx::types::LineWidthTypeEnum::ending;
	std::string expected = "ending";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );
    
	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	mx::types::LineWidthTypeEnum e2 = mx::types::parseLineWidthTypeEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( LineWidthTypeEnum_extend, Enums )
{
	mx::types::LineWidthTypeEnum e = mx::types::LineWidthTypeEnum::extend;
	std::string expected = "extend";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );
    
	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	mx::types::LineWidthTypeEnum e2 = mx::types::parseLineWidthTypeEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( LineWidthTypeEnum_heavyBarline, Enums )
{
	mx::types::LineWidthTypeEnum e = mx::types::LineWidthTypeEnum::heavyBarline;
	std::string expected = "heavy barline";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );
    
	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	mx::types::LineWidthTypeEnum e2 = mx::types::parseLineWidthTypeEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( LineWidthTypeEnum_leger, Enums )
{
	mx::types::LineWidthTypeEnum e = mx::types::LineWidthTypeEnum::leger;
	std::string expected = "leger";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );
    
	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	mx::types::LineWidthTypeEnum e2 = mx::types::parseLineWidthTypeEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( LineWidthTypeEnum_lightBarline, Enums )
{
	mx::types::LineWidthTypeEnum e = mx::types::LineWidthTypeEnum::lightBarline;
	std::string expected = "light barline";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );
    
	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	mx::types::LineWidthTypeEnum e2 = mx::types::parseLineWidthTypeEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( LineWidthTypeEnum_octaveShift, Enums )
{
	mx::types::LineWidthTypeEnum e = mx::types::LineWidthTypeEnum::octaveShift;
	std::string expected = "octave shift";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );
    
	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	mx::types::LineWidthTypeEnum e2 = mx::types::parseLineWidthTypeEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( LineWidthTypeEnum_pedal, Enums )
{
	mx::types::LineWidthTypeEnum e = mx::types::LineWidthTypeEnum::pedal;
	std::string expected = "pedal";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );
    
	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	mx::types::LineWidthTypeEnum e2 = mx::types::parseLineWidthTypeEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( LineWidthTypeEnum_slurMiddle, Enums )
{
	mx::types::LineWidthTypeEnum e = mx::types::LineWidthTypeEnum::slurMiddle;
	std::string expected = "slur middle";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );
    
	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	mx::types::LineWidthTypeEnum e2 = mx::types::parseLineWidthTypeEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( LineWidthTypeEnum_hyphen, Enums )
{
	mx::types::LineWidthTypeEnum e = mx::types::LineWidthTypeEnum::beam;
	std::string expected = "beam";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );
    
	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	mx::types::LineWidthTypeEnum e2 = mx::types::parseLineWidthTypeEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( LineWidthTypeEnum_slurTip, Enums )
{
	mx::types::LineWidthTypeEnum e = mx::types::LineWidthTypeEnum::slurTip;
	std::string expected = "slur tip";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );
    
	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	mx::types::LineWidthTypeEnum e2 = mx::types::parseLineWidthTypeEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( LineWidthTypeEnum_staff, Enums )
{
	mx::types::LineWidthTypeEnum e = mx::types::LineWidthTypeEnum::staff;
	std::string expected = "staff";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );
    
	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	mx::types::LineWidthTypeEnum e2 = mx::types::parseLineWidthTypeEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( LineWidthTypeEnum_stem, Enums )
{
	mx::types::LineWidthTypeEnum e = mx::types::LineWidthTypeEnum::stem;
	std::string expected = "stem";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );
    
	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	mx::types::LineWidthTypeEnum e2 = mx::types::parseLineWidthTypeEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( LineWidthTypeEnum_tieMiddle, Enums )
{
	mx::types::LineWidthTypeEnum e = mx::types::LineWidthTypeEnum::tieMiddle;
	std::string expected = "tie middle";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );
    
	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	mx::types::LineWidthTypeEnum e2 = mx::types::parseLineWidthTypeEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( LineWidthTypeEnum_tieTip, Enums )
{
	mx::types::LineWidthTypeEnum e = mx::types::LineWidthTypeEnum::tieTip;
	std::string expected = "tie tip";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );
    
	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	mx::types::LineWidthTypeEnum e2 = mx::types::parseLineWidthTypeEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( LineWidthTypeEnum_tupletBracket, Enums )
{
	mx::types::LineWidthTypeEnum e = mx::types::LineWidthTypeEnum::tupletBracket;
	std::string expected = "tuplet bracket";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );
    
	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	mx::types::LineWidthTypeEnum e2 = mx::types::parseLineWidthTypeEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( LineWidthTypeEnum_wedge, Enums )
{
	mx::types::LineWidthTypeEnum e = mx::types::LineWidthTypeEnum::wedge;
	std::string expected = "wedge";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );
    
	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	mx::types::LineWidthTypeEnum e2 = mx::types::parseLineWidthTypeEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( LineWidthTypeEnum_other, Enums )
{
	mx::types::LineWidthTypeEnum e = mx::types::LineWidthTypeEnum::other;
	std::string expected = "other";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );
    
	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	mx::types::LineWidthTypeEnum e2 = mx::types::parseLineWidthTypeEnum( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( LineWidthType_beam, Enums )
{
    mx::types::LineWidthTypeEnum enumval = mx::types::LineWidthTypeEnum::beam;
    mx::types::LineWidthTypeEnum diffval = mx::types::LineWidthTypeEnum::enclosure;
    std::string strval = mx::types::toString( enumval );
    std::string difval = "enclosure";
    std::string badstr = "someothertype";
    mx::types::LineWidthType object( enumval );
    mx::types::LineWidthTypeEnum expected = enumval;
    mx::types::LineWidthTypeEnum actual = object.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::types::LineWidthType object2( diffval );
    expected = diffval;
    actual = object2.getValue();
    CHECK_EQUAL( expected, actual )
    object2.setValue( enumval );
    expected = enumval;
    actual = object2.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::types::LineWidthType object3( diffval );
    object3 = mx::types::parseLineWidthType( strval );
    expected = enumval;
    actual = object3.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::types::LineWidthType object4( strval );
    expected = enumval;
    actual = object4.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::types::LineWidthType object5( badstr );
    expected = mx::types::LineWidthTypeEnum::other;
    actual = object5.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::types::LineWidthType object6( enumval );
    std::string expected_str = strval;
    std::string actual_str = mx::types::toString( object6 );
    CHECK_EQUAL( expected_str, actual_str )
    
    std::stringstream ss;
    mx::types::toStream( ss, object6 );
    expected_str = strval;
    actual_str = ss.str();
    CHECK_EQUAL( expected_str, actual_str )
    
    object6 = mx::types::parseLineWidthType( badstr );
    expected_str = badstr;
    actual_str = mx::types::toString( object6 );
    CHECK_EQUAL( expected_str, actual_str )
    
    ss.str( "" );
    ss << object6;
    CHECK_EQUAL( expected_str, actual_str )
}

TEST( LineWidthType_tieTip, Enums )
{
    mx::types::LineWidthTypeEnum enumval = mx::types::LineWidthTypeEnum::tieTip;
    mx::types::LineWidthTypeEnum diffval = mx::types::LineWidthTypeEnum::leger;
    std::string strval = mx::types::toString( enumval );
    std::string difval = "leger";
    std::string badstr = "someothertype";
    mx::types::LineWidthType object( enumval );
    mx::types::LineWidthTypeEnum expected = enumval;
    mx::types::LineWidthTypeEnum actual = object.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::types::LineWidthType object2( diffval );
    expected = diffval;
    actual = object2.getValue();
    CHECK_EQUAL( expected, actual )
    object2.setValue( enumval );
    expected = enumval;
    actual = object2.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::types::LineWidthType object3( diffval );
    object3 = mx::types::parseLineWidthType( strval );
    expected = enumval;
    actual = object3.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::types::LineWidthType object4( strval );
    expected = enumval;
    actual = object4.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::types::LineWidthType object5( badstr );
    expected = mx::types::LineWidthTypeEnum::other;
    actual = object5.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::types::LineWidthType object6( enumval );
    std::string expected_str = strval;
    std::string actual_str = mx::types::toString( object6 );
    CHECK_EQUAL( expected_str, actual_str )
    
    std::stringstream ss;
    mx::types::toStream( ss, object6 );
    expected_str = strval;
    actual_str = ss.str();
    CHECK_EQUAL( expected_str, actual_str )
    
    object6 = mx::types::parseLineWidthType( badstr );
    expected_str = badstr;
    actual_str = mx::types::toString( object6 );
    CHECK_EQUAL( expected_str, actual_str )
    
    ss.str( "" );
    ss << object6;
    CHECK_EQUAL( expected_str, actual_str )
}

TEST( LineWidthType_other, Enums )
{
    mx::types::LineWidthTypeEnum enumval = mx::types::LineWidthTypeEnum::other;
    mx::types::LineWidthTypeEnum diffval = mx::types::LineWidthTypeEnum::wedge;
    std::string strval = ""; // mx::types::toString( enumval );
    std::string difval = "enclosure";
    std::string badstr = "someothertype";
    mx::types::LineWidthType object( enumval );
    mx::types::LineWidthTypeEnum expected = enumval;
    mx::types::LineWidthTypeEnum actual = object.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::types::LineWidthType object2( diffval );
    expected = diffval;
    actual = object2.getValue();
    CHECK_EQUAL( expected, actual )
    object2.setValue( enumval );
    expected = enumval;
    actual = object2.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::types::LineWidthType object3( diffval );
    object3 = mx::types::parseLineWidthType( strval );
    expected = enumval;
    actual = object3.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::types::LineWidthType object4( strval );
    expected = enumval;
    actual = object4.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::types::LineWidthType object5( badstr );
    expected = mx::types::LineWidthTypeEnum::other;
    actual = object5.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::types::LineWidthType object6( enumval );
    std::string expected_str = strval;
    std::string actual_str = mx::types::toString( object6 );
    CHECK_EQUAL( expected_str, actual_str )
    
    std::stringstream ss;
    mx::types::toStream( ss, object6 );
    expected_str = strval;
    actual_str = ss.str();
    CHECK_EQUAL( expected_str, actual_str )
    
    object6 = mx::types::parseLineWidthType( badstr );
    expected_str = badstr;
    actual_str = mx::types::toString( object6 );
    CHECK_EQUAL( expected_str, actual_str )
    
    ss.str( "" );
    ss << object6;
    CHECK_EQUAL( expected_str, actual_str )
}

TEST( XlinkActuate_BadParse, Enums )
{
	mx::types::XlinkActuate actual = mx::types::parseXlinkActuate( "onrequest" );
	mx::types::XlinkActuate expected = mx::types::XlinkActuate::onLoad;
	CHECK_EQUAL( expected, actual )
}

TEST( XlinkActuate_onLoad, Enums )
{
	mx::types::XlinkActuate e = mx::types::XlinkActuate::onLoad;
	std::string expected = "onLoad";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );
    
	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	mx::types::XlinkActuate e2 = mx::types::parseXlinkActuate( expected );
	CHECK_EQUAL( e, e2 )
}
TEST( XlinkActuate_onRequest, Enums )
{
	mx::types::XlinkActuate e = mx::types::XlinkActuate::onRequest;
	std::string expected = "onRequest";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );
    
	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	mx::types::XlinkActuate e2 = mx::types::parseXlinkActuate( expected );
	CHECK_EQUAL( e, e2 )
}
TEST( XlinkActuate_other, Enums )
{
	mx::types::XlinkActuate e = mx::types::XlinkActuate::other;
	std::string expected = "other";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );
    
	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	mx::types::XlinkActuate e2 = mx::types::parseXlinkActuate( expected );
	CHECK_EQUAL( e, e2 )
}
TEST( XlinkActuate_none, Enums )
{
	mx::types::XlinkActuate e = mx::types::XlinkActuate::none;
	std::string expected = "none";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );
    
	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	mx::types::XlinkActuate e2 = mx::types::parseXlinkActuate( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( XlinkShow_BadParse, Enums )
{
	mx::types::XlinkShow actual = mx::types::parseXlinkShow( "xyz" );
	mx::types::XlinkShow expected = mx::types::XlinkShow::new_;
	CHECK_EQUAL( expected, actual )
}
TEST( XlinkShow_new_, Enums )
{
	mx::types::XlinkShow e = mx::types::XlinkShow::new_;
	std::string expected = "new";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );
    
	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	mx::types::XlinkShow e2 = mx::types::parseXlinkShow( expected );
	CHECK_EQUAL( e, e2 )
}
TEST( XlinkShow_replace, Enums )
{
	mx::types::XlinkShow e = mx::types::XlinkShow::replace;
	std::string expected = "replace";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );
    
	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	mx::types::XlinkShow e2 = mx::types::parseXlinkShow( expected );
	CHECK_EQUAL( e, e2 )
}
TEST( XlinkShow_, Enums )
{
	mx::types::XlinkShow e = mx::types::XlinkShow::new_;
	std::string expected = "new";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );
    
	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	mx::types::XlinkShow e2 = mx::types::parseXlinkShow( expected );
	CHECK_EQUAL( e, e2 )
}
TEST( XlinkShow_embed, Enums )
{
	mx::types::XlinkShow e = mx::types::XlinkShow::embed;
	std::string expected = "embed";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );
    
	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	mx::types::XlinkShow e2 = mx::types::parseXlinkShow( expected );
	CHECK_EQUAL( e, e2 )
}
TEST( XlinkShow_other, Enums )
{
	mx::types::XlinkShow e = mx::types::XlinkShow::other;
	std::string expected = "other";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );
    
	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	mx::types::XlinkShow e2 = mx::types::parseXlinkShow( expected );
	CHECK_EQUAL( e, e2 )
}
TEST( XlinkShow_none, Enums )
{
	mx::types::XlinkShow e = mx::types::XlinkShow::none;
	std::string expected = "none";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );
    
	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	mx::types::XlinkShow e2 = mx::types::parseXlinkShow( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( XlinkType_BadParse, Enums )
{
	mx::types::XlinkType actual = mx::types::parseXlinkType( "xyz" );
	mx::types::XlinkType expected = mx::types::XlinkType::simple;
	CHECK_EQUAL( expected, actual )
}
TEST( XlinkType_simple, Enums )
{
	mx::types::XlinkType e = mx::types::XlinkType::simple;
	std::string expected = "simple";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );
    
	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	mx::types::XlinkType e2 = mx::types::parseXlinkType( expected );
	CHECK_EQUAL( e, e2 )
}
TEST( XlinkType_extended, Enums )
{
	mx::types::XlinkType e = mx::types::XlinkType::extended;
	std::string expected = "extended";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );
    
	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	mx::types::XlinkType e2 = mx::types::parseXlinkType( expected );
	CHECK_EQUAL( e, e2 )
}
TEST( XlinkType_title, Enums )
{
	mx::types::XlinkType e = mx::types::XlinkType::title;
	std::string expected = "title";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );
    
	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	mx::types::XlinkType e2 = mx::types::parseXlinkType( expected );
	CHECK_EQUAL( e, e2 )
}
TEST( XlinkType_resource, Enums )
{
	mx::types::XlinkType e = mx::types::XlinkType::resource;
	std::string expected = "resource";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );
    
	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	mx::types::XlinkType e2 = mx::types::parseXlinkType( expected );
	CHECK_EQUAL( e, e2 )
}
TEST( XlinkType_locator, Enums )
{
	mx::types::XlinkType e = mx::types::XlinkType::locator;
	std::string expected = "locator";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );
    
	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	mx::types::XlinkType e2 = mx::types::parseXlinkType( expected );
	CHECK_EQUAL( e, e2 )
}
TEST( XlinkType_arc, Enums )
{
	mx::types::XlinkType e = mx::types::XlinkType::arc;
	std::string expected = "arc";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );
    
	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	mx::types::XlinkType e2 = mx::types::parseXlinkType( expected );
	CHECK_EQUAL( e, e2 )
}

TEST( XmlSpace_BadParse, Enums )
{
	mx::types::XmlSpace actual = mx::types::parseXmlSpace( "xyz" );
	mx::types::XmlSpace expected = mx::types::XmlSpace::default_;
	CHECK_EQUAL( expected, actual )
}
TEST( XmlSpace_default_, Enums )
{
	mx::types::XmlSpace e = mx::types::XmlSpace::default_;
	std::string expected = "default";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );
    
	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	mx::types::XmlSpace e2 = mx::types::parseXmlSpace( expected );
	CHECK_EQUAL( e, e2 )
}
TEST( XmlSpace_preserve, Enums )
{
	mx::types::XmlSpace e = mx::types::XmlSpace::preserve;
	std::string expected = "preserve";
	std::string actual = toString( e );
	CHECK_EQUAL( expected, actual );
    
	std::stringstream sstr;
	mx::types::toStream( sstr, e );
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	sstr.str( "" );
	sstr << e;
	actual = sstr.str();
	CHECK_EQUAL( expected, actual );
    
	mx::types::XmlSpace e2 = mx::types::parseXmlSpace( expected );
	CHECK_EQUAL( e, e2 )
}


TEST( DynamicsValue_beam, Enums )
{
    mx::types::DynamicsEnum enumval = mx::types::DynamicsEnum::ppppp;
    mx::types::DynamicsEnum diffval = mx::types::DynamicsEnum::pp;
    std::string strval = mx::types::toString( enumval );
    std::string difval = "enclosure";
    std::string badstr = "someothertype";
    mx::types::DynamicsValue object( enumval );
    mx::types::DynamicsEnum expected = enumval;
    mx::types::DynamicsEnum actual = object.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::types::DynamicsValue object2( diffval );
    expected = diffval;
    actual = object2.getValue();
    CHECK_EQUAL( expected, actual )
    object2.setValue( enumval );
    expected = enumval;
    actual = object2.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::types::DynamicsValue object3( diffval );
    object3 = mx::types::parseDynamicsValue( strval );
    expected = enumval;
    actual = object3.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::types::DynamicsValue object4( strval );
    expected = enumval;
    actual = object4.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::types::DynamicsValue object5( badstr );
    expected = mx::types::DynamicsEnum::otherDynamics;
    actual = object5.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::types::DynamicsValue object6( enumval );
    std::string expected_str = strval;
    std::string actual_str = mx::types::toString( object6 );
    CHECK_EQUAL( expected_str, actual_str )
    
    std::stringstream ss;
    mx::types::toStream( ss, object6 );
    expected_str = strval;
    actual_str = ss.str();
    CHECK_EQUAL( expected_str, actual_str )
    
    object6 = mx::types::parseDynamicsValue( badstr );
    expected_str = badstr;
    actual_str = mx::types::toString( object6 );
    CHECK_EQUAL( expected_str, actual_str )
    
    ss.str( "" );
    ss << object6;
    CHECK_EQUAL( expected_str, actual_str )
}

TEST( DynamicsValue_tieTip, Enums )
{
    mx::types::DynamicsEnum enumval = mx::types::DynamicsEnum::ff;
    mx::types::DynamicsEnum diffval = mx::types::DynamicsEnum::sffz;
    std::string strval = mx::types::toString( enumval );
    std::string difval = "leger";
    std::string badstr = "someothertype";
    mx::types::DynamicsValue object( enumval );
    mx::types::DynamicsEnum expected = enumval;
    mx::types::DynamicsEnum actual = object.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::types::DynamicsValue object2( diffval );
    expected = diffval;
    actual = object2.getValue();
    CHECK_EQUAL( expected, actual )
    object2.setValue( enumval );
    expected = enumval;
    actual = object2.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::types::DynamicsValue object3( diffval );
    object3 = mx::types::parseDynamicsValue( strval );
    expected = enumval;
    actual = object3.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::types::DynamicsValue object4( strval );
    expected = enumval;
    actual = object4.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::types::DynamicsValue object5( badstr );
    expected = mx::types::DynamicsEnum::otherDynamics;
    actual = object5.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::types::DynamicsValue object6( enumval );
    std::string expected_str = strval;
    std::string actual_str = mx::types::toString( object6 );
    CHECK_EQUAL( expected_str, actual_str )
    
    std::stringstream ss;
    mx::types::toStream( ss, object6 );
    expected_str = strval;
    actual_str = ss.str();
    CHECK_EQUAL( expected_str, actual_str )
    
    object6 = mx::types::parseDynamicsValue( badstr );
    expected_str = badstr;
    actual_str = mx::types::toString( object6 );
    CHECK_EQUAL( expected_str, actual_str )
    
    ss.str( "" );
    ss << object6;
    CHECK_EQUAL( expected_str, actual_str )
}

TEST( DynamicsValue_other, Enums )
{
    mx::types::DynamicsEnum enumval = mx::types::DynamicsEnum::otherDynamics;
    mx::types::DynamicsEnum diffval = mx::types::DynamicsEnum::rfz;
    std::string strval = ""; // mx::types::toString( enumval );
    std::string difval = "enclosure";
    std::string badstr = "someothertype";
    mx::types::DynamicsValue object( enumval );
    mx::types::DynamicsEnum expected = enumval;
    mx::types::DynamicsEnum actual = object.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::types::DynamicsValue object2( diffval );
    expected = diffval;
    actual = object2.getValue();
    CHECK_EQUAL( expected, actual )
    object2.setValue( enumval );
    expected = enumval;
    actual = object2.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::types::DynamicsValue object3( diffval );
    object3 = mx::types::parseDynamicsValue( strval );
    expected = enumval;
    actual = object3.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::types::DynamicsValue object4( strval );
    expected = enumval;
    actual = object4.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::types::DynamicsValue object5( badstr );
    expected = mx::types::DynamicsEnum::otherDynamics;
    actual = object5.getValue();
    CHECK_EQUAL( expected, actual )
    
    mx::types::DynamicsValue object6( enumval );
    std::string expected_str = strval;
    std::string actual_str = mx::types::toString( object6 );
    CHECK_EQUAL( expected_str, actual_str )
    
    std::stringstream ss;
    mx::types::toStream( ss, object6 );
    expected_str = strval;
    actual_str = ss.str();
    CHECK_EQUAL( expected_str, actual_str )
    
    object6 = mx::types::parseDynamicsValue( badstr );
    expected_str = badstr;
    actual_str = mx::types::toString( object6 );
    CHECK_EQUAL( expected_str, actual_str )
    
    ss.str( "" );
    ss << object6;
    CHECK_EQUAL( expected_str, actual_str )
}
