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
#if 1==0

#endif
        
    } // namespace e

} // namespace mx