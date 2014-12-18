#pragma once

/**
  * @file       MxSeqSmpNode6056.h
  * @class      lexicon::MxSeqSmpNode6056
  * @author     Matthew James Briggs
  * @email      matthew.james.briggs@gmail.com
  * @url        http://matthewjamesbriggs.com
  * @date       2014-12-17 15:52:17
  * @project    Lexicon
  * @version    1.0
  * @musicxmlid 6056
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
#include "MxEsLevel.h"

namespace lexicon
{
/* MxSeqSmpNode6056 ------------------------------------------------------------------- */

	class MxSeqSmpNode6056 : public MxIndentable
	{
	public:

/* Constructor, Destructor, Copy, Assignment ------------------------------------------ */

		MxSeqSmpNode6056();
		virtual ~MxSeqSmpNode6056();
		MxSeqSmpNode6056( const MxSeqSmpNode6056& other );
		MxSeqSmpNode6056& operator=( const MxSeqSmpNode6056& other );

/* defaultName ------------------------------------------------------------------------ */

		/** Returns the name of this xs:element as found in the musicxml.xsd document. **/
		std::string getXmlTypeName() const;

		/** Returns the name of this C++ class. **/
		std::string getClassName() const;

		/** Returns the documentation for this musicxml type as found in the musicxml.xsd
		    document. **/
		std::string getDocumentation() const;

/* Level Functions -------------------------------------------------------------------- */

		/** Tells you whether or not <Level> is present. If <Level> is required,
		    this will always return 'true'. If <Level> is required, no corresponding
		    'setIsLevelPresent' will exist. **/
		bool getIsLevelPresent() const;

		/** Returns a shared pointer handle to the <Level> element. Note that if
		    getIsLevelPresent is false, this value will still exist (even though
		    it is not in the xml document) and you should ignore it. **/
		HMxEsLevel getLevel() const;

		/** Sets the internal shared pointer handle for the <Level> element.  **/
		void setLevel( const HMxEsLevel& value_in );

		/** Returns the minimum number of occurences of the <Level> element.  i.e.
		    MinOccurs > 0 means the element is required, MinOccurs == 0 means the
		    element is optional. **/
		int getLevelMinOccurs() const;

		/** Returns the maximum number of occurences of the <Level> element. Typically
		    the MaxOccurs is specified as either '1' or 'unbounded'.  When the
		    specification says 'unbounded' 'getIsLevelUnbounded' will return 'true'
		    and the return value of 'getLevelMaxOccurs' should be ignored. **/
		int getLevelMaxOccurs() const;

		/** Returns 'true' if the specification says that the maximum number of
		    occurences of the <Level> element is 'unbounded'.When this function
		    returns 'true', the value returned by 'getLevelMaxOccurs' should be
		    ignored. **/
		bool getIsLevelUnbounded() const;

/* Stringing and Streaming ------------------------------------------------------------ */

		virtual std::ostream& stream( std::ostream& os_out, int indentcount_in, const char* indentchars_in = "\t" ) const;

		/* unhide the stream function */
		using MxIndentable::stream;
/* Impl ------------------------------------------------------------------------------- */

	private:
		class Impl;
		std::unique_ptr<Impl> myImpl;

	}; // class MxSeqSmpNode6056

} // namespace lexicon

