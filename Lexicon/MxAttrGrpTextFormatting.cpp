/* See MusicXML License at the bottom of this code page. */

/**
  * @file       MxAttrGrpTextFormatting.cpp
  * @class      lexicon::MxAttrGrpTextFormatting
  * @author     Matthew James Briggs
  * @email      matthew.james.briggs@gmail.com
  * @url        http://matthewjamesbriggs.com
  * @date       2014-11-28 14:15:39
  * @project    Lexicon
  * @version    1.0
  * @musicxmlid 2015
  * 
  * @brief The 'TextFormatting' class serves as a binding for the MusicXml 'text-formatting'
  * attributeGroup.
  * 
 **/

#include "MxAttrGrpTextFormatting.h"
#include <sstream>
#include "_hidden_attributeStream.h"
#include "MxAttrGrpEnclosure.h"
#include "MxAttrGrpJustify.h"
#include "MxAttrGrpLetterSpacing.h"
#include "MxAttrGrpLineHeight.h"
#include "MxAttrGrpPrintStyleAlign.h"
#include "MxAttrGrpTextDecoration.h"
#include "MxAttrGrpTextDirection.h"
#include "MxAttrGrpTextRotation.h"

/* Impl ------------------------------------------------------------------------------- */

namespace lexicon
{
	struct MxAttrGrpTextFormatting::Impl
	{
		Impl()
		:myJustify()
		,myPrintStyleAlign()
		,myTextDecoration()
		,myTextRotation()
		,myLetterSpacing()
		,myLineHeight()
		,myXmlLang()
		,myXmlSpace()
		,myTextDirection()
		,myEnclosure()
		,myIsXmlLangPresent( false )
		,myIsXmlSpacePresent( false )
		{}

	private:
		MxAttrGrpJustify myJustify;
		MxAttrGrpPrintStyleAlign myPrintStyleAlign;
		MxAttrGrpTextDecoration myTextDecoration;
		MxAttrGrpTextRotation myTextRotation;
		MxAttrGrpLetterSpacing myLetterSpacing;
		MxAttrGrpLineHeight myLineHeight;
		XmlLang myXmlLang;
		XmlSpace myXmlSpace;
		MxAttrGrpTextDirection myTextDirection;
		MxAttrGrpEnclosure myEnclosure;
		bool myIsXmlLangPresent;
		bool myIsXmlSpacePresent;

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

		/** Returns the internal value of the 'justify' (aka 'Justify') attribute.
		    This attribute is a member of the 'justify' (aka 'Justify') attributeGroup. **/
		MxEnumLeftCenterRight getJustify() const
		{
			return myJustify.getJustify();
		}

		/** Returns the internal value of the 'default-x' (aka 'DefaultX') attribute.
		    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
		    attributeGroup. **/
		MxNumberTenths getDefaultX() const
		{
			return myPrintStyleAlign.getDefaultX();
		}

		/** Returns the internal value of the 'default-y' (aka 'DefaultY') attribute.
		    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
		    attributeGroup. **/
		MxNumberTenths getDefaultY() const
		{
			return myPrintStyleAlign.getDefaultY();
		}

		/** Returns the internal value of the 'relative-x' (aka 'RelativeX') attribute.
		    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
		    attributeGroup. **/
		MxNumberTenths getRelativeX() const
		{
			return myPrintStyleAlign.getRelativeX();
		}

		/** Returns the internal value of the 'relative-y' (aka 'RelativeY') attribute.
		    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
		    attributeGroup. **/
		MxNumberTenths getRelativeY() const
		{
			return myPrintStyleAlign.getRelativeY();
		}

		/** Returns the internal value of the 'font-family' (aka 'FontFamily')
		    attribute. This attribute is a member of the 'print-style-align' (aka
		    'PrintStyleAlign') attributeGroup. **/
		MxCommaSeparatedText getFontFamily() const
		{
			return myPrintStyleAlign.getFontFamily();
		}

		/** Returns the internal value of the 'font-style' (aka 'FontStyle') attribute.
		    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
		    attributeGroup. **/
		MxEnumFontStyle getFontStyle() const
		{
			return myPrintStyleAlign.getFontStyle();
		}

		/** Returns the internal value of the 'font-size' (aka 'FontSize') attribute.
		    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
		    attributeGroup. **/
		MxFontSize getFontSize() const
		{
			return myPrintStyleAlign.getFontSize();
		}

		/** Returns the internal value of the 'font-weight' (aka 'FontWeight')
		    attribute. This attribute is a member of the 'print-style-align' (aka
		    'PrintStyleAlign') attributeGroup. **/
		MxEnumFontWeight getFontWeight() const
		{
			return myPrintStyleAlign.getFontWeight();
		}

		/** Returns the internal value of the 'color' (aka 'Color') attribute.
		    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
		    attributeGroup. **/
		MxColor getColor() const
		{
			return myPrintStyleAlign.getColor();
		}

		/** Returns the internal value of the 'halign' (aka 'Halign') attribute.
		    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
		    attributeGroup. **/
		MxEnumLeftCenterRight getHalign() const
		{
			return myPrintStyleAlign.getHalign();
		}

		/** Returns the internal value of the 'valign' (aka 'Valign') attribute.
		    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
		    attributeGroup. **/
		MxEnumValign getValign() const
		{
			return myPrintStyleAlign.getValign();
		}

		/** Returns the internal value of the 'underline' (aka 'Underline') attribute.
		    This attribute is a member of the 'text-decoration' (aka 'TextDecoration')
		    attributeGroup. **/
		MxNumberNumberOfLines getUnderline() const
		{
			return myTextDecoration.getUnderline();
		}

		/** Returns the internal value of the 'overline' (aka 'Overline') attribute.
		    This attribute is a member of the 'text-decoration' (aka 'TextDecoration')
		    attributeGroup. **/
		MxNumberNumberOfLines getOverline() const
		{
			return myTextDecoration.getOverline();
		}

		/** Returns the internal value of the 'line-through' (aka 'LineThrough')
		    attribute. This attribute is a member of the 'text-decoration' (aka
		    'TextDecoration') attributeGroup. **/
		MxNumberNumberOfLines getLineThrough() const
		{
			return myTextDecoration.getLineThrough();
		}

		/** Returns the internal value of the 'rotation' (aka 'Rotation') attribute.
		    This attribute is a member of the 'text-rotation' (aka 'TextRotation')
		    attributeGroup. **/
		MxNumberRotationDegrees getRotation() const
		{
			return myTextRotation.getRotation();
		}

		/** Returns the internal value of the 'letter-spacing' (aka 'LetterSpacing')
		    attribute. This attribute is a member of the 'letter-spacing' (aka
		    'LetterSpacing') attributeGroup. **/
		MxNumberOrNormal getLetterSpacing() const
		{
			return myLetterSpacing.getLetterSpacing();
		}

		/** Returns the internal value of the 'line-height' (aka 'LineHeight')
		    attribute. This attribute is a member of the 'line-height' (aka 'LineHeight')
		    attributeGroup. **/
		MxNumberOrNormal getLineHeight() const
		{
			return myLineHeight.getLineHeight();
		}

		/** Returns the internal value of the 'xml:lang' (aka 'XmlLang') attribute. **/
		XmlLang getXmlLang() const
		{
			return myXmlLang;
		}

		/** Returns the internal value of the 'xml:space' (aka 'XmlSpace') attribute. **/
		XmlSpace getXmlSpace() const
		{
			return myXmlSpace;
		}

		/** Returns the internal value of the 'dir' (aka 'Dir') attribute. This
		    attribute is a member of the 'text-direction' (aka 'TextDirection')
		    attributeGroup. **/
		MxEnumTextDirection getDir() const
		{
			return myTextDirection.getDir();
		}

		/** Returns the internal value of the 'enclosure' (aka 'Enclosure') attribute.
		    This attribute is a member of the 'enclosure' (aka 'Enclosure') attributeGroup. **/
		MxEnumEnclosureShape getEnclosure() const
		{
			return myEnclosure.getEnclosure();
		}

/* Set Attribute Values --------------------------------------------------------------- */

		/** Sets the internal value of the 'justify' (aka 'Justify') attribute.
		    This attribute is a member of the 'justify' (aka 'Justify') attributeGroup. **/
		void setJustify( const MxEnumLeftCenterRight& value_in )
		{
			myJustify.setJustify( value_in );
		}

		/** Sets the internal value of the 'default-x' (aka 'DefaultX') attribute.
		    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
		    attributeGroup. **/
		void setDefaultX( const MxNumberTenths& value_in )
		{
			myPrintStyleAlign.setDefaultX( value_in );
		}

		/** Sets the internal value of the 'default-y' (aka 'DefaultY') attribute.
		    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
		    attributeGroup. **/
		void setDefaultY( const MxNumberTenths& value_in )
		{
			myPrintStyleAlign.setDefaultY( value_in );
		}

		/** Sets the internal value of the 'relative-x' (aka 'RelativeX') attribute.
		    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
		    attributeGroup. **/
		void setRelativeX( const MxNumberTenths& value_in )
		{
			myPrintStyleAlign.setRelativeX( value_in );
		}

		/** Sets the internal value of the 'relative-y' (aka 'RelativeY') attribute.
		    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
		    attributeGroup. **/
		void setRelativeY( const MxNumberTenths& value_in )
		{
			myPrintStyleAlign.setRelativeY( value_in );
		}

		/** Sets the internal value of the 'font-family' (aka 'FontFamily') attribute.
		    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
		    attributeGroup. **/
		void setFontFamily( const MxCommaSeparatedText& value_in )
		{
			myPrintStyleAlign.setFontFamily( value_in );
		}

		/** Sets the internal value of the 'font-style' (aka 'FontStyle') attribute.
		    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
		    attributeGroup. **/
		void setFontStyle( const MxEnumFontStyle& value_in )
		{
			myPrintStyleAlign.setFontStyle( value_in );
		}

		/** Sets the internal value of the 'font-size' (aka 'FontSize') attribute.
		    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
		    attributeGroup. **/
		void setFontSize( const MxFontSize& value_in )
		{
			myPrintStyleAlign.setFontSize( value_in );
		}

		/** Sets the internal value of the 'font-weight' (aka 'FontWeight') attribute.
		    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
		    attributeGroup. **/
		void setFontWeight( const MxEnumFontWeight& value_in )
		{
			myPrintStyleAlign.setFontWeight( value_in );
		}

		/** Sets the internal value of the 'color' (aka 'Color') attribute. This
		    attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
		    attributeGroup. **/
		void setColor( const MxColor& value_in )
		{
			myPrintStyleAlign.setColor( value_in );
		}

		/** Sets the internal value of the 'halign' (aka 'Halign') attribute. This
		    attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
		    attributeGroup. **/
		void setHalign( const MxEnumLeftCenterRight& value_in )
		{
			myPrintStyleAlign.setHalign( value_in );
		}

		/** Sets the internal value of the 'valign' (aka 'Valign') attribute. This
		    attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
		    attributeGroup. **/
		void setValign( const MxEnumValign& value_in )
		{
			myPrintStyleAlign.setValign( value_in );
		}

		/** Sets the internal value of the 'underline' (aka 'Underline') attribute.
		    This attribute is a member of the 'text-decoration' (aka 'TextDecoration')
		    attributeGroup. **/
		void setUnderline( const MxNumberNumberOfLines& value_in )
		{
			myTextDecoration.setUnderline( value_in );
		}

		/** Sets the internal value of the 'overline' (aka 'Overline') attribute.
		    This attribute is a member of the 'text-decoration' (aka 'TextDecoration')
		    attributeGroup. **/
		void setOverline( const MxNumberNumberOfLines& value_in )
		{
			myTextDecoration.setOverline( value_in );
		}

		/** Sets the internal value of the 'line-through' (aka 'LineThrough') attribute.
		    This attribute is a member of the 'text-decoration' (aka 'TextDecoration')
		    attributeGroup. **/
		void setLineThrough( const MxNumberNumberOfLines& value_in )
		{
			myTextDecoration.setLineThrough( value_in );
		}

		/** Sets the internal value of the 'rotation' (aka 'Rotation') attribute.
		    This attribute is a member of the 'text-rotation' (aka 'TextRotation')
		    attributeGroup. **/
		void setRotation( const MxNumberRotationDegrees& value_in )
		{
			myTextRotation.setRotation( value_in );
		}

		/** Sets the internal value of the 'letter-spacing' (aka 'LetterSpacing')
		    attribute. This attribute is a member of the 'letter-spacing' (aka
		    'LetterSpacing') attributeGroup. **/
		void setLetterSpacing( const MxNumberOrNormal& value_in )
		{
			myLetterSpacing.setLetterSpacing( value_in );
		}

		/** Sets the internal value of the 'line-height' (aka 'LineHeight') attribute.
		    This attribute is a member of the 'line-height' (aka 'LineHeight')
		    attributeGroup. **/
		void setLineHeight( const MxNumberOrNormal& value_in )
		{
			myLineHeight.setLineHeight( value_in );
		}

		/** Sets the internal value of the 'xml:lang' (aka 'XmlLang') attribute. **/
		void setXmlLang( const XmlLang& value_in )
		{
			myXmlLang = value_in;
		}

		/** Sets the internal value of the 'xml:space' (aka 'XmlSpace') attribute. **/
		void setXmlSpace( const XmlSpace& value_in )
		{
			myXmlSpace = value_in;
		}

		/** Sets the internal value of the 'dir' (aka 'Dir') attribute. This attribute
		    is a member of the 'text-direction' (aka 'TextDirection') attributeGroup. **/
		void setDir( const MxEnumTextDirection& value_in )
		{
			myTextDirection.setDir( value_in );
		}

		/** Sets the internal value of the 'enclosure' (aka 'Enclosure') attribute.
		    This attribute is a member of the 'enclosure' (aka 'Enclosure') attributeGroup. **/
		void setEnclosure( const MxEnumEnclosureShape& value_in )
		{
			myEnclosure.setEnclosure( value_in );
		}

/* Get IsAttributeRequired Values ----------------------------------------------------- */

		/** Indicates whether or not the 'justify' (aka 'Justify') attribute is
		    required to be present in a MusicXML document. This attribute is a
		    member of the 'justify' (aka 'Justify') attributeGroup. **/
		bool getIsJustifyRequired() const
		{
			return myJustify.getIsJustifyRequired();
		}

		/** Indicates whether or not the 'default-x' (aka 'DefaultX') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
		bool getIsDefaultXRequired() const
		{
			return myPrintStyleAlign.getIsDefaultXRequired();
		}

		/** Indicates whether or not the 'default-y' (aka 'DefaultY') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
		bool getIsDefaultYRequired() const
		{
			return myPrintStyleAlign.getIsDefaultYRequired();
		}

		/** Indicates whether or not the 'relative-x' (aka 'RelativeX') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
		bool getIsRelativeXRequired() const
		{
			return myPrintStyleAlign.getIsRelativeXRequired();
		}

		/** Indicates whether or not the 'relative-y' (aka 'RelativeY') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
		bool getIsRelativeYRequired() const
		{
			return myPrintStyleAlign.getIsRelativeYRequired();
		}

		/** Indicates whether or not the 'font-family' (aka 'FontFamily') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
		bool getIsFontFamilyRequired() const
		{
			return myPrintStyleAlign.getIsFontFamilyRequired();
		}

		/** Indicates whether or not the 'font-style' (aka 'FontStyle') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
		bool getIsFontStyleRequired() const
		{
			return myPrintStyleAlign.getIsFontStyleRequired();
		}

		/** Indicates whether or not the 'font-size' (aka 'FontSize') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
		bool getIsFontSizeRequired() const
		{
			return myPrintStyleAlign.getIsFontSizeRequired();
		}

		/** Indicates whether or not the 'font-weight' (aka 'FontWeight') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
		bool getIsFontWeightRequired() const
		{
			return myPrintStyleAlign.getIsFontWeightRequired();
		}

		/** Indicates whether or not the 'color' (aka 'Color') attribute is required
		    to be present in a MusicXML document. This attribute is a member of
		    the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
		bool getIsColorRequired() const
		{
			return myPrintStyleAlign.getIsColorRequired();
		}

		/** Indicates whether or not the 'halign' (aka 'Halign') attribute is required
		    to be present in a MusicXML document. This attribute is a member of
		    the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
		bool getIsHalignRequired() const
		{
			return myPrintStyleAlign.getIsHalignRequired();
		}

		/** Indicates whether or not the 'valign' (aka 'Valign') attribute is required
		    to be present in a MusicXML document. This attribute is a member of
		    the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
		bool getIsValignRequired() const
		{
			return myPrintStyleAlign.getIsValignRequired();
		}

		/** Indicates whether or not the 'underline' (aka 'Underline') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'text-decoration' (aka 'TextDecoration') attributeGroup. **/
		bool getIsUnderlineRequired() const
		{
			return myTextDecoration.getIsUnderlineRequired();
		}

		/** Indicates whether or not the 'overline' (aka 'Overline') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'text-decoration' (aka 'TextDecoration') attributeGroup. **/
		bool getIsOverlineRequired() const
		{
			return myTextDecoration.getIsOverlineRequired();
		}

		/** Indicates whether or not the 'line-through' (aka 'LineThrough') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'text-decoration' (aka 'TextDecoration') attributeGroup. **/
		bool getIsLineThroughRequired() const
		{
			return myTextDecoration.getIsLineThroughRequired();
		}

		/** Indicates whether or not the 'rotation' (aka 'Rotation') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'text-rotation' (aka 'TextRotation') attributeGroup. **/
		bool getIsRotationRequired() const
		{
			return myTextRotation.getIsRotationRequired();
		}

		/** Indicates whether or not the 'letter-spacing' (aka 'LetterSpacing')
		    attribute is required to be present in a MusicXML document. This attribute
		    is a member of the 'letter-spacing' (aka 'LetterSpacing') attributeGroup. **/
		bool getIsLetterSpacingRequired() const
		{
			return myLetterSpacing.getIsLetterSpacingRequired();
		}

		/** Indicates whether or not the 'line-height' (aka 'LineHeight') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'line-height' (aka 'LineHeight') attributeGroup. **/
		bool getIsLineHeightRequired() const
		{
			return myLineHeight.getIsLineHeightRequired();
		}

		/** Indicates whether or not the 'xml:lang' (aka 'XmlLang') attribute is
		    required to be present in a MusicXML document. **/
		bool getIsXmlLangRequired() const
		{
			return false;
		}

		/** Indicates whether or not the 'xml:space' (aka 'XmlSpace') attribute
		    is required to be present in a MusicXML document. **/
		bool getIsXmlSpaceRequired() const
		{
			return false;
		}

		/** Indicates whether or not the 'dir' (aka 'Dir') attribute is required
		    to be present in a MusicXML document. This attribute is a member of
		    the 'text-direction' (aka 'TextDirection') attributeGroup. **/
		bool getIsDirRequired() const
		{
			return myTextDirection.getIsDirRequired();
		}

		/** Indicates whether or not the 'enclosure' (aka 'Enclosure') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'enclosure' (aka 'Enclosure') attributeGroup. **/
		bool getIsEnclosureRequired() const
		{
			return myEnclosure.getIsEnclosureRequired();
		}

/* Get IsAttributePresent Values ------------------------------------------------------ */

		/** Indicates whether or not the 'justify' (aka 'Justify') attribute is
		    (or will be) present in the MusicXML document. This attribute is a
		    member of the 'justify' (aka 'Justify') attributeGroup. **/
		bool getIsJustifyPresent() const
		{
			return myJustify.getIsJustifyPresent();
		}

		/** Indicates whether or not the 'default-x' (aka 'DefaultX') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
		bool getIsDefaultXPresent() const
		{
			return myPrintStyleAlign.getIsDefaultXPresent();
		}

		/** Indicates whether or not the 'default-y' (aka 'DefaultY') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
		bool getIsDefaultYPresent() const
		{
			return myPrintStyleAlign.getIsDefaultYPresent();
		}

		/** Indicates whether or not the 'relative-x' (aka 'RelativeX') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
		bool getIsRelativeXPresent() const
		{
			return myPrintStyleAlign.getIsRelativeXPresent();
		}

		/** Indicates whether or not the 'relative-y' (aka 'RelativeY') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
		bool getIsRelativeYPresent() const
		{
			return myPrintStyleAlign.getIsRelativeYPresent();
		}

		/** Indicates whether or not the 'font-family' (aka 'FontFamily') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
		bool getIsFontFamilyPresent() const
		{
			return myPrintStyleAlign.getIsFontFamilyPresent();
		}

		/** Indicates whether or not the 'font-style' (aka 'FontStyle') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
		bool getIsFontStylePresent() const
		{
			return myPrintStyleAlign.getIsFontStylePresent();
		}

		/** Indicates whether or not the 'font-size' (aka 'FontSize') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
		bool getIsFontSizePresent() const
		{
			return myPrintStyleAlign.getIsFontSizePresent();
		}

		/** Indicates whether or not the 'font-weight' (aka 'FontWeight') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
		bool getIsFontWeightPresent() const
		{
			return myPrintStyleAlign.getIsFontWeightPresent();
		}

		/** Indicates whether or not the 'color' (aka 'Color') attribute is (or
		    will be) present in the MusicXML document. This attribute is a member
		    of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
		bool getIsColorPresent() const
		{
			return myPrintStyleAlign.getIsColorPresent();
		}

		/** Indicates whether or not the 'halign' (aka 'Halign') attribute is (or
		    will be) present in the MusicXML document. This attribute is a member
		    of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
		bool getIsHalignPresent() const
		{
			return myPrintStyleAlign.getIsHalignPresent();
		}

		/** Indicates whether or not the 'valign' (aka 'Valign') attribute is (or
		    will be) present in the MusicXML document. This attribute is a member
		    of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
		bool getIsValignPresent() const
		{
			return myPrintStyleAlign.getIsValignPresent();
		}

		/** Indicates whether or not the 'underline' (aka 'Underline') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'text-decoration' (aka 'TextDecoration') attributeGroup. **/
		bool getIsUnderlinePresent() const
		{
			return myTextDecoration.getIsUnderlinePresent();
		}

		/** Indicates whether or not the 'overline' (aka 'Overline') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'text-decoration' (aka 'TextDecoration') attributeGroup. **/
		bool getIsOverlinePresent() const
		{
			return myTextDecoration.getIsOverlinePresent();
		}

		/** Indicates whether or not the 'line-through' (aka 'LineThrough') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'text-decoration' (aka 'TextDecoration') attributeGroup. **/
		bool getIsLineThroughPresent() const
		{
			return myTextDecoration.getIsLineThroughPresent();
		}

		/** Indicates whether or not the 'rotation' (aka 'Rotation') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'text-rotation' (aka 'TextRotation') attributeGroup. **/
		bool getIsRotationPresent() const
		{
			return myTextRotation.getIsRotationPresent();
		}

		/** Indicates whether or not the 'letter-spacing' (aka 'LetterSpacing')
		    attribute is (or will be) present in the MusicXML document. This attribute
		    is a member of the 'letter-spacing' (aka 'LetterSpacing') attributeGroup. **/
		bool getIsLetterSpacingPresent() const
		{
			return myLetterSpacing.getIsLetterSpacingPresent();
		}

		/** Indicates whether or not the 'line-height' (aka 'LineHeight') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'line-height' (aka 'LineHeight') attributeGroup. **/
		bool getIsLineHeightPresent() const
		{
			return myLineHeight.getIsLineHeightPresent();
		}

		/** Indicates whether or not the 'xml:lang' (aka 'XmlLang') attribute is
		    (or will be) present in the MusicXML document. **/
		bool getIsXmlLangPresent() const
		{
			return myIsXmlLangPresent;
		}

		/** Indicates whether or not the 'xml:space' (aka 'XmlSpace') attribute
		    is (or will be) present in the MusicXML document. **/
		bool getIsXmlSpacePresent() const
		{
			return myIsXmlSpacePresent;
		}

		/** Indicates whether or not the 'dir' (aka 'Dir') attribute is (or will
		    be) present in the MusicXML document. This attribute is a member of
		    the 'text-direction' (aka 'TextDirection') attributeGroup. **/
		bool getIsDirPresent() const
		{
			return myTextDirection.getIsDirPresent();
		}

		/** Indicates whether or not the 'enclosure' (aka 'Enclosure') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'enclosure' (aka 'Enclosure') attributeGroup. **/
		bool getIsEnclosurePresent() const
		{
			return myEnclosure.getIsEnclosurePresent();
		}

/* Set IsAttributePresent Values ------------------------------------------------------ */

		/** Sets the value which indicates whether or not the 'justify' (aka 'Justify')
		    attribute is (or will be) present in the MusicXML document. This attribute
		    is a member of the 'justify' (aka 'Justify') attributeGroup. **/
		void setIsJustifyPresent( const bool& value_in )
		{
			myJustify.setIsJustifyPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'default-x' (aka
		    'DefaultX') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
		    attributeGroup. **/
		void setIsDefaultXPresent( const bool& value_in )
		{
			myPrintStyleAlign.setIsDefaultXPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'default-y' (aka
		    'DefaultY') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
		    attributeGroup. **/
		void setIsDefaultYPresent( const bool& value_in )
		{
			myPrintStyleAlign.setIsDefaultYPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'relative-x' (aka
		    'RelativeX') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
		    attributeGroup. **/
		void setIsRelativeXPresent( const bool& value_in )
		{
			myPrintStyleAlign.setIsRelativeXPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'relative-y' (aka
		    'RelativeY') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
		    attributeGroup. **/
		void setIsRelativeYPresent( const bool& value_in )
		{
			myPrintStyleAlign.setIsRelativeYPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'font-family' (aka
		    'FontFamily') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
		    attributeGroup. **/
		void setIsFontFamilyPresent( const bool& value_in )
		{
			myPrintStyleAlign.setIsFontFamilyPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'font-style' (aka
		    'FontStyle') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
		    attributeGroup. **/
		void setIsFontStylePresent( const bool& value_in )
		{
			myPrintStyleAlign.setIsFontStylePresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'font-size' (aka
		    'FontSize') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
		    attributeGroup. **/
		void setIsFontSizePresent( const bool& value_in )
		{
			myPrintStyleAlign.setIsFontSizePresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'font-weight' (aka
		    'FontWeight') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
		    attributeGroup. **/
		void setIsFontWeightPresent( const bool& value_in )
		{
			myPrintStyleAlign.setIsFontWeightPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'color' (aka 'Color')
		    attribute is (or will be) present in the MusicXML document. This attribute
		    is a member of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
		void setIsColorPresent( const bool& value_in )
		{
			myPrintStyleAlign.setIsColorPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'halign' (aka 'Halign')
		    attribute is (or will be) present in the MusicXML document. This attribute
		    is a member of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
		void setIsHalignPresent( const bool& value_in )
		{
			myPrintStyleAlign.setIsHalignPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'valign' (aka 'Valign')
		    attribute is (or will be) present in the MusicXML document. This attribute
		    is a member of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
		void setIsValignPresent( const bool& value_in )
		{
			myPrintStyleAlign.setIsValignPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'underline' (aka
		    'Underline') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'text-decoration' (aka 'TextDecoration')
		    attributeGroup. **/
		void setIsUnderlinePresent( const bool& value_in )
		{
			myTextDecoration.setIsUnderlinePresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'overline' (aka 'Overline')
		    attribute is (or will be) present in the MusicXML document. This attribute
		    is a member of the 'text-decoration' (aka 'TextDecoration') attributeGroup. **/
		void setIsOverlinePresent( const bool& value_in )
		{
			myTextDecoration.setIsOverlinePresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'line-through' (aka
		    'LineThrough') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'text-decoration' (aka 'TextDecoration')
		    attributeGroup. **/
		void setIsLineThroughPresent( const bool& value_in )
		{
			myTextDecoration.setIsLineThroughPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'rotation' (aka 'Rotation')
		    attribute is (or will be) present in the MusicXML document. This attribute
		    is a member of the 'text-rotation' (aka 'TextRotation') attributeGroup. **/
		void setIsRotationPresent( const bool& value_in )
		{
			myTextRotation.setIsRotationPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'letter-spacing'
		    (aka 'LetterSpacing') attribute is (or will be) present in the MusicXML
		    document. This attribute is a member of the 'letter-spacing' (aka 'LetterSpacing')
		    attributeGroup. **/
		void setIsLetterSpacingPresent( const bool& value_in )
		{
			myLetterSpacing.setIsLetterSpacingPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'line-height' (aka
		    'LineHeight') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'line-height' (aka 'LineHeight')
		    attributeGroup. **/
		void setIsLineHeightPresent( const bool& value_in )
		{
			myLineHeight.setIsLineHeightPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'xml:lang' (aka 'XmlLang')
		    attribute is (or will be) present in the MusicXML document. **/
		void setIsXmlLangPresent( const bool& value_in )
		{
			myIsXmlLangPresent = value_in;
		}

		/** Sets the value which indicates whether or not the 'xml:space' (aka
		    'XmlSpace') attribute is (or will be) present in the MusicXML document. **/
		void setIsXmlSpacePresent( const bool& value_in )
		{
			myIsXmlSpacePresent = value_in;
		}

		/** Sets the value which indicates whether or not the 'dir' (aka 'Dir')
		    attribute is (or will be) present in the MusicXML document. This attribute
		    is a member of the 'text-direction' (aka 'TextDirection') attributeGroup. **/
		void setIsDirPresent( const bool& value_in )
		{
			myTextDirection.setIsDirPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'enclosure' (aka
		    'Enclosure') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'enclosure' (aka 'Enclosure') attributeGroup. **/
		void setIsEnclosurePresent( const bool& value_in )
		{
			myEnclosure.setIsEnclosurePresent( value_in );
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
			return os_out;
		}

/* Get IsAttributeDefaultDefined Values ----------------------------------------------- */

		/** Indicates whether or not the 'justify' (aka 'Justify') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'justify'
		    (aka 'Justify') attributeGroup. **/
		bool getIsJustifyDefaultDefined() const
		{
			return myJustify.getIsJustifyDefaultDefined();
		}

		/** Indicates whether or not the 'default-x' (aka 'DefaultX') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'print-style-align'
		    (aka 'PrintStyleAlign') attributeGroup. **/
		bool getIsDefaultXDefaultDefined() const
		{
			return myPrintStyleAlign.getIsDefaultXDefaultDefined();
		}

		/** Indicates whether or not the 'default-y' (aka 'DefaultY') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'print-style-align'
		    (aka 'PrintStyleAlign') attributeGroup. **/
		bool getIsDefaultYDefaultDefined() const
		{
			return myPrintStyleAlign.getIsDefaultYDefaultDefined();
		}

		/** Indicates whether or not the 'relative-x' (aka 'RelativeX') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'print-style-align'
		    (aka 'PrintStyleAlign') attributeGroup. **/
		bool getIsRelativeXDefaultDefined() const
		{
			return myPrintStyleAlign.getIsRelativeXDefaultDefined();
		}

		/** Indicates whether or not the 'relative-y' (aka 'RelativeY') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'print-style-align'
		    (aka 'PrintStyleAlign') attributeGroup. **/
		bool getIsRelativeYDefaultDefined() const
		{
			return myPrintStyleAlign.getIsRelativeYDefaultDefined();
		}

		/** Indicates whether or not the 'font-family' (aka 'FontFamily') has a
		    default value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'print-style-align'
		    (aka 'PrintStyleAlign') attributeGroup. **/
		bool getIsFontFamilyDefaultDefined() const
		{
			return myPrintStyleAlign.getIsFontFamilyDefaultDefined();
		}

		/** Indicates whether or not the 'font-style' (aka 'FontStyle') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'print-style-align'
		    (aka 'PrintStyleAlign') attributeGroup. **/
		bool getIsFontStyleDefaultDefined() const
		{
			return myPrintStyleAlign.getIsFontStyleDefaultDefined();
		}

		/** Indicates whether or not the 'font-size' (aka 'FontSize') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'print-style-align'
		    (aka 'PrintStyleAlign') attributeGroup. **/
		bool getIsFontSizeDefaultDefined() const
		{
			return myPrintStyleAlign.getIsFontSizeDefaultDefined();
		}

		/** Indicates whether or not the 'font-weight' (aka 'FontWeight') has a
		    default value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'print-style-align'
		    (aka 'PrintStyleAlign') attributeGroup. **/
		bool getIsFontWeightDefaultDefined() const
		{
			return myPrintStyleAlign.getIsFontWeightDefaultDefined();
		}

		/** Indicates whether or not the 'color' (aka 'Color') has a default value
		    defined in the MusicXML xsd specification (either explicitly or in
		    the documentation). This attribute is a member of the 'print-style-align'
		    (aka 'PrintStyleAlign') attributeGroup. **/
		bool getIsColorDefaultDefined() const
		{
			return myPrintStyleAlign.getIsColorDefaultDefined();
		}

		/** Indicates whether or not the 'halign' (aka 'Halign') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'print-style-align'
		    (aka 'PrintStyleAlign') attributeGroup. **/
		bool getIsHalignDefaultDefined() const
		{
			return myPrintStyleAlign.getIsHalignDefaultDefined();
		}

		/** Indicates whether or not the 'valign' (aka 'Valign') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'print-style-align'
		    (aka 'PrintStyleAlign') attributeGroup. **/
		bool getIsValignDefaultDefined() const
		{
			return myPrintStyleAlign.getIsValignDefaultDefined();
		}

		/** Indicates whether or not the 'underline' (aka 'Underline') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'text-decoration'
		    (aka 'TextDecoration') attributeGroup. **/
		bool getIsUnderlineDefaultDefined() const
		{
			return myTextDecoration.getIsUnderlineDefaultDefined();
		}

		/** Indicates whether or not the 'overline' (aka 'Overline') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'text-decoration'
		    (aka 'TextDecoration') attributeGroup. **/
		bool getIsOverlineDefaultDefined() const
		{
			return myTextDecoration.getIsOverlineDefaultDefined();
		}

		/** Indicates whether or not the 'line-through' (aka 'LineThrough') has
		    a default value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'text-decoration'
		    (aka 'TextDecoration') attributeGroup. **/
		bool getIsLineThroughDefaultDefined() const
		{
			return myTextDecoration.getIsLineThroughDefaultDefined();
		}

		/** Indicates whether or not the 'rotation' (aka 'Rotation') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'text-rotation'
		    (aka 'TextRotation') attributeGroup. **/
		bool getIsRotationDefaultDefined() const
		{
			return myTextRotation.getIsRotationDefaultDefined();
		}

		/** Indicates whether or not the 'letter-spacing' (aka 'LetterSpacing')
		    has a default value defined in the MusicXML xsd specification (either
		    explicitly or in the documentation). This attribute is a member of
		    the 'letter-spacing' (aka 'LetterSpacing') attributeGroup. **/
		bool getIsLetterSpacingDefaultDefined() const
		{
			return myLetterSpacing.getIsLetterSpacingDefaultDefined();
		}

		/** Indicates whether or not the 'line-height' (aka 'LineHeight') has a
		    default value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'line-height'
		    (aka 'LineHeight') attributeGroup. **/
		bool getIsLineHeightDefaultDefined() const
		{
			return myLineHeight.getIsLineHeightDefaultDefined();
		}

		/** Indicates whether or not the 'xml:lang' (aka 'XmlLang') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). **/
		bool getIsXmlLangDefaultDefined() const
		{
			return false;
		}

		/** Indicates whether or not the 'xml:space' (aka 'XmlSpace') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). **/
		bool getIsXmlSpaceDefaultDefined() const
		{
			return false;
		}

		/** Indicates whether or not the 'dir' (aka 'Dir') has a default value
		    defined in the MusicXML xsd specification (either explicitly or in
		    the documentation). This attribute is a member of the 'text-direction'
		    (aka 'TextDirection') attributeGroup. **/
		bool getIsDirDefaultDefined() const
		{
			return myTextDirection.getIsDirDefaultDefined();
		}

		/** Indicates whether or not the 'enclosure' (aka 'Enclosure') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'enclosure'
		    (aka 'Enclosure') attributeGroup. **/
		bool getIsEnclosureDefaultDefined() const
		{
			return myEnclosure.getIsEnclosureDefaultDefined();
		}

/* Get AttributeDefaultValue ---------------------------------------------------------- */

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'justify' (aka 'Justify') attribute. This attribute is a member
		    of the 'justify' (aka 'Justify') attributeGroup. **/
		MxEnumLeftCenterRight getJustifyDefaultValue() const
		{
			return myJustify.getJustifyDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'default-x' (aka 'DefaultX') attribute. This attribute is a member
		    of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
		MxNumberTenths getDefaultXDefaultValue() const
		{
			return myPrintStyleAlign.getDefaultXDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'default-y' (aka 'DefaultY') attribute. This attribute is a member
		    of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
		MxNumberTenths getDefaultYDefaultValue() const
		{
			return myPrintStyleAlign.getDefaultYDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'relative-x' (aka 'RelativeX') attribute. This attribute is a member
		    of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
		MxNumberTenths getRelativeXDefaultValue() const
		{
			return myPrintStyleAlign.getRelativeXDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'relative-y' (aka 'RelativeY') attribute. This attribute is a member
		    of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
		MxNumberTenths getRelativeYDefaultValue() const
		{
			return myPrintStyleAlign.getRelativeYDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'font-family' (aka 'FontFamily') attribute. This attribute is a
		    member of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
		MxCommaSeparatedText getFontFamilyDefaultValue() const
		{
			return myPrintStyleAlign.getFontFamilyDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'font-style' (aka 'FontStyle') attribute. This attribute is a member
		    of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
		MxEnumFontStyle getFontStyleDefaultValue() const
		{
			return myPrintStyleAlign.getFontStyleDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'font-size' (aka 'FontSize') attribute. This attribute is a member
		    of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
		MxFontSize getFontSizeDefaultValue() const
		{
			return myPrintStyleAlign.getFontSizeDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'font-weight' (aka 'FontWeight') attribute. This attribute is a
		    member of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
		MxEnumFontWeight getFontWeightDefaultValue() const
		{
			return myPrintStyleAlign.getFontWeightDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'color' (aka 'Color') attribute. This attribute is a member of
		    the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
		MxColor getColorDefaultValue() const
		{
			return myPrintStyleAlign.getColorDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'halign' (aka 'Halign') attribute. This attribute is a member of
		    the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
		MxEnumLeftCenterRight getHalignDefaultValue() const
		{
			return myPrintStyleAlign.getHalignDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'valign' (aka 'Valign') attribute. This attribute is a member of
		    the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
		MxEnumValign getValignDefaultValue() const
		{
			return myPrintStyleAlign.getValignDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'underline' (aka 'Underline') attribute. This attribute is a member
		    of the 'text-decoration' (aka 'TextDecoration') attributeGroup. **/
		MxNumberNumberOfLines getUnderlineDefaultValue() const
		{
			return myTextDecoration.getUnderlineDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'overline' (aka 'Overline') attribute. This attribute is a member
		    of the 'text-decoration' (aka 'TextDecoration') attributeGroup. **/
		MxNumberNumberOfLines getOverlineDefaultValue() const
		{
			return myTextDecoration.getOverlineDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'line-through' (aka 'LineThrough') attribute. This attribute is
		    a member of the 'text-decoration' (aka 'TextDecoration') attributeGroup. **/
		MxNumberNumberOfLines getLineThroughDefaultValue() const
		{
			return myTextDecoration.getLineThroughDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'rotation' (aka 'Rotation') attribute. This attribute is a member
		    of the 'text-rotation' (aka 'TextRotation') attributeGroup. **/
		MxNumberRotationDegrees getRotationDefaultValue() const
		{
			return myTextRotation.getRotationDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'letter-spacing' (aka 'LetterSpacing') attribute. This attribute
		    is a member of the 'letter-spacing' (aka 'LetterSpacing') attributeGroup. **/
		MxNumberOrNormal getLetterSpacingDefaultValue() const
		{
			return myLetterSpacing.getLetterSpacingDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'line-height' (aka 'LineHeight') attribute. This attribute is a
		    member of the 'line-height' (aka 'LineHeight') attributeGroup. **/
		MxNumberOrNormal getLineHeightDefaultValue() const
		{
			return myLineHeight.getLineHeightDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'xml:lang' (aka 'XmlLang') attribute. **/
		XmlLang getXmlLangDefaultValue() const
		{
			return XmlLang(  );
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'xml:space' (aka 'XmlSpace') attribute. **/
		XmlSpace getXmlSpaceDefaultValue() const
		{
			return XmlSpace(  );
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'dir' (aka 'Dir') attribute. This attribute is a member of the
		    'text-direction' (aka 'TextDirection') attributeGroup. **/
		MxEnumTextDirection getDirDefaultValue() const
		{
			return myTextDirection.getDirDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'enclosure' (aka 'Enclosure') attribute. This attribute is a member
		    of the 'enclosure' (aka 'Enclosure') attributeGroup. **/
		MxEnumEnclosureShape getEnclosureDefaultValue() const
		{
			return myEnclosure.getEnclosureDefaultValue();
		}

	}; // struct MxAttrGrpTextFormatting::Impl

	const int MxAttrGrpTextFormatting::Impl::myXsdID = 2015;
	const std::string MxAttrGrpTextFormatting::Impl::myXmlTypeName = "text-formatting";
	const std::string MxAttrGrpTextFormatting::Impl::myCppClassName = "MxAttrGrpTextFormatting";
	const std::string MxAttrGrpTextFormatting::Impl::myDocumentation = "The text-formatting attribute group collects the common formatting attributes for text elements. Default values may differ across the elements that use this group.";

} // namespace lexicon


/* MxAttrGrpTextFormatting ------------------------------------------------------------ */

namespace lexicon
{

/* Constructor, Destructor, Copy, Assignment ------------------------------------------ */

	MxAttrGrpTextFormatting::MxAttrGrpTextFormatting()
	:myImpl( new Impl() ) {}

	MxAttrGrpTextFormatting::~MxAttrGrpTextFormatting() {}

	MxAttrGrpTextFormatting::MxAttrGrpTextFormatting( const MxAttrGrpTextFormatting& other )
	:myImpl( new Impl( *(other.myImpl) ) ) {}

	MxAttrGrpTextFormatting& MxAttrGrpTextFormatting::operator=( const MxAttrGrpTextFormatting& other )
	{
		this->myImpl = std::unique_ptr<Impl>( new Impl( *(other.myImpl) ) );
		return *this;
	}

/* Get Class Information -------------------------------------------------------------- */

	/** Returns the name of this xs:simpleType as found in the musicxml.xsd
	    document. **/
	std::string MxAttrGrpTextFormatting::getXmlTypeName() const
	{
		return myImpl->getXmlTypeName();
	}

	/** Returns the name of this C++ class. **/
	std::string MxAttrGrpTextFormatting::getClassName() const
	{
		return myImpl->getClassName();
	}

	/** Returns the documentation for this musicxml type as found in the musicxml.xsd
	    document. **/
	std::string MxAttrGrpTextFormatting::getDocumentation() const
	{
		return myImpl->getDocumentation();
	}

/* Get Attribute Values --------------------------------------------------------------- */

	/** Returns the internal value of the 'justify' (aka 'Justify') attribute.
	    This attribute is a member of the 'justify' (aka 'Justify') attributeGroup. **/
	MxEnumLeftCenterRight MxAttrGrpTextFormatting::getJustify() const
	{
		return myImpl->getJustify();
	}

	/** Returns the internal value of the 'default-x' (aka 'DefaultX') attribute.
	    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
	    attributeGroup. **/
	MxNumberTenths MxAttrGrpTextFormatting::getDefaultX() const
	{
		return myImpl->getDefaultX();
	}

	/** Returns the internal value of the 'default-y' (aka 'DefaultY') attribute.
	    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
	    attributeGroup. **/
	MxNumberTenths MxAttrGrpTextFormatting::getDefaultY() const
	{
		return myImpl->getDefaultY();
	}

	/** Returns the internal value of the 'relative-x' (aka 'RelativeX') attribute.
	    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
	    attributeGroup. **/
	MxNumberTenths MxAttrGrpTextFormatting::getRelativeX() const
	{
		return myImpl->getRelativeX();
	}

	/** Returns the internal value of the 'relative-y' (aka 'RelativeY') attribute.
	    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
	    attributeGroup. **/
	MxNumberTenths MxAttrGrpTextFormatting::getRelativeY() const
	{
		return myImpl->getRelativeY();
	}

	/** Returns the internal value of the 'font-family' (aka 'FontFamily')
	    attribute. This attribute is a member of the 'print-style-align' (aka
	    'PrintStyleAlign') attributeGroup. **/
	MxCommaSeparatedText MxAttrGrpTextFormatting::getFontFamily() const
	{
		return myImpl->getFontFamily();
	}

	/** Returns the internal value of the 'font-style' (aka 'FontStyle') attribute.
	    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
	    attributeGroup. **/
	MxEnumFontStyle MxAttrGrpTextFormatting::getFontStyle() const
	{
		return myImpl->getFontStyle();
	}

	/** Returns the internal value of the 'font-size' (aka 'FontSize') attribute.
	    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
	    attributeGroup. **/
	MxFontSize MxAttrGrpTextFormatting::getFontSize() const
	{
		return myImpl->getFontSize();
	}

	/** Returns the internal value of the 'font-weight' (aka 'FontWeight')
	    attribute. This attribute is a member of the 'print-style-align' (aka
	    'PrintStyleAlign') attributeGroup. **/
	MxEnumFontWeight MxAttrGrpTextFormatting::getFontWeight() const
	{
		return myImpl->getFontWeight();
	}

	/** Returns the internal value of the 'color' (aka 'Color') attribute.
	    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
	    attributeGroup. **/
	MxColor MxAttrGrpTextFormatting::getColor() const
	{
		return myImpl->getColor();
	}

	/** Returns the internal value of the 'halign' (aka 'Halign') attribute.
	    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
	    attributeGroup. **/
	MxEnumLeftCenterRight MxAttrGrpTextFormatting::getHalign() const
	{
		return myImpl->getHalign();
	}

	/** Returns the internal value of the 'valign' (aka 'Valign') attribute.
	    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
	    attributeGroup. **/
	MxEnumValign MxAttrGrpTextFormatting::getValign() const
	{
		return myImpl->getValign();
	}

	/** Returns the internal value of the 'underline' (aka 'Underline') attribute.
	    This attribute is a member of the 'text-decoration' (aka 'TextDecoration')
	    attributeGroup. **/
	MxNumberNumberOfLines MxAttrGrpTextFormatting::getUnderline() const
	{
		return myImpl->getUnderline();
	}

	/** Returns the internal value of the 'overline' (aka 'Overline') attribute.
	    This attribute is a member of the 'text-decoration' (aka 'TextDecoration')
	    attributeGroup. **/
	MxNumberNumberOfLines MxAttrGrpTextFormatting::getOverline() const
	{
		return myImpl->getOverline();
	}

	/** Returns the internal value of the 'line-through' (aka 'LineThrough')
	    attribute. This attribute is a member of the 'text-decoration' (aka
	    'TextDecoration') attributeGroup. **/
	MxNumberNumberOfLines MxAttrGrpTextFormatting::getLineThrough() const
	{
		return myImpl->getLineThrough();
	}

	/** Returns the internal value of the 'rotation' (aka 'Rotation') attribute.
	    This attribute is a member of the 'text-rotation' (aka 'TextRotation')
	    attributeGroup. **/
	MxNumberRotationDegrees MxAttrGrpTextFormatting::getRotation() const
	{
		return myImpl->getRotation();
	}

	/** Returns the internal value of the 'letter-spacing' (aka 'LetterSpacing')
	    attribute. This attribute is a member of the 'letter-spacing' (aka
	    'LetterSpacing') attributeGroup. **/
	MxNumberOrNormal MxAttrGrpTextFormatting::getLetterSpacing() const
	{
		return myImpl->getLetterSpacing();
	}

	/** Returns the internal value of the 'line-height' (aka 'LineHeight')
	    attribute. This attribute is a member of the 'line-height' (aka 'LineHeight')
	    attributeGroup. **/
	MxNumberOrNormal MxAttrGrpTextFormatting::getLineHeight() const
	{
		return myImpl->getLineHeight();
	}

	/** Returns the internal value of the 'xml:lang' (aka 'XmlLang') attribute. **/
	XmlLang MxAttrGrpTextFormatting::getXmlLang() const
	{
		return myImpl->getXmlLang();
	}

	/** Returns the internal value of the 'xml:space' (aka 'XmlSpace') attribute. **/
	XmlSpace MxAttrGrpTextFormatting::getXmlSpace() const
	{
		return myImpl->getXmlSpace();
	}

	/** Returns the internal value of the 'dir' (aka 'Dir') attribute. This
	    attribute is a member of the 'text-direction' (aka 'TextDirection')
	    attributeGroup. **/
	MxEnumTextDirection MxAttrGrpTextFormatting::getDir() const
	{
		return myImpl->getDir();
	}

	/** Returns the internal value of the 'enclosure' (aka 'Enclosure') attribute.
	    This attribute is a member of the 'enclosure' (aka 'Enclosure') attributeGroup. **/
	MxEnumEnclosureShape MxAttrGrpTextFormatting::getEnclosure() const
	{
		return myImpl->getEnclosure();
	}

/* Set Attribute Values --------------------------------------------------------------- */

	/** Sets the internal value of the 'justify' (aka 'Justify') attribute.
	    This attribute is a member of the 'justify' (aka 'Justify') attributeGroup. **/
	void MxAttrGrpTextFormatting::setJustify( const MxEnumLeftCenterRight& value_in )
	{
		myImpl->setJustify( value_in );
	}

	/** Sets the internal value of the 'default-x' (aka 'DefaultX') attribute.
	    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
	    attributeGroup. **/
	void MxAttrGrpTextFormatting::setDefaultX( const MxNumberTenths& value_in )
	{
		myImpl->setDefaultX( value_in );
	}

	/** Sets the internal value of the 'default-y' (aka 'DefaultY') attribute.
	    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
	    attributeGroup. **/
	void MxAttrGrpTextFormatting::setDefaultY( const MxNumberTenths& value_in )
	{
		myImpl->setDefaultY( value_in );
	}

	/** Sets the internal value of the 'relative-x' (aka 'RelativeX') attribute.
	    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
	    attributeGroup. **/
	void MxAttrGrpTextFormatting::setRelativeX( const MxNumberTenths& value_in )
	{
		myImpl->setRelativeX( value_in );
	}

	/** Sets the internal value of the 'relative-y' (aka 'RelativeY') attribute.
	    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
	    attributeGroup. **/
	void MxAttrGrpTextFormatting::setRelativeY( const MxNumberTenths& value_in )
	{
		myImpl->setRelativeY( value_in );
	}

	/** Sets the internal value of the 'font-family' (aka 'FontFamily') attribute.
	    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
	    attributeGroup. **/
	void MxAttrGrpTextFormatting::setFontFamily( const MxCommaSeparatedText& value_in )
	{
		myImpl->setFontFamily( value_in );
	}

	/** Sets the internal value of the 'font-style' (aka 'FontStyle') attribute.
	    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
	    attributeGroup. **/
	void MxAttrGrpTextFormatting::setFontStyle( const MxEnumFontStyle& value_in )
	{
		myImpl->setFontStyle( value_in );
	}

	/** Sets the internal value of the 'font-size' (aka 'FontSize') attribute.
	    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
	    attributeGroup. **/
	void MxAttrGrpTextFormatting::setFontSize( const MxFontSize& value_in )
	{
		myImpl->setFontSize( value_in );
	}

	/** Sets the internal value of the 'font-weight' (aka 'FontWeight') attribute.
	    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
	    attributeGroup. **/
	void MxAttrGrpTextFormatting::setFontWeight( const MxEnumFontWeight& value_in )
	{
		myImpl->setFontWeight( value_in );
	}

	/** Sets the internal value of the 'color' (aka 'Color') attribute. This
	    attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
	    attributeGroup. **/
	void MxAttrGrpTextFormatting::setColor( const MxColor& value_in )
	{
		myImpl->setColor( value_in );
	}

	/** Sets the internal value of the 'halign' (aka 'Halign') attribute. This
	    attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
	    attributeGroup. **/
	void MxAttrGrpTextFormatting::setHalign( const MxEnumLeftCenterRight& value_in )
	{
		myImpl->setHalign( value_in );
	}

	/** Sets the internal value of the 'valign' (aka 'Valign') attribute. This
	    attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
	    attributeGroup. **/
	void MxAttrGrpTextFormatting::setValign( const MxEnumValign& value_in )
	{
		myImpl->setValign( value_in );
	}

	/** Sets the internal value of the 'underline' (aka 'Underline') attribute.
	    This attribute is a member of the 'text-decoration' (aka 'TextDecoration')
	    attributeGroup. **/
	void MxAttrGrpTextFormatting::setUnderline( const MxNumberNumberOfLines& value_in )
	{
		myImpl->setUnderline( value_in );
	}

	/** Sets the internal value of the 'overline' (aka 'Overline') attribute.
	    This attribute is a member of the 'text-decoration' (aka 'TextDecoration')
	    attributeGroup. **/
	void MxAttrGrpTextFormatting::setOverline( const MxNumberNumberOfLines& value_in )
	{
		myImpl->setOverline( value_in );
	}

	/** Sets the internal value of the 'line-through' (aka 'LineThrough') attribute.
	    This attribute is a member of the 'text-decoration' (aka 'TextDecoration')
	    attributeGroup. **/
	void MxAttrGrpTextFormatting::setLineThrough( const MxNumberNumberOfLines& value_in )
	{
		myImpl->setLineThrough( value_in );
	}

	/** Sets the internal value of the 'rotation' (aka 'Rotation') attribute.
	    This attribute is a member of the 'text-rotation' (aka 'TextRotation')
	    attributeGroup. **/
	void MxAttrGrpTextFormatting::setRotation( const MxNumberRotationDegrees& value_in )
	{
		myImpl->setRotation( value_in );
	}

	/** Sets the internal value of the 'letter-spacing' (aka 'LetterSpacing')
	    attribute. This attribute is a member of the 'letter-spacing' (aka
	    'LetterSpacing') attributeGroup. **/
	void MxAttrGrpTextFormatting::setLetterSpacing( const MxNumberOrNormal& value_in )
	{
		myImpl->setLetterSpacing( value_in );
	}

	/** Sets the internal value of the 'line-height' (aka 'LineHeight') attribute.
	    This attribute is a member of the 'line-height' (aka 'LineHeight')
	    attributeGroup. **/
	void MxAttrGrpTextFormatting::setLineHeight( const MxNumberOrNormal& value_in )
	{
		myImpl->setLineHeight( value_in );
	}

	/** Sets the internal value of the 'xml:lang' (aka 'XmlLang') attribute. **/
	void MxAttrGrpTextFormatting::setXmlLang( const XmlLang& value_in )
	{
		myImpl->setXmlLang( value_in );
	}

	/** Sets the internal value of the 'xml:space' (aka 'XmlSpace') attribute. **/
	void MxAttrGrpTextFormatting::setXmlSpace( const XmlSpace& value_in )
	{
		myImpl->setXmlSpace( value_in );
	}

	/** Sets the internal value of the 'dir' (aka 'Dir') attribute. This attribute
	    is a member of the 'text-direction' (aka 'TextDirection') attributeGroup. **/
	void MxAttrGrpTextFormatting::setDir( const MxEnumTextDirection& value_in )
	{
		myImpl->setDir( value_in );
	}

	/** Sets the internal value of the 'enclosure' (aka 'Enclosure') attribute.
	    This attribute is a member of the 'enclosure' (aka 'Enclosure') attributeGroup. **/
	void MxAttrGrpTextFormatting::setEnclosure( const MxEnumEnclosureShape& value_in )
	{
		myImpl->setEnclosure( value_in );
	}

/* Get IsAttributeRequired Values ----------------------------------------------------- */

	/** Indicates whether or not the 'justify' (aka 'Justify') attribute is
	    required to be present in a MusicXML document. This attribute is a
	    member of the 'justify' (aka 'Justify') attributeGroup. **/
	bool MxAttrGrpTextFormatting::getIsJustifyRequired() const
	{
		return myImpl->getIsJustifyRequired();
	}

	/** Indicates whether or not the 'default-x' (aka 'DefaultX') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
	bool MxAttrGrpTextFormatting::getIsDefaultXRequired() const
	{
		return myImpl->getIsDefaultXRequired();
	}

	/** Indicates whether or not the 'default-y' (aka 'DefaultY') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
	bool MxAttrGrpTextFormatting::getIsDefaultYRequired() const
	{
		return myImpl->getIsDefaultYRequired();
	}

	/** Indicates whether or not the 'relative-x' (aka 'RelativeX') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
	bool MxAttrGrpTextFormatting::getIsRelativeXRequired() const
	{
		return myImpl->getIsRelativeXRequired();
	}

	/** Indicates whether or not the 'relative-y' (aka 'RelativeY') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
	bool MxAttrGrpTextFormatting::getIsRelativeYRequired() const
	{
		return myImpl->getIsRelativeYRequired();
	}

	/** Indicates whether or not the 'font-family' (aka 'FontFamily') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
	bool MxAttrGrpTextFormatting::getIsFontFamilyRequired() const
	{
		return myImpl->getIsFontFamilyRequired();
	}

	/** Indicates whether or not the 'font-style' (aka 'FontStyle') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
	bool MxAttrGrpTextFormatting::getIsFontStyleRequired() const
	{
		return myImpl->getIsFontStyleRequired();
	}

	/** Indicates whether or not the 'font-size' (aka 'FontSize') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
	bool MxAttrGrpTextFormatting::getIsFontSizeRequired() const
	{
		return myImpl->getIsFontSizeRequired();
	}

	/** Indicates whether or not the 'font-weight' (aka 'FontWeight') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
	bool MxAttrGrpTextFormatting::getIsFontWeightRequired() const
	{
		return myImpl->getIsFontWeightRequired();
	}

	/** Indicates whether or not the 'color' (aka 'Color') attribute is required
	    to be present in a MusicXML document. This attribute is a member of
	    the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
	bool MxAttrGrpTextFormatting::getIsColorRequired() const
	{
		return myImpl->getIsColorRequired();
	}

	/** Indicates whether or not the 'halign' (aka 'Halign') attribute is required
	    to be present in a MusicXML document. This attribute is a member of
	    the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
	bool MxAttrGrpTextFormatting::getIsHalignRequired() const
	{
		return myImpl->getIsHalignRequired();
	}

	/** Indicates whether or not the 'valign' (aka 'Valign') attribute is required
	    to be present in a MusicXML document. This attribute is a member of
	    the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
	bool MxAttrGrpTextFormatting::getIsValignRequired() const
	{
		return myImpl->getIsValignRequired();
	}

	/** Indicates whether or not the 'underline' (aka 'Underline') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'text-decoration' (aka 'TextDecoration') attributeGroup. **/
	bool MxAttrGrpTextFormatting::getIsUnderlineRequired() const
	{
		return myImpl->getIsUnderlineRequired();
	}

	/** Indicates whether or not the 'overline' (aka 'Overline') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'text-decoration' (aka 'TextDecoration') attributeGroup. **/
	bool MxAttrGrpTextFormatting::getIsOverlineRequired() const
	{
		return myImpl->getIsOverlineRequired();
	}

	/** Indicates whether or not the 'line-through' (aka 'LineThrough') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'text-decoration' (aka 'TextDecoration') attributeGroup. **/
	bool MxAttrGrpTextFormatting::getIsLineThroughRequired() const
	{
		return myImpl->getIsLineThroughRequired();
	}

	/** Indicates whether or not the 'rotation' (aka 'Rotation') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'text-rotation' (aka 'TextRotation') attributeGroup. **/
	bool MxAttrGrpTextFormatting::getIsRotationRequired() const
	{
		return myImpl->getIsRotationRequired();
	}

	/** Indicates whether or not the 'letter-spacing' (aka 'LetterSpacing')
	    attribute is required to be present in a MusicXML document. This attribute
	    is a member of the 'letter-spacing' (aka 'LetterSpacing') attributeGroup. **/
	bool MxAttrGrpTextFormatting::getIsLetterSpacingRequired() const
	{
		return myImpl->getIsLetterSpacingRequired();
	}

	/** Indicates whether or not the 'line-height' (aka 'LineHeight') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'line-height' (aka 'LineHeight') attributeGroup. **/
	bool MxAttrGrpTextFormatting::getIsLineHeightRequired() const
	{
		return myImpl->getIsLineHeightRequired();
	}

	/** Indicates whether or not the 'xml:lang' (aka 'XmlLang') attribute is
	    required to be present in a MusicXML document. **/
	bool MxAttrGrpTextFormatting::getIsXmlLangRequired() const
	{
		return myImpl->getIsXmlLangRequired();
	}

	/** Indicates whether or not the 'xml:space' (aka 'XmlSpace') attribute
	    is required to be present in a MusicXML document. **/
	bool MxAttrGrpTextFormatting::getIsXmlSpaceRequired() const
	{
		return myImpl->getIsXmlSpaceRequired();
	}

	/** Indicates whether or not the 'dir' (aka 'Dir') attribute is required
	    to be present in a MusicXML document. This attribute is a member of
	    the 'text-direction' (aka 'TextDirection') attributeGroup. **/
	bool MxAttrGrpTextFormatting::getIsDirRequired() const
	{
		return myImpl->getIsDirRequired();
	}

	/** Indicates whether or not the 'enclosure' (aka 'Enclosure') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'enclosure' (aka 'Enclosure') attributeGroup. **/
	bool MxAttrGrpTextFormatting::getIsEnclosureRequired() const
	{
		return myImpl->getIsEnclosureRequired();
	}

/* Get IsAttributePresent Values ------------------------------------------------------ */

	/** Indicates whether or not the 'justify' (aka 'Justify') attribute is
	    (or will be) present in the MusicXML document. This attribute is a
	    member of the 'justify' (aka 'Justify') attributeGroup. **/
	bool MxAttrGrpTextFormatting::getIsJustifyPresent() const
	{
		return myImpl->getIsJustifyPresent();
	}

	/** Indicates whether or not the 'default-x' (aka 'DefaultX') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
	bool MxAttrGrpTextFormatting::getIsDefaultXPresent() const
	{
		return myImpl->getIsDefaultXPresent();
	}

	/** Indicates whether or not the 'default-y' (aka 'DefaultY') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
	bool MxAttrGrpTextFormatting::getIsDefaultYPresent() const
	{
		return myImpl->getIsDefaultYPresent();
	}

	/** Indicates whether or not the 'relative-x' (aka 'RelativeX') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
	bool MxAttrGrpTextFormatting::getIsRelativeXPresent() const
	{
		return myImpl->getIsRelativeXPresent();
	}

	/** Indicates whether or not the 'relative-y' (aka 'RelativeY') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
	bool MxAttrGrpTextFormatting::getIsRelativeYPresent() const
	{
		return myImpl->getIsRelativeYPresent();
	}

	/** Indicates whether or not the 'font-family' (aka 'FontFamily') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
	bool MxAttrGrpTextFormatting::getIsFontFamilyPresent() const
	{
		return myImpl->getIsFontFamilyPresent();
	}

	/** Indicates whether or not the 'font-style' (aka 'FontStyle') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
	bool MxAttrGrpTextFormatting::getIsFontStylePresent() const
	{
		return myImpl->getIsFontStylePresent();
	}

	/** Indicates whether or not the 'font-size' (aka 'FontSize') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
	bool MxAttrGrpTextFormatting::getIsFontSizePresent() const
	{
		return myImpl->getIsFontSizePresent();
	}

	/** Indicates whether or not the 'font-weight' (aka 'FontWeight') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
	bool MxAttrGrpTextFormatting::getIsFontWeightPresent() const
	{
		return myImpl->getIsFontWeightPresent();
	}

	/** Indicates whether or not the 'color' (aka 'Color') attribute is (or
	    will be) present in the MusicXML document. This attribute is a member
	    of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
	bool MxAttrGrpTextFormatting::getIsColorPresent() const
	{
		return myImpl->getIsColorPresent();
	}

	/** Indicates whether or not the 'halign' (aka 'Halign') attribute is (or
	    will be) present in the MusicXML document. This attribute is a member
	    of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
	bool MxAttrGrpTextFormatting::getIsHalignPresent() const
	{
		return myImpl->getIsHalignPresent();
	}

	/** Indicates whether or not the 'valign' (aka 'Valign') attribute is (or
	    will be) present in the MusicXML document. This attribute is a member
	    of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
	bool MxAttrGrpTextFormatting::getIsValignPresent() const
	{
		return myImpl->getIsValignPresent();
	}

	/** Indicates whether or not the 'underline' (aka 'Underline') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'text-decoration' (aka 'TextDecoration') attributeGroup. **/
	bool MxAttrGrpTextFormatting::getIsUnderlinePresent() const
	{
		return myImpl->getIsUnderlinePresent();
	}

	/** Indicates whether or not the 'overline' (aka 'Overline') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'text-decoration' (aka 'TextDecoration') attributeGroup. **/
	bool MxAttrGrpTextFormatting::getIsOverlinePresent() const
	{
		return myImpl->getIsOverlinePresent();
	}

	/** Indicates whether or not the 'line-through' (aka 'LineThrough') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'text-decoration' (aka 'TextDecoration') attributeGroup. **/
	bool MxAttrGrpTextFormatting::getIsLineThroughPresent() const
	{
		return myImpl->getIsLineThroughPresent();
	}

	/** Indicates whether or not the 'rotation' (aka 'Rotation') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'text-rotation' (aka 'TextRotation') attributeGroup. **/
	bool MxAttrGrpTextFormatting::getIsRotationPresent() const
	{
		return myImpl->getIsRotationPresent();
	}

	/** Indicates whether or not the 'letter-spacing' (aka 'LetterSpacing')
	    attribute is (or will be) present in the MusicXML document. This attribute
	    is a member of the 'letter-spacing' (aka 'LetterSpacing') attributeGroup. **/
	bool MxAttrGrpTextFormatting::getIsLetterSpacingPresent() const
	{
		return myImpl->getIsLetterSpacingPresent();
	}

	/** Indicates whether or not the 'line-height' (aka 'LineHeight') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'line-height' (aka 'LineHeight') attributeGroup. **/
	bool MxAttrGrpTextFormatting::getIsLineHeightPresent() const
	{
		return myImpl->getIsLineHeightPresent();
	}

	/** Indicates whether or not the 'xml:lang' (aka 'XmlLang') attribute is
	    (or will be) present in the MusicXML document. **/
	bool MxAttrGrpTextFormatting::getIsXmlLangPresent() const
	{
		return myImpl->getIsXmlLangPresent();
	}

	/** Indicates whether or not the 'xml:space' (aka 'XmlSpace') attribute
	    is (or will be) present in the MusicXML document. **/
	bool MxAttrGrpTextFormatting::getIsXmlSpacePresent() const
	{
		return myImpl->getIsXmlSpacePresent();
	}

	/** Indicates whether or not the 'dir' (aka 'Dir') attribute is (or will
	    be) present in the MusicXML document. This attribute is a member of
	    the 'text-direction' (aka 'TextDirection') attributeGroup. **/
	bool MxAttrGrpTextFormatting::getIsDirPresent() const
	{
		return myImpl->getIsDirPresent();
	}

	/** Indicates whether or not the 'enclosure' (aka 'Enclosure') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'enclosure' (aka 'Enclosure') attributeGroup. **/
	bool MxAttrGrpTextFormatting::getIsEnclosurePresent() const
	{
		return myImpl->getIsEnclosurePresent();
	}

/* Set IsAttributePresent Values ------------------------------------------------------ */

	/** Sets the value which indicates whether or not the 'justify' (aka 'Justify')
	    attribute is (or will be) present in the MusicXML document. This attribute
	    is a member of the 'justify' (aka 'Justify') attributeGroup. **/
	void MxAttrGrpTextFormatting::setIsJustifyPresent( const bool& value_in )
	{
		myImpl->setIsJustifyPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'default-x' (aka
	    'DefaultX') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
	    attributeGroup. **/
	void MxAttrGrpTextFormatting::setIsDefaultXPresent( const bool& value_in )
	{
		myImpl->setIsDefaultXPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'default-y' (aka
	    'DefaultY') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
	    attributeGroup. **/
	void MxAttrGrpTextFormatting::setIsDefaultYPresent( const bool& value_in )
	{
		myImpl->setIsDefaultYPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'relative-x' (aka
	    'RelativeX') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
	    attributeGroup. **/
	void MxAttrGrpTextFormatting::setIsRelativeXPresent( const bool& value_in )
	{
		myImpl->setIsRelativeXPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'relative-y' (aka
	    'RelativeY') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
	    attributeGroup. **/
	void MxAttrGrpTextFormatting::setIsRelativeYPresent( const bool& value_in )
	{
		myImpl->setIsRelativeYPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'font-family' (aka
	    'FontFamily') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
	    attributeGroup. **/
	void MxAttrGrpTextFormatting::setIsFontFamilyPresent( const bool& value_in )
	{
		myImpl->setIsFontFamilyPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'font-style' (aka
	    'FontStyle') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
	    attributeGroup. **/
	void MxAttrGrpTextFormatting::setIsFontStylePresent( const bool& value_in )
	{
		myImpl->setIsFontStylePresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'font-size' (aka
	    'FontSize') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
	    attributeGroup. **/
	void MxAttrGrpTextFormatting::setIsFontSizePresent( const bool& value_in )
	{
		myImpl->setIsFontSizePresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'font-weight' (aka
	    'FontWeight') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
	    attributeGroup. **/
	void MxAttrGrpTextFormatting::setIsFontWeightPresent( const bool& value_in )
	{
		myImpl->setIsFontWeightPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'color' (aka 'Color')
	    attribute is (or will be) present in the MusicXML document. This attribute
	    is a member of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
	void MxAttrGrpTextFormatting::setIsColorPresent( const bool& value_in )
	{
		myImpl->setIsColorPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'halign' (aka 'Halign')
	    attribute is (or will be) present in the MusicXML document. This attribute
	    is a member of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
	void MxAttrGrpTextFormatting::setIsHalignPresent( const bool& value_in )
	{
		myImpl->setIsHalignPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'valign' (aka 'Valign')
	    attribute is (or will be) present in the MusicXML document. This attribute
	    is a member of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
	void MxAttrGrpTextFormatting::setIsValignPresent( const bool& value_in )
	{
		myImpl->setIsValignPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'underline' (aka
	    'Underline') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'text-decoration' (aka 'TextDecoration')
	    attributeGroup. **/
	void MxAttrGrpTextFormatting::setIsUnderlinePresent( const bool& value_in )
	{
		myImpl->setIsUnderlinePresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'overline' (aka 'Overline')
	    attribute is (or will be) present in the MusicXML document. This attribute
	    is a member of the 'text-decoration' (aka 'TextDecoration') attributeGroup. **/
	void MxAttrGrpTextFormatting::setIsOverlinePresent( const bool& value_in )
	{
		myImpl->setIsOverlinePresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'line-through' (aka
	    'LineThrough') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'text-decoration' (aka 'TextDecoration')
	    attributeGroup. **/
	void MxAttrGrpTextFormatting::setIsLineThroughPresent( const bool& value_in )
	{
		myImpl->setIsLineThroughPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'rotation' (aka 'Rotation')
	    attribute is (or will be) present in the MusicXML document. This attribute
	    is a member of the 'text-rotation' (aka 'TextRotation') attributeGroup. **/
	void MxAttrGrpTextFormatting::setIsRotationPresent( const bool& value_in )
	{
		myImpl->setIsRotationPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'letter-spacing'
	    (aka 'LetterSpacing') attribute is (or will be) present in the MusicXML
	    document. This attribute is a member of the 'letter-spacing' (aka 'LetterSpacing')
	    attributeGroup. **/
	void MxAttrGrpTextFormatting::setIsLetterSpacingPresent( const bool& value_in )
	{
		myImpl->setIsLetterSpacingPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'line-height' (aka
	    'LineHeight') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'line-height' (aka 'LineHeight')
	    attributeGroup. **/
	void MxAttrGrpTextFormatting::setIsLineHeightPresent( const bool& value_in )
	{
		myImpl->setIsLineHeightPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'xml:lang' (aka 'XmlLang')
	    attribute is (or will be) present in the MusicXML document. **/
	void MxAttrGrpTextFormatting::setIsXmlLangPresent( const bool& value_in )
	{
		myImpl->setIsXmlLangPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'xml:space' (aka
	    'XmlSpace') attribute is (or will be) present in the MusicXML document. **/
	void MxAttrGrpTextFormatting::setIsXmlSpacePresent( const bool& value_in )
	{
		myImpl->setIsXmlSpacePresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'dir' (aka 'Dir')
	    attribute is (or will be) present in the MusicXML document. This attribute
	    is a member of the 'text-direction' (aka 'TextDirection') attributeGroup. **/
	void MxAttrGrpTextFormatting::setIsDirPresent( const bool& value_in )
	{
		myImpl->setIsDirPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'enclosure' (aka
	    'Enclosure') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'enclosure' (aka 'Enclosure') attributeGroup. **/
	void MxAttrGrpTextFormatting::setIsEnclosurePresent( const bool& value_in )
	{
		myImpl->setIsEnclosurePresent( value_in );
	}

/* Stringing and Streaming ------------------------------------------------------------ */

	/** Returns the attributeGroup's value as a string where each attribute
	    is represented, if present, in the form attribute="vale". **/
	std::string MxAttrGrpTextFormatting::toString() const
	{
		return myImpl->toString();
	}

	/** Returns the attributeGroup's value as a string where each attribute
	    is represented, if present, in the form attribute="vale". **/
	std::ostream& MxAttrGrpTextFormatting::stream( std::ostream& os_out ) const
	{
		return myImpl->stream( os_out );
	}

/* Get IsAttributeDefaultDefined Values ----------------------------------------------- */

	/** Indicates whether or not the 'justify' (aka 'Justify') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'justify'
	    (aka 'Justify') attributeGroup. **/
	bool MxAttrGrpTextFormatting::getIsJustifyDefaultDefined() const
	{
		return myImpl->getIsJustifyDefaultDefined();
	}

	/** Indicates whether or not the 'default-x' (aka 'DefaultX') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'print-style-align'
	    (aka 'PrintStyleAlign') attributeGroup. **/
	bool MxAttrGrpTextFormatting::getIsDefaultXDefaultDefined() const
	{
		return myImpl->getIsDefaultXDefaultDefined();
	}

	/** Indicates whether or not the 'default-y' (aka 'DefaultY') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'print-style-align'
	    (aka 'PrintStyleAlign') attributeGroup. **/
	bool MxAttrGrpTextFormatting::getIsDefaultYDefaultDefined() const
	{
		return myImpl->getIsDefaultYDefaultDefined();
	}

	/** Indicates whether or not the 'relative-x' (aka 'RelativeX') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'print-style-align'
	    (aka 'PrintStyleAlign') attributeGroup. **/
	bool MxAttrGrpTextFormatting::getIsRelativeXDefaultDefined() const
	{
		return myImpl->getIsRelativeXDefaultDefined();
	}

	/** Indicates whether or not the 'relative-y' (aka 'RelativeY') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'print-style-align'
	    (aka 'PrintStyleAlign') attributeGroup. **/
	bool MxAttrGrpTextFormatting::getIsRelativeYDefaultDefined() const
	{
		return myImpl->getIsRelativeYDefaultDefined();
	}

	/** Indicates whether or not the 'font-family' (aka 'FontFamily') has a
	    default value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'print-style-align'
	    (aka 'PrintStyleAlign') attributeGroup. **/
	bool MxAttrGrpTextFormatting::getIsFontFamilyDefaultDefined() const
	{
		return myImpl->getIsFontFamilyDefaultDefined();
	}

	/** Indicates whether or not the 'font-style' (aka 'FontStyle') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'print-style-align'
	    (aka 'PrintStyleAlign') attributeGroup. **/
	bool MxAttrGrpTextFormatting::getIsFontStyleDefaultDefined() const
	{
		return myImpl->getIsFontStyleDefaultDefined();
	}

	/** Indicates whether or not the 'font-size' (aka 'FontSize') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'print-style-align'
	    (aka 'PrintStyleAlign') attributeGroup. **/
	bool MxAttrGrpTextFormatting::getIsFontSizeDefaultDefined() const
	{
		return myImpl->getIsFontSizeDefaultDefined();
	}

	/** Indicates whether or not the 'font-weight' (aka 'FontWeight') has a
	    default value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'print-style-align'
	    (aka 'PrintStyleAlign') attributeGroup. **/
	bool MxAttrGrpTextFormatting::getIsFontWeightDefaultDefined() const
	{
		return myImpl->getIsFontWeightDefaultDefined();
	}

	/** Indicates whether or not the 'color' (aka 'Color') has a default value
	    defined in the MusicXML xsd specification (either explicitly or in
	    the documentation). This attribute is a member of the 'print-style-align'
	    (aka 'PrintStyleAlign') attributeGroup. **/
	bool MxAttrGrpTextFormatting::getIsColorDefaultDefined() const
	{
		return myImpl->getIsColorDefaultDefined();
	}

	/** Indicates whether or not the 'halign' (aka 'Halign') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'print-style-align'
	    (aka 'PrintStyleAlign') attributeGroup. **/
	bool MxAttrGrpTextFormatting::getIsHalignDefaultDefined() const
	{
		return myImpl->getIsHalignDefaultDefined();
	}

	/** Indicates whether or not the 'valign' (aka 'Valign') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'print-style-align'
	    (aka 'PrintStyleAlign') attributeGroup. **/
	bool MxAttrGrpTextFormatting::getIsValignDefaultDefined() const
	{
		return myImpl->getIsValignDefaultDefined();
	}

	/** Indicates whether or not the 'underline' (aka 'Underline') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'text-decoration'
	    (aka 'TextDecoration') attributeGroup. **/
	bool MxAttrGrpTextFormatting::getIsUnderlineDefaultDefined() const
	{
		return myImpl->getIsUnderlineDefaultDefined();
	}

	/** Indicates whether or not the 'overline' (aka 'Overline') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'text-decoration'
	    (aka 'TextDecoration') attributeGroup. **/
	bool MxAttrGrpTextFormatting::getIsOverlineDefaultDefined() const
	{
		return myImpl->getIsOverlineDefaultDefined();
	}

	/** Indicates whether or not the 'line-through' (aka 'LineThrough') has
	    a default value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'text-decoration'
	    (aka 'TextDecoration') attributeGroup. **/
	bool MxAttrGrpTextFormatting::getIsLineThroughDefaultDefined() const
	{
		return myImpl->getIsLineThroughDefaultDefined();
	}

	/** Indicates whether or not the 'rotation' (aka 'Rotation') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'text-rotation'
	    (aka 'TextRotation') attributeGroup. **/
	bool MxAttrGrpTextFormatting::getIsRotationDefaultDefined() const
	{
		return myImpl->getIsRotationDefaultDefined();
	}

	/** Indicates whether or not the 'letter-spacing' (aka 'LetterSpacing')
	    has a default value defined in the MusicXML xsd specification (either
	    explicitly or in the documentation). This attribute is a member of
	    the 'letter-spacing' (aka 'LetterSpacing') attributeGroup. **/
	bool MxAttrGrpTextFormatting::getIsLetterSpacingDefaultDefined() const
	{
		return myImpl->getIsLetterSpacingDefaultDefined();
	}

	/** Indicates whether or not the 'line-height' (aka 'LineHeight') has a
	    default value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'line-height'
	    (aka 'LineHeight') attributeGroup. **/
	bool MxAttrGrpTextFormatting::getIsLineHeightDefaultDefined() const
	{
		return myImpl->getIsLineHeightDefaultDefined();
	}

	/** Indicates whether or not the 'xml:lang' (aka 'XmlLang') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). **/
	bool MxAttrGrpTextFormatting::getIsXmlLangDefaultDefined() const
	{
		return myImpl->getIsXmlLangDefaultDefined();
	}

	/** Indicates whether or not the 'xml:space' (aka 'XmlSpace') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). **/
	bool MxAttrGrpTextFormatting::getIsXmlSpaceDefaultDefined() const
	{
		return myImpl->getIsXmlSpaceDefaultDefined();
	}

	/** Indicates whether or not the 'dir' (aka 'Dir') has a default value
	    defined in the MusicXML xsd specification (either explicitly or in
	    the documentation). This attribute is a member of the 'text-direction'
	    (aka 'TextDirection') attributeGroup. **/
	bool MxAttrGrpTextFormatting::getIsDirDefaultDefined() const
	{
		return myImpl->getIsDirDefaultDefined();
	}

	/** Indicates whether or not the 'enclosure' (aka 'Enclosure') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'enclosure'
	    (aka 'Enclosure') attributeGroup. **/
	bool MxAttrGrpTextFormatting::getIsEnclosureDefaultDefined() const
	{
		return myImpl->getIsEnclosureDefaultDefined();
	}

/* Get AttributeDefaultValue ---------------------------------------------------------- */

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'justify' (aka 'Justify') attribute. This attribute is a member
	    of the 'justify' (aka 'Justify') attributeGroup. **/
	MxEnumLeftCenterRight MxAttrGrpTextFormatting::getJustifyDefaultValue() const
	{
		return myImpl->getJustifyDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'default-x' (aka 'DefaultX') attribute. This attribute is a member
	    of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
	MxNumberTenths MxAttrGrpTextFormatting::getDefaultXDefaultValue() const
	{
		return myImpl->getDefaultXDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'default-y' (aka 'DefaultY') attribute. This attribute is a member
	    of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
	MxNumberTenths MxAttrGrpTextFormatting::getDefaultYDefaultValue() const
	{
		return myImpl->getDefaultYDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'relative-x' (aka 'RelativeX') attribute. This attribute is a member
	    of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
	MxNumberTenths MxAttrGrpTextFormatting::getRelativeXDefaultValue() const
	{
		return myImpl->getRelativeXDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'relative-y' (aka 'RelativeY') attribute. This attribute is a member
	    of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
	MxNumberTenths MxAttrGrpTextFormatting::getRelativeYDefaultValue() const
	{
		return myImpl->getRelativeYDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'font-family' (aka 'FontFamily') attribute. This attribute is a
	    member of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
	MxCommaSeparatedText MxAttrGrpTextFormatting::getFontFamilyDefaultValue() const
	{
		return myImpl->getFontFamilyDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'font-style' (aka 'FontStyle') attribute. This attribute is a member
	    of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
	MxEnumFontStyle MxAttrGrpTextFormatting::getFontStyleDefaultValue() const
	{
		return myImpl->getFontStyleDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'font-size' (aka 'FontSize') attribute. This attribute is a member
	    of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
	MxFontSize MxAttrGrpTextFormatting::getFontSizeDefaultValue() const
	{
		return myImpl->getFontSizeDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'font-weight' (aka 'FontWeight') attribute. This attribute is a
	    member of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
	MxEnumFontWeight MxAttrGrpTextFormatting::getFontWeightDefaultValue() const
	{
		return myImpl->getFontWeightDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'color' (aka 'Color') attribute. This attribute is a member of
	    the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
	MxColor MxAttrGrpTextFormatting::getColorDefaultValue() const
	{
		return myImpl->getColorDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'halign' (aka 'Halign') attribute. This attribute is a member of
	    the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
	MxEnumLeftCenterRight MxAttrGrpTextFormatting::getHalignDefaultValue() const
	{
		return myImpl->getHalignDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'valign' (aka 'Valign') attribute. This attribute is a member of
	    the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
	MxEnumValign MxAttrGrpTextFormatting::getValignDefaultValue() const
	{
		return myImpl->getValignDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'underline' (aka 'Underline') attribute. This attribute is a member
	    of the 'text-decoration' (aka 'TextDecoration') attributeGroup. **/
	MxNumberNumberOfLines MxAttrGrpTextFormatting::getUnderlineDefaultValue() const
	{
		return myImpl->getUnderlineDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'overline' (aka 'Overline') attribute. This attribute is a member
	    of the 'text-decoration' (aka 'TextDecoration') attributeGroup. **/
	MxNumberNumberOfLines MxAttrGrpTextFormatting::getOverlineDefaultValue() const
	{
		return myImpl->getOverlineDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'line-through' (aka 'LineThrough') attribute. This attribute is
	    a member of the 'text-decoration' (aka 'TextDecoration') attributeGroup. **/
	MxNumberNumberOfLines MxAttrGrpTextFormatting::getLineThroughDefaultValue() const
	{
		return myImpl->getLineThroughDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'rotation' (aka 'Rotation') attribute. This attribute is a member
	    of the 'text-rotation' (aka 'TextRotation') attributeGroup. **/
	MxNumberRotationDegrees MxAttrGrpTextFormatting::getRotationDefaultValue() const
	{
		return myImpl->getRotationDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'letter-spacing' (aka 'LetterSpacing') attribute. This attribute
	    is a member of the 'letter-spacing' (aka 'LetterSpacing') attributeGroup. **/
	MxNumberOrNormal MxAttrGrpTextFormatting::getLetterSpacingDefaultValue() const
	{
		return myImpl->getLetterSpacingDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'line-height' (aka 'LineHeight') attribute. This attribute is a
	    member of the 'line-height' (aka 'LineHeight') attributeGroup. **/
	MxNumberOrNormal MxAttrGrpTextFormatting::getLineHeightDefaultValue() const
	{
		return myImpl->getLineHeightDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'xml:lang' (aka 'XmlLang') attribute. **/
	XmlLang MxAttrGrpTextFormatting::getXmlLangDefaultValue() const
	{
		return myImpl->getXmlLangDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'xml:space' (aka 'XmlSpace') attribute. **/
	XmlSpace MxAttrGrpTextFormatting::getXmlSpaceDefaultValue() const
	{
		return myImpl->getXmlSpaceDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'dir' (aka 'Dir') attribute. This attribute is a member of the
	    'text-direction' (aka 'TextDirection') attributeGroup. **/
	MxEnumTextDirection MxAttrGrpTextFormatting::getDirDefaultValue() const
	{
		return myImpl->getDirDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'enclosure' (aka 'Enclosure') attribute. This attribute is a member
	    of the 'enclosure' (aka 'Enclosure') attributeGroup. **/
	MxEnumEnclosureShape MxAttrGrpTextFormatting::getEnclosureDefaultValue() const
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

