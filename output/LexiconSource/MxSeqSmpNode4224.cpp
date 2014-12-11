/**
  * @file       MxSeqSmpNode4224.cpp
  * @class      lexicon::MxSeqSmpNode4224
  * @author     Matthew James Briggs
  * @email      matthew.james.briggs@gmail.com
  * @url        http://matthewjamesbriggs.com
  * @date       2014-12-11 15:30:23
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

/* Impl ------------------------------------------------------------------------------- */

namespace lexicon
{
	struct MxSeqSmpNode4224::Impl
	{
		Impl()
		{}

	private:
		HMxEmPageHeight myPageHeight;
		bool myPageHeightIsPresent;
		HMxEmPageWidth myPageWidth;
		bool myPageWidthIsPresent;
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

/* PageHeight Functions --------------------------------------------------------------- */

		/** Tells you whether or not <PageHeight> is present. If <PageHeight> is
		    required, this will always return 'true'. If <PageHeight> is required,
		    no corresponding 'setIsPageHeightPresent' will exist. **/
		bool getIsPageHeightPresent() const
		{
			return 0;
		}

		/** Returns a shared pointer handle to the <PageHeight> element. Note that
		    if getIsPageHeightPresent is false, this value will still exist (even
		    though it is not in the xml document) and you should ignore it. **/
		HMxEmPageHeight getPageHeight() const
		{
			if( myPageHeight )
			{
				return myPageHeight;
			}
			else
			{
				return std::make_shared<HMxEmPageHeight>();
			}
		}

		/** Sets the internal shared pointer handle for the <PageHeight> element.
		     **/
		int setPageHeight( const HMxEmPageHeight& value_in )
		{
			myPageHeight = value_in;
		}

		/** Returns the minimum number of occurences of the <PageHeight> element.
		    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
		    the element is optional. **/
		int getPageHeightMinOccurs() const
		{
			return myPageHeight.getMinOccurs();
		}

		/** Returns the maximum number of occurences of the <PageHeight> element.
		    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
		    When the specification says 'unbounded' 'getIsPageHeightUnbounded'
		    will return 'true' and the return value of 'getPageHeightMaxOccurs'
		    should be ignored. **/
		int getPageHeightMaxOccurs() const
		{
			return myPageHeight.getMaxOccurs();
		}

		/** Returns 'true' if the specification says that the maximum number of
		    occurences of the <PageHeight> element is 'unbounded'.When this function
		    returns 'true', the value returned by 'getPageHeightMaxOccurs' should
		    be ignored. **/
		int getIsPageHeightUnbounded() const
		{
			return myPageHeight.getIsUnbounded();
		}

/* PageWidth Functions ---------------------------------------------------------------- */

		/** Tells you whether or not <PageWidth> is present. If <PageWidth> is
		    required, this will always return 'true'. If <PageWidth> is required,
		    no corresponding 'setIsPageWidthPresent' will exist. **/
		bool getIsPageWidthPresent() const
		{
			return 0;
		}

		/** Returns a shared pointer handle to the <PageWidth> element. Note that
		    if getIsPageWidthPresent is false, this value will still exist (even
		    though it is not in the xml document) and you should ignore it. **/
		HMxEmPageWidth getPageWidth() const
		{
			if( myPageWidth )
			{
				return myPageWidth;
			}
			else
			{
				return std::make_shared<HMxEmPageWidth>();
			}
		}

		/** Sets the internal shared pointer handle for the <PageWidth> element.
		     **/
		int setPageWidth( const HMxEmPageWidth& value_in )
		{
			myPageWidth = value_in;
		}

		/** Returns the minimum number of occurences of the <PageWidth> element.
		    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
		    the element is optional. **/
		int getPageWidthMinOccurs() const
		{
			return myPageWidth.getMinOccurs();
		}

		/** Returns the maximum number of occurences of the <PageWidth> element.
		    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
		    When the specification says 'unbounded' 'getIsPageWidthUnbounded' will
		    return 'true' and the return value of 'getPageWidthMaxOccurs' should
		    be ignored. **/
		int getPageWidthMaxOccurs() const
		{
			return myPageWidth.getMaxOccurs();
		}

		/** Returns 'true' if the specification says that the maximum number of
		    occurences of the <PageWidth> element is 'unbounded'.When this function
		    returns 'true', the value returned by 'getPageWidthMaxOccurs' should
		    be ignored. **/
		int getIsPageWidthUnbounded() const
		{
			return myPageWidth.getIsUnbounded();
		}

/* Stringing and Streaming ------------------------------------------------------------ */

		void stream( std::ostream& os_out, int indentcount_in, const char* indentchars_in ) const
		{
			return 0;
		}

	const int MxSeqSmpNode4224::Impl::myXsdID = 4224;
	const std::string MxSeqSmpNode4224::Impl::myXmlTypeName = "";
	const std::string MxSeqSmpNode4224::Impl::myCppClassName = "DefaultConstructed";
	const std::string MxSeqSmpNode4224::Impl::myDocumentation = "";

	}; // struct MxSeqSmpNode4224::Impl

