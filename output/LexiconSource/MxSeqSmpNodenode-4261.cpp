/**
  * @file       MxSeqSmpNodenode-4261.cpp
  * @class      lexicon::MxSeqSmpNodenode-4261
  * @author     Matthew James Briggs
  * @email      matthew.james.briggs@gmail.com
  * @url        http://matthewjamesbriggs.com
  * @date       2014-12-11 15:41:48
  * @project    Lexicon
  * @version    1.0
  * @musicxmlid 4261
  * 
  * @brief This class represents an xs:sequence object from musicxml.xsd.
  * 
  * Full description goes here.
  * 
 **/

#include "MxSeqSmpNodenode-4261.h"

/* Impl ------------------------------------------------------------------------------- */

namespace lexicon
{
	struct MxSeqSmpNodenode-4261::Impl
	{
		Impl()
		{}

	private:
		HMxEmStaffDistance myStaffDistance;
		bool myStaffDistanceIsPresent;
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

/* StaffDistance Functions ------------------------------------------------------------ */

		/** Tells you whether or not <StaffDistance> is present. If <StaffDistance>
		    is required, this will always return 'true'. If <StaffDistance> is
		    required, no corresponding 'setIsStaffDistancePresent' will exist. **/
		bool getIsStaffDistancePresent() const
		{
			return 0;
		}

		void setIsStaffDistancePresent( const bool& value_in )
		{
			return 0;
		}

		/** Returns a shared pointer handle to the <StaffDistance> element. Note
		    that if getIsStaffDistancePresent is false, this value will still exist
		    (even though it is not in the xml document) and you should ignore it. **/
		HMxEmStaffDistance getStaffDistance() const
		{
			if( myStaffDistance )
			{
				return myStaffDistance;
			}
			else
			{
				return std::make_shared<HMxEmStaffDistance>();
			}
		}

		/** Sets the internal shared pointer handle for the <StaffDistance> element.
		    Note that if setIsStaffDistancePresent is false, the internal shared
		    pointer will not be altered and will hold a value that does not exist
		    in xml. **/
		int setStaffDistance( const HMxEmStaffDistance& value_in )
		{
			myStaffDistance = value_in;
		}

		/** Returns the minimum number of occurences of the <StaffDistance> element.
		    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
		    the element is optional. **/
		int getStaffDistanceMinOccurs() const
		{
			return myStaffDistance.getMinOccurs();
		}

		/** Returns the maximum number of occurences of the <StaffDistance> element.
		    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
		    When the specification says 'unbounded' 'getIsStaffDistanceUnbounded'
		    will return 'true' and the return value of 'getStaffDistanceMaxOccurs'
		    should be ignored. **/
		int getStaffDistanceMaxOccurs() const
		{
			return myStaffDistance.getMaxOccurs();
		}

		/** Returns 'true' if the specification says that the maximum number of
		    occurences of the <StaffDistance> element is 'unbounded'.When this
		    function returns 'true', the value returned by 'getStaffDistanceMaxOccurs'
		    should be ignored. **/
		int getIsStaffDistanceUnbounded() const
		{
			return myStaffDistance.getIsUnbounded();
		}

/* Stringing and Streaming ------------------------------------------------------------ */

		void stream( std::ostream& os_out, int indentcount_in, const char* indentchars_in ) const
		{
			return 0;
		}

	const int MxSeqSmpNodenode-4261::Impl::myXsdID = 4261;
	const std::string MxSeqSmpNodenode-4261::Impl::myXmlTypeName = "node-4261";
	const std::string MxSeqSmpNodenode-4261::Impl::myCppClassName = "DefaultConstructed";
	const std::string MxSeqSmpNodenode-4261::Impl::myDocumentation = "No XSD Documentation.";

	}; // struct MxSeqSmpNodenode-4261::Impl

