/**
  * @file       MxSeqSmpNode4250.cpp
  * @class      lexicon::MxSeqSmpNode4250
  * @author     Matthew James Briggs
  * @email      matthew.james.briggs@gmail.com
  * @url        http://matthewjamesbriggs.com
  * @date       2014-12-17 15:52:14
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
#include "_hidden_indent.h"

/* Impl ------------------------------------------------------------------------------- */

namespace lexicon
{
	struct MxSeqSmpNode4250::Impl
	{
		Impl()
		:myMillimeters( std::make_shared<MxEmMillimeters>() )
		,myIsMillimetersPresent( true )
		,myTenths( std::make_shared<MxEmTenths>() )
		,myIsTenthsPresent( true )
		{}

	private:
		HMxEmMillimeters myMillimeters;
		bool myIsMillimetersPresent;
		HMxEmTenths myTenths;
		bool myIsTenthsPresent;
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

/* Millimeters Functions -------------------------------------------------------------- */

		/** Tells you whether or not <Millimeters> is present. If <Millimeters>
		    is required, this will always return 'true'. If <Millimeters> is required,
		    no corresponding 'setIsMillimetersPresent' will exist. **/
		bool getIsMillimetersPresent() const
		{
			return myIsMillimetersPresent;
		}

		/** Returns a shared pointer handle to the <Millimeters> element. Note
		    that if getIsMillimetersPresent is false, this value will still exist
		    (even though it is not in the xml document) and you should ignore it. **/
		HMxEmMillimeters getMillimeters() const
		{
			return myMillimeters;
			
		}

		/** Sets the internal shared pointer handle for the <Millimeters> element.
		     **/
		void setMillimeters( const HMxEmMillimeters& value_in )
		{
			myMillimeters = value_in;
		}

		/** Returns the minimum number of occurences of the <Millimeters> element.
		    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
		    the element is optional. **/
		int getMillimetersMinOccurs() const
		{
			return 1;
		}

		/** Returns the maximum number of occurences of the <Millimeters> element.
		    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
		    When the specification says 'unbounded' 'getIsMillimetersUnbounded'
		    will return 'true' and the return value of 'getMillimetersMaxOccurs'
		    should be ignored. **/
		int getMillimetersMaxOccurs() const
		{
			return 1;
		}

		/** Returns 'true' if the specification says that the maximum number of
		    occurences of the <Millimeters> element is 'unbounded'.When this function
		    returns 'true', the value returned by 'getMillimetersMaxOccurs' should
		    be ignored. **/
		bool getIsMillimetersUnbounded() const
		{
			return false;
		}

/* Tenths Functions ------------------------------------------------------------------- */

		/** Tells you whether or not <Tenths> is present. If <Tenths> is required,
		    this will always return 'true'. If <Tenths> is required, no corresponding
		    'setIsTenthsPresent' will exist. **/
		bool getIsTenthsPresent() const
		{
			return myIsTenthsPresent;
		}

		/** Returns a shared pointer handle to the <Tenths> element. Note that
		    if getIsTenthsPresent is false, this value will still exist (even though
		    it is not in the xml document) and you should ignore it. **/
		HMxEmTenths getTenths() const
		{
			return myTenths;
			
		}

		/** Sets the internal shared pointer handle for the <Tenths> element.  **/
		void setTenths( const HMxEmTenths& value_in )
		{
			myTenths = value_in;
		}

		/** Returns the minimum number of occurences of the <Tenths> element. 
		    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
		    the element is optional. **/
		int getTenthsMinOccurs() const
		{
			return 1;
		}

		/** Returns the maximum number of occurences of the <Tenths> element. Typically
		    the MaxOccurs is specified as either '1' or 'unbounded'.  When the
		    specification says 'unbounded' 'getIsTenthsUnbounded' will return 'true'
		    and the return value of 'getTenthsMaxOccurs' should be ignored. **/
		int getTenthsMaxOccurs() const
		{
			return 1;
		}

		/** Returns 'true' if the specification says that the maximum number of
		    occurences of the <Tenths> element is 'unbounded'.When this function
		    returns 'true', the value returned by 'getTenthsMaxOccurs' should be
		    ignored. **/
		bool getIsTenthsUnbounded() const
		{
			return false;
		}

/* Stringing and Streaming ------------------------------------------------------------ */

		std::ostream& stream( std::ostream& os_out, int indentcount_in, const char* indentchars_in ) const
		{
			bool isFirst = true;
			if( getIsMillimetersPresent() )
			{
				if ( isFirst == false )
				{
					os_out << std::endl;
				}
				hidden::indent( os_out, indentcount_in, indentchars_in );
				getMillimeters()->stream( os_out );
				isFirst = false;
			}
			if( getIsTenthsPresent() )
			{
				if ( isFirst == false )
				{
					os_out << std::endl;
				}
				hidden::indent( os_out, indentcount_in, indentchars_in );
				getTenths()->stream( os_out );
				isFirst = false;
			}
			return os_out;
		}

	}; // struct MxSeqSmpNode4250::Impl

	const int MxSeqSmpNode4250::Impl::myXsdID = 4250;
	const std::string MxSeqSmpNode4250::Impl::myXmlTypeName = "node-4250";
	const std::string MxSeqSmpNode4250::Impl::myCppClassName = "MxSeqSmpNode4250";
	const std::string MxSeqSmpNode4250::Impl::myDocumentation = "No XSD Documentation.";

/* MxSeqSmpNode4250 ------------------------------------------------------------------- */


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
	std::string MxSeqSmpNode4250::getXmlTypeName() const
	{
		return myImpl->getXmlTypeName();
	}

	/** Returns the name of this C++ class. **/
	std::string MxSeqSmpNode4250::getClassName() const
	{
		return myImpl->getClassName();
	}

	/** Returns the documentation for this musicxml type as found in the musicxml.xsd
	    document. **/
	std::string MxSeqSmpNode4250::getDocumentation() const
	{
		return myImpl->getDocumentation();
	}

/* Millimeters Functions -------------------------------------------------------------- */

	/** Tells you whether or not <Millimeters> is present. If <Millimeters>
	    is required, this will always return 'true'. If <Millimeters> is required,
	    no corresponding 'setIsMillimetersPresent' will exist. **/
	bool MxSeqSmpNode4250::getIsMillimetersPresent() const
	{
		return myImpl->getIsMillimetersPresent();
	}

	/** Returns a shared pointer handle to the <Millimeters> element. Note
	    that if getIsMillimetersPresent is false, this value will still exist
	    (even though it is not in the xml document) and you should ignore it. **/
	HMxEmMillimeters MxSeqSmpNode4250::getMillimeters() const
	{
		return myImpl->getMillimeters();
	}

	/** Sets the internal shared pointer handle for the <Millimeters> element.
	     **/
	void MxSeqSmpNode4250::setMillimeters( const HMxEmMillimeters& value_in )
	{
		myImpl->setMillimeters( value_in );
	}

	/** Returns the minimum number of occurences of the <Millimeters> element.
	    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
	    the element is optional. **/
	int MxSeqSmpNode4250::getMillimetersMinOccurs() const
	{
		return myImpl->getMillimetersMinOccurs();
	}

	/** Returns the maximum number of occurences of the <Millimeters> element.
	    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
	    When the specification says 'unbounded' 'getIsMillimetersUnbounded'
	    will return 'true' and the return value of 'getMillimetersMaxOccurs'
	    should be ignored. **/
	int MxSeqSmpNode4250::getMillimetersMaxOccurs() const
	{
		return myImpl->getMillimetersMaxOccurs();
	}

	/** Returns 'true' if the specification says that the maximum number of
	    occurences of the <Millimeters> element is 'unbounded'.When this function
	    returns 'true', the value returned by 'getMillimetersMaxOccurs' should
	    be ignored. **/
	bool MxSeqSmpNode4250::getIsMillimetersUnbounded() const
	{
		return myImpl->getIsMillimetersUnbounded();
	}

/* Tenths Functions ------------------------------------------------------------------- */

	/** Tells you whether or not <Tenths> is present. If <Tenths> is required,
	    this will always return 'true'. If <Tenths> is required, no corresponding
	    'setIsTenthsPresent' will exist. **/
	bool MxSeqSmpNode4250::getIsTenthsPresent() const
	{
		return myImpl->getIsTenthsPresent();
	}

	/** Returns a shared pointer handle to the <Tenths> element. Note that
	    if getIsTenthsPresent is false, this value will still exist (even though
	    it is not in the xml document) and you should ignore it. **/
	HMxEmTenths MxSeqSmpNode4250::getTenths() const
	{
		return myImpl->getTenths();
	}

	/** Sets the internal shared pointer handle for the <Tenths> element.  **/
	void MxSeqSmpNode4250::setTenths( const HMxEmTenths& value_in )
	{
		myImpl->setTenths( value_in );
	}

	/** Returns the minimum number of occurences of the <Tenths> element. 
	    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
	    the element is optional. **/
	int MxSeqSmpNode4250::getTenthsMinOccurs() const
	{
		return myImpl->getTenthsMinOccurs();
	}

	/** Returns the maximum number of occurences of the <Tenths> element. Typically
	    the MaxOccurs is specified as either '1' or 'unbounded'.  When the
	    specification says 'unbounded' 'getIsTenthsUnbounded' will return 'true'
	    and the return value of 'getTenthsMaxOccurs' should be ignored. **/
	int MxSeqSmpNode4250::getTenthsMaxOccurs() const
	{
		return myImpl->getTenthsMaxOccurs();
	}

	/** Returns 'true' if the specification says that the maximum number of
	    occurences of the <Tenths> element is 'unbounded'.When this function
	    returns 'true', the value returned by 'getTenthsMaxOccurs' should be
	    ignored. **/
	bool MxSeqSmpNode4250::getIsTenthsUnbounded() const
	{
		return myImpl->getIsTenthsUnbounded();
	}

/* Stringing and Streaming ------------------------------------------------------------ */

	std::ostream& MxSeqSmpNode4250::stream( std::ostream& os_out, int indentcount_in, const char* indentchars_in ) const
	{
		return myImpl->stream( os_out, indentcount_in, indentchars_in );
	}


} // namespace lexicon

