#pragma once

/**
  * @file       MxSeqSmpNode6271.h
  * @class      lexicon::MxSeqSmpNode6271
  * @author     Matthew James Briggs
  * @email      matthew.james.briggs@gmail.com
  * @url        http://matthewjamesbriggs.com
  * @date       2014-12-11 15:30:29
  * @project    Lexicon
  * @version    1.0
  * @musicxmlid 6271
  * 
  * @brief This class represents an xs:sequence object from musicxml.xsd.
  * 
  * This class represents an xs:sequence object from musicxml.xsd.
  * 
 **/

#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include "LexiconBaseObjects.h"
#include "MxEmDisplayStep.h"
#include "MxEmDisplayOctave.h"

namespace lexicon
{
/* MxSeqSmpNode6271 ------------------------------------------------------------------- */

	class MxSeqSmpNode6271 : public MxSeq
	{
	public:

/* Constructor, Destructor, Copy, Assignment ------------------------------------------ */

		MxSeqSmpNode6271();
		virtual ~MxSeqSmpNode6271();
		MxSeqSmpNode6271( const MxSeqSmpNode6271& other );
		MxSeqSmpNode6271& operator=( const MxSeqSmpNode6271& other );

/* defaultName ------------------------------------------------------------------------ */

		/** Returns the name of this xs:element as found in the musicxml.xsd document. **/
		std::string getXmlTypeName() const;

		/** Returns the name of this C++ class. **/
		std::string getClassName() const;

		/** Returns the documentation for this musicxml type as found in the musicxml.xsd
		    document. **/
		std::string getDocumentation() const;

/* DisplayStep Functions -------------------------------------------------------------- */

		/** Tells you whether or not <DisplayStep> is present. If <DisplayStep>
		    is required, this will always return 'true'. If <DisplayStep> is required,
		    no corresponding 'setIsDisplayStepPresent' will exist. **/
		bool getIsDisplayStepPresent() const;

		/** Returns a shared pointer handle to the <DisplayStep> element. Note
		    that if getIsDisplayStepPresent is false, this value will still exist
		    (even though it is not in the xml document) and you should ignore it. **/
		HMxEmDisplayStep getDisplayStep() const;

		/** Sets the internal shared pointer handle for the <DisplayStep> element.
		     **/
		int setDisplayStep( const HMxEmDisplayStep& value_in );

		/** Returns the minimum number of occurences of the <DisplayStep> element.
		    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
		    the element is optional. **/
		int getDisplayStepMinOccurs() const;

		/** Returns the maximum number of occurences of the <DisplayStep> element.
		    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
		    When the specification says 'unbounded' 'getIsDisplayStepUnbounded'
		    will return 'true' and the return value of 'getDisplayStepMaxOccurs'
		    should be ignored. **/
		int getDisplayStepMaxOccurs() const;

		/** Returns 'true' if the specification says that the maximum number of
		    occurences of the <DisplayStep> element is 'unbounded'.When this function
		    returns 'true', the value returned by 'getDisplayStepMaxOccurs' should
		    be ignored. **/
		int getIsDisplayStepUnbounded() const;

/* DisplayOctave Functions ------------------------------------------------------------ */

		/** Tells you whether or not <DisplayOctave> is present. If <DisplayOctave>
		    is required, this will always return 'true'. If <DisplayOctave> is
		    required, no corresponding 'setIsDisplayOctavePresent' will exist. **/
		bool getIsDisplayOctavePresent() const;

		/** Returns a shared pointer handle to the <DisplayOctave> element. Note
		    that if getIsDisplayOctavePresent is false, this value will still exist
		    (even though it is not in the xml document) and you should ignore it. **/
		HMxEmDisplayOctave getDisplayOctave() const;

		/** Sets the internal shared pointer handle for the <DisplayOctave> element.
		     **/
		int setDisplayOctave( const HMxEmDisplayOctave& value_in );

		/** Returns the minimum number of occurences of the <DisplayOctave> element.
		    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
		    the element is optional. **/
		int getDisplayOctaveMinOccurs() const;

		/** Returns the maximum number of occurences of the <DisplayOctave> element.
		    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
		    When the specification says 'unbounded' 'getIsDisplayOctaveUnbounded'
		    will return 'true' and the return value of 'getDisplayOctaveMaxOccurs'
		    should be ignored. **/
		int getDisplayOctaveMaxOccurs() const;

		/** Returns 'true' if the specification says that the maximum number of
		    occurences of the <DisplayOctave> element is 'unbounded'.When this
		    function returns 'true', the value returned by 'getDisplayOctaveMaxOccurs'
		    should be ignored. **/
		int getIsDisplayOctaveUnbounded() const;

/* Stringing and Streaming ------------------------------------------------------------ */

		virtual void stream( std::ostream& os_out, int indentcount_in, const char* indentchars_in = "\t" ) const;

/* Impl ------------------------------------------------------------------------------- */

	private:
		class Impl;
		std::unique_ptr<Impl> myImpl;

	}; // class MxSeqSmpNode6271

} // namespace lexicon

