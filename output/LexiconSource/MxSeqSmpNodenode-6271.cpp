/**
  * @file       MxSeqSmpNodenode-6271.cpp
  * @class      lexicon::MxSeqSmpNodenode-6271
  * @author     Matthew James Briggs
  * @email      matthew.james.briggs@gmail.com
  * @url        http://matthewjamesbriggs.com
  * @date       2014-12-11 15:41:53
  * @project    Lexicon
  * @version    1.0
  * @musicxmlid 6271
  * 
  * @brief This class represents an xs:sequence object from musicxml.xsd.
  * 
  * Full description goes here.
  * 
 **/

#include "MxSeqSmpNodenode-6271.h"

/* Impl ------------------------------------------------------------------------------- */

namespace lexicon
{
	struct MxSeqSmpNodenode-6271::Impl
	{
		Impl()
		{}

	private:
		HMxEmDisplayStep myDisplayStep;
		bool myDisplayStepIsPresent;
		HMxEmDisplayOctave myDisplayOctave;
		bool myDisplayOctaveIsPresent;
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

/* DisplayStep Functions -------------------------------------------------------------- */

		/** Tells you whether or not <DisplayStep> is present. If <DisplayStep>
		    is required, this will always return 'true'. If <DisplayStep> is required,
		    no corresponding 'setIsDisplayStepPresent' will exist. **/
		bool getIsDisplayStepPresent() const
		{
			return 0;
		}

		/** Returns a shared pointer handle to the <DisplayStep> element. Note
		    that if getIsDisplayStepPresent is false, this value will still exist
		    (even though it is not in the xml document) and you should ignore it. **/
		HMxEmDisplayStep getDisplayStep() const
		{
			if( myDisplayStep )
			{
				return myDisplayStep;
			}
			else
			{
				return std::make_shared<HMxEmDisplayStep>();
			}
		}

		/** Sets the internal shared pointer handle for the <DisplayStep> element.
		     **/
		int setDisplayStep( const HMxEmDisplayStep& value_in )
		{
			myDisplayStep = value_in;
		}

		/** Returns the minimum number of occurences of the <DisplayStep> element.
		    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
		    the element is optional. **/
		int getDisplayStepMinOccurs() const
		{
			return myDisplayStep.getMinOccurs();
		}

		/** Returns the maximum number of occurences of the <DisplayStep> element.
		    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
		    When the specification says 'unbounded' 'getIsDisplayStepUnbounded'
		    will return 'true' and the return value of 'getDisplayStepMaxOccurs'
		    should be ignored. **/
		int getDisplayStepMaxOccurs() const
		{
			return myDisplayStep.getMaxOccurs();
		}

		/** Returns 'true' if the specification says that the maximum number of
		    occurences of the <DisplayStep> element is 'unbounded'.When this function
		    returns 'true', the value returned by 'getDisplayStepMaxOccurs' should
		    be ignored. **/
		int getIsDisplayStepUnbounded() const
		{
			return myDisplayStep.getIsUnbounded();
		}

/* DisplayOctave Functions ------------------------------------------------------------ */

		/** Tells you whether or not <DisplayOctave> is present. If <DisplayOctave>
		    is required, this will always return 'true'. If <DisplayOctave> is
		    required, no corresponding 'setIsDisplayOctavePresent' will exist. **/
		bool getIsDisplayOctavePresent() const
		{
			return 0;
		}

		/** Returns a shared pointer handle to the <DisplayOctave> element. Note
		    that if getIsDisplayOctavePresent is false, this value will still exist
		    (even though it is not in the xml document) and you should ignore it. **/
		HMxEmDisplayOctave getDisplayOctave() const
		{
			if( myDisplayOctave )
			{
				return myDisplayOctave;
			}
			else
			{
				return std::make_shared<HMxEmDisplayOctave>();
			}
		}

		/** Sets the internal shared pointer handle for the <DisplayOctave> element.
		     **/
		int setDisplayOctave( const HMxEmDisplayOctave& value_in )
		{
			myDisplayOctave = value_in;
		}

		/** Returns the minimum number of occurences of the <DisplayOctave> element.
		    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
		    the element is optional. **/
		int getDisplayOctaveMinOccurs() const
		{
			return myDisplayOctave.getMinOccurs();
		}

		/** Returns the maximum number of occurences of the <DisplayOctave> element.
		    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
		    When the specification says 'unbounded' 'getIsDisplayOctaveUnbounded'
		    will return 'true' and the return value of 'getDisplayOctaveMaxOccurs'
		    should be ignored. **/
		int getDisplayOctaveMaxOccurs() const
		{
			return myDisplayOctave.getMaxOccurs();
		}

		/** Returns 'true' if the specification says that the maximum number of
		    occurences of the <DisplayOctave> element is 'unbounded'.When this
		    function returns 'true', the value returned by 'getDisplayOctaveMaxOccurs'
		    should be ignored. **/
		int getIsDisplayOctaveUnbounded() const
		{
			return myDisplayOctave.getIsUnbounded();
		}

/* Stringing and Streaming ------------------------------------------------------------ */

		void stream( std::ostream& os_out, int indentcount_in, const char* indentchars_in ) const
		{
			return 0;
		}

	const int MxSeqSmpNodenode-6271::Impl::myXsdID = 6271;
	const std::string MxSeqSmpNodenode-6271::Impl::myXmlTypeName = "node-6271";
	const std::string MxSeqSmpNodenode-6271::Impl::myCppClassName = "DefaultConstructed";
	const std::string MxSeqSmpNodenode-6271::Impl::myDocumentation = "No XSD Documentation.";

	}; // struct MxSeqSmpNodenode-6271::Impl

