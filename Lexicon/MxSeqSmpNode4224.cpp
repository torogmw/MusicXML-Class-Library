/**
  * @file       MxSeqSmpNode4224.cpp
  * @class      lexicon::MxSeqSmpNode4224
  * @author     Matthew James Briggs
  * @email      matthew.james.briggs@gmail.com
  * @url        http://matthewjamesbriggs.com
  * @date       2014-12-17 15:43:42
  * @project    Lexicon
  * @version    1.0
  * @musicxmlid 4224
  * 
  * @brief This class represents an xs:sequence object from musicxml.xsd.
  * 
  * Full description goes here.
  * 
 **/

#include "MxSeqSmpNode4224.h"
#include "_hidden_indent.h"

/* Impl ------------------------------------------------------------------------------- */

namespace lexicon
{
	struct MxSeqSmpNode4224::Impl
	{
		Impl()
		:myPageHeight( std::make_shared<MxEmPageHeight>() )
		,myIsPageHeightPresent( true )
		,myPageWidth( std::make_shared<MxEmPageWidth>() )
		,myIsPageWidthPresent( true )
		{}

	private:
		HMxEmPageHeight myPageHeight;
		bool myIsPageHeightPresent;
		HMxEmPageWidth myPageWidth;
		bool myIsPageWidthPresent;
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

/* PageHeight Functions --------------------------------------------------------------- */

		/** Tells you whether or not <PageHeight> is present. If <PageHeight> is
		    required, this will always return 'true'. If <PageHeight> is required,
		    no corresponding 'setIsPageHeightPresent' will exist. **/
		bool getIsPageHeightPresent() const
		{
			return myIsPageHeightPresent;
		}

		/** Returns a shared pointer handle to the <PageHeight> element. Note that
		    if getIsPageHeightPresent is false, this value will still exist (even
		    though it is not in the xml document) and you should ignore it. **/
		HMxEmPageHeight getPageHeight() const
		{
			return myPageHeight;
			
		}

		/** Sets the internal shared pointer handle for the <PageHeight> element.
		     **/
		void setPageHeight( const HMxEmPageHeight& value_in )
		{
			myPageHeight = value_in;
		}

		/** Returns the minimum number of occurences of the <PageHeight> element.
		    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
		    the element is optional. **/
		int getPageHeightMinOccurs() const
		{
			return 1;
		}

		/** Returns the maximum number of occurences of the <PageHeight> element.
		    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
		    When the specification says 'unbounded' 'getIsPageHeightUnbounded'
		    will return 'true' and the return value of 'getPageHeightMaxOccurs'
		    should be ignored. **/
		int getPageHeightMaxOccurs() const
		{
			return 1;
		}

		/** Returns 'true' if the specification says that the maximum number of
		    occurences of the <PageHeight> element is 'unbounded'.When this function
		    returns 'true', the value returned by 'getPageHeightMaxOccurs' should
		    be ignored. **/
		bool getIsPageHeightUnbounded() const
		{
			return false;
		}

/* PageWidth Functions ---------------------------------------------------------------- */

		/** Tells you whether or not <PageWidth> is present. If <PageWidth> is
		    required, this will always return 'true'. If <PageWidth> is required,
		    no corresponding 'setIsPageWidthPresent' will exist. **/
		bool getIsPageWidthPresent() const
		{
			return myIsPageWidthPresent;
		}

		/** Returns a shared pointer handle to the <PageWidth> element. Note that
		    if getIsPageWidthPresent is false, this value will still exist (even
		    though it is not in the xml document) and you should ignore it. **/
		HMxEmPageWidth getPageWidth() const
		{
			return myPageWidth;
			
		}

		/** Sets the internal shared pointer handle for the <PageWidth> element.
		     **/
		void setPageWidth( const HMxEmPageWidth& value_in )
		{
			myPageWidth = value_in;
		}

		/** Returns the minimum number of occurences of the <PageWidth> element.
		    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
		    the element is optional. **/
		int getPageWidthMinOccurs() const
		{
			return 1;
		}

		/** Returns the maximum number of occurences of the <PageWidth> element.
		    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
		    When the specification says 'unbounded' 'getIsPageWidthUnbounded' will
		    return 'true' and the return value of 'getPageWidthMaxOccurs' should
		    be ignored. **/
		int getPageWidthMaxOccurs() const
		{
			return 1;
		}

		/** Returns 'true' if the specification says that the maximum number of
		    occurences of the <PageWidth> element is 'unbounded'.When this function
		    returns 'true', the value returned by 'getPageWidthMaxOccurs' should
		    be ignored. **/
		bool getIsPageWidthUnbounded() const
		{
			return false;
		}

/* Stringing and Streaming ------------------------------------------------------------ */

		std::ostream& stream( std::ostream& os_out, int indentcount_in, const char* indentchars_in ) const
		{
			bool isFirst = true;
			if( getIsPageHeightPresent() )
			{
				if ( isFirst == false )
				{
					os_out << std::endl;
				}
				hidden::indent( os_out, indentcount_in, indentchars_in );
				getPageHeight()->stream( os_out );
				isFirst = false;
			}
			if( getIsPageWidthPresent() )
			{
				if ( isFirst == false )
				{
					os_out << std::endl;
				}
				hidden::indent( os_out, indentcount_in, indentchars_in );
				getPageWidth()->stream( os_out );
				isFirst = false;
			}
			return os_out;
		}

	}; // struct MxSeqSmpNode4224::Impl

	const int MxSeqSmpNode4224::Impl::myXsdID = 4224;
	const std::string MxSeqSmpNode4224::Impl::myXmlTypeName = "node-4224";
	const std::string MxSeqSmpNode4224::Impl::myCppClassName = "MxSeqSmpNode4224";
	const std::string MxSeqSmpNode4224::Impl::myDocumentation = "No XSD Documentation.";

/* MxSeqSmpNode4224 ------------------------------------------------------------------- */


/* Constructor, Destructor, Copy, Assignment ------------------------------------------ */

	MxSeqSmpNode4224::MxSeqSmpNode4224()
	:myImpl( new Impl() ) {}

	MxSeqSmpNode4224::~MxSeqSmpNode4224() {}

	MxSeqSmpNode4224::MxSeqSmpNode4224( const MxSeqSmpNode4224& other )
	:myImpl( new Impl( *(other.myImpl) ) ) {}

	MxSeqSmpNode4224& MxSeqSmpNode4224::operator=( const MxSeqSmpNode4224& other )
	{
		this->myImpl = std::unique_ptr<Impl>( new Impl( *(other.myImpl) ) );
		return *this;
	}

/* defaultName ------------------------------------------------------------------------ */

	/** Returns the name of this xs:element as found in the musicxml.xsd document. **/
	std::string MxSeqSmpNode4224::getXmlTypeName() const
	{
		return myImpl->getXmlTypeName();
	}

	/** Returns the name of this C++ class. **/
	std::string MxSeqSmpNode4224::getClassName() const
	{
		return myImpl->getClassName();
	}

	/** Returns the documentation for this musicxml type as found in the musicxml.xsd
	    document. **/
	std::string MxSeqSmpNode4224::getDocumentation() const
	{
		return myImpl->getDocumentation();
	}

/* PageHeight Functions --------------------------------------------------------------- */

	/** Tells you whether or not <PageHeight> is present. If <PageHeight> is
	    required, this will always return 'true'. If <PageHeight> is required,
	    no corresponding 'setIsPageHeightPresent' will exist. **/
	bool MxSeqSmpNode4224::getIsPageHeightPresent() const
	{
		return myImpl->getIsPageHeightPresent();
	}

	/** Returns a shared pointer handle to the <PageHeight> element. Note that
	    if getIsPageHeightPresent is false, this value will still exist (even
	    though it is not in the xml document) and you should ignore it. **/
	HMxEmPageHeight MxSeqSmpNode4224::getPageHeight() const
	{
		return myImpl->getPageHeight();
	}

	/** Sets the internal shared pointer handle for the <PageHeight> element.
	     **/
	void MxSeqSmpNode4224::setPageHeight( const HMxEmPageHeight& value_in )
	{
		myImpl->setPageHeight( value_in );
	}

	/** Returns the minimum number of occurences of the <PageHeight> element.
	    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
	    the element is optional. **/
	int MxSeqSmpNode4224::getPageHeightMinOccurs() const
	{
		return myImpl->getPageHeightMinOccurs();
	}

	/** Returns the maximum number of occurences of the <PageHeight> element.
	    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
	    When the specification says 'unbounded' 'getIsPageHeightUnbounded'
	    will return 'true' and the return value of 'getPageHeightMaxOccurs'
	    should be ignored. **/
	int MxSeqSmpNode4224::getPageHeightMaxOccurs() const
	{
		return myImpl->getPageHeightMaxOccurs();
	}

	/** Returns 'true' if the specification says that the maximum number of
	    occurences of the <PageHeight> element is 'unbounded'.When this function
	    returns 'true', the value returned by 'getPageHeightMaxOccurs' should
	    be ignored. **/
	bool MxSeqSmpNode4224::getIsPageHeightUnbounded() const
	{
		return myImpl->getIsPageHeightUnbounded();
	}

/* PageWidth Functions ---------------------------------------------------------------- */

	/** Tells you whether or not <PageWidth> is present. If <PageWidth> is
	    required, this will always return 'true'. If <PageWidth> is required,
	    no corresponding 'setIsPageWidthPresent' will exist. **/
	bool MxSeqSmpNode4224::getIsPageWidthPresent() const
	{
		return myImpl->getIsPageWidthPresent();
	}

	/** Returns a shared pointer handle to the <PageWidth> element. Note that
	    if getIsPageWidthPresent is false, this value will still exist (even
	    though it is not in the xml document) and you should ignore it. **/
	HMxEmPageWidth MxSeqSmpNode4224::getPageWidth() const
	{
		return myImpl->getPageWidth();
	}

	/** Sets the internal shared pointer handle for the <PageWidth> element.
	     **/
	void MxSeqSmpNode4224::setPageWidth( const HMxEmPageWidth& value_in )
	{
		myImpl->setPageWidth( value_in );
	}

	/** Returns the minimum number of occurences of the <PageWidth> element.
	    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
	    the element is optional. **/
	int MxSeqSmpNode4224::getPageWidthMinOccurs() const
	{
		return myImpl->getPageWidthMinOccurs();
	}

	/** Returns the maximum number of occurences of the <PageWidth> element.
	    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
	    When the specification says 'unbounded' 'getIsPageWidthUnbounded' will
	    return 'true' and the return value of 'getPageWidthMaxOccurs' should
	    be ignored. **/
	int MxSeqSmpNode4224::getPageWidthMaxOccurs() const
	{
		return myImpl->getPageWidthMaxOccurs();
	}

	/** Returns 'true' if the specification says that the maximum number of
	    occurences of the <PageWidth> element is 'unbounded'.When this function
	    returns 'true', the value returned by 'getPageWidthMaxOccurs' should
	    be ignored. **/
	bool MxSeqSmpNode4224::getIsPageWidthUnbounded() const
	{
		return myImpl->getIsPageWidthUnbounded();
	}

/* Stringing and Streaming ------------------------------------------------------------ */

	std::ostream& MxSeqSmpNode4224::stream( std::ostream& os_out, int indentcount_in, const char* indentchars_in ) const
	{
		return myImpl->stream( os_out, indentcount_in, indentchars_in );
	}


} // namespace lexicon

