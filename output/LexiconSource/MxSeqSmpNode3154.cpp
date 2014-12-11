/**
  * @file       MxSeqSmpNode3154.cpp
  * @class      lexicon::MxSeqSmpNode3154
  * @author     Matthew James Briggs
  * @email      matthew.james.briggs@gmail.com
  * @url        http://matthewjamesbriggs.com
  * @date       2014-12-11 15:30:12
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
		{}

	private:
		HMxEsBassStep myBassStep;
		bool myBassStepIsPresent;
		HMxEsBassAlter myBassAlter;
		bool myBassAlterIsPresent;
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

/* BassStep Functions ----------------------------------------------------------------- */

		/** Tells you whether or not <BassStep> is present. If <BassStep> is required,
		    this will always return 'true'. If <BassStep> is required, no corresponding
		    'setIsBassStepPresent' will exist. **/
		bool getIsBassStepPresent() const
		{
			return 0;
		}

		/** Returns a shared pointer handle to the <BassStep> element. Note that
		    if getIsBassStepPresent is false, this value will still exist (even
		    though it is not in the xml document) and you should ignore it. **/
		HMxEsBassStep getBassStep() const
		{
			if( myBassStep )
			{
				return myBassStep;
			}
			else
			{
				return std::make_shared<HMxEsBassStep>();
			}
		}

		/** Sets the internal shared pointer handle for the <BassStep> element.
		     **/
		int setBassStep( const HMxEsBassStep& value_in )
		{
			myBassStep = value_in;
		}

		/** Returns the minimum number of occurences of the <BassStep> element.
		    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
		    the element is optional. **/
		int getBassStepMinOccurs() const
		{
			return myBassStep.getMinOccurs();
		}

		/** Returns the maximum number of occurences of the <BassStep> element.
		    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
		    When the specification says 'unbounded' 'getIsBassStepUnbounded' will
		    return 'true' and the return value of 'getBassStepMaxOccurs' should
		    be ignored. **/
		int getBassStepMaxOccurs() const
		{
			return myBassStep.getMaxOccurs();
		}

		/** Returns 'true' if the specification says that the maximum number of
		    occurences of the <BassStep> element is 'unbounded'.When this function
		    returns 'true', the value returned by 'getBassStepMaxOccurs' should
		    be ignored. **/
		int getIsBassStepUnbounded() const
		{
			return myBassStep.getIsUnbounded();
		}

/* BassAlter Functions ---------------------------------------------------------------- */

		/** Tells you whether or not <BassAlter> is present. If <BassAlter> is
		    required, this will always return 'true'. If <BassAlter> is required,
		    no corresponding 'setIsBassAlterPresent' will exist. **/
		bool getIsBassAlterPresent() const
		{
			return 0;
		}

		void setIsBassAlterPresent( const bool& value_in )
		{
			return 0;
		}

		/** Returns a shared pointer handle to the <BassAlter> element. Note that
		    if getIsBassAlterPresent is false, this value will still exist (even
		    though it is not in the xml document) and you should ignore it. **/
		HMxEsBassAlter getBassAlter() const
		{
			if( myBassAlter )
			{
				return myBassAlter;
			}
			else
			{
				return std::make_shared<HMxEsBassAlter>();
			}
		}

		/** Sets the internal shared pointer handle for the <BassAlter> element.
		    Note that if setIsBassAlterPresent is false, the internal shared pointer
		    will not be altered and will hold a value that does not exist in xml. **/
		int setBassAlter( const HMxEsBassAlter& value_in )
		{
			myBassAlter = value_in;
		}

		/** Returns the minimum number of occurences of the <BassAlter> element.
		    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
		    the element is optional. **/
		int getBassAlterMinOccurs() const
		{
			return myBassAlter.getMinOccurs();
		}

		/** Returns the maximum number of occurences of the <BassAlter> element.
		    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
		    When the specification says 'unbounded' 'getIsBassAlterUnbounded' will
		    return 'true' and the return value of 'getBassAlterMaxOccurs' should
		    be ignored. **/
		int getBassAlterMaxOccurs() const
		{
			return myBassAlter.getMaxOccurs();
		}

		/** Returns 'true' if the specification says that the maximum number of
		    occurences of the <BassAlter> element is 'unbounded'.When this function
		    returns 'true', the value returned by 'getBassAlterMaxOccurs' should
		    be ignored. **/
		int getIsBassAlterUnbounded() const
		{
			return myBassAlter.getIsUnbounded();
		}

/* Stringing and Streaming ------------------------------------------------------------ */

		void stream( std::ostream& os_out, int indentcount_in, const char* indentchars_in ) const
		{
			return 0;
		}

	const int MxSeqSmpNode3154::Impl::myXsdID = 3154;
	const std::string MxSeqSmpNode3154::Impl::myXmlTypeName = "";
	const std::string MxSeqSmpNode3154::Impl::myCppClassName = "DefaultConstructed";
	const std::string MxSeqSmpNode3154::Impl::myDocumentation = "";

	}; // struct MxSeqSmpNode3154::Impl

