/**
  * @file       MxSeqSmpNode4261.cpp
  * @class      lexicon::MxSeqSmpNode4261
  * @author     Matthew James Briggs
  * @email      matthew.james.briggs@gmail.com
  * @url        http://matthewjamesbriggs.com
  * @date       2014-12-12 16:19:58
  * @project    Lexicon
  * @version    1.0
  * @musicxmlid 4261
  * 
  * @brief This class represents an xs:sequence object from musicxml.xsd.
  * 
  * Full description goes here.
  * 
 **/

#include "MxSeqSmpNode4261.h"

/* Impl ------------------------------------------------------------------------------- */

namespace lexicon
{
	struct MxSeqSmpNode4261::Impl
	{
		Impl()
		:myStaffDistance( std::make_shared<MxEmStaffDistance>() )
		,myIsStaffDistancePresent( false )
		{}

	private:
		HMxEmStaffDistance myStaffDistance;
		bool myIsStaffDistancePresent;
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

/* StaffDistance Functions ------------------------------------------------------------ */

		/** Tells you whether or not <StaffDistance> is present. If <StaffDistance>
		    is required, this will always return 'true'. If <StaffDistance> is
		    required, no corresponding 'setIsStaffDistancePresent' will exist. **/
		bool getIsStaffDistancePresent() const
		{
			return myIsStaffDistancePresent;
		}

		void setIsStaffDistancePresent( const bool& value_in )
		{
			myIsStaffDistancePresent = value_in;
		}

		/** Returns a shared pointer handle to the <StaffDistance> element. Note
		    that if getIsStaffDistancePresent is false, this value will still exist
		    (even though it is not in the xml document) and you should ignore it. **/
		HMxEmStaffDistance getStaffDistance() const
		{
			return myStaffDistance;
			
		}

		/** Sets the internal shared pointer handle for the <StaffDistance> element.
		    Note that if setIsStaffDistancePresent is false, the internal shared
		    pointer will not be altered and will hold a value that does not exist
		    in xml. **/
		void setStaffDistance( const HMxEmStaffDistance& value_in )
		{
			myStaffDistance = value_in;
		}

		/** Returns the minimum number of occurences of the <StaffDistance> element.
		    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
		    the element is optional. **/
		int getStaffDistanceMinOccurs() const
		{
			return myStaffDistance->getMinOccurs();
		}

		/** Returns the maximum number of occurences of the <StaffDistance> element.
		    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
		    When the specification says 'unbounded' 'getIsStaffDistanceUnbounded'
		    will return 'true' and the return value of 'getStaffDistanceMaxOccurs'
		    should be ignored. **/
		int getStaffDistanceMaxOccurs() const
		{
			return myStaffDistance->getMaxOccurs();
		}

		/** Returns 'true' if the specification says that the maximum number of
		    occurences of the <StaffDistance> element is 'unbounded'.When this
		    function returns 'true', the value returned by 'getStaffDistanceMaxOccurs'
		    should be ignored. **/
		bool getIsStaffDistanceUnbounded() const
		{
			return myStaffDistance->getIsMaxOccursUnbounded();
		}

/* Stringing and Streaming ------------------------------------------------------------ */

		std::ostream& stream( std::ostream& os_out, int indentcount_in, const char* indentchars_in ) const
		{
			throw "todo: write the code.";
		}

	}; // struct MxSeqSmpNode4261::Impl

	const int MxSeqSmpNode4261::Impl::myXsdID = 4261;
	const std::string MxSeqSmpNode4261::Impl::myXmlTypeName = "node-4261";
	const std::string MxSeqSmpNode4261::Impl::myCppClassName = "MxSeqSmpNode4261";
	const std::string MxSeqSmpNode4261::Impl::myDocumentation = "No XSD Documentation.";

/* MxSeqSmpNode4261 ------------------------------------------------------------------- */


/* Constructor, Destructor, Copy, Assignment ------------------------------------------ */

	MxSeqSmpNode4261::MxSeqSmpNode4261()
	:myImpl( new Impl() ) {}

	MxSeqSmpNode4261::~MxSeqSmpNode4261() {}

	MxSeqSmpNode4261::MxSeqSmpNode4261( const MxSeqSmpNode4261& other )
	:myImpl( new Impl( *(other.myImpl) ) ) {}

	MxSeqSmpNode4261& MxSeqSmpNode4261::operator=( const MxSeqSmpNode4261& other )
	{
		this->myImpl = std::unique_ptr<Impl>( new Impl( *(other.myImpl) ) );
		return *this;
	}

/* defaultName ------------------------------------------------------------------------ */

	/** Returns the name of this xs:element as found in the musicxml.xsd document. **/
	std::string MxSeqSmpNode4261::getXmlTypeName() const
	{
		return myImpl->getXmlTypeName();
	}

	/** Returns the name of this C++ class. **/
	std::string MxSeqSmpNode4261::getClassName() const
	{
		return myImpl->getClassName();
	}

	/** Returns the documentation for this musicxml type as found in the musicxml.xsd
	    document. **/
	std::string MxSeqSmpNode4261::getDocumentation() const
	{
		return myImpl->getDocumentation();
	}

/* StaffDistance Functions ------------------------------------------------------------ */

	/** Tells you whether or not <StaffDistance> is present. If <StaffDistance>
	    is required, this will always return 'true'. If <StaffDistance> is
	    required, no corresponding 'setIsStaffDistancePresent' will exist. **/
	bool MxSeqSmpNode4261::getIsStaffDistancePresent() const
	{
		return myImpl->getIsStaffDistancePresent();
	}

	void MxSeqSmpNode4261::setIsStaffDistancePresent( const bool& value_in )
	{
		myImpl->setIsStaffDistancePresent( value_in );
	}

	/** Returns a shared pointer handle to the <StaffDistance> element. Note
	    that if getIsStaffDistancePresent is false, this value will still exist
	    (even though it is not in the xml document) and you should ignore it. **/
	HMxEmStaffDistance MxSeqSmpNode4261::getStaffDistance() const
	{
		return myImpl->getStaffDistance();
	}

	/** Sets the internal shared pointer handle for the <StaffDistance> element.
	    Note that if setIsStaffDistancePresent is false, the internal shared
	    pointer will not be altered and will hold a value that does not exist
	    in xml. **/
	void MxSeqSmpNode4261::setStaffDistance( const HMxEmStaffDistance& value_in )
	{
		myImpl->setStaffDistance( value_in );
	}

	/** Returns the minimum number of occurences of the <StaffDistance> element.
	    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
	    the element is optional. **/
	int MxSeqSmpNode4261::getStaffDistanceMinOccurs() const
	{
		return myImpl->getStaffDistanceMinOccurs();
	}

	/** Returns the maximum number of occurences of the <StaffDistance> element.
	    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
	    When the specification says 'unbounded' 'getIsStaffDistanceUnbounded'
	    will return 'true' and the return value of 'getStaffDistanceMaxOccurs'
	    should be ignored. **/
	int MxSeqSmpNode4261::getStaffDistanceMaxOccurs() const
	{
		return myImpl->getStaffDistanceMaxOccurs();
	}

	/** Returns 'true' if the specification says that the maximum number of
	    occurences of the <StaffDistance> element is 'unbounded'.When this
	    function returns 'true', the value returned by 'getStaffDistanceMaxOccurs'
	    should be ignored. **/
	bool MxSeqSmpNode4261::getIsStaffDistanceUnbounded() const
	{
		return myImpl->getIsStaffDistanceUnbounded();
	}

/* Stringing and Streaming ------------------------------------------------------------ */

	std::ostream& MxSeqSmpNode4261::stream( std::ostream& os_out, int indentcount_in, const char* indentchars_in ) const
	{
		return myImpl->stream( os_out, indentcount_in, indentchars_in );
	}


} // namespace lexicon

