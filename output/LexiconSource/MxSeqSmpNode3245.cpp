/**
  * @file       MxSeqSmpNode3245.cpp
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
  * Full description goes here.
  * 
 **/

#include "MxSeqSmpNode3245.h"

/* Impl ------------------------------------------------------------------------------- */

namespace lexicon
{
	struct MxSeqSmpNode3245::Impl
	{
		Impl()
		{}

	private:
		HMxEsDegreeValue myDegreeValue;
		bool myDegreeValueIsPresent;
		HMxEsDegreeAlter myDegreeAlter;
		bool myDegreeAlterIsPresent;
		HMxEsDegreeType myDegreeType;
		bool myDegreeTypeIsPresent;
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

/* DegreeValue Functions -------------------------------------------------------------- */

		/** Tells you whether or not <DegreeValue> is present. If <DegreeValue>
		    is required, this will always return 'true'. If <DegreeValue> is required,
		    no corresponding 'setIsDegreeValuePresent' will exist. **/
		bool getIsDegreeValuePresent() const
		{
			return 0;
		}

		/** Returns a shared pointer handle to the <DegreeValue> element. Note
		    that if getIsDegreeValuePresent is false, this value will still exist
		    (even though it is not in the xml document) and you should ignore it. **/
		HMxEsDegreeValue getDegreeValue() const
		{
			if( myDegreeValue )
			{
				return myDegreeValue;
			}
			else
			{
				return std::make_shared<HMxEsDegreeValue>();
			}
		}

		/** Sets the internal shared pointer handle for the <DegreeValue> element.
		     **/
		int setDegreeValue( const HMxEsDegreeValue& value_in )
		{
			myDegreeValue = value_in;
		}

		/** Returns the minimum number of occurences of the <DegreeValue> element.
		    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
		    the element is optional. **/
		int getDegreeValueMinOccurs() const
		{
			return myDegreeValue.getMinOccurs();
		}

		/** Returns the maximum number of occurences of the <DegreeValue> element.
		    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
		    When the specification says 'unbounded' 'getIsDegreeValueUnbounded'
		    will return 'true' and the return value of 'getDegreeValueMaxOccurs'
		    should be ignored. **/
		int getDegreeValueMaxOccurs() const
		{
			return myDegreeValue.getMaxOccurs();
		}

		/** Returns 'true' if the specification says that the maximum number of
		    occurences of the <DegreeValue> element is 'unbounded'.When this function
		    returns 'true', the value returned by 'getDegreeValueMaxOccurs' should
		    be ignored. **/
		int getIsDegreeValueUnbounded() const
		{
			return myDegreeValue.getIsUnbounded();
		}

/* DegreeAlter Functions -------------------------------------------------------------- */

		/** Tells you whether or not <DegreeAlter> is present. If <DegreeAlter>
		    is required, this will always return 'true'. If <DegreeAlter> is required,
		    no corresponding 'setIsDegreeAlterPresent' will exist. **/
		bool getIsDegreeAlterPresent() const
		{
			return 0;
		}

		/** Returns a shared pointer handle to the <DegreeAlter> element. Note
		    that if getIsDegreeAlterPresent is false, this value will still exist
		    (even though it is not in the xml document) and you should ignore it. **/
		HMxEsDegreeAlter getDegreeAlter() const
		{
			if( myDegreeAlter )
			{
				return myDegreeAlter;
			}
			else
			{
				return std::make_shared<HMxEsDegreeAlter>();
			}
		}

		/** Sets the internal shared pointer handle for the <DegreeAlter> element.
		     **/
		int setDegreeAlter( const HMxEsDegreeAlter& value_in )
		{
			myDegreeAlter = value_in;
		}

		/** Returns the minimum number of occurences of the <DegreeAlter> element.
		    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
		    the element is optional. **/
		int getDegreeAlterMinOccurs() const
		{
			return myDegreeAlter.getMinOccurs();
		}

		/** Returns the maximum number of occurences of the <DegreeAlter> element.
		    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
		    When the specification says 'unbounded' 'getIsDegreeAlterUnbounded'
		    will return 'true' and the return value of 'getDegreeAlterMaxOccurs'
		    should be ignored. **/
		int getDegreeAlterMaxOccurs() const
		{
			return myDegreeAlter.getMaxOccurs();
		}

		/** Returns 'true' if the specification says that the maximum number of
		    occurences of the <DegreeAlter> element is 'unbounded'.When this function
		    returns 'true', the value returned by 'getDegreeAlterMaxOccurs' should
		    be ignored. **/
		int getIsDegreeAlterUnbounded() const
		{
			return myDegreeAlter.getIsUnbounded();
		}

/* DegreeType Functions --------------------------------------------------------------- */

		/** Tells you whether or not <DegreeType> is present. If <DegreeType> is
		    required, this will always return 'true'. If <DegreeType> is required,
		    no corresponding 'setIsDegreeTypePresent' will exist. **/
		bool getIsDegreeTypePresent() const
		{
			return 0;
		}

		/** Returns a shared pointer handle to the <DegreeType> element. Note that
		    if getIsDegreeTypePresent is false, this value will still exist (even
		    though it is not in the xml document) and you should ignore it. **/
		HMxEsDegreeType getDegreeType() const
		{
			if( myDegreeType )
			{
				return myDegreeType;
			}
			else
			{
				return std::make_shared<HMxEsDegreeType>();
			}
		}

		/** Sets the internal shared pointer handle for the <DegreeType> element.
		     **/
		int setDegreeType( const HMxEsDegreeType& value_in )
		{
			myDegreeType = value_in;
		}

		/** Returns the minimum number of occurences of the <DegreeType> element.
		    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
		    the element is optional. **/
		int getDegreeTypeMinOccurs() const
		{
			return myDegreeType.getMinOccurs();
		}

		/** Returns the maximum number of occurences of the <DegreeType> element.
		    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
		    When the specification says 'unbounded' 'getIsDegreeTypeUnbounded'
		    will return 'true' and the return value of 'getDegreeTypeMaxOccurs'
		    should be ignored. **/
		int getDegreeTypeMaxOccurs() const
		{
			return myDegreeType.getMaxOccurs();
		}

		/** Returns 'true' if the specification says that the maximum number of
		    occurences of the <DegreeType> element is 'unbounded'.When this function
		    returns 'true', the value returned by 'getDegreeTypeMaxOccurs' should
		    be ignored. **/
		int getIsDegreeTypeUnbounded() const
		{
			return myDegreeType.getIsUnbounded();
		}

/* Stringing and Streaming ------------------------------------------------------------ */

		void stream( std::ostream& os_out, int indentcount_in, const char* indentchars_in ) const
		{
			return 0;
		}

	const int MxSeqSmpNode3245::Impl::myXsdID = 3245;
	const std::string MxSeqSmpNode3245::Impl::myXmlTypeName = "node-3245";
	const std::string MxSeqSmpNode3245::Impl::myCppClassName = "MxSeqSmpNode3245";
	const std::string MxSeqSmpNode3245::Impl::myDocumentation = "No XSD Documentation.";

	}; // struct MxSeqSmpNode3245::Impl

/* MxSeqSmpNode3245 ------------------------------------------------------------------- */

namespace lexicon
{

/* Constructor, Destructor, Copy, Assignment ------------------------------------------ */

	MxSeqSmpNode3245::MxSeqSmpNode3245()
	:myImpl( new Impl() ) {}

	MxSeqSmpNode3245::~MxSeqSmpNode3245() {}

	MxSeqSmpNode3245::MxSeqSmpNode3245( const MxSeqSmpNode3245& other )
	:myImpl( new Impl( *(other.myImpl) ) ) {}

	MxSeqSmpNode3245& MxSeqSmpNode3245::operator=( const MxSeqSmpNode3245& other )
	{
		this->myImpl = std::unique_ptr<Impl>( new Impl( *(other.myImpl) ) );
		return *this;
	}

/* defaultName ------------------------------------------------------------------------ */

	/** Returns the name of this xs:element as found in the musicxml.xsd document. **/
	std::string MxSeqSmpNode3245::getXmlTypeName()
	{
		return myImpl.getXmlTypeName();
	}

	/** Returns the name of this C++ class. **/
	std::string MxSeqSmpNode3245::getClassName()
	{
		return myImpl.getClassName();
	}

	/** Returns the documentation for this musicxml type as found in the musicxml.xsd
	    document. **/
	std::string MxSeqSmpNode3245::getDocumentation()
	{
		return myImpl.getDocumentation();
	}

/* DegreeValue Functions -------------------------------------------------------------- */

	/** Tells you whether or not <DegreeValue> is present. If <DegreeValue>
	    is required, this will always return 'true'. If <DegreeValue> is required,
	    no corresponding 'setIsDegreeValuePresent' will exist. **/
	bool MxSeqSmpNode3245::getIsDegreeValuePresent()
	{
		return myImpl.getIsDegreeValuePresent();
	}

	/** Returns a shared pointer handle to the <DegreeValue> element. Note
	    that if getIsDegreeValuePresent is false, this value will still exist
	    (even though it is not in the xml document) and you should ignore it. **/
	HMxEsDegreeValue MxSeqSmpNode3245::getDegreeValue()
	{
		return myImpl.getDegreeValue();
	}

	/** Sets the internal shared pointer handle for the <DegreeValue> element.
	     **/
	int MxSeqSmpNode3245::setDegreeValue()
	{
		return myImpl.setDegreeValue( value_in );
	}

	/** Returns the minimum number of occurences of the <DegreeValue> element.
	    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
	    the element is optional. **/
	int MxSeqSmpNode3245::getDegreeValueMinOccurs()
	{
		return myImpl.getDegreeValueMinOccurs();
	}

	/** Returns the maximum number of occurences of the <DegreeValue> element.
	    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
	    When the specification says 'unbounded' 'getIsDegreeValueUnbounded'
	    will return 'true' and the return value of 'getDegreeValueMaxOccurs'
	    should be ignored. **/
	int MxSeqSmpNode3245::getDegreeValueMaxOccurs()
	{
		return myImpl.getDegreeValueMaxOccurs();
	}

	/** Returns 'true' if the specification says that the maximum number of
	    occurences of the <DegreeValue> element is 'unbounded'.When this function
	    returns 'true', the value returned by 'getDegreeValueMaxOccurs' should
	    be ignored. **/
	int MxSeqSmpNode3245::getIsDegreeValueUnbounded()
	{
		return myImpl.getIsDegreeValueUnbounded();
	}

/* DegreeAlter Functions -------------------------------------------------------------- */

	/** Tells you whether or not <DegreeAlter> is present. If <DegreeAlter>
	    is required, this will always return 'true'. If <DegreeAlter> is required,
	    no corresponding 'setIsDegreeAlterPresent' will exist. **/
	bool MxSeqSmpNode3245::getIsDegreeAlterPresent()
	{
		return myImpl.getIsDegreeAlterPresent();
	}

	/** Returns a shared pointer handle to the <DegreeAlter> element. Note
	    that if getIsDegreeAlterPresent is false, this value will still exist
	    (even though it is not in the xml document) and you should ignore it. **/
	HMxEsDegreeAlter MxSeqSmpNode3245::getDegreeAlter()
	{
		return myImpl.getDegreeAlter();
	}

	/** Sets the internal shared pointer handle for the <DegreeAlter> element.
	     **/
	int MxSeqSmpNode3245::setDegreeAlter()
	{
		return myImpl.setDegreeAlter( value_in );
	}

	/** Returns the minimum number of occurences of the <DegreeAlter> element.
	    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
	    the element is optional. **/
	int MxSeqSmpNode3245::getDegreeAlterMinOccurs()
	{
		return myImpl.getDegreeAlterMinOccurs();
	}

	/** Returns the maximum number of occurences of the <DegreeAlter> element.
	    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
	    When the specification says 'unbounded' 'getIsDegreeAlterUnbounded'
	    will return 'true' and the return value of 'getDegreeAlterMaxOccurs'
	    should be ignored. **/
	int MxSeqSmpNode3245::getDegreeAlterMaxOccurs()
	{
		return myImpl.getDegreeAlterMaxOccurs();
	}

	/** Returns 'true' if the specification says that the maximum number of
	    occurences of the <DegreeAlter> element is 'unbounded'.When this function
	    returns 'true', the value returned by 'getDegreeAlterMaxOccurs' should
	    be ignored. **/
	int MxSeqSmpNode3245::getIsDegreeAlterUnbounded()
	{
		return myImpl.getIsDegreeAlterUnbounded();
	}

/* DegreeType Functions --------------------------------------------------------------- */

	/** Tells you whether or not <DegreeType> is present. If <DegreeType> is
	    required, this will always return 'true'. If <DegreeType> is required,
	    no corresponding 'setIsDegreeTypePresent' will exist. **/
	bool MxSeqSmpNode3245::getIsDegreeTypePresent()
	{
		return myImpl.getIsDegreeTypePresent();
	}

	/** Returns a shared pointer handle to the <DegreeType> element. Note that
	    if getIsDegreeTypePresent is false, this value will still exist (even
	    though it is not in the xml document) and you should ignore it. **/
	HMxEsDegreeType MxSeqSmpNode3245::getDegreeType()
	{
		return myImpl.getDegreeType();
	}

	/** Sets the internal shared pointer handle for the <DegreeType> element.
	     **/
	int MxSeqSmpNode3245::setDegreeType()
	{
		return myImpl.setDegreeType( value_in );
	}

	/** Returns the minimum number of occurences of the <DegreeType> element.
	    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
	    the element is optional. **/
	int MxSeqSmpNode3245::getDegreeTypeMinOccurs()
	{
		return myImpl.getDegreeTypeMinOccurs();
	}

	/** Returns the maximum number of occurences of the <DegreeType> element.
	    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
	    When the specification says 'unbounded' 'getIsDegreeTypeUnbounded'
	    will return 'true' and the return value of 'getDegreeTypeMaxOccurs'
	    should be ignored. **/
	int MxSeqSmpNode3245::getDegreeTypeMaxOccurs()
	{
		return myImpl.getDegreeTypeMaxOccurs();
	}

	/** Returns 'true' if the specification says that the maximum number of
	    occurences of the <DegreeType> element is 'unbounded'.When this function
	    returns 'true', the value returned by 'getDegreeTypeMaxOccurs' should
	    be ignored. **/
	int MxSeqSmpNode3245::getIsDegreeTypeUnbounded()
	{
		return myImpl.getIsDegreeTypeUnbounded();
	}

/* Stringing and Streaming ------------------------------------------------------------ */

	void MxSeqSmpNode3245::stream()
	{
		myImpl.stream( os_outindentcount_inindentchars_in );
	}


} // namespace lexicon

