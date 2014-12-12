#pragma once

/**
  * @file       MxSeqSmpNode3154.h
  * @class      lexicon::MxSeqSmpNode3154
  * @author     Matthew James Briggs
  * @email      matthew.james.briggs@gmail.com
  * @url        http://matthewjamesbriggs.com
  * @date       2014-12-11 16:20:23
  * @project    Lexicon
  * @version    1.0
  * @musicxmlid 3154
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
#include "MxEsBassStep.h"
#include "MxEsBassAlter.h"

namespace lexicon
{
/* MxSeqSmpNode3154 ------------------------------------------------------------------- */

	class MxSeqSmpNode3154 : public MxSeq
	{
	public:

/* Constructor, Destructor, Copy, Assignment ------------------------------------------ */

		MxSeqSmpNode3154();
		virtual ~MxSeqSmpNode3154();
		MxSeqSmpNode3154( const MxSeqSmpNode3154& other );
		MxSeqSmpNode3154& operator=( const MxSeqSmpNode3154& other );

/* defaultName ------------------------------------------------------------------------ */

		/** Returns the name of this xs:element as found in the musicxml.xsd document. **/
		std::string getXmlTypeName() const;

		/** Returns the name of this C++ class. **/
		std::string getClassName() const;

		/** Returns the documentation for this musicxml type as found in the musicxml.xsd
		    document. **/
		std::string getDocumentation() const;

/* BassStep Functions ----------------------------------------------------------------- */

		/** Tells you whether or not <BassStep> is present. If <BassStep> is required,
		    this will always return 'true'. If <BassStep> is required, no corresponding
		    'setIsBassStepPresent' will exist. **/
		bool getIsBassStepPresent() const;

		/** Returns a shared pointer handle to the <BassStep> element. Note that
		    if getIsBassStepPresent is false, this value will still exist (even
		    though it is not in the xml document) and you should ignore it. **/
		HMxEsBassStep getBassStep() const;

		/** Sets the internal shared pointer handle for the <BassStep> element.
		     **/
		int setBassStep( const HMxEsBassStep& value_in );

		/** Returns the minimum number of occurences of the <BassStep> element.
		    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
		    the element is optional. **/
		int getBassStepMinOccurs() const;

		/** Returns the maximum number of occurences of the <BassStep> element.
		    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
		    When the specification says 'unbounded' 'getIsBassStepUnbounded' will
		    return 'true' and the return value of 'getBassStepMaxOccurs' should
		    be ignored. **/
		int getBassStepMaxOccurs() const;

		/** Returns 'true' if the specification says that the maximum number of
		    occurences of the <BassStep> element is 'unbounded'.When this function
		    returns 'true', the value returned by 'getBassStepMaxOccurs' should
		    be ignored. **/
		int getIsBassStepUnbounded() const;

/* BassAlter Functions ---------------------------------------------------------------- */

		/** Tells you whether or not <BassAlter> is present. If <BassAlter> is
		    required, this will always return 'true'. If <BassAlter> is required,
		    no corresponding 'setIsBassAlterPresent' will exist. **/
		bool getIsBassAlterPresent() const;
		void setIsBassAlterPresent( const bool& value_in );

		/** Returns a shared pointer handle to the <BassAlter> element. Note that
		    if getIsBassAlterPresent is false, this value will still exist (even
		    though it is not in the xml document) and you should ignore it. **/
		HMxEsBassAlter getBassAlter() const;

		/** Sets the internal shared pointer handle for the <BassAlter> element.
		    Note that if setIsBassAlterPresent is false, the internal shared pointer
		    will not be altered and will hold a value that does not exist in xml. **/
		int setBassAlter( const HMxEsBassAlter& value_in );

		/** Returns the minimum number of occurences of the <BassAlter> element.
		    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
		    the element is optional. **/
		int getBassAlterMinOccurs() const;

		/** Returns the maximum number of occurences of the <BassAlter> element.
		    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
		    When the specification says 'unbounded' 'getIsBassAlterUnbounded' will
		    return 'true' and the return value of 'getBassAlterMaxOccurs' should
		    be ignored. **/
		int getBassAlterMaxOccurs() const;

		/** Returns 'true' if the specification says that the maximum number of
		    occurences of the <BassAlter> element is 'unbounded'.When this function
		    returns 'true', the value returned by 'getBassAlterMaxOccurs' should
		    be ignored. **/
		int getIsBassAlterUnbounded() const;

/* Stringing and Streaming ------------------------------------------------------------ */

		virtual void stream( std::ostream& os_out, int indentcount_in, const char* indentchars_in = "\t" ) const;

/* Impl ------------------------------------------------------------------------------- */

	private:
		class Impl;
		std::unique_ptr<Impl> myImpl;

	}; // class MxSeqSmpNode3154

} // namespace lexicon

