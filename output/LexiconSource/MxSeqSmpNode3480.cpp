/**
  * @file       MxSeqSmpNode3480.cpp
  * @class      lexicon::MxSeqSmpNode3480
  * @author     Matthew James Briggs
  * @email      matthew.james.briggs@gmail.com
  * @url        http://matthewjamesbriggs.com
  * @date       2014-12-11 16:20:26
  * @project    Lexicon
  * @version    1.0
  * @musicxmlid 3480
  * 
  * @brief This class represents an xs:sequence object from musicxml.xsd.
  * 
  * Full description goes here.
  * 
 **/

#include "MxSeqSmpNode3480.h"

/* Impl ------------------------------------------------------------------------------- */

namespace lexicon
{
	struct MxSeqSmpNode3480::Impl
	{
		Impl()
		{}

	private:
		HMxEsString myString;
		bool myStringIsPresent;
		HMxEsFret myFret;
		bool myFretIsPresent;
		HMxEsFingering myFingering;
		bool myFingeringIsPresent;
		HMxEeBarre myBarre;
		bool myBarreIsPresent;
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

/* String Functions ------------------------------------------------------------------- */

		/** Tells you whether or not <String> is present. If <String> is required,
		    this will always return 'true'. If <String> is required, no corresponding
		    'setIsStringPresent' will exist. **/
		bool getIsStringPresent() const
		{
			return 0;
		}

		/** Returns a shared pointer handle to the <String> element. Note that
		    if getIsStringPresent is false, this value will still exist (even though
		    it is not in the xml document) and you should ignore it. **/
		HMxEsString getString() const
		{
			if( myString )
			{
				return myString;
			}
			else
			{
				return std::make_shared<HMxEsString>();
			}
		}

		/** Sets the internal shared pointer handle for the <String> element.  **/
		int setString( const HMxEsString& value_in )
		{
			myString = value_in;
		}

		/** Returns the minimum number of occurences of the <String> element. 
		    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
		    the element is optional. **/
		int getStringMinOccurs() const
		{
			return myString.getMinOccurs();
		}

		/** Returns the maximum number of occurences of the <String> element. Typically
		    the MaxOccurs is specified as either '1' or 'unbounded'.  When the
		    specification says 'unbounded' 'getIsStringUnbounded' will return 'true'
		    and the return value of 'getStringMaxOccurs' should be ignored. **/
		int getStringMaxOccurs() const
		{
			return myString.getMaxOccurs();
		}

		/** Returns 'true' if the specification says that the maximum number of
		    occurences of the <String> element is 'unbounded'.When this function
		    returns 'true', the value returned by 'getStringMaxOccurs' should be
		    ignored. **/
		int getIsStringUnbounded() const
		{
			return myString.getIsUnbounded();
		}

/* Fret Functions --------------------------------------------------------------------- */

		/** Tells you whether or not <Fret> is present. If <Fret> is required,
		    this will always return 'true'. If <Fret> is required, no corresponding
		    'setIsFretPresent' will exist. **/
		bool getIsFretPresent() const
		{
			return 0;
		}

		/** Returns a shared pointer handle to the <Fret> element. Note that if
		    getIsFretPresent is false, this value will still exist (even though
		    it is not in the xml document) and you should ignore it. **/
		HMxEsFret getFret() const
		{
			if( myFret )
			{
				return myFret;
			}
			else
			{
				return std::make_shared<HMxEsFret>();
			}
		}

		/** Sets the internal shared pointer handle for the <Fret> element.  **/
		int setFret( const HMxEsFret& value_in )
		{
			myFret = value_in;
		}

		/** Returns the minimum number of occurences of the <Fret> element.  i.e.
		    MinOccurs > 0 means the element is required, MinOccurs == 0 means the
		    element is optional. **/
		int getFretMinOccurs() const
		{
			return myFret.getMinOccurs();
		}

		/** Returns the maximum number of occurences of the <Fret> element. Typically
		    the MaxOccurs is specified as either '1' or 'unbounded'.  When the
		    specification says 'unbounded' 'getIsFretUnbounded' will return 'true'
		    and the return value of 'getFretMaxOccurs' should be ignored. **/
		int getFretMaxOccurs() const
		{
			return myFret.getMaxOccurs();
		}

		/** Returns 'true' if the specification says that the maximum number of
		    occurences of the <Fret> element is 'unbounded'.When this function
		    returns 'true', the value returned by 'getFretMaxOccurs' should be
		    ignored. **/
		int getIsFretUnbounded() const
		{
			return myFret.getIsUnbounded();
		}

/* Fingering Functions ---------------------------------------------------------------- */

		/** Tells you whether or not <Fingering> is present. If <Fingering> is
		    required, this will always return 'true'. If <Fingering> is required,
		    no corresponding 'setIsFingeringPresent' will exist. **/
		bool getIsFingeringPresent() const
		{
			return 0;
		}

		void setIsFingeringPresent( const bool& value_in )
		{
			return 0;
		}

		/** Returns a shared pointer handle to the <Fingering> element. Note that
		    if getIsFingeringPresent is false, this value will still exist (even
		    though it is not in the xml document) and you should ignore it. **/
		HMxEsFingering getFingering() const
		{
			if( myFingering )
			{
				return myFingering;
			}
			else
			{
				return std::make_shared<HMxEsFingering>();
			}
		}

		/** Sets the internal shared pointer handle for the <Fingering> element.
		    Note that if setIsFingeringPresent is false, the internal shared pointer
		    will not be altered and will hold a value that does not exist in xml. **/
		int setFingering( const HMxEsFingering& value_in )
		{
			myFingering = value_in;
		}

		/** Returns the minimum number of occurences of the <Fingering> element.
		    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
		    the element is optional. **/
		int getFingeringMinOccurs() const
		{
			return myFingering.getMinOccurs();
		}

		/** Returns the maximum number of occurences of the <Fingering> element.
		    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
		    When the specification says 'unbounded' 'getIsFingeringUnbounded' will
		    return 'true' and the return value of 'getFingeringMaxOccurs' should
		    be ignored. **/
		int getFingeringMaxOccurs() const
		{
			return myFingering.getMaxOccurs();
		}

		/** Returns 'true' if the specification says that the maximum number of
		    occurences of the <Fingering> element is 'unbounded'.When this function
		    returns 'true', the value returned by 'getFingeringMaxOccurs' should
		    be ignored. **/
		int getIsFingeringUnbounded() const
		{
			return myFingering.getIsUnbounded();
		}

/* Barre Functions -------------------------------------------------------------------- */

		/** Tells you whether or not <Barre> is present. If <Barre> is required,
		    this will always return 'true'. If <Barre> is required, no corresponding
		    'setIsBarrePresent' will exist. **/
		bool getIsBarrePresent() const
		{
			return 0;
		}

		void setIsBarrePresent( const bool& value_in )
		{
			return 0;
		}

		/** Returns a shared pointer handle to the <Barre> element. Note that if
		    getIsBarrePresent is false, this value will still exist (even though
		    it is not in the xml document) and you should ignore it. **/
		HMxEeBarre getBarre() const
		{
			if( myBarre )
			{
				return myBarre;
			}
			else
			{
				return std::make_shared<HMxEeBarre>();
			}
		}

		/** Sets the internal shared pointer handle for the <Barre> element. Note
		    that if setIsBarrePresent is false, the internal shared pointer will
		    not be altered and will hold a value that does not exist in xml. **/
		int setBarre( const HMxEeBarre& value_in )
		{
			myBarre = value_in;
		}

		/** Returns the minimum number of occurences of the <Barre> element.  i.e.
		    MinOccurs > 0 means the element is required, MinOccurs == 0 means the
		    element is optional. **/
		int getBarreMinOccurs() const
		{
			return myBarre.getMinOccurs();
		}

		/** Returns the maximum number of occurences of the <Barre> element. Typically
		    the MaxOccurs is specified as either '1' or 'unbounded'.  When the
		    specification says 'unbounded' 'getIsBarreUnbounded' will return 'true'
		    and the return value of 'getBarreMaxOccurs' should be ignored. **/
		int getBarreMaxOccurs() const
		{
			return myBarre.getMaxOccurs();
		}

		/** Returns 'true' if the specification says that the maximum number of
		    occurences of the <Barre> element is 'unbounded'.When this function
		    returns 'true', the value returned by 'getBarreMaxOccurs' should be
		    ignored. **/
		int getIsBarreUnbounded() const
		{
			return myBarre.getIsUnbounded();
		}

/* Stringing and Streaming ------------------------------------------------------------ */

		void stream( std::ostream& os_out, int indentcount_in, const char* indentchars_in ) const
		{
			return 0;
		}

	const int MxSeqSmpNode3480::Impl::myXsdID = 3480;
	const std::string MxSeqSmpNode3480::Impl::myXmlTypeName = "node-3480";
	const std::string MxSeqSmpNode3480::Impl::myCppClassName = "MxSeqSmpNode3480";
	const std::string MxSeqSmpNode3480::Impl::myDocumentation = "No XSD Documentation.";

	}; // struct MxSeqSmpNode3480::Impl

/* MxSeqSmpNode3480 ------------------------------------------------------------------- */

namespace lexicon
{

/* Constructor, Destructor, Copy, Assignment ------------------------------------------ */

	MxSeqSmpNode3480::MxSeqSmpNode3480()
	:myImpl( new Impl() ) {}

	MxSeqSmpNode3480::~MxSeqSmpNode3480() {}

	MxSeqSmpNode3480::MxSeqSmpNode3480( const MxSeqSmpNode3480& other )
	:myImpl( new Impl( *(other.myImpl) ) ) {}

	MxSeqSmpNode3480& MxSeqSmpNode3480::operator=( const MxSeqSmpNode3480& other )
	{
		this->myImpl = std::unique_ptr<Impl>( new Impl( *(other.myImpl) ) );
		return *this;
	}

/* defaultName ------------------------------------------------------------------------ */

	/** Returns the name of this xs:element as found in the musicxml.xsd document. **/
	std::string MxSeqSmpNode3480::getXmlTypeName()
	{
		return myImpl.getXmlTypeName();
	}

	/** Returns the name of this C++ class. **/
	std::string MxSeqSmpNode3480::getClassName()
	{
		return myImpl.getClassName();
	}

	/** Returns the documentation for this musicxml type as found in the musicxml.xsd
	    document. **/
	std::string MxSeqSmpNode3480::getDocumentation()
	{
		return myImpl.getDocumentation();
	}

/* String Functions ------------------------------------------------------------------- */

	/** Tells you whether or not <String> is present. If <String> is required,
	    this will always return 'true'. If <String> is required, no corresponding
	    'setIsStringPresent' will exist. **/
	bool MxSeqSmpNode3480::getIsStringPresent()
	{
		return myImpl.getIsStringPresent();
	}

	/** Returns a shared pointer handle to the <String> element. Note that
	    if getIsStringPresent is false, this value will still exist (even though
	    it is not in the xml document) and you should ignore it. **/
	HMxEsString MxSeqSmpNode3480::getString()
	{
		return myImpl.getString();
	}

	/** Sets the internal shared pointer handle for the <String> element.  **/
	int MxSeqSmpNode3480::setString()
	{
		return myImpl.setString( value_in );
	}

	/** Returns the minimum number of occurences of the <String> element. 
	    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
	    the element is optional. **/
	int MxSeqSmpNode3480::getStringMinOccurs()
	{
		return myImpl.getStringMinOccurs();
	}

	/** Returns the maximum number of occurences of the <String> element. Typically
	    the MaxOccurs is specified as either '1' or 'unbounded'.  When the
	    specification says 'unbounded' 'getIsStringUnbounded' will return 'true'
	    and the return value of 'getStringMaxOccurs' should be ignored. **/
	int MxSeqSmpNode3480::getStringMaxOccurs()
	{
		return myImpl.getStringMaxOccurs();
	}

	/** Returns 'true' if the specification says that the maximum number of
	    occurences of the <String> element is 'unbounded'.When this function
	    returns 'true', the value returned by 'getStringMaxOccurs' should be
	    ignored. **/
	int MxSeqSmpNode3480::getIsStringUnbounded()
	{
		return myImpl.getIsStringUnbounded();
	}

/* Fret Functions --------------------------------------------------------------------- */

	/** Tells you whether or not <Fret> is present. If <Fret> is required,
	    this will always return 'true'. If <Fret> is required, no corresponding
	    'setIsFretPresent' will exist. **/
	bool MxSeqSmpNode3480::getIsFretPresent()
	{
		return myImpl.getIsFretPresent();
	}

	/** Returns a shared pointer handle to the <Fret> element. Note that if
	    getIsFretPresent is false, this value will still exist (even though
	    it is not in the xml document) and you should ignore it. **/
	HMxEsFret MxSeqSmpNode3480::getFret()
	{
		return myImpl.getFret();
	}

	/** Sets the internal shared pointer handle for the <Fret> element.  **/
	int MxSeqSmpNode3480::setFret()
	{
		return myImpl.setFret( value_in );
	}

	/** Returns the minimum number of occurences of the <Fret> element.  i.e.
	    MinOccurs > 0 means the element is required, MinOccurs == 0 means the
	    element is optional. **/
	int MxSeqSmpNode3480::getFretMinOccurs()
	{
		return myImpl.getFretMinOccurs();
	}

	/** Returns the maximum number of occurences of the <Fret> element. Typically
	    the MaxOccurs is specified as either '1' or 'unbounded'.  When the
	    specification says 'unbounded' 'getIsFretUnbounded' will return 'true'
	    and the return value of 'getFretMaxOccurs' should be ignored. **/
	int MxSeqSmpNode3480::getFretMaxOccurs()
	{
		return myImpl.getFretMaxOccurs();
	}

	/** Returns 'true' if the specification says that the maximum number of
	    occurences of the <Fret> element is 'unbounded'.When this function
	    returns 'true', the value returned by 'getFretMaxOccurs' should be
	    ignored. **/
	int MxSeqSmpNode3480::getIsFretUnbounded()
	{
		return myImpl.getIsFretUnbounded();
	}

/* Fingering Functions ---------------------------------------------------------------- */

	/** Tells you whether or not <Fingering> is present. If <Fingering> is
	    required, this will always return 'true'. If <Fingering> is required,
	    no corresponding 'setIsFingeringPresent' will exist. **/
	bool MxSeqSmpNode3480::getIsFingeringPresent()
	{
		return myImpl.getIsFingeringPresent();
	}

	void MxSeqSmpNode3480::setIsFingeringPresent()
	{
		myImpl.setIsFingeringPresent( value_in );
	}

	/** Returns a shared pointer handle to the <Fingering> element. Note that
	    if getIsFingeringPresent is false, this value will still exist (even
	    though it is not in the xml document) and you should ignore it. **/
	HMxEsFingering MxSeqSmpNode3480::getFingering()
	{
		return myImpl.getFingering();
	}

	/** Sets the internal shared pointer handle for the <Fingering> element.
	    Note that if setIsFingeringPresent is false, the internal shared pointer
	    will not be altered and will hold a value that does not exist in xml. **/
	int MxSeqSmpNode3480::setFingering()
	{
		return myImpl.setFingering( value_in );
	}

	/** Returns the minimum number of occurences of the <Fingering> element.
	    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
	    the element is optional. **/
	int MxSeqSmpNode3480::getFingeringMinOccurs()
	{
		return myImpl.getFingeringMinOccurs();
	}

	/** Returns the maximum number of occurences of the <Fingering> element.
	    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
	    When the specification says 'unbounded' 'getIsFingeringUnbounded' will
	    return 'true' and the return value of 'getFingeringMaxOccurs' should
	    be ignored. **/
	int MxSeqSmpNode3480::getFingeringMaxOccurs()
	{
		return myImpl.getFingeringMaxOccurs();
	}

	/** Returns 'true' if the specification says that the maximum number of
	    occurences of the <Fingering> element is 'unbounded'.When this function
	    returns 'true', the value returned by 'getFingeringMaxOccurs' should
	    be ignored. **/
	int MxSeqSmpNode3480::getIsFingeringUnbounded()
	{
		return myImpl.getIsFingeringUnbounded();
	}

/* Barre Functions -------------------------------------------------------------------- */

	/** Tells you whether or not <Barre> is present. If <Barre> is required,
	    this will always return 'true'. If <Barre> is required, no corresponding
	    'setIsBarrePresent' will exist. **/
	bool MxSeqSmpNode3480::getIsBarrePresent()
	{
		return myImpl.getIsBarrePresent();
	}

	void MxSeqSmpNode3480::setIsBarrePresent()
	{
		myImpl.setIsBarrePresent( value_in );
	}

	/** Returns a shared pointer handle to the <Barre> element. Note that if
	    getIsBarrePresent is false, this value will still exist (even though
	    it is not in the xml document) and you should ignore it. **/
	HMxEeBarre MxSeqSmpNode3480::getBarre()
	{
		return myImpl.getBarre();
	}

	/** Sets the internal shared pointer handle for the <Barre> element. Note
	    that if setIsBarrePresent is false, the internal shared pointer will
	    not be altered and will hold a value that does not exist in xml. **/
	int MxSeqSmpNode3480::setBarre()
	{
		return myImpl.setBarre( value_in );
	}

	/** Returns the minimum number of occurences of the <Barre> element.  i.e.
	    MinOccurs > 0 means the element is required, MinOccurs == 0 means the
	    element is optional. **/
	int MxSeqSmpNode3480::getBarreMinOccurs()
	{
		return myImpl.getBarreMinOccurs();
	}

	/** Returns the maximum number of occurences of the <Barre> element. Typically
	    the MaxOccurs is specified as either '1' or 'unbounded'.  When the
	    specification says 'unbounded' 'getIsBarreUnbounded' will return 'true'
	    and the return value of 'getBarreMaxOccurs' should be ignored. **/
	int MxSeqSmpNode3480::getBarreMaxOccurs()
	{
		return myImpl.getBarreMaxOccurs();
	}

	/** Returns 'true' if the specification says that the maximum number of
	    occurences of the <Barre> element is 'unbounded'.When this function
	    returns 'true', the value returned by 'getBarreMaxOccurs' should be
	    ignored. **/
	int MxSeqSmpNode3480::getIsBarreUnbounded()
	{
		return myImpl.getIsBarreUnbounded();
	}

/* Stringing and Streaming ------------------------------------------------------------ */

	void MxSeqSmpNode3480::stream()
	{
		myImpl.stream( os_outindentcount_inindentchars_in );
	}


} // namespace lexicon

