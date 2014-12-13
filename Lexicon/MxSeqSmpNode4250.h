#pragma once

/**
  * @file       MxSeqSmpNode4250.h
  * @class      lexicon::MxSeqSmpNode4250
  * @author     Matthew James Briggs
  * @email      matthew.james.briggs@gmail.com
  * @url        http://matthewjamesbriggs.com
  * @date       2014-12-12 16:19:57
  * @project    Lexicon
  * @version    1.0
  * @musicxmlid 4250
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
#include "MxEmMillimeters.h"
#include "MxEmTenths.h"

namespace lexicon
{
/* MxSeqSmpNode4250 ------------------------------------------------------------------- */

	class MxSeqSmpNode4250 : public MxIndentable
	{
	public:

/* Constructor, Destructor, Copy, Assignment ------------------------------------------ */

		MxSeqSmpNode4250();
		virtual ~MxSeqSmpNode4250();
		MxSeqSmpNode4250( const MxSeqSmpNode4250& other );
		MxSeqSmpNode4250& operator=( const MxSeqSmpNode4250& other );

/* defaultName ------------------------------------------------------------------------ */

		/** Returns the name of this xs:element as found in the musicxml.xsd document. **/
		std::string getXmlTypeName() const;

		/** Returns the name of this C++ class. **/
		std::string getClassName() const;

		/** Returns the documentation for this musicxml type as found in the musicxml.xsd
		    document. **/
		std::string getDocumentation() const;

/* Millimeters Functions -------------------------------------------------------------- */

		/** Tells you whether or not <Millimeters> is present. If <Millimeters>
		    is required, this will always return 'true'. If <Millimeters> is required,
		    no corresponding 'setIsMillimetersPresent' will exist. **/
		bool getIsMillimetersPresent() const;

		/** Returns a shared pointer handle to the <Millimeters> element. Note
		    that if getIsMillimetersPresent is false, this value will still exist
		    (even though it is not in the xml document) and you should ignore it. **/
		HMxEmMillimeters getMillimeters() const;

		/** Sets the internal shared pointer handle for the <Millimeters> element.
		     **/
		void setMillimeters( const HMxEmMillimeters& value_in );

		/** Returns the minimum number of occurences of the <Millimeters> element.
		    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
		    the element is optional. **/
		int getMillimetersMinOccurs() const;

		/** Returns the maximum number of occurences of the <Millimeters> element.
		    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
		    When the specification says 'unbounded' 'getIsMillimetersUnbounded'
		    will return 'true' and the return value of 'getMillimetersMaxOccurs'
		    should be ignored. **/
		int getMillimetersMaxOccurs() const;

		/** Returns 'true' if the specification says that the maximum number of
		    occurences of the <Millimeters> element is 'unbounded'.When this function
		    returns 'true', the value returned by 'getMillimetersMaxOccurs' should
		    be ignored. **/
		bool getIsMillimetersUnbounded() const;

/* Tenths Functions ------------------------------------------------------------------- */

		/** Tells you whether or not <Tenths> is present. If <Tenths> is required,
		    this will always return 'true'. If <Tenths> is required, no corresponding
		    'setIsTenthsPresent' will exist. **/
		bool getIsTenthsPresent() const;

		/** Returns a shared pointer handle to the <Tenths> element. Note that
		    if getIsTenthsPresent is false, this value will still exist (even though
		    it is not in the xml document) and you should ignore it. **/
		HMxEmTenths getTenths() const;

		/** Sets the internal shared pointer handle for the <Tenths> element.  **/
		void setTenths( const HMxEmTenths& value_in );

		/** Returns the minimum number of occurences of the <Tenths> element. 
		    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
		    the element is optional. **/
		int getTenthsMinOccurs() const;

		/** Returns the maximum number of occurences of the <Tenths> element. Typically
		    the MaxOccurs is specified as either '1' or 'unbounded'.  When the
		    specification says 'unbounded' 'getIsTenthsUnbounded' will return 'true'
		    and the return value of 'getTenthsMaxOccurs' should be ignored. **/
		int getTenthsMaxOccurs() const;

		/** Returns 'true' if the specification says that the maximum number of
		    occurences of the <Tenths> element is 'unbounded'.When this function
		    returns 'true', the value returned by 'getTenthsMaxOccurs' should be
		    ignored. **/
		bool getIsTenthsUnbounded() const;

/* Stringing and Streaming ------------------------------------------------------------ */

		virtual std::ostream& stream( std::ostream& os_out, int indentcount_in, const char* indentchars_in = "\t" ) const;

/* Impl ------------------------------------------------------------------------------- */

	private:
		class Impl;
		std::unique_ptr<Impl> myImpl;

	}; // class MxSeqSmpNode4250

} // namespace lexicon

