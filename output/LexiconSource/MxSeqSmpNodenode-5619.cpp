/**
  * @file       MxSeqSmpNodenode-5619.cpp
  * @class      lexicon::MxSeqSmpNodenode-5619
  * @author     Matthew James Briggs
  * @email      matthew.james.briggs@gmail.com
  * @url        http://matthewjamesbriggs.com
  * @date       2014-12-11 15:41:48
  * @project    Lexicon
  * @version    1.0
  * @musicxmlid 5619
  * 
  * @brief This class represents an xs:sequence object from musicxml.xsd.
  * 
  * Full description goes here.
  * 
 **/

#include "MxSeqSmpNodenode-5619.h"

/* Impl ------------------------------------------------------------------------------- */

namespace lexicon
{
	struct MxSeqSmpNodenode-5619::Impl
	{
		Impl()
		{}

	private:
		HMxEsTupletNumber myTupletNumber;
		bool myTupletNumberIsPresent;
		HMxEsTupletType myTupletType;
		bool myTupletTypeIsPresent;
		std::vector<HMxEeTupletDot> myTupletDotCollection;
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

/* TupletNumber Functions ------------------------------------------------------------- */

		/** Tells you whether or not <TupletNumber> is present. If <TupletNumber>
		    is required, this will always return 'true'. If <TupletNumber> is required,
		    no corresponding 'setIsTupletNumberPresent' will exist. **/
		bool getIsTupletNumberPresent() const
		{
			return 0;
		}

		void setIsTupletNumberPresent( const bool& value_in )
		{
			return 0;
		}

		/** Returns a shared pointer handle to the <TupletNumber> element. Note
		    that if getIsTupletNumberPresent is false, this value will still exist
		    (even though it is not in the xml document) and you should ignore it. **/
		HMxEsTupletNumber getTupletNumber() const
		{
			if( myTupletNumber )
			{
				return myTupletNumber;
			}
			else
			{
				return std::make_shared<HMxEsTupletNumber>();
			}
		}

		/** Sets the internal shared pointer handle for the <TupletNumber> element.
		    Note that if setIsTupletNumberPresent is false, the internal shared
		    pointer will not be altered and will hold a value that does not exist
		    in xml. **/
		int setTupletNumber( const HMxEsTupletNumber& value_in )
		{
			myTupletNumber = value_in;
		}

		/** Returns the minimum number of occurences of the <TupletNumber> element.
		    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
		    the element is optional. **/
		int getTupletNumberMinOccurs() const
		{
			return myTupletNumber.getMinOccurs();
		}

		/** Returns the maximum number of occurences of the <TupletNumber> element.
		    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
		    When the specification says 'unbounded' 'getIsTupletNumberUnbounded'
		    will return 'true' and the return value of 'getTupletNumberMaxOccurs'
		    should be ignored. **/
		int getTupletNumberMaxOccurs() const
		{
			return myTupletNumber.getMaxOccurs();
		}

		/** Returns 'true' if the specification says that the maximum number of
		    occurences of the <TupletNumber> element is 'unbounded'.When this function
		    returns 'true', the value returned by 'getTupletNumberMaxOccurs' should
		    be ignored. **/
		int getIsTupletNumberUnbounded() const
		{
			return myTupletNumber.getIsUnbounded();
		}

/* TupletType Functions --------------------------------------------------------------- */

		/** Tells you whether or not <TupletType> is present. If <TupletType> is
		    required, this will always return 'true'. If <TupletType> is required,
		    no corresponding 'setIsTupletTypePresent' will exist. **/
		bool getIsTupletTypePresent() const
		{
			return 0;
		}

		void setIsTupletTypePresent( const bool& value_in )
		{
			return 0;
		}

		/** Returns a shared pointer handle to the <TupletType> element. Note that
		    if getIsTupletTypePresent is false, this value will still exist (even
		    though it is not in the xml document) and you should ignore it. **/
		HMxEsTupletType getTupletType() const
		{
			if( myTupletType )
			{
				return myTupletType;
			}
			else
			{
				return std::make_shared<HMxEsTupletType>();
			}
		}

		/** Sets the internal shared pointer handle for the <TupletType> element.
		    Note that if setIsTupletTypePresent is false, the internal shared pointer
		    will not be altered and will hold a value that does not exist in xml. **/
		int setTupletType( const HMxEsTupletType& value_in )
		{
			myTupletType = value_in;
		}

		/** Returns the minimum number of occurences of the <TupletType> element.
		    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
		    the element is optional. **/
		int getTupletTypeMinOccurs() const
		{
			return myTupletType.getMinOccurs();
		}

		/** Returns the maximum number of occurences of the <TupletType> element.
		    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
		    When the specification says 'unbounded' 'getIsTupletTypeUnbounded'
		    will return 'true' and the return value of 'getTupletTypeMaxOccurs'
		    should be ignored. **/
		int getTupletTypeMaxOccurs() const
		{
			return myTupletType.getMaxOccurs();
		}

		/** Returns 'true' if the specification says that the maximum number of
		    occurences of the <TupletType> element is 'unbounded'.When this function
		    returns 'true', the value returned by 'getTupletTypeMaxOccurs' should
		    be ignored. **/
		int getIsTupletTypeUnbounded() const
		{
			return myTupletType.getIsUnbounded();
		}

/* TupletDot Functions ---------------------------------------------------------------- */

		/** Returns the count of <TupletDot> elements. **/
		size_type getTupletDotCount() const
		{
			return 0;
		}

		/** Returns an STL iterator into the contained collection of element handles. **/
		std::vector<HMxEeTupletDot>::iterator getTupletDotBegin()
		{
			throw "todo: write the code.";
		}

		/** Returns an STL iterator into the contained collection of element handles. **/
		std::vector<HMxEeTupletDot>::iterator getTupletDotEnd()
		{
			throw "todo: write the code.";
		}

		/** Returns an STL iterator into the contained collection of element handles. **/
		std::vector<HMxEeTupletDot>::const_iterator getTupletDotBegin() const
		{
			throw "todo: write the code.";
		}

		/** Returns an STL iterator into the contained collection of element handles. **/
		std::vector<HMxEeTupletDot>::const_iterator getTupletDotEnd() const
		{
			throw "todo: write the code.";
		}

		/** Adds the element handle to the internal collection. Returns 'true'
		    if successful, returns 'false' to indicate failure.  If you try to
		    add more elements than is allowed by MaxOccurs, the this function will
		    fail.  If you try to add a nullptr this function will fail. **/
		bool addTupletDot( const std::vector<HMxEeTupletDot>::iterator& value_in )
		{
			return 0;
		}

		/** Removes the element handle to the internal collection. Returns 'true'
		    if successful, returns 'false' to indicate failure.  If you try to
		    remove more elements that would result in a count less than MinOccurs,
		    the this function will fail. **/
		bool removeTupletDot( const std::vector<HMxEeTupletDot>::iterator& value_in )
		{
			return 0;
		}

		/** Returns the minimum number of occurences of the <TupletDot> element.
		    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
		    the element is optional. **/
		int getTupletDotMinOccurs() const
		{
			return myTupletDot.getMinOccurs();
		}

		/** Returns the maximum number of occurences of the <TupletDot> element.
		    Typically the MaxOccurs is specified as either '1' or 'unbounded'.
		    When the specification says 'unbounded' 'getIsTupletDotUnbounded' will
		    return 'true' and the return value of 'getTupletDotMaxOccurs' should
		    be ignored. **/
		int getTupletDotMaxOccurs() const
		{
			return myTupletDot.getMaxOccurs();
		}

		/** Returns 'true' if the specification says that the maximum number of
		    occurences of the <TupletDot> element is 'unbounded'.When this function
		    returns 'true', the value returned by 'getTupletDotMaxOccurs' should
		    be ignored. **/
		int getIsTupletDotUnbounded() const
		{
			return myTupletDot.getIsUnbounded();
		}

/* Stringing and Streaming ------------------------------------------------------------ */

		void stream( std::ostream& os_out, int indentcount_in, const char* indentchars_in ) const
		{
			return 0;
		}

	const int MxSeqSmpNodenode-5619::Impl::myXsdID = 5619;
	const std::string MxSeqSmpNodenode-5619::Impl::myXmlTypeName = "node-5619";
	const std::string MxSeqSmpNodenode-5619::Impl::myCppClassName = "DefaultConstructed";
	const std::string MxSeqSmpNodenode-5619::Impl::myDocumentation = "No XSD Documentation.";

	}; // struct MxSeqSmpNodenode-5619::Impl

