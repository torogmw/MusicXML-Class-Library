/* See MusicXML License at the bottom of this code page. */

/**
  * @file       MxEsCreditWords.cpp
  * @class      lexicon::MxEsCreditWords
  * @author     Matthew James Briggs
  * @email      matthew.james.briggs@gmail.com
  * @url        http://matthewjamesbriggs.com
  * @date       2014-12-05 20:57:50
  * @project    Lexicon
  * @version    1.0
  * @musicxmlid 5677
  * 
  * @brief The 'CreditWords' class serves as a binding for the MusicXml 'credit-words'
  * element.
  * 
 **/

#include "MxEsCreditWords.h"
#include <sstream>
#include "MxCxSmpFormattedText.h"
#include "MxAttrGrpTextFormatting.h"

/* Impl ------------------------------------------------------------------------------- */

namespace lexicon
{
	struct MxEsCreditWords::Impl
	{
		Impl( const XsString& value_in )
		:myMxCxSmpValue( MxCxSmpFormattedText( "credit-words", value_in ) )
		{}

	private:
		MxCxSmpFormattedText myMxCxSmpValue;

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

		/** Returns the internal value of the 'justify' (aka 'Justify') attribute.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		MxEnumLeftCenterRight getJustify() const
		{
			return myMxCxSmpValue.getJustify();
		}

		/** Returns the internal value of the 'default-x' (aka 'DefaultX') attribute.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		MxNumberTenths getDefaultX() const
		{
			return myMxCxSmpValue.getDefaultX();
		}

		/** Returns the internal value of the 'default-y' (aka 'DefaultY') attribute.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		MxNumberTenths getDefaultY() const
		{
			return myMxCxSmpValue.getDefaultY();
		}

		/** Returns the internal value of the 'relative-x' (aka 'RelativeX') attribute.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		MxNumberTenths getRelativeX() const
		{
			return myMxCxSmpValue.getRelativeX();
		}

		/** Returns the internal value of the 'relative-y' (aka 'RelativeY') attribute.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		MxNumberTenths getRelativeY() const
		{
			return myMxCxSmpValue.getRelativeY();
		}

		/** Returns the internal value of the 'font-family' (aka 'FontFamily')
		    attribute. This attribute is a member of the 'text-formatting' (aka
		    'TextFormatting') attributeGroup. **/
		MxCommaSeparatedText getFontFamily() const
		{
			return myMxCxSmpValue.getFontFamily();
		}

		/** Returns the internal value of the 'font-style' (aka 'FontStyle') attribute.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		MxEnumFontStyle getFontStyle() const
		{
			return myMxCxSmpValue.getFontStyle();
		}

		/** Returns the internal value of the 'font-size' (aka 'FontSize') attribute.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		MxFontSize getFontSize() const
		{
			return myMxCxSmpValue.getFontSize();
		}

		/** Returns the internal value of the 'font-weight' (aka 'FontWeight')
		    attribute. This attribute is a member of the 'text-formatting' (aka
		    'TextFormatting') attributeGroup. **/
		MxEnumFontWeight getFontWeight() const
		{
			return myMxCxSmpValue.getFontWeight();
		}

		/** Returns the internal value of the 'color' (aka 'Color') attribute.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		MxColor getColor() const
		{
			return myMxCxSmpValue.getColor();
		}

		/** Returns the internal value of the 'halign' (aka 'Halign') attribute.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		MxEnumLeftCenterRight getHalign() const
		{
			return myMxCxSmpValue.getHalign();
		}

		/** Returns the internal value of the 'valign' (aka 'Valign') attribute.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		MxEnumValign getValign() const
		{
			return myMxCxSmpValue.getValign();
		}

		/** Returns the internal value of the 'underline' (aka 'Underline') attribute.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		MxNumberNumberOfLines getUnderline() const
		{
			return myMxCxSmpValue.getUnderline();
		}

		/** Returns the internal value of the 'overline' (aka 'Overline') attribute.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		MxNumberNumberOfLines getOverline() const
		{
			return myMxCxSmpValue.getOverline();
		}

		/** Returns the internal value of the 'line-through' (aka 'LineThrough')
		    attribute. This attribute is a member of the 'text-formatting' (aka
		    'TextFormatting') attributeGroup. **/
		MxNumberNumberOfLines getLineThrough() const
		{
			return myMxCxSmpValue.getLineThrough();
		}

		/** Returns the internal value of the 'rotation' (aka 'Rotation') attribute.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		MxNumberRotationDegrees getRotation() const
		{
			return myMxCxSmpValue.getRotation();
		}

		/** Returns the internal value of the 'letter-spacing' (aka 'LetterSpacing')
		    attribute. This attribute is a member of the 'text-formatting' (aka
		    'TextFormatting') attributeGroup. **/
		MxNumberOrNormal getLetterSpacing() const
		{
			return myMxCxSmpValue.getLetterSpacing();
		}

		/** Returns the internal value of the 'line-height' (aka 'LineHeight')
		    attribute. This attribute is a member of the 'text-formatting' (aka
		    'TextFormatting') attributeGroup. **/
		MxNumberOrNormal getLineHeight() const
		{
			return myMxCxSmpValue.getLineHeight();
		}

		/** Returns the internal value of the 'xml:lang' (aka 'XmlLang') attribute.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		XmlLang getXmlLang() const
		{
			return myMxCxSmpValue.getXmlLang();
		}

		/** Returns the internal value of the 'xml:space' (aka 'XmlSpace') attribute.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		XmlSpace getXmlSpace() const
		{
			return myMxCxSmpValue.getXmlSpace();
		}

		/** Returns the internal value of the 'dir' (aka 'Dir') attribute. This
		    attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		MxEnumTextDirection getDir() const
		{
			return myMxCxSmpValue.getDir();
		}

		/** Returns the internal value of the 'enclosure' (aka 'Enclosure') attribute.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		MxEnumEnclosureShape getEnclosure() const
		{
			return myMxCxSmpValue.getEnclosure();
		}

/* Set Attribute Values --------------------------------------------------------------- */

		/** Sets the internal value of the 'justify' (aka 'Justify') attribute.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		void setJustify( const MxEnumLeftCenterRight& value_in )
		{
			myMxCxSmpValue.setJustify( value_in );
		}

		/** Sets the internal value of the 'default-x' (aka 'DefaultX') attribute.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		void setDefaultX( const MxNumberTenths& value_in )
		{
			myMxCxSmpValue.setDefaultX( value_in );
		}

		/** Sets the internal value of the 'default-y' (aka 'DefaultY') attribute.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		void setDefaultY( const MxNumberTenths& value_in )
		{
			myMxCxSmpValue.setDefaultY( value_in );
		}

		/** Sets the internal value of the 'relative-x' (aka 'RelativeX') attribute.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		void setRelativeX( const MxNumberTenths& value_in )
		{
			myMxCxSmpValue.setRelativeX( value_in );
		}

		/** Sets the internal value of the 'relative-y' (aka 'RelativeY') attribute.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		void setRelativeY( const MxNumberTenths& value_in )
		{
			myMxCxSmpValue.setRelativeY( value_in );
		}

		/** Sets the internal value of the 'font-family' (aka 'FontFamily') attribute.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		void setFontFamily( const MxCommaSeparatedText& value_in )
		{
			myMxCxSmpValue.setFontFamily( value_in );
		}

		/** Sets the internal value of the 'font-style' (aka 'FontStyle') attribute.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		void setFontStyle( const MxEnumFontStyle& value_in )
		{
			myMxCxSmpValue.setFontStyle( value_in );
		}

		/** Sets the internal value of the 'font-size' (aka 'FontSize') attribute.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		void setFontSize( const MxFontSize& value_in )
		{
			myMxCxSmpValue.setFontSize( value_in );
		}

		/** Sets the internal value of the 'font-weight' (aka 'FontWeight') attribute.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		void setFontWeight( const MxEnumFontWeight& value_in )
		{
			myMxCxSmpValue.setFontWeight( value_in );
		}

		/** Sets the internal value of the 'color' (aka 'Color') attribute. This
		    attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		void setColor( const MxColor& value_in )
		{
			myMxCxSmpValue.setColor( value_in );
		}

		/** Sets the internal value of the 'halign' (aka 'Halign') attribute. This
		    attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		void setHalign( const MxEnumLeftCenterRight& value_in )
		{
			myMxCxSmpValue.setHalign( value_in );
		}

		/** Sets the internal value of the 'valign' (aka 'Valign') attribute. This
		    attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		void setValign( const MxEnumValign& value_in )
		{
			myMxCxSmpValue.setValign( value_in );
		}

		/** Sets the internal value of the 'underline' (aka 'Underline') attribute.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		void setUnderline( const MxNumberNumberOfLines& value_in )
		{
			myMxCxSmpValue.setUnderline( value_in );
		}

		/** Sets the internal value of the 'overline' (aka 'Overline') attribute.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		void setOverline( const MxNumberNumberOfLines& value_in )
		{
			myMxCxSmpValue.setOverline( value_in );
		}

		/** Sets the internal value of the 'line-through' (aka 'LineThrough') attribute.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		void setLineThrough( const MxNumberNumberOfLines& value_in )
		{
			myMxCxSmpValue.setLineThrough( value_in );
		}

		/** Sets the internal value of the 'rotation' (aka 'Rotation') attribute.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		void setRotation( const MxNumberRotationDegrees& value_in )
		{
			myMxCxSmpValue.setRotation( value_in );
		}

		/** Sets the internal value of the 'letter-spacing' (aka 'LetterSpacing')
		    attribute. This attribute is a member of the 'text-formatting' (aka
		    'TextFormatting') attributeGroup. **/
		void setLetterSpacing( const MxNumberOrNormal& value_in )
		{
			myMxCxSmpValue.setLetterSpacing( value_in );
		}

		/** Sets the internal value of the 'line-height' (aka 'LineHeight') attribute.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		void setLineHeight( const MxNumberOrNormal& value_in )
		{
			myMxCxSmpValue.setLineHeight( value_in );
		}

		/** Sets the internal value of the 'xml:lang' (aka 'XmlLang') attribute.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		void setXmlLang( const XmlLang& value_in )
		{
			myMxCxSmpValue.setXmlLang( value_in );
		}

		/** Sets the internal value of the 'xml:space' (aka 'XmlSpace') attribute.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		void setXmlSpace( const XmlSpace& value_in )
		{
			myMxCxSmpValue.setXmlSpace( value_in );
		}

		/** Sets the internal value of the 'dir' (aka 'Dir') attribute. This attribute
		    is a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		void setDir( const MxEnumTextDirection& value_in )
		{
			myMxCxSmpValue.setDir( value_in );
		}

		/** Sets the internal value of the 'enclosure' (aka 'Enclosure') attribute.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		void setEnclosure( const MxEnumEnclosureShape& value_in )
		{
			myMxCxSmpValue.setEnclosure( value_in );
		}

/* Get IsAttributeRequired Values ----------------------------------------------------- */

		/** Indicates whether or not the 'justify' (aka 'Justify') attribute is
		    required to be present in a MusicXML document. This attribute is a
		    member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsJustifyRequired() const
		{
			return myMxCxSmpValue.getIsJustifyRequired();
		}

		/** Indicates whether or not the 'default-x' (aka 'DefaultX') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsDefaultXRequired() const
		{
			return myMxCxSmpValue.getIsDefaultXRequired();
		}

		/** Indicates whether or not the 'default-y' (aka 'DefaultY') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsDefaultYRequired() const
		{
			return myMxCxSmpValue.getIsDefaultYRequired();
		}

		/** Indicates whether or not the 'relative-x' (aka 'RelativeX') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsRelativeXRequired() const
		{
			return myMxCxSmpValue.getIsRelativeXRequired();
		}

		/** Indicates whether or not the 'relative-y' (aka 'RelativeY') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsRelativeYRequired() const
		{
			return myMxCxSmpValue.getIsRelativeYRequired();
		}

		/** Indicates whether or not the 'font-family' (aka 'FontFamily') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsFontFamilyRequired() const
		{
			return myMxCxSmpValue.getIsFontFamilyRequired();
		}

		/** Indicates whether or not the 'font-style' (aka 'FontStyle') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsFontStyleRequired() const
		{
			return myMxCxSmpValue.getIsFontStyleRequired();
		}

		/** Indicates whether or not the 'font-size' (aka 'FontSize') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsFontSizeRequired() const
		{
			return myMxCxSmpValue.getIsFontSizeRequired();
		}

		/** Indicates whether or not the 'font-weight' (aka 'FontWeight') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsFontWeightRequired() const
		{
			return myMxCxSmpValue.getIsFontWeightRequired();
		}

		/** Indicates whether or not the 'color' (aka 'Color') attribute is required
		    to be present in a MusicXML document. This attribute is a member of
		    the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsColorRequired() const
		{
			return myMxCxSmpValue.getIsColorRequired();
		}

		/** Indicates whether or not the 'halign' (aka 'Halign') attribute is required
		    to be present in a MusicXML document. This attribute is a member of
		    the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsHalignRequired() const
		{
			return myMxCxSmpValue.getIsHalignRequired();
		}

		/** Indicates whether or not the 'valign' (aka 'Valign') attribute is required
		    to be present in a MusicXML document. This attribute is a member of
		    the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsValignRequired() const
		{
			return myMxCxSmpValue.getIsValignRequired();
		}

		/** Indicates whether or not the 'underline' (aka 'Underline') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsUnderlineRequired() const
		{
			return myMxCxSmpValue.getIsUnderlineRequired();
		}

		/** Indicates whether or not the 'overline' (aka 'Overline') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsOverlineRequired() const
		{
			return myMxCxSmpValue.getIsOverlineRequired();
		}

		/** Indicates whether or not the 'line-through' (aka 'LineThrough') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsLineThroughRequired() const
		{
			return myMxCxSmpValue.getIsLineThroughRequired();
		}

		/** Indicates whether or not the 'rotation' (aka 'Rotation') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsRotationRequired() const
		{
			return myMxCxSmpValue.getIsRotationRequired();
		}

		/** Indicates whether or not the 'letter-spacing' (aka 'LetterSpacing')
		    attribute is required to be present in a MusicXML document. This attribute
		    is a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsLetterSpacingRequired() const
		{
			return myMxCxSmpValue.getIsLetterSpacingRequired();
		}

		/** Indicates whether or not the 'line-height' (aka 'LineHeight') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsLineHeightRequired() const
		{
			return myMxCxSmpValue.getIsLineHeightRequired();
		}

		/** Indicates whether or not the 'xml:lang' (aka 'XmlLang') attribute is
		    required to be present in a MusicXML document. This attribute is a
		    member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsXmlLangRequired() const
		{
			return myMxCxSmpValue.getIsXmlLangRequired();
		}

		/** Indicates whether or not the 'xml:space' (aka 'XmlSpace') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsXmlSpaceRequired() const
		{
			return myMxCxSmpValue.getIsXmlSpaceRequired();
		}

		/** Indicates whether or not the 'dir' (aka 'Dir') attribute is required
		    to be present in a MusicXML document. This attribute is a member of
		    the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsDirRequired() const
		{
			return myMxCxSmpValue.getIsDirRequired();
		}

		/** Indicates whether or not the 'enclosure' (aka 'Enclosure') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsEnclosureRequired() const
		{
			return myMxCxSmpValue.getIsEnclosureRequired();
		}

/* Get IsAttributePresent Values ------------------------------------------------------ */

		/** Indicates whether or not the 'justify' (aka 'Justify') attribute is
		    (or will be) present in the MusicXML document. This attribute is a
		    member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsJustifyPresent() const
		{
			return myMxCxSmpValue.getIsJustifyPresent();
		}

		/** Indicates whether or not the 'default-x' (aka 'DefaultX') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsDefaultXPresent() const
		{
			return myMxCxSmpValue.getIsDefaultXPresent();
		}

		/** Indicates whether or not the 'default-y' (aka 'DefaultY') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsDefaultYPresent() const
		{
			return myMxCxSmpValue.getIsDefaultYPresent();
		}

		/** Indicates whether or not the 'relative-x' (aka 'RelativeX') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsRelativeXPresent() const
		{
			return myMxCxSmpValue.getIsRelativeXPresent();
		}

		/** Indicates whether or not the 'relative-y' (aka 'RelativeY') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsRelativeYPresent() const
		{
			return myMxCxSmpValue.getIsRelativeYPresent();
		}

		/** Indicates whether or not the 'font-family' (aka 'FontFamily') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsFontFamilyPresent() const
		{
			return myMxCxSmpValue.getIsFontFamilyPresent();
		}

		/** Indicates whether or not the 'font-style' (aka 'FontStyle') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsFontStylePresent() const
		{
			return myMxCxSmpValue.getIsFontStylePresent();
		}

		/** Indicates whether or not the 'font-size' (aka 'FontSize') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsFontSizePresent() const
		{
			return myMxCxSmpValue.getIsFontSizePresent();
		}

		/** Indicates whether or not the 'font-weight' (aka 'FontWeight') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsFontWeightPresent() const
		{
			return myMxCxSmpValue.getIsFontWeightPresent();
		}

		/** Indicates whether or not the 'color' (aka 'Color') attribute is (or
		    will be) present in the MusicXML document. This attribute is a member
		    of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsColorPresent() const
		{
			return myMxCxSmpValue.getIsColorPresent();
		}

		/** Indicates whether or not the 'halign' (aka 'Halign') attribute is (or
		    will be) present in the MusicXML document. This attribute is a member
		    of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsHalignPresent() const
		{
			return myMxCxSmpValue.getIsHalignPresent();
		}

		/** Indicates whether or not the 'valign' (aka 'Valign') attribute is (or
		    will be) present in the MusicXML document. This attribute is a member
		    of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsValignPresent() const
		{
			return myMxCxSmpValue.getIsValignPresent();
		}

		/** Indicates whether or not the 'underline' (aka 'Underline') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsUnderlinePresent() const
		{
			return myMxCxSmpValue.getIsUnderlinePresent();
		}

		/** Indicates whether or not the 'overline' (aka 'Overline') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsOverlinePresent() const
		{
			return myMxCxSmpValue.getIsOverlinePresent();
		}

		/** Indicates whether or not the 'line-through' (aka 'LineThrough') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsLineThroughPresent() const
		{
			return myMxCxSmpValue.getIsLineThroughPresent();
		}

		/** Indicates whether or not the 'rotation' (aka 'Rotation') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsRotationPresent() const
		{
			return myMxCxSmpValue.getIsRotationPresent();
		}

		/** Indicates whether or not the 'letter-spacing' (aka 'LetterSpacing')
		    attribute is (or will be) present in the MusicXML document. This attribute
		    is a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsLetterSpacingPresent() const
		{
			return myMxCxSmpValue.getIsLetterSpacingPresent();
		}

		/** Indicates whether or not the 'line-height' (aka 'LineHeight') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsLineHeightPresent() const
		{
			return myMxCxSmpValue.getIsLineHeightPresent();
		}

		/** Indicates whether or not the 'xml:lang' (aka 'XmlLang') attribute is
		    (or will be) present in the MusicXML document. This attribute is a
		    member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsXmlLangPresent() const
		{
			return myMxCxSmpValue.getIsXmlLangPresent();
		}

		/** Indicates whether or not the 'xml:space' (aka 'XmlSpace') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsXmlSpacePresent() const
		{
			return myMxCxSmpValue.getIsXmlSpacePresent();
		}

		/** Indicates whether or not the 'dir' (aka 'Dir') attribute is (or will
		    be) present in the MusicXML document. This attribute is a member of
		    the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsDirPresent() const
		{
			return myMxCxSmpValue.getIsDirPresent();
		}

		/** Indicates whether or not the 'enclosure' (aka 'Enclosure') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsEnclosurePresent() const
		{
			return myMxCxSmpValue.getIsEnclosurePresent();
		}

/* Set IsAttributePresent Values ------------------------------------------------------ */

		/** Sets the value which indicates whether or not the 'justify' (aka 'Justify')
		    attribute is (or will be) present in the MusicXML document. This attribute
		    is a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		void setIsJustifyPresent( const bool& value_in )
		{
			myMxCxSmpValue.setIsJustifyPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'default-x' (aka
		    'DefaultX') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		void setIsDefaultXPresent( const bool& value_in )
		{
			myMxCxSmpValue.setIsDefaultXPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'default-y' (aka
		    'DefaultY') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		void setIsDefaultYPresent( const bool& value_in )
		{
			myMxCxSmpValue.setIsDefaultYPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'relative-x' (aka
		    'RelativeX') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		void setIsRelativeXPresent( const bool& value_in )
		{
			myMxCxSmpValue.setIsRelativeXPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'relative-y' (aka
		    'RelativeY') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		void setIsRelativeYPresent( const bool& value_in )
		{
			myMxCxSmpValue.setIsRelativeYPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'font-family' (aka
		    'FontFamily') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		void setIsFontFamilyPresent( const bool& value_in )
		{
			myMxCxSmpValue.setIsFontFamilyPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'font-style' (aka
		    'FontStyle') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		void setIsFontStylePresent( const bool& value_in )
		{
			myMxCxSmpValue.setIsFontStylePresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'font-size' (aka
		    'FontSize') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		void setIsFontSizePresent( const bool& value_in )
		{
			myMxCxSmpValue.setIsFontSizePresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'font-weight' (aka
		    'FontWeight') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		void setIsFontWeightPresent( const bool& value_in )
		{
			myMxCxSmpValue.setIsFontWeightPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'color' (aka 'Color')
		    attribute is (or will be) present in the MusicXML document. This attribute
		    is a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		void setIsColorPresent( const bool& value_in )
		{
			myMxCxSmpValue.setIsColorPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'halign' (aka 'Halign')
		    attribute is (or will be) present in the MusicXML document. This attribute
		    is a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		void setIsHalignPresent( const bool& value_in )
		{
			myMxCxSmpValue.setIsHalignPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'valign' (aka 'Valign')
		    attribute is (or will be) present in the MusicXML document. This attribute
		    is a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		void setIsValignPresent( const bool& value_in )
		{
			myMxCxSmpValue.setIsValignPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'underline' (aka
		    'Underline') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		void setIsUnderlinePresent( const bool& value_in )
		{
			myMxCxSmpValue.setIsUnderlinePresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'overline' (aka 'Overline')
		    attribute is (or will be) present in the MusicXML document. This attribute
		    is a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		void setIsOverlinePresent( const bool& value_in )
		{
			myMxCxSmpValue.setIsOverlinePresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'line-through' (aka
		    'LineThrough') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		void setIsLineThroughPresent( const bool& value_in )
		{
			myMxCxSmpValue.setIsLineThroughPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'rotation' (aka 'Rotation')
		    attribute is (or will be) present in the MusicXML document. This attribute
		    is a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		void setIsRotationPresent( const bool& value_in )
		{
			myMxCxSmpValue.setIsRotationPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'letter-spacing'
		    (aka 'LetterSpacing') attribute is (or will be) present in the MusicXML
		    document. This attribute is a member of the 'text-formatting' (aka
		    'TextFormatting') attributeGroup. **/
		void setIsLetterSpacingPresent( const bool& value_in )
		{
			myMxCxSmpValue.setIsLetterSpacingPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'line-height' (aka
		    'LineHeight') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		void setIsLineHeightPresent( const bool& value_in )
		{
			myMxCxSmpValue.setIsLineHeightPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'xml:lang' (aka 'XmlLang')
		    attribute is (or will be) present in the MusicXML document. This attribute
		    is a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		void setIsXmlLangPresent( const bool& value_in )
		{
			myMxCxSmpValue.setIsXmlLangPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'xml:space' (aka
		    'XmlSpace') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		void setIsXmlSpacePresent( const bool& value_in )
		{
			myMxCxSmpValue.setIsXmlSpacePresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'dir' (aka 'Dir')
		    attribute is (or will be) present in the MusicXML document. This attribute
		    is a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		void setIsDirPresent( const bool& value_in )
		{
			myMxCxSmpValue.setIsDirPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'enclosure' (aka
		    'Enclosure') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		void setIsEnclosurePresent( const bool& value_in )
		{
			myMxCxSmpValue.setIsEnclosurePresent( value_in );
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

		/** Indicates whether or not the 'justify' (aka 'Justify') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'text-formatting'
		    (aka 'TextFormatting') attributeGroup. **/
		bool getIsJustifyDefaultDefined() const
		{
			return myMxCxSmpValue.getIsJustifyDefaultDefined();
		}

		/** Indicates whether or not the 'default-x' (aka 'DefaultX') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'text-formatting'
		    (aka 'TextFormatting') attributeGroup. **/
		bool getIsDefaultXDefaultDefined() const
		{
			return myMxCxSmpValue.getIsDefaultXDefaultDefined();
		}

		/** Indicates whether or not the 'default-y' (aka 'DefaultY') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'text-formatting'
		    (aka 'TextFormatting') attributeGroup. **/
		bool getIsDefaultYDefaultDefined() const
		{
			return myMxCxSmpValue.getIsDefaultYDefaultDefined();
		}

		/** Indicates whether or not the 'relative-x' (aka 'RelativeX') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'text-formatting'
		    (aka 'TextFormatting') attributeGroup. **/
		bool getIsRelativeXDefaultDefined() const
		{
			return myMxCxSmpValue.getIsRelativeXDefaultDefined();
		}

		/** Indicates whether or not the 'relative-y' (aka 'RelativeY') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'text-formatting'
		    (aka 'TextFormatting') attributeGroup. **/
		bool getIsRelativeYDefaultDefined() const
		{
			return myMxCxSmpValue.getIsRelativeYDefaultDefined();
		}

		/** Indicates whether or not the 'font-family' (aka 'FontFamily') has a
		    default value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'text-formatting'
		    (aka 'TextFormatting') attributeGroup. **/
		bool getIsFontFamilyDefaultDefined() const
		{
			return myMxCxSmpValue.getIsFontFamilyDefaultDefined();
		}

		/** Indicates whether or not the 'font-style' (aka 'FontStyle') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'text-formatting'
		    (aka 'TextFormatting') attributeGroup. **/
		bool getIsFontStyleDefaultDefined() const
		{
			return myMxCxSmpValue.getIsFontStyleDefaultDefined();
		}

		/** Indicates whether or not the 'font-size' (aka 'FontSize') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'text-formatting'
		    (aka 'TextFormatting') attributeGroup. **/
		bool getIsFontSizeDefaultDefined() const
		{
			return myMxCxSmpValue.getIsFontSizeDefaultDefined();
		}

		/** Indicates whether or not the 'font-weight' (aka 'FontWeight') has a
		    default value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'text-formatting'
		    (aka 'TextFormatting') attributeGroup. **/
		bool getIsFontWeightDefaultDefined() const
		{
			return myMxCxSmpValue.getIsFontWeightDefaultDefined();
		}

		/** Indicates whether or not the 'color' (aka 'Color') has a default value
		    defined in the MusicXML xsd specification (either explicitly or in
		    the documentation). This attribute is a member of the 'text-formatting'
		    (aka 'TextFormatting') attributeGroup. **/
		bool getIsColorDefaultDefined() const
		{
			return myMxCxSmpValue.getIsColorDefaultDefined();
		}

		/** Indicates whether or not the 'halign' (aka 'Halign') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'text-formatting'
		    (aka 'TextFormatting') attributeGroup. **/
		bool getIsHalignDefaultDefined() const
		{
			return myMxCxSmpValue.getIsHalignDefaultDefined();
		}

		/** Indicates whether or not the 'valign' (aka 'Valign') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'text-formatting'
		    (aka 'TextFormatting') attributeGroup. **/
		bool getIsValignDefaultDefined() const
		{
			return myMxCxSmpValue.getIsValignDefaultDefined();
		}

		/** Indicates whether or not the 'underline' (aka 'Underline') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'text-formatting'
		    (aka 'TextFormatting') attributeGroup. **/
		bool getIsUnderlineDefaultDefined() const
		{
			return myMxCxSmpValue.getIsUnderlineDefaultDefined();
		}

		/** Indicates whether or not the 'overline' (aka 'Overline') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'text-formatting'
		    (aka 'TextFormatting') attributeGroup. **/
		bool getIsOverlineDefaultDefined() const
		{
			return myMxCxSmpValue.getIsOverlineDefaultDefined();
		}

		/** Indicates whether or not the 'line-through' (aka 'LineThrough') has
		    a default value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'text-formatting'
		    (aka 'TextFormatting') attributeGroup. **/
		bool getIsLineThroughDefaultDefined() const
		{
			return myMxCxSmpValue.getIsLineThroughDefaultDefined();
		}

		/** Indicates whether or not the 'rotation' (aka 'Rotation') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'text-formatting'
		    (aka 'TextFormatting') attributeGroup. **/
		bool getIsRotationDefaultDefined() const
		{
			return myMxCxSmpValue.getIsRotationDefaultDefined();
		}

		/** Indicates whether or not the 'letter-spacing' (aka 'LetterSpacing')
		    has a default value defined in the MusicXML xsd specification (either
		    explicitly or in the documentation). This attribute is a member of
		    the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsLetterSpacingDefaultDefined() const
		{
			return myMxCxSmpValue.getIsLetterSpacingDefaultDefined();
		}

		/** Indicates whether or not the 'line-height' (aka 'LineHeight') has a
		    default value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'text-formatting'
		    (aka 'TextFormatting') attributeGroup. **/
		bool getIsLineHeightDefaultDefined() const
		{
			return myMxCxSmpValue.getIsLineHeightDefaultDefined();
		}

		/** Indicates whether or not the 'xml:lang' (aka 'XmlLang') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'text-formatting'
		    (aka 'TextFormatting') attributeGroup. **/
		bool getIsXmlLangDefaultDefined() const
		{
			return myMxCxSmpValue.getIsXmlLangDefaultDefined();
		}

		/** Indicates whether or not the 'xml:space' (aka 'XmlSpace') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'text-formatting'
		    (aka 'TextFormatting') attributeGroup. **/
		bool getIsXmlSpaceDefaultDefined() const
		{
			return myMxCxSmpValue.getIsXmlSpaceDefaultDefined();
		}

		/** Indicates whether or not the 'dir' (aka 'Dir') has a default value
		    defined in the MusicXML xsd specification (either explicitly or in
		    the documentation). This attribute is a member of the 'text-formatting'
		    (aka 'TextFormatting') attributeGroup. **/
		bool getIsDirDefaultDefined() const
		{
			return myMxCxSmpValue.getIsDirDefaultDefined();
		}

		/** Indicates whether or not the 'enclosure' (aka 'Enclosure') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'text-formatting'
		    (aka 'TextFormatting') attributeGroup. **/
		bool getIsEnclosureDefaultDefined() const
		{
			return myMxCxSmpValue.getIsEnclosureDefaultDefined();
		}

/* Get AttributeDefaultValue ---------------------------------------------------------- */

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'justify' (aka 'Justify') attribute. This attribute is a member
		    of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		MxEnumLeftCenterRight getJustifyDefaultValue() const
		{
			return myMxCxSmpValue.getJustifyDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'default-x' (aka 'DefaultX') attribute. This attribute is a member
		    of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		MxNumberTenths getDefaultXDefaultValue() const
		{
			return myMxCxSmpValue.getDefaultXDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'default-y' (aka 'DefaultY') attribute. This attribute is a member
		    of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		MxNumberTenths getDefaultYDefaultValue() const
		{
			return myMxCxSmpValue.getDefaultYDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'relative-x' (aka 'RelativeX') attribute. This attribute is a member
		    of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		MxNumberTenths getRelativeXDefaultValue() const
		{
			return myMxCxSmpValue.getRelativeXDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'relative-y' (aka 'RelativeY') attribute. This attribute is a member
		    of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		MxNumberTenths getRelativeYDefaultValue() const
		{
			return myMxCxSmpValue.getRelativeYDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'font-family' (aka 'FontFamily') attribute. This attribute is a
		    member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		MxCommaSeparatedText getFontFamilyDefaultValue() const
		{
			return myMxCxSmpValue.getFontFamilyDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'font-style' (aka 'FontStyle') attribute. This attribute is a member
		    of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		MxEnumFontStyle getFontStyleDefaultValue() const
		{
			return myMxCxSmpValue.getFontStyleDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'font-size' (aka 'FontSize') attribute. This attribute is a member
		    of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		MxFontSize getFontSizeDefaultValue() const
		{
			return myMxCxSmpValue.getFontSizeDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'font-weight' (aka 'FontWeight') attribute. This attribute is a
		    member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		MxEnumFontWeight getFontWeightDefaultValue() const
		{
			return myMxCxSmpValue.getFontWeightDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'color' (aka 'Color') attribute. This attribute is a member of
		    the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		MxColor getColorDefaultValue() const
		{
			return myMxCxSmpValue.getColorDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'halign' (aka 'Halign') attribute. This attribute is a member of
		    the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		MxEnumLeftCenterRight getHalignDefaultValue() const
		{
			return myMxCxSmpValue.getHalignDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'valign' (aka 'Valign') attribute. This attribute is a member of
		    the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		MxEnumValign getValignDefaultValue() const
		{
			return myMxCxSmpValue.getValignDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'underline' (aka 'Underline') attribute. This attribute is a member
		    of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		MxNumberNumberOfLines getUnderlineDefaultValue() const
		{
			return myMxCxSmpValue.getUnderlineDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'overline' (aka 'Overline') attribute. This attribute is a member
		    of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		MxNumberNumberOfLines getOverlineDefaultValue() const
		{
			return myMxCxSmpValue.getOverlineDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'line-through' (aka 'LineThrough') attribute. This attribute is
		    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		MxNumberNumberOfLines getLineThroughDefaultValue() const
		{
			return myMxCxSmpValue.getLineThroughDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'rotation' (aka 'Rotation') attribute. This attribute is a member
		    of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		MxNumberRotationDegrees getRotationDefaultValue() const
		{
			return myMxCxSmpValue.getRotationDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'letter-spacing' (aka 'LetterSpacing') attribute. This attribute
		    is a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		MxNumberOrNormal getLetterSpacingDefaultValue() const
		{
			return myMxCxSmpValue.getLetterSpacingDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'line-height' (aka 'LineHeight') attribute. This attribute is a
		    member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		MxNumberOrNormal getLineHeightDefaultValue() const
		{
			return myMxCxSmpValue.getLineHeightDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'xml:lang' (aka 'XmlLang') attribute. This attribute is a member
		    of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		XmlLang getXmlLangDefaultValue() const
		{
			return myMxCxSmpValue.getXmlLangDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'xml:space' (aka 'XmlSpace') attribute. This attribute is a member
		    of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		XmlSpace getXmlSpaceDefaultValue() const
		{
			return myMxCxSmpValue.getXmlSpaceDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'dir' (aka 'Dir') attribute. This attribute is a member of the
		    'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		MxEnumTextDirection getDirDefaultValue() const
		{
			return myMxCxSmpValue.getDirDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'enclosure' (aka 'Enclosure') attribute. This attribute is a member
		    of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		MxEnumEnclosureShape getEnclosureDefaultValue() const
		{
			return myMxCxSmpValue.getEnclosureDefaultValue();
		}

	}; // struct MxEsCreditWords::Impl

	const int MxEsCreditWords::Impl::myXsdID = 5677;
	const std::string MxEsCreditWords::Impl::myXmlTypeName = "credit-words";
	const std::string MxEsCreditWords::Impl::myCppClassName = "MxEsCreditWords";
	const std::string MxEsCreditWords::Impl::myDocumentation = "( no documentation )";
	const int MxEsCreditWords::Impl::myMinOccurs = 1;
	const int MxEsCreditWords::Impl::myMaxOccurs = 1;
	const int MxEsCreditWords::Impl::myIsMaxOccursUnbounded = false;

} // namespace lexicon


/* MxEsCreditWords -------------------------------------------------------------------- */

namespace lexicon
{

/* Constructor, Destructor, Copy, Assignment ------------------------------------------ */

	MxEsCreditWords::MxEsCreditWords( const XsString& value_in )
	:myImpl( new Impl( value_in ) ) {}

	MxEsCreditWords::~MxEsCreditWords() {}

	MxEsCreditWords::MxEsCreditWords( const MxEsCreditWords& other )
	:myImpl( new Impl( *(other.myImpl) ) ) {}

	MxEsCreditWords& MxEsCreditWords::operator=( const MxEsCreditWords& other )
	{
		this->myImpl = std::unique_ptr<Impl>( new Impl( *(other.myImpl) ) );
		return *this;
	}

/* minOccurs maxOccurs ---------------------------------------------------------------- */

	/** Returns the minOccurs value from the Music XML xsd specification. **/
	int MxEsCreditWords::getMinOccurs() const
	{
		return myImpl->getMinOccurs();
	}

	/** Returns the maxOccurs value from the Music XML xsd specification. **/
	int MxEsCreditWords::getMaxOccurs() const
	{
		return myImpl->getMaxOccurs();
	}

	/** Returns true if the maxOccurs value from the Music XML xsd specification
	    is 'unbounded'. **/
	bool MxEsCreditWords::getIsMaxOccursUnbounded() const
	{
		return myImpl->getIsMaxOccursUnbounded();
	}

/* Get Set Value ---------------------------------------------------------------------- */

	/** Returns the contained xs:simpleContent value. **/
	XsString MxEsCreditWords::getValue() const
	{
		return myImpl->getValue();
	}

	/** Sets the contained xs:simpleContent value. **/
	void MxEsCreditWords::setValue( const XsString& value_in )
	{
		myImpl->setValue( value_in );
	}

/* Get Class Information -------------------------------------------------------------- */

	/** Returns the name of this xs:element as found in the musicxml.xsd document. **/
	std::string MxEsCreditWords::getXmlTypeName() const
	{
		return myImpl->getXmlTypeName();
	}

	/** Returns the name of this C++ class. **/
	std::string MxEsCreditWords::getClassName() const
	{
		return myImpl->getClassName();
	}

	/** Returns the documentation for this musicxml type as found in the musicxml.xsd
	    document. **/
	std::string MxEsCreditWords::getDocumentation() const
	{
		return myImpl->getDocumentation();
	}

/* Get Attribute Values --------------------------------------------------------------- */

	/** Returns the internal value of the 'justify' (aka 'Justify') attribute.
	    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
	    attributeGroup. **/
	MxEnumLeftCenterRight MxEsCreditWords::getJustify() const
	{
		return myImpl->getJustify();
	}

	/** Returns the internal value of the 'default-x' (aka 'DefaultX') attribute.
	    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
	    attributeGroup. **/
	MxNumberTenths MxEsCreditWords::getDefaultX() const
	{
		return myImpl->getDefaultX();
	}

	/** Returns the internal value of the 'default-y' (aka 'DefaultY') attribute.
	    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
	    attributeGroup. **/
	MxNumberTenths MxEsCreditWords::getDefaultY() const
	{
		return myImpl->getDefaultY();
	}

	/** Returns the internal value of the 'relative-x' (aka 'RelativeX') attribute.
	    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
	    attributeGroup. **/
	MxNumberTenths MxEsCreditWords::getRelativeX() const
	{
		return myImpl->getRelativeX();
	}

	/** Returns the internal value of the 'relative-y' (aka 'RelativeY') attribute.
	    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
	    attributeGroup. **/
	MxNumberTenths MxEsCreditWords::getRelativeY() const
	{
		return myImpl->getRelativeY();
	}

	/** Returns the internal value of the 'font-family' (aka 'FontFamily')
	    attribute. This attribute is a member of the 'text-formatting' (aka
	    'TextFormatting') attributeGroup. **/
	MxCommaSeparatedText MxEsCreditWords::getFontFamily() const
	{
		return myImpl->getFontFamily();
	}

	/** Returns the internal value of the 'font-style' (aka 'FontStyle') attribute.
	    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
	    attributeGroup. **/
	MxEnumFontStyle MxEsCreditWords::getFontStyle() const
	{
		return myImpl->getFontStyle();
	}

	/** Returns the internal value of the 'font-size' (aka 'FontSize') attribute.
	    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
	    attributeGroup. **/
	MxFontSize MxEsCreditWords::getFontSize() const
	{
		return myImpl->getFontSize();
	}

	/** Returns the internal value of the 'font-weight' (aka 'FontWeight')
	    attribute. This attribute is a member of the 'text-formatting' (aka
	    'TextFormatting') attributeGroup. **/
	MxEnumFontWeight MxEsCreditWords::getFontWeight() const
	{
		return myImpl->getFontWeight();
	}

	/** Returns the internal value of the 'color' (aka 'Color') attribute.
	    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
	    attributeGroup. **/
	MxColor MxEsCreditWords::getColor() const
	{
		return myImpl->getColor();
	}

	/** Returns the internal value of the 'halign' (aka 'Halign') attribute.
	    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
	    attributeGroup. **/
	MxEnumLeftCenterRight MxEsCreditWords::getHalign() const
	{
		return myImpl->getHalign();
	}

	/** Returns the internal value of the 'valign' (aka 'Valign') attribute.
	    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
	    attributeGroup. **/
	MxEnumValign MxEsCreditWords::getValign() const
	{
		return myImpl->getValign();
	}

	/** Returns the internal value of the 'underline' (aka 'Underline') attribute.
	    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
	    attributeGroup. **/
	MxNumberNumberOfLines MxEsCreditWords::getUnderline() const
	{
		return myImpl->getUnderline();
	}

	/** Returns the internal value of the 'overline' (aka 'Overline') attribute.
	    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
	    attributeGroup. **/
	MxNumberNumberOfLines MxEsCreditWords::getOverline() const
	{
		return myImpl->getOverline();
	}

	/** Returns the internal value of the 'line-through' (aka 'LineThrough')
	    attribute. This attribute is a member of the 'text-formatting' (aka
	    'TextFormatting') attributeGroup. **/
	MxNumberNumberOfLines MxEsCreditWords::getLineThrough() const
	{
		return myImpl->getLineThrough();
	}

	/** Returns the internal value of the 'rotation' (aka 'Rotation') attribute.
	    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
	    attributeGroup. **/
	MxNumberRotationDegrees MxEsCreditWords::getRotation() const
	{
		return myImpl->getRotation();
	}

	/** Returns the internal value of the 'letter-spacing' (aka 'LetterSpacing')
	    attribute. This attribute is a member of the 'text-formatting' (aka
	    'TextFormatting') attributeGroup. **/
	MxNumberOrNormal MxEsCreditWords::getLetterSpacing() const
	{
		return myImpl->getLetterSpacing();
	}

	/** Returns the internal value of the 'line-height' (aka 'LineHeight')
	    attribute. This attribute is a member of the 'text-formatting' (aka
	    'TextFormatting') attributeGroup. **/
	MxNumberOrNormal MxEsCreditWords::getLineHeight() const
	{
		return myImpl->getLineHeight();
	}

	/** Returns the internal value of the 'xml:lang' (aka 'XmlLang') attribute.
	    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
	    attributeGroup. **/
	XmlLang MxEsCreditWords::getXmlLang() const
	{
		return myImpl->getXmlLang();
	}

	/** Returns the internal value of the 'xml:space' (aka 'XmlSpace') attribute.
	    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
	    attributeGroup. **/
	XmlSpace MxEsCreditWords::getXmlSpace() const
	{
		return myImpl->getXmlSpace();
	}

	/** Returns the internal value of the 'dir' (aka 'Dir') attribute. This
	    attribute is a member of the 'text-formatting' (aka 'TextFormatting')
	    attributeGroup. **/
	MxEnumTextDirection MxEsCreditWords::getDir() const
	{
		return myImpl->getDir();
	}

	/** Returns the internal value of the 'enclosure' (aka 'Enclosure') attribute.
	    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
	    attributeGroup. **/
	MxEnumEnclosureShape MxEsCreditWords::getEnclosure() const
	{
		return myImpl->getEnclosure();
	}

/* Set Attribute Values --------------------------------------------------------------- */

	/** Sets the internal value of the 'justify' (aka 'Justify') attribute.
	    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
	    attributeGroup. **/
	void MxEsCreditWords::setJustify( const MxEnumLeftCenterRight& value_in )
	{
		myImpl->setJustify( value_in );
	}

	/** Sets the internal value of the 'default-x' (aka 'DefaultX') attribute.
	    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
	    attributeGroup. **/
	void MxEsCreditWords::setDefaultX( const MxNumberTenths& value_in )
	{
		myImpl->setDefaultX( value_in );
	}

	/** Sets the internal value of the 'default-y' (aka 'DefaultY') attribute.
	    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
	    attributeGroup. **/
	void MxEsCreditWords::setDefaultY( const MxNumberTenths& value_in )
	{
		myImpl->setDefaultY( value_in );
	}

	/** Sets the internal value of the 'relative-x' (aka 'RelativeX') attribute.
	    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
	    attributeGroup. **/
	void MxEsCreditWords::setRelativeX( const MxNumberTenths& value_in )
	{
		myImpl->setRelativeX( value_in );
	}

	/** Sets the internal value of the 'relative-y' (aka 'RelativeY') attribute.
	    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
	    attributeGroup. **/
	void MxEsCreditWords::setRelativeY( const MxNumberTenths& value_in )
	{
		myImpl->setRelativeY( value_in );
	}

	/** Sets the internal value of the 'font-family' (aka 'FontFamily') attribute.
	    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
	    attributeGroup. **/
	void MxEsCreditWords::setFontFamily( const MxCommaSeparatedText& value_in )
	{
		myImpl->setFontFamily( value_in );
	}

	/** Sets the internal value of the 'font-style' (aka 'FontStyle') attribute.
	    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
	    attributeGroup. **/
	void MxEsCreditWords::setFontStyle( const MxEnumFontStyle& value_in )
	{
		myImpl->setFontStyle( value_in );
	}

	/** Sets the internal value of the 'font-size' (aka 'FontSize') attribute.
	    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
	    attributeGroup. **/
	void MxEsCreditWords::setFontSize( const MxFontSize& value_in )
	{
		myImpl->setFontSize( value_in );
	}

	/** Sets the internal value of the 'font-weight' (aka 'FontWeight') attribute.
	    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
	    attributeGroup. **/
	void MxEsCreditWords::setFontWeight( const MxEnumFontWeight& value_in )
	{
		myImpl->setFontWeight( value_in );
	}

	/** Sets the internal value of the 'color' (aka 'Color') attribute. This
	    attribute is a member of the 'text-formatting' (aka 'TextFormatting')
	    attributeGroup. **/
	void MxEsCreditWords::setColor( const MxColor& value_in )
	{
		myImpl->setColor( value_in );
	}

	/** Sets the internal value of the 'halign' (aka 'Halign') attribute. This
	    attribute is a member of the 'text-formatting' (aka 'TextFormatting')
	    attributeGroup. **/
	void MxEsCreditWords::setHalign( const MxEnumLeftCenterRight& value_in )
	{
		myImpl->setHalign( value_in );
	}

	/** Sets the internal value of the 'valign' (aka 'Valign') attribute. This
	    attribute is a member of the 'text-formatting' (aka 'TextFormatting')
	    attributeGroup. **/
	void MxEsCreditWords::setValign( const MxEnumValign& value_in )
	{
		myImpl->setValign( value_in );
	}

	/** Sets the internal value of the 'underline' (aka 'Underline') attribute.
	    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
	    attributeGroup. **/
	void MxEsCreditWords::setUnderline( const MxNumberNumberOfLines& value_in )
	{
		myImpl->setUnderline( value_in );
	}

	/** Sets the internal value of the 'overline' (aka 'Overline') attribute.
	    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
	    attributeGroup. **/
	void MxEsCreditWords::setOverline( const MxNumberNumberOfLines& value_in )
	{
		myImpl->setOverline( value_in );
	}

	/** Sets the internal value of the 'line-through' (aka 'LineThrough') attribute.
	    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
	    attributeGroup. **/
	void MxEsCreditWords::setLineThrough( const MxNumberNumberOfLines& value_in )
	{
		myImpl->setLineThrough( value_in );
	}

	/** Sets the internal value of the 'rotation' (aka 'Rotation') attribute.
	    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
	    attributeGroup. **/
	void MxEsCreditWords::setRotation( const MxNumberRotationDegrees& value_in )
	{
		myImpl->setRotation( value_in );
	}

	/** Sets the internal value of the 'letter-spacing' (aka 'LetterSpacing')
	    attribute. This attribute is a member of the 'text-formatting' (aka
	    'TextFormatting') attributeGroup. **/
	void MxEsCreditWords::setLetterSpacing( const MxNumberOrNormal& value_in )
	{
		myImpl->setLetterSpacing( value_in );
	}

	/** Sets the internal value of the 'line-height' (aka 'LineHeight') attribute.
	    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
	    attributeGroup. **/
	void MxEsCreditWords::setLineHeight( const MxNumberOrNormal& value_in )
	{
		myImpl->setLineHeight( value_in );
	}

	/** Sets the internal value of the 'xml:lang' (aka 'XmlLang') attribute.
	    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
	    attributeGroup. **/
	void MxEsCreditWords::setXmlLang( const XmlLang& value_in )
	{
		myImpl->setXmlLang( value_in );
	}

	/** Sets the internal value of the 'xml:space' (aka 'XmlSpace') attribute.
	    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
	    attributeGroup. **/
	void MxEsCreditWords::setXmlSpace( const XmlSpace& value_in )
	{
		myImpl->setXmlSpace( value_in );
	}

	/** Sets the internal value of the 'dir' (aka 'Dir') attribute. This attribute
	    is a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	void MxEsCreditWords::setDir( const MxEnumTextDirection& value_in )
	{
		myImpl->setDir( value_in );
	}

	/** Sets the internal value of the 'enclosure' (aka 'Enclosure') attribute.
	    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
	    attributeGroup. **/
	void MxEsCreditWords::setEnclosure( const MxEnumEnclosureShape& value_in )
	{
		myImpl->setEnclosure( value_in );
	}

/* Get IsAttributeRequired Values ----------------------------------------------------- */

	/** Indicates whether or not the 'justify' (aka 'Justify') attribute is
	    required to be present in a MusicXML document. This attribute is a
	    member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	bool MxEsCreditWords::getIsJustifyRequired() const
	{
		return myImpl->getIsJustifyRequired();
	}

	/** Indicates whether or not the 'default-x' (aka 'DefaultX') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	bool MxEsCreditWords::getIsDefaultXRequired() const
	{
		return myImpl->getIsDefaultXRequired();
	}

	/** Indicates whether or not the 'default-y' (aka 'DefaultY') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	bool MxEsCreditWords::getIsDefaultYRequired() const
	{
		return myImpl->getIsDefaultYRequired();
	}

	/** Indicates whether or not the 'relative-x' (aka 'RelativeX') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	bool MxEsCreditWords::getIsRelativeXRequired() const
	{
		return myImpl->getIsRelativeXRequired();
	}

	/** Indicates whether or not the 'relative-y' (aka 'RelativeY') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	bool MxEsCreditWords::getIsRelativeYRequired() const
	{
		return myImpl->getIsRelativeYRequired();
	}

	/** Indicates whether or not the 'font-family' (aka 'FontFamily') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	bool MxEsCreditWords::getIsFontFamilyRequired() const
	{
		return myImpl->getIsFontFamilyRequired();
	}

	/** Indicates whether or not the 'font-style' (aka 'FontStyle') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	bool MxEsCreditWords::getIsFontStyleRequired() const
	{
		return myImpl->getIsFontStyleRequired();
	}

	/** Indicates whether or not the 'font-size' (aka 'FontSize') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	bool MxEsCreditWords::getIsFontSizeRequired() const
	{
		return myImpl->getIsFontSizeRequired();
	}

	/** Indicates whether or not the 'font-weight' (aka 'FontWeight') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	bool MxEsCreditWords::getIsFontWeightRequired() const
	{
		return myImpl->getIsFontWeightRequired();
	}

	/** Indicates whether or not the 'color' (aka 'Color') attribute is required
	    to be present in a MusicXML document. This attribute is a member of
	    the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	bool MxEsCreditWords::getIsColorRequired() const
	{
		return myImpl->getIsColorRequired();
	}

	/** Indicates whether or not the 'halign' (aka 'Halign') attribute is required
	    to be present in a MusicXML document. This attribute is a member of
	    the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	bool MxEsCreditWords::getIsHalignRequired() const
	{
		return myImpl->getIsHalignRequired();
	}

	/** Indicates whether or not the 'valign' (aka 'Valign') attribute is required
	    to be present in a MusicXML document. This attribute is a member of
	    the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	bool MxEsCreditWords::getIsValignRequired() const
	{
		return myImpl->getIsValignRequired();
	}

	/** Indicates whether or not the 'underline' (aka 'Underline') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	bool MxEsCreditWords::getIsUnderlineRequired() const
	{
		return myImpl->getIsUnderlineRequired();
	}

	/** Indicates whether or not the 'overline' (aka 'Overline') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	bool MxEsCreditWords::getIsOverlineRequired() const
	{
		return myImpl->getIsOverlineRequired();
	}

	/** Indicates whether or not the 'line-through' (aka 'LineThrough') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	bool MxEsCreditWords::getIsLineThroughRequired() const
	{
		return myImpl->getIsLineThroughRequired();
	}

	/** Indicates whether or not the 'rotation' (aka 'Rotation') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	bool MxEsCreditWords::getIsRotationRequired() const
	{
		return myImpl->getIsRotationRequired();
	}

	/** Indicates whether or not the 'letter-spacing' (aka 'LetterSpacing')
	    attribute is required to be present in a MusicXML document. This attribute
	    is a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	bool MxEsCreditWords::getIsLetterSpacingRequired() const
	{
		return myImpl->getIsLetterSpacingRequired();
	}

	/** Indicates whether or not the 'line-height' (aka 'LineHeight') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	bool MxEsCreditWords::getIsLineHeightRequired() const
	{
		return myImpl->getIsLineHeightRequired();
	}

	/** Indicates whether or not the 'xml:lang' (aka 'XmlLang') attribute is
	    required to be present in a MusicXML document. This attribute is a
	    member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	bool MxEsCreditWords::getIsXmlLangRequired() const
	{
		return myImpl->getIsXmlLangRequired();
	}

	/** Indicates whether or not the 'xml:space' (aka 'XmlSpace') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	bool MxEsCreditWords::getIsXmlSpaceRequired() const
	{
		return myImpl->getIsXmlSpaceRequired();
	}

	/** Indicates whether or not the 'dir' (aka 'Dir') attribute is required
	    to be present in a MusicXML document. This attribute is a member of
	    the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	bool MxEsCreditWords::getIsDirRequired() const
	{
		return myImpl->getIsDirRequired();
	}

	/** Indicates whether or not the 'enclosure' (aka 'Enclosure') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	bool MxEsCreditWords::getIsEnclosureRequired() const
	{
		return myImpl->getIsEnclosureRequired();
	}

/* Get IsAttributePresent Values ------------------------------------------------------ */

	/** Indicates whether or not the 'justify' (aka 'Justify') attribute is
	    (or will be) present in the MusicXML document. This attribute is a
	    member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	bool MxEsCreditWords::getIsJustifyPresent() const
	{
		return myImpl->getIsJustifyPresent();
	}

	/** Indicates whether or not the 'default-x' (aka 'DefaultX') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	bool MxEsCreditWords::getIsDefaultXPresent() const
	{
		return myImpl->getIsDefaultXPresent();
	}

	/** Indicates whether or not the 'default-y' (aka 'DefaultY') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	bool MxEsCreditWords::getIsDefaultYPresent() const
	{
		return myImpl->getIsDefaultYPresent();
	}

	/** Indicates whether or not the 'relative-x' (aka 'RelativeX') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	bool MxEsCreditWords::getIsRelativeXPresent() const
	{
		return myImpl->getIsRelativeXPresent();
	}

	/** Indicates whether or not the 'relative-y' (aka 'RelativeY') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	bool MxEsCreditWords::getIsRelativeYPresent() const
	{
		return myImpl->getIsRelativeYPresent();
	}

	/** Indicates whether or not the 'font-family' (aka 'FontFamily') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	bool MxEsCreditWords::getIsFontFamilyPresent() const
	{
		return myImpl->getIsFontFamilyPresent();
	}

	/** Indicates whether or not the 'font-style' (aka 'FontStyle') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	bool MxEsCreditWords::getIsFontStylePresent() const
	{
		return myImpl->getIsFontStylePresent();
	}

	/** Indicates whether or not the 'font-size' (aka 'FontSize') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	bool MxEsCreditWords::getIsFontSizePresent() const
	{
		return myImpl->getIsFontSizePresent();
	}

	/** Indicates whether or not the 'font-weight' (aka 'FontWeight') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	bool MxEsCreditWords::getIsFontWeightPresent() const
	{
		return myImpl->getIsFontWeightPresent();
	}

	/** Indicates whether or not the 'color' (aka 'Color') attribute is (or
	    will be) present in the MusicXML document. This attribute is a member
	    of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	bool MxEsCreditWords::getIsColorPresent() const
	{
		return myImpl->getIsColorPresent();
	}

	/** Indicates whether or not the 'halign' (aka 'Halign') attribute is (or
	    will be) present in the MusicXML document. This attribute is a member
	    of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	bool MxEsCreditWords::getIsHalignPresent() const
	{
		return myImpl->getIsHalignPresent();
	}

	/** Indicates whether or not the 'valign' (aka 'Valign') attribute is (or
	    will be) present in the MusicXML document. This attribute is a member
	    of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	bool MxEsCreditWords::getIsValignPresent() const
	{
		return myImpl->getIsValignPresent();
	}

	/** Indicates whether or not the 'underline' (aka 'Underline') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	bool MxEsCreditWords::getIsUnderlinePresent() const
	{
		return myImpl->getIsUnderlinePresent();
	}

	/** Indicates whether or not the 'overline' (aka 'Overline') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	bool MxEsCreditWords::getIsOverlinePresent() const
	{
		return myImpl->getIsOverlinePresent();
	}

	/** Indicates whether or not the 'line-through' (aka 'LineThrough') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	bool MxEsCreditWords::getIsLineThroughPresent() const
	{
		return myImpl->getIsLineThroughPresent();
	}

	/** Indicates whether or not the 'rotation' (aka 'Rotation') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	bool MxEsCreditWords::getIsRotationPresent() const
	{
		return myImpl->getIsRotationPresent();
	}

	/** Indicates whether or not the 'letter-spacing' (aka 'LetterSpacing')
	    attribute is (or will be) present in the MusicXML document. This attribute
	    is a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	bool MxEsCreditWords::getIsLetterSpacingPresent() const
	{
		return myImpl->getIsLetterSpacingPresent();
	}

	/** Indicates whether or not the 'line-height' (aka 'LineHeight') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	bool MxEsCreditWords::getIsLineHeightPresent() const
	{
		return myImpl->getIsLineHeightPresent();
	}

	/** Indicates whether or not the 'xml:lang' (aka 'XmlLang') attribute is
	    (or will be) present in the MusicXML document. This attribute is a
	    member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	bool MxEsCreditWords::getIsXmlLangPresent() const
	{
		return myImpl->getIsXmlLangPresent();
	}

	/** Indicates whether or not the 'xml:space' (aka 'XmlSpace') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	bool MxEsCreditWords::getIsXmlSpacePresent() const
	{
		return myImpl->getIsXmlSpacePresent();
	}

	/** Indicates whether or not the 'dir' (aka 'Dir') attribute is (or will
	    be) present in the MusicXML document. This attribute is a member of
	    the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	bool MxEsCreditWords::getIsDirPresent() const
	{
		return myImpl->getIsDirPresent();
	}

	/** Indicates whether or not the 'enclosure' (aka 'Enclosure') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	bool MxEsCreditWords::getIsEnclosurePresent() const
	{
		return myImpl->getIsEnclosurePresent();
	}

/* Set IsAttributePresent Values ------------------------------------------------------ */

	/** Sets the value which indicates whether or not the 'justify' (aka 'Justify')
	    attribute is (or will be) present in the MusicXML document. This attribute
	    is a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	void MxEsCreditWords::setIsJustifyPresent( const bool& value_in )
	{
		myImpl->setIsJustifyPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'default-x' (aka
	    'DefaultX') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
	    attributeGroup. **/
	void MxEsCreditWords::setIsDefaultXPresent( const bool& value_in )
	{
		myImpl->setIsDefaultXPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'default-y' (aka
	    'DefaultY') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
	    attributeGroup. **/
	void MxEsCreditWords::setIsDefaultYPresent( const bool& value_in )
	{
		myImpl->setIsDefaultYPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'relative-x' (aka
	    'RelativeX') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
	    attributeGroup. **/
	void MxEsCreditWords::setIsRelativeXPresent( const bool& value_in )
	{
		myImpl->setIsRelativeXPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'relative-y' (aka
	    'RelativeY') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
	    attributeGroup. **/
	void MxEsCreditWords::setIsRelativeYPresent( const bool& value_in )
	{
		myImpl->setIsRelativeYPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'font-family' (aka
	    'FontFamily') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
	    attributeGroup. **/
	void MxEsCreditWords::setIsFontFamilyPresent( const bool& value_in )
	{
		myImpl->setIsFontFamilyPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'font-style' (aka
	    'FontStyle') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
	    attributeGroup. **/
	void MxEsCreditWords::setIsFontStylePresent( const bool& value_in )
	{
		myImpl->setIsFontStylePresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'font-size' (aka
	    'FontSize') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
	    attributeGroup. **/
	void MxEsCreditWords::setIsFontSizePresent( const bool& value_in )
	{
		myImpl->setIsFontSizePresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'font-weight' (aka
	    'FontWeight') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
	    attributeGroup. **/
	void MxEsCreditWords::setIsFontWeightPresent( const bool& value_in )
	{
		myImpl->setIsFontWeightPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'color' (aka 'Color')
	    attribute is (or will be) present in the MusicXML document. This attribute
	    is a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	void MxEsCreditWords::setIsColorPresent( const bool& value_in )
	{
		myImpl->setIsColorPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'halign' (aka 'Halign')
	    attribute is (or will be) present in the MusicXML document. This attribute
	    is a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	void MxEsCreditWords::setIsHalignPresent( const bool& value_in )
	{
		myImpl->setIsHalignPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'valign' (aka 'Valign')
	    attribute is (or will be) present in the MusicXML document. This attribute
	    is a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	void MxEsCreditWords::setIsValignPresent( const bool& value_in )
	{
		myImpl->setIsValignPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'underline' (aka
	    'Underline') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
	    attributeGroup. **/
	void MxEsCreditWords::setIsUnderlinePresent( const bool& value_in )
	{
		myImpl->setIsUnderlinePresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'overline' (aka 'Overline')
	    attribute is (or will be) present in the MusicXML document. This attribute
	    is a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	void MxEsCreditWords::setIsOverlinePresent( const bool& value_in )
	{
		myImpl->setIsOverlinePresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'line-through' (aka
	    'LineThrough') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
	    attributeGroup. **/
	void MxEsCreditWords::setIsLineThroughPresent( const bool& value_in )
	{
		myImpl->setIsLineThroughPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'rotation' (aka 'Rotation')
	    attribute is (or will be) present in the MusicXML document. This attribute
	    is a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	void MxEsCreditWords::setIsRotationPresent( const bool& value_in )
	{
		myImpl->setIsRotationPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'letter-spacing'
	    (aka 'LetterSpacing') attribute is (or will be) present in the MusicXML
	    document. This attribute is a member of the 'text-formatting' (aka
	    'TextFormatting') attributeGroup. **/
	void MxEsCreditWords::setIsLetterSpacingPresent( const bool& value_in )
	{
		myImpl->setIsLetterSpacingPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'line-height' (aka
	    'LineHeight') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
	    attributeGroup. **/
	void MxEsCreditWords::setIsLineHeightPresent( const bool& value_in )
	{
		myImpl->setIsLineHeightPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'xml:lang' (aka 'XmlLang')
	    attribute is (or will be) present in the MusicXML document. This attribute
	    is a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	void MxEsCreditWords::setIsXmlLangPresent( const bool& value_in )
	{
		myImpl->setIsXmlLangPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'xml:space' (aka
	    'XmlSpace') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
	    attributeGroup. **/
	void MxEsCreditWords::setIsXmlSpacePresent( const bool& value_in )
	{
		myImpl->setIsXmlSpacePresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'dir' (aka 'Dir')
	    attribute is (or will be) present in the MusicXML document. This attribute
	    is a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	void MxEsCreditWords::setIsDirPresent( const bool& value_in )
	{
		myImpl->setIsDirPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'enclosure' (aka
	    'Enclosure') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
	    attributeGroup. **/
	void MxEsCreditWords::setIsEnclosurePresent( const bool& value_in )
	{
		myImpl->setIsEnclosurePresent( value_in );
	}

/* Stringing and Streaming ------------------------------------------------------------ */

	/** Returns the xml representation of the object's value. **/
	std::string MxEsCreditWords::toString() const
	{
		return myImpl->toString();
	}

	/** Returns the xml representation of the object's value. **/
	std::ostream& MxEsCreditWords::stream( std::ostream& os_out ) const
	{
		return myImpl->stream( os_out );
	}

/* Get IsAttributeDefaultDefined Values ----------------------------------------------- */

	/** Indicates whether or not the 'justify' (aka 'Justify') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'text-formatting'
	    (aka 'TextFormatting') attributeGroup. **/
	bool MxEsCreditWords::getIsJustifyDefaultDefined() const
	{
		return myImpl->getIsJustifyDefaultDefined();
	}

	/** Indicates whether or not the 'default-x' (aka 'DefaultX') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'text-formatting'
	    (aka 'TextFormatting') attributeGroup. **/
	bool MxEsCreditWords::getIsDefaultXDefaultDefined() const
	{
		return myImpl->getIsDefaultXDefaultDefined();
	}

	/** Indicates whether or not the 'default-y' (aka 'DefaultY') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'text-formatting'
	    (aka 'TextFormatting') attributeGroup. **/
	bool MxEsCreditWords::getIsDefaultYDefaultDefined() const
	{
		return myImpl->getIsDefaultYDefaultDefined();
	}

	/** Indicates whether or not the 'relative-x' (aka 'RelativeX') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'text-formatting'
	    (aka 'TextFormatting') attributeGroup. **/
	bool MxEsCreditWords::getIsRelativeXDefaultDefined() const
	{
		return myImpl->getIsRelativeXDefaultDefined();
	}

	/** Indicates whether or not the 'relative-y' (aka 'RelativeY') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'text-formatting'
	    (aka 'TextFormatting') attributeGroup. **/
	bool MxEsCreditWords::getIsRelativeYDefaultDefined() const
	{
		return myImpl->getIsRelativeYDefaultDefined();
	}

	/** Indicates whether or not the 'font-family' (aka 'FontFamily') has a
	    default value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'text-formatting'
	    (aka 'TextFormatting') attributeGroup. **/
	bool MxEsCreditWords::getIsFontFamilyDefaultDefined() const
	{
		return myImpl->getIsFontFamilyDefaultDefined();
	}

	/** Indicates whether or not the 'font-style' (aka 'FontStyle') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'text-formatting'
	    (aka 'TextFormatting') attributeGroup. **/
	bool MxEsCreditWords::getIsFontStyleDefaultDefined() const
	{
		return myImpl->getIsFontStyleDefaultDefined();
	}

	/** Indicates whether or not the 'font-size' (aka 'FontSize') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'text-formatting'
	    (aka 'TextFormatting') attributeGroup. **/
	bool MxEsCreditWords::getIsFontSizeDefaultDefined() const
	{
		return myImpl->getIsFontSizeDefaultDefined();
	}

	/** Indicates whether or not the 'font-weight' (aka 'FontWeight') has a
	    default value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'text-formatting'
	    (aka 'TextFormatting') attributeGroup. **/
	bool MxEsCreditWords::getIsFontWeightDefaultDefined() const
	{
		return myImpl->getIsFontWeightDefaultDefined();
	}

	/** Indicates whether or not the 'color' (aka 'Color') has a default value
	    defined in the MusicXML xsd specification (either explicitly or in
	    the documentation). This attribute is a member of the 'text-formatting'
	    (aka 'TextFormatting') attributeGroup. **/
	bool MxEsCreditWords::getIsColorDefaultDefined() const
	{
		return myImpl->getIsColorDefaultDefined();
	}

	/** Indicates whether or not the 'halign' (aka 'Halign') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'text-formatting'
	    (aka 'TextFormatting') attributeGroup. **/
	bool MxEsCreditWords::getIsHalignDefaultDefined() const
	{
		return myImpl->getIsHalignDefaultDefined();
	}

	/** Indicates whether or not the 'valign' (aka 'Valign') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'text-formatting'
	    (aka 'TextFormatting') attributeGroup. **/
	bool MxEsCreditWords::getIsValignDefaultDefined() const
	{
		return myImpl->getIsValignDefaultDefined();
	}

	/** Indicates whether or not the 'underline' (aka 'Underline') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'text-formatting'
	    (aka 'TextFormatting') attributeGroup. **/
	bool MxEsCreditWords::getIsUnderlineDefaultDefined() const
	{
		return myImpl->getIsUnderlineDefaultDefined();
	}

	/** Indicates whether or not the 'overline' (aka 'Overline') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'text-formatting'
	    (aka 'TextFormatting') attributeGroup. **/
	bool MxEsCreditWords::getIsOverlineDefaultDefined() const
	{
		return myImpl->getIsOverlineDefaultDefined();
	}

	/** Indicates whether or not the 'line-through' (aka 'LineThrough') has
	    a default value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'text-formatting'
	    (aka 'TextFormatting') attributeGroup. **/
	bool MxEsCreditWords::getIsLineThroughDefaultDefined() const
	{
		return myImpl->getIsLineThroughDefaultDefined();
	}

	/** Indicates whether or not the 'rotation' (aka 'Rotation') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'text-formatting'
	    (aka 'TextFormatting') attributeGroup. **/
	bool MxEsCreditWords::getIsRotationDefaultDefined() const
	{
		return myImpl->getIsRotationDefaultDefined();
	}

	/** Indicates whether or not the 'letter-spacing' (aka 'LetterSpacing')
	    has a default value defined in the MusicXML xsd specification (either
	    explicitly or in the documentation). This attribute is a member of
	    the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	bool MxEsCreditWords::getIsLetterSpacingDefaultDefined() const
	{
		return myImpl->getIsLetterSpacingDefaultDefined();
	}

	/** Indicates whether or not the 'line-height' (aka 'LineHeight') has a
	    default value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'text-formatting'
	    (aka 'TextFormatting') attributeGroup. **/
	bool MxEsCreditWords::getIsLineHeightDefaultDefined() const
	{
		return myImpl->getIsLineHeightDefaultDefined();
	}

	/** Indicates whether or not the 'xml:lang' (aka 'XmlLang') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'text-formatting'
	    (aka 'TextFormatting') attributeGroup. **/
	bool MxEsCreditWords::getIsXmlLangDefaultDefined() const
	{
		return myImpl->getIsXmlLangDefaultDefined();
	}

	/** Indicates whether or not the 'xml:space' (aka 'XmlSpace') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'text-formatting'
	    (aka 'TextFormatting') attributeGroup. **/
	bool MxEsCreditWords::getIsXmlSpaceDefaultDefined() const
	{
		return myImpl->getIsXmlSpaceDefaultDefined();
	}

	/** Indicates whether or not the 'dir' (aka 'Dir') has a default value
	    defined in the MusicXML xsd specification (either explicitly or in
	    the documentation). This attribute is a member of the 'text-formatting'
	    (aka 'TextFormatting') attributeGroup. **/
	bool MxEsCreditWords::getIsDirDefaultDefined() const
	{
		return myImpl->getIsDirDefaultDefined();
	}

	/** Indicates whether or not the 'enclosure' (aka 'Enclosure') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'text-formatting'
	    (aka 'TextFormatting') attributeGroup. **/
	bool MxEsCreditWords::getIsEnclosureDefaultDefined() const
	{
		return myImpl->getIsEnclosureDefaultDefined();
	}

/* Get AttributeDefaultValue ---------------------------------------------------------- */

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'justify' (aka 'Justify') attribute. This attribute is a member
	    of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	MxEnumLeftCenterRight MxEsCreditWords::getJustifyDefaultValue() const
	{
		return myImpl->getJustifyDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'default-x' (aka 'DefaultX') attribute. This attribute is a member
	    of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	MxNumberTenths MxEsCreditWords::getDefaultXDefaultValue() const
	{
		return myImpl->getDefaultXDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'default-y' (aka 'DefaultY') attribute. This attribute is a member
	    of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	MxNumberTenths MxEsCreditWords::getDefaultYDefaultValue() const
	{
		return myImpl->getDefaultYDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'relative-x' (aka 'RelativeX') attribute. This attribute is a member
	    of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	MxNumberTenths MxEsCreditWords::getRelativeXDefaultValue() const
	{
		return myImpl->getRelativeXDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'relative-y' (aka 'RelativeY') attribute. This attribute is a member
	    of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	MxNumberTenths MxEsCreditWords::getRelativeYDefaultValue() const
	{
		return myImpl->getRelativeYDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'font-family' (aka 'FontFamily') attribute. This attribute is a
	    member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	MxCommaSeparatedText MxEsCreditWords::getFontFamilyDefaultValue() const
	{
		return myImpl->getFontFamilyDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'font-style' (aka 'FontStyle') attribute. This attribute is a member
	    of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	MxEnumFontStyle MxEsCreditWords::getFontStyleDefaultValue() const
	{
		return myImpl->getFontStyleDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'font-size' (aka 'FontSize') attribute. This attribute is a member
	    of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	MxFontSize MxEsCreditWords::getFontSizeDefaultValue() const
	{
		return myImpl->getFontSizeDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'font-weight' (aka 'FontWeight') attribute. This attribute is a
	    member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	MxEnumFontWeight MxEsCreditWords::getFontWeightDefaultValue() const
	{
		return myImpl->getFontWeightDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'color' (aka 'Color') attribute. This attribute is a member of
	    the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	MxColor MxEsCreditWords::getColorDefaultValue() const
	{
		return myImpl->getColorDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'halign' (aka 'Halign') attribute. This attribute is a member of
	    the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	MxEnumLeftCenterRight MxEsCreditWords::getHalignDefaultValue() const
	{
		return myImpl->getHalignDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'valign' (aka 'Valign') attribute. This attribute is a member of
	    the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	MxEnumValign MxEsCreditWords::getValignDefaultValue() const
	{
		return myImpl->getValignDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'underline' (aka 'Underline') attribute. This attribute is a member
	    of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	MxNumberNumberOfLines MxEsCreditWords::getUnderlineDefaultValue() const
	{
		return myImpl->getUnderlineDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'overline' (aka 'Overline') attribute. This attribute is a member
	    of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	MxNumberNumberOfLines MxEsCreditWords::getOverlineDefaultValue() const
	{
		return myImpl->getOverlineDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'line-through' (aka 'LineThrough') attribute. This attribute is
	    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	MxNumberNumberOfLines MxEsCreditWords::getLineThroughDefaultValue() const
	{
		return myImpl->getLineThroughDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'rotation' (aka 'Rotation') attribute. This attribute is a member
	    of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	MxNumberRotationDegrees MxEsCreditWords::getRotationDefaultValue() const
	{
		return myImpl->getRotationDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'letter-spacing' (aka 'LetterSpacing') attribute. This attribute
	    is a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	MxNumberOrNormal MxEsCreditWords::getLetterSpacingDefaultValue() const
	{
		return myImpl->getLetterSpacingDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'line-height' (aka 'LineHeight') attribute. This attribute is a
	    member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	MxNumberOrNormal MxEsCreditWords::getLineHeightDefaultValue() const
	{
		return myImpl->getLineHeightDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'xml:lang' (aka 'XmlLang') attribute. This attribute is a member
	    of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	XmlLang MxEsCreditWords::getXmlLangDefaultValue() const
	{
		return myImpl->getXmlLangDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'xml:space' (aka 'XmlSpace') attribute. This attribute is a member
	    of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	XmlSpace MxEsCreditWords::getXmlSpaceDefaultValue() const
	{
		return myImpl->getXmlSpaceDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'dir' (aka 'Dir') attribute. This attribute is a member of the
	    'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	MxEnumTextDirection MxEsCreditWords::getDirDefaultValue() const
	{
		return myImpl->getDirDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'enclosure' (aka 'Enclosure') attribute. This attribute is a member
	    of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
	MxEnumEnclosureShape MxEsCreditWords::getEnclosureDefaultValue() const
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

