/* See MusicXML License at the bottom of this code page. */

/**
  * @file       MxEsLevel.cpp
  * @class      lexicon::MxEsLevel
  * @author     Matthew James Briggs
  * @email      matthew.james.briggs@gmail.com
  * @url        http://matthewjamesbriggs.com
  * @date       2014-12-05 20:57:50
  * @project    Lexicon
  * @version    1.0
  * @musicxmlid 6057
  * 
  * @brief The 'Level' class serves as a binding for the MusicXml 'level' element.
  * 
 **/

#include "MxEsLevel.h"
#include <sstream>
#include "MxCxSmpLevel.h"
#include "MxAttrGrpLevelDisplay.h"

/* Impl ------------------------------------------------------------------------------- */

namespace lexicon
{
	struct MxEsLevel::Impl
	{
		Impl( const XsString& value_in )
		:myMxCxSmpValue( MxCxSmpLevel( "level", value_in ) )
		{}

	private:
		MxCxSmpLevel myMxCxSmpValue;

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

/* Get Set Value ---------------------------------------------------------------------- */

		/** Returns the contained xs:simpleContent value. **/
		XsString getValue() const
		{
			return myMxCxSmpValue.getValue();
		}

		/** Sets the contained xs:simpleContent value. **/
		void setValue( const XsString& value_in )
		{
			myMxCxSmpValue.setValue( value_in );
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

		/** Returns the internal value of the 'reference' (aka 'Reference') attribute. **/
		MxEnumYesNo getReference() const
		{
			return myMxCxSmpValue.getReference();
		}

		/** Returns the internal value of the 'parentheses' (aka 'Parentheses')
		    attribute. This attribute is a member of the 'level-display' (aka 'LevelDisplay')
		    attributeGroup. **/
		MxEnumYesNo getParentheses() const
		{
			return myMxCxSmpValue.getParentheses();
		}

		/** Returns the internal value of the 'bracket' (aka 'Bracket') attribute.
		    This attribute is a member of the 'level-display' (aka 'LevelDisplay')
		    attributeGroup. **/
		MxEnumYesNo getBracket() const
		{
			return myMxCxSmpValue.getBracket();
		}

		/** Returns the internal value of the 'size' (aka 'Size') attribute. This
		    attribute is a member of the 'level-display' (aka 'LevelDisplay') attributeGroup. **/
		MxEnumSymbolSize getSize() const
		{
			return myMxCxSmpValue.getSize();
		}

/* Set Attribute Values --------------------------------------------------------------- */

		/** Sets the internal value of the 'reference' (aka 'Reference') attribute. **/
		void setReference( const MxEnumYesNo& value_in )
		{
			myMxCxSmpValue.setReference( value_in );
		}

		/** Sets the internal value of the 'parentheses' (aka 'Parentheses') attribute.
		    This attribute is a member of the 'level-display' (aka 'LevelDisplay')
		    attributeGroup. **/
		void setParentheses( const MxEnumYesNo& value_in )
		{
			myMxCxSmpValue.setParentheses( value_in );
		}

		/** Sets the internal value of the 'bracket' (aka 'Bracket') attribute.
		    This attribute is a member of the 'level-display' (aka 'LevelDisplay')
		    attributeGroup. **/
		void setBracket( const MxEnumYesNo& value_in )
		{
			myMxCxSmpValue.setBracket( value_in );
		}

		/** Sets the internal value of the 'size' (aka 'Size') attribute. This
		    attribute is a member of the 'level-display' (aka 'LevelDisplay') attributeGroup. **/
		void setSize( const MxEnumSymbolSize& value_in )
		{
			myMxCxSmpValue.setSize( value_in );
		}

/* Get IsAttributeRequired Values ----------------------------------------------------- */

		/** Indicates whether or not the 'reference' (aka 'Reference') attribute
		    is required to be present in a MusicXML document. **/
		bool getIsReferenceRequired() const
		{
			return myMxCxSmpValue.getIsReferenceRequired();
		}

		/** Indicates whether or not the 'parentheses' (aka 'Parentheses') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'level-display' (aka 'LevelDisplay') attributeGroup. **/
		bool getIsParenthesesRequired() const
		{
			return myMxCxSmpValue.getIsParenthesesRequired();
		}

		/** Indicates whether or not the 'bracket' (aka 'Bracket') attribute is
		    required to be present in a MusicXML document. This attribute is a
		    member of the 'level-display' (aka 'LevelDisplay') attributeGroup. **/
		bool getIsBracketRequired() const
		{
			return myMxCxSmpValue.getIsBracketRequired();
		}

		/** Indicates whether or not the 'size' (aka 'Size') attribute is required
		    to be present in a MusicXML document. This attribute is a member of
		    the 'level-display' (aka 'LevelDisplay') attributeGroup. **/
		bool getIsSizeRequired() const
		{
			return myMxCxSmpValue.getIsSizeRequired();
		}

/* Get IsAttributePresent Values ------------------------------------------------------ */

		/** Indicates whether or not the 'reference' (aka 'Reference') attribute
		    is (or will be) present in the MusicXML document. **/
		bool getIsReferencePresent() const
		{
			return myMxCxSmpValue.getIsReferencePresent();
		}

		/** Indicates whether or not the 'parentheses' (aka 'Parentheses') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'level-display' (aka 'LevelDisplay') attributeGroup. **/
		bool getIsParenthesesPresent() const
		{
			return myMxCxSmpValue.getIsParenthesesPresent();
		}

		/** Indicates whether or not the 'bracket' (aka 'Bracket') attribute is
		    (or will be) present in the MusicXML document. This attribute is a
		    member of the 'level-display' (aka 'LevelDisplay') attributeGroup. **/
		bool getIsBracketPresent() const
		{
			return myMxCxSmpValue.getIsBracketPresent();
		}

		/** Indicates whether or not the 'size' (aka 'Size') attribute is (or will
		    be) present in the MusicXML document. This attribute is a member of
		    the 'level-display' (aka 'LevelDisplay') attributeGroup. **/
		bool getIsSizePresent() const
		{
			return myMxCxSmpValue.getIsSizePresent();
		}

/* Set IsAttributePresent Values ------------------------------------------------------ */

		/** Sets the value which indicates whether or not the 'reference' (aka
		    'Reference') attribute is (or will be) present in the MusicXML document. **/
		void setIsReferencePresent( const bool& value_in )
		{
			myMxCxSmpValue.setIsReferencePresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'parentheses' (aka
		    'Parentheses') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'level-display' (aka 'LevelDisplay')
		    attributeGroup. **/
		void setIsParenthesesPresent( const bool& value_in )
		{
			myMxCxSmpValue.setIsParenthesesPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'bracket' (aka 'Bracket')
		    attribute is (or will be) present in the MusicXML document. This attribute
		    is a member of the 'level-display' (aka 'LevelDisplay') attributeGroup. **/
		void setIsBracketPresent( const bool& value_in )
		{
			myMxCxSmpValue.setIsBracketPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'size' (aka 'Size')
		    attribute is (or will be) present in the MusicXML document. This attribute
		    is a member of the 'level-display' (aka 'LevelDisplay') attributeGroup. **/
		void setIsSizePresent( const bool& value_in )
		{
			myMxCxSmpValue.setIsSizePresent( value_in );
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
			return myMxCxSmpValue.stream( os_out );
		}

/* Get IsAttributeDefaultDefined Values ----------------------------------------------- */

		/** Indicates whether or not the 'reference' (aka 'Reference') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). **/
		bool getIsReferenceDefaultDefined() const
		{
			return myMxCxSmpValue.getIsReferenceDefaultDefined();
		}

		/** Indicates whether or not the 'parentheses' (aka 'Parentheses') has
		    a default value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'level-display'
		    (aka 'LevelDisplay') attributeGroup. **/
		bool getIsParenthesesDefaultDefined() const
		{
			return myMxCxSmpValue.getIsParenthesesDefaultDefined();
		}

		/** Indicates whether or not the 'bracket' (aka 'Bracket') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'level-display'
		    (aka 'LevelDisplay') attributeGroup. **/
		bool getIsBracketDefaultDefined() const
		{
			return myMxCxSmpValue.getIsBracketDefaultDefined();
		}

		/** Indicates whether or not the 'size' (aka 'Size') has a default value
		    defined in the MusicXML xsd specification (either explicitly or in
		    the documentation). This attribute is a member of the 'level-display'
		    (aka 'LevelDisplay') attributeGroup. **/
		bool getIsSizeDefaultDefined() const
		{
			return myMxCxSmpValue.getIsSizeDefaultDefined();
		}

/* Get AttributeDefaultValue ---------------------------------------------------------- */

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'reference' (aka 'Reference') attribute. **/
		MxEnumYesNo getReferenceDefaultValue() const
		{
			return myMxCxSmpValue.getReferenceDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'parentheses' (aka 'Parentheses') attribute. This attribute is
		    a member of the 'level-display' (aka 'LevelDisplay') attributeGroup. **/
		MxEnumYesNo getParenthesesDefaultValue() const
		{
			return myMxCxSmpValue.getParenthesesDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'bracket' (aka 'Bracket') attribute. This attribute is a member
		    of the 'level-display' (aka 'LevelDisplay') attributeGroup. **/
		MxEnumYesNo getBracketDefaultValue() const
		{
			return myMxCxSmpValue.getBracketDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'size' (aka 'Size') attribute. This attribute is a member of the
		    'level-display' (aka 'LevelDisplay') attributeGroup. **/
		MxEnumSymbolSize getSizeDefaultValue() const
		{
			return myMxCxSmpValue.getSizeDefaultValue();
		}

	}; // struct MxEsLevel::Impl

	const int MxEsLevel::Impl::myXsdID = 6057;
	const std::string MxEsLevel::Impl::myXmlTypeName = "level";
	const std::string MxEsLevel::Impl::myCppClassName = "MxEsLevel";
	const std::string MxEsLevel::Impl::myDocumentation = "( no documentation )";
	const int MxEsLevel::Impl::myMinOccurs = 1;
	const int MxEsLevel::Impl::myMaxOccurs = 1;
	const int MxEsLevel::Impl::myIsMaxOccursUnbounded = false;

} // namespace lexicon


/* MxEsLevel -------------------------------------------------------------------------- */

namespace lexicon
{

/* Constructor, Destructor, Copy, Assignment ------------------------------------------ */

	MxEsLevel::MxEsLevel( const XsString& value_in )
	:myImpl( new Impl( value_in ) ) {}

	MxEsLevel::~MxEsLevel() {}

	MxEsLevel::MxEsLevel( const MxEsLevel& other )
	:myImpl( new Impl( *(other.myImpl) ) ) {}

	MxEsLevel& MxEsLevel::operator=( const MxEsLevel& other )
	{
		this->myImpl = std::unique_ptr<Impl>( new Impl( *(other.myImpl) ) );
		return *this;
	}

/* minOccurs maxOccurs ---------------------------------------------------------------- */

	/** Returns the minOccurs value from the Music XML xsd specification. **/
	int MxEsLevel::getMinOccurs() const
	{
		return myImpl->getMinOccurs();
	}

	/** Returns the maxOccurs value from the Music XML xsd specification. **/
	int MxEsLevel::getMaxOccurs() const
	{
		return myImpl->getMaxOccurs();
	}

	/** Returns true if the maxOccurs value from the Music XML xsd specification
	    is 'unbounded'. **/
	bool MxEsLevel::getIsMaxOccursUnbounded() const
	{
		return myImpl->getIsMaxOccursUnbounded();
	}

/* Get Set Value ---------------------------------------------------------------------- */

	/** Returns the contained xs:simpleContent value. **/
	XsString MxEsLevel::getValue() const
	{
		return myImpl->getValue();
	}

	/** Sets the contained xs:simpleContent value. **/
	void MxEsLevel::setValue( const XsString& value_in )
	{
		myImpl->setValue( value_in );
	}

/* Get Class Information -------------------------------------------------------------- */

	/** Returns the name of this xs:element as found in the musicxml.xsd document. **/
	std::string MxEsLevel::getXmlTypeName() const
	{
		return myImpl->getXmlTypeName();
	}

	/** Returns the name of this C++ class. **/
	std::string MxEsLevel::getClassName() const
	{
		return myImpl->getClassName();
	}

	/** Returns the documentation for this musicxml type as found in the musicxml.xsd
	    document. **/
	std::string MxEsLevel::getDocumentation() const
	{
		return myImpl->getDocumentation();
	}

/* Get Attribute Values --------------------------------------------------------------- */

	/** Returns the internal value of the 'reference' (aka 'Reference') attribute. **/
	MxEnumYesNo MxEsLevel::getReference() const
	{
		return myImpl->getReference();
	}

	/** Returns the internal value of the 'parentheses' (aka 'Parentheses')
	    attribute. This attribute is a member of the 'level-display' (aka 'LevelDisplay')
	    attributeGroup. **/
	MxEnumYesNo MxEsLevel::getParentheses() const
	{
		return myImpl->getParentheses();
	}

	/** Returns the internal value of the 'bracket' (aka 'Bracket') attribute.
	    This attribute is a member of the 'level-display' (aka 'LevelDisplay')
	    attributeGroup. **/
	MxEnumYesNo MxEsLevel::getBracket() const
	{
		return myImpl->getBracket();
	}

	/** Returns the internal value of the 'size' (aka 'Size') attribute. This
	    attribute is a member of the 'level-display' (aka 'LevelDisplay') attributeGroup. **/
	MxEnumSymbolSize MxEsLevel::getSize() const
	{
		return myImpl->getSize();
	}

/* Set Attribute Values --------------------------------------------------------------- */

	/** Sets the internal value of the 'reference' (aka 'Reference') attribute. **/
	void MxEsLevel::setReference( const MxEnumYesNo& value_in )
	{
		myImpl->setReference( value_in );
	}

	/** Sets the internal value of the 'parentheses' (aka 'Parentheses') attribute.
	    This attribute is a member of the 'level-display' (aka 'LevelDisplay')
	    attributeGroup. **/
	void MxEsLevel::setParentheses( const MxEnumYesNo& value_in )
	{
		myImpl->setParentheses( value_in );
	}

	/** Sets the internal value of the 'bracket' (aka 'Bracket') attribute.
	    This attribute is a member of the 'level-display' (aka 'LevelDisplay')
	    attributeGroup. **/
	void MxEsLevel::setBracket( const MxEnumYesNo& value_in )
	{
		myImpl->setBracket( value_in );
	}

	/** Sets the internal value of the 'size' (aka 'Size') attribute. This
	    attribute is a member of the 'level-display' (aka 'LevelDisplay') attributeGroup. **/
	void MxEsLevel::setSize( const MxEnumSymbolSize& value_in )
	{
		myImpl->setSize( value_in );
	}

/* Get IsAttributeRequired Values ----------------------------------------------------- */

	/** Indicates whether or not the 'reference' (aka 'Reference') attribute
	    is required to be present in a MusicXML document. **/
	bool MxEsLevel::getIsReferenceRequired() const
	{
		return myImpl->getIsReferenceRequired();
	}

	/** Indicates whether or not the 'parentheses' (aka 'Parentheses') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'level-display' (aka 'LevelDisplay') attributeGroup. **/
	bool MxEsLevel::getIsParenthesesRequired() const
	{
		return myImpl->getIsParenthesesRequired();
	}

	/** Indicates whether or not the 'bracket' (aka 'Bracket') attribute is
	    required to be present in a MusicXML document. This attribute is a
	    member of the 'level-display' (aka 'LevelDisplay') attributeGroup. **/
	bool MxEsLevel::getIsBracketRequired() const
	{
		return myImpl->getIsBracketRequired();
	}

	/** Indicates whether or not the 'size' (aka 'Size') attribute is required
	    to be present in a MusicXML document. This attribute is a member of
	    the 'level-display' (aka 'LevelDisplay') attributeGroup. **/
	bool MxEsLevel::getIsSizeRequired() const
	{
		return myImpl->getIsSizeRequired();
	}

/* Get IsAttributePresent Values ------------------------------------------------------ */

	/** Indicates whether or not the 'reference' (aka 'Reference') attribute
	    is (or will be) present in the MusicXML document. **/
	bool MxEsLevel::getIsReferencePresent() const
	{
		return myImpl->getIsReferencePresent();
	}

	/** Indicates whether or not the 'parentheses' (aka 'Parentheses') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'level-display' (aka 'LevelDisplay') attributeGroup. **/
	bool MxEsLevel::getIsParenthesesPresent() const
	{
		return myImpl->getIsParenthesesPresent();
	}

	/** Indicates whether or not the 'bracket' (aka 'Bracket') attribute is
	    (or will be) present in the MusicXML document. This attribute is a
	    member of the 'level-display' (aka 'LevelDisplay') attributeGroup. **/
	bool MxEsLevel::getIsBracketPresent() const
	{
		return myImpl->getIsBracketPresent();
	}

	/** Indicates whether or not the 'size' (aka 'Size') attribute is (or will
	    be) present in the MusicXML document. This attribute is a member of
	    the 'level-display' (aka 'LevelDisplay') attributeGroup. **/
	bool MxEsLevel::getIsSizePresent() const
	{
		return myImpl->getIsSizePresent();
	}

/* Set IsAttributePresent Values ------------------------------------------------------ */

	/** Sets the value which indicates whether or not the 'reference' (aka
	    'Reference') attribute is (or will be) present in the MusicXML document. **/
	void MxEsLevel::setIsReferencePresent( const bool& value_in )
	{
		myImpl->setIsReferencePresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'parentheses' (aka
	    'Parentheses') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'level-display' (aka 'LevelDisplay')
	    attributeGroup. **/
	void MxEsLevel::setIsParenthesesPresent( const bool& value_in )
	{
		myImpl->setIsParenthesesPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'bracket' (aka 'Bracket')
	    attribute is (or will be) present in the MusicXML document. This attribute
	    is a member of the 'level-display' (aka 'LevelDisplay') attributeGroup. **/
	void MxEsLevel::setIsBracketPresent( const bool& value_in )
	{
		myImpl->setIsBracketPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'size' (aka 'Size')
	    attribute is (or will be) present in the MusicXML document. This attribute
	    is a member of the 'level-display' (aka 'LevelDisplay') attributeGroup. **/
	void MxEsLevel::setIsSizePresent( const bool& value_in )
	{
		myImpl->setIsSizePresent( value_in );
	}

/* Stringing and Streaming ------------------------------------------------------------ */

	/** Returns the xml representation of the object's value. **/
	std::string MxEsLevel::toString() const
	{
		return myImpl->toString();
	}

	/** Returns the xml representation of the object's value. **/
	std::ostream& MxEsLevel::stream( std::ostream& os_out ) const
	{
		return myImpl->stream( os_out );
	}

/* Get IsAttributeDefaultDefined Values ----------------------------------------------- */

	/** Indicates whether or not the 'reference' (aka 'Reference') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). **/
	bool MxEsLevel::getIsReferenceDefaultDefined() const
	{
		return myImpl->getIsReferenceDefaultDefined();
	}

	/** Indicates whether or not the 'parentheses' (aka 'Parentheses') has
	    a default value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'level-display'
	    (aka 'LevelDisplay') attributeGroup. **/
	bool MxEsLevel::getIsParenthesesDefaultDefined() const
	{
		return myImpl->getIsParenthesesDefaultDefined();
	}

	/** Indicates whether or not the 'bracket' (aka 'Bracket') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'level-display'
	    (aka 'LevelDisplay') attributeGroup. **/
	bool MxEsLevel::getIsBracketDefaultDefined() const
	{
		return myImpl->getIsBracketDefaultDefined();
	}

	/** Indicates whether or not the 'size' (aka 'Size') has a default value
	    defined in the MusicXML xsd specification (either explicitly or in
	    the documentation). This attribute is a member of the 'level-display'
	    (aka 'LevelDisplay') attributeGroup. **/
	bool MxEsLevel::getIsSizeDefaultDefined() const
	{
		return myImpl->getIsSizeDefaultDefined();
	}

/* Get AttributeDefaultValue ---------------------------------------------------------- */

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'reference' (aka 'Reference') attribute. **/
	MxEnumYesNo MxEsLevel::getReferenceDefaultValue() const
	{
		return myImpl->getReferenceDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'parentheses' (aka 'Parentheses') attribute. This attribute is
	    a member of the 'level-display' (aka 'LevelDisplay') attributeGroup. **/
	MxEnumYesNo MxEsLevel::getParenthesesDefaultValue() const
	{
		return myImpl->getParenthesesDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'bracket' (aka 'Bracket') attribute. This attribute is a member
	    of the 'level-display' (aka 'LevelDisplay') attributeGroup. **/
	MxEnumYesNo MxEsLevel::getBracketDefaultValue() const
	{
		return myImpl->getBracketDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'size' (aka 'Size') attribute. This attribute is a member of the
	    'level-display' (aka 'LevelDisplay') attributeGroup. **/
	MxEnumSymbolSize MxEsLevel::getSizeDefaultValue() const
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

