#pragma once

/**
  * @file       MxSeqSmpNodenode-5619.h
  * @class      lexicon::MxSeqSmpNodenode-5619
  * @author     Matthew James Briggs
  * @email      matthew.james.briggs@gmail.com
  * @url        http://matthewjamesbriggs.com
  * @date       2014-12-11 15:41:48
  * @project    Lexicon
  * @version    1.0
  * @musicxmlid 5619
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
#include "MxEsTupletNumber.h"
#include "MxEsTupletType.h"

namespace lexicon
{
/* MxSeqSmpNodenode-5619 -------------------------------------------------------------- */

	class MxSeqSmpNodenode-5619 : public MxSeq
	{
	public:

/* Constructor, Destructor, Copy, Assignment ------------------------------------------ */

		MxSeqSmpNodenode-5619();
		virtual ~MxSeqSmpNodenode-5619();
		MxSeqSmpNodenode-5619( const MxSeqSmpNodenode-5619& other );
		MxSeqSmpNodenode-5619& operator=( const MxSeqSmpNodenode-5619& other );

/* defaultName ------------------------------------------------------------------------ */

		/** Returns the name of this xs:element as found in the musicxml.xsd document. **/
		std::string getXmlTypeName() const;

		/** Returns the name of this C++ class. **/
		std::string getClassName() const;

		/** Returns the documentation for this musicxml type as found in the musicxml.xsd
		    document. **/
		std::string getDocumentation() const;

/* TupletNumber Functions ------------------------------------------------------------- */

		/** Tells you whether or not <TupletNumber> is present. If <TupletNumber>
		    is required, this will always return 'true'. If <TupletNumber> is required,
		    no corresponding 'setIsTupletNumberPresent' will exist. **/
		bool getIsTupletNumberPresent() const;
		void setIsTupletNumberPresent( const bool& value_in );

		/** Returns a shared pointer handle to the <TupletNumber> element. Note
		    that if getIsTupletNumberPresent is false, this value will still exist
		    (even though it is not in the xml document) and you should ignore it. **/
		HMxEsTupletNumber getTupletNumber() const;

		/** Sets the internal shared pointer handle for the <TupletNumber> element.
		    Note that if setIsTupletNumberPresent is false, the internal shared
		    pointer will not be altered and will hold a value that does not exist
		    in xml. **/
		int setTupletNumber( const HMxEsTupletNumber& value_in );

		/** Returns the minimum number of occurences of the <TupletNumber> element.
		    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
		    the element is optional. **/
		int getTupletNumberMinOccurs() const;

		/** Returns the maximum number of occurences of the <TupletNumber> element.
		    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
		    When the specification says 'unbounded' 'getIsTupletNumberUnbounded'
		    will return 'true' and the return value of 'getTupletNumberMaxOccurs'
		    should be ignored. **/
		int getTupletNumberMaxOccurs() const;

		/** Returns 'true' if the specification says that the maximum number of
		    occurences of the <TupletNumber> element is 'unbounded'.When this function
		    returns 'true', the value returned by 'getTupletNumberMaxOccurs' should
		    be ignored. **/
		int getIsTupletNumberUnbounded() const;

/* TupletType Functions --------------------------------------------------------------- */

		/** Tells you whether or not <TupletType> is present. If <TupletType> is
		    required, this will always return 'true'. If <TupletType> is required,
		    no corresponding 'setIsTupletTypePresent' will exist. **/
		bool getIsTupletTypePresent() const;
		void setIsTupletTypePresent( const bool& value_in );

		/** Returns a shared pointer handle to the <TupletType> element. Note that
		    if getIsTupletTypePresent is false, this value will still exist (even
		    though it is not in the xml document) and you should ignore it. **/
		HMxEsTupletType getTupletType() const;

		/** Sets the internal shared pointer handle for the <TupletType> element.
		    Note that if setIsTupletTypePresent is false, the internal shared pointer
		    will not be altered and will hold a value that does not exist in xml. **/
		int setTupletType( const HMxEsTupletType& value_in );

		/** Returns the minimum number of occurences of the <TupletType> element.
		    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
		    the element is optional. **/
		int getTupletTypeMinOccurs() const;

		/** Returns the maximum number of occurences of the <TupletType> element.
		    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
		    When the specification says 'unbounded' 'getIsTupletTypeUnbounded'
		    will return 'true' and the return value of 'getTupletTypeMaxOccurs'
		    should be ignored. **/
		int getTupletTypeMaxOccurs() const;

		/** Returns 'true' if the specification says that the maximum number of
		    occurences of the <TupletType> element is 'unbounded'.When this function
		    returns 'true', the value returned by 'getTupletTypeMaxOccurs' should
		    be ignored. **/
		int getIsTupletTypeUnbounded() const;

/* TupletDot Functions ---------------------------------------------------------------- */

		/** Returns the count of <TupletDot> elements. **/
		size_type getTupletDotCount() const;

		/** Returns an STL iterator into the contained collection of element handles. **/
		std::vector<HMxEeTupletDot>::iterator getTupletDotBegin();

		/** Returns an STL iterator into the contained collection of element handles. **/
		std::vector<HMxEeTupletDot>::iterator getTupletDotEnd();

		/** Returns an STL iterator into the contained collection of element handles. **/
		std::vector<HMxEeTupletDot>::const_iterator getTupletDotBegin() const;

		/** Returns an STL iterator into the contained collection of element handles. **/
		std::vector<HMxEeTupletDot>::const_iterator getTupletDotEnd() const;

		/** Adds the element handle to the internal collection. Returns 'true'
		    if successful, returns 'false' to indicate failure.  If you try to
		    add more elements than is allowed by MaxOccurs, the this function will
		    fail.  If you try to add a nullptr this function will fail. **/
		bool addTupletDot( const std::vector<HMxEeTupletDot>::iterator& value_in );

		/** Removes the element handle to the internal collection. Returns 'true'
		    if successful, returns 'false' to indicate failure.  If you try to
		    remove more elements that would result in a count less than MinOccurs,
		    the this function will fail. **/
		bool removeTupletDot( const std::vector<HMxEeTupletDot>::iterator& value_in );

		/** Returns the minimum number of occurences of the <TupletDot> element.
		    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
		    the element is optional. **/
		int getTupletDotMinOccurs() const;

		/** Returns the maximum number of occurences of the <TupletDot> element.
		    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
		    When the specification says 'unbounded' 'getIsTupletDotUnbounded' will
		    return 'true' and the return value of 'getTupletDotMaxOccurs' should
		    be ignored. **/
		int getTupletDotMaxOccurs() const;

		/** Returns 'true' if the specification says that the maximum number of
		    occurences of the <TupletDot> element is 'unbounded'.When this function
		    returns 'true', the value returned by 'getTupletDotMaxOccurs' should
		    be ignored. **/
		int getIsTupletDotUnbounded() const;

/* Stringing and Streaming ------------------------------------------------------------ */

		virtual void stream( std::ostream& os_out, int indentcount_in, const char* indentchars_in = "\t" ) const;

/* Impl ------------------------------------------------------------------------------- */

	private:
		class Impl;
		std::unique_ptr<Impl> myImpl;

	}; // class MxSeqSmpNodenode-5619

} // namespace lexicon

