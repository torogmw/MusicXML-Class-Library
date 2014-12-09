/* See MusicXML License at the bottom of this code page. */

/**
  * @file       MxCxSmpFormattedText.cpp
  * @class      lexicon::MxCxSmpFormattedText
  * @author     Matthew James Briggs
  * @email      matthew.james.briggs@gmail.com
  * @url        http://matthewjamesbriggs.com
  * @date       2014-12-02 17:31:48
  * @project    Lexicon
  * @version    1.0
  * @musicxmlid 2407
  * 
  * @brief The 'FormattedText' class serves as a binding for the MusicXml 'formatted-text'
  * complexType.
  * 
 **/

#include "MxCxSmpFormattedText.h"
#include <sstream>
#include "_hidden_attributeStream.h"
#include "MxAttrGrpTextFormatting.h"

/* Impl ------------------------------------------------------------------------------- */

namespace lexicon
{
	struct MxCxSmpFormattedText::Impl
	{
		Impl( const std::string& elementName, const XsString& value_in )
		:myElementName( elementName )
		,myValue( value_in )
		,myMxAttrGrpTextFormatting()
		{}

	private:
		std::string myElementName;
		XsString myValue;
		MxAttrGrpTextFormatting myMxAttrGrpTextFormatting;

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

		/** Returns the internal value of the 'justify' (aka 'Justify') attribute.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		MxEnumLeftCenterRight getJustify() const
		{
			return myMxAttrGrpTextFormatting.getJustify();
		}

		/** Returns the internal value of the 'default-x' (aka 'DefaultX') attribute.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		MxNumberTenths getDefaultX() const
		{
			return myMxAttrGrpTextFormatting.getDefaultX();
		}

		/** Returns the internal value of the 'default-y' (aka 'DefaultY') attribute.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		MxNumberTenths getDefaultY() const
		{
			return myMxAttrGrpTextFormatting.getDefaultY();
		}

		/** Returns the internal value of the 'relative-x' (aka 'RelativeX') attribute.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		MxNumberTenths getRelativeX() const
		{
			return myMxAttrGrpTextFormatting.getRelativeX();
		}

		/** Returns the internal value of the 'relative-y' (aka 'RelativeY') attribute.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		MxNumberTenths getRelativeY() const
		{
			return myMxAttrGrpTextFormatting.getRelativeY();
		}

		/** Returns the internal value of the 'font-family' (aka 'FontFamily')
		    attribute. This attribute is a member of the 'text-formatting' (aka
		    'TextFormatting') attributeGroup. **/
		MxCommaSeparatedText getFontFamily() const
		{
			return myMxAttrGrpTextFormatting.getFontFamily();
		}

		/** Returns the internal value of the 'font-style' (aka 'FontStyle') attribute.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		MxEnumFontStyle getFontStyle() const
		{
			return myMxAttrGrpTextFormatting.getFontStyle();
		}

		/** Returns the internal value of the 'font-size' (aka 'FontSize') attribute.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		MxFontSize getFontSize() const
		{
			return myMxAttrGrpTextFormatting.getFontSize();
		}

		/** Returns the internal value of the 'font-weight' (aka 'FontWeight')
		    attribute. This attribute is a member of the 'text-formatting' (aka
		    'TextFormatting') attributeGroup. **/
		MxEnumFontWeight getFontWeight() const
		{
			return myMxAttrGrpTextFormatting.getFontWeight();
		}

		/** Returns the internal value of the 'color' (aka 'Color') attribute.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		MxColor getColor() const
		{
			return myMxAttrGrpTextFormatting.getColor();
		}

		/** Returns the internal value of the 'halign' (aka 'Halign') attribute.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		MxEnumLeftCenterRight getHalign() const
		{
			return myMxAttrGrpTextFormatting.getHalign();
		}

		/** Returns the internal value of the 'valign' (aka 'Valign') attribute.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		MxEnumValign getValign() const
		{
			return myMxAttrGrpTextFormatting.getValign();
		}

		/** Returns the internal value of the 'underline' (aka 'Underline') attribute.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		MxNumberNumberOfLines getUnderline() const
		{
			return myMxAttrGrpTextFormatting.getUnderline();
		}

		/** Returns the internal value of the 'overline' (aka 'Overline') attribute.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		MxNumberNumberOfLines getOverline() const
		{
			return myMxAttrGrpTextFormatting.getOverline();
		}

		/** Returns the internal value of the 'line-through' (aka 'LineThrough')
		    attribute. This attribute is a member of the 'text-formatting' (aka
		    'TextFormatting') attributeGroup. **/
		MxNumberNumberOfLines getLineThrough() const
		{
			return myMxAttrGrpTextFormatting.getLineThrough();
		}

		/** Returns the internal value of the 'rotation' (aka 'Rotation') attribute.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		MxNumberRotationDegrees getRotation() const
		{
			return myMxAttrGrpTextFormatting.getRotation();
		}

		/** Returns the internal value of the 'letter-spacing' (aka 'LetterSpacing')
		    attribute. This attribute is a member of the 'text-formatting' (aka
		    'TextFormatting') attributeGroup. **/
		MxNumberOrNormal getLetterSpacing() const
		{
			return myMxAttrGrpTextFormatting.getLetterSpacing();
		}

		/** Returns the internal value of the 'line-height' (aka 'LineHeight')
		    attribute. This attribute is a member of the 'text-formatting' (aka
		    'TextFormatting') attributeGroup. **/
		MxNumberOrNormal getLineHeight() const
		{
			return myMxAttrGrpTextFormatting.getLineHeight();
		}

		/** Returns the internal value of the 'xml:lang' (aka 'XmlLang') attribute.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		XmlLang getXmlLang() const
		{
			return myMxAttrGrpTextFormatting.getXmlLang();
		}

		/** Returns the internal value of the 'xml:space' (aka 'XmlSpace') attribute.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		XmlSpace getXmlSpace() const
		{
			return myMxAttrGrpTextFormatting.getXmlSpace();
		}

		/** Returns the internal value of the 'dir' (aka 'Dir') attribute. This
		    attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		MxEnumTextDirection getDir() const
		{
			return myMxAttrGrpTextFormatting.getDir();
		}

		/** Returns the internal value of the 'enclosure' (aka 'Enclosure') attribute.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		MxEnumEnclosureShape getEnclosure() const
		{
			return myMxAttrGrpTextFormatting.getEnclosure();
		}

/* Set Attribute Values --------------------------------------------------------------- */

		/** Sets the internal value of the 'justify' (aka 'Justify') attribute.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		void setJustify( const MxEnumLeftCenterRight& value_in )
		{
			myMxAttrGrpTextFormatting.setJustify( value_in );
		}

		/** Sets the internal value of the 'default-x' (aka 'DefaultX') attribute.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		void setDefaultX( const MxNumberTenths& value_in )
		{
			myMxAttrGrpTextFormatting.setDefaultX( value_in );
		}

		/** Sets the internal value of the 'default-y' (aka 'DefaultY') attribute.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		void setDefaultY( const MxNumberTenths& value_in )
		{
			myMxAttrGrpTextFormatting.setDefaultY( value_in );
		}

		/** Sets the internal value of the 'relative-x' (aka 'RelativeX') attribute.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		void setRelativeX( const MxNumberTenths& value_in )
		{
			myMxAttrGrpTextFormatting.setRelativeX( value_in );
		}

		/** Sets the internal value of the 'relative-y' (aka 'RelativeY') attribute.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		void setRelativeY( const MxNumberTenths& value_in )
		{
			myMxAttrGrpTextFormatting.setRelativeY( value_in );
		}

		/** Sets the internal value of the 'font-family' (aka 'FontFamily') attribute.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		void setFontFamily( const MxCommaSeparatedText& value_in )
		{
			myMxAttrGrpTextFormatting.setFontFamily( value_in );
		}

		/** Sets the internal value of the 'font-style' (aka 'FontStyle') attribute.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		void setFontStyle( const MxEnumFontStyle& value_in )
		{
			myMxAttrGrpTextFormatting.setFontStyle( value_in );
		}

		/** Sets the internal value of the 'font-size' (aka 'FontSize') attribute.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		void setFontSize( const MxFontSize& value_in )
		{
			myMxAttrGrpTextFormatting.setFontSize( value_in );
		}

		/** Sets the internal value of the 'font-weight' (aka 'FontWeight') attribute.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		void setFontWeight( const MxEnumFontWeight& value_in )
		{
			myMxAttrGrpTextFormatting.setFontWeight( value_in );
		}

		/** Sets the internal value of the 'color' (aka 'Color') attribute. This
		    attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		void setColor( const MxColor& value_in )
		{
			myMxAttrGrpTextFormatting.setColor( value_in );
		}

		/** Sets the internal value of the 'halign' (aka 'Halign') attribute. This
		    attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		void setHalign( const MxEnumLeftCenterRight& value_in )
		{
			myMxAttrGrpTextFormatting.setHalign( value_in );
		}

		/** Sets the internal value of the 'valign' (aka 'Valign') attribute. This
		    attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		void setValign( const MxEnumValign& value_in )
		{
			myMxAttrGrpTextFormatting.setValign( value_in );
		}

		/** Sets the internal value of the 'underline' (aka 'Underline') attribute.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		void setUnderline( const MxNumberNumberOfLines& value_in )
		{
			myMxAttrGrpTextFormatting.setUnderline( value_in );
		}

		/** Sets the internal value of the 'overline' (aka 'Overline') attribute.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		void setOverline( const MxNumberNumberOfLines& value_in )
		{
			myMxAttrGrpTextFormatting.setOverline( value_in );
		}

		/** Sets the internal value of the 'line-through' (aka 'LineThrough') attribute.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		void setLineThrough( const MxNumberNumberOfLines& value_in )
		{
			myMxAttrGrpTextFormatting.setLineThrough( value_in );
		}

		/** Sets the internal value of the 'rotation' (aka 'Rotation') attribute.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		void setRotation( const MxNumberRotationDegrees& value_in )
		{
			myMxAttrGrpTextFormatting.setRotation( value_in );
		}

		/** Sets the internal value of the 'letter-spacing' (aka 'LetterSpacing')
		    attribute. This attribute is a member of the 'text-formatting' (aka
		    'TextFormatting') attributeGroup. **/
		void setLetterSpacing( const MxNumberOrNormal& value_in )
		{
			myMxAttrGrpTextFormatting.setLetterSpacing( value_in );
		}

		/** Sets the internal value of the 'line-height' (aka 'LineHeight') attribute.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		void setLineHeight( const MxNumberOrNormal& value_in )
		{
			myMxAttrGrpTextFormatting.setLineHeight( value_in );
		}

		/** Sets the internal value of the 'xml:lang' (aka 'XmlLang') attribute.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		void setXmlLang( const XmlLang& value_in )
		{
			myMxAttrGrpTextFormatting.setXmlLang( value_in );
		}

		/** Sets the internal value of the 'xml:space' (aka 'XmlSpace') attribute.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		void setXmlSpace( const XmlSpace& value_in )
		{
			myMxAttrGrpTextFormatting.setXmlSpace( value_in );
		}

		/** Sets the internal value of the 'dir' (aka 'Dir') attribute. This attribute
		    is a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		void setDir( const MxEnumTextDirection& value_in )
		{
			myMxAttrGrpTextFormatting.setDir( value_in );
		}

		/** Sets the internal value of the 'enclosure' (aka 'Enclosure') attribute.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		void setEnclosure( const MxEnumEnclosureShape& value_in )
		{
			myMxAttrGrpTextFormatting.setEnclosure( value_in );
		}

/* Get IsAttributeRequired Values ----------------------------------------------------- */

		/** Indicates whether or not the 'justify' (aka 'Justify') attribute is
		    required to be present in a MusicXML document. This attribute is a
		    member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsJustifyRequired() const
		{
			return myMxAttrGrpTextFormatting.getIsJustifyRequired();
		}

		/** Indicates whether or not the 'default-x' (aka 'DefaultX') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsDefaultXRequired() const
		{
			return myMxAttrGrpTextFormatting.getIsDefaultXRequired();
		}

		/** Indicates whether or not the 'default-y' (aka 'DefaultY') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsDefaultYRequired() const
		{
			return myMxAttrGrpTextFormatting.getIsDefaultYRequired();
		}

		/** Indicates whether or not the 'relative-x' (aka 'RelativeX') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsRelativeXRequired() const
		{
			return myMxAttrGrpTextFormatting.getIsRelativeXRequired();
		}

		/** Indicates whether or not the 'relative-y' (aka 'RelativeY') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsRelativeYRequired() const
		{
			return myMxAttrGrpTextFormatting.getIsRelativeYRequired();
		}

		/** Indicates whether or not the 'font-family' (aka 'FontFamily') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsFontFamilyRequired() const
		{
			return myMxAttrGrpTextFormatting.getIsFontFamilyRequired();
		}

		/** Indicates whether or not the 'font-style' (aka 'FontStyle') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsFontStyleRequired() const
		{
			return myMxAttrGrpTextFormatting.getIsFontStyleRequired();
		}

		/** Indicates whether or not the 'font-size' (aka 'FontSize') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsFontSizeRequired() const
		{
			return myMxAttrGrpTextFormatting.getIsFontSizeRequired();
		}

		/** Indicates whether or not the 'font-weight' (aka 'FontWeight') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsFontWeightRequired() const
		{
			return myMxAttrGrpTextFormatting.getIsFontWeightRequired();
		}

		/** Indicates whether or not the 'color' (aka 'Color') attribute is required
		    to be present in a MusicXML document. This attribute is a member of
		    the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsColorRequired() const
		{
			return myMxAttrGrpTextFormatting.getIsColorRequired();
		}

		/** Indicates whether or not the 'halign' (aka 'Halign') attribute is required
		    to be present in a MusicXML document. This attribute is a member of
		    the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsHalignRequired() const
		{
			return myMxAttrGrpTextFormatting.getIsHalignRequired();
		}

		/** Indicates whether or not the 'valign' (aka 'Valign') attribute is required
		    to be present in a MusicXML document. This attribute is a member of
		    the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsValignRequired() const
		{
			return myMxAttrGrpTextFormatting.getIsValignRequired();
		}

		/** Indicates whether or not the 'underline' (aka 'Underline') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsUnderlineRequired() const
		{
			return myMxAttrGrpTextFormatting.getIsUnderlineRequired();
		}

		/** Indicates whether or not the 'overline' (aka 'Overline') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsOverlineRequired() const
		{
			return myMxAttrGrpTextFormatting.getIsOverlineRequired();
		}

		/** Indicates whether or not the 'line-through' (aka 'LineThrough') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsLineThroughRequired() const
		{
			return myMxAttrGrpTextFormatting.getIsLineThroughRequired();
		}

		/** Indicates whether or not the 'rotation' (aka 'Rotation') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsRotationRequired() const
		{
			return myMxAttrGrpTextFormatting.getIsRotationRequired();
		}

		/** Indicates whether or not the 'letter-spacing' (aka 'LetterSpacing')
		    attribute is required to be present in a MusicXML document. This attribute
		    is a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsLetterSpacingRequired() const
		{
			return myMxAttrGrpTextFormatting.getIsLetterSpacingRequired();
		}

		/** Indicates whether or not the 'line-height' (aka 'LineHeight') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsLineHeightRequired() const
		{
			return myMxAttrGrpTextFormatting.getIsLineHeightRequired();
		}

		/** Indicates whether or not the 'xml:lang' (aka 'XmlLang') attribute is
		    required to be present in a MusicXML document. This attribute is a
		    member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsXmlLangRequired() const
		{
			return myMxAttrGrpTextFormatting.getIsXmlLangRequired();
		}

		/** Indicates whether or not the 'xml:space' (aka 'XmlSpace') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsXmlSpaceRequired() const
		{
			return myMxAttrGrpTextFormatting.getIsXmlSpaceRequired();
		}

		/** Indicates whether or not the 'dir' (aka 'Dir') attribute is required
		    to be present in a MusicXML document. This attribute is a member of
		    the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsDirRequired() const
		{
			return myMxAttrGrpTextFormatting.getIsDirRequired();
		}

		/** Indicates whether or not the 'enclosure' (aka 'Enclosure') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsEnclosureRequired() const
		{
			return myMxAttrGrpTextFormatting.getIsEnclosureRequired();
		}

/* Get IsAttributePresent Values ------------------------------------------------------ */

		/** Indicates whether or not the 'justify' (aka 'Justify') attribute is
		    (or will be) present in the MusicXML document. This attribute is a
		    member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsJustifyPresent() const
		{
			return myMxAttrGrpTextFormatting.getIsJustifyPresent();
		}

		/** Indicates whether or not the 'default-x' (aka 'DefaultX') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsDefaultXPresent() const
		{
			return myMxAttrGrpTextFormatting.getIsDefaultXPresent();
		}

		/** Indicates whether or not the 'default-y' (aka 'DefaultY') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsDefaultYPresent() const
		{
			return myMxAttrGrpTextFormatting.getIsDefaultYPresent();
		}

		/** Indicates whether or not the 'relative-x' (aka 'RelativeX') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsRelativeXPresent() const
		{
			return myMxAttrGrpTextFormatting.getIsRelativeXPresent();
		}

		/** Indicates whether or not the 'relative-y' (aka 'RelativeY') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsRelativeYPresent() const
		{
			return myMxAttrGrpTextFormatting.getIsRelativeYPresent();
		}

		/** Indicates whether or not the 'font-family' (aka 'FontFamily') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsFontFamilyPresent() const
		{
			return myMxAttrGrpTextFormatting.getIsFontFamilyPresent();
		}

		/** Indicates whether or not the 'font-style' (aka 'FontStyle') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsFontStylePresent() const
		{
			return myMxAttrGrpTextFormatting.getIsFontStylePresent();
		}

		/** Indicates whether or not the 'font-size' (aka 'FontSize') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsFontSizePresent() const
		{
			return myMxAttrGrpTextFormatting.getIsFontSizePresent();
		}

		/** Indicates whether or not the 'font-weight' (aka 'FontWeight') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsFontWeightPresent() const
		{
			return myMxAttrGrpTextFormatting.getIsFontWeightPresent();
		}

		/** Indicates whether or not the 'color' (aka 'Color') attribute is (or
		    will be) present in the MusicXML document. This attribute is a member
		    of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsColorPresent() const
		{
			return myMxAttrGrpTextFormatting.getIsColorPresent();
		}

		/** Indicates whether or not the 'halign' (aka 'Halign') attribute is (or
		    will be) present in the MusicXML document. This attribute is a member
		    of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsHalignPresent() const
		{
			return myMxAttrGrpTextFormatting.getIsHalignPresent();
		}

		/** Indicates whether or not the 'valign' (aka 'Valign') attribute is (or
		    will be) present in the MusicXML document. This attribute is a member
		    of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsValignPresent() const
		{
			return myMxAttrGrpTextFormatting.getIsValignPresent();
		}

		/** Indicates whether or not the 'underline' (aka 'Underline') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsUnderlinePresent() const
		{
			return myMxAttrGrpTextFormatting.getIsUnderlinePresent();
		}

		/** Indicates whether or not the 'overline' (aka 'Overline') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsOverlinePresent() const
		{
			return myMxAttrGrpTextFormatting.getIsOverlinePresent();
		}

		/** Indicates whether or not the 'line-through' (aka 'LineThrough') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsLineThroughPresent() const
		{
			return myMxAttrGrpTextFormatting.getIsLineThroughPresent();
		}

		/** Indicates whether or not the 'rotation' (aka 'Rotation') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsRotationPresent() const
		{
			return myMxAttrGrpTextFormatting.getIsRotationPresent();
		}

		/** Indicates whether or not the 'letter-spacing' (aka 'LetterSpacing')
		    attribute is (or will be) present in the MusicXML document. This attribute
		    is a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsLetterSpacingPresent() const
		{
			return myMxAttrGrpTextFormatting.getIsLetterSpacingPresent();
		}

		/** Indicates whether or not the 'line-height' (aka 'LineHeight') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsLineHeightPresent() const
		{
			return myMxAttrGrpTextFormatting.getIsLineHeightPresent();
		}

		/** Indicates whether or not the 'xml:lang' (aka 'XmlLang') attribute is
		    (or will be) present in the MusicXML document. This attribute is a
		    member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsXmlLangPresent() const
		{
			return myMxAttrGrpTextFormatting.getIsXmlLangPresent();
		}

		/** Indicates whether or not the 'xml:space' (aka 'XmlSpace') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsXmlSpacePresent() const
		{
			return myMxAttrGrpTextFormatting.getIsXmlSpacePresent();
		}

		/** Indicates whether or not the 'dir' (aka 'Dir') attribute is (or will
		    be) present in the MusicXML document. This attribute is a member of
		    the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsDirPresent() const
		{
			return myMxAttrGrpTextFormatting.getIsDirPresent();
		}

		/** Indicates whether or not the 'enclosure' (aka 'Enclosure') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsEnclosurePresent() const
		{
			return myMxAttrGrpTextFormatting.getIsEnclosurePresent();
		}

/* Set IsAttributePresent Values ------------------------------------------------------ */

		/** Sets the value which indicates whether or not the 'justify' (aka 'Justify')
		    attribute is (or will be) present in the MusicXML document. This attribute
		    is a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		void setIsJustifyPresent( const bool& value_in )
		{
			myMxAttrGrpTextFormatting.setIsJustifyPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'default-x' (aka
		    'DefaultX') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		void setIsDefaultXPresent( const bool& value_in )
		{
			myMxAttrGrpTextFormatting.setIsDefaultXPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'default-y' (aka
		    'DefaultY') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		void setIsDefaultYPresent( const bool& value_in )
		{
			myMxAttrGrpTextFormatting.setIsDefaultYPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'relative-x' (aka
		    'RelativeX') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		void setIsRelativeXPresent( const bool& value_in )
		{
			myMxAttrGrpTextFormatting.setIsRelativeXPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'relative-y' (aka
		    'RelativeY') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		void setIsRelativeYPresent( const bool& value_in )
		{
			myMxAttrGrpTextFormatting.setIsRelativeYPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'font-family' (aka
		    'FontFamily') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		void setIsFontFamilyPresent( const bool& value_in )
		{
			myMxAttrGrpTextFormatting.setIsFontFamilyPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'font-style' (aka
		    'FontStyle') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		void setIsFontStylePresent( const bool& value_in )
		{
			myMxAttrGrpTextFormatting.setIsFontStylePresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'font-size' (aka
		    'FontSize') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		void setIsFontSizePresent( const bool& value_in )
		{
			myMxAttrGrpTextFormatting.setIsFontSizePresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'font-weight' (aka
		    'FontWeight') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		void setIsFontWeightPresent( const bool& value_in )
		{
			myMxAttrGrpTextFormatting.setIsFontWeightPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'color' (aka 'Color')
		    attribute is (or will be) present in the MusicXML document. This attribute
		    is a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		void setIsColorPresent( const bool& value_in )
		{
			myMxAttrGrpTextFormatting.setIsColorPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'halign' (aka 'Halign')
		    attribute is (or will be) present in the MusicXML document. This attribute
		    is a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		void setIsHalignPresent( const bool& value_in )
		{
			myMxAttrGrpTextFormatting.setIsHalignPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'valign' (aka 'Valign')
		    attribute is (or will be) present in the MusicXML document. This attribute
		    is a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		void setIsValignPresent( const bool& value_in )
		{
			myMxAttrGrpTextFormatting.setIsValignPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'underline' (aka
		    'Underline') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		void setIsUnderlinePresent( const bool& value_in )
		{
			myMxAttrGrpTextFormatting.setIsUnderlinePresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'overline' (aka 'Overline')
		    attribute is (or will be) present in the MusicXML document. This attribute
		    is a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		void setIsOverlinePresent( const bool& value_in )
		{
			myMxAttrGrpTextFormatting.setIsOverlinePresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'line-through' (aka
		    'LineThrough') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		void setIsLineThroughPresent( const bool& value_in )
		{
			myMxAttrGrpTextFormatting.setIsLineThroughPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'rotation' (aka 'Rotation')
		    attribute is (or will be) present in the MusicXML document. This attribute
		    is a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		void setIsRotationPresent( const bool& value_in )
		{
			myMxAttrGrpTextFormatting.setIsRotationPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'letter-spacing'
		    (aka 'LetterSpacing') attribute is (or will be) present in the MusicXML
		    document. This attribute is a member of the 'text-formatting' (aka
		    'TextFormatting') attributeGroup. **/
		void setIsLetterSpacingPresent( const bool& value_in )
		{
			myMxAttrGrpTextFormatting.setIsLetterSpacingPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'line-height' (aka
		    'LineHeight') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		void setIsLineHeightPresent( const bool& value_in )
		{
			myMxAttrGrpTextFormatting.setIsLineHeightPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'xml:lang' (aka 'XmlLang')
		    attribute is (or will be) present in the MusicXML document. This attribute
		    is a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		void setIsXmlLangPresent( const bool& value_in )
		{
			myMxAttrGrpTextFormatting.setIsXmlLangPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'xml:space' (aka
		    'XmlSpace') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		void setIsXmlSpacePresent( const bool& value_in )
		{
			myMxAttrGrpTextFormatting.setIsXmlSpacePresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'dir' (aka 'Dir')
		    attribute is (or will be) present in the MusicXML document. This attribute
		    is a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		void setIsDirPresent( const bool& value_in )
		{
			myMxAttrGrpTextFormatting.setIsDirPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'enclosure' (aka
		    'Enclosure') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		void setIsEnclosurePresent( const bool& value_in )
		{
			myMxAttrGrpTextFormatting.setIsEnclosurePresent( value_in );
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
			hidden::attributeStream( getIsJustifyPresent(), "justify", getJustify().toString(), os_out, isFirst );
			hidden::attributeStream( getIsDefaultXPresent(), "default-x", getDefaultX().toString(), os_out, isFirst );
			hidden::attributeStream( getIsDefaultYPresent(), "default-y", getDefaultY().toString(), os_out, isFirst );
			hidden::attributeStream( getIsRelativeXPresent(), "relative-x", getRelativeX().toString(), os_out, isFirst );
			hidden::attributeStream( getIsRelativeYPresent(), "relative-y", getRelativeY().toString(), os_out, isFirst );
			hidden::attributeStream( getIsFontFamilyPresent(), "font-family", getFontFamily().toString(), os_out, isFirst );
			hidden::attributeStream( getIsFontStylePresent(), "font-style", getFontStyle().toString(), os_out, isFirst );
			hidden::attributeStream( getIsFontSizePresent(), "font-size", getFontSize().toString(), os_out, isFirst );
			hidden::attributeStream( getIsFontWeightPresent(), "font-weight", getFontWeight().toString(), os_out, isFirst );
			hidden::attributeStream( getIsColorPresent(), "color", getColor().toString(), os_out, isFirst );
			hidden::attributeStream( getIsHalignPresent(), "halign", getHalign().toString(), os_out, isFirst );
			hidden::attributeStream( getIsValignPresent(), "valign", getValign().toString(), os_out, isFirst );
			hidden::attributeStream( getIsUnderlinePresent(), "underline", getUnderline().toString(), os_out, isFirst );
			hidden::attributeStream( getIsOverlinePresent(), "overline", getOverline().toString(), os_out, isFirst );
			hidden::attributeStream( getIsLineThroughPresent(), "line-through", getLineThrough().toString(), os_out, isFirst );
			hidden::attributeStream( getIsRotationPresent(), "rotation", getRotation().toString(), os_out, isFirst );
			hidden::attributeStream( getIsLetterSpacingPresent(), "letter-spacing", getLetterSpacing().toString(), os_out, isFirst );
			hidden::attributeStream( getIsLineHeightPresent(), "line-height", getLineHeight().toString(), os_out, isFirst );
			hidden::attributeStream( getIsXmlLangPresent(), "xml:lang", getXmlLang().toString(), os_out, isFirst );
			hidden::attributeStream( getIsXmlSpacePresent(), "xml:space", getXmlSpace().toString(), os_out, isFirst );
			hidden::attributeStream( getIsDirPresent(), "dir", getDir().toString(), os_out, isFirst );
			hidden::attributeStream( getIsEnclosurePresent(), "enclosure", getEnclosure().toString(), os_out, isFirst );
			os_out << '>';
			os_out << getValue().toString();
			os_out << "</";
			os_out << getElementName();
			os_out << '>';
			return os_out;
		}

/* Get IsAttributeDefaultDefined Values ----------------------------------------------- */

		/** Indicates whether or not the 'justify' (aka 'Justify') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'text-formatting'
		    (aka 'TextFormatting') attributeGroup. **/
		bool getIsJustifyDefaultDefined() const
		{
			return myMxAttrGrpTextFormatting.getIsJustifyDefaultDefined();
		}

		/** Indicates whether or not the 'default-x' (aka 'DefaultX') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'text-formatting'
		    (aka 'TextFormatting') attributeGroup. **/
		bool getIsDefaultXDefaultDefined() const
		{
			return myMxAttrGrpTextFormatting.getIsDefaultXDefaultDefined();
		}

		/** Indicates whether or not the 'default-y' (aka 'DefaultY') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'text-formatting'
		    (aka 'TextFormatting') attributeGroup. **/
		bool getIsDefaultYDefaultDefined() const
		{
			return myMxAttrGrpTextFormatting.getIsDefaultYDefaultDefined();
		}

		/** Indicates whether or not the 'relative-x' (aka 'RelativeX') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'text-formatting'
		    (aka 'TextFormatting') attributeGroup. **/
		bool getIsRelativeXDefaultDefined() const
		{
			return myMxAttrGrpTextFormatting.getIsRelativeXDefaultDefined();
		}

		/** Indicates whether or not the 'relative-y' (aka 'RelativeY') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'text-formatting'
		    (aka 'TextFormatting') attributeGroup. **/
		bool getIsRelativeYDefaultDefined() const
		{
			return myMxAttrGrpTextFormatting.getIsRelativeYDefaultDefined();
		}

		/** Indicates whether or not the 'font-family' (aka 'FontFamily') has a
		    default value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'text-formatting'
		    (aka 'TextFormatting') attributeGroup. **/
		bool getIsFontFamilyDefaultDefined() const
		{
			return myMxAttrGrpTextFormatting.getIsFontFamilyDefaultDefined();
		}

		/** Indicates whether or not the 'font-style' (aka 'FontStyle') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'text-formatting'
		    (aka 'TextFormatting') attributeGroup. **/
		bool getIsFontStyleDefaultDefined() const
		{
			return myMxAttrGrpTextFormatting.getIsFontStyleDefaultDefined();
		}

		/** Indicates whether or not the 'font-size' (aka 'FontSize') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'text-formatting'
		    (aka 'TextFormatting') attributeGroup. **/
		bool getIsFontSizeDefaultDefined() const
		{
			return myMxAttrGrpTextFormatting.getIsFontSizeDefaultDefined();
		}

		/** Indicates whether or not the 'font-weight' (aka 'FontWeight') has a
		    default value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'text-formatting'
		    (aka 'TextFormatting') attributeGroup. **/
		bool getIsFontWeightDefaultDefined() const
		{
			return myMxAttrGrpTextFormatting.getIsFontWeightDefaultDefined();
		}

		/** Indicates whether or not the 'color' (aka 'Color') has a default value
		    defined in the MusicXML xsd specification (either explicitly or in
		    the documentation). This attribute is a member of the 'text-formatting'
		    (aka 'TextFormatting') attributeGroup. **/
		bool getIsColorDefaultDefined() const
		{
			return myMxAttrGrpTextFormatting.getIsColorDefaultDefined();
		}

		/** Indicates whether or not the 'halign' (aka 'Halign') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'text-formatting'
		    (aka 'TextFormatting') attributeGroup. **/
		bool getIsHalignDefaultDefined() const
		{
			return myMxAttrGrpTextFormatting.getIsHalignDefaultDefined();
		}

		/** Indicates whether or not the 'valign' (aka 'Valign') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'text-formatting'
		    (aka 'TextFormatting') attributeGroup. **/
		bool getIsValignDefaultDefined() const
		{
			return myMxAttrGrpTextFormatting.getIsValignDefaultDefined();
		}

		/** Indicates whether or not the 'underline' (aka 'Underline') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'text-formatting'
		    (aka 'TextFormatting') attributeGroup. **/
		bool getIsUnderlineDefaultDefined() const
		{
			return myMxAttrGrpTextFormatting.getIsUnderlineDefaultDefined();
		}

		/** Indicates whether or not the 'overline' (aka 'Overline') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'text-formatting'
		    (aka 'TextFormatting') attributeGroup. **/
		bool getIsOverlineDefaultDefined() const
		{
			return myMxAttrGrpTextFormatting.getIsOverlineDefaultDefined();
		}

		/** Indicates whether or not the 'line-through' (aka 'LineThrough') has
		    a default value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'text-formatting'
		    (aka 'TextFormatting') attributeGroup. **/
		bool getIsLineThroughDefaultDefined() const
		{
			return myMxAttrGrpTextFormatting.getIsLineThroughDefaultDefined();
		}

		/** Indicates whether or not the 'rotation' (aka 'Rotation') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'text-formatting'
		    (aka 'TextFormatting') attributeGroup. **/
		bool getIsRotationDefaultDefined() const
		{
			return myMxAttrGrpTextFormatting.getIsRotationDefaultDefined();
		}

		/** Indicates whether or not the 'letter-spacing' (aka 'LetterSpacing')
		    has a default value defined in the MusicXML xsd specification (either
		    explicitly or in the documentation). This attribute is a member of
		    the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsLetterSpacingDefaultDefined() const
		{
			return myMxAttrGrpTextFormatting.getIsLetterSpacingDefaultDefined();
		}

		/** Indicates whether or not the 'line-height' (aka 'LineHeight') has a
		    default value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'text-formatting'
		    (aka 'TextFormatting') attributeGroup. **/
		bool getIsLineHeightDefaultDefined() const
		{
			return myMxAttrGrpTextFormatting.getIsLineHeightDefaultDefined();
		}

		/** Indicates whether or not the 'xml:lang' (aka 'XmlLang') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'text-formatting'
		    (aka 'TextFormatting') attributeGroup. **/
		bool getIsXmlLangDefaultDefined() const
		{
			return myMxAttrGrpTextFormatting.getIsXmlLangDefaultDefined();
		}

		/** Indicates whether or not the 'xml:space' (aka 'XmlSpace') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'text-formatting'
		    (aka 'TextFormatting') attributeGroup. **/
		bool getIsXmlSpaceDefaultDefined() const
		{
			return myMxAttrGrpTextFormatting.getIsXmlSpaceDefaultDefined();
		}

		/** Indicates whether or not the 'dir' (aka 'Dir') has a default value
		    defined in the MusicXML xsd specification (either explicitly or in
		    the documentation). This attribute is a member of the 'text-formatting'
		    (aka 'TextFormatting') attributeGroup. **/
		bool getIsDirDefaultDefined() const
		{
			return myMxAttrGrpTextFormatting.getIsDirDefaultDefined();
		}

		/** Indicates whether or not the 'enclosure' (aka 'Enclosure') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'text-formatting'
		    (aka 'TextFormatting') attributeGroup. **/
		bool getIsEnclosureDefaultDefined() const
		{
			return myMxAttrGrpTextFormatting.getIsEnclosureDefaultDefined();
		}

/* Get AttributeDefaultValue ---------------------------------------------------------- */

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'justify' (aka 'Justify') attribute. This attribute is a member
		    of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		MxEnumLeftCenterRight getJustifyDefaultValue() const
		{
			return myMxAttrGrpTextFormatting.getJustifyDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'default-x' (aka 'DefaultX') attribute. This attribute is a member
		    of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		MxNumberTenths getDefaultXDefaultValue() const
		{
			return myMxAttrGrpTextFormatting.getDefaultXDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'default-y' (aka 'DefaultY') attribute. This attribute is a member
		    of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		MxNumberTenths getDefaultYDefaultValue() const
		{
			return myMxAttrGrpTextFormatting.getDefaultYDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'relative-x' (aka 'RelativeX') attribute. This attribute is a member
		    of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		MxNumberTenths getRelativeXDefaultValue() const
		{
			return myMxAttrGrpTextFormatting.getRelativeXDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'relative-y' (aka 'RelativeY') attribute. This attribute is a member
		    of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		MxNumberTenths getRelativeYDefaultValue() const
		{
			return myMxAttrGrpTextFormatting.getRelativeYDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'font-family' (aka 'FontFamily') attribute. This attribute is a
		    member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		MxCommaSeparatedText getFontFamilyDefaultValue() const
		{
			return myMxAttrGrpTextFormatting.getFontFamilyDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'font-style' (aka 'FontStyle') attribute. This attribute is a member
		    of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		MxEnumFontStyle getFontStyleDefaultValue() const
		{
			return myMxAttrGrpTextFormatting.getFontStyleDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'font-size' (aka 'FontSize') attribute. This attribute is a member
		    of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		MxFontSize getFontSizeDefaultValue() const
		{
			return myMxAttrGrpTextFormatting.getFontSizeDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'font-weight' (aka 'FontWeight') attribute. This attribute is a
		    member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		MxEnumFontWeight getFontWeightDefaultValue() const
		{
			return myMxAttrGrpTextFormatting.getFontWeightDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'color' (aka 'Color') attribute. This attribute is a member of
		    the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		MxColor getColorDefaultValue() const
		{
			return myMxAttrGrpTextFormatting.getColorDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'halign' (aka 'Halign') attribute. This attribute is a member of
		    the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		MxEnumLeftCenterRight getHalignDefaultValue() const
		{
			return myMxAttrGrpTextFormatting.getHalignDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'valign' (aka 'Valign') attribute. This attribute is a member of
		    the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		MxEnumValign getValignDefaultValue() const
		{
			return myMxAttrGrpTextFormatting.getValignDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'underline' (aka 'Underline') attribute. This attribute is a member
		    of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		MxNumberNumberOfLines getUnderlineDefaultValue() const
		{
			return myMxAttrGrpTextFormatting.getUnderlineDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'overline' (aka 'Overline') attribute. This attribute is a member
		    of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		MxNumberNumberOfLines getOverlineDefaultValue() const
		{
			return myMxAttrGrpTextFormatting.getOverlineDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'line-through' (aka 'LineThrough') attribute. This attribute is
		    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		MxNumberNumberOfLines getLineThroughDefaultValue() const
		{
			return myMxAttrGrpTextFormatting.getLineThroughDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'rotation' (aka 'Rotation') attribute. This attribute is a member
		    of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		MxNumberRotationDegrees getRotationDefaultValue() const
		{
			return myMxAttrGrpTextFormatting.getRotationDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'letter-spacing' (aka 'LetterSpacing') attribute. This attribute
		    is a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		MxNumberOrNormal getLetterSpacingDefaultValue() const
		{
			return myMxAttrGrpTextFormatting.getLetterSpacingDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'line-height' (aka 'LineHeight') attribute. This attribute is a
		    member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		MxNumberOrNormal getLineHeightDefaultValue() const
		{
			return myMxAttrGrpTextFormatting.getLineHeightDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'xml:lang' (aka 'XmlLang') attribute. This attribute is a member
		    of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		XmlLang getXmlLangDefaultValue() const
		{
			return myMxAttrGrpTextFormatting.getXmlLangDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'xml:space' (aka 'XmlSpace') attribute. This attribute is a member
		    of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		XmlSpace getXmlSpaceDefaultValue() const
		{
			return myMxAttrGrpTextFormatting.getXmlSpaceDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'dir' (aka 'Dir') attribute. This attribute is a member of the
		    'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		MxEnumTextDirection getDirDefaultValue() const
		{
			return myMxAttrGrpTextFormatting.getDirDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'enclosure' (aka 'Enclosure') attribute. This attribute is a member
		    of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		MxEnumEnclosureShape getEnclosureDefaultValue() const
		{
			return myMxAttrGrpTextFormatting.getEnclosureDefaultValue();
		}

	}; // struct MxCxSmpFormattedText::Impl

	const int MxCxSmpFormattedText::Impl::myXsdID = 2407;
	const std::string MxCxSmpFormattedText::Impl::myXmlTypeName = "formatted-text";
	const std::string MxCxSmpFormattedText::Impl::myCppClassName = "MxCxSmpFormattedText";
	const std::string MxCxSmpFormattedText::Impl::myDocumentation = "The formatted-text type represents a text element with text-formatting attributes.";

} // namespace lexicon


/* MxCxSmpFormattedText --------------------------------------------------------------- */

namespace lexicon
{

/* Constructor, Destructor, Copy, Assignment ------------------------------------------ */

	MxCxSmpFormattedText::MxCxSmpFormattedText( const std::string& elementName, const XsString& value_in )
	:myImpl( new Impl( elementName, value_in ) ) {}

	MxCxSmpFormattedText::~MxCxSmpFormattedText() {}

	MxCxSmpFormattedText::MxCxSmpFormattedText( const MxCxSmpFormattedText& other )
	:myImpl( new Impl( *(other.myImpl) ) ) {}

	MxCxSmpFormattedText& MxCxSmpFormattedText::operator=( const MxCxSmpFormattedText& other )
	{
		this->myImpl = std::unique_ptr<Impl>( new Impl( *(other.myImpl) ) );
		return *this;
	}

/* GetSet Value and Element Name ------------------------------------------------------ */

	/** Returns the contained xs:simpleContent value. **/
	XsString MxCxSmpFormattedText::getValue() const
	{
		return myImpl->getValue();
	}

	/** Sets the contained xs:simpleContent value. **/
	void MxCxSmpFormattedText::setValue( const XsString& value_in )
	{
		myImpl->setValue( value_in );
	}

	/** Returns the name of the Xml element employing this ComplexType. **/
	std::string MxCxSmpFormattedText::getElementName() const
	{
		return myImpl->getElementName();
	}

/* Get Class Information -------------------------------------------------------------- */

	/** Returns the name of this xs:complexType as found in the musicxml.xsd
	    document. **/
	std::string MxCxSmpFormattedText::getXmlTypeName() const
	{
		return myImpl->getXmlTypeName();
	}

	/** Returns the name of this C++ class. **/
	std::string MxCxSmpFormattedText::getClassName() const
	{
		return myImpl->getClassName();
	}

	/** Returns the documentation for this musicxml type as found in the musicxml.xsd
	    document. **/
	std::string MxCxSmpFormattedText::getDocumentation() const
	{
		return myImpl->getDocumentation();
	}

/* Get Attribute Values --------------------------------------------------------------- */

	/** Returns the internal value of the 'justify' (aka 'Justify') attribute.
	    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
	    attributeGroup. **/
	MxEnumLeftCenterRight MxCxSmpFormattedText::getJustify() const
	{
		return myImpl->getJustify();
	}

	/** Returns the internal value of the 'default-x' (aka 'DefaultX') attribute.
	    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
	    attributeGroup. **/
	MxNumberTenths MxCxSmpFormattedText::getDefaultX() const
	{
		return myImpl->getDefaultX();
	}

	/** Returns the internal value of the 'default-y' (aka 'DefaultY') attribute.
	    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
	    attributeGroup. **/
	MxNumberTenths MxCxSmpFormattedText::getDefaultY() const
	{
		return myImpl->getDefaultY();
	}

	/** Returns the internal value of the 'relative-x' (aka 'RelativeX') attribute.
	    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
	    attributeGroup. **/
	MxNumberTenths MxCxSmpFormattedText::getRelativeX() const
	{
		return myImpl->getRelativeX();
	}

	/** Returns the internal value of the 'relative-y' (aka 'RelativeY') attribute.
	    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
	    attributeGroup. **/
	MxNumberTenths MxCxSmpFormattedText::getRelativeY() const
	{
		return myImpl->getRelativeY();
	}

	/** Returns the internal value of the 'font-family' (aka 'FontFamily')
	    attribute. This attribute is a member of the 'text-formatting' (aka
	    'TextFormatting') attributeGroup. **/
	MxCommaSeparatedText MxCxSmpFormattedText::getFontFamily() const
	{
		return myImpl->getFontFamily();
	}

	/** Returns the internal value of the 'font-style' (aka 'FontStyle') attribute.
	    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
	    attributeGroup. **/
	MxEnumFontStyle MxCxSmpFormattedText::getFontStyle() const
	{
		return myImpl->getFontStyle();
	}

	/** Returns the internal value of the 'font-size' (aka 'FontSize') attribute.
	    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
	    attributeGroup. **/
	MxFontSize MxCxSmpFormattedText::getFontSize() const
	{
		return myImpl->getFontSize();
	}

	/** Returns the internal value of the 'font-weight' (aka 'FontWeight')
	    attribute. This attribute is a member of the 'text-formatting' (aka
	    'TextFormatting') attributeGroup. **/
	MxEnumFontWeight MxCxSmpFormattedText::getFontWeight() const
	{
		return myImpl->getFontWeight();
	}

	/** Returns the internal value of the 'color' (aka 'Color') attribute.
	    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
	    attributeGroup. **/
	MxColor MxCxSmpFormattedText::getColor() const
	{
		return myImpl->getColor();
	}

	/** Returns the internal value of the 'halign' (aka 'Halign') attribute.
	    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
	    attributeGroup. **/
	MxEnumLeftCenterRight MxCxSmpFormattedText::getHalign() const
	{
		return myImpl->getHalign();
	}

	/** Returns the internal value of the 'valign' (aka 'Valign') attribute.
	    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
	    attributeGroup. **/
	MxEnumValign MxCxSmpFormattedText::getValign() const
	{
		return myImpl->getValign();
	}

	/** Returns the internal value of the 'underline' (aka 'Underline') attribute.
	    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
	    attributeGroup. **/
	MxNumberNumberOfLines MxCxSmpFormattedText::getUnderline() const
	{
		return myImpl->getUnderline();
	}

	/** Returns the internal value of the 'overline' (aka 'Overline') attribute.
	    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
	    attributeGroup. **/
	MxNumberNumberOfLines MxCxSmpFormattedText::getOverline() const
	{
		return myImpl->getOverline();
	}

	/** Returns the internal value of the 'line-through' (aka 'LineThrough')
	    attribute. This attribute is a member of the 'text-formatting' (aka
	    'TextFormatting') attributeGroup. **/
	MxNumberNumberOfLines MxCxSmpFormattedText::getLineThrough() const
	{
		return myImpl->getLineThrough();
	}

	/** Returns the internal value of the 'rotation' (aka 'Rotation') attribute.
	    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
	    attributeGroup. **/
	MxNumberRotationDegrees MxCxSmpFormattedText::getRotation() const
	{
		return myImpl->getRotation();
	}

	/** Returns the internal value of the 'letter-spacing' (aka 'LetterSpacing')
	    attribute. This attribute is a member of the 'text-formatting' (aka
	    'TextFormatting') attributeGroup. **/
	MxNumberOrNormal MxCxSmpFormattedText::getLetterSpacing() const
	{
		return myImpl->getLetterSpacing();
	}

	/** Returns the internal value of the 'line-height' (aka 'LineHeight')
	    attribute. This attribute is a member of the 'text-formatting' (aka
	    'TextFormatting') attributeGroup. **/
	MxNumberOrNormal MxCxSmpFormattedText::getLineHeight() const
	{
		return myImpl->getLineHeight();
	}

	/** Returns the internal value of the 'xml:lang' (aka 'XmlLang') attribute.
	    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
	    attributeGroup. **/
	XmlLang MxCxSmpFormattedText::getXmlLang() const
	{
		return myImpl->getXmlLang();
	}

	/** Returns the internal value of the 'xml:space' (aka 'XmlSpace') attribute.
	    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
	    attributeGroup. **/
	XmlSpace MxCxSmpFormattedText::getXmlSpace() const
	{
		return myImpl->getXmlSpace();
	}

	/** Returns the internal value of the 'dir' (aka 'Dir') attribute. This
	    attribute is a member of the 'text-formatting' (aka 'TextFormatting')
	    attributeGroup. **/
	MxEnumTextDirection MxCxSmpFormattedText::getDir() const
	{
		return myImpl->getDir();
	}

	/** Returns the internal value of the 'enclosure' (aka 'Enclosure') attribute.
	    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
	    attributeGroup. **/
	MxEnumEnclosureShape MxCxSmpFormattedText::getEnclosure() const
	{
		return myImpl->getEnclosure();
	}

/* Set Attribute Values --------------------------------------------------------------- */

	/** Sets the internal value of the 'justify' (aka 'Justify') attribute.
	    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
	    attributeGroup. **/
	void MxCxSmpFormattedText::setJustify( const MxEnumLeftCenterRight& value_in )
	{
		myImpl->setJustify( value_in );
	}

	/** Sets the internal value of the 'default-x' (aka 'DefaultX') attribute.
	    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
	    attributeGroup. **/
	void MxCxSmpFormattedText::setDefaultX( const MxNumberTenths& value_in )
	{
		myImpl->setDefaultX( value_in );
	}

	/** Sets the internal value of the 'default-y' (aka 'DefaultY') attribute.
	    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
	    attributeGroup. **/
	void MxCxSmpFormattedText::setDefaultY( const MxNumberTenths& value_in )
	{
		myImpl->setDefaultY( value_in );
	}

	/** Sets the internal value of the 'relative-x' (aka 'RelativeX') attribute.
	    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
	    attributeGroup. **/
	void MxCxSmpFormattedText::setRelativeX( const MxNumberTenths& value_in )
	{
		myImpl->setRelativeX( value_in );
	}

	/** Sets the internal value of the 'relative-y' (aka 'RelativeY') attribute.
	    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
	    attributeGroup. **/
	void MxCxSmpFormattedText::setRelativeY( const MxNumberTenths& value_in )
	{
		myImpl->setRelativeY( value_in );
	}

	/** Sets the internal value of the 'font-family' (aka 'FontFamily') attribute.
	    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
	    attributeGroup. **/
	void MxCxSmpFormattedText::setFontFamily( const MxCommaSeparatedText& value_in )
	{
		myImpl->setFontFamily( value_in );
	}

	/** Sets the internal value of the 'font-style' (aka 'FontStyle') attribute.
	    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
	    attributeGroup. **/
	void MxCxSmpFormattedText::setFontStyle( const MxEnumFontStyle& value_in )
	{
		myImpl->setFontStyle( value_in );
	}

	/** Sets the internal value of the 'font-size' (aka 'FontSize') attribute.
	    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
	    attributeGroup. **/
	void MxCxSmpFormattedText::setFontSize( const MxFontSize& value_in )
	{
		myImpl->setFontSize( value_in );
	}

	/** Sets the internal value of the 'font-weight' (aka 'FontWeight') attribute.
	    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
	    attributeGroup. **/
	void MxCxSmpFormattedText::setFontWeight( const MxEnumFontWeight& value_in )
	{
		myImpl->setFontWeight( value_in );
	}

	/** Sets the internal value of the 'color' (aka 'Color') attribute. This
	    attribute is a member of the 'text-formatting' (aka 'TextFormatting')
	    attributeGroup. **/
	void MxCxSmpFormattedText::setColor( const MxColor& value_in )
	{
		myImpl->setColor( value_in );
	}

	/** Sets the internal value of the 'halign' (aka 'Halign') attribute. This
	    attribute is a member of the 'text-formatting' (aka 'TextFormatting')
	    attributeGroup. **/
	void MxCxSmpFormattedText::setHalign( const MxEnumLeftCenterRight& value_in )
	{
		myImpl->setHalign( value_in );
	}

	/** Sets the internal value of the 'valign' (aka 'Valign') attribute. This
	    attribute is a member of the 'text-formatting' (aka 'TextFormatting')
	    attributeGroup. **/
	void MxCxSmpFormattedText::setValign( const MxEnumValign& value_in )
	{
		myImpl->setValign( value_in );
	}

	/** Sets the internal value of the 'underline' (aka 'Underline') attribute.
	    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
	    attributeGroup. **/
	void MxCxSmpFormattedText::setUnderline( const MxNumberNumberOfLines& value_in )
	{
		myImpl->setUnderline( value_in );
	}

	/** Sets the internal value of the 'overline' (aka 'Overline') attribute.
	    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
	    attributeGroup. **/
	void MxCxSmpFormattedText::setOverline( const MxNumberNumberOfLines& value_in )
	{
		myImpl->setOverline( value_in );
	}

	/** Sets the internal value of the 'line-through' (aka 'LineThrough') attribute.
	    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
	    attributeGroup. **/
	void MxCxSmpFormattedText::setLineThrough( const MxNumberNumberOfLines& value_in )
	{
		myImpl->setLineThrough( value_in );
	}

	/** Sets the internal value of the 'rotation' (aka 'Rotation') attribute.
	    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
	    attributeGroup. **/
	void MxCxSmpFormattedText::setRotation( const MxNumberRotationDegrees& value_in )
	{
		myImpl->setRotation( value_in );
	}

	/** Sets the internal value of the 'letter-spacing' (aka 'LetterSpacing')
	    attribute. This attribute is a member of the 'text-formatting' (aka
	    'TextFormatting') attributeGroup. **/
	void MxCxSmpFormattedText::setLetterSpacing( const MxNumberOrNormal& value_in )
	{
		myImpl->setLetterSpacing( value_in );
	}

	/** Sets the internal value of the 'line-height' (aka 'LineHeight') attribute.
	    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
	    attributeGroup. **/
	void MxCxSmpFormattedText::setLineHeight( const MxNumberOrNormal& value_in )
	{
		myImpl->setLineHeight( value_in );
	}

	/** Sets the internal value of the 'xml:lang' (aka 'XmlLang') attribute.
	    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
	    attributeGroup. **/
	void MxCxSmpFormattedText::setXmlLang( const XmlLang& value_in )
	{
		myImpl->setXmlLang( value_in );
	}

	/** Sets the internal value of the 'xml:space' (aka 'XmlSpace') attribute.
	    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
	    attributeGroup. **/
	void MxCxSmpFormattedText::setXmlSpace( const XmlSpace& value_in )
	{
		myImpl->setXmlSpace( value_in );
	}

	/** Sets the internal value of the 'dir' (aka 'Dir') attribute. This attribute
	    is a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	void MxCxSmpFormattedText::setDir( const MxEnumTextDirection& value_in )
	{
		myImpl->setDir( value_in );
	}

	/** Sets the internal value of the 'enclosure' (aka 'Enclosure') attribute.
	    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
	    attributeGroup. **/
	void MxCxSmpFormattedText::setEnclosure( const MxEnumEnclosureShape& value_in )
	{
		myImpl->setEnclosure( value_in );
	}

/* Get IsAttributeRequired Values ----------------------------------------------------- */

	/** Indicates whether or not the 'justify' (aka 'Justify') attribute is
	    required to be present in a MusicXML document. This attribute is a
	    member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	bool MxCxSmpFormattedText::getIsJustifyRequired() const
	{
		return myImpl->getIsJustifyRequired();
	}

	/** Indicates whether or not the 'default-x' (aka 'DefaultX') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	bool MxCxSmpFormattedText::getIsDefaultXRequired() const
	{
		return myImpl->getIsDefaultXRequired();
	}

	/** Indicates whether or not the 'default-y' (aka 'DefaultY') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	bool MxCxSmpFormattedText::getIsDefaultYRequired() const
	{
		return myImpl->getIsDefaultYRequired();
	}

	/** Indicates whether or not the 'relative-x' (aka 'RelativeX') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	bool MxCxSmpFormattedText::getIsRelativeXRequired() const
	{
		return myImpl->getIsRelativeXRequired();
	}

	/** Indicates whether or not the 'relative-y' (aka 'RelativeY') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	bool MxCxSmpFormattedText::getIsRelativeYRequired() const
	{
		return myImpl->getIsRelativeYRequired();
	}

	/** Indicates whether or not the 'font-family' (aka 'FontFamily') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	bool MxCxSmpFormattedText::getIsFontFamilyRequired() const
	{
		return myImpl->getIsFontFamilyRequired();
	}

	/** Indicates whether or not the 'font-style' (aka 'FontStyle') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	bool MxCxSmpFormattedText::getIsFontStyleRequired() const
	{
		return myImpl->getIsFontStyleRequired();
	}

	/** Indicates whether or not the 'font-size' (aka 'FontSize') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	bool MxCxSmpFormattedText::getIsFontSizeRequired() const
	{
		return myImpl->getIsFontSizeRequired();
	}

	/** Indicates whether or not the 'font-weight' (aka 'FontWeight') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	bool MxCxSmpFormattedText::getIsFontWeightRequired() const
	{
		return myImpl->getIsFontWeightRequired();
	}

	/** Indicates whether or not the 'color' (aka 'Color') attribute is required
	    to be present in a MusicXML document. This attribute is a member of
	    the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	bool MxCxSmpFormattedText::getIsColorRequired() const
	{
		return myImpl->getIsColorRequired();
	}

	/** Indicates whether or not the 'halign' (aka 'Halign') attribute is required
	    to be present in a MusicXML document. This attribute is a member of
	    the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	bool MxCxSmpFormattedText::getIsHalignRequired() const
	{
		return myImpl->getIsHalignRequired();
	}

	/** Indicates whether or not the 'valign' (aka 'Valign') attribute is required
	    to be present in a MusicXML document. This attribute is a member of
	    the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	bool MxCxSmpFormattedText::getIsValignRequired() const
	{
		return myImpl->getIsValignRequired();
	}

	/** Indicates whether or not the 'underline' (aka 'Underline') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	bool MxCxSmpFormattedText::getIsUnderlineRequired() const
	{
		return myImpl->getIsUnderlineRequired();
	}

	/** Indicates whether or not the 'overline' (aka 'Overline') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	bool MxCxSmpFormattedText::getIsOverlineRequired() const
	{
		return myImpl->getIsOverlineRequired();
	}

	/** Indicates whether or not the 'line-through' (aka 'LineThrough') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	bool MxCxSmpFormattedText::getIsLineThroughRequired() const
	{
		return myImpl->getIsLineThroughRequired();
	}

	/** Indicates whether or not the 'rotation' (aka 'Rotation') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	bool MxCxSmpFormattedText::getIsRotationRequired() const
	{
		return myImpl->getIsRotationRequired();
	}

	/** Indicates whether or not the 'letter-spacing' (aka 'LetterSpacing')
	    attribute is required to be present in a MusicXML document. This attribute
	    is a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	bool MxCxSmpFormattedText::getIsLetterSpacingRequired() const
	{
		return myImpl->getIsLetterSpacingRequired();
	}

	/** Indicates whether or not the 'line-height' (aka 'LineHeight') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	bool MxCxSmpFormattedText::getIsLineHeightRequired() const
	{
		return myImpl->getIsLineHeightRequired();
	}

	/** Indicates whether or not the 'xml:lang' (aka 'XmlLang') attribute is
	    required to be present in a MusicXML document. This attribute is a
	    member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	bool MxCxSmpFormattedText::getIsXmlLangRequired() const
	{
		return myImpl->getIsXmlLangRequired();
	}

	/** Indicates whether or not the 'xml:space' (aka 'XmlSpace') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	bool MxCxSmpFormattedText::getIsXmlSpaceRequired() const
	{
		return myImpl->getIsXmlSpaceRequired();
	}

	/** Indicates whether or not the 'dir' (aka 'Dir') attribute is required
	    to be present in a MusicXML document. This attribute is a member of
	    the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	bool MxCxSmpFormattedText::getIsDirRequired() const
	{
		return myImpl->getIsDirRequired();
	}

	/** Indicates whether or not the 'enclosure' (aka 'Enclosure') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	bool MxCxSmpFormattedText::getIsEnclosureRequired() const
	{
		return myImpl->getIsEnclosureRequired();
	}

/* Get IsAttributePresent Values ------------------------------------------------------ */

	/** Indicates whether or not the 'justify' (aka 'Justify') attribute is
	    (or will be) present in the MusicXML document. This attribute is a
	    member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	bool MxCxSmpFormattedText::getIsJustifyPresent() const
	{
		return myImpl->getIsJustifyPresent();
	}

	/** Indicates whether or not the 'default-x' (aka 'DefaultX') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	bool MxCxSmpFormattedText::getIsDefaultXPresent() const
	{
		return myImpl->getIsDefaultXPresent();
	}

	/** Indicates whether or not the 'default-y' (aka 'DefaultY') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	bool MxCxSmpFormattedText::getIsDefaultYPresent() const
	{
		return myImpl->getIsDefaultYPresent();
	}

	/** Indicates whether or not the 'relative-x' (aka 'RelativeX') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	bool MxCxSmpFormattedText::getIsRelativeXPresent() const
	{
		return myImpl->getIsRelativeXPresent();
	}

	/** Indicates whether or not the 'relative-y' (aka 'RelativeY') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	bool MxCxSmpFormattedText::getIsRelativeYPresent() const
	{
		return myImpl->getIsRelativeYPresent();
	}

	/** Indicates whether or not the 'font-family' (aka 'FontFamily') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	bool MxCxSmpFormattedText::getIsFontFamilyPresent() const
	{
		return myImpl->getIsFontFamilyPresent();
	}

	/** Indicates whether or not the 'font-style' (aka 'FontStyle') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	bool MxCxSmpFormattedText::getIsFontStylePresent() const
	{
		return myImpl->getIsFontStylePresent();
	}

	/** Indicates whether or not the 'font-size' (aka 'FontSize') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	bool MxCxSmpFormattedText::getIsFontSizePresent() const
	{
		return myImpl->getIsFontSizePresent();
	}

	/** Indicates whether or not the 'font-weight' (aka 'FontWeight') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	bool MxCxSmpFormattedText::getIsFontWeightPresent() const
	{
		return myImpl->getIsFontWeightPresent();
	}

	/** Indicates whether or not the 'color' (aka 'Color') attribute is (or
	    will be) present in the MusicXML document. This attribute is a member
	    of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	bool MxCxSmpFormattedText::getIsColorPresent() const
	{
		return myImpl->getIsColorPresent();
	}

	/** Indicates whether or not the 'halign' (aka 'Halign') attribute is (or
	    will be) present in the MusicXML document. This attribute is a member
	    of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	bool MxCxSmpFormattedText::getIsHalignPresent() const
	{
		return myImpl->getIsHalignPresent();
	}

	/** Indicates whether or not the 'valign' (aka 'Valign') attribute is (or
	    will be) present in the MusicXML document. This attribute is a member
	    of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	bool MxCxSmpFormattedText::getIsValignPresent() const
	{
		return myImpl->getIsValignPresent();
	}

	/** Indicates whether or not the 'underline' (aka 'Underline') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	bool MxCxSmpFormattedText::getIsUnderlinePresent() const
	{
		return myImpl->getIsUnderlinePresent();
	}

	/** Indicates whether or not the 'overline' (aka 'Overline') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	bool MxCxSmpFormattedText::getIsOverlinePresent() const
	{
		return myImpl->getIsOverlinePresent();
	}

	/** Indicates whether or not the 'line-through' (aka 'LineThrough') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	bool MxCxSmpFormattedText::getIsLineThroughPresent() const
	{
		return myImpl->getIsLineThroughPresent();
	}

	/** Indicates whether or not the 'rotation' (aka 'Rotation') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	bool MxCxSmpFormattedText::getIsRotationPresent() const
	{
		return myImpl->getIsRotationPresent();
	}

	/** Indicates whether or not the 'letter-spacing' (aka 'LetterSpacing')
	    attribute is (or will be) present in the MusicXML document. This attribute
	    is a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	bool MxCxSmpFormattedText::getIsLetterSpacingPresent() const
	{
		return myImpl->getIsLetterSpacingPresent();
	}

	/** Indicates whether or not the 'line-height' (aka 'LineHeight') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	bool MxCxSmpFormattedText::getIsLineHeightPresent() const
	{
		return myImpl->getIsLineHeightPresent();
	}

	/** Indicates whether or not the 'xml:lang' (aka 'XmlLang') attribute is
	    (or will be) present in the MusicXML document. This attribute is a
	    member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	bool MxCxSmpFormattedText::getIsXmlLangPresent() const
	{
		return myImpl->getIsXmlLangPresent();
	}

	/** Indicates whether or not the 'xml:space' (aka 'XmlSpace') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	bool MxCxSmpFormattedText::getIsXmlSpacePresent() const
	{
		return myImpl->getIsXmlSpacePresent();
	}

	/** Indicates whether or not the 'dir' (aka 'Dir') attribute is (or will
	    be) present in the MusicXML document. This attribute is a member of
	    the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	bool MxCxSmpFormattedText::getIsDirPresent() const
	{
		return myImpl->getIsDirPresent();
	}

	/** Indicates whether or not the 'enclosure' (aka 'Enclosure') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	bool MxCxSmpFormattedText::getIsEnclosurePresent() const
	{
		return myImpl->getIsEnclosurePresent();
	}

/* Set IsAttributePresent Values ------------------------------------------------------ */

	/** Sets the value which indicates whether or not the 'justify' (aka 'Justify')
	    attribute is (or will be) present in the MusicXML document. This attribute
	    is a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	void MxCxSmpFormattedText::setIsJustifyPresent( const bool& value_in )
	{
		myImpl->setIsJustifyPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'default-x' (aka
	    'DefaultX') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
	    attributeGroup. **/
	void MxCxSmpFormattedText::setIsDefaultXPresent( const bool& value_in )
	{
		myImpl->setIsDefaultXPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'default-y' (aka
	    'DefaultY') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
	    attributeGroup. **/
	void MxCxSmpFormattedText::setIsDefaultYPresent( const bool& value_in )
	{
		myImpl->setIsDefaultYPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'relative-x' (aka
	    'RelativeX') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
	    attributeGroup. **/
	void MxCxSmpFormattedText::setIsRelativeXPresent( const bool& value_in )
	{
		myImpl->setIsRelativeXPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'relative-y' (aka
	    'RelativeY') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
	    attributeGroup. **/
	void MxCxSmpFormattedText::setIsRelativeYPresent( const bool& value_in )
	{
		myImpl->setIsRelativeYPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'font-family' (aka
	    'FontFamily') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
	    attributeGroup. **/
	void MxCxSmpFormattedText::setIsFontFamilyPresent( const bool& value_in )
	{
		myImpl->setIsFontFamilyPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'font-style' (aka
	    'FontStyle') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
	    attributeGroup. **/
	void MxCxSmpFormattedText::setIsFontStylePresent( const bool& value_in )
	{
		myImpl->setIsFontStylePresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'font-size' (aka
	    'FontSize') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
	    attributeGroup. **/
	void MxCxSmpFormattedText::setIsFontSizePresent( const bool& value_in )
	{
		myImpl->setIsFontSizePresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'font-weight' (aka
	    'FontWeight') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
	    attributeGroup. **/
	void MxCxSmpFormattedText::setIsFontWeightPresent( const bool& value_in )
	{
		myImpl->setIsFontWeightPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'color' (aka 'Color')
	    attribute is (or will be) present in the MusicXML document. This attribute
	    is a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	void MxCxSmpFormattedText::setIsColorPresent( const bool& value_in )
	{
		myImpl->setIsColorPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'halign' (aka 'Halign')
	    attribute is (or will be) present in the MusicXML document. This attribute
	    is a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	void MxCxSmpFormattedText::setIsHalignPresent( const bool& value_in )
	{
		myImpl->setIsHalignPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'valign' (aka 'Valign')
	    attribute is (or will be) present in the MusicXML document. This attribute
	    is a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	void MxCxSmpFormattedText::setIsValignPresent( const bool& value_in )
	{
		myImpl->setIsValignPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'underline' (aka
	    'Underline') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
	    attributeGroup. **/
	void MxCxSmpFormattedText::setIsUnderlinePresent( const bool& value_in )
	{
		myImpl->setIsUnderlinePresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'overline' (aka 'Overline')
	    attribute is (or will be) present in the MusicXML document. This attribute
	    is a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	void MxCxSmpFormattedText::setIsOverlinePresent( const bool& value_in )
	{
		myImpl->setIsOverlinePresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'line-through' (aka
	    'LineThrough') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
	    attributeGroup. **/
	void MxCxSmpFormattedText::setIsLineThroughPresent( const bool& value_in )
	{
		myImpl->setIsLineThroughPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'rotation' (aka 'Rotation')
	    attribute is (or will be) present in the MusicXML document. This attribute
	    is a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	void MxCxSmpFormattedText::setIsRotationPresent( const bool& value_in )
	{
		myImpl->setIsRotationPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'letter-spacing'
	    (aka 'LetterSpacing') attribute is (or will be) present in the MusicXML
	    document. This attribute is a member of the 'text-formatting' (aka
	    'TextFormatting') attributeGroup. **/
	void MxCxSmpFormattedText::setIsLetterSpacingPresent( const bool& value_in )
	{
		myImpl->setIsLetterSpacingPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'line-height' (aka
	    'LineHeight') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
	    attributeGroup. **/
	void MxCxSmpFormattedText::setIsLineHeightPresent( const bool& value_in )
	{
		myImpl->setIsLineHeightPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'xml:lang' (aka 'XmlLang')
	    attribute is (or will be) present in the MusicXML document. This attribute
	    is a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	void MxCxSmpFormattedText::setIsXmlLangPresent( const bool& value_in )
	{
		myImpl->setIsXmlLangPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'xml:space' (aka
	    'XmlSpace') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
	    attributeGroup. **/
	void MxCxSmpFormattedText::setIsXmlSpacePresent( const bool& value_in )
	{
		myImpl->setIsXmlSpacePresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'dir' (aka 'Dir')
	    attribute is (or will be) present in the MusicXML document. This attribute
	    is a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	void MxCxSmpFormattedText::setIsDirPresent( const bool& value_in )
	{
		myImpl->setIsDirPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'enclosure' (aka
	    'Enclosure') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
	    attributeGroup. **/
	void MxCxSmpFormattedText::setIsEnclosurePresent( const bool& value_in )
	{
		myImpl->setIsEnclosurePresent( value_in );
	}

/* Stringing and Streaming ------------------------------------------------------------ */

	/** Returns the xml representation of the object's value. **/
	std::string MxCxSmpFormattedText::toString() const
	{
		return myImpl->toString();
	}

	/** Returns the xml representation of the object's value. **/
	std::ostream& MxCxSmpFormattedText::stream( std::ostream& os_out ) const
	{
		return myImpl->stream( os_out );
	}

/* Get IsAttributeDefaultDefined Values ----------------------------------------------- */

	/** Indicates whether or not the 'justify' (aka 'Justify') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'text-formatting'
	    (aka 'TextFormatting') attributeGroup. **/
	bool MxCxSmpFormattedText::getIsJustifyDefaultDefined() const
	{
		return myImpl->getIsJustifyDefaultDefined();
	}

	/** Indicates whether or not the 'default-x' (aka 'DefaultX') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'text-formatting'
	    (aka 'TextFormatting') attributeGroup. **/
	bool MxCxSmpFormattedText::getIsDefaultXDefaultDefined() const
	{
		return myImpl->getIsDefaultXDefaultDefined();
	}

	/** Indicates whether or not the 'default-y' (aka 'DefaultY') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'text-formatting'
	    (aka 'TextFormatting') attributeGroup. **/
	bool MxCxSmpFormattedText::getIsDefaultYDefaultDefined() const
	{
		return myImpl->getIsDefaultYDefaultDefined();
	}

	/** Indicates whether or not the 'relative-x' (aka 'RelativeX') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'text-formatting'
	    (aka 'TextFormatting') attributeGroup. **/
	bool MxCxSmpFormattedText::getIsRelativeXDefaultDefined() const
	{
		return myImpl->getIsRelativeXDefaultDefined();
	}

	/** Indicates whether or not the 'relative-y' (aka 'RelativeY') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'text-formatting'
	    (aka 'TextFormatting') attributeGroup. **/
	bool MxCxSmpFormattedText::getIsRelativeYDefaultDefined() const
	{
		return myImpl->getIsRelativeYDefaultDefined();
	}

	/** Indicates whether or not the 'font-family' (aka 'FontFamily') has a
	    default value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'text-formatting'
	    (aka 'TextFormatting') attributeGroup. **/
	bool MxCxSmpFormattedText::getIsFontFamilyDefaultDefined() const
	{
		return myImpl->getIsFontFamilyDefaultDefined();
	}

	/** Indicates whether or not the 'font-style' (aka 'FontStyle') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'text-formatting'
	    (aka 'TextFormatting') attributeGroup. **/
	bool MxCxSmpFormattedText::getIsFontStyleDefaultDefined() const
	{
		return myImpl->getIsFontStyleDefaultDefined();
	}

	/** Indicates whether or not the 'font-size' (aka 'FontSize') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'text-formatting'
	    (aka 'TextFormatting') attributeGroup. **/
	bool MxCxSmpFormattedText::getIsFontSizeDefaultDefined() const
	{
		return myImpl->getIsFontSizeDefaultDefined();
	}

	/** Indicates whether or not the 'font-weight' (aka 'FontWeight') has a
	    default value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'text-formatting'
	    (aka 'TextFormatting') attributeGroup. **/
	bool MxCxSmpFormattedText::getIsFontWeightDefaultDefined() const
	{
		return myImpl->getIsFontWeightDefaultDefined();
	}

	/** Indicates whether or not the 'color' (aka 'Color') has a default value
	    defined in the MusicXML xsd specification (either explicitly or in
	    the documentation). This attribute is a member of the 'text-formatting'
	    (aka 'TextFormatting') attributeGroup. **/
	bool MxCxSmpFormattedText::getIsColorDefaultDefined() const
	{
		return myImpl->getIsColorDefaultDefined();
	}

	/** Indicates whether or not the 'halign' (aka 'Halign') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'text-formatting'
	    (aka 'TextFormatting') attributeGroup. **/
	bool MxCxSmpFormattedText::getIsHalignDefaultDefined() const
	{
		return myImpl->getIsHalignDefaultDefined();
	}

	/** Indicates whether or not the 'valign' (aka 'Valign') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'text-formatting'
	    (aka 'TextFormatting') attributeGroup. **/
	bool MxCxSmpFormattedText::getIsValignDefaultDefined() const
	{
		return myImpl->getIsValignDefaultDefined();
	}

	/** Indicates whether or not the 'underline' (aka 'Underline') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'text-formatting'
	    (aka 'TextFormatting') attributeGroup. **/
	bool MxCxSmpFormattedText::getIsUnderlineDefaultDefined() const
	{
		return myImpl->getIsUnderlineDefaultDefined();
	}

	/** Indicates whether or not the 'overline' (aka 'Overline') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'text-formatting'
	    (aka 'TextFormatting') attributeGroup. **/
	bool MxCxSmpFormattedText::getIsOverlineDefaultDefined() const
	{
		return myImpl->getIsOverlineDefaultDefined();
	}

	/** Indicates whether or not the 'line-through' (aka 'LineThrough') has
	    a default value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'text-formatting'
	    (aka 'TextFormatting') attributeGroup. **/
	bool MxCxSmpFormattedText::getIsLineThroughDefaultDefined() const
	{
		return myImpl->getIsLineThroughDefaultDefined();
	}

	/** Indicates whether or not the 'rotation' (aka 'Rotation') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'text-formatting'
	    (aka 'TextFormatting') attributeGroup. **/
	bool MxCxSmpFormattedText::getIsRotationDefaultDefined() const
	{
		return myImpl->getIsRotationDefaultDefined();
	}

	/** Indicates whether or not the 'letter-spacing' (aka 'LetterSpacing')
	    has a default value defined in the MusicXML xsd specification (either
	    explicitly or in the documentation). This attribute is a member of
	    the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	bool MxCxSmpFormattedText::getIsLetterSpacingDefaultDefined() const
	{
		return myImpl->getIsLetterSpacingDefaultDefined();
	}

	/** Indicates whether or not the 'line-height' (aka 'LineHeight') has a
	    default value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'text-formatting'
	    (aka 'TextFormatting') attributeGroup. **/
	bool MxCxSmpFormattedText::getIsLineHeightDefaultDefined() const
	{
		return myImpl->getIsLineHeightDefaultDefined();
	}

	/** Indicates whether or not the 'xml:lang' (aka 'XmlLang') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'text-formatting'
	    (aka 'TextFormatting') attributeGroup. **/
	bool MxCxSmpFormattedText::getIsXmlLangDefaultDefined() const
	{
		return myImpl->getIsXmlLangDefaultDefined();
	}

	/** Indicates whether or not the 'xml:space' (aka 'XmlSpace') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'text-formatting'
	    (aka 'TextFormatting') attributeGroup. **/
	bool MxCxSmpFormattedText::getIsXmlSpaceDefaultDefined() const
	{
		return myImpl->getIsXmlSpaceDefaultDefined();
	}

	/** Indicates whether or not the 'dir' (aka 'Dir') has a default value
	    defined in the MusicXML xsd specification (either explicitly or in
	    the documentation). This attribute is a member of the 'text-formatting'
	    (aka 'TextFormatting') attributeGroup. **/
	bool MxCxSmpFormattedText::getIsDirDefaultDefined() const
	{
		return myImpl->getIsDirDefaultDefined();
	}

	/** Indicates whether or not the 'enclosure' (aka 'Enclosure') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'text-formatting'
	    (aka 'TextFormatting') attributeGroup. **/
	bool MxCxSmpFormattedText::getIsEnclosureDefaultDefined() const
	{
		return myImpl->getIsEnclosureDefaultDefined();
	}

/* Get AttributeDefaultValue ---------------------------------------------------------- */

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'justify' (aka 'Justify') attribute. This attribute is a member
	    of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	MxEnumLeftCenterRight MxCxSmpFormattedText::getJustifyDefaultValue() const
	{
		return myImpl->getJustifyDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'default-x' (aka 'DefaultX') attribute. This attribute is a member
	    of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	MxNumberTenths MxCxSmpFormattedText::getDefaultXDefaultValue() const
	{
		return myImpl->getDefaultXDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'default-y' (aka 'DefaultY') attribute. This attribute is a member
	    of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	MxNumberTenths MxCxSmpFormattedText::getDefaultYDefaultValue() const
	{
		return myImpl->getDefaultYDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'relative-x' (aka 'RelativeX') attribute. This attribute is a member
	    of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	MxNumberTenths MxCxSmpFormattedText::getRelativeXDefaultValue() const
	{
		return myImpl->getRelativeXDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'relative-y' (aka 'RelativeY') attribute. This attribute is a member
	    of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	MxNumberTenths MxCxSmpFormattedText::getRelativeYDefaultValue() const
	{
		return myImpl->getRelativeYDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'font-family' (aka 'FontFamily') attribute. This attribute is a
	    member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	MxCommaSeparatedText MxCxSmpFormattedText::getFontFamilyDefaultValue() const
	{
		return myImpl->getFontFamilyDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'font-style' (aka 'FontStyle') attribute. This attribute is a member
	    of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	MxEnumFontStyle MxCxSmpFormattedText::getFontStyleDefaultValue() const
	{
		return myImpl->getFontStyleDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'font-size' (aka 'FontSize') attribute. This attribute is a member
	    of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	MxFontSize MxCxSmpFormattedText::getFontSizeDefaultValue() const
	{
		return myImpl->getFontSizeDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'font-weight' (aka 'FontWeight') attribute. This attribute is a
	    member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	MxEnumFontWeight MxCxSmpFormattedText::getFontWeightDefaultValue() const
	{
		return myImpl->getFontWeightDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'color' (aka 'Color') attribute. This attribute is a member of
	    the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	MxColor MxCxSmpFormattedText::getColorDefaultValue() const
	{
		return myImpl->getColorDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'halign' (aka 'Halign') attribute. This attribute is a member of
	    the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	MxEnumLeftCenterRight MxCxSmpFormattedText::getHalignDefaultValue() const
	{
		return myImpl->getHalignDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'valign' (aka 'Valign') attribute. This attribute is a member of
	    the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	MxEnumValign MxCxSmpFormattedText::getValignDefaultValue() const
	{
		return myImpl->getValignDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'underline' (aka 'Underline') attribute. This attribute is a member
	    of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	MxNumberNumberOfLines MxCxSmpFormattedText::getUnderlineDefaultValue() const
	{
		return myImpl->getUnderlineDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'overline' (aka 'Overline') attribute. This attribute is a member
	    of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	MxNumberNumberOfLines MxCxSmpFormattedText::getOverlineDefaultValue() const
	{
		return myImpl->getOverlineDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'line-through' (aka 'LineThrough') attribute. This attribute is
	    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	MxNumberNumberOfLines MxCxSmpFormattedText::getLineThroughDefaultValue() const
	{
		return myImpl->getLineThroughDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'rotation' (aka 'Rotation') attribute. This attribute is a member
	    of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	MxNumberRotationDegrees MxCxSmpFormattedText::getRotationDefaultValue() const
	{
		return myImpl->getRotationDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'letter-spacing' (aka 'LetterSpacing') attribute. This attribute
	    is a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	MxNumberOrNormal MxCxSmpFormattedText::getLetterSpacingDefaultValue() const
	{
		return myImpl->getLetterSpacingDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'line-height' (aka 'LineHeight') attribute. This attribute is a
	    member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	MxNumberOrNormal MxCxSmpFormattedText::getLineHeightDefaultValue() const
	{
		return myImpl->getLineHeightDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'xml:lang' (aka 'XmlLang') attribute. This attribute is a member
	    of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	XmlLang MxCxSmpFormattedText::getXmlLangDefaultValue() const
	{
		return myImpl->getXmlLangDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'xml:space' (aka 'XmlSpace') attribute. This attribute is a member
	    of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	XmlSpace MxCxSmpFormattedText::getXmlSpaceDefaultValue() const
	{
		return myImpl->getXmlSpaceDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'dir' (aka 'Dir') attribute. This attribute is a member of the
	    'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	MxEnumTextDirection MxCxSmpFormattedText::getDirDefaultValue() const
	{
		return myImpl->getDirDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'enclosure' (aka 'Enclosure') attribute. This attribute is a member
	    of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	MxEnumEnclosureShape MxCxSmpFormattedText::getEnclosureDefaultValue() const
	{
		return myImpl->getEnclosureDefaultValue();
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

