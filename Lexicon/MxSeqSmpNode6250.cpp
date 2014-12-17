/**
  * @file       MxSeqSmpNode6250.cpp
  * @class      lexicon::MxSeqSmpNode6250
  * @author     Matthew James Briggs
  * @email      matthew.james.briggs@gmail.com
  * @url        http://matthewjamesbriggs.com
  * @date       2014-12-17 15:43:47
  * @project    Lexicon
  * @version    1.0
  * @musicxmlid 6250
  * 
  * @brief This class represents an xs:sequence object from musicxml.xsd.
  * 
  * Full description goes here.
  * 
 **/

#include "MxSeqSmpNode6250.h"
#include "_hidden_indent.h"

/* Impl ------------------------------------------------------------------------------- */

namespace lexicon
{
	struct MxSeqSmpNode6250::Impl
	{
		Impl()
		:myLeftMargin( std::make_shared<MxEmLeftMargin>() )
		,myIsLeftMarginPresent( true )
		,myRightMargin( std::make_shared<MxEmRightMargin>() )
		,myIsRightMarginPresent( true )
		{}

	private:
		HMxEmLeftMargin myLeftMargin;
		bool myIsLeftMarginPresent;
		HMxEmRightMargin myRightMargin;
		bool myIsRightMarginPresent;
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

/* LeftMargin Functions --------------------------------------------------------------- */

		/** Tells you whether or not <LeftMargin> is present. If <LeftMargin> is
		    required, this will always return 'true'. If <LeftMargin> is required,
		    no corresponding 'setIsLeftMarginPresent' will exist. **/
		bool getIsLeftMarginPresent() const
		{
			return myIsLeftMarginPresent;
		}

		/** Returns a shared pointer handle to the <LeftMargin> element. Note that
		    if getIsLeftMarginPresent is false, this value will still exist (even
		    though it is not in the xml document) and you should ignore it. **/
		HMxEmLeftMargin getLeftMargin() const
		{
			return myLeftMargin;
			
		}

		/** Sets the internal shared pointer handle for the <LeftMargin> element.
		     **/
		void setLeftMargin( const HMxEmLeftMargin& value_in )
		{
			myLeftMargin = value_in;
		}

		/** Returns the minimum number of occurences of the <LeftMargin> element.
		    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
		    the element is optional. **/
		int getLeftMarginMinOccurs() const
		{
			return 1;
		}

		/** Returns the maximum number of occurences of the <LeftMargin> element.
		    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
		    When the specification says 'unbounded' 'getIsLeftMarginUnbounded'
		    will return 'true' and the return value of 'getLeftMarginMaxOccurs'
		    should be ignored. **/
		int getLeftMarginMaxOccurs() const
		{
			return 1;
		}

		/** Returns 'true' if the specification says that the maximum number of
		    occurences of the <LeftMargin> element is 'unbounded'.When this function
		    returns 'true', the value returned by 'getLeftMarginMaxOccurs' should
		    be ignored. **/
		bool getIsLeftMarginUnbounded() const
		{
			return false;
		}

/* RightMargin Functions -------------------------------------------------------------- */

		/** Tells you whether or not <RightMargin> is present. If <RightMargin>
		    is required, this will always return 'true'. If <RightMargin> is required,
		    no corresponding 'setIsRightMarginPresent' will exist. **/
		bool getIsRightMarginPresent() const
		{
			return myIsRightMarginPresent;
		}

		/** Returns a shared pointer handle to the <RightMargin> element. Note
		    that if getIsRightMarginPresent is false, this value will still exist
		    (even though it is not in the xml document) and you should ignore it. **/
		HMxEmRightMargin getRightMargin() const
		{
			return myRightMargin;
			
		}

		/** Sets the internal shared pointer handle for the <RightMargin> element.
		     **/
		void setRightMargin( const HMxEmRightMargin& value_in )
		{
			myRightMargin = value_in;
		}

		/** Returns the minimum number of occurences of the <RightMargin> element.
		    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
		    the element is optional. **/
		int getRightMarginMinOccurs() const
		{
			return 1;
		}

		/** Returns the maximum number of occurences of the <RightMargin> element.
		    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
		    When the specification says 'unbounded' 'getIsRightMarginUnbounded'
		    will return 'true' and the return value of 'getRightMarginMaxOccurs'
		    should be ignored. **/
		int getRightMarginMaxOccurs() const
		{
			return 1;
		}

		/** Returns 'true' if the specification says that the maximum number of
		    occurences of the <RightMargin> element is 'unbounded'.When this function
		    returns 'true', the value returned by 'getRightMarginMaxOccurs' should
		    be ignored. **/
		bool getIsRightMarginUnbounded() const
		{
			return false;
		}

/* Stringing and Streaming ------------------------------------------------------------ */

		std::ostream& stream( std::ostream& os_out, int indentcount_in, const char* indentchars_in ) const
		{
			bool isFirst = true;
			if( getIsLeftMarginPresent() )
			{
				if ( isFirst == false )
				{
					os_out << std::endl;
				}
				hidden::indent( os_out, indentcount_in, indentchars_in );
				getLeftMargin()->stream( os_out );
				isFirst = false;
			}
			if( getIsRightMarginPresent() )
			{
				if ( isFirst == false )
				{
					os_out << std::endl;
				}
				hidden::indent( os_out, indentcount_in, indentchars_in );
				getRightMargin()->stream( os_out );
				isFirst = false;
			}
			return os_out;
		}

	}; // struct MxSeqSmpNode6250::Impl

	const int MxSeqSmpNode6250::Impl::myXsdID = 6250;
	const std::string MxSeqSmpNode6250::Impl::myXmlTypeName = "node-6250";
	const std::string MxSeqSmpNode6250::Impl::myCppClassName = "MxSeqSmpNode6250";
	const std::string MxSeqSmpNode6250::Impl::myDocumentation = "No XSD Documentation.";

/* MxSeqSmpNode6250 ------------------------------------------------------------------- */


/* Constructor, Destructor, Copy, Assignment ------------------------------------------ */

	MxSeqSmpNode6250::MxSeqSmpNode6250()
	:myImpl( new Impl() ) {}

	MxSeqSmpNode6250::~MxSeqSmpNode6250() {}

	MxSeqSmpNode6250::MxSeqSmpNode6250( const MxSeqSmpNode6250& other )
	:myImpl( new Impl( *(other.myImpl) ) ) {}

	MxSeqSmpNode6250& MxSeqSmpNode6250::operator=( const MxSeqSmpNode6250& other )
	{
		this->myImpl = std::unique_ptr<Impl>( new Impl( *(other.myImpl) ) );
		return *this;
	}

/* defaultName ------------------------------------------------------------------------ */

	/** Returns the name of this xs:element as found in the musicxml.xsd document. **/
	std::string MxSeqSmpNode6250::getXmlTypeName() const
	{
		return myImpl->getXmlTypeName();
	}

	/** Returns the name of this C++ class. **/
	std::string MxSeqSmpNode6250::getClassName() const
	{
		return myImpl->getClassName();
	}

	/** Returns the documentation for this musicxml type as found in the musicxml.xsd
	    document. **/
	std::string MxSeqSmpNode6250::getDocumentation() const
	{
		return myImpl->getDocumentation();
	}

/* LeftMargin Functions --------------------------------------------------------------- */

	/** Tells you whether or not <LeftMargin> is present. If <LeftMargin> is
	    required, this will always return 'true'. If <LeftMargin> is required,
	    no corresponding 'setIsLeftMarginPresent' will exist. **/
	bool MxSeqSmpNode6250::getIsLeftMarginPresent() const
	{
		return myImpl->getIsLeftMarginPresent();
	}

	/** Returns a shared pointer handle to the <LeftMargin> element. Note that
	    if getIsLeftMarginPresent is false, this value will still exist (even
	    though it is not in the xml document) and you should ignore it. **/
	HMxEmLeftMargin MxSeqSmpNode6250::getLeftMargin() const
	{
		return myImpl->getLeftMargin();
	}

	/** Sets the internal shared pointer handle for the <LeftMargin> element.
	     **/
	void MxSeqSmpNode6250::setLeftMargin( const HMxEmLeftMargin& value_in )
	{
		myImpl->setLeftMargin( value_in );
	}

	/** Returns the minimum number of occurences of the <LeftMargin> element.
	    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
	    the element is optional. **/
	int MxSeqSmpNode6250::getLeftMarginMinOccurs() const
	{
		return myImpl->getLeftMarginMinOccurs();
	}

	/** Returns the maximum number of occurences of the <LeftMargin> element.
	    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
	    When the specification says 'unbounded' 'getIsLeftMarginUnbounded'
	    will return 'true' and the return value of 'getLeftMarginMaxOccurs'
	    should be ignored. **/
	int MxSeqSmpNode6250::getLeftMarginMaxOccurs() const
	{
		return myImpl->getLeftMarginMaxOccurs();
	}

	/** Returns 'true' if the specification says that the maximum number of
	    occurences of the <LeftMargin> element is 'unbounded'.When this function
	    returns 'true', the value returned by 'getLeftMarginMaxOccurs' should
	    be ignored. **/
	bool MxSeqSmpNode6250::getIsLeftMarginUnbounded() const
	{
		return myImpl->getIsLeftMarginUnbounded();
	}

/* RightMargin Functions -------------------------------------------------------------- */

	/** Tells you whether or not <RightMargin> is present. If <RightMargin>
	    is required, this will always return 'true'. If <RightMargin> is required,
	    no corresponding 'setIsRightMarginPresent' will exist. **/
	bool MxSeqSmpNode6250::getIsRightMarginPresent() const
	{
		return myImpl->getIsRightMarginPresent();
	}

	/** Returns a shared pointer handle to the <RightMargin> element. Note
	    that if getIsRightMarginPresent is false, this value will still exist
	    (even though it is not in the xml document) and you should ignore it. **/
	HMxEmRightMargin MxSeqSmpNode6250::getRightMargin() const
	{
		return myImpl->getRightMargin();
	}

	/** Sets the internal shared pointer handle for the <RightMargin> element.
	     **/
	void MxSeqSmpNode6250::setRightMargin( const HMxEmRightMargin& value_in )
	{
		myImpl->setRightMargin( value_in );
	}

	/** Returns the minimum number of occurences of the <RightMargin> element.
	    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
	    the element is optional. **/
	int MxSeqSmpNode6250::getRightMarginMinOccurs() const
	{
		return myImpl->getRightMarginMinOccurs();
	}

	/** Returns the maximum number of occurences of the <RightMargin> element.
	    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
	    When the specification says 'unbounded' 'getIsRightMarginUnbounded'
	    will return 'true' and the return value of 'getRightMarginMaxOccurs'
	    should be ignored. **/
	int MxSeqSmpNode6250::getRightMarginMaxOccurs() const
	{
		return myImpl->getRightMarginMaxOccurs();
	}

	/** Returns 'true' if the specification says that the maximum number of
	    occurences of the <RightMargin> element is 'unbounded'.When this function
	    returns 'true', the value returned by 'getRightMarginMaxOccurs' should
	    be ignored. **/
	bool MxSeqSmpNode6250::getIsRightMarginUnbounded() const
	{
		return myImpl->getIsRightMarginUnbounded();
	}

/* Stringing and Streaming ------------------------------------------------------------ */

	std::ostream& MxSeqSmpNode6250::stream( std::ostream& os_out, int indentcount_in, const char* indentchars_in ) const
	{
		return myImpl->stream( os_out, indentcount_in, indentchars_in );
	}


} // namespace lexicon

