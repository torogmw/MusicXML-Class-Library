#pragma once

/**
  * @file       MxSeqSmpNode3993.h
  * @class      lexicon::MxSeqSmpNode3993
  * @author     Matthew James Briggs
  * @email      matthew.james.briggs@gmail.com
  * @url        http://matthewjamesbriggs.com
  * @date       2014-12-12 16:19:52
  * @project    Lexicon
  * @version    1.0
  * @musicxmlid 3993
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
#include "MxEmStickType.h"
#include "MxEmStickMaterial.h"

namespace lexicon
{
/* MxSeqSmpNode3993 ------------------------------------------------------------------- */

	class MxSeqSmpNode3993 : public MxIndentable
	{
	public:

/* Constructor, Destructor, Copy, Assignment ------------------------------------------ */

		MxSeqSmpNode3993();
		virtual ~MxSeqSmpNode3993();
		MxSeqSmpNode3993( const MxSeqSmpNode3993& other );
		MxSeqSmpNode3993& operator=( const MxSeqSmpNode3993& other );

/* defaultName ------------------------------------------------------------------------ */

		/** Returns the name of this xs:element as found in the musicxml.xsd document. **/
		std::string getXmlTypeName() const;

		/** Returns the name of this C++ class. **/
		std::string getClassName() const;

		/** Returns the documentation for this musicxml type as found in the musicxml.xsd
		    document. **/
		std::string getDocumentation() const;

/* StickType Functions ---------------------------------------------------------------- */

		/** Tells you whether or not <StickType> is present. If <StickType> is
		    required, this will always return 'true'. If <StickType> is required,
		    no corresponding 'setIsStickTypePresent' will exist. **/
		bool getIsStickTypePresent() const;

		/** Returns a shared pointer handle to the <StickType> element. Note that
		    if getIsStickTypePresent is false, this value will still exist (even
		    though it is not in the xml document) and you should ignore it. **/
		HMxEmStickType getStickType() const;

		/** Sets the internal shared pointer handle for the <StickType> element.
		     **/
		void setStickType( const HMxEmStickType& value_in );

		/** Returns the minimum number of occurences of the <StickType> element.
		    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
		    the element is optional. **/
		int getStickTypeMinOccurs() const;

		/** Returns the maximum number of occurences of the <StickType> element.
		    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
		    When the specification says 'unbounded' 'getIsStickTypeUnbounded' will
		    return 'true' and the return value of 'getStickTypeMaxOccurs' should
		    be ignored. **/
		int getStickTypeMaxOccurs() const;

		/** Returns 'true' if the specification says that the maximum number of
		    occurences of the <StickType> element is 'unbounded'.When this function
		    returns 'true', the value returned by 'getStickTypeMaxOccurs' should
		    be ignored. **/
		bool getIsStickTypeUnbounded() const;

/* StickMaterial Functions ------------------------------------------------------------ */

		/** Tells you whether or not <StickMaterial> is present. If <StickMaterial>
		    is required, this will always return 'true'. If <StickMaterial> is
		    required, no corresponding 'setIsStickMaterialPresent' will exist. **/
		bool getIsStickMaterialPresent() const;

		/** Returns a shared pointer handle to the <StickMaterial> element. Note
		    that if getIsStickMaterialPresent is false, this value will still exist
		    (even though it is not in the xml document) and you should ignore it. **/
		HMxEmStickMaterial getStickMaterial() const;

		/** Sets the internal shared pointer handle for the <StickMaterial> element.
		     **/
		void setStickMaterial( const HMxEmStickMaterial& value_in );

		/** Returns the minimum number of occurences of the <StickMaterial> element.
		    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
		    the element is optional. **/
		int getStickMaterialMinOccurs() const;

		/** Returns the maximum number of occurences of the <StickMaterial> element.
		    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
		    When the specification says 'unbounded' 'getIsStickMaterialUnbounded'
		    will return 'true' and the return value of 'getStickMaterialMaxOccurs'
		    should be ignored. **/
		int getStickMaterialMaxOccurs() const;

		/** Returns 'true' if the specification says that the maximum number of
		    occurences of the <StickMaterial> element is 'unbounded'.When this
		    function returns 'true', the value returned by 'getStickMaterialMaxOccurs'
		    should be ignored. **/
		bool getIsStickMaterialUnbounded() const;

/* Stringing and Streaming ------------------------------------------------------------ */

		virtual std::ostream& stream( std::ostream& os_out, int indentcount_in, const char* indentchars_in = "\t" ) const;

/* Impl ------------------------------------------------------------------------------- */

	private:
		class Impl;
		std::unique_ptr<Impl> myImpl;

	}; // class MxSeqSmpNode3993

} // namespace lexicon

