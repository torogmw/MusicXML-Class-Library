#include "ElementsNew.h"

namespace mx
{
    namespace e
    {
        /**************** ClefAttributes ****************/
        /* 2646 */
        ClefAttributes::ClefAttributes()
        :number()
        ,additional( types::YesNo::no )
        ,size()
        ,afterBarline( types::YesNo::no )
        ,defaultX()
        ,defaultY()
        ,relativeX()
        ,relativeY()
        ,fontFamily()
        ,fontStyle( types::FontStyle::normal )
        ,fontSize( types::CssFontSize::medium )
        ,fontWeight( types::FontWeight::normal )
        ,printObject( types::YesNo::no )
        ,hasNumber( false )
        ,hasAdditional( false )
        ,hasSize( false )
        ,hasAfterBarline( false )
        ,hasDefaultX( false )
        ,hasDefaultY( false )
        ,hasRelativeX( false )
        ,hasRelativeY( false )
        ,hasFontFamily( false )
        ,hasFontStyle( false )
        ,hasFontSize( false )
        ,hasFontWeight( false )
        ,hasPrintObject( false )
        {}
        
        bool ClefAttributes::hasValues() const
        {
            return hasNumber ||
            hasAdditional ||
            hasSize ||
            hasAfterBarline ||
            hasDefaultX ||
            hasDefaultY ||
            hasRelativeX ||
            hasRelativeY ||
            hasFontFamily ||
            hasFontStyle ||
            hasFontSize ||
            hasFontWeight ||
            hasPrintObject;
        }
        
        std::ostream& ClefAttributes::toStream( std::ostream& os ) const
        {
            if ( hasValues() )
            {
                streamAttribute( os, number, "number", hasNumber );
                streamAttribute( os, additional, "additional", hasAdditional );
                streamAttribute( os, size, "size", hasSize );
                streamAttribute( os, afterBarline, "after-barline", hasAfterBarline );
                streamAttribute( os, defaultX, "default-x", hasDefaultX );
                streamAttribute( os, defaultY, "default-y", hasDefaultY );
                streamAttribute( os, relativeX, "relative-x", hasRelativeX );
                streamAttribute( os, relativeY, "relative-y", hasRelativeY );
                streamAttribute( os, fontFamily, "font-family", hasFontFamily );
                streamAttribute( os, fontStyle, "font-style", hasFontStyle );
                streamAttribute( os, fontSize, "font-size", hasFontSize );
                streamAttribute( os, fontWeight, "font-weight", hasFontWeight );
                streamAttribute( os, printObject, "print-object", hasPrintObject );
            }
            return os;
        }
        
		Clef::Clef()
		:myAttributes( std::make_shared<ClefAttributes>() )
		,mySign( makeSign() )
		,myLine( makeLine() )
		,myHasLine( false )
		,myClefOctaveChange( makeClefOctaveChange() )
		,myHasClefOctaveChange( false )
		{}
		bool Clef::hasAttributes() const
		{
			return myAttributes->hasValues();
		}
		std::ostream& Clef::streamAttributes( std::ostream& os ) const
		{
			return myAttributes->toStream( os );
			return os;
		}
		std::ostream& Clef::streamName( std::ostream& os ) const
		{
			os << "clef";
			return os;
		}
		bool Clef::hasContents() const
		{
			throw std::runtime_error{ "not implemented" };
		}
		std::ostream& Clef::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
		{
			throw std::runtime_error{ "not implemented" };
            // myMember1->streamContents( os, indentLevel+1, isOneLineOnly );
		}
		ClefAttributesPtr Clef::getAttributes() const
		{
			return myAttributes;
		}
		void Clef::setAttributes( const ClefAttributesPtr& value )
		{
			if ( value )
			{
				myAttributes = value;
			}
		}
		/* _________ Sign minOccurs = 1, maxOccurs = 1 _________ */
		SignPtr Clef::getSign() const
		{
			return mySign;
		}
		void Clef::setSign( const SignPtr& value )
		{
			if( value )
			{
				mySign = value;
			}
		}
		/* _________ Line minOccurs = 0, maxOccurs = 1 _________ */
		LinePtr Clef::getLine() const
		{
			return myLine;
		}
		void Clef::setLine( const LinePtr& value )
		{
			if( value )
			{
				myLine = value;
			}
		}
		bool Clef::getHasLine() const
		{
			return myHasLine;
		}
		void Clef::setHasLine( const bool value )
		{
			myHasLine = value;
		}
		/* _________ ClefOctaveChange minOccurs = 0, maxOccurs = 1 _________ */
		ClefOctaveChangePtr Clef::getClefOctaveChange() const
		{
			return myClefOctaveChange;
		}
		void Clef::setClefOctaveChange( const ClefOctaveChangePtr& value )
		{
			if( value )
			{
				myClefOctaveChange = value;
			}
		}
		bool Clef::getHasClefOctaveChange() const
		{
			return myHasClefOctaveChange;
		}
		void Clef::setHasClefOctaveChange( const bool value )
		{
			myHasClefOctaveChange = value;
		}
    }
}