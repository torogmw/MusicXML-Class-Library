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

    }
}