/**
  * @file       MxSeqSmpNode4190.cpp
  * @class      lexicon::MxSeqSmpNode4190
  * @author     Matthew James Briggs
  * @email      matthew.james.briggs@gmail.com
  * @url        http://matthewjamesbriggs.com
  * @date       2014-12-12 16:19:56
  * @project    Lexicon
  * @version    1.0
  * @musicxmlid 4190
  * 
  * @brief This class represents an xs:sequence object from musicxml.xsd.
  * 
  * Full description goes here.
  * 
 **/

#include "MxSeqSmpNode4190.h"

/* Impl ------------------------------------------------------------------------------- */

namespace lexicon
{
	struct MxSeqSmpNode4190::Impl
	{
		Impl()
		:myMeasureDistance( std::make_shared<MxEmMeasureDistance>() )
		,myIsMeasureDistancePresent( false )
		{}

	private:
		HMxEmMeasureDistance myMeasureDistance;
		bool myIsMeasureDistancePresent;
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

/* MeasureDistance Functions ---------------------------------------------------------- */

		/** Tells you whether or not <MeasureDistance> is present. If <MeasureDistance>
		    is required, this will always return 'true'. If <MeasureDistance> is
		    required, no corresponding 'setIsMeasureDistancePresent' will exist. **/
		bool getIsMeasureDistancePresent() const
		{
			return myIsMeasureDistancePresent;
		}

		void setIsMeasureDistancePresent( const bool& value_in )
		{
			myIsMeasureDistancePresent = value_in;
		}

		/** Returns a shared pointer handle to the <MeasureDistance> element. Note
		    that if getIsMeasureDistancePresent is false, this value will still
		    exist (even though it is not in the xml document) and you should ignore
		    it. **/
		HMxEmMeasureDistance getMeasureDistance() const
		{
			return myMeasureDistance;
			
		}

		/** Sets the internal shared pointer handle for the <MeasureDistance> element.
		    Note that if setIsMeasureDistancePresent is false, the internal shared
		    pointer will not be altered and will hold a value that does not exist
		    in xml. **/
		void setMeasureDistance( const HMxEmMeasureDistance& value_in )
		{
			myMeasureDistance = value_in;
		}

		/** Returns the minimum number of occurences of the <MeasureDistance> element.
		    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
		    the element is optional. **/
		int getMeasureDistanceMinOccurs() const
		{
			return myMeasureDistance->getMinOccurs();
		}

		/** Returns the maximum number of occurences of the <MeasureDistance> element.
		    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
		    When the specification says 'unbounded' 'getIsMeasureDistanceUnbounded'
		    will return 'true' and the return value of 'getMeasureDistanceMaxOccurs'
		    should be ignored. **/
		int getMeasureDistanceMaxOccurs() const
		{
			return myMeasureDistance->getMaxOccurs();
		}

		/** Returns 'true' if the specification says that the maximum number of
		    occurences of the <MeasureDistance> element is 'unbounded'.When this
		    function returns 'true', the value returned by 'getMeasureDistanceMaxOccurs'
		    should be ignored. **/
		bool getIsMeasureDistanceUnbounded() const
		{
			return myMeasureDistance->getIsMaxOccursUnbounded();
		}

/* Stringing and Streaming ------------------------------------------------------------ */

		std::ostream& stream( std::ostream& os_out, int indentcount_in, const char* indentchars_in ) const
		{
			throw "todo: write the code.";
		}

	}; // struct MxSeqSmpNode4190::Impl

	const int MxSeqSmpNode4190::Impl::myXsdID = 4190;
	const std::string MxSeqSmpNode4190::Impl::myXmlTypeName = "node-4190";
	const std::string MxSeqSmpNode4190::Impl::myCppClassName = "MxSeqSmpNode4190";
	const std::string MxSeqSmpNode4190::Impl::myDocumentation = "No XSD Documentation.";

/* MxSeqSmpNode4190 ------------------------------------------------------------------- */


/* Constructor, Destructor, Copy, Assignment ------------------------------------------ */

	MxSeqSmpNode4190::MxSeqSmpNode4190()
	:myImpl( new Impl() ) {}

	MxSeqSmpNode4190::~MxSeqSmpNode4190() {}

	MxSeqSmpNode4190::MxSeqSmpNode4190( const MxSeqSmpNode4190& other )
	:myImpl( new Impl( *(other.myImpl) ) ) {}

	MxSeqSmpNode4190& MxSeqSmpNode4190::operator=( const MxSeqSmpNode4190& other )
	{
		this->myImpl = std::unique_ptr<Impl>( new Impl( *(other.myImpl) ) );
		return *this;
	}

/* defaultName ------------------------------------------------------------------------ */

	/** Returns the name of this xs:element as found in the musicxml.xsd document. **/
	std::string MxSeqSmpNode4190::getXmlTypeName() const
	{
		return myImpl->getXmlTypeName();
	}

	/** Returns the name of this C++ class. **/
	std::string MxSeqSmpNode4190::getClassName() const
	{
		return myImpl->getClassName();
	}

	/** Returns the documentation for this musicxml type as found in the musicxml.xsd
	    document. **/
	std::string MxSeqSmpNode4190::getDocumentation() const
	{
		return myImpl->getDocumentation();
	}

/* MeasureDistance Functions ---------------------------------------------------------- */

	/** Tells you whether or not <MeasureDistance> is present. If <MeasureDistance>
	    is required, this will always return 'true'. If <MeasureDistance> is
	    required, no corresponding 'setIsMeasureDistancePresent' will exist. **/
	bool MxSeqSmpNode4190::getIsMeasureDistancePresent() const
	{
		return myImpl->getIsMeasureDistancePresent();
	}

	void MxSeqSmpNode4190::setIsMeasureDistancePresent( const bool& value_in )
	{
		myImpl->setIsMeasureDistancePresent( value_in );
	}

	/** Returns a shared pointer handle to the <MeasureDistance> element. Note
	    that if getIsMeasureDistancePresent is false, this value will still
	    exist (even though it is not in the xml document) and you should ignore
	    it. **/
	HMxEmMeasureDistance MxSeqSmpNode4190::getMeasureDistance() const
	{
		return myImpl->getMeasureDistance();
	}

	/** Sets the internal shared pointer handle for the <MeasureDistance> element.
	    Note that if setIsMeasureDistancePresent is false, the internal shared
	    pointer will not be altered and will hold a value that does not exist
	    in xml. **/
	void MxSeqSmpNode4190::setMeasureDistance( const HMxEmMeasureDistance& value_in )
	{
		myImpl->setMeasureDistance( value_in );
	}

	/** Returns the minimum number of occurences of the <MeasureDistance> element.
	    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
	    the element is optional. **/
	int MxSeqSmpNode4190::getMeasureDistanceMinOccurs() const
	{
		return myImpl->getMeasureDistanceMinOccurs();
	}

	/** Returns the maximum number of occurences of the <MeasureDistance> element.
	    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
	    When the specification says 'unbounded' 'getIsMeasureDistanceUnbounded'
	    will return 'true' and the return value of 'getMeasureDistanceMaxOccurs'
	    should be ignored. **/
	int MxSeqSmpNode4190::getMeasureDistanceMaxOccurs() const
	{
		return myImpl->getMeasureDistanceMaxOccurs();
	}

	/** Returns 'true' if the specification says that the maximum number of
	    occurences of the <MeasureDistance> element is 'unbounded'.When this
	    function returns 'true', the value returned by 'getMeasureDistanceMaxOccurs'
	    should be ignored. **/
	bool MxSeqSmpNode4190::getIsMeasureDistanceUnbounded() const
	{
		return myImpl->getIsMeasureDistanceUnbounded();
	}

/* Stringing and Streaming ------------------------------------------------------------ */

	std::ostream& MxSeqSmpNode4190::stream( std::ostream& os_out, int indentcount_in, const char* indentchars_in ) const
	{
		return myImpl->stream( os_out, indentcount_in, indentchars_in );
	}


} // namespace lexicon

