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
			
			if( myHasTimeRelation )
            {
                os << std::endl;
                myTimeRelation->toStream( os, indentLevel+1 );
            }
            os << std::endl;
            myBeats->toStream( os, indentLevel+1 );
            os << std::endl;
            myBeatType->toStream( os, indentLevel+1 );
            os << std::endl;
            return os;
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
        
        
        /**************** AccordionRegistrationAttributes ****************/
        /* 3403 */
        AccordionRegistrationAttributes::AccordionRegistrationAttributes()
        :defaultX()
        ,defaultY()
        ,relativeX()
        ,relativeY()
        ,fontFamily()
        ,fontStyle( types::FontStyle::normal )
        ,fontSize( types::CssFontSize::medium )
        ,fontWeight( types::FontWeight::normal )
        ,color()
        ,halign( types::LeftCenterRight::center )
        ,valign( types::Valign::baseline )
        ,hasDefaultX( false )
        ,hasDefaultY( false )
        ,hasRelativeX( false )
        ,hasRelativeY( false )
        ,hasFontFamily( false )
        ,hasFontStyle( false )
        ,hasFontSize( false )
        ,hasFontWeight( false )
        ,hasColor( false )
        ,hasHalign( false )
        ,hasValign( false )
        {}
        
        bool AccordionRegistrationAttributes::hasValues() const
        {
            return hasDefaultX ||
            hasDefaultY ||
            hasRelativeX ||
            hasRelativeY ||
            hasFontFamily ||
            hasFontStyle ||
            hasFontSize ||
            hasFontWeight ||
            hasColor ||
            hasHalign ||
            hasValign;
        }
        
        std::ostream& AccordionRegistrationAttributes::toStream( std::ostream& os ) const
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
                streamAttribute( os, color, "color", hasColor );
                streamAttribute( os, halign, "halign", hasHalign );
                streamAttribute( os, valign, "valign", hasValign );
            }
            return os;
        }
        
		AccordionRegistration::AccordionRegistration()
		:myAttributes( std::make_shared<AccordionRegistrationAttributes>() )
		,myAccordionHigh( makeAccordionHigh() )
		,myHasAccordionHigh( false )
		,myAccordionMiddle( makeAccordionMiddle() )
		,myHasAccordionMiddle( false )
		,myAccordionLow( makeAccordionLow() )
		,myHasAccordionLow( false )
		{}
		bool AccordionRegistration::hasAttributes() const
		{
			return myAttributes->hasValues();
		}
		std::ostream& AccordionRegistration::streamAttributes( std::ostream& os ) const
		{
			return myAttributes->toStream( os );
			return os;
		}
		std::ostream& AccordionRegistration::streamName( std::ostream& os ) const
		{
			os << "accordion-registration";
			return os;
		}
		bool AccordionRegistration::hasContents() const
		{
			return myHasAccordionHigh || myHasAccordionMiddle || myHasAccordionLow;
		}
		std::ostream& AccordionRegistration::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
		{
			isOneLineOnly = !hasContents();
            if ( myHasAccordionHigh )
            {
                os << std::endl;
                myAccordionHigh->toStream( os, indentLevel+1 );
            }
			if ( myHasAccordionMiddle )
            {
                os << std::endl;
                myAccordionMiddle->toStream( os, indentLevel+1 );
            }
			if ( myHasAccordionLow )
            {
                os << std::endl;
                myAccordionLow->toStream( os, indentLevel+1 );
            }
            if ( hasContents() )
            {
                os << std::endl;
            }
			return os;
		}
		AccordionRegistrationAttributesPtr AccordionRegistration::getAttributes() const
		{
			return myAttributes;
		}
		void AccordionRegistration::setAttributes( const AccordionRegistrationAttributesPtr& value )
		{
			if ( value )
			{
				myAttributes = value;
			}
		}
		/* _________ AccordionHigh minOccurs = 0, maxOccurs = 1 _________ */
		AccordionHighPtr AccordionRegistration::getAccordionHigh() const
		{
			return myAccordionHigh;
		}
		void AccordionRegistration::setAccordionHigh( const AccordionHighPtr& value )
		{
			if( value )
			{
				myAccordionHigh = value;
			}
		}
		bool AccordionRegistration::getHasAccordionHigh() const
		{
			return myHasAccordionHigh;
		}
		void AccordionRegistration::setHasAccordionHigh( const bool value )
		{
			myHasAccordionHigh = value;
		}
		/* _________ AccordionMiddle minOccurs = 0, maxOccurs = 1 _________ */
		AccordionMiddlePtr AccordionRegistration::getAccordionMiddle() const
		{
			return myAccordionMiddle;
		}
		void AccordionRegistration::setAccordionMiddle( const AccordionMiddlePtr& value )
		{
			if( value )
			{
				myAccordionMiddle = value;
			}
		}
		bool AccordionRegistration::getHasAccordionMiddle() const
		{
			return myHasAccordionMiddle;
		}
		void AccordionRegistration::setHasAccordionMiddle( const bool value )
		{
			myHasAccordionMiddle = value;
		}
		/* _________ AccordionLow minOccurs = 0, maxOccurs = 1 _________ */
		AccordionLowPtr AccordionRegistration::getAccordionLow() const
		{
			return myAccordionLow;
		}
		void AccordionRegistration::setAccordionLow( const AccordionLowPtr& value )
		{
			if( value )
			{
				myAccordionLow = value;
			}
		}
		bool AccordionRegistration::getHasAccordionLow() const
		{
			return myHasAccordionLow;
		}
		void AccordionRegistration::setHasAccordionLow( const bool value )
		{
			myHasAccordionLow = value;
		}
        
        
        
        /**************** TimeAttributes ****************/
        /* 2621 */
        
        TimeSignature::TimeSignature()
        :myBeats( makeBeats() )
        ,myBeatType( makeBeatType() )
        ,myInterchangeable( makeInterchangeable() )
        ,myHasInterchangeable( false )
        {}
        bool TimeSignature::hasAttributes() const
        {
            return false;
        }
        std::ostream& TimeSignature::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& TimeSignature::streamName( std::ostream& os ) const
        {
            return os;
        }
        bool TimeSignature::hasContents() const
        {
            return true;
        }
        std::ostream& TimeSignature::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
        {
            isOneLineOnly = false;
            myBeats->toStream( os, indentLevel );
            os << std::endl;
            myBeatType->toStream( os, indentLevel );
            if ( myHasInterchangeable )
            {
                os << std::endl;
                myInterchangeable->toStream( os, indentLevel );
            }
            return os;
        }
        BeatsPtr TimeSignature::getBeats() const
        {
            return myBeats;
        }
        void TimeSignature::setBeats( const BeatsPtr& value )
        {
            if ( value )
            {
                myBeats = value;
            }
        }
        BeatTypePtr TimeSignature::getBeatType() const
        {
            return myBeatType;
        }
        void TimeSignature::setBeatType( const BeatTypePtr& value )
        {
            if ( value )
            {
                myBeatType = value;
            }
        }
        InterchangeablePtr TimeSignature::getInterchangeable() const
        {
            return myInterchangeable;
        }
        void TimeSignature::setInterchangeable( const InterchangeablePtr& value )
        {
            if( value )
            {
                myInterchangeable = value;
            }
        }
        bool TimeSignature::getHasInterchangeable() const
        {
            return myHasInterchangeable;
        }
        void TimeSignature::setHasInterchangeable( const bool value )
        {
            myHasInterchangeable = value;
        }
        TimeChoice::TimeChoice()
        :myChoice( Choice::timeSignature )
        ,myTimeSignature( makeTimeSignature() )
        ,mySenzaMisura( makeSenzaMisura() )
        {}
        bool TimeChoice::hasAttributes() const
        {
            return false;
        }
        std::ostream& TimeChoice::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& TimeChoice::streamName( std::ostream& os ) const
        {
            return os;
        }
        bool TimeChoice::hasContents() const
        {
            return true;
        }
        std::ostream& TimeChoice::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
        {
            switch ( myChoice )
            {
                case Choice::timeSignature:
                {
                    myTimeSignature->streamContents( os, indentLevel, isOneLineOnly );
                }
                    break;
                case Choice::senzaMisura:
                {
                    mySenzaMisura->streamContents( os, indentLevel, isOneLineOnly );
                }
                    break;
                default:
                    break;
            }
            return os;
        }
        TimeChoice::Choice TimeChoice::getChoice() const
        {
            return myChoice;
        }
        void TimeChoice::setChoice( const Choice value )
        {
            myChoice = value;
        }
        TimeSignaturePtr TimeChoice::getTimeSignature() const
        {
            return myTimeSignature;
        }
        void TimeChoice::setTimeSignature( const TimeSignaturePtr& value )
        {
            if ( value )
            {
                myTimeSignature = value;
            }
        }
        SenzaMisuraPtr TimeChoice::getSenzaMisura() const
        {
            return mySenzaMisura;
        }
        void TimeChoice::setSenzaMisura( const SenzaMisuraPtr& value )
        {
            if ( value )
            {
                mySenzaMisura = value;
            }
        }
        /**************** TimeAttributes ****************/
        /* 2621 */
        TimeAttributes::TimeAttributes()
        :number()
        ,symbol()
        ,separator()
        ,defaultX()
        ,defaultY()
        ,relativeX()
        ,relativeY()
        ,fontFamily()
        ,fontStyle( types::FontStyle::normal )
        ,fontSize( types::CssFontSize::medium )
        ,fontWeight( types::FontWeight::normal )
        ,color()
        ,halign( types::LeftCenterRight::center )
        ,valign()
        ,printObject( types::YesNo::no )
        ,hasNumber( false )
        ,hasSymbol( false )
        ,hasSeparator( false )
        ,hasDefaultX( false )
        ,hasDefaultY( false )
        ,hasRelativeX( false )
        ,hasRelativeY( false )
        ,hasFontFamily( false )
        ,hasFontStyle( false )
        ,hasFontSize( false )
        ,hasFontWeight( false )
        ,hasColor( false )
        ,hasHalign( false )
        ,hasValign( false )
        ,hasPrintObject( false )
        {}
        
        bool TimeAttributes::hasValues() const
        {
            return hasNumber ||
            hasSymbol ||
            hasSeparator ||
            hasDefaultX ||
            hasDefaultY ||
            hasRelativeX ||
            hasRelativeY ||
            hasFontFamily ||
            hasFontStyle ||
            hasFontSize ||
            hasFontWeight ||
            hasColor ||
            hasHalign ||
            hasValign ||
            hasPrintObject;
        }
        
        std::ostream& TimeAttributes::toStream( std::ostream& os ) const
        {
            if ( hasValues() )
            {
                streamAttribute( os, number, "number", hasNumber );
                streamAttribute( os, symbol, "symbol", hasSymbol );
                streamAttribute( os, separator, "separator", hasSeparator );
                streamAttribute( os, defaultX, "default-x", hasDefaultX );
                streamAttribute( os, defaultY, "default-y", hasDefaultY );
                streamAttribute( os, relativeX, "relative-x", hasRelativeX );
                streamAttribute( os, relativeY, "relative-y", hasRelativeY );
                streamAttribute( os, fontFamily, "font-family", hasFontFamily );
                streamAttribute( os, fontStyle, "font-style", hasFontStyle );
                streamAttribute( os, fontSize, "font-size", hasFontSize );
                streamAttribute( os, fontWeight, "font-weight", hasFontWeight );
                streamAttribute( os, color, "color", hasColor );
                streamAttribute( os, halign, "halign", hasHalign );
                streamAttribute( os, valign, "valign", hasValign );
                streamAttribute( os, printObject, "print-object", hasPrintObject );
            }
            return os;
        }
        
		Time::Time()
		:myAttributes( std::make_shared<TimeAttributes>() )
		,myChoice( makeTimeChoice() )
		{}
		bool Time::hasAttributes() const
		{
			return myAttributes->hasValues();
		}
		std::ostream& Time::streamAttributes( std::ostream& os ) const
		{
			return myAttributes->toStream( os );
			return os;
		}
		std::ostream& Time::streamName( std::ostream& os ) const
		{
			os << "time";
			return os;
		}
		bool Time::hasContents() const
		{
			return true;
		}
		std::ostream& Time::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
		{
			os << std::endl;
			myChoice->streamContents( os, indentLevel+1, isOneLineOnly );
            os << std::endl;
			isOneLineOnly = false;
            return os;
		}
		TimeAttributesPtr Time::getAttributes() const
		{
			return myAttributes;
		}
		void Time::setAttributes( const TimeAttributesPtr& value )
		{
			if ( value )
			{
				myAttributes = value;
			}
		}
        TimeChoicePtr Time::getTimeChoice() const
        {
            return myChoice;
        }
        void Time::setTimeChoice( const TimeChoicePtr& value )
        {
            myChoice = value;
        }
        /**************** StringAttributes ****************/
        /* 3481 */
        StringAttributes::StringAttributes()
        :defaultX()
        ,defaultY()
        ,relativeX()
        ,relativeY()
        ,fontFamily()
        ,fontStyle( types::FontStyle::normal )
        ,fontSize( types::CssFontSize::medium )
        ,fontWeight( types::FontWeight::normal )
        ,color()
        ,placement( types::AboveBelow::below )
        ,hasDefaultX( false )
        ,hasDefaultY( false )
        ,hasRelativeX( false )
        ,hasRelativeY( false )
        ,hasFontFamily( false )
        ,hasFontStyle( false )
        ,hasFontSize( false )
        ,hasFontWeight( false )
        ,hasColor( false )
        ,hasPlacement( false )
        {}
        
        bool StringAttributes::hasValues() const
        {
            return hasDefaultX ||
            hasDefaultY ||
            hasRelativeX ||
            hasRelativeY ||
            hasFontFamily ||
            hasFontStyle ||
            hasFontSize ||
            hasFontWeight ||
            hasColor ||
            hasPlacement;
        }
        
        std::ostream& StringAttributes::toStream( std::ostream& os ) const
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
                streamAttribute( os, color, "color", hasColor );
                streamAttribute( os, placement, "placement", hasPlacement );
            }
            return os;
        }
        
		String::String()
		:myAttributes( std::make_shared<StringAttributes>() )
        ,myValue()
		{}
        String::String( const types::StringNumber& value )
		:myAttributes( std::make_shared<StringAttributes>() )
        ,myValue( value )
		{}
		bool String::hasAttributes() const
		{
			return myAttributes->hasValues();
		}
		std::ostream& String::streamAttributes( std::ostream& os ) const
		{
			return myAttributes->toStream( os );
			return os;
		}
		std::ostream& String::streamName( std::ostream& os ) const
		{
			os << "string";
			return os;
		}
		bool String::hasContents() const
		{
			return true;
		}
		std::ostream& String::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
		{
			isOneLineOnly = true;
            types::toStream( os, myValue );
			return os;
		}
		StringAttributesPtr String::getAttributes() const
		{
			return myAttributes;
		}
		void String::setAttributes( const StringAttributesPtr& value )
		{
			if ( value )
			{
				myAttributes = value;
			}
		}
        types::StringNumber String::getValue() const
        {
            return myValue;
        }
        void String::setValue( const types::StringNumber& value )
        {
            myValue = value;
        }
        
        
        /****************  ****************/
        /* 3455 */
        
		FrameNote::FrameNote()
		:myString( makeString() )
		,myFret( makeFret() )
		,myFingering( makeFingering() )
		,myHasFingering( false )
		,myBarre( makeBarre() )
		,myHasBarre( false )
		{}
		bool FrameNote::hasAttributes() const
		{
			return false;
		}
		std::ostream& FrameNote::streamAttributes( std::ostream& os ) const
		{
			return os;
		}
		std::ostream& FrameNote::streamName( std::ostream& os ) const
		{
			os << "frame-note";
			return os;
		}
		bool FrameNote::hasContents() const
		{
			return true;
		}
		std::ostream& FrameNote::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
		{
			isOneLineOnly = false;
			os << std::endl;
			myString->toStream( os, indentLevel+1 );
            os << std::endl;
			myFret->toStream( os, indentLevel+1 );
            if ( myHasFingering )
            {
                os << std::endl;
                myFingering->toStream( os, indentLevel+1 );
            }
            if ( myHasBarre )
            {
                os << std::endl;
                myBarre->toStream( os, indentLevel+1 );
            }
			os << std::endl;
            return os;
		}
		/* _________ String minOccurs = 1, maxOccurs = 1 _________ */
		StringPtr FrameNote::getString() const
		{
			return myString;
		}
		void FrameNote::setString( const StringPtr& value )
		{
			if( value )
			{
				myString = value;
			}
		}
		/* _________ Fret minOccurs = 1, maxOccurs = 1 _________ */
		FretPtr FrameNote::getFret() const
		{
			return myFret;
		}
		void FrameNote::setFret( const FretPtr& value )
		{
			if( value )
			{
				myFret = value;
			}
		}
		/* _________ Fingering minOccurs = 0, maxOccurs = 1 _________ */
		FingeringPtr FrameNote::getFingering() const
		{
			return myFingering;
		}
		void FrameNote::setFingering( const FingeringPtr& value )
		{
			if( value )
			{
				myFingering = value;
			}
		}
		bool FrameNote::getHasFingering() const
		{
			return myHasFingering;
		}
		void FrameNote::setHasFingering( const bool value )
		{
			myHasFingering = value;
		}
		/* _________ Barre minOccurs = 0, maxOccurs = 1 _________ */
		BarrePtr FrameNote::getBarre() const
		{
			return myBarre;
		}
		void FrameNote::setBarre( const BarrePtr& value )
		{
			if( value )
			{
				myBarre = value;
			}
		}
		bool FrameNote::getHasBarre() const
		{
			return myHasBarre;
		}
		void FrameNote::setHasBarre( const bool value )
		{
			myHasBarre = value;
		}
        
        
        /**************** FrameAttributes ****************/
        /* 3524 */
        FrameAttributes::FrameAttributes()
        :defaultX()
        ,defaultY()
        ,relativeX()
        ,relativeY()
        ,color()
        ,halign( types::LeftCenterRight::center )
        ,valign()
        ,height()
        ,width()
        ,unplayed()
        ,hasDefaultX( false )
        ,hasDefaultY( false )
        ,hasRelativeX( false )
        ,hasRelativeY( false )
        ,hasColor( false )
        ,hasHalign( false )
        ,hasValign( false )
        ,hasHeight( false )
        ,hasWidth( false )
        ,hasUnplayed( false )
        {}
        
        bool FrameAttributes::hasValues() const
        {
            return hasDefaultX ||
            hasDefaultY ||
            hasRelativeX ||
            hasRelativeY ||
            hasColor ||
            hasHalign ||
            hasValign ||
            hasHeight ||
            hasWidth ||
            hasUnplayed;
        }
        
        std::ostream& FrameAttributes::toStream( std::ostream& os ) const
        {
            if ( hasValues() )
            {
                streamAttribute( os, defaultX, "default-x", hasDefaultX );
                streamAttribute( os, defaultY, "default-y", hasDefaultY );
                streamAttribute( os, relativeX, "relative-x", hasRelativeX );
                streamAttribute( os, relativeY, "relative-y", hasRelativeY );
                streamAttribute( os, color, "color", hasColor );
                streamAttribute( os, halign, "halign", hasHalign );
                streamAttribute( os, valign, "valign", hasValign );
                streamAttribute( os, height, "height", hasHeight );
                streamAttribute( os, width, "width", hasWidth );
                streamAttribute( os, unplayed, "unplayed", hasUnplayed );
            }
            return os;
        }
        
		Frame::Frame()
		:myAttributes( std::make_shared<FrameAttributes>() )
		,myFrameStrings( makeFrameStrings() )
		,myFrameFrets( makeFrameFrets() )
		,myFirstFret( makeFirstFret() )
		,myHasFirstFret( false )
		,myFrameNoteSet()
		{
            myFrameNoteSet.push_back( makeFrameNote() );
            
        }
		bool Frame::hasAttributes() const
		{
			return myAttributes->hasValues();
		}
		std::ostream& Frame::streamAttributes( std::ostream& os ) const
		{
			return myAttributes->toStream( os );
			return os;
		}
		std::ostream& Frame::streamName( std::ostream& os ) const
		{
			os << "frame";
			return os;
		}
		bool Frame::hasContents() const
		{
			return true;
		}
		std::ostream& Frame::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
		{
			isOneLineOnly = false;
			os << std::endl;
			myFrameStrings->toStream( os, indentLevel+1 );
			os << std::endl;
            myFrameFrets->toStream( os, indentLevel+1 );
            if ( myHasFirstFret )
            {
                os << std::endl;
                myFirstFret->toStream( os, indentLevel+1 );
            }
            for ( auto x : myFrameNoteSet )
            {
                os << std::endl;
                x->toStream( os, indentLevel+1 );
            }
            os << std::endl;
			return os;
		}
		FrameAttributesPtr Frame::getAttributes() const
		{
			return myAttributes;
		}
		void Frame::setAttributes( const FrameAttributesPtr& value )
		{
			if ( value )
			{
				myAttributes = value;
			}
		}
		/* _________ FrameStrings minOccurs = 1, maxOccurs = 1 _________ */
		FrameStringsPtr Frame::getFrameStrings() const
		{
			return myFrameStrings;
		}
		void Frame::setFrameStrings( const FrameStringsPtr& value )
		{
			if( value )
			{
				myFrameStrings = value;
			}
		}
		/* _________ FrameFrets minOccurs = 1, maxOccurs = 1 _________ */
		FrameFretsPtr Frame::getFrameFrets() const
		{
			return myFrameFrets;
		}
		void Frame::setFrameFrets( const FrameFretsPtr& value )
		{
			if( value )
			{
				myFrameFrets = value;
			}
		}
		/* _________ FirstFret minOccurs = 0, maxOccurs = 1 _________ */
		FirstFretPtr Frame::getFirstFret() const
		{
			return myFirstFret;
		}
		void Frame::setFirstFret( const FirstFretPtr& value )
		{
			if( value )
			{
				myFirstFret = value;
			}
		}
		bool Frame::getHasFirstFret() const
		{
			return myHasFirstFret;
		}
		void Frame::setHasFirstFret( const bool value )
		{
			myHasFirstFret = value;
		}
		/* _________ FrameNote minOccurs = 1, maxOccurs = unbounded _________ */
		const FrameNoteSet& Frame::getFrameNoteSet() const
		{
			return myFrameNoteSet;
		}
		void Frame::removeFrameNote( const FrameNoteSetIterConst& value )
		{
			if ( value != myFrameNoteSet.cend() )
			{
				if ( myFrameNoteSet.size() > 1 )
				{
					myFrameNoteSet.erase( value );
				}
			}
		}
		void Frame::addFrameNote( const FrameNotePtr& value )
		{
			if ( value )
			{
				myFrameNoteSet.push_back( value );
			}
		}
		void Frame::clearFrameNoteSet()
		{
			myFrameNoteSet.clear();
            myFrameNoteSet.push_back( makeFrameNote() );
		}
        FrameNotePtr Frame::getFrameNote( const FrameNoteSetIterConst& setIterator ) const
        {
            if( setIterator != myFrameNoteSet.cend() )
            {
                return *setIterator;
            }
            return FrameNotePtr();
        }
        
        /**************** AttributesIterface ****************/
        /* 3554 */

        
		PedalTuning::PedalTuning()
		:myPedalStep( makePedalStep() )
		,myPedalAlter( makePedalAlter() )
		{}
		bool PedalTuning::hasAttributes() const
		{
			return false;
		}
		std::ostream& PedalTuning::streamAttributes( std::ostream& os ) const
		{
			return os;
		}
		std::ostream& PedalTuning::streamName( std::ostream& os ) const
		{
			os << "pedal-tuning";
			return os;
		}
		bool PedalTuning::hasContents() const
		{
			return true;
		}
		std::ostream& PedalTuning::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
		{
			isOneLineOnly = false;
			os << std::endl;
			myPedalStep->toStream( os, indentLevel+1 );
			os << std::endl;
			myPedalAlter->toStream( os, indentLevel+1 );
			os << std::endl;
            return os;
        }
		/* _________ PedalStep minOccurs = 1, maxOccurs = 1 _________ */
		PedalStepPtr PedalTuning::getPedalStep() const
		{
			return myPedalStep;
		}
		void PedalTuning::setPedalStep( const PedalStepPtr& value )
		{
			if( value )
			{
				myPedalStep = value;
			}
		}
		/* _________ PedalAlter minOccurs = 1, maxOccurs = 1 _________ */
		PedalAlterPtr PedalTuning::getPedalAlter() const
		{
			return myPedalAlter;
		}
		void PedalTuning::setPedalAlter( const PedalAlterPtr& value )
		{
			if( value )
			{
				myPedalAlter = value;
			}
		}
        
        
        /**************** HarpPedalsAttributes ****************/
        /* 3373 */
        HarpPedalsAttributes::HarpPedalsAttributes()
        :defaultX()
        ,defaultY()
        ,relativeX()
        ,relativeY()
        ,fontFamily()
        ,fontStyle( types::FontStyle::normal )
        ,fontSize( types::CssFontSize::medium )
        ,fontWeight( types::FontWeight::normal )
        ,color()
        ,halign( types::LeftCenterRight::center )
        ,valign()
        ,hasDefaultX( false )
        ,hasDefaultY( false )
        ,hasRelativeX( false )
        ,hasRelativeY( false )
        ,hasFontFamily( false )
        ,hasFontStyle( false )
        ,hasFontSize( false )
        ,hasFontWeight( false )
        ,hasColor( false )
        ,hasHalign( false )
        ,hasValign( false )
        {}
        
        bool HarpPedalsAttributes::hasValues() const
        {
            return hasDefaultX ||
            hasDefaultY ||
            hasRelativeX ||
            hasRelativeY ||
            hasFontFamily ||
            hasFontStyle ||
            hasFontSize ||
            hasFontWeight ||
            hasColor ||
            hasHalign ||
            hasValign;
        }
        
        std::ostream& HarpPedalsAttributes::toStream( std::ostream& os ) const
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
                streamAttribute( os, color, "color", hasColor );
                streamAttribute( os, halign, "halign", hasHalign );
                streamAttribute( os, valign, "valign", hasValign );
            }
            return os;
        }
        
		HarpPedals::HarpPedals()
		:myAttributes( std::make_shared<HarpPedalsAttributes>() )
		,myPedalTuningSet()
		{
            myPedalTuningSet.push_back( makePedalTuning() );
        }
		bool HarpPedals::hasAttributes() const
		{
			return myAttributes->hasValues();
		}
		std::ostream& HarpPedals::streamAttributes( std::ostream& os ) const
		{
			return myAttributes->toStream( os );
			return os;
		}
		std::ostream& HarpPedals::streamName( std::ostream& os ) const
		{
			os << "harp-pedals";
			return os;
		}
		bool HarpPedals::hasContents() const
		{
			return true;
		}
		std::ostream& HarpPedals::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
		{
			isOneLineOnly = false;
			for ( auto x : myPedalTuningSet )
            {
                os << std::endl;
                x->toStream( os, indentLevel+1 );
            }
			os << std::endl;
			return os;
		}
		HarpPedalsAttributesPtr HarpPedals::getAttributes() const
		{
			return myAttributes;
		}
		void HarpPedals::setAttributes( const HarpPedalsAttributesPtr& value )
		{
			if ( value )
			{
				myAttributes = value;
			}
		}
		/* _________ PedalTuning minOccurs = 1, maxOccurs = unbounded _________ */
		const PedalTuningSet& HarpPedals::getPedalTuningSet() const
		{
			return myPedalTuningSet;
		}
		void HarpPedals::removePedalTuning( const PedalTuningSetIterConst& value )
		{
			if ( value != myPedalTuningSet.cend() )
			{
				if ( myPedalTuningSet.size() > 1 )
				{
					myPedalTuningSet.erase( value );
				}
			}
		}
		void HarpPedals::addPedalTuning( const PedalTuningPtr& value )
		{
			if ( value )
			{
				myPedalTuningSet.push_back( value );
			}
		}
		void HarpPedals::clearPedalTuningSet()
		{
			myPedalTuningSet.clear();
			myPedalTuningSet.push_back( makePedalTuning() );
		}
        PedalTuningPtr HarpPedals::getPedalTuning( const PedalTuningSetIterConst& setIterator ) const
        {
            if( setIterator != myPedalTuningSet.cend() )
            {
                return *setIterator;
            }
            return PedalTuningPtr();
        }
        
        
        TimeModificationNormalTypeNormalDot::TimeModificationNormalTypeNormalDot()
		:myNormalType( makeNormalType() )
		,myNormalDotSet()
		{}
		bool TimeModificationNormalTypeNormalDot::hasAttributes() const
		{
			return false;
		}
		std::ostream& TimeModificationNormalTypeNormalDot::streamAttributes( std::ostream& os ) const
		{
			return os;
		}
		std::ostream& TimeModificationNormalTypeNormalDot::streamName( std::ostream& os ) const
		{
			return os;
		}
		bool TimeModificationNormalTypeNormalDot::hasContents() const
		{
			return true;
		}
		std::ostream& TimeModificationNormalTypeNormalDot::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
		{
			isOneLineOnly = false;
			myNormalType->toStream( os, indentLevel );
			for ( auto x : myNormalDotSet )
            {
                os << std::endl;
                x->toStream( os, indentLevel );
            }
            return os;
		}
		/* _________ NormalType minOccurs = 1, maxOccurs = 1 _________ */
		NormalTypePtr TimeModificationNormalTypeNormalDot::getNormalType() const
		{
			return myNormalType;
		}
		void TimeModificationNormalTypeNormalDot::setNormalType( const NormalTypePtr& value )
		{
			if( value )
			{
				myNormalType = value;
			}
		}
		/* _________ NormalDot minOccurs = 0, maxOccurs = unbounded _________ */
		const NormalDotSet& TimeModificationNormalTypeNormalDot::getNormalDotSet() const
		{
			return myNormalDotSet;
		}
		void TimeModificationNormalTypeNormalDot::removeNormalDot( const NormalDotSetIterConst& value )
		{
			if ( value != myNormalDotSet.cend() )
			{
				myNormalDotSet.erase( value );
			}
		}
		void TimeModificationNormalTypeNormalDot::addNormalDot( const NormalDotPtr& value )
		{
			if ( value )
			{
				myNormalDotSet.push_back( value );
			}
		}
		void TimeModificationNormalTypeNormalDot::clearNormalDotSet()
		{
			myNormalDotSet.clear();
		}
        NormalDotPtr TimeModificationNormalTypeNormalDot::getNormalDot( const NormalDotSetIterConst& setIterator ) const
        {
            if( setIterator != myNormalDotSet.cend() )
            {
                return *setIterator;
            }
            return NormalDotPtr();
        }
        /**************** MetronomeTupletAttributes ****************/
        /* 3682 */
        MetronomeTupletAttributes::MetronomeTupletAttributes()
        :type( types::StartStop::start )
        ,bracket( types::YesNo::no )
        ,showNumber( types::ShowTuplet::actual )
        ,hasType( true )
        ,hasBracket( false )
        ,hasShowNumber( false )
        {}

        bool MetronomeTupletAttributes::hasValues() const
        {
            return hasType ||
            hasBracket ||
            hasShowNumber;
        }
        
        std::ostream& MetronomeTupletAttributes::toStream( std::ostream& os ) const
        {
            if ( hasValues() )
            {
                streamAttribute( os, type, "type", hasType );
                streamAttribute( os, bracket, "bracket", hasBracket );
                streamAttribute( os, showNumber, "show-number", hasShowNumber );
            }
            return os;
        }
        
        MetronomeTuplet::MetronomeTuplet()
        :myAttributes( std::make_shared<MetronomeTupletAttributes>() )
        ,myActualNotes( makeActualNotes() )
        ,myNormalNotes( makeNormalNotes() )
        ,myTimeModificationNormalTypeNormalDot( makeTimeModificationNormalTypeNormalDot() )
        ,myHasTimeModificationNormalTypeNormalDot( false )
        {}
        bool MetronomeTuplet::hasAttributes() const
        {
            return myAttributes->hasValues();
        }
        std::ostream& MetronomeTuplet::streamAttributes( std::ostream& os ) const
        {
            return myAttributes->toStream( os );
            return os;
        }
        std::ostream& MetronomeTuplet::streamName( std::ostream& os ) const
        {
            os << "metronome-tuplet";
            return os;
        }
        bool MetronomeTuplet::hasContents() const
        {
            return true;
        }
        std::ostream& MetronomeTuplet::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
        {
            
            os << std::endl;
            myActualNotes->toStream( os, indentLevel+1 );
            os << std::endl;
            myNormalNotes->toStream( os, indentLevel+1 );
            if ( myHasTimeModificationNormalTypeNormalDot )
            {
                os << std::endl;
                myTimeModificationNormalTypeNormalDot->streamContents( os, indentLevel+1, isOneLineOnly );
            }
            os << std::endl;
            isOneLineOnly = false;
            return os;
        }
        MetronomeTupletAttributesPtr MetronomeTuplet::getAttributes() const
        {
            return myAttributes;
        }
        void MetronomeTuplet::setAttributes( const MetronomeTupletAttributesPtr& value )
        {
            if ( value )
            {
                myAttributes = value;
            }
        }
        /* _________ ActualNotes minOccurs = 1, maxOccurs = 1 _________ */
        ActualNotesPtr MetronomeTuplet::getActualNotes() const
        {
            return myActualNotes;
        }
        void MetronomeTuplet::setActualNotes( const ActualNotesPtr& value )
        {
            if( value )
            {
                myActualNotes = value;
            }
        }
        /* _________ NormalNotes minOccurs = 1, maxOccurs = 1 _________ */
        NormalNotesPtr MetronomeTuplet::getNormalNotes() const
        {
            return myNormalNotes;
        }
        void MetronomeTuplet::setNormalNotes( const NormalNotesPtr& value )
        {
            if( value )
            {
                myNormalNotes = value;
            }
        }
        /* _________ TimeModificationNormalTypeNormalDot minOccurs = 0, maxOccurs = 1 _________ */
        TimeModificationNormalTypeNormalDotPtr MetronomeTuplet::getTimeModificationNormalTypeNormalDot() const
        {
            return myTimeModificationNormalTypeNormalDot;
        }
        void MetronomeTuplet::setTimeModificationNormalTypeNormalDot( const TimeModificationNormalTypeNormalDotPtr& value )
        {
            if ( value )
            {
                myTimeModificationNormalTypeNormalDot = value;
            }
        }
        bool MetronomeTuplet::getHasTimeModificationNormalTypeNormalDot() const
        {
            return myHasTimeModificationNormalTypeNormalDot;
        }
        void MetronomeTuplet::setHasTimeModificationNormalTypeNormalDot( const bool value )
        {
            myHasTimeModificationNormalTypeNormalDot = value;
        }
        
        
        /**************** AttributesIterface ****************/
        /* 3627 */
        
		MetronomeNote::MetronomeNote()
		:myMetronomeType( makeMetronomeType() )
		,myMetronomeDotSet()
		,myMetronomeBeamSet()
		,myMetronomeTuplet( makeMetronomeTuplet() )
		,myHasMetronomeTuplet( false )
		{}
		bool MetronomeNote::hasAttributes() const
		{
			return false;
		}
		std::ostream& MetronomeNote::streamAttributes( std::ostream& os ) const
		{
			return os;
		}
		std::ostream& MetronomeNote::streamName( std::ostream& os ) const
		{
			os << "metronome-note";
			return os;
		}
		bool MetronomeNote::hasContents() const
		{
			return true;
		}
		std::ostream& MetronomeNote::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
		{
			isOneLineOnly = false;
			os << std::endl;
			myMetronomeType->toStream( os, indentLevel+1 );
            for ( auto x : myMetronomeDotSet )
            {
                os << std::endl;
                x->toStream( os, indentLevel+1 );
            }
            for ( auto x : myMetronomeBeamSet )
            {
                os << std::endl;
                x->toStream( os, indentLevel+1 );
            }
            if ( myHasMetronomeTuplet )
            {
                os << std::endl;
                myMetronomeTuplet->toStream( os, indentLevel+1 );
            }
			os << std::endl;
			return os;
		}
		/* _________ MetronomeType minOccurs = 1, maxOccurs = 1 _________ */
		MetronomeTypePtr MetronomeNote::getMetronomeType() const
		{
			return myMetronomeType;
		}
		void MetronomeNote::setMetronomeType( const MetronomeTypePtr& value )
		{
			if( value )
			{
				myMetronomeType = value;
			}
		}
		/* _________ MetronomeDot minOccurs = 0, maxOccurs = unbounded _________ */
		const MetronomeDotSet& MetronomeNote::getMetronomeDotSet() const
		{
			return myMetronomeDotSet;
		}
		void MetronomeNote::removeMetronomeDot( const MetronomeDotSetIterConst& value )
		{
			if ( value != myMetronomeDotSet.cend() )
			{
				myMetronomeDotSet.erase( value );
			}
		}
		void MetronomeNote::addMetronomeDot( const MetronomeDotPtr& value )
		{
			if ( value )
			{
				myMetronomeDotSet.push_back( value );
			}
		}
		void MetronomeNote::clearMetronomeDotSet()
		{
			myMetronomeDotSet.clear();
		}
		MetronomeDotPtr MetronomeNote::getMetronomeDot( const MetronomeDotSetIterConst& setIterator ) const
		{
			if( setIterator != myMetronomeDotSet.cend() )
			{
				return *setIterator;
			}
			return MetronomeDotPtr();
		}
		/* _________ MetronomeBeam minOccurs = 0, maxOccurs = unbounded _________ */
		const MetronomeBeamSet& MetronomeNote::getMetronomeBeamSet() const
		{
			return myMetronomeBeamSet;
		}
		void MetronomeNote::removeMetronomeBeam( const MetronomeBeamSetIterConst& value )
		{
			if ( value != myMetronomeBeamSet.cend() )
			{
				myMetronomeBeamSet.erase( value );
			}
		}
		void MetronomeNote::addMetronomeBeam( const MetronomeBeamPtr& value )
		{
			if ( value )
			{
				myMetronomeBeamSet.push_back( value );
			}
		}
		void MetronomeNote::clearMetronomeBeamSet()
		{
			myMetronomeBeamSet.clear();
		}
		MetronomeBeamPtr MetronomeNote::getMetronomeBeam( const MetronomeBeamSetIterConst& setIterator ) const
		{
			if( setIterator != myMetronomeBeamSet.cend() )
			{
				return *setIterator;
			}
			return MetronomeBeamPtr();
		}
		/* _________ MetronomeTuplet minOccurs = 0, maxOccurs = 1 _________ */
		MetronomeTupletPtr MetronomeNote::getMetronomeTuplet() const
		{
			return myMetronomeTuplet;
		}
		void MetronomeNote::setMetronomeTuplet( const MetronomeTupletPtr& value )
		{
			if( value )
			{
				myMetronomeTuplet = value;
			}
		}
		bool MetronomeNote::getHasMetronomeTuplet() const
		{
			return myHasMetronomeTuplet;
		}
		void MetronomeNote::setHasMetronomeTuplet( const bool value )
		{
			myHasMetronomeTuplet = value;
		}
        
        BeatUnitGroup::BeatUnitGroup()
		:myBeatUnit( makeBeatUnit() )
        ,myBeatUnitDotSet()
		{}
		bool BeatUnitGroup::hasAttributes() const
		{
			return false;
		}
		std::ostream& BeatUnitGroup::streamAttributes( std::ostream& os ) const
		{
			return os;
		}
		std::ostream& BeatUnitGroup::streamName( std::ostream& os ) const
		{
			return os;
		}
		bool BeatUnitGroup::hasContents() const
		{
			return true;
		}
		std::ostream& BeatUnitGroup::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
		{
			isOneLineOnly = false;
			myBeatUnit->toStream( os, indentLevel );
            for ( auto x : myBeatUnitDotSet )
            {
                os << std::endl;
                x->toStream( os, indentLevel );
            }
			return os;
		}
		/* _________ BeatUnit minOccurs = 1, maxOccurs = 1 _________ */
        BeatUnitPtr BeatUnitGroup::getBeatUnit() const
        {
            return myBeatUnit;
        }
        void BeatUnitGroup::setBeatUnit( const BeatUnitPtr& value )
        {
            if ( value )
            {
                myBeatUnit = value;
            }
        }
        /* _________ BeatUnitDot minOccurs = 0, maxOccurs = unbounded _________ */
        const BeatUnitDotSet& BeatUnitGroup::getBeatUnitDotSet() const
        {
            return myBeatUnitDotSet;
        }
        void BeatUnitGroup::addBeatUnitDot( const BeatUnitDotPtr& value )
        {
            if ( value )
            {
                myBeatUnitDotSet.push_back( value );
            }
        }
        void BeatUnitGroup::removeBeatUnitDot( const BeatUnitDotSetIterConst& setIterator )
        {
            if ( setIterator != myBeatUnitDotSet.cend() )
            {
                myBeatUnitDotSet.erase( setIterator );
            }
        }
        void BeatUnitGroup::clearBeatUnitDotSet()
        {
            myBeatUnitDotSet.clear();
        }
        
        MetronomeRelationGroup::MetronomeRelationGroup()
		:myMetronomeRelation( makeMetronomeRelation() )
        ,myMetronomeNote( makeMetronomeNote() )
		{}
		bool MetronomeRelationGroup::hasAttributes() const
		{
			return false;
		}
		std::ostream& MetronomeRelationGroup::streamAttributes( std::ostream& os ) const
		{
			return os;
		}
		std::ostream& MetronomeRelationGroup::streamName( std::ostream& os ) const
		{
			return os;
		}
		bool MetronomeRelationGroup::hasContents() const
		{
			return true;
		}
		std::ostream& MetronomeRelationGroup::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
		{
			isOneLineOnly = false;
			myMetronomeRelation->toStream( os, indentLevel );
            os << std::endl;
            myMetronomeNote->toStream( os, indentLevel );
			return os;
		}
		/* _________ MetronomeRelation minOccurs = 1, maxOccurs = 1 _________ */
        MetronomeRelationPtr MetronomeRelationGroup::getMetronomeRelation() const
        {
            return myMetronomeRelation;
        }
        void MetronomeRelationGroup::setMetronomeRelation( const MetronomeRelationPtr& value )
        {
            if ( value )
            {
                myMetronomeRelation = value;
            }
        }
        /* _________ MetronomeNote minOccurs = 1, maxOccurs = 1 _________ */
        MetronomeNotePtr MetronomeRelationGroup::getMetronomeNote() const
        {
            return myMetronomeNote;
        }
        void MetronomeRelationGroup::setMetronomeNote( const MetronomeNotePtr& value )
        {
            if ( value )
            {
                myMetronomeNote = value;
            }
        }
        NoteRelationNote::NoteRelationNote()
		:myMetronomeNoteSet()
        ,myMetronomeRelationGroup( makeMetronomeRelationGroup() )
        ,myHasMetronomeRelationGroup( false )
		{}
		bool NoteRelationNote::hasAttributes() const
		{
			return false;
		}
		std::ostream& NoteRelationNote::streamAttributes( std::ostream& os ) const
		{
			return os;
		}
		std::ostream& NoteRelationNote::streamName( std::ostream& os ) const
		{
			return os;
		}
		bool NoteRelationNote::hasContents() const
		{
			return true;
		}
		std::ostream& NoteRelationNote::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
		{
			
            for ( auto it = myMetronomeNoteSet.cbegin();
                 it != myMetronomeNoteSet.cend();
                  ++it )
            {
                if( it != myMetronomeNoteSet.cbegin() )
                {
                    os << std::endl;
                }
                (*it)->streamContents( os, indentLevel, isOneLineOnly );
            }
            if ( myHasMetronomeRelationGroup )
            {
                os << std::endl;
                myMetronomeRelationGroup->streamContents( os, indentLevel, isOneLineOnly );
            }
			isOneLineOnly = false;
            return os;
		}
		/* _________ MetronomeNote minOccurs = 1, maxOccurs = unbounded _________ */
        const MetronomeNoteSet& NoteRelationNote::getMetronomeNoteSet() const
		{
			return myMetronomeNoteSet;
		}
        void NoteRelationNote::addMetronomeNote( const MetronomeNotePtr& value )
		{
			if ( value )
            {
                myMetronomeNoteSet.push_back( value );
            }
		}
        void NoteRelationNote::removeMetronomeNote( const MetronomeNoteSetIterConst& setIterator )
		{
			if ( setIterator != myMetronomeNoteSet.cend() )
            {
                if ( myMetronomeNoteSet.size() > 1 )
                {
                    myMetronomeNoteSet.erase( setIterator );
                }
            }
		}
        void NoteRelationNote::clearMetronomeNoteSet()
		{
			myMetronomeNoteSet.clear();
		}
        /* _________ MetronomeRelationGroup minOccurs = 0, maxOccurs = 1 _________ */
        MetronomeRelationGroupPtr NoteRelationNote::getMetronomeRelationGroup() const
		{
			return myMetronomeRelationGroup;
		}
        void NoteRelationNote::setMetronomeRelationGroup( const MetronomeRelationGroupPtr& value )
		{
			if ( value )
            {
                myMetronomeRelationGroup = value;
            }
		}
        bool NoteRelationNote::getHasMetronomeRelationGroup() const
		{
			return myHasMetronomeRelationGroup;
		}
        void NoteRelationNote::setHasMetronomeRelationGroup( const bool value )
		{
			myHasMetronomeRelationGroup = value;
		}
        
        PerMinuteOrBeatUnitChoice::PerMinuteOrBeatUnitChoice()
		:myChoice( Choice::perMinute )
        ,myPerMinute( makePerMinute() )
        ,myBeatUnitGroup( makeBeatUnitGroup() )
		{}
		bool PerMinuteOrBeatUnitChoice::hasAttributes() const
		{
			return false;
		}
		std::ostream& PerMinuteOrBeatUnitChoice::streamAttributes( std::ostream& os ) const
		{
			return os;
		}
		std::ostream& PerMinuteOrBeatUnitChoice::streamName( std::ostream& os ) const
		{
			return os;
		}
		bool PerMinuteOrBeatUnitChoice::hasContents() const
		{
			return true;
		}
		std::ostream& PerMinuteOrBeatUnitChoice::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
		{
            switch ( myChoice )
            {
                case Choice::perMinute:
                {
                    myPerMinute->toStream( os, indentLevel );
                }
                    break;
                case Choice::beatUnitGroup:
                {
                    myBeatUnitGroup->streamContents( os, indentLevel, isOneLineOnly );
                }
                    break;
                default:
                    break;
            }
			isOneLineOnly = false;
			return os;
		}
		PerMinuteOrBeatUnitChoice::Choice PerMinuteOrBeatUnitChoice::getChoice() const
        {
            return myChoice;
        }
        void PerMinuteOrBeatUnitChoice::setChoice( const PerMinuteOrBeatUnitChoice::Choice value )
        {
            myChoice = value;
        }
        PerMinutePtr PerMinuteOrBeatUnitChoice::getPerMinute() const
        {
            return myPerMinute;
        }
        void PerMinuteOrBeatUnitChoice::setPerMinute( const PerMinutePtr& value )
        {
            if ( value )
            {
                myPerMinute = value;
            }
        }
        BeatUnitGroupPtr PerMinuteOrBeatUnitChoice::getBeatUnitGroup() const
        {
            return myBeatUnitGroup;
        }
        void PerMinuteOrBeatUnitChoice::setBeatUnitGroup( const BeatUnitGroupPtr& value )
        {
            if ( value )
            {
                myBeatUnitGroup = value;
            }
        }
        BeatUnitPer::BeatUnitPer()
        :myBeatUnitGroup( makeBeatUnitGroup() )
        ,myPerMinuteOrBeatUnitChoice( makePerMinuteOrBeatUnitChoice() )
        {}
        bool BeatUnitPer::hasAttributes() const
        {
            return false;
        }
        std::ostream& BeatUnitPer::streamAttributes( std::ostream& os ) const
        {
            return os;
        }
        std::ostream& BeatUnitPer::streamName( std::ostream& os ) const
        {
            return os;
        }
        bool BeatUnitPer::hasContents() const
        {
            return true;
        }
        std::ostream& BeatUnitPer::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
        {
            myBeatUnitGroup->streamContents( os, indentLevel, isOneLineOnly );
            os << std::endl;
            myPerMinuteOrBeatUnitChoice->streamContents( os, indentLevel, isOneLineOnly );
            isOneLineOnly = false;
            return os;
        }
        BeatUnitGroupPtr BeatUnitPer::getBeatUnitGroup() const
        {
            return myBeatUnitGroup;
        }
        void BeatUnitPer::setBeatUnitGroup( const BeatUnitGroupPtr& value )
        {
            if ( value )
            {
                myBeatUnitGroup = value;
            }
        }
        PerMinuteOrBeatUnitChoicePtr BeatUnitPer::getPerMinuteOrBeatUnitChoice() const
        {
            return myPerMinuteOrBeatUnitChoice;
        }
        void BeatUnitPer::setPerMinuteOtBeatUnitChoice( PerMinuteOrBeatUnitChoicePtr& value )
        {
            if ( value )
            {
                myPerMinuteOrBeatUnitChoice = value;
            }
        }
        
        BeatUnitPerOrNoteRelationNoteChoice::BeatUnitPerOrNoteRelationNoteChoice()
		:myChoice( Choice::beatUnitPer )
        ,myBeatUnitPer( makeBeatUnitPer() )
        ,myNoteRelationNote( makeNoteRelationNote() )
        {}
		bool BeatUnitPerOrNoteRelationNoteChoice::hasAttributes() const
		{
			return false;
		}
		std::ostream& BeatUnitPerOrNoteRelationNoteChoice::streamAttributes( std::ostream& os ) const
		{
			return os;
		}
		std::ostream& BeatUnitPerOrNoteRelationNoteChoice::streamName( std::ostream& os ) const
		{
			return os;
		}
		bool BeatUnitPerOrNoteRelationNoteChoice::hasContents() const
		{
			return true;
		}
		std::ostream& BeatUnitPerOrNoteRelationNoteChoice::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
		{
            switch ( myChoice )
            {
                case Choice::beatUnitPer:
                {
                    myBeatUnitPer->streamContents( os, indentLevel, isOneLineOnly );
                }
                    break;
                case Choice::noteRelationNote:
                {
                    myNoteRelationNote->streamContents( os, indentLevel, isOneLineOnly );
                }
                    break;
                default:
                    break;
            }
			isOneLineOnly = false;
			return os;
		}
		BeatUnitPerOrNoteRelationNoteChoice::Choice BeatUnitPerOrNoteRelationNoteChoice::getChoice() const
        {
            return myChoice;
        }
        void BeatUnitPerOrNoteRelationNoteChoice::setChoice( const BeatUnitPerOrNoteRelationNoteChoice::Choice value )
        {
            myChoice = value;
        }
        BeatUnitPerPtr BeatUnitPerOrNoteRelationNoteChoice::getBeatUnitPer() const
        {
            return myBeatUnitPer;
        }
        void BeatUnitPerOrNoteRelationNoteChoice::setBeatUnitPer( const BeatUnitPerPtr& value )
        {
            if ( value )
            {
                myBeatUnitPer = value;
            }
        }
        NoteRelationNotePtr BeatUnitPerOrNoteRelationNoteChoice::getNoteRelationNote() const
        {
            return myNoteRelationNote;
        }
        void BeatUnitPerOrNoteRelationNoteChoice::setNoteRelationNote( const NoteRelationNotePtr& value )
        {
            myNoteRelationNote = value;
        }
        /**************** MetronomeAttributes ****************/
        /* 3367 */
        MetronomeAttributes::MetronomeAttributes()
        :defaultX()
        ,defaultY()
        ,relativeX()
        ,relativeY()
        ,fontFamily()
        ,fontStyle( types::FontStyle::normal )
        ,fontSize( types::CssFontSize::medium )
        ,fontWeight( types::FontWeight::normal )
        ,color()
        ,halign( types::LeftCenterRight::center )
        ,valign( types::Valign::baseline )
        ,justify( types::LeftCenterRight::center )
        ,parentheses( types::YesNo::no )
        ,hasDefaultX( false )
        ,hasDefaultY( false )
        ,hasRelativeX( false )
        ,hasRelativeY( false )
        ,hasFontFamily( false )
        ,hasFontStyle( false )
        ,hasFontSize( false )
        ,hasFontWeight( false )
        ,hasColor( false )
        ,hasHalign( false )
        ,hasValign( false )
        ,hasJustify( false )
        ,hasParentheses( false )
        {}
        
        bool MetronomeAttributes::hasValues() const
        {
            return hasDefaultX ||
            hasDefaultY ||
            hasRelativeX ||
            hasRelativeY ||
            hasFontFamily ||
            hasFontStyle ||
            hasFontSize ||
            hasFontWeight ||
            hasColor ||
            hasHalign ||
            hasValign ||
            hasJustify ||
            hasParentheses;
        }
        
        std::ostream& MetronomeAttributes::toStream( std::ostream& os ) const
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
                streamAttribute( os, color, "color", hasColor );
                streamAttribute( os, halign, "halign", hasHalign );
                streamAttribute( os, valign, "valign", hasValign );
                streamAttribute( os, justify, "justify", hasJustify );
                streamAttribute( os, parentheses, "parentheses", hasParentheses );
            }
            return os;
        }
        Metronome::Metronome()
        :myAttributes( std::make_shared<MetronomeAttributes>() )
		,myBeatUnitPerOrNoteRelationNoteChoice( makeBeatUnitPerOrNoteRelationNoteChoice() )
		{}
		bool Metronome::hasAttributes() const
		{
			return false;
		}
		std::ostream& Metronome::streamAttributes( std::ostream& os ) const
		{
			return os;
		}
		std::ostream& Metronome::streamName( std::ostream& os ) const
		{
			return os << "metronome";
		}
		bool Metronome::hasContents() const
		{
			return true;
		}
		std::ostream& Metronome::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
		{
            os << std::endl;
			myBeatUnitPerOrNoteRelationNoteChoice->streamContents( os, indentLevel+1, isOneLineOnly );
            os << std::endl;
			isOneLineOnly = false;
			return os;
		}
		MetronomeAttributesPtr Metronome::getAttributes() const
        {
            return myAttributes;
        }
        void Metronome::setAttributes( const MetronomeAttributesPtr& value )
        {
            if ( value )
            {
                myAttributes = value;
            }
        }
        BeatUnitPerOrNoteRelationNoteChoicePtr Metronome::getBeatUnitPerOrNoteRelationNoteChoice() const
        {
            return myBeatUnitPerOrNoteRelationNoteChoice;
        }
        void Metronome::setBeatUnitPerOrNoteRelationNoteChoice( const BeatUnitPerOrNoteRelationNoteChoicePtr& value )
        {
            if ( value )
            {
                myBeatUnitPerOrNoteRelationNoteChoice = value;
            }
        }
        
#if 1==0
        X__X::X__X()
		:myBeatUnit( makeBeatUnit() )
        ,myBeatUnitDotSet()
		{}
		bool X__X::hasAttributes() const
		{
			return false;
		}
		std::ostream& X__X::streamAttributes( std::ostream& os ) const
		{
			return os;
		}
		std::ostream& X__X::streamName( std::ostream& os ) const
		{
			return os;
		}
		bool X__X::hasContents() const
		{
			return true;
		}
		std::ostream& X__X::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
		{
			isOneLineOnly = false;
			myBeatUnit->toStream( os, indentLevel );
            for ( auto x : myBeatUnitDotSet )
            {
                os << std::endl;
                x->toStream( os, indentLevel );
            }
			return os;
		}
		/* _________ BeatUnit minOccurs = 1, maxOccurs = 1 _________ */
        BeatUnitPtr X__X::getBeatUnit() const
        {
            return myBeatUnit;
        }
        void X__X::setBeatUnit( const BeatUnitPtr& value )
        {
            if ( value )
            {
                myBeatUnit = value;
            }
        }
        /* _________ BeatUnitDot minOccurs = 0, maxOccurs = unbounded _________ */
        const BeatUnitDotSet& X__X::getBeatUnitDotSet() const
        {
            return myBeatUnitDotSet;
        }
        void X__X::addBeatUnitDot( const BeatUnitDotPtr& value )
        {
            if ( value )
            {
                myBeatUnitDotSet.push_back( value );
            }
        }
        void X__X::removeBeatUnitDot( const BeatUnitDotSetIterConst& setIterator )
        {
            if ( setIterator != myBeatUnitDotSet.cend() )
            {
                myBeatUnitDotSet.erase( setIterator );
            }
        }
        void X__X::clearBeatUnitDotSet()
        {
            myBeatUnitDotSet.clear();
        }
#endif
    } // namespace e

} // namespace mx