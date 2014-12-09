/* See MusicXML License at the bottom of this code page. */

/**
  * @file       MxAttrGrpPosition.cpp
  * @class      lexicon::MxAttrGrpPosition
  * @author     Matthew James Briggs
  * @email      matthew.james.briggs@gmail.com
  * @url        http://matthewjamesbriggs.com
  * @date       2014-11-28 14:15:39
  * @project    Lexicon
  * @version    1.0
  * @musicxmlid 1931
  * 
  * @brief The 'Position' class serves as a binding for the MusicXml 'position'
  * attributeGroup.
  * 
 **/

#include "MxAttrGrpPosition.h"
#include <sstream>
#include "_hidden_attributeStream.h"

/* Impl ------------------------------------------------------------------------------- */

namespace lexicon
{
	struct MxAttrGrpPosition::Impl
	{
		Impl()
		:myDefaultX()
		,myDefaultY()
		,myRelativeX()
		,myRelativeY()
		,myIsDefaultXPresent( false )
		,myIsDefaultYPresent( false )
		,myIsRelativeXPresent( false )
		,myIsRelativeYPresent( false )
		{}

	private:
		MxNumberTenths myDefaultX;
		MxNumberTenths myDefaultY;
		MxNumberTenths myRelativeX;
		MxNumberTenths myRelativeY;
		bool myIsDefaultXPresent;
		bool myIsDefaultYPresent;
		bool myIsRelativeXPresent;
		bool myIsRelativeYPresent;

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

		/** Returns the internal value of the 'default-x' (aka 'DefaultX') attribute. **/
		MxNumberTenths getDefaultX() const
		{
			return myDefaultX;
		}

		/** Returns the internal value of the 'default-y' (aka 'DefaultY') attribute. **/
		MxNumberTenths getDefaultY() const
		{
			return myDefaultY;
		}

		/** Returns the internal value of the 'relative-x' (aka 'RelativeX') attribute. **/
		MxNumberTenths getRelativeX() const
		{
			return myRelativeX;
		}

		/** Returns the internal value of the 'relative-y' (aka 'RelativeY') attribute. **/
		MxNumberTenths getRelativeY() const
		{
			return myRelativeY;
		}

/* Set Attribute Values --------------------------------------------------------------- */

		/** Sets the internal value of the 'default-x' (aka 'DefaultX') attribute. **/
		void setDefaultX( const MxNumberTenths& value_in )
		{
			myDefaultX = value_in;
		}

		/** Sets the internal value of the 'default-y' (aka 'DefaultY') attribute. **/
		void setDefaultY( const MxNumberTenths& value_in )
		{
			myDefaultY = value_in;
		}

		/** Sets the internal value of the 'relative-x' (aka 'RelativeX') attribute. **/
		void setRelativeX( const MxNumberTenths& value_in )
		{
			myRelativeX = value_in;
		}

		/** Sets the internal value of the 'relative-y' (aka 'RelativeY') attribute. **/
		void setRelativeY( const MxNumberTenths& value_in )
		{
			myRelativeY = value_in;
		}

/* Get IsAttributeRequired Values ----------------------------------------------------- */

		/** Indicates whether or not the 'default-x' (aka 'DefaultX') attribute
		    is required to be present in a MusicXML document. **/
		bool getIsDefaultXRequired() const
		{
			return false;
		}

		/** Indicates whether or not the 'default-y' (aka 'DefaultY') attribute
		    is required to be present in a MusicXML document. **/
		bool getIsDefaultYRequired() const
		{
			return false;
		}

		/** Indicates whether or not the 'relative-x' (aka 'RelativeX') attribute
		    is required to be present in a MusicXML document. **/
		bool getIsRelativeXRequired() const
		{
			return false;
		}

		/** Indicates whether or not the 'relative-y' (aka 'RelativeY') attribute
		    is required to be present in a MusicXML document. **/
		bool getIsRelativeYRequired() const
		{
			return false;
		}

/* Get IsAttributePresent Values ------------------------------------------------------ */

		/** Indicates whether or not the 'default-x' (aka 'DefaultX') attribute
		    is (or will be) present in the MusicXML document. **/
		bool getIsDefaultXPresent() const
		{
			return myIsDefaultXPresent;
		}

		/** Indicates whether or not the 'default-y' (aka 'DefaultY') attribute
		    is (or will be) present in the MusicXML document. **/
		bool getIsDefaultYPresent() const
		{
			return myIsDefaultYPresent;
		}

		/** Indicates whether or not the 'relative-x' (aka 'RelativeX') attribute
		    is (or will be) present in the MusicXML document. **/
		bool getIsRelativeXPresent() const
		{
			return myIsRelativeXPresent;
		}

		/** Indicates whether or not the 'relative-y' (aka 'RelativeY') attribute
		    is (or will be) present in the MusicXML document. **/
		bool getIsRelativeYPresent() const
		{
			return myIsRelativeYPresent;
		}

/* Set IsAttributePresent Values ------------------------------------------------------ */

		/** Sets the value which indicates whether or not the 'default-x' (aka
		    'DefaultX') attribute is (or will be) present in the MusicXML document. **/
		void setIsDefaultXPresent( const bool& value_in )
		{
			myIsDefaultXPresent = value_in;
		}

		/** Sets the value which indicates whether or not the 'default-y' (aka
		    'DefaultY') attribute is (or will be) present in the MusicXML document. **/
		void setIsDefaultYPresent( const bool& value_in )
		{
			myIsDefaultYPresent = value_in;
		}

		/** Sets the value which indicates whether or not the 'relative-x' (aka
		    'RelativeX') attribute is (or will be) present in the MusicXML document. **/
		void setIsRelativeXPresent( const bool& value_in )
		{
			myIsRelativeXPresent = value_in;
		}

		/** Sets the value which indicates whether or not the 'relative-y' (aka
		    'RelativeY') attribute is (or will be) present in the MusicXML document. **/
		void setIsRelativeYPresent( const bool& value_in )
		{
			myIsRelativeYPresent = value_in;
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
			hidden::attributeStream( getIsDefaultXPresent(), "default-x", getDefaultX().toString(), os_out, isFirst );
			hidden::attributeStream( getIsDefaultYPresent(), "default-y", getDefaultY().toString(), os_out, isFirst );
			hidden::attributeStream( getIsRelativeXPresent(), "relative-x", getRelativeX().toString(), os_out, isFirst );
			hidden::attributeStream( getIsRelativeYPresent(), "relative-y", getRelativeY().toString(), os_out, isFirst );
			return os_out;
		}

/* Get IsAttributeDefaultDefined Values ----------------------------------------------- */

		/** Indicates whether or not the 'default-x' (aka 'DefaultX') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). **/
		bool getIsDefaultXDefaultDefined() const
		{
			return false;
		}

		/** Indicates whether or not the 'default-y' (aka 'DefaultY') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). **/
		bool getIsDefaultYDefaultDefined() const
		{
			return false;
		}

		/** Indicates whether or not the 'relative-x' (aka 'RelativeX') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). **/
		bool getIsRelativeXDefaultDefined() const
		{
			return false;
		}

		/** Indicates whether or not the 'relative-y' (aka 'RelativeY') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). **/
		bool getIsRelativeYDefaultDefined() const
		{
			return false;
		}

/* Get AttributeDefaultValue ---------------------------------------------------------- */

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'default-x' (aka 'DefaultX') attribute. **/
		MxNumberTenths getDefaultXDefaultValue() const
		{
			return MxNumberTenths(  );
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'default-y' (aka 'DefaultY') attribute. **/
		MxNumberTenths getDefaultYDefaultValue() const
		{
			return MxNumberTenths(  );
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'relative-x' (aka 'RelativeX') attribute. **/
		MxNumberTenths getRelativeXDefaultValue() const
		{
			return MxNumberTenths(  );
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'relative-y' (aka 'RelativeY') attribute. **/
		MxNumberTenths getRelativeYDefaultValue() const
		{
			return MxNumberTenths(  );
		}

	}; // struct MxAttrGrpPosition::Impl

	const int MxAttrGrpPosition::Impl::myXsdID = 1931;
	const std::string MxAttrGrpPosition::Impl::myXmlTypeName = "position";
	const std::string MxAttrGrpPosition::Impl::myCppClassName = "MxAttrGrpPosition";
	const std::string MxAttrGrpPosition::Impl::myDocumentation = "The position attributes are based on MuseData print suggestions. For most elements, any program will compute a default x and y position. The position attributes let this be changed two ways. The default-x and default-y attributes change the computation of the default position. For most elements, the origin is changed relative to the left-hand side of the note or the musical position within the bar (x) and the top line of the staff (y). For the following elements, the default-x value changes the origin relative to the start of the current measure: - note - figured-bass - harmony - link - directive - measure-numbering - all descendants of the part-list element - all children of the direction-type element This origin is from the start of the entire measure, at either the left barline or the start of the system. When the default-x attribute is used within a child element of the part-name-display, part-abbreviation-display, group-name-display, or group-abbreviation-display elements, it changes the origin relative to the start of the first measure on the system. These values are used when the current measure or a succeeding measure starts a new system. The same change of origin is used for the group-symbol element. For the note, figured-bass, and harmony elements, the default-x value is considered to have adjusted the musical position within the bar for its descendant elements. Since the credit-words and credit-image elements are not related to a measure, in these cases the default-x and default-y attributes adjust the origin relative to the bottom left-hand corner of the specified page. The relative-x and relative-y attributes change the position relative to the default position, either as computed by the individual program, or as overridden by the default-x and default-y attributes. Positive x is right, negative x is left; positive y is up, negative y is down. All units are in tenths of interline space. For stems, positive relative-y lengthens a stem while negative relative-y shortens it. The default-x and default-y position attributes provide higher-resolution positioning data than related features such as the placement attribute and the offset element. Applications reading a MusicXML file that can understand both features should generally rely on the default-x and default-y attributes for their greater accuracy. For the relative-x and relative-y attributes, the offset element, placement attribute, and directive attribute provide context for the relative position information, so the two features should be interpreted together. As elsewhere in the MusicXML format, tenths are the global tenths defined by the scaling element, not the local tenths of a staff resized by the staff-size element.";

} // namespace lexicon


/* MxAttrGrpPosition ------------------------------------------------------------------ */

namespace lexicon
{

/* Constructor, Destructor, Copy, Assignment ------------------------------------------ */

	MxAttrGrpPosition::MxAttrGrpPosition()
	:myImpl( new Impl() ) {}

	MxAttrGrpPosition::~MxAttrGrpPosition() {}

	MxAttrGrpPosition::MxAttrGrpPosition( const MxAttrGrpPosition& other )
	:myImpl( new Impl( *(other.myImpl) ) ) {}

	MxAttrGrpPosition& MxAttrGrpPosition::operator=( const MxAttrGrpPosition& other )
	{
		this->myImpl = std::unique_ptr<Impl>( new Impl( *(other.myImpl) ) );
		return *this;
	}

/* Get Class Information -------------------------------------------------------------- */

	/** Returns the name of this xs:simpleType as found in the musicxml.xsd
	    document. **/
	std::string MxAttrGrpPosition::getXmlTypeName() const
	{
		return myImpl->getXmlTypeName();
	}

	/** Returns the name of this C++ class. **/
	std::string MxAttrGrpPosition::getClassName() const
	{
		return myImpl->getClassName();
	}

	/** Returns the documentation for this musicxml type as found in the musicxml.xsd
	    document. **/
	std::string MxAttrGrpPosition::getDocumentation() const
	{
		return myImpl->getDocumentation();
	}

/* Get Attribute Values --------------------------------------------------------------- */

	/** Returns the internal value of the 'default-x' (aka 'DefaultX') attribute. **/
	MxNumberTenths MxAttrGrpPosition::getDefaultX() const
	{
		return myImpl->getDefaultX();
	}

	/** Returns the internal value of the 'default-y' (aka 'DefaultY') attribute. **/
	MxNumberTenths MxAttrGrpPosition::getDefaultY() const
	{
		return myImpl->getDefaultY();
	}

	/** Returns the internal value of the 'relative-x' (aka 'RelativeX') attribute. **/
	MxNumberTenths MxAttrGrpPosition::getRelativeX() const
	{
		return myImpl->getRelativeX();
	}

	/** Returns the internal value of the 'relative-y' (aka 'RelativeY') attribute. **/
	MxNumberTenths MxAttrGrpPosition::getRelativeY() const
	{
		return myImpl->getRelativeY();
	}

/* Set Attribute Values --------------------------------------------------------------- */

	/** Sets the internal value of the 'default-x' (aka 'DefaultX') attribute. **/
	void MxAttrGrpPosition::setDefaultX( const MxNumberTenths& value_in )
	{
		myImpl->setDefaultX( value_in );
	}

	/** Sets the internal value of the 'default-y' (aka 'DefaultY') attribute. **/
	void MxAttrGrpPosition::setDefaultY( const MxNumberTenths& value_in )
	{
		myImpl->setDefaultY( value_in );
	}

	/** Sets the internal value of the 'relative-x' (aka 'RelativeX') attribute. **/
	void MxAttrGrpPosition::setRelativeX( const MxNumberTenths& value_in )
	{
		myImpl->setRelativeX( value_in );
	}

	/** Sets the internal value of the 'relative-y' (aka 'RelativeY') attribute. **/
	void MxAttrGrpPosition::setRelativeY( const MxNumberTenths& value_in )
	{
		myImpl->setRelativeY( value_in );
	}

/* Get IsAttributeRequired Values ----------------------------------------------------- */

	/** Indicates whether or not the 'default-x' (aka 'DefaultX') attribute
	    is required to be present in a MusicXML document. **/
	bool MxAttrGrpPosition::getIsDefaultXRequired() const
	{
		return myImpl->getIsDefaultXRequired();
	}

	/** Indicates whether or not the 'default-y' (aka 'DefaultY') attribute
	    is required to be present in a MusicXML document. **/
	bool MxAttrGrpPosition::getIsDefaultYRequired() const
	{
		return myImpl->getIsDefaultYRequired();
	}

	/** Indicates whether or not the 'relative-x' (aka 'RelativeX') attribute
	    is required to be present in a MusicXML document. **/
	bool MxAttrGrpPosition::getIsRelativeXRequired() const
	{
		return myImpl->getIsRelativeXRequired();
	}

	/** Indicates whether or not the 'relative-y' (aka 'RelativeY') attribute
	    is required to be present in a MusicXML document. **/
	bool MxAttrGrpPosition::getIsRelativeYRequired() const
	{
		return myImpl->getIsRelativeYRequired();
	}

/* Get IsAttributePresent Values ------------------------------------------------------ */

	/** Indicates whether or not the 'default-x' (aka 'DefaultX') attribute
	    is (or will be) present in the MusicXML document. **/
	bool MxAttrGrpPosition::getIsDefaultXPresent() const
	{
		return myImpl->getIsDefaultXPresent();
	}

	/** Indicates whether or not the 'default-y' (aka 'DefaultY') attribute
	    is (or will be) present in the MusicXML document. **/
	bool MxAttrGrpPosition::getIsDefaultYPresent() const
	{
		return myImpl->getIsDefaultYPresent();
	}

	/** Indicates whether or not the 'relative-x' (aka 'RelativeX') attribute
	    is (or will be) present in the MusicXML document. **/
	bool MxAttrGrpPosition::getIsRelativeXPresent() const
	{
		return myImpl->getIsRelativeXPresent();
	}

	/** Indicates whether or not the 'relative-y' (aka 'RelativeY') attribute
	    is (or will be) present in the MusicXML document. **/
	bool MxAttrGrpPosition::getIsRelativeYPresent() const
	{
		return myImpl->getIsRelativeYPresent();
	}

/* Set IsAttributePresent Values ------------------------------------------------------ */

	/** Sets the value which indicates whether or not the 'default-x' (aka
	    'DefaultX') attribute is (or will be) present in the MusicXML document. **/
	void MxAttrGrpPosition::setIsDefaultXPresent( const bool& value_in )
	{
		myImpl->setIsDefaultXPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'default-y' (aka
	    'DefaultY') attribute is (or will be) present in the MusicXML document. **/
	void MxAttrGrpPosition::setIsDefaultYPresent( const bool& value_in )
	{
		myImpl->setIsDefaultYPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'relative-x' (aka
	    'RelativeX') attribute is (or will be) present in the MusicXML document. **/
	void MxAttrGrpPosition::setIsRelativeXPresent( const bool& value_in )
	{
		myImpl->setIsRelativeXPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'relative-y' (aka
	    'RelativeY') attribute is (or will be) present in the MusicXML document. **/
	void MxAttrGrpPosition::setIsRelativeYPresent( const bool& value_in )
	{
		myImpl->setIsRelativeYPresent( value_in );
	}

/* Stringing and Streaming ------------------------------------------------------------ */

	/** Returns the attributeGroup's value as a string where each attribute
	    is represented, if present, in the form attribute="vale". **/
	std::string MxAttrGrpPosition::toString() const
	{
		return myImpl->toString();
	}

	/** Returns the attributeGroup's value as a string where each attribute
	    is represented, if present, in the form attribute="vale". **/
	std::ostream& MxAttrGrpPosition::stream( std::ostream& os_out ) const
	{
		return myImpl->stream( os_out );
	}

/* Get IsAttributeDefaultDefined Values ----------------------------------------------- */

	/** Indicates whether or not the 'default-x' (aka 'DefaultX') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). **/
	bool MxAttrGrpPosition::getIsDefaultXDefaultDefined() const
	{
		return myImpl->getIsDefaultXDefaultDefined();
	}

	/** Indicates whether or not the 'default-y' (aka 'DefaultY') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). **/
	bool MxAttrGrpPosition::getIsDefaultYDefaultDefined() const
	{
		return myImpl->getIsDefaultYDefaultDefined();
	}

	/** Indicates whether or not the 'relative-x' (aka 'RelativeX') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). **/
	bool MxAttrGrpPosition::getIsRelativeXDefaultDefined() const
	{
		return myImpl->getIsRelativeXDefaultDefined();
	}

	/** Indicates whether or not the 'relative-y' (aka 'RelativeY') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). **/
	bool MxAttrGrpPosition::getIsRelativeYDefaultDefined() const
	{
		return myImpl->getIsRelativeYDefaultDefined();
	}

/* Get AttributeDefaultValue ---------------------------------------------------------- */

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'default-x' (aka 'DefaultX') attribute. **/
	MxNumberTenths MxAttrGrpPosition::getDefaultXDefaultValue() const
	{
		return myImpl->getDefaultXDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'default-y' (aka 'DefaultY') attribute. **/
	MxNumberTenths MxAttrGrpPosition::getDefaultYDefaultValue() const
	{
		return myImpl->getDefaultYDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'relative-x' (aka 'RelativeX') attribute. **/
	MxNumberTenths MxAttrGrpPosition::getRelativeXDefaultValue() const
	{
		return myImpl->getRelativeXDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'relative-y' (aka 'RelativeY') attribute. **/
	MxNumberTenths MxAttrGrpPosition::getRelativeYDefaultValue() const
	{
		return myImpl->getRelativeYDefaultValue();
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

