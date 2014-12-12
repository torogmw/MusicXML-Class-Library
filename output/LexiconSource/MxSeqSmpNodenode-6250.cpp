/**
  * @file       MxSeqSmpNodenode-6250.cpp
  * @class      lexicon::MxSeqSmpNodenode-6250
  * @author     Matthew James Briggs
  * @email      matthew.james.briggs@gmail.com
  * @url        http://matthewjamesbriggs.com
  * @date       2014-12-11 15:41:52
  * @project    Lexicon
  * @version    1.0
  * @musicxmlid 6250
  * 
  * @brief This class represents an xs:sequence object from musicxml.xsd.
  * 
  * Full description goes here.
  * 
 **/

#include "MxSeqSmpNodenode-6250.h"

/* Impl ------------------------------------------------------------------------------- */

namespace lexicon
{
	struct MxSeqSmpNodenode-6250::Impl
	{
		Impl()
		{}

	private:
		HMxEmLeftMargin myLeftMargin;
		bool myLeftMarginIsPresent;
		HMxEmRightMargin myRightMargin;
		bool myRightMarginIsPresent;
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

/* LeftMargin Functions --------------------------------------------------------------- */

		/** Tells you whether or not <LeftMargin> is present. If <LeftMargin> is
		    required, this will always return 'true'. If <LeftMargin> is required,
		    no corresponding 'setIsLeftMarginPresent' will exist. **/
		bool getIsLeftMarginPresent() const
		{
			return 0;
		}

		/** Returns a shared pointer handle to the <LeftMargin> element. Note that
		    if getIsLeftMarginPresent is false, this value will still exist (even
		    though it is not in the xml document) and you should ignore it. **/
		HMxEmLeftMargin getLeftMargin() const
		{
			if( myLeftMargin )
			{
				return myLeftMargin;
			}
			else
			{
				return std::make_shared<HMxEmLeftMargin>();
			}
		}

		/** Sets the internal shared pointer handle for the <LeftMargin> element.
		     **/
		int setLeftMargin( const HMxEmLeftMargin& value_in )
		{
			myLeftMargin = value_in;
		}

		/** Returns the minimum number of occurences of the <LeftMargin> element.
		    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
		    the element is optional. **/
		int getLeftMarginMinOccurs() const
		{
			return myLeftMargin.getMinOccurs();
		}

		/** Returns the maximum number of occurences of the <LeftMargin> element.
		    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
		    When the specification says 'unbounded' 'getIsLeftMarginUnbounded'
		    will return 'true' and the return value of 'getLeftMarginMaxOccurs'
		    should be ignored. **/
		int getLeftMarginMaxOccurs() const
		{
			return myLeftMargin.getMaxOccurs();
		}

		/** Returns 'true' if the specification says that the maximum number of
		    occurences of the <LeftMargin> element is 'unbounded'.When this function
		    returns 'true', the value returned by 'getLeftMarginMaxOccurs' should
		    be ignored. **/
		int getIsLeftMarginUnbounded() const
		{
			return myLeftMargin.getIsUnbounded();
		}

/* RightMargin Functions -------------------------------------------------------------- */

		/** Tells you whether or not <RightMargin> is present. If <RightMargin>
		    is required, this will always return 'true'. If <RightMargin> is required,
		    no corresponding 'setIsRightMarginPresent' will exist. **/
		bool getIsRightMarginPresent() const
		{
			return 0;
		}

		/** Returns a shared pointer handle to the <RightMargin> element. Note
		    that if getIsRightMarginPresent is false, this value will still exist
		    (even though it is not in the xml document) and you should ignore it. **/
		HMxEmRightMargin getRightMargin() const
		{
			if( myRightMargin )
			{
				return myRightMargin;
			}
			else
			{
				return std::make_shared<HMxEmRightMargin>();
			}
		}

		/** Sets the internal shared pointer handle for the <RightMargin> element.
		     **/
		int setRightMargin( const HMxEmRightMargin& value_in )
		{
			myRightMargin = value_in;
		}

		/** Returns the minimum number of occurences of the <RightMargin> element.
		    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
		    the element is optional. **/
		int getRightMarginMinOccurs() const
		{
			return myRightMargin.getMinOccurs();
		}

		/** Returns the maximum number of occurences of the <RightMargin> element.
		    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
		    When the specification says 'unbounded' 'getIsRightMarginUnbounded'
		    will return 'true' and the return value of 'getRightMarginMaxOccurs'
		    should be ignored. **/
		int getRightMarginMaxOccurs() const
		{
			return myRightMargin.getMaxOccurs();
		}

		/** Returns 'true' if the specification says that the maximum number of
		    occurences of the <RightMargin> element is 'unbounded'.When this function
		    returns 'true', the value returned by 'getRightMarginMaxOccurs' should
		    be ignored. **/
		int getIsRightMarginUnbounded() const
		{
			return myRightMargin.getIsUnbounded();
		}

/* Stringing and Streaming ------------------------------------------------------------ */

		void stream( std::ostream& os_out, int indentcount_in, const char* indentchars_in ) const
		{
			return 0;
		}

	const int MxSeqSmpNodenode-6250::Impl::myXsdID = 6250;
	const std::string MxSeqSmpNodenode-6250::Impl::myXmlTypeName = "node-6250";
	const std::string MxSeqSmpNodenode-6250::Impl::myCppClassName = "DefaultConstructed";
	const std::string MxSeqSmpNodenode-6250::Impl::myDocumentation = "No XSD Documentation.";

	}; // struct MxSeqSmpNodenode-6250::Impl

