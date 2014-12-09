/* See MusicXML License at the bottom of this code page. */

/**
  * @file       MxEsNotehead.cpp
  * @class      lexicon::MxEsNotehead
  * @author     Matthew James Briggs
  * @email      matthew.james.briggs@gmail.com
  * @url        http://matthewjamesbriggs.com
  * @date       2014-12-05 20:57:50
  * @project    Lexicon
  * @version    1.0
  * @musicxmlid 5024
  * 
  * @brief The 'Notehead' class serves as a binding for the MusicXml 'notehead'
  * element.
  * 
 **/

#include "MxEsNotehead.h"
#include <sstream>
#include "MxCxSmpNotehead.h"
#include "MxAttrGrpColor.h"
#include "MxAttrGrpFont.h"

/* Impl ------------------------------------------------------------------------------- */

namespace lexicon
{
	struct MxEsNotehead::Impl
	{
		Impl( const MxEnumNoteheadValue& value_in )
		:myMxCxSmpValue( MxCxSmpNotehead( "notehead", value_in ) )
		{}

	private:
		MxCxSmpNotehead myMxCxSmpValue;

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
		MxEnumNoteheadValue getValue() const
		{
			return myMxCxSmpValue.getValue();
		}

		/** Sets the contained xs:simpleContent value. **/
		void setValue( const MxEnumNoteheadValue& value_in )
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

		/** Returns the internal value of the 'filled' (aka 'Filled') attribute. **/
		MxEnumYesNo getFilled() const
		{
			return myMxCxSmpValue.getFilled();
		}

		/** Returns the internal value of the 'parentheses' (aka 'Parentheses')
		    attribute. **/
		MxEnumYesNo getParentheses() const
		{
			return myMxCxSmpValue.getParentheses();
		}

		/** Returns the internal value of the 'font-family' (aka 'FontFamily')
		    attribute. This attribute is a member of the 'font' (aka 'Font') attributeGroup. **/
		MxCommaSeparatedText getFontFamily() const
		{
			return myMxCxSmpValue.getFontFamily();
		}

		/** Returns the internal value of the 'font-style' (aka 'FontStyle') attribute.
		    This attribute is a member of the 'font' (aka 'Font') attributeGroup. **/
		MxEnumFontStyle getFontStyle() const
		{
			return myMxCxSmpValue.getFontStyle();
		}

		/** Returns the internal value of the 'font-size' (aka 'FontSize') attribute.
		    This attribute is a member of the 'font' (aka 'Font') attributeGroup. **/
		MxFontSize getFontSize() const
		{
			return myMxCxSmpValue.getFontSize();
		}

		/** Returns the internal value of the 'font-weight' (aka 'FontWeight')
		    attribute. This attribute is a member of the 'font' (aka 'Font') attributeGroup. **/
		MxEnumFontWeight getFontWeight() const
		{
			return myMxCxSmpValue.getFontWeight();
		}

		/** Returns the internal value of the 'color' (aka 'Color') attribute.
		    This attribute is a member of the 'color' (aka 'Color') attributeGroup. **/
		MxColor getColor() const
		{
			return myMxCxSmpValue.getColor();
		}

/* Set Attribute Values --------------------------------------------------------------- */

		/** Sets the internal value of the 'filled' (aka 'Filled') attribute. **/
		void setFilled( const MxEnumYesNo& value_in )
		{
			myMxCxSmpValue.setFilled( value_in );
		}

		/** Sets the internal value of the 'parentheses' (aka 'Parentheses') attribute. **/
		void setParentheses( const MxEnumYesNo& value_in )
		{
			myMxCxSmpValue.setParentheses( value_in );
		}

		/** Sets the internal value of the 'font-family' (aka 'FontFamily') attribute.
		    This attribute is a member of the 'font' (aka 'Font') attributeGroup. **/
		void setFontFamily( const MxCommaSeparatedText& value_in )
		{
			myMxCxSmpValue.setFontFamily( value_in );
		}

		/** Sets the internal value of the 'font-style' (aka 'FontStyle') attribute.
		    This attribute is a member of the 'font' (aka 'Font') attributeGroup. **/
		void setFontStyle( const MxEnumFontStyle& value_in )
		{
			myMxCxSmpValue.setFontStyle( value_in );
		}

		/** Sets the internal value of the 'font-size' (aka 'FontSize') attribute.
		    This attribute is a member of the 'font' (aka 'Font') attributeGroup. **/
		void setFontSize( const MxFontSize& value_in )
		{
			myMxCxSmpValue.setFontSize( value_in );
		}

		/** Sets the internal value of the 'font-weight' (aka 'FontWeight') attribute.
		    This attribute is a member of the 'font' (aka 'Font') attributeGroup. **/
		void setFontWeight( const MxEnumFontWeight& value_in )
		{
			myMxCxSmpValue.setFontWeight( value_in );
		}

		/** Sets the internal value of the 'color' (aka 'Color') attribute. This
		    attribute is a member of the 'color' (aka 'Color') attributeGroup. **/
		void setColor( const MxColor& value_in )
		{
			myMxCxSmpValue.setColor( value_in );
		}

/* Get IsAttributeRequired Values ----------------------------------------------------- */

		/** Indicates whether or not the 'filled' (aka 'Filled') attribute is required
		    to be present in a MusicXML document. **/
		bool getIsFilledRequired() const
		{
			return myMxCxSmpValue.getIsFilledRequired();
		}

		/** Indicates whether or not the 'parentheses' (aka 'Parentheses') attribute
		    is required to be present in a MusicXML document. **/
		bool getIsParenthesesRequired() const
		{
			return myMxCxSmpValue.getIsParenthesesRequired();
		}

		/** Indicates whether or not the 'font-family' (aka 'FontFamily') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'font' (aka 'Font') attributeGroup. **/
		bool getIsFontFamilyRequired() const
		{
			return myMxCxSmpValue.getIsFontFamilyRequired();
		}

		/** Indicates whether or not the 'font-style' (aka 'FontStyle') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'font' (aka 'Font') attributeGroup. **/
		bool getIsFontStyleRequired() const
		{
			return myMxCxSmpValue.getIsFontStyleRequired();
		}

		/** Indicates whether or not the 'font-size' (aka 'FontSize') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'font' (aka 'Font') attributeGroup. **/
		bool getIsFontSizeRequired() const
		{
			return myMxCxSmpValue.getIsFontSizeRequired();
		}

		/** Indicates whether or not the 'font-weight' (aka 'FontWeight') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'font' (aka 'Font') attributeGroup. **/
		bool getIsFontWeightRequired() const
		{
			return myMxCxSmpValue.getIsFontWeightRequired();
		}

		/** Indicates whether or not the 'color' (aka 'Color') attribute is required
		    to be present in a MusicXML document. This attribute is a member of
		    the 'color' (aka 'Color') attributeGroup. **/
		bool getIsColorRequired() const
		{
			return myMxCxSmpValue.getIsColorRequired();
		}

/* Get IsAttributePresent Values ------------------------------------------------------ */

		/** Indicates whether or not the 'filled' (aka 'Filled') attribute is (or
		    will be) present in the MusicXML document. **/
		bool getIsFilledPresent() const
		{
			return myMxCxSmpValue.getIsFilledPresent();
		}

		/** Indicates whether or not the 'parentheses' (aka 'Parentheses') attribute
		    is (or will be) present in the MusicXML document. **/
		bool getIsParenthesesPresent() const
		{
			return myMxCxSmpValue.getIsParenthesesPresent();
		}

		/** Indicates whether or not the 'font-family' (aka 'FontFamily') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'font' (aka 'Font') attributeGroup. **/
		bool getIsFontFamilyPresent() const
		{
			return myMxCxSmpValue.getIsFontFamilyPresent();
		}

		/** Indicates whether or not the 'font-style' (aka 'FontStyle') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'font' (aka 'Font') attributeGroup. **/
		bool getIsFontStylePresent() const
		{
			return myMxCxSmpValue.getIsFontStylePresent();
		}

		/** Indicates whether or not the 'font-size' (aka 'FontSize') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'font' (aka 'Font') attributeGroup. **/
		bool getIsFontSizePresent() const
		{
			return myMxCxSmpValue.getIsFontSizePresent();
		}

		/** Indicates whether or not the 'font-weight' (aka 'FontWeight') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'font' (aka 'Font') attributeGroup. **/
		bool getIsFontWeightPresent() const
		{
			return myMxCxSmpValue.getIsFontWeightPresent();
		}

		/** Indicates whether or not the 'color' (aka 'Color') attribute is (or
		    will be) present in the MusicXML document. This attribute is a member
		    of the 'color' (aka 'Color') attributeGroup. **/
		bool getIsColorPresent() const
		{
			return myMxCxSmpValue.getIsColorPresent();
		}

/* Set IsAttributePresent Values ------------------------------------------------------ */

		/** Sets the value which indicates whether or not the 'filled' (aka 'Filled')
		    attribute is (or will be) present in the MusicXML document. **/
		void setIsFilledPresent( const bool& value_in )
		{
			myMxCxSmpValue.setIsFilledPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'parentheses' (aka
		    'Parentheses') attribute is (or will be) present in the MusicXML document. **/
		void setIsParenthesesPresent( const bool& value_in )
		{
			myMxCxSmpValue.setIsParenthesesPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'font-family' (aka
		    'FontFamily') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'font' (aka 'Font') attributeGroup. **/
		void setIsFontFamilyPresent( const bool& value_in )
		{
			myMxCxSmpValue.setIsFontFamilyPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'font-style' (aka
		    'FontStyle') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'font' (aka 'Font') attributeGroup. **/
		void setIsFontStylePresent( const bool& value_in )
		{
			myMxCxSmpValue.setIsFontStylePresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'font-size' (aka
		    'FontSize') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'font' (aka 'Font') attributeGroup. **/
		void setIsFontSizePresent( const bool& value_in )
		{
			myMxCxSmpValue.setIsFontSizePresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'font-weight' (aka
		    'FontWeight') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'font' (aka 'Font') attributeGroup. **/
		void setIsFontWeightPresent( const bool& value_in )
		{
			myMxCxSmpValue.setIsFontWeightPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'color' (aka 'Color')
		    attribute is (or will be) present in the MusicXML document. This attribute
		    is a member of the 'color' (aka 'Color') attributeGroup. **/
		void setIsColorPresent( const bool& value_in )
		{
			myMxCxSmpValue.setIsColorPresent( value_in );
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

		/** Indicates whether or not the 'filled' (aka 'Filled') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). **/
		bool getIsFilledDefaultDefined() const
		{
			return myMxCxSmpValue.getIsFilledDefaultDefined();
		}

		/** Indicates whether or not the 'parentheses' (aka 'Parentheses') has
		    a default value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). **/
		bool getIsParenthesesDefaultDefined() const
		{
			return myMxCxSmpValue.getIsParenthesesDefaultDefined();
		}

		/** Indicates whether or not the 'font-family' (aka 'FontFamily') has a
		    default value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'font'
		    (aka 'Font') attributeGroup. **/
		bool getIsFontFamilyDefaultDefined() const
		{
			return myMxCxSmpValue.getIsFontFamilyDefaultDefined();
		}

		/** Indicates whether or not the 'font-style' (aka 'FontStyle') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'font'
		    (aka 'Font') attributeGroup. **/
		bool getIsFontStyleDefaultDefined() const
		{
			return myMxCxSmpValue.getIsFontStyleDefaultDefined();
		}

		/** Indicates whether or not the 'font-size' (aka 'FontSize') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'font'
		    (aka 'Font') attributeGroup. **/
		bool getIsFontSizeDefaultDefined() const
		{
			return myMxCxSmpValue.getIsFontSizeDefaultDefined();
		}

		/** Indicates whether or not the 'font-weight' (aka 'FontWeight') has a
		    default value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'font'
		    (aka 'Font') attributeGroup. **/
		bool getIsFontWeightDefaultDefined() const
		{
			return myMxCxSmpValue.getIsFontWeightDefaultDefined();
		}

		/** Indicates whether or not the 'color' (aka 'Color') has a default value
		    defined in the MusicXML xsd specification (either explicitly or in
		    the documentation). This attribute is a member of the 'color' (aka
		    'Color') attributeGroup. **/
		bool getIsColorDefaultDefined() const
		{
			return myMxCxSmpValue.getIsColorDefaultDefined();
		}

/* Get AttributeDefaultValue ---------------------------------------------------------- */

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'filled' (aka 'Filled') attribute. **/
		MxEnumYesNo getFilledDefaultValue() const
		{
			return myMxCxSmpValue.getFilledDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'parentheses' (aka 'Parentheses') attribute. **/
		MxEnumYesNo getParenthesesDefaultValue() const
		{
			return myMxCxSmpValue.getParenthesesDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'font-family' (aka 'FontFamily') attribute. This attribute is a
		    member of the 'font' (aka 'Font') attributeGroup. **/
		MxCommaSeparatedText getFontFamilyDefaultValue() const
		{
			return myMxCxSmpValue.getFontFamilyDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'font-style' (aka 'FontStyle') attribute. This attribute is a member
		    of the 'font' (aka 'Font') attributeGroup. **/
		MxEnumFontStyle getFontStyleDefaultValue() const
		{
			return myMxCxSmpValue.getFontStyleDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'font-size' (aka 'FontSize') attribute. This attribute is a member
		    of the 'font' (aka 'Font') attributeGroup. **/
		MxFontSize getFontSizeDefaultValue() const
		{
			return myMxCxSmpValue.getFontSizeDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'font-weight' (aka 'FontWeight') attribute. This attribute is a
		    member of the 'font' (aka 'Font') attributeGroup. **/
		MxEnumFontWeight getFontWeightDefaultValue() const
		{
			return myMxCxSmpValue.getFontWeightDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'color' (aka 'Color') attribute. This attribute is a member of
		    the 'color' (aka 'Color') attributeGroup. **/
		MxColor getColorDefaultValue() const
		{
			return myMxCxSmpValue.getColorDefaultValue();
		}

	}; // struct MxEsNotehead::Impl

	const int MxEsNotehead::Impl::myXsdID = 5024;
	const std::string MxEsNotehead::Impl::myXmlTypeName = "notehead";
	const std::string MxEsNotehead::Impl::myCppClassName = "MxEsNotehead";
	const std::string MxEsNotehead::Impl::myDocumentation = "( no documentation )";
	const int MxEsNotehead::Impl::myMinOccurs = 0;
	const int MxEsNotehead::Impl::myMaxOccurs = 1;
	const int MxEsNotehead::Impl::myIsMaxOccursUnbounded = false;

} // namespace lexicon


/* MxEsNotehead ----------------------------------------------------------------------- */

namespace lexicon
{

/* Constructor, Destructor, Copy, Assignment ------------------------------------------ */

	MxEsNotehead::MxEsNotehead( const MxEnumNoteheadValue& value_in )
	:myImpl( new Impl( value_in ) ) {}

	MxEsNotehead::~MxEsNotehead() {}

	MxEsNotehead::MxEsNotehead( const MxEsNotehead& other )
	:myImpl( new Impl( *(other.myImpl) ) ) {}

	MxEsNotehead& MxEsNotehead::operator=( const MxEsNotehead& other )
	{
		this->myImpl = std::unique_ptr<Impl>( new Impl( *(other.myImpl) ) );
		return *this;
	}

/* minOccurs maxOccurs ---------------------------------------------------------------- */

	/** Returns the minOccurs value from the Music XML xsd specification. **/
	int MxEsNotehead::getMinOccurs() const
	{
		return myImpl->getMinOccurs();
	}

	/** Returns the maxOccurs value from the Music XML xsd specification. **/
	int MxEsNotehead::getMaxOccurs() const
	{
		return myImpl->getMaxOccurs();
	}

	/** Returns true if the maxOccurs value from the Music XML xsd specification
	    is 'unbounded'. **/
	bool MxEsNotehead::getIsMaxOccursUnbounded() const
	{
		return myImpl->getIsMaxOccursUnbounded();
	}

/* Get Set Value ---------------------------------------------------------------------- */

	/** Returns the contained xs:simpleContent value. **/
	MxEnumNoteheadValue MxEsNotehead::getValue() const
	{
		return myImpl->getValue();
	}

	/** Sets the contained xs:simpleContent value. **/
	void MxEsNotehead::setValue( const MxEnumNoteheadValue& value_in )
	{
		myImpl->setValue( value_in );
	}

/* Get Class Information -------------------------------------------------------------- */

	/** Returns the name of this xs:element as found in the musicxml.xsd document. **/
	std::string MxEsNotehead::getXmlTypeName() const
	{
		return myImpl->getXmlTypeName();
	}

	/** Returns the name of this C++ class. **/
	std::string MxEsNotehead::getClassName() const
	{
		return myImpl->getClassName();
	}

	/** Returns the documentation for this musicxml type as found in the musicxml.xsd
	    document. **/
	std::string MxEsNotehead::getDocumentation() const
	{
		return myImpl->getDocumentation();
	}

/* Get Attribute Values --------------------------------------------------------------- */

	/** Returns the internal value of the 'filled' (aka 'Filled') attribute. **/
	MxEnumYesNo MxEsNotehead::getFilled() const
	{
		return myImpl->getFilled();
	}

	/** Returns the internal value of the 'parentheses' (aka 'Parentheses')
	    attribute. **/
	MxEnumYesNo MxEsNotehead::getParentheses() const
	{
		return myImpl->getParentheses();
	}

	/** Returns the internal value of the 'font-family' (aka 'FontFamily')
	    attribute. This attribute is a member of the 'font' (aka 'Font') attributeGroup. **/
	MxCommaSeparatedText MxEsNotehead::getFontFamily() const
	{
		return myImpl->getFontFamily();
	}

	/** Returns the internal value of the 'font-style' (aka 'FontStyle') attribute.
	    This attribute is a member of the 'font' (aka 'Font') attributeGroup. **/
	MxEnumFontStyle MxEsNotehead::getFontStyle() const
	{
		return myImpl->getFontStyle();
	}

	/** Returns the internal value of the 'font-size' (aka 'FontSize') attribute.
	    This attribute is a member of the 'font' (aka 'Font') attributeGroup. **/
	MxFontSize MxEsNotehead::getFontSize() const
	{
		return myImpl->getFontSize();
	}

	/** Returns the internal value of the 'font-weight' (aka 'FontWeight')
	    attribute. This attribute is a member of the 'font' (aka 'Font') attributeGroup. **/
	MxEnumFontWeight MxEsNotehead::getFontWeight() const
	{
		return myImpl->getFontWeight();
	}

	/** Returns the internal value of the 'color' (aka 'Color') attribute.
	    This attribute is a member of the 'color' (aka 'Color') attributeGroup. **/
	MxColor MxEsNotehead::getColor() const
	{
		return myImpl->getColor();
	}

/* Set Attribute Values --------------------------------------------------------------- */

	/** Sets the internal value of the 'filled' (aka 'Filled') attribute. **/
	void MxEsNotehead::setFilled( const MxEnumYesNo& value_in )
	{
		myImpl->setFilled( value_in );
	}

	/** Sets the internal value of the 'parentheses' (aka 'Parentheses') attribute. **/
	void MxEsNotehead::setParentheses( const MxEnumYesNo& value_in )
	{
		myImpl->setParentheses( value_in );
	}

	/** Sets the internal value of the 'font-family' (aka 'FontFamily') attribute.
	    This attribute is a member of the 'font' (aka 'Font') attributeGroup. **/
	void MxEsNotehead::setFontFamily( const MxCommaSeparatedText& value_in )
	{
		myImpl->setFontFamily( value_in );
	}

	/** Sets the internal value of the 'font-style' (aka 'FontStyle') attribute.
	    This attribute is a member of the 'font' (aka 'Font') attributeGroup. **/
	void MxEsNotehead::setFontStyle( const MxEnumFontStyle& value_in )
	{
		myImpl->setFontStyle( value_in );
	}

	/** Sets the internal value of the 'font-size' (aka 'FontSize') attribute.
	    This attribute is a member of the 'font' (aka 'Font') attributeGroup. **/
	void MxEsNotehead::setFontSize( const MxFontSize& value_in )
	{
		myImpl->setFontSize( value_in );
	}

	/** Sets the internal value of the 'font-weight' (aka 'FontWeight') attribute.
	    This attribute is a member of the 'font' (aka 'Font') attributeGroup. **/
	void MxEsNotehead::setFontWeight( const MxEnumFontWeight& value_in )
	{
		myImpl->setFontWeight( value_in );
	}

	/** Sets the internal value of the 'color' (aka 'Color') attribute. This
	    attribute is a member of the 'color' (aka 'Color') attributeGroup. **/
	void MxEsNotehead::setColor( const MxColor& value_in )
	{
		myImpl->setColor( value_in );
	}

/* Get IsAttributeRequired Values ----------------------------------------------------- */

	/** Indicates whether or not the 'filled' (aka 'Filled') attribute is required
	    to be present in a MusicXML document. **/
	bool MxEsNotehead::getIsFilledRequired() const
	{
		return myImpl->getIsFilledRequired();
	}

	/** Indicates whether or not the 'parentheses' (aka 'Parentheses') attribute
	    is required to be present in a MusicXML document. **/
	bool MxEsNotehead::getIsParenthesesRequired() const
	{
		return myImpl->getIsParenthesesRequired();
	}

	/** Indicates whether or not the 'font-family' (aka 'FontFamily') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'font' (aka 'Font') attributeGroup. **/
	bool MxEsNotehead::getIsFontFamilyRequired() const
	{
		return myImpl->getIsFontFamilyRequired();
	}

	/** Indicates whether or not the 'font-style' (aka 'FontStyle') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'font' (aka 'Font') attributeGroup. **/
	bool MxEsNotehead::getIsFontStyleRequired() const
	{
		return myImpl->getIsFontStyleRequired();
	}

	/** Indicates whether or not the 'font-size' (aka 'FontSize') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'font' (aka 'Font') attributeGroup. **/
	bool MxEsNotehead::getIsFontSizeRequired() const
	{
		return myImpl->getIsFontSizeRequired();
	}

	/** Indicates whether or not the 'font-weight' (aka 'FontWeight') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'font' (aka 'Font') attributeGroup. **/
	bool MxEsNotehead::getIsFontWeightRequired() const
	{
		return myImpl->getIsFontWeightRequired();
	}

	/** Indicates whether or not the 'color' (aka 'Color') attribute is required
	    to be present in a MusicXML document. This attribute is a member of
	    the 'color' (aka 'Color') attributeGroup. **/
	bool MxEsNotehead::getIsColorRequired() const
	{
		return myImpl->getIsColorRequired();
	}

/* Get IsAttributePresent Values ------------------------------------------------------ */

	/** Indicates whether or not the 'filled' (aka 'Filled') attribute is (or
	    will be) present in the MusicXML document. **/
	bool MxEsNotehead::getIsFilledPresent() const
	{
		return myImpl->getIsFilledPresent();
	}

	/** Indicates whether or not the 'parentheses' (aka 'Parentheses') attribute
	    is (or will be) present in the MusicXML document. **/
	bool MxEsNotehead::getIsParenthesesPresent() const
	{
		return myImpl->getIsParenthesesPresent();
	}

	/** Indicates whether or not the 'font-family' (aka 'FontFamily') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'font' (aka 'Font') attributeGroup. **/
	bool MxEsNotehead::getIsFontFamilyPresent() const
	{
		return myImpl->getIsFontFamilyPresent();
	}

	/** Indicates whether or not the 'font-style' (aka 'FontStyle') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'font' (aka 'Font') attributeGroup. **/
	bool MxEsNotehead::getIsFontStylePresent() const
	{
		return myImpl->getIsFontStylePresent();
	}

	/** Indicates whether or not the 'font-size' (aka 'FontSize') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'font' (aka 'Font') attributeGroup. **/
	bool MxEsNotehead::getIsFontSizePresent() const
	{
		return myImpl->getIsFontSizePresent();
	}

	/** Indicates whether or not the 'font-weight' (aka 'FontWeight') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'font' (aka 'Font') attributeGroup. **/
	bool MxEsNotehead::getIsFontWeightPresent() const
	{
		return myImpl->getIsFontWeightPresent();
	}

	/** Indicates whether or not the 'color' (aka 'Color') attribute is (or
	    will be) present in the MusicXML document. This attribute is a member
	    of the 'color' (aka 'Color') attributeGroup. **/
	bool MxEsNotehead::getIsColorPresent() const
	{
		return myImpl->getIsColorPresent();
	}

/* Set IsAttributePresent Values ------------------------------------------------------ */

	/** Sets the value which indicates whether or not the 'filled' (aka 'Filled')
	    attribute is (or will be) present in the MusicXML document. **/
	void MxEsNotehead::setIsFilledPresent( const bool& value_in )
	{
		myImpl->setIsFilledPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'parentheses' (aka
	    'Parentheses') attribute is (or will be) present in the MusicXML document. **/
	void MxEsNotehead::setIsParenthesesPresent( const bool& value_in )
	{
		myImpl->setIsParenthesesPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'font-family' (aka
	    'FontFamily') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'font' (aka 'Font') attributeGroup. **/
	void MxEsNotehead::setIsFontFamilyPresent( const bool& value_in )
	{
		myImpl->setIsFontFamilyPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'font-style' (aka
	    'FontStyle') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'font' (aka 'Font') attributeGroup. **/
	void MxEsNotehead::setIsFontStylePresent( const bool& value_in )
	{
		myImpl->setIsFontStylePresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'font-size' (aka
	    'FontSize') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'font' (aka 'Font') attributeGroup. **/
	void MxEsNotehead::setIsFontSizePresent( const bool& value_in )
	{
		myImpl->setIsFontSizePresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'font-weight' (aka
	    'FontWeight') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'font' (aka 'Font') attributeGroup. **/
	void MxEsNotehead::setIsFontWeightPresent( const bool& value_in )
	{
		myImpl->setIsFontWeightPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'color' (aka 'Color')
	    attribute is (or will be) present in the MusicXML document. This attribute
	    is a member of the 'color' (aka 'Color') attributeGroup. **/
	void MxEsNotehead::setIsColorPresent( const bool& value_in )
	{
		myImpl->setIsColorPresent( value_in );
	}

/* Stringing and Streaming ------------------------------------------------------------ */

	/** Returns the xml representation of the object's value. **/
	std::string MxEsNotehead::toString() const
	{
		return myImpl->toString();
	}

	/** Returns the xml representation of the object's value. **/
	std::ostream& MxEsNotehead::stream( std::ostream& os_out ) const
	{
		return myImpl->stream( os_out );
	}

/* Get IsAttributeDefaultDefined Values ----------------------------------------------- */

	/** Indicates whether or not the 'filled' (aka 'Filled') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). **/
	bool MxEsNotehead::getIsFilledDefaultDefined() const
	{
		return myImpl->getIsFilledDefaultDefined();
	}

	/** Indicates whether or not the 'parentheses' (aka 'Parentheses') has
	    a default value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). **/
	bool MxEsNotehead::getIsParenthesesDefaultDefined() const
	{
		return myImpl->getIsParenthesesDefaultDefined();
	}

	/** Indicates whether or not the 'font-family' (aka 'FontFamily') has a
	    default value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'font'
	    (aka 'Font') attributeGroup. **/
	bool MxEsNotehead::getIsFontFamilyDefaultDefined() const
	{
		return myImpl->getIsFontFamilyDefaultDefined();
	}

	/** Indicates whether or not the 'font-style' (aka 'FontStyle') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'font'
	    (aka 'Font') attributeGroup. **/
	bool MxEsNotehead::getIsFontStyleDefaultDefined() const
	{
		return myImpl->getIsFontStyleDefaultDefined();
	}

	/** Indicates whether or not the 'font-size' (aka 'FontSize') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'font'
	    (aka 'Font') attributeGroup. **/
	bool MxEsNotehead::getIsFontSizeDefaultDefined() const
	{
		return myImpl->getIsFontSizeDefaultDefined();
	}

	/** Indicates whether or not the 'font-weight' (aka 'FontWeight') has a
	    default value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'font'
	    (aka 'Font') attributeGroup. **/
	bool MxEsNotehead::getIsFontWeightDefaultDefined() const
	{
		return myImpl->getIsFontWeightDefaultDefined();
	}

	/** Indicates whether or not the 'color' (aka 'Color') has a default value
	    defined in the MusicXML xsd specification (either explicitly or in
	    the documentation). This attribute is a member of the 'color' (aka
	    'Color') attributeGroup. **/
	bool MxEsNotehead::getIsColorDefaultDefined() const
	{
		return myImpl->getIsColorDefaultDefined();
	}

/* Get AttributeDefaultValue ---------------------------------------------------------- */

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'filled' (aka 'Filled') attribute. **/
	MxEnumYesNo MxEsNotehead::getFilledDefaultValue() const
	{
		return myImpl->getFilledDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'parentheses' (aka 'Parentheses') attribute. **/
	MxEnumYesNo MxEsNotehead::getParenthesesDefaultValue() const
	{
		return myImpl->getParenthesesDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'font-family' (aka 'FontFamily') attribute. This attribute is a
	    member of the 'font' (aka 'Font') attributeGroup. **/
	MxCommaSeparatedText MxEsNotehead::getFontFamilyDefaultValue() const
	{
		return myImpl->getFontFamilyDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'font-style' (aka 'FontStyle') attribute. This attribute is a member
	    of the 'font' (aka 'Font') attributeGroup. **/
	MxEnumFontStyle MxEsNotehead::getFontStyleDefaultValue() const
	{
		return myImpl->getFontStyleDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'font-size' (aka 'FontSize') attribute. This attribute is a member
	    of the 'font' (aka 'Font') attributeGroup. **/
	MxFontSize MxEsNotehead::getFontSizeDefaultValue() const
	{
		return myImpl->getFontSizeDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'font-weight' (aka 'FontWeight') attribute. This attribute is a
	    member of the 'font' (aka 'Font') attributeGroup. **/
	MxEnumFontWeight MxEsNotehead::getFontWeightDefaultValue() const
	{
		return myImpl->getFontWeightDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'color' (aka 'Color') attribute. This attribute is a member of
	    the 'color' (aka 'Color') attributeGroup. **/
	MxColor MxEsNotehead::getColorDefaultValue() const
	{
		return myImpl->getColorDefaultValue();
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

