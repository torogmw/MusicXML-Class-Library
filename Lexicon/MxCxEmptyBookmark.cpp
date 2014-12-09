/* See MusicXML License at the bottom of this code page. */

/**
  * @file       MxCxEmptyBookmark.cpp
  * @class      lexicon::MxCxEmptyBookmark
  * @author     Matthew James Briggs
  * @email      matthew.james.briggs@gmail.com
  * @url        http://matthewjamesbriggs.com
  * @date       2014-12-03 16:31:27
  * @project    Lexicon
  * @version    1.0
  * @musicxmlid 4307
  * 
  * @brief The 'Bookmark' class serves as a binding for the MusicXml 'bookmark'
  * complexType.
  * 
 **/

#include "MxCxEmptyBookmark.h"
#include <sstream>
#include "_hidden_attributeStream.h"
#include "MxAttrGrpElementPosition.h"

/* Impl ------------------------------------------------------------------------------- */

namespace lexicon
{
	struct MxCxEmptyBookmark::Impl
	{
		Impl( const std::string& elementName )
		:myElementName( elementName )
		,myId()
		,myName()
		,myMxAttrGrpElementPosition()
		,myIsIdPresent( true )
		,myIsNamePresent( false )
		{}

	private:
		std::string myElementName;
		XsId myId;
		XsToken myName;
		MxAttrGrpElementPosition myMxAttrGrpElementPosition;
		bool myIsIdPresent;
		bool myIsNamePresent;

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

		/** Returns the internal value of the 'id' (aka 'Id') attribute. **/
		XsId getId() const
		{
			return myId;
		}

		/** Returns the internal value of the 'name' (aka 'Name') attribute. **/
		XsToken getName() const
		{
			return myName;
		}

		/** Returns the internal value of the 'element' (aka 'Element') attribute.
		    This attribute is a member of the 'element-position' (aka 'ElementPosition')
		    attributeGroup. **/
		XsNmToken getElement() const
		{
			return myMxAttrGrpElementPosition.getElement();
		}

		/** Returns the internal value of the 'position' (aka 'Position') attribute.
		    This attribute is a member of the 'element-position' (aka 'ElementPosition')
		    attributeGroup. **/
		XsPositiveInteger getPosition() const
		{
			return myMxAttrGrpElementPosition.getPosition();
		}

/* Set Attribute Values --------------------------------------------------------------- */

		/** Sets the internal value of the 'id' (aka 'Id') attribute. **/
		void setId( const XsId& value_in )
		{
			myId = value_in;
		}

		/** Sets the internal value of the 'name' (aka 'Name') attribute. **/
		void setName( const XsToken& value_in )
		{
			myName = value_in;
		}

		/** Sets the internal value of the 'element' (aka 'Element') attribute.
		    This attribute is a member of the 'element-position' (aka 'ElementPosition')
		    attributeGroup. **/
		void setElement( const XsNmToken& value_in )
		{
			myMxAttrGrpElementPosition.setElement( value_in );
		}

		/** Sets the internal value of the 'position' (aka 'Position') attribute.
		    This attribute is a member of the 'element-position' (aka 'ElementPosition')
		    attributeGroup. **/
		void setPosition( const XsPositiveInteger& value_in )
		{
			myMxAttrGrpElementPosition.setPosition( value_in );
		}

/* Get IsAttributeRequired Values ----------------------------------------------------- */

		/** Indicates whether or not the 'id' (aka 'Id') attribute is required
		    to be present in a MusicXML document. **/
		bool getIsIdRequired() const
		{
			return true;
		}

		/** Indicates whether or not the 'name' (aka 'Name') attribute is required
		    to be present in a MusicXML document. **/
		bool getIsNameRequired() const
		{
			return false;
		}

		/** Indicates whether or not the 'element' (aka 'Element') attribute is
		    required to be present in a MusicXML document. This attribute is a
		    member of the 'element-position' (aka 'ElementPosition') attributeGroup. **/
		bool getIsElementRequired() const
		{
			return myMxAttrGrpElementPosition.getIsElementRequired();
		}

		/** Indicates whether or not the 'position' (aka 'Position') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'element-position' (aka 'ElementPosition') attributeGroup. **/
		bool getIsPositionRequired() const
		{
			return myMxAttrGrpElementPosition.getIsPositionRequired();
		}

/* Get IsAttributePresent Values ------------------------------------------------------ */

		/** Indicates whether or not the 'id' (aka 'Id') attribute is (or will
		    be) present in the MusicXML document. Note: because 'id' is required
		    by the MusicXML specification, getIsIdPresent will always return 'true'.
		    There is no corresponding setIsIdPresent function for this attribute. **/
		bool getIsIdPresent() const
		{
			return myIsIdPresent;
		}

		/** Indicates whether or not the 'name' (aka 'Name') attribute is (or will
		    be) present in the MusicXML document. **/
		bool getIsNamePresent() const
		{
			return myIsNamePresent;
		}

		/** Indicates whether or not the 'element' (aka 'Element') attribute is
		    (or will be) present in the MusicXML document. This attribute is a
		    member of the 'element-position' (aka 'ElementPosition') attributeGroup. **/
		bool getIsElementPresent() const
		{
			return myMxAttrGrpElementPosition.getIsElementPresent();
		}

		/** Indicates whether or not the 'position' (aka 'Position') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'element-position' (aka 'ElementPosition') attributeGroup. **/
		bool getIsPositionPresent() const
		{
			return myMxAttrGrpElementPosition.getIsPositionPresent();
		}

/* Set IsAttributePresent Values ------------------------------------------------------ */

		/** Sets the value which indicates whether or not the 'name' (aka 'Name')
		    attribute is (or will be) present in the MusicXML document. **/
		void setIsNamePresent( const bool& value_in )
		{
			myIsNamePresent = value_in;
		}

		/** Sets the value which indicates whether or not the 'element' (aka 'Element')
		    attribute is (or will be) present in the MusicXML document. This attribute
		    is a member of the 'element-position' (aka 'ElementPosition') attributeGroup. **/
		void setIsElementPresent( const bool& value_in )
		{
			myMxAttrGrpElementPosition.setIsElementPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'position' (aka 'Position')
		    attribute is (or will be) present in the MusicXML document. This attribute
		    is a member of the 'element-position' (aka 'ElementPosition') attributeGroup. **/
		void setIsPositionPresent( const bool& value_in )
		{
			myMxAttrGrpElementPosition.setIsPositionPresent( value_in );
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
			hidden::attributeStream( getIsIdPresent(), "id", getId().toString(), os_out, isFirst );
			hidden::attributeStream( getIsNamePresent(), "name", getName().toString(), os_out, isFirst );
			hidden::attributeStream( getIsElementPresent(), "element", getElement().toString(), os_out, isFirst );
			hidden::attributeStream( getIsPositionPresent(), "position", getPosition().toString(), os_out, isFirst );
			os_out << "/>";
			return os_out;
		}

/* Get IsAttributeDefaultDefined Values ----------------------------------------------- */

		/** Indicates whether or not the 'id' (aka 'Id') has a default value defined
		    in the MusicXML xsd specification (either explicitly or in the documentation). **/
		bool getIsIdDefaultDefined() const
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

		/** Indicates whether or not the 'element' (aka 'Element') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'element-position'
		    (aka 'ElementPosition') attributeGroup. **/
		bool getIsElementDefaultDefined() const
		{
			return myMxAttrGrpElementPosition.getIsElementDefaultDefined();
		}

		/** Indicates whether or not the 'position' (aka 'Position') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'element-position'
		    (aka 'ElementPosition') attributeGroup. **/
		bool getIsPositionDefaultDefined() const
		{
			return myMxAttrGrpElementPosition.getIsPositionDefaultDefined();
		}

/* Get AttributeDefaultValue ---------------------------------------------------------- */

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'id' (aka 'Id') attribute. **/
		XsId getIdDefaultValue() const
		{
			return XsId(  );
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'name' (aka 'Name') attribute. **/
		XsToken getNameDefaultValue() const
		{
			return XsToken(  );
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'element' (aka 'Element') attribute. This attribute is a member
		    of the 'element-position' (aka 'ElementPosition') attributeGroup. **/
		XsNmToken getElementDefaultValue() const
		{
			return myMxAttrGrpElementPosition.getElementDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'position' (aka 'Position') attribute. This attribute is a member
		    of the 'element-position' (aka 'ElementPosition') attributeGroup. **/
		XsPositiveInteger getPositionDefaultValue() const
		{
			return myMxAttrGrpElementPosition.getPositionDefaultValue();
		}

	}; // struct MxCxEmptyBookmark::Impl

	const int MxCxEmptyBookmark::Impl::myXsdID = 4307;
	const std::string MxCxEmptyBookmark::Impl::myXmlTypeName = "bookmark";
	const std::string MxCxEmptyBookmark::Impl::myCppClassName = "MxCxEmptyBookmark";
	const std::string MxCxEmptyBookmark::Impl::myDocumentation = "The bookmark type serves as a well-defined target for an incoming simple XLink.";

} // namespace lexicon


/* MxCxEmptyBookmark ------------------------------------------------------------------ */

namespace lexicon
{

/* Constructor, Destructor, Copy, Assignment ------------------------------------------ */

	MxCxEmptyBookmark::MxCxEmptyBookmark( const std::string& elementName )
	:myImpl( new Impl( elementName ) ) {}

	MxCxEmptyBookmark::~MxCxEmptyBookmark() {}

	MxCxEmptyBookmark::MxCxEmptyBookmark( const MxCxEmptyBookmark& other )
	:myImpl( new Impl( *(other.myImpl) ) ) {}

	MxCxEmptyBookmark& MxCxEmptyBookmark::operator=( const MxCxEmptyBookmark& other )
	{
		this->myImpl = std::unique_ptr<Impl>( new Impl( *(other.myImpl) ) );
		return *this;
	}

/* GetSet Value and Element Name ------------------------------------------------------ */

	/** Returns the name of the Xml element employing this ComplexType. **/
	std::string MxCxEmptyBookmark::getElementName() const
	{
		return myImpl->getElementName();
	}

/* Get Class Information -------------------------------------------------------------- */

	/** Returns the name of this xs:complexType as found in the musicxml.xsd
	    document. **/
	std::string MxCxEmptyBookmark::getXmlTypeName() const
	{
		return myImpl->getXmlTypeName();
	}

	/** Returns the name of this C++ class. **/
	std::string MxCxEmptyBookmark::getClassName() const
	{
		return myImpl->getClassName();
	}

	/** Returns the documentation for this musicxml type as found in the musicxml.xsd
	    document. **/
	std::string MxCxEmptyBookmark::getDocumentation() const
	{
		return myImpl->getDocumentation();
	}

/* Get Attribute Values --------------------------------------------------------------- */

	/** Returns the internal value of the 'id' (aka 'Id') attribute. **/
	XsId MxCxEmptyBookmark::getId() const
	{
		return myImpl->getId();
	}

	/** Returns the internal value of the 'name' (aka 'Name') attribute. **/
	XsToken MxCxEmptyBookmark::getName() const
	{
		return myImpl->getName();
	}

	/** Returns the internal value of the 'element' (aka 'Element') attribute.
	    This attribute is a member of the 'element-position' (aka 'ElementPosition')
	    attributeGroup. **/
	XsNmToken MxCxEmptyBookmark::getElement() const
	{
		return myImpl->getElement();
	}

	/** Returns the internal value of the 'position' (aka 'Position') attribute.
	    This attribute is a member of the 'element-position' (aka 'ElementPosition')
	    attributeGroup. **/
	XsPositiveInteger MxCxEmptyBookmark::getPosition() const
	{
		return myImpl->getPosition();
	}

/* Set Attribute Values --------------------------------------------------------------- */

	/** Sets the internal value of the 'id' (aka 'Id') attribute. **/
	void MxCxEmptyBookmark::setId( const XsId& value_in )
	{
		myImpl->setId( value_in );
	}

	/** Sets the internal value of the 'name' (aka 'Name') attribute. **/
	void MxCxEmptyBookmark::setName( const XsToken& value_in )
	{
		myImpl->setName( value_in );
	}

	/** Sets the internal value of the 'element' (aka 'Element') attribute.
	    This attribute is a member of the 'element-position' (aka 'ElementPosition')
	    attributeGroup. **/
	void MxCxEmptyBookmark::setElement( const XsNmToken& value_in )
	{
		myImpl->setElement( value_in );
	}

	/** Sets the internal value of the 'position' (aka 'Position') attribute.
	    This attribute is a member of the 'element-position' (aka 'ElementPosition')
	    attributeGroup. **/
	void MxCxEmptyBookmark::setPosition( const XsPositiveInteger& value_in )
	{
		myImpl->setPosition( value_in );
	}

/* Get IsAttributeRequired Values ----------------------------------------------------- */

	/** Indicates whether or not the 'id' (aka 'Id') attribute is required
	    to be present in a MusicXML document. **/
	bool MxCxEmptyBookmark::getIsIdRequired() const
	{
		return myImpl->getIsIdRequired();
	}

	/** Indicates whether or not the 'name' (aka 'Name') attribute is required
	    to be present in a MusicXML document. **/
	bool MxCxEmptyBookmark::getIsNameRequired() const
	{
		return myImpl->getIsNameRequired();
	}

	/** Indicates whether or not the 'element' (aka 'Element') attribute is
	    required to be present in a MusicXML document. This attribute is a
	    member of the 'element-position' (aka 'ElementPosition') attributeGroup. **/
	bool MxCxEmptyBookmark::getIsElementRequired() const
	{
		return myImpl->getIsElementRequired();
	}

	/** Indicates whether or not the 'position' (aka 'Position') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'element-position' (aka 'ElementPosition') attributeGroup. **/
	bool MxCxEmptyBookmark::getIsPositionRequired() const
	{
		return myImpl->getIsPositionRequired();
	}

/* Get IsAttributePresent Values ------------------------------------------------------ */

	/** Indicates whether or not the 'id' (aka 'Id') attribute is (or will
	    be) present in the MusicXML document. Note: because 'id' is required
	    by the MusicXML specification, getIsIdPresent will always return 'true'.
	    There is no corresponding setIsIdPresent function for this attribute. **/
	bool MxCxEmptyBookmark::getIsIdPresent() const
	{
		return myImpl->getIsIdPresent();
	}

	/** Indicates whether or not the 'name' (aka 'Name') attribute is (or will
	    be) present in the MusicXML document. **/
	bool MxCxEmptyBookmark::getIsNamePresent() const
	{
		return myImpl->getIsNamePresent();
	}

	/** Indicates whether or not the 'element' (aka 'Element') attribute is
	    (or will be) present in the MusicXML document. This attribute is a
	    member of the 'element-position' (aka 'ElementPosition') attributeGroup. **/
	bool MxCxEmptyBookmark::getIsElementPresent() const
	{
		return myImpl->getIsElementPresent();
	}

	/** Indicates whether or not the 'position' (aka 'Position') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'element-position' (aka 'ElementPosition') attributeGroup. **/
	bool MxCxEmptyBookmark::getIsPositionPresent() const
	{
		return myImpl->getIsPositionPresent();
	}

/* Set IsAttributePresent Values ------------------------------------------------------ */

	/** Sets the value which indicates whether or not the 'name' (aka 'Name')
	    attribute is (or will be) present in the MusicXML document. **/
	void MxCxEmptyBookmark::setIsNamePresent( const bool& value_in )
	{
		myImpl->setIsNamePresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'element' (aka 'Element')
	    attribute is (or will be) present in the MusicXML document. This attribute
	    is a member of the 'element-position' (aka 'ElementPosition') attributeGroup. **/
	void MxCxEmptyBookmark::setIsElementPresent( const bool& value_in )
	{
		myImpl->setIsElementPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'position' (aka 'Position')
	    attribute is (or will be) present in the MusicXML document. This attribute
	    is a member of the 'element-position' (aka 'ElementPosition') attributeGroup. **/
	void MxCxEmptyBookmark::setIsPositionPresent( const bool& value_in )
	{
		myImpl->setIsPositionPresent( value_in );
	}

/* Stringing and Streaming ------------------------------------------------------------ */

	/** Returns the xml representation of the object's value. **/
	std::string MxCxEmptyBookmark::toString() const
	{
		return myImpl->toString();
	}

	/** Returns the xml representation of the object's value. **/
	std::ostream& MxCxEmptyBookmark::stream( std::ostream& os_out ) const
	{
		return myImpl->stream( os_out );
	}

/* Get IsAttributeDefaultDefined Values ----------------------------------------------- */

	/** Indicates whether or not the 'id' (aka 'Id') has a default value defined
	    in the MusicXML xsd specification (either explicitly or in the documentation). **/
	bool MxCxEmptyBookmark::getIsIdDefaultDefined() const
	{
		return myImpl->getIsIdDefaultDefined();
	}

	/** Indicates whether or not the 'name' (aka 'Name') has a default value
	    defined in the MusicXML xsd specification (either explicitly or in
	    the documentation). **/
	bool MxCxEmptyBookmark::getIsNameDefaultDefined() const
	{
		return myImpl->getIsNameDefaultDefined();
	}

	/** Indicates whether or not the 'element' (aka 'Element') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'element-position'
	    (aka 'ElementPosition') attributeGroup. **/
	bool MxCxEmptyBookmark::getIsElementDefaultDefined() const
	{
		return myImpl->getIsElementDefaultDefined();
	}

	/** Indicates whether or not the 'position' (aka 'Position') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'element-position'
	    (aka 'ElementPosition') attributeGroup. **/
	bool MxCxEmptyBookmark::getIsPositionDefaultDefined() const
	{
		return myImpl->getIsPositionDefaultDefined();
	}

/* Get AttributeDefaultValue ---------------------------------------------------------- */

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'id' (aka 'Id') attribute. **/
	XsId MxCxEmptyBookmark::getIdDefaultValue() const
	{
		return myImpl->getIdDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'name' (aka 'Name') attribute. **/
	XsToken MxCxEmptyBookmark::getNameDefaultValue() const
	{
		return myImpl->getNameDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'element' (aka 'Element') attribute. This attribute is a member
	    of the 'element-position' (aka 'ElementPosition') attributeGroup. **/
	XsNmToken MxCxEmptyBookmark::getElementDefaultValue() const
	{
		return myImpl->getElementDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'position' (aka 'Position') attribute. This attribute is a member
	    of the 'element-position' (aka 'ElementPosition') attributeGroup. **/
	XsPositiveInteger MxCxEmptyBookmark::getPositionDefaultValue() const
	{
		return myImpl->getPositionDefaultValue();
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

