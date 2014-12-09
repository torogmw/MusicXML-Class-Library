/* See MusicXML License at the bottom of this code page. */

/**
  * @file       MxCxSmpPartName.cpp
  * @class      lexicon::MxCxSmpPartName
  * @author     Matthew James Briggs
  * @email      matthew.james.briggs@gmail.com
  * @url        http://matthewjamesbriggs.com
  * @date       2014-12-02 17:31:48
  * @project    Lexicon
  * @version    1.0
  * @musicxmlid 5865
  * 
  * @brief The 'PartName' class serves as a binding for the MusicXml 'part-name'
  * complexType.
  * 
 **/

#include "MxCxSmpPartName.h"
#include <sstream>
#include "_hidden_attributeStream.h"
#include "MxAttrGrpPartNameText.h"

/* Impl ------------------------------------------------------------------------------- */

namespace lexicon
{
	struct MxCxSmpPartName::Impl
	{
		Impl( const std::string& elementName, const XsString& value_in )
		:myElementName( elementName )
		,myValue( value_in )
		,myMxAttrGrpPartNameText()
		{}

	private:
		std::string myElementName;
		XsString myValue;
		MxAttrGrpPartNameText myMxAttrGrpPartNameText;

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

		/** Returns the internal value of the 'default-x' (aka 'DefaultX') attribute.
		    This attribute is a member of the 'part-name-text' (aka 'PartNameText')
		    attributeGroup. **/
		MxNumberTenths getDefaultX() const
		{
			return myMxAttrGrpPartNameText.getDefaultX();
		}

		/** Returns the internal value of the 'default-y' (aka 'DefaultY') attribute.
		    This attribute is a member of the 'part-name-text' (aka 'PartNameText')
		    attributeGroup. **/
		MxNumberTenths getDefaultY() const
		{
			return myMxAttrGrpPartNameText.getDefaultY();
		}

		/** Returns the internal value of the 'relative-x' (aka 'RelativeX') attribute.
		    This attribute is a member of the 'part-name-text' (aka 'PartNameText')
		    attributeGroup. **/
		MxNumberTenths getRelativeX() const
		{
			return myMxAttrGrpPartNameText.getRelativeX();
		}

		/** Returns the internal value of the 'relative-y' (aka 'RelativeY') attribute.
		    This attribute is a member of the 'part-name-text' (aka 'PartNameText')
		    attributeGroup. **/
		MxNumberTenths getRelativeY() const
		{
			return myMxAttrGrpPartNameText.getRelativeY();
		}

		/** Returns the internal value of the 'font-family' (aka 'FontFamily')
		    attribute. This attribute is a member of the 'part-name-text' (aka
		    'PartNameText') attributeGroup. **/
		MxCommaSeparatedText getFontFamily() const
		{
			return myMxAttrGrpPartNameText.getFontFamily();
		}

		/** Returns the internal value of the 'font-style' (aka 'FontStyle') attribute.
		    This attribute is a member of the 'part-name-text' (aka 'PartNameText')
		    attributeGroup. **/
		MxEnumFontStyle getFontStyle() const
		{
			return myMxAttrGrpPartNameText.getFontStyle();
		}

		/** Returns the internal value of the 'font-size' (aka 'FontSize') attribute.
		    This attribute is a member of the 'part-name-text' (aka 'PartNameText')
		    attributeGroup. **/
		MxFontSize getFontSize() const
		{
			return myMxAttrGrpPartNameText.getFontSize();
		}

		/** Returns the internal value of the 'font-weight' (aka 'FontWeight')
		    attribute. This attribute is a member of the 'part-name-text' (aka
		    'PartNameText') attributeGroup. **/
		MxEnumFontWeight getFontWeight() const
		{
			return myMxAttrGrpPartNameText.getFontWeight();
		}

		/** Returns the internal value of the 'color' (aka 'Color') attribute.
		    This attribute is a member of the 'part-name-text' (aka 'PartNameText')
		    attributeGroup. **/
		MxColor getColor() const
		{
			return myMxAttrGrpPartNameText.getColor();
		}

		/** Returns the internal value of the 'print-object' (aka 'PrintObject')
		    attribute. This attribute is a member of the 'part-name-text' (aka
		    'PartNameText') attributeGroup. **/
		MxEnumYesNo getPrintObject() const
		{
			return myMxAttrGrpPartNameText.getPrintObject();
		}

		/** Returns the internal value of the 'justify' (aka 'Justify') attribute.
		    This attribute is a member of the 'part-name-text' (aka 'PartNameText')
		    attributeGroup. **/
		MxEnumLeftCenterRight getJustify() const
		{
			return myMxAttrGrpPartNameText.getJustify();
		}

/* Set Attribute Values --------------------------------------------------------------- */

		/** Sets the internal value of the 'default-x' (aka 'DefaultX') attribute.
		    This attribute is a member of the 'part-name-text' (aka 'PartNameText')
		    attributeGroup. **/
		void setDefaultX( const MxNumberTenths& value_in )
		{
			myMxAttrGrpPartNameText.setDefaultX( value_in );
		}

		/** Sets the internal value of the 'default-y' (aka 'DefaultY') attribute.
		    This attribute is a member of the 'part-name-text' (aka 'PartNameText')
		    attributeGroup. **/
		void setDefaultY( const MxNumberTenths& value_in )
		{
			myMxAttrGrpPartNameText.setDefaultY( value_in );
		}

		/** Sets the internal value of the 'relative-x' (aka 'RelativeX') attribute.
		    This attribute is a member of the 'part-name-text' (aka 'PartNameText')
		    attributeGroup. **/
		void setRelativeX( const MxNumberTenths& value_in )
		{
			myMxAttrGrpPartNameText.setRelativeX( value_in );
		}

		/** Sets the internal value of the 'relative-y' (aka 'RelativeY') attribute.
		    This attribute is a member of the 'part-name-text' (aka 'PartNameText')
		    attributeGroup. **/
		void setRelativeY( const MxNumberTenths& value_in )
		{
			myMxAttrGrpPartNameText.setRelativeY( value_in );
		}

		/** Sets the internal value of the 'font-family' (aka 'FontFamily') attribute.
		    This attribute is a member of the 'part-name-text' (aka 'PartNameText')
		    attributeGroup. **/
		void setFontFamily( const MxCommaSeparatedText& value_in )
		{
			myMxAttrGrpPartNameText.setFontFamily( value_in );
		}

		/** Sets the internal value of the 'font-style' (aka 'FontStyle') attribute.
		    This attribute is a member of the 'part-name-text' (aka 'PartNameText')
		    attributeGroup. **/
		void setFontStyle( const MxEnumFontStyle& value_in )
		{
			myMxAttrGrpPartNameText.setFontStyle( value_in );
		}

		/** Sets the internal value of the 'font-size' (aka 'FontSize') attribute.
		    This attribute is a member of the 'part-name-text' (aka 'PartNameText')
		    attributeGroup. **/
		void setFontSize( const MxFontSize& value_in )
		{
			myMxAttrGrpPartNameText.setFontSize( value_in );
		}

		/** Sets the internal value of the 'font-weight' (aka 'FontWeight') attribute.
		    This attribute is a member of the 'part-name-text' (aka 'PartNameText')
		    attributeGroup. **/
		void setFontWeight( const MxEnumFontWeight& value_in )
		{
			myMxAttrGrpPartNameText.setFontWeight( value_in );
		}

		/** Sets the internal value of the 'color' (aka 'Color') attribute. This
		    attribute is a member of the 'part-name-text' (aka 'PartNameText')
		    attributeGroup. **/
		void setColor( const MxColor& value_in )
		{
			myMxAttrGrpPartNameText.setColor( value_in );
		}

		/** Sets the internal value of the 'print-object' (aka 'PrintObject') attribute.
		    This attribute is a member of the 'part-name-text' (aka 'PartNameText')
		    attributeGroup. **/
		void setPrintObject( const MxEnumYesNo& value_in )
		{
			myMxAttrGrpPartNameText.setPrintObject( value_in );
		}

		/** Sets the internal value of the 'justify' (aka 'Justify') attribute.
		    This attribute is a member of the 'part-name-text' (aka 'PartNameText')
		    attributeGroup. **/
		void setJustify( const MxEnumLeftCenterRight& value_in )
		{
			myMxAttrGrpPartNameText.setJustify( value_in );
		}

/* Get IsAttributeRequired Values ----------------------------------------------------- */

		/** Indicates whether or not the 'default-x' (aka 'DefaultX') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'part-name-text' (aka 'PartNameText') attributeGroup. **/
		bool getIsDefaultXRequired() const
		{
			return myMxAttrGrpPartNameText.getIsDefaultXRequired();
		}

		/** Indicates whether or not the 'default-y' (aka 'DefaultY') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'part-name-text' (aka 'PartNameText') attributeGroup. **/
		bool getIsDefaultYRequired() const
		{
			return myMxAttrGrpPartNameText.getIsDefaultYRequired();
		}

		/** Indicates whether or not the 'relative-x' (aka 'RelativeX') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'part-name-text' (aka 'PartNameText') attributeGroup. **/
		bool getIsRelativeXRequired() const
		{
			return myMxAttrGrpPartNameText.getIsRelativeXRequired();
		}

		/** Indicates whether or not the 'relative-y' (aka 'RelativeY') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'part-name-text' (aka 'PartNameText') attributeGroup. **/
		bool getIsRelativeYRequired() const
		{
			return myMxAttrGrpPartNameText.getIsRelativeYRequired();
		}

		/** Indicates whether or not the 'font-family' (aka 'FontFamily') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'part-name-text' (aka 'PartNameText') attributeGroup. **/
		bool getIsFontFamilyRequired() const
		{
			return myMxAttrGrpPartNameText.getIsFontFamilyRequired();
		}

		/** Indicates whether or not the 'font-style' (aka 'FontStyle') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'part-name-text' (aka 'PartNameText') attributeGroup. **/
		bool getIsFontStyleRequired() const
		{
			return myMxAttrGrpPartNameText.getIsFontStyleRequired();
		}

		/** Indicates whether or not the 'font-size' (aka 'FontSize') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'part-name-text' (aka 'PartNameText') attributeGroup. **/
		bool getIsFontSizeRequired() const
		{
			return myMxAttrGrpPartNameText.getIsFontSizeRequired();
		}

		/** Indicates whether or not the 'font-weight' (aka 'FontWeight') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'part-name-text' (aka 'PartNameText') attributeGroup. **/
		bool getIsFontWeightRequired() const
		{
			return myMxAttrGrpPartNameText.getIsFontWeightRequired();
		}

		/** Indicates whether or not the 'color' (aka 'Color') attribute is required
		    to be present in a MusicXML document. This attribute is a member of
		    the 'part-name-text' (aka 'PartNameText') attributeGroup. **/
		bool getIsColorRequired() const
		{
			return myMxAttrGrpPartNameText.getIsColorRequired();
		}

		/** Indicates whether or not the 'print-object' (aka 'PrintObject') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'part-name-text' (aka 'PartNameText') attributeGroup. **/
		bool getIsPrintObjectRequired() const
		{
			return myMxAttrGrpPartNameText.getIsPrintObjectRequired();
		}

		/** Indicates whether or not the 'justify' (aka 'Justify') attribute is
		    required to be present in a MusicXML document. This attribute is a
		    member of the 'part-name-text' (aka 'PartNameText') attributeGroup. **/
		bool getIsJustifyRequired() const
		{
			return myMxAttrGrpPartNameText.getIsJustifyRequired();
		}

/* Get IsAttributePresent Values ------------------------------------------------------ */

		/** Indicates whether or not the 'default-x' (aka 'DefaultX') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'part-name-text' (aka 'PartNameText') attributeGroup. **/
		bool getIsDefaultXPresent() const
		{
			return myMxAttrGrpPartNameText.getIsDefaultXPresent();
		}

		/** Indicates whether or not the 'default-y' (aka 'DefaultY') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'part-name-text' (aka 'PartNameText') attributeGroup. **/
		bool getIsDefaultYPresent() const
		{
			return myMxAttrGrpPartNameText.getIsDefaultYPresent();
		}

		/** Indicates whether or not the 'relative-x' (aka 'RelativeX') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'part-name-text' (aka 'PartNameText') attributeGroup. **/
		bool getIsRelativeXPresent() const
		{
			return myMxAttrGrpPartNameText.getIsRelativeXPresent();
		}

		/** Indicates whether or not the 'relative-y' (aka 'RelativeY') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'part-name-text' (aka 'PartNameText') attributeGroup. **/
		bool getIsRelativeYPresent() const
		{
			return myMxAttrGrpPartNameText.getIsRelativeYPresent();
		}

		/** Indicates whether or not the 'font-family' (aka 'FontFamily') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'part-name-text' (aka 'PartNameText') attributeGroup. **/
		bool getIsFontFamilyPresent() const
		{
			return myMxAttrGrpPartNameText.getIsFontFamilyPresent();
		}

		/** Indicates whether or not the 'font-style' (aka 'FontStyle') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'part-name-text' (aka 'PartNameText') attributeGroup. **/
		bool getIsFontStylePresent() const
		{
			return myMxAttrGrpPartNameText.getIsFontStylePresent();
		}

		/** Indicates whether or not the 'font-size' (aka 'FontSize') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'part-name-text' (aka 'PartNameText') attributeGroup. **/
		bool getIsFontSizePresent() const
		{
			return myMxAttrGrpPartNameText.getIsFontSizePresent();
		}

		/** Indicates whether or not the 'font-weight' (aka 'FontWeight') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'part-name-text' (aka 'PartNameText') attributeGroup. **/
		bool getIsFontWeightPresent() const
		{
			return myMxAttrGrpPartNameText.getIsFontWeightPresent();
		}

		/** Indicates whether or not the 'color' (aka 'Color') attribute is (or
		    will be) present in the MusicXML document. This attribute is a member
		    of the 'part-name-text' (aka 'PartNameText') attributeGroup. **/
		bool getIsColorPresent() const
		{
			return myMxAttrGrpPartNameText.getIsColorPresent();
		}

		/** Indicates whether or not the 'print-object' (aka 'PrintObject') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'part-name-text' (aka 'PartNameText') attributeGroup. **/
		bool getIsPrintObjectPresent() const
		{
			return myMxAttrGrpPartNameText.getIsPrintObjectPresent();
		}

		/** Indicates whether or not the 'justify' (aka 'Justify') attribute is
		    (or will be) present in the MusicXML document. This attribute is a
		    member of the 'part-name-text' (aka 'PartNameText') attributeGroup. **/
		bool getIsJustifyPresent() const
		{
			return myMxAttrGrpPartNameText.getIsJustifyPresent();
		}

/* Set IsAttributePresent Values ------------------------------------------------------ */

		/** Sets the value which indicates whether or not the 'default-x' (aka
		    'DefaultX') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'part-name-text' (aka 'PartNameText')
		    attributeGroup. **/
		void setIsDefaultXPresent( const bool& value_in )
		{
			myMxAttrGrpPartNameText.setIsDefaultXPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'default-y' (aka
		    'DefaultY') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'part-name-text' (aka 'PartNameText')
		    attributeGroup. **/
		void setIsDefaultYPresent( const bool& value_in )
		{
			myMxAttrGrpPartNameText.setIsDefaultYPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'relative-x' (aka
		    'RelativeX') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'part-name-text' (aka 'PartNameText')
		    attributeGroup. **/
		void setIsRelativeXPresent( const bool& value_in )
		{
			myMxAttrGrpPartNameText.setIsRelativeXPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'relative-y' (aka
		    'RelativeY') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'part-name-text' (aka 'PartNameText')
		    attributeGroup. **/
		void setIsRelativeYPresent( const bool& value_in )
		{
			myMxAttrGrpPartNameText.setIsRelativeYPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'font-family' (aka
		    'FontFamily') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'part-name-text' (aka 'PartNameText')
		    attributeGroup. **/
		void setIsFontFamilyPresent( const bool& value_in )
		{
			myMxAttrGrpPartNameText.setIsFontFamilyPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'font-style' (aka
		    'FontStyle') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'part-name-text' (aka 'PartNameText')
		    attributeGroup. **/
		void setIsFontStylePresent( const bool& value_in )
		{
			myMxAttrGrpPartNameText.setIsFontStylePresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'font-size' (aka
		    'FontSize') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'part-name-text' (aka 'PartNameText')
		    attributeGroup. **/
		void setIsFontSizePresent( const bool& value_in )
		{
			myMxAttrGrpPartNameText.setIsFontSizePresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'font-weight' (aka
		    'FontWeight') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'part-name-text' (aka 'PartNameText')
		    attributeGroup. **/
		void setIsFontWeightPresent( const bool& value_in )
		{
			myMxAttrGrpPartNameText.setIsFontWeightPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'color' (aka 'Color')
		    attribute is (or will be) present in the MusicXML document. This attribute
		    is a member of the 'part-name-text' (aka 'PartNameText') attributeGroup. **/
		void setIsColorPresent( const bool& value_in )
		{
			myMxAttrGrpPartNameText.setIsColorPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'print-object' (aka
		    'PrintObject') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'part-name-text' (aka 'PartNameText')
		    attributeGroup. **/
		void setIsPrintObjectPresent( const bool& value_in )
		{
			myMxAttrGrpPartNameText.setIsPrintObjectPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'justify' (aka 'Justify')
		    attribute is (or will be) present in the MusicXML document. This attribute
		    is a member of the 'part-name-text' (aka 'PartNameText') attributeGroup. **/
		void setIsJustifyPresent( const bool& value_in )
		{
			myMxAttrGrpPartNameText.setIsJustifyPresent( value_in );
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
			hidden::attributeStream( getIsDefaultXPresent(), "default-x", getDefaultX().toString(), os_out, isFirst );
			hidden::attributeStream( getIsDefaultYPresent(), "default-y", getDefaultY().toString(), os_out, isFirst );
			hidden::attributeStream( getIsRelativeXPresent(), "relative-x", getRelativeX().toString(), os_out, isFirst );
			hidden::attributeStream( getIsRelativeYPresent(), "relative-y", getRelativeY().toString(), os_out, isFirst );
			hidden::attributeStream( getIsFontFamilyPresent(), "font-family", getFontFamily().toString(), os_out, isFirst );
			hidden::attributeStream( getIsFontStylePresent(), "font-style", getFontStyle().toString(), os_out, isFirst );
			hidden::attributeStream( getIsFontSizePresent(), "font-size", getFontSize().toString(), os_out, isFirst );
			hidden::attributeStream( getIsFontWeightPresent(), "font-weight", getFontWeight().toString(), os_out, isFirst );
			hidden::attributeStream( getIsColorPresent(), "color", getColor().toString(), os_out, isFirst );
			hidden::attributeStream( getIsPrintObjectPresent(), "print-object", getPrintObject().toString(), os_out, isFirst );
			hidden::attributeStream( getIsJustifyPresent(), "justify", getJustify().toString(), os_out, isFirst );
			os_out << '>';
			os_out << getValue().toString();
			os_out << "</";
			os_out << getElementName();
			os_out << '>';
			return os_out;
		}

/* Get IsAttributeDefaultDefined Values ----------------------------------------------- */

		/** Indicates whether or not the 'default-x' (aka 'DefaultX') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'part-name-text'
		    (aka 'PartNameText') attributeGroup. **/
		bool getIsDefaultXDefaultDefined() const
		{
			return myMxAttrGrpPartNameText.getIsDefaultXDefaultDefined();
		}

		/** Indicates whether or not the 'default-y' (aka 'DefaultY') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'part-name-text'
		    (aka 'PartNameText') attributeGroup. **/
		bool getIsDefaultYDefaultDefined() const
		{
			return myMxAttrGrpPartNameText.getIsDefaultYDefaultDefined();
		}

		/** Indicates whether or not the 'relative-x' (aka 'RelativeX') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'part-name-text'
		    (aka 'PartNameText') attributeGroup. **/
		bool getIsRelativeXDefaultDefined() const
		{
			return myMxAttrGrpPartNameText.getIsRelativeXDefaultDefined();
		}

		/** Indicates whether or not the 'relative-y' (aka 'RelativeY') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'part-name-text'
		    (aka 'PartNameText') attributeGroup. **/
		bool getIsRelativeYDefaultDefined() const
		{
			return myMxAttrGrpPartNameText.getIsRelativeYDefaultDefined();
		}

		/** Indicates whether or not the 'font-family' (aka 'FontFamily') has a
		    default value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'part-name-text'
		    (aka 'PartNameText') attributeGroup. **/
		bool getIsFontFamilyDefaultDefined() const
		{
			return myMxAttrGrpPartNameText.getIsFontFamilyDefaultDefined();
		}

		/** Indicates whether or not the 'font-style' (aka 'FontStyle') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'part-name-text'
		    (aka 'PartNameText') attributeGroup. **/
		bool getIsFontStyleDefaultDefined() const
		{
			return myMxAttrGrpPartNameText.getIsFontStyleDefaultDefined();
		}

		/** Indicates whether or not the 'font-size' (aka 'FontSize') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'part-name-text'
		    (aka 'PartNameText') attributeGroup. **/
		bool getIsFontSizeDefaultDefined() const
		{
			return myMxAttrGrpPartNameText.getIsFontSizeDefaultDefined();
		}

		/** Indicates whether or not the 'font-weight' (aka 'FontWeight') has a
		    default value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'part-name-text'
		    (aka 'PartNameText') attributeGroup. **/
		bool getIsFontWeightDefaultDefined() const
		{
			return myMxAttrGrpPartNameText.getIsFontWeightDefaultDefined();
		}

		/** Indicates whether or not the 'color' (aka 'Color') has a default value
		    defined in the MusicXML xsd specification (either explicitly or in
		    the documentation). This attribute is a member of the 'part-name-text'
		    (aka 'PartNameText') attributeGroup. **/
		bool getIsColorDefaultDefined() const
		{
			return myMxAttrGrpPartNameText.getIsColorDefaultDefined();
		}

		/** Indicates whether or not the 'print-object' (aka 'PrintObject') has
		    a default value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'part-name-text'
		    (aka 'PartNameText') attributeGroup. **/
		bool getIsPrintObjectDefaultDefined() const
		{
			return myMxAttrGrpPartNameText.getIsPrintObjectDefaultDefined();
		}

		/** Indicates whether or not the 'justify' (aka 'Justify') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'part-name-text'
		    (aka 'PartNameText') attributeGroup. **/
		bool getIsJustifyDefaultDefined() const
		{
			return myMxAttrGrpPartNameText.getIsJustifyDefaultDefined();
		}

/* Get AttributeDefaultValue ---------------------------------------------------------- */

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'default-x' (aka 'DefaultX') attribute. This attribute is a member
		    of the 'part-name-text' (aka 'PartNameText') attributeGroup. **/
		MxNumberTenths getDefaultXDefaultValue() const
		{
			return myMxAttrGrpPartNameText.getDefaultXDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'default-y' (aka 'DefaultY') attribute. This attribute is a member
		    of the 'part-name-text' (aka 'PartNameText') attributeGroup. **/
		MxNumberTenths getDefaultYDefaultValue() const
		{
			return myMxAttrGrpPartNameText.getDefaultYDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'relative-x' (aka 'RelativeX') attribute. This attribute is a member
		    of the 'part-name-text' (aka 'PartNameText') attributeGroup. **/
		MxNumberTenths getRelativeXDefaultValue() const
		{
			return myMxAttrGrpPartNameText.getRelativeXDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'relative-y' (aka 'RelativeY') attribute. This attribute is a member
		    of the 'part-name-text' (aka 'PartNameText') attributeGroup. **/
		MxNumberTenths getRelativeYDefaultValue() const
		{
			return myMxAttrGrpPartNameText.getRelativeYDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'font-family' (aka 'FontFamily') attribute. This attribute is a
		    member of the 'part-name-text' (aka 'PartNameText') attributeGroup. **/
		MxCommaSeparatedText getFontFamilyDefaultValue() const
		{
			return myMxAttrGrpPartNameText.getFontFamilyDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'font-style' (aka 'FontStyle') attribute. This attribute is a member
		    of the 'part-name-text' (aka 'PartNameText') attributeGroup. **/
		MxEnumFontStyle getFontStyleDefaultValue() const
		{
			return myMxAttrGrpPartNameText.getFontStyleDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'font-size' (aka 'FontSize') attribute. This attribute is a member
		    of the 'part-name-text' (aka 'PartNameText') attributeGroup. **/
		MxFontSize getFontSizeDefaultValue() const
		{
			return myMxAttrGrpPartNameText.getFontSizeDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'font-weight' (aka 'FontWeight') attribute. This attribute is a
		    member of the 'part-name-text' (aka 'PartNameText') attributeGroup. **/
		MxEnumFontWeight getFontWeightDefaultValue() const
		{
			return myMxAttrGrpPartNameText.getFontWeightDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'color' (aka 'Color') attribute. This attribute is a member of
		    the 'part-name-text' (aka 'PartNameText') attributeGroup. **/
		MxColor getColorDefaultValue() const
		{
			return myMxAttrGrpPartNameText.getColorDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'print-object' (aka 'PrintObject') attribute. This attribute is
		    a member of the 'part-name-text' (aka 'PartNameText') attributeGroup. **/
		MxEnumYesNo getPrintObjectDefaultValue() const
		{
			return myMxAttrGrpPartNameText.getPrintObjectDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'justify' (aka 'Justify') attribute. This attribute is a member
		    of the 'part-name-text' (aka 'PartNameText') attributeGroup. **/
		MxEnumLeftCenterRight getJustifyDefaultValue() const
		{
			return myMxAttrGrpPartNameText.getJustifyDefaultValue();
		}

	}; // struct MxCxSmpPartName::Impl

	const int MxCxSmpPartName::Impl::myXsdID = 5865;
	const std::string MxCxSmpPartName::Impl::myXmlTypeName = "part-name";
	const std::string MxCxSmpPartName::Impl::myCppClassName = "MxCxSmpPartName";
	const std::string MxCxSmpPartName::Impl::myDocumentation = "The part-name type describes the name or abbreviation of a score-part element. Formatting attributes for the part-name element are deprecated in Version 2.0 in favor of the new part-name-display and part-abbreviation-display elements.";

} // namespace lexicon


/* MxCxSmpPartName -------------------------------------------------------------------- */

namespace lexicon
{

/* Constructor, Destructor, Copy, Assignment ------------------------------------------ */

	MxCxSmpPartName::MxCxSmpPartName( const std::string& elementName, const XsString& value_in )
	:myImpl( new Impl( elementName, value_in ) ) {}

	MxCxSmpPartName::~MxCxSmpPartName() {}

	MxCxSmpPartName::MxCxSmpPartName( const MxCxSmpPartName& other )
	:myImpl( new Impl( *(other.myImpl) ) ) {}

	MxCxSmpPartName& MxCxSmpPartName::operator=( const MxCxSmpPartName& other )
	{
		this->myImpl = std::unique_ptr<Impl>( new Impl( *(other.myImpl) ) );
		return *this;
	}

/* GetSet Value and Element Name ------------------------------------------------------ */

	/** Returns the contained xs:simpleContent value. **/
	XsString MxCxSmpPartName::getValue() const
	{
		return myImpl->getValue();
	}

	/** Sets the contained xs:simpleContent value. **/
	void MxCxSmpPartName::setValue( const XsString& value_in )
	{
		myImpl->setValue( value_in );
	}

	/** Returns the name of the Xml element employing this ComplexType. **/
	std::string MxCxSmpPartName::getElementName() const
	{
		return myImpl->getElementName();
	}

/* Get Class Information -------------------------------------------------------------- */

	/** Returns the name of this xs:complexType as found in the musicxml.xsd
	    document. **/
	std::string MxCxSmpPartName::getXmlTypeName() const
	{
		return myImpl->getXmlTypeName();
	}

	/** Returns the name of this C++ class. **/
	std::string MxCxSmpPartName::getClassName() const
	{
		return myImpl->getClassName();
	}

	/** Returns the documentation for this musicxml type as found in the musicxml.xsd
	    document. **/
	std::string MxCxSmpPartName::getDocumentation() const
	{
		return myImpl->getDocumentation();
	}

/* Get Attribute Values --------------------------------------------------------------- */

	/** Returns the internal value of the 'default-x' (aka 'DefaultX') attribute.
	    This attribute is a member of the 'part-name-text' (aka 'PartNameText')
	    attributeGroup. **/
	MxNumberTenths MxCxSmpPartName::getDefaultX() const
	{
		return myImpl->getDefaultX();
	}

	/** Returns the internal value of the 'default-y' (aka 'DefaultY') attribute.
	    This attribute is a member of the 'part-name-text' (aka 'PartNameText')
	    attributeGroup. **/
	MxNumberTenths MxCxSmpPartName::getDefaultY() const
	{
		return myImpl->getDefaultY();
	}

	/** Returns the internal value of the 'relative-x' (aka 'RelativeX') attribute.
	    This attribute is a member of the 'part-name-text' (aka 'PartNameText')
	    attributeGroup. **/
	MxNumberTenths MxCxSmpPartName::getRelativeX() const
	{
		return myImpl->getRelativeX();
	}

	/** Returns the internal value of the 'relative-y' (aka 'RelativeY') attribute.
	    This attribute is a member of the 'part-name-text' (aka 'PartNameText')
	    attributeGroup. **/
	MxNumberTenths MxCxSmpPartName::getRelativeY() const
	{
		return myImpl->getRelativeY();
	}

	/** Returns the internal value of the 'font-family' (aka 'FontFamily')
	    attribute. This attribute is a member of the 'part-name-text' (aka
	    'PartNameText') attributeGroup. **/
	MxCommaSeparatedText MxCxSmpPartName::getFontFamily() const
	{
		return myImpl->getFontFamily();
	}

	/** Returns the internal value of the 'font-style' (aka 'FontStyle') attribute.
	    This attribute is a member of the 'part-name-text' (aka 'PartNameText')
	    attributeGroup. **/
	MxEnumFontStyle MxCxSmpPartName::getFontStyle() const
	{
		return myImpl->getFontStyle();
	}

	/** Returns the internal value of the 'font-size' (aka 'FontSize') attribute.
	    This attribute is a member of the 'part-name-text' (aka 'PartNameText')
	    attributeGroup. **/
	MxFontSize MxCxSmpPartName::getFontSize() const
	{
		return myImpl->getFontSize();
	}

	/** Returns the internal value of the 'font-weight' (aka 'FontWeight')
	    attribute. This attribute is a member of the 'part-name-text' (aka
	    'PartNameText') attributeGroup. **/
	MxEnumFontWeight MxCxSmpPartName::getFontWeight() const
	{
		return myImpl->getFontWeight();
	}

	/** Returns the internal value of the 'color' (aka 'Color') attribute.
	    This attribute is a member of the 'part-name-text' (aka 'PartNameText')
	    attributeGroup. **/
	MxColor MxCxSmpPartName::getColor() const
	{
		return myImpl->getColor();
	}

	/** Returns the internal value of the 'print-object' (aka 'PrintObject')
	    attribute. This attribute is a member of the 'part-name-text' (aka
	    'PartNameText') attributeGroup. **/
	MxEnumYesNo MxCxSmpPartName::getPrintObject() const
	{
		return myImpl->getPrintObject();
	}

	/** Returns the internal value of the 'justify' (aka 'Justify') attribute.
	    This attribute is a member of the 'part-name-text' (aka 'PartNameText')
	    attributeGroup. **/
	MxEnumLeftCenterRight MxCxSmpPartName::getJustify() const
	{
		return myImpl->getJustify();
	}

/* Set Attribute Values --------------------------------------------------------------- */

	/** Sets the internal value of the 'default-x' (aka 'DefaultX') attribute.
	    This attribute is a member of the 'part-name-text' (aka 'PartNameText')
	    attributeGroup. **/
	void MxCxSmpPartName::setDefaultX( const MxNumberTenths& value_in )
	{
		myImpl->setDefaultX( value_in );
	}

	/** Sets the internal value of the 'default-y' (aka 'DefaultY') attribute.
	    This attribute is a member of the 'part-name-text' (aka 'PartNameText')
	    attributeGroup. **/
	void MxCxSmpPartName::setDefaultY( const MxNumberTenths& value_in )
	{
		myImpl->setDefaultY( value_in );
	}

	/** Sets the internal value of the 'relative-x' (aka 'RelativeX') attribute.
	    This attribute is a member of the 'part-name-text' (aka 'PartNameText')
	    attributeGroup. **/
	void MxCxSmpPartName::setRelativeX( const MxNumberTenths& value_in )
	{
		myImpl->setRelativeX( value_in );
	}

	/** Sets the internal value of the 'relative-y' (aka 'RelativeY') attribute.
	    This attribute is a member of the 'part-name-text' (aka 'PartNameText')
	    attributeGroup. **/
	void MxCxSmpPartName::setRelativeY( const MxNumberTenths& value_in )
	{
		myImpl->setRelativeY( value_in );
	}

	/** Sets the internal value of the 'font-family' (aka 'FontFamily') attribute.
	    This attribute is a member of the 'part-name-text' (aka 'PartNameText')
	    attributeGroup. **/
	void MxCxSmpPartName::setFontFamily( const MxCommaSeparatedText& value_in )
	{
		myImpl->setFontFamily( value_in );
	}

	/** Sets the internal value of the 'font-style' (aka 'FontStyle') attribute.
	    This attribute is a member of the 'part-name-text' (aka 'PartNameText')
	    attributeGroup. **/
	void MxCxSmpPartName::setFontStyle( const MxEnumFontStyle& value_in )
	{
		myImpl->setFontStyle( value_in );
	}

	/** Sets the internal value of the 'font-size' (aka 'FontSize') attribute.
	    This attribute is a member of the 'part-name-text' (aka 'PartNameText')
	    attributeGroup. **/
	void MxCxSmpPartName::setFontSize( const MxFontSize& value_in )
	{
		myImpl->setFontSize( value_in );
	}

	/** Sets the internal value of the 'font-weight' (aka 'FontWeight') attribute.
	    This attribute is a member of the 'part-name-text' (aka 'PartNameText')
	    attributeGroup. **/
	void MxCxSmpPartName::setFontWeight( const MxEnumFontWeight& value_in )
	{
		myImpl->setFontWeight( value_in );
	}

	/** Sets the internal value of the 'color' (aka 'Color') attribute. This
	    attribute is a member of the 'part-name-text' (aka 'PartNameText')
	    attributeGroup. **/
	void MxCxSmpPartName::setColor( const MxColor& value_in )
	{
		myImpl->setColor( value_in );
	}

	/** Sets the internal value of the 'print-object' (aka 'PrintObject') attribute.
	    This attribute is a member of the 'part-name-text' (aka 'PartNameText')
	    attributeGroup. **/
	void MxCxSmpPartName::setPrintObject( const MxEnumYesNo& value_in )
	{
		myImpl->setPrintObject( value_in );
	}

	/** Sets the internal value of the 'justify' (aka 'Justify') attribute.
	    This attribute is a member of the 'part-name-text' (aka 'PartNameText')
	    attributeGroup. **/
	void MxCxSmpPartName::setJustify( const MxEnumLeftCenterRight& value_in )
	{
		myImpl->setJustify( value_in );
	}

/* Get IsAttributeRequired Values ----------------------------------------------------- */

	/** Indicates whether or not the 'default-x' (aka 'DefaultX') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'part-name-text' (aka 'PartNameText') attributeGroup. **/
	bool MxCxSmpPartName::getIsDefaultXRequired() const
	{
		return myImpl->getIsDefaultXRequired();
	}

	/** Indicates whether or not the 'default-y' (aka 'DefaultY') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'part-name-text' (aka 'PartNameText') attributeGroup. **/
	bool MxCxSmpPartName::getIsDefaultYRequired() const
	{
		return myImpl->getIsDefaultYRequired();
	}

	/** Indicates whether or not the 'relative-x' (aka 'RelativeX') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'part-name-text' (aka 'PartNameText') attributeGroup. **/
	bool MxCxSmpPartName::getIsRelativeXRequired() const
	{
		return myImpl->getIsRelativeXRequired();
	}

	/** Indicates whether or not the 'relative-y' (aka 'RelativeY') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'part-name-text' (aka 'PartNameText') attributeGroup. **/
	bool MxCxSmpPartName::getIsRelativeYRequired() const
	{
		return myImpl->getIsRelativeYRequired();
	}

	/** Indicates whether or not the 'font-family' (aka 'FontFamily') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'part-name-text' (aka 'PartNameText') attributeGroup. **/
	bool MxCxSmpPartName::getIsFontFamilyRequired() const
	{
		return myImpl->getIsFontFamilyRequired();
	}

	/** Indicates whether or not the 'font-style' (aka 'FontStyle') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'part-name-text' (aka 'PartNameText') attributeGroup. **/
	bool MxCxSmpPartName::getIsFontStyleRequired() const
	{
		return myImpl->getIsFontStyleRequired();
	}

	/** Indicates whether or not the 'font-size' (aka 'FontSize') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'part-name-text' (aka 'PartNameText') attributeGroup. **/
	bool MxCxSmpPartName::getIsFontSizeRequired() const
	{
		return myImpl->getIsFontSizeRequired();
	}

	/** Indicates whether or not the 'font-weight' (aka 'FontWeight') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'part-name-text' (aka 'PartNameText') attributeGroup. **/
	bool MxCxSmpPartName::getIsFontWeightRequired() const
	{
		return myImpl->getIsFontWeightRequired();
	}

	/** Indicates whether or not the 'color' (aka 'Color') attribute is required
	    to be present in a MusicXML document. This attribute is a member of
	    the 'part-name-text' (aka 'PartNameText') attributeGroup. **/
	bool MxCxSmpPartName::getIsColorRequired() const
	{
		return myImpl->getIsColorRequired();
	}

	/** Indicates whether or not the 'print-object' (aka 'PrintObject') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'part-name-text' (aka 'PartNameText') attributeGroup. **/
	bool MxCxSmpPartName::getIsPrintObjectRequired() const
	{
		return myImpl->getIsPrintObjectRequired();
	}

	/** Indicates whether or not the 'justify' (aka 'Justify') attribute is
	    required to be present in a MusicXML document. This attribute is a
	    member of the 'part-name-text' (aka 'PartNameText') attributeGroup. **/
	bool MxCxSmpPartName::getIsJustifyRequired() const
	{
		return myImpl->getIsJustifyRequired();
	}

/* Get IsAttributePresent Values ------------------------------------------------------ */

	/** Indicates whether or not the 'default-x' (aka 'DefaultX') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'part-name-text' (aka 'PartNameText') attributeGroup. **/
	bool MxCxSmpPartName::getIsDefaultXPresent() const
	{
		return myImpl->getIsDefaultXPresent();
	}

	/** Indicates whether or not the 'default-y' (aka 'DefaultY') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'part-name-text' (aka 'PartNameText') attributeGroup. **/
	bool MxCxSmpPartName::getIsDefaultYPresent() const
	{
		return myImpl->getIsDefaultYPresent();
	}

	/** Indicates whether or not the 'relative-x' (aka 'RelativeX') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'part-name-text' (aka 'PartNameText') attributeGroup. **/
	bool MxCxSmpPartName::getIsRelativeXPresent() const
	{
		return myImpl->getIsRelativeXPresent();
	}

	/** Indicates whether or not the 'relative-y' (aka 'RelativeY') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'part-name-text' (aka 'PartNameText') attributeGroup. **/
	bool MxCxSmpPartName::getIsRelativeYPresent() const
	{
		return myImpl->getIsRelativeYPresent();
	}

	/** Indicates whether or not the 'font-family' (aka 'FontFamily') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'part-name-text' (aka 'PartNameText') attributeGroup. **/
	bool MxCxSmpPartName::getIsFontFamilyPresent() const
	{
		return myImpl->getIsFontFamilyPresent();
	}

	/** Indicates whether or not the 'font-style' (aka 'FontStyle') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'part-name-text' (aka 'PartNameText') attributeGroup. **/
	bool MxCxSmpPartName::getIsFontStylePresent() const
	{
		return myImpl->getIsFontStylePresent();
	}

	/** Indicates whether or not the 'font-size' (aka 'FontSize') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'part-name-text' (aka 'PartNameText') attributeGroup. **/
	bool MxCxSmpPartName::getIsFontSizePresent() const
	{
		return myImpl->getIsFontSizePresent();
	}

	/** Indicates whether or not the 'font-weight' (aka 'FontWeight') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'part-name-text' (aka 'PartNameText') attributeGroup. **/
	bool MxCxSmpPartName::getIsFontWeightPresent() const
	{
		return myImpl->getIsFontWeightPresent();
	}

	/** Indicates whether or not the 'color' (aka 'Color') attribute is (or
	    will be) present in the MusicXML document. This attribute is a member
	    of the 'part-name-text' (aka 'PartNameText') attributeGroup. **/
	bool MxCxSmpPartName::getIsColorPresent() const
	{
		return myImpl->getIsColorPresent();
	}

	/** Indicates whether or not the 'print-object' (aka 'PrintObject') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'part-name-text' (aka 'PartNameText') attributeGroup. **/
	bool MxCxSmpPartName::getIsPrintObjectPresent() const
	{
		return myImpl->getIsPrintObjectPresent();
	}

	/** Indicates whether or not the 'justify' (aka 'Justify') attribute is
	    (or will be) present in the MusicXML document. This attribute is a
	    member of the 'part-name-text' (aka 'PartNameText') attributeGroup. **/
	bool MxCxSmpPartName::getIsJustifyPresent() const
	{
		return myImpl->getIsJustifyPresent();
	}

/* Set IsAttributePresent Values ------------------------------------------------------ */

	/** Sets the value which indicates whether or not the 'default-x' (aka
	    'DefaultX') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'part-name-text' (aka 'PartNameText')
	    attributeGroup. **/
	void MxCxSmpPartName::setIsDefaultXPresent( const bool& value_in )
	{
		myImpl->setIsDefaultXPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'default-y' (aka
	    'DefaultY') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'part-name-text' (aka 'PartNameText')
	    attributeGroup. **/
	void MxCxSmpPartName::setIsDefaultYPresent( const bool& value_in )
	{
		myImpl->setIsDefaultYPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'relative-x' (aka
	    'RelativeX') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'part-name-text' (aka 'PartNameText')
	    attributeGroup. **/
	void MxCxSmpPartName::setIsRelativeXPresent( const bool& value_in )
	{
		myImpl->setIsRelativeXPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'relative-y' (aka
	    'RelativeY') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'part-name-text' (aka 'PartNameText')
	    attributeGroup. **/
	void MxCxSmpPartName::setIsRelativeYPresent( const bool& value_in )
	{
		myImpl->setIsRelativeYPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'font-family' (aka
	    'FontFamily') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'part-name-text' (aka 'PartNameText')
	    attributeGroup. **/
	void MxCxSmpPartName::setIsFontFamilyPresent( const bool& value_in )
	{
		myImpl->setIsFontFamilyPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'font-style' (aka
	    'FontStyle') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'part-name-text' (aka 'PartNameText')
	    attributeGroup. **/
	void MxCxSmpPartName::setIsFontStylePresent( const bool& value_in )
	{
		myImpl->setIsFontStylePresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'font-size' (aka
	    'FontSize') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'part-name-text' (aka 'PartNameText')
	    attributeGroup. **/
	void MxCxSmpPartName::setIsFontSizePresent( const bool& value_in )
	{
		myImpl->setIsFontSizePresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'font-weight' (aka
	    'FontWeight') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'part-name-text' (aka 'PartNameText')
	    attributeGroup. **/
	void MxCxSmpPartName::setIsFontWeightPresent( const bool& value_in )
	{
		myImpl->setIsFontWeightPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'color' (aka 'Color')
	    attribute is (or will be) present in the MusicXML document. This attribute
	    is a member of the 'part-name-text' (aka 'PartNameText') attributeGroup. **/
	void MxCxSmpPartName::setIsColorPresent( const bool& value_in )
	{
		myImpl->setIsColorPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'print-object' (aka
	    'PrintObject') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'part-name-text' (aka 'PartNameText')
	    attributeGroup. **/
	void MxCxSmpPartName::setIsPrintObjectPresent( const bool& value_in )
	{
		myImpl->setIsPrintObjectPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'justify' (aka 'Justify')
	    attribute is (or will be) present in the MusicXML document. This attribute
	    is a member of the 'part-name-text' (aka 'PartNameText') attributeGroup. **/
	void MxCxSmpPartName::setIsJustifyPresent( const bool& value_in )
	{
		myImpl->setIsJustifyPresent( value_in );
	}

/* Stringing and Streaming ------------------------------------------------------------ */

	/** Returns the xml representation of the object's value. **/
	std::string MxCxSmpPartName::toString() const
	{
		return myImpl->toString();
	}

	/** Returns the xml representation of the object's value. **/
	std::ostream& MxCxSmpPartName::stream( std::ostream& os_out ) const
	{
		return myImpl->stream( os_out );
	}

/* Get IsAttributeDefaultDefined Values ----------------------------------------------- */

	/** Indicates whether or not the 'default-x' (aka 'DefaultX') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'part-name-text'
	    (aka 'PartNameText') attributeGroup. **/
	bool MxCxSmpPartName::getIsDefaultXDefaultDefined() const
	{
		return myImpl->getIsDefaultXDefaultDefined();
	}

	/** Indicates whether or not the 'default-y' (aka 'DefaultY') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'part-name-text'
	    (aka 'PartNameText') attributeGroup. **/
	bool MxCxSmpPartName::getIsDefaultYDefaultDefined() const
	{
		return myImpl->getIsDefaultYDefaultDefined();
	}

	/** Indicates whether or not the 'relative-x' (aka 'RelativeX') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'part-name-text'
	    (aka 'PartNameText') attributeGroup. **/
	bool MxCxSmpPartName::getIsRelativeXDefaultDefined() const
	{
		return myImpl->getIsRelativeXDefaultDefined();
	}

	/** Indicates whether or not the 'relative-y' (aka 'RelativeY') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'part-name-text'
	    (aka 'PartNameText') attributeGroup. **/
	bool MxCxSmpPartName::getIsRelativeYDefaultDefined() const
	{
		return myImpl->getIsRelativeYDefaultDefined();
	}

	/** Indicates whether or not the 'font-family' (aka 'FontFamily') has a
	    default value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'part-name-text'
	    (aka 'PartNameText') attributeGroup. **/
	bool MxCxSmpPartName::getIsFontFamilyDefaultDefined() const
	{
		return myImpl->getIsFontFamilyDefaultDefined();
	}

	/** Indicates whether or not the 'font-style' (aka 'FontStyle') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'part-name-text'
	    (aka 'PartNameText') attributeGroup. **/
	bool MxCxSmpPartName::getIsFontStyleDefaultDefined() const
	{
		return myImpl->getIsFontStyleDefaultDefined();
	}

	/** Indicates whether or not the 'font-size' (aka 'FontSize') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'part-name-text'
	    (aka 'PartNameText') attributeGroup. **/
	bool MxCxSmpPartName::getIsFontSizeDefaultDefined() const
	{
		return myImpl->getIsFontSizeDefaultDefined();
	}

	/** Indicates whether or not the 'font-weight' (aka 'FontWeight') has a
	    default value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'part-name-text'
	    (aka 'PartNameText') attributeGroup. **/
	bool MxCxSmpPartName::getIsFontWeightDefaultDefined() const
	{
		return myImpl->getIsFontWeightDefaultDefined();
	}

	/** Indicates whether or not the 'color' (aka 'Color') has a default value
	    defined in the MusicXML xsd specification (either explicitly or in
	    the documentation). This attribute is a member of the 'part-name-text'
	    (aka 'PartNameText') attributeGroup. **/
	bool MxCxSmpPartName::getIsColorDefaultDefined() const
	{
		return myImpl->getIsColorDefaultDefined();
	}

	/** Indicates whether or not the 'print-object' (aka 'PrintObject') has
	    a default value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'part-name-text'
	    (aka 'PartNameText') attributeGroup. **/
	bool MxCxSmpPartName::getIsPrintObjectDefaultDefined() const
	{
		return myImpl->getIsPrintObjectDefaultDefined();
	}

	/** Indicates whether or not the 'justify' (aka 'Justify') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'part-name-text'
	    (aka 'PartNameText') attributeGroup. **/
	bool MxCxSmpPartName::getIsJustifyDefaultDefined() const
	{
		return myImpl->getIsJustifyDefaultDefined();
	}

/* Get AttributeDefaultValue ---------------------------------------------------------- */

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'default-x' (aka 'DefaultX') attribute. This attribute is a member
	    of the 'part-name-text' (aka 'PartNameText') attributeGroup. **/
	MxNumberTenths MxCxSmpPartName::getDefaultXDefaultValue() const
	{
		return myImpl->getDefaultXDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'default-y' (aka 'DefaultY') attribute. This attribute is a member
	    of the 'part-name-text' (aka 'PartNameText') attributeGroup. **/
	MxNumberTenths MxCxSmpPartName::getDefaultYDefaultValue() const
	{
		return myImpl->getDefaultYDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'relative-x' (aka 'RelativeX') attribute. This attribute is a member
	    of the 'part-name-text' (aka 'PartNameText') attributeGroup. **/
	MxNumberTenths MxCxSmpPartName::getRelativeXDefaultValue() const
	{
		return myImpl->getRelativeXDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'relative-y' (aka 'RelativeY') attribute. This attribute is a member
	    of the 'part-name-text' (aka 'PartNameText') attributeGroup. **/
	MxNumberTenths MxCxSmpPartName::getRelativeYDefaultValue() const
	{
		return myImpl->getRelativeYDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'font-family' (aka 'FontFamily') attribute. This attribute is a
	    member of the 'part-name-text' (aka 'PartNameText') attributeGroup. **/
	MxCommaSeparatedText MxCxSmpPartName::getFontFamilyDefaultValue() const
	{
		return myImpl->getFontFamilyDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'font-style' (aka 'FontStyle') attribute. This attribute is a member
	    of the 'part-name-text' (aka 'PartNameText') attributeGroup. **/
	MxEnumFontStyle MxCxSmpPartName::getFontStyleDefaultValue() const
	{
		return myImpl->getFontStyleDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'font-size' (aka 'FontSize') attribute. This attribute is a member
	    of the 'part-name-text' (aka 'PartNameText') attributeGroup. **/
	MxFontSize MxCxSmpPartName::getFontSizeDefaultValue() const
	{
		return myImpl->getFontSizeDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'font-weight' (aka 'FontWeight') attribute. This attribute is a
	    member of the 'part-name-text' (aka 'PartNameText') attributeGroup. **/
	MxEnumFontWeight MxCxSmpPartName::getFontWeightDefaultValue() const
	{
		return myImpl->getFontWeightDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'color' (aka 'Color') attribute. This attribute is a member of
	    the 'part-name-text' (aka 'PartNameText') attributeGroup. **/
	MxColor MxCxSmpPartName::getColorDefaultValue() const
	{
		return myImpl->getColorDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'print-object' (aka 'PrintObject') attribute. This attribute is
	    a member of the 'part-name-text' (aka 'PartNameText') attributeGroup. **/
	MxEnumYesNo MxCxSmpPartName::getPrintObjectDefaultValue() const
	{
		return myImpl->getPrintObjectDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'justify' (aka 'Justify') attribute. This attribute is a member
	    of the 'part-name-text' (aka 'PartNameText') attributeGroup. **/
	MxEnumLeftCenterRight MxCxSmpPartName::getJustifyDefaultValue() const
	{
		return myImpl->getJustifyDefaultValue();
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

