#pragma once

/**
  * @file       MxSeqSmpNode3480.h
  * @class      lexicon::MxSeqSmpNode3480
  * @author     Matthew James Briggs
  * @email      matthew.james.briggs@gmail.com
  * @url        http://matthewjamesbriggs.com
  * @date       2014-12-11 14:43:28
  * @project    Lexicon
  * @version    1.0
  * @musicxmlid 3480
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
#include "MxEsString.h"
#include "MxEsFret.h"
#include "MxEsFingering.h"
#include "MxEeBarre.h"

namespace lexicon
{
/* MxSeqSmpNode3480 ------------------------------------------------------------------- */

	class MxSeqSmpNode3480 : public MxSeq
	{
	public:

/* Constructor, Destructor, Copy, Assignment ------------------------------------------ */

		MxSeqSmpNode3480();
		virtual ~MxSeqSmpNode3480();
		MxSeqSmpNode3480( const MxSeqSmpNode3480& other );
		MxSeqSmpNode3480& operator=( const MxSeqSmpNode3480& other );

/* String Functions ------------------------------------------------------------------- */

		/** Tells you whether or not <String> is present. If <String> is required,
		    this will always return 'true'. If <String> is required, no corresponding
		    'setIsStringPresent' will exist. **/
		bool getIsStringPresent() const;

		/** Returns a shared pointer handle to the <String> element. Note that
		    if getIsStringPresent is false, this value will still exist (even though
		    it is not in the xml document) and you should ignore it. **/
		HMxEsString getString() const;

		/** Sets the internal shared pointer handle for the <String> element.  **/
		int setString( const HMxEsString& value_in );

		/** Returns the minimum number of occurences of the <String> element. 
		    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
		    the element is optional. **/
		int getStringMinOccurs() const;

		/** Returns the maximum number of occurences of the <String> element. Typically
		    the MaxOccurs is specified as either '1' or 'unbounded'.  When the
		    specification says 'unbounded' 'getIsStringUnbounded' will return 'true'
		    and the return value of 'getStringMaxOccurs' should be ignored. **/
		int getStringMaxOccurs() const;

		/** Returns 'true' if the specification says that the maximum number of
		    occurences of the <String> element is 'unbounded'.When this function
		    returns 'true', the value returned by 'getStringMaxOccurs' should be
		    ignored. **/
		int getIsStringUnbounded() const;

/* Fret Functions --------------------------------------------------------------------- */

		/** Tells you whether or not <Fret> is present. If <Fret> is required,
		    this will always return 'true'. If <Fret> is required, no corresponding
		    'setIsFretPresent' will exist. **/
		bool getIsFretPresent() const;

		/** Returns a shared pointer handle to the <Fret> element. Note that if
		    getIsFretPresent is false, this value will still exist (even though
		    it is not in the xml document) and you should ignore it. **/
		HMxEsFret getFret() const;

		/** Sets the internal shared pointer handle for the <Fret> element.  **/
		int setFret( const HMxEsFret& value_in );

		/** Returns the minimum number of occurences of the <Fret> element.  i.e.
		    MinOccurs > 0 means the element is required, MinOccurs == 0 means the
		    element is optional. **/
		int getFretMinOccurs() const;

		/** Returns the maximum number of occurences of the <Fret> element. Typically
		    the MaxOccurs is specified as either '1' or 'unbounded'.  When the
		    specification says 'unbounded' 'getIsFretUnbounded' will return 'true'
		    and the return value of 'getFretMaxOccurs' should be ignored. **/
		int getFretMaxOccurs() const;

		/** Returns 'true' if the specification says that the maximum number of
		    occurences of the <Fret> element is 'unbounded'.When this function
		    returns 'true', the value returned by 'getFretMaxOccurs' should be
		    ignored. **/
		int getIsFretUnbounded() const;

/* Fingering Functions ---------------------------------------------------------------- */

		/** Tells you whether or not <Fingering> is present. If <Fingering> is
		    required, this will always return 'true'. If <Fingering> is required,
		    no corresponding 'setIsFingeringPresent' will exist. **/
		bool getIsFingeringPresent() const;
		void setIsFingeringPresent( const bool& value_in );

		/** Returns a shared pointer handle to the <Fingering> element. Note that
		    if getIsFingeringPresent is false, this value will still exist (even
		    though it is not in the xml document) and you should ignore it. **/
		HMxEsFingering getFingering() const;

		/** Sets the internal shared pointer handle for the <Fingering> element.
		    Note that if setIsFingeringPresent is false, the internal shared pointer
		    will not be altered and will hold a value that does not exist in xml. **/
		int setFingering( const HMxEsFingering& value_in );

		/** Returns the minimum number of occurences of the <Fingering> element.
		    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
		    the element is optional. **/
		int getFingeringMinOccurs() const;

		/** Returns the maximum number of occurences of the <Fingering> element.
		    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
		    When the specification says 'unbounded' 'getIsFingeringUnbounded' will
		    return 'true' and the return value of 'getFingeringMaxOccurs' should
		    be ignored. **/
		int getFingeringMaxOccurs() const;

		/** Returns 'true' if the specification says that the maximum number of
		    occurences of the <Fingering> element is 'unbounded'.When this function
		    returns 'true', the value returned by 'getFingeringMaxOccurs' should
		    be ignored. **/
		int getIsFingeringUnbounded() const;

/* Barre Functions -------------------------------------------------------------------- */

		/** Tells you whether or not <Barre> is present. If <Barre> is required,
		    this will always return 'true'. If <Barre> is required, no corresponding
		    'setIsBarrePresent' will exist. **/
		bool getIsBarrePresent() const;
		void setIsBarrePresent( const bool& value_in );

		/** Returns a shared pointer handle to the <Barre> element. Note that if
		    getIsBarrePresent is false, this value will still exist (even though
		    it is not in the xml document) and you should ignore it. **/
		HMxEeBarre getBarre() const;

		/** Sets the internal shared pointer handle for the <Barre> element. Note
		    that if setIsBarrePresent is false, the internal shared pointer will
		    not be altered and will hold a value that does not exist in xml. **/
		int setBarre( const HMxEeBarre& value_in );

		/** Returns the minimum number of occurences of the <Barre> element.  i.e.
		    MinOccurs > 0 means the element is required, MinOccurs == 0 means the
		    element is optional. **/
		int getBarreMinOccurs() const;

		/** Returns the maximum number of occurences of the <Barre> element. Typically
		    the MaxOccurs is specified as either '1' or 'unbounded'.  When the
		    specification says 'unbounded' 'getIsBarreUnbounded' will return 'true'
		    and the return value of 'getBarreMaxOccurs' should be ignored. **/
		int getBarreMaxOccurs() const;

		/** Returns 'true' if the specification says that the maximum number of
		    occurences of the <Barre> element is 'unbounded'.When this function
		    returns 'true', the value returned by 'getBarreMaxOccurs' should be
		    ignored. **/
		int getIsBarreUnbounded() const;

/* Stringing and Streaming ------------------------------------------------------------ */

		virtual void stream( std::ostream& os_out, int indentcount_in, const char* indentchars_in = "\t" ) const;

/* Impl ------------------------------------------------------------------------------- */

	private:
		class Impl;
		std::unique_ptr<Impl> myImpl;

	}; // class MxSeqSmpNode3480

} // namespace lexicon

