/* See MusicXML License at the bottom of this code page. */

/**
  * @file       MxCxEmptyGrace.cpp
  * @class      lexicon::MxCxEmptyGrace
  * @author     Matthew James Briggs
  * @email      matthew.james.briggs@gmail.com
  * @url        http://matthewjamesbriggs.com
  * @date       2014-12-03 16:31:27
  * @project    Lexicon
  * @version    1.0
  * @musicxmlid 4657
  * 
  * @brief The 'Grace' class serves as a binding for the MusicXml 'grace' complexType.
  * 
 **/

#include "MxCxEmptyGrace.h"
#include <sstream>
#include "_hidden_attributeStream.h"

/* Impl ------------------------------------------------------------------------------- */

namespace lexicon
{
	struct MxCxEmptyGrace::Impl
	{
		Impl( const std::string& elementName )
		:myElementName( elementName )
		,myStealTimePrevious()
		,myStealTimeFollowing()
		,myMakeTime()
		,mySlash()
		,myIsStealTimePreviousPresent( false )
		,myIsStealTimeFollowingPresent( false )
		,myIsMakeTimePresent( false )
		,myIsSlashPresent( false )
		{}

	private:
		std::string myElementName;
		MxNumberPercent myStealTimePrevious;
		MxNumberPercent myStealTimeFollowing;
		MxNumberDivisions myMakeTime;
		MxEnumYesNo mySlash;
		bool myIsStealTimePreviousPresent;
		bool myIsStealTimeFollowingPresent;
		bool myIsMakeTimePresent;
		bool myIsSlashPresent;

		const static int myXsdID;
		const static std::string myXmlTypeName;
		const static std::string myCppClassName;
		const static std::string myDocumentation;

	public:

/* GetSet Value and Element Name ------------------------------------------------------ */

		/** Returns the name of the Xml element employing this ComplexType. **/
		std::string getElementName() const
		{
			return myElementName;
		}

/* Get Class Information -------------------------------------------------------------- */

		/** Returns the name of this xs:complexType as found in the musicxml.xsd
		    document. **/
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

		/** Returns the internal value of the 'steal-time-previous' (aka 'StealTimePrevious')
		    attribute. **/
		MxNumberPercent getStealTimePrevious() const
		{
			return myStealTimePrevious;
		}

		/** Returns the internal value of the 'steal-time-following' (aka 'StealTimeFollowing')
		    attribute. **/
		MxNumberPercent getStealTimeFollowing() const
		{
			return myStealTimeFollowing;
		}

		/** Returns the internal value of the 'make-time' (aka 'MakeTime') attribute. **/
		MxNumberDivisions getMakeTime() const
		{
			return myMakeTime;
		}

		/** Returns the internal value of the 'slash' (aka 'Slash') attribute. **/
		MxEnumYesNo getSlash() const
		{
			return mySlash;
		}

/* Set Attribute Values --------------------------------------------------------------- */

		/** Sets the internal value of the 'steal-time-previous' (aka 'StealTimePrevious')
		    attribute. **/
		void setStealTimePrevious( const MxNumberPercent& value_in )
		{
			myStealTimePrevious = value_in;
		}

		/** Sets the internal value of the 'steal-time-following' (aka 'StealTimeFollowing')
		    attribute. **/
		void setStealTimeFollowing( const MxNumberPercent& value_in )
		{
			myStealTimeFollowing = value_in;
		}

		/** Sets the internal value of the 'make-time' (aka 'MakeTime') attribute. **/
		void setMakeTime( const MxNumberDivisions& value_in )
		{
			myMakeTime = value_in;
		}

		/** Sets the internal value of the 'slash' (aka 'Slash') attribute. **/
		void setSlash( const MxEnumYesNo& value_in )
		{
			mySlash = value_in;
		}

/* Get IsAttributeRequired Values ----------------------------------------------------- */

		/** Indicates whether or not the 'steal-time-previous' (aka 'StealTimePrevious')
		    attribute is required to be present in a MusicXML document. **/
		bool getIsStealTimePreviousRequired() const
		{
			return false;
		}

		/** Indicates whether or not the 'steal-time-following' (aka 'StealTimeFollowing')
		    attribute is required to be present in a MusicXML document. **/
		bool getIsStealTimeFollowingRequired() const
		{
			return false;
		}

		/** Indicates whether or not the 'make-time' (aka 'MakeTime') attribute
		    is required to be present in a MusicXML document. **/
		bool getIsMakeTimeRequired() const
		{
			return false;
		}

		/** Indicates whether or not the 'slash' (aka 'Slash') attribute is required
		    to be present in a MusicXML document. **/
		bool getIsSlashRequired() const
		{
			return false;
		}

/* Get IsAttributePresent Values ------------------------------------------------------ */

		/** Indicates whether or not the 'steal-time-previous' (aka 'StealTimePrevious')
		    attribute is (or will be) present in the MusicXML document. **/
		bool getIsStealTimePreviousPresent() const
		{
			return myIsStealTimePreviousPresent;
		}

		/** Indicates whether or not the 'steal-time-following' (aka 'StealTimeFollowing')
		    attribute is (or will be) present in the MusicXML document. **/
		bool getIsStealTimeFollowingPresent() const
		{
			return myIsStealTimeFollowingPresent;
		}

		/** Indicates whether or not the 'make-time' (aka 'MakeTime') attribute
		    is (or will be) present in the MusicXML document. **/
		bool getIsMakeTimePresent() const
		{
			return myIsMakeTimePresent;
		}

		/** Indicates whether or not the 'slash' (aka 'Slash') attribute is (or
		    will be) present in the MusicXML document. **/
		bool getIsSlashPresent() const
		{
			return myIsSlashPresent;
		}

/* Set IsAttributePresent Values ------------------------------------------------------ */

		/** Sets the value which indicates whether or not the 'steal-time-previous'
		    (aka 'StealTimePrevious') attribute is (or will be) present in the
		    MusicXML document. **/
		void setIsStealTimePreviousPresent( const bool& value_in )
		{
			myIsStealTimePreviousPresent = value_in;
		}

		/** Sets the value which indicates whether or not the 'steal-time-following'
		    (aka 'StealTimeFollowing') attribute is (or will be) present in the
		    MusicXML document. **/
		void setIsStealTimeFollowingPresent( const bool& value_in )
		{
			myIsStealTimeFollowingPresent = value_in;
		}

		/** Sets the value which indicates whether or not the 'make-time' (aka
		    'MakeTime') attribute is (or will be) present in the MusicXML document. **/
		void setIsMakeTimePresent( const bool& value_in )
		{
			myIsMakeTimePresent = value_in;
		}

		/** Sets the value which indicates whether or not the 'slash' (aka 'Slash')
		    attribute is (or will be) present in the MusicXML document. **/
		void setIsSlashPresent( const bool& value_in )
		{
			myIsSlashPresent = value_in;
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
			bool isFirst = false;
			os_out << '<';
			os_out << getElementName();
			hidden::attributeStream( getIsStealTimePreviousPresent(), "steal-time-previous", getStealTimePrevious().toString(), os_out, isFirst );
			hidden::attributeStream( getIsStealTimeFollowingPresent(), "steal-time-following", getStealTimeFollowing().toString(), os_out, isFirst );
			hidden::attributeStream( getIsMakeTimePresent(), "make-time", getMakeTime().toString(), os_out, isFirst );
			hidden::attributeStream( getIsSlashPresent(), "slash", getSlash().toString(), os_out, isFirst );
			os_out << "/>";
			return os_out;
		}

/* Get IsAttributeDefaultDefined Values ----------------------------------------------- */

		/** Indicates whether or not the 'steal-time-previous' (aka 'StealTimePrevious')
		    has a default value defined in the MusicXML xsd specification (either
		    explicitly or in the documentation). **/
		bool getIsStealTimePreviousDefaultDefined() const
		{
			return false;
		}

		/** Indicates whether or not the 'steal-time-following' (aka 'StealTimeFollowing')
		    has a default value defined in the MusicXML xsd specification (either
		    explicitly or in the documentation). **/
		bool getIsStealTimeFollowingDefaultDefined() const
		{
			return false;
		}

		/** Indicates whether or not the 'make-time' (aka 'MakeTime') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). **/
		bool getIsMakeTimeDefaultDefined() const
		{
			return false;
		}

		/** Indicates whether or not the 'slash' (aka 'Slash') has a default value
		    defined in the MusicXML xsd specification (either explicitly or in
		    the documentation). **/
		bool getIsSlashDefaultDefined() const
		{
			return false;
		}

/* Get AttributeDefaultValue ---------------------------------------------------------- */

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'steal-time-previous' (aka 'StealTimePrevious') attribute. **/
		MxNumberPercent getStealTimePreviousDefaultValue() const
		{
			return MxNumberPercent(  );
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'steal-time-following' (aka 'StealTimeFollowing') attribute. **/
		MxNumberPercent getStealTimeFollowingDefaultValue() const
		{
			return MxNumberPercent(  );
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'make-time' (aka 'MakeTime') attribute. **/
		MxNumberDivisions getMakeTimeDefaultValue() const
		{
			return MxNumberDivisions(  );
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'slash' (aka 'Slash') attribute. **/
		MxEnumYesNo getSlashDefaultValue() const
		{
			return MxEnumYesNo(  );
		}

	}; // struct MxCxEmptyGrace::Impl

	const int MxCxEmptyGrace::Impl::myXsdID = 4657;
	const std::string MxCxEmptyGrace::Impl::myXmlTypeName = "grace";
	const std::string MxCxEmptyGrace::Impl::myCppClassName = "MxCxEmptyGrace";
	const std::string MxCxEmptyGrace::Impl::myDocumentation = "The grace type indicates the presence of a grace note. The slash attribute for a grace note is yes for slashed eighth notes. The other grace note attributes come from MuseData sound suggestions. The steal-time-previous attribute indicates the percentage of time to steal from the previous note for the grace note. The steal-time-following attribute indicates the percentage of time to steal from the following note for the grace note, as for appoggiaturas. The make-time attribute indicates to make time, not steal time; the units are in real-time divisions for the grace note.";

} // namespace lexicon


/* MxCxEmptyGrace --------------------------------------------------------------------- */

namespace lexicon
{

/* Constructor, Destructor, Copy, Assignment ------------------------------------------ */

	MxCxEmptyGrace::MxCxEmptyGrace( const std::string& elementName )
	:myImpl( new Impl( elementName ) ) {}

	MxCxEmptyGrace::~MxCxEmptyGrace() {}

	MxCxEmptyGrace::MxCxEmptyGrace( const MxCxEmptyGrace& other )
	:myImpl( new Impl( *(other.myImpl) ) ) {}

	MxCxEmptyGrace& MxCxEmptyGrace::operator=( const MxCxEmptyGrace& other )
	{
		this->myImpl = std::unique_ptr<Impl>( new Impl( *(other.myImpl) ) );
		return *this;
	}

/* GetSet Value and Element Name ------------------------------------------------------ */

	/** Returns the name of the Xml element employing this ComplexType. **/
	std::string MxCxEmptyGrace::getElementName() const
	{
		return myImpl->getElementName();
	}

/* Get Class Information -------------------------------------------------------------- */

	/** Returns the name of this xs:complexType as found in the musicxml.xsd
	    document. **/
	std::string MxCxEmptyGrace::getXmlTypeName() const
	{
		return myImpl->getXmlTypeName();
	}

	/** Returns the name of this C++ class. **/
	std::string MxCxEmptyGrace::getClassName() const
	{
		return myImpl->getClassName();
	}

	/** Returns the documentation for this musicxml type as found in the musicxml.xsd
	    document. **/
	std::string MxCxEmptyGrace::getDocumentation() const
	{
		return myImpl->getDocumentation();
	}

/* Get Attribute Values --------------------------------------------------------------- */

	/** Returns the internal value of the 'steal-time-previous' (aka 'StealTimePrevious')
	    attribute. **/
	MxNumberPercent MxCxEmptyGrace::getStealTimePrevious() const
	{
		return myImpl->getStealTimePrevious();
	}

	/** Returns the internal value of the 'steal-time-following' (aka 'StealTimeFollowing')
	    attribute. **/
	MxNumberPercent MxCxEmptyGrace::getStealTimeFollowing() const
	{
		return myImpl->getStealTimeFollowing();
	}

	/** Returns the internal value of the 'make-time' (aka 'MakeTime') attribute. **/
	MxNumberDivisions MxCxEmptyGrace::getMakeTime() const
	{
		return myImpl->getMakeTime();
	}

	/** Returns the internal value of the 'slash' (aka 'Slash') attribute. **/
	MxEnumYesNo MxCxEmptyGrace::getSlash() const
	{
		return myImpl->getSlash();
	}

/* Set Attribute Values --------------------------------------------------------------- */

	/** Sets the internal value of the 'steal-time-previous' (aka 'StealTimePrevious')
	    attribute. **/
	void MxCxEmptyGrace::setStealTimePrevious( const MxNumberPercent& value_in )
	{
		myImpl->setStealTimePrevious( value_in );
	}

	/** Sets the internal value of the 'steal-time-following' (aka 'StealTimeFollowing')
	    attribute. **/
	void MxCxEmptyGrace::setStealTimeFollowing( const MxNumberPercent& value_in )
	{
		myImpl->setStealTimeFollowing( value_in );
	}

	/** Sets the internal value of the 'make-time' (aka 'MakeTime') attribute. **/
	void MxCxEmptyGrace::setMakeTime( const MxNumberDivisions& value_in )
	{
		myImpl->setMakeTime( value_in );
	}

	/** Sets the internal value of the 'slash' (aka 'Slash') attribute. **/
	void MxCxEmptyGrace::setSlash( const MxEnumYesNo& value_in )
	{
		myImpl->setSlash( value_in );
	}

/* Get IsAttributeRequired Values ----------------------------------------------------- */

	/** Indicates whether or not the 'steal-time-previous' (aka 'StealTimePrevious')
	    attribute is required to be present in a MusicXML document. **/
	bool MxCxEmptyGrace::getIsStealTimePreviousRequired() const
	{
		return myImpl->getIsStealTimePreviousRequired();
	}

	/** Indicates whether or not the 'steal-time-following' (aka 'StealTimeFollowing')
	    attribute is required to be present in a MusicXML document. **/
	bool MxCxEmptyGrace::getIsStealTimeFollowingRequired() const
	{
		return myImpl->getIsStealTimeFollowingRequired();
	}

	/** Indicates whether or not the 'make-time' (aka 'MakeTime') attribute
	    is required to be present in a MusicXML document. **/
	bool MxCxEmptyGrace::getIsMakeTimeRequired() const
	{
		return myImpl->getIsMakeTimeRequired();
	}

	/** Indicates whether or not the 'slash' (aka 'Slash') attribute is required
	    to be present in a MusicXML document. **/
	bool MxCxEmptyGrace::getIsSlashRequired() const
	{
		return myImpl->getIsSlashRequired();
	}

/* Get IsAttributePresent Values ------------------------------------------------------ */

	/** Indicates whether or not the 'steal-time-previous' (aka 'StealTimePrevious')
	    attribute is (or will be) present in the MusicXML document. **/
	bool MxCxEmptyGrace::getIsStealTimePreviousPresent() const
	{
		return myImpl->getIsStealTimePreviousPresent();
	}

	/** Indicates whether or not the 'steal-time-following' (aka 'StealTimeFollowing')
	    attribute is (or will be) present in the MusicXML document. **/
	bool MxCxEmptyGrace::getIsStealTimeFollowingPresent() const
	{
		return myImpl->getIsStealTimeFollowingPresent();
	}

	/** Indicates whether or not the 'make-time' (aka 'MakeTime') attribute
	    is (or will be) present in the MusicXML document. **/
	bool MxCxEmptyGrace::getIsMakeTimePresent() const
	{
		return myImpl->getIsMakeTimePresent();
	}

	/** Indicates whether or not the 'slash' (aka 'Slash') attribute is (or
	    will be) present in the MusicXML document. **/
	bool MxCxEmptyGrace::getIsSlashPresent() const
	{
		return myImpl->getIsSlashPresent();
	}

/* Set IsAttributePresent Values ------------------------------------------------------ */

	/** Sets the value which indicates whether or not the 'steal-time-previous'
	    (aka 'StealTimePrevious') attribute is (or will be) present in the
	    MusicXML document. **/
	void MxCxEmptyGrace::setIsStealTimePreviousPresent( const bool& value_in )
	{
		myImpl->setIsStealTimePreviousPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'steal-time-following'
	    (aka 'StealTimeFollowing') attribute is (or will be) present in the
	    MusicXML document. **/
	void MxCxEmptyGrace::setIsStealTimeFollowingPresent( const bool& value_in )
	{
		myImpl->setIsStealTimeFollowingPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'make-time' (aka
	    'MakeTime') attribute is (or will be) present in the MusicXML document. **/
	void MxCxEmptyGrace::setIsMakeTimePresent( const bool& value_in )
	{
		myImpl->setIsMakeTimePresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'slash' (aka 'Slash')
	    attribute is (or will be) present in the MusicXML document. **/
	void MxCxEmptyGrace::setIsSlashPresent( const bool& value_in )
	{
		myImpl->setIsSlashPresent( value_in );
	}

/* Stringing and Streaming ------------------------------------------------------------ */

	/** Returns the xml representation of the object's value. **/
	std::string MxCxEmptyGrace::toString() const
	{
		return myImpl->toString();
	}

	/** Returns the xml representation of the object's value. **/
	std::ostream& MxCxEmptyGrace::stream( std::ostream& os_out ) const
	{
		return myImpl->stream( os_out );
	}

/* Get IsAttributeDefaultDefined Values ----------------------------------------------- */

	/** Indicates whether or not the 'steal-time-previous' (aka 'StealTimePrevious')
	    has a default value defined in the MusicXML xsd specification (either
	    explicitly or in the documentation). **/
	bool MxCxEmptyGrace::getIsStealTimePreviousDefaultDefined() const
	{
		return myImpl->getIsStealTimePreviousDefaultDefined();
	}

	/** Indicates whether or not the 'steal-time-following' (aka 'StealTimeFollowing')
	    has a default value defined in the MusicXML xsd specification (either
	    explicitly or in the documentation). **/
	bool MxCxEmptyGrace::getIsStealTimeFollowingDefaultDefined() const
	{
		return myImpl->getIsStealTimeFollowingDefaultDefined();
	}

	/** Indicates whether or not the 'make-time' (aka 'MakeTime') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). **/
	bool MxCxEmptyGrace::getIsMakeTimeDefaultDefined() const
	{
		return myImpl->getIsMakeTimeDefaultDefined();
	}

	/** Indicates whether or not the 'slash' (aka 'Slash') has a default value
	    defined in the MusicXML xsd specification (either explicitly or in
	    the documentation). **/
	bool MxCxEmptyGrace::getIsSlashDefaultDefined() const
	{
		return myImpl->getIsSlashDefaultDefined();
	}

/* Get AttributeDefaultValue ---------------------------------------------------------- */

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'steal-time-previous' (aka 'StealTimePrevious') attribute. **/
	MxNumberPercent MxCxEmptyGrace::getStealTimePreviousDefaultValue() const
	{
		return myImpl->getStealTimePreviousDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'steal-time-following' (aka 'StealTimeFollowing') attribute. **/
	MxNumberPercent MxCxEmptyGrace::getStealTimeFollowingDefaultValue() const
	{
		return myImpl->getStealTimeFollowingDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'make-time' (aka 'MakeTime') attribute. **/
	MxNumberDivisions MxCxEmptyGrace::getMakeTimeDefaultValue() const
	{
		return myImpl->getMakeTimeDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'slash' (aka 'Slash') attribute. **/
	MxEnumYesNo MxCxEmptyGrace::getSlashDefaultValue() const
	{
		return myImpl->getSlashDefaultValue();
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

