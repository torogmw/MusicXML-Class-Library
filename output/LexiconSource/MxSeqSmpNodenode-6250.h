#pragma once

/**
  * @file       MxSeqSmpNodenode-6250.h
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
  * This class represents an xs:sequence object from musicxml.xsd.
  * 
 **/

#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include "LexiconBaseObjects.h"
#include "MxEmLeftMargin.h"
#include "MxEmRightMargin.h"

namespace lexicon
{
/* MxSeqSmpNodenode-6250 -------------------------------------------------------------- */

	class MxSeqSmpNodenode-6250 : public MxSeq
	{
	public:

/* Constructor, Destructor, Copy, Assignment ------------------------------------------ */

		MxSeqSmpNodenode-6250();
		virtual ~MxSeqSmpNodenode-6250();
		MxSeqSmpNodenode-6250( const MxSeqSmpNodenode-6250& other );
		MxSeqSmpNodenode-6250& operator=( const MxSeqSmpNodenode-6250& other );

/* defaultName ------------------------------------------------------------------------ */

		/** Returns the name of this xs:element as found in the musicxml.xsd document. **/
		std::string getXmlTypeName() const;

		/** Returns the name of this C++ class. **/
		std::string getClassName() const;

		/** Returns the documentation for this musicxml type as found in the musicxml.xsd
		    document. **/
		std::string getDocumentation() const;

/* LeftMargin Functions --------------------------------------------------------------- */

		/** Tells you whether or not <LeftMargin> is present. If <LeftMargin> is
		    required, this will always return 'true'. If <LeftMargin> is required,
		    no corresponding 'setIsLeftMarginPresent' will exist. **/
		bool getIsLeftMarginPresent() const;

		/** Returns a shared pointer handle to the <LeftMargin> element. Note that
		    if getIsLeftMarginPresent is false, this value will still exist (even
		    though it is not in the xml document) and you should ignore it. **/
		HMxEmLeftMargin getLeftMargin() const;

		/** Sets the internal shared pointer handle for the <LeftMargin> element.
		     **/
		int setLeftMargin( const HMxEmLeftMargin& value_in );

		/** Returns the minimum number of occurences of the <LeftMargin> element.
		    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
		    the element is optional. **/
		int getLeftMarginMinOccurs() const;

		/** Returns the maximum number of occurences of the <LeftMargin> element.
		    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
		    When the specification says 'unbounded' 'getIsLeftMarginUnbounded'
		    will return 'true' and the return value of 'getLeftMarginMaxOccurs'
		    should be ignored. **/
		int getLeftMarginMaxOccurs() const;

		/** Returns 'true' if the specification says that the maximum number of
		    occurences of the <LeftMargin> element is 'unbounded'.When this function
		    returns 'true', the value returned by 'getLeftMarginMaxOccurs' should
		    be ignored. **/
		int getIsLeftMarginUnbounded() const;

/* RightMargin Functions -------------------------------------------------------------- */

		/** Tells you whether or not <RightMargin> is present. If <RightMargin>
		    is required, this will always return 'true'. If <RightMargin> is required,
		    no corresponding 'setIsRightMarginPresent' will exist. **/
		bool getIsRightMarginPresent() const;

		/** Returns a shared pointer handle to the <RightMargin> element. Note
		    that if getIsRightMarginPresent is false, this value will still exist
		    (even though it is not in the xml document) and you should ignore it. **/
		HMxEmRightMargin getRightMargin() const;

		/** Sets the internal shared pointer handle for the <RightMargin> element.
		     **/
		int setRightMargin( const HMxEmRightMargin& value_in );

		/** Returns the minimum number of occurences of the <RightMargin> element.
		    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
		    the element is optional. **/
		int getRightMarginMinOccurs() const;

		/** Returns the maximum number of occurences of the <RightMargin> element.
		    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
		    When the specification says 'unbounded' 'getIsRightMarginUnbounded'
		    will return 'true' and the return value of 'getRightMarginMaxOccurs'
		    should be ignored. **/
		int getRightMarginMaxOccurs() const;

		/** Returns 'true' if the specification says that the maximum number of
		    occurences of the <RightMargin> element is 'unbounded'.When this function
		    returns 'true', the value returned by 'getRightMarginMaxOccurs' should
		    be ignored. **/
		int getIsRightMarginUnbounded() const;

/* Stringing and Streaming ------------------------------------------------------------ */

		virtual void stream( std::ostream& os_out, int indentcount_in, const char* indentchars_in = "\t" ) const;

/* Impl ------------------------------------------------------------------------------- */

	private:
		class Impl;
		std::unique_ptr<Impl> myImpl;

	}; // class MxSeqSmpNodenode-6250

} // namespace lexicon

