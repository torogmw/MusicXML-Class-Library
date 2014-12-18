/**
  * @file       MxSeqSmpNode3871.cpp
  * @class      lexicon::MxSeqSmpNode3871
  * @author     Matthew James Briggs
  * @email      matthew.james.briggs@gmail.com
  * @url        http://matthewjamesbriggs.com
  * @date       2014-12-17 15:52:08
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
#include "_hidden_indent.h"

/* Impl ------------------------------------------------------------------------------- */

namespace lexicon
{
	struct MxSeqSmpNode3871::Impl
	{
		Impl()
		:myRootStep( std::make_shared<MxEsRootStep>() )
		,myIsRootStepPresent( true )
		,myRootAlter( std::make_shared<MxEsRootAlter>() )
		,myIsRootAlterPresent( false )
		{}

	private:
		HMxEsRootStep myRootStep;
		bool myIsRootStepPresent;
		HMxEsRootAlter myRootAlter;
		bool myIsRootAlterPresent;
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

/* RootStep Functions ----------------------------------------------------------------- */

		/** Tells you whether or not <RootStep> is present. If <RootStep> is required,
		    this will always return 'true'. If <RootStep> is required, no corresponding
		    'setIsRootStepPresent' will exist. **/
		bool getIsRootStepPresent() const
		{
			return myIsRootStepPresent;
		}

		/** Returns a shared pointer handle to the <RootStep> element. Note that
		    if getIsRootStepPresent is false, this value will still exist (even
		    though it is not in the xml document) and you should ignore it. **/
		HMxEsRootStep getRootStep() const
		{
			return myRootStep;
			
		}

		/** Sets the internal shared pointer handle for the <RootStep> element.
		     **/
		void setRootStep( const HMxEsRootStep& value_in )
		{
			myRootStep = value_in;
		}

		/** Returns the minimum number of occurences of the <RootStep> element.
		    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
		    the element is optional. **/
		int getRootStepMinOccurs() const
		{
			return 1;
		}

		/** Returns the maximum number of occurences of the <RootStep> element.
		    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
		    When the specification says 'unbounded' 'getIsRootStepUnbounded' will
		    return 'true' and the return value of 'getRootStepMaxOccurs' should
		    be ignored. **/
		int getRootStepMaxOccurs() const
		{
			return 1;
		}

		/** Returns 'true' if the specification says that the maximum number of
		    occurences of the <RootStep> element is 'unbounded'.When this function
		    returns 'true', the value returned by 'getRootStepMaxOccurs' should
		    be ignored. **/
		bool getIsRootStepUnbounded() const
		{
			return false;
		}

/* RootAlter Functions ---------------------------------------------------------------- */

		/** Tells you whether or not <RootAlter> is present. If <RootAlter> is
		    required, this will always return 'true'. If <RootAlter> is required,
		    no corresponding 'setIsRootAlterPresent' will exist. **/
		bool getIsRootAlterPresent() const
		{
			return myIsRootAlterPresent;
		}

		void setIsRootAlterPresent( const bool& value_in )
		{
			myIsRootAlterPresent = value_in;
		}

		/** Returns a shared pointer handle to the <RootAlter> element. Note that
		    if getIsRootAlterPresent is false, this value will still exist (even
		    though it is not in the xml document) and you should ignore it. **/
		HMxEsRootAlter getRootAlter() const
		{
			return myRootAlter;
			
		}

		/** Sets the internal shared pointer handle for the <RootAlter> element.
		    Note that if setIsRootAlterPresent is false, the internal shared pointer
		    will not be altered and will hold a value that does not exist in xml. **/
		void setRootAlter( const HMxEsRootAlter& value_in )
		{
			myRootAlter = value_in;
		}

		/** Returns the minimum number of occurences of the <RootAlter> element.
		    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
		    the element is optional. **/
		int getRootAlterMinOccurs() const
		{
			return 0;
		}

		/** Returns the maximum number of occurences of the <RootAlter> element.
		    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
		    When the specification says 'unbounded' 'getIsRootAlterUnbounded' will
		    return 'true' and the return value of 'getRootAlterMaxOccurs' should
		    be ignored. **/
		int getRootAlterMaxOccurs() const
		{
			return 1;
		}

		/** Returns 'true' if the specification says that the maximum number of
		    occurences of the <RootAlter> element is 'unbounded'.When this function
		    returns 'true', the value returned by 'getRootAlterMaxOccurs' should
		    be ignored. **/
		bool getIsRootAlterUnbounded() const
		{
			return false;
		}

/* Stringing and Streaming ------------------------------------------------------------ */

		std::ostream& stream( std::ostream& os_out, int indentcount_in, const char* indentchars_in ) const
		{
			bool isFirst = true;
			if( getIsRootStepPresent() )
			{
				if ( isFirst == false )
				{
					os_out << std::endl;
				}
				hidden::indent( os_out, indentcount_in, indentchars_in );
				getRootStep()->stream( os_out );
				isFirst = false;
			}
			if( getIsRootAlterPresent() )
			{
				if ( isFirst == false )
				{
					os_out << std::endl;
				}
				hidden::indent( os_out, indentcount_in, indentchars_in );
				getRootAlter()->stream( os_out );
				isFirst = false;
			}
			return os_out;
		}

	}; // struct MxSeqSmpNode3871::Impl

	const int MxSeqSmpNode3871::Impl::myXsdID = 3871;
	const std::string MxSeqSmpNode3871::Impl::myXmlTypeName = "node-3871";
	const std::string MxSeqSmpNode3871::Impl::myCppClassName = "MxSeqSmpNode3871";
	const std::string MxSeqSmpNode3871::Impl::myDocumentation = "No XSD Documentation.";

/* MxSeqSmpNode3871 ------------------------------------------------------------------- */


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
	std::string MxSeqSmpNode3871::getXmlTypeName() const
	{
		return myImpl->getXmlTypeName();
	}

	/** Returns the name of this C++ class. **/
	std::string MxSeqSmpNode3871::getClassName() const
	{
		return myImpl->getClassName();
	}

	/** Returns the documentation for this musicxml type as found in the musicxml.xsd
	    document. **/
	std::string MxSeqSmpNode3871::getDocumentation() const
	{
		return myImpl->getDocumentation();
	}

/* RootStep Functions ----------------------------------------------------------------- */

	/** Tells you whether or not <RootStep> is present. If <RootStep> is required,
	    this will always return 'true'. If <RootStep> is required, no corresponding
	    'setIsRootStepPresent' will exist. **/
	bool MxSeqSmpNode3871::getIsRootStepPresent() const
	{
		return myImpl->getIsRootStepPresent();
	}

	/** Returns a shared pointer handle to the <RootStep> element. Note that
	    if getIsRootStepPresent is false, this value will still exist (even
	    though it is not in the xml document) and you should ignore it. **/
	HMxEsRootStep MxSeqSmpNode3871::getRootStep() const
	{
		return myImpl->getRootStep();
	}

	/** Sets the internal shared pointer handle for the <RootStep> element.
	     **/
	void MxSeqSmpNode3871::setRootStep( const HMxEsRootStep& value_in )
	{
		myImpl->setRootStep( value_in );
	}

	/** Returns the minimum number of occurences of the <RootStep> element.
	    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
	    the element is optional. **/
	int MxSeqSmpNode3871::getRootStepMinOccurs() const
	{
		return myImpl->getRootStepMinOccurs();
	}

	/** Returns the maximum number of occurences of the <RootStep> element.
	    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
	    When the specification says 'unbounded' 'getIsRootStepUnbounded' will
	    return 'true' and the return value of 'getRootStepMaxOccurs' should
	    be ignored. **/
	int MxSeqSmpNode3871::getRootStepMaxOccurs() const
	{
		return myImpl->getRootStepMaxOccurs();
	}

	/** Returns 'true' if the specification says that the maximum number of
	    occurences of the <RootStep> element is 'unbounded'.When this function
	    returns 'true', the value returned by 'getRootStepMaxOccurs' should
	    be ignored. **/
	bool MxSeqSmpNode3871::getIsRootStepUnbounded() const
	{
		return myImpl->getIsRootStepUnbounded();
	}

/* RootAlter Functions ---------------------------------------------------------------- */

	/** Tells you whether or not <RootAlter> is present. If <RootAlter> is
	    required, this will always return 'true'. If <RootAlter> is required,
	    no corresponding 'setIsRootAlterPresent' will exist. **/
	bool MxSeqSmpNode3871::getIsRootAlterPresent() const
	{
		return myImpl->getIsRootAlterPresent();
	}

	void MxSeqSmpNode3871::setIsRootAlterPresent( const bool& value_in )
	{
		myImpl->setIsRootAlterPresent( value_in );
	}

	/** Returns a shared pointer handle to the <RootAlter> element. Note that
	    if getIsRootAlterPresent is false, this value will still exist (even
	    though it is not in the xml document) and you should ignore it. **/
	HMxEsRootAlter MxSeqSmpNode3871::getRootAlter() const
	{
		return myImpl->getRootAlter();
	}

	/** Sets the internal shared pointer handle for the <RootAlter> element.
	    Note that if setIsRootAlterPresent is false, the internal shared pointer
	    will not be altered and will hold a value that does not exist in xml. **/
	void MxSeqSmpNode3871::setRootAlter( const HMxEsRootAlter& value_in )
	{
		myImpl->setRootAlter( value_in );
	}

	/** Returns the minimum number of occurences of the <RootAlter> element.
	    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
	    the element is optional. **/
	int MxSeqSmpNode3871::getRootAlterMinOccurs() const
	{
		return myImpl->getRootAlterMinOccurs();
	}

	/** Returns the maximum number of occurences of the <RootAlter> element.
	    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
	    When the specification says 'unbounded' 'getIsRootAlterUnbounded' will
	    return 'true' and the return value of 'getRootAlterMaxOccurs' should
	    be ignored. **/
	int MxSeqSmpNode3871::getRootAlterMaxOccurs() const
	{
		return myImpl->getRootAlterMaxOccurs();
	}

	/** Returns 'true' if the specification says that the maximum number of
	    occurences of the <RootAlter> element is 'unbounded'.When this function
	    returns 'true', the value returned by 'getRootAlterMaxOccurs' should
	    be ignored. **/
	bool MxSeqSmpNode3871::getIsRootAlterUnbounded() const
	{
		return myImpl->getIsRootAlterUnbounded();
	}

/* Stringing and Streaming ------------------------------------------------------------ */

	std::ostream& MxSeqSmpNode3871::stream( std::ostream& os_out, int indentcount_in, const char* indentchars_in ) const
	{
		return myImpl->stream( os_out, indentcount_in, indentchars_in );
	}


} // namespace lexicon

