#pragma once

/**
  * @file       MxSeqSmpNodenode-4190.h
  * @class      lexicon::MxSeqSmpNodenode-4190
  * @author     Matthew James Briggs
  * @email      matthew.james.briggs@gmail.com
  * @url        http://matthewjamesbriggs.com
  * @date       2014-12-11 15:41:46
  * @project    Lexicon
  * @version    1.0
  * @musicxmlid 4190
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
#include "MxEmMeasureDistance.h"

namespace lexicon
{
/* MxSeqSmpNodenode-4190 -------------------------------------------------------------- */

	class MxSeqSmpNodenode-4190 : public MxSeq
	{
	public:

/* Constructor, Destructor, Copy, Assignment ------------------------------------------ */

		MxSeqSmpNodenode-4190();
		virtual ~MxSeqSmpNodenode-4190();
		MxSeqSmpNodenode-4190( const MxSeqSmpNodenode-4190& other );
		MxSeqSmpNodenode-4190& operator=( const MxSeqSmpNodenode-4190& other );

/* defaultName ------------------------------------------------------------------------ */

		/** Returns the name of this xs:element as found in the musicxml.xsd document. **/
		std::string getXmlTypeName() const;

		/** Returns the name of this C++ class. **/
		std::string getClassName() const;

		/** Returns the documentation for this musicxml type as found in the musicxml.xsd
		    document. **/
		std::string getDocumentation() const;

/* MeasureDistance Functions ---------------------------------------------------------- */

		/** Tells you whether or not <MeasureDistance> is present. If <MeasureDistance>
		    is required, this will always return 'true'. If <MeasureDistance> is
		    required, no corresponding 'setIsMeasureDistancePresent' will exist. **/
		bool getIsMeasureDistancePresent() const;
		void setIsMeasureDistancePresent( const bool& value_in );

		/** Returns a shared pointer handle to the <MeasureDistance> element. Note
		    that if getIsMeasureDistancePresent is false, this value will still
		    exist (even though it is not in the xml document) and you should ignore
		    it. **/
		HMxEmMeasureDistance getMeasureDistance() const;

		/** Sets the internal shared pointer handle for the <MeasureDistance> element.
		    Note that if setIsMeasureDistancePresent is false, the internal shared
		    pointer will not be altered and will hold a value that does not exist
		    in xml. **/
		int setMeasureDistance( const HMxEmMeasureDistance& value_in );

		/** Returns the minimum number of occurences of the <MeasureDistance> element.
		    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
		    the element is optional. **/
		int getMeasureDistanceMinOccurs() const;

		/** Returns the maximum number of occurences of the <MeasureDistance> element.
		    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
		    When the specification says 'unbounded' 'getIsMeasureDistanceUnbounded'
		    will return 'true' and the return value of 'getMeasureDistanceMaxOccurs'
		    should be ignored. **/
		int getMeasureDistanceMaxOccurs() const;

		/** Returns 'true' if the specification says that the maximum number of
		    occurences of the <MeasureDistance> element is 'unbounded'.When this
		    function returns 'true', the value returned by 'getMeasureDistanceMaxOccurs'
		    should be ignored. **/
		int getIsMeasureDistanceUnbounded() const;

/* Stringing and Streaming ------------------------------------------------------------ */

		virtual void stream( std::ostream& os_out, int indentcount_in, const char* indentchars_in = "\t" ) const;

/* Impl ------------------------------------------------------------------------------- */

	private:
		class Impl;
		std::unique_ptr<Impl> myImpl;

	}; // class MxSeqSmpNodenode-4190

} // namespace lexicon

