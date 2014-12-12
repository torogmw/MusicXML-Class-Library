/**
  * @file       MxSeqSmpNode4143.cpp
  * @class      lexicon::MxSeqSmpNode4143
  * @author     Matthew James Briggs
  * @email      matthew.james.briggs@gmail.com
  * @url        http://matthewjamesbriggs.com
  * @date       2014-12-11 16:20:32
  * @project    Lexicon
  * @version    1.0
  * @musicxmlid 4143
  * 
  * @brief This class represents an xs:sequence object from musicxml.xsd.
  * 
  * Full description goes here.
  * 
 **/

#include "MxSeqSmpNode4143.h"

/* Impl ------------------------------------------------------------------------------- */

namespace lexicon
{
	struct MxSeqSmpNode4143::Impl
	{
		Impl()
		{}

	private:
		std::vector<HMxEsLineWidth> myLineWidthCollection;
		std::vector<HMxEsNoteSize> myNoteSizeCollection;
		std::vector<HMxEsDistance> myDistanceCollection;
		std::vector<HMxEsOtherAppearance> myOtherAppearanceCollection;
		const static int myXsdID;
		const static std::string myXmlTypeName;
		const static std::string myCppClassName;
		const static std::string myDocumentation;

/* defaultName ------------------------------------------------------------------------ */

		/** Returns the name of this xs:element as found in the musicxml.xsd document. **/
		std::string getXmlTypeName() const
		{
			return myImpl->getXmlTypeName();
		}

		/** Returns the name of this C++ class. **/
		std::string getClassName() const
		{
			return myImpl->getClassName();
		}

		/** Returns the documentation for this musicxml type as found in the musicxml.xsd
		    document. **/
		std::string getDocumentation() const
		{
			return myImpl->getDocumentation();
		}

/* LineWidth Functions ---------------------------------------------------------------- */

		/** Returns the count of <LineWidth> elements. **/
		size_type getLineWidthCount() const
		{
			return 0;
		}

		/** Returns an STL iterator into the contained collection of element handles. **/
		std::vector<HMxEsLineWidth>::iterator getLineWidthBegin()
		{
			throw "todo: write the code.";
		}

		/** Returns an STL iterator into the contained collection of element handles. **/
		std::vector<HMxEsLineWidth>::iterator getLineWidthEnd()
		{
			throw "todo: write the code.";
		}

		/** Returns an STL iterator into the contained collection of element handles. **/
		std::vector<HMxEsLineWidth>::const_iterator getLineWidthBegin() const
		{
			throw "todo: write the code.";
		}

		/** Returns an STL iterator into the contained collection of element handles. **/
		std::vector<HMxEsLineWidth>::const_iterator getLineWidthEnd() const
		{
			throw "todo: write the code.";
		}

		/** Adds the element handle to the internal collection. Returns 'true'
		    if successful, returns 'false' to indicate failure.  If you try to
		    add more elements than is allowed by MaxOccurs, the this function will
		    fail.  If you try to add a nullptr this function will fail. **/
		bool addLineWidth( const std::vector<HMxEsLineWidth>::iterator& value_in )
		{
			return 0;
		}

		/** Removes the element handle to the internal collection. Returns 'true'
		    if successful, returns 'false' to indicate failure.  If you try to
		    remove more elements that would result in a count less than MinOccurs,
		    the this function will fail. **/
		bool removeLineWidth( const std::vector<HMxEsLineWidth>::iterator& value_in )
		{
			return 0;
		}

		/** Returns the minimum number of occurences of the <LineWidth> element.
		    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
		    the element is optional. **/
		int getLineWidthMinOccurs() const
		{
			return myLineWidth.getMinOccurs();
		}

		/** Returns the maximum number of occurences of the <LineWidth> element.
		    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
		    When the specification says 'unbounded' 'getIsLineWidthUnbounded' will
		    return 'true' and the return value of 'getLineWidthMaxOccurs' should
		    be ignored. **/
		int getLineWidthMaxOccurs() const
		{
			return myLineWidth.getMaxOccurs();
		}

		/** Returns 'true' if the specification says that the maximum number of
		    occurences of the <LineWidth> element is 'unbounded'.When this function
		    returns 'true', the value returned by 'getLineWidthMaxOccurs' should
		    be ignored. **/
		int getIsLineWidthUnbounded() const
		{
			return myLineWidth.getIsUnbounded();
		}

/* NoteSize Functions ----------------------------------------------------------------- */

		/** Returns the count of <NoteSize> elements. **/
		size_type getNoteSizeCount() const
		{
			return 0;
		}

		/** Returns an STL iterator into the contained collection of element handles. **/
		std::vector<HMxEsNoteSize>::iterator getNoteSizeBegin()
		{
			throw "todo: write the code.";
		}

		/** Returns an STL iterator into the contained collection of element handles. **/
		std::vector<HMxEsNoteSize>::iterator getNoteSizeEnd()
		{
			throw "todo: write the code.";
		}

		/** Returns an STL iterator into the contained collection of element handles. **/
		std::vector<HMxEsNoteSize>::const_iterator getNoteSizeBegin() const
		{
			throw "todo: write the code.";
		}

		/** Returns an STL iterator into the contained collection of element handles. **/
		std::vector<HMxEsNoteSize>::const_iterator getNoteSizeEnd() const
		{
			throw "todo: write the code.";
		}

		/** Adds the element handle to the internal collection. Returns 'true'
		    if successful, returns 'false' to indicate failure.  If you try to
		    add more elements than is allowed by MaxOccurs, the this function will
		    fail.  If you try to add a nullptr this function will fail. **/
		bool addNoteSize( const std::vector<HMxEsNoteSize>::iterator& value_in )
		{
			return 0;
		}

		/** Removes the element handle to the internal collection. Returns 'true'
		    if successful, returns 'false' to indicate failure.  If you try to
		    remove more elements that would result in a count less than MinOccurs,
		    the this function will fail. **/
		bool removeNoteSize( const std::vector<HMxEsNoteSize>::iterator& value_in )
		{
			return 0;
		}

		/** Returns the minimum number of occurences of the <NoteSize> element.
		    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
		    the element is optional. **/
		int getNoteSizeMinOccurs() const
		{
			return myNoteSize.getMinOccurs();
		}

		/** Returns the maximum number of occurences of the <NoteSize> element.
		    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
		    When the specification says 'unbounded' 'getIsNoteSizeUnbounded' will
		    return 'true' and the return value of 'getNoteSizeMaxOccurs' should
		    be ignored. **/
		int getNoteSizeMaxOccurs() const
		{
			return myNoteSize.getMaxOccurs();
		}

		/** Returns 'true' if the specification says that the maximum number of
		    occurences of the <NoteSize> element is 'unbounded'.When this function
		    returns 'true', the value returned by 'getNoteSizeMaxOccurs' should
		    be ignored. **/
		int getIsNoteSizeUnbounded() const
		{
			return myNoteSize.getIsUnbounded();
		}

/* Distance Functions ----------------------------------------------------------------- */

		/** Returns the count of <Distance> elements. **/
		size_type getDistanceCount() const
		{
			return 0;
		}

		/** Returns an STL iterator into the contained collection of element handles. **/
		std::vector<HMxEsDistance>::iterator getDistanceBegin()
		{
			throw "todo: write the code.";
		}

		/** Returns an STL iterator into the contained collection of element handles. **/
		std::vector<HMxEsDistance>::iterator getDistanceEnd()
		{
			throw "todo: write the code.";
		}

		/** Returns an STL iterator into the contained collection of element handles. **/
		std::vector<HMxEsDistance>::const_iterator getDistanceBegin() const
		{
			throw "todo: write the code.";
		}

		/** Returns an STL iterator into the contained collection of element handles. **/
		std::vector<HMxEsDistance>::const_iterator getDistanceEnd() const
		{
			throw "todo: write the code.";
		}

		/** Adds the element handle to the internal collection. Returns 'true'
		    if successful, returns 'false' to indicate failure.  If you try to
		    add more elements than is allowed by MaxOccurs, the this function will
		    fail.  If you try to add a nullptr this function will fail. **/
		bool addDistance( const std::vector<HMxEsDistance>::iterator& value_in )
		{
			return 0;
		}

		/** Removes the element handle to the internal collection. Returns 'true'
		    if successful, returns 'false' to indicate failure.  If you try to
		    remove more elements that would result in a count less than MinOccurs,
		    the this function will fail. **/
		bool removeDistance( const std::vector<HMxEsDistance>::iterator& value_in )
		{
			return 0;
		}

		/** Returns the minimum number of occurences of the <Distance> element.
		    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
		    the element is optional. **/
		int getDistanceMinOccurs() const
		{
			return myDistance.getMinOccurs();
		}

		/** Returns the maximum number of occurences of the <Distance> element.
		    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
		    When the specification says 'unbounded' 'getIsDistanceUnbounded' will
		    return 'true' and the return value of 'getDistanceMaxOccurs' should
		    be ignored. **/
		int getDistanceMaxOccurs() const
		{
			return myDistance.getMaxOccurs();
		}

		/** Returns 'true' if the specification says that the maximum number of
		    occurences of the <Distance> element is 'unbounded'.When this function
		    returns 'true', the value returned by 'getDistanceMaxOccurs' should
		    be ignored. **/
		int getIsDistanceUnbounded() const
		{
			return myDistance.getIsUnbounded();
		}

/* OtherAppearance Functions ---------------------------------------------------------- */

		/** Returns the count of <OtherAppearance> elements. **/
		size_type getOtherAppearanceCount() const
		{
			return 0;
		}

		/** Returns an STL iterator into the contained collection of element handles. **/
		std::vector<HMxEsOtherAppearance>::iterator getOtherAppearanceBegin()
		{
			throw "todo: write the code.";
		}

		/** Returns an STL iterator into the contained collection of element handles. **/
		std::vector<HMxEsOtherAppearance>::iterator getOtherAppearanceEnd()
		{
			throw "todo: write the code.";
		}

		/** Returns an STL iterator into the contained collection of element handles. **/
		std::vector<HMxEsOtherAppearance>::const_iterator getOtherAppearanceBegin() const
		{
			throw "todo: write the code.";
		}

		/** Returns an STL iterator into the contained collection of element handles. **/
		std::vector<HMxEsOtherAppearance>::const_iterator getOtherAppearanceEnd() const
		{
			throw "todo: write the code.";
		}

		/** Adds the element handle to the internal collection. Returns 'true'
		    if successful, returns 'false' to indicate failure.  If you try to
		    add more elements than is allowed by MaxOccurs, the this function will
		    fail.  If you try to add a nullptr this function will fail. **/
		bool addOtherAppearance( const std::vector<HMxEsOtherAppearance>::iterator& value_in )
		{
			return 0;
		}

		/** Removes the element handle to the internal collection. Returns 'true'
		    if successful, returns 'false' to indicate failure.  If you try to
		    remove more elements that would result in a count less than MinOccurs,
		    the this function will fail. **/
		bool removeOtherAppearance( const std::vector<HMxEsOtherAppearance>::iterator& value_in )
		{
			return 0;
		}

		/** Returns the minimum number of occurences of the <OtherAppearance> element.
		    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
		    the element is optional. **/
		int getOtherAppearanceMinOccurs() const
		{
			return myOtherAppearance.getMinOccurs();
		}

		/** Returns the maximum number of occurences of the <OtherAppearance> element.
		    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
		    When the specification says 'unbounded' 'getIsOtherAppearanceUnbounded'
		    will return 'true' and the return value of 'getOtherAppearanceMaxOccurs'
		    should be ignored. **/
		int getOtherAppearanceMaxOccurs() const
		{
			return myOtherAppearance.getMaxOccurs();
		}

		/** Returns 'true' if the specification says that the maximum number of
		    occurences of the <OtherAppearance> element is 'unbounded'.When this
		    function returns 'true', the value returned by 'getOtherAppearanceMaxOccurs'
		    should be ignored. **/
		int getIsOtherAppearanceUnbounded() const
		{
			return myOtherAppearance.getIsUnbounded();
		}

/* Stringing and Streaming ------------------------------------------------------------ */

		void stream( std::ostream& os_out, int indentcount_in, const char* indentchars_in ) const
		{
			return 0;
		}

	const int MxSeqSmpNode4143::Impl::myXsdID = 4143;
	const std::string MxSeqSmpNode4143::Impl::myXmlTypeName = "node-4143";
	const std::string MxSeqSmpNode4143::Impl::myCppClassName = "MxSeqSmpNode4143";
	const std::string MxSeqSmpNode4143::Impl::myDocumentation = "No XSD Documentation.";

	}; // struct MxSeqSmpNode4143::Impl

/* MxSeqSmpNode4143 ------------------------------------------------------------------- */

namespace lexicon
{

/* Constructor, Destructor, Copy, Assignment ------------------------------------------ */

	MxSeqSmpNode4143::MxSeqSmpNode4143()
	:myImpl( new Impl() ) {}

	MxSeqSmpNode4143::~MxSeqSmpNode4143() {}

	MxSeqSmpNode4143::MxSeqSmpNode4143( const MxSeqSmpNode4143& other )
	:myImpl( new Impl( *(other.myImpl) ) ) {}

	MxSeqSmpNode4143& MxSeqSmpNode4143::operator=( const MxSeqSmpNode4143& other )
	{
		this->myImpl = std::unique_ptr<Impl>( new Impl( *(other.myImpl) ) );
		return *this;
	}

/* defaultName ------------------------------------------------------------------------ */

	/** Returns the name of this xs:element as found in the musicxml.xsd document. **/
	std::string MxSeqSmpNode4143::getXmlTypeName()
	{
		return myImpl.getXmlTypeName();
	}

	/** Returns the name of this C++ class. **/
	std::string MxSeqSmpNode4143::getClassName()
	{
		return myImpl.getClassName();
	}

	/** Returns the documentation for this musicxml type as found in the musicxml.xsd
	    document. **/
	std::string MxSeqSmpNode4143::getDocumentation()
	{
		return myImpl.getDocumentation();
	}

/* LineWidth Functions ---------------------------------------------------------------- */

	/** Returns the count of <LineWidth> elements. **/
	size_type MxSeqSmpNode4143::getLineWidthCount()
	{
		return myImpl.getLineWidthCount();
	}

	/** Returns an STL iterator into the contained collection of element handles. **/
	std::vector<HMxEsLineWidth>::iterator MxSeqSmpNode4143::getLineWidthBegin()
	{
		return myImpl.getLineWidthBegin();
	}

	/** Returns an STL iterator into the contained collection of element handles. **/
	std::vector<HMxEsLineWidth>::iterator MxSeqSmpNode4143::getLineWidthEnd()
	{
		return myImpl.getLineWidthEnd();
	}

	/** Returns an STL iterator into the contained collection of element handles. **/
	std::vector<HMxEsLineWidth>::const_iterator MxSeqSmpNode4143::getLineWidthBegin()
	{
		return myImpl.getLineWidthBegin();
	}

	/** Returns an STL iterator into the contained collection of element handles. **/
	std::vector<HMxEsLineWidth>::const_iterator MxSeqSmpNode4143::getLineWidthEnd()
	{
		return myImpl.getLineWidthEnd();
	}

	/** Adds the element handle to the internal collection. Returns 'true'
	    if successful, returns 'false' to indicate failure.  If you try to
	    add more elements than is allowed by MaxOccurs, the this function will
	    fail.  If you try to add a nullptr this function will fail. **/
	bool MxSeqSmpNode4143::addLineWidth()
	{
		return myImpl.addLineWidth( value_in );
	}

	/** Removes the element handle to the internal collection. Returns 'true'
	    if successful, returns 'false' to indicate failure.  If you try to
	    remove more elements that would result in a count less than MinOccurs,
	    the this function will fail. **/
	bool MxSeqSmpNode4143::removeLineWidth()
	{
		return myImpl.removeLineWidth( value_in );
	}

	/** Returns the minimum number of occurences of the <LineWidth> element.
	    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
	    the element is optional. **/
	int MxSeqSmpNode4143::getLineWidthMinOccurs()
	{
		return myImpl.getLineWidthMinOccurs();
	}

	/** Returns the maximum number of occurences of the <LineWidth> element.
	    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
	    When the specification says 'unbounded' 'getIsLineWidthUnbounded' will
	    return 'true' and the return value of 'getLineWidthMaxOccurs' should
	    be ignored. **/
	int MxSeqSmpNode4143::getLineWidthMaxOccurs()
	{
		return myImpl.getLineWidthMaxOccurs();
	}

	/** Returns 'true' if the specification says that the maximum number of
	    occurences of the <LineWidth> element is 'unbounded'.When this function
	    returns 'true', the value returned by 'getLineWidthMaxOccurs' should
	    be ignored. **/
	int MxSeqSmpNode4143::getIsLineWidthUnbounded()
	{
		return myImpl.getIsLineWidthUnbounded();
	}

/* NoteSize Functions ----------------------------------------------------------------- */

	/** Returns the count of <NoteSize> elements. **/
	size_type MxSeqSmpNode4143::getNoteSizeCount()
	{
		return myImpl.getNoteSizeCount();
	}

	/** Returns an STL iterator into the contained collection of element handles. **/
	std::vector<HMxEsNoteSize>::iterator MxSeqSmpNode4143::getNoteSizeBegin()
	{
		return myImpl.getNoteSizeBegin();
	}

	/** Returns an STL iterator into the contained collection of element handles. **/
	std::vector<HMxEsNoteSize>::iterator MxSeqSmpNode4143::getNoteSizeEnd()
	{
		return myImpl.getNoteSizeEnd();
	}

	/** Returns an STL iterator into the contained collection of element handles. **/
	std::vector<HMxEsNoteSize>::const_iterator MxSeqSmpNode4143::getNoteSizeBegin()
	{
		return myImpl.getNoteSizeBegin();
	}

	/** Returns an STL iterator into the contained collection of element handles. **/
	std::vector<HMxEsNoteSize>::const_iterator MxSeqSmpNode4143::getNoteSizeEnd()
	{
		return myImpl.getNoteSizeEnd();
	}

	/** Adds the element handle to the internal collection. Returns 'true'
	    if successful, returns 'false' to indicate failure.  If you try to
	    add more elements than is allowed by MaxOccurs, the this function will
	    fail.  If you try to add a nullptr this function will fail. **/
	bool MxSeqSmpNode4143::addNoteSize()
	{
		return myImpl.addNoteSize( value_in );
	}

	/** Removes the element handle to the internal collection. Returns 'true'
	    if successful, returns 'false' to indicate failure.  If you try to
	    remove more elements that would result in a count less than MinOccurs,
	    the this function will fail. **/
	bool MxSeqSmpNode4143::removeNoteSize()
	{
		return myImpl.removeNoteSize( value_in );
	}

	/** Returns the minimum number of occurences of the <NoteSize> element.
	    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
	    the element is optional. **/
	int MxSeqSmpNode4143::getNoteSizeMinOccurs()
	{
		return myImpl.getNoteSizeMinOccurs();
	}

	/** Returns the maximum number of occurences of the <NoteSize> element.
	    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
	    When the specification says 'unbounded' 'getIsNoteSizeUnbounded' will
	    return 'true' and the return value of 'getNoteSizeMaxOccurs' should
	    be ignored. **/
	int MxSeqSmpNode4143::getNoteSizeMaxOccurs()
	{
		return myImpl.getNoteSizeMaxOccurs();
	}

	/** Returns 'true' if the specification says that the maximum number of
	    occurences of the <NoteSize> element is 'unbounded'.When this function
	    returns 'true', the value returned by 'getNoteSizeMaxOccurs' should
	    be ignored. **/
	int MxSeqSmpNode4143::getIsNoteSizeUnbounded()
	{
		return myImpl.getIsNoteSizeUnbounded();
	}

/* Distance Functions ----------------------------------------------------------------- */

	/** Returns the count of <Distance> elements. **/
	size_type MxSeqSmpNode4143::getDistanceCount()
	{
		return myImpl.getDistanceCount();
	}

	/** Returns an STL iterator into the contained collection of element handles. **/
	std::vector<HMxEsDistance>::iterator MxSeqSmpNode4143::getDistanceBegin()
	{
		return myImpl.getDistanceBegin();
	}

	/** Returns an STL iterator into the contained collection of element handles. **/
	std::vector<HMxEsDistance>::iterator MxSeqSmpNode4143::getDistanceEnd()
	{
		return myImpl.getDistanceEnd();
	}

	/** Returns an STL iterator into the contained collection of element handles. **/
	std::vector<HMxEsDistance>::const_iterator MxSeqSmpNode4143::getDistanceBegin()
	{
		return myImpl.getDistanceBegin();
	}

	/** Returns an STL iterator into the contained collection of element handles. **/
	std::vector<HMxEsDistance>::const_iterator MxSeqSmpNode4143::getDistanceEnd()
	{
		return myImpl.getDistanceEnd();
	}

	/** Adds the element handle to the internal collection. Returns 'true'
	    if successful, returns 'false' to indicate failure.  If you try to
	    add more elements than is allowed by MaxOccurs, the this function will
	    fail.  If you try to add a nullptr this function will fail. **/
	bool MxSeqSmpNode4143::addDistance()
	{
		return myImpl.addDistance( value_in );
	}

	/** Removes the element handle to the internal collection. Returns 'true'
	    if successful, returns 'false' to indicate failure.  If you try to
	    remove more elements that would result in a count less than MinOccurs,
	    the this function will fail. **/
	bool MxSeqSmpNode4143::removeDistance()
	{
		return myImpl.removeDistance( value_in );
	}

	/** Returns the minimum number of occurences of the <Distance> element.
	    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
	    the element is optional. **/
	int MxSeqSmpNode4143::getDistanceMinOccurs()
	{
		return myImpl.getDistanceMinOccurs();
	}

	/** Returns the maximum number of occurences of the <Distance> element.
	    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
	    When the specification says 'unbounded' 'getIsDistanceUnbounded' will
	    return 'true' and the return value of 'getDistanceMaxOccurs' should
	    be ignored. **/
	int MxSeqSmpNode4143::getDistanceMaxOccurs()
	{
		return myImpl.getDistanceMaxOccurs();
	}

	/** Returns 'true' if the specification says that the maximum number of
	    occurences of the <Distance> element is 'unbounded'.When this function
	    returns 'true', the value returned by 'getDistanceMaxOccurs' should
	    be ignored. **/
	int MxSeqSmpNode4143::getIsDistanceUnbounded()
	{
		return myImpl.getIsDistanceUnbounded();
	}

/* OtherAppearance Functions ---------------------------------------------------------- */

	/** Returns the count of <OtherAppearance> elements. **/
	size_type MxSeqSmpNode4143::getOtherAppearanceCount()
	{
		return myImpl.getOtherAppearanceCount();
	}

	/** Returns an STL iterator into the contained collection of element handles. **/
	std::vector<HMxEsOtherAppearance>::iterator MxSeqSmpNode4143::getOtherAppearanceBegin()
	{
		return myImpl.getOtherAppearanceBegin();
	}

	/** Returns an STL iterator into the contained collection of element handles. **/
	std::vector<HMxEsOtherAppearance>::iterator MxSeqSmpNode4143::getOtherAppearanceEnd()
	{
		return myImpl.getOtherAppearanceEnd();
	}

	/** Returns an STL iterator into the contained collection of element handles. **/
	std::vector<HMxEsOtherAppearance>::const_iterator MxSeqSmpNode4143::getOtherAppearanceBegin()
	{
		return myImpl.getOtherAppearanceBegin();
	}

	/** Returns an STL iterator into the contained collection of element handles. **/
	std::vector<HMxEsOtherAppearance>::const_iterator MxSeqSmpNode4143::getOtherAppearanceEnd()
	{
		return myImpl.getOtherAppearanceEnd();
	}

	/** Adds the element handle to the internal collection. Returns 'true'
	    if successful, returns 'false' to indicate failure.  If you try to
	    add more elements than is allowed by MaxOccurs, the this function will
	    fail.  If you try to add a nullptr this function will fail. **/
	bool MxSeqSmpNode4143::addOtherAppearance()
	{
		return myImpl.addOtherAppearance( value_in );
	}

	/** Removes the element handle to the internal collection. Returns 'true'
	    if successful, returns 'false' to indicate failure.  If you try to
	    remove more elements that would result in a count less than MinOccurs,
	    the this function will fail. **/
	bool MxSeqSmpNode4143::removeOtherAppearance()
	{
		return myImpl.removeOtherAppearance( value_in );
	}

	/** Returns the minimum number of occurences of the <OtherAppearance> element.
	    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
	    the element is optional. **/
	int MxSeqSmpNode4143::getOtherAppearanceMinOccurs()
	{
		return myImpl.getOtherAppearanceMinOccurs();
	}

	/** Returns the maximum number of occurences of the <OtherAppearance> element.
	    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
	    When the specification says 'unbounded' 'getIsOtherAppearanceUnbounded'
	    will return 'true' and the return value of 'getOtherAppearanceMaxOccurs'
	    should be ignored. **/
	int MxSeqSmpNode4143::getOtherAppearanceMaxOccurs()
	{
		return myImpl.getOtherAppearanceMaxOccurs();
	}

	/** Returns 'true' if the specification says that the maximum number of
	    occurences of the <OtherAppearance> element is 'unbounded'.When this
	    function returns 'true', the value returned by 'getOtherAppearanceMaxOccurs'
	    should be ignored. **/
	int MxSeqSmpNode4143::getIsOtherAppearanceUnbounded()
	{
		return myImpl.getIsOtherAppearanceUnbounded();
	}

/* Stringing and Streaming ------------------------------------------------------------ */

	void MxSeqSmpNode4143::stream()
	{
		myImpl.stream( os_outindentcount_inindentchars_in );
	}


} // namespace lexicon

