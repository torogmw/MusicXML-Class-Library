/* See MusicXML License at the bottom of this code page. */

/**
  * @file       MxAttrGrpFont.cpp
  * @class      lexicon::MxAttrGrpFont
  * @author     Matthew James Briggs
  * @email      matthew.james.briggs@gmail.com
  * @url        http://matthewjamesbriggs.com
  * @date       2014-11-28 14:15:39
  * @project    Lexicon
  * @version    1.0
  * @musicxmlid 1846
  * 
  * @brief The 'Font' class serves as a binding for the MusicXml 'font' attributeGroup.
  * 
 **/

#include "MxAttrGrpFont.h"
#include <sstream>
#include "_hidden_attributeStream.h"

/* Impl ------------------------------------------------------------------------------- */

namespace lexicon
{
	struct MxAttrGrpFont::Impl
	{
		Impl()
		:myFontFamily()
		,myFontStyle()
		,myFontSize()
		,myFontWeight()
		,myIsFontFamilyPresent( false )
		,myIsFontStylePresent( false )
		,myIsFontSizePresent( false )
		,myIsFontWeightPresent( false )
		{}

	private:
		MxCommaSeparatedText myFontFamily;
		MxEnumFontStyle myFontStyle;
		MxFontSize myFontSize;
		MxEnumFontWeight myFontWeight;
		bool myIsFontFamilyPresent;
		bool myIsFontStylePresent;
		bool myIsFontSizePresent;
		bool myIsFontWeightPresent;

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

		/** Returns the internal value of the 'font-family' (aka 'FontFamily')
		    attribute. **/
		MxCommaSeparatedText getFontFamily() const
		{
			return myFontFamily;
		}

		/** Returns the internal value of the 'font-style' (aka 'FontStyle') attribute. **/
		MxEnumFontStyle getFontStyle() const
		{
			return myFontStyle;
		}

		/** Returns the internal value of the 'font-size' (aka 'FontSize') attribute. **/
		MxFontSize getFontSize() const
		{
			return myFontSize;
		}

		/** Returns the internal value of the 'font-weight' (aka 'FontWeight')
		    attribute. **/
		MxEnumFontWeight getFontWeight() const
		{
			return myFontWeight;
		}

/* Set Attribute Values --------------------------------------------------------------- */

		/** Sets the internal value of the 'font-family' (aka 'FontFamily') attribute. **/
		void setFontFamily( const MxCommaSeparatedText& value_in )
		{
			myFontFamily = value_in;
		}

		/** Sets the internal value of the 'font-style' (aka 'FontStyle') attribute. **/
		void setFontStyle( const MxEnumFontStyle& value_in )
		{
			myFontStyle = value_in;
		}

		/** Sets the internal value of the 'font-size' (aka 'FontSize') attribute. **/
		void setFontSize( const MxFontSize& value_in )
		{
			myFontSize = value_in;
		}

		/** Sets the internal value of the 'font-weight' (aka 'FontWeight') attribute. **/
		void setFontWeight( const MxEnumFontWeight& value_in )
		{
			myFontWeight = value_in;
		}

/* Get IsAttributeRequired Values ----------------------------------------------------- */

		/** Indicates whether or not the 'font-family' (aka 'FontFamily') attribute
		    is required to be present in a MusicXML document. **/
		bool getIsFontFamilyRequired() const
		{
			return false;
		}

		/** Indicates whether or not the 'font-style' (aka 'FontStyle') attribute
		    is required to be present in a MusicXML document. **/
		bool getIsFontStyleRequired() const
		{
			return false;
		}

		/** Indicates whether or not the 'font-size' (aka 'FontSize') attribute
		    is required to be present in a MusicXML document. **/
		bool getIsFontSizeRequired() const
		{
			return false;
		}

		/** Indicates whether or not the 'font-weight' (aka 'FontWeight') attribute
		    is required to be present in a MusicXML document. **/
		bool getIsFontWeightRequired() const
		{
			return false;
		}

/* Get IsAttributePresent Values ------------------------------------------------------ */

		/** Indicates whether or not the 'font-family' (aka 'FontFamily') attribute
		    is (or will be) present in the MusicXML document. **/
		bool getIsFontFamilyPresent() const
		{
			return myIsFontFamilyPresent;
		}

		/** Indicates whether or not the 'font-style' (aka 'FontStyle') attribute
		    is (or will be) present in the MusicXML document. **/
		bool getIsFontStylePresent() const
		{
			return myIsFontStylePresent;
		}

		/** Indicates whether or not the 'font-size' (aka 'FontSize') attribute
		    is (or will be) present in the MusicXML document. **/
		bool getIsFontSizePresent() const
		{
			return myIsFontSizePresent;
		}

		/** Indicates whether or not the 'font-weight' (aka 'FontWeight') attribute
		    is (or will be) present in the MusicXML document. **/
		bool getIsFontWeightPresent() const
		{
			return myIsFontWeightPresent;
		}

/* Set IsAttributePresent Values ------------------------------------------------------ */

		/** Sets the value which indicates whether or not the 'font-family' (aka
		    'FontFamily') attribute is (or will be) present in the MusicXML document. **/
		void setIsFontFamilyPresent( const bool& value_in )
		{
			myIsFontFamilyPresent = value_in;
		}

		/** Sets the value which indicates whether or not the 'font-style' (aka
		    'FontStyle') attribute is (or will be) present in the MusicXML document. **/
		void setIsFontStylePresent( const bool& value_in )
		{
			myIsFontStylePresent = value_in;
		}

		/** Sets the value which indicates whether or not the 'font-size' (aka
		    'FontSize') attribute is (or will be) present in the MusicXML document. **/
		void setIsFontSizePresent( const bool& value_in )
		{
			myIsFontSizePresent = value_in;
		}

		/** Sets the value which indicates whether or not the 'font-weight' (aka
		    'FontWeight') attribute is (or will be) present in the MusicXML document. **/
		void setIsFontWeightPresent( const bool& value_in )
		{
			myIsFontWeightPresent = value_in;
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
			hidden::attributeStream( getIsFontFamilyPresent(), "font-family", getFontFamily().toString(), os_out, isFirst );
			hidden::attributeStream( getIsFontStylePresent(), "font-style", getFontStyle().toString(), os_out, isFirst );
			hidden::attributeStream( getIsFontSizePresent(), "font-size", getFontSize().toString(), os_out, isFirst );
			hidden::attributeStream( getIsFontWeightPresent(), "font-weight", getFontWeight().toString(), os_out, isFirst );
			return os_out;
		}

/* Get IsAttributeDefaultDefined Values ----------------------------------------------- */

		/** Indicates whether or not the 'font-family' (aka 'FontFamily') has a
		    default value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). **/
		bool getIsFontFamilyDefaultDefined() const
		{
			return false;
		}

		/** Indicates whether or not the 'font-style' (aka 'FontStyle') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). **/
		bool getIsFontStyleDefaultDefined() const
		{
			return false;
		}

		/** Indicates whether or not the 'font-size' (aka 'FontSize') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). **/
		bool getIsFontSizeDefaultDefined() const
		{
			return false;
		}

		/** Indicates whether or not the 'font-weight' (aka 'FontWeight') has a
		    default value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). **/
		bool getIsFontWeightDefaultDefined() const
		{
			return false;
		}

/* Get AttributeDefaultValue ---------------------------------------------------------- */

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'font-family' (aka 'FontFamily') attribute. **/
		MxCommaSeparatedText getFontFamilyDefaultValue() const
		{
			return MxCommaSeparatedText(  );
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'font-style' (aka 'FontStyle') attribute. **/
		MxEnumFontStyle getFontStyleDefaultValue() const
		{
			return MxEnumFontStyle(  );
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'font-size' (aka 'FontSize') attribute. **/
		MxFontSize getFontSizeDefaultValue() const
		{
			return MxFontSize(  );
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'font-weight' (aka 'FontWeight') attribute. **/
		MxEnumFontWeight getFontWeightDefaultValue() const
		{
			return MxEnumFontWeight(  );
		}

	}; // struct MxAttrGrpFont::Impl

	const int MxAttrGrpFont::Impl::myXsdID = 1846;
	const std::string MxAttrGrpFont::Impl::myXmlTypeName = "font";
	const std::string MxAttrGrpFont::Impl::myCppClassName = "MxAttrGrpFont";
	const std::string MxAttrGrpFont::Impl::myDocumentation = "The font attribute group gathers together attributes for determining the font within a credit or direction. They are based on the text styles for Cascading Style Sheets. The font-family is a comma-separated list of font names. These can be specific font styles such as Maestro or Opus, or one of several generic font styles: music, engraved, handwritten, text, serif, sans-serif, handwritten, cursive, fantasy, and monospace. The music, engraved, and handwritten values refer to music fonts; the rest refer to text fonts. The fantasy style refers to decorative text such as found in older German-style printing. The font-style can be normal or italic. The font-size can be one of the CSS sizes (xx-small, x-small, small, medium, large, x-large, xx-large) or a numeric point size. The font-weight can be normal or bold. The default is application-dependent, but is a text font vs. a music font.";

} // namespace lexicon


/* MxAttrGrpFont ---------------------------------------------------------------------- */

namespace lexicon
{

/* Constructor, Destructor, Copy, Assignment ------------------------------------------ */

	MxAttrGrpFont::MxAttrGrpFont()
	:myImpl( new Impl() ) {}

	MxAttrGrpFont::~MxAttrGrpFont() {}

	MxAttrGrpFont::MxAttrGrpFont( const MxAttrGrpFont& other )
	:myImpl( new Impl( *(other.myImpl) ) ) {}

	MxAttrGrpFont& MxAttrGrpFont::operator=( const MxAttrGrpFont& other )
	{
		this->myImpl = std::unique_ptr<Impl>( new Impl( *(other.myImpl) ) );
		return *this;
	}

/* Get Class Information -------------------------------------------------------------- */

	/** Returns the name of this xs:simpleType as found in the musicxml.xsd
	    document. **/
	std::string MxAttrGrpFont::getXmlTypeName() const
	{
		return myImpl->getXmlTypeName();
	}

	/** Returns the name of this C++ class. **/
	std::string MxAttrGrpFont::getClassName() const
	{
		return myImpl->getClassName();
	}

	/** Returns the documentation for this musicxml type as found in the musicxml.xsd
	    document. **/
	std::string MxAttrGrpFont::getDocumentation() const
	{
		return myImpl->getDocumentation();
	}

/* Get Attribute Values --------------------------------------------------------------- */

	/** Returns the internal value of the 'font-family' (aka 'FontFamily')
	    attribute. **/
	MxCommaSeparatedText MxAttrGrpFont::getFontFamily() const
	{
		return myImpl->getFontFamily();
	}

	/** Returns the internal value of the 'font-style' (aka 'FontStyle') attribute. **/
	MxEnumFontStyle MxAttrGrpFont::getFontStyle() const
	{
		return myImpl->getFontStyle();
	}

	/** Returns the internal value of the 'font-size' (aka 'FontSize') attribute. **/
	MxFontSize MxAttrGrpFont::getFontSize() const
	{
		return myImpl->getFontSize();
	}

	/** Returns the internal value of the 'font-weight' (aka 'FontWeight')
	    attribute. **/
	MxEnumFontWeight MxAttrGrpFont::getFontWeight() const
	{
		return myImpl->getFontWeight();
	}

/* Set Attribute Values --------------------------------------------------------------- */

	/** Sets the internal value of the 'font-family' (aka 'FontFamily') attribute. **/
	void MxAttrGrpFont::setFontFamily( const MxCommaSeparatedText& value_in )
	{
		myImpl->setFontFamily( value_in );
	}

	/** Sets the internal value of the 'font-style' (aka 'FontStyle') attribute. **/
	void MxAttrGrpFont::setFontStyle( const MxEnumFontStyle& value_in )
	{
		myImpl->setFontStyle( value_in );
	}

	/** Sets the internal value of the 'font-size' (aka 'FontSize') attribute. **/
	void MxAttrGrpFont::setFontSize( const MxFontSize& value_in )
	{
		myImpl->setFontSize( value_in );
	}

	/** Sets the internal value of the 'font-weight' (aka 'FontWeight') attribute. **/
	void MxAttrGrpFont::setFontWeight( const MxEnumFontWeight& value_in )
	{
		myImpl->setFontWeight( value_in );
	}

/* Get IsAttributeRequired Values ----------------------------------------------------- */

	/** Indicates whether or not the 'font-family' (aka 'FontFamily') attribute
	    is required to be present in a MusicXML document. **/
	bool MxAttrGrpFont::getIsFontFamilyRequired() const
	{
		return myImpl->getIsFontFamilyRequired();
	}

	/** Indicates whether or not the 'font-style' (aka 'FontStyle') attribute
	    is required to be present in a MusicXML document. **/
	bool MxAttrGrpFont::getIsFontStyleRequired() const
	{
		return myImpl->getIsFontStyleRequired();
	}

	/** Indicates whether or not the 'font-size' (aka 'FontSize') attribute
	    is required to be present in a MusicXML document. **/
	bool MxAttrGrpFont::getIsFontSizeRequired() const
	{
		return myImpl->getIsFontSizeRequired();
	}

	/** Indicates whether or not the 'font-weight' (aka 'FontWeight') attribute
	    is required to be present in a MusicXML document. **/
	bool MxAttrGrpFont::getIsFontWeightRequired() const
	{
		return myImpl->getIsFontWeightRequired();
	}

/* Get IsAttributePresent Values ------------------------------------------------------ */

	/** Indicates whether or not the 'font-family' (aka 'FontFamily') attribute
	    is (or will be) present in the MusicXML document. **/
	bool MxAttrGrpFont::getIsFontFamilyPresent() const
	{
		return myImpl->getIsFontFamilyPresent();
	}

	/** Indicates whether or not the 'font-style' (aka 'FontStyle') attribute
	    is (or will be) present in the MusicXML document. **/
	bool MxAttrGrpFont::getIsFontStylePresent() const
	{
		return myImpl->getIsFontStylePresent();
	}

	/** Indicates whether or not the 'font-size' (aka 'FontSize') attribute
	    is (or will be) present in the MusicXML document. **/
	bool MxAttrGrpFont::getIsFontSizePresent() const
	{
		return myImpl->getIsFontSizePresent();
	}

	/** Indicates whether or not the 'font-weight' (aka 'FontWeight') attribute
	    is (or will be) present in the MusicXML document. **/
	bool MxAttrGrpFont::getIsFontWeightPresent() const
	{
		return myImpl->getIsFontWeightPresent();
	}

/* Set IsAttributePresent Values ------------------------------------------------------ */

	/** Sets the value which indicates whether or not the 'font-family' (aka
	    'FontFamily') attribute is (or will be) present in the MusicXML document. **/
	void MxAttrGrpFont::setIsFontFamilyPresent( const bool& value_in )
	{
		myImpl->setIsFontFamilyPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'font-style' (aka
	    'FontStyle') attribute is (or will be) present in the MusicXML document. **/
	void MxAttrGrpFont::setIsFontStylePresent( const bool& value_in )
	{
		myImpl->setIsFontStylePresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'font-size' (aka
	    'FontSize') attribute is (or will be) present in the MusicXML document. **/
	void MxAttrGrpFont::setIsFontSizePresent( const bool& value_in )
	{
		myImpl->setIsFontSizePresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'font-weight' (aka
	    'FontWeight') attribute is (or will be) present in the MusicXML document. **/
	void MxAttrGrpFont::setIsFontWeightPresent( const bool& value_in )
	{
		myImpl->setIsFontWeightPresent( value_in );
	}

/* Stringing and Streaming ------------------------------------------------------------ */

	/** Returns the attributeGroup's value as a string where each attribute
	    is represented, if present, in the form attribute="vale". **/
	std::string MxAttrGrpFont::toString() const
	{
		return myImpl->toString();
	}

	/** Returns the attributeGroup's value as a string where each attribute
	    is represented, if present, in the form attribute="vale". **/
	std::ostream& MxAttrGrpFont::stream( std::ostream& os_out ) const
	{
		return myImpl->stream( os_out );
	}

/* Get IsAttributeDefaultDefined Values ----------------------------------------------- */

	/** Indicates whether or not the 'font-family' (aka 'FontFamily') has a
	    default value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). **/
	bool MxAttrGrpFont::getIsFontFamilyDefaultDefined() const
	{
		return myImpl->getIsFontFamilyDefaultDefined();
	}

	/** Indicates whether or not the 'font-style' (aka 'FontStyle') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). **/
	bool MxAttrGrpFont::getIsFontStyleDefaultDefined() const
	{
		return myImpl->getIsFontStyleDefaultDefined();
	}

	/** Indicates whether or not the 'font-size' (aka 'FontSize') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). **/
	bool MxAttrGrpFont::getIsFontSizeDefaultDefined() const
	{
		return myImpl->getIsFontSizeDefaultDefined();
	}

	/** Indicates whether or not the 'font-weight' (aka 'FontWeight') has a
	    default value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). **/
	bool MxAttrGrpFont::getIsFontWeightDefaultDefined() const
	{
		return myImpl->getIsFontWeightDefaultDefined();
	}

/* Get AttributeDefaultValue ---------------------------------------------------------- */

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'font-family' (aka 'FontFamily') attribute. **/
	MxCommaSeparatedText MxAttrGrpFont::getFontFamilyDefaultValue() const
	{
		return myImpl->getFontFamilyDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'font-style' (aka 'FontStyle') attribute. **/
	MxEnumFontStyle MxAttrGrpFont::getFontStyleDefaultValue() const
	{
		return myImpl->getFontStyleDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'font-size' (aka 'FontSize') attribute. **/
	MxFontSize MxAttrGrpFont::getFontSizeDefaultValue() const
	{
		return myImpl->getFontSizeDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'font-weight' (aka 'FontWeight') attribute. **/
	MxEnumFontWeight MxAttrGrpFont::getFontWeightDefaultValue() const
	{
		return myImpl->getFontWeightDefaultValue();
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

