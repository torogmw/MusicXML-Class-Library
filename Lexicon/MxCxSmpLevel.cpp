/* See MusicXML License at the bottom of this code page. */

/**
  * @file       MxCxSmpLevel.cpp
  * @class      lexicon::MxCxSmpLevel
  * @author     Matthew James Briggs
  * @email      matthew.james.briggs@gmail.com
  * @url        http://matthewjamesbriggs.com
  * @date       2014-12-02 17:31:48
  * @project    Lexicon
  * @version    1.0
  * @musicxmlid 2427
  * 
  * @brief The 'Level' class serves as a binding for the MusicXml 'level' complexType.
  * 
 **/

#include "MxCxSmpLevel.h"
#include <sstream>
#include "_hidden_attributeStream.h"
#include "MxAttrGrpLevelDisplay.h"

/* Impl ------------------------------------------------------------------------------- */

namespace lexicon
{
	struct MxCxSmpLevel::Impl
	{
		Impl( const std::string& elementName, const XsString& value_in )
		:myElementName( elementName )
		,myValue( value_in )
		,myReference( MxEnumYesNo( lexicon::enums::YesNo::no ) )
		,myMxAttrGrpLevelDisplay()
		,myIsReferencePresent( false )
		{}

	private:
		std::string myElementName;
		XsString myValue;
		MxEnumYesNo myReference;
		MxAttrGrpLevelDisplay myMxAttrGrpLevelDisplay;
		bool myIsReferencePresent;

		const static int myXsdID;
		const static std::string myXmlTypeName;
		const static std::string myCppClassName;
		const static std::string myDocumentation;

	public:

/* GetSet Value and Element Name ------------------------------------------------------ */

		/** Returns the contained xs:simpleContent value. **/
		XsString getValue() const
		{
			return myValue;
		}

		/** Sets the contained xs:simpleContent value. **/
		void setValue( const XsString& value_in )
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

		/** Returns the internal value of the 'reference' (aka 'Reference') attribute. **/
		MxEnumYesNo getReference() const
		{
			return myReference;
		}

		/** Returns the internal value of the 'parentheses' (aka 'Parentheses')
		    attribute. This attribute is a member of the 'level-display' (aka 'LevelDisplay')
		    attributeGroup. **/
		MxEnumYesNo getParentheses() const
		{
			return myMxAttrGrpLevelDisplay.getParentheses();
		}

		/** Returns the internal value of the 'bracket' (aka 'Bracket') attribute.
		    This attribute is a member of the 'level-display' (aka 'LevelDisplay')
		    attributeGroup. **/
		MxEnumYesNo getBracket() const
		{
			return myMxAttrGrpLevelDisplay.getBracket();
		}

		/** Returns the internal value of the 'size' (aka 'Size') attribute. This
		    attribute is a member of the 'level-display' (aka 'LevelDisplay') attributeGroup. **/
		MxEnumSymbolSize getSize() const
		{
			return myMxAttrGrpLevelDisplay.getSize();
		}

/* Set Attribute Values --------------------------------------------------------------- */

		/** Sets the internal value of the 'reference' (aka 'Reference') attribute. **/
		void setReference( const MxEnumYesNo& value_in )
		{
			myReference = value_in;
		}

		/** Sets the internal value of the 'parentheses' (aka 'Parentheses') attribute.
		    This attribute is a member of the 'level-display' (aka 'LevelDisplay')
		    attributeGroup. **/
		void setParentheses( const MxEnumYesNo& value_in )
		{
			myMxAttrGrpLevelDisplay.setParentheses( value_in );
		}

		/** Sets the internal value of the 'bracket' (aka 'Bracket') attribute.
		    This attribute is a member of the 'level-display' (aka 'LevelDisplay')
		    attributeGroup. **/
		void setBracket( const MxEnumYesNo& value_in )
		{
			myMxAttrGrpLevelDisplay.setBracket( value_in );
		}

		/** Sets the internal value of the 'size' (aka 'Size') attribute. This
		    attribute is a member of the 'level-display' (aka 'LevelDisplay') attributeGroup. **/
		void setSize( const MxEnumSymbolSize& value_in )
		{
			myMxAttrGrpLevelDisplay.setSize( value_in );
		}

/* Get IsAttributeRequired Values ----------------------------------------------------- */

		/** Indicates whether or not the 'reference' (aka 'Reference') attribute
		    is required to be present in a MusicXML document. **/
		bool getIsReferenceRequired() const
		{
			return false;
		}

		/** Indicates whether or not the 'parentheses' (aka 'Parentheses') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'level-display' (aka 'LevelDisplay') attributeGroup. **/
		bool getIsParenthesesRequired() const
		{
			return myMxAttrGrpLevelDisplay.getIsParenthesesRequired();
		}

		/** Indicates whether or not the 'bracket' (aka 'Bracket') attribute is
		    required to be present in a MusicXML document. This attribute is a
		    member of the 'level-display' (aka 'LevelDisplay') attributeGroup. **/
		bool getIsBracketRequired() const
		{
			return myMxAttrGrpLevelDisplay.getIsBracketRequired();
		}

		/** Indicates whether or not the 'size' (aka 'Size') attribute is required
		    to be present in a MusicXML document. This attribute is a member of
		    the 'level-display' (aka 'LevelDisplay') attributeGroup. **/
		bool getIsSizeRequired() const
		{
			return myMxAttrGrpLevelDisplay.getIsSizeRequired();
		}

/* Get IsAttributePresent Values ------------------------------------------------------ */

		/** Indicates whether or not the 'reference' (aka 'Reference') attribute
		    is (or will be) present in the MusicXML document. **/
		bool getIsReferencePresent() const
		{
			return myIsReferencePresent;
		}

		/** Indicates whether or not the 'parentheses' (aka 'Parentheses') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'level-display' (aka 'LevelDisplay') attributeGroup. **/
		bool getIsParenthesesPresent() const
		{
			return myMxAttrGrpLevelDisplay.getIsParenthesesPresent();
		}

		/** Indicates whether or not the 'bracket' (aka 'Bracket') attribute is
		    (or will be) present in the MusicXML document. This attribute is a
		    member of the 'level-display' (aka 'LevelDisplay') attributeGroup. **/
		bool getIsBracketPresent() const
		{
			return myMxAttrGrpLevelDisplay.getIsBracketPresent();
		}

		/** Indicates whether or not the 'size' (aka 'Size') attribute is (or will
		    be) present in the MusicXML document. This attribute is a member of
		    the 'level-display' (aka 'LevelDisplay') attributeGroup. **/
		bool getIsSizePresent() const
		{
			return myMxAttrGrpLevelDisplay.getIsSizePresent();
		}

/* Set IsAttributePresent Values ------------------------------------------------------ */

		/** Sets the value which indicates whether or not the 'reference' (aka
		    'Reference') attribute is (or will be) present in the MusicXML document. **/
		void setIsReferencePresent( const bool& value_in )
		{
			myIsReferencePresent = value_in;
		}

		/** Sets the value which indicates whether or not the 'parentheses' (aka
		    'Parentheses') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'level-display' (aka 'LevelDisplay')
		    attributeGroup. **/
		void setIsParenthesesPresent( const bool& value_in )
		{
			myMxAttrGrpLevelDisplay.setIsParenthesesPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'bracket' (aka 'Bracket')
		    attribute is (or will be) present in the MusicXML document. This attribute
		    is a member of the 'level-display' (aka 'LevelDisplay') attributeGroup. **/
		void setIsBracketPresent( const bool& value_in )
		{
			myMxAttrGrpLevelDisplay.setIsBracketPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'size' (aka 'Size')
		    attribute is (or will be) present in the MusicXML document. This attribute
		    is a member of the 'level-display' (aka 'LevelDisplay') attributeGroup. **/
		void setIsSizePresent( const bool& value_in )
		{
			myMxAttrGrpLevelDisplay.setIsSizePresent( value_in );
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
			hidden::attributeStream( getIsReferencePresent(), "reference", getReference().toString(), os_out, isFirst );
			hidden::attributeStream( getIsParenthesesPresent(), "parentheses", getParentheses().toString(), os_out, isFirst );
			hidden::attributeStream( getIsBracketPresent(), "bracket", getBracket().toString(), os_out, isFirst );
			hidden::attributeStream( getIsSizePresent(), "size", getSize().toString(), os_out, isFirst );
			os_out << '>';
			os_out << getValue().toString();
			os_out << "</";
			os_out << getElementName();
			os_out << '>';
			return os_out;
		}

/* Get IsAttributeDefaultDefined Values ----------------------------------------------- */

		/** Indicates whether or not the 'reference' (aka 'Reference') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). **/
		bool getIsReferenceDefaultDefined() const
		{
			return true;
		}

		/** Indicates whether or not the 'parentheses' (aka 'Parentheses') has
		    a default value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'level-display'
		    (aka 'LevelDisplay') attributeGroup. **/
		bool getIsParenthesesDefaultDefined() const
		{
			return myMxAttrGrpLevelDisplay.getIsParenthesesDefaultDefined();
		}

		/** Indicates whether or not the 'bracket' (aka 'Bracket') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'level-display'
		    (aka 'LevelDisplay') attributeGroup. **/
		bool getIsBracketDefaultDefined() const
		{
			return myMxAttrGrpLevelDisplay.getIsBracketDefaultDefined();
		}

		/** Indicates whether or not the 'size' (aka 'Size') has a default value
		    defined in the MusicXML xsd specification (either explicitly or in
		    the documentation). This attribute is a member of the 'level-display'
		    (aka 'LevelDisplay') attributeGroup. **/
		bool getIsSizeDefaultDefined() const
		{
			return myMxAttrGrpLevelDisplay.getIsSizeDefaultDefined();
		}

/* Get AttributeDefaultValue ---------------------------------------------------------- */

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'reference' (aka 'Reference') attribute. **/
		MxEnumYesNo getReferenceDefaultValue() const
		{
			return MxEnumYesNo( lexicon::enums::YesNo::no );
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'parentheses' (aka 'Parentheses') attribute. This attribute is
		    a member of the 'level-display' (aka 'LevelDisplay') attributeGroup. **/
		MxEnumYesNo getParenthesesDefaultValue() const
		{
			return myMxAttrGrpLevelDisplay.getParenthesesDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'bracket' (aka 'Bracket') attribute. This attribute is a member
		    of the 'level-display' (aka 'LevelDisplay') attributeGroup. **/
		MxEnumYesNo getBracketDefaultValue() const
		{
			return myMxAttrGrpLevelDisplay.getBracketDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'size' (aka 'Size') attribute. This attribute is a member of the
		    'level-display' (aka 'LevelDisplay') attributeGroup. **/
		MxEnumSymbolSize getSizeDefaultValue() const
		{
			return myMxAttrGrpLevelDisplay.getSizeDefaultValue();
		}

	}; // struct MxCxSmpLevel::Impl

	const int MxCxSmpLevel::Impl::myXsdID = 2427;
	const std::string MxCxSmpLevel::Impl::myXmlTypeName = "level";
	const std::string MxCxSmpLevel::Impl::myCppClassName = "MxCxSmpLevel";
	const std::string MxCxSmpLevel::Impl::myDocumentation = "The level type is used to specify editorial information for different MusicXML elements. If the reference attribute for the level element is yes, this indicates editorial information that is for display only and should not affect playback. For instance, a modern edition of older music may set reference='yes' on the attributes containing the music's original clef, key, and time signature. It is no by default.";

} // namespace lexicon


/* MxCxSmpLevel ----------------------------------------------------------------------- */

namespace lexicon
{

/* Constructor, Destructor, Copy, Assignment ------------------------------------------ */

	MxCxSmpLevel::MxCxSmpLevel( const std::string& elementName, const XsString& value_in )
	:myImpl( new Impl( elementName, value_in ) ) {}

	MxCxSmpLevel::~MxCxSmpLevel() {}

	MxCxSmpLevel::MxCxSmpLevel( const MxCxSmpLevel& other )
	:myImpl( new Impl( *(other.myImpl) ) ) {}

	MxCxSmpLevel& MxCxSmpLevel::operator=( const MxCxSmpLevel& other )
	{
		this->myImpl = std::unique_ptr<Impl>( new Impl( *(other.myImpl) ) );
		return *this;
	}

/* GetSet Value and Element Name ------------------------------------------------------ */

	/** Returns the contained xs:simpleContent value. **/
	XsString MxCxSmpLevel::getValue() const
	{
		return myImpl->getValue();
	}

	/** Sets the contained xs:simpleContent value. **/
	void MxCxSmpLevel::setValue( const XsString& value_in )
	{
		myImpl->setValue( value_in );
	}

	/** Returns the name of the Xml element employing this ComplexType. **/
	std::string MxCxSmpLevel::getElementName() const
	{
		return myImpl->getElementName();
	}

/* Get Class Information -------------------------------------------------------------- */

	/** Returns the name of this xs:complexType as found in the musicxml.xsd
	    document. **/
	std::string MxCxSmpLevel::getXmlTypeName() const
	{
		return myImpl->getXmlTypeName();
	}

	/** Returns the name of this C++ class. **/
	std::string MxCxSmpLevel::getClassName() const
	{
		return myImpl->getClassName();
	}

	/** Returns the documentation for this musicxml type as found in the musicxml.xsd
	    document. **/
	std::string MxCxSmpLevel::getDocumentation() const
	{
		return myImpl->getDocumentation();
	}

/* Get Attribute Values --------------------------------------------------------------- */

	/** Returns the internal value of the 'reference' (aka 'Reference') attribute. **/
	MxEnumYesNo MxCxSmpLevel::getReference() const
	{
		return myImpl->getReference();
	}

	/** Returns the internal value of the 'parentheses' (aka 'Parentheses')
	    attribute. This attribute is a member of the 'level-display' (aka 'LevelDisplay')
	    attributeGroup. **/
	MxEnumYesNo MxCxSmpLevel::getParentheses() const
	{
		return myImpl->getParentheses();
	}

	/** Returns the internal value of the 'bracket' (aka 'Bracket') attribute.
	    This attribute is a member of the 'level-display' (aka 'LevelDisplay')
	    attributeGroup. **/
	MxEnumYesNo MxCxSmpLevel::getBracket() const
	{
		return myImpl->getBracket();
	}

	/** Returns the internal value of the 'size' (aka 'Size') attribute. This
	    attribute is a member of the 'level-display' (aka 'LevelDisplay') attributeGroup. **/
	MxEnumSymbolSize MxCxSmpLevel::getSize() const
	{
		return myImpl->getSize();
	}

/* Set Attribute Values --------------------------------------------------------------- */

	/** Sets the internal value of the 'reference' (aka 'Reference') attribute. **/
	void MxCxSmpLevel::setReference( const MxEnumYesNo& value_in )
	{
		myImpl->setReference( value_in );
	}

	/** Sets the internal value of the 'parentheses' (aka 'Parentheses') attribute.
	    This attribute is a member of the 'level-display' (aka 'LevelDisplay')
	    attributeGroup. **/
	void MxCxSmpLevel::setParentheses( const MxEnumYesNo& value_in )
	{
		myImpl->setParentheses( value_in );
	}

	/** Sets the internal value of the 'bracket' (aka 'Bracket') attribute.
	    This attribute is a member of the 'level-display' (aka 'LevelDisplay')
	    attributeGroup. **/
	void MxCxSmpLevel::setBracket( const MxEnumYesNo& value_in )
	{
		myImpl->setBracket( value_in );
	}

	/** Sets the internal value of the 'size' (aka 'Size') attribute. This
	    attribute is a member of the 'level-display' (aka 'LevelDisplay') attributeGroup. **/
	void MxCxSmpLevel::setSize( const MxEnumSymbolSize& value_in )
	{
		myImpl->setSize( value_in );
	}

/* Get IsAttributeRequired Values ----------------------------------------------------- */

	/** Indicates whether or not the 'reference' (aka 'Reference') attribute
	    is required to be present in a MusicXML document. **/
	bool MxCxSmpLevel::getIsReferenceRequired() const
	{
		return myImpl->getIsReferenceRequired();
	}

	/** Indicates whether or not the 'parentheses' (aka 'Parentheses') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'level-display' (aka 'LevelDisplay') attributeGroup. **/
	bool MxCxSmpLevel::getIsParenthesesRequired() const
	{
		return myImpl->getIsParenthesesRequired();
	}

	/** Indicates whether or not the 'bracket' (aka 'Bracket') attribute is
	    required to be present in a MusicXML document. This attribute is a
	    member of the 'level-display' (aka 'LevelDisplay') attributeGroup. **/
	bool MxCxSmpLevel::getIsBracketRequired() const
	{
		return myImpl->getIsBracketRequired();
	}

	/** Indicates whether or not the 'size' (aka 'Size') attribute is required
	    to be present in a MusicXML document. This attribute is a member of
	    the 'level-display' (aka 'LevelDisplay') attributeGroup. **/
	bool MxCxSmpLevel::getIsSizeRequired() const
	{
		return myImpl->getIsSizeRequired();
	}

/* Get IsAttributePresent Values ------------------------------------------------------ */

	/** Indicates whether or not the 'reference' (aka 'Reference') attribute
	    is (or will be) present in the MusicXML document. **/
	bool MxCxSmpLevel::getIsReferencePresent() const
	{
		return myImpl->getIsReferencePresent();
	}

	/** Indicates whether or not the 'parentheses' (aka 'Parentheses') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'level-display' (aka 'LevelDisplay') attributeGroup. **/
	bool MxCxSmpLevel::getIsParenthesesPresent() const
	{
		return myImpl->getIsParenthesesPresent();
	}

	/** Indicates whether or not the 'bracket' (aka 'Bracket') attribute is
	    (or will be) present in the MusicXML document. This attribute is a
	    member of the 'level-display' (aka 'LevelDisplay') attributeGroup. **/
	bool MxCxSmpLevel::getIsBracketPresent() const
	{
		return myImpl->getIsBracketPresent();
	}

	/** Indicates whether or not the 'size' (aka 'Size') attribute is (or will
	    be) present in the MusicXML document. This attribute is a member of
	    the 'level-display' (aka 'LevelDisplay') attributeGroup. **/
	bool MxCxSmpLevel::getIsSizePresent() const
	{
		return myImpl->getIsSizePresent();
	}

/* Set IsAttributePresent Values ------------------------------------------------------ */

	/** Sets the value which indicates whether or not the 'reference' (aka
	    'Reference') attribute is (or will be) present in the MusicXML document. **/
	void MxCxSmpLevel::setIsReferencePresent( const bool& value_in )
	{
		myImpl->setIsReferencePresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'parentheses' (aka
	    'Parentheses') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'level-display' (aka 'LevelDisplay')
	    attributeGroup. **/
	void MxCxSmpLevel::setIsParenthesesPresent( const bool& value_in )
	{
		myImpl->setIsParenthesesPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'bracket' (aka 'Bracket')
	    attribute is (or will be) present in the MusicXML document. This attribute
	    is a member of the 'level-display' (aka 'LevelDisplay') attributeGroup. **/
	void MxCxSmpLevel::setIsBracketPresent( const bool& value_in )
	{
		myImpl->setIsBracketPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'size' (aka 'Size')
	    attribute is (or will be) present in the MusicXML document. This attribute
	    is a member of the 'level-display' (aka 'LevelDisplay') attributeGroup. **/
	void MxCxSmpLevel::setIsSizePresent( const bool& value_in )
	{
		myImpl->setIsSizePresent( value_in );
	}

/* Stringing and Streaming ------------------------------------------------------------ */

	/** Returns the xml representation of the object's value. **/
	std::string MxCxSmpLevel::toString() const
	{
		return myImpl->toString();
	}

	/** Returns the xml representation of the object's value. **/
	std::ostream& MxCxSmpLevel::stream( std::ostream& os_out ) const
	{
		return myImpl->stream( os_out );
	}

/* Get IsAttributeDefaultDefined Values ----------------------------------------------- */

	/** Indicates whether or not the 'reference' (aka 'Reference') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). **/
	bool MxCxSmpLevel::getIsReferenceDefaultDefined() const
	{
		return myImpl->getIsReferenceDefaultDefined();
	}

	/** Indicates whether or not the 'parentheses' (aka 'Parentheses') has
	    a default value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'level-display'
	    (aka 'LevelDisplay') attributeGroup. **/
	bool MxCxSmpLevel::getIsParenthesesDefaultDefined() const
	{
		return myImpl->getIsParenthesesDefaultDefined();
	}

	/** Indicates whether or not the 'bracket' (aka 'Bracket') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'level-display'
	    (aka 'LevelDisplay') attributeGroup. **/
	bool MxCxSmpLevel::getIsBracketDefaultDefined() const
	{
		return myImpl->getIsBracketDefaultDefined();
	}

	/** Indicates whether or not the 'size' (aka 'Size') has a default value
	    defined in the MusicXML xsd specification (either explicitly or in
	    the documentation). This attribute is a member of the 'level-display'
	    (aka 'LevelDisplay') attributeGroup. **/
	bool MxCxSmpLevel::getIsSizeDefaultDefined() const
	{
		return myImpl->getIsSizeDefaultDefined();
	}

/* Get AttributeDefaultValue ---------------------------------------------------------- */

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'reference' (aka 'Reference') attribute. **/
	MxEnumYesNo MxCxSmpLevel::getReferenceDefaultValue() const
	{
		return myImpl->getReferenceDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'parentheses' (aka 'Parentheses') attribute. This attribute is
	    a member of the 'level-display' (aka 'LevelDisplay') attributeGroup. **/
	MxEnumYesNo MxCxSmpLevel::getParenthesesDefaultValue() const
	{
		return myImpl->getParenthesesDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'bracket' (aka 'Bracket') attribute. This attribute is a member
	    of the 'level-display' (aka 'LevelDisplay') attributeGroup. **/
	MxEnumYesNo MxCxSmpLevel::getBracketDefaultValue() const
	{
		return myImpl->getBracketDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'size' (aka 'Size') attribute. This attribute is a member of the
	    'level-display' (aka 'LevelDisplay') attributeGroup. **/
	MxEnumSymbolSize MxCxSmpLevel::getSizeDefaultValue() const
	{
		return myImpl->getSizeDefaultValue();
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

