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

#if 1==0

#endif
        
    } // namespace e

} // namespace mx