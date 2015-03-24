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
        :type( types::StartStop::start )
        ,slashes( 1 )
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
                // streamAttribute( os, slash, "slash", hasSlash );
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
			mySlashType->toStream( os, indentLevel+1 );
			
            for ( auto x : mySlashDotSet )
            {
                if ( x )
                {
                    os << std::endl;
                    x->toStream( os, indentLevel+1 );
                }
            }
            os << std::endl;
            return os;
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
        
        
        
        /**************** SlashAttributes ****************/
        /* 2839 */
        SlashAttributes::SlashAttributes()
        :type( types::StartStop::start )
        ,useDots( types::YesNo::no )
        ,useStems( types::YesNo::no )
        ,hasType( true )
        ,hasUseDots( false )
        ,hasUseStems( false )
        {}
        
        bool SlashAttributes::hasValues() const
        {
            return hasType ||
            hasUseDots ||
            hasUseStems;
        }
        
        std::ostream& SlashAttributes::toStream( std::ostream& os ) const
        {
            if ( hasValues() )
            {
                streamAttribute( os, type, "type", hasType );
                streamAttribute( os, useDots, "use-dots", hasUseDots );
                streamAttribute( os, useStems, "use-stems", hasUseStems );
            }
            return os;
        }
        
		Slash::Slash()
		:myAttributes( std::make_shared<SlashAttributes>() )
		,mySlashType( makeSlashType() )
		,mySlashDotSet()
		{}
		bool Slash::hasAttributes() const
		{
			return myAttributes->hasValues();
		}
		std::ostream& Slash::streamAttributes( std::ostream& os ) const
		{
			return myAttributes->toStream( os );
			return os;
		}
		std::ostream& Slash::streamName( std::ostream& os ) const
		{
			os << "slash";
			return os;
		}
		bool Slash::hasContents() const
		{
			return true;
		}
		std::ostream& Slash::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
		{
			isOneLineOnly = false;
			os << std::endl;
			mySlashType->toStream( os, indentLevel+1 );
			
            for ( auto x : mySlashDotSet )
            {
                if ( x )
                {
                    os << std::endl;
                    x->toStream( os, indentLevel+1 );
                }
            }
            os << std::endl;
            return os;
		}
		SlashAttributesPtr Slash::getAttributes() const
		{
			return myAttributes;
		}
		void Slash::setAttributes( const SlashAttributesPtr& value )
		{
			if ( value )
			{
				myAttributes = value;
			}
		}
		/* _________ SlashType minOccurs = 1, maxOccurs = 1 _________ */
		SlashTypePtr Slash::getSlashType() const
		{
			return mySlashType;
		}
		void Slash::setSlashType( const SlashTypePtr& value )
		{
			if( value )
			{
				mySlashType = value;
			}
		}
		/* _________ SlashDot minOccurs = 0, maxOccurs = unbounded _________ */
		const SlashDotSet& Slash::getSlashDotSet() const
		{
			return mySlashDotSet;
		}
		void Slash::removeSlashDot( const SlashDotSetIterConst& value )
		{
			if ( value != mySlashDotSet.cend() )
			{
				mySlashDotSet.erase( value );
			}
		}
		void Slash::addSlashDot( const SlashDotPtr& value )
		{
			if ( value )
			{
				mySlashDotSet.push_back( value );
			}
		}
		void Slash::clearSlashDotSet()
		{
			mySlashDotSet.clear();
		}
        
        
        /**************** StaffTuningAttributes ****************/
        /* 2908 */
        StaffTuningAttributes::StaffTuningAttributes()
        :line()
        ,hasLine( false )
        {}
        
        bool StaffTuningAttributes::hasValues() const
        {
            return hasLine;
        }
        
        std::ostream& StaffTuningAttributes::toStream( std::ostream& os ) const
        {
            if ( hasValues() )
            {
                streamAttribute( os, line, "line", hasLine );
            }
            return os;
        }
        
		StaffTuning::StaffTuning()
		:myAttributes( std::make_shared<StaffTuningAttributes>() )
		,myTuningStep( makeTuningStep() )
		,myTuningAlter( makeTuningAlter() )
		,myHasTuningAlter( false )
		,myTuningOctave( makeTuningOctave() )
		{}
		bool StaffTuning::hasAttributes() const
		{
			return myAttributes->hasValues();
		}
		std::ostream& StaffTuning::streamAttributes( std::ostream& os ) const
		{
			return myAttributes->toStream( os );
			return os;
		}
		std::ostream& StaffTuning::streamName( std::ostream& os ) const
		{
			os << "staff-tuning";
			return os;
		}
		bool StaffTuning::hasContents() const
		{
			return true;
		}
		std::ostream& StaffTuning::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
		{
			isOneLineOnly = false;
			os << std::endl;
			myTuningStep->toStream( os, indentLevel+1 );
            if ( myHasTuningAlter )
            {
                os << std::endl;
                myTuningAlter->toStream( os, indentLevel+1 );
            }
            os << std::endl;
			myTuningOctave->toStream( os, indentLevel+1 );
            os << std::endl;
            return os;
		}
		StaffTuningAttributesPtr StaffTuning::getAttributes() const
		{
			return myAttributes;
		}
		void StaffTuning::setAttributes( const StaffTuningAttributesPtr& value )
		{
			if ( value )
			{
				myAttributes = value;
			}
		}
		/* _________ TuningStep minOccurs = 1, maxOccurs = 1 _________ */
		TuningStepPtr StaffTuning::getTuningStep() const
		{
			return myTuningStep;
		}
		void StaffTuning::setTuningStep( const TuningStepPtr& value )
		{
			if( value )
			{
				myTuningStep = value;
			}
		}
		/* _________ TuningAlter minOccurs = 0, maxOccurs = 1 _________ */
		TuningAlterPtr StaffTuning::getTuningAlter() const
		{
			return myTuningAlter;
		}
		void StaffTuning::setTuningAlter( const TuningAlterPtr& value )
		{
			if( value )
			{
				myTuningAlter = value;
			}
		}
		bool StaffTuning::getHasTuningAlter() const
		{
			return myHasTuningAlter;
		}
		void StaffTuning::setHasTuningAlter( const bool value )
		{
			myHasTuningAlter = value;
		}
		/* _________ TuningOctave minOccurs = 1, maxOccurs = 1 _________ */
		TuningOctavePtr StaffTuning::getTuningOctave() const
		{
			return myTuningOctave;
		}
		void StaffTuning::setTuningOctave( const TuningOctavePtr& value )
		{
			if( value )
			{
				myTuningOctave = value;
			}
		}

    }
}