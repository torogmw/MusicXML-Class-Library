/**
  * @file       MxSeqSmpNodenode-4250.cpp
  * @class      lexicon::MxSeqSmpNodenode-4250
  * @author     Matthew James Briggs
  * @email      matthew.james.briggs@gmail.com
  * @url        http://matthewjamesbriggs.com
  * @date       2014-12-11 15:41:47
  * @project    Lexicon
  * @version    1.0
  * @musicxmlid 4250
  * 
  * @brief This class represents an xs:sequence object from musicxml.xsd.
  * 
  * Full description goes here.
  * 
 **/

#include "MxSeqSmpNodenode-4250.h"

/* Impl ------------------------------------------------------------------------------- */

namespace lexicon
{
	struct MxSeqSmpNodenode-4250::Impl
	{
		Impl()
		{}

	private:
		HMxEmMillimeters myMillimeters;
		bool myMillimetersIsPresent;
		HMxEmTenths myTenths;
		bool myTenthsIsPresent;
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

/* Millimeters Functions -------------------------------------------------------------- */

		/** Tells you whether or not <Millimeters> is present. If <Millimeters>
		    is required, this will always return 'true'. If <Millimeters> is required,
		    no corresponding 'setIsMillimetersPresent' will exist. **/
		bool getIsMillimetersPresent() const
		{
			return 0;
		}

		/** Returns a shared pointer handle to the <Millimeters> element. Note
		    that if getIsMillimetersPresent is false, this value will still exist
		    (even though it is not in the xml document) and you should ignore it. **/
		HMxEmMillimeters getMillimeters() const
		{
			if( myMillimeters )
			{
				return myMillimeters;
			}
			else
			{
				return std::make_shared<HMxEmMillimeters>();
			}
		}

		/** Sets the internal shared pointer handle for the <Millimeters> element.
		     **/
		int setMillimeters( const HMxEmMillimeters& value_in )
		{
			myMillimeters = value_in;
		}

		/** Returns the minimum number of occurences of the <Millimeters> element.
		    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
		    the element is optional. **/
		int getMillimetersMinOccurs() const
		{
			return myMillimeters.getMinOccurs();
		}

		/** Returns the maximum number of occurences of the <Millimeters> element.
		    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
		    When the specification says 'unbounded' 'getIsMillimetersUnbounded'
		    will return 'true' and the return value of 'getMillimetersMaxOccurs'
		    should be ignored. **/
		int getMillimetersMaxOccurs() const
		{
			return myMillimeters.getMaxOccurs();
		}

		/** Returns 'true' if the specification says that the maximum number of
		    occurences of the <Millimeters> element is 'unbounded'.When this function
		    returns 'true', the value returned by 'getMillimetersMaxOccurs' should
		    be ignored. **/
		int getIsMillimetersUnbounded() const
		{
			return myMillimeters.getIsUnbounded();
		}

/* Tenths Functions ------------------------------------------------------------------- */

		/** Tells you whether or not <Tenths> is present. If <Tenths> is required,
		    this will always return 'true'. If <Tenths> is required, no corresponding
		    'setIsTenthsPresent' will exist. **/
		bool getIsTenthsPresent() const
		{
			return 0;
		}

		/** Returns a shared pointer handle to the <Tenths> element. Note that
		    if getIsTenthsPresent is false, this value will still exist (even though
		    it is not in the xml document) and you should ignore it. **/
		HMxEmTenths getTenths() const
		{
			if( myTenths )
			{
				return myTenths;
			}
			else
			{
				return std::make_shared<HMxEmTenths>();
			}
		}

		/** Sets the internal shared pointer handle for the <Tenths> element.  **/
		int setTenths( const HMxEmTenths& value_in )
		{
			myTenths = value_in;
		}

		/** Returns the minimum number of occurences of the <Tenths> element. 
		    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
		    the element is optional. **/
		int getTenthsMinOccurs() const
		{
			return myTenths.getMinOccurs();
		}

		/** Returns the maximum number of occurences of the <Tenths> element. Typically
		    the MaxOccurs is specified as either '1' or 'unbounded'.  When the
		    specification says 'unbounded' 'getIsTenthsUnbounded' will return 'true'
		    and the return value of 'getTenthsMaxOccurs' should be ignored. **/
		int getTenthsMaxOccurs() const
		{
			return myTenths.getMaxOccurs();
		}

		/** Returns 'true' if the specification says that the maximum number of
		    occurences of the <Tenths> element is 'unbounded'.When this function
		    returns 'true', the value returned by 'getTenthsMaxOccurs' should be
		    ignored. **/
		int getIsTenthsUnbounded() const
		{
			return myTenths.getIsUnbounded();
		}

/* Stringing and Streaming ------------------------------------------------------------ */

		void stream( std::ostream& os_out, int indentcount_in, const char* indentchars_in ) const
		{
			return 0;
		}

	const int MxSeqSmpNodenode-4250::Impl::myXsdID = 4250;
	const std::string MxSeqSmpNodenode-4250::Impl::myXmlTypeName = "node-4250";
	const std::string MxSeqSmpNodenode-4250::Impl::myCppClassName = "DefaultConstructed";
	const std::string MxSeqSmpNodenode-4250::Impl::myDocumentation = "No XSD Documentation.";

	}; // struct MxSeqSmpNodenode-4250::Impl

