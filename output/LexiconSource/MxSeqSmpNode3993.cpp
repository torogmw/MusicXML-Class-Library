/**
  * @file       MxSeqSmpNode3993.cpp
  * @class      lexicon::MxSeqSmpNode3993
  * @author     Matthew James Briggs
  * @email      matthew.james.briggs@gmail.com
  * @url        http://matthewjamesbriggs.com
  * @date       2014-12-11 16:20:30
  * @project    Lexicon
  * @version    1.0
  * @musicxmlid 3993
  * 
  * @brief This class represents an xs:sequence object from musicxml.xsd.
  * 
  * Full description goes here.
  * 
 **/

#include "MxSeqSmpNode3993.h"

/* Impl ------------------------------------------------------------------------------- */

namespace lexicon
{
	struct MxSeqSmpNode3993::Impl
	{
		Impl()
		{}

	private:
		HMxEmStickType myStickType;
		bool myStickTypeIsPresent;
		HMxEmStickMaterial myStickMaterial;
		bool myStickMaterialIsPresent;
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

/* StickType Functions ---------------------------------------------------------------- */

		/** Tells you whether or not <StickType> is present. If <StickType> is
		    required, this will always return 'true'. If <StickType> is required,
		    no corresponding 'setIsStickTypePresent' will exist. **/
		bool getIsStickTypePresent() const
		{
			return 0;
		}

		/** Returns a shared pointer handle to the <StickType> element. Note that
		    if getIsStickTypePresent is false, this value will still exist (even
		    though it is not in the xml document) and you should ignore it. **/
		HMxEmStickType getStickType() const
		{
			if( myStickType )
			{
				return myStickType;
			}
			else
			{
				return std::make_shared<HMxEmStickType>();
			}
		}

		/** Sets the internal shared pointer handle for the <StickType> element.
		     **/
		int setStickType( const HMxEmStickType& value_in )
		{
			myStickType = value_in;
		}

		/** Returns the minimum number of occurences of the <StickType> element.
		    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
		    the element is optional. **/
		int getStickTypeMinOccurs() const
		{
			return myStickType.getMinOccurs();
		}

		/** Returns the maximum number of occurences of the <StickType> element.
		    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
		    When the specification says 'unbounded' 'getIsStickTypeUnbounded' will
		    return 'true' and the return value of 'getStickTypeMaxOccurs' should
		    be ignored. **/
		int getStickTypeMaxOccurs() const
		{
			return myStickType.getMaxOccurs();
		}

		/** Returns 'true' if the specification says that the maximum number of
		    occurences of the <StickType> element is 'unbounded'.When this function
		    returns 'true', the value returned by 'getStickTypeMaxOccurs' should
		    be ignored. **/
		int getIsStickTypeUnbounded() const
		{
			return myStickType.getIsUnbounded();
		}

/* StickMaterial Functions ------------------------------------------------------------ */

		/** Tells you whether or not <StickMaterial> is present. If <StickMaterial>
		    is required, this will always return 'true'. If <StickMaterial> is
		    required, no corresponding 'setIsStickMaterialPresent' will exist. **/
		bool getIsStickMaterialPresent() const
		{
			return 0;
		}

		/** Returns a shared pointer handle to the <StickMaterial> element. Note
		    that if getIsStickMaterialPresent is false, this value will still exist
		    (even though it is not in the xml document) and you should ignore it. **/
		HMxEmStickMaterial getStickMaterial() const
		{
			if( myStickMaterial )
			{
				return myStickMaterial;
			}
			else
			{
				return std::make_shared<HMxEmStickMaterial>();
			}
		}

		/** Sets the internal shared pointer handle for the <StickMaterial> element.
		     **/
		int setStickMaterial( const HMxEmStickMaterial& value_in )
		{
			myStickMaterial = value_in;
		}

		/** Returns the minimum number of occurences of the <StickMaterial> element.
		    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
		    the element is optional. **/
		int getStickMaterialMinOccurs() const
		{
			return myStickMaterial.getMinOccurs();
		}

		/** Returns the maximum number of occurences of the <StickMaterial> element.
		    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
		    When the specification says 'unbounded' 'getIsStickMaterialUnbounded'
		    will return 'true' and the return value of 'getStickMaterialMaxOccurs'
		    should be ignored. **/
		int getStickMaterialMaxOccurs() const
		{
			return myStickMaterial.getMaxOccurs();
		}

		/** Returns 'true' if the specification says that the maximum number of
		    occurences of the <StickMaterial> element is 'unbounded'.When this
		    function returns 'true', the value returned by 'getStickMaterialMaxOccurs'
		    should be ignored. **/
		int getIsStickMaterialUnbounded() const
		{
			return myStickMaterial.getIsUnbounded();
		}

/* Stringing and Streaming ------------------------------------------------------------ */

		void stream( std::ostream& os_out, int indentcount_in, const char* indentchars_in ) const
		{
			return 0;
		}

	const int MxSeqSmpNode3993::Impl::myXsdID = 3993;
	const std::string MxSeqSmpNode3993::Impl::myXmlTypeName = "node-3993";
	const std::string MxSeqSmpNode3993::Impl::myCppClassName = "MxSeqSmpNode3993";
	const std::string MxSeqSmpNode3993::Impl::myDocumentation = "No XSD Documentation.";

	}; // struct MxSeqSmpNode3993::Impl

/* MxSeqSmpNode3993 ------------------------------------------------------------------- */

namespace lexicon
{

/* Constructor, Destructor, Copy, Assignment ------------------------------------------ */

	MxSeqSmpNode3993::MxSeqSmpNode3993()
	:myImpl( new Impl() ) {}

	MxSeqSmpNode3993::~MxSeqSmpNode3993() {}

	MxSeqSmpNode3993::MxSeqSmpNode3993( const MxSeqSmpNode3993& other )
	:myImpl( new Impl( *(other.myImpl) ) ) {}

	MxSeqSmpNode3993& MxSeqSmpNode3993::operator=( const MxSeqSmpNode3993& other )
	{
		this->myImpl = std::unique_ptr<Impl>( new Impl( *(other.myImpl) ) );
		return *this;
	}

/* defaultName ------------------------------------------------------------------------ */

	/** Returns the name of this xs:element as found in the musicxml.xsd document. **/
	std::string MxSeqSmpNode3993::getXmlTypeName()
	{
		return myImpl.getXmlTypeName();
	}

	/** Returns the name of this C++ class. **/
	std::string MxSeqSmpNode3993::getClassName()
	{
		return myImpl.getClassName();
	}

	/** Returns the documentation for this musicxml type as found in the musicxml.xsd
	    document. **/
	std::string MxSeqSmpNode3993::getDocumentation()
	{
		return myImpl.getDocumentation();
	}

/* StickType Functions ---------------------------------------------------------------- */

	/** Tells you whether or not <StickType> is present. If <StickType> is
	    required, this will always return 'true'. If <StickType> is required,
	    no corresponding 'setIsStickTypePresent' will exist. **/
	bool MxSeqSmpNode3993::getIsStickTypePresent()
	{
		return myImpl.getIsStickTypePresent();
	}

	/** Returns a shared pointer handle to the <StickType> element. Note that
	    if getIsStickTypePresent is false, this value will still exist (even
	    though it is not in the xml document) and you should ignore it. **/
	HMxEmStickType MxSeqSmpNode3993::getStickType()
	{
		return myImpl.getStickType();
	}

	/** Sets the internal shared pointer handle for the <StickType> element.
	     **/
	int MxSeqSmpNode3993::setStickType()
	{
		return myImpl.setStickType( value_in );
	}

	/** Returns the minimum number of occurences of the <StickType> element.
	    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
	    the element is optional. **/
	int MxSeqSmpNode3993::getStickTypeMinOccurs()
	{
		return myImpl.getStickTypeMinOccurs();
	}

	/** Returns the maximum number of occurences of the <StickType> element.
	    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
	    When the specification says 'unbounded' 'getIsStickTypeUnbounded' will
	    return 'true' and the return value of 'getStickTypeMaxOccurs' should
	    be ignored. **/
	int MxSeqSmpNode3993::getStickTypeMaxOccurs()
	{
		return myImpl.getStickTypeMaxOccurs();
	}

	/** Returns 'true' if the specification says that the maximum number of
	    occurences of the <StickType> element is 'unbounded'.When this function
	    returns 'true', the value returned by 'getStickTypeMaxOccurs' should
	    be ignored. **/
	int MxSeqSmpNode3993::getIsStickTypeUnbounded()
	{
		return myImpl.getIsStickTypeUnbounded();
	}

/* StickMaterial Functions ------------------------------------------------------------ */

	/** Tells you whether or not <StickMaterial> is present. If <StickMaterial>
	    is required, this will always return 'true'. If <StickMaterial> is
	    required, no corresponding 'setIsStickMaterialPresent' will exist. **/
	bool MxSeqSmpNode3993::getIsStickMaterialPresent()
	{
		return myImpl.getIsStickMaterialPresent();
	}

	/** Returns a shared pointer handle to the <StickMaterial> element. Note
	    that if getIsStickMaterialPresent is false, this value will still exist
	    (even though it is not in the xml document) and you should ignore it. **/
	HMxEmStickMaterial MxSeqSmpNode3993::getStickMaterial()
	{
		return myImpl.getStickMaterial();
	}

	/** Sets the internal shared pointer handle for the <StickMaterial> element.
	     **/
	int MxSeqSmpNode3993::setStickMaterial()
	{
		return myImpl.setStickMaterial( value_in );
	}

	/** Returns the minimum number of occurences of the <StickMaterial> element.
	    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
	    the element is optional. **/
	int MxSeqSmpNode3993::getStickMaterialMinOccurs()
	{
		return myImpl.getStickMaterialMinOccurs();
	}

	/** Returns the maximum number of occurences of the <StickMaterial> element.
	    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
	    When the specification says 'unbounded' 'getIsStickMaterialUnbounded'
	    will return 'true' and the return value of 'getStickMaterialMaxOccurs'
	    should be ignored. **/
	int MxSeqSmpNode3993::getStickMaterialMaxOccurs()
	{
		return myImpl.getStickMaterialMaxOccurs();
	}

	/** Returns 'true' if the specification says that the maximum number of
	    occurences of the <StickMaterial> element is 'unbounded'.When this
	    function returns 'true', the value returned by 'getStickMaterialMaxOccurs'
	    should be ignored. **/
	int MxSeqSmpNode3993::getIsStickMaterialUnbounded()
	{
		return myImpl.getIsStickMaterialUnbounded();
	}

/* Stringing and Streaming ------------------------------------------------------------ */

	void MxSeqSmpNode3993::stream()
	{
		myImpl.stream( os_outindentcount_inindentchars_in );
	}


} // namespace lexicon

