/**
  * @file       MxSeqSmpNode6056.cpp
  * @class      lexicon::MxSeqSmpNode6056
  * @author     Matthew James Briggs
  * @email      matthew.james.briggs@gmail.com
  * @url        http://matthewjamesbriggs.com
  * @date       2014-12-11 16:20:38
  * @project    Lexicon
  * @version    1.0
  * @musicxmlid 6056
  * 
  * @brief This class represents an xs:sequence object from musicxml.xsd.
  * 
  * Full description goes here.
  * 
 **/

#include "MxSeqSmpNode6056.h"

/* Impl ------------------------------------------------------------------------------- */

namespace lexicon
{
	struct MxSeqSmpNode6056::Impl
	{
		Impl()
		{}

	private:
		HMxEsLevel myLevel;
		bool myLevelIsPresent;
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

/* Level Functions -------------------------------------------------------------------- */

		/** Tells you whether or not <Level> is present. If <Level> is required,
		    this will always return 'true'. If <Level> is required, no corresponding
		    'setIsLevelPresent' will exist. **/
		bool getIsLevelPresent() const
		{
			return 0;
		}

		/** Returns a shared pointer handle to the <Level> element. Note that if
		    getIsLevelPresent is false, this value will still exist (even though
		    it is not in the xml document) and you should ignore it. **/
		HMxEsLevel getLevel() const
		{
			if( myLevel )
			{
				return myLevel;
			}
			else
			{
				return std::make_shared<HMxEsLevel>();
			}
		}

		/** Sets the internal shared pointer handle for the <Level> element.  **/
		int setLevel( const HMxEsLevel& value_in )
		{
			myLevel = value_in;
		}

		/** Returns the minimum number of occurences of the <Level> element.  i.e.
		    MinOccurs > 0 means the element is required, MinOccurs == 0 means the
		    element is optional. **/
		int getLevelMinOccurs() const
		{
			return myLevel.getMinOccurs();
		}

		/** Returns the maximum number of occurences of the <Level> element. Typically
		    the MaxOccurs is specified as either '1' or 'unbounded'.  When the
		    specification says 'unbounded' 'getIsLevelUnbounded' will return 'true'
		    and the return value of 'getLevelMaxOccurs' should be ignored. **/
		int getLevelMaxOccurs() const
		{
			return myLevel.getMaxOccurs();
		}

		/** Returns 'true' if the specification says that the maximum number of
		    occurences of the <Level> element is 'unbounded'.When this function
		    returns 'true', the value returned by 'getLevelMaxOccurs' should be
		    ignored. **/
		int getIsLevelUnbounded() const
		{
			return myLevel.getIsUnbounded();
		}

/* Stringing and Streaming ------------------------------------------------------------ */

		void stream( std::ostream& os_out, int indentcount_in, const char* indentchars_in ) const
		{
			return 0;
		}

	const int MxSeqSmpNode6056::Impl::myXsdID = 6056;
	const std::string MxSeqSmpNode6056::Impl::myXmlTypeName = "node-6056";
	const std::string MxSeqSmpNode6056::Impl::myCppClassName = "MxSeqSmpNode6056";
	const std::string MxSeqSmpNode6056::Impl::myDocumentation = "No XSD Documentation.";

	}; // struct MxSeqSmpNode6056::Impl

/* MxSeqSmpNode6056 ------------------------------------------------------------------- */

namespace lexicon
{

/* Constructor, Destructor, Copy, Assignment ------------------------------------------ */

	MxSeqSmpNode6056::MxSeqSmpNode6056()
	:myImpl( new Impl() ) {}

	MxSeqSmpNode6056::~MxSeqSmpNode6056() {}

	MxSeqSmpNode6056::MxSeqSmpNode6056( const MxSeqSmpNode6056& other )
	:myImpl( new Impl( *(other.myImpl) ) ) {}

	MxSeqSmpNode6056& MxSeqSmpNode6056::operator=( const MxSeqSmpNode6056& other )
	{
		this->myImpl = std::unique_ptr<Impl>( new Impl( *(other.myImpl) ) );
		return *this;
	}

/* defaultName ------------------------------------------------------------------------ */

	/** Returns the name of this xs:element as found in the musicxml.xsd document. **/
	std::string MxSeqSmpNode6056::getXmlTypeName()
	{
		return myImpl.getXmlTypeName();
	}

	/** Returns the name of this C++ class. **/
	std::string MxSeqSmpNode6056::getClassName()
	{
		return myImpl.getClassName();
	}

	/** Returns the documentation for this musicxml type as found in the musicxml.xsd
	    document. **/
	std::string MxSeqSmpNode6056::getDocumentation()
	{
		return myImpl.getDocumentation();
	}

/* Level Functions -------------------------------------------------------------------- */

	/** Tells you whether or not <Level> is present. If <Level> is required,
	    this will always return 'true'. If <Level> is required, no corresponding
	    'setIsLevelPresent' will exist. **/
	bool MxSeqSmpNode6056::getIsLevelPresent()
	{
		return myImpl.getIsLevelPresent();
	}

	/** Returns a shared pointer handle to the <Level> element. Note that if
	    getIsLevelPresent is false, this value will still exist (even though
	    it is not in the xml document) and you should ignore it. **/
	HMxEsLevel MxSeqSmpNode6056::getLevel()
	{
		return myImpl.getLevel();
	}

	/** Sets the internal shared pointer handle for the <Level> element.  **/
	int MxSeqSmpNode6056::setLevel()
	{
		return myImpl.setLevel( value_in );
	}

	/** Returns the minimum number of occurences of the <Level> element.  i.e.
	    MinOccurs > 0 means the element is required, MinOccurs == 0 means the
	    element is optional. **/
	int MxSeqSmpNode6056::getLevelMinOccurs()
	{
		return myImpl.getLevelMinOccurs();
	}

	/** Returns the maximum number of occurences of the <Level> element. Typically
	    the MaxOccurs is specified as either '1' or 'unbounded'.  When the
	    specification says 'unbounded' 'getIsLevelUnbounded' will return 'true'
	    and the return value of 'getLevelMaxOccurs' should be ignored. **/
	int MxSeqSmpNode6056::getLevelMaxOccurs()
	{
		return myImpl.getLevelMaxOccurs();
	}

	/** Returns 'true' if the specification says that the maximum number of
	    occurences of the <Level> element is 'unbounded'.When this function
	    returns 'true', the value returned by 'getLevelMaxOccurs' should be
	    ignored. **/
	int MxSeqSmpNode6056::getIsLevelUnbounded()
	{
		return myImpl.getIsLevelUnbounded();
	}

/* Stringing and Streaming ------------------------------------------------------------ */

	void MxSeqSmpNode6056::stream()
	{
		myImpl.stream( os_outindentcount_inindentchars_in );
	}


} // namespace lexicon

