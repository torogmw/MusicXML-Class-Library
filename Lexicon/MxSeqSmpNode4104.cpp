/**
  * @file       MxSeqSmpNode4104.cpp
  * @class      lexicon::MxSeqSmpNode4104
  * @author     Matthew James Briggs
  * @email      matthew.james.briggs@gmail.com
  * @url        http://matthewjamesbriggs.com
  * @date       2014-12-12 16:19:53
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
		:myMiscellaneousFieldCollection()
		{}

	private:
		MxEsMiscellaneousFields myMiscellaneousFieldCollection;
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

/* MiscellaneousField Functions ------------------------------------------------------- */

		/** Returns the count of <MiscellaneousField> elements. **/
		std::size_t getMiscellaneousFieldCount() const
		{
			throw "todo: write the code.";
		}

		/** Returns an STL iterator into the contained collection of element handles. **/
		MxEsMiscellaneousFieldsIter getMiscellaneousFieldBegin()
		{
			throw "todo: write the code.";
		}

		/** Returns an STL iterator into the contained collection of element handles. **/
		MxEsMiscellaneousFieldsIter getMiscellaneousFieldEnd()
		{
			throw "todo: write the code.";
		}

		/** Returns an STL iterator into the contained collection of element handles. **/
		MxEsMiscellaneousFieldsIterConst getMiscellaneousFieldBeginConst() const
		{
			throw "todo: write the code.";
		}

		/** Returns an STL iterator into the contained collection of element handles. **/
		MxEsMiscellaneousFieldsIterConst getMiscellaneousFieldEndConst() const
		{
			throw "todo: write the code.";
		}

		/** Adds the element handle to the internal collection. Returns 'true'
		    if successful, returns 'false' to indicate failure.  If you try to
		    add more elements than is allowed by MaxOccurs, the this function will
		    fail.  If you try to add a nullptr this function will fail. **/
		bool addMiscellaneousField( const MxEsMiscellaneousFieldsIter& value_in )
		{
			throw "todo: write the code.";
		}

		/** Removes the element handle to the internal collection. Returns 'true'
		    if successful, returns 'false' to indicate failure.  If you try to
		    remove elements that would result in a count less than MinOccurs, the
		    this function will fail. **/
		bool removeMiscellaneousField( const MxEsMiscellaneousFieldsIter& value_in )
		{
			throw "todo: write the code.";
		}

		/** Returns the minimum number of occurences of the <MiscellaneousField>
		    element.  i.e. MinOccurs > 0 means the element is required, MinOccurs
		    == 0 means the element is optional. **/
		int getMiscellaneousFieldMinOccurs() const
		{
			throw "todo: write the code.";
		}

		/** Returns the maximum number of occurences of the <MiscellaneousField>
		    element. Typically the MaxOccurs is specified as either '1' or 'unbounded'.
		    When the specification says 'unbounded' 'getIsMiscellaneousFieldUnbounded'
		    will return 'true' and the return value of 'getMiscellaneousFieldMaxOccurs'
		    should be ignored. **/
		int getMiscellaneousFieldMaxOccurs() const
		{
			throw "todo: write the code.";
		}

		/** Returns 'true' if the specification says that the maximum number of
		    occurences of the <MiscellaneousField> element is 'unbounded'.When
		    this function returns 'true', the value returned by 'getMiscellaneousFieldMaxOccurs'
		    should be ignored. **/
		int getIsMiscellaneousFieldUnbounded() const
		{
			throw "todo: write the code.";
		}

/* Stringing and Streaming ------------------------------------------------------------ */

		std::ostream& stream( std::ostream& os_out, int indentcount_in, const char* indentchars_in ) const
		{
			throw "todo: write the code.";
		}

	}; // struct MxSeqSmpNode4104::Impl

	const int MxSeqSmpNode4104::Impl::myXsdID = 4104;
	const std::string MxSeqSmpNode4104::Impl::myXmlTypeName = "node-4104";
	const std::string MxSeqSmpNode4104::Impl::myCppClassName = "MxSeqSmpNode4104";
	const std::string MxSeqSmpNode4104::Impl::myDocumentation = "No XSD Documentation.";

/* MxSeqSmpNode4104 ------------------------------------------------------------------- */


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
	std::string MxSeqSmpNode4104::getXmlTypeName() const
	{
		return myImpl->getXmlTypeName();
	}

	/** Returns the name of this C++ class. **/
	std::string MxSeqSmpNode4104::getClassName() const
	{
		return myImpl->getClassName();
	}

	/** Returns the documentation for this musicxml type as found in the musicxml.xsd
	    document. **/
	std::string MxSeqSmpNode4104::getDocumentation() const
	{
		return myImpl->getDocumentation();
	}

/* MiscellaneousField Functions ------------------------------------------------------- */

	/** Returns the count of <MiscellaneousField> elements. **/
	std::size_t MxSeqSmpNode4104::getMiscellaneousFieldCount() const
	{
		return myImpl->getMiscellaneousFieldCount();
	}

	/** Returns an STL iterator into the contained collection of element handles. **/
	MxEsMiscellaneousFieldsIter MxSeqSmpNode4104::getMiscellaneousFieldBegin()
	{
		return myImpl->getMiscellaneousFieldBegin();
	}

	/** Returns an STL iterator into the contained collection of element handles. **/
	MxEsMiscellaneousFieldsIter MxSeqSmpNode4104::getMiscellaneousFieldEnd()
	{
		return myImpl->getMiscellaneousFieldEnd();
	}

	/** Returns an STL iterator into the contained collection of element handles. **/
	MxEsMiscellaneousFieldsIterConst MxSeqSmpNode4104::getMiscellaneousFieldBeginConst() const
	{
		return myImpl->getMiscellaneousFieldBeginConst();
	}

	/** Returns an STL iterator into the contained collection of element handles. **/
	MxEsMiscellaneousFieldsIterConst MxSeqSmpNode4104::getMiscellaneousFieldEndConst() const
	{
		return myImpl->getMiscellaneousFieldEndConst();
	}

	/** Adds the element handle to the internal collection. Returns 'true'
	    if successful, returns 'false' to indicate failure.  If you try to
	    add more elements than is allowed by MaxOccurs, the this function will
	    fail.  If you try to add a nullptr this function will fail. **/
	bool MxSeqSmpNode4104::addMiscellaneousField( const MxEsMiscellaneousFieldsIter& value_in )
	{
		return myImpl->addMiscellaneousField( value_in );
	}

	/** Removes the element handle to the internal collection. Returns 'true'
	    if successful, returns 'false' to indicate failure.  If you try to
	    remove elements that would result in a count less than MinOccurs, the
	    this function will fail. **/
	bool MxSeqSmpNode4104::removeMiscellaneousField( const MxEsMiscellaneousFieldsIter& value_in )
	{
		return myImpl->removeMiscellaneousField( value_in );
	}

	/** Returns the minimum number of occurences of the <MiscellaneousField>
	    element.  i.e. MinOccurs > 0 means the element is required, MinOccurs
	    == 0 means the element is optional. **/
	int MxSeqSmpNode4104::getMiscellaneousFieldMinOccurs() const
	{
		return myImpl->getMiscellaneousFieldMinOccurs();
	}

	/** Returns the maximum number of occurences of the <MiscellaneousField>
	    element. Typically the MaxOccurs is specified as either '1' or 'unbounded'.
	    When the specification says 'unbounded' 'getIsMiscellaneousFieldUnbounded'
	    will return 'true' and the return value of 'getMiscellaneousFieldMaxOccurs'
	    should be ignored. **/
	int MxSeqSmpNode4104::getMiscellaneousFieldMaxOccurs() const
	{
		return myImpl->getMiscellaneousFieldMaxOccurs();
	}

	/** Returns 'true' if the specification says that the maximum number of
	    occurences of the <MiscellaneousField> element is 'unbounded'.When
	    this function returns 'true', the value returned by 'getMiscellaneousFieldMaxOccurs'
	    should be ignored. **/
	int MxSeqSmpNode4104::getIsMiscellaneousFieldUnbounded() const
	{
		return myImpl->getIsMiscellaneousFieldUnbounded();
	}

/* Stringing and Streaming ------------------------------------------------------------ */

	std::ostream& MxSeqSmpNode4104::stream( std::ostream& os_out, int indentcount_in, const char* indentchars_in ) const
	{
		return myImpl->stream( os_out, indentcount_in, indentchars_in );
	}


} // namespace lexicon

