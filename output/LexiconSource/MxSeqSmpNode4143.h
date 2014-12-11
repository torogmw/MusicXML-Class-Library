#pragma once

/**
  * @file       MxSeqSmpNode4143.h
  * @class      lexicon::MxSeqSmpNode4143
  * @author     Matthew James Briggs
  * @email      matthew.james.briggs@gmail.com
  * @url        http://matthewjamesbriggs.com
  * @date       2014-12-11 15:30:20
  * @project    Lexicon
  * @version    1.0
  * @musicxmlid 4143
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
/* MxSeqSmpNode4143 ------------------------------------------------------------------- */

	class MxSeqSmpNode4143 : public MxSeq
	{
	public:

/* Constructor, Destructor, Copy, Assignment ------------------------------------------ */

		MxSeqSmpNode4143();
		virtual ~MxSeqSmpNode4143();
		MxSeqSmpNode4143( const MxSeqSmpNode4143& other );
		MxSeqSmpNode4143& operator=( const MxSeqSmpNode4143& other );

/* defaultName ------------------------------------------------------------------------ */

		/** Returns the name of this xs:element as found in the musicxml.xsd document. **/
		std::string getXmlTypeName() const;

		/** Returns the name of this C++ class. **/
		std::string getClassName() const;

		/** Returns the documentation for this musicxml type as found in the musicxml.xsd
		    document. **/
		std::string getDocumentation() const;

/* LineWidth Functions ---------------------------------------------------------------- */

		/** Returns the count of <LineWidth> elements. **/
		size_type getLineWidthCount() const;

		/** Returns an STL iterator into the contained collection of element handles. **/
		std::vector<HMxEsLineWidth>::iterator getLineWidthBegin();

		/** Returns an STL iterator into the contained collection of element handles. **/
		std::vector<HMxEsLineWidth>::iterator getLineWidthEnd();

		/** Returns an STL iterator into the contained collection of element handles. **/
		std::vector<HMxEsLineWidth>::const_iterator getLineWidthBegin() const;

		/** Returns an STL iterator into the contained collection of element handles. **/
		std::vector<HMxEsLineWidth>::const_iterator getLineWidthEnd() const;

		/** Adds the element handle to the internal collection. Returns 'true'
		    if successful, returns 'false' to indicate failure.  If you try to
		    add more elements than is allowed by MaxOccurs, the this function will
		    fail.  If you try to add a nullptr this function will fail. **/
		bool addLineWidth( const std::vector<HMxEsLineWidth>::iterator& value_in );

		/** Removes the element handle to the internal collection. Returns 'true'
		    if successful, returns 'false' to indicate failure.  If you try to
		    remove more elements that would result in a count less than MinOccurs,
		    the this function will fail. **/
		bool removeLineWidth( const std::vector<HMxEsLineWidth>::iterator& value_in );

		/** Returns the minimum number of occurences of the <LineWidth> element.
		    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
		    the element is optional. **/
		int getLineWidthMinOccurs() const;

		/** Returns the maximum number of occurences of the <LineWidth> element.
		    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
		    When the specification says 'unbounded' 'getIsLineWidthUnbounded' will
		    return 'true' and the return value of 'getLineWidthMaxOccurs' should
		    be ignored. **/
		int getLineWidthMaxOccurs() const;

		/** Returns 'true' if the specification says that the maximum number of
		    occurences of the <LineWidth> element is 'unbounded'.When this function
		    returns 'true', the value returned by 'getLineWidthMaxOccurs' should
		    be ignored. **/
		int getIsLineWidthUnbounded() const;

/* NoteSize Functions ----------------------------------------------------------------- */

		/** Returns the count of <NoteSize> elements. **/
		size_type getNoteSizeCount() const;

		/** Returns an STL iterator into the contained collection of element handles. **/
		std::vector<HMxEsNoteSize>::iterator getNoteSizeBegin();

		/** Returns an STL iterator into the contained collection of element handles. **/
		std::vector<HMxEsNoteSize>::iterator getNoteSizeEnd();

		/** Returns an STL iterator into the contained collection of element handles. **/
		std::vector<HMxEsNoteSize>::const_iterator getNoteSizeBegin() const;

		/** Returns an STL iterator into the contained collection of element handles. **/
		std::vector<HMxEsNoteSize>::const_iterator getNoteSizeEnd() const;

		/** Adds the element handle to the internal collection. Returns 'true'
		    if successful, returns 'false' to indicate failure.  If you try to
		    add more elements than is allowed by MaxOccurs, the this function will
		    fail.  If you try to add a nullptr this function will fail. **/
		bool addNoteSize( const std::vector<HMxEsNoteSize>::iterator& value_in );

		/** Removes the element handle to the internal collection. Returns 'true'
		    if successful, returns 'false' to indicate failure.  If you try to
		    remove more elements that would result in a count less than MinOccurs,
		    the this function will fail. **/
		bool removeNoteSize( const std::vector<HMxEsNoteSize>::iterator& value_in );

		/** Returns the minimum number of occurences of the <NoteSize> element.
		    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
		    the element is optional. **/
		int getNoteSizeMinOccurs() const;

		/** Returns the maximum number of occurences of the <NoteSize> element.
		    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
		    When the specification says 'unbounded' 'getIsNoteSizeUnbounded' will
		    return 'true' and the return value of 'getNoteSizeMaxOccurs' should
		    be ignored. **/
		int getNoteSizeMaxOccurs() const;

		/** Returns 'true' if the specification says that the maximum number of
		    occurences of the <NoteSize> element is 'unbounded'.When this function
		    returns 'true', the value returned by 'getNoteSizeMaxOccurs' should
		    be ignored. **/
		int getIsNoteSizeUnbounded() const;

/* Distance Functions ----------------------------------------------------------------- */

		/** Returns the count of <Distance> elements. **/
		size_type getDistanceCount() const;

		/** Returns an STL iterator into the contained collection of element handles. **/
		std::vector<HMxEsDistance>::iterator getDistanceBegin();

		/** Returns an STL iterator into the contained collection of element handles. **/
		std::vector<HMxEsDistance>::iterator getDistanceEnd();

		/** Returns an STL iterator into the contained collection of element handles. **/
		std::vector<HMxEsDistance>::const_iterator getDistanceBegin() const;

		/** Returns an STL iterator into the contained collection of element handles. **/
		std::vector<HMxEsDistance>::const_iterator getDistanceEnd() const;

		/** Adds the element handle to the internal collection. Returns 'true'
		    if successful, returns 'false' to indicate failure.  If you try to
		    add more elements than is allowed by MaxOccurs, the this function will
		    fail.  If you try to add a nullptr this function will fail. **/
		bool addDistance( const std::vector<HMxEsDistance>::iterator& value_in );

		/** Removes the element handle to the internal collection. Returns 'true'
		    if successful, returns 'false' to indicate failure.  If you try to
		    remove more elements that would result in a count less than MinOccurs,
		    the this function will fail. **/
		bool removeDistance( const std::vector<HMxEsDistance>::iterator& value_in );

		/** Returns the minimum number of occurences of the <Distance> element.
		    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
		    the element is optional. **/
		int getDistanceMinOccurs() const;

		/** Returns the maximum number of occurences of the <Distance> element.
		    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
		    When the specification says 'unbounded' 'getIsDistanceUnbounded' will
		    return 'true' and the return value of 'getDistanceMaxOccurs' should
		    be ignored. **/
		int getDistanceMaxOccurs() const;

		/** Returns 'true' if the specification says that the maximum number of
		    occurences of the <Distance> element is 'unbounded'.When this function
		    returns 'true', the value returned by 'getDistanceMaxOccurs' should
		    be ignored. **/
		int getIsDistanceUnbounded() const;

/* OtherAppearance Functions ---------------------------------------------------------- */

		/** Returns the count of <OtherAppearance> elements. **/
		size_type getOtherAppearanceCount() const;

		/** Returns an STL iterator into the contained collection of element handles. **/
		std::vector<HMxEsOtherAppearance>::iterator getOtherAppearanceBegin();

		/** Returns an STL iterator into the contained collection of element handles. **/
		std::vector<HMxEsOtherAppearance>::iterator getOtherAppearanceEnd();

		/** Returns an STL iterator into the contained collection of element handles. **/
		std::vector<HMxEsOtherAppearance>::const_iterator getOtherAppearanceBegin() const;

		/** Returns an STL iterator into the contained collection of element handles. **/
		std::vector<HMxEsOtherAppearance>::const_iterator getOtherAppearanceEnd() const;

		/** Adds the element handle to the internal collection. Returns 'true'
		    if successful, returns 'false' to indicate failure.  If you try to
		    add more elements than is allowed by MaxOccurs, the this function will
		    fail.  If you try to add a nullptr this function will fail. **/
		bool addOtherAppearance( const std::vector<HMxEsOtherAppearance>::iterator& value_in );

		/** Removes the element handle to the internal collection. Returns 'true'
		    if successful, returns 'false' to indicate failure.  If you try to
		    remove more elements that would result in a count less than MinOccurs,
		    the this function will fail. **/
		bool removeOtherAppearance( const std::vector<HMxEsOtherAppearance>::iterator& value_in );

		/** Returns the minimum number of occurences of the <OtherAppearance> element.
		    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
		    the element is optional. **/
		int getOtherAppearanceMinOccurs() const;

		/** Returns the maximum number of occurences of the <OtherAppearance> element.
		    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
		    When the specification says 'unbounded' 'getIsOtherAppearanceUnbounded'
		    will return 'true' and the return value of 'getOtherAppearanceMaxOccurs'
		    should be ignored. **/
		int getOtherAppearanceMaxOccurs() const;

		/** Returns 'true' if the specification says that the maximum number of
		    occurences of the <OtherAppearance> element is 'unbounded'.When this
		    function returns 'true', the value returned by 'getOtherAppearanceMaxOccurs'
		    should be ignored. **/
		int getIsOtherAppearanceUnbounded() const;

/* Stringing and Streaming ------------------------------------------------------------ */

		virtual void stream( std::ostream& os_out, int indentcount_in, const char* indentchars_in = "\t" ) const;

/* Impl ------------------------------------------------------------------------------- */

	private:
		class Impl;
		std::unique_ptr<Impl> myImpl;

	}; // class MxSeqSmpNode4143

} // namespace lexicon

