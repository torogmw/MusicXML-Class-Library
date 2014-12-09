/* See MusicXML License at the bottom of this code page. */

/**
  * @file       MxCxSmpTextElementData.cpp
  * @class      lexicon::MxCxSmpTextElementData
  * @author     Matthew James Briggs
  * @email      matthew.james.briggs@gmail.com
  * @url        http://matthewjamesbriggs.com
  * @date       2014-12-02 17:31:48
  * @project    Lexicon
  * @version    1.0
  * @musicxmlid 5435
  * 
  * @brief The 'TextElementData' class serves as a binding for the MusicXml 'text-element-data'
  * complexType.
  * 
 **/

#include "MxCxSmpTextElementData.h"
#include <sstream>
#include "_hidden_attributeStream.h"
#include "MxAttrGrpColor.h"
#include "MxAttrGrpFont.h"
#include "MxAttrGrpLetterSpacing.h"
#include "MxAttrGrpTextDecoration.h"
#include "MxAttrGrpTextDirection.h"
#include "MxAttrGrpTextRotation.h"

/* Impl ------------------------------------------------------------------------------- */

namespace lexicon
{
	struct MxCxSmpTextElementData::Impl
	{
		Impl( const std::string& elementName, const XsString& value_in )
		:myElementName( elementName )
		,myValue( value_in )
		,myMxAttrGrpFont()
		,myMxAttrGrpColor()
		,myMxAttrGrpTextDecoration()
		,myMxAttrGrpTextRotation()
		,myMxAttrGrpLetterSpacing()
		,myXmlLang()
		,myMxAttrGrpTextDirection()
		,myIsXmlLangPresent( false )
		{}

	private:
		std::string myElementName;
		XsString myValue;
		MxAttrGrpFont myMxAttrGrpFont;
		MxAttrGrpColor myMxAttrGrpColor;
		MxAttrGrpTextDecoration myMxAttrGrpTextDecoration;
		MxAttrGrpTextRotation myMxAttrGrpTextRotation;
		MxAttrGrpLetterSpacing myMxAttrGrpLetterSpacing;
		XmlLang myXmlLang;
		MxAttrGrpTextDirection myMxAttrGrpTextDirection;
		bool myIsXmlLangPresent;

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

		/** Returns the internal value of the 'font-family' (aka 'FontFamily')
		    attribute. This attribute is a member of the 'font' (aka 'Font') attributeGroup. **/
		MxCommaSeparatedText getFontFamily() const
		{
			return myMxAttrGrpFont.getFontFamily();
		}

		/** Returns the internal value of the 'font-style' (aka 'FontStyle') attribute.
		    This attribute is a member of the 'font' (aka 'Font') attributeGroup. **/
		MxEnumFontStyle getFontStyle() const
		{
			return myMxAttrGrpFont.getFontStyle();
		}

		/** Returns the internal value of the 'font-size' (aka 'FontSize') attribute.
		    This attribute is a member of the 'font' (aka 'Font') attributeGroup. **/
		MxFontSize getFontSize() const
		{
			return myMxAttrGrpFont.getFontSize();
		}

		/** Returns the internal value of the 'font-weight' (aka 'FontWeight')
		    attribute. This attribute is a member of the 'font' (aka 'Font') attributeGroup. **/
		MxEnumFontWeight getFontWeight() const
		{
			return myMxAttrGrpFont.getFontWeight();
		}

		/** Returns the internal value of the 'color' (aka 'Color') attribute.
		    This attribute is a member of the 'color' (aka 'Color') attributeGroup. **/
		MxColor getColor() const
		{
			return myMxAttrGrpColor.getColor();
		}

		/** Returns the internal value of the 'underline' (aka 'Underline') attribute.
		    This attribute is a member of the 'text-decoration' (aka 'TextDecoration')
		    attributeGroup. **/
		MxNumberNumberOfLines getUnderline() const
		{
			return myMxAttrGrpTextDecoration.getUnderline();
		}

		/** Returns the internal value of the 'overline' (aka 'Overline') attribute.
		    This attribute is a member of the 'text-decoration' (aka 'TextDecoration')
		    attributeGroup. **/
		MxNumberNumberOfLines getOverline() const
		{
			return myMxAttrGrpTextDecoration.getOverline();
		}

		/** Returns the internal value of the 'line-through' (aka 'LineThrough')
		    attribute. This attribute is a member of the 'text-decoration' (aka
		    'TextDecoration') attributeGroup. **/
		MxNumberNumberOfLines getLineThrough() const
		{
			return myMxAttrGrpTextDecoration.getLineThrough();
		}

		/** Returns the internal value of the 'rotation' (aka 'Rotation') attribute.
		    This attribute is a member of the 'text-rotation' (aka 'TextRotation')
		    attributeGroup. **/
		MxNumberRotationDegrees getRotation() const
		{
			return myMxAttrGrpTextRotation.getRotation();
		}

		/** Returns the internal value of the 'letter-spacing' (aka 'LetterSpacing')
		    attribute. This attribute is a member of the 'letter-spacing' (aka
		    'LetterSpacing') attributeGroup. **/
		MxNumberOrNormal getLetterSpacing() const
		{
			return myMxAttrGrpLetterSpacing.getLetterSpacing();
		}

		/** Returns the internal value of the 'xml:lang' (aka 'XmlLang') attribute. **/
		XmlLang getXmlLang() const
		{
			return myXmlLang;
		}

		/** Returns the internal value of the 'dir' (aka 'Dir') attribute. This
		    attribute is a member of the 'text-direction' (aka 'TextDirection')
		    attributeGroup. **/
		MxEnumTextDirection getDir() const
		{
			return myMxAttrGrpTextDirection.getDir();
		}

/* Set Attribute Values --------------------------------------------------------------- */

		/** Sets the internal value of the 'font-family' (aka 'FontFamily') attribute.
		    This attribute is a member of the 'font' (aka 'Font') attributeGroup. **/
		void setFontFamily( const MxCommaSeparatedText& value_in )
		{
			myMxAttrGrpFont.setFontFamily( value_in );
		}

		/** Sets the internal value of the 'font-style' (aka 'FontStyle') attribute.
		    This attribute is a member of the 'font' (aka 'Font') attributeGroup. **/
		void setFontStyle( const MxEnumFontStyle& value_in )
		{
			myMxAttrGrpFont.setFontStyle( value_in );
		}

		/** Sets the internal value of the 'font-size' (aka 'FontSize') attribute.
		    This attribute is a member of the 'font' (aka 'Font') attributeGroup. **/
		void setFontSize( const MxFontSize& value_in )
		{
			myMxAttrGrpFont.setFontSize( value_in );
		}

		/** Sets the internal value of the 'font-weight' (aka 'FontWeight') attribute.
		    This attribute is a member of the 'font' (aka 'Font') attributeGroup. **/
		void setFontWeight( const MxEnumFontWeight& value_in )
		{
			myMxAttrGrpFont.setFontWeight( value_in );
		}

		/** Sets the internal value of the 'color' (aka 'Color') attribute. This
		    attribute is a member of the 'color' (aka 'Color') attributeGroup. **/
		void setColor( const MxColor& value_in )
		{
			myMxAttrGrpColor.setColor( value_in );
		}

		/** Sets the internal value of the 'underline' (aka 'Underline') attribute.
		    This attribute is a member of the 'text-decoration' (aka 'TextDecoration')
		    attributeGroup. **/
		void setUnderline( const MxNumberNumberOfLines& value_in )
		{
			myMxAttrGrpTextDecoration.setUnderline( value_in );
		}

		/** Sets the internal value of the 'overline' (aka 'Overline') attribute.
		    This attribute is a member of the 'text-decoration' (aka 'TextDecoration')
		    attributeGroup. **/
		void setOverline( const MxNumberNumberOfLines& value_in )
		{
			myMxAttrGrpTextDecoration.setOverline( value_in );
		}

		/** Sets the internal value of the 'line-through' (aka 'LineThrough') attribute.
		    This attribute is a member of the 'text-decoration' (aka 'TextDecoration')
		    attributeGroup. **/
		void setLineThrough( const MxNumberNumberOfLines& value_in )
		{
			myMxAttrGrpTextDecoration.setLineThrough( value_in );
		}

		/** Sets the internal value of the 'rotation' (aka 'Rotation') attribute.
		    This attribute is a member of the 'text-rotation' (aka 'TextRotation')
		    attributeGroup. **/
		void setRotation( const MxNumberRotationDegrees& value_in )
		{
			myMxAttrGrpTextRotation.setRotation( value_in );
		}

		/** Sets the internal value of the 'letter-spacing' (aka 'LetterSpacing')
		    attribute. This attribute is a member of the 'letter-spacing' (aka
		    'LetterSpacing') attributeGroup. **/
		void setLetterSpacing( const MxNumberOrNormal& value_in )
		{
			myMxAttrGrpLetterSpacing.setLetterSpacing( value_in );
		}

		/** Sets the internal value of the 'xml:lang' (aka 'XmlLang') attribute. **/
		void setXmlLang( const XmlLang& value_in )
		{
			myXmlLang = value_in;
		}

		/** Sets the internal value of the 'dir' (aka 'Dir') attribute. This attribute
		    is a member of the 'text-direction' (aka 'TextDirection') attributeGroup. **/
		void setDir( const MxEnumTextDirection& value_in )
		{
			myMxAttrGrpTextDirection.setDir( value_in );
		}

/* Get IsAttributeRequired Values ----------------------------------------------------- */

		/** Indicates whether or not the 'font-family' (aka 'FontFamily') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'font' (aka 'Font') attributeGroup. **/
		bool getIsFontFamilyRequired() const
		{
			return myMxAttrGrpFont.getIsFontFamilyRequired();
		}

		/** Indicates whether or not the 'font-style' (aka 'FontStyle') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'font' (aka 'Font') attributeGroup. **/
		bool getIsFontStyleRequired() const
		{
			return myMxAttrGrpFont.getIsFontStyleRequired();
		}

		/** Indicates whether or not the 'font-size' (aka 'FontSize') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'font' (aka 'Font') attributeGroup. **/
		bool getIsFontSizeRequired() const
		{
			return myMxAttrGrpFont.getIsFontSizeRequired();
		}

		/** Indicates whether or not the 'font-weight' (aka 'FontWeight') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'font' (aka 'Font') attributeGroup. **/
		bool getIsFontWeightRequired() const
		{
			return myMxAttrGrpFont.getIsFontWeightRequired();
		}

		/** Indicates whether or not the 'color' (aka 'Color') attribute is required
		    to be present in a MusicXML document. This attribute is a member of
		    the 'color' (aka 'Color') attributeGroup. **/
		bool getIsColorRequired() const
		{
			return myMxAttrGrpColor.getIsColorRequired();
		}

		/** Indicates whether or not the 'underline' (aka 'Underline') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'text-decoration' (aka 'TextDecoration') attributeGroup. **/
		bool getIsUnderlineRequired() const
		{
			return myMxAttrGrpTextDecoration.getIsUnderlineRequired();
		}

		/** Indicates whether or not the 'overline' (aka 'Overline') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'text-decoration' (aka 'TextDecoration') attributeGroup. **/
		bool getIsOverlineRequired() const
		{
			return myMxAttrGrpTextDecoration.getIsOverlineRequired();
		}

		/** Indicates whether or not the 'line-through' (aka 'LineThrough') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'text-decoration' (aka 'TextDecoration') attributeGroup. **/
		bool getIsLineThroughRequired() const
		{
			return myMxAttrGrpTextDecoration.getIsLineThroughRequired();
		}

		/** Indicates whether or not the 'rotation' (aka 'Rotation') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'text-rotation' (aka 'TextRotation') attributeGroup. **/
		bool getIsRotationRequired() const
		{
			return myMxAttrGrpTextRotation.getIsRotationRequired();
		}

		/** Indicates whether or not the 'letter-spacing' (aka 'LetterSpacing')
		    attribute is required to be present in a MusicXML document. This attribute
		    is a member of the 'letter-spacing' (aka 'LetterSpacing') attributeGroup. **/
		bool getIsLetterSpacingRequired() const
		{
			return myMxAttrGrpLetterSpacing.getIsLetterSpacingRequired();
		}

		/** Indicates whether or not the 'xml:lang' (aka 'XmlLang') attribute is
		    required to be present in a MusicXML document. **/
		bool getIsXmlLangRequired() const
		{
			return false;
		}

		/** Indicates whether or not the 'dir' (aka 'Dir') attribute is required
		    to be present in a MusicXML document. This attribute is a member of
		    the 'text-direction' (aka 'TextDirection') attributeGroup. **/
		bool getIsDirRequired() const
		{
			return myMxAttrGrpTextDirection.getIsDirRequired();
		}

/* Get IsAttributePresent Values ------------------------------------------------------ */

		/** Indicates whether or not the 'font-family' (aka 'FontFamily') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'font' (aka 'Font') attributeGroup. **/
		bool getIsFontFamilyPresent() const
		{
			return myMxAttrGrpFont.getIsFontFamilyPresent();
		}

		/** Indicates whether or not the 'font-style' (aka 'FontStyle') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'font' (aka 'Font') attributeGroup. **/
		bool getIsFontStylePresent() const
		{
			return myMxAttrGrpFont.getIsFontStylePresent();
		}

		/** Indicates whether or not the 'font-size' (aka 'FontSize') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'font' (aka 'Font') attributeGroup. **/
		bool getIsFontSizePresent() const
		{
			return myMxAttrGrpFont.getIsFontSizePresent();
		}

		/** Indicates whether or not the 'font-weight' (aka 'FontWeight') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'font' (aka 'Font') attributeGroup. **/
		bool getIsFontWeightPresent() const
		{
			return myMxAttrGrpFont.getIsFontWeightPresent();
		}

		/** Indicates whether or not the 'color' (aka 'Color') attribute is (or
		    will be) present in the MusicXML document. This attribute is a member
		    of the 'color' (aka 'Color') attributeGroup. **/
		bool getIsColorPresent() const
		{
			return myMxAttrGrpColor.getIsColorPresent();
		}

		/** Indicates whether or not the 'underline' (aka 'Underline') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'text-decoration' (aka 'TextDecoration') attributeGroup. **/
		bool getIsUnderlinePresent() const
		{
			return myMxAttrGrpTextDecoration.getIsUnderlinePresent();
		}

		/** Indicates whether or not the 'overline' (aka 'Overline') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'text-decoration' (aka 'TextDecoration') attributeGroup. **/
		bool getIsOverlinePresent() const
		{
			return myMxAttrGrpTextDecoration.getIsOverlinePresent();
		}

		/** Indicates whether or not the 'line-through' (aka 'LineThrough') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'text-decoration' (aka 'TextDecoration') attributeGroup. **/
		bool getIsLineThroughPresent() const
		{
			return myMxAttrGrpTextDecoration.getIsLineThroughPresent();
		}

		/** Indicates whether or not the 'rotation' (aka 'Rotation') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'text-rotation' (aka 'TextRotation') attributeGroup. **/
		bool getIsRotationPresent() const
		{
			return myMxAttrGrpTextRotation.getIsRotationPresent();
		}

		/** Indicates whether or not the 'letter-spacing' (aka 'LetterSpacing')
		    attribute is (or will be) present in the MusicXML document. This attribute
		    is a member of the 'letter-spacing' (aka 'LetterSpacing') attributeGroup. **/
		bool getIsLetterSpacingPresent() const
		{
			return myMxAttrGrpLetterSpacing.getIsLetterSpacingPresent();
		}

		/** Indicates whether or not the 'xml:lang' (aka 'XmlLang') attribute is
		    (or will be) present in the MusicXML document. **/
		bool getIsXmlLangPresent() const
		{
			return myIsXmlLangPresent;
		}

		/** Indicates whether or not the 'dir' (aka 'Dir') attribute is (or will
		    be) present in the MusicXML document. This attribute is a member of
		    the 'text-direction' (aka 'TextDirection') attributeGroup. **/
		bool getIsDirPresent() const
		{
			return myMxAttrGrpTextDirection.getIsDirPresent();
		}

/* Set IsAttributePresent Values ------------------------------------------------------ */

		/** Sets the value which indicates whether or not the 'font-family' (aka
		    'FontFamily') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'font' (aka 'Font') attributeGroup. **/
		void setIsFontFamilyPresent( const bool& value_in )
		{
			myMxAttrGrpFont.setIsFontFamilyPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'font-style' (aka
		    'FontStyle') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'font' (aka 'Font') attributeGroup. **/
		void setIsFontStylePresent( const bool& value_in )
		{
			myMxAttrGrpFont.setIsFontStylePresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'font-size' (aka
		    'FontSize') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'font' (aka 'Font') attributeGroup. **/
		void setIsFontSizePresent( const bool& value_in )
		{
			myMxAttrGrpFont.setIsFontSizePresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'font-weight' (aka
		    'FontWeight') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'font' (aka 'Font') attributeGroup. **/
		void setIsFontWeightPresent( const bool& value_in )
		{
			myMxAttrGrpFont.setIsFontWeightPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'color' (aka 'Color')
		    attribute is (or will be) present in the MusicXML document. This attribute
		    is a member of the 'color' (aka 'Color') attributeGroup. **/
		void setIsColorPresent( const bool& value_in )
		{
			myMxAttrGrpColor.setIsColorPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'underline' (aka
		    'Underline') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'text-decoration' (aka 'TextDecoration')
		    attributeGroup. **/
		void setIsUnderlinePresent( const bool& value_in )
		{
			myMxAttrGrpTextDecoration.setIsUnderlinePresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'overline' (aka 'Overline')
		    attribute is (or will be) present in the MusicXML document. This attribute
		    is a member of the 'text-decoration' (aka 'TextDecoration') attributeGroup. **/
		void setIsOverlinePresent( const bool& value_in )
		{
			myMxAttrGrpTextDecoration.setIsOverlinePresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'line-through' (aka
		    'LineThrough') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'text-decoration' (aka 'TextDecoration')
		    attributeGroup. **/
		void setIsLineThroughPresent( const bool& value_in )
		{
			myMxAttrGrpTextDecoration.setIsLineThroughPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'rotation' (aka 'Rotation')
		    attribute is (or will be) present in the MusicXML document. This attribute
		    is a member of the 'text-rotation' (aka 'TextRotation') attributeGroup. **/
		void setIsRotationPresent( const bool& value_in )
		{
			myMxAttrGrpTextRotation.setIsRotationPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'letter-spacing'
		    (aka 'LetterSpacing') attribute is (or will be) present in the MusicXML
		    document. This attribute is a member of the 'letter-spacing' (aka 'LetterSpacing')
		    attributeGroup. **/
		void setIsLetterSpacingPresent( const bool& value_in )
		{
			myMxAttrGrpLetterSpacing.setIsLetterSpacingPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'xml:lang' (aka 'XmlLang')
		    attribute is (or will be) present in the MusicXML document. **/
		void setIsXmlLangPresent( const bool& value_in )
		{
			myIsXmlLangPresent = value_in;
		}

		/** Sets the value which indicates whether or not the 'dir' (aka 'Dir')
		    attribute is (or will be) present in the MusicXML document. This attribute
		    is a member of the 'text-direction' (aka 'TextDirection') attributeGroup. **/
		void setIsDirPresent( const bool& value_in )
		{
			myMxAttrGrpTextDirection.setIsDirPresent( value_in );
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
			hidden::attributeStream( getIsFontFamilyPresent(), "font-family", getFontFamily().toString(), os_out, isFirst );
			hidden::attributeStream( getIsFontStylePresent(), "font-style", getFontStyle().toString(), os_out, isFirst );
			hidden::attributeStream( getIsFontSizePresent(), "font-size", getFontSize().toString(), os_out, isFirst );
			hidden::attributeStream( getIsFontWeightPresent(), "font-weight", getFontWeight().toString(), os_out, isFirst );
			hidden::attributeStream( getIsColorPresent(), "color", getColor().toString(), os_out, isFirst );
			hidden::attributeStream( getIsUnderlinePresent(), "underline", getUnderline().toString(), os_out, isFirst );
			hidden::attributeStream( getIsOverlinePresent(), "overline", getOverline().toString(), os_out, isFirst );
			hidden::attributeStream( getIsLineThroughPresent(), "line-through", getLineThrough().toString(), os_out, isFirst );
			hidden::attributeStream( getIsRotationPresent(), "rotation", getRotation().toString(), os_out, isFirst );
			hidden::attributeStream( getIsLetterSpacingPresent(), "letter-spacing", getLetterSpacing().toString(), os_out, isFirst );
			hidden::attributeStream( getIsXmlLangPresent(), "xml:lang", getXmlLang().toString(), os_out, isFirst );
			hidden::attributeStream( getIsDirPresent(), "dir", getDir().toString(), os_out, isFirst );
			os_out << '>';
			os_out << getValue().toString();
			os_out << "</";
			os_out << getElementName();
			os_out << '>';
			return os_out;
		}

/* Get IsAttributeDefaultDefined Values ----------------------------------------------- */

		/** Indicates whether or not the 'font-family' (aka 'FontFamily') has a
		    default value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'font'
		    (aka 'Font') attributeGroup. **/
		bool getIsFontFamilyDefaultDefined() const
		{
			return myMxAttrGrpFont.getIsFontFamilyDefaultDefined();
		}

		/** Indicates whether or not the 'font-style' (aka 'FontStyle') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'font'
		    (aka 'Font') attributeGroup. **/
		bool getIsFontStyleDefaultDefined() const
		{
			return myMxAttrGrpFont.getIsFontStyleDefaultDefined();
		}

		/** Indicates whether or not the 'font-size' (aka 'FontSize') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'font'
		    (aka 'Font') attributeGroup. **/
		bool getIsFontSizeDefaultDefined() const
		{
			return myMxAttrGrpFont.getIsFontSizeDefaultDefined();
		}

		/** Indicates whether or not the 'font-weight' (aka 'FontWeight') has a
		    default value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'font'
		    (aka 'Font') attributeGroup. **/
		bool getIsFontWeightDefaultDefined() const
		{
			return myMxAttrGrpFont.getIsFontWeightDefaultDefined();
		}

		/** Indicates whether or not the 'color' (aka 'Color') has a default value
		    defined in the MusicXML xsd specification (either explicitly or in
		    the documentation). This attribute is a member of the 'color' (aka
		    'Color') attributeGroup. **/
		bool getIsColorDefaultDefined() const
		{
			return myMxAttrGrpColor.getIsColorDefaultDefined();
		}

		/** Indicates whether or not the 'underline' (aka 'Underline') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'text-decoration'
		    (aka 'TextDecoration') attributeGroup. **/
		bool getIsUnderlineDefaultDefined() const
		{
			return myMxAttrGrpTextDecoration.getIsUnderlineDefaultDefined();
		}

		/** Indicates whether or not the 'overline' (aka 'Overline') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'text-decoration'
		    (aka 'TextDecoration') attributeGroup. **/
		bool getIsOverlineDefaultDefined() const
		{
			return myMxAttrGrpTextDecoration.getIsOverlineDefaultDefined();
		}

		/** Indicates whether or not the 'line-through' (aka 'LineThrough') has
		    a default value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'text-decoration'
		    (aka 'TextDecoration') attributeGroup. **/
		bool getIsLineThroughDefaultDefined() const
		{
			return myMxAttrGrpTextDecoration.getIsLineThroughDefaultDefined();
		}

		/** Indicates whether or not the 'rotation' (aka 'Rotation') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'text-rotation'
		    (aka 'TextRotation') attributeGroup. **/
		bool getIsRotationDefaultDefined() const
		{
			return myMxAttrGrpTextRotation.getIsRotationDefaultDefined();
		}

		/** Indicates whether or not the 'letter-spacing' (aka 'LetterSpacing')
		    has a default value defined in the MusicXML xsd specification (either
		    explicitly or in the documentation). This attribute is a member of
		    the 'letter-spacing' (aka 'LetterSpacing') attributeGroup. **/
		bool getIsLetterSpacingDefaultDefined() const
		{
			return myMxAttrGrpLetterSpacing.getIsLetterSpacingDefaultDefined();
		}

		/** Indicates whether or not the 'xml:lang' (aka 'XmlLang') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). **/
		bool getIsXmlLangDefaultDefined() const
		{
			return false;
		}

		/** Indicates whether or not the 'dir' (aka 'Dir') has a default value
		    defined in the MusicXML xsd specification (either explicitly or in
		    the documentation). This attribute is a member of the 'text-direction'
		    (aka 'TextDirection') attributeGroup. **/
		bool getIsDirDefaultDefined() const
		{
			return myMxAttrGrpTextDirection.getIsDirDefaultDefined();
		}

/* Get AttributeDefaultValue ---------------------------------------------------------- */

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'font-family' (aka 'FontFamily') attribute. This attribute is a
		    member of the 'font' (aka 'Font') attributeGroup. **/
		MxCommaSeparatedText getFontFamilyDefaultValue() const
		{
			return myMxAttrGrpFont.getFontFamilyDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'font-style' (aka 'FontStyle') attribute. This attribute is a member
		    of the 'font' (aka 'Font') attributeGroup. **/
		MxEnumFontStyle getFontStyleDefaultValue() const
		{
			return myMxAttrGrpFont.getFontStyleDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'font-size' (aka 'FontSize') attribute. This attribute is a member
		    of the 'font' (aka 'Font') attributeGroup. **/
		MxFontSize getFontSizeDefaultValue() const
		{
			return myMxAttrGrpFont.getFontSizeDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'font-weight' (aka 'FontWeight') attribute. This attribute is a
		    member of the 'font' (aka 'Font') attributeGroup. **/
		MxEnumFontWeight getFontWeightDefaultValue() const
		{
			return myMxAttrGrpFont.getFontWeightDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'color' (aka 'Color') attribute. This attribute is a member of
		    the 'color' (aka 'Color') attributeGroup. **/
		MxColor getColorDefaultValue() const
		{
			return myMxAttrGrpColor.getColorDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'underline' (aka 'Underline') attribute. This attribute is a member
		    of the 'text-decoration' (aka 'TextDecoration') attributeGroup. **/
		MxNumberNumberOfLines getUnderlineDefaultValue() const
		{
			return myMxAttrGrpTextDecoration.getUnderlineDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'overline' (aka 'Overline') attribute. This attribute is a member
		    of the 'text-decoration' (aka 'TextDecoration') attributeGroup. **/
		MxNumberNumberOfLines getOverlineDefaultValue() const
		{
			return myMxAttrGrpTextDecoration.getOverlineDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'line-through' (aka 'LineThrough') attribute. This attribute is
		    a member of the 'text-decoration' (aka 'TextDecoration') attributeGroup. **/
		MxNumberNumberOfLines getLineThroughDefaultValue() const
		{
			return myMxAttrGrpTextDecoration.getLineThroughDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'rotation' (aka 'Rotation') attribute. This attribute is a member
		    of the 'text-rotation' (aka 'TextRotation') attributeGroup. **/
		MxNumberRotationDegrees getRotationDefaultValue() const
		{
			return myMxAttrGrpTextRotation.getRotationDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'letter-spacing' (aka 'LetterSpacing') attribute. This attribute
		    is a member of the 'letter-spacing' (aka 'LetterSpacing') attributeGroup. **/
		MxNumberOrNormal getLetterSpacingDefaultValue() const
		{
			return myMxAttrGrpLetterSpacing.getLetterSpacingDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'xml:lang' (aka 'XmlLang') attribute. **/
		XmlLang getXmlLangDefaultValue() const
		{
			return XmlLang(  );
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'dir' (aka 'Dir') attribute. This attribute is a member of the
		    'text-direction' (aka 'TextDirection') attributeGroup. **/
		MxEnumTextDirection getDirDefaultValue() const
		{
			return myMxAttrGrpTextDirection.getDirDefaultValue();
		}

	}; // struct MxCxSmpTextElementData::Impl

	const int MxCxSmpTextElementData::Impl::myXsdID = 5435;
	const std::string MxCxSmpTextElementData::Impl::myXmlTypeName = "text-element-data";
	const std::string MxCxSmpTextElementData::Impl::myCppClassName = "MxCxSmpTextElementData";
	const std::string MxCxSmpTextElementData::Impl::myDocumentation = "The text-element-data type represents a syllable or portion of a syllable for lyric text underlay. A hyphen in the string content should only be used for an actual hyphenated word. Language names for text elements come from ISO 639, with optional country subcodes from ISO 3166.";

} // namespace lexicon


/* MxCxSmpTextElementData ------------------------------------------------------------- */

namespace lexicon
{

/* Constructor, Destructor, Copy, Assignment ------------------------------------------ */

	MxCxSmpTextElementData::MxCxSmpTextElementData( const std::string& elementName, const XsString& value_in )
	:myImpl( new Impl( elementName, value_in ) ) {}

	MxCxSmpTextElementData::~MxCxSmpTextElementData() {}

	MxCxSmpTextElementData::MxCxSmpTextElementData( const MxCxSmpTextElementData& other )
	:myImpl( new Impl( *(other.myImpl) ) ) {}

	MxCxSmpTextElementData& MxCxSmpTextElementData::operator=( const MxCxSmpTextElementData& other )
	{
		this->myImpl = std::unique_ptr<Impl>( new Impl( *(other.myImpl) ) );
		return *this;
	}

/* GetSet Value and Element Name ------------------------------------------------------ */

	/** Returns the contained xs:simpleContent value. **/
	XsString MxCxSmpTextElementData::getValue() const
	{
		return myImpl->getValue();
	}

	/** Sets the contained xs:simpleContent value. **/
	void MxCxSmpTextElementData::setValue( const XsString& value_in )
	{
		myImpl->setValue( value_in );
	}

	/** Returns the name of the Xml element employing this ComplexType. **/
	std::string MxCxSmpTextElementData::getElementName() const
	{
		return myImpl->getElementName();
	}

/* Get Class Information -------------------------------------------------------------- */

	/** Returns the name of this xs:complexType as found in the musicxml.xsd
	    document. **/
	std::string MxCxSmpTextElementData::getXmlTypeName() const
	{
		return myImpl->getXmlTypeName();
	}

	/** Returns the name of this C++ class. **/
	std::string MxCxSmpTextElementData::getClassName() const
	{
		return myImpl->getClassName();
	}

	/** Returns the documentation for this musicxml type as found in the musicxml.xsd
	    document. **/
	std::string MxCxSmpTextElementData::getDocumentation() const
	{
		return myImpl->getDocumentation();
	}

/* Get Attribute Values --------------------------------------------------------------- */

	/** Returns the internal value of the 'font-family' (aka 'FontFamily')
	    attribute. This attribute is a member of the 'font' (aka 'Font') attributeGroup. **/
	MxCommaSeparatedText MxCxSmpTextElementData::getFontFamily() const
	{
		return myImpl->getFontFamily();
	}

	/** Returns the internal value of the 'font-style' (aka 'FontStyle') attribute.
	    This attribute is a member of the 'font' (aka 'Font') attributeGroup. **/
	MxEnumFontStyle MxCxSmpTextElementData::getFontStyle() const
	{
		return myImpl->getFontStyle();
	}

	/** Returns the internal value of the 'font-size' (aka 'FontSize') attribute.
	    This attribute is a member of the 'font' (aka 'Font') attributeGroup. **/
	MxFontSize MxCxSmpTextElementData::getFontSize() const
	{
		return myImpl->getFontSize();
	}

	/** Returns the internal value of the 'font-weight' (aka 'FontWeight')
	    attribute. This attribute is a member of the 'font' (aka 'Font') attributeGroup. **/
	MxEnumFontWeight MxCxSmpTextElementData::getFontWeight() const
	{
		return myImpl->getFontWeight();
	}

	/** Returns the internal value of the 'color' (aka 'Color') attribute.
	    This attribute is a member of the 'color' (aka 'Color') attributeGroup. **/
	MxColor MxCxSmpTextElementData::getColor() const
	{
		return myImpl->getColor();
	}

	/** Returns the internal value of the 'underline' (aka 'Underline') attribute.
	    This attribute is a member of the 'text-decoration' (aka 'TextDecoration')
	    attributeGroup. **/
	MxNumberNumberOfLines MxCxSmpTextElementData::getUnderline() const
	{
		return myImpl->getUnderline();
	}

	/** Returns the internal value of the 'overline' (aka 'Overline') attribute.
	    This attribute is a member of the 'text-decoration' (aka 'TextDecoration')
	    attributeGroup. **/
	MxNumberNumberOfLines MxCxSmpTextElementData::getOverline() const
	{
		return myImpl->getOverline();
	}

	/** Returns the internal value of the 'line-through' (aka 'LineThrough')
	    attribute. This attribute is a member of the 'text-decoration' (aka
	    'TextDecoration') attributeGroup. **/
	MxNumberNumberOfLines MxCxSmpTextElementData::getLineThrough() const
	{
		return myImpl->getLineThrough();
	}

	/** Returns the internal value of the 'rotation' (aka 'Rotation') attribute.
	    This attribute is a member of the 'text-rotation' (aka 'TextRotation')
	    attributeGroup. **/
	MxNumberRotationDegrees MxCxSmpTextElementData::getRotation() const
	{
		return myImpl->getRotation();
	}

	/** Returns the internal value of the 'letter-spacing' (aka 'LetterSpacing')
	    attribute. This attribute is a member of the 'letter-spacing' (aka
	    'LetterSpacing') attributeGroup. **/
	MxNumberOrNormal MxCxSmpTextElementData::getLetterSpacing() const
	{
		return myImpl->getLetterSpacing();
	}

	/** Returns the internal value of the 'xml:lang' (aka 'XmlLang') attribute. **/
	XmlLang MxCxSmpTextElementData::getXmlLang() const
	{
		return myImpl->getXmlLang();
	}

	/** Returns the internal value of the 'dir' (aka 'Dir') attribute. This
	    attribute is a member of the 'text-direction' (aka 'TextDirection')
	    attributeGroup. **/
	MxEnumTextDirection MxCxSmpTextElementData::getDir() const
	{
		return myImpl->getDir();
	}

/* Set Attribute Values --------------------------------------------------------------- */

	/** Sets the internal value of the 'font-family' (aka 'FontFamily') attribute.
	    This attribute is a member of the 'font' (aka 'Font') attributeGroup. **/
	void MxCxSmpTextElementData::setFontFamily( const MxCommaSeparatedText& value_in )
	{
		myImpl->setFontFamily( value_in );
	}

	/** Sets the internal value of the 'font-style' (aka 'FontStyle') attribute.
	    This attribute is a member of the 'font' (aka 'Font') attributeGroup. **/
	void MxCxSmpTextElementData::setFontStyle( const MxEnumFontStyle& value_in )
	{
		myImpl->setFontStyle( value_in );
	}

	/** Sets the internal value of the 'font-size' (aka 'FontSize') attribute.
	    This attribute is a member of the 'font' (aka 'Font') attributeGroup. **/
	void MxCxSmpTextElementData::setFontSize( const MxFontSize& value_in )
	{
		myImpl->setFontSize( value_in );
	}

	/** Sets the internal value of the 'font-weight' (aka 'FontWeight') attribute.
	    This attribute is a member of the 'font' (aka 'Font') attributeGroup. **/
	void MxCxSmpTextElementData::setFontWeight( const MxEnumFontWeight& value_in )
	{
		myImpl->setFontWeight( value_in );
	}

	/** Sets the internal value of the 'color' (aka 'Color') attribute. This
	    attribute is a member of the 'color' (aka 'Color') attributeGroup. **/
	void MxCxSmpTextElementData::setColor( const MxColor& value_in )
	{
		myImpl->setColor( value_in );
	}

	/** Sets the internal value of the 'underline' (aka 'Underline') attribute.
	    This attribute is a member of the 'text-decoration' (aka 'TextDecoration')
	    attributeGroup. **/
	void MxCxSmpTextElementData::setUnderline( const MxNumberNumberOfLines& value_in )
	{
		myImpl->setUnderline( value_in );
	}

	/** Sets the internal value of the 'overline' (aka 'Overline') attribute.
	    This attribute is a member of the 'text-decoration' (aka 'TextDecoration')
	    attributeGroup. **/
	void MxCxSmpTextElementData::setOverline( const MxNumberNumberOfLines& value_in )
	{
		myImpl->setOverline( value_in );
	}

	/** Sets the internal value of the 'line-through' (aka 'LineThrough') attribute.
	    This attribute is a member of the 'text-decoration' (aka 'TextDecoration')
	    attributeGroup. **/
	void MxCxSmpTextElementData::setLineThrough( const MxNumberNumberOfLines& value_in )
	{
		myImpl->setLineThrough( value_in );
	}

	/** Sets the internal value of the 'rotation' (aka 'Rotation') attribute.
	    This attribute is a member of the 'text-rotation' (aka 'TextRotation')
	    attributeGroup. **/
	void MxCxSmpTextElementData::setRotation( const MxNumberRotationDegrees& value_in )
	{
		myImpl->setRotation( value_in );
	}

	/** Sets the internal value of the 'letter-spacing' (aka 'LetterSpacing')
	    attribute. This attribute is a member of the 'letter-spacing' (aka
	    'LetterSpacing') attributeGroup. **/
	void MxCxSmpTextElementData::setLetterSpacing( const MxNumberOrNormal& value_in )
	{
		myImpl->setLetterSpacing( value_in );
	}

	/** Sets the internal value of the 'xml:lang' (aka 'XmlLang') attribute. **/
	void MxCxSmpTextElementData::setXmlLang( const XmlLang& value_in )
	{
		myImpl->setXmlLang( value_in );
	}

	/** Sets the internal value of the 'dir' (aka 'Dir') attribute. This attribute
	    is a member of the 'text-direction' (aka 'TextDirection') attributeGroup. **/
	void MxCxSmpTextElementData::setDir( const MxEnumTextDirection& value_in )
	{
		myImpl->setDir( value_in );
	}

/* Get IsAttributeRequired Values ----------------------------------------------------- */

	/** Indicates whether or not the 'font-family' (aka 'FontFamily') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'font' (aka 'Font') attributeGroup. **/
	bool MxCxSmpTextElementData::getIsFontFamilyRequired() const
	{
		return myImpl->getIsFontFamilyRequired();
	}

	/** Indicates whether or not the 'font-style' (aka 'FontStyle') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'font' (aka 'Font') attributeGroup. **/
	bool MxCxSmpTextElementData::getIsFontStyleRequired() const
	{
		return myImpl->getIsFontStyleRequired();
	}

	/** Indicates whether or not the 'font-size' (aka 'FontSize') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'font' (aka 'Font') attributeGroup. **/
	bool MxCxSmpTextElementData::getIsFontSizeRequired() const
	{
		return myImpl->getIsFontSizeRequired();
	}

	/** Indicates whether or not the 'font-weight' (aka 'FontWeight') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'font' (aka 'Font') attributeGroup. **/
	bool MxCxSmpTextElementData::getIsFontWeightRequired() const
	{
		return myImpl->getIsFontWeightRequired();
	}

	/** Indicates whether or not the 'color' (aka 'Color') attribute is required
	    to be present in a MusicXML document. This attribute is a member of
	    the 'color' (aka 'Color') attributeGroup. **/
	bool MxCxSmpTextElementData::getIsColorRequired() const
	{
		return myImpl->getIsColorRequired();
	}

	/** Indicates whether or not the 'underline' (aka 'Underline') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'text-decoration' (aka 'TextDecoration') attributeGroup. **/
	bool MxCxSmpTextElementData::getIsUnderlineRequired() const
	{
		return myImpl->getIsUnderlineRequired();
	}

	/** Indicates whether or not the 'overline' (aka 'Overline') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'text-decoration' (aka 'TextDecoration') attributeGroup. **/
	bool MxCxSmpTextElementData::getIsOverlineRequired() const
	{
		return myImpl->getIsOverlineRequired();
	}

	/** Indicates whether or not the 'line-through' (aka 'LineThrough') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'text-decoration' (aka 'TextDecoration') attributeGroup. **/
	bool MxCxSmpTextElementData::getIsLineThroughRequired() const
	{
		return myImpl->getIsLineThroughRequired();
	}

	/** Indicates whether or not the 'rotation' (aka 'Rotation') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'text-rotation' (aka 'TextRotation') attributeGroup. **/
	bool MxCxSmpTextElementData::getIsRotationRequired() const
	{
		return myImpl->getIsRotationRequired();
	}

	/** Indicates whether or not the 'letter-spacing' (aka 'LetterSpacing')
	    attribute is required to be present in a MusicXML document. This attribute
	    is a member of the 'letter-spacing' (aka 'LetterSpacing') attributeGroup. **/
	bool MxCxSmpTextElementData::getIsLetterSpacingRequired() const
	{
		return myImpl->getIsLetterSpacingRequired();
	}

	/** Indicates whether or not the 'xml:lang' (aka 'XmlLang') attribute is
	    required to be present in a MusicXML document. **/
	bool MxCxSmpTextElementData::getIsXmlLangRequired() const
	{
		return myImpl->getIsXmlLangRequired();
	}

	/** Indicates whether or not the 'dir' (aka 'Dir') attribute is required
	    to be present in a MusicXML document. This attribute is a member of
	    the 'text-direction' (aka 'TextDirection') attributeGroup. **/
	bool MxCxSmpTextElementData::getIsDirRequired() const
	{
		return myImpl->getIsDirRequired();
	}

/* Get IsAttributePresent Values ------------------------------------------------------ */

	/** Indicates whether or not the 'font-family' (aka 'FontFamily') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'font' (aka 'Font') attributeGroup. **/
	bool MxCxSmpTextElementData::getIsFontFamilyPresent() const
	{
		return myImpl->getIsFontFamilyPresent();
	}

	/** Indicates whether or not the 'font-style' (aka 'FontStyle') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'font' (aka 'Font') attributeGroup. **/
	bool MxCxSmpTextElementData::getIsFontStylePresent() const
	{
		return myImpl->getIsFontStylePresent();
	}

	/** Indicates whether or not the 'font-size' (aka 'FontSize') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'font' (aka 'Font') attributeGroup. **/
	bool MxCxSmpTextElementData::getIsFontSizePresent() const
	{
		return myImpl->getIsFontSizePresent();
	}

	/** Indicates whether or not the 'font-weight' (aka 'FontWeight') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'font' (aka 'Font') attributeGroup. **/
	bool MxCxSmpTextElementData::getIsFontWeightPresent() const
	{
		return myImpl->getIsFontWeightPresent();
	}

	/** Indicates whether or not the 'color' (aka 'Color') attribute is (or
	    will be) present in the MusicXML document. This attribute is a member
	    of the 'color' (aka 'Color') attributeGroup. **/
	bool MxCxSmpTextElementData::getIsColorPresent() const
	{
		return myImpl->getIsColorPresent();
	}

	/** Indicates whether or not the 'underline' (aka 'Underline') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'text-decoration' (aka 'TextDecoration') attributeGroup. **/
	bool MxCxSmpTextElementData::getIsUnderlinePresent() const
	{
		return myImpl->getIsUnderlinePresent();
	}

	/** Indicates whether or not the 'overline' (aka 'Overline') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'text-decoration' (aka 'TextDecoration') attributeGroup. **/
	bool MxCxSmpTextElementData::getIsOverlinePresent() const
	{
		return myImpl->getIsOverlinePresent();
	}

	/** Indicates whether or not the 'line-through' (aka 'LineThrough') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'text-decoration' (aka 'TextDecoration') attributeGroup. **/
	bool MxCxSmpTextElementData::getIsLineThroughPresent() const
	{
		return myImpl->getIsLineThroughPresent();
	}

	/** Indicates whether or not the 'rotation' (aka 'Rotation') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'text-rotation' (aka 'TextRotation') attributeGroup. **/
	bool MxCxSmpTextElementData::getIsRotationPresent() const
	{
		return myImpl->getIsRotationPresent();
	}

	/** Indicates whether or not the 'letter-spacing' (aka 'LetterSpacing')
	    attribute is (or will be) present in the MusicXML document. This attribute
	    is a member of the 'letter-spacing' (aka 'LetterSpacing') attributeGroup. **/
	bool MxCxSmpTextElementData::getIsLetterSpacingPresent() const
	{
		return myImpl->getIsLetterSpacingPresent();
	}

	/** Indicates whether or not the 'xml:lang' (aka 'XmlLang') attribute is
	    (or will be) present in the MusicXML document. **/
	bool MxCxSmpTextElementData::getIsXmlLangPresent() const
	{
		return myImpl->getIsXmlLangPresent();
	}

	/** Indicates whether or not the 'dir' (aka 'Dir') attribute is (or will
	    be) present in the MusicXML document. This attribute is a member of
	    the 'text-direction' (aka 'TextDirection') attributeGroup. **/
	bool MxCxSmpTextElementData::getIsDirPresent() const
	{
		return myImpl->getIsDirPresent();
	}

/* Set IsAttributePresent Values ------------------------------------------------------ */

	/** Sets the value which indicates whether or not the 'font-family' (aka
	    'FontFamily') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'font' (aka 'Font') attributeGroup. **/
	void MxCxSmpTextElementData::setIsFontFamilyPresent( const bool& value_in )
	{
		myImpl->setIsFontFamilyPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'font-style' (aka
	    'FontStyle') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'font' (aka 'Font') attributeGroup. **/
	void MxCxSmpTextElementData::setIsFontStylePresent( const bool& value_in )
	{
		myImpl->setIsFontStylePresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'font-size' (aka
	    'FontSize') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'font' (aka 'Font') attributeGroup. **/
	void MxCxSmpTextElementData::setIsFontSizePresent( const bool& value_in )
	{
		myImpl->setIsFontSizePresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'font-weight' (aka
	    'FontWeight') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'font' (aka 'Font') attributeGroup. **/
	void MxCxSmpTextElementData::setIsFontWeightPresent( const bool& value_in )
	{
		myImpl->setIsFontWeightPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'color' (aka 'Color')
	    attribute is (or will be) present in the MusicXML document. This attribute
	    is a member of the 'color' (aka 'Color') attributeGroup. **/
	void MxCxSmpTextElementData::setIsColorPresent( const bool& value_in )
	{
		myImpl->setIsColorPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'underline' (aka
	    'Underline') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'text-decoration' (aka 'TextDecoration')
	    attributeGroup. **/
	void MxCxSmpTextElementData::setIsUnderlinePresent( const bool& value_in )
	{
		myImpl->setIsUnderlinePresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'overline' (aka 'Overline')
	    attribute is (or will be) present in the MusicXML document. This attribute
	    is a member of the 'text-decoration' (aka 'TextDecoration') attributeGroup. **/
	void MxCxSmpTextElementData::setIsOverlinePresent( const bool& value_in )
	{
		myImpl->setIsOverlinePresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'line-through' (aka
	    'LineThrough') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'text-decoration' (aka 'TextDecoration')
	    attributeGroup. **/
	void MxCxSmpTextElementData::setIsLineThroughPresent( const bool& value_in )
	{
		myImpl->setIsLineThroughPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'rotation' (aka 'Rotation')
	    attribute is (or will be) present in the MusicXML document. This attribute
	    is a member of the 'text-rotation' (aka 'TextRotation') attributeGroup. **/
	void MxCxSmpTextElementData::setIsRotationPresent( const bool& value_in )
	{
		myImpl->setIsRotationPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'letter-spacing'
	    (aka 'LetterSpacing') attribute is (or will be) present in the MusicXML
	    document. This attribute is a member of the 'letter-spacing' (aka 'LetterSpacing')
	    attributeGroup. **/
	void MxCxSmpTextElementData::setIsLetterSpacingPresent( const bool& value_in )
	{
		myImpl->setIsLetterSpacingPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'xml:lang' (aka 'XmlLang')
	    attribute is (or will be) present in the MusicXML document. **/
	void MxCxSmpTextElementData::setIsXmlLangPresent( const bool& value_in )
	{
		myImpl->setIsXmlLangPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'dir' (aka 'Dir')
	    attribute is (or will be) present in the MusicXML document. This attribute
	    is a member of the 'text-direction' (aka 'TextDirection') attributeGroup. **/
	void MxCxSmpTextElementData::setIsDirPresent( const bool& value_in )
	{
		myImpl->setIsDirPresent( value_in );
	}

/* Stringing and Streaming ------------------------------------------------------------ */

	/** Returns the xml representation of the object's value. **/
	std::string MxCxSmpTextElementData::toString() const
	{
		return myImpl->toString();
	}

	/** Returns the xml representation of the object's value. **/
	std::ostream& MxCxSmpTextElementData::stream( std::ostream& os_out ) const
	{
		return myImpl->stream( os_out );
	}

/* Get IsAttributeDefaultDefined Values ----------------------------------------------- */

	/** Indicates whether or not the 'font-family' (aka 'FontFamily') has a
	    default value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'font'
	    (aka 'Font') attributeGroup. **/
	bool MxCxSmpTextElementData::getIsFontFamilyDefaultDefined() const
	{
		return myImpl->getIsFontFamilyDefaultDefined();
	}

	/** Indicates whether or not the 'font-style' (aka 'FontStyle') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'font'
	    (aka 'Font') attributeGroup. **/
	bool MxCxSmpTextElementData::getIsFontStyleDefaultDefined() const
	{
		return myImpl->getIsFontStyleDefaultDefined();
	}

	/** Indicates whether or not the 'font-size' (aka 'FontSize') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'font'
	    (aka 'Font') attributeGroup. **/
	bool MxCxSmpTextElementData::getIsFontSizeDefaultDefined() const
	{
		return myImpl->getIsFontSizeDefaultDefined();
	}

	/** Indicates whether or not the 'font-weight' (aka 'FontWeight') has a
	    default value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'font'
	    (aka 'Font') attributeGroup. **/
	bool MxCxSmpTextElementData::getIsFontWeightDefaultDefined() const
	{
		return myImpl->getIsFontWeightDefaultDefined();
	}

	/** Indicates whether or not the 'color' (aka 'Color') has a default value
	    defined in the MusicXML xsd specification (either explicitly or in
	    the documentation). This attribute is a member of the 'color' (aka
	    'Color') attributeGroup. **/
	bool MxCxSmpTextElementData::getIsColorDefaultDefined() const
	{
		return myImpl->getIsColorDefaultDefined();
	}

	/** Indicates whether or not the 'underline' (aka 'Underline') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'text-decoration'
	    (aka 'TextDecoration') attributeGroup. **/
	bool MxCxSmpTextElementData::getIsUnderlineDefaultDefined() const
	{
		return myImpl->getIsUnderlineDefaultDefined();
	}

	/** Indicates whether or not the 'overline' (aka 'Overline') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'text-decoration'
	    (aka 'TextDecoration') attributeGroup. **/
	bool MxCxSmpTextElementData::getIsOverlineDefaultDefined() const
	{
		return myImpl->getIsOverlineDefaultDefined();
	}

	/** Indicates whether or not the 'line-through' (aka 'LineThrough') has
	    a default value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'text-decoration'
	    (aka 'TextDecoration') attributeGroup. **/
	bool MxCxSmpTextElementData::getIsLineThroughDefaultDefined() const
	{
		return myImpl->getIsLineThroughDefaultDefined();
	}

	/** Indicates whether or not the 'rotation' (aka 'Rotation') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'text-rotation'
	    (aka 'TextRotation') attributeGroup. **/
	bool MxCxSmpTextElementData::getIsRotationDefaultDefined() const
	{
		return myImpl->getIsRotationDefaultDefined();
	}

	/** Indicates whether or not the 'letter-spacing' (aka 'LetterSpacing')
	    has a default value defined in the MusicXML xsd specification (either
	    explicitly or in the documentation). This attribute is a member of
	    the 'letter-spacing' (aka 'LetterSpacing') attributeGroup. **/
	bool MxCxSmpTextElementData::getIsLetterSpacingDefaultDefined() const
	{
		return myImpl->getIsLetterSpacingDefaultDefined();
	}

	/** Indicates whether or not the 'xml:lang' (aka 'XmlLang') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). **/
	bool MxCxSmpTextElementData::getIsXmlLangDefaultDefined() const
	{
		return myImpl->getIsXmlLangDefaultDefined();
	}

	/** Indicates whether or not the 'dir' (aka 'Dir') has a default value
	    defined in the MusicXML xsd specification (either explicitly or in
	    the documentation). This attribute is a member of the 'text-direction'
	    (aka 'TextDirection') attributeGroup. **/
	bool MxCxSmpTextElementData::getIsDirDefaultDefined() const
	{
		return myImpl->getIsDirDefaultDefined();
	}

/* Get AttributeDefaultValue ---------------------------------------------------------- */

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'font-family' (aka 'FontFamily') attribute. This attribute is a
	    member of the 'font' (aka 'Font') attributeGroup. **/
	MxCommaSeparatedText MxCxSmpTextElementData::getFontFamilyDefaultValue() const
	{
		return myImpl->getFontFamilyDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'font-style' (aka 'FontStyle') attribute. This attribute is a member
	    of the 'font' (aka 'Font') attributeGroup. **/
	MxEnumFontStyle MxCxSmpTextElementData::getFontStyleDefaultValue() const
	{
		return myImpl->getFontStyleDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'font-size' (aka 'FontSize') attribute. This attribute is a member
	    of the 'font' (aka 'Font') attributeGroup. **/
	MxFontSize MxCxSmpTextElementData::getFontSizeDefaultValue() const
	{
		return myImpl->getFontSizeDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'font-weight' (aka 'FontWeight') attribute. This attribute is a
	    member of the 'font' (aka 'Font') attributeGroup. **/
	MxEnumFontWeight MxCxSmpTextElementData::getFontWeightDefaultValue() const
	{
		return myImpl->getFontWeightDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'color' (aka 'Color') attribute. This attribute is a member of
	    the 'color' (aka 'Color') attributeGroup. **/
	MxColor MxCxSmpTextElementData::getColorDefaultValue() const
	{
		return myImpl->getColorDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'underline' (aka 'Underline') attribute. This attribute is a member
	    of the 'text-decoration' (aka 'TextDecoration') attributeGroup. **/
	MxNumberNumberOfLines MxCxSmpTextElementData::getUnderlineDefaultValue() const
	{
		return myImpl->getUnderlineDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'overline' (aka 'Overline') attribute. This attribute is a member
	    of the 'text-decoration' (aka 'TextDecoration') attributeGroup. **/
	MxNumberNumberOfLines MxCxSmpTextElementData::getOverlineDefaultValue() const
	{
		return myImpl->getOverlineDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'line-through' (aka 'LineThrough') attribute. This attribute is
	    a member of the 'text-decoration' (aka 'TextDecoration') attributeGroup. **/
	MxNumberNumberOfLines MxCxSmpTextElementData::getLineThroughDefaultValue() const
	{
		return myImpl->getLineThroughDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'rotation' (aka 'Rotation') attribute. This attribute is a member
	    of the 'text-rotation' (aka 'TextRotation') attributeGroup. **/
	MxNumberRotationDegrees MxCxSmpTextElementData::getRotationDefaultValue() const
	{
		return myImpl->getRotationDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'letter-spacing' (aka 'LetterSpacing') attribute. This attribute
	    is a member of the 'letter-spacing' (aka 'LetterSpacing') attributeGroup. **/
	MxNumberOrNormal MxCxSmpTextElementData::getLetterSpacingDefaultValue() const
	{
		return myImpl->getLetterSpacingDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'xml:lang' (aka 'XmlLang') attribute. **/
	XmlLang MxCxSmpTextElementData::getXmlLangDefaultValue() const
	{
		return myImpl->getXmlLangDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'dir' (aka 'Dir') attribute. This attribute is a member of the
	    'text-direction' (aka 'TextDirection') attributeGroup. **/
	MxEnumTextDirection MxCxSmpTextElementData::getDirDefaultValue() const
	{
		return myImpl->getDirDefaultValue();
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

