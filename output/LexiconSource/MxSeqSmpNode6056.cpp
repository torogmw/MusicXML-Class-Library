/**
  * @file       MxSeqSmpNode6056.cpp
  * @class      lexicon::MxSeqSmpNode6056
  * @author     Matthew James Briggs
  * @email      matthew.james.briggs@gmail.com
  * @url        http://matthewjamesbriggs.com
  * @date       2014-12-11 15:30:26
  * @project    Lexicon
  * @version    1.0
  * @musicxmlid 6056
  * 
  * @brief This class represents an xs:sequence object from musicxml.xsd.
  * 
  * Full description goes here.
  * 
 **/

#include "MxSeqSmpNode6056.h"

/* Impl ------------------------------------------------------------------------------- */

namespace lexicon
{
	struct MxSeqSmpNode6056::Impl
	{
		Impl()
		{}

	private:
		HMxEsLevel myLevel;
		bool myLevelIsPresent;
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

/* Level Functions -------------------------------------------------------------------- */

		/** Tells you whether or not <Level> is present. If <Level> is required,
		    this will always return 'true'. If <Level> is required, no corresponding
		    'setIsLevelPresent' will exist. **/
		bool getIsLevelPresent() const
		{
			return 0;
		}

		/** Returns a shared pointer handle to the <Level> element. Note that if
		    getIsLevelPresent is false, this value will still exist (even though
		    it is not in the xml document) and you should ignore it. **/
		HMxEsLevel getLevel() const
		{
			if( myLevel )
			{
				return myLevel;
			}
			else
			{
				return std::make_shared<HMxEsLevel>();
			}
		}

		/** Sets the internal shared pointer handle for the <Level> element.  **/
		int setLevel( const HMxEsLevel& value_in )
		{
			myLevel = value_in;
		}

		/** Returns the minimum number of occurences of the <Level> element.  i.e.
		    MinOccurs > 0 means the element is required, MinOccurs == 0 means the
		    element is optional. **/
		int getLevelMinOccurs() const
		{
			return myLevel.getMinOccurs();
		}

		/** Returns the maximum number of occurences of the <Level> element. Typically
		    the MaxOccurs is specified as either '1' or 'unbounded'.  When the
		    specification says 'unbounded' 'getIsLevelUnbounded' will return 'true'
		    and the return value of 'getLevelMaxOccurs' should be ignored. **/
		int getLevelMaxOccurs() const
		{
			return myLevel.getMaxOccurs();
		}

		/** Returns 'true' if the specification says that the maximum number of
		    occurences of the <Level> element is 'unbounded'.When this function
		    returns 'true', the value returned by 'getLevelMaxOccurs' should be
		    ignored. **/
		int getIsLevelUnbounded() const
		{
			return myLevel.getIsUnbounded();
		}

/* Stringing and Streaming ------------------------------------------------------------ */

		void stream( std::ostream& os_out, int indentcount_in, const char* indentchars_in ) const
		{
			return 0;
		}

	const int MxSeqSmpNode6056::Impl::myXsdID = 6056;
	const std::string MxSeqSmpNode6056::Impl::myXmlTypeName = "";
	const std::string MxSeqSmpNode6056::Impl::myCppClassName = "DefaultConstructed";
	const std::string MxSeqSmpNode6056::Impl::myDocumentation = "";

	}; // struct MxSeqSmpNode6056::Impl

