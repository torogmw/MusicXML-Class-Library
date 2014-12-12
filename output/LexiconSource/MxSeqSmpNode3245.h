#pragma once

/**
  * @file       MxSeqSmpNode3245.h
  * @class      lexicon::MxSeqSmpNode3245
  * @author     Matthew James Briggs
  * @email      matthew.james.briggs@gmail.com
  * @url        http://matthewjamesbriggs.com
  * @date       2014-12-11 16:20:25
  * @project    Lexicon
  * @version    1.0
  * @musicxmlid 3245
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
#include "MxEsDegreeValue.h"
#include "MxEsDegreeAlter.h"
#include "MxEsDegreeType.h"

namespace lexicon
{
/* MxSeqSmpNode3245 ------------------------------------------------------------------- */

	class MxSeqSmpNode3245 : public MxSeq
	{
	public:

/* Constructor, Destructor, Copy, Assignment ------------------------------------------ */

		MxSeqSmpNode3245();
		virtual ~MxSeqSmpNode3245();
		MxSeqSmpNode3245( const MxSeqSmpNode3245& other );
		MxSeqSmpNode3245& operator=( const MxSeqSmpNode3245& other );

/* defaultName ------------------------------------------------------------------------ */

		/** Returns the name of this xs:element as found in the musicxml.xsd document. **/
		std::string getXmlTypeName() const;

		/** Returns the name of this C++ class. **/
		std::string getClassName() const;

		/** Returns the documentation for this musicxml type as found in the musicxml.xsd
		    document. **/
		std::string getDocumentation() const;

/* DegreeValue Functions -------------------------------------------------------------- */

		/** Tells you whether or not <DegreeValue> is present. If <DegreeValue>
		    is required, this will always return 'true'. If <DegreeValue> is required,
		    no corresponding 'setIsDegreeValuePresent' will exist. **/
		bool getIsDegreeValuePresent() const;

		/** Returns a shared pointer handle to the <DegreeValue> element. Note
		    that if getIsDegreeValuePresent is false, this value will still exist
		    (even though it is not in the xml document) and you should ignore it. **/
		HMxEsDegreeValue getDegreeValue() const;

		/** Sets the internal shared pointer handle for the <DegreeValue> element.
		     **/
		int setDegreeValue( const HMxEsDegreeValue& value_in );

		/** Returns the minimum number of occurences of the <DegreeValue> element.
		    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
		    the element is optional. **/
		int getDegreeValueMinOccurs() const;

		/** Returns the maximum number of occurences of the <DegreeValue> element.
		    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
		    When the specification says 'unbounded' 'getIsDegreeValueUnbounded'
		    will return 'true' and the return value of 'getDegreeValueMaxOccurs'
		    should be ignored. **/
		int getDegreeValueMaxOccurs() const;

		/** Returns 'true' if the specification says that the maximum number of
		    occurences of the <DegreeValue> element is 'unbounded'.When this function
		    returns 'true', the value returned by 'getDegreeValueMaxOccurs' should
		    be ignored. **/
		int getIsDegreeValueUnbounded() const;

/* DegreeAlter Functions -------------------------------------------------------------- */

		/** Tells you whether or not <DegreeAlter> is present. If <DegreeAlter>
		    is required, this will always return 'true'. If <DegreeAlter> is required,
		    no corresponding 'setIsDegreeAlterPresent' will exist. **/
		bool getIsDegreeAlterPresent() const;

		/** Returns a shared pointer handle to the <DegreeAlter> element. Note
		    that if getIsDegreeAlterPresent is false, this value will still exist
		    (even though it is not in the xml document) and you should ignore it. **/
		HMxEsDegreeAlter getDegreeAlter() const;

		/** Sets the internal shared pointer handle for the <DegreeAlter> element.
		     **/
		int setDegreeAlter( const HMxEsDegreeAlter& value_in );

		/** Returns the minimum number of occurences of the <DegreeAlter> element.
		    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
		    the element is optional. **/
		int getDegreeAlterMinOccurs() const;

		/** Returns the maximum number of occurences of the <DegreeAlter> element.
		    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
		    When the specification says 'unbounded' 'getIsDegreeAlterUnbounded'
		    will return 'true' and the return value of 'getDegreeAlterMaxOccurs'
		    should be ignored. **/
		int getDegreeAlterMaxOccurs() const;

		/** Returns 'true' if the specification says that the maximum number of
		    occurences of the <DegreeAlter> element is 'unbounded'.When this function
		    returns 'true', the value returned by 'getDegreeAlterMaxOccurs' should
		    be ignored. **/
		int getIsDegreeAlterUnbounded() const;

/* DegreeType Functions --------------------------------------------------------------- */

		/** Tells you whether or not <DegreeType> is present. If <DegreeType> is
		    required, this will always return 'true'. If <DegreeType> is required,
		    no corresponding 'setIsDegreeTypePresent' will exist. **/
		bool getIsDegreeTypePresent() const;

		/** Returns a shared pointer handle to the <DegreeType> element. Note that
		    if getIsDegreeTypePresent is false, this value will still exist (even
		    though it is not in the xml document) and you should ignore it. **/
		HMxEsDegreeType getDegreeType() const;

		/** Sets the internal shared pointer handle for the <DegreeType> element.
		     **/
		int setDegreeType( const HMxEsDegreeType& value_in );

		/** Returns the minimum number of occurences of the <DegreeType> element.
		    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
		    the element is optional. **/
		int getDegreeTypeMinOccurs() const;

		/** Returns the maximum number of occurences of the <DegreeType> element.
		    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
		    When the specification says 'unbounded' 'getIsDegreeTypeUnbounded'
		    will return 'true' and the return value of 'getDegreeTypeMaxOccurs'
		    should be ignored. **/
		int getDegreeTypeMaxOccurs() const;

		/** Returns 'true' if the specification says that the maximum number of
		    occurences of the <DegreeType> element is 'unbounded'.When this function
		    returns 'true', the value returned by 'getDegreeTypeMaxOccurs' should
		    be ignored. **/
		int getIsDegreeTypeUnbounded() const;

/* Stringing and Streaming ------------------------------------------------------------ */

		virtual void stream( std::ostream& os_out, int indentcount_in, const char* indentchars_in = "\t" ) const;

/* Impl ------------------------------------------------------------------------------- */

	private:
		class Impl;
		std::unique_ptr<Impl> myImpl;

	}; // class MxSeqSmpNode3245

} // namespace lexicon

