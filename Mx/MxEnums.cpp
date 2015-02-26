#include "MxEnums.h"

namespace mx
{
	namespace types
	{
		AboveBelow parseAboveBelow( const std::string& value )
		{
			if ( value == "above" ) { return AboveBelow::above; }
			else if ( value == "below" ) { return AboveBelow::below; }
			return AboveBelow::above;
		}
		std::string toString( const AboveBelow value )
		{
			switch ( value ) 
			{
				case AboveBelow::above: return "above"; break;
				case AboveBelow::below: return "below"; break;
				default: break;
			}
			return "above";
		}
		std::ostream& toStream( std::ostream& os, const AboveBelow value )
		{
			return os << toString( value );
		}
		std::ostream& operator<<( std::ostream& os, const AboveBelow value )
		{
			return toStream( os, value );
		}

		CssFontSize parseCssFontSize( const std::string& value )
		{
			if ( value == "xx-small" ) { return CssFontSize::xxSmall; }
			else if ( value == "x-small" ) { return CssFontSize::xSmall; }
			else if ( value == "small" ) { return CssFontSize::small; }
			else if ( value == "medium" ) { return CssFontSize::medium; }
			else if ( value == "large" ) { return CssFontSize::large; }
			else if ( value == "x-large" ) { return CssFontSize::xLarge; }
			else if ( value == "xx-large" ) { return CssFontSize::xxLarge; }
			return CssFontSize::xxSmall;
		}
		std::string toString( const CssFontSize value )
		{
			switch ( value ) 
			{
				case CssFontSize::xxSmall: return "xx-small"; break;
				case CssFontSize::xSmall: return "x-small"; break;
				case CssFontSize::small: return "small"; break;
				case CssFontSize::medium: return "medium"; break;
				case CssFontSize::large: return "large"; break;
				case CssFontSize::xLarge: return "x-large"; break;
				case CssFontSize::xxLarge: return "xx-large"; break;
				default: break;
			}
			return "xx-small";
		}
		std::ostream& toStream( std::ostream& os, const CssFontSize value )
		{
			return os << toString( value );
		}
		std::ostream& operator<<( std::ostream& os, const CssFontSize value )
		{
			return toStream( os, value );
		}

		EnclosureShape parseEnclosureShape( const std::string& value )
		{
			if ( value == "rectangle" ) { return EnclosureShape::rectangle; }
			else if ( value == "square" ) { return EnclosureShape::square; }
			else if ( value == "oval" ) { return EnclosureShape::oval; }
			else if ( value == "circle" ) { return EnclosureShape::circle; }
			else if ( value == "bracket" ) { return EnclosureShape::bracket; }
			else if ( value == "triangle" ) { return EnclosureShape::triangle; }
			else if ( value == "diamond" ) { return EnclosureShape::diamond; }
			else if ( value == "none" ) { return EnclosureShape::none; }
			return EnclosureShape::rectangle;
		}
		std::string toString( const EnclosureShape value )
		{
			switch ( value ) 
			{
				case EnclosureShape::rectangle: return "rectangle"; break;
				case EnclosureShape::square: return "square"; break;
				case EnclosureShape::oval: return "oval"; break;
				case EnclosureShape::circle: return "circle"; break;
				case EnclosureShape::bracket: return "bracket"; break;
				case EnclosureShape::triangle: return "triangle"; break;
				case EnclosureShape::diamond: return "diamond"; break;
				case EnclosureShape::none: return "none"; break;
				default: break;
			}
			return "rectangle";
		}
		std::ostream& toStream( std::ostream& os, const EnclosureShape value )
		{
			return os << toString( value );
		}
		std::ostream& operator<<( std::ostream& os, const EnclosureShape value )
		{
			return toStream( os, value );
		}

		FermataShape parseFermataShape( const std::string& value )
		{
			if ( value == "normal" ) { return FermataShape::normal; }
			else if ( value == "angled" ) { return FermataShape::angled; }
			else if ( value == "square" ) { return FermataShape::square; }
			else if ( value == "" ) { return FermataShape::emptystring; }
			return FermataShape::normal;
		}
		std::string toString( const FermataShape value )
		{
			switch ( value ) 
			{
				case FermataShape::normal: return "normal"; break;
				case FermataShape::angled: return "angled"; break;
				case FermataShape::square: return "square"; break;
				case FermataShape::emptystring: return ""; break;
				default: break;
			}
			return "normal";
		}
		std::ostream& toStream( std::ostream& os, const FermataShape value )
		{
			return os << toString( value );
		}
		std::ostream& operator<<( std::ostream& os, const FermataShape value )
		{
			return toStream( os, value );
		}

		FontStyle parseFontStyle( const std::string& value )
		{
			if ( value == "normal" ) { return FontStyle::normal; }
			else if ( value == "italic" ) { return FontStyle::italic; }
			return FontStyle::normal;
		}
		std::string toString( const FontStyle value )
		{
			switch ( value ) 
			{
				case FontStyle::normal: return "normal"; break;
				case FontStyle::italic: return "italic"; break;
				default: break;
			}
			return "normal";
		}
		std::ostream& toStream( std::ostream& os, const FontStyle value )
		{
			return os << toString( value );
		}
		std::ostream& operator<<( std::ostream& os, const FontStyle value )
		{
			return toStream( os, value );
		}

		FontWeight parseFontWeight( const std::string& value )
		{
			if ( value == "normal" ) { return FontWeight::normal; }
			else if ( value == "bold" ) { return FontWeight::bold; }
			return FontWeight::normal;
		}
		std::string toString( const FontWeight value )
		{
			switch ( value ) 
			{
				case FontWeight::normal: return "normal"; break;
				case FontWeight::bold: return "bold"; break;
				default: break;
			}
			return "normal";
		}
		std::ostream& toStream( std::ostream& os, const FontWeight value )
		{
			return os << toString( value );
		}
		std::ostream& operator<<( std::ostream& os, const FontWeight value )
		{
			return toStream( os, value );
		}

		LeftCenterRight parseLeftCenterRight( const std::string& value )
		{
			if ( value == "left" ) { return LeftCenterRight::left; }
			else if ( value == "center" ) { return LeftCenterRight::center; }
			else if ( value == "right" ) { return LeftCenterRight::right; }
			return LeftCenterRight::left;
		}
		std::string toString( const LeftCenterRight value )
		{
			switch ( value ) 
			{
				case LeftCenterRight::left: return "left"; break;
				case LeftCenterRight::center: return "center"; break;
				case LeftCenterRight::right: return "right"; break;
				default: break;
			}
			return "left";
		}
		std::ostream& toStream( std::ostream& os, const LeftCenterRight value )
		{
			return os << toString( value );
		}
		std::ostream& operator<<( std::ostream& os, const LeftCenterRight value )
		{
			return toStream( os, value );
		}

		LeftRight parseLeftRight( const std::string& value )
		{
			if ( value == "left" ) { return LeftRight::left; }
			else if ( value == "right" ) { return LeftRight::right; }
			return LeftRight::left;
		}
		std::string toString( const LeftRight value )
		{
			switch ( value ) 
			{
				case LeftRight::left: return "left"; break;
				case LeftRight::right: return "right"; break;
				default: break;
			}
			return "left";
		}
		std::ostream& toStream( std::ostream& os, const LeftRight value )
		{
			return os << toString( value );
		}
		std::ostream& operator<<( std::ostream& os, const LeftRight value )
		{
			return toStream( os, value );
		}

		LineShape parseLineShape( const std::string& value )
		{
			if ( value == "straight" ) { return LineShape::straight; }
			else if ( value == "curved" ) { return LineShape::curved; }
			return LineShape::straight;
		}
		std::string toString( const LineShape value )
		{
			switch ( value ) 
			{
				case LineShape::straight: return "straight"; break;
				case LineShape::curved: return "curved"; break;
				default: break;
			}
			return "straight";
		}
		std::ostream& toStream( std::ostream& os, const LineShape value )
		{
			return os << toString( value );
		}
		std::ostream& operator<<( std::ostream& os, const LineShape value )
		{
			return toStream( os, value );
		}

		LineType parseLineType( const std::string& value )
		{
			if ( value == "solid" ) { return LineType::solid; }
			else if ( value == "dashed" ) { return LineType::dashed; }
			else if ( value == "dotted" ) { return LineType::dotted; }
			else if ( value == "wavy" ) { return LineType::wavy; }
			return LineType::solid;
		}
		std::string toString( const LineType value )
		{
			switch ( value ) 
			{
				case LineType::solid: return "solid"; break;
				case LineType::dashed: return "dashed"; break;
				case LineType::dotted: return "dotted"; break;
				case LineType::wavy: return "wavy"; break;
				default: break;
			}
			return "solid";
		}
		std::ostream& toStream( std::ostream& os, const LineType value )
		{
			return os << toString( value );
		}
		std::ostream& operator<<( std::ostream& os, const LineType value )
		{
			return toStream( os, value );
		}

		Mute parseMute( const std::string& value )
		{
			if ( value == "on" ) { return Mute::on; }
			else if ( value == "off" ) { return Mute::off; }
			else if ( value == "straight" ) { return Mute::straight; }
			else if ( value == "cup" ) { return Mute::cup; }
			else if ( value == "harmon-no-stem" ) { return Mute::harmonNoStem; }
			else if ( value == "harmon-stem" ) { return Mute::harmonStem; }
			else if ( value == "bucket" ) { return Mute::bucket; }
			else if ( value == "plunger" ) { return Mute::plunger; }
			else if ( value == "hat" ) { return Mute::hat; }
			else if ( value == "solotone" ) { return Mute::solotone; }
			else if ( value == "practice" ) { return Mute::practice; }
			else if ( value == "stop-mute" ) { return Mute::stopMute; }
			else if ( value == "stop-hand" ) { return Mute::stopHand; }
			else if ( value == "echo" ) { return Mute::echo; }
			else if ( value == "palm" ) { return Mute::palm; }
			return Mute::on;
		}
		std::string toString( const Mute value )
		{
			switch ( value ) 
			{
				case Mute::on: return "on"; break;
				case Mute::off: return "off"; break;
				case Mute::straight: return "straight"; break;
				case Mute::cup: return "cup"; break;
				case Mute::harmonNoStem: return "harmon-no-stem"; break;
				case Mute::harmonStem: return "harmon-stem"; break;
				case Mute::bucket: return "bucket"; break;
				case Mute::plunger: return "plunger"; break;
				case Mute::hat: return "hat"; break;
				case Mute::solotone: return "solotone"; break;
				case Mute::practice: return "practice"; break;
				case Mute::stopMute: return "stop-mute"; break;
				case Mute::stopHand: return "stop-hand"; break;
				case Mute::echo: return "echo"; break;
				case Mute::palm: return "palm"; break;
				default: break;
			}
			return "on";
		}
		std::ostream& toStream( std::ostream& os, const Mute value )
		{
			return os << toString( value );
		}
		std::ostream& operator<<( std::ostream& os, const Mute value )
		{
			return toStream( os, value );
		}

		OverUnder parseOverUnder( const std::string& value )
		{
			if ( value == "over" ) { return OverUnder::over; }
			else if ( value == "under" ) { return OverUnder::under; }
			return OverUnder::over;
		}
		std::string toString( const OverUnder value )
		{
			switch ( value ) 
			{
				case OverUnder::over: return "over"; break;
				case OverUnder::under: return "under"; break;
				default: break;
			}
			return "over";
		}
		std::ostream& toStream( std::ostream& os, const OverUnder value )
		{
			return os << toString( value );
		}
		std::ostream& operator<<( std::ostream& os, const OverUnder value )
		{
			return toStream( os, value );
		}

		SemiPitched parseSemiPitched( const std::string& value )
		{
			if ( value == "high" ) { return SemiPitched::high; }
			else if ( value == "medium-high" ) { return SemiPitched::mediumHigh; }
			else if ( value == "medium" ) { return SemiPitched::medium; }
			else if ( value == "medium-low" ) { return SemiPitched::mediumLow; }
			else if ( value == "low" ) { return SemiPitched::low; }
			else if ( value == "very-low" ) { return SemiPitched::veryLow; }
			return SemiPitched::high;
		}
		std::string toString( const SemiPitched value )
		{
			switch ( value ) 
			{
				case SemiPitched::high: return "high"; break;
				case SemiPitched::mediumHigh: return "medium-high"; break;
				case SemiPitched::medium: return "medium"; break;
				case SemiPitched::mediumLow: return "medium-low"; break;
				case SemiPitched::low: return "low"; break;
				case SemiPitched::veryLow: return "very-low"; break;
				default: break;
			}
			return "high";
		}
		std::ostream& toStream( std::ostream& os, const SemiPitched value )
		{
			return os << toString( value );
		}
		std::ostream& operator<<( std::ostream& os, const SemiPitched value )
		{
			return toStream( os, value );
		}

		StartNote parseStartNote( const std::string& value )
		{
			if ( value == "upper" ) { return StartNote::upper; }
			else if ( value == "main" ) { return StartNote::main; }
			else if ( value == "below" ) { return StartNote::below; }
			return StartNote::upper;
		}
		std::string toString( const StartNote value )
		{
			switch ( value ) 
			{
				case StartNote::upper: return "upper"; break;
				case StartNote::main: return "main"; break;
				case StartNote::below: return "below"; break;
				default: break;
			}
			return "upper";
		}
		std::ostream& toStream( std::ostream& os, const StartNote value )
		{
			return os << toString( value );
		}
		std::ostream& operator<<( std::ostream& os, const StartNote value )
		{
			return toStream( os, value );
		}

		StartStop parseStartStop( const std::string& value )
		{
			if ( value == "start" ) { return StartStop::start; }
			else if ( value == "stop" ) { return StartStop::stop; }
			return StartStop::start;
		}
		std::string toString( const StartStop value )
		{
			switch ( value ) 
			{
				case StartStop::start: return "start"; break;
				case StartStop::stop: return "stop"; break;
				default: break;
			}
			return "start";
		}
		std::ostream& toStream( std::ostream& os, const StartStop value )
		{
			return os << toString( value );
		}
		std::ostream& operator<<( std::ostream& os, const StartStop value )
		{
			return toStream( os, value );
		}

		StartStopContinue parseStartStopContinue( const std::string& value )
		{
			if ( value == "start" ) { return StartStopContinue::start; }
			else if ( value == "stop" ) { return StartStopContinue::stop; }
			else if ( value == "continue" ) { return StartStopContinue::continue_; }
			return StartStopContinue::start;
		}
		std::string toString( const StartStopContinue value )
		{
			switch ( value ) 
			{
				case StartStopContinue::start: return "start"; break;
				case StartStopContinue::stop: return "stop"; break;
				case StartStopContinue::continue_: return "continue"; break;
				default: break;
			}
			return "start";
		}
		std::ostream& toStream( std::ostream& os, const StartStopContinue value )
		{
			return os << toString( value );
		}
		std::ostream& operator<<( std::ostream& os, const StartStopContinue value )
		{
			return toStream( os, value );
		}

		StartStopSingle parseStartStopSingle( const std::string& value )
		{
			if ( value == "start" ) { return StartStopSingle::start; }
			else if ( value == "stop" ) { return StartStopSingle::stop; }
			else if ( value == "single" ) { return StartStopSingle::single; }
			return StartStopSingle::start;
		}
		std::string toString( const StartStopSingle value )
		{
			switch ( value ) 
			{
				case StartStopSingle::start: return "start"; break;
				case StartStopSingle::stop: return "stop"; break;
				case StartStopSingle::single: return "single"; break;
				default: break;
			}
			return "start";
		}
		std::ostream& toStream( std::ostream& os, const StartStopSingle value )
		{
			return os << toString( value );
		}
		std::ostream& operator<<( std::ostream& os, const StartStopSingle value )
		{
			return toStream( os, value );
		}

		SymbolSize parseSymbolSize( const std::string& value )
		{
			if ( value == "full" ) { return SymbolSize::full; }
			else if ( value == "cue" ) { return SymbolSize::cue; }
			else if ( value == "large" ) { return SymbolSize::large; }
			return SymbolSize::full;
		}
		std::string toString( const SymbolSize value )
		{
			switch ( value ) 
			{
				case SymbolSize::full: return "full"; break;
				case SymbolSize::cue: return "cue"; break;
				case SymbolSize::large: return "large"; break;
				default: break;
			}
			return "full";
		}
		std::ostream& toStream( std::ostream& os, const SymbolSize value )
		{
			return os << toString( value );
		}
		std::ostream& operator<<( std::ostream& os, const SymbolSize value )
		{
			return toStream( os, value );
		}

		TextDirection parseTextDirection( const std::string& value )
		{
			if ( value == "ltr" ) { return TextDirection::ltr; }
			else if ( value == "rtl" ) { return TextDirection::rtl; }
			else if ( value == "lro" ) { return TextDirection::lro; }
			else if ( value == "rlo" ) { return TextDirection::rlo; }
			return TextDirection::ltr;
		}
		std::string toString( const TextDirection value )
		{
			switch ( value ) 
			{
				case TextDirection::ltr: return "ltr"; break;
				case TextDirection::rtl: return "rtl"; break;
				case TextDirection::lro: return "lro"; break;
				case TextDirection::rlo: return "rlo"; break;
				default: break;
			}
			return "ltr";
		}
		std::ostream& toStream( std::ostream& os, const TextDirection value )
		{
			return os << toString( value );
		}
		std::ostream& operator<<( std::ostream& os, const TextDirection value )
		{
			return toStream( os, value );
		}

		TopBottom parseTopBottom( const std::string& value )
		{
			if ( value == "top" ) { return TopBottom::top; }
			else if ( value == "bottom" ) { return TopBottom::bottom; }
			return TopBottom::top;
		}
		std::string toString( const TopBottom value )
		{
			switch ( value ) 
			{
				case TopBottom::top: return "top"; break;
				case TopBottom::bottom: return "bottom"; break;
				default: break;
			}
			return "top";
		}
		std::ostream& toStream( std::ostream& os, const TopBottom value )
		{
			return os << toString( value );
		}
		std::ostream& operator<<( std::ostream& os, const TopBottom value )
		{
			return toStream( os, value );
		}

		TrillStep parseTrillStep( const std::string& value )
		{
			if ( value == "whole" ) { return TrillStep::whole; }
			else if ( value == "half" ) { return TrillStep::half; }
			else if ( value == "unison" ) { return TrillStep::unison; }
			return TrillStep::whole;
		}
		std::string toString( const TrillStep value )
		{
			switch ( value ) 
			{
				case TrillStep::whole: return "whole"; break;
				case TrillStep::half: return "half"; break;
				case TrillStep::unison: return "unison"; break;
				default: break;
			}
			return "whole";
		}
		std::ostream& toStream( std::ostream& os, const TrillStep value )
		{
			return os << toString( value );
		}
		std::ostream& operator<<( std::ostream& os, const TrillStep value )
		{
			return toStream( os, value );
		}

		TwoNoteTurn parseTwoNoteTurn( const std::string& value )
		{
			if ( value == "whole" ) { return TwoNoteTurn::whole; }
			else if ( value == "half" ) { return TwoNoteTurn::half; }
			else if ( value == "none" ) { return TwoNoteTurn::none; }
			return TwoNoteTurn::whole;
		}
		std::string toString( const TwoNoteTurn value )
		{
			switch ( value ) 
			{
				case TwoNoteTurn::whole: return "whole"; break;
				case TwoNoteTurn::half: return "half"; break;
				case TwoNoteTurn::none: return "none"; break;
				default: break;
			}
			return "whole";
		}
		std::ostream& toStream( std::ostream& os, const TwoNoteTurn value )
		{
			return os << toString( value );
		}
		std::ostream& operator<<( std::ostream& os, const TwoNoteTurn value )
		{
			return toStream( os, value );
		}

		UpDown parseUpDown( const std::string& value )
		{
			if ( value == "up" ) { return UpDown::up; }
			else if ( value == "down" ) { return UpDown::down; }
			return UpDown::up;
		}
		std::string toString( const UpDown value )
		{
			switch ( value ) 
			{
				case UpDown::up: return "up"; break;
				case UpDown::down: return "down"; break;
				default: break;
			}
			return "up";
		}
		std::ostream& toStream( std::ostream& os, const UpDown value )
		{
			return os << toString( value );
		}
		std::ostream& operator<<( std::ostream& os, const UpDown value )
		{
			return toStream( os, value );
		}

		UprightInverted parseUprightInverted( const std::string& value )
		{
			if ( value == "upright" ) { return UprightInverted::upright; }
			else if ( value == "inverted" ) { return UprightInverted::inverted; }
			return UprightInverted::upright;
		}
		std::string toString( const UprightInverted value )
		{
			switch ( value ) 
			{
				case UprightInverted::upright: return "upright"; break;
				case UprightInverted::inverted: return "inverted"; break;
				default: break;
			}
			return "upright";
		}
		std::ostream& toStream( std::ostream& os, const UprightInverted value )
		{
			return os << toString( value );
		}
		std::ostream& operator<<( std::ostream& os, const UprightInverted value )
		{
			return toStream( os, value );
		}

		Valign parseValign( const std::string& value )
		{
			if ( value == "top" ) { return Valign::top; }
			else if ( value == "middle" ) { return Valign::middle; }
			else if ( value == "bottom" ) { return Valign::bottom; }
			else if ( value == "baseline" ) { return Valign::baseline; }
			return Valign::top;
		}
		std::string toString( const Valign value )
		{
			switch ( value ) 
			{
				case Valign::top: return "top"; break;
				case Valign::middle: return "middle"; break;
				case Valign::bottom: return "bottom"; break;
				case Valign::baseline: return "baseline"; break;
				default: break;
			}
			return "top";
		}
		std::ostream& toStream( std::ostream& os, const Valign value )
		{
			return os << toString( value );
		}
		std::ostream& operator<<( std::ostream& os, const Valign value )
		{
			return toStream( os, value );
		}

		ValignImage parseValignImage( const std::string& value )
		{
			if ( value == "top" ) { return ValignImage::top; }
			else if ( value == "middle" ) { return ValignImage::middle; }
			else if ( value == "bottom" ) { return ValignImage::bottom; }
			return ValignImage::top;
		}
		std::string toString( const ValignImage value )
		{
			switch ( value ) 
			{
				case ValignImage::top: return "top"; break;
				case ValignImage::middle: return "middle"; break;
				case ValignImage::bottom: return "bottom"; break;
				default: break;
			}
			return "top";
		}
		std::ostream& toStream( std::ostream& os, const ValignImage value )
		{
			return os << toString( value );
		}
		std::ostream& operator<<( std::ostream& os, const ValignImage value )
		{
			return toStream( os, value );
		}

		YesNo parseYesNo( const std::string& value )
		{
			if ( value == "yes" ) { return YesNo::yes; }
			else if ( value == "no" ) { return YesNo::no; }
			return YesNo::yes;
		}
		std::string toString( const YesNo value )
		{
			switch ( value ) 
			{
				case YesNo::yes: return "yes"; break;
				case YesNo::no: return "no"; break;
				default: break;
			}
			return "yes";
		}
		std::ostream& toStream( std::ostream& os, const YesNo value )
		{
			return os << toString( value );
		}
		std::ostream& operator<<( std::ostream& os, const YesNo value )
		{
			return toStream( os, value );
		}

		CancelLocation parseCancelLocation( const std::string& value )
		{
			if ( value == "left" ) { return CancelLocation::left; }
			else if ( value == "right" ) { return CancelLocation::right; }
			else if ( value == "before-barline" ) { return CancelLocation::beforeBarline; }
			return CancelLocation::left;
		}
		std::string toString( const CancelLocation value )
		{
			switch ( value ) 
			{
				case CancelLocation::left: return "left"; break;
				case CancelLocation::right: return "right"; break;
				case CancelLocation::beforeBarline: return "before-barline"; break;
				default: break;
			}
			return "left";
		}
		std::ostream& toStream( std::ostream& os, const CancelLocation value )
		{
			return os << toString( value );
		}
		std::ostream& operator<<( std::ostream& os, const CancelLocation value )
		{
			return toStream( os, value );
		}

		ClefSign parseClefSign( const std::string& value )
		{
			if ( value == "G" ) { return ClefSign::g; }
			else if ( value == "F" ) { return ClefSign::f; }
			else if ( value == "C" ) { return ClefSign::c; }
			else if ( value == "percussion" ) { return ClefSign::percussion; }
			else if ( value == "TAB" ) { return ClefSign::tab; }
			else if ( value == "jianpu" ) { return ClefSign::jianpu; }
			else if ( value == "none" ) { return ClefSign::none; }
			return ClefSign::g;
		}
		std::string toString( const ClefSign value )
		{
			switch ( value ) 
			{
				case ClefSign::g: return "G"; break;
				case ClefSign::f: return "F"; break;
				case ClefSign::c: return "C"; break;
				case ClefSign::percussion: return "percussion"; break;
				case ClefSign::tab: return "TAB"; break;
				case ClefSign::jianpu: return "jianpu"; break;
				case ClefSign::none: return "none"; break;
				default: break;
			}
			return "G";
		}
		std::ostream& toStream( std::ostream& os, const ClefSign value )
		{
			return os << toString( value );
		}
		std::ostream& operator<<( std::ostream& os, const ClefSign value )
		{
			return toStream( os, value );
		}

		ShowFrets parseShowFrets( const std::string& value )
		{
			if ( value == "numbers" ) { return ShowFrets::numbers; }
			else if ( value == "letters" ) { return ShowFrets::letters; }
			return ShowFrets::numbers;
		}
		std::string toString( const ShowFrets value )
		{
			switch ( value ) 
			{
				case ShowFrets::numbers: return "numbers"; break;
				case ShowFrets::letters: return "letters"; break;
				default: break;
			}
			return "numbers";
		}
		std::ostream& toStream( std::ostream& os, const ShowFrets value )
		{
			return os << toString( value );
		}
		std::ostream& operator<<( std::ostream& os, const ShowFrets value )
		{
			return toStream( os, value );
		}

		StaffType parseStaffType( const std::string& value )
		{
			if ( value == "ossia" ) { return StaffType::ossia; }
			else if ( value == "cue" ) { return StaffType::cue; }
			else if ( value == "editorial" ) { return StaffType::editorial; }
			else if ( value == "regular" ) { return StaffType::regular; }
			else if ( value == "alternate" ) { return StaffType::alternate; }
			return StaffType::ossia;
		}
		std::string toString( const StaffType value )
		{
			switch ( value ) 
			{
				case StaffType::ossia: return "ossia"; break;
				case StaffType::cue: return "cue"; break;
				case StaffType::editorial: return "editorial"; break;
				case StaffType::regular: return "regular"; break;
				case StaffType::alternate: return "alternate"; break;
				default: break;
			}
			return "ossia";
		}
		std::ostream& toStream( std::ostream& os, const StaffType value )
		{
			return os << toString( value );
		}
		std::ostream& operator<<( std::ostream& os, const StaffType value )
		{
			return toStream( os, value );
		}

		TimeRelation parseTimeRelation( const std::string& value )
		{
			if ( value == "parentheses" ) { return TimeRelation::parentheses; }
			else if ( value == "bracket" ) { return TimeRelation::bracket; }
			else if ( value == "equals" ) { return TimeRelation::equals; }
			else if ( value == "slash" ) { return TimeRelation::slash; }
			else if ( value == "space" ) { return TimeRelation::space; }
			else if ( value == "hyphen" ) { return TimeRelation::hyphen; }
			return TimeRelation::parentheses;
		}
		std::string toString( const TimeRelation value )
		{
			switch ( value ) 
			{
				case TimeRelation::parentheses: return "parentheses"; break;
				case TimeRelation::bracket: return "bracket"; break;
				case TimeRelation::equals: return "equals"; break;
				case TimeRelation::slash: return "slash"; break;
				case TimeRelation::space: return "space"; break;
				case TimeRelation::hyphen: return "hyphen"; break;
				default: break;
			}
			return "parentheses";
		}
		std::ostream& toStream( std::ostream& os, const TimeRelation value )
		{
			return os << toString( value );
		}
		std::ostream& operator<<( std::ostream& os, const TimeRelation value )
		{
			return toStream( os, value );
		}

		TimeSeparator parseTimeSeparator( const std::string& value )
		{
			if ( value == "none" ) { return TimeSeparator::none; }
			else if ( value == "horizontal" ) { return TimeSeparator::horizontal; }
			else if ( value == "diagonal" ) { return TimeSeparator::diagonal; }
			else if ( value == "vertical" ) { return TimeSeparator::vertical; }
			else if ( value == "adjacent" ) { return TimeSeparator::adjacent; }
			return TimeSeparator::none;
		}
		std::string toString( const TimeSeparator value )
		{
			switch ( value ) 
			{
				case TimeSeparator::none: return "none"; break;
				case TimeSeparator::horizontal: return "horizontal"; break;
				case TimeSeparator::diagonal: return "diagonal"; break;
				case TimeSeparator::vertical: return "vertical"; break;
				case TimeSeparator::adjacent: return "adjacent"; break;
				default: break;
			}
			return "none";
		}
		std::ostream& toStream( std::ostream& os, const TimeSeparator value )
		{
			return os << toString( value );
		}
		std::ostream& operator<<( std::ostream& os, const TimeSeparator value )
		{
			return toStream( os, value );
		}

		TimeSymbol parseTimeSymbol( const std::string& value )
		{
			if ( value == "common" ) { return TimeSymbol::common; }
			else if ( value == "cut" ) { return TimeSymbol::cut; }
			else if ( value == "single-number" ) { return TimeSymbol::singleNumber; }
			else if ( value == "note" ) { return TimeSymbol::note; }
			else if ( value == "dotted-note" ) { return TimeSymbol::dottedNote; }
			else if ( value == "normal" ) { return TimeSymbol::normal; }
			return TimeSymbol::common;
		}
		std::string toString( const TimeSymbol value )
		{
			switch ( value ) 
			{
				case TimeSymbol::common: return "common"; break;
				case TimeSymbol::cut: return "cut"; break;
				case TimeSymbol::singleNumber: return "single-number"; break;
				case TimeSymbol::note: return "note"; break;
				case TimeSymbol::dottedNote: return "dotted-note"; break;
				case TimeSymbol::normal: return "normal"; break;
				default: break;
			}
			return "common";
		}
		std::ostream& toStream( std::ostream& os, const TimeSymbol value )
		{
			return os << toString( value );
		}
		std::ostream& operator<<( std::ostream& os, const TimeSymbol value )
		{
			return toStream( os, value );
		}

		BackwardForward parseBackwardForward( const std::string& value )
		{
			if ( value == "backward" ) { return BackwardForward::backward; }
			else if ( value == "forward" ) { return BackwardForward::forward; }
			return BackwardForward::backward;
		}
		std::string toString( const BackwardForward value )
		{
			switch ( value ) 
			{
				case BackwardForward::backward: return "backward"; break;
				case BackwardForward::forward: return "forward"; break;
				default: break;
			}
			return "backward";
		}
		std::ostream& toStream( std::ostream& os, const BackwardForward value )
		{
			return os << toString( value );
		}
		std::ostream& operator<<( std::ostream& os, const BackwardForward value )
		{
			return toStream( os, value );
		}

		BarStyle parseBarStyle( const std::string& value )
		{
			if ( value == "regular" ) { return BarStyle::regular; }
			else if ( value == "dotted" ) { return BarStyle::dotted; }
			else if ( value == "dashed" ) { return BarStyle::dashed; }
			else if ( value == "heavy" ) { return BarStyle::heavy; }
			else if ( value == "light-light" ) { return BarStyle::lightLight; }
			else if ( value == "light-heavy" ) { return BarStyle::lightHeavy; }
			else if ( value == "heavy-light" ) { return BarStyle::heavyLight; }
			else if ( value == "heavy-heavy" ) { return BarStyle::heavyHeavy; }
			else if ( value == "tick" ) { return BarStyle::tick; }
			else if ( value == "short" ) { return BarStyle::short_; }
			else if ( value == "none" ) { return BarStyle::none; }
			return BarStyle::regular;
		}
		std::string toString( const BarStyle value )
		{
			switch ( value ) 
			{
				case BarStyle::regular: return "regular"; break;
				case BarStyle::dotted: return "dotted"; break;
				case BarStyle::dashed: return "dashed"; break;
				case BarStyle::heavy: return "heavy"; break;
				case BarStyle::lightLight: return "light-light"; break;
				case BarStyle::lightHeavy: return "light-heavy"; break;
				case BarStyle::heavyLight: return "heavy-light"; break;
				case BarStyle::heavyHeavy: return "heavy-heavy"; break;
				case BarStyle::tick: return "tick"; break;
				case BarStyle::short_: return "short"; break;
				case BarStyle::none: return "none"; break;
				default: break;
			}
			return "regular";
		}
		std::ostream& toStream( std::ostream& os, const BarStyle value )
		{
			return os << toString( value );
		}
		std::ostream& operator<<( std::ostream& os, const BarStyle value )
		{
			return toStream( os, value );
		}

		RightLeftMiddle parseRightLeftMiddle( const std::string& value )
		{
			if ( value == "right" ) { return RightLeftMiddle::right; }
			else if ( value == "left" ) { return RightLeftMiddle::left; }
			else if ( value == "middle" ) { return RightLeftMiddle::middle; }
			return RightLeftMiddle::right;
		}
		std::string toString( const RightLeftMiddle value )
		{
			switch ( value ) 
			{
				case RightLeftMiddle::right: return "right"; break;
				case RightLeftMiddle::left: return "left"; break;
				case RightLeftMiddle::middle: return "middle"; break;
				default: break;
			}
			return "right";
		}
		std::ostream& toStream( std::ostream& os, const RightLeftMiddle value )
		{
			return os << toString( value );
		}
		std::ostream& operator<<( std::ostream& os, const RightLeftMiddle value )
		{
			return toStream( os, value );
		}

		StartStopDiscontinue parseStartStopDiscontinue( const std::string& value )
		{
			if ( value == "start" ) { return StartStopDiscontinue::start; }
			else if ( value == "stop" ) { return StartStopDiscontinue::stop; }
			else if ( value == "discontinue" ) { return StartStopDiscontinue::discontinue; }
			return StartStopDiscontinue::start;
		}
		std::string toString( const StartStopDiscontinue value )
		{
			switch ( value ) 
			{
				case StartStopDiscontinue::start: return "start"; break;
				case StartStopDiscontinue::stop: return "stop"; break;
				case StartStopDiscontinue::discontinue: return "discontinue"; break;
				default: break;
			}
			return "start";
		}
		std::ostream& toStream( std::ostream& os, const StartStopDiscontinue value )
		{
			return os << toString( value );
		}
		std::ostream& operator<<( std::ostream& os, const StartStopDiscontinue value )
		{
			return toStream( os, value );
		}

		Winged parseWinged( const std::string& value )
		{
			if ( value == "none" ) { return Winged::none; }
			else if ( value == "straight" ) { return Winged::straight; }
			else if ( value == "curved" ) { return Winged::curved; }
			else if ( value == "double-straight" ) { return Winged::doubleStraight; }
			else if ( value == "double-curved" ) { return Winged::doubleCurved; }
			return Winged::none;
		}
		std::string toString( const Winged value )
		{
			switch ( value ) 
			{
				case Winged::none: return "none"; break;
				case Winged::straight: return "straight"; break;
				case Winged::curved: return "curved"; break;
				case Winged::doubleStraight: return "double-straight"; break;
				case Winged::doubleCurved: return "double-curved"; break;
				default: break;
			}
			return "none";
		}
		std::ostream& toStream( std::ostream& os, const Winged value )
		{
			return os << toString( value );
		}
		std::ostream& operator<<( std::ostream& os, const Winged value )
		{
			return toStream( os, value );
		}

		BeaterValue parseBeaterValue( const std::string& value )
		{
			if ( value == "bow" ) { return BeaterValue::bow; }
			else if ( value == "chime hammer" ) { return BeaterValue::chimeHammer; }
			else if ( value == "coin" ) { return BeaterValue::coin; }
			else if ( value == "finger" ) { return BeaterValue::finger; }
			else if ( value == "fingernail" ) { return BeaterValue::fingernail; }
			else if ( value == "fist" ) { return BeaterValue::fist; }
			else if ( value == "guiro scraper" ) { return BeaterValue::guiroScraper; }
			else if ( value == "hammer" ) { return BeaterValue::hammer; }
			else if ( value == "hand" ) { return BeaterValue::hand; }
			else if ( value == "jazz stick" ) { return BeaterValue::jazzStick; }
			else if ( value == "knitting needle" ) { return BeaterValue::knittingNeedle; }
			else if ( value == "metal hammer" ) { return BeaterValue::metalHammer; }
			else if ( value == "snare stick" ) { return BeaterValue::snareStick; }
			else if ( value == "spoon mallet" ) { return BeaterValue::spoonMallet; }
			else if ( value == "triangle beater" ) { return BeaterValue::triangleBeater; }
			else if ( value == "triangle beater plain" ) { return BeaterValue::triangleBeaterPlain; }
			else if ( value == "wire brush" ) { return BeaterValue::wireBrush; }
			return BeaterValue::bow;
		}
		std::string toString( const BeaterValue value )
		{
			switch ( value ) 
			{
				case BeaterValue::bow: return "bow"; break;
				case BeaterValue::chimeHammer: return "chime hammer"; break;
				case BeaterValue::coin: return "coin"; break;
				case BeaterValue::finger: return "finger"; break;
				case BeaterValue::fingernail: return "fingernail"; break;
				case BeaterValue::fist: return "fist"; break;
				case BeaterValue::guiroScraper: return "guiro scraper"; break;
				case BeaterValue::hammer: return "hammer"; break;
				case BeaterValue::hand: return "hand"; break;
				case BeaterValue::jazzStick: return "jazz stick"; break;
				case BeaterValue::knittingNeedle: return "knitting needle"; break;
				case BeaterValue::metalHammer: return "metal hammer"; break;
				case BeaterValue::snareStick: return "snare stick"; break;
				case BeaterValue::spoonMallet: return "spoon mallet"; break;
				case BeaterValue::triangleBeater: return "triangle beater"; break;
				case BeaterValue::triangleBeaterPlain: return "triangle beater plain"; break;
				case BeaterValue::wireBrush: return "wire brush"; break;
				default: break;
			}
			return "bow";
		}
		std::ostream& toStream( std::ostream& os, const BeaterValue value )
		{
			return os << toString( value );
		}
		std::ostream& operator<<( std::ostream& os, const BeaterValue value )
		{
			return toStream( os, value );
		}

		DegreeSymbolValue parseDegreeSymbolValue( const std::string& value )
		{
			if ( value == "major" ) { return DegreeSymbolValue::major; }
			else if ( value == "minor" ) { return DegreeSymbolValue::minor; }
			else if ( value == "augmented" ) { return DegreeSymbolValue::augmented; }
			else if ( value == "diminished" ) { return DegreeSymbolValue::diminished; }
			else if ( value == "half-diminished" ) { return DegreeSymbolValue::halfDiminished; }
			return DegreeSymbolValue::major;
		}
		std::string toString( const DegreeSymbolValue value )
		{
			switch ( value ) 
			{
				case DegreeSymbolValue::major: return "major"; break;
				case DegreeSymbolValue::minor: return "minor"; break;
				case DegreeSymbolValue::augmented: return "augmented"; break;
				case DegreeSymbolValue::diminished: return "diminished"; break;
				case DegreeSymbolValue::halfDiminished: return "half-diminished"; break;
				default: break;
			}
			return "major";
		}
		std::ostream& toStream( std::ostream& os, const DegreeSymbolValue value )
		{
			return os << toString( value );
		}
		std::ostream& operator<<( std::ostream& os, const DegreeSymbolValue value )
		{
			return toStream( os, value );
		}

		DegreeTypeValue parseDegreeTypeValue( const std::string& value )
		{
			if ( value == "add" ) { return DegreeTypeValue::add; }
			else if ( value == "alter" ) { return DegreeTypeValue::alter; }
			else if ( value == "subtract" ) { return DegreeTypeValue::subtract; }
			return DegreeTypeValue::add;
		}
		std::string toString( const DegreeTypeValue value )
		{
			switch ( value ) 
			{
				case DegreeTypeValue::add: return "add"; break;
				case DegreeTypeValue::alter: return "alter"; break;
				case DegreeTypeValue::subtract: return "subtract"; break;
				default: break;
			}
			return "add";
		}
		std::ostream& toStream( std::ostream& os, const DegreeTypeValue value )
		{
			return os << toString( value );
		}
		std::ostream& operator<<( std::ostream& os, const DegreeTypeValue value )
		{
			return toStream( os, value );
		}

		Effect parseEffect( const std::string& value )
		{
			if ( value == "anvil" ) { return Effect::anvil; }
			else if ( value == "auto horn" ) { return Effect::autoHorn; }
			else if ( value == "bird whistle" ) { return Effect::birdWhistle; }
			else if ( value == "cannon" ) { return Effect::cannon; }
			else if ( value == "duck call" ) { return Effect::duckCall; }
			else if ( value == "gun shot" ) { return Effect::gunShot; }
			else if ( value == "klaxon horn" ) { return Effect::klaxonHorn; }
			else if ( value == "lions roar" ) { return Effect::lionsRoar; }
			else if ( value == "police whistle" ) { return Effect::policeWhistle; }
			else if ( value == "siren" ) { return Effect::siren; }
			else if ( value == "slide whistle" ) { return Effect::slideWhistle; }
			else if ( value == "thunder sheet" ) { return Effect::thunderSheet; }
			else if ( value == "wind machine" ) { return Effect::windMachine; }
			else if ( value == "wind whistle" ) { return Effect::windWhistle; }
			return Effect::anvil;
		}
		std::string toString( const Effect value )
		{
			switch ( value ) 
			{
				case Effect::anvil: return "anvil"; break;
				case Effect::autoHorn: return "auto horn"; break;
				case Effect::birdWhistle: return "bird whistle"; break;
				case Effect::cannon: return "cannon"; break;
				case Effect::duckCall: return "duck call"; break;
				case Effect::gunShot: return "gun shot"; break;
				case Effect::klaxonHorn: return "klaxon horn"; break;
				case Effect::lionsRoar: return "lions roar"; break;
				case Effect::policeWhistle: return "police whistle"; break;
				case Effect::siren: return "siren"; break;
				case Effect::slideWhistle: return "slide whistle"; break;
				case Effect::thunderSheet: return "thunder sheet"; break;
				case Effect::windMachine: return "wind machine"; break;
				case Effect::windWhistle: return "wind whistle"; break;
				default: break;
			}
			return "anvil";
		}
		std::ostream& toStream( std::ostream& os, const Effect value )
		{
			return os << toString( value );
		}
		std::ostream& operator<<( std::ostream& os, const Effect value )
		{
			return toStream( os, value );
		}

		Glass parseGlass( const std::string& value )
		{
			if ( value == "wind chimes" ) { return Glass::windChimes; }
			return Glass::windChimes;
		}
		std::string toString( const Glass value )
		{
			switch ( value ) 
			{
				case Glass::windChimes: return "wind chimes"; break;
				default: break;
			}
			return "wind chimes";
		}
		std::ostream& toStream( std::ostream& os, const Glass value )
		{
			return os << toString( value );
		}
		std::ostream& operator<<( std::ostream& os, const Glass value )
		{
			return toStream( os, value );
		}

		HarmonyType parseHarmonyType( const std::string& value )
		{
			if ( value == "explicit" ) { return HarmonyType::explicit_; }
			else if ( value == "implied" ) { return HarmonyType::implied; }
			else if ( value == "alternate" ) { return HarmonyType::alternate; }
			return HarmonyType::explicit_;
		}
		std::string toString( const HarmonyType value )
		{
			switch ( value ) 
			{
				case HarmonyType::explicit_: return "explicit"; break;
				case HarmonyType::implied: return "implied"; break;
				case HarmonyType::alternate: return "alternate"; break;
				default: break;
			}
			return "explicit";
		}
		std::ostream& toStream( std::ostream& os, const HarmonyType value )
		{
			return os << toString( value );
		}
		std::ostream& operator<<( std::ostream& os, const HarmonyType value )
		{
			return toStream( os, value );
		}

		KindValue parseKindValue( const std::string& value )
		{
			if ( value == "major" ) { return KindValue::major; }
			else if ( value == "minor" ) { return KindValue::minor; }
			else if ( value == "augmented" ) { return KindValue::augmented; }
			else if ( value == "diminished" ) { return KindValue::diminished; }
			else if ( value == "dominant" ) { return KindValue::dominant; }
			else if ( value == "major-seventh" ) { return KindValue::majorSeventh; }
			else if ( value == "minor-seventh" ) { return KindValue::minorSeventh; }
			else if ( value == "diminished-seventh" ) { return KindValue::diminishedSeventh; }
			else if ( value == "augmented-seventh" ) { return KindValue::augmentedSeventh; }
			else if ( value == "half-diminished" ) { return KindValue::halfDiminished; }
			else if ( value == "major-minor" ) { return KindValue::majorMinor; }
			else if ( value == "major-sixth" ) { return KindValue::majorSixth; }
			else if ( value == "minor-sixth" ) { return KindValue::minorSixth; }
			else if ( value == "dominant-ninth" ) { return KindValue::dominantNinth; }
			else if ( value == "major-ninth" ) { return KindValue::majorNinth; }
			else if ( value == "minor-ninth" ) { return KindValue::minorNinth; }
			else if ( value == "dominant-11th" ) { return KindValue::dominant11Th; }
			else if ( value == "major-11th" ) { return KindValue::major11Th; }
			else if ( value == "minor-11th" ) { return KindValue::minor11Th; }
			else if ( value == "dominant-13th" ) { return KindValue::dominant13Th; }
			else if ( value == "major-13th" ) { return KindValue::major13Th; }
			else if ( value == "minor-13th" ) { return KindValue::minor13Th; }
			else if ( value == "suspended-second" ) { return KindValue::suspendedSecond; }
			else if ( value == "suspended-fourth" ) { return KindValue::suspendedFourth; }
			else if ( value == "Neapolitan" ) { return KindValue::neapolitan; }
			else if ( value == "Italian" ) { return KindValue::italian; }
			else if ( value == "French" ) { return KindValue::french; }
			else if ( value == "German" ) { return KindValue::german; }
			else if ( value == "pedal" ) { return KindValue::pedal; }
			else if ( value == "power" ) { return KindValue::power; }
			else if ( value == "Tristan" ) { return KindValue::tristan; }
			else if ( value == "other" ) { return KindValue::other; }
			else if ( value == "none" ) { return KindValue::none; }
			return KindValue::major;
		}
		std::string toString( const KindValue value )
		{
			switch ( value ) 
			{
				case KindValue::major: return "major"; break;
				case KindValue::minor: return "minor"; break;
				case KindValue::augmented: return "augmented"; break;
				case KindValue::diminished: return "diminished"; break;
				case KindValue::dominant: return "dominant"; break;
				case KindValue::majorSeventh: return "major-seventh"; break;
				case KindValue::minorSeventh: return "minor-seventh"; break;
				case KindValue::diminishedSeventh: return "diminished-seventh"; break;
				case KindValue::augmentedSeventh: return "augmented-seventh"; break;
				case KindValue::halfDiminished: return "half-diminished"; break;
				case KindValue::majorMinor: return "major-minor"; break;
				case KindValue::majorSixth: return "major-sixth"; break;
				case KindValue::minorSixth: return "minor-sixth"; break;
				case KindValue::dominantNinth: return "dominant-ninth"; break;
				case KindValue::majorNinth: return "major-ninth"; break;
				case KindValue::minorNinth: return "minor-ninth"; break;
				case KindValue::dominant11Th: return "dominant-11th"; break;
				case KindValue::major11Th: return "major-11th"; break;
				case KindValue::minor11Th: return "minor-11th"; break;
				case KindValue::dominant13Th: return "dominant-13th"; break;
				case KindValue::major13Th: return "major-13th"; break;
				case KindValue::minor13Th: return "minor-13th"; break;
				case KindValue::suspendedSecond: return "suspended-second"; break;
				case KindValue::suspendedFourth: return "suspended-fourth"; break;
				case KindValue::neapolitan: return "Neapolitan"; break;
				case KindValue::italian: return "Italian"; break;
				case KindValue::french: return "French"; break;
				case KindValue::german: return "German"; break;
				case KindValue::pedal: return "pedal"; break;
				case KindValue::power: return "power"; break;
				case KindValue::tristan: return "Tristan"; break;
				case KindValue::other: return "other"; break;
				case KindValue::none: return "none"; break;
				default: break;
			}
			return "major";
		}
		std::ostream& toStream( std::ostream& os, const KindValue value )
		{
			return os << toString( value );
		}
		std::ostream& operator<<( std::ostream& os, const KindValue value )
		{
			return toStream( os, value );
		}

		LineEnd parseLineEnd( const std::string& value )
		{
			if ( value == "up" ) { return LineEnd::up; }
			else if ( value == "down" ) { return LineEnd::down; }
			else if ( value == "both" ) { return LineEnd::both; }
			else if ( value == "arrow" ) { return LineEnd::arrow; }
			else if ( value == "none" ) { return LineEnd::none; }
			return LineEnd::up;
		}
		std::string toString( const LineEnd value )
		{
			switch ( value ) 
			{
				case LineEnd::up: return "up"; break;
				case LineEnd::down: return "down"; break;
				case LineEnd::both: return "both"; break;
				case LineEnd::arrow: return "arrow"; break;
				case LineEnd::none: return "none"; break;
				default: break;
			}
			return "up";
		}
		std::ostream& toStream( std::ostream& os, const LineEnd value )
		{
			return os << toString( value );
		}
		std::ostream& operator<<( std::ostream& os, const LineEnd value )
		{
			return toStream( os, value );
		}

		MeasureNumberingValue parseMeasureNumberingValue( const std::string& value )
		{
			if ( value == "none" ) { return MeasureNumberingValue::none; }
			else if ( value == "measure" ) { return MeasureNumberingValue::measure; }
			else if ( value == "system" ) { return MeasureNumberingValue::system; }
			return MeasureNumberingValue::none;
		}
		std::string toString( const MeasureNumberingValue value )
		{
			switch ( value ) 
			{
				case MeasureNumberingValue::none: return "none"; break;
				case MeasureNumberingValue::measure: return "measure"; break;
				case MeasureNumberingValue::system: return "system"; break;
				default: break;
			}
			return "none";
		}
		std::ostream& toStream( std::ostream& os, const MeasureNumberingValue value )
		{
			return os << toString( value );
		}
		std::ostream& operator<<( std::ostream& os, const MeasureNumberingValue value )
		{
			return toStream( os, value );
		}

		Membrane parseMembrane( const std::string& value )
		{
			if ( value == "bass drum" ) { return Membrane::bassDrum; }
			else if ( value == "bass drum on side" ) { return Membrane::bassDrumOnSide; }
			else if ( value == "bongos" ) { return Membrane::bongos; }
			else if ( value == "conga drum" ) { return Membrane::congaDrum; }
			else if ( value == "goblet drum" ) { return Membrane::gobletDrum; }
			else if ( value == "military drum" ) { return Membrane::militaryDrum; }
			else if ( value == "snare drum" ) { return Membrane::snareDrum; }
			else if ( value == "snare drum snares off" ) { return Membrane::snareDrumSnaresOff; }
			else if ( value == "tambourine" ) { return Membrane::tambourine; }
			else if ( value == "tenor drum" ) { return Membrane::tenorDrum; }
			else if ( value == "timbales" ) { return Membrane::timbales; }
			else if ( value == "tomtom" ) { return Membrane::tomtom; }
			return Membrane::bassDrum;
		}
		std::string toString( const Membrane value )
		{
			switch ( value ) 
			{
				case Membrane::bassDrum: return "bass drum"; break;
				case Membrane::bassDrumOnSide: return "bass drum on side"; break;
				case Membrane::bongos: return "bongos"; break;
				case Membrane::congaDrum: return "conga drum"; break;
				case Membrane::gobletDrum: return "goblet drum"; break;
				case Membrane::militaryDrum: return "military drum"; break;
				case Membrane::snareDrum: return "snare drum"; break;
				case Membrane::snareDrumSnaresOff: return "snare drum snares off"; break;
				case Membrane::tambourine: return "tambourine"; break;
				case Membrane::tenorDrum: return "tenor drum"; break;
				case Membrane::timbales: return "timbales"; break;
				case Membrane::tomtom: return "tomtom"; break;
				default: break;
			}
			return "bass drum";
		}
		std::ostream& toStream( std::ostream& os, const Membrane value )
		{
			return os << toString( value );
		}
		std::ostream& operator<<( std::ostream& os, const Membrane value )
		{
			return toStream( os, value );
		}

		Metal parseMetal( const std::string& value )
		{
			if ( value == "almglocken" ) { return Metal::almglocken; }
			else if ( value == "bell" ) { return Metal::bell; }
			else if ( value == "bell plate" ) { return Metal::bellPlate; }
			else if ( value == "brake drum" ) { return Metal::brakeDrum; }
			else if ( value == "Chinese cymbal" ) { return Metal::chineseCymbal; }
			else if ( value == "cowbell" ) { return Metal::cowbell; }
			else if ( value == "crash cymbals" ) { return Metal::crashCymbals; }
			else if ( value == "crotale" ) { return Metal::crotale; }
			else if ( value == "cymbal tongs" ) { return Metal::cymbalTongs; }
			else if ( value == "domed gong" ) { return Metal::domedGong; }
			else if ( value == "finger cymbals" ) { return Metal::fingerCymbals; }
			else if ( value == "flexatone" ) { return Metal::flexatone; }
			else if ( value == "gong" ) { return Metal::gong; }
			else if ( value == "hi-hat" ) { return Metal::hiHat; }
			else if ( value == "high-hat cymbals" ) { return Metal::highHatCymbals; }
			else if ( value == "handbell" ) { return Metal::handbell; }
			else if ( value == "sistrum" ) { return Metal::sistrum; }
			else if ( value == "sizzle cymbal" ) { return Metal::sizzleCymbal; }
			else if ( value == "sleigh bells" ) { return Metal::sleighBells; }
			else if ( value == "suspended cymbal" ) { return Metal::suspendedCymbal; }
			else if ( value == "tam tam" ) { return Metal::tamTam; }
			else if ( value == "triangle" ) { return Metal::triangle; }
			else if ( value == "Vietnamese hat" ) { return Metal::vietnameseHat; }
			return Metal::almglocken;
		}
		std::string toString( const Metal value )
		{
			switch ( value ) 
			{
				case Metal::almglocken: return "almglocken"; break;
				case Metal::bell: return "bell"; break;
				case Metal::bellPlate: return "bell plate"; break;
				case Metal::brakeDrum: return "brake drum"; break;
				case Metal::chineseCymbal: return "Chinese cymbal"; break;
				case Metal::cowbell: return "cowbell"; break;
				case Metal::crashCymbals: return "crash cymbals"; break;
				case Metal::crotale: return "crotale"; break;
				case Metal::cymbalTongs: return "cymbal tongs"; break;
				case Metal::domedGong: return "domed gong"; break;
				case Metal::fingerCymbals: return "finger cymbals"; break;
				case Metal::flexatone: return "flexatone"; break;
				case Metal::gong: return "gong"; break;
				case Metal::hiHat: return "hi-hat"; break;
				case Metal::highHatCymbals: return "high-hat cymbals"; break;
				case Metal::handbell: return "handbell"; break;
				case Metal::sistrum: return "sistrum"; break;
				case Metal::sizzleCymbal: return "sizzle cymbal"; break;
				case Metal::sleighBells: return "sleigh bells"; break;
				case Metal::suspendedCymbal: return "suspended cymbal"; break;
				case Metal::tamTam: return "tam tam"; break;
				case Metal::triangle: return "triangle"; break;
				case Metal::vietnameseHat: return "Vietnamese hat"; break;
				default: break;
			}
			return "almglocken";
		}
		std::ostream& toStream( std::ostream& os, const Metal value )
		{
			return os << toString( value );
		}
		std::ostream& operator<<( std::ostream& os, const Metal value )
		{
			return toStream( os, value );
		}

		OnOff parseOnOff( const std::string& value )
		{
			if ( value == "on" ) { return OnOff::on; }
			else if ( value == "off" ) { return OnOff::off; }
			return OnOff::on;
		}
		std::string toString( const OnOff value )
		{
			switch ( value ) 
			{
				case OnOff::on: return "on"; break;
				case OnOff::off: return "off"; break;
				default: break;
			}
			return "on";
		}
		std::ostream& toStream( std::ostream& os, const OnOff value )
		{
			return os << toString( value );
		}
		std::ostream& operator<<( std::ostream& os, const OnOff value )
		{
			return toStream( os, value );
		}

		Pitched parsePitched( const std::string& value )
		{
			if ( value == "chimes" ) { return Pitched::chimes; }
			else if ( value == "glockenspiel" ) { return Pitched::glockenspiel; }
			else if ( value == "mallet" ) { return Pitched::mallet; }
			else if ( value == "marimba" ) { return Pitched::marimba; }
			else if ( value == "tubular chimes" ) { return Pitched::tubularChimes; }
			else if ( value == "vibraphone" ) { return Pitched::vibraphone; }
			else if ( value == "xylophone" ) { return Pitched::xylophone; }
			return Pitched::chimes;
		}
		std::string toString( const Pitched value )
		{
			switch ( value ) 
			{
				case Pitched::chimes: return "chimes"; break;
				case Pitched::glockenspiel: return "glockenspiel"; break;
				case Pitched::mallet: return "mallet"; break;
				case Pitched::marimba: return "marimba"; break;
				case Pitched::tubularChimes: return "tubular chimes"; break;
				case Pitched::vibraphone: return "vibraphone"; break;
				case Pitched::xylophone: return "xylophone"; break;
				default: break;
			}
			return "chimes";
		}
		std::ostream& toStream( std::ostream& os, const Pitched value )
		{
			return os << toString( value );
		}
		std::ostream& operator<<( std::ostream& os, const Pitched value )
		{
			return toStream( os, value );
		}

		PrincipalVoiceSymbol parsePrincipalVoiceSymbol( const std::string& value )
		{
			if ( value == "Hauptstimme" ) { return PrincipalVoiceSymbol::hauptstimme; }
			else if ( value == "Nebenstimme" ) { return PrincipalVoiceSymbol::nebenstimme; }
			else if ( value == "plain" ) { return PrincipalVoiceSymbol::plain; }
			else if ( value == "none" ) { return PrincipalVoiceSymbol::none; }
			return PrincipalVoiceSymbol::hauptstimme;
		}
		std::string toString( const PrincipalVoiceSymbol value )
		{
			switch ( value ) 
			{
				case PrincipalVoiceSymbol::hauptstimme: return "Hauptstimme"; break;
				case PrincipalVoiceSymbol::nebenstimme: return "Nebenstimme"; break;
				case PrincipalVoiceSymbol::plain: return "plain"; break;
				case PrincipalVoiceSymbol::none: return "none"; break;
				default: break;
			}
			return "Hauptstimme";
		}
		std::ostream& toStream( std::ostream& os, const PrincipalVoiceSymbol value )
		{
			return os << toString( value );
		}
		std::ostream& operator<<( std::ostream& os, const PrincipalVoiceSymbol value )
		{
			return toStream( os, value );
		}

		StartStopChangeContinue parseStartStopChangeContinue( const std::string& value )
		{
			if ( value == "start" ) { return StartStopChangeContinue::start; }
			else if ( value == "stop" ) { return StartStopChangeContinue::stop; }
			else if ( value == "change" ) { return StartStopChangeContinue::change; }
			else if ( value == "continue" ) { return StartStopChangeContinue::continue_; }
			return StartStopChangeContinue::start;
		}
		std::string toString( const StartStopChangeContinue value )
		{
			switch ( value ) 
			{
				case StartStopChangeContinue::start: return "start"; break;
				case StartStopChangeContinue::stop: return "stop"; break;
				case StartStopChangeContinue::change: return "change"; break;
				case StartStopChangeContinue::continue_: return "continue"; break;
				default: break;
			}
			return "start";
		}
		std::ostream& toStream( std::ostream& os, const StartStopChangeContinue value )
		{
			return os << toString( value );
		}
		std::ostream& operator<<( std::ostream& os, const StartStopChangeContinue value )
		{
			return toStream( os, value );
		}

		TipDirection parseTipDirection( const std::string& value )
		{
			if ( value == "up" ) { return TipDirection::up; }
			else if ( value == "down" ) { return TipDirection::down; }
			else if ( value == "left" ) { return TipDirection::left; }
			else if ( value == "right" ) { return TipDirection::right; }
			else if ( value == "northwest" ) { return TipDirection::northwest; }
			else if ( value == "northeast" ) { return TipDirection::northeast; }
			else if ( value == "southeast" ) { return TipDirection::southeast; }
			else if ( value == "southwest" ) { return TipDirection::southwest; }
			return TipDirection::up;
		}
		std::string toString( const TipDirection value )
		{
			switch ( value ) 
			{
				case TipDirection::up: return "up"; break;
				case TipDirection::down: return "down"; break;
				case TipDirection::left: return "left"; break;
				case TipDirection::right: return "right"; break;
				case TipDirection::northwest: return "northwest"; break;
				case TipDirection::northeast: return "northeast"; break;
				case TipDirection::southeast: return "southeast"; break;
				case TipDirection::southwest: return "southwest"; break;
				default: break;
			}
			return "up";
		}
		std::ostream& toStream( std::ostream& os, const TipDirection value )
		{
			return os << toString( value );
		}
		std::ostream& operator<<( std::ostream& os, const TipDirection value )
		{
			return toStream( os, value );
		}

		StickLocation parseStickLocation( const std::string& value )
		{
			if ( value == "center" ) { return StickLocation::center; }
			else if ( value == "rim" ) { return StickLocation::rim; }
			else if ( value == "cymbal bell" ) { return StickLocation::cymbalBell; }
			else if ( value == "cymbal edge" ) { return StickLocation::cymbalEdge; }
			return StickLocation::center;
		}
		std::string toString( const StickLocation value )
		{
			switch ( value ) 
			{
				case StickLocation::center: return "center"; break;
				case StickLocation::rim: return "rim"; break;
				case StickLocation::cymbalBell: return "cymbal bell"; break;
				case StickLocation::cymbalEdge: return "cymbal edge"; break;
				default: break;
			}
			return "center";
		}
		std::ostream& toStream( std::ostream& os, const StickLocation value )
		{
			return os << toString( value );
		}
		std::ostream& operator<<( std::ostream& os, const StickLocation value )
		{
			return toStream( os, value );
		}

		StickMaterial parseStickMaterial( const std::string& value )
		{
			if ( value == "soft" ) { return StickMaterial::soft; }
			else if ( value == "medium" ) { return StickMaterial::medium; }
			else if ( value == "hard" ) { return StickMaterial::hard; }
			else if ( value == "shaded" ) { return StickMaterial::shaded; }
			else if ( value == "x" ) { return StickMaterial::x; }
			return StickMaterial::soft;
		}
		std::string toString( const StickMaterial value )
		{
			switch ( value ) 
			{
				case StickMaterial::soft: return "soft"; break;
				case StickMaterial::medium: return "medium"; break;
				case StickMaterial::hard: return "hard"; break;
				case StickMaterial::shaded: return "shaded"; break;
				case StickMaterial::x: return "x"; break;
				default: break;
			}
			return "soft";
		}
		std::ostream& toStream( std::ostream& os, const StickMaterial value )
		{
			return os << toString( value );
		}
		std::ostream& operator<<( std::ostream& os, const StickMaterial value )
		{
			return toStream( os, value );
		}

		StickType parseStickType( const std::string& value )
		{
			if ( value == "bass drum" ) { return StickType::bassDrum; }
			else if ( value == "double bass drum" ) { return StickType::doubleBassDrum; }
			else if ( value == "timpani" ) { return StickType::timpani; }
			else if ( value == "xylophone" ) { return StickType::xylophone; }
			else if ( value == "yarn" ) { return StickType::yarn; }
			return StickType::bassDrum;
		}
		std::string toString( const StickType value )
		{
			switch ( value ) 
			{
				case StickType::bassDrum: return "bass drum"; break;
				case StickType::doubleBassDrum: return "double bass drum"; break;
				case StickType::timpani: return "timpani"; break;
				case StickType::xylophone: return "xylophone"; break;
				case StickType::yarn: return "yarn"; break;
				default: break;
			}
			return "bass drum";
		}
		std::ostream& toStream( std::ostream& os, const StickType value )
		{
			return os << toString( value );
		}
		std::ostream& operator<<( std::ostream& os, const StickType value )
		{
			return toStream( os, value );
		}

		UpDownStopContinue parseUpDownStopContinue( const std::string& value )
		{
			if ( value == "up" ) { return UpDownStopContinue::up; }
			else if ( value == "down" ) { return UpDownStopContinue::down; }
			else if ( value == "stop" ) { return UpDownStopContinue::stop; }
			else if ( value == "continue" ) { return UpDownStopContinue::continue_; }
			return UpDownStopContinue::up;
		}
		std::string toString( const UpDownStopContinue value )
		{
			switch ( value ) 
			{
				case UpDownStopContinue::up: return "up"; break;
				case UpDownStopContinue::down: return "down"; break;
				case UpDownStopContinue::stop: return "stop"; break;
				case UpDownStopContinue::continue_: return "continue"; break;
				default: break;
			}
			return "up";
		}
		std::ostream& toStream( std::ostream& os, const UpDownStopContinue value )
		{
			return os << toString( value );
		}
		std::ostream& operator<<( std::ostream& os, const UpDownStopContinue value )
		{
			return toStream( os, value );
		}

		WedgeType parseWedgeType( const std::string& value )
		{
			if ( value == "crescendo" ) { return WedgeType::crescendo; }
			else if ( value == "diminuendo" ) { return WedgeType::diminuendo; }
			else if ( value == "stop" ) { return WedgeType::stop; }
			else if ( value == "continue" ) { return WedgeType::continue_; }
			return WedgeType::crescendo;
		}
		std::string toString( const WedgeType value )
		{
			switch ( value ) 
			{
				case WedgeType::crescendo: return "crescendo"; break;
				case WedgeType::diminuendo: return "diminuendo"; break;
				case WedgeType::stop: return "stop"; break;
				case WedgeType::continue_: return "continue"; break;
				default: break;
			}
			return "crescendo";
		}
		std::ostream& toStream( std::ostream& os, const WedgeType value )
		{
			return os << toString( value );
		}
		std::ostream& operator<<( std::ostream& os, const WedgeType value )
		{
			return toStream( os, value );
		}

		Wood parseWood( const std::string& value )
		{
			if ( value == "board clapper" ) { return Wood::boardClapper; }
			else if ( value == "cabasa" ) { return Wood::cabasa; }
			else if ( value == "castanets" ) { return Wood::castanets; }
			else if ( value == "claves" ) { return Wood::claves; }
			else if ( value == "guiro" ) { return Wood::guiro; }
			else if ( value == "log drum" ) { return Wood::logDrum; }
			else if ( value == "maraca" ) { return Wood::maraca; }
			else if ( value == "maracas" ) { return Wood::maracas; }
			else if ( value == "ratchet" ) { return Wood::ratchet; }
			else if ( value == "sandpaper blocks" ) { return Wood::sandpaperBlocks; }
			else if ( value == "slit drum" ) { return Wood::slitDrum; }
			else if ( value == "temple block" ) { return Wood::templeBlock; }
			else if ( value == "vibraslap" ) { return Wood::vibraslap; }
			else if ( value == "wood block" ) { return Wood::woodBlock; }
			return Wood::boardClapper;
		}
		std::string toString( const Wood value )
		{
			switch ( value ) 
			{
				case Wood::boardClapper: return "board clapper"; break;
				case Wood::cabasa: return "cabasa"; break;
				case Wood::castanets: return "castanets"; break;
				case Wood::claves: return "claves"; break;
				case Wood::guiro: return "guiro"; break;
				case Wood::logDrum: return "log drum"; break;
				case Wood::maraca: return "maraca"; break;
				case Wood::maracas: return "maracas"; break;
				case Wood::ratchet: return "ratchet"; break;
				case Wood::sandpaperBlocks: return "sandpaper blocks"; break;
				case Wood::slitDrum: return "slit drum"; break;
				case Wood::templeBlock: return "temple block"; break;
				case Wood::vibraslap: return "vibraslap"; break;
				case Wood::woodBlock: return "wood block"; break;
				default: break;
			}
			return "board clapper";
		}
		std::ostream& toStream( std::ostream& os, const Wood value )
		{
			return os << toString( value );
		}
		std::ostream& operator<<( std::ostream& os, const Wood value )
		{
			return toStream( os, value );
		}

		MarginType parseMarginType( const std::string& value )
		{
			if ( value == "odd" ) { return MarginType::odd; }
			else if ( value == "even" ) { return MarginType::even; }
			else if ( value == "both" ) { return MarginType::both; }
			return MarginType::odd;
		}
		std::string toString( const MarginType value )
		{
			switch ( value ) 
			{
				case MarginType::odd: return "odd"; break;
				case MarginType::even: return "even"; break;
				case MarginType::both: return "both"; break;
				default: break;
			}
			return "odd";
		}
		std::ostream& toStream( std::ostream& os, const MarginType value )
		{
			return os << toString( value );
		}
		std::ostream& operator<<( std::ostream& os, const MarginType value )
		{
			return toStream( os, value );
		}

		NoteSizeType parseNoteSizeType( const std::string& value )
		{
			if ( value == "cue" ) { return NoteSizeType::cue; }
			else if ( value == "grace" ) { return NoteSizeType::grace; }
			else if ( value == "large" ) { return NoteSizeType::large; }
			return NoteSizeType::cue;
		}
		std::string toString( const NoteSizeType value )
		{
			switch ( value ) 
			{
				case NoteSizeType::cue: return "cue"; break;
				case NoteSizeType::grace: return "grace"; break;
				case NoteSizeType::large: return "large"; break;
				default: break;
			}
			return "cue";
		}
		std::ostream& toStream( std::ostream& os, const NoteSizeType value )
		{
			return os << toString( value );
		}
		std::ostream& operator<<( std::ostream& os, const NoteSizeType value )
		{
			return toStream( os, value );
		}

		AccidentalValue parseAccidentalValue( const std::string& value )
		{
			if ( value == "sharp" ) { return AccidentalValue::sharp; }
			else if ( value == "natural" ) { return AccidentalValue::natural; }
			else if ( value == "flat" ) { return AccidentalValue::flat; }
			else if ( value == "double-sharp" ) { return AccidentalValue::doubleSharp; }
			else if ( value == "sharp-sharp" ) { return AccidentalValue::sharpSharp; }
			else if ( value == "flat-flat" ) { return AccidentalValue::flatFlat; }
			else if ( value == "natural-sharp" ) { return AccidentalValue::naturalSharp; }
			else if ( value == "natural-flat" ) { return AccidentalValue::naturalFlat; }
			else if ( value == "quarter-flat" ) { return AccidentalValue::quarterFlat; }
			else if ( value == "quarter-sharp" ) { return AccidentalValue::quarterSharp; }
			else if ( value == "three-quarters-flat" ) { return AccidentalValue::threeQuartersFlat; }
			else if ( value == "three-quarters-sharp" ) { return AccidentalValue::threeQuartersSharp; }
			else if ( value == "sharp-down" ) { return AccidentalValue::sharpDown; }
			else if ( value == "sharp-up" ) { return AccidentalValue::sharpUp; }
			else if ( value == "natural-down" ) { return AccidentalValue::naturalDown; }
			else if ( value == "natural-up" ) { return AccidentalValue::naturalUp; }
			else if ( value == "flat-down" ) { return AccidentalValue::flatDown; }
			else if ( value == "flat-up" ) { return AccidentalValue::flatUp; }
			else if ( value == "triple-sharp" ) { return AccidentalValue::tripleSharp; }
			else if ( value == "triple-flat" ) { return AccidentalValue::tripleFlat; }
			else if ( value == "slash-quarter-sharp" ) { return AccidentalValue::slashQuarterSharp; }
			else if ( value == "slash-sharp" ) { return AccidentalValue::slashSharp; }
			else if ( value == "slash-flat" ) { return AccidentalValue::slashFlat; }
			else if ( value == "double-slash-flat" ) { return AccidentalValue::doubleSlashFlat; }
			else if ( value == "sharp-1" ) { return AccidentalValue::sharp1; }
			else if ( value == "sharp-2" ) { return AccidentalValue::sharp2; }
			else if ( value == "sharp-3" ) { return AccidentalValue::sharp3; }
			else if ( value == "sharp-5" ) { return AccidentalValue::sharp5; }
			else if ( value == "flat-1" ) { return AccidentalValue::flat1; }
			else if ( value == "flat-2" ) { return AccidentalValue::flat2; }
			else if ( value == "flat-3" ) { return AccidentalValue::flat3; }
			else if ( value == "flat-4" ) { return AccidentalValue::flat4; }
			else if ( value == "sori" ) { return AccidentalValue::sori; }
			else if ( value == "koron" ) { return AccidentalValue::koron; }
			return AccidentalValue::sharp;
		}
		std::string toString( const AccidentalValue value )
		{
			switch ( value ) 
			{
				case AccidentalValue::sharp: return "sharp"; break;
				case AccidentalValue::natural: return "natural"; break;
				case AccidentalValue::flat: return "flat"; break;
				case AccidentalValue::doubleSharp: return "double-sharp"; break;
				case AccidentalValue::sharpSharp: return "sharp-sharp"; break;
				case AccidentalValue::flatFlat: return "flat-flat"; break;
				case AccidentalValue::naturalSharp: return "natural-sharp"; break;
				case AccidentalValue::naturalFlat: return "natural-flat"; break;
				case AccidentalValue::quarterFlat: return "quarter-flat"; break;
				case AccidentalValue::quarterSharp: return "quarter-sharp"; break;
				case AccidentalValue::threeQuartersFlat: return "three-quarters-flat"; break;
				case AccidentalValue::threeQuartersSharp: return "three-quarters-sharp"; break;
				case AccidentalValue::sharpDown: return "sharp-down"; break;
				case AccidentalValue::sharpUp: return "sharp-up"; break;
				case AccidentalValue::naturalDown: return "natural-down"; break;
				case AccidentalValue::naturalUp: return "natural-up"; break;
				case AccidentalValue::flatDown: return "flat-down"; break;
				case AccidentalValue::flatUp: return "flat-up"; break;
				case AccidentalValue::tripleSharp: return "triple-sharp"; break;
				case AccidentalValue::tripleFlat: return "triple-flat"; break;
				case AccidentalValue::slashQuarterSharp: return "slash-quarter-sharp"; break;
				case AccidentalValue::slashSharp: return "slash-sharp"; break;
				case AccidentalValue::slashFlat: return "slash-flat"; break;
				case AccidentalValue::doubleSlashFlat: return "double-slash-flat"; break;
				case AccidentalValue::sharp1: return "sharp-1"; break;
				case AccidentalValue::sharp2: return "sharp-2"; break;
				case AccidentalValue::sharp3: return "sharp-3"; break;
				case AccidentalValue::sharp5: return "sharp-5"; break;
				case AccidentalValue::flat1: return "flat-1"; break;
				case AccidentalValue::flat2: return "flat-2"; break;
				case AccidentalValue::flat3: return "flat-3"; break;
				case AccidentalValue::flat4: return "flat-4"; break;
				case AccidentalValue::sori: return "sori"; break;
				case AccidentalValue::koron: return "koron"; break;
				default: break;
			}
			return "sharp";
		}
		std::ostream& toStream( std::ostream& os, const AccidentalValue value )
		{
			return os << toString( value );
		}
		std::ostream& operator<<( std::ostream& os, const AccidentalValue value )
		{
			return toStream( os, value );
		}

		ArrowDirection parseArrowDirection( const std::string& value )
		{
			if ( value == "left" ) { return ArrowDirection::left; }
			else if ( value == "up" ) { return ArrowDirection::up; }
			else if ( value == "right" ) { return ArrowDirection::right; }
			else if ( value == "down" ) { return ArrowDirection::down; }
			else if ( value == "northwest" ) { return ArrowDirection::northwest; }
			else if ( value == "northeast" ) { return ArrowDirection::northeast; }
			else if ( value == "southeast" ) { return ArrowDirection::southeast; }
			else if ( value == "southwest" ) { return ArrowDirection::southwest; }
			else if ( value == "left right" ) { return ArrowDirection::leftRight; }
			else if ( value == "up down" ) { return ArrowDirection::upDown; }
			else if ( value == "northwest southeast" ) { return ArrowDirection::northwestSoutheast; }
			else if ( value == "northeast southwest" ) { return ArrowDirection::northeastSouthwest; }
			else if ( value == "other" ) { return ArrowDirection::other; }
			return ArrowDirection::left;
		}
		std::string toString( const ArrowDirection value )
		{
			switch ( value ) 
			{
				case ArrowDirection::left: return "left"; break;
				case ArrowDirection::up: return "up"; break;
				case ArrowDirection::right: return "right"; break;
				case ArrowDirection::down: return "down"; break;
				case ArrowDirection::northwest: return "northwest"; break;
				case ArrowDirection::northeast: return "northeast"; break;
				case ArrowDirection::southeast: return "southeast"; break;
				case ArrowDirection::southwest: return "southwest"; break;
				case ArrowDirection::leftRight: return "left right"; break;
				case ArrowDirection::upDown: return "up down"; break;
				case ArrowDirection::northwestSoutheast: return "northwest southeast"; break;
				case ArrowDirection::northeastSouthwest: return "northeast southwest"; break;
				case ArrowDirection::other: return "other"; break;
				default: break;
			}
			return "left";
		}
		std::ostream& toStream( std::ostream& os, const ArrowDirection value )
		{
			return os << toString( value );
		}
		std::ostream& operator<<( std::ostream& os, const ArrowDirection value )
		{
			return toStream( os, value );
		}

		ArrowStyle parseArrowStyle( const std::string& value )
		{
			if ( value == "single" ) { return ArrowStyle::single; }
			else if ( value == "double" ) { return ArrowStyle::double_; }
			else if ( value == "filled" ) { return ArrowStyle::filled; }
			else if ( value == "hollow" ) { return ArrowStyle::hollow; }
			else if ( value == "paired" ) { return ArrowStyle::paired; }
			else if ( value == "combined" ) { return ArrowStyle::combined; }
			else if ( value == "other" ) { return ArrowStyle::other; }
			return ArrowStyle::single;
		}
		std::string toString( const ArrowStyle value )
		{
			switch ( value ) 
			{
				case ArrowStyle::single: return "single"; break;
				case ArrowStyle::double_: return "double"; break;
				case ArrowStyle::filled: return "filled"; break;
				case ArrowStyle::hollow: return "hollow"; break;
				case ArrowStyle::paired: return "paired"; break;
				case ArrowStyle::combined: return "combined"; break;
				case ArrowStyle::other: return "other"; break;
				default: break;
			}
			return "single";
		}
		std::ostream& toStream( std::ostream& os, const ArrowStyle value )
		{
			return os << toString( value );
		}
		std::ostream& operator<<( std::ostream& os, const ArrowStyle value )
		{
			return toStream( os, value );
		}

		BeamValue parseBeamValue( const std::string& value )
		{
			if ( value == "begin" ) { return BeamValue::begin; }
			else if ( value == "continue" ) { return BeamValue::continue_; }
			else if ( value == "end" ) { return BeamValue::end; }
			else if ( value == "forward hook" ) { return BeamValue::forwardHook; }
			else if ( value == "backward hook" ) { return BeamValue::backwardHook; }
			return BeamValue::begin;
		}
		std::string toString( const BeamValue value )
		{
			switch ( value ) 
			{
				case BeamValue::begin: return "begin"; break;
				case BeamValue::continue_: return "continue"; break;
				case BeamValue::end: return "end"; break;
				case BeamValue::forwardHook: return "forward hook"; break;
				case BeamValue::backwardHook: return "backward hook"; break;
				default: break;
			}
			return "begin";
		}
		std::ostream& toStream( std::ostream& os, const BeamValue value )
		{
			return os << toString( value );
		}
		std::ostream& operator<<( std::ostream& os, const BeamValue value )
		{
			return toStream( os, value );
		}

		BreathMarkValue parseBreathMarkValue( const std::string& value )
		{
			if ( value == "" ) { return BreathMarkValue::emptystring; }
			else if ( value == "comma" ) { return BreathMarkValue::comma; }
			else if ( value == "tick" ) { return BreathMarkValue::tick; }
			return BreathMarkValue::emptystring;
		}
		std::string toString( const BreathMarkValue value )
		{
			switch ( value ) 
			{
				case BreathMarkValue::emptystring: return ""; break;
				case BreathMarkValue::comma: return "comma"; break;
				case BreathMarkValue::tick: return "tick"; break;
				default: break;
			}
			return "";
		}
		std::ostream& toStream( std::ostream& os, const BreathMarkValue value )
		{
			return os << toString( value );
		}
		std::ostream& operator<<( std::ostream& os, const BreathMarkValue value )
		{
			return toStream( os, value );
		}

		CircularArrow parseCircularArrow( const std::string& value )
		{
			if ( value == "clockwise" ) { return CircularArrow::clockwise; }
			else if ( value == "anticlockwise" ) { return CircularArrow::anticlockwise; }
			return CircularArrow::clockwise;
		}
		std::string toString( const CircularArrow value )
		{
			switch ( value ) 
			{
				case CircularArrow::clockwise: return "clockwise"; break;
				case CircularArrow::anticlockwise: return "anticlockwise"; break;
				default: break;
			}
			return "clockwise";
		}
		std::ostream& toStream( std::ostream& os, const CircularArrow value )
		{
			return os << toString( value );
		}
		std::ostream& operator<<( std::ostream& os, const CircularArrow value )
		{
			return toStream( os, value );
		}

		Fan parseFan( const std::string& value )
		{
			if ( value == "accel" ) { return Fan::accel; }
			else if ( value == "rit" ) { return Fan::rit; }
			else if ( value == "none" ) { return Fan::none; }
			return Fan::accel;
		}
		std::string toString( const Fan value )
		{
			switch ( value ) 
			{
				case Fan::accel: return "accel"; break;
				case Fan::rit: return "rit"; break;
				case Fan::none: return "none"; break;
				default: break;
			}
			return "accel";
		}
		std::ostream& toStream( std::ostream& os, const Fan value )
		{
			return os << toString( value );
		}
		std::ostream& operator<<( std::ostream& os, const Fan value )
		{
			return toStream( os, value );
		}

		HandbellValue parseHandbellValue( const std::string& value )
		{
			if ( value == "damp" ) { return HandbellValue::damp; }
			else if ( value == "echo" ) { return HandbellValue::echo; }
			else if ( value == "gyro" ) { return HandbellValue::gyro; }
			else if ( value == "hand martellato" ) { return HandbellValue::handMartellato; }
			else if ( value == "mallet lift" ) { return HandbellValue::malletLift; }
			else if ( value == "mallet table" ) { return HandbellValue::malletTable; }
			else if ( value == "martellato" ) { return HandbellValue::martellato; }
			else if ( value == "martellato lift" ) { return HandbellValue::martellatoLift; }
			else if ( value == "muted martellato" ) { return HandbellValue::mutedMartellato; }
			else if ( value == "pluck lift" ) { return HandbellValue::pluckLift; }
			else if ( value == "swing" ) { return HandbellValue::swing; }
			return HandbellValue::damp;
		}
		std::string toString( const HandbellValue value )
		{
			switch ( value ) 
			{
				case HandbellValue::damp: return "damp"; break;
				case HandbellValue::echo: return "echo"; break;
				case HandbellValue::gyro: return "gyro"; break;
				case HandbellValue::handMartellato: return "hand martellato"; break;
				case HandbellValue::malletLift: return "mallet lift"; break;
				case HandbellValue::malletTable: return "mallet table"; break;
				case HandbellValue::martellato: return "martellato"; break;
				case HandbellValue::martellatoLift: return "martellato lift"; break;
				case HandbellValue::mutedMartellato: return "muted martellato"; break;
				case HandbellValue::pluckLift: return "pluck lift"; break;
				case HandbellValue::swing: return "swing"; break;
				default: break;
			}
			return "damp";
		}
		std::ostream& toStream( std::ostream& os, const HandbellValue value )
		{
			return os << toString( value );
		}
		std::ostream& operator<<( std::ostream& os, const HandbellValue value )
		{
			return toStream( os, value );
		}

		HoleClosedLocation parseHoleClosedLocation( const std::string& value )
		{
			if ( value == "right" ) { return HoleClosedLocation::right; }
			else if ( value == "bottom" ) { return HoleClosedLocation::bottom; }
			else if ( value == "left" ) { return HoleClosedLocation::left; }
			else if ( value == "top" ) { return HoleClosedLocation::top; }
			return HoleClosedLocation::right;
		}
		std::string toString( const HoleClosedLocation value )
		{
			switch ( value ) 
			{
				case HoleClosedLocation::right: return "right"; break;
				case HoleClosedLocation::bottom: return "bottom"; break;
				case HoleClosedLocation::left: return "left"; break;
				case HoleClosedLocation::top: return "top"; break;
				default: break;
			}
			return "right";
		}
		std::ostream& toStream( std::ostream& os, const HoleClosedLocation value )
		{
			return os << toString( value );
		}
		std::ostream& operator<<( std::ostream& os, const HoleClosedLocation value )
		{
			return toStream( os, value );
		}

		HoleClosedValue parseHoleClosedValue( const std::string& value )
		{
			if ( value == "yes" ) { return HoleClosedValue::yes; }
			else if ( value == "no" ) { return HoleClosedValue::no; }
			else if ( value == "half" ) { return HoleClosedValue::half; }
			return HoleClosedValue::yes;
		}
		std::string toString( const HoleClosedValue value )
		{
			switch ( value ) 
			{
				case HoleClosedValue::yes: return "yes"; break;
				case HoleClosedValue::no: return "no"; break;
				case HoleClosedValue::half: return "half"; break;
				default: break;
			}
			return "yes";
		}
		std::ostream& toStream( std::ostream& os, const HoleClosedValue value )
		{
			return os << toString( value );
		}
		std::ostream& operator<<( std::ostream& os, const HoleClosedValue value )
		{
			return toStream( os, value );
		}

		NoteTypeValue parseNoteTypeValue( const std::string& value )
		{
			if ( value == "1024th" ) { return NoteTypeValue::one024Th; }
			else if ( value == "512th" ) { return NoteTypeValue::five12Th; }
			else if ( value == "256th" ) { return NoteTypeValue::two56Th; }
			else if ( value == "128th" ) { return NoteTypeValue::one28Th; }
			else if ( value == "64th" ) { return NoteTypeValue::six4Th; }
			else if ( value == "32nd" ) { return NoteTypeValue::three2Nd; }
			else if ( value == "16th" ) { return NoteTypeValue::one6Th; }
			else if ( value == "eighth" ) { return NoteTypeValue::eighth; }
			else if ( value == "quarter" ) { return NoteTypeValue::quarter; }
			else if ( value == "half" ) { return NoteTypeValue::half; }
			else if ( value == "whole" ) { return NoteTypeValue::whole; }
			else if ( value == "breve" ) { return NoteTypeValue::breve; }
			else if ( value == "long" ) { return NoteTypeValue::long_; }
			else if ( value == "maxima" ) { return NoteTypeValue::maxima; }
			return NoteTypeValue::one024Th;
		}
		std::string toString( const NoteTypeValue value )
		{
			switch ( value ) 
			{
				case NoteTypeValue::one024Th: return "1024th"; break;
				case NoteTypeValue::five12Th: return "512th"; break;
				case NoteTypeValue::two56Th: return "256th"; break;
				case NoteTypeValue::one28Th: return "128th"; break;
				case NoteTypeValue::six4Th: return "64th"; break;
				case NoteTypeValue::three2Nd: return "32nd"; break;
				case NoteTypeValue::one6Th: return "16th"; break;
				case NoteTypeValue::eighth: return "eighth"; break;
				case NoteTypeValue::quarter: return "quarter"; break;
				case NoteTypeValue::half: return "half"; break;
				case NoteTypeValue::whole: return "whole"; break;
				case NoteTypeValue::breve: return "breve"; break;
				case NoteTypeValue::long_: return "long"; break;
				case NoteTypeValue::maxima: return "maxima"; break;
				default: break;
			}
			return "1024th";
		}
		std::ostream& toStream( std::ostream& os, const NoteTypeValue value )
		{
			return os << toString( value );
		}
		std::ostream& operator<<( std::ostream& os, const NoteTypeValue value )
		{
			return toStream( os, value );
		}

		NoteheadValue parseNoteheadValue( const std::string& value )
		{
			if ( value == "slash" ) { return NoteheadValue::slash; }
			else if ( value == "triangle" ) { return NoteheadValue::triangle; }
			else if ( value == "diamond" ) { return NoteheadValue::diamond; }
			else if ( value == "square" ) { return NoteheadValue::square; }
			else if ( value == "cross" ) { return NoteheadValue::cross; }
			else if ( value == "x" ) { return NoteheadValue::x; }
			else if ( value == "circle-x" ) { return NoteheadValue::circleX; }
			else if ( value == "inverted triangle" ) { return NoteheadValue::invertedTriangle; }
			else if ( value == "arrow down" ) { return NoteheadValue::arrowDown; }
			else if ( value == "arrow up" ) { return NoteheadValue::arrowUp; }
			else if ( value == "slashed" ) { return NoteheadValue::slashed; }
			else if ( value == "back slashed" ) { return NoteheadValue::backSlashed; }
			else if ( value == "normal" ) { return NoteheadValue::normal; }
			else if ( value == "cluster" ) { return NoteheadValue::cluster; }
			else if ( value == "circle dot" ) { return NoteheadValue::circleDot; }
			else if ( value == "left triangle" ) { return NoteheadValue::leftTriangle; }
			else if ( value == "rectangle" ) { return NoteheadValue::rectangle; }
			else if ( value == "none" ) { return NoteheadValue::none; }
			else if ( value == "do" ) { return NoteheadValue::do_; }
			else if ( value == "re" ) { return NoteheadValue::re; }
			else if ( value == "mi" ) { return NoteheadValue::mi; }
			else if ( value == "fa" ) { return NoteheadValue::fa; }
			else if ( value == "fa up" ) { return NoteheadValue::faUp; }
			else if ( value == "so" ) { return NoteheadValue::so; }
			else if ( value == "la" ) { return NoteheadValue::la; }
			else if ( value == "ti" ) { return NoteheadValue::ti; }
			return NoteheadValue::slash;
		}
		std::string toString( const NoteheadValue value )
		{
			switch ( value ) 
			{
				case NoteheadValue::slash: return "slash"; break;
				case NoteheadValue::triangle: return "triangle"; break;
				case NoteheadValue::diamond: return "diamond"; break;
				case NoteheadValue::square: return "square"; break;
				case NoteheadValue::cross: return "cross"; break;
				case NoteheadValue::x: return "x"; break;
				case NoteheadValue::circleX: return "circle-x"; break;
				case NoteheadValue::invertedTriangle: return "inverted triangle"; break;
				case NoteheadValue::arrowDown: return "arrow down"; break;
				case NoteheadValue::arrowUp: return "arrow up"; break;
				case NoteheadValue::slashed: return "slashed"; break;
				case NoteheadValue::backSlashed: return "back slashed"; break;
				case NoteheadValue::normal: return "normal"; break;
				case NoteheadValue::cluster: return "cluster"; break;
				case NoteheadValue::circleDot: return "circle dot"; break;
				case NoteheadValue::leftTriangle: return "left triangle"; break;
				case NoteheadValue::rectangle: return "rectangle"; break;
				case NoteheadValue::none: return "none"; break;
				case NoteheadValue::do_: return "do"; break;
				case NoteheadValue::re: return "re"; break;
				case NoteheadValue::mi: return "mi"; break;
				case NoteheadValue::fa: return "fa"; break;
				case NoteheadValue::faUp: return "fa up"; break;
				case NoteheadValue::so: return "so"; break;
				case NoteheadValue::la: return "la"; break;
				case NoteheadValue::ti: return "ti"; break;
				default: break;
			}
			return "slash";
		}
		std::ostream& toStream( std::ostream& os, const NoteheadValue value )
		{
			return os << toString( value );
		}
		std::ostream& operator<<( std::ostream& os, const NoteheadValue value )
		{
			return toStream( os, value );
		}

		ShowTuplet parseShowTuplet( const std::string& value )
		{
			if ( value == "actual" ) { return ShowTuplet::actual; }
			else if ( value == "both" ) { return ShowTuplet::both; }
			else if ( value == "none" ) { return ShowTuplet::none; }
			return ShowTuplet::actual;
		}
		std::string toString( const ShowTuplet value )
		{
			switch ( value ) 
			{
				case ShowTuplet::actual: return "actual"; break;
				case ShowTuplet::both: return "both"; break;
				case ShowTuplet::none: return "none"; break;
				default: break;
			}
			return "actual";
		}
		std::ostream& toStream( std::ostream& os, const ShowTuplet value )
		{
			return os << toString( value );
		}
		std::ostream& operator<<( std::ostream& os, const ShowTuplet value )
		{
			return toStream( os, value );
		}

		StemValue parseStemValue( const std::string& value )
		{
			if ( value == "down" ) { return StemValue::down; }
			else if ( value == "up" ) { return StemValue::up; }
			else if ( value == "double" ) { return StemValue::double_; }
			else if ( value == "none" ) { return StemValue::none; }
			return StemValue::down;
		}
		std::string toString( const StemValue value )
		{
			switch ( value ) 
			{
				case StemValue::down: return "down"; break;
				case StemValue::up: return "up"; break;
				case StemValue::double_: return "double"; break;
				case StemValue::none: return "none"; break;
				default: break;
			}
			return "down";
		}
		std::ostream& toStream( std::ostream& os, const StemValue value )
		{
			return os << toString( value );
		}
		std::ostream& operator<<( std::ostream& os, const StemValue value )
		{
			return toStream( os, value );
		}

		Step parseStep( const std::string& value )
		{
			if ( value == "A" ) { return Step::a; }
			else if ( value == "B" ) { return Step::b; }
			else if ( value == "C" ) { return Step::c; }
			else if ( value == "D" ) { return Step::d; }
			else if ( value == "E" ) { return Step::e; }
			else if ( value == "F" ) { return Step::f; }
			else if ( value == "G" ) { return Step::g; }
			return Step::a;
		}
		std::string toString( const Step value )
		{
			switch ( value ) 
			{
				case Step::a: return "A"; break;
				case Step::b: return "B"; break;
				case Step::c: return "C"; break;
				case Step::d: return "D"; break;
				case Step::e: return "E"; break;
				case Step::f: return "F"; break;
				case Step::g: return "G"; break;
				default: break;
			}
			return "A";
		}
		std::ostream& toStream( std::ostream& os, const Step value )
		{
			return os << toString( value );
		}
		std::ostream& operator<<( std::ostream& os, const Step value )
		{
			return toStream( os, value );
		}

		Syllabic parseSyllabic( const std::string& value )
		{
			if ( value == "single" ) { return Syllabic::single; }
			else if ( value == "begin" ) { return Syllabic::begin; }
			else if ( value == "end" ) { return Syllabic::end; }
			else if ( value == "middle" ) { return Syllabic::middle; }
			return Syllabic::single;
		}
		std::string toString( const Syllabic value )
		{
			switch ( value ) 
			{
				case Syllabic::single: return "single"; break;
				case Syllabic::begin: return "begin"; break;
				case Syllabic::end: return "end"; break;
				case Syllabic::middle: return "middle"; break;
				default: break;
			}
			return "single";
		}
		std::ostream& toStream( std::ostream& os, const Syllabic value )
		{
			return os << toString( value );
		}
		std::ostream& operator<<( std::ostream& os, const Syllabic value )
		{
			return toStream( os, value );
		}

		GroupBarlineValue parseGroupBarlineValue( const std::string& value )
		{
			if ( value == "yes" ) { return GroupBarlineValue::yes; }
			else if ( value == "no" ) { return GroupBarlineValue::no; }
			else if ( value == "Mensurstrich" ) { return GroupBarlineValue::mensurstrich; }
			return GroupBarlineValue::yes;
		}
		std::string toString( const GroupBarlineValue value )
		{
			switch ( value ) 
			{
				case GroupBarlineValue::yes: return "yes"; break;
				case GroupBarlineValue::no: return "no"; break;
				case GroupBarlineValue::mensurstrich: return "Mensurstrich"; break;
				default: break;
			}
			return "yes";
		}
		std::ostream& toStream( std::ostream& os, const GroupBarlineValue value )
		{
			return os << toString( value );
		}
		std::ostream& operator<<( std::ostream& os, const GroupBarlineValue value )
		{
			return toStream( os, value );
		}

		GroupSymbolValue parseGroupSymbolValue( const std::string& value )
		{
			if ( value == "none" ) { return GroupSymbolValue::none; }
			else if ( value == "brace" ) { return GroupSymbolValue::brace; }
			else if ( value == "line" ) { return GroupSymbolValue::line; }
			else if ( value == "bracket" ) { return GroupSymbolValue::bracket; }
			else if ( value == "square" ) { return GroupSymbolValue::square; }
			return GroupSymbolValue::none;
		}
		std::string toString( const GroupSymbolValue value )
		{
			switch ( value ) 
			{
				case GroupSymbolValue::none: return "none"; break;
				case GroupSymbolValue::brace: return "brace"; break;
				case GroupSymbolValue::line: return "line"; break;
				case GroupSymbolValue::bracket: return "bracket"; break;
				case GroupSymbolValue::square: return "square"; break;
				default: break;
			}
			return "none";
		}
		std::ostream& toStream( std::ostream& os, const GroupSymbolValue value )
		{
			return os << toString( value );
		}
		std::ostream& operator<<( std::ostream& os, const GroupSymbolValue value )
		{
			return toStream( os, value );
		}
        
        ModeEnum parseModeEnum( const std::string& value, bool& success  )
		{
            success = true;
			if ( value == "major" ) { return ModeEnum::major; }
			else if ( value == "minor" ) { return ModeEnum::minor; }
			else if ( value == "dorian" ) { return ModeEnum::dorian; }
			else if ( value == "phrygian" ) { return ModeEnum::phrygian; }
			else if ( value == "lydian" ) { return ModeEnum::lydian; }
			else if ( value == "mixolydian" ) { return ModeEnum::mixolydian; }
			else if ( value == "aeolian" ) { return ModeEnum::aeolian; }
			else if ( value == "ionian" ) { return ModeEnum::ionian; }
			else if ( value == "locrian" ) { return ModeEnum::locrian; }
			else if ( value == "none" ) { return ModeEnum::none; }
			else if ( value == "other" ) { success = false; return ModeEnum::other; }
            success = false;
			return ModeEnum::other;
		}
        ModeEnum parseModeEnum( const std::string& value )
		{
			bool temp;
			return parseModeEnum( value, temp );
		}
		std::string toString( const ModeEnum value )
		{
			switch ( value )
			{
				case ModeEnum::major: return "major"; break;
				case ModeEnum::minor: return "minor"; break;
				case ModeEnum::dorian: return "dorian"; break;
				case ModeEnum::phrygian: return "phrygian"; break;
				case ModeEnum::lydian: return "lydian"; break;
				case ModeEnum::mixolydian: return "mixolydian"; break;
				case ModeEnum::aeolian: return "aeolian"; break;
				case ModeEnum::ionian: return "ionian"; break;
				case ModeEnum::locrian: return "locrian"; break;
				case ModeEnum::none: return "none"; break;
				case ModeEnum::other: return "other"; break;
				default: break;
			}
			return "other";
		}
		std::ostream& toStream( std::ostream& os, const ModeEnum value )
		{
			return os << toString( value );
		}
		std::ostream& operator<<( std::ostream& os, const ModeEnum value )
		{
			return toStream( os, value );
		}

        Mode::Mode( const ModeEnum value )
        :myModeEnum( value )
        ,myCustomValue( "" )
        {
            setValue( value );
        }
        Mode::Mode( const std::string& value )
        :myModeEnum( ModeEnum::other )
        ,myCustomValue( value )
        {
            setValue( value );
        }
        Mode::Mode()
        :myModeEnum( ModeEnum::major )
        ,myCustomValue( "" )
        {
            setValue( ModeEnum::major );
        }
        ModeEnum Mode::getValue() const
        {
            return myModeEnum;
        }
        std::string Mode::getValueString() const
        {
            if ( myModeEnum != ModeEnum::other )
            {
                return toString( myModeEnum );
            }
            else
            {
                return myCustomValue;
            }
        }
        void Mode::setValue( const ModeEnum value )
        {
            myModeEnum = value;
        }
        void Mode::setValue( const std::string& value )
        {
            bool found = false;
            ModeEnum temp = parseModeEnum( value, found );
            if ( found )
            {
                myModeEnum = temp;
            }
            else
            {
                setValue( ModeEnum::other );
                myCustomValue = value;
            }
        }
        std::string toString( const Mode& value )
        {
            return value.getValueString();
        }
        std::ostream& toStream( std::ostream& os, const Mode& value )
        {
            return os << value.getValueString();
        }
        std::ostream& operator<<( std::ostream& os, const Mode& value )
        {
            return toStream( os, value );
        }
	} // namespace types

} // namespace mx
