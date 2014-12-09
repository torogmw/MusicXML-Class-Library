/* See MusicXML License at the bottom of this code page. */

/**
  * @file       MxEeRepeat.cpp
  * @class      lexicon::MxEeRepeat
  * @author     Matthew James Briggs
  * @email      matthew.james.briggs@gmail.com
  * @url        http://matthewjamesbriggs.com
  * @date       2014-12-05 16:47:03
  * @project    Lexicon
  * @version    1.0
  * @musicxmlid 3047
  * 
  * @brief The 'Repeat' class serves as a binding for the MusicXml 'repeat' element.
  * 
 **/

#include "MxEeRepeat.h"
#include <sstream>
#include "MxCxEmptyRepeat.h"

/* Impl ------------------------------------------------------------------------------- */

namespace lexicon
{
	struct MxEeRepeat::Impl
	{
		Impl()
		:myMxCxEmptyValue( MxCxEmptyRepeat( "repeat" ) )
		{}

	private:
		MxCxEmptyRepeat myMxCxEmptyValue;

		const static int myXsdID;
		const static std::string myXmlTypeName;
		const static std::string myCppClassName;
		const static std::string myDocumentation;
		const static int myMinOccurs;
		const static int myMaxOccurs;
		const static int myIsMaxOccursUnbounded;

	public:

/* minOccurs maxOccurs ---------------------------------------------------------------- */

		/** Returns the minOccurs value from the Music XML xsd specification. **/
		int getMinOccurs() const
		{
			return myMinOccurs;
		}

		/** Returns the maxOccurs value from the Music XML xsd specification. **/
		int getMaxOccurs() const
		{
			return myMaxOccurs;
		}

		/** Returns true if the maxOccurs value from the Music XML xsd specification
		    is 'unbounded'. **/
		bool getIsMaxOccursUnbounded() const
		{
			return myIsMaxOccursUnbounded;
		}

/* Get Class Information -------------------------------------------------------------- */

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

/* Get Attribute Values --------------------------------------------------------------- */

		/** Returns the internal value of the 'direction' (aka 'Direction') attribute. **/
		MxEnumBackwardForward getDirection() const
		{
			return myMxCxEmptyValue.getDirection();
		}

		/** Returns the internal value of the 'times' (aka 'Times') attribute. **/
		XsNonNegativeInteger getTimes() const
		{
			return myMxCxEmptyValue.getTimes();
		}

		/** Returns the internal value of the 'winged' (aka 'Winged') attribute. **/
		MxEnumWinged getWinged() const
		{
			return myMxCxEmptyValue.getWinged();
		}

/* Set Attribute Values --------------------------------------------------------------- */

		/** Sets the internal value of the 'direction' (aka 'Direction') attribute. **/
		void setDirection( const MxEnumBackwardForward& value_in )
		{
			myMxCxEmptyValue.setDirection( value_in );
		}

		/** Sets the internal value of the 'times' (aka 'Times') attribute. **/
		void setTimes( const XsNonNegativeInteger& value_in )
		{
			myMxCxEmptyValue.setTimes( value_in );
		}

		/** Sets the internal value of the 'winged' (aka 'Winged') attribute. **/
		void setWinged( const MxEnumWinged& value_in )
		{
			myMxCxEmptyValue.setWinged( value_in );
		}

/* Get IsAttributeRequired Values ----------------------------------------------------- */

		/** Indicates whether or not the 'direction' (aka 'Direction') attribute
		    is required to be present in a MusicXML document. **/
		bool getIsDirectionRequired() const
		{
			return myMxCxEmptyValue.getIsDirectionRequired();
		}

		/** Indicates whether or not the 'times' (aka 'Times') attribute is required
		    to be present in a MusicXML document. **/
		bool getIsTimesRequired() const
		{
			return myMxCxEmptyValue.getIsTimesRequired();
		}

		/** Indicates whether or not the 'winged' (aka 'Winged') attribute is required
		    to be present in a MusicXML document. **/
		bool getIsWingedRequired() const
		{
			return myMxCxEmptyValue.getIsWingedRequired();
		}

/* Get IsAttributePresent Values ------------------------------------------------------ */

		/** Indicates whether or not the 'direction' (aka 'Direction') attribute
		    is (or will be) present in the MusicXML document. Note: because 'direction'
		    is required by the MusicXML specification, getIsDirectionPresent will
		    always return 'true'. There is no corresponding setIsDirectionPresent
		    function for this attribute. **/
		bool getIsDirectionPresent() const
		{
			return myMxCxEmptyValue.getIsDirectionPresent();
		}

		/** Indicates whether or not the 'times' (aka 'Times') attribute is (or
		    will be) present in the MusicXML document. **/
		bool getIsTimesPresent() const
		{
			return myMxCxEmptyValue.getIsTimesPresent();
		}

		/** Indicates whether or not the 'winged' (aka 'Winged') attribute is (or
		    will be) present in the MusicXML document. **/
		bool getIsWingedPresent() const
		{
			return myMxCxEmptyValue.getIsWingedPresent();
		}

/* Set IsAttributePresent Values ------------------------------------------------------ */

		/** Sets the value which indicates whether or not the 'times' (aka 'Times')
		    attribute is (or will be) present in the MusicXML document. **/
		void setIsTimesPresent( const bool& value_in )
		{
			myMxCxEmptyValue.setIsTimesPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'winged' (aka 'Winged')
		    attribute is (or will be) present in the MusicXML document. **/
		void setIsWingedPresent( const bool& value_in )
		{
			myMxCxEmptyValue.setIsWingedPresent( value_in );
		}

/* Stringing and Streaming ------------------------------------------------------------ */

		/** Returns the xml representation of the object's value. **/
		std::string toString() const
		{
			std::stringstream ss;
			stream( ss );
			return ss.str();
		}

		/** Returns the xml representation of the object's value. **/
		std::ostream& stream( std::ostream& os_out ) const
		{
			return myMxCxEmptyValue.stream( os_out );
		}

/* Get IsAttributeDefaultDefined Values ----------------------------------------------- */

		/** Indicates whether or not the 'direction' (aka 'Direction') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). **/
		bool getIsDirectionDefaultDefined() const
		{
			return myMxCxEmptyValue.getIsDirectionDefaultDefined();
		}

		/** Indicates whether or not the 'times' (aka 'Times') has a default value
		    defined in the MusicXML xsd specification (either explicitly or in
		    the documentation). **/
		bool getIsTimesDefaultDefined() const
		{
			return myMxCxEmptyValue.getIsTimesDefaultDefined();
		}

		/** Indicates whether or not the 'winged' (aka 'Winged') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). **/
		bool getIsWingedDefaultDefined() const
		{
			return myMxCxEmptyValue.getIsWingedDefaultDefined();
		}

/* Get AttributeDefaultValue ---------------------------------------------------------- */

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'direction' (aka 'Direction') attribute. **/
		MxEnumBackwardForward getDirectionDefaultValue() const
		{
			return myMxCxEmptyValue.getDirectionDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'times' (aka 'Times') attribute. **/
		XsNonNegativeInteger getTimesDefaultValue() const
		{
			return myMxCxEmptyValue.getTimesDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'winged' (aka 'Winged') attribute. **/
		MxEnumWinged getWingedDefaultValue() const
		{
			return myMxCxEmptyValue.getWingedDefaultValue();
		}

	}; // struct MxEeRepeat::Impl

	const int MxEeRepeat::Impl::myXsdID = 3047;
	const std::string MxEeRepeat::Impl::myXmlTypeName = "repeat";
	const std::string MxEeRepeat::Impl::myCppClassName = "MxEeRepeat";
	const std::string MxEeRepeat::Impl::myDocumentation = "( no documentation )";
	const int MxEeRepeat::Impl::myMinOccurs = 0;
	const int MxEeRepeat::Impl::myMaxOccurs = 1;
	const int MxEeRepeat::Impl::myIsMaxOccursUnbounded = false;

} // namespace lexicon


/* MxEeRepeat ------------------------------------------------------------------------- */

namespace lexicon
{

/* Constructor, Destructor, Copy, Assignment ------------------------------------------ */

	MxEeRepeat::MxEeRepeat()
	:myImpl( new Impl() ) {}

	MxEeRepeat::~MxEeRepeat() {}

	MxEeRepeat::MxEeRepeat( const MxEeRepeat& other )
	:myImpl( new Impl( *(other.myImpl) ) ) {}

	MxEeRepeat& MxEeRepeat::operator=( const MxEeRepeat& other )
	{
		this->myImpl = std::unique_ptr<Impl>( new Impl( *(other.myImpl) ) );
		return *this;
	}

/* minOccurs maxOccurs ---------------------------------------------------------------- */

	/** Returns the minOccurs value from the Music XML xsd specification. **/
	int MxEeRepeat::getMinOccurs() const
	{
		return myImpl->getMinOccurs();
	}

	/** Returns the maxOccurs value from the Music XML xsd specification. **/
	int MxEeRepeat::getMaxOccurs() const
	{
		return myImpl->getMaxOccurs();
	}

	/** Returns true if the maxOccurs value from the Music XML xsd specification
	    is 'unbounded'. **/
	bool MxEeRepeat::getIsMaxOccursUnbounded() const
	{
		return myImpl->getIsMaxOccursUnbounded();
	}

/* Get Class Information -------------------------------------------------------------- */

	/** Returns the name of this xs:element as found in the musicxml.xsd document. **/
	std::string MxEeRepeat::getXmlTypeName() const
	{
		return myImpl->getXmlTypeName();
	}

	/** Returns the name of this C++ class. **/
	std::string MxEeRepeat::getClassName() const
	{
		return myImpl->getClassName();
	}

	/** Returns the documentation for this musicxml type as found in the musicxml.xsd
	    document. **/
	std::string MxEeRepeat::getDocumentation() const
	{
		return myImpl->getDocumentation();
	}

/* Get Attribute Values --------------------------------------------------------------- */

	/** Returns the internal value of the 'direction' (aka 'Direction') attribute. **/
	MxEnumBackwardForward MxEeRepeat::getDirection() const
	{
		return myImpl->getDirection();
	}

	/** Returns the internal value of the 'times' (aka 'Times') attribute. **/
	XsNonNegativeInteger MxEeRepeat::getTimes() const
	{
		return myImpl->getTimes();
	}

	/** Returns the internal value of the 'winged' (aka 'Winged') attribute. **/
	MxEnumWinged MxEeRepeat::getWinged() const
	{
		return myImpl->getWinged();
	}

/* Set Attribute Values --------------------------------------------------------------- */

	/** Sets the internal value of the 'direction' (aka 'Direction') attribute. **/
	void MxEeRepeat::setDirection( const MxEnumBackwardForward& value_in )
	{
		myImpl->setDirection( value_in );
	}

	/** Sets the internal value of the 'times' (aka 'Times') attribute. **/
	void MxEeRepeat::setTimes( const XsNonNegativeInteger& value_in )
	{
		myImpl->setTimes( value_in );
	}

	/** Sets the internal value of the 'winged' (aka 'Winged') attribute. **/
	void MxEeRepeat::setWinged( const MxEnumWinged& value_in )
	{
		myImpl->setWinged( value_in );
	}

/* Get IsAttributeRequired Values ----------------------------------------------------- */

	/** Indicates whether or not the 'direction' (aka 'Direction') attribute
	    is required to be present in a MusicXML document. **/
	bool MxEeRepeat::getIsDirectionRequired() const
	{
		return myImpl->getIsDirectionRequired();
	}

	/** Indicates whether or not the 'times' (aka 'Times') attribute is required
	    to be present in a MusicXML document. **/
	bool MxEeRepeat::getIsTimesRequired() const
	{
		return myImpl->getIsTimesRequired();
	}

	/** Indicates whether or not the 'winged' (aka 'Winged') attribute is required
	    to be present in a MusicXML document. **/
	bool MxEeRepeat::getIsWingedRequired() const
	{
		return myImpl->getIsWingedRequired();
	}

/* Get IsAttributePresent Values ------------------------------------------------------ */

	/** Indicates whether or not the 'direction' (aka 'Direction') attribute
	    is (or will be) present in the MusicXML document. Note: because 'direction'
	    is required by the MusicXML specification, getIsDirectionPresent will
	    always return 'true'. There is no corresponding setIsDirectionPresent
	    function for this attribute. **/
	bool MxEeRepeat::getIsDirectionPresent() const
	{
		return myImpl->getIsDirectionPresent();
	}

	/** Indicates whether or not the 'times' (aka 'Times') attribute is (or
	    will be) present in the MusicXML document. **/
	bool MxEeRepeat::getIsTimesPresent() const
	{
		return myImpl->getIsTimesPresent();
	}

	/** Indicates whether or not the 'winged' (aka 'Winged') attribute is (or
	    will be) present in the MusicXML document. **/
	bool MxEeRepeat::getIsWingedPresent() const
	{
		return myImpl->getIsWingedPresent();
	}

/* Set IsAttributePresent Values ------------------------------------------------------ */

	/** Sets the value which indicates whether or not the 'times' (aka 'Times')
	    attribute is (or will be) present in the MusicXML document. **/
	void MxEeRepeat::setIsTimesPresent( const bool& value_in )
	{
		myImpl->setIsTimesPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'winged' (aka 'Winged')
	    attribute is (or will be) present in the MusicXML document. **/
	void MxEeRepeat::setIsWingedPresent( const bool& value_in )
	{
		myImpl->setIsWingedPresent( value_in );
	}

/* Stringing and Streaming ------------------------------------------------------------ */

	/** Returns the xml representation of the object's value. **/
	std::string MxEeRepeat::toString() const
	{
		return myImpl->toString();
	}

	/** Returns the xml representation of the object's value. **/
	std::ostream& MxEeRepeat::stream( std::ostream& os_out ) const
	{
		return myImpl->stream( os_out );
	}

/* Get IsAttributeDefaultDefined Values ----------------------------------------------- */

	/** Indicates whether or not the 'direction' (aka 'Direction') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). **/
	bool MxEeRepeat::getIsDirectionDefaultDefined() const
	{
		return myImpl->getIsDirectionDefaultDefined();
	}

	/** Indicates whether or not the 'times' (aka 'Times') has a default value
	    defined in the MusicXML xsd specification (either explicitly or in
	    the documentation). **/
	bool MxEeRepeat::getIsTimesDefaultDefined() const
	{
		return myImpl->getIsTimesDefaultDefined();
	}

	/** Indicates whether or not the 'winged' (aka 'Winged') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). **/
	bool MxEeRepeat::getIsWingedDefaultDefined() const
	{
		return myImpl->getIsWingedDefaultDefined();
	}

/* Get AttributeDefaultValue ---------------------------------------------------------- */

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'direction' (aka 'Direction') attribute. **/
	MxEnumBackwardForward MxEeRepeat::getDirectionDefaultValue() const
	{
		return myImpl->getDirectionDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'times' (aka 'Times') attribute. **/
	XsNonNegativeInteger MxEeRepeat::getTimesDefaultValue() const
	{
		return myImpl->getTimesDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'winged' (aka 'Winged') attribute. **/
	MxEnumWinged MxEeRepeat::getWingedDefaultValue() const
	{
		return myImpl->getWingedDefaultValue();
	}


} // namespace lexicon



/*

MusicXML™ Public License Version 3.0

This MusicXML™ work (including software, documents, or other related items) is being provided by the Copyright Holder under the following license. By obtaining, using and/or copying this work, each Contributor and Recipient (hereinafter, collectively known as "Licensee") agree that he/she has read, understood, and will comply with the following terms and conditions:

A. DEFINITIONS

"Copyright Holder" means MakeMusic, Inc.

"Contribution" means:

in the case of MakeMusic, Inc., the Original Program, and
in the case of each Contributor,
changes to the Program, and
additions to the Program;
where such changes and/or additions to the Program originate from and are distributed by that particular Contributor. A Contribution 'originates' from a Contributor if it was added to the Program by such Contributor itself or anyone acting on such Contributor's behalf. Contributions do not include additions to the Program which: (i) are separate modules of software distributed in conjunction with the Program under their own license agreement, and (ii) are not derivative works of the Program.
"Contributor" means MakeMusic, Inc. and any other entity that distributes the Program.

"MusicXML™ Mark" means the MusicXML™ trademark owned by MakeMusic, Inc.

"Original Program" means the original version of the software accompanying this Agreement as released by MakeMusic, Inc., including source code, object code and documentation, if any.

"Program" means the Original Program and Contributions.

"Recipient" means anyone who receives the Program under this Agreement, including all Contributors.

B. GRANT OF RIGHTS

Permission to use, copy, modify, and distribute the Program, with or without modification, for any purpose and without fee or royalty is hereby granted, provided that each Recipient include the following on ALL copies of the Program or portions thereof, including modifications, that he/she make:

The full text of this License in a location viewable to users of the redistributed or derivative work.

Any pre-existing intellectual property disclaimers, notices, or terms and conditions. If none exist, a short notice of the following form (hypertext is preferred, text is permitted) should be used within the body of any redistributed or derivative code: "© MakeMusic, Inc. All rights reserved. http://www.makemusic.com"

Notice of any changes or modifications to the MusicXML™ files, including the date changes were made. (We recommend you provide URLs to the location from which the code is derived.)

In addition, creators of derivative works must include the full text of this License in a location viewable to users of the derivative work.

Title to copyright in the Program will at all times remain with Copyright Holder.

C. NO WARRANTY

EXCEPT AS EXPRESSLY SET FORTH IN THIS AGREEMENT, THE PROGRAM IS PROVIDED ON AN "AS IS" BASIS, AND COPYRIGHT HOLDER MAKES NO WARRANTIES OR CONDITIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED INCLUDING, WITHOUT LIMITATION, ANY WARRANTIES OR CONDITIONS OF TITLE, NON-INFRINGEMENT, MERCHANTABILITY OR FITNESS FOR A PARTICULAR PURPOSE. Each Recipient is solely responsible for determining the appropriateness of using and distributing the Program and assumes all risks associated with its exercise of rights under this Agreement, including but not limited to the risks and costs of program errors, compliance with applicable laws, damage to or loss of data, programs or equipment, and unavailability or interruption of operations.

D. DISCLAIMER OF LIABILITY

EXCEPT AS EXPRESSLY SET FORTH IN THIS AGREEMENT, NEITHER COPYRIGHT HOLDER NOR ANY CONTRIBUTORS SHALL HAVE ANY LIABILITY FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING WITHOUT LIMITATION LOST PROFITS), HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OR DISTRIBUTION OF THE PROGRAM OR THE EXERCISE OF ANY RIGHTS GRANTED HEREUNDER, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGES.

E. TRADEMARK

1. The MusicXML™ Mark (or a derivative Mark, such as MusicXML™ Plus) may not be used to identify any product or service not originating from or licensed by Copyright Holder without specific, written prior permission. However, it is acceptable for a Contributor product or service to be described as being MusicXML™-compatible, assuming that the claim is true in Copyright Holder’s reasonable judgment.

2. This License does not grant any rights to use any other trademarks owned by Copyright Holder, including without limitation "Recordare®", "Dolet®", and "In the Beginning Was the Note®", even if such marks are included in the Program. For purposes of clarification and the avoidance of doubt, the trademarks "Recordare®", "Dolet®", and "In the Beginning Was the Note®" must not be used to endorse or promote Contributor versions of the Program without the prior written permission of Copyright Holder.

3. All rights not expressly granted herein by Copyright Holder with respect to the MusicXML™ Mark or any other trademarks owned by Copyright Holder are reserved by and to Copyright Holder.

F. GENERAL

If any provision of this Agreement is invalid or unenforceable under applicable law, it shall not affect the validity or enforceability of the remainder of the terms of this Agreement, and without further action by the parties hereto, such provision shall be reformed to the minimum extent necessary to make such provision valid and enforceable.

All Recipient's rights under this Agreement shall terminate if it fails to comply with any of the material terms or conditions of this Agreement and does not cure such failure in a reasonable period of time after becoming aware of such noncompliance. If all Recipient's rights under this Agreement terminate, Recipient agrees to cease use and distribution of the Program as soon as reasonably practicable. However, Recipient's obligations under this Agreement and any licenses granted by Recipient relating to the Program shall continue and survive.

MakeMusic, Inc. may publish new versions (including revisions) of this Agreement from time to time. Each new version of the Agreement will be given a distinguishing version number. The Program (including Contributions) may always be distributed subject to the version of the Agreement under which it was received. In addition, after a new version of the Agreement is published, Contributor may elect to distribute the Program (including its Contributions) under the new version. No one other than MakeMusic, Inc. has the right to modify this Agreement. Except as expressly stated in Sections B and E above, Recipient receives no rights or licenses to the intellectual property of any Contributor under this Agreement, whether expressly, by implication, estoppel or otherwise. All rights in the Program not expressly granted under this Agreement are reserved.

This Agreement is governed by the laws of the State of California and the intellectual property laws of the United States of America.


*/

