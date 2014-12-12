/**
  * @file       MxSeqSmpNode3499.cpp
  * @class      lexicon::MxSeqSmpNode3499
  * @author     Matthew James Briggs
  * @email      matthew.james.briggs@gmail.com
  * @url        http://matthewjamesbriggs.com
  * @date       2014-12-11 16:20:29
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

/* Impl ------------------------------------------------------------------------------- */

namespace lexicon
{
	struct MxSeqSmpNode3499::Impl
	{
		Impl()
		{}

	private:
		std::vector<HMxEsFeature> myFeatureCollection;
		const static int myXsdID;
		const static std::string myXmlTypeName;
		const static std::string myCppClassName;
		const static std::string myDocumentation;

/* defaultName ------------------------------------------------------------------------ */

		/** Returns the name of this xs:element as found in the musicxml.xsd document. **/
		std::string getXmlTypeName() const
		{
			return myImpl->getXmlTypeName();
		}

		/** Returns the name of this C++ class. **/
		std::string getClassName() const
		{
			return myImpl->getClassName();
		}

		/** Returns the documentation for this musicxml type as found in the musicxml.xsd
		    document. **/
		std::string getDocumentation() const
		{
			return myImpl->getDocumentation();
		}

/* Feature Functions ------------------------------------------------------------------ */

		/** Returns the count of <Feature> elements. **/
		size_type getFeatureCount() const
		{
			return 0;
		}

		/** Returns an STL iterator into the contained collection of element handles. **/
		std::vector<HMxEsFeature>::iterator getFeatureBegin()
		{
			throw "todo: write the code.";
		}

		/** Returns an STL iterator into the contained collection of element handles. **/
		std::vector<HMxEsFeature>::iterator getFeatureEnd()
		{
			throw "todo: write the code.";
		}

		/** Returns an STL iterator into the contained collection of element handles. **/
		std::vector<HMxEsFeature>::const_iterator getFeatureBegin() const
		{
			throw "todo: write the code.";
		}

		/** Returns an STL iterator into the contained collection of element handles. **/
		std::vector<HMxEsFeature>::const_iterator getFeatureEnd() const
		{
			throw "todo: write the code.";
		}

		/** Adds the element handle to the internal collection. Returns 'true'
		    if successful, returns 'false' to indicate failure.  If you try to
		    add more elements than is allowed by MaxOccurs, the this function will
		    fail.  If you try to add a nullptr this function will fail. **/
		bool addFeature( const std::vector<HMxEsFeature>::iterator& value_in )
		{
			return 0;
		}

		/** Removes the element handle to the internal collection. Returns 'true'
		    if successful, returns 'false' to indicate failure.  If you try to
		    remove more elements that would result in a count less than MinOccurs,
		    the this function will fail. **/
		bool removeFeature( const std::vector<HMxEsFeature>::iterator& value_in )
		{
			return 0;
		}

		/** Returns the minimum number of occurences of the <Feature> element.
		    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
		    the element is optional. **/
		int getFeatureMinOccurs() const
		{
			return myFeature.getMinOccurs();
		}

		/** Returns the maximum number of occurences of the <Feature> element.
		    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
		    When the specification says 'unbounded' 'getIsFeatureUnbounded' will
		    return 'true' and the return value of 'getFeatureMaxOccurs' should
		    be ignored. **/
		int getFeatureMaxOccurs() const
		{
			return myFeature.getMaxOccurs();
		}

		/** Returns 'true' if the specification says that the maximum number of
		    occurences of the <Feature> element is 'unbounded'.When this function
		    returns 'true', the value returned by 'getFeatureMaxOccurs' should
		    be ignored. **/
		int getIsFeatureUnbounded() const
		{
			return myFeature.getIsUnbounded();
		}

/* Stringing and Streaming ------------------------------------------------------------ */

		void stream( std::ostream& os_out, int indentcount_in, const char* indentchars_in ) const
		{
			return 0;
		}

	const int MxSeqSmpNode3499::Impl::myXsdID = 3499;
	const std::string MxSeqSmpNode3499::Impl::myXmlTypeName = "node-3499";
	const std::string MxSeqSmpNode3499::Impl::myCppClassName = "MxSeqSmpNode3499";
	const std::string MxSeqSmpNode3499::Impl::myDocumentation = "No XSD Documentation.";

	}; // struct MxSeqSmpNode3499::Impl

/* MxSeqSmpNode3499 ------------------------------------------------------------------- */

namespace lexicon
{

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
	std::string MxSeqSmpNode3499::getXmlTypeName()
	{
		return myImpl.getXmlTypeName();
	}

	/** Returns the name of this C++ class. **/
	std::string MxSeqSmpNode3499::getClassName()
	{
		return myImpl.getClassName();
	}

	/** Returns the documentation for this musicxml type as found in the musicxml.xsd
	    document. **/
	std::string MxSeqSmpNode3499::getDocumentation()
	{
		return myImpl.getDocumentation();
	}

/* Feature Functions ------------------------------------------------------------------ */

	/** Returns the count of <Feature> elements. **/
	size_type MxSeqSmpNode3499::getFeatureCount()
	{
		return myImpl.getFeatureCount();
	}

	/** Returns an STL iterator into the contained collection of element handles. **/
	std::vector<HMxEsFeature>::iterator MxSeqSmpNode3499::getFeatureBegin()
	{
		return myImpl.getFeatureBegin();
	}

	/** Returns an STL iterator into the contained collection of element handles. **/
	std::vector<HMxEsFeature>::iterator MxSeqSmpNode3499::getFeatureEnd()
	{
		return myImpl.getFeatureEnd();
	}

	/** Returns an STL iterator into the contained collection of element handles. **/
	std::vector<HMxEsFeature>::const_iterator MxSeqSmpNode3499::getFeatureBegin()
	{
		return myImpl.getFeatureBegin();
	}

	/** Returns an STL iterator into the contained collection of element handles. **/
	std::vector<HMxEsFeature>::const_iterator MxSeqSmpNode3499::getFeatureEnd()
	{
		return myImpl.getFeatureEnd();
	}

	/** Adds the element handle to the internal collection. Returns 'true'
	    if successful, returns 'false' to indicate failure.  If you try to
	    add more elements than is allowed by MaxOccurs, the this function will
	    fail.  If you try to add a nullptr this function will fail. **/
	bool MxSeqSmpNode3499::addFeature()
	{
		return myImpl.addFeature( value_in );
	}

	/** Removes the element handle to the internal collection. Returns 'true'
	    if successful, returns 'false' to indicate failure.  If you try to
	    remove more elements that would result in a count less than MinOccurs,
	    the this function will fail. **/
	bool MxSeqSmpNode3499::removeFeature()
	{
		return myImpl.removeFeature( value_in );
	}

	/** Returns the minimum number of occurences of the <Feature> element.
	    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
	    the element is optional. **/
	int MxSeqSmpNode3499::getFeatureMinOccurs()
	{
		return myImpl.getFeatureMinOccurs();
	}

	/** Returns the maximum number of occurences of the <Feature> element.
	    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
	    When the specification says 'unbounded' 'getIsFeatureUnbounded' will
	    return 'true' and the return value of 'getFeatureMaxOccurs' should
	    be ignored. **/
	int MxSeqSmpNode3499::getFeatureMaxOccurs()
	{
		return myImpl.getFeatureMaxOccurs();
	}

	/** Returns 'true' if the specification says that the maximum number of
	    occurences of the <Feature> element is 'unbounded'.When this function
	    returns 'true', the value returned by 'getFeatureMaxOccurs' should
	    be ignored. **/
	int MxSeqSmpNode3499::getIsFeatureUnbounded()
	{
		return myImpl.getIsFeatureUnbounded();
	}

/* Stringing and Streaming ------------------------------------------------------------ */

	void MxSeqSmpNode3499::stream()
	{
		myImpl.stream( os_outindentcount_inindentchars_in );
	}


} // namespace lexicon

