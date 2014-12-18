/**
  * @file       MxSeqSmpNode5619.cpp
  * @class      lexicon::MxSeqSmpNode5619
  * @author     Matthew James Briggs
  * @email      matthew.james.briggs@gmail.com
  * @url        http://matthewjamesbriggs.com
  * @date       2014-12-17 15:52:16
  * @project    Lexicon
  * @version    1.0
  * @musicxmlid 5619
  * 
  * @brief This class represents an xs:sequence object from musicxml.xsd.
  * 
  * Full description goes here.
  * 
 **/

#include "MxSeqSmpNode5619.h"
#include "_hidden_indent.h"

/* Impl ------------------------------------------------------------------------------- */

namespace lexicon
{
	struct MxSeqSmpNode5619::Impl
	{
		Impl()
		:myTupletNumber( std::make_shared<MxEsTupletNumber>() )
		,myIsTupletNumberPresent( false )
		,myTupletType( std::make_shared<MxEsTupletType>() )
		,myIsTupletTypePresent( false )
		,myTupletDotCollection()
		{}

	private:
		HMxEsTupletNumber myTupletNumber;
		bool myIsTupletNumberPresent;
		HMxEsTupletType myTupletType;
		bool myIsTupletTypePresent;
		MxEeTupletDots myTupletDotCollection;
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

/* TupletNumber Functions ------------------------------------------------------------- */

		/** Tells you whether or not <TupletNumber> is present. If <TupletNumber>
		    is required, this will always return 'true'. If <TupletNumber> is required,
		    no corresponding 'setIsTupletNumberPresent' will exist. **/
		bool getIsTupletNumberPresent() const
		{
			return myIsTupletNumberPresent;
		}

		void setIsTupletNumberPresent( const bool& value_in )
		{
			myIsTupletNumberPresent = value_in;
		}

		/** Returns a shared pointer handle to the <TupletNumber> element. Note
		    that if getIsTupletNumberPresent is false, this value will still exist
		    (even though it is not in the xml document) and you should ignore it. **/
		HMxEsTupletNumber getTupletNumber() const
		{
			return myTupletNumber;
			
		}

		/** Sets the internal shared pointer handle for the <TupletNumber> element.
		    Note that if setIsTupletNumberPresent is false, the internal shared
		    pointer will not be altered and will hold a value that does not exist
		    in xml. **/
		void setTupletNumber( const HMxEsTupletNumber& value_in )
		{
			myTupletNumber = value_in;
		}

		/** Returns the minimum number of occurences of the <TupletNumber> element.
		    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
		    the element is optional. **/
		int getTupletNumberMinOccurs() const
		{
			return 0;
		}

		/** Returns the maximum number of occurences of the <TupletNumber> element.
		    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
		    When the specification says 'unbounded' 'getIsTupletNumberUnbounded'
		    will return 'true' and the return value of 'getTupletNumberMaxOccurs'
		    should be ignored. **/
		int getTupletNumberMaxOccurs() const
		{
			return 1;
		}

		/** Returns 'true' if the specification says that the maximum number of
		    occurences of the <TupletNumber> element is 'unbounded'.When this function
		    returns 'true', the value returned by 'getTupletNumberMaxOccurs' should
		    be ignored. **/
		bool getIsTupletNumberUnbounded() const
		{
			return false;
		}

/* TupletType Functions --------------------------------------------------------------- */

		/** Tells you whether or not <TupletType> is present. If <TupletType> is
		    required, this will always return 'true'. If <TupletType> is required,
		    no corresponding 'setIsTupletTypePresent' will exist. **/
		bool getIsTupletTypePresent() const
		{
			return myIsTupletTypePresent;
		}

		void setIsTupletTypePresent( const bool& value_in )
		{
			myIsTupletTypePresent = value_in;
		}

		/** Returns a shared pointer handle to the <TupletType> element. Note that
		    if getIsTupletTypePresent is false, this value will still exist (even
		    though it is not in the xml document) and you should ignore it. **/
		HMxEsTupletType getTupletType() const
		{
			return myTupletType;
			
		}

		/** Sets the internal shared pointer handle for the <TupletType> element.
		    Note that if setIsTupletTypePresent is false, the internal shared pointer
		    will not be altered and will hold a value that does not exist in xml. **/
		void setTupletType( const HMxEsTupletType& value_in )
		{
			myTupletType = value_in;
		}

		/** Returns the minimum number of occurences of the <TupletType> element.
		    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
		    the element is optional. **/
		int getTupletTypeMinOccurs() const
		{
			return 0;
		}

		/** Returns the maximum number of occurences of the <TupletType> element.
		    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
		    When the specification says 'unbounded' 'getIsTupletTypeUnbounded'
		    will return 'true' and the return value of 'getTupletTypeMaxOccurs'
		    should be ignored. **/
		int getTupletTypeMaxOccurs() const
		{
			return 1;
		}

		/** Returns 'true' if the specification says that the maximum number of
		    occurences of the <TupletType> element is 'unbounded'.When this function
		    returns 'true', the value returned by 'getTupletTypeMaxOccurs' should
		    be ignored. **/
		bool getIsTupletTypeUnbounded() const
		{
			return false;
		}

/* TupletDot Functions ---------------------------------------------------------------- */

		/** Returns the count of <TupletDot> elements. **/
		std::size_t getTupletDotCount() const
		{
			return myTupletDotCollection.size();
		}

		/** Returns an STL iterator into the contained collection of element handles. **/
		MxEeTupletDotsIter getTupletDotBegin()
		{
			return myTupletDotCollection.begin();
		}

		/** Returns an STL iterator into the contained collection of element handles. **/
		MxEeTupletDotsIter getTupletDotEnd()
		{
			return myTupletDotCollection.end();
		}

		/** Returns an STL iterator into the contained collection of element handles. **/
		MxEeTupletDotsIterConst getTupletDotBeginConst() const
		{
			return myTupletDotCollection.cbegin();
		}

		/** Returns an STL iterator into the contained collection of element handles. **/
		MxEeTupletDotsIterConst getTupletDotEndConst() const
		{
			return myTupletDotCollection.cend();
		}

		/** Adds the element handle to the internal collection. Returns 'true'
		    if successful, returns 'false' to indicate failure.  If you try to
		    add more elements than is allowed by MaxOccurs, the this function will
		    fail.  If you try to add a nullptr this function will fail. **/
		bool addTupletDot( const HMxEeTupletDot& value_in )
		{
			if( ! getIsTupletDotUnbounded() )
			{
				if( myTupletDotCollection.size() >= ( getTupletDotMaxOccurs() - 1 ) )
				{
					return false;
				}
			}
			else if( ! value_in )
			{
				return false;
			}
			myTupletDotCollection.push_back( value_in );
			return true;
		}

		/** Removes the element handle to the internal collection. Returns 'true'
		    if successful, returns 'false' to indicate failure.  If you try to
		    remove elements that would result in a count less than MinOccurs, the
		    this function will fail. **/
		bool removeTupletDot( const MxEeTupletDotsIter& value_in )
		{
			if( myTupletDotCollection.size() <= getTupletDotMinOccurs() )
			{
				return false;
			}
			else if( value_in == getTupletDotEndConst() )
			{
				return false;
			}
			myTupletDotCollection.erase( value_in );
			return true;
		}

		/** Returns the minimum number of occurences of the <TupletDot> element.
		    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
		    the element is optional. **/
		int getTupletDotMinOccurs() const
		{
			return 0;
		}

		/** Returns the maximum number of occurences of the <TupletDot> element.
		    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
		    When the specification says 'unbounded' 'getIsTupletDotUnbounded' will
		    return 'true' and the return value of 'getTupletDotMaxOccurs' should
		    be ignored. **/
		int getTupletDotMaxOccurs() const
		{
			return 32767;
		}

		/** Returns 'true' if the specification says that the maximum number of
		    occurences of the <TupletDot> element is 'unbounded'.When this function
		    returns 'true', the value returned by 'getTupletDotMaxOccurs' should
		    be ignored. **/
		int getIsTupletDotUnbounded() const
		{
			return true;
		}

/* Stringing and Streaming ------------------------------------------------------------ */

		std::ostream& stream( std::ostream& os_out, int indentcount_in, const char* indentchars_in ) const
		{
			bool isFirst = true;
			if( getIsTupletNumberPresent() )
			{
				if ( isFirst == false )
				{
					os_out << std::endl;
				}
				hidden::indent( os_out, indentcount_in, indentchars_in );
				getTupletNumber()->stream( os_out );
				isFirst = false;
			}
			if( getIsTupletTypePresent() )
			{
				if ( isFirst == false )
				{
					os_out << std::endl;
				}
				hidden::indent( os_out, indentcount_in, indentchars_in );
				getTupletType()->stream( os_out );
				isFirst = false;
			}
			if( getTupletDotCount() > 0 )
			{
				for ( auto it = getTupletDotBeginConst(); it != getTupletDotEndConst(); ++it )
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

	}; // struct MxSeqSmpNode5619::Impl

	const int MxSeqSmpNode5619::Impl::myXsdID = 5619;
	const std::string MxSeqSmpNode5619::Impl::myXmlTypeName = "node-5619";
	const std::string MxSeqSmpNode5619::Impl::myCppClassName = "MxSeqSmpNode5619";
	const std::string MxSeqSmpNode5619::Impl::myDocumentation = "No XSD Documentation.";

/* MxSeqSmpNode5619 ------------------------------------------------------------------- */


/* Constructor, Destructor, Copy, Assignment ------------------------------------------ */

	MxSeqSmpNode5619::MxSeqSmpNode5619()
	:myImpl( new Impl() ) {}

	MxSeqSmpNode5619::~MxSeqSmpNode5619() {}

	MxSeqSmpNode5619::MxSeqSmpNode5619( const MxSeqSmpNode5619& other )
	:myImpl( new Impl( *(other.myImpl) ) ) {}

	MxSeqSmpNode5619& MxSeqSmpNode5619::operator=( const MxSeqSmpNode5619& other )
	{
		this->myImpl = std::unique_ptr<Impl>( new Impl( *(other.myImpl) ) );
		return *this;
	}

/* defaultName ------------------------------------------------------------------------ */

	/** Returns the name of this xs:element as found in the musicxml.xsd document. **/
	std::string MxSeqSmpNode5619::getXmlTypeName() const
	{
		return myImpl->getXmlTypeName();
	}

	/** Returns the name of this C++ class. **/
	std::string MxSeqSmpNode5619::getClassName() const
	{
		return myImpl->getClassName();
	}

	/** Returns the documentation for this musicxml type as found in the musicxml.xsd
	    document. **/
	std::string MxSeqSmpNode5619::getDocumentation() const
	{
		return myImpl->getDocumentation();
	}

/* TupletNumber Functions ------------------------------------------------------------- */

	/** Tells you whether or not <TupletNumber> is present. If <TupletNumber>
	    is required, this will always return 'true'. If <TupletNumber> is required,
	    no corresponding 'setIsTupletNumberPresent' will exist. **/
	bool MxSeqSmpNode5619::getIsTupletNumberPresent() const
	{
		return myImpl->getIsTupletNumberPresent();
	}

	void MxSeqSmpNode5619::setIsTupletNumberPresent( const bool& value_in )
	{
		myImpl->setIsTupletNumberPresent( value_in );
	}

	/** Returns a shared pointer handle to the <TupletNumber> element. Note
	    that if getIsTupletNumberPresent is false, this value will still exist
	    (even though it is not in the xml document) and you should ignore it. **/
	HMxEsTupletNumber MxSeqSmpNode5619::getTupletNumber() const
	{
		return myImpl->getTupletNumber();
	}

	/** Sets the internal shared pointer handle for the <TupletNumber> element.
	    Note that if setIsTupletNumberPresent is false, the internal shared
	    pointer will not be altered and will hold a value that does not exist
	    in xml. **/
	void MxSeqSmpNode5619::setTupletNumber( const HMxEsTupletNumber& value_in )
	{
		myImpl->setTupletNumber( value_in );
	}

	/** Returns the minimum number of occurences of the <TupletNumber> element.
	    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
	    the element is optional. **/
	int MxSeqSmpNode5619::getTupletNumberMinOccurs() const
	{
		return myImpl->getTupletNumberMinOccurs();
	}

	/** Returns the maximum number of occurences of the <TupletNumber> element.
	    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
	    When the specification says 'unbounded' 'getIsTupletNumberUnbounded'
	    will return 'true' and the return value of 'getTupletNumberMaxOccurs'
	    should be ignored. **/
	int MxSeqSmpNode5619::getTupletNumberMaxOccurs() const
	{
		return myImpl->getTupletNumberMaxOccurs();
	}

	/** Returns 'true' if the specification says that the maximum number of
	    occurences of the <TupletNumber> element is 'unbounded'.When this function
	    returns 'true', the value returned by 'getTupletNumberMaxOccurs' should
	    be ignored. **/
	bool MxSeqSmpNode5619::getIsTupletNumberUnbounded() const
	{
		return myImpl->getIsTupletNumberUnbounded();
	}

/* TupletType Functions --------------------------------------------------------------- */

	/** Tells you whether or not <TupletType> is present. If <TupletType> is
	    required, this will always return 'true'. If <TupletType> is required,
	    no corresponding 'setIsTupletTypePresent' will exist. **/
	bool MxSeqSmpNode5619::getIsTupletTypePresent() const
	{
		return myImpl->getIsTupletTypePresent();
	}

	void MxSeqSmpNode5619::setIsTupletTypePresent( const bool& value_in )
	{
		myImpl->setIsTupletTypePresent( value_in );
	}

	/** Returns a shared pointer handle to the <TupletType> element. Note that
	    if getIsTupletTypePresent is false, this value will still exist (even
	    though it is not in the xml document) and you should ignore it. **/
	HMxEsTupletType MxSeqSmpNode5619::getTupletType() const
	{
		return myImpl->getTupletType();
	}

	/** Sets the internal shared pointer handle for the <TupletType> element.
	    Note that if setIsTupletTypePresent is false, the internal shared pointer
	    will not be altered and will hold a value that does not exist in xml. **/
	void MxSeqSmpNode5619::setTupletType( const HMxEsTupletType& value_in )
	{
		myImpl->setTupletType( value_in );
	}

	/** Returns the minimum number of occurences of the <TupletType> element.
	    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
	    the element is optional. **/
	int MxSeqSmpNode5619::getTupletTypeMinOccurs() const
	{
		return myImpl->getTupletTypeMinOccurs();
	}

	/** Returns the maximum number of occurences of the <TupletType> element.
	    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
	    When the specification says 'unbounded' 'getIsTupletTypeUnbounded'
	    will return 'true' and the return value of 'getTupletTypeMaxOccurs'
	    should be ignored. **/
	int MxSeqSmpNode5619::getTupletTypeMaxOccurs() const
	{
		return myImpl->getTupletTypeMaxOccurs();
	}

	/** Returns 'true' if the specification says that the maximum number of
	    occurences of the <TupletType> element is 'unbounded'.When this function
	    returns 'true', the value returned by 'getTupletTypeMaxOccurs' should
	    be ignored. **/
	bool MxSeqSmpNode5619::getIsTupletTypeUnbounded() const
	{
		return myImpl->getIsTupletTypeUnbounded();
	}

/* TupletDot Functions ---------------------------------------------------------------- */

	/** Returns the count of <TupletDot> elements. **/
	std::size_t MxSeqSmpNode5619::getTupletDotCount() const
	{
		return myImpl->getTupletDotCount();
	}

	/** Returns an STL iterator into the contained collection of element handles. **/
	MxEeTupletDotsIter MxSeqSmpNode5619::getTupletDotBegin()
	{
		return myImpl->getTupletDotBegin();
	}

	/** Returns an STL iterator into the contained collection of element handles. **/
	MxEeTupletDotsIter MxSeqSmpNode5619::getTupletDotEnd()
	{
		return myImpl->getTupletDotEnd();
	}

	/** Returns an STL iterator into the contained collection of element handles. **/
	MxEeTupletDotsIterConst MxSeqSmpNode5619::getTupletDotBeginConst() const
	{
		return myImpl->getTupletDotBeginConst();
	}

	/** Returns an STL iterator into the contained collection of element handles. **/
	MxEeTupletDotsIterConst MxSeqSmpNode5619::getTupletDotEndConst() const
	{
		return myImpl->getTupletDotEndConst();
	}

	/** Adds the element handle to the internal collection. Returns 'true'
	    if successful, returns 'false' to indicate failure.  If you try to
	    add more elements than is allowed by MaxOccurs, the this function will
	    fail.  If you try to add a nullptr this function will fail. **/
	bool MxSeqSmpNode5619::addTupletDot( const HMxEeTupletDot& value_in )
	{
		return myImpl->addTupletDot( value_in );
	}

	/** Removes the element handle to the internal collection. Returns 'true'
	    if successful, returns 'false' to indicate failure.  If you try to
	    remove elements that would result in a count less than MinOccurs, the
	    this function will fail. **/
	bool MxSeqSmpNode5619::removeTupletDot( const MxEeTupletDotsIter& value_in )
	{
		return myImpl->removeTupletDot( value_in );
	}

	/** Returns the minimum number of occurences of the <TupletDot> element.
	    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
	    the element is optional. **/
	int MxSeqSmpNode5619::getTupletDotMinOccurs() const
	{
		return myImpl->getTupletDotMinOccurs();
	}

	/** Returns the maximum number of occurences of the <TupletDot> element.
	    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
	    When the specification says 'unbounded' 'getIsTupletDotUnbounded' will
	    return 'true' and the return value of 'getTupletDotMaxOccurs' should
	    be ignored. **/
	int MxSeqSmpNode5619::getTupletDotMaxOccurs() const
	{
		return myImpl->getTupletDotMaxOccurs();
	}

	/** Returns 'true' if the specification says that the maximum number of
	    occurences of the <TupletDot> element is 'unbounded'.When this function
	    returns 'true', the value returned by 'getTupletDotMaxOccurs' should
	    be ignored. **/
	int MxSeqSmpNode5619::getIsTupletDotUnbounded() const
	{
		return myImpl->getIsTupletDotUnbounded();
	}

/* Stringing and Streaming ------------------------------------------------------------ */

	std::ostream& MxSeqSmpNode5619::stream( std::ostream& os_out, int indentcount_in, const char* indentchars_in ) const
	{
		return myImpl->stream( os_out, indentcount_in, indentchars_in );
	}


} // namespace lexicon

