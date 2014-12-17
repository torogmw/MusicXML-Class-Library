/**
  * @file       MxSeqSmpNode4143.cpp
  * @class      lexicon::MxSeqSmpNode4143
  * @author     Matthew James Briggs
  * @email      matthew.james.briggs@gmail.com
  * @url        http://matthewjamesbriggs.com
  * @date       2014-12-17 15:43:39
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
#include "_hidden_indent.h"

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
			return myLineWidthCollection.size();
		}

		/** Returns an STL iterator into the contained collection of element handles. **/
		MxEsLineWidthsIter getLineWidthBegin()
		{
			return myLineWidthCollection.begin();
		}

		/** Returns an STL iterator into the contained collection of element handles. **/
		MxEsLineWidthsIter getLineWidthEnd()
		{
			return myLineWidthCollection.end();
		}

		/** Returns an STL iterator into the contained collection of element handles. **/
		MxEsLineWidthsIterConst getLineWidthBeginConst() const
		{
			return myLineWidthCollection.cbegin();
		}

		/** Returns an STL iterator into the contained collection of element handles. **/
		MxEsLineWidthsIterConst getLineWidthEndConst() const
		{
			return myLineWidthCollection.cend();
		}

		/** Adds the element handle to the internal collection. Returns 'true'
		    if successful, returns 'false' to indicate failure.  If you try to
		    add more elements than is allowed by MaxOccurs, the this function will
		    fail.  If you try to add a nullptr this function will fail. **/
		bool addLineWidth( const HMxEsLineWidth& value_in )
		{
			if( ! getIsLineWidthUnbounded() )
			{
				if( myLineWidthCollection.size() >= ( getLineWidthMaxOccurs() - 1 ) )
				{
					return false;
				}
			}
			else if( value_in )
			{
				return false;
			}
			myLineWidthCollection.push_back( value_in );
			return true;
		}

		/** Removes the element handle to the internal collection. Returns 'true'
		    if successful, returns 'false' to indicate failure.  If you try to
		    remove elements that would result in a count less than MinOccurs, the
		    this function will fail. **/
		bool removeLineWidth( const MxEsLineWidthsIter& value_in )
		{
			if( myLineWidthCollection.size() <= getLineWidthMinOccurs() )
			{
				return false;
			}
			else if( value_in == getLineWidthEndConst() )
			{
				return false;
			}
			myLineWidthCollection.erase( value_in );
			return true;
		}

		/** Returns the minimum number of occurences of the <LineWidth> element.
		    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
		    the element is optional. **/
		int getLineWidthMinOccurs() const
		{
			return 0;
		}

		/** Returns the maximum number of occurences of the <LineWidth> element.
		    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
		    When the specification says 'unbounded' 'getIsLineWidthUnbounded' will
		    return 'true' and the return value of 'getLineWidthMaxOccurs' should
		    be ignored. **/
		int getLineWidthMaxOccurs() const
		{
			return 32767;
		}

		/** Returns 'true' if the specification says that the maximum number of
		    occurences of the <LineWidth> element is 'unbounded'.When this function
		    returns 'true', the value returned by 'getLineWidthMaxOccurs' should
		    be ignored. **/
		int getIsLineWidthUnbounded() const
		{
			return true;
		}

/* NoteSize Functions ----------------------------------------------------------------- */

		/** Returns the count of <NoteSize> elements. **/
		std::size_t getNoteSizeCount() const
		{
			return myNoteSizeCollection.size();
		}

		/** Returns an STL iterator into the contained collection of element handles. **/
		MxEsNoteSizesIter getNoteSizeBegin()
		{
			return myNoteSizeCollection.begin();
		}

		/** Returns an STL iterator into the contained collection of element handles. **/
		MxEsNoteSizesIter getNoteSizeEnd()
		{
			return myNoteSizeCollection.end();
		}

		/** Returns an STL iterator into the contained collection of element handles. **/
		MxEsNoteSizesIterConst getNoteSizeBeginConst() const
		{
			return myNoteSizeCollection.cbegin();
		}

		/** Returns an STL iterator into the contained collection of element handles. **/
		MxEsNoteSizesIterConst getNoteSizeEndConst() const
		{
			return myNoteSizeCollection.cend();
		}

		/** Adds the element handle to the internal collection. Returns 'true'
		    if successful, returns 'false' to indicate failure.  If you try to
		    add more elements than is allowed by MaxOccurs, the this function will
		    fail.  If you try to add a nullptr this function will fail. **/
		bool addNoteSize( const HMxEsNoteSize& value_in )
		{
			if( ! getIsNoteSizeUnbounded() )
			{
				if( myNoteSizeCollection.size() >= ( getNoteSizeMaxOccurs() - 1 ) )
				{
					return false;
				}
			}
			else if( value_in )
			{
				return false;
			}
			myNoteSizeCollection.push_back( value_in );
			return true;
		}

		/** Removes the element handle to the internal collection. Returns 'true'
		    if successful, returns 'false' to indicate failure.  If you try to
		    remove elements that would result in a count less than MinOccurs, the
		    this function will fail. **/
		bool removeNoteSize( const MxEsNoteSizesIter& value_in )
		{
			if( myNoteSizeCollection.size() <= getNoteSizeMinOccurs() )
			{
				return false;
			}
			else if( value_in == getNoteSizeEndConst() )
			{
				return false;
			}
			myNoteSizeCollection.erase( value_in );
			return true;
		}

		/** Returns the minimum number of occurences of the <NoteSize> element.
		    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
		    the element is optional. **/
		int getNoteSizeMinOccurs() const
		{
			return 0;
		}

		/** Returns the maximum number of occurences of the <NoteSize> element.
		    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
		    When the specification says 'unbounded' 'getIsNoteSizeUnbounded' will
		    return 'true' and the return value of 'getNoteSizeMaxOccurs' should
		    be ignored. **/
		int getNoteSizeMaxOccurs() const
		{
			return 32767;
		}

		/** Returns 'true' if the specification says that the maximum number of
		    occurences of the <NoteSize> element is 'unbounded'.When this function
		    returns 'true', the value returned by 'getNoteSizeMaxOccurs' should
		    be ignored. **/
		int getIsNoteSizeUnbounded() const
		{
			return true;
		}

/* Distance Functions ----------------------------------------------------------------- */

		/** Returns the count of <Distance> elements. **/
		std::size_t getDistanceCount() const
		{
			return myDistanceCollection.size();
		}

		/** Returns an STL iterator into the contained collection of element handles. **/
		MxEsDistancesIter getDistanceBegin()
		{
			return myDistanceCollection.begin();
		}

		/** Returns an STL iterator into the contained collection of element handles. **/
		MxEsDistancesIter getDistanceEnd()
		{
			return myDistanceCollection.end();
		}

		/** Returns an STL iterator into the contained collection of element handles. **/
		MxEsDistancesIterConst getDistanceBeginConst() const
		{
			return myDistanceCollection.cbegin();
		}

		/** Returns an STL iterator into the contained collection of element handles. **/
		MxEsDistancesIterConst getDistanceEndConst() const
		{
			return myDistanceCollection.cend();
		}

		/** Adds the element handle to the internal collection. Returns 'true'
		    if successful, returns 'false' to indicate failure.  If you try to
		    add more elements than is allowed by MaxOccurs, the this function will
		    fail.  If you try to add a nullptr this function will fail. **/
		bool addDistance( const HMxEsDistance& value_in )
		{
			if( ! getIsDistanceUnbounded() )
			{
				if( myDistanceCollection.size() >= ( getDistanceMaxOccurs() - 1 ) )
				{
					return false;
				}
			}
			else if( value_in )
			{
				return false;
			}
			myDistanceCollection.push_back( value_in );
			return true;
		}

		/** Removes the element handle to the internal collection. Returns 'true'
		    if successful, returns 'false' to indicate failure.  If you try to
		    remove elements that would result in a count less than MinOccurs, the
		    this function will fail. **/
		bool removeDistance( const MxEsDistancesIter& value_in )
		{
			if( myDistanceCollection.size() <= getDistanceMinOccurs() )
			{
				return false;
			}
			else if( value_in == getDistanceEndConst() )
			{
				return false;
			}
			myDistanceCollection.erase( value_in );
			return true;
		}

		/** Returns the minimum number of occurences of the <Distance> element.
		    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
		    the element is optional. **/
		int getDistanceMinOccurs() const
		{
			return 0;
		}

		/** Returns the maximum number of occurences of the <Distance> element.
		    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
		    When the specification says 'unbounded' 'getIsDistanceUnbounded' will
		    return 'true' and the return value of 'getDistanceMaxOccurs' should
		    be ignored. **/
		int getDistanceMaxOccurs() const
		{
			return 32767;
		}

		/** Returns 'true' if the specification says that the maximum number of
		    occurences of the <Distance> element is 'unbounded'.When this function
		    returns 'true', the value returned by 'getDistanceMaxOccurs' should
		    be ignored. **/
		int getIsDistanceUnbounded() const
		{
			return true;
		}

/* OtherAppearance Functions ---------------------------------------------------------- */

		/** Returns the count of <OtherAppearance> elements. **/
		std::size_t getOtherAppearanceCount() const
		{
			return myOtherAppearanceCollection.size();
		}

		/** Returns an STL iterator into the contained collection of element handles. **/
		MxEsOtherAppearancesIter getOtherAppearanceBegin()
		{
			return myOtherAppearanceCollection.begin();
		}

		/** Returns an STL iterator into the contained collection of element handles. **/
		MxEsOtherAppearancesIter getOtherAppearanceEnd()
		{
			return myOtherAppearanceCollection.end();
		}

		/** Returns an STL iterator into the contained collection of element handles. **/
		MxEsOtherAppearancesIterConst getOtherAppearanceBeginConst() const
		{
			return myOtherAppearanceCollection.cbegin();
		}

		/** Returns an STL iterator into the contained collection of element handles. **/
		MxEsOtherAppearancesIterConst getOtherAppearanceEndConst() const
		{
			return myOtherAppearanceCollection.cend();
		}

		/** Adds the element handle to the internal collection. Returns 'true'
		    if successful, returns 'false' to indicate failure.  If you try to
		    add more elements than is allowed by MaxOccurs, the this function will
		    fail.  If you try to add a nullptr this function will fail. **/
		bool addOtherAppearance( const HMxEsOtherAppearance& value_in )
		{
			if( ! getIsOtherAppearanceUnbounded() )
			{
				if( myOtherAppearanceCollection.size() >= ( getOtherAppearanceMaxOccurs() - 1 ) )
				{
					return false;
				}
			}
			else if( value_in )
			{
				return false;
			}
			myOtherAppearanceCollection.push_back( value_in );
			return true;
		}

		/** Removes the element handle to the internal collection. Returns 'true'
		    if successful, returns 'false' to indicate failure.  If you try to
		    remove elements that would result in a count less than MinOccurs, the
		    this function will fail. **/
		bool removeOtherAppearance( const MxEsOtherAppearancesIter& value_in )
		{
			if( myOtherAppearanceCollection.size() <= getOtherAppearanceMinOccurs() )
			{
				return false;
			}
			else if( value_in == getOtherAppearanceEndConst() )
			{
				return false;
			}
			myOtherAppearanceCollection.erase( value_in );
			return true;
		}

		/** Returns the minimum number of occurences of the <OtherAppearance> element.
		    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
		    the element is optional. **/
		int getOtherAppearanceMinOccurs() const
		{
			return 0;
		}

		/** Returns the maximum number of occurences of the <OtherAppearance> element.
		    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
		    When the specification says 'unbounded' 'getIsOtherAppearanceUnbounded'
		    will return 'true' and the return value of 'getOtherAppearanceMaxOccurs'
		    should be ignored. **/
		int getOtherAppearanceMaxOccurs() const
		{
			return 32767;
		}

		/** Returns 'true' if the specification says that the maximum number of
		    occurences of the <OtherAppearance> element is 'unbounded'.When this
		    function returns 'true', the value returned by 'getOtherAppearanceMaxOccurs'
		    should be ignored. **/
		int getIsOtherAppearanceUnbounded() const
		{
			return true;
		}

/* Stringing and Streaming ------------------------------------------------------------ */

		std::ostream& stream( std::ostream& os_out, int indentcount_in, const char* indentchars_in ) const
		{
			bool isFirst = true;
			if( getLineWidthCount() > 0 )
			{
				for ( auto it = getLineWidthBeginConst(); it != getLineWidthEndConst(); ++it )
				{
					if ( isFirst == false )
					{
						os_out << std::endl;
					}
					hidden::indent( os_out, indentcount_in, indentchars_in );
					(*it)->stream( os_out );
					isFirst = false;
				}
			}
			if( getNoteSizeCount() > 0 )
			{
				for ( auto it = getNoteSizeBeginConst(); it != getNoteSizeEndConst(); ++it )
				{
					if ( isFirst == false )
					{
						os_out << std::endl;
					}
					hidden::indent( os_out, indentcount_in, indentchars_in );
					(*it)->stream( os_out );
					isFirst = false;
				}
			}
			if( getDistanceCount() > 0 )
			{
				for ( auto it = getDistanceBeginConst(); it != getDistanceEndConst(); ++it )
				{
					if ( isFirst == false )
					{
						os_out << std::endl;
					}
					hidden::indent( os_out, indentcount_in, indentchars_in );
					(*it)->stream( os_out );
					isFirst = false;
				}
			}
			if( getOtherAppearanceCount() > 0 )
			{
				for ( auto it = getOtherAppearanceBeginConst(); it != getOtherAppearanceEndConst(); ++it )
				{
					if ( isFirst == false )
					{
						os_out << std::endl;
					}
					hidden::indent( os_out, indentcount_in, indentchars_in );
					(*it)->stream( os_out );
					isFirst = false;
				}
			}
			return os_out;
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
	bool MxSeqSmpNode4143::addLineWidth( const HMxEsLineWidth& value_in )
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
	bool MxSeqSmpNode4143::addNoteSize( const HMxEsNoteSize& value_in )
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
	bool MxSeqSmpNode4143::addDistance( const HMxEsDistance& value_in )
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
	bool MxSeqSmpNode4143::addOtherAppearance( const HMxEsOtherAppearance& value_in )
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

