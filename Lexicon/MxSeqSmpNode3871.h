#pragma once

/**
  * @file       MxSeqSmpNode3871.h
  * @class      lexicon::MxSeqSmpNode3871
  * @author     Matthew James Briggs
  * @email      matthew.james.briggs@gmail.com
  * @url        http://matthewjamesbriggs.com
  * @date       2014-12-12 16:19:51
  * @project    Lexicon
  * @version    1.0
  * @musicxmlid 3871
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
#include "MxEsRootStep.h"
#include "MxEsRootAlter.h"

namespace lexicon
{
/* MxSeqSmpNode3871 ------------------------------------------------------------------- */

	class MxSeqSmpNode3871 : public MxIndentable
	{
	public:

/* Constructor, Destructor, Copy, Assignment ------------------------------------------ */

		MxSeqSmpNode3871();
		virtual ~MxSeqSmpNode3871();
		MxSeqSmpNode3871( const MxSeqSmpNode3871& other );
		MxSeqSmpNode3871& operator=( const MxSeqSmpNode3871& other );

/* defaultName ------------------------------------------------------------------------ */

		/** Returns the name of this xs:element as found in the musicxml.xsd document. **/
		std::string getXmlTypeName() const;

		/** Returns the name of this C++ class. **/
		std::string getClassName() const;

		/** Returns the documentation for this musicxml type as found in the musicxml.xsd
		    document. **/
		std::string getDocumentation() const;

/* RootStep Functions ----------------------------------------------------------------- */

		/** Tells you whether or not <RootStep> is present. If <RootStep> is required,
		    this will always return 'true'. If <RootStep> is required, no corresponding
		    'setIsRootStepPresent' will exist. **/
		bool getIsRootStepPresent() const;

		/** Returns a shared pointer handle to the <RootStep> element. Note that
		    if getIsRootStepPresent is false, this value will still exist (even
		    though it is not in the xml document) and you should ignore it. **/
		HMxEsRootStep getRootStep() const;

		/** Sets the internal shared pointer handle for the <RootStep> element.
		     **/
		void setRootStep( const HMxEsRootStep& value_in );

		/** Returns the minimum number of occurences of the <RootStep> element.
		    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
		    the element is optional. **/
		int getRootStepMinOccurs() const;

		/** Returns the maximum number of occurences of the <RootStep> element.
		    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
		    When the specification says 'unbounded' 'getIsRootStepUnbounded' will
		    return 'true' and the return value of 'getRootStepMaxOccurs' should
		    be ignored. **/
		int getRootStepMaxOccurs() const;

		/** Returns 'true' if the specification says that the maximum number of
		    occurences of the <RootStep> element is 'unbounded'.When this function
		    returns 'true', the value returned by 'getRootStepMaxOccurs' should
		    be ignored. **/
		bool getIsRootStepUnbounded() const;

/* RootAlter Functions ---------------------------------------------------------------- */

		/** Tells you whether or not <RootAlter> is present. If <RootAlter> is
		    required, this will always return 'true'. If <RootAlter> is required,
		    no corresponding 'setIsRootAlterPresent' will exist. **/
		bool getIsRootAlterPresent() const;
		void setIsRootAlterPresent( const bool& value_in );

		/** Returns a shared pointer handle to the <RootAlter> element. Note that
		    if getIsRootAlterPresent is false, this value will still exist (even
		    though it is not in the xml document) and you should ignore it. **/
		HMxEsRootAlter getRootAlter() const;

		/** Sets the internal shared pointer handle for the <RootAlter> element.
		    Note that if setIsRootAlterPresent is false, the internal shared pointer
		    will not be altered and will hold a value that does not exist in xml. **/
		void setRootAlter( const HMxEsRootAlter& value_in );

		/** Returns the minimum number of occurences of the <RootAlter> element.
		    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
		    the element is optional. **/
		int getRootAlterMinOccurs() const;

		/** Returns the maximum number of occurences of the <RootAlter> element.
		    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
		    When the specification says 'unbounded' 'getIsRootAlterUnbounded' will
		    return 'true' and the return value of 'getRootAlterMaxOccurs' should
		    be ignored. **/
		int getRootAlterMaxOccurs() const;

		/** Returns 'true' if the specification says that the maximum number of
		    occurences of the <RootAlter> element is 'unbounded'.When this function
		    returns 'true', the value returned by 'getRootAlterMaxOccurs' should
		    be ignored. **/
		bool getIsRootAlterUnbounded() const;

/* Stringing and Streaming ------------------------------------------------------------ */

		virtual std::ostream& stream( std::ostream& os_out, int indentcount_in, const char* indentchars_in = "\t" ) const;

/* Impl ------------------------------------------------------------------------------- */

	private:
		class Impl;
		std::unique_ptr<Impl> myImpl;

	}; // class MxSeqSmpNode3871

} // namespace lexicon

