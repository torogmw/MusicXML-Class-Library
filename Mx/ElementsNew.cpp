#include "ElementsNew.h"

namespace mx
{
    namespace e
    {
        
        
        /**************** TransposeAttributes ****************/
        /* 2660 */
        TransposeAttributes::TransposeAttributes()
        :number()
        ,hasNumber( false )
        {}
        
        bool TransposeAttributes::hasValues() const
        {
            return hasNumber;
        }
        
        std::ostream& TransposeAttributes::toStream( std::ostream& os ) const
        {
            if ( hasValues() )
            {
                streamAttribute( os, number, "number", hasNumber );
            }
            return os;
        }
        
		Transpose::Transpose()
		:myAttributes( std::make_shared<TransposeAttributes>() )
		,myDiatonic( makeDiatonic() )
		,myHasDiatonic( false )
		,myChromatic( makeChromatic() )
		,myOctaveChange( makeOctaveChange() )
		,myHasOctaveChange( false )
		,myDouble( makeDouble() )
		,myHasDouble( false )
		{}
		bool Transpose::hasAttributes() const
		{
			return myAttributes->hasValues();
		}
		std::ostream& Transpose::streamAttributes( std::ostream& os ) const
		{
			return myAttributes->toStream( os );
			return os;
		}
		std::ostream& Transpose::streamName( std::ostream& os ) const
		{
			os << "transpose";
			return os;
		}
		bool Transpose::hasContents() const
		{
			return true;
		}
		std::ostream& Transpose::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
		{
			isOneLineOnly = false;
            if( myHasDiatonic )
            {
                os << std::endl;
                myDiatonic->toStream( os, indentLevel+1 );
            }
            os << std::endl;
            myChromatic->toStream( os, indentLevel+1 );
            if( myHasOctaveChange )
            {
                os << std::endl;
                myOctaveChange->toStream( os, indentLevel+1 );
            }
            if( myHasDiatonic )
            {
                os << std::endl;
                myDouble->toStream( os, indentLevel+1 );
            }
            os << std::endl;
            return os;
		}
		TransposeAttributesPtr Transpose::getAttributes() const
		{
			return myAttributes;
		}
		void Transpose::setAttributes( const TransposeAttributesPtr& value )
		{
			if ( value )
			{
				myAttributes = value;
			}
		}
		/* _________ Diatonic minOccurs = 0, maxOccurs = 1 _________ */
		DiatonicPtr Transpose::getDiatonic() const
		{
			return myDiatonic;
		}
		void Transpose::setDiatonic( const DiatonicPtr& value )
		{
			if( value )
			{
				myDiatonic = value;
			}
		}
		bool Transpose::getHasDiatonic() const
		{
			return myHasDiatonic;
		}
		void Transpose::setHasDiatonic( const bool value )
		{
			myHasDiatonic = value;
		}
		/* _________ Chromatic minOccurs = 1, maxOccurs = 1 _________ */
		ChromaticPtr Transpose::getChromatic() const
		{
			return myChromatic;
		}
		void Transpose::setChromatic( const ChromaticPtr& value )
		{
			if( value )
			{
				myChromatic = value;
			}
		}
		/* _________ OctaveChange minOccurs = 0, maxOccurs = 1 _________ */
		OctaveChangePtr Transpose::getOctaveChange() const
		{
			return myOctaveChange;
		}
		void Transpose::setOctaveChange( const OctaveChangePtr& value )
		{
			if( value )
			{
				myOctaveChange = value;
			}
		}
		bool Transpose::getHasOctaveChange() const
		{
			return myHasOctaveChange;
		}
		void Transpose::setHasOctaveChange( const bool value )
		{
			myHasOctaveChange = value;
		}
		/* _________ Double minOccurs = 0, maxOccurs = 1 _________ */
		DoublePtr Transpose::getDouble() const
		{
			return myDouble;
		}
		void Transpose::setDouble( const DoublePtr& value )
		{
			if( value )
			{
				myDouble = value;
			}
		}
		bool Transpose::getHasDouble() const
		{
			return myHasDouble;
		}
		void Transpose::setHasDouble( const bool value )
		{
			myHasDouble = value;
		}
        /**************** DirectiveAttributes ****************/
        /* 2667 */
        DirectiveAttributes::DirectiveAttributes()
        :defaultX()
        ,defaultY()
        ,relativeX()
        ,relativeY()
        ,fontFamily()
        ,fontStyle( types::FontStyle::normal )
        ,fontSize( types::CssFontSize::medium )
        ,fontWeight( types::FontWeight::normal )
        ,lang( "it" )
        ,hasDefaultX( false )
        ,hasDefaultY( false )
        ,hasRelativeX( false )
        ,hasRelativeY( false )
        ,hasFontFamily( false )
        ,hasFontStyle( false )
        ,hasFontSize( false )
        ,hasFontWeight( false )
        ,hasLang( false )
        {}
        
        bool DirectiveAttributes::hasValues() const
        {
            return hasDefaultX ||
            hasDefaultY ||
            hasRelativeX ||
            hasRelativeY ||
            hasFontFamily ||
            hasFontStyle ||
            hasFontSize ||
            hasFontWeight ||
            hasLang;
        }
        
        std::ostream& DirectiveAttributes::toStream( std::ostream& os ) const
        {
            if ( hasValues() )
            {
                streamAttribute( os, defaultX, "default-x", hasDefaultX );
                streamAttribute( os, defaultY, "default-y", hasDefaultY );
                streamAttribute( os, relativeX, "relative-x", hasRelativeX );
                streamAttribute( os, relativeY, "relative-y", hasRelativeY );
                streamAttribute( os, fontFamily, "font-family", hasFontFamily );
                streamAttribute( os, fontStyle, "font-style", hasFontStyle );
                streamAttribute( os, fontSize, "font-size", hasFontSize );
                streamAttribute( os, fontWeight, "font-weight", hasFontWeight );
                streamAttribute( os, lang, "lang", hasLang );
            }
            return os;
        }
        
		Directive::Directive()
		:myAttributes( std::make_shared<DirectiveAttributes>() )
        ,myValue()
		{}
        Directive::Directive( const types::XsString& value )
		:myAttributes( std::make_shared<DirectiveAttributes>() )
        ,myValue( value )
		{}
		bool Directive::hasAttributes() const
		{
			return myAttributes->hasValues();
		}
		std::ostream& Directive::streamAttributes( std::ostream& os ) const
		{
			return myAttributes->toStream( os );
			return os;
		}
		std::ostream& Directive::streamName( std::ostream& os ) const
		{
			os << "directive";
			return os;
		}
		bool Directive::hasContents() const
		{
			return true;
		}
		std::ostream& Directive::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
		{
			isOneLineOnly = true;
            types::toStream( os, myValue );
            return os;
		}
		DirectiveAttributesPtr Directive::getAttributes() const
		{
			return myAttributes;
		}
		void Directive::setAttributes( const DirectiveAttributesPtr& value )
		{
			if ( value )
			{
				myAttributes = value;
			}
		}
        types::XsString Directive::getValue() const
        {
            return myValue;
        }
        void Directive::setValue( const types::XsString& value )
        {
            myValue = value;
        }
        /**************** BeatRepeatAttributes ****************/
        /* 2836 */
        BeatRepeatAttributes::BeatRepeatAttributes()
        :slash( types::YesNo::no )
        ,type()
        ,slashes()
        ,useDots( types::YesNo::no )
        ,hasSlash( false )
        ,hasType( true )
        ,hasSlashes( false )
        ,hasUseDots( false )
        {}
        
        bool BeatRepeatAttributes::hasValues() const
        {
            return hasSlash ||
            hasType ||
            hasSlashes ||
            hasUseDots;
        }
        
        std::ostream& BeatRepeatAttributes::toStream( std::ostream& os ) const
        {
            if ( hasValues() )
            {
                streamAttribute( os, slash, "slash", hasSlash );
                streamAttribute( os, type, "type", hasType );
                streamAttribute( os, slashes, "slashes", hasSlashes );
                streamAttribute( os, useDots, "use-dots", hasUseDots );
            }
            return os;
        }
        
		BeatRepeat::BeatRepeat()
		:myAttributes( std::make_shared<BeatRepeatAttributes>() )
		,mySlashType( makeSlashType() )
		,mySlashDotSet()
		{}
		bool BeatRepeat::hasAttributes() const
		{
			return myAttributes->hasValues();
		}
		std::ostream& BeatRepeat::streamAttributes( std::ostream& os ) const
		{
			return myAttributes->toStream( os );
			return os;
		}
		std::ostream& BeatRepeat::streamName( std::ostream& os ) const
		{
			os << "beat-repeat";
			return os;
		}
		bool BeatRepeat::hasContents() const
		{
			return true;
		}
		std::ostream& BeatRepeat::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
		{
			isOneLineOnly = false;
			os << std::endl;
			// mySign->toStream( os, indentLevel+1 );
			throw std::runtime_error{ "not implemented" };
		}
		BeatRepeatAttributesPtr BeatRepeat::getAttributes() const
		{
			return myAttributes;
		}
		void BeatRepeat::setAttributes( const BeatRepeatAttributesPtr& value )
		{
			if ( value )
			{
				myAttributes = value;
			}
		}
		/* _________ SlashType minOccurs = 1, maxOccurs = 1 _________ */
		SlashTypePtr BeatRepeat::getSlashType() const
		{
			return mySlashType;
		}
		void BeatRepeat::setSlashType( const SlashTypePtr& value )
		{
			if( value )
			{
				mySlashType = value;
			}
		}
		/* _________ SlashDot minOccurs = 0, maxOccurs = unbounded _________ */
		const SlashDotSet& BeatRepeat::getSlashDotSet() const
		{
			return mySlashDotSet;
		}
		void BeatRepeat::removeSlashDot( const SlashDotSetIterConst& value )
		{
			if ( value != mySlashDotSet.cend() )
			{
				mySlashDotSet.erase( value );
			}
		}
		void BeatRepeat::addSlashDot( const SlashDotPtr& value )
		{
			if ( value )
			{
				mySlashDotSet.push_back( value );
			}
		}
		void BeatRepeat::clearSlashDotSet()
		{
			mySlashDotSet.clear();
		}
    }
}