/**
  * @file       MxSeqSmpNode3499.cpp
  * @class      lexicon::MxSeqSmpNode3499
  * @author     Matthew James Briggs
  * @email      matthew.james.briggs@gmail.com
  * @url        http://matthewjamesbriggs.com
  * @date       2014-12-14 19:05:54
  * @project    Lexicon
  * @version    1.0
  * @musicxmlid 3499
  * 
  * @brief This class represents an xs:sequence object from musicxml.xsd.
  * 
  * Full description goes here.
  * 
 **/

#include "MxSeqSmpNode3499.h"
#include "_hidden_indent.h"

/* Impl ------------------------------------------------------------------------------- */

namespace lexicon
{
	struct MxSeqSmpNode3499::Impl
	{
		Impl()
		:myFeatureCollection()
		{}

	private:
		MxEsFeatures myFeatureCollection;
		const static int myXsdID;
		const static std::string myXmlTypeName;
		const static std::string myCppClassName;
		const static std::string myDocumentation;


		public:

/* defaultName ------------------------------------------------------------------------ */

		/** Returns the name of this xs:element as found in the musicxml.xsd document. **/
		std::string getXmlTypeName() const
		{
			return myXmlTypeName;
		}

		/** Returns the name of this C++ class. **/
		std::string getClassName() const
		{
			return myCppClassName;
		}

		/** Returns the documentation for this musicxml type as found in the musicxml.xsd
		    document. **/
		std::string getDocumentation() const
		{
			return myDocumentation;
		}

/* Feature Functions ------------------------------------------------------------------ */

		/** Returns the count of <Feature> elements. **/
		std::size_t getFeatureCount() const
		{
			return myFeatureCollection.size();
		}

		/** Returns an STL iterator into the contained collection of element handles. **/
		MxEsFeaturesIter getFeatureBegin()
		{
			return myFeatureCollection.begin();
		}

		/** Returns an STL iterator into the contained collection of element handles. **/
		MxEsFeaturesIter getFeatureEnd()
		{
			return myFeatureCollection.end();
		}

		/** Returns an STL iterator into the contained collection of element handles. **/
		MxEsFeaturesIterConst getFeatureBeginConst() const
		{
			return myFeatureCollection.cbegin();
		}

		/** Returns an STL iterator into the contained collection of element handles. **/
		MxEsFeaturesIterConst getFeatureEndConst() const
		{
			return myFeatureCollection.cend();
		}

		/** Adds the element handle to the internal collection. Returns 'true'
		    if successful, returns 'false' to indicate failure.  If you try to
		    add more elements than is allowed by MaxOccurs, the this function will
		    fail.  If you try to add a nullptr this function will fail. **/
		bool addFeature( const MxEsFeaturesIter& value_in )
		{
			if( myFeatureCollection.size() >= ( getFeatureMaxOccurs() - 1 ) )
			{
				return false;
			}
			else if( ! *value_in )
			{
				return false;
			}
			myFeatureCollection.push_back( value_in );
			return true;
		}

		/** Removes the element handle to the internal collection. Returns 'true'
		    if successful, returns 'false' to indicate failure.  If you try to
		    remove elements that would result in a count less than MinOccurs, the
		    this function will fail. **/
		bool removeFeature( const MxEsFeaturesIter& value_in )
		{
			if( myFeatureCollection.size() <= getFeatureMinOccurs() )
			{
				return false;
			}
			else if( value_in == getFeatureEndConst() )
			{
				return false;
			}
			myFeatureCollection.erase( value_in );
			return true;
		}

		/** Returns the minimum number of occurences of the <Feature> element.
		    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
		    the element is optional. **/
		int getFeatureMinOccurs() const
		{
			return 0;
		}

		/** Returns the maximum number of occurences of the <Feature> element.
		    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
		    When the specification says 'unbounded' 'getIsFeatureUnbounded' will
		    return 'true' and the return value of 'getFeatureMaxOccurs' should
		    be ignored. **/
		int getFeatureMaxOccurs() const
		{
			return 32767;
		}

		/** Returns 'true' if the specification says that the maximum number of
		    occurences of the <Feature> element is 'unbounded'.When this function
		    returns 'true', the value returned by 'getFeatureMaxOccurs' should
		    be ignored. **/
		int getIsFeatureUnbounded() const
		{
			return true;
		}

/* Stringing and Streaming ------------------------------------------------------------ */

		std::ostream& stream( std::ostream& os_out, int indentcount_in, const char* indentchars_in ) const
		{
			bool isFirst = true;
			if( getFeatureCount() > 0 )
			{
				for ( auto it = getFeatureBeginConst(); it != getFeatureEndConst(); ++it )
				{
					if ( isFirst == false )
					{
						os_out << std::endl;
					}
					hidden::indent( os_out, indentcount_in, indentchars_in );
					(*it)->stream( os_out );
					isFirst = false;
				}
			}
			return os_out;
		}

	}; // struct MxSeqSmpNode3499::Impl

	const int MxSeqSmpNode3499::Impl::myXsdID = 3499;
	const std::string MxSeqSmpNode3499::Impl::myXmlTypeName = "node-3499";
	const std::string MxSeqSmpNode3499::Impl::myCppClassName = "MxSeqSmpNode3499";
	const std::string MxSeqSmpNode3499::Impl::myDocumentation = "No XSD Documentation.";

/* MxSeqSmpNode3499 ------------------------------------------------------------------- */


/* Constructor, Destructor, Copy, Assignment ------------------------------------------ */

	MxSeqSmpNode3499::MxSeqSmpNode3499()
	:myImpl( new Impl() ) {}

	MxSeqSmpNode3499::~MxSeqSmpNode3499() {}

	MxSeqSmpNode3499::MxSeqSmpNode3499( const MxSeqSmpNode3499& other )
	:myImpl( new Impl( *(other.myImpl) ) ) {}

	MxSeqSmpNode3499& MxSeqSmpNode3499::operator=( const MxSeqSmpNode3499& other )
	{
		this->myImpl = std::unique_ptr<Impl>( new Impl( *(other.myImpl) ) );
		return *this;
	}

/* defaultName ------------------------------------------------------------------------ */

	/** Returns the name of this xs:element as found in the musicxml.xsd document. **/
	std::string MxSeqSmpNode3499::getXmlTypeName() const
	{
		return myImpl->getXmlTypeName();
	}

	/** Returns the name of this C++ class. **/
	std::string MxSeqSmpNode3499::getClassName() const
	{
		return myImpl->getClassName();
	}

	/** Returns the documentation for this musicxml type as found in the musicxml.xsd
	    document. **/
	std::string MxSeqSmpNode3499::getDocumentation() const
	{
		return myImpl->getDocumentation();
	}

/* Feature Functions ------------------------------------------------------------------ */

	/** Returns the count of <Feature> elements. **/
	std::size_t MxSeqSmpNode3499::getFeatureCount() const
	{
		return myImpl->getFeatureCount();
	}

	/** Returns an STL iterator into the contained collection of element handles. **/
	MxEsFeaturesIter MxSeqSmpNode3499::getFeatureBegin()
	{
		return myImpl->getFeatureBegin();
	}

	/** Returns an STL iterator into the contained collection of element handles. **/
	MxEsFeaturesIter MxSeqSmpNode3499::getFeatureEnd()
	{
		return myImpl->getFeatureEnd();
	}

	/** Returns an STL iterator into the contained collection of element handles. **/
	MxEsFeaturesIterConst MxSeqSmpNode3499::getFeatureBeginConst() const
	{
		return myImpl->getFeatureBeginConst();
	}

	/** Returns an STL iterator into the contained collection of element handles. **/
	MxEsFeaturesIterConst MxSeqSmpNode3499::getFeatureEndConst() const
	{
		return myImpl->getFeatureEndConst();
	}

	/** Adds the element handle to the internal collection. Returns 'true'
	    if successful, returns 'false' to indicate failure.  If you try to
	    add more elements than is allowed by MaxOccurs, the this function will
	    fail.  If you try to add a nullptr this function will fail. **/
	bool MxSeqSmpNode3499::addFeature( const MxEsFeaturesIter& value_in )
	{
		return myImpl->addFeature( value_in );
	}

	/** Removes the element handle to the internal collection. Returns 'true'
	    if successful, returns 'false' to indicate failure.  If you try to
	    remove elements that would result in a count less than MinOccurs, the
	    this function will fail. **/
	bool MxSeqSmpNode3499::removeFeature( const MxEsFeaturesIter& value_in )
	{
		return myImpl->removeFeature( value_in );
	}

	/** Returns the minimum number of occurences of the <Feature> element.
	    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
	    the element is optional. **/
	int MxSeqSmpNode3499::getFeatureMinOccurs() const
	{
		return myImpl->getFeatureMinOccurs();
	}

	/** Returns the maximum number of occurences of the <Feature> element.
	    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
	    When the specification says 'unbounded' 'getIsFeatureUnbounded' will
	    return 'true' and the return value of 'getFeatureMaxOccurs' should
	    be ignored. **/
	int MxSeqSmpNode3499::getFeatureMaxOccurs() const
	{
		return myImpl->getFeatureMaxOccurs();
	}

	/** Returns 'true' if the specification says that the maximum number of
	    occurences of the <Feature> element is 'unbounded'.When this function
	    returns 'true', the value returned by 'getFeatureMaxOccurs' should
	    be ignored. **/
	int MxSeqSmpNode3499::getIsFeatureUnbounded() const
	{
		return myImpl->getIsFeatureUnbounded();
	}

/* Stringing and Streaming ------------------------------------------------------------ */

	std::ostream& MxSeqSmpNode3499::stream( std::ostream& os_out, int indentcount_in, const char* indentchars_in ) const
	{
		return myImpl->stream( os_out, indentcount_in, indentchars_in );
	}


} // namespace lexicon

