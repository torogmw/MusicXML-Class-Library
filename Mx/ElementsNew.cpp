#include "ElementsNew.h"

namespace mx
{
    namespace e
    {
        
        
        /**************** StaffDetailsAttributes ****************/
        /* 2653 */
        StaffDetailsAttributes::StaffDetailsAttributes()
        :number()
        ,showFrets( types::ShowFrets::numbers )
        ,printObject( types::YesNo::no )
        ,printSpacing( types::YesNo::no )
        ,hasNumber( false )
        ,hasShowFrets( false )
        ,hasPrintObject( false )
        ,hasPrintSpacing( false )
        {}
        
        bool StaffDetailsAttributes::hasValues() const
        {
            return hasNumber ||
            hasShowFrets ||
            hasPrintObject ||
            hasPrintSpacing;
        }
        
        std::ostream& StaffDetailsAttributes::toStream( std::ostream& os ) const
        {
            if ( hasValues() )
            {
                streamAttribute( os, number, "number", hasNumber );
                streamAttribute( os, showFrets, "show-frets", hasShowFrets );
                streamAttribute( os, printObject, "print-object", hasPrintObject );
                streamAttribute( os, printSpacing, "print-spacing", hasPrintSpacing );
            }
            return os;
        }
        
		StaffDetails::StaffDetails()
		:myAttributes( std::make_shared<StaffDetailsAttributes>() )
		,myStaffType( makeStaffType() )
		,myHasStaffType( false )
		,myStaffLines( makeStaffLines( types::NonNegativeInteger( 5 ) ) )
		,myHasStaffLines( false )
		,myStaffTuningSet()
		,myCapo( makeCapo() )
		,myHasCapo( false )
		,myStaffSize( makeStaffSize() )
		,myHasStaffSize( false )
		{}
		bool StaffDetails::hasAttributes() const
		{
			return myAttributes->hasValues();
		}
		std::ostream& StaffDetails::streamAttributes( std::ostream& os ) const
		{
			return myAttributes->toStream( os );
			return os;
		}
		std::ostream& StaffDetails::streamName( std::ostream& os ) const
		{
			os << "staff-details";
			return os;
		}
		bool StaffDetails::hasContents() const
		{
			return myHasStaffType
            || myHasStaffLines
            || myStaffTuningSet.size() > 0
            || myHasCapo
            || myHasStaffSize;
		}
		std::ostream& StaffDetails::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
		{
			isOneLineOnly = !(   myHasStaffType
                             || myHasStaffLines
                             || myStaffTuningSet.size() > 0
                             || myHasCapo
                             || myHasStaffSize);
            if ( myHasStaffType )
            {
                os << std::endl;
                myStaffType->toStream( os, indentLevel+1 );
            }
            if ( myHasStaffLines )
            {
                os << std::endl;
                myStaffLines->toStream( os, indentLevel+1 );
            }
            for ( auto x : myStaffTuningSet )
            {
                os << std::endl;
                x->toStream( os, indentLevel+1 );
            }
            if ( myHasCapo )
            {
                os << std::endl;
                myCapo->toStream( os, indentLevel+1 );
            }
            if ( myHasStaffSize )
            {
                os << std::endl;
                myStaffSize->toStream( os, indentLevel+1 );
            }
            if( hasContents() )
            {
                os << std::endl;
            }
            return os;
		}
		StaffDetailsAttributesPtr StaffDetails::getAttributes() const
		{
			return myAttributes;
		}
		void StaffDetails::setAttributes( const StaffDetailsAttributesPtr& value )
		{
			if ( value )
			{
				myAttributes = value;
			}
		}
		/* _________ StaffType minOccurs = 0, maxOccurs = 1 _________ */
		StaffTypePtr StaffDetails::getStaffType() const
		{
			return myStaffType;
		}
		void StaffDetails::setStaffType( const StaffTypePtr& value )
		{
			if( value )
			{
				myStaffType = value;
			}
		}
		bool StaffDetails::getHasStaffType() const
		{
			return myHasStaffType;
		}
		void StaffDetails::setHasStaffType( const bool value )
		{
			myHasStaffType = value;
		}
		/* _________ StaffLines minOccurs = 0, maxOccurs = 1 _________ */
		StaffLinesPtr StaffDetails::getStaffLines() const
		{
			return myStaffLines;
		}
		void StaffDetails::setStaffLines( const StaffLinesPtr& value )
		{
			if( value )
			{
				myStaffLines = value;
			}
		}
		bool StaffDetails::getHasStaffLines() const
		{
			return myHasStaffLines;
		}
		void StaffDetails::setHasStaffLines( const bool value )
		{
			myHasStaffLines = value;
		}
		/* _________ StaffTuning minOccurs = 0, maxOccurs = unbounded _________ */
		const StaffTuningSet& StaffDetails::getStaffTuningSet() const
		{
			return myStaffTuningSet;
		}
		void StaffDetails::removeStaffTuning( const StaffTuningSetIterConst& value )
		{
			if ( value != myStaffTuningSet.cend() )
			{
				myStaffTuningSet.erase( value );
			}
		}
		void StaffDetails::addStaffTuning( const StaffTuningPtr& value )
		{
			if ( value )
			{
				myStaffTuningSet.push_back( value );
			}
		}
		void StaffDetails::clearStaffTuningSet()
		{
			myStaffTuningSet.clear();
		}
		/* _________ Capo minOccurs = 0, maxOccurs = 1 _________ */
		CapoPtr StaffDetails::getCapo() const
		{
			return myCapo;
		}
		void StaffDetails::setCapo( const CapoPtr& value )
		{
			if( value )
			{
				myCapo = value;
			}
		}
		bool StaffDetails::getHasCapo() const
		{
			return myHasCapo;
		}
		void StaffDetails::setHasCapo( const bool value )
		{
			myHasCapo = value;
		}
		/* _________ StaffSize minOccurs = 0, maxOccurs = 1 _________ */
		StaffSizePtr StaffDetails::getStaffSize() const
		{
			return myStaffSize;
		}
		void StaffDetails::setStaffSize( const StaffSizePtr& value )
		{
			if( value )
			{
				myStaffSize = value;
			}
		}
		bool StaffDetails::getHasStaffSize() const
		{
			return myHasStaffSize;
		}
		void StaffDetails::setHasStaffSize( const bool value )
		{
			myHasStaffSize = value;
		}
        MeasureStyleChoice::MeasureStyleChoice()
        :myChoice( MeasureStyleChoice::Choice::multipleRest )
        ,myMultipleRest( makeMultipleRest() )
        ,myMeasureRepeat( makeMeasureRepeat() )
        ,myBeatRepeat( makeBeatRepeat() )
        ,mySlash( makeSlash() )
        {}
        bool MeasureStyleChoice::hasAttributes() const
        {
            return false;
        }
        std::ostream& MeasureStyleChoice::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& MeasureStyleChoice::streamName( std::ostream& os ) const
        {
            return os;
        }
        bool MeasureStyleChoice::hasContents() const
        {
            return true;
        }
        std::ostream& MeasureStyleChoice::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
        {
            switch ( myChoice )
            {
                case Choice::multipleRest:
                    myMultipleRest->toStream( os, indentLevel+1 );
                    break;
                case Choice::measureRepeat:
                    myMeasureRepeat->toStream( os, indentLevel+1 );
                    break;
                    
                case Choice::beatRepeat:
                    myBeatRepeat->toStream( os, indentLevel+1 );
                    break;
                    
                case Choice::slash:
                    mySlash->toStream( os, indentLevel+1 );
                    break;
                default:
                    break;
            }
            return os;
        }
        MeasureStyleChoice::Choice MeasureStyleChoice::getChoice() const
        {
            return myChoice;
        }
        void MeasureStyleChoice::setChoice( const Choice value )
        {
            myChoice = value;
        }
        MultipleRestPtr MeasureStyleChoice::getMultipleRest() const
        {
            return myMultipleRest;
        }
        void MeasureStyleChoice::setMultipleRest( const MultipleRestPtr& value )
        {
            if ( value )
            {
                myMultipleRest = value;
            }
        }
        MeasureRepeatPtr MeasureStyleChoice::getMeasureRepeat() const
        {
            return myMeasureRepeat;
        }
        void MeasureStyleChoice::setMeasureRepeat( const MeasureRepeatPtr& value )
        {
            if ( value )
            {
                myMeasureRepeat = value;
            }
        }
        BeatRepeatPtr MeasureStyleChoice::getBeatRepeat() const
        {
            return myBeatRepeat;
        }
        void MeasureStyleChoice::setBeatRepeat( const BeatRepeatPtr& value )
        {
            if ( value )
            {
                myBeatRepeat = value;
            }
        }
        SlashPtr MeasureStyleChoice::getSlash() const
        {
            return mySlash;
        }
        void MeasureStyleChoice::setSlash( const SlashPtr& value )
        {
            if ( value )
            {
                mySlash = value;
            }
        }
        /**************** MeasureStyleAttributes ****************/
        /* 2681 */
        MeasureStyleAttributes::MeasureStyleAttributes()
        :number()
        ,fontFamily()
        ,fontStyle( types::FontStyle::normal )
        ,fontSize( types::CssFontSize::medium )
        ,fontWeight( types::FontWeight::normal )
        ,color()
        ,hasNumber( false )
        ,hasFontFamily( false )
        ,hasFontStyle( false )
        ,hasFontSize( false )
        ,hasFontWeight( false )
        ,hasColor( false )
        {}
        
        bool MeasureStyleAttributes::hasValues() const
        {
            return hasNumber ||
            hasFontFamily ||
            hasFontStyle ||
            hasFontSize ||
            hasFontWeight ||
            hasColor;
        }
        
        std::ostream& MeasureStyleAttributes::toStream( std::ostream& os ) const
        {
            if ( hasValues() )
            {
                streamAttribute( os, number, "number", hasNumber );
                streamAttribute( os, fontFamily, "font-family", hasFontFamily );
                streamAttribute( os, fontStyle, "font-style", hasFontStyle );
                streamAttribute( os, fontSize, "font-size", hasFontSize );
                streamAttribute( os, fontWeight, "font-weight", hasFontWeight );
                streamAttribute( os, color, "color", hasColor );
            }
            return os;
        }
        
		MeasureStyle::MeasureStyle()
		:myAttributes( std::make_shared<MeasureStyleAttributes>() )
		,myChoice( makeMeasureStyleChoice() )
		{}
		bool MeasureStyle::hasAttributes() const
		{
			return myAttributes->hasValues();
		}
		std::ostream& MeasureStyle::streamAttributes( std::ostream& os ) const
		{
			return myAttributes->toStream( os );
			return os;
		}
		std::ostream& MeasureStyle::streamName( std::ostream& os ) const
		{
			os << "measure-style";
			return os;
		}
		bool MeasureStyle::hasContents() const
		{
			return true;
		}
		std::ostream& MeasureStyle::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
		{
			isOneLineOnly = false;
			os << std::endl;
			myChoice->streamContents( os, indentLevel, isOneLineOnly );
            os << std::endl;
            return os;
		}
		MeasureStyleAttributesPtr MeasureStyle::getAttributes() const
		{
			return myAttributes;
		}
		void MeasureStyle::setAttributes( const MeasureStyleAttributesPtr& value )
		{
			if ( value )
			{
				myAttributes = value;
			}
		}
        MeasureStyleChoicePtr MeasureStyle::getMeasureStyleChoice() const
        {
            return myChoice;
        }
        void MeasureStyle::setMeasureStyleChoice( const MeasureStyleChoicePtr& value )
        {
            if ( value )
            {
                myChoice = value;
            }
        }
        
        
        
        /**************** InterchangeableAttributes ****************/
        /* 2953 */
        InterchangeableAttributes::InterchangeableAttributes()
        :symbol()
        ,separator()
        ,hasSymbol( false )
        ,hasSeparator( false )
        {}
        
        bool InterchangeableAttributes::hasValues() const
        {
            return hasSymbol ||
            hasSeparator;
        }
        
        std::ostream& InterchangeableAttributes::toStream( std::ostream& os ) const
        {
            if ( hasValues() )
            {
                streamAttribute( os, symbol, "symbol", hasSymbol );
                streamAttribute( os, separator, "separator", hasSeparator );
            }
            return os;
        }
        
		Interchangeable::Interchangeable()
		:myAttributes( std::make_shared<InterchangeableAttributes>() )
		,myTimeRelation( makeTimeRelation() )
		,myHasTimeRelation( false )
		,myBeats( makeBeats() )
		,myBeatType( makeBeatType() )
		{}
		bool Interchangeable::hasAttributes() const
		{
			return myAttributes->hasValues();
		}
		std::ostream& Interchangeable::streamAttributes( std::ostream& os ) const
		{
			return myAttributes->toStream( os );
			return os;
		}
		std::ostream& Interchangeable::streamName( std::ostream& os ) const
		{
			os << "interchangeable";
			return os;
		}
		bool Interchangeable::hasContents() const
		{
			return true;
		}
		std::ostream& Interchangeable::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
		{
			isOneLineOnly = false;
			os << std::endl;
			// mySign->toStream( os, indentLevel+1 );
			throw std::runtime_error{ "not implemented" };
		}
		InterchangeableAttributesPtr Interchangeable::getAttributes() const
		{
			return myAttributes;
		}
		void Interchangeable::setAttributes( const InterchangeableAttributesPtr& value )
		{
			if ( value )
			{
				myAttributes = value;
			}
		}
		/* _________ TimeRelation minOccurs = 0, maxOccurs = 1 _________ */
		TimeRelationPtr Interchangeable::getTimeRelation() const
		{
			return myTimeRelation;
		}
		void Interchangeable::setTimeRelation( const TimeRelationPtr& value )
		{
			if( value )
			{
				myTimeRelation = value;
			}
		}
		bool Interchangeable::getHasTimeRelation() const
		{
			return myHasTimeRelation;
		}
		void Interchangeable::setHasTimeRelation( const bool value )
		{
			myHasTimeRelation = value;
		}
		/* _________ Beats minOccurs = 1, maxOccurs = 1 _________ */
		BeatsPtr Interchangeable::getBeats() const
		{
			return myBeats;
		}
		void Interchangeable::setBeats( const BeatsPtr& value )
		{
			if( value )
			{
				myBeats = value;
			}
		}
		/* _________ BeatType minOccurs = 1, maxOccurs = 1 _________ */
		BeatTypePtr Interchangeable::getBeatType() const
		{
			return myBeatType;
		}
		void Interchangeable::setBeatType( const BeatTypePtr& value )
		{
			if( value )
			{
				myBeatType = value;
			}
		}

    }
}