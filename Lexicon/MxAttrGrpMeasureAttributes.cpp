/* See MusicXML License at the bottom of this code page. */

/**
  * @file       MxAttrGrpMeasureAttributes.cpp
  * @class      lexicon::MxAttrGrpMeasureAttributes
  * @author     Matthew James Briggs
  * @email      matthew.james.briggs@gmail.com
  * @url        http://matthewjamesbriggs.com
  * @date       2014-11-28 14:15:41
  * @project    Lexicon
  * @version    1.0
  * @musicxmlid 2192
  * 
  * @brief The 'MeasureAttributes' class serves as a binding for the MusicXml
  * 'measure-attributes' attributeGroup.
  * 
 **/

#include "MxAttrGrpMeasureAttributes.h"
#include <sstream>
#include "_hidden_attributeStream.h"

/* Impl ------------------------------------------------------------------------------- */

namespace lexicon
{
	struct MxAttrGrpMeasureAttributes::Impl
	{
		Impl()
		:myNumber()
		,myImplicit()
		,myNonControlling()
		,myWidth()
		,myIsNumberPresent( true )
		,myIsImplicitPresent( false )
		,myIsNonControllingPresent( false )
		,myIsWidthPresent( false )
		{}

	private:
		XsToken myNumber;
		MxEnumYesNo myImplicit;
		MxEnumYesNo myNonControlling;
		MxNumberTenths myWidth;
		bool myIsNumberPresent;
		bool myIsImplicitPresent;
		bool myIsNonControllingPresent;
		bool myIsWidthPresent;

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

		/** Returns the internal value of the 'number' (aka 'Number') attribute. **/
		XsToken getNumber() const
		{
			return myNumber;
		}

		/** Returns the internal value of the 'implicit' (aka 'Implicit') attribute. **/
		MxEnumYesNo getImplicit() const
		{
			return myImplicit;
		}

		/** Returns the internal value of the 'non-controlling' (aka 'NonControlling')
		    attribute. **/
		MxEnumYesNo getNonControlling() const
		{
			return myNonControlling;
		}

		/** Returns the internal value of the 'width' (aka 'Width') attribute. **/
		MxNumberTenths getWidth() const
		{
			return myWidth;
		}

/* Set Attribute Values --------------------------------------------------------------- */

		/** Sets the internal value of the 'number' (aka 'Number') attribute. **/
		void setNumber( const XsToken& value_in )
		{
			myNumber = value_in;
		}

		/** Sets the internal value of the 'implicit' (aka 'Implicit') attribute. **/
		void setImplicit( const MxEnumYesNo& value_in )
		{
			myImplicit = value_in;
		}

		/** Sets the internal value of the 'non-controlling' (aka 'NonControlling')
		    attribute. **/
		void setNonControlling( const MxEnumYesNo& value_in )
		{
			myNonControlling = value_in;
		}

		/** Sets the internal value of the 'width' (aka 'Width') attribute. **/
		void setWidth( const MxNumberTenths& value_in )
		{
			myWidth = value_in;
		}

/* Get IsAttributeRequired Values ----------------------------------------------------- */

		/** Indicates whether or not the 'number' (aka 'Number') attribute is required
		    to be present in a MusicXML document. **/
		bool getIsNumberRequired() const
		{
			return true;
		}

		/** Indicates whether or not the 'implicit' (aka 'Implicit') attribute
		    is required to be present in a MusicXML document. **/
		bool getIsImplicitRequired() const
		{
			return false;
		}

		/** Indicates whether or not the 'non-controlling' (aka 'NonControlling')
		    attribute is required to be present in a MusicXML document. **/
		bool getIsNonControllingRequired() const
		{
			return false;
		}

		/** Indicates whether or not the 'width' (aka 'Width') attribute is required
		    to be present in a MusicXML document. **/
		bool getIsWidthRequired() const
		{
			return false;
		}

/* Get IsAttributePresent Values ------------------------------------------------------ */

		/** Indicates whether or not the 'number' (aka 'Number') attribute is (or
		    will be) present in the MusicXML document. Note: because 'number' is
		    required by the MusicXML specification, getIsNumberPresent will always
		    return 'true'. There is no corresponding setIsNumberPresent function
		    for this attribute. **/
		bool getIsNumberPresent() const
		{
			return myIsNumberPresent;
		}

		/** Indicates whether or not the 'implicit' (aka 'Implicit') attribute
		    is (or will be) present in the MusicXML document. **/
		bool getIsImplicitPresent() const
		{
			return myIsImplicitPresent;
		}

		/** Indicates whether or not the 'non-controlling' (aka 'NonControlling')
		    attribute is (or will be) present in the MusicXML document. **/
		bool getIsNonControllingPresent() const
		{
			return myIsNonControllingPresent;
		}

		/** Indicates whether or not the 'width' (aka 'Width') attribute is (or
		    will be) present in the MusicXML document. **/
		bool getIsWidthPresent() const
		{
			return myIsWidthPresent;
		}

/* Set IsAttributePresent Values ------------------------------------------------------ */

		/** Sets the value which indicates whether or not the 'implicit' (aka 'Implicit')
		    attribute is (or will be) present in the MusicXML document. **/
		void setIsImplicitPresent( const bool& value_in )
		{
			myIsImplicitPresent = value_in;
		}

		/** Sets the value which indicates whether or not the 'non-controlling'
		    (aka 'NonControlling') attribute is (or will be) present in the MusicXML
		    document. **/
		void setIsNonControllingPresent( const bool& value_in )
		{
			myIsNonControllingPresent = value_in;
		}

		/** Sets the value which indicates whether or not the 'width' (aka 'Width')
		    attribute is (or will be) present in the MusicXML document. **/
		void setIsWidthPresent( const bool& value_in )
		{
			myIsWidthPresent = value_in;
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
			hidden::attributeStream( getIsNumberPresent(), "number", getNumber().toString(), os_out, isFirst );
			hidden::attributeStream( getIsImplicitPresent(), "implicit", getImplicit().toString(), os_out, isFirst );
			hidden::attributeStream( getIsNonControllingPresent(), "non-controlling", getNonControlling().toString(), os_out, isFirst );
			hidden::attributeStream( getIsWidthPresent(), "width", getWidth().toString(), os_out, isFirst );
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

		/** Indicates whether or not the 'implicit' (aka 'Implicit') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). **/
		bool getIsImplicitDefaultDefined() const
		{
			return false;
		}

		/** Indicates whether or not the 'non-controlling' (aka 'NonControlling')
		    has a default value defined in the MusicXML xsd specification (either
		    explicitly or in the documentation). **/
		bool getIsNonControllingDefaultDefined() const
		{
			return false;
		}

		/** Indicates whether or not the 'width' (aka 'Width') has a default value
		    defined in the MusicXML xsd specification (either explicitly or in
		    the documentation). **/
		bool getIsWidthDefaultDefined() const
		{
			return false;
		}

/* Get AttributeDefaultValue ---------------------------------------------------------- */

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'number' (aka 'Number') attribute. **/
		XsToken getNumberDefaultValue() const
		{
			return XsToken(  );
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'implicit' (aka 'Implicit') attribute. **/
		MxEnumYesNo getImplicitDefaultValue() const
		{
			return MxEnumYesNo(  );
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'non-controlling' (aka 'NonControlling') attribute. **/
		MxEnumYesNo getNonControllingDefaultValue() const
		{
			return MxEnumYesNo(  );
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'width' (aka 'Width') attribute. **/
		MxNumberTenths getWidthDefaultValue() const
		{
			return MxNumberTenths(  );
		}

	}; // struct MxAttrGrpMeasureAttributes::Impl

	const int MxAttrGrpMeasureAttributes::Impl::myXsdID = 2192;
	const std::string MxAttrGrpMeasureAttributes::Impl::myXmlTypeName = "measure-attributes";
	const std::string MxAttrGrpMeasureAttributes::Impl::myCppClassName = "MxAttrGrpMeasureAttributes";
	const std::string MxAttrGrpMeasureAttributes::Impl::myDocumentation = "The measure-attributes group is used by the measure element. Measures have a required number attribute (going from partwise to timewise, measures are grouped via the number). The implicit attribute is set to yes for measures where the measure number should never appear, such as pickup measures and the last half of mid-measure repeats. The value is no if not specified. The non-controlling attribute is intended for use in multimetric music like the Don Giovanni minuet. If set to yes, the left barline in this measure does not coincide with the left barline of measures in other parts. The value is no if not specified. In partwise files, the number attribute should be the same for measures in different parts that share the same left barline. While the number attribute is often numeric, it does not have to be. Non-numeric values are typically used together with the implicit or non-controlling attributes being set to yes. For a pickup measure, the number attribute is typically set to 0 and the implicit attribute is typically set to yes. Further details about measure numbering can be defined using the measure-numbering element. Measure width is specified in tenths. These are the global tenths specified in the scaling element, not local tenths as modified by the staff-size element. The width covers the entire measure from barline or system start to barline or system end.";

} // namespace lexicon


/* MxAttrGrpMeasureAttributes --------------------------------------------------------- */

namespace lexicon
{

/* Constructor, Destructor, Copy, Assignment ------------------------------------------ */

	MxAttrGrpMeasureAttributes::MxAttrGrpMeasureAttributes()
	:myImpl( new Impl() ) {}

	MxAttrGrpMeasureAttributes::~MxAttrGrpMeasureAttributes() {}

	MxAttrGrpMeasureAttributes::MxAttrGrpMeasureAttributes( const MxAttrGrpMeasureAttributes& other )
	:myImpl( new Impl( *(other.myImpl) ) ) {}

	MxAttrGrpMeasureAttributes& MxAttrGrpMeasureAttributes::operator=( const MxAttrGrpMeasureAttributes& other )
	{
		this->myImpl = std::unique_ptr<Impl>( new Impl( *(other.myImpl) ) );
		return *this;
	}

/* Get Class Information -------------------------------------------------------------- */

	/** Returns the name of this xs:simpleType as found in the musicxml.xsd
	    document. **/
	std::string MxAttrGrpMeasureAttributes::getXmlTypeName() const
	{
		return myImpl->getXmlTypeName();
	}

	/** Returns the name of this C++ class. **/
	std::string MxAttrGrpMeasureAttributes::getClassName() const
	{
		return myImpl->getClassName();
	}

	/** Returns the documentation for this musicxml type as found in the musicxml.xsd
	    document. **/
	std::string MxAttrGrpMeasureAttributes::getDocumentation() const
	{
		return myImpl->getDocumentation();
	}

/* Get Attribute Values --------------------------------------------------------------- */

	/** Returns the internal value of the 'number' (aka 'Number') attribute. **/
	XsToken MxAttrGrpMeasureAttributes::getNumber() const
	{
		return myImpl->getNumber();
	}

	/** Returns the internal value of the 'implicit' (aka 'Implicit') attribute. **/
	MxEnumYesNo MxAttrGrpMeasureAttributes::getImplicit() const
	{
		return myImpl->getImplicit();
	}

	/** Returns the internal value of the 'non-controlling' (aka 'NonControlling')
	    attribute. **/
	MxEnumYesNo MxAttrGrpMeasureAttributes::getNonControlling() const
	{
		return myImpl->getNonControlling();
	}

	/** Returns the internal value of the 'width' (aka 'Width') attribute. **/
	MxNumberTenths MxAttrGrpMeasureAttributes::getWidth() const
	{
		return myImpl->getWidth();
	}

/* Set Attribute Values --------------------------------------------------------------- */

	/** Sets the internal value of the 'number' (aka 'Number') attribute. **/
	void MxAttrGrpMeasureAttributes::setNumber( const XsToken& value_in )
	{
		myImpl->setNumber( value_in );
	}

	/** Sets the internal value of the 'implicit' (aka 'Implicit') attribute. **/
	void MxAttrGrpMeasureAttributes::setImplicit( const MxEnumYesNo& value_in )
	{
		myImpl->setImplicit( value_in );
	}

	/** Sets the internal value of the 'non-controlling' (aka 'NonControlling')
	    attribute. **/
	void MxAttrGrpMeasureAttributes::setNonControlling( const MxEnumYesNo& value_in )
	{
		myImpl->setNonControlling( value_in );
	}

	/** Sets the internal value of the 'width' (aka 'Width') attribute. **/
	void MxAttrGrpMeasureAttributes::setWidth( const MxNumberTenths& value_in )
	{
		myImpl->setWidth( value_in );
	}

/* Get IsAttributeRequired Values ----------------------------------------------------- */

	/** Indicates whether or not the 'number' (aka 'Number') attribute is required
	    to be present in a MusicXML document. **/
	bool MxAttrGrpMeasureAttributes::getIsNumberRequired() const
	{
		return myImpl->getIsNumberRequired();
	}

	/** Indicates whether or not the 'implicit' (aka 'Implicit') attribute
	    is required to be present in a MusicXML document. **/
	bool MxAttrGrpMeasureAttributes::getIsImplicitRequired() const
	{
		return myImpl->getIsImplicitRequired();
	}

	/** Indicates whether or not the 'non-controlling' (aka 'NonControlling')
	    attribute is required to be present in a MusicXML document. **/
	bool MxAttrGrpMeasureAttributes::getIsNonControllingRequired() const
	{
		return myImpl->getIsNonControllingRequired();
	}

	/** Indicates whether or not the 'width' (aka 'Width') attribute is required
	    to be present in a MusicXML document. **/
	bool MxAttrGrpMeasureAttributes::getIsWidthRequired() const
	{
		return myImpl->getIsWidthRequired();
	}

/* Get IsAttributePresent Values ------------------------------------------------------ */

	/** Indicates whether or not the 'number' (aka 'Number') attribute is (or
	    will be) present in the MusicXML document. Note: because 'number' is
	    required by the MusicXML specification, getIsNumberPresent will always
	    return 'true'. There is no corresponding setIsNumberPresent function
	    for this attribute. **/
	bool MxAttrGrpMeasureAttributes::getIsNumberPresent() const
	{
		return myImpl->getIsNumberPresent();
	}

	/** Indicates whether or not the 'implicit' (aka 'Implicit') attribute
	    is (or will be) present in the MusicXML document. **/
	bool MxAttrGrpMeasureAttributes::getIsImplicitPresent() const
	{
		return myImpl->getIsImplicitPresent();
	}

	/** Indicates whether or not the 'non-controlling' (aka 'NonControlling')
	    attribute is (or will be) present in the MusicXML document. **/
	bool MxAttrGrpMeasureAttributes::getIsNonControllingPresent() const
	{
		return myImpl->getIsNonControllingPresent();
	}

	/** Indicates whether or not the 'width' (aka 'Width') attribute is (or
	    will be) present in the MusicXML document. **/
	bool MxAttrGrpMeasureAttributes::getIsWidthPresent() const
	{
		return myImpl->getIsWidthPresent();
	}

/* Set IsAttributePresent Values ------------------------------------------------------ */

	/** Sets the value which indicates whether or not the 'implicit' (aka 'Implicit')
	    attribute is (or will be) present in the MusicXML document. **/
	void MxAttrGrpMeasureAttributes::setIsImplicitPresent( const bool& value_in )
	{
		myImpl->setIsImplicitPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'non-controlling'
	    (aka 'NonControlling') attribute is (or will be) present in the MusicXML
	    document. **/
	void MxAttrGrpMeasureAttributes::setIsNonControllingPresent( const bool& value_in )
	{
		myImpl->setIsNonControllingPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'width' (aka 'Width')
	    attribute is (or will be) present in the MusicXML document. **/
	void MxAttrGrpMeasureAttributes::setIsWidthPresent( const bool& value_in )
	{
		myImpl->setIsWidthPresent( value_in );
	}

/* Stringing and Streaming ------------------------------------------------------------ */

	/** Returns the attributeGroup's value as a string where each attribute
	    is represented, if present, in the form attribute="vale". **/
	std::string MxAttrGrpMeasureAttributes::toString() const
	{
		return myImpl->toString();
	}

	/** Returns the attributeGroup's value as a string where each attribute
	    is represented, if present, in the form attribute="vale". **/
	std::ostream& MxAttrGrpMeasureAttributes::stream( std::ostream& os_out ) const
	{
		return myImpl->stream( os_out );
	}

/* Get IsAttributeDefaultDefined Values ----------------------------------------------- */

	/** Indicates whether or not the 'number' (aka 'Number') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). **/
	bool MxAttrGrpMeasureAttributes::getIsNumberDefaultDefined() const
	{
		return myImpl->getIsNumberDefaultDefined();
	}

	/** Indicates whether or not the 'implicit' (aka 'Implicit') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). **/
	bool MxAttrGrpMeasureAttributes::getIsImplicitDefaultDefined() const
	{
		return myImpl->getIsImplicitDefaultDefined();
	}

	/** Indicates whether or not the 'non-controlling' (aka 'NonControlling')
	    has a default value defined in the MusicXML xsd specification (either
	    explicitly or in the documentation). **/
	bool MxAttrGrpMeasureAttributes::getIsNonControllingDefaultDefined() const
	{
		return myImpl->getIsNonControllingDefaultDefined();
	}

	/** Indicates whether or not the 'width' (aka 'Width') has a default value
	    defined in the MusicXML xsd specification (either explicitly or in
	    the documentation). **/
	bool MxAttrGrpMeasureAttributes::getIsWidthDefaultDefined() const
	{
		return myImpl->getIsWidthDefaultDefined();
	}

/* Get AttributeDefaultValue ---------------------------------------------------------- */

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'number' (aka 'Number') attribute. **/
	XsToken MxAttrGrpMeasureAttributes::getNumberDefaultValue() const
	{
		return myImpl->getNumberDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'implicit' (aka 'Implicit') attribute. **/
	MxEnumYesNo MxAttrGrpMeasureAttributes::getImplicitDefaultValue() const
	{
		return myImpl->getImplicitDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'non-controlling' (aka 'NonControlling') attribute. **/
	MxEnumYesNo MxAttrGrpMeasureAttributes::getNonControllingDefaultValue() const
	{
		return myImpl->getNonControllingDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'width' (aka 'Width') attribute. **/
	MxNumberTenths MxAttrGrpMeasureAttributes::getWidthDefaultValue() const
	{
		return myImpl->getWidthDefaultValue();
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

