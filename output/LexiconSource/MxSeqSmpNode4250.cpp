/**
  * @file       MxSeqSmpNode4250.cpp
  * @class      lexicon::MxSeqSmpNode4250
  * @author     Matthew James Briggs
  * @email      matthew.james.briggs@gmail.com
  * @url        http://matthewjamesbriggs.com
  * @date       2014-12-11 16:20:35
  * @project    Lexicon
  * @version    1.0
  * @musicxmlid 4250
  * 
  * @brief This class represents an xs:sequence object from musicxml.xsd.
  * 
  * Full description goes here.
  * 
 **/

#include "MxSeqSmpNode4250.h"

/* Impl ------------------------------------------------------------------------------- */

namespace lexicon
{
	struct MxSeqSmpNode4250::Impl
	{
		Impl()
		{}

	private:
		HMxEmMillimeters myMillimeters;
		bool myMillimetersIsPresent;
		HMxEmTenths myTenths;
		bool myTenthsIsPresent;
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

/* Millimeters Functions -------------------------------------------------------------- */

		/** Tells you whether or not <Millimeters> is present. If <Millimeters>
		    is required, this will always return 'true'. If <Millimeters> is required,
		    no corresponding 'setIsMillimetersPresent' will exist. **/
		bool getIsMillimetersPresent() const
		{
			return 0;
		}

		/** Returns a shared pointer handle to the <Millimeters> element. Note
		    that if getIsMillimetersPresent is false, this value will still exist
		    (even though it is not in the xml document) and you should ignore it. **/
		HMxEmMillimeters getMillimeters() const
		{
			if( myMillimeters )
			{
				return myMillimeters;
			}
			else
			{
				return std::make_shared<HMxEmMillimeters>();
			}
		}

		/** Sets the internal shared pointer handle for the <Millimeters> element.
		     **/
		int setMillimeters( const HMxEmMillimeters& value_in )
		{
			myMillimeters = value_in;
		}

		/** Returns the minimum number of occurences of the <Millimeters> element.
		    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
		    the element is optional. **/
		int getMillimetersMinOccurs() const
		{
			return myMillimeters.getMinOccurs();
		}

		/** Returns the maximum number of occurences of the <Millimeters> element.
		    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
		    When the specification says 'unbounded' 'getIsMillimetersUnbounded'
		    will return 'true' and the return value of 'getMillimetersMaxOccurs'
		    should be ignored. **/
		int getMillimetersMaxOccurs() const
		{
			return myMillimeters.getMaxOccurs();
		}

		/** Returns 'true' if the specification says that the maximum number of
		    occurences of the <Millimeters> element is 'unbounded'.When this function
		    returns 'true', the value returned by 'getMillimetersMaxOccurs' should
		    be ignored. **/
		int getIsMillimetersUnbounded() const
		{
			return myMillimeters.getIsUnbounded();
		}

/* Tenths Functions ------------------------------------------------------------------- */

		/** Tells you whether or not <Tenths> is present. If <Tenths> is required,
		    this will always return 'true'. If <Tenths> is required, no corresponding
		    'setIsTenthsPresent' will exist. **/
		bool getIsTenthsPresent() const
		{
			return 0;
		}

		/** Returns a shared pointer handle to the <Tenths> element. Note that
		    if getIsTenthsPresent is false, this value will still exist (even though
		    it is not in the xml document) and you should ignore it. **/
		HMxEmTenths getTenths() const
		{
			if( myTenths )
			{
				return myTenths;
			}
			else
			{
				return std::make_shared<HMxEmTenths>();
			}
		}

		/** Sets the internal shared pointer handle for the <Tenths> element.  **/
		int setTenths( const HMxEmTenths& value_in )
		{
			myTenths = value_in;
		}

		/** Returns the minimum number of occurences of the <Tenths> element. 
		    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
		    the element is optional. **/
		int getTenthsMinOccurs() const
		{
			return myTenths.getMinOccurs();
		}

		/** Returns the maximum number of occurences of the <Tenths> element. Typically
		    the MaxOccurs is specified as either '1' or 'unbounded'.  When the
		    specification says 'unbounded' 'getIsTenthsUnbounded' will return 'true'
		    and the return value of 'getTenthsMaxOccurs' should be ignored. **/
		int getTenthsMaxOccurs() const
		{
			return myTenths.getMaxOccurs();
		}

		/** Returns 'true' if the specification says that the maximum number of
		    occurences of the <Tenths> element is 'unbounded'.When this function
		    returns 'true', the value returned by 'getTenthsMaxOccurs' should be
		    ignored. **/
		int getIsTenthsUnbounded() const
		{
			return myTenths.getIsUnbounded();
		}

/* Stringing and Streaming ------------------------------------------------------------ */

		void stream( std::ostream& os_out, int indentcount_in, const char* indentchars_in ) const
		{
			return 0;
		}

	const int MxSeqSmpNode4250::Impl::myXsdID = 4250;
	const std::string MxSeqSmpNode4250::Impl::myXmlTypeName = "node-4250";
	const std::string MxSeqSmpNode4250::Impl::myCppClassName = "MxSeqSmpNode4250";
	const std::string MxSeqSmpNode4250::Impl::myDocumentation = "No XSD Documentation.";

	}; // struct MxSeqSmpNode4250::Impl

/* MxSeqSmpNode4250 ------------------------------------------------------------------- */

namespace lexicon
{

/* Constructor, Destructor, Copy, Assignment ------------------------------------------ */

	MxSeqSmpNode4250::MxSeqSmpNode4250()
	:myImpl( new Impl() ) {}

	MxSeqSmpNode4250::~MxSeqSmpNode4250() {}

	MxSeqSmpNode4250::MxSeqSmpNode4250( const MxSeqSmpNode4250& other )
	:myImpl( new Impl( *(other.myImpl) ) ) {}

	MxSeqSmpNode4250& MxSeqSmpNode4250::operator=( const MxSeqSmpNode4250& other )
	{
		this->myImpl = std::unique_ptr<Impl>( new Impl( *(other.myImpl) ) );
		return *this;
	}

/* defaultName ------------------------------------------------------------------------ */

	/** Returns the name of this xs:element as found in the musicxml.xsd document. **/
	std::string MxSeqSmpNode4250::getXmlTypeName()
	{
		return myImpl.getXmlTypeName();
	}

	/** Returns the name of this C++ class. **/
	std::string MxSeqSmpNode4250::getClassName()
	{
		return myImpl.getClassName();
	}

	/** Returns the documentation for this musicxml type as found in the musicxml.xsd
	    document. **/
	std::string MxSeqSmpNode4250::getDocumentation()
	{
		return myImpl.getDocumentation();
	}

/* Millimeters Functions -------------------------------------------------------------- */

	/** Tells you whether or not <Millimeters> is present. If <Millimeters>
	    is required, this will always return 'true'. If <Millimeters> is required,
	    no corresponding 'setIsMillimetersPresent' will exist. **/
	bool MxSeqSmpNode4250::getIsMillimetersPresent()
	{
		return myImpl.getIsMillimetersPresent();
	}

	/** Returns a shared pointer handle to the <Millimeters> element. Note
	    that if getIsMillimetersPresent is false, this value will still exist
	    (even though it is not in the xml document) and you should ignore it. **/
	HMxEmMillimeters MxSeqSmpNode4250::getMillimeters()
	{
		return myImpl.getMillimeters();
	}

	/** Sets the internal shared pointer handle for the <Millimeters> element.
	     **/
	int MxSeqSmpNode4250::setMillimeters()
	{
		return myImpl.setMillimeters( value_in );
	}

	/** Returns the minimum number of occurences of the <Millimeters> element.
	    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
	    the element is optional. **/
	int MxSeqSmpNode4250::getMillimetersMinOccurs()
	{
		return myImpl.getMillimetersMinOccurs();
	}

	/** Returns the maximum number of occurences of the <Millimeters> element.
	    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
	    When the specification says 'unbounded' 'getIsMillimetersUnbounded'
	    will return 'true' and the return value of 'getMillimetersMaxOccurs'
	    should be ignored. **/
	int MxSeqSmpNode4250::getMillimetersMaxOccurs()
	{
		return myImpl.getMillimetersMaxOccurs();
	}

	/** Returns 'true' if the specification says that the maximum number of
	    occurences of the <Millimeters> element is 'unbounded'.When this function
	    returns 'true', the value returned by 'getMillimetersMaxOccurs' should
	    be ignored. **/
	int MxSeqSmpNode4250::getIsMillimetersUnbounded()
	{
		return myImpl.getIsMillimetersUnbounded();
	}

/* Tenths Functions ------------------------------------------------------------------- */

	/** Tells you whether or not <Tenths> is present. If <Tenths> is required,
	    this will always return 'true'. If <Tenths> is required, no corresponding
	    'setIsTenthsPresent' will exist. **/
	bool MxSeqSmpNode4250::getIsTenthsPresent()
	{
		return myImpl.getIsTenthsPresent();
	}

	/** Returns a shared pointer handle to the <Tenths> element. Note that
	    if getIsTenthsPresent is false, this value will still exist (even though
	    it is not in the xml document) and you should ignore it. **/
	HMxEmTenths MxSeqSmpNode4250::getTenths()
	{
		return myImpl.getTenths();
	}

	/** Sets the internal shared pointer handle for the <Tenths> element.  **/
	int MxSeqSmpNode4250::setTenths()
	{
		return myImpl.setTenths( value_in );
	}

	/** Returns the minimum number of occurences of the <Tenths> element. 
	    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
	    the element is optional. **/
	int MxSeqSmpNode4250::getTenthsMinOccurs()
	{
		return myImpl.getTenthsMinOccurs();
	}

	/** Returns the maximum number of occurences of the <Tenths> element. Typically
	    the MaxOccurs is specified as either '1' or 'unbounded'.  When the
	    specification says 'unbounded' 'getIsTenthsUnbounded' will return 'true'
	    and the return value of 'getTenthsMaxOccurs' should be ignored. **/
	int MxSeqSmpNode4250::getTenthsMaxOccurs()
	{
		return myImpl.getTenthsMaxOccurs();
	}

	/** Returns 'true' if the specification says that the maximum number of
	    occurences of the <Tenths> element is 'unbounded'.When this function
	    returns 'true', the value returned by 'getTenthsMaxOccurs' should be
	    ignored. **/
	int MxSeqSmpNode4250::getIsTenthsUnbounded()
	{
		return myImpl.getIsTenthsUnbounded();
	}

/* Stringing and Streaming ------------------------------------------------------------ */

	void MxSeqSmpNode4250::stream()
	{
		myImpl.stream( os_outindentcount_inindentchars_in );
	}


} // namespace lexicon

