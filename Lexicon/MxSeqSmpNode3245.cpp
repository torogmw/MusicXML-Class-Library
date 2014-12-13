/**
  * @file       MxSeqSmpNode3245.cpp
  * @class      lexicon::MxSeqSmpNode3245
  * @author     Matthew James Briggs
  * @email      matthew.james.briggs@gmail.com
  * @url        http://matthewjamesbriggs.com
  * @date       2014-12-12 16:19:47
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
		:myDegreeValue( std::make_shared<MxEsDegreeValue>() )
		,myIsDegreeValuePresent( true )
		,myDegreeAlter( std::make_shared<MxEsDegreeAlter>() )
		,myIsDegreeAlterPresent( true )
		,myDegreeType( std::make_shared<MxEsDegreeType>() )
		,myIsDegreeTypePresent( true )
		{}

	private:
		HMxEsDegreeValue myDegreeValue;
		bool myIsDegreeValuePresent;
		HMxEsDegreeAlter myDegreeAlter;
		bool myIsDegreeAlterPresent;
		HMxEsDegreeType myDegreeType;
		bool myIsDegreeTypePresent;
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

/* DegreeValue Functions -------------------------------------------------------------- */

		/** Tells you whether or not <DegreeValue> is present. If <DegreeValue>
		    is required, this will always return 'true'. If <DegreeValue> is required,
		    no corresponding 'setIsDegreeValuePresent' will exist. **/
		bool getIsDegreeValuePresent() const
		{
			return myIsDegreeValuePresent;
		}

		/** Returns a shared pointer handle to the <DegreeValue> element. Note
		    that if getIsDegreeValuePresent is false, this value will still exist
		    (even though it is not in the xml document) and you should ignore it. **/
		HMxEsDegreeValue getDegreeValue() const
		{
			return myDegreeValue;
			
		}

		/** Sets the internal shared pointer handle for the <DegreeValue> element.
		     **/
		void setDegreeValue( const HMxEsDegreeValue& value_in )
		{
			myDegreeValue = value_in;
		}

		/** Returns the minimum number of occurences of the <DegreeValue> element.
		    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
		    the element is optional. **/
		int getDegreeValueMinOccurs() const
		{
			return myDegreeValue->getMinOccurs();
		}

		/** Returns the maximum number of occurences of the <DegreeValue> element.
		    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
		    When the specification says 'unbounded' 'getIsDegreeValueUnbounded'
		    will return 'true' and the return value of 'getDegreeValueMaxOccurs'
		    should be ignored. **/
		int getDegreeValueMaxOccurs() const
		{
			return myDegreeValue->getMaxOccurs();
		}

		/** Returns 'true' if the specification says that the maximum number of
		    occurences of the <DegreeValue> element is 'unbounded'.When this function
		    returns 'true', the value returned by 'getDegreeValueMaxOccurs' should
		    be ignored. **/
		bool getIsDegreeValueUnbounded() const
		{
			return myDegreeValue->getIsMaxOccursUnbounded();
		}

/* DegreeAlter Functions -------------------------------------------------------------- */

		/** Tells you whether or not <DegreeAlter> is present. If <DegreeAlter>
		    is required, this will always return 'true'. If <DegreeAlter> is required,
		    no corresponding 'setIsDegreeAlterPresent' will exist. **/
		bool getIsDegreeAlterPresent() const
		{
			return myIsDegreeAlterPresent;
		}

		/** Returns a shared pointer handle to the <DegreeAlter> element. Note
		    that if getIsDegreeAlterPresent is false, this value will still exist
		    (even though it is not in the xml document) and you should ignore it. **/
		HMxEsDegreeAlter getDegreeAlter() const
		{
			return myDegreeAlter;
			
		}

		/** Sets the internal shared pointer handle for the <DegreeAlter> element.
		     **/
		void setDegreeAlter( const HMxEsDegreeAlter& value_in )
		{
			myDegreeAlter = value_in;
		}

		/** Returns the minimum number of occurences of the <DegreeAlter> element.
		    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
		    the element is optional. **/
		int getDegreeAlterMinOccurs() const
		{
			return myDegreeAlter->getMinOccurs();
		}

		/** Returns the maximum number of occurences of the <DegreeAlter> element.
		    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
		    When the specification says 'unbounded' 'getIsDegreeAlterUnbounded'
		    will return 'true' and the return value of 'getDegreeAlterMaxOccurs'
		    should be ignored. **/
		int getDegreeAlterMaxOccurs() const
		{
			return myDegreeAlter->getMaxOccurs();
		}

		/** Returns 'true' if the specification says that the maximum number of
		    occurences of the <DegreeAlter> element is 'unbounded'.When this function
		    returns 'true', the value returned by 'getDegreeAlterMaxOccurs' should
		    be ignored. **/
		bool getIsDegreeAlterUnbounded() const
		{
			return myDegreeAlter->getIsMaxOccursUnbounded();
		}

/* DegreeType Functions --------------------------------------------------------------- */

		/** Tells you whether or not <DegreeType> is present. If <DegreeType> is
		    required, this will always return 'true'. If <DegreeType> is required,
		    no corresponding 'setIsDegreeTypePresent' will exist. **/
		bool getIsDegreeTypePresent() const
		{
			return myIsDegreeTypePresent;
		}

		/** Returns a shared pointer handle to the <DegreeType> element. Note that
		    if getIsDegreeTypePresent is false, this value will still exist (even
		    though it is not in the xml document) and you should ignore it. **/
		HMxEsDegreeType getDegreeType() const
		{
			return myDegreeType;
			
		}

		/** Sets the internal shared pointer handle for the <DegreeType> element.
		     **/
		void setDegreeType( const HMxEsDegreeType& value_in )
		{
			myDegreeType = value_in;
		}

		/** Returns the minimum number of occurences of the <DegreeType> element.
		    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
		    the element is optional. **/
		int getDegreeTypeMinOccurs() const
		{
			return myDegreeType->getMinOccurs();
		}

		/** Returns the maximum number of occurences of the <DegreeType> element.
		    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
		    When the specification says 'unbounded' 'getIsDegreeTypeUnbounded'
		    will return 'true' and the return value of 'getDegreeTypeMaxOccurs'
		    should be ignored. **/
		int getDegreeTypeMaxOccurs() const
		{
			return myDegreeType->getMaxOccurs();
		}

		/** Returns 'true' if the specification says that the maximum number of
		    occurences of the <DegreeType> element is 'unbounded'.When this function
		    returns 'true', the value returned by 'getDegreeTypeMaxOccurs' should
		    be ignored. **/
		bool getIsDegreeTypeUnbounded() const
		{
			return myDegreeType->getIsMaxOccursUnbounded();
		}

/* Stringing and Streaming ------------------------------------------------------------ */

		std::ostream& stream( std::ostream& os_out, int indentcount_in, const char* indentchars_in ) const
		{
			throw "todo: write the code.";
		}

	}; // struct MxSeqSmpNode3245::Impl

	const int MxSeqSmpNode3245::Impl::myXsdID = 3245;
	const std::string MxSeqSmpNode3245::Impl::myXmlTypeName = "node-3245";
	const std::string MxSeqSmpNode3245::Impl::myCppClassName = "MxSeqSmpNode3245";
	const std::string MxSeqSmpNode3245::Impl::myDocumentation = "No XSD Documentation.";

/* MxSeqSmpNode3245 ------------------------------------------------------------------- */


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
	std::string MxSeqSmpNode3245::getXmlTypeName() const
	{
		return myImpl->getXmlTypeName();
	}

	/** Returns the name of this C++ class. **/
	std::string MxSeqSmpNode3245::getClassName() const
	{
		return myImpl->getClassName();
	}

	/** Returns the documentation for this musicxml type as found in the musicxml.xsd
	    document. **/
	std::string MxSeqSmpNode3245::getDocumentation() const
	{
		return myImpl->getDocumentation();
	}

/* DegreeValue Functions -------------------------------------------------------------- */

	/** Tells you whether or not <DegreeValue> is present. If <DegreeValue>
	    is required, this will always return 'true'. If <DegreeValue> is required,
	    no corresponding 'setIsDegreeValuePresent' will exist. **/
	bool MxSeqSmpNode3245::getIsDegreeValuePresent() const
	{
		return myImpl->getIsDegreeValuePresent();
	}

	/** Returns a shared pointer handle to the <DegreeValue> element. Note
	    that if getIsDegreeValuePresent is false, this value will still exist
	    (even though it is not in the xml document) and you should ignore it. **/
	HMxEsDegreeValue MxSeqSmpNode3245::getDegreeValue() const
	{
		return myImpl->getDegreeValue();
	}

	/** Sets the internal shared pointer handle for the <DegreeValue> element.
	     **/
	void MxSeqSmpNode3245::setDegreeValue( const HMxEsDegreeValue& value_in )
	{
		myImpl->setDegreeValue( value_in );
	}

	/** Returns the minimum number of occurences of the <DegreeValue> element.
	    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
	    the element is optional. **/
	int MxSeqSmpNode3245::getDegreeValueMinOccurs() const
	{
		return myImpl->getDegreeValueMinOccurs();
	}

	/** Returns the maximum number of occurences of the <DegreeValue> element.
	    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
	    When the specification says 'unbounded' 'getIsDegreeValueUnbounded'
	    will return 'true' and the return value of 'getDegreeValueMaxOccurs'
	    should be ignored. **/
	int MxSeqSmpNode3245::getDegreeValueMaxOccurs() const
	{
		return myImpl->getDegreeValueMaxOccurs();
	}

	/** Returns 'true' if the specification says that the maximum number of
	    occurences of the <DegreeValue> element is 'unbounded'.When this function
	    returns 'true', the value returned by 'getDegreeValueMaxOccurs' should
	    be ignored. **/
	bool MxSeqSmpNode3245::getIsDegreeValueUnbounded() const
	{
		return myImpl->getIsDegreeValueUnbounded();
	}

/* DegreeAlter Functions -------------------------------------------------------------- */

	/** Tells you whether or not <DegreeAlter> is present. If <DegreeAlter>
	    is required, this will always return 'true'. If <DegreeAlter> is required,
	    no corresponding 'setIsDegreeAlterPresent' will exist. **/
	bool MxSeqSmpNode3245::getIsDegreeAlterPresent() const
	{
		return myImpl->getIsDegreeAlterPresent();
	}

	/** Returns a shared pointer handle to the <DegreeAlter> element. Note
	    that if getIsDegreeAlterPresent is false, this value will still exist
	    (even though it is not in the xml document) and you should ignore it. **/
	HMxEsDegreeAlter MxSeqSmpNode3245::getDegreeAlter() const
	{
		return myImpl->getDegreeAlter();
	}

	/** Sets the internal shared pointer handle for the <DegreeAlter> element.
	     **/
	void MxSeqSmpNode3245::setDegreeAlter( const HMxEsDegreeAlter& value_in )
	{
		myImpl->setDegreeAlter( value_in );
	}

	/** Returns the minimum number of occurences of the <DegreeAlter> element.
	    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
	    the element is optional. **/
	int MxSeqSmpNode3245::getDegreeAlterMinOccurs() const
	{
		return myImpl->getDegreeAlterMinOccurs();
	}

	/** Returns the maximum number of occurences of the <DegreeAlter> element.
	    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
	    When the specification says 'unbounded' 'getIsDegreeAlterUnbounded'
	    will return 'true' and the return value of 'getDegreeAlterMaxOccurs'
	    should be ignored. **/
	int MxSeqSmpNode3245::getDegreeAlterMaxOccurs() const
	{
		return myImpl->getDegreeAlterMaxOccurs();
	}

	/** Returns 'true' if the specification says that the maximum number of
	    occurences of the <DegreeAlter> element is 'unbounded'.When this function
	    returns 'true', the value returned by 'getDegreeAlterMaxOccurs' should
	    be ignored. **/
	bool MxSeqSmpNode3245::getIsDegreeAlterUnbounded() const
	{
		return myImpl->getIsDegreeAlterUnbounded();
	}

/* DegreeType Functions --------------------------------------------------------------- */

	/** Tells you whether or not <DegreeType> is present. If <DegreeType> is
	    required, this will always return 'true'. If <DegreeType> is required,
	    no corresponding 'setIsDegreeTypePresent' will exist. **/
	bool MxSeqSmpNode3245::getIsDegreeTypePresent() const
	{
		return myImpl->getIsDegreeTypePresent();
	}

	/** Returns a shared pointer handle to the <DegreeType> element. Note that
	    if getIsDegreeTypePresent is false, this value will still exist (even
	    though it is not in the xml document) and you should ignore it. **/
	HMxEsDegreeType MxSeqSmpNode3245::getDegreeType() const
	{
		return myImpl->getDegreeType();
	}

	/** Sets the internal shared pointer handle for the <DegreeType> element.
	     **/
	void MxSeqSmpNode3245::setDegreeType( const HMxEsDegreeType& value_in )
	{
		myImpl->setDegreeType( value_in );
	}

	/** Returns the minimum number of occurences of the <DegreeType> element.
	    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
	    the element is optional. **/
	int MxSeqSmpNode3245::getDegreeTypeMinOccurs() const
	{
		return myImpl->getDegreeTypeMinOccurs();
	}

	/** Returns the maximum number of occurences of the <DegreeType> element.
	    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
	    When the specification says 'unbounded' 'getIsDegreeTypeUnbounded'
	    will return 'true' and the return value of 'getDegreeTypeMaxOccurs'
	    should be ignored. **/
	int MxSeqSmpNode3245::getDegreeTypeMaxOccurs() const
	{
		return myImpl->getDegreeTypeMaxOccurs();
	}

	/** Returns 'true' if the specification says that the maximum number of
	    occurences of the <DegreeType> element is 'unbounded'.When this function
	    returns 'true', the value returned by 'getDegreeTypeMaxOccurs' should
	    be ignored. **/
	bool MxSeqSmpNode3245::getIsDegreeTypeUnbounded() const
	{
		return myImpl->getIsDegreeTypeUnbounded();
	}

/* Stringing and Streaming ------------------------------------------------------------ */

	std::ostream& MxSeqSmpNode3245::stream( std::ostream& os_out, int indentcount_in, const char* indentchars_in ) const
	{
		return myImpl->stream( os_out, indentcount_in, indentchars_in );
	}


} // namespace lexicon

