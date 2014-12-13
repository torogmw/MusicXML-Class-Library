/**
  * @file       MxSeqSmpNode4143.cpp
  * @class      lexicon::MxSeqSmpNode4143
  * @author     Matthew James Briggs
  * @email      matthew.james.briggs@gmail.com
  * @url        http://matthewjamesbriggs.com
  * @date       2014-12-12 16:19:54
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
		:myLineWidthCollection()
		,myNoteSizeCollection()
		,myDistanceCollection()
		,myOtherAppearanceCollection()
		{}

	private:
		MxEsLineWidths myLineWidthCollection;
		MxEsNoteSizes myNoteSizeCollection;
		MxEsDistances myDistanceCollection;
		MxEsOtherAppearances myOtherAppearanceCollection;
		const static int myXsdID;
		const static std::string myXmlTypeName;
		const static std::string myCppClassName;
		const static std::string myDocumentation;


		public:

/* defaultName ------------------------------------------------------------------------ */

		/** Returns the name of this xs:element as found in the musicxml.xsd document. **/
		std::string getXmlTypeName() const
		{
			return myXmlTypeName;
		}

		/** Returns the name of this C++ class. **/
		std::string getClassName() const
		{
			return myCppClassName;
		}

		/** Returns the documentation for this musicxml type as found in the musicxml.xsd
		    document. **/
		std::string getDocumentation() const
		{
			return myDocumentation;
		}

/* LineWidth Functions ---------------------------------------------------------------- */

		/** Returns the count of <LineWidth> elements. **/
		std::size_t getLineWidthCount() const
		{
			throw "todo: write the code.";
		}

		/** Returns an STL iterator into the contained collection of element handles. **/
		MxEsLineWidthsIter getLineWidthBegin()
		{
			throw "todo: write the code.";
		}

		/** Returns an STL iterator into the contained collection of element handles. **/
		MxEsLineWidthsIter getLineWidthEnd()
		{
			throw "todo: write the code.";
		}

		/** Returns an STL iterator into the contained collection of element handles. **/
		MxEsLineWidthsIterConst getLineWidthBeginConst() const
		{
			throw "todo: write the code.";
		}

		/** Returns an STL iterator into the contained collection of element handles. **/
		MxEsLineWidthsIterConst getLineWidthEndConst() const
		{
			throw "todo: write the code.";
		}

		/** Adds the element handle to the internal collection. Returns 'true'
		    if successful, returns 'false' to indicate failure.  If you try to
		    add more elements than is allowed by MaxOccurs, the this function will
		    fail.  If you try to add a nullptr this function will fail. **/
		bool addLineWidth( const MxEsLineWidthsIter& value_in )
		{
			throw "todo: write the code.";
		}

		/** Removes the element handle to the internal collection. Returns 'true'
		    if successful, returns 'false' to indicate failure.  If you try to
		    remove elements that would result in a count less than MinOccurs, the
		    this function will fail. **/
		bool removeLineWidth( const MxEsLineWidthsIter& value_in )
		{
			throw "todo: write the code.";
		}

		/** Returns the minimum number of occurences of the <LineWidth> element.
		    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
		    the element is optional. **/
		int getLineWidthMinOccurs() const
		{
			throw "todo: write the code.";
		}

		/** Returns the maximum number of occurences of the <LineWidth> element.
		    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
		    When the specification says 'unbounded' 'getIsLineWidthUnbounded' will
		    return 'true' and the return value of 'getLineWidthMaxOccurs' should
		    be ignored. **/
		int getLineWidthMaxOccurs() const
		{
			throw "todo: write the code.";
		}

		/** Returns 'true' if the specification says that the maximum number of
		    occurences of the <LineWidth> element is 'unbounded'.When this function
		    returns 'true', the value returned by 'getLineWidthMaxOccurs' should
		    be ignored. **/
		int getIsLineWidthUnbounded() const
		{
			throw "todo: write the code.";
		}

/* NoteSize Functions ----------------------------------------------------------------- */

		/** Returns the count of <NoteSize> elements. **/
		std::size_t getNoteSizeCount() const
		{
			throw "todo: write the code.";
		}

		/** Returns an STL iterator into the contained collection of element handles. **/
		MxEsNoteSizesIter getNoteSizeBegin()
		{
			throw "todo: write the code.";
		}

		/** Returns an STL iterator into the contained collection of element handles. **/
		MxEsNoteSizesIter getNoteSizeEnd()
		{
			throw "todo: write the code.";
		}

		/** Returns an STL iterator into the contained collection of element handles. **/
		MxEsNoteSizesIterConst getNoteSizeBeginConst() const
		{
			throw "todo: write the code.";
		}

		/** Returns an STL iterator into the contained collection of element handles. **/
		MxEsNoteSizesIterConst getNoteSizeEndConst() const
		{
			throw "todo: write the code.";
		}

		/** Adds the element handle to the internal collection. Returns 'true'
		    if successful, returns 'false' to indicate failure.  If you try to
		    add more elements than is allowed by MaxOccurs, the this function will
		    fail.  If you try to add a nullptr this function will fail. **/
		bool addNoteSize( const MxEsNoteSizesIter& value_in )
		{
			throw "todo: write the code.";
		}

		/** Removes the element handle to the internal collection. Returns 'true'
		    if successful, returns 'false' to indicate failure.  If you try to
		    remove elements that would result in a count less than MinOccurs, the
		    this function will fail. **/
		bool removeNoteSize( const MxEsNoteSizesIter& value_in )
		{
			throw "todo: write the code.";
		}

		/** Returns the minimum number of occurences of the <NoteSize> element.
		    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
		    the element is optional. **/
		int getNoteSizeMinOccurs() const
		{
			throw "todo: write the code.";
		}

		/** Returns the maximum number of occurences of the <NoteSize> element.
		    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
		    When the specification says 'unbounded' 'getIsNoteSizeUnbounded' will
		    return 'true' and the return value of 'getNoteSizeMaxOccurs' should
		    be ignored. **/
		int getNoteSizeMaxOccurs() const
		{
			throw "todo: write the code.";
		}

		/** Returns 'true' if the specification says that the maximum number of
		    occurences of the <NoteSize> element is 'unbounded'.When this function
		    returns 'true', the value returned by 'getNoteSizeMaxOccurs' should
		    be ignored. **/
		int getIsNoteSizeUnbounded() const
		{
			throw "todo: write the code.";
		}

/* Distance Functions ----------------------------------------------------------------- */

		/** Returns the count of <Distance> elements. **/
		std::size_t getDistanceCount() const
		{
			throw "todo: write the code.";
		}

		/** Returns an STL iterator into the contained collection of element handles. **/
		MxEsDistancesIter getDistanceBegin()
		{
			throw "todo: write the code.";
		}

		/** Returns an STL iterator into the contained collection of element handles. **/
		MxEsDistancesIter getDistanceEnd()
		{
			throw "todo: write the code.";
		}

		/** Returns an STL iterator into the contained collection of element handles. **/
		MxEsDistancesIterConst getDistanceBeginConst() const
		{
			throw "todo: write the code.";
		}

		/** Returns an STL iterator into the contained collection of element handles. **/
		MxEsDistancesIterConst getDistanceEndConst() const
		{
			throw "todo: write the code.";
		}

		/** Adds the element handle to the internal collection. Returns 'true'
		    if successful, returns 'false' to indicate failure.  If you try to
		    add more elements than is allowed by MaxOccurs, the this function will
		    fail.  If you try to add a nullptr this function will fail. **/
		bool addDistance( const MxEsDistancesIter& value_in )
		{
			throw "todo: write the code.";
		}

		/** Removes the element handle to the internal collection. Returns 'true'
		    if successful, returns 'false' to indicate failure.  If you try to
		    remove elements that would result in a count less than MinOccurs, the
		    this function will fail. **/
		bool removeDistance( const MxEsDistancesIter& value_in )
		{
			throw "todo: write the code.";
		}

		/** Returns the minimum number of occurences of the <Distance> element.
		    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
		    the element is optional. **/
		int getDistanceMinOccurs() const
		{
			throw "todo: write the code.";
		}

		/** Returns the maximum number of occurences of the <Distance> element.
		    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
		    When the specification says 'unbounded' 'getIsDistanceUnbounded' will
		    return 'true' and the return value of 'getDistanceMaxOccurs' should
		    be ignored. **/
		int getDistanceMaxOccurs() const
		{
			throw "todo: write the code.";
		}

		/** Returns 'true' if the specification says that the maximum number of
		    occurences of the <Distance> element is 'unbounded'.When this function
		    returns 'true', the value returned by 'getDistanceMaxOccurs' should
		    be ignored. **/
		int getIsDistanceUnbounded() const
		{
			throw "todo: write the code.";
		}

/* OtherAppearance Functions ---------------------------------------------------------- */

		/** Returns the count of <OtherAppearance> elements. **/
		std::size_t getOtherAppearanceCount() const
		{
			throw "todo: write the code.";
		}

		/** Returns an STL iterator into the contained collection of element handles. **/
		MxEsOtherAppearancesIter getOtherAppearanceBegin()
		{
			throw "todo: write the code.";
		}

		/** Returns an STL iterator into the contained collection of element handles. **/
		MxEsOtherAppearancesIter getOtherAppearanceEnd()
		{
			throw "todo: write the code.";
		}

		/** Returns an STL iterator into the contained collection of element handles. **/
		MxEsOtherAppearancesIterConst getOtherAppearanceBeginConst() const
		{
			throw "todo: write the code.";
		}

		/** Returns an STL iterator into the contained collection of element handles. **/
		MxEsOtherAppearancesIterConst getOtherAppearanceEndConst() const
		{
			throw "todo: write the code.";
		}

		/** Adds the element handle to the internal collection. Returns 'true'
		    if successful, returns 'false' to indicate failure.  If you try to
		    add more elements than is allowed by MaxOccurs, the this function will
		    fail.  If you try to add a nullptr this function will fail. **/
		bool addOtherAppearance( const MxEsOtherAppearancesIter& value_in )
		{
			throw "todo: write the code.";
		}

		/** Removes the element handle to the internal collection. Returns 'true'
		    if successful, returns 'false' to indicate failure.  If you try to
		    remove elements that would result in a count less than MinOccurs, the
		    this function will fail. **/
		bool removeOtherAppearance( const MxEsOtherAppearancesIter& value_in )
		{
			throw "todo: write the code.";
		}

		/** Returns the minimum number of occurences of the <OtherAppearance> element.
		    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
		    the element is optional. **/
		int getOtherAppearanceMinOccurs() const
		{
			throw "todo: write the code.";
		}

		/** Returns the maximum number of occurences of the <OtherAppearance> element.
		    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
		    When the specification says 'unbounded' 'getIsOtherAppearanceUnbounded'
		    will return 'true' and the return value of 'getOtherAppearanceMaxOccurs'
		    should be ignored. **/
		int getOtherAppearanceMaxOccurs() const
		{
			throw "todo: write the code.";
		}

		/** Returns 'true' if the specification says that the maximum number of
		    occurences of the <OtherAppearance> element is 'unbounded'.When this
		    function returns 'true', the value returned by 'getOtherAppearanceMaxOccurs'
		    should be ignored. **/
		int getIsOtherAppearanceUnbounded() const
		{
			throw "todo: write the code.";
		}

/* Stringing and Streaming ------------------------------------------------------------ */

		std::ostream& stream( std::ostream& os_out, int indentcount_in, const char* indentchars_in ) const
		{
			throw "todo: write the code.";
		}

	}; // struct MxSeqSmpNode4143::Impl

	const int MxSeqSmpNode4143::Impl::myXsdID = 4143;
	const std::string MxSeqSmpNode4143::Impl::myXmlTypeName = "node-4143";
	const std::string MxSeqSmpNode4143::Impl::myCppClassName = "MxSeqSmpNode4143";
	const std::string MxSeqSmpNode4143::Impl::myDocumentation = "No XSD Documentation.";

/* MxSeqSmpNode4143 ------------------------------------------------------------------- */


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
	std::string MxSeqSmpNode4143::getXmlTypeName() const
	{
		return myImpl->getXmlTypeName();
	}

	/** Returns the name of this C++ class. **/
	std::string MxSeqSmpNode4143::getClassName() const
	{
		return myImpl->getClassName();
	}

	/** Returns the documentation for this musicxml type as found in the musicxml.xsd
	    document. **/
	std::string MxSeqSmpNode4143::getDocumentation() const
	{
		return myImpl->getDocumentation();
	}

/* LineWidth Functions ---------------------------------------------------------------- */

	/** Returns the count of <LineWidth> elements. **/
	std::size_t MxSeqSmpNode4143::getLineWidthCount() const
	{
		return myImpl->getLineWidthCount();
	}

	/** Returns an STL iterator into the contained collection of element handles. **/
	MxEsLineWidthsIter MxSeqSmpNode4143::getLineWidthBegin()
	{
		return myImpl->getLineWidthBegin();
	}

	/** Returns an STL iterator into the contained collection of element handles. **/
	MxEsLineWidthsIter MxSeqSmpNode4143::getLineWidthEnd()
	{
		return myImpl->getLineWidthEnd();
	}

	/** Returns an STL iterator into the contained collection of element handles. **/
	MxEsLineWidthsIterConst MxSeqSmpNode4143::getLineWidthBeginConst() const
	{
		return myImpl->getLineWidthBeginConst();
	}

	/** Returns an STL iterator into the contained collection of element handles. **/
	MxEsLineWidthsIterConst MxSeqSmpNode4143::getLineWidthEndConst() const
	{
		return myImpl->getLineWidthEndConst();
	}

	/** Adds the element handle to the internal collection. Returns 'true'
	    if successful, returns 'false' to indicate failure.  If you try to
	    add more elements than is allowed by MaxOccurs, the this function will
	    fail.  If you try to add a nullptr this function will fail. **/
	bool MxSeqSmpNode4143::addLineWidth( const MxEsLineWidthsIter& value_in )
	{
		return myImpl->addLineWidth( value_in );
	}

	/** Removes the element handle to the internal collection. Returns 'true'
	    if successful, returns 'false' to indicate failure.  If you try to
	    remove elements that would result in a count less than MinOccurs, the
	    this function will fail. **/
	bool MxSeqSmpNode4143::removeLineWidth( const MxEsLineWidthsIter& value_in )
	{
		return myImpl->removeLineWidth( value_in );
	}

	/** Returns the minimum number of occurences of the <LineWidth> element.
	    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
	    the element is optional. **/
	int MxSeqSmpNode4143::getLineWidthMinOccurs() const
	{
		return myImpl->getLineWidthMinOccurs();
	}

	/** Returns the maximum number of occurences of the <LineWidth> element.
	    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
	    When the specification says 'unbounded' 'getIsLineWidthUnbounded' will
	    return 'true' and the return value of 'getLineWidthMaxOccurs' should
	    be ignored. **/
	int MxSeqSmpNode4143::getLineWidthMaxOccurs() const
	{
		return myImpl->getLineWidthMaxOccurs();
	}

	/** Returns 'true' if the specification says that the maximum number of
	    occurences of the <LineWidth> element is 'unbounded'.When this function
	    returns 'true', the value returned by 'getLineWidthMaxOccurs' should
	    be ignored. **/
	int MxSeqSmpNode4143::getIsLineWidthUnbounded() const
	{
		return myImpl->getIsLineWidthUnbounded();
	}

/* NoteSize Functions ----------------------------------------------------------------- */

	/** Returns the count of <NoteSize> elements. **/
	std::size_t MxSeqSmpNode4143::getNoteSizeCount() const
	{
		return myImpl->getNoteSizeCount();
	}

	/** Returns an STL iterator into the contained collection of element handles. **/
	MxEsNoteSizesIter MxSeqSmpNode4143::getNoteSizeBegin()
	{
		return myImpl->getNoteSizeBegin();
	}

	/** Returns an STL iterator into the contained collection of element handles. **/
	MxEsNoteSizesIter MxSeqSmpNode4143::getNoteSizeEnd()
	{
		return myImpl->getNoteSizeEnd();
	}

	/** Returns an STL iterator into the contained collection of element handles. **/
	MxEsNoteSizesIterConst MxSeqSmpNode4143::getNoteSizeBeginConst() const
	{
		return myImpl->getNoteSizeBeginConst();
	}

	/** Returns an STL iterator into the contained collection of element handles. **/
	MxEsNoteSizesIterConst MxSeqSmpNode4143::getNoteSizeEndConst() const
	{
		return myImpl->getNoteSizeEndConst();
	}

	/** Adds the element handle to the internal collection. Returns 'true'
	    if successful, returns 'false' to indicate failure.  If you try to
	    add more elements than is allowed by MaxOccurs, the this function will
	    fail.  If you try to add a nullptr this function will fail. **/
	bool MxSeqSmpNode4143::addNoteSize( const MxEsNoteSizesIter& value_in )
	{
		return myImpl->addNoteSize( value_in );
	}

	/** Removes the element handle to the internal collection. Returns 'true'
	    if successful, returns 'false' to indicate failure.  If you try to
	    remove elements that would result in a count less than MinOccurs, the
	    this function will fail. **/
	bool MxSeqSmpNode4143::removeNoteSize( const MxEsNoteSizesIter& value_in )
	{
		return myImpl->removeNoteSize( value_in );
	}

	/** Returns the minimum number of occurences of the <NoteSize> element.
	    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
	    the element is optional. **/
	int MxSeqSmpNode4143::getNoteSizeMinOccurs() const
	{
		return myImpl->getNoteSizeMinOccurs();
	}

	/** Returns the maximum number of occurences of the <NoteSize> element.
	    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
	    When the specification says 'unbounded' 'getIsNoteSizeUnbounded' will
	    return 'true' and the return value of 'getNoteSizeMaxOccurs' should
	    be ignored. **/
	int MxSeqSmpNode4143::getNoteSizeMaxOccurs() const
	{
		return myImpl->getNoteSizeMaxOccurs();
	}

	/** Returns 'true' if the specification says that the maximum number of
	    occurences of the <NoteSize> element is 'unbounded'.When this function
	    returns 'true', the value returned by 'getNoteSizeMaxOccurs' should
	    be ignored. **/
	int MxSeqSmpNode4143::getIsNoteSizeUnbounded() const
	{
		return myImpl->getIsNoteSizeUnbounded();
	}

/* Distance Functions ----------------------------------------------------------------- */

	/** Returns the count of <Distance> elements. **/
	std::size_t MxSeqSmpNode4143::getDistanceCount() const
	{
		return myImpl->getDistanceCount();
	}

	/** Returns an STL iterator into the contained collection of element handles. **/
	MxEsDistancesIter MxSeqSmpNode4143::getDistanceBegin()
	{
		return myImpl->getDistanceBegin();
	}

	/** Returns an STL iterator into the contained collection of element handles. **/
	MxEsDistancesIter MxSeqSmpNode4143::getDistanceEnd()
	{
		return myImpl->getDistanceEnd();
	}

	/** Returns an STL iterator into the contained collection of element handles. **/
	MxEsDistancesIterConst MxSeqSmpNode4143::getDistanceBeginConst() const
	{
		return myImpl->getDistanceBeginConst();
	}

	/** Returns an STL iterator into the contained collection of element handles. **/
	MxEsDistancesIterConst MxSeqSmpNode4143::getDistanceEndConst() const
	{
		return myImpl->getDistanceEndConst();
	}

	/** Adds the element handle to the internal collection. Returns 'true'
	    if successful, returns 'false' to indicate failure.  If you try to
	    add more elements than is allowed by MaxOccurs, the this function will
	    fail.  If you try to add a nullptr this function will fail. **/
	bool MxSeqSmpNode4143::addDistance( const MxEsDistancesIter& value_in )
	{
		return myImpl->addDistance( value_in );
	}

	/** Removes the element handle to the internal collection. Returns 'true'
	    if successful, returns 'false' to indicate failure.  If you try to
	    remove elements that would result in a count less than MinOccurs, the
	    this function will fail. **/
	bool MxSeqSmpNode4143::removeDistance( const MxEsDistancesIter& value_in )
	{
		return myImpl->removeDistance( value_in );
	}

	/** Returns the minimum number of occurences of the <Distance> element.
	    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
	    the element is optional. **/
	int MxSeqSmpNode4143::getDistanceMinOccurs() const
	{
		return myImpl->getDistanceMinOccurs();
	}

	/** Returns the maximum number of occurences of the <Distance> element.
	    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
	    When the specification says 'unbounded' 'getIsDistanceUnbounded' will
	    return 'true' and the return value of 'getDistanceMaxOccurs' should
	    be ignored. **/
	int MxSeqSmpNode4143::getDistanceMaxOccurs() const
	{
		return myImpl->getDistanceMaxOccurs();
	}

	/** Returns 'true' if the specification says that the maximum number of
	    occurences of the <Distance> element is 'unbounded'.When this function
	    returns 'true', the value returned by 'getDistanceMaxOccurs' should
	    be ignored. **/
	int MxSeqSmpNode4143::getIsDistanceUnbounded() const
	{
		return myImpl->getIsDistanceUnbounded();
	}

/* OtherAppearance Functions ---------------------------------------------------------- */

	/** Returns the count of <OtherAppearance> elements. **/
	std::size_t MxSeqSmpNode4143::getOtherAppearanceCount() const
	{
		return myImpl->getOtherAppearanceCount();
	}

	/** Returns an STL iterator into the contained collection of element handles. **/
	MxEsOtherAppearancesIter MxSeqSmpNode4143::getOtherAppearanceBegin()
	{
		return myImpl->getOtherAppearanceBegin();
	}

	/** Returns an STL iterator into the contained collection of element handles. **/
	MxEsOtherAppearancesIter MxSeqSmpNode4143::getOtherAppearanceEnd()
	{
		return myImpl->getOtherAppearanceEnd();
	}

	/** Returns an STL iterator into the contained collection of element handles. **/
	MxEsOtherAppearancesIterConst MxSeqSmpNode4143::getOtherAppearanceBeginConst() const
	{
		return myImpl->getOtherAppearanceBeginConst();
	}

	/** Returns an STL iterator into the contained collection of element handles. **/
	MxEsOtherAppearancesIterConst MxSeqSmpNode4143::getOtherAppearanceEndConst() const
	{
		return myImpl->getOtherAppearanceEndConst();
	}

	/** Adds the element handle to the internal collection. Returns 'true'
	    if successful, returns 'false' to indicate failure.  If you try to
	    add more elements than is allowed by MaxOccurs, the this function will
	    fail.  If you try to add a nullptr this function will fail. **/
	bool MxSeqSmpNode4143::addOtherAppearance( const MxEsOtherAppearancesIter& value_in )
	{
		return myImpl->addOtherAppearance( value_in );
	}

	/** Removes the element handle to the internal collection. Returns 'true'
	    if successful, returns 'false' to indicate failure.  If you try to
	    remove elements that would result in a count less than MinOccurs, the
	    this function will fail. **/
	bool MxSeqSmpNode4143::removeOtherAppearance( const MxEsOtherAppearancesIter& value_in )
	{
		return myImpl->removeOtherAppearance( value_in );
	}

	/** Returns the minimum number of occurences of the <OtherAppearance> element.
	    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
	    the element is optional. **/
	int MxSeqSmpNode4143::getOtherAppearanceMinOccurs() const
	{
		return myImpl->getOtherAppearanceMinOccurs();
	}

	/** Returns the maximum number of occurences of the <OtherAppearance> element.
	    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
	    When the specification says 'unbounded' 'getIsOtherAppearanceUnbounded'
	    will return 'true' and the return value of 'getOtherAppearanceMaxOccurs'
	    should be ignored. **/
	int MxSeqSmpNode4143::getOtherAppearanceMaxOccurs() const
	{
		return myImpl->getOtherAppearanceMaxOccurs();
	}

	/** Returns 'true' if the specification says that the maximum number of
	    occurences of the <OtherAppearance> element is 'unbounded'.When this
	    function returns 'true', the value returned by 'getOtherAppearanceMaxOccurs'
	    should be ignored. **/
	int MxSeqSmpNode4143::getIsOtherAppearanceUnbounded() const
	{
		return myImpl->getIsOtherAppearanceUnbounded();
	}

/* Stringing and Streaming ------------------------------------------------------------ */

	std::ostream& MxSeqSmpNode4143::stream( std::ostream& os_out, int indentcount_in, const char* indentchars_in ) const
	{
		return myImpl->stream( os_out, indentcount_in, indentchars_in );
	}


} // namespace lexicon

