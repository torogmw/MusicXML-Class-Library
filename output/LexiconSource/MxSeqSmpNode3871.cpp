/**
  * @file       MxSeqSmpNode3871.cpp
  * @class      lexicon::MxSeqSmpNode3871
  * @author     Matthew James Briggs
  * @email      matthew.james.briggs@gmail.com
  * @url        http://matthewjamesbriggs.com
  * @date       2014-12-11 16:20:29
  * @project    Lexicon
  * @version    1.0
  * @musicxmlid 3871
  * 
  * @brief This class represents an xs:sequence object from musicxml.xsd.
  * 
  * Full description goes here.
  * 
 **/

#include "MxSeqSmpNode3871.h"

/* Impl ------------------------------------------------------------------------------- */

namespace lexicon
{
	struct MxSeqSmpNode3871::Impl
	{
		Impl()
		{}

	private:
		HMxEsRootStep myRootStep;
		bool myRootStepIsPresent;
		HMxEsRootAlter myRootAlter;
		bool myRootAlterIsPresent;
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

/* RootStep Functions ----------------------------------------------------------------- */

		/** Tells you whether or not <RootStep> is present. If <RootStep> is required,
		    this will always return 'true'. If <RootStep> is required, no corresponding
		    'setIsRootStepPresent' will exist. **/
		bool getIsRootStepPresent() const
		{
			return 0;
		}

		/** Returns a shared pointer handle to the <RootStep> element. Note that
		    if getIsRootStepPresent is false, this value will still exist (even
		    though it is not in the xml document) and you should ignore it. **/
		HMxEsRootStep getRootStep() const
		{
			if( myRootStep )
			{
				return myRootStep;
			}
			else
			{
				return std::make_shared<HMxEsRootStep>();
			}
		}

		/** Sets the internal shared pointer handle for the <RootStep> element.
		     **/
		int setRootStep( const HMxEsRootStep& value_in )
		{
			myRootStep = value_in;
		}

		/** Returns the minimum number of occurences of the <RootStep> element.
		    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
		    the element is optional. **/
		int getRootStepMinOccurs() const
		{
			return myRootStep.getMinOccurs();
		}

		/** Returns the maximum number of occurences of the <RootStep> element.
		    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
		    When the specification says 'unbounded' 'getIsRootStepUnbounded' will
		    return 'true' and the return value of 'getRootStepMaxOccurs' should
		    be ignored. **/
		int getRootStepMaxOccurs() const
		{
			return myRootStep.getMaxOccurs();
		}

		/** Returns 'true' if the specification says that the maximum number of
		    occurences of the <RootStep> element is 'unbounded'.When this function
		    returns 'true', the value returned by 'getRootStepMaxOccurs' should
		    be ignored. **/
		int getIsRootStepUnbounded() const
		{
			return myRootStep.getIsUnbounded();
		}

/* RootAlter Functions ---------------------------------------------------------------- */

		/** Tells you whether or not <RootAlter> is present. If <RootAlter> is
		    required, this will always return 'true'. If <RootAlter> is required,
		    no corresponding 'setIsRootAlterPresent' will exist. **/
		bool getIsRootAlterPresent() const
		{
			return 0;
		}

		void setIsRootAlterPresent( const bool& value_in )
		{
			return 0;
		}

		/** Returns a shared pointer handle to the <RootAlter> element. Note that
		    if getIsRootAlterPresent is false, this value will still exist (even
		    though it is not in the xml document) and you should ignore it. **/
		HMxEsRootAlter getRootAlter() const
		{
			if( myRootAlter )
			{
				return myRootAlter;
			}
			else
			{
				return std::make_shared<HMxEsRootAlter>();
			}
		}

		/** Sets the internal shared pointer handle for the <RootAlter> element.
		    Note that if setIsRootAlterPresent is false, the internal shared pointer
		    will not be altered and will hold a value that does not exist in xml. **/
		int setRootAlter( const HMxEsRootAlter& value_in )
		{
			myRootAlter = value_in;
		}

		/** Returns the minimum number of occurences of the <RootAlter> element.
		    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
		    the element is optional. **/
		int getRootAlterMinOccurs() const
		{
			return myRootAlter.getMinOccurs();
		}

		/** Returns the maximum number of occurences of the <RootAlter> element.
		    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
		    When the specification says 'unbounded' 'getIsRootAlterUnbounded' will
		    return 'true' and the return value of 'getRootAlterMaxOccurs' should
		    be ignored. **/
		int getRootAlterMaxOccurs() const
		{
			return myRootAlter.getMaxOccurs();
		}

		/** Returns 'true' if the specification says that the maximum number of
		    occurences of the <RootAlter> element is 'unbounded'.When this function
		    returns 'true', the value returned by 'getRootAlterMaxOccurs' should
		    be ignored. **/
		int getIsRootAlterUnbounded() const
		{
			return myRootAlter.getIsUnbounded();
		}

/* Stringing and Streaming ------------------------------------------------------------ */

		void stream( std::ostream& os_out, int indentcount_in, const char* indentchars_in ) const
		{
			return 0;
		}

	const int MxSeqSmpNode3871::Impl::myXsdID = 3871;
	const std::string MxSeqSmpNode3871::Impl::myXmlTypeName = "node-3871";
	const std::string MxSeqSmpNode3871::Impl::myCppClassName = "MxSeqSmpNode3871";
	const std::string MxSeqSmpNode3871::Impl::myDocumentation = "No XSD Documentation.";

	}; // struct MxSeqSmpNode3871::Impl

/* MxSeqSmpNode3871 ------------------------------------------------------------------- */

namespace lexicon
{

/* Constructor, Destructor, Copy, Assignment ------------------------------------------ */

	MxSeqSmpNode3871::MxSeqSmpNode3871()
	:myImpl( new Impl() ) {}

	MxSeqSmpNode3871::~MxSeqSmpNode3871() {}

	MxSeqSmpNode3871::MxSeqSmpNode3871( const MxSeqSmpNode3871& other )
	:myImpl( new Impl( *(other.myImpl) ) ) {}

	MxSeqSmpNode3871& MxSeqSmpNode3871::operator=( const MxSeqSmpNode3871& other )
	{
		this->myImpl = std::unique_ptr<Impl>( new Impl( *(other.myImpl) ) );
		return *this;
	}

/* defaultName ------------------------------------------------------------------------ */

	/** Returns the name of this xs:element as found in the musicxml.xsd document. **/
	std::string MxSeqSmpNode3871::getXmlTypeName()
	{
		return myImpl.getXmlTypeName();
	}

	/** Returns the name of this C++ class. **/
	std::string MxSeqSmpNode3871::getClassName()
	{
		return myImpl.getClassName();
	}

	/** Returns the documentation for this musicxml type as found in the musicxml.xsd
	    document. **/
	std::string MxSeqSmpNode3871::getDocumentation()
	{
		return myImpl.getDocumentation();
	}

/* RootStep Functions ----------------------------------------------------------------- */

	/** Tells you whether or not <RootStep> is present. If <RootStep> is required,
	    this will always return 'true'. If <RootStep> is required, no corresponding
	    'setIsRootStepPresent' will exist. **/
	bool MxSeqSmpNode3871::getIsRootStepPresent()
	{
		return myImpl.getIsRootStepPresent();
	}

	/** Returns a shared pointer handle to the <RootStep> element. Note that
	    if getIsRootStepPresent is false, this value will still exist (even
	    though it is not in the xml document) and you should ignore it. **/
	HMxEsRootStep MxSeqSmpNode3871::getRootStep()
	{
		return myImpl.getRootStep();
	}

	/** Sets the internal shared pointer handle for the <RootStep> element.
	     **/
	int MxSeqSmpNode3871::setRootStep()
	{
		return myImpl.setRootStep( value_in );
	}

	/** Returns the minimum number of occurences of the <RootStep> element.
	    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
	    the element is optional. **/
	int MxSeqSmpNode3871::getRootStepMinOccurs()
	{
		return myImpl.getRootStepMinOccurs();
	}

	/** Returns the maximum number of occurences of the <RootStep> element.
	    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
	    When the specification says 'unbounded' 'getIsRootStepUnbounded' will
	    return 'true' and the return value of 'getRootStepMaxOccurs' should
	    be ignored. **/
	int MxSeqSmpNode3871::getRootStepMaxOccurs()
	{
		return myImpl.getRootStepMaxOccurs();
	}

	/** Returns 'true' if the specification says that the maximum number of
	    occurences of the <RootStep> element is 'unbounded'.When this function
	    returns 'true', the value returned by 'getRootStepMaxOccurs' should
	    be ignored. **/
	int MxSeqSmpNode3871::getIsRootStepUnbounded()
	{
		return myImpl.getIsRootStepUnbounded();
	}

/* RootAlter Functions ---------------------------------------------------------------- */

	/** Tells you whether or not <RootAlter> is present. If <RootAlter> is
	    required, this will always return 'true'. If <RootAlter> is required,
	    no corresponding 'setIsRootAlterPresent' will exist. **/
	bool MxSeqSmpNode3871::getIsRootAlterPresent()
	{
		return myImpl.getIsRootAlterPresent();
	}

	void MxSeqSmpNode3871::setIsRootAlterPresent()
	{
		myImpl.setIsRootAlterPresent( value_in );
	}

	/** Returns a shared pointer handle to the <RootAlter> element. Note that
	    if getIsRootAlterPresent is false, this value will still exist (even
	    though it is not in the xml document) and you should ignore it. **/
	HMxEsRootAlter MxSeqSmpNode3871::getRootAlter()
	{
		return myImpl.getRootAlter();
	}

	/** Sets the internal shared pointer handle for the <RootAlter> element.
	    Note that if setIsRootAlterPresent is false, the internal shared pointer
	    will not be altered and will hold a value that does not exist in xml. **/
	int MxSeqSmpNode3871::setRootAlter()
	{
		return myImpl.setRootAlter( value_in );
	}

	/** Returns the minimum number of occurences of the <RootAlter> element.
	    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
	    the element is optional. **/
	int MxSeqSmpNode3871::getRootAlterMinOccurs()
	{
		return myImpl.getRootAlterMinOccurs();
	}

	/** Returns the maximum number of occurences of the <RootAlter> element.
	    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
	    When the specification says 'unbounded' 'getIsRootAlterUnbounded' will
	    return 'true' and the return value of 'getRootAlterMaxOccurs' should
	    be ignored. **/
	int MxSeqSmpNode3871::getRootAlterMaxOccurs()
	{
		return myImpl.getRootAlterMaxOccurs();
	}

	/** Returns 'true' if the specification says that the maximum number of
	    occurences of the <RootAlter> element is 'unbounded'.When this function
	    returns 'true', the value returned by 'getRootAlterMaxOccurs' should
	    be ignored. **/
	int MxSeqSmpNode3871::getIsRootAlterUnbounded()
	{
		return myImpl.getIsRootAlterUnbounded();
	}

/* Stringing and Streaming ------------------------------------------------------------ */

	void MxSeqSmpNode3871::stream()
	{
		myImpl.stream( os_outindentcount_inindentchars_in );
	}


} // namespace lexicon

