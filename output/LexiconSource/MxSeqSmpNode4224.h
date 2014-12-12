#pragma once

/**
  * @file       MxSeqSmpNode4224.h
  * @class      lexicon::MxSeqSmpNode4224
  * @author     Matthew James Briggs
  * @email      matthew.james.briggs@gmail.com
  * @url        http://matthewjamesbriggs.com
  * @date       2014-12-11 16:20:34
  * @project    Lexicon
  * @version    1.0
  * @musicxmlid 4224
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
#include "MxEmPageHeight.h"
#include "MxEmPageWidth.h"

namespace lexicon
{
/* MxSeqSmpNode4224 ------------------------------------------------------------------- */

	class MxSeqSmpNode4224 : public MxSeq
	{
	public:

/* Constructor, Destructor, Copy, Assignment ------------------------------------------ */

		MxSeqSmpNode4224();
		virtual ~MxSeqSmpNode4224();
		MxSeqSmpNode4224( const MxSeqSmpNode4224& other );
		MxSeqSmpNode4224& operator=( const MxSeqSmpNode4224& other );

/* defaultName ------------------------------------------------------------------------ */

		/** Returns the name of this xs:element as found in the musicxml.xsd document. **/
		std::string getXmlTypeName() const;

		/** Returns the name of this C++ class. **/
		std::string getClassName() const;

		/** Returns the documentation for this musicxml type as found in the musicxml.xsd
		    document. **/
		std::string getDocumentation() const;

/* PageHeight Functions --------------------------------------------------------------- */

		/** Tells you whether or not <PageHeight> is present. If <PageHeight> is
		    required, this will always return 'true'. If <PageHeight> is required,
		    no corresponding 'setIsPageHeightPresent' will exist. **/
		bool getIsPageHeightPresent() const;

		/** Returns a shared pointer handle to the <PageHeight> element. Note that
		    if getIsPageHeightPresent is false, this value will still exist (even
		    though it is not in the xml document) and you should ignore it. **/
		HMxEmPageHeight getPageHeight() const;

		/** Sets the internal shared pointer handle for the <PageHeight> element.
		     **/
		int setPageHeight( const HMxEmPageHeight& value_in );

		/** Returns the minimum number of occurences of the <PageHeight> element.
		    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
		    the element is optional. **/
		int getPageHeightMinOccurs() const;

		/** Returns the maximum number of occurences of the <PageHeight> element.
		    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
		    When the specification says 'unbounded' 'getIsPageHeightUnbounded'
		    will return 'true' and the return value of 'getPageHeightMaxOccurs'
		    should be ignored. **/
		int getPageHeightMaxOccurs() const;

		/** Returns 'true' if the specification says that the maximum number of
		    occurences of the <PageHeight> element is 'unbounded'.When this function
		    returns 'true', the value returned by 'getPageHeightMaxOccurs' should
		    be ignored. **/
		int getIsPageHeightUnbounded() const;

/* PageWidth Functions ---------------------------------------------------------------- */

		/** Tells you whether or not <PageWidth> is present. If <PageWidth> is
		    required, this will always return 'true'. If <PageWidth> is required,
		    no corresponding 'setIsPageWidthPresent' will exist. **/
		bool getIsPageWidthPresent() const;

		/** Returns a shared pointer handle to the <PageWidth> element. Note that
		    if getIsPageWidthPresent is false, this value will still exist (even
		    though it is not in the xml document) and you should ignore it. **/
		HMxEmPageWidth getPageWidth() const;

		/** Sets the internal shared pointer handle for the <PageWidth> element.
		     **/
		int setPageWidth( const HMxEmPageWidth& value_in );

		/** Returns the minimum number of occurences of the <PageWidth> element.
		    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
		    the element is optional. **/
		int getPageWidthMinOccurs() const;

		/** Returns the maximum number of occurences of the <PageWidth> element.
		    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
		    When the specification says 'unbounded' 'getIsPageWidthUnbounded' will
		    return 'true' and the return value of 'getPageWidthMaxOccurs' should
		    be ignored. **/
		int getPageWidthMaxOccurs() const;

		/** Returns 'true' if the specification says that the maximum number of
		    occurences of the <PageWidth> element is 'unbounded'.When this function
		    returns 'true', the value returned by 'getPageWidthMaxOccurs' should
		    be ignored. **/
		int getIsPageWidthUnbounded() const;

/* Stringing and Streaming ------------------------------------------------------------ */

		virtual void stream( std::ostream& os_out, int indentcount_in, const char* indentchars_in = "\t" ) const;

/* Impl ------------------------------------------------------------------------------- */

	private:
		class Impl;
		std::unique_ptr<Impl> myImpl;

	}; // class MxSeqSmpNode4224

} // namespace lexicon

