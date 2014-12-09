/* See MusicXML License at the bottom of this code page. */

/**
  * @file       MxCxEmptyLyricLanguage.cpp
  * @class      lexicon::MxCxEmptyLyricLanguage
  * @author     Matthew James Briggs
  * @email      matthew.james.briggs@gmail.com
  * @url        http://matthewjamesbriggs.com
  * @date       2014-12-03 16:31:27
  * @project    Lexicon
  * @version    1.0
  * @musicxmlid 5779
  * 
  * @brief The 'LyricLanguage' class serves as a binding for the MusicXml 'lyric-language'
  * complexType.
  * 
 **/

#include "MxCxEmptyLyricLanguage.h"
#include <sstream>
#include "_hidden_attributeStream.h"

/* Impl ------------------------------------------------------------------------------- */

namespace lexicon
{
	struct MxCxEmptyLyricLanguage::Impl
	{
		Impl( const std::string& elementName )
		:myElementName( elementName )
		,myNumber()
		,myName()
		,myXmlLang()
		,myIsNumberPresent( false )
		,myIsNamePresent( false )
		,myIsXmlLangPresent( true )
		{}

	private:
		std::string myElementName;
		XsNmToken myNumber;
		XsToken myName;
		XmlLang myXmlLang;
		bool myIsNumberPresent;
		bool myIsNamePresent;
		bool myIsXmlLangPresent;

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

		/** Returns the internal value of the 'number' (aka 'Number') attribute. **/
		XsNmToken getNumber() const
		{
			return myNumber;
		}

		/** Returns the internal value of the 'name' (aka 'Name') attribute. **/
		XsToken getName() const
		{
			return myName;
		}

		/** Returns the internal value of the 'xml:lang' (aka 'XmlLang') attribute. **/
		XmlLang getXmlLang() const
		{
			return myXmlLang;
		}

/* Set Attribute Values --------------------------------------------------------------- */

		/** Sets the internal value of the 'number' (aka 'Number') attribute. **/
		void setNumber( const XsNmToken& value_in )
		{
			myNumber = value_in;
		}

		/** Sets the internal value of the 'name' (aka 'Name') attribute. **/
		void setName( const XsToken& value_in )
		{
			myName = value_in;
		}

		/** Sets the internal value of the 'xml:lang' (aka 'XmlLang') attribute. **/
		void setXmlLang( const XmlLang& value_in )
		{
			myXmlLang = value_in;
		}

/* Get IsAttributeRequired Values ----------------------------------------------------- */

		/** Indicates whether or not the 'number' (aka 'Number') attribute is required
		    to be present in a MusicXML document. **/
		bool getIsNumberRequired() const
		{
			return false;
		}

		/** Indicates whether or not the 'name' (aka 'Name') attribute is required
		    to be present in a MusicXML document. **/
		bool getIsNameRequired() const
		{
			return false;
		}

		/** Indicates whether or not the 'xml:lang' (aka 'XmlLang') attribute is
		    required to be present in a MusicXML document. **/
		bool getIsXmlLangRequired() const
		{
			return true;
		}

/* Get IsAttributePresent Values ------------------------------------------------------ */

		/** Indicates whether or not the 'number' (aka 'Number') attribute is (or
		    will be) present in the MusicXML document. **/
		bool getIsNumberPresent() const
		{
			return myIsNumberPresent;
		}

		/** Indicates whether or not the 'name' (aka 'Name') attribute is (or will
		    be) present in the MusicXML document. **/
		bool getIsNamePresent() const
		{
			return myIsNamePresent;
		}

		/** Indicates whether or not the 'xml:lang' (aka 'XmlLang') attribute is
		    (or will be) present in the MusicXML document. Note: because 'xml:lang'
		    is required by the MusicXML specification, getIsXmlLangPresent will
		    always return 'true'. There is no corresponding setIsXmlLangPresent
		    function for this attribute. **/
		bool getIsXmlLangPresent() const
		{
			return myIsXmlLangPresent;
		}

/* Set IsAttributePresent Values ------------------------------------------------------ */

		/** Sets the value which indicates whether or not the 'number' (aka 'Number')
		    attribute is (or will be) present in the MusicXML document. **/
		void setIsNumberPresent( const bool& value_in )
		{
			myIsNumberPresent = value_in;
		}

		/** Sets the value which indicates whether or not the 'name' (aka 'Name')
		    attribute is (or will be) present in the MusicXML document. **/
		void setIsNamePresent( const bool& value_in )
		{
			myIsNamePresent = value_in;
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
			hidden::attributeStream( getIsNumberPresent(), "number", getNumber().toString(), os_out, isFirst );
			hidden::attributeStream( getIsNamePresent(), "name", getName().toString(), os_out, isFirst );
			hidden::attributeStream( getIsXmlLangPresent(), "xml:lang", getXmlLang().toString(), os_out, isFirst );
			os_out << "/>";
			return os_out;
		}

/* Get IsAttributeDefaultDefined Values ----------------------------------------------- */

		/** Indicates whether or not the 'number' (aka 'Number') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). **/
		bool getIsNumberDefaultDefined() const
		{
			return false;
		}

		/** Indicates whether or not the 'name' (aka 'Name') has a default value
		    defined in the MusicXML xsd specification (either explicitly or in
		    the documentation). **/
		bool getIsNameDefaultDefined() const
		{
			return false;
		}

		/** Indicates whether or not the 'xml:lang' (aka 'XmlLang') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). **/
		bool getIsXmlLangDefaultDefined() const
		{
			return false;
		}

/* Get AttributeDefaultValue ---------------------------------------------------------- */

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'number' (aka 'Number') attribute. **/
		XsNmToken getNumberDefaultValue() const
		{
			return XsNmToken(  );
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'name' (aka 'Name') attribute. **/
		XsToken getNameDefaultValue() const
		{
			return XsToken(  );
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'xml:lang' (aka 'XmlLang') attribute. **/
		XmlLang getXmlLangDefaultValue() const
		{
			return XmlLang(  );
		}

	}; // struct MxCxEmptyLyricLanguage::Impl

	const int MxCxEmptyLyricLanguage::Impl::myXsdID = 5779;
	const std::string MxCxEmptyLyricLanguage::Impl::myXmlTypeName = "lyric-language";
	const std::string MxCxEmptyLyricLanguage::Impl::myCppClassName = "MxCxEmptyLyricLanguage";
	const std::string MxCxEmptyLyricLanguage::Impl::myDocumentation = "The lyric-language type specifies the default language for a particular name and number of lyric.";

} // namespace lexicon


/* MxCxEmptyLyricLanguage ------------------------------------------------------------- */

namespace lexicon
{

/* Constructor, Destructor, Copy, Assignment ------------------------------------------ */

	MxCxEmptyLyricLanguage::MxCxEmptyLyricLanguage( const std::string& elementName )
	:myImpl( new Impl( elementName ) ) {}

	MxCxEmptyLyricLanguage::~MxCxEmptyLyricLanguage() {}

	MxCxEmptyLyricLanguage::MxCxEmptyLyricLanguage( const MxCxEmptyLyricLanguage& other )
	:myImpl( new Impl( *(other.myImpl) ) ) {}

	MxCxEmptyLyricLanguage& MxCxEmptyLyricLanguage::operator=( const MxCxEmptyLyricLanguage& other )
	{
		this->myImpl = std::unique_ptr<Impl>( new Impl( *(other.myImpl) ) );
		return *this;
	}

/* GetSet Value and Element Name ------------------------------------------------------ */

	/** Returns the name of the Xml element employing this ComplexType. **/
	std::string MxCxEmptyLyricLanguage::getElementName() const
	{
		return myImpl->getElementName();
	}

/* Get Class Information -------------------------------------------------------------- */

	/** Returns the name of this xs:complexType as found in the musicxml.xsd
	    document. **/
	std::string MxCxEmptyLyricLanguage::getXmlTypeName() const
	{
		return myImpl->getXmlTypeName();
	}

	/** Returns the name of this C++ class. **/
	std::string MxCxEmptyLyricLanguage::getClassName() const
	{
		return myImpl->getClassName();
	}

	/** Returns the documentation for this musicxml type as found in the musicxml.xsd
	    document. **/
	std::string MxCxEmptyLyricLanguage::getDocumentation() const
	{
		return myImpl->getDocumentation();
	}

/* Get Attribute Values --------------------------------------------------------------- */

	/** Returns the internal value of the 'number' (aka 'Number') attribute. **/
	XsNmToken MxCxEmptyLyricLanguage::getNumber() const
	{
		return myImpl->getNumber();
	}

	/** Returns the internal value of the 'name' (aka 'Name') attribute. **/
	XsToken MxCxEmptyLyricLanguage::getName() const
	{
		return myImpl->getName();
	}

	/** Returns the internal value of the 'xml:lang' (aka 'XmlLang') attribute. **/
	XmlLang MxCxEmptyLyricLanguage::getXmlLang() const
	{
		return myImpl->getXmlLang();
	}

/* Set Attribute Values --------------------------------------------------------------- */

	/** Sets the internal value of the 'number' (aka 'Number') attribute. **/
	void MxCxEmptyLyricLanguage::setNumber( const XsNmToken& value_in )
	{
		myImpl->setNumber( value_in );
	}

	/** Sets the internal value of the 'name' (aka 'Name') attribute. **/
	void MxCxEmptyLyricLanguage::setName( const XsToken& value_in )
	{
		myImpl->setName( value_in );
	}

	/** Sets the internal value of the 'xml:lang' (aka 'XmlLang') attribute. **/
	void MxCxEmptyLyricLanguage::setXmlLang( const XmlLang& value_in )
	{
		myImpl->setXmlLang( value_in );
	}

/* Get IsAttributeRequired Values ----------------------------------------------------- */

	/** Indicates whether or not the 'number' (aka 'Number') attribute is required
	    to be present in a MusicXML document. **/
	bool MxCxEmptyLyricLanguage::getIsNumberRequired() const
	{
		return myImpl->getIsNumberRequired();
	}

	/** Indicates whether or not the 'name' (aka 'Name') attribute is required
	    to be present in a MusicXML document. **/
	bool MxCxEmptyLyricLanguage::getIsNameRequired() const
	{
		return myImpl->getIsNameRequired();
	}

	/** Indicates whether or not the 'xml:lang' (aka 'XmlLang') attribute is
	    required to be present in a MusicXML document. **/
	bool MxCxEmptyLyricLanguage::getIsXmlLangRequired() const
	{
		return myImpl->getIsXmlLangRequired();
	}

/* Get IsAttributePresent Values ------------------------------------------------------ */

	/** Indicates whether or not the 'number' (aka 'Number') attribute is (or
	    will be) present in the MusicXML document. **/
	bool MxCxEmptyLyricLanguage::getIsNumberPresent() const
	{
		return myImpl->getIsNumberPresent();
	}

	/** Indicates whether or not the 'name' (aka 'Name') attribute is (or will
	    be) present in the MusicXML document. **/
	bool MxCxEmptyLyricLanguage::getIsNamePresent() const
	{
		return myImpl->getIsNamePresent();
	}

	/** Indicates whether or not the 'xml:lang' (aka 'XmlLang') attribute is
	    (or will be) present in the MusicXML document. Note: because 'xml:lang'
	    is required by the MusicXML specification, getIsXmlLangPresent will
	    always return 'true'. There is no corresponding setIsXmlLangPresent
	    function for this attribute. **/
	bool MxCxEmptyLyricLanguage::getIsXmlLangPresent() const
	{
		return myImpl->getIsXmlLangPresent();
	}

/* Set IsAttributePresent Values ------------------------------------------------------ */

	/** Sets the value which indicates whether or not the 'number' (aka 'Number')
	    attribute is (or will be) present in the MusicXML document. **/
	void MxCxEmptyLyricLanguage::setIsNumberPresent( const bool& value_in )
	{
		myImpl->setIsNumberPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'name' (aka 'Name')
	    attribute is (or will be) present in the MusicXML document. **/
	void MxCxEmptyLyricLanguage::setIsNamePresent( const bool& value_in )
	{
		myImpl->setIsNamePresent( value_in );
	}

/* Stringing and Streaming ------------------------------------------------------------ */

	/** Returns the xml representation of the object's value. **/
	std::string MxCxEmptyLyricLanguage::toString() const
	{
		return myImpl->toString();
	}

	/** Returns the xml representation of the object's value. **/
	std::ostream& MxCxEmptyLyricLanguage::stream( std::ostream& os_out ) const
	{
		return myImpl->stream( os_out );
	}

/* Get IsAttributeDefaultDefined Values ----------------------------------------------- */

	/** Indicates whether or not the 'number' (aka 'Number') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). **/
	bool MxCxEmptyLyricLanguage::getIsNumberDefaultDefined() const
	{
		return myImpl->getIsNumberDefaultDefined();
	}

	/** Indicates whether or not the 'name' (aka 'Name') has a default value
	    defined in the MusicXML xsd specification (either explicitly or in
	    the documentation). **/
	bool MxCxEmptyLyricLanguage::getIsNameDefaultDefined() const
	{
		return myImpl->getIsNameDefaultDefined();
	}

	/** Indicates whether or not the 'xml:lang' (aka 'XmlLang') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). **/
	bool MxCxEmptyLyricLanguage::getIsXmlLangDefaultDefined() const
	{
		return myImpl->getIsXmlLangDefaultDefined();
	}

/* Get AttributeDefaultValue ---------------------------------------------------------- */

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'number' (aka 'Number') attribute. **/
	XsNmToken MxCxEmptyLyricLanguage::getNumberDefaultValue() const
	{
		return myImpl->getNumberDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'name' (aka 'Name') attribute. **/
	XsToken MxCxEmptyLyricLanguage::getNameDefaultValue() const
	{
		return myImpl->getNameDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'xml:lang' (aka 'XmlLang') attribute. **/
	XmlLang MxCxEmptyLyricLanguage::getXmlLangDefaultValue() const
	{
		return myImpl->getXmlLangDefaultValue();
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

