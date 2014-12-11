#pragma once

/**
  * @file       MxSeqSmpNode4104.h
  * @class      lexicon::MxSeqSmpNode4104
  * @author     Matthew James Briggs
  * @email      matthew.james.briggs@gmail.com
  * @url        http://matthewjamesbriggs.com
  * @date       2014-12-11 15:30:20
  * @project    Lexicon
  * @version    1.0
  * @musicxmlid 4104
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

namespace lexicon
{
/* MxSeqSmpNode4104 ------------------------------------------------------------------- */

	class MxSeqSmpNode4104 : public MxSeq
	{
	public:

/* Constructor, Destructor, Copy, Assignment ------------------------------------------ */

		MxSeqSmpNode4104();
		virtual ~MxSeqSmpNode4104();
		MxSeqSmpNode4104( const MxSeqSmpNode4104& other );
		MxSeqSmpNode4104& operator=( const MxSeqSmpNode4104& other );

/* defaultName ------------------------------------------------------------------------ */

		/** Returns the name of this xs:element as found in the musicxml.xsd document. **/
		std::string getXmlTypeName() const;

		/** Returns the name of this C++ class. **/
		std::string getClassName() const;

		/** Returns the documentation for this musicxml type as found in the musicxml.xsd
		    document. **/
		std::string getDocumentation() const;

/* MiscellaneousField Functions ------------------------------------------------------- */

		/** Returns the count of <MiscellaneousField> elements. **/
		size_type getMiscellaneousFieldCount() const;

		/** Returns an STL iterator into the contained collection of element handles. **/
		std::vector<HMxEsMiscellaneousField>::iterator getMiscellaneousFieldBegin();

		/** Returns an STL iterator into the contained collection of element handles. **/
		std::vector<HMxEsMiscellaneousField>::iterator getMiscellaneousFieldEnd();

		/** Returns an STL iterator into the contained collection of element handles. **/
		std::vector<HMxEsMiscellaneousField>::const_iterator getMiscellaneousFieldBegin() const;

		/** Returns an STL iterator into the contained collection of element handles. **/
		std::vector<HMxEsMiscellaneousField>::const_iterator getMiscellaneousFieldEnd() const;

		/** Adds the element handle to the internal collection. Returns 'true'
		    if successful, returns 'false' to indicate failure.  If you try to
		    add more elements than is allowed by MaxOccurs, the this function will
		    fail.  If you try to add a nullptr this function will fail. **/
		bool addMiscellaneousField( const std::vector<HMxEsMiscellaneousField>::iterator& value_in );

		/** Removes the element handle to the internal collection. Returns 'true'
		    if successful, returns 'false' to indicate failure.  If you try to
		    remove more elements that would result in a count less than MinOccurs,
		    the this function will fail. **/
		bool removeMiscellaneousField( const std::vector<HMxEsMiscellaneousField>::iterator& value_in );

		/** Returns the minimum number of occurences of the <MiscellaneousField>
		    element.  i.e. MinOccurs > 0 means the element is required, MinOccurs
		    == 0 means the element is optional. **/
		int getMiscellaneousFieldMinOccurs() const;

		/** Returns the maximum number of occurences of the <MiscellaneousField>
		    element. Typically the MaxOccurs is specified as either '1' or 'unbounded'.
		    When the specification says 'unbounded' 'getIsMiscellaneousFieldUnbounded'
		    will return 'true' and the return value of 'getMiscellaneousFieldMaxOccurs'
		    should be ignored. **/
		int getMiscellaneousFieldMaxOccurs() const;

		/** Returns 'true' if the specification says that the maximum number of
		    occurences of the <MiscellaneousField> element is 'unbounded'.When
		    this function returns 'true', the value returned by 'getMiscellaneousFieldMaxOccurs'
		    should be ignored. **/
		int getIsMiscellaneousFieldUnbounded() const;

/* Stringing and Streaming ------------------------------------------------------------ */

		virtual void stream( std::ostream& os_out, int indentcount_in, const char* indentchars_in = "\t" ) const;

/* Impl ------------------------------------------------------------------------------- */

	private:
		class Impl;
		std::unique_ptr<Impl> myImpl;

	}; // class MxSeqSmpNode4104

} // namespace lexicon

