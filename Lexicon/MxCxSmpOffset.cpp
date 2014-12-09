/* See MusicXML License at the bottom of this code page. */

/**
  * @file       MxCxSmpOffset.cpp
  * @class      lexicon::MxCxSmpOffset
  * @author     Matthew James Briggs
  * @email      matthew.james.briggs@gmail.com
  * @url        http://matthewjamesbriggs.com
  * @date       2014-12-02 17:31:48
  * @project    Lexicon
  * @version    1.0
  * @musicxmlid 3722
  * 
  * @brief The 'Offset' class serves as a binding for the MusicXml 'offset' complexType.
  * 
 **/

#include "MxCxSmpOffset.h"
#include <sstream>
#include "_hidden_attributeStream.h"

/* Impl ------------------------------------------------------------------------------- */

namespace lexicon
{
	struct MxCxSmpOffset::Impl
	{
		Impl( const std::string& elementName, const MxNumberDivisions& value_in )
		:myElementName( elementName )
		,myValue( value_in )
		,mySound( MxEnumYesNo( lexicon::enums::YesNo::no ) )
		,myIsSoundPresent( false )
		{}

	private:
		std::string myElementName;
		MxNumberDivisions myValue;
		MxEnumYesNo mySound;
		bool myIsSoundPresent;

		const static int myXsdID;
		const static std::string myXmlTypeName;
		const static std::string myCppClassName;
		const static std::string myDocumentation;

	public:

/* GetSet Value and Element Name ------------------------------------------------------ */

		/** Returns the contained xs:simpleContent value. **/
		MxNumberDivisions getValue() const
		{
			return myValue;
		}

		/** Sets the contained xs:simpleContent value. **/
		void setValue( const MxNumberDivisions& value_in )
		{
			myValue = value_in;
		}

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

		/** Returns the internal value of the 'sound' (aka 'Sound') attribute. **/
		MxEnumYesNo getSound() const
		{
			return mySound;
		}

/* Set Attribute Values --------------------------------------------------------------- */

		/** Sets the internal value of the 'sound' (aka 'Sound') attribute. **/
		void setSound( const MxEnumYesNo& value_in )
		{
			mySound = value_in;
		}

/* Get IsAttributeRequired Values ----------------------------------------------------- */

		/** Indicates whether or not the 'sound' (aka 'Sound') attribute is required
		    to be present in a MusicXML document. **/
		bool getIsSoundRequired() const
		{
			return false;
		}

/* Get IsAttributePresent Values ------------------------------------------------------ */

		/** Indicates whether or not the 'sound' (aka 'Sound') attribute is (or
		    will be) present in the MusicXML document. **/
		bool getIsSoundPresent() const
		{
			return myIsSoundPresent;
		}

/* Set IsAttributePresent Values ------------------------------------------------------ */

		/** Sets the value which indicates whether or not the 'sound' (aka 'Sound')
		    attribute is (or will be) present in the MusicXML document. **/
		void setIsSoundPresent( const bool& value_in )
		{
			myIsSoundPresent = value_in;
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
			hidden::attributeStream( getIsSoundPresent(), "sound", getSound().toString(), os_out, isFirst );
			os_out << '>';
			os_out << getValue().toString();
			os_out << "</";
			os_out << getElementName();
			os_out << '>';
			return os_out;
		}

/* Get IsAttributeDefaultDefined Values ----------------------------------------------- */

		/** Indicates whether or not the 'sound' (aka 'Sound') has a default value
		    defined in the MusicXML xsd specification (either explicitly or in
		    the documentation). **/
		bool getIsSoundDefaultDefined() const
		{
			return true;
		}

/* Get AttributeDefaultValue ---------------------------------------------------------- */

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'sound' (aka 'Sound') attribute. **/
		MxEnumYesNo getSoundDefaultValue() const
		{
			return MxEnumYesNo( lexicon::enums::YesNo::no );
		}

	}; // struct MxCxSmpOffset::Impl

	const int MxCxSmpOffset::Impl::myXsdID = 3722;
	const std::string MxCxSmpOffset::Impl::myXmlTypeName = "offset";
	const std::string MxCxSmpOffset::Impl::myCppClassName = "MxCxSmpOffset";
	const std::string MxCxSmpOffset::Impl::myDocumentation = "An offset is represented in terms of divisions, and indicates where the direction will appear relative to the current musical location. This affects the visual appearance of the direction. If the sound attribute is 'yes', then the offset affects playback too. If the sound attribute is 'no', then any sound associated with the direction takes effect at the current location. The sound attribute is 'no' by default for compatibility with earlier versions of the MusicXML format. If an element within a direction includes a default-x attribute, the offset value will be ignored when determining the appearance of that element.";

} // namespace lexicon


/* MxCxSmpOffset ---------------------------------------------------------------------- */

namespace lexicon
{

/* Constructor, Destructor, Copy, Assignment ------------------------------------------ */

	MxCxSmpOffset::MxCxSmpOffset( const std::string& elementName, const MxNumberDivisions& value_in )
	:myImpl( new Impl( elementName, value_in ) ) {}

	MxCxSmpOffset::~MxCxSmpOffset() {}

	MxCxSmpOffset::MxCxSmpOffset( const MxCxSmpOffset& other )
	:myImpl( new Impl( *(other.myImpl) ) ) {}

	MxCxSmpOffset& MxCxSmpOffset::operator=( const MxCxSmpOffset& other )
	{
		this->myImpl = std::unique_ptr<Impl>( new Impl( *(other.myImpl) ) );
		return *this;
	}

/* GetSet Value and Element Name ------------------------------------------------------ */

	/** Returns the contained xs:simpleContent value. **/
	MxNumberDivisions MxCxSmpOffset::getValue() const
	{
		return myImpl->getValue();
	}

	/** Sets the contained xs:simpleContent value. **/
	void MxCxSmpOffset::setValue( const MxNumberDivisions& value_in )
	{
		myImpl->setValue( value_in );
	}

	/** Returns the name of the Xml element employing this ComplexType. **/
	std::string MxCxSmpOffset::getElementName() const
	{
		return myImpl->getElementName();
	}

/* Get Class Information -------------------------------------------------------------- */

	/** Returns the name of this xs:complexType as found in the musicxml.xsd
	    document. **/
	std::string MxCxSmpOffset::getXmlTypeName() const
	{
		return myImpl->getXmlTypeName();
	}

	/** Returns the name of this C++ class. **/
	std::string MxCxSmpOffset::getClassName() const
	{
		return myImpl->getClassName();
	}

	/** Returns the documentation for this musicxml type as found in the musicxml.xsd
	    document. **/
	std::string MxCxSmpOffset::getDocumentation() const
	{
		return myImpl->getDocumentation();
	}

/* Get Attribute Values --------------------------------------------------------------- */

	/** Returns the internal value of the 'sound' (aka 'Sound') attribute. **/
	MxEnumYesNo MxCxSmpOffset::getSound() const
	{
		return myImpl->getSound();
	}

/* Set Attribute Values --------------------------------------------------------------- */

	/** Sets the internal value of the 'sound' (aka 'Sound') attribute. **/
	void MxCxSmpOffset::setSound( const MxEnumYesNo& value_in )
	{
		myImpl->setSound( value_in );
	}

/* Get IsAttributeRequired Values ----------------------------------------------------- */

	/** Indicates whether or not the 'sound' (aka 'Sound') attribute is required
	    to be present in a MusicXML document. **/
	bool MxCxSmpOffset::getIsSoundRequired() const
	{
		return myImpl->getIsSoundRequired();
	}

/* Get IsAttributePresent Values ------------------------------------------------------ */

	/** Indicates whether or not the 'sound' (aka 'Sound') attribute is (or
	    will be) present in the MusicXML document. **/
	bool MxCxSmpOffset::getIsSoundPresent() const
	{
		return myImpl->getIsSoundPresent();
	}

/* Set IsAttributePresent Values ------------------------------------------------------ */

	/** Sets the value which indicates whether or not the 'sound' (aka 'Sound')
	    attribute is (or will be) present in the MusicXML document. **/
	void MxCxSmpOffset::setIsSoundPresent( const bool& value_in )
	{
		myImpl->setIsSoundPresent( value_in );
	}

/* Stringing and Streaming ------------------------------------------------------------ */

	/** Returns the xml representation of the object's value. **/
	std::string MxCxSmpOffset::toString() const
	{
		return myImpl->toString();
	}

	/** Returns the xml representation of the object's value. **/
	std::ostream& MxCxSmpOffset::stream( std::ostream& os_out ) const
	{
		return myImpl->stream( os_out );
	}

/* Get IsAttributeDefaultDefined Values ----------------------------------------------- */

	/** Indicates whether or not the 'sound' (aka 'Sound') has a default value
	    defined in the MusicXML xsd specification (either explicitly or in
	    the documentation). **/
	bool MxCxSmpOffset::getIsSoundDefaultDefined() const
	{
		return myImpl->getIsSoundDefaultDefined();
	}

/* Get AttributeDefaultValue ---------------------------------------------------------- */

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'sound' (aka 'Sound') attribute. **/
	MxEnumYesNo MxCxSmpOffset::getSoundDefaultValue() const
	{
		return myImpl->getSoundDefaultValue();
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

