/**
  * @file       MxSeqSmpNode6156.cpp
  * @class      lexicon::MxSeqSmpNode6156
  * @author     Matthew James Briggs
  * @email      matthew.james.briggs@gmail.com
  * @url        http://matthewjamesbriggs.com
  * @date       2014-12-11 15:30:27
  * @project    Lexicon
  * @version    1.0
  * @musicxmlid 6156
  * 
  * @brief This class represents an xs:sequence object from musicxml.xsd.
  * 
  * Full description goes here.
  * 
 **/

#include "MxSeqSmpNode6156.h"

/* Impl ------------------------------------------------------------------------------- */

namespace lexicon
{
	struct MxSeqSmpNode6156::Impl
	{
		Impl()
		{}

	private:
		HMxEsCancel myCancel;
		bool myCancelIsPresent;
		HMxEmFifths myFifths;
		bool myFifthsIsPresent;
		HMxEmMode myMode;
		bool myModeIsPresent;
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

/* Cancel Functions ------------------------------------------------------------------- */

		/** Tells you whether or not <Cancel> is present. If <Cancel> is required,
		    this will always return 'true'. If <Cancel> is required, no corresponding
		    'setIsCancelPresent' will exist. **/
		bool getIsCancelPresent() const
		{
			return 0;
		}

		void setIsCancelPresent( const bool& value_in )
		{
			return 0;
		}

		/** Returns a shared pointer handle to the <Cancel> element. Note that
		    if getIsCancelPresent is false, this value will still exist (even though
		    it is not in the xml document) and you should ignore it. **/
		HMxEsCancel getCancel() const
		{
			if( myCancel )
			{
				return myCancel;
			}
			else
			{
				return std::make_shared<HMxEsCancel>();
			}
		}

		/** Sets the internal shared pointer handle for the <Cancel> element. Note
		    that if setIsCancelPresent is false, the internal shared pointer will
		    not be altered and will hold a value that does not exist in xml. **/
		int setCancel( const HMxEsCancel& value_in )
		{
			myCancel = value_in;
		}

		/** Returns the minimum number of occurences of the <Cancel> element. 
		    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
		    the element is optional. **/
		int getCancelMinOccurs() const
		{
			return myCancel.getMinOccurs();
		}

		/** Returns the maximum number of occurences of the <Cancel> element. Typically
		    the MaxOccurs is specified as either '1' or 'unbounded'.  When the
		    specification says 'unbounded' 'getIsCancelUnbounded' will return 'true'
		    and the return value of 'getCancelMaxOccurs' should be ignored. **/
		int getCancelMaxOccurs() const
		{
			return myCancel.getMaxOccurs();
		}

		/** Returns 'true' if the specification says that the maximum number of
		    occurences of the <Cancel> element is 'unbounded'.When this function
		    returns 'true', the value returned by 'getCancelMaxOccurs' should be
		    ignored. **/
		int getIsCancelUnbounded() const
		{
			return myCancel.getIsUnbounded();
		}

/* Fifths Functions ------------------------------------------------------------------- */

		/** Tells you whether or not <Fifths> is present. If <Fifths> is required,
		    this will always return 'true'. If <Fifths> is required, no corresponding
		    'setIsFifthsPresent' will exist. **/
		bool getIsFifthsPresent() const
		{
			return 0;
		}

		/** Returns a shared pointer handle to the <Fifths> element. Note that
		    if getIsFifthsPresent is false, this value will still exist (even though
		    it is not in the xml document) and you should ignore it. **/
		HMxEmFifths getFifths() const
		{
			if( myFifths )
			{
				return myFifths;
			}
			else
			{
				return std::make_shared<HMxEmFifths>();
			}
		}

		/** Sets the internal shared pointer handle for the <Fifths> element.  **/
		int setFifths( const HMxEmFifths& value_in )
		{
			myFifths = value_in;
		}

		/** Returns the minimum number of occurences of the <Fifths> element. 
		    i.e. MinOccurs > 0 means the element is required, MinOccurs == 0 means
		    the element is optional. **/
		int getFifthsMinOccurs() const
		{
			return myFifths.getMinOccurs();
		}

		/** Returns the maximum number of occurences of the <Fifths> element. Typically
		    the MaxOccurs is specified as either '1' or 'unbounded'.  When the
		    specification says 'unbounded' 'getIsFifthsUnbounded' will return 'true'
		    and the return value of 'getFifthsMaxOccurs' should be ignored. **/
		int getFifthsMaxOccurs() const
		{
			return myFifths.getMaxOccurs();
		}

		/** Returns 'true' if the specification says that the maximum number of
		    occurences of the <Fifths> element is 'unbounded'.When this function
		    returns 'true', the value returned by 'getFifthsMaxOccurs' should be
		    ignored. **/
		int getIsFifthsUnbounded() const
		{
			return myFifths.getIsUnbounded();
		}

/* Mode Functions --------------------------------------------------------------------- */

		/** Tells you whether or not <Mode> is present. If <Mode> is required,
		    this will always return 'true'. If <Mode> is required, no corresponding
		    'setIsModePresent' will exist. **/
		bool getIsModePresent() const
		{
			return 0;
		}

		void setIsModePresent( const bool& value_in )
		{
			return 0;
		}

		/** Returns a shared pointer handle to the <Mode> element. Note that if
		    getIsModePresent is false, this value will still exist (even though
		    it is not in the xml document) and you should ignore it. **/
		HMxEmMode getMode() const
		{
			if( myMode )
			{
				return myMode;
			}
			else
			{
				return std::make_shared<HMxEmMode>();
			}
		}

		/** Sets the internal shared pointer handle for the <Mode> element. Note
		    that if setIsModePresent is false, the internal shared pointer will
		    not be altered and will hold a value that does not exist in xml. **/
		int setMode( const HMxEmMode& value_in )
		{
			myMode = value_in;
		}

		/** Returns the minimum number of occurences of the <Mode> element.  i.e.
		    MinOccurs > 0 means the element is required, MinOccurs == 0 means the
		    element is optional. **/
		int getModeMinOccurs() const
		{
			return myMode.getMinOccurs();
		}

		/** Returns the maximum number of occurences of the <Mode> element. Typically
		    the MaxOccurs is specified as either '1' or 'unbounded'.  When the
		    specification says 'unbounded' 'getIsModeUnbounded' will return 'true'
		    and the return value of 'getModeMaxOccurs' should be ignored. **/
		int getModeMaxOccurs() const
		{
			return myMode.getMaxOccurs();
		}

		/** Returns 'true' if the specification says that the maximum number of
		    occurences of the <Mode> element is 'unbounded'.When this function
		    returns 'true', the value returned by 'getModeMaxOccurs' should be
		    ignored. **/
		int getIsModeUnbounded() const
		{
			return myMode.getIsUnbounded();
		}

/* Stringing and Streaming ------------------------------------------------------------ */

		void stream( std::ostream& os_out, int indentcount_in, const char* indentchars_in ) const
		{
			return 0;
		}

	const int MxSeqSmpNode6156::Impl::myXsdID = 6156;
	const std::string MxSeqSmpNode6156::Impl::myXmlTypeName = "";
	const std::string MxSeqSmpNode6156::Impl::myCppClassName = "DefaultConstructed";
	const std::string MxSeqSmpNode6156::Impl::myDocumentation = "";

	}; // struct MxSeqSmpNode6156::Impl

