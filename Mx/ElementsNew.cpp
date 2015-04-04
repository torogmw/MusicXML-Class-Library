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
			for ( auto x : myFigureSet )
            {
                os << std::endl;
                x->toStream( os, indentLevel+1 );
            }
            if ( myHasDuration )
            {
                os << std::endl;
                myDuration->toStream( os, indentLevel+1 );
            }
            if ( myEditorialGroup->hasContents() )
            {
                os << std::endl;
                myEditorialGroup->streamContents( os, indentLevel+1, isOneLineOnly );
            }
            os << std::endl;
            isOneLineOnly = false;
            return os;
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
			while( myFigureSet.size() < 1 )
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
		/* _________ EditorialGroup minOccurs = 1, maxOccurs = 1 _________ */
        EditorialGroupPtr FiguredBass::getEditorialGroup() const
        {
            return myEditorialGroup;
        }
        void FiguredBass::setEditorialGroup( const EditorialGroupPtr& value )
        {
            if ( value )
            {
                myEditorialGroup = value;
            }
        }
        
        
        /**************** BarlineAttributes ****************/
        /* 6334 */
        BarlineAttributes::BarlineAttributes()
        :location( types::RightLeftMiddle::right )
        ,segno()
        ,coda()
        ,divisions()
        ,hasLocation( false )
        ,hasSegno( false )
        ,hasCoda( false )
        ,hasDivisions( false )
        {}
        
        bool BarlineAttributes::hasValues() const
        {
            return hasLocation ||
            hasSegno ||
            hasCoda ||
            hasDivisions;
        }
        
        std::ostream& BarlineAttributes::toStream( std::ostream& os ) const
        {
            if ( hasValues() )
            {
                streamAttribute( os, location, "location", hasLocation );
                streamAttribute( os, segno, "segno", hasSegno );
                streamAttribute( os, coda, "coda", hasCoda );
                streamAttribute( os, divisions, "divisions", hasDivisions );
            }
            return os;
        }
        
		Barline::Barline()
		:myAttributes( std::make_shared<BarlineAttributes>() )
		,myBarStyle( makeBarStyle() )
		,myHasBarStyle( false )
		,myEditorialGroup( makeEditorialGroup() )
		,myWavyLine( makeWavyLine() )
		,myHasWavyLine( false )
		,mySegno( makeSegno() )
		,myHasSegno( false )
		,myCoda( makeCoda() )
		,myHasCoda( false )
		,myFermataSet()
		,myEnding( makeEnding() )
		,myHasEnding( false )
		,myRepeat( makeRepeat() )
		,myHasRepeat( false )
		{}
		bool Barline::hasAttributes() const
		{
			return myAttributes->hasValues();
		}
		std::ostream& Barline::streamAttributes( std::ostream& os ) const
		{
			return myAttributes->toStream( os );
			return os;
		}
		std::ostream& Barline::streamName( std::ostream& os ) const
		{
			os << "barline";
			return os;
		}
		bool Barline::hasContents() const
		{
			return myHasBarStyle
            || myEditorialGroup->hasContents()
            || myHasWavyLine
            || myHasSegno
            || myHasCoda
            || myFermataSet.size() > 0
            || myHasEnding
            || myHasRepeat;
		}
		std::ostream& Barline::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
		{
			if ( myHasBarStyle )
            {
                os << std::endl;
                myBarStyle->toStream( os, indentLevel+1 );
            }
            if ( myEditorialGroup->hasContents() )
            {
                os << std::endl;
                myEditorialGroup->streamContents( os, indentLevel+1, isOneLineOnly );
            }
            if ( myHasWavyLine )
            {
                os << std::endl;
                myWavyLine->toStream( os, indentLevel+1 );
            }
            if ( myHasSegno )
            {
                os << std::endl;
                mySegno->toStream( os, indentLevel+1 );
            }
            if ( myHasCoda )
            {
                os << std::endl;
                myCoda->toStream( os, indentLevel+1 );
            }
            for ( auto x : myFermataSet )
            {
                os << std::endl;
                x->toStream( os, indentLevel+1 );
            }
            if ( myHasEnding )
            {
                os << std::endl;
                myEnding->toStream( os, indentLevel+1 );
            }
            if ( myHasRepeat )
            {
                os << std::endl;
                myRepeat->toStream( os, indentLevel+1 );
            }
            isOneLineOnly = ! hasContents();
            if ( ! isOneLineOnly )
            {
                os << std::endl;
            }
            return os;
		}
		BarlineAttributesPtr Barline::getAttributes() const
		{
			return myAttributes;
		}
		void Barline::setAttributes( const BarlineAttributesPtr& value )
		{
			if ( value )
			{
				myAttributes = value;
			}
		}
		/* _________ BarStyle minOccurs = 0, maxOccurs = 1 _________ */
		BarStylePtr Barline::getBarStyle() const
		{
			return myBarStyle;
		}
		void Barline::setBarStyle( const BarStylePtr& value )
		{
			if( value )
			{
				myBarStyle = value;
			}
		}
		bool Barline::getHasBarStyle() const
		{
			return myHasBarStyle;
		}
		void Barline::setHasBarStyle( const bool value )
		{
			myHasBarStyle = value;
		}
		/* _________ EditorialGroup minOccurs = 1, maxOccurs = 1 _________ */
        EditorialGroupPtr Barline::getEditorialGroup() const
        {
            return myEditorialGroup;
        }
        void Barline::setEditorialGroup( const EditorialGroupPtr& value )
        {
            if ( value )
            {
                myEditorialGroup = value;
            }
        }
		/* _________ WavyLine minOccurs = 0, maxOccurs = 1 _________ */
		WavyLinePtr Barline::getWavyLine() const
		{
			return myWavyLine;
		}
		void Barline::setWavyLine( const WavyLinePtr& value )
		{
			if( value )
			{
				myWavyLine = value;
			}
		}
		bool Barline::getHasWavyLine() const
		{
			return myHasWavyLine;
		}
		void Barline::setHasWavyLine( const bool value )
		{
			myHasWavyLine = value;
		}
		/* _________ Segno minOccurs = 0, maxOccurs = 1 _________ */
		SegnoPtr Barline::getSegno() const
		{
			return mySegno;
		}
		void Barline::setSegno( const SegnoPtr& value )
		{
			if( value )
			{
				mySegno = value;
			}
		}
		bool Barline::getHasSegno() const
		{
			return myHasSegno;
		}
		void Barline::setHasSegno( const bool value )
		{
			myHasSegno = value;
		}
		/* _________ Coda minOccurs = 0, maxOccurs = 1 _________ */
		CodaPtr Barline::getCoda() const
		{
			return myCoda;
		}
		void Barline::setCoda( const CodaPtr& value )
		{
			if( value )
			{
				myCoda = value;
			}
		}
		bool Barline::getHasCoda() const
		{
			return myHasCoda;
		}
		void Barline::setHasCoda( const bool value )
		{
			myHasCoda = value;
		}
		/* _________ Fermata minOccurs = 0, maxOccurs = 2 _________ */
		const FermataSet& Barline::getFermataSet() const
		{
			return myFermataSet;
		}
		void Barline::removeFermata( const FermataSetIterConst& value )
		{
			if ( value != myFermataSet.cend() )
			{
				if ( myFermataSet.size() > 0 )
				{
					myFermataSet.erase( value );
				}
			}
		}
		void Barline::addFermata( const FermataPtr& value )
		{
			if ( value )
			{
                if ( myFermataSet.size() < 2 )
                {
                    myFermataSet.push_back( value );
                }
			}
		}
		void Barline::clearFermataSet()
		{
			myFermataSet.clear();
		}
		FermataPtr Barline::getFermata( const FermataSetIterConst& setIterator ) const
		{
			if( setIterator != myFermataSet.cend() )
			{
				return *setIterator;
			}
			return FermataPtr();
		}
		/* _________ Ending minOccurs = 0, maxOccurs = 1 _________ */
		EndingPtr Barline::getEnding() const
		{
			return myEnding;
		}
		void Barline::setEnding( const EndingPtr& value )
		{
			if( value )
			{
				myEnding = value;
			}
		}
		bool Barline::getHasEnding() const
		{
			return myHasEnding;
		}
		void Barline::setHasEnding( const bool value )
		{
			myHasEnding = value;
		}
		/* _________ Repeat minOccurs = 0, maxOccurs = 1 _________ */
		RepeatPtr Barline::getRepeat() const
		{
			return myRepeat;
		}
		void Barline::setRepeat( const RepeatPtr& value )
		{
			if( value )
			{
				myRepeat = value;
			}
		}
		bool Barline::getHasRepeat() const
		{
			return myHasRepeat;
		}
		void Barline::setHasRepeat( const bool value )
		{
			myHasRepeat = value;
		}

        
        
        /**************** GroupingAttributes ****************/
        /* 6337 */
        GroupingAttributes::GroupingAttributes()
        :type( types::StartStopSingle::single )
        ,number( types::XsToken( "1" ) )
        ,memberOf()
        ,hasType( true )
        ,hasNumber( false )
        ,hasMemberOf( false )
        {}
        
        bool GroupingAttributes::hasValues() const
        {
            return hasType ||
            hasNumber ||
            hasMemberOf;
        }
        
        std::ostream& GroupingAttributes::toStream( std::ostream& os ) const
        {
            if ( hasValues() )
            {
                streamAttribute( os, type, "type", hasType );
                streamAttribute( os, number, "number", hasNumber );
                streamAttribute( os, memberOf, "member-of", hasMemberOf );
            }
            return os;
        }
        
		Grouping::Grouping()
		:myAttributes( std::make_shared<GroupingAttributes>() )
		,myFeatureSet()
		{}
		bool Grouping::hasAttributes() const
		{
			return myAttributes->hasValues();
		}
		std::ostream& Grouping::streamAttributes( std::ostream& os ) const
		{
			return myAttributes->toStream( os );
			return os;
		}
		std::ostream& Grouping::streamName( std::ostream& os ) const
		{
			os << "grouping";
			return os;
		}
		bool Grouping::hasContents() const
		{
			return myFeatureSet.size() > 0;
		}
		std::ostream& Grouping::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
		{
			if ( hasContents() )
            {
                for ( auto x : myFeatureSet )
                {
                    os << std::endl;
                    x->toStream( os, indentLevel+1 );
                }
                isOneLineOnly = false;
                os << std::endl;
            }
            else
            {
                isOneLineOnly = true;
            }
            return os;
		}
		GroupingAttributesPtr Grouping::getAttributes() const
		{
			return myAttributes;
		}
		void Grouping::setAttributes( const GroupingAttributesPtr& value )
		{
			if ( value )
			{
				myAttributes = value;
			}
		}
		/* _________ Feature minOccurs = 0, maxOccurs = unbounded _________ */
		const FeatureSet& Grouping::getFeatureSet() const
		{
			return myFeatureSet;
		}
		void Grouping::removeFeature( const FeatureSetIterConst& value )
		{
			if ( value != myFeatureSet.cend() )
			{
				myFeatureSet.erase( value );
			}
		}
		void Grouping::addFeature( const FeaturePtr& value )
		{
			if ( value )
			{
				myFeatureSet.push_back( value );
			}
		}
		void Grouping::clearFeatureSet()
		{
			myFeatureSet.clear();
		}
		FeaturePtr Grouping::getFeature( const FeatureSetIterConst& setIterator ) const
		{
			if( setIterator != myFeatureSet.cend() )
			{
				return *setIterator;
			}
			return FeaturePtr();
		}
        
        Work::Work()
		:myWorkNumber( makeWorkNumber() )
		,myHasWorkNumber( false )
		,myWorkTitle( makeWorkTitle() )
		,myHasWorkTitle( false )
		,myOpus( makeOpus() )
		,myHasOpus( false )
		{}
		bool Work::hasAttributes() const
		{
			return false;
		}
		std::ostream& Work::streamAttributes( std::ostream& os ) const
		{
			return os;
		}
		std::ostream& Work::streamName( std::ostream& os ) const
		{
			os << "work";
			return os;
		}
		bool Work::hasContents() const
		{
			return myHasWorkNumber || myHasWorkTitle || myHasOpus;
		}
		std::ostream& Work::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
		{
			if ( myHasWorkNumber )
            {
                os << std::endl;
                myWorkNumber->toStream( os, indentLevel+1 );
            }
            if ( myHasWorkTitle )
            {
                os << std::endl;
                myWorkTitle->toStream( os, indentLevel+1 );
            }
            if ( myHasOpus )
            {
                os << std::endl;
                myOpus->toStream( os, indentLevel+1 );
            }
            isOneLineOnly = ! hasContents();
            if ( ! isOneLineOnly )
            {
                os << std::endl;
            }
            return os;
		}
		/* _________ WorkNumber minOccurs = 0, maxOccurs = 1 _________ */
		WorkNumberPtr Work::getWorkNumber() const
		{
			return myWorkNumber;
		}
		void Work::setWorkNumber( const WorkNumberPtr& value )
		{
			if( value )
			{
				myWorkNumber = value;
			}
		}
		bool Work::getHasWorkNumber() const
		{
			return myHasWorkNumber;
		}
		void Work::setHasWorkNumber( const bool value )
		{
			myHasWorkNumber = value;
		}
		/* _________ WorkTitle minOccurs = 0, maxOccurs = 1 _________ */
		WorkTitlePtr Work::getWorkTitle() const
		{
			return myWorkTitle;
		}
		void Work::setWorkTitle( const WorkTitlePtr& value )
		{
			if( value )
			{
				myWorkTitle = value;
			}
		}
		bool Work::getHasWorkTitle() const
		{
			return myHasWorkTitle;
		}
		void Work::setHasWorkTitle( const bool value )
		{
			myHasWorkTitle = value;
		}
		/* _________ Opus minOccurs = 0, maxOccurs = 1 _________ */
		OpusPtr Work::getOpus() const
		{
			return myOpus;
		}
		void Work::setOpus( const OpusPtr& value )
		{
			if( value )
			{
				myOpus = value;
			}
		}
		bool Work::getHasOpus() const
		{
			return myHasOpus;
		}
		void Work::setHasOpus( const bool value )
		{
			myHasOpus = value;
		}
        LayoutGroup::LayoutGroup()
		:myPageLayout( makePageLayout() )
        ,myHasPageLayout( false )
        ,mySystemLayout( makeSystemLayout() )
        ,myHasSystemLayout( false )
        ,myStaffLayoutSet()
		{}
		bool LayoutGroup::hasAttributes() const
		{
			return false;
		}
		std::ostream& LayoutGroup::streamAttributes( std::ostream& os ) const
		{
			return os;
		}
		std::ostream& LayoutGroup::streamName( std::ostream& os ) const
		{
			os << "work";
			return os;
		}
		bool LayoutGroup::hasContents() const
		{
			return myHasPageLayout || myHasSystemLayout || myStaffLayoutSet.size() > 0;
		}
		std::ostream& LayoutGroup::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
		{
			if ( hasContents() )
            {
                bool isFirst = true;
                if ( myHasPageLayout )
                {
                    myPageLayout->toStream( os, indentLevel );
                    isFirst = false;
                }
                if ( myHasSystemLayout )
                {
                    if ( !isFirst )
                    {
                        os << std::endl;
                        isFirst = false;
                    }
                    mySystemLayout->toStream( os, indentLevel );
                }
                if ( myStaffLayoutSet.size() > 0 )
                {
                    for ( auto it = myStaffLayoutSet.cbegin();
                         it != myStaffLayoutSet.cend(); ++it )
                    {
                        if ( it == myStaffLayoutSet.cbegin() )
                        {
                            if ( !isFirst )
                            {
                                os << std::endl;
                                isFirst = false;
                            }
                        }
                        else
                        {
                            os << std::endl;
                        }
                        (*it)->toStream( os, indentLevel );
                    }
                }
                isOneLineOnly = false;
            }
            else
            {
                isOneLineOnly = true;
            }
            return os;
		}
        /* _________ PageLayout minOccurs = 0, maxOccurs = 1 _________ */
        PageLayoutPtr LayoutGroup::getPageLayout() const
        {
            return myPageLayout;
        }
        void LayoutGroup::setPageLayout( const PageLayoutPtr& value )
        {
            if ( value )
            {
                myPageLayout = value;
            }
        }
        bool LayoutGroup::getHasPageLayout() const
        {
            return myHasPageLayout;
        }
        void LayoutGroup::setHasPageLayout( const bool value )
        {
            myHasPageLayout = value;
        }
        /* _________ SystemLayout minOccurs = 0, maxOccurs = 1 _________ */
        SystemLayoutPtr LayoutGroup::getSystemLayout() const
        {
            return mySystemLayout;
        }
        void LayoutGroup::setSystemLayout( const SystemLayoutPtr& value )
        {
            if ( value )
            {
                mySystemLayout = value;
            }
        }
        bool LayoutGroup::getHasSystemLayout() const
        {
            return myHasSystemLayout;
        }
        void LayoutGroup::setHasSystemLayout( const bool value )
        {
            myHasSystemLayout = value;
        }
        /* _________ StaffLayout minOccurs = 0, maxOccurs = unbounded _________ */
        const StaffLayoutSet& LayoutGroup::getStaffLayoutSet() const
        {
            return myStaffLayoutSet;
        }
        void LayoutGroup::addStaffLayout( const StaffLayoutPtr& value )
        {
            if ( value )
            {
                myStaffLayoutSet.push_back( value );
            }
        }
        void LayoutGroup::removeStaffLayout( const StaffLayoutSetIterConst& value )
        {
            if ( value != myStaffLayoutSet.cend() )
            {
                myStaffLayoutSet.erase( value );
            }
        }
        void LayoutGroup::clearStaffLayoutSet()
        {
            myStaffLayoutSet.clear();
        }
        StaffLayoutPtr LayoutGroup::getStaffLayout( const StaffLayoutSetIterConst& setIterator ) const
        {
            if( setIterator != myStaffLayoutSet.cend() )
            {
                return *setIterator;
            }
            return StaffLayoutPtr();
        }
        
        Defaults::Defaults()
		:myScaling( makeScaling() )
		,myHasScaling( false )
		,myLayoutGroup( makeLayoutGroup() )
        ,myAppearance( makeAppearance() )
		,myHasAppearance( false )
		,myMusicFont( makeMusicFont() )
		,myHasMusicFont( false )
		,myWordFont( makeWordFont() )
		,myHasWordFont( false )
		,myLyricFontSet()
		,myLyricLanguageSet()
		{}
		bool Defaults::hasAttributes() const
		{
			return false;
		}
		std::ostream& Defaults::streamAttributes( std::ostream& os ) const
		{
			return os;
		}
		std::ostream& Defaults::streamName( std::ostream& os ) const
		{
			os << "defaults";
			return os;
		}
		bool Defaults::hasContents() const
		{
			return true;
		}
		std::ostream& Defaults::streamContents( std::ostream& os, const int indentLevel, bool& isOneLineOnly ) const
		{
			isOneLineOnly = false;
			os << std::endl;
			// mySign->toStream( os, indentLevel+1 );
			throw std::runtime_error{ "not implemented" };
		}
        /* _________ Scaling minOccurs = 0, maxOccurs = 1 _________ */
		ScalingPtr Defaults::getScaling() const
		{
			return myScaling;
		}
		void Defaults::setScaling( const ScalingPtr& value )
		{
			if( value )
			{
				myScaling = value;
			}
		}
		bool Defaults::getHasScaling() const
		{
			return myHasScaling;
		}
		void Defaults::setHasScaling( const bool value )
		{
			myHasScaling = value;
		}
		/* _________ Appearance minOccurs = 0, maxOccurs = 1 _________ */
		AppearancePtr Defaults::getAppearance() const
		{
			return myAppearance;
		}
		void Defaults::setAppearance( const AppearancePtr& value )
		{
			if( value )
			{
				myAppearance = value;
			}
		}
		bool Defaults::getHasAppearance() const
		{
			return myHasAppearance;
		}
		void Defaults::setHasAppearance( const bool value )
		{
			myHasAppearance = value;
		}
		
		/* _________ MusicFont minOccurs = 0, maxOccurs = 1 _________ */
		MusicFontPtr Defaults::getMusicFont() const
		{
			return myMusicFont;
		}
		void Defaults::setMusicFont( const MusicFontPtr& value )
		{
			if( value )
			{
				myMusicFont = value;
			}
		}
		bool Defaults::getHasMusicFont() const
		{
			return myHasMusicFont;
		}
		void Defaults::setHasMusicFont( const bool value )
		{
			myHasMusicFont = value;
		}
		/* _________ WordFont minOccurs = 0, maxOccurs = 1 _________ */
		WordFontPtr Defaults::getWordFont() const
		{
			return myWordFont;
		}
		void Defaults::setWordFont( const WordFontPtr& value )
		{
			if( value )
			{
				myWordFont = value;
			}
		}
		bool Defaults::getHasWordFont() const
		{
			return myHasWordFont;
		}
		void Defaults::setHasWordFont( const bool value )
		{
			myHasWordFont = value;
		}
		/* _________ LyricFont minOccurs = 0, maxOccurs = unbounded _________ */
		const LyricFontSet& Defaults::getLyricFontSet() const
		{
			return myLyricFontSet;
		}
		void Defaults::removeLyricFont( const LyricFontSetIterConst& value )
		{
			if ( value != myLyricFontSet.cend() )
			{
				myLyricFontSet.erase( value );
			}
		}
		void Defaults::addLyricFont( const LyricFontPtr& value )
		{
			if ( value )
			{
				myLyricFontSet.push_back( value );
			}
		}
		void Defaults::clearLyricFontSet()
		{
			myLyricFontSet.clear();
		}
		LyricFontPtr Defaults::getLyricFont( const LyricFontSetIterConst& setIterator ) const
		{
			if( setIterator != myLyricFontSet.cend() )
			{
				return *setIterator;
			}
			return LyricFontPtr();
		}
		/* _________ LyricLanguage minOccurs = 0, maxOccurs = unbounded _________ */
		const LyricLanguageSet& Defaults::getLyricLanguageSet() const
		{
			return myLyricLanguageSet;
		}
		void Defaults::removeLyricLanguage( const LyricLanguageSetIterConst& value )
		{
			if ( value != myLyricLanguageSet.cend() )
			{
				myLyricLanguageSet.erase( value );
			}
		}
		void Defaults::addLyricLanguage( const LyricLanguagePtr& value )
		{
			if ( value )
			{
				myLyricLanguageSet.push_back( value );
			}
		}
		void Defaults::clearLyricLanguageSet()
		{
			myLyricLanguageSet.clear();
		}
		LyricLanguagePtr Defaults::getLyricLanguage( const LyricLanguageSetIterConst& setIterator ) const
		{
			if( setIterator != myLyricLanguageSet.cend() )
			{
				return *setIterator;
			}
			return LyricLanguagePtr();
		}

#if 1==0
#endif
        
    } // namespace e

} // namespace mx