/* See MusicXML License at the bottom of this code page. */

/**
  * @file       MxAttrGrpElementPosition.cpp
  * @class      lexicon::MxAttrGrpElementPosition
  * @author     Matthew James Briggs
  * @email      matthew.james.briggs@gmail.com
  * @url        http://matthewjamesbriggs.com
  * @date       2014-11-28 14:15:41
  * @project    Lexicon
  * @version    1.0
  * @musicxmlid 2154
  * 
  * @brief The 'ElementPosition' class serves as a binding for the MusicXml 'element-position'
  * attributeGroup.
  * 
 **/

#include "MxAttrGrpElementPosition.h"
#include <sstream>
#include "_hidden_attributeStream.h"

/* Impl ------------------------------------------------------------------------------- */

namespace lexicon
{
	struct MxAttrGrpElementPosition::Impl
	{
		Impl()
		:myElement()
		,myPosition()
		,myIsElementPresent( false )
		,myIsPositionPresent( false )
		{}

	private:
		XsNmToken myElement;
		XsPositiveInteger myPosition;
		bool myIsElementPresent;
		bool myIsPositionPresent;

		const static int myXsdID;
		const static std::string myXmlTypeName;
		const static std::string myCppClassName;
		const static std::string myDocumentation;

	public:

/* Get Class Information -------------------------------------------------------------- */

		/** Returns the name of this xs:simpleType as found in the musicxml.xsd
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

		/** Returns the internal value of the 'element' (aka 'Element') attribute. **/
		XsNmToken getElement() const
		{
			return myElement;
		}

		/** Returns the internal value of the 'position' (aka 'Position') attribute. **/
		XsPositiveInteger getPosition() const
		{
			return myPosition;
		}

/* Set Attribute Values --------------------------------------------------------------- */

		/** Sets the internal value of the 'element' (aka 'Element') attribute. **/
		void setElement( const XsNmToken& value_in )
		{
			myElement = value_in;
		}

		/** Sets the internal value of the 'position' (aka 'Position') attribute. **/
		void setPosition( const XsPositiveInteger& value_in )
		{
			myPosition = value_in;
		}

/* Get IsAttributeRequired Values ----------------------------------------------------- */

		/** Indicates whether or not the 'element' (aka 'Element') attribute is
		    required to be present in a MusicXML document. **/
		bool getIsElementRequired() const
		{
			return false;
		}

		/** Indicates whether or not the 'position' (aka 'Position') attribute
		    is required to be present in a MusicXML document. **/
		bool getIsPositionRequired() const
		{
			return false;
		}

/* Get IsAttributePresent Values ------------------------------------------------------ */

		/** Indicates whether or not the 'element' (aka 'Element') attribute is
		    (or will be) present in the MusicXML document. **/
		bool getIsElementPresent() const
		{
			return myIsElementPresent;
		}

		/** Indicates whether or not the 'position' (aka 'Position') attribute
		    is (or will be) present in the MusicXML document. **/
		bool getIsPositionPresent() const
		{
			return myIsPositionPresent;
		}

/* Set IsAttributePresent Values ------------------------------------------------------ */

		/** Sets the value which indicates whether or not the 'element' (aka 'Element')
		    attribute is (or will be) present in the MusicXML document. **/
		void setIsElementPresent( const bool& value_in )
		{
			myIsElementPresent = value_in;
		}

		/** Sets the value which indicates whether or not the 'position' (aka 'Position')
		    attribute is (or will be) present in the MusicXML document. **/
		void setIsPositionPresent( const bool& value_in )
		{
			myIsPositionPresent = value_in;
		}

/* Stringing and Streaming ------------------------------------------------------------ */

		/** Returns the attributeGroup's value as a string where each attribute
		    is represented, if present, in the form attribute="vale". **/
		std::string toString() const
		{
			std::stringstream ss;
			stream( ss );
			return ss.str();
		}

		/** Returns the attributeGroup's value as a string where each attribute
		    is represented, if present, in the form attribute="vale". **/
		std::ostream& stream( std::ostream& os_out ) const
		{
			bool isFirst = true;
			hidden::attributeStream( getIsElementPresent(), "element", getElement().toString(), os_out, isFirst );
			hidden::attributeStream( getIsPositionPresent(), "position", getPosition().toString(), os_out, isFirst );
			return os_out;
		}

/* Get IsAttributeDefaultDefined Values ----------------------------------------------- */

		/** Indicates whether or not the 'element' (aka 'Element') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). **/
		bool getIsElementDefaultDefined() const
		{
			return false;
		}

		/** Indicates whether or not the 'position' (aka 'Position') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). **/
		bool getIsPositionDefaultDefined() const
		{
			return false;
		}

/* Get AttributeDefaultValue ---------------------------------------------------------- */

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'element' (aka 'Element') attribute. **/
		XsNmToken getElementDefaultValue() const
		{
			return XsNmToken(  );
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'position' (aka 'Position') attribute. **/
		XsPositiveInteger getPositionDefaultValue() const
		{
			return XsPositiveInteger(  );
		}

	}; // struct MxAttrGrpElementPosition::Impl

	const int MxAttrGrpElementPosition::Impl::myXsdID = 2154;
	const std::string MxAttrGrpElementPosition::Impl::myXmlTypeName = "element-position";
	const std::string MxAttrGrpElementPosition::Impl::myCppClassName = "MxAttrGrpElementPosition";
	const std::string MxAttrGrpElementPosition::Impl::myDocumentation = "The element and position attributes are new as of Version 2.0. They allow for bookmarks and links to be positioned at higher resolution than the level of music-data elements. When no element and position attributes are present, the bookmark or link element refers to the next sibling element in the MusicXML file. The element attribute specifies an element type for a descendant of the next sibling element that is not a link or bookmark. The position attribute specifies the position of this descendant element, where the first position is 1. The position attribute is ignored if the element attribute is not present. For instance, an element value of beam and a position value of 2 defines the link or bookmark to refer to the second beam descendant of the next sibling element that is not a link or bookmark. This is equivalent to an XPath test of [.//beam[2]] done in the context of the sibling element.";

} // namespace lexicon


/* MxAttrGrpElementPosition ----------------------------------------------------------- */

namespace lexicon
{

/* Constructor, Destructor, Copy, Assignment ------------------------------------------ */

	MxAttrGrpElementPosition::MxAttrGrpElementPosition()
	:myImpl( new Impl() ) {}

	MxAttrGrpElementPosition::~MxAttrGrpElementPosition() {}

	MxAttrGrpElementPosition::MxAttrGrpElementPosition( const MxAttrGrpElementPosition& other )
	:myImpl( new Impl( *(other.myImpl) ) ) {}

	MxAttrGrpElementPosition& MxAttrGrpElementPosition::operator=( const MxAttrGrpElementPosition& other )
	{
		this->myImpl = std::unique_ptr<Impl>( new Impl( *(other.myImpl) ) );
		return *this;
	}

/* Get Class Information -------------------------------------------------------------- */

	/** Returns the name of this xs:simpleType as found in the musicxml.xsd
	    document. **/
	std::string MxAttrGrpElementPosition::getXmlTypeName() const
	{
		return myImpl->getXmlTypeName();
	}

	/** Returns the name of this C++ class. **/
	std::string MxAttrGrpElementPosition::getClassName() const
	{
		return myImpl->getClassName();
	}

	/** Returns the documentation for this musicxml type as found in the musicxml.xsd
	    document. **/
	std::string MxAttrGrpElementPosition::getDocumentation() const
	{
		return myImpl->getDocumentation();
	}

/* Get Attribute Values --------------------------------------------------------------- */

	/** Returns the internal value of the 'element' (aka 'Element') attribute. **/
	XsNmToken MxAttrGrpElementPosition::getElement() const
	{
		return myImpl->getElement();
	}

	/** Returns the internal value of the 'position' (aka 'Position') attribute. **/
	XsPositiveInteger MxAttrGrpElementPosition::getPosition() const
	{
		return myImpl->getPosition();
	}

/* Set Attribute Values --------------------------------------------------------------- */

	/** Sets the internal value of the 'element' (aka 'Element') attribute. **/
	void MxAttrGrpElementPosition::setElement( const XsNmToken& value_in )
	{
		myImpl->setElement( value_in );
	}

	/** Sets the internal value of the 'position' (aka 'Position') attribute. **/
	void MxAttrGrpElementPosition::setPosition( const XsPositiveInteger& value_in )
	{
		myImpl->setPosition( value_in );
	}

/* Get IsAttributeRequired Values ----------------------------------------------------- */

	/** Indicates whether or not the 'element' (aka 'Element') attribute is
	    required to be present in a MusicXML document. **/
	bool MxAttrGrpElementPosition::getIsElementRequired() const
	{
		return myImpl->getIsElementRequired();
	}

	/** Indicates whether or not the 'position' (aka 'Position') attribute
	    is required to be present in a MusicXML document. **/
	bool MxAttrGrpElementPosition::getIsPositionRequired() const
	{
		return myImpl->getIsPositionRequired();
	}

/* Get IsAttributePresent Values ------------------------------------------------------ */

	/** Indicates whether or not the 'element' (aka 'Element') attribute is
	    (or will be) present in the MusicXML document. **/
	bool MxAttrGrpElementPosition::getIsElementPresent() const
	{
		return myImpl->getIsElementPresent();
	}

	/** Indicates whether or not the 'position' (aka 'Position') attribute
	    is (or will be) present in the MusicXML document. **/
	bool MxAttrGrpElementPosition::getIsPositionPresent() const
	{
		return myImpl->getIsPositionPresent();
	}

/* Set IsAttributePresent Values ------------------------------------------------------ */

	/** Sets the value which indicates whether or not the 'element' (aka 'Element')
	    attribute is (or will be) present in the MusicXML document. **/
	void MxAttrGrpElementPosition::setIsElementPresent( const bool& value_in )
	{
		myImpl->setIsElementPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'position' (aka 'Position')
	    attribute is (or will be) present in the MusicXML document. **/
	void MxAttrGrpElementPosition::setIsPositionPresent( const bool& value_in )
	{
		myImpl->setIsPositionPresent( value_in );
	}

/* Stringing and Streaming ------------------------------------------------------------ */

	/** Returns the attributeGroup's value as a string where each attribute
	    is represented, if present, in the form attribute="vale". **/
	std::string MxAttrGrpElementPosition::toString() const
	{
		return myImpl->toString();
	}

	/** Returns the attributeGroup's value as a string where each attribute
	    is represented, if present, in the form attribute="vale". **/
	std::ostream& MxAttrGrpElementPosition::stream( std::ostream& os_out ) const
	{
		return myImpl->stream( os_out );
	}

/* Get IsAttributeDefaultDefined Values ----------------------------------------------- */

	/** Indicates whether or not the 'element' (aka 'Element') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). **/
	bool MxAttrGrpElementPosition::getIsElementDefaultDefined() const
	{
		return myImpl->getIsElementDefaultDefined();
	}

	/** Indicates whether or not the 'position' (aka 'Position') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). **/
	bool MxAttrGrpElementPosition::getIsPositionDefaultDefined() const
	{
		return myImpl->getIsPositionDefaultDefined();
	}

/* Get AttributeDefaultValue ---------------------------------------------------------- */

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'element' (aka 'Element') attribute. **/
	XsNmToken MxAttrGrpElementPosition::getElementDefaultValue() const
	{
		return myImpl->getElementDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'position' (aka 'Position') attribute. **/
	XsPositiveInteger MxAttrGrpElementPosition::getPositionDefaultValue() const
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

