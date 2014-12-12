/**
  * @file       MxSeqSmpNode4104.cpp
  * @class      lexicon::MxSeqSmpNode4104
  * @author     Matthew James Briggs
  * @email      matthew.james.briggs@gmail.com
  * @url        http://matthewjamesbriggs.com
  * @date       2014-12-11 16:20:31
  * @project    Lexicon
  * @version    1.0
  * @musicxmlid 4104
  * 
  * @brief This class represents an xs:sequence object from musicxml.xsd.
  * 
  * Full description goes here.
  * 
 **/

#include "MxSeqSmpNode4104.h"

/* Impl ------------------------------------------------------------------------------- */

namespace lexicon
{
	struct MxSeqSmpNode4104::Impl
	{
		Impl()
		{}

	private:
		std::vector<HMxEsMiscellaneousField> myMiscellaneousFieldCollection;
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

/* MiscellaneousField Functions ------------------------------------------------------- */

		/** Returns the count of <MiscellaneousField> elements. **/
		size_type getMiscellaneousFieldCount() const
		{
			return 0;
		}

		/** Returns an STL iterator into the contained collection of element handles. **/
		std::vector<HMxEsMiscellaneousField>::iterator getMiscellaneousFieldBegin()
		{
			throw "todo: write the code.";
		}

		/** Returns an STL iterator into the contained collection of element handles. **/
		std::vector<HMxEsMiscellaneousField>::iterator getMiscellaneousFieldEnd()
		{
			throw "todo: write the code.";
		}

		/** Returns an STL iterator into the contained collection of element handles. **/
		std::vector<HMxEsMiscellaneousField>::const_iterator getMiscellaneousFieldBegin() const
		{
			throw "todo: write the code.";
		}

		/** Returns an STL iterator into the contained collection of element handles. **/
		std::vector<HMxEsMiscellaneousField>::const_iterator getMiscellaneousFieldEnd() const
		{
			throw "todo: write the code.";
		}

		/** Adds the element handle to the internal collection. Returns 'true'
		    if successful, returns 'false' to indicate failure.  If you try to
		    add more elements than is allowed by MaxOccurs, the this function will
		    fail.  If you try to add a nullptr this function will fail. **/
		bool addMiscellaneousField( const std::vector<HMxEsMiscellaneousField>::iterator& value_in )
		{
			return 0;
		}

		/** Removes the element handle to the internal collection. Returns 'true'
		    if successful, returns 'false' to indicate failure.  If you try to
		    remove more elements that would result in a count less than MinOccurs,
		    the this function will fail. **/
		bool removeMiscellaneousField( const std::vector<HMxEsMiscellaneousField>::iterator& value_in )
		{
			return 0;
		}

		/** Returns the minimum number of occurences of the <MiscellaneousField>
		    element.  i.e. MinOccurs > 0 means the element is required, MinOccurs
		    == 0 means the element is optional. **/
		int getMiscellaneousFieldMinOccurs() const
		{
			return myMiscellaneousField.getMinOccurs();
		}

		/** Returns the maximum number of occurences of the <MiscellaneousField>
		    element. Typically the MaxOccurs is specified as either '1' or 'unbounded'.
		    When the specification says 'unbounded' 'getIsMiscellaneousFieldUnbounded'
		    will return 'true' and the return value of 'getMiscellaneousFieldMaxOccurs'
		    should be ignored. **/
		int getMiscellaneousFieldMaxOccurs() const
		{
			return myMiscellaneousField.getMaxOccurs();
		}

		/** Returns 'true' if the specification says that the maximum number of
		    occurences of the <MiscellaneousField> element is 'unbounded'.When
		    this function returns 'true', the value returned by 'getMiscellaneousFieldMaxOccurs'
		    should be ignored. **/
		int getIsMiscellaneousFieldUnbounded() const
		{
			return myMiscellaneousField.getIsUnbounded();
		}

/* Stringing and Streaming ------------------------------------------------------------ */

		void stream( std::ostream& os_out, int indentcount_in, const char* indentchars_in ) const
		{
			return 0;
		}

	const int MxSeqSmpNode4104::Impl::myXsdID = 4104;
	const std::string MxSeqSmpNode4104::Impl::myXmlTypeName = "node-4104";
	const std::string MxSeqSmpNode4104::Impl::myCppClassName = "MxSeqSmpNode4104";
	const std::string MxSeqSmpNode4104::Impl::myDocumentation = "No XSD Documentation.";

	}; // struct MxSeqSmpNode4104::Impl

/* MxSeqSmpNode4104 ------------------------------------------------------------------- */

namespace lexicon
{

/* Constructor, Destructor, Copy, Assignment ------------------------------------------ */

	MxSeqSmpNode4104::MxSeqSmpNode4104()
	:myImpl( new Impl() ) {}

	MxSeqSmpNode4104::~MxSeqSmpNode4104() {}

	MxSeqSmpNode4104::MxSeqSmpNode4104( const MxSeqSmpNode4104& other )
	:myImpl( new Impl( *(other.myImpl) ) ) {}

	MxSeqSmpNode4104& MxSeqSmpNode4104::operator=( const MxSeqSmpNode4104& other )
	{
		this->myImpl = std::unique_ptr<Impl>( new Impl( *(other.myImpl) ) );
		return *this;
	}

/* defaultName ------------------------------------------------------------------------ */

	/** Returns the name of this xs:element as found in the musicxml.xsd document. **/
	std::string MxSeqSmpNode4104::getXmlTypeName()
	{
		return myImpl.getXmlTypeName();
	}

	/** Returns the name of this C++ class. **/
	std::string MxSeqSmpNode4104::getClassName()
	{
		return myImpl.getClassName();
	}

	/** Returns the documentation for this musicxml type as found in the musicxml.xsd
	    document. **/
	std::string MxSeqSmpNode4104::getDocumentation()
	{
		return myImpl.getDocumentation();
	}

/* MiscellaneousField Functions ------------------------------------------------------- */

	/** Returns the count of <MiscellaneousField> elements. **/
	size_type MxSeqSmpNode4104::getMiscellaneousFieldCount()
	{
		return myImpl.getMiscellaneousFieldCount();
	}

	/** Returns an STL iterator into the contained collection of element handles. **/
	std::vector<HMxEsMiscellaneousField>::iterator MxSeqSmpNode4104::getMiscellaneousFieldBegin()
	{
		return myImpl.getMiscellaneousFieldBegin();
	}

	/** Returns an STL iterator into the contained collection of element handles. **/
	std::vector<HMxEsMiscellaneousField>::iterator MxSeqSmpNode4104::getMiscellaneousFieldEnd()
	{
		return myImpl.getMiscellaneousFieldEnd();
	}

	/** Returns an STL iterator into the contained collection of element handles. **/
	std::vector<HMxEsMiscellaneousField>::const_iterator MxSeqSmpNode4104::getMiscellaneousFieldBegin()
	{
		return myImpl.getMiscellaneousFieldBegin();
	}

	/** Returns an STL iterator into the contained collection of element handles. **/
	std::vector<HMxEsMiscellaneousField>::const_iterator MxSeqSmpNode4104::getMiscellaneousFieldEnd()
	{
		return myImpl.getMiscellaneousFieldEnd();
	}

	/** Adds the element handle to the internal collection. Returns 'true'
	    if successful, returns 'false' to indicate failure.  If you try to
	    add more elements than is allowed by MaxOccurs, the this function will
	    fail.  If you try to add a nullptr this function will fail. **/
	bool MxSeqSmpNode4104::addMiscellaneousField()
	{
		return myImpl.addMiscellaneousField( value_in );
	}

	/** Removes the element handle to the internal collection. Returns 'true'
	    if successful, returns 'false' to indicate failure.  If you try to
	    remove more elements that would result in a count less than MinOccurs,
	    the this function will fail. **/
	bool MxSeqSmpNode4104::removeMiscellaneousField()
	{
		return myImpl.removeMiscellaneousField( value_in );
	}

	/** Returns the minimum number of occurences of the <MiscellaneousField>
	    element.  i.e. MinOccurs > 0 means the element is required, MinOccurs
	    == 0 means the element is optional. **/
	int MxSeqSmpNode4104::getMiscellaneousFieldMinOccurs()
	{
		return myImpl.getMiscellaneousFieldMinOccurs();
	}

	/** Returns the maximum number of occurences of the <MiscellaneousField>
	    element. Typically the MaxOccurs is specified as either '1' or 'unbounded'.
	    When the specification says 'unbounded' 'getIsMiscellaneousFieldUnbounded'
	    will return 'true' and the return value of 'getMiscellaneousFieldMaxOccurs'
	    should be ignored. **/
	int MxSeqSmpNode4104::getMiscellaneousFieldMaxOccurs()
	{
		return myImpl.getMiscellaneousFieldMaxOccurs();
	}

	/** Returns 'true' if the specification says that the maximum number of
	    occurences of the <MiscellaneousField> element is 'unbounded'.When
	    this function returns 'true', the value returned by 'getMiscellaneousFieldMaxOccurs'
	    should be ignored. **/
	int MxSeqSmpNode4104::getIsMiscellaneousFieldUnbounded()
	{
		return myImpl.getIsMiscellaneousFieldUnbounded();
	}

/* Stringing and Streaming ------------------------------------------------------------ */

	void MxSeqSmpNode4104::stream()
	{
		myImpl.stream( os_outindentcount_inindentchars_in );
	}


} // namespace lexicon

