#include "ElementsNew.h"

namespace mx
{
    namespace e
    {
        
        
		Root::Root()
		:myRootStep( makeRootStep() )
		,myRootAlter( makeRootAlter() )
		,myHasRootAlter( false )
		{}
		bool Root::hasAttributes() const
		{
			return false;
		}
		std::ostream& Root::streamAttributes( std::ostream& os ) const
		{
			return os;
		}
		std::ostream& Root::streamName( std::ostream& os ) const
		{
			os << "root";
			return os;
		}
		bool Root::hasContents() const
		{
			return true;
		}
		std::ostream& Root::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
		{
			
			os << std::endl;
			myRootStep->toStream( os, indentLevel+1 );
            if ( myHasRootAlter )
            {
                os << std::endl;
                myRootAlter->toStream( os, indentLevel+1 );
            }
            os << std::endl;
			isOneLineOnly = false;
            return os;
		}
		/* _________ RootStep minOccurs = 1, maxOccurs = 1 _________ */
		RootStepPtr Root::getRootStep() const
		{
			return myRootStep;
		}
		void Root::setRootStep( const RootStepPtr& value )
		{
			if( value )
			{
				myRootStep = value;
			}
		}
		/* _________ RootAlter minOccurs = 0, maxOccurs = 1 _________ */
		RootAlterPtr Root::getRootAlter() const
		{
			return myRootAlter;
		}
		void Root::setRootAlter( const RootAlterPtr& value )
		{
			if( value )
			{
				myRootAlter = value;
			}
		}
		bool Root::getHasRootAlter() const
		{
			return myHasRootAlter;
		}
		void Root::setHasRootAlter( const bool value )
		{
			myHasRootAlter = value;
		}
        
        Bass::Bass()
		:myBassStep( makeBassStep() )
		,myBassAlter( makeBassAlter() )
		,myHasBassAlter( false )
		{}
		bool Bass::hasAttributes() const
		{
			return false;
		}
		std::ostream& Bass::streamAttributes( std::ostream& os ) const
		{
			return os;
		}
		std::ostream& Bass::streamName( std::ostream& os ) const
		{
			os << "bass";
			return os;
		}
		bool Bass::hasContents() const
		{
			return true;
		}
		std::ostream& Bass::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
		{
			
			os << std::endl;
			myBassStep->toStream( os, indentLevel+1 );
            if ( myHasBassAlter )
            {
                os << std::endl;
                myBassAlter->toStream( os, indentLevel+1 );
            }
            os << std::endl;
			isOneLineOnly = false;
            return os;
		}
		/* _________ BassStep minOccurs = 1, maxOccurs = 1 _________ */
		BassStepPtr Bass::getBassStep() const
		{
			return myBassStep;
		}
		void Bass::setBassStep( const BassStepPtr& value )
		{
			if( value )
			{
				myBassStep = value;
			}
		}
		/* _________ BassAlter minOccurs = 0, maxOccurs = 1 _________ */
		BassAlterPtr Bass::getBassAlter() const
		{
			return myBassAlter;
		}
		void Bass::setBassAlter( const BassAlterPtr& value )
		{
			if( value )
			{
				myBassAlter = value;
			}
		}
		bool Bass::getHasBassAlter() const
		{
			return myHasBassAlter;
		}
		void Bass::setHasBassAlter( const bool value )
		{
			myHasBassAlter = value;
		}
        
        
        
        /**************** DegreeAttributes ****************/
        /* 6210 */
        DegreeAttributes::DegreeAttributes()
        :printObject( types::YesNo::no )
        ,hasPrintObject( false )
        {}
        
        bool DegreeAttributes::hasValues() const
        {
            return hasPrintObject;
        }
        
        std::ostream& DegreeAttributes::toStream( std::ostream& os ) const
        {
            if ( hasValues() )
            {
                streamAttribute( os, printObject, "print-object", hasPrintObject );
            }
            return os;
        }
        
		Degree::Degree()
		:myAttributes( std::make_shared<DegreeAttributes>() )
		,myDegreeValue( makeDegreeValue() )
		,myDegreeAlter( makeDegreeAlter() )
		,myDegreeType( makeDegreeType( types::DegreeTypeValue::add ) )
		{}
		bool Degree::hasAttributes() const
		{
			return myAttributes->hasValues();
		}
		std::ostream& Degree::streamAttributes( std::ostream& os ) const
		{
			return myAttributes->toStream( os );
			return os;
		}
		std::ostream& Degree::streamName( std::ostream& os ) const
		{
			os << "degree";
			return os;
		}
		bool Degree::hasContents() const
		{
			return true;
		}
		std::ostream& Degree::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
		{
			
			os << std::endl;
			myDegreeValue->toStream( os, indentLevel+1 );
			os << std::endl;
			myDegreeAlter->toStream( os, indentLevel+1 );
			os << std::endl;
			myDegreeType->toStream( os, indentLevel+1 );
			os << std::endl;
			isOneLineOnly = false;
            return os;
		}
		DegreeAttributesPtr Degree::getAttributes() const
		{
			return myAttributes;
		}
		void Degree::setAttributes( const DegreeAttributesPtr& value )
		{
			if ( value )
			{
				myAttributes = value;
			}
		}
		/* _________ DegreeValue minOccurs = 1, maxOccurs = 1 _________ */
		DegreeValuePtr Degree::getDegreeValue() const
		{
			return myDegreeValue;
		}
		void Degree::setDegreeValue( const DegreeValuePtr& value )
		{
			if( value )
			{
				myDegreeValue = value;
			}
		}
		/* _________ DegreeAlter minOccurs = 1, maxOccurs = 1 _________ */
		DegreeAlterPtr Degree::getDegreeAlter() const
		{
			return myDegreeAlter;
		}
		void Degree::setDegreeAlter( const DegreeAlterPtr& value )
		{
			if( value )
			{
				myDegreeAlter = value;
			}
		}
		/* _________ DegreeType minOccurs = 1, maxOccurs = 1 _________ */
		DegreeTypePtr Degree::getDegreeType() const
		{
			return myDegreeType;
		}
		void Degree::setDegreeType( const DegreeTypePtr& value )
		{
			if( value )
			{
				myDegreeType = value;
			}
		}
        
        
        
		PageLayout::PageLayout()
		:myPageHeight( makePageHeight() )
		,myPageWidth( makePageWidth() )
		,myPageMarginsSet()
		{}
		bool PageLayout::hasAttributes() const
		{
			return false;
		}
		std::ostream& PageLayout::streamAttributes( std::ostream& os ) const
		{
			return os;
		}
		std::ostream& PageLayout::streamName( std::ostream& os ) const
		{
			os << "page-layout";
			return os;
		}
		bool PageLayout::hasContents() const
		{
			return true;
		}
		std::ostream& PageLayout::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
		{
			
			os << std::endl;
			myPageHeight->toStream( os, indentLevel+1 );
			os << std::endl;
			myPageWidth->toStream( os, indentLevel+1 );
            for ( auto x : myPageMarginsSet )
            {
                os << std::endl;
                x->toStream( os, indentLevel+1 );
            }
            os << std::endl;
            isOneLineOnly = false;
            return os;
		}
		/* _________ PageHeight minOccurs = 1, maxOccurs = 1 _________ */
		PageHeightPtr PageLayout::getPageHeight() const
		{
			return myPageHeight;
		}
		void PageLayout::setPageHeight( const PageHeightPtr& value )
		{
			if( value )
			{
				myPageHeight = value;
			}
		}
		/* _________ PageWidth minOccurs = 1, maxOccurs = 1 _________ */
		PageWidthPtr PageLayout::getPageWidth() const
		{
			return myPageWidth;
		}
		void PageLayout::setPageWidth( const PageWidthPtr& value )
		{
			if( value )
			{
				myPageWidth = value;
			}
		}
		/* _________ PageMargins minOccurs = 0, maxOccurs = 2 _________ */
		const PageMarginsSet& PageLayout::getPageMarginsSet() const
		{
			return myPageMarginsSet;
		}
		void PageLayout::removePageMargins( const PageMarginsSetIterConst& value )
		{
			if ( value != myPageMarginsSet.cend() )
			{
				myPageMarginsSet.erase( value );
			}
		}
		void PageLayout::addPageMargins( const PageMarginsPtr& value )
		{
			if ( value )
			{
                if( myPageMarginsSet.size() < 2 )
                {
                    myPageMarginsSet.push_back( value );
                }
			}
		}
		void PageLayout::clearPageMarginsSet()
		{
			myPageMarginsSet.clear();
		}
		PageMarginsPtr PageLayout::getPageMargins( const PageMarginsSetIterConst& setIterator ) const
		{
			if( setIterator != myPageMarginsSet.cend() )
			{
				return *setIterator;
			}
			return PageMarginsPtr();
		}
        SystemLayout::SystemLayout()
		:mySystemMargins( makeSystemMargins() )
		,myHasSystemMargins( false )
		,mySystemDistance( makeSystemDistance() )
		,myHasSystemDistance( false )
		,myTopSystemDistance( makeTopSystemDistance() )
		,myHasTopSystemDistance( false )
		,mySystemDividers( makeSystemDividers() )
		,myHasSystemDividers( false )
		{}
		bool SystemLayout::hasAttributes() const
		{
			return false;
		}
		std::ostream& SystemLayout::streamAttributes( std::ostream& os ) const
		{
			return os;
		}
		std::ostream& SystemLayout::streamName( std::ostream& os ) const
		{
			os << "system-layout";
			return os;
		}
		bool SystemLayout::hasContents() const
		{
			return myHasSystemMargins
            || myHasSystemDistance
            || myHasTopSystemDistance
            || myHasSystemDividers;
		}
		std::ostream& SystemLayout::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
		{
			if ( myHasSystemMargins )
            {
                os << std::endl;
                mySystemMargins->toStream( os, indentLevel+1 );
            }
			if ( myHasSystemDistance )
            {
                os << std::endl;
                mySystemDistance->toStream( os, indentLevel+1 );
            }
            if ( myHasTopSystemDistance )
            {
                os << std::endl;
                myTopSystemDistance->toStream( os, indentLevel+1 );
            }
            if ( myHasSystemDividers )
            {
                os << std::endl;
                mySystemDividers->toStream( os, indentLevel+1 );
            }
			isOneLineOnly = ! hasContents();
            if ( ! isOneLineOnly )
            {
                os << std::endl;
            }
            return os;
		}
		/* _________ SystemMargins minOccurs = 0, maxOccurs = 1 _________ */
		SystemMarginsPtr SystemLayout::getSystemMargins() const
		{
			return mySystemMargins;
		}
		void SystemLayout::setSystemMargins( const SystemMarginsPtr& value )
		{
			if( value )
			{
				mySystemMargins = value;
			}
		}
		bool SystemLayout::getHasSystemMargins() const
		{
			return myHasSystemMargins;
		}
		void SystemLayout::setHasSystemMargins( const bool value )
		{
			myHasSystemMargins = value;
		}
		/* _________ SystemDistance minOccurs = 0, maxOccurs = 1 _________ */
		SystemDistancePtr SystemLayout::getSystemDistance() const
		{
			return mySystemDistance;
		}
		void SystemLayout::setSystemDistance( const SystemDistancePtr& value )
		{
			if( value )
			{
				mySystemDistance = value;
			}
		}
		bool SystemLayout::getHasSystemDistance() const
		{
			return myHasSystemDistance;
		}
		void SystemLayout::setHasSystemDistance( const bool value )
		{
			myHasSystemDistance = value;
		}
		/* _________ TopSystemDistance minOccurs = 0, maxOccurs = 1 _________ */
		TopSystemDistancePtr SystemLayout::getTopSystemDistance() const
		{
			return myTopSystemDistance;
		}
		void SystemLayout::setTopSystemDistance( const TopSystemDistancePtr& value )
		{
			if( value )
			{
				myTopSystemDistance = value;
			}
		}
		bool SystemLayout::getHasTopSystemDistance() const
		{
			return myHasTopSystemDistance;
		}
		void SystemLayout::setHasTopSystemDistance( const bool value )
		{
			myHasTopSystemDistance = value;
		}
		/* _________ SystemDividers minOccurs = 0, maxOccurs = 1 _________ */
		SystemDividersPtr SystemLayout::getSystemDividers() const
		{
			return mySystemDividers;
		}
		void SystemLayout::setSystemDividers( const SystemDividersPtr& value )
		{
			if( value )
			{
				mySystemDividers = value;
			}
		}
		bool SystemLayout::getHasSystemDividers() const
		{
			return myHasSystemDividers;
		}
		void SystemLayout::setHasSystemDividers( const bool value )
		{
			myHasSystemDividers = value;
		}
        
        
        /**************** StaffLayoutAttributes ****************/
        /* 6241 */
        StaffLayoutAttributes::StaffLayoutAttributes()
        :number()
        ,hasNumber( false )
        {}
        
        bool StaffLayoutAttributes::hasValues() const
        {
            return hasNumber;
        }
        
        std::ostream& StaffLayoutAttributes::toStream( std::ostream& os ) const
        {
            if ( hasValues() )
            {
                streamAttribute( os, number, "number", hasNumber );
            }
            return os;
        }
        
		StaffLayout::StaffLayout()
		:myAttributes( std::make_shared<StaffLayoutAttributes>() )
		,myStaffDistance( makeStaffDistance() )
		,myHasStaffDistance( false )
		{}
		bool StaffLayout::hasAttributes() const
		{
			return myAttributes->hasValues();
		}
		std::ostream& StaffLayout::streamAttributes( std::ostream& os ) const
		{
			return myAttributes->toStream( os );
			return os;
		}
		std::ostream& StaffLayout::streamName( std::ostream& os ) const
		{
			os << "staff-layout";
			return os;
		}
		bool StaffLayout::hasContents() const
		{
			return myHasStaffDistance;
		}
		std::ostream& StaffLayout::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
		{
			if ( myHasStaffDistance )
            {
                os << std::endl;
                myStaffDistance->toStream( os, indentLevel+1 );
            }
            isOneLineOnly = ! hasContents();
            if ( ! isOneLineOnly )
            {
                os << std::endl;
            }
			return os;
		}
		StaffLayoutAttributesPtr StaffLayout::getAttributes() const
		{
			return myAttributes;
		}
		void StaffLayout::setAttributes( const StaffLayoutAttributesPtr& value )
		{
			if ( value )
			{
				myAttributes = value;
			}
		}
		/* _________ StaffDistance minOccurs = 0, maxOccurs = 1 _________ */
		StaffDistancePtr StaffLayout::getStaffDistance() const
		{
			return myStaffDistance;
		}
		void StaffLayout::setStaffDistance( const StaffDistancePtr& value )
		{
			if( value )
			{
				myStaffDistance = value;
			}
		}
		bool StaffLayout::getHasStaffDistance() const
		{
			return myHasStaffDistance;
		}
		void StaffLayout::setHasStaffDistance( const bool value )
		{
			myHasStaffDistance = value;
		}
        Pitch::Pitch()
		:myStep( makeStep() )
		,myAlter( makeAlter() )
		,myHasAlter( false )
		,myOctave( makeOctave() )
		{}
		bool Pitch::hasAttributes() const
		{
			return false;
		}
		std::ostream& Pitch::streamAttributes( std::ostream& os ) const
		{
			return os;
		}
		std::ostream& Pitch::streamName( std::ostream& os ) const
		{
			os << "pitch";
			return os;
		}
		bool Pitch::hasContents() const
		{
			return true;
		}
		std::ostream& Pitch::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
		{
			os << std::endl;
			myStep->toStream( os, indentLevel+1 );
			if ( myHasAlter )
            {
                os << std::endl;
                myAlter->toStream( os, indentLevel+1 );
            }
            os << std::endl;
			myOctave->toStream( os, indentLevel+1 );
			isOneLineOnly = false;
			os << std::endl;
            return os;
		}
		/* _________ Step minOccurs = 1, maxOccurs = 1 _________ */
		StepPtr Pitch::getStep() const
		{
			return myStep;
		}
		void Pitch::setStep( const StepPtr& value )
		{
			if( value )
			{
				myStep = value;
			}
		}
		/* _________ Alter minOccurs = 0, maxOccurs = 1 _________ */
		AlterPtr Pitch::getAlter() const
		{
			return myAlter;
		}
		void Pitch::setAlter( const AlterPtr& value )
		{
			if( value )
			{
				myAlter = value;
			}
		}
		bool Pitch::getHasAlter() const
		{
			return myHasAlter;
		}
		void Pitch::setHasAlter( const bool value )
		{
			myHasAlter = value;
		}
		/* _________ Octave minOccurs = 1, maxOccurs = 1 _________ */
		OctavePtr Pitch::getOctave() const
		{
			return myOctave;
		}
		void Pitch::setOctave( const OctavePtr& value )
		{
			if( value )
			{
				myOctave = value;
			}
		}
        
        DisplayStepOctaveGroup::DisplayStepOctaveGroup()
		:myDisplayStep( makeDisplayStep() )
        ,myDisplayOctave( makeDisplayOctave() )
		{}
		bool DisplayStepOctaveGroup::hasAttributes() const
		{
			return false;
		}
		std::ostream& DisplayStepOctaveGroup::streamAttributes( std::ostream& os ) const
		{
			return os;
		}
		std::ostream& DisplayStepOctaveGroup::streamName( std::ostream& os ) const
		{
			return os;
		}
		bool DisplayStepOctaveGroup::hasContents() const
		{
			return true;
		}
		std::ostream& DisplayStepOctaveGroup::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
		{
			myDisplayStep->toStream( os, indentLevel );
            os << std::endl;
            myDisplayOctave->toStream( os, indentLevel );
            return os;
		}
        /* _________ DisplayStep minOccurs = 1, maxOccurs = 1 _________ */
        DisplayStepPtr DisplayStepOctaveGroup::getDisplayStep() const
        {
            return myDisplayStep;
        }
        void DisplayStepOctaveGroup::setDisplayStep( const DisplayStepPtr& value )
        {
            if ( value )
            {
                myDisplayStep = value;
            }
        }
        /* _________ DisplayOctave minOccurs = 1, maxOccurs = 1 _________ */
        DisplayOctavePtr DisplayStepOctaveGroup::getDisplayOctave() const
        {
            return myDisplayOctave;
        }
        void DisplayStepOctaveGroup::setDisplayOctave( const DisplayOctavePtr& value )
        {
            if ( value )
            {
                myDisplayOctave = value;
            }
        }
        
        Unpitched::Unpitched()
		:myDisplayStepOctaveGroup( makeDisplayStepOctaveGroup() )
        ,myHasDisplayStepOctaveGroup( false )
		{}
		bool Unpitched::hasAttributes() const
		{
			return false;
		}
		std::ostream& Unpitched::streamAttributes( std::ostream& os ) const
		{
			return os;
		}
		std::ostream& Unpitched::streamName( std::ostream& os ) const
		{
			os << "unpitched";
			return os;
		}
		bool Unpitched::hasContents() const
		{
			return myHasDisplayStepOctaveGroup;
		}
		std::ostream& Unpitched::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
		{
			if ( myHasDisplayStepOctaveGroup )
            {
                os << std::endl;
                myDisplayStepOctaveGroup->streamContents( os, indentLevel+1, isOneLineOnly );
                isOneLineOnly = false;
                os << std::endl;
            }
            else
            {
                isOneLineOnly = true;
            }
            return os;
		}
        /* _________ DisplayStepOctaveGroup minOccurs = 0, maxOccurs = 1 _________ */
        DisplayStepOctaveGroupPtr Unpitched::getDisplayStepOctaveGroup() const
        {
            return myDisplayStepOctaveGroup;
        }
        void Unpitched::setDisplayStepOctaveGroup( const DisplayStepOctaveGroupPtr& value )
        {
            if ( value )
            {
                myDisplayStepOctaveGroup = value;
            }
        }
        bool Unpitched::getHasDisplayStepOctaveGroup() const
        {
            return myHasDisplayStepOctaveGroup;
        }
        void Unpitched::setHasDisplayStepOctaveGroup( const bool value )
        {
            myHasDisplayStepOctaveGroup = value;
        }
        
        
        
        /**************** RestAttributes ****************/
        /* 6296 */
        RestAttributes::RestAttributes()
        :measure( types::YesNo::no )
        ,hasMeasure( false )
        {}
        
        bool RestAttributes::hasValues() const
        {
            return hasMeasure;
        }
        
        std::ostream& RestAttributes::toStream( std::ostream& os ) const
        {
            if ( hasValues() )
            {
                streamAttribute( os, measure, "measure", hasMeasure );
            }
            return os;
        }
        
		Rest::Rest()
		:myAttributes( std::make_shared<RestAttributes>() )
		,myDisplayStepOctaveGroup( makeDisplayStepOctaveGroup() )
        ,myHasDisplayStepOctaveGroup( false )
		{}
		bool Rest::hasAttributes() const
		{
			return myAttributes->hasValues();
		}
		std::ostream& Rest::streamAttributes( std::ostream& os ) const
		{
			return myAttributes->toStream( os );
			return os;
		}
		std::ostream& Rest::streamName( std::ostream& os ) const
		{
			os << "rest";
			return os;
		}
		bool Rest::hasContents() const
		{
			return myHasDisplayStepOctaveGroup;
		}
		std::ostream& Rest::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
		{
			if ( myHasDisplayStepOctaveGroup )
            {
                os << std::endl;
                myDisplayStepOctaveGroup->streamContents( os, indentLevel+1, isOneLineOnly );
                isOneLineOnly = false;
                os << std::endl;
            }
            else
            {
                isOneLineOnly = true;
            }
            return os;
		}
		RestAttributesPtr Rest::getAttributes() const
		{
			return myAttributes;
		}
		void Rest::setAttributes( const RestAttributesPtr& value )
		{
			if ( value )
			{
				myAttributes = value;
			}
		}
        /* _________ DisplayStepOctaveGroup minOccurs = 0, maxOccurs = 1 _________ */
        DisplayStepOctaveGroupPtr Rest::getDisplayStepOctaveGroup() const
        {
            return myDisplayStepOctaveGroup;
        }
        void Rest::setDisplayStepOctaveGroup( const DisplayStepOctaveGroupPtr& value )
        {
            if ( value )
            {
                myDisplayStepOctaveGroup = value;
            }
        }
        bool Rest::getHasDisplayStepOctaveGroup() const
        {
            return myHasDisplayStepOctaveGroup;
        }
        void Rest::setHasDisplayStepOctaveGroup( const bool value )
        {
            myHasDisplayStepOctaveGroup = value;
        }
        
		Backup::Backup()
		:myDuration( makeDuration() )
        ,myEditorialGroup( makeEditorialGroup() )
		{}
		bool Backup::hasAttributes() const
		{
			return false;
		}
		std::ostream& Backup::streamAttributes( std::ostream& os ) const
		{
			return os;
		}
		std::ostream& Backup::streamName( std::ostream& os ) const
		{
			os << "backup";
			return os;
		}
		bool Backup::hasContents() const
		{
			return true;
		}
		std::ostream& Backup::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
		{
            os << std::endl;
            myDuration->toStream( os, indentLevel+1 );
            os << std::endl;
            myEditorialGroup->streamContents( os, indentLevel+1, isOneLineOnly );
            if ( myEditorialGroup->hasContents() )
            {
                os << std::endl;
            }
            isOneLineOnly = false;
            return os;
		}
		/* _________ Duration minOccurs = 1, maxOccurs = 1 _________ */
		DurationPtr Backup::getDuration() const
		{
			return myDuration;
		}
		void Backup::setDuration( const DurationPtr& value )
		{
			if( value )
			{
				myDuration = value;
			}
		}
		/* _________ EditorialGroup minOccurs = 1, maxOccurs = 1 _________ */
        EditorialGroupPtr Backup::getEditorialGroup() const
        {
            return myEditorialGroup;
        }
        void Backup::setEditorialGroup( const EditorialGroupPtr& value )
        {
            if ( value )
            {
                myEditorialGroup = value;
            }
        }

		Forward::Forward()
		:myDuration( makeDuration() )
        ,myEditorialVoiceGroup( makeEditorialVoiceGroup() )
		,myStaff( makeStaff() )
        ,myHasStaff( false )
		{}
		bool Forward::hasAttributes() const
		{
			return false;
		}
		std::ostream& Forward::streamAttributes( std::ostream& os ) const
		{
			return os;
		}
		std::ostream& Forward::streamName( std::ostream& os ) const
		{
			os << "forward";
			return os;
		}
		bool Forward::hasContents() const
		{
			return true;
		}
		std::ostream& Forward::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
		{
            os << std::endl;
            myDuration->toStream( os, indentLevel+1 );
            if ( myEditorialVoiceGroup->hasContents() )
            {
                os << std::endl;
                myEditorialVoiceGroup->streamContents(os, indentLevel+1, isOneLineOnly );
            }
            if ( myHasStaff )
            {
                os << std::endl;
                myDuration->toStream( os, indentLevel+1 );
            }
			isOneLineOnly = false;
			os << std::endl;
			return os;
		}
		/* _________ Duration minOccurs = 1, maxOccurs = 1 _________ */
		DurationPtr Forward::getDuration() const
		{
			return myDuration;
		}
		void Forward::setDuration( const DurationPtr& value )
		{
			if( value )
			{
				myDuration = value;
			}
		}
        /* _________ EditorialVoiceGroup minOccurs = 1, maxOccurs = 1 _________ */
        EditorialVoiceGroupPtr Forward::getEditorialVoiceGroup() const
        {
            return myEditorialVoiceGroup;
        }
        void Forward::setEditorialVoiceGroup( const EditorialVoiceGroupPtr& value )
        {
            if ( value )
            {
                myEditorialVoiceGroup = value;
            }
        }
		/* _________ Staff minOccurs = 1, maxOccurs = 1 _________ */
		StaffPtr Forward::getStaff() const
		{
			return myStaff;
		}
		void Forward::setStaff( const StaffPtr& value )
		{
			if( value )
			{
				myStaff = value;
			}
		}
        bool Forward::getHasStaff() const
        {
            return myHasStaff;
        }
        void Forward::setHasStaff( const bool value )
        {
            myHasStaff = value;
        }
        
        
        
        /**************** FiguredBassAttributes ****************/
        /* 6325 */
        FiguredBassAttributes::FiguredBassAttributes()
        :defaultX()
        ,defaultY()
        ,relativeX()
        ,relativeY()
        ,fontFamily()
        ,fontStyle( types::FontStyle::normal )
        ,fontSize( types::CssFontSize::medium )
        ,fontWeight( types::FontWeight::normal )
        ,color()
        ,printObject( types::YesNo::no )
        ,printDot( types::YesNo::no )
        ,printSpacing( types::YesNo::no )
        ,printLyric( types::YesNo::no )
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
        ,hasPrintObject( false )
        ,hasPrintDot( false )
        ,hasPrintSpacing( false )
        ,hasPrintLyric( false )
        ,hasParentheses( false )
        {}
        
        bool FiguredBassAttributes::hasValues() const
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
            hasPrintObject ||
            hasPrintDot ||
            hasPrintSpacing ||
            hasPrintLyric ||
            hasParentheses;
        }
        
        std::ostream& FiguredBassAttributes::toStream( std::ostream& os ) const
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
                streamAttribute( os, printObject, "print-object", hasPrintObject );
                streamAttribute( os, printDot, "print-dot", hasPrintDot );
                streamAttribute( os, printSpacing, "print-spacing", hasPrintSpacing );
                streamAttribute( os, printLyric, "print-lyric", hasPrintLyric );
                streamAttribute( os, parentheses, "parentheses", hasParentheses );
            }
            return os;
        }
        
		FiguredBass::FiguredBass()
		:myAttributes( std::make_shared<FiguredBassAttributes>() )
		,myFigureSet()
        ,myDuration( makeDuration() )
		,myHasDuration( false )
        ,myEditorialGroup( makeEditorialGroup() )
		{
            myFigureSet.push_back( makeFigure() );
            
        }
		bool FiguredBass::hasAttributes() const
		{
			return myAttributes->hasValues();
		}
		std::ostream& FiguredBass::streamAttributes( std::ostream& os ) const
		{
			return myAttributes->toStream( os );
			return os;
		}
		std::ostream& FiguredBass::streamName( std::ostream& os ) const
		{
			os << "figured-bass";
			return os;
		}
		bool FiguredBass::hasContents() const
		{
			return true;
		}
		std::ostream& FiguredBass::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
		{
			isOneLineOnly = false;
			os << std::endl;
			// mySign->toStream( os, indentLevel+1 );
			throw std::runtime_error{ "not implemented" };
		}
		FiguredBassAttributesPtr FiguredBass::getAttributes() const
		{
			return myAttributes;
		}
		void FiguredBass::setAttributes( const FiguredBassAttributesPtr& value )
		{
			if ( value )
			{
				myAttributes = value;
			}
		}
		/* _________ Figure minOccurs = 1, maxOccurs = unbounded _________ */
		const FigureSet& FiguredBass::getFigureSet() const
		{
			return myFigureSet;
		}
		void FiguredBass::removeFigure( const FigureSetIterConst& value )
		{
			if ( value != myFigureSet.cend() )
			{
				if ( myFigureSet.size() > 1 )
				{
					myFigureSet.erase( value );
				}
			}
		}
		void FiguredBass::addFigure( const FigurePtr& value )
		{
			if ( value )
			{
				myFigureSet.push_back( value );
			}
		}
		void FiguredBass::clearFigureSet()
		{
			myFigureSet.clear();
			while( FigureSet.size() < 1 )
			{
				myFigureSet.push_back( makeFigure() );
			}
		}
		FigurePtr FiguredBass::getFigure( const FigureSetIterConst& setIterator ) const
		{
			if( setIterator != myFigureSet.cend() )
			{
				return *setIterator;
			}
			return FigurePtr();
		}
        /* _________ Duration minOccurs = 0, maxOccurs = 1 _________ */
        DurationPtr FiguredBass::getDuration() const
        {
            return myDuration;
        }
        void FiguredBass::setDuration( const DurationPtr& value )
        {
            if ( value )
            {
                myDuration = value;
            }
        }
        bool FiguredBass::getHasDuration() const
        {
            return myHasDuration;
        }
        void FiguredBass::setHasDuration( const bool value )
        {
            myHasDuration = value;
        }
		
        
#if 1==0
#endif
        
    } // namespace e

} // namespace mx