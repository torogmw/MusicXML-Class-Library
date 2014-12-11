#pragma once

/**
  * @file       MxSeqSmpNode3499.h
  * @class      lexicon::MxSeqSmpNode3499
  * @author     Matthew James Briggs
  * @email      matthew.james.briggs@gmail.com
  * @url        http://matthewjamesbriggs.com
  * @date       2014-12-11 15:30:17
  * @project    Lexicon
  * @version    1.0
  * @musicxmlid 3499
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
/* MxSeqSmpNode3499 ------------------------------------------------------------------- */

	class MxSeqSmpNode3499 : public MxSeq
	{
	public:

/* Constructor, Destructor, Copy, Assignment ------------------------------------------ */

		MxSeqSmpNode3499();
		virtual ~MxSeqSmpNode3499();
		MxSeqSmpNode3499( const MxSeqSmpNode3499& other );
		MxSeqSmpNode3499& operator=( const MxSeqSmpNode3499& other );

/* defaultName ------------------------------------------------------------------------ */

		/** Returns the name of this xs:element as found in the musicxml.xsd document. **/
		std::string getXmlTypeName() const;

		/** Returns the name of this C++ class. **/
		std::string getClassName() const;

		/** Returns the documentation for this musicxml type as found in the musicxml.xsd
		    document. **/
		std::string getDocumentation() const;

/* Feature Functions ------------------------------------------------------------------ */

		/** Returns the count of <Feature> elements. **/
		size_type getFeatureCount() const;

		/** Returns an STL iterator into the contained collection of element handles. **/
		std::vector<HMxEsFeature>::iterator getFeatureBegin();

		/** Returns an STL iterator into the contained collection of element handles. **/
		std::vector<HMxEsFeature>::iterator getFeatureEnd();

		/** Returns an STL iterator into the contained collection of element handles. **/
		std::vector<HMxEsFeature>::const_iterator getFeatureBegin() const;

		/** Returns an STL iterator into the contained collection of element handles. **/
		std::vector<HMxEsFeature>::const_iterator getFeatureEnd() const;

		/** Adds the element handle to the internal collection. Returns 'true'
		    if successful, returns 'false' to indicate failure.  If you try to
		    add more elements than is allowed by MaxOccurs, the this function will
		    fail.  If you try to add a nullptr this function will fail. **/
		bool addFeature( const std::vector<HMxEsFeature>::iterator& value_in );

		/** Removes the element handle to the internal collection. Returns 'true'
		    if successful, returns 'false' to indicate failure.  If you try to
		    remove more elements that would result in a count less than MinOccurs,
		    the this function will fail. **/
		bool removeFeature( const std::vector<HMxEsFeature>::iterator& value_in );

		/** Returns the minimum number of occurences of the <Feature> element.
		    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
		    the element is optional. **/
		int getFeatureMinOccurs() const;

		/** Returns the maximum number of occurences of the <Feature> element.
		    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
		    When the specification says 'unbounded' 'getIsFeatureUnbounded' will
		    return 'true' and the return value of 'getFeatureMaxOccurs' should
		    be ignored. **/
		int getFeatureMaxOccurs() const;

		/** Returns 'true' if the specification says that the maximum number of
		    occurences of the <Feature> element is 'unbounded'.When this function
		    returns 'true', the value returned by 'getFeatureMaxOccurs' should
		    be ignored. **/
		int getIsFeatureUnbounded() const;

/* Stringing and Streaming ------------------------------------------------------------ */

		virtual void stream( std::ostream& os_out, int indentcount_in, const char* indentchars_in = "\t" ) const;

/* Impl ------------------------------------------------------------------------------- */

	private:
		class Impl;
		std::unique_ptr<Impl> myImpl;

	}; // class MxSeqSmpNode3499

} // namespace lexicon

