/**
  * @file       MxSeqSmpNodenode-4190.cpp
  * @class      lexicon::MxSeqSmpNodenode-4190
  * @author     Matthew James Briggs
  * @email      matthew.james.briggs@gmail.com
  * @url        http://matthewjamesbriggs.com
  * @date       2014-12-11 15:41:46
  * @project    Lexicon
  * @version    1.0
  * @musicxmlid 4190
  * 
  * @brief This class represents an xs:sequence object from musicxml.xsd.
  * 
  * Full description goes here.
  * 
 **/

#include "MxSeqSmpNodenode-4190.h"

/* Impl ------------------------------------------------------------------------------- */

namespace lexicon
{
	struct MxSeqSmpNodenode-4190::Impl
	{
		Impl()
		{}

	private:
		HMxEmMeasureDistance myMeasureDistance;
		bool myMeasureDistanceIsPresent;
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

/* MeasureDistance Functions ---------------------------------------------------------- */

		/** Tells you whether or not <MeasureDistance> is present. If <MeasureDistance>
		    is required, this will always return 'true'. If <MeasureDistance> is
		    required, no corresponding 'setIsMeasureDistancePresent' will exist. **/
		bool getIsMeasureDistancePresent() const
		{
			return 0;
		}

		void setIsMeasureDistancePresent( const bool& value_in )
		{
			return 0;
		}

		/** Returns a shared pointer handle to the <MeasureDistance> element. Note
		    that if getIsMeasureDistancePresent is false, this value will still
		    exist (even though it is not in the xml document) and you should ignore
		    it. **/
		HMxEmMeasureDistance getMeasureDistance() const
		{
			if( myMeasureDistance )
			{
				return myMeasureDistance;
			}
			else
			{
				return std::make_shared<HMxEmMeasureDistance>();
			}
		}

		/** Sets the internal shared pointer handle for the <MeasureDistance> element.
		    Note that if setIsMeasureDistancePresent is false, the internal shared
		    pointer will not be altered and will hold a value that does not exist
		    in xml. **/
		int setMeasureDistance( const HMxEmMeasureDistance& value_in )
		{
			myMeasureDistance = value_in;
		}

		/** Returns the minimum number of occurences of the <MeasureDistance> element.
		    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
		    the element is optional. **/
		int getMeasureDistanceMinOccurs() const
		{
			return myMeasureDistance.getMinOccurs();
		}

		/** Returns the maximum number of occurences of the <MeasureDistance> element.
		    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
		    When the specification says 'unbounded' 'getIsMeasureDistanceUnbounded'
		    will return 'true' and the return value of 'getMeasureDistanceMaxOccurs'
		    should be ignored. **/
		int getMeasureDistanceMaxOccurs() const
		{
			return myMeasureDistance.getMaxOccurs();
		}

		/** Returns 'true' if the specification says that the maximum number of
		    occurences of the <MeasureDistance> element is 'unbounded'.When this
		    function returns 'true', the value returned by 'getMeasureDistanceMaxOccurs'
		    should be ignored. **/
		int getIsMeasureDistanceUnbounded() const
		{
			return myMeasureDistance.getIsUnbounded();
		}

/* Stringing and Streaming ------------------------------------------------------------ */

		void stream( std::ostream& os_out, int indentcount_in, const char* indentchars_in ) const
		{
			return 0;
		}

	const int MxSeqSmpNodenode-4190::Impl::myXsdID = 4190;
	const std::string MxSeqSmpNodenode-4190::Impl::myXmlTypeName = "node-4190";
	const std::string MxSeqSmpNodenode-4190::Impl::myCppClassName = "DefaultConstructed";
	const std::string MxSeqSmpNodenode-4190::Impl::myDocumentation = "No XSD Documentation.";

	}; // struct MxSeqSmpNodenode-4190::Impl

