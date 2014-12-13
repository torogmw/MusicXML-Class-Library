/**
  * @file       MxSeqSmpNode3154.cpp
  * @class      lexicon::MxSeqSmpNode3154
  * @author     Matthew James Briggs
  * @email      matthew.james.briggs@gmail.com
  * @url        http://matthewjamesbriggs.com
  * @date       2014-12-12 16:19:45
  * @project    Lexicon
  * @version    1.0
  * @musicxmlid 3154
  * 
  * @brief This class represents an xs:sequence object from musicxml.xsd.
  * 
  * Full description goes here.
  * 
 **/

#include "MxSeqSmpNode3154.h"

/* Impl ------------------------------------------------------------------------------- */

namespace lexicon
{
	struct MxSeqSmpNode3154::Impl
	{
		Impl()
		:myBassStep( std::make_shared<MxEsBassStep>() )
		,myIsBassStepPresent( true )
		,myBassAlter( std::make_shared<MxEsBassAlter>() )
		,myIsBassAlterPresent( false )
		{}

	private:
		HMxEsBassStep myBassStep;
		bool myIsBassStepPresent;
		HMxEsBassAlter myBassAlter;
		bool myIsBassAlterPresent;
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

/* BassStep Functions ----------------------------------------------------------------- */

		/** Tells you whether or not <BassStep> is present. If <BassStep> is required,
		    this will always return 'true'. If <BassStep> is required, no corresponding
		    'setIsBassStepPresent' will exist. **/
		bool getIsBassStepPresent() const
		{
			return myIsBassStepPresent;
		}

		/** Returns a shared pointer handle to the <BassStep> element. Note that
		    if getIsBassStepPresent is false, this value will still exist (even
		    though it is not in the xml document) and you should ignore it. **/
		HMxEsBassStep getBassStep() const
		{
			return myBassStep;
			
		}

		/** Sets the internal shared pointer handle for the <BassStep> element.
		     **/
		void setBassStep( const HMxEsBassStep& value_in )
		{
			myBassStep = value_in;
		}

		/** Returns the minimum number of occurences of the <BassStep> element.
		    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
		    the element is optional. **/
		int getBassStepMinOccurs() const
		{
			return myBassStep->getMinOccurs();
		}

		/** Returns the maximum number of occurences of the <BassStep> element.
		    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
		    When the specification says 'unbounded' 'getIsBassStepUnbounded' will
		    return 'true' and the return value of 'getBassStepMaxOccurs' should
		    be ignored. **/
		int getBassStepMaxOccurs() const
		{
			return myBassStep->getMaxOccurs();
		}

		/** Returns 'true' if the specification says that the maximum number of
		    occurences of the <BassStep> element is 'unbounded'.When this function
		    returns 'true', the value returned by 'getBassStepMaxOccurs' should
		    be ignored. **/
		bool getIsBassStepUnbounded() const
		{
			return myBassStep->getIsMaxOccursUnbounded();
		}

/* BassAlter Functions ---------------------------------------------------------------- */

		/** Tells you whether or not <BassAlter> is present. If <BassAlter> is
		    required, this will always return 'true'. If <BassAlter> is required,
		    no corresponding 'setIsBassAlterPresent' will exist. **/
		bool getIsBassAlterPresent() const
		{
			return myIsBassAlterPresent;
		}

		void setIsBassAlterPresent( const bool& value_in )
		{
			myIsBassAlterPresent = value_in;
		}

		/** Returns a shared pointer handle to the <BassAlter> element. Note that
		    if getIsBassAlterPresent is false, this value will still exist (even
		    though it is not in the xml document) and you should ignore it. **/
		HMxEsBassAlter getBassAlter() const
		{
			return myBassAlter;
			
		}

		/** Sets the internal shared pointer handle for the <BassAlter> element.
		    Note that if setIsBassAlterPresent is false, the internal shared pointer
		    will not be altered and will hold a value that does not exist in xml. **/
		void setBassAlter( const HMxEsBassAlter& value_in )
		{
			myBassAlter = value_in;
		}

		/** Returns the minimum number of occurences of the <BassAlter> element.
		    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
		    the element is optional. **/
		int getBassAlterMinOccurs() const
		{
			return myBassAlter->getMinOccurs();
		}

		/** Returns the maximum number of occurences of the <BassAlter> element.
		    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
		    When the specification says 'unbounded' 'getIsBassAlterUnbounded' will
		    return 'true' and the return value of 'getBassAlterMaxOccurs' should
		    be ignored. **/
		int getBassAlterMaxOccurs() const
		{
			return myBassAlter->getMaxOccurs();
		}

		/** Returns 'true' if the specification says that the maximum number of
		    occurences of the <BassAlter> element is 'unbounded'.When this function
		    returns 'true', the value returned by 'getBassAlterMaxOccurs' should
		    be ignored. **/
		bool getIsBassAlterUnbounded() const
		{
			return myBassAlter->getIsMaxOccursUnbounded();
		}

/* Stringing and Streaming ------------------------------------------------------------ */

		std::ostream& stream( std::ostream& os_out, int indentcount_in, const char* indentchars_in ) const
		{
			throw "todo: write the code.";
		}

	}; // struct MxSeqSmpNode3154::Impl

	const int MxSeqSmpNode3154::Impl::myXsdID = 3154;
	const std::string MxSeqSmpNode3154::Impl::myXmlTypeName = "node-3154";
	const std::string MxSeqSmpNode3154::Impl::myCppClassName = "MxSeqSmpNode3154";
	const std::string MxSeqSmpNode3154::Impl::myDocumentation = "No XSD Documentation.";

/* MxSeqSmpNode3154 ------------------------------------------------------------------- */


/* Constructor, Destructor, Copy, Assignment ------------------------------------------ */

	MxSeqSmpNode3154::MxSeqSmpNode3154()
	:myImpl( new Impl() ) {}

	MxSeqSmpNode3154::~MxSeqSmpNode3154() {}

	MxSeqSmpNode3154::MxSeqSmpNode3154( const MxSeqSmpNode3154& other )
	:myImpl( new Impl( *(other.myImpl) ) ) {}

	MxSeqSmpNode3154& MxSeqSmpNode3154::operator=( const MxSeqSmpNode3154& other )
	{
		this->myImpl = std::unique_ptr<Impl>( new Impl( *(other.myImpl) ) );
		return *this;
	}

/* defaultName ------------------------------------------------------------------------ */

	/** Returns the name of this xs:element as found in the musicxml.xsd document. **/
	std::string MxSeqSmpNode3154::getXmlTypeName() const
	{
		return myImpl->getXmlTypeName();
	}

	/** Returns the name of this C++ class. **/
	std::string MxSeqSmpNode3154::getClassName() const
	{
		return myImpl->getClassName();
	}

	/** Returns the documentation for this musicxml type as found in the musicxml.xsd
	    document. **/
	std::string MxSeqSmpNode3154::getDocumentation() const
	{
		return myImpl->getDocumentation();
	}

/* BassStep Functions ----------------------------------------------------------------- */

	/** Tells you whether or not <BassStep> is present. If <BassStep> is required,
	    this will always return 'true'. If <BassStep> is required, no corresponding
	    'setIsBassStepPresent' will exist. **/
	bool MxSeqSmpNode3154::getIsBassStepPresent() const
	{
		return myImpl->getIsBassStepPresent();
	}

	/** Returns a shared pointer handle to the <BassStep> element. Note that
	    if getIsBassStepPresent is false, this value will still exist (even
	    though it is not in the xml document) and you should ignore it. **/
	HMxEsBassStep MxSeqSmpNode3154::getBassStep() const
	{
		return myImpl->getBassStep();
	}

	/** Sets the internal shared pointer handle for the <BassStep> element.
	     **/
	void MxSeqSmpNode3154::setBassStep( const HMxEsBassStep& value_in )
	{
		myImpl->setBassStep( value_in );
	}

	/** Returns the minimum number of occurences of the <BassStep> element.
	    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
	    the element is optional. **/
	int MxSeqSmpNode3154::getBassStepMinOccurs() const
	{
		return myImpl->getBassStepMinOccurs();
	}

	/** Returns the maximum number of occurences of the <BassStep> element.
	    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
	    When the specification says 'unbounded' 'getIsBassStepUnbounded' will
	    return 'true' and the return value of 'getBassStepMaxOccurs' should
	    be ignored. **/
	int MxSeqSmpNode3154::getBassStepMaxOccurs() const
	{
		return myImpl->getBassStepMaxOccurs();
	}

	/** Returns 'true' if the specification says that the maximum number of
	    occurences of the <BassStep> element is 'unbounded'.When this function
	    returns 'true', the value returned by 'getBassStepMaxOccurs' should
	    be ignored. **/
	bool MxSeqSmpNode3154::getIsBassStepUnbounded() const
	{
		return myImpl->getIsBassStepUnbounded();
	}

/* BassAlter Functions ---------------------------------------------------------------- */

	/** Tells you whether or not <BassAlter> is present. If <BassAlter> is
	    required, this will always return 'true'. If <BassAlter> is required,
	    no corresponding 'setIsBassAlterPresent' will exist. **/
	bool MxSeqSmpNode3154::getIsBassAlterPresent() const
	{
		return myImpl->getIsBassAlterPresent();
	}

	void MxSeqSmpNode3154::setIsBassAlterPresent( const bool& value_in )
	{
		myImpl->setIsBassAlterPresent( value_in );
	}

	/** Returns a shared pointer handle to the <BassAlter> element. Note that
	    if getIsBassAlterPresent is false, this value will still exist (even
	    though it is not in the xml document) and you should ignore it. **/
	HMxEsBassAlter MxSeqSmpNode3154::getBassAlter() const
	{
		return myImpl->getBassAlter();
	}

	/** Sets the internal shared pointer handle for the <BassAlter> element.
	    Note that if setIsBassAlterPresent is false, the internal shared pointer
	    will not be altered and will hold a value that does not exist in xml. **/
	void MxSeqSmpNode3154::setBassAlter( const HMxEsBassAlter& value_in )
	{
		myImpl->setBassAlter( value_in );
	}

	/** Returns the minimum number of occurences of the <BassAlter> element.
	    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
	    the element is optional. **/
	int MxSeqSmpNode3154::getBassAlterMinOccurs() const
	{
		return myImpl->getBassAlterMinOccurs();
	}

	/** Returns the maximum number of occurences of the <BassAlter> element.
	    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
	    When the specification says 'unbounded' 'getIsBassAlterUnbounded' will
	    return 'true' and the return value of 'getBassAlterMaxOccurs' should
	    be ignored. **/
	int MxSeqSmpNode3154::getBassAlterMaxOccurs() const
	{
		return myImpl->getBassAlterMaxOccurs();
	}

	/** Returns 'true' if the specification says that the maximum number of
	    occurences of the <BassAlter> element is 'unbounded'.When this function
	    returns 'true', the value returned by 'getBassAlterMaxOccurs' should
	    be ignored. **/
	bool MxSeqSmpNode3154::getIsBassAlterUnbounded() const
	{
		return myImpl->getIsBassAlterUnbounded();
	}

/* Stringing and Streaming ------------------------------------------------------------ */

	std::ostream& MxSeqSmpNode3154::stream( std::ostream& os_out, int indentcount_in, const char* indentchars_in ) const
	{
		return myImpl->stream( os_out, indentcount_in, indentchars_in );
	}


} // namespace lexicon

