/* See MusicXML License at the bottom of this code page. */

/**
  * @file       MxCxSmpKind.cpp
  * @class      lexicon::MxCxSmpKind
  * @author     Matthew James Briggs
  * @email      matthew.james.briggs@gmail.com
  * @url        http://matthewjamesbriggs.com
  * @date       2014-12-02 17:31:48
  * @project    Lexicon
  * @version    1.0
  * @musicxmlid 3575
  * 
  * @brief The 'Kind' class serves as a binding for the MusicXml 'kind' complexType.
  * 
 **/

#include "MxCxSmpKind.h"
#include <sstream>
#include "_hidden_attributeStream.h"
#include "MxAttrGrpHalign.h"
#include "MxAttrGrpPrintStyle.h"
#include "MxAttrGrpValign.h"

/* Impl ------------------------------------------------------------------------------- */

namespace lexicon
{
	struct MxCxSmpKind::Impl
	{
		Impl( const std::string& elementName, const MxEnumKindValue& value_in )
		:myElementName( elementName )
		,myValue( value_in )
		,myUseSymbols()
		,myText()
		,myStackDegrees()
		,myParenthesesDegrees()
		,myBracketDegrees()
		,myMxAttrGrpPrintStyle()
		,myMxAttrGrpHalign()
		,myMxAttrGrpValign()
		,myIsUseSymbolsPresent( false )
		,myIsTextPresent( false )
		,myIsStackDegreesPresent( false )
		,myIsParenthesesDegreesPresent( false )
		,myIsBracketDegreesPresent( false )
		{}

	private:
		std::string myElementName;
		MxEnumKindValue myValue;
		MxEnumYesNo myUseSymbols;
		XsToken myText;
		MxEnumYesNo myStackDegrees;
		MxEnumYesNo myParenthesesDegrees;
		MxEnumYesNo myBracketDegrees;
		MxAttrGrpPrintStyle myMxAttrGrpPrintStyle;
		MxAttrGrpHalign myMxAttrGrpHalign;
		MxAttrGrpValign myMxAttrGrpValign;
		bool myIsUseSymbolsPresent;
		bool myIsTextPresent;
		bool myIsStackDegreesPresent;
		bool myIsParenthesesDegreesPresent;
		bool myIsBracketDegreesPresent;

		const static int myXsdID;
		const static std::string myXmlTypeName;
		const static std::string myCppClassName;
		const static std::string myDocumentation;

	public:

/* GetSet Value and Element Name ------------------------------------------------------ */

		/** Returns the contained xs:simpleContent value. **/
		MxEnumKindValue getValue() const
		{
			return myValue;
		}

		/** Sets the contained xs:simpleContent value. **/
		void setValue( const MxEnumKindValue& value_in )
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

		/** Returns the internal value of the 'use-symbols' (aka 'UseSymbols')
		    attribute. **/
		MxEnumYesNo getUseSymbols() const
		{
			return myUseSymbols;
		}

		/** Returns the internal value of the 'text' (aka 'Text') attribute. **/
		XsToken getText() const
		{
			return myText;
		}

		/** Returns the internal value of the 'stack-degrees' (aka 'StackDegrees')
		    attribute. **/
		MxEnumYesNo getStackDegrees() const
		{
			return myStackDegrees;
		}

		/** Returns the internal value of the 'parentheses-degrees' (aka 'ParenthesesDegrees')
		    attribute. **/
		MxEnumYesNo getParenthesesDegrees() const
		{
			return myParenthesesDegrees;
		}

		/** Returns the internal value of the 'bracket-degrees' (aka 'BracketDegrees')
		    attribute. **/
		MxEnumYesNo getBracketDegrees() const
		{
			return myBracketDegrees;
		}

		/** Returns the internal value of the 'default-x' (aka 'DefaultX') attribute.
		    This attribute is a member of the 'print-style' (aka 'PrintStyle')
		    attributeGroup. **/
		MxNumberTenths getDefaultX() const
		{
			return myMxAttrGrpPrintStyle.getDefaultX();
		}

		/** Returns the internal value of the 'default-y' (aka 'DefaultY') attribute.
		    This attribute is a member of the 'print-style' (aka 'PrintStyle')
		    attributeGroup. **/
		MxNumberTenths getDefaultY() const
		{
			return myMxAttrGrpPrintStyle.getDefaultY();
		}

		/** Returns the internal value of the 'relative-x' (aka 'RelativeX') attribute.
		    This attribute is a member of the 'print-style' (aka 'PrintStyle')
		    attributeGroup. **/
		MxNumberTenths getRelativeX() const
		{
			return myMxAttrGrpPrintStyle.getRelativeX();
		}

		/** Returns the internal value of the 'relative-y' (aka 'RelativeY') attribute.
		    This attribute is a member of the 'print-style' (aka 'PrintStyle')
		    attributeGroup. **/
		MxNumberTenths getRelativeY() const
		{
			return myMxAttrGrpPrintStyle.getRelativeY();
		}

		/** Returns the internal value of the 'font-family' (aka 'FontFamily')
		    attribute. This attribute is a member of the 'print-style' (aka 'PrintStyle')
		    attributeGroup. **/
		MxCommaSeparatedText getFontFamily() const
		{
			return myMxAttrGrpPrintStyle.getFontFamily();
		}

		/** Returns the internal value of the 'font-style' (aka 'FontStyle') attribute.
		    This attribute is a member of the 'print-style' (aka 'PrintStyle')
		    attributeGroup. **/
		MxEnumFontStyle getFontStyle() const
		{
			return myMxAttrGrpPrintStyle.getFontStyle();
		}

		/** Returns the internal value of the 'font-size' (aka 'FontSize') attribute.
		    This attribute is a member of the 'print-style' (aka 'PrintStyle')
		    attributeGroup. **/
		MxFontSize getFontSize() const
		{
			return myMxAttrGrpPrintStyle.getFontSize();
		}

		/** Returns the internal value of the 'font-weight' (aka 'FontWeight')
		    attribute. This attribute is a member of the 'print-style' (aka 'PrintStyle')
		    attributeGroup. **/
		MxEnumFontWeight getFontWeight() const
		{
			return myMxAttrGrpPrintStyle.getFontWeight();
		}

		/** Returns the internal value of the 'color' (aka 'Color') attribute.
		    This attribute is a member of the 'print-style' (aka 'PrintStyle')
		    attributeGroup. **/
		MxColor getColor() const
		{
			return myMxAttrGrpPrintStyle.getColor();
		}

		/** Returns the internal value of the 'halign' (aka 'Halign') attribute.
		    This attribute is a member of the 'halign' (aka 'Halign') attributeGroup. **/
		MxEnumLeftCenterRight getHalign() const
		{
			return myMxAttrGrpHalign.getHalign();
		}

		/** Returns the internal value of the 'valign' (aka 'Valign') attribute.
		    This attribute is a member of the 'valign' (aka 'Valign') attributeGroup. **/
		MxEnumValign getValign() const
		{
			return myMxAttrGrpValign.getValign();
		}

/* Set Attribute Values --------------------------------------------------------------- */

		/** Sets the internal value of the 'use-symbols' (aka 'UseSymbols') attribute. **/
		void setUseSymbols( const MxEnumYesNo& value_in )
		{
			myUseSymbols = value_in;
		}

		/** Sets the internal value of the 'text' (aka 'Text') attribute. **/
		void setText( const XsToken& value_in )
		{
			myText = value_in;
		}

		/** Sets the internal value of the 'stack-degrees' (aka 'StackDegrees')
		    attribute. **/
		void setStackDegrees( const MxEnumYesNo& value_in )
		{
			myStackDegrees = value_in;
		}

		/** Sets the internal value of the 'parentheses-degrees' (aka 'ParenthesesDegrees')
		    attribute. **/
		void setParenthesesDegrees( const MxEnumYesNo& value_in )
		{
			myParenthesesDegrees = value_in;
		}

		/** Sets the internal value of the 'bracket-degrees' (aka 'BracketDegrees')
		    attribute. **/
		void setBracketDegrees( const MxEnumYesNo& value_in )
		{
			myBracketDegrees = value_in;
		}

		/** Sets the internal value of the 'default-x' (aka 'DefaultX') attribute.
		    This attribute is a member of the 'print-style' (aka 'PrintStyle')
		    attributeGroup. **/
		void setDefaultX( const MxNumberTenths& value_in )
		{
			myMxAttrGrpPrintStyle.setDefaultX( value_in );
		}

		/** Sets the internal value of the 'default-y' (aka 'DefaultY') attribute.
		    This attribute is a member of the 'print-style' (aka 'PrintStyle')
		    attributeGroup. **/
		void setDefaultY( const MxNumberTenths& value_in )
		{
			myMxAttrGrpPrintStyle.setDefaultY( value_in );
		}

		/** Sets the internal value of the 'relative-x' (aka 'RelativeX') attribute.
		    This attribute is a member of the 'print-style' (aka 'PrintStyle')
		    attributeGroup. **/
		void setRelativeX( const MxNumberTenths& value_in )
		{
			myMxAttrGrpPrintStyle.setRelativeX( value_in );
		}

		/** Sets the internal value of the 'relative-y' (aka 'RelativeY') attribute.
		    This attribute is a member of the 'print-style' (aka 'PrintStyle')
		    attributeGroup. **/
		void setRelativeY( const MxNumberTenths& value_in )
		{
			myMxAttrGrpPrintStyle.setRelativeY( value_in );
		}

		/** Sets the internal value of the 'font-family' (aka 'FontFamily') attribute.
		    This attribute is a member of the 'print-style' (aka 'PrintStyle')
		    attributeGroup. **/
		void setFontFamily( const MxCommaSeparatedText& value_in )
		{
			myMxAttrGrpPrintStyle.setFontFamily( value_in );
		}

		/** Sets the internal value of the 'font-style' (aka 'FontStyle') attribute.
		    This attribute is a member of the 'print-style' (aka 'PrintStyle')
		    attributeGroup. **/
		void setFontStyle( const MxEnumFontStyle& value_in )
		{
			myMxAttrGrpPrintStyle.setFontStyle( value_in );
		}

		/** Sets the internal value of the 'font-size' (aka 'FontSize') attribute.
		    This attribute is a member of the 'print-style' (aka 'PrintStyle')
		    attributeGroup. **/
		void setFontSize( const MxFontSize& value_in )
		{
			myMxAttrGrpPrintStyle.setFontSize( value_in );
		}

		/** Sets the internal value of the 'font-weight' (aka 'FontWeight') attribute.
		    This attribute is a member of the 'print-style' (aka 'PrintStyle')
		    attributeGroup. **/
		void setFontWeight( const MxEnumFontWeight& value_in )
		{
			myMxAttrGrpPrintStyle.setFontWeight( value_in );
		}

		/** Sets the internal value of the 'color' (aka 'Color') attribute. This
		    attribute is a member of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
		void setColor( const MxColor& value_in )
		{
			myMxAttrGrpPrintStyle.setColor( value_in );
		}

		/** Sets the internal value of the 'halign' (aka 'Halign') attribute. This
		    attribute is a member of the 'halign' (aka 'Halign') attributeGroup. **/
		void setHalign( const MxEnumLeftCenterRight& value_in )
		{
			myMxAttrGrpHalign.setHalign( value_in );
		}

		/** Sets the internal value of the 'valign' (aka 'Valign') attribute. This
		    attribute is a member of the 'valign' (aka 'Valign') attributeGroup. **/
		void setValign( const MxEnumValign& value_in )
		{
			myMxAttrGrpValign.setValign( value_in );
		}

/* Get IsAttributeRequired Values ----------------------------------------------------- */

		/** Indicates whether or not the 'use-symbols' (aka 'UseSymbols') attribute
		    is required to be present in a MusicXML document. **/
		bool getIsUseSymbolsRequired() const
		{
			return false;
		}

		/** Indicates whether or not the 'text' (aka 'Text') attribute is required
		    to be present in a MusicXML document. **/
		bool getIsTextRequired() const
		{
			return false;
		}

		/** Indicates whether or not the 'stack-degrees' (aka 'StackDegrees') attribute
		    is required to be present in a MusicXML document. **/
		bool getIsStackDegreesRequired() const
		{
			return false;
		}

		/** Indicates whether or not the 'parentheses-degrees' (aka 'ParenthesesDegrees')
		    attribute is required to be present in a MusicXML document. **/
		bool getIsParenthesesDegreesRequired() const
		{
			return false;
		}

		/** Indicates whether or not the 'bracket-degrees' (aka 'BracketDegrees')
		    attribute is required to be present in a MusicXML document. **/
		bool getIsBracketDegreesRequired() const
		{
			return false;
		}

		/** Indicates whether or not the 'default-x' (aka 'DefaultX') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
		bool getIsDefaultXRequired() const
		{
			return myMxAttrGrpPrintStyle.getIsDefaultXRequired();
		}

		/** Indicates whether or not the 'default-y' (aka 'DefaultY') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
		bool getIsDefaultYRequired() const
		{
			return myMxAttrGrpPrintStyle.getIsDefaultYRequired();
		}

		/** Indicates whether or not the 'relative-x' (aka 'RelativeX') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
		bool getIsRelativeXRequired() const
		{
			return myMxAttrGrpPrintStyle.getIsRelativeXRequired();
		}

		/** Indicates whether or not the 'relative-y' (aka 'RelativeY') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
		bool getIsRelativeYRequired() const
		{
			return myMxAttrGrpPrintStyle.getIsRelativeYRequired();
		}

		/** Indicates whether or not the 'font-family' (aka 'FontFamily') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
		bool getIsFontFamilyRequired() const
		{
			return myMxAttrGrpPrintStyle.getIsFontFamilyRequired();
		}

		/** Indicates whether or not the 'font-style' (aka 'FontStyle') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
		bool getIsFontStyleRequired() const
		{
			return myMxAttrGrpPrintStyle.getIsFontStyleRequired();
		}

		/** Indicates whether or not the 'font-size' (aka 'FontSize') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
		bool getIsFontSizeRequired() const
		{
			return myMxAttrGrpPrintStyle.getIsFontSizeRequired();
		}

		/** Indicates whether or not the 'font-weight' (aka 'FontWeight') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
		bool getIsFontWeightRequired() const
		{
			return myMxAttrGrpPrintStyle.getIsFontWeightRequired();
		}

		/** Indicates whether or not the 'color' (aka 'Color') attribute is required
		    to be present in a MusicXML document. This attribute is a member of
		    the 'print-style' (aka 'PrintStyle') attributeGroup. **/
		bool getIsColorRequired() const
		{
			return myMxAttrGrpPrintStyle.getIsColorRequired();
		}

		/** Indicates whether or not the 'halign' (aka 'Halign') attribute is required
		    to be present in a MusicXML document. This attribute is a member of
		    the 'halign' (aka 'Halign') attributeGroup. **/
		bool getIsHalignRequired() const
		{
			return myMxAttrGrpHalign.getIsHalignRequired();
		}

		/** Indicates whether or not the 'valign' (aka 'Valign') attribute is required
		    to be present in a MusicXML document. This attribute is a member of
		    the 'valign' (aka 'Valign') attributeGroup. **/
		bool getIsValignRequired() const
		{
			return myMxAttrGrpValign.getIsValignRequired();
		}

/* Get IsAttributePresent Values ------------------------------------------------------ */

		/** Indicates whether or not the 'use-symbols' (aka 'UseSymbols') attribute
		    is (or will be) present in the MusicXML document. **/
		bool getIsUseSymbolsPresent() const
		{
			return myIsUseSymbolsPresent;
		}

		/** Indicates whether or not the 'text' (aka 'Text') attribute is (or will
		    be) present in the MusicXML document. **/
		bool getIsTextPresent() const
		{
			return myIsTextPresent;
		}

		/** Indicates whether or not the 'stack-degrees' (aka 'StackDegrees') attribute
		    is (or will be) present in the MusicXML document. **/
		bool getIsStackDegreesPresent() const
		{
			return myIsStackDegreesPresent;
		}

		/** Indicates whether or not the 'parentheses-degrees' (aka 'ParenthesesDegrees')
		    attribute is (or will be) present in the MusicXML document. **/
		bool getIsParenthesesDegreesPresent() const
		{
			return myIsParenthesesDegreesPresent;
		}

		/** Indicates whether or not the 'bracket-degrees' (aka 'BracketDegrees')
		    attribute is (or will be) present in the MusicXML document. **/
		bool getIsBracketDegreesPresent() const
		{
			return myIsBracketDegreesPresent;
		}

		/** Indicates whether or not the 'default-x' (aka 'DefaultX') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
		bool getIsDefaultXPresent() const
		{
			return myMxAttrGrpPrintStyle.getIsDefaultXPresent();
		}

		/** Indicates whether or not the 'default-y' (aka 'DefaultY') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
		bool getIsDefaultYPresent() const
		{
			return myMxAttrGrpPrintStyle.getIsDefaultYPresent();
		}

		/** Indicates whether or not the 'relative-x' (aka 'RelativeX') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
		bool getIsRelativeXPresent() const
		{
			return myMxAttrGrpPrintStyle.getIsRelativeXPresent();
		}

		/** Indicates whether or not the 'relative-y' (aka 'RelativeY') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
		bool getIsRelativeYPresent() const
		{
			return myMxAttrGrpPrintStyle.getIsRelativeYPresent();
		}

		/** Indicates whether or not the 'font-family' (aka 'FontFamily') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
		bool getIsFontFamilyPresent() const
		{
			return myMxAttrGrpPrintStyle.getIsFontFamilyPresent();
		}

		/** Indicates whether or not the 'font-style' (aka 'FontStyle') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
		bool getIsFontStylePresent() const
		{
			return myMxAttrGrpPrintStyle.getIsFontStylePresent();
		}

		/** Indicates whether or not the 'font-size' (aka 'FontSize') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
		bool getIsFontSizePresent() const
		{
			return myMxAttrGrpPrintStyle.getIsFontSizePresent();
		}

		/** Indicates whether or not the 'font-weight' (aka 'FontWeight') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
		bool getIsFontWeightPresent() const
		{
			return myMxAttrGrpPrintStyle.getIsFontWeightPresent();
		}

		/** Indicates whether or not the 'color' (aka 'Color') attribute is (or
		    will be) present in the MusicXML document. This attribute is a member
		    of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
		bool getIsColorPresent() const
		{
			return myMxAttrGrpPrintStyle.getIsColorPresent();
		}

		/** Indicates whether or not the 'halign' (aka 'Halign') attribute is (or
		    will be) present in the MusicXML document. This attribute is a member
		    of the 'halign' (aka 'Halign') attributeGroup. **/
		bool getIsHalignPresent() const
		{
			return myMxAttrGrpHalign.getIsHalignPresent();
		}

		/** Indicates whether or not the 'valign' (aka 'Valign') attribute is (or
		    will be) present in the MusicXML document. This attribute is a member
		    of the 'valign' (aka 'Valign') attributeGroup. **/
		bool getIsValignPresent() const
		{
			return myMxAttrGrpValign.getIsValignPresent();
		}

/* Set IsAttributePresent Values ------------------------------------------------------ */

		/** Sets the value which indicates whether or not the 'use-symbols' (aka
		    'UseSymbols') attribute is (or will be) present in the MusicXML document. **/
		void setIsUseSymbolsPresent( const bool& value_in )
		{
			myIsUseSymbolsPresent = value_in;
		}

		/** Sets the value which indicates whether or not the 'text' (aka 'Text')
		    attribute is (or will be) present in the MusicXML document. **/
		void setIsTextPresent( const bool& value_in )
		{
			myIsTextPresent = value_in;
		}

		/** Sets the value which indicates whether or not the 'stack-degrees' (aka
		    'StackDegrees') attribute is (or will be) present in the MusicXML document. **/
		void setIsStackDegreesPresent( const bool& value_in )
		{
			myIsStackDegreesPresent = value_in;
		}

		/** Sets the value which indicates whether or not the 'parentheses-degrees'
		    (aka 'ParenthesesDegrees') attribute is (or will be) present in the
		    MusicXML document. **/
		void setIsParenthesesDegreesPresent( const bool& value_in )
		{
			myIsParenthesesDegreesPresent = value_in;
		}

		/** Sets the value which indicates whether or not the 'bracket-degrees'
		    (aka 'BracketDegrees') attribute is (or will be) present in the MusicXML
		    document. **/
		void setIsBracketDegreesPresent( const bool& value_in )
		{
			myIsBracketDegreesPresent = value_in;
		}

		/** Sets the value which indicates whether or not the 'default-x' (aka
		    'DefaultX') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'print-style' (aka 'PrintStyle')
		    attributeGroup. **/
		void setIsDefaultXPresent( const bool& value_in )
		{
			myMxAttrGrpPrintStyle.setIsDefaultXPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'default-y' (aka
		    'DefaultY') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'print-style' (aka 'PrintStyle')
		    attributeGroup. **/
		void setIsDefaultYPresent( const bool& value_in )
		{
			myMxAttrGrpPrintStyle.setIsDefaultYPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'relative-x' (aka
		    'RelativeX') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'print-style' (aka 'PrintStyle')
		    attributeGroup. **/
		void setIsRelativeXPresent( const bool& value_in )
		{
			myMxAttrGrpPrintStyle.setIsRelativeXPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'relative-y' (aka
		    'RelativeY') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'print-style' (aka 'PrintStyle')
		    attributeGroup. **/
		void setIsRelativeYPresent( const bool& value_in )
		{
			myMxAttrGrpPrintStyle.setIsRelativeYPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'font-family' (aka
		    'FontFamily') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'print-style' (aka 'PrintStyle')
		    attributeGroup. **/
		void setIsFontFamilyPresent( const bool& value_in )
		{
			myMxAttrGrpPrintStyle.setIsFontFamilyPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'font-style' (aka
		    'FontStyle') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'print-style' (aka 'PrintStyle')
		    attributeGroup. **/
		void setIsFontStylePresent( const bool& value_in )
		{
			myMxAttrGrpPrintStyle.setIsFontStylePresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'font-size' (aka
		    'FontSize') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'print-style' (aka 'PrintStyle')
		    attributeGroup. **/
		void setIsFontSizePresent( const bool& value_in )
		{
			myMxAttrGrpPrintStyle.setIsFontSizePresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'font-weight' (aka
		    'FontWeight') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'print-style' (aka 'PrintStyle')
		    attributeGroup. **/
		void setIsFontWeightPresent( const bool& value_in )
		{
			myMxAttrGrpPrintStyle.setIsFontWeightPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'color' (aka 'Color')
		    attribute is (or will be) present in the MusicXML document. This attribute
		    is a member of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
		void setIsColorPresent( const bool& value_in )
		{
			myMxAttrGrpPrintStyle.setIsColorPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'halign' (aka 'Halign')
		    attribute is (or will be) present in the MusicXML document. This attribute
		    is a member of the 'halign' (aka 'Halign') attributeGroup. **/
		void setIsHalignPresent( const bool& value_in )
		{
			myMxAttrGrpHalign.setIsHalignPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'valign' (aka 'Valign')
		    attribute is (or will be) present in the MusicXML document. This attribute
		    is a member of the 'valign' (aka 'Valign') attributeGroup. **/
		void setIsValignPresent( const bool& value_in )
		{
			myMxAttrGrpValign.setIsValignPresent( value_in );
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
			hidden::attributeStream( getIsUseSymbolsPresent(), "use-symbols", getUseSymbols().toString(), os_out, isFirst );
			hidden::attributeStream( getIsTextPresent(), "text", getText().toString(), os_out, isFirst );
			hidden::attributeStream( getIsStackDegreesPresent(), "stack-degrees", getStackDegrees().toString(), os_out, isFirst );
			hidden::attributeStream( getIsParenthesesDegreesPresent(), "parentheses-degrees", getParenthesesDegrees().toString(), os_out, isFirst );
			hidden::attributeStream( getIsBracketDegreesPresent(), "bracket-degrees", getBracketDegrees().toString(), os_out, isFirst );
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
			os_out << '>';
			os_out << getValue().toString();
			os_out << "</";
			os_out << getElementName();
			os_out << '>';
			return os_out;
		}

/* Get IsAttributeDefaultDefined Values ----------------------------------------------- */

		/** Indicates whether or not the 'use-symbols' (aka 'UseSymbols') has a
		    default value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). **/
		bool getIsUseSymbolsDefaultDefined() const
		{
			return false;
		}

		/** Indicates whether or not the 'text' (aka 'Text') has a default value
		    defined in the MusicXML xsd specification (either explicitly or in
		    the documentation). **/
		bool getIsTextDefaultDefined() const
		{
			return false;
		}

		/** Indicates whether or not the 'stack-degrees' (aka 'StackDegrees') has
		    a default value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). **/
		bool getIsStackDegreesDefaultDefined() const
		{
			return false;
		}

		/** Indicates whether or not the 'parentheses-degrees' (aka 'ParenthesesDegrees')
		    has a default value defined in the MusicXML xsd specification (either
		    explicitly or in the documentation). **/
		bool getIsParenthesesDegreesDefaultDefined() const
		{
			return false;
		}

		/** Indicates whether or not the 'bracket-degrees' (aka 'BracketDegrees')
		    has a default value defined in the MusicXML xsd specification (either
		    explicitly or in the documentation). **/
		bool getIsBracketDegreesDefaultDefined() const
		{
			return false;
		}

		/** Indicates whether or not the 'default-x' (aka 'DefaultX') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'print-style'
		    (aka 'PrintStyle') attributeGroup. **/
		bool getIsDefaultXDefaultDefined() const
		{
			return myMxAttrGrpPrintStyle.getIsDefaultXDefaultDefined();
		}

		/** Indicates whether or not the 'default-y' (aka 'DefaultY') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'print-style'
		    (aka 'PrintStyle') attributeGroup. **/
		bool getIsDefaultYDefaultDefined() const
		{
			return myMxAttrGrpPrintStyle.getIsDefaultYDefaultDefined();
		}

		/** Indicates whether or not the 'relative-x' (aka 'RelativeX') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'print-style'
		    (aka 'PrintStyle') attributeGroup. **/
		bool getIsRelativeXDefaultDefined() const
		{
			return myMxAttrGrpPrintStyle.getIsRelativeXDefaultDefined();
		}

		/** Indicates whether or not the 'relative-y' (aka 'RelativeY') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'print-style'
		    (aka 'PrintStyle') attributeGroup. **/
		bool getIsRelativeYDefaultDefined() const
		{
			return myMxAttrGrpPrintStyle.getIsRelativeYDefaultDefined();
		}

		/** Indicates whether or not the 'font-family' (aka 'FontFamily') has a
		    default value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'print-style'
		    (aka 'PrintStyle') attributeGroup. **/
		bool getIsFontFamilyDefaultDefined() const
		{
			return myMxAttrGrpPrintStyle.getIsFontFamilyDefaultDefined();
		}

		/** Indicates whether or not the 'font-style' (aka 'FontStyle') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'print-style'
		    (aka 'PrintStyle') attributeGroup. **/
		bool getIsFontStyleDefaultDefined() const
		{
			return myMxAttrGrpPrintStyle.getIsFontStyleDefaultDefined();
		}

		/** Indicates whether or not the 'font-size' (aka 'FontSize') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'print-style'
		    (aka 'PrintStyle') attributeGroup. **/
		bool getIsFontSizeDefaultDefined() const
		{
			return myMxAttrGrpPrintStyle.getIsFontSizeDefaultDefined();
		}

		/** Indicates whether or not the 'font-weight' (aka 'FontWeight') has a
		    default value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'print-style'
		    (aka 'PrintStyle') attributeGroup. **/
		bool getIsFontWeightDefaultDefined() const
		{
			return myMxAttrGrpPrintStyle.getIsFontWeightDefaultDefined();
		}

		/** Indicates whether or not the 'color' (aka 'Color') has a default value
		    defined in the MusicXML xsd specification (either explicitly or in
		    the documentation). This attribute is a member of the 'print-style'
		    (aka 'PrintStyle') attributeGroup. **/
		bool getIsColorDefaultDefined() const
		{
			return myMxAttrGrpPrintStyle.getIsColorDefaultDefined();
		}

		/** Indicates whether or not the 'halign' (aka 'Halign') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'halign'
		    (aka 'Halign') attributeGroup. **/
		bool getIsHalignDefaultDefined() const
		{
			return myMxAttrGrpHalign.getIsHalignDefaultDefined();
		}

		/** Indicates whether or not the 'valign' (aka 'Valign') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'valign'
		    (aka 'Valign') attributeGroup. **/
		bool getIsValignDefaultDefined() const
		{
			return myMxAttrGrpValign.getIsValignDefaultDefined();
		}

/* Get AttributeDefaultValue ---------------------------------------------------------- */

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'use-symbols' (aka 'UseSymbols') attribute. **/
		MxEnumYesNo getUseSymbolsDefaultValue() const
		{
			return MxEnumYesNo(  );
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'text' (aka 'Text') attribute. **/
		XsToken getTextDefaultValue() const
		{
			return XsToken(  );
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'stack-degrees' (aka 'StackDegrees') attribute. **/
		MxEnumYesNo getStackDegreesDefaultValue() const
		{
			return MxEnumYesNo(  );
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'parentheses-degrees' (aka 'ParenthesesDegrees') attribute. **/
		MxEnumYesNo getParenthesesDegreesDefaultValue() const
		{
			return MxEnumYesNo(  );
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'bracket-degrees' (aka 'BracketDegrees') attribute. **/
		MxEnumYesNo getBracketDegreesDefaultValue() const
		{
			return MxEnumYesNo(  );
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'default-x' (aka 'DefaultX') attribute. This attribute is a member
		    of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
		MxNumberTenths getDefaultXDefaultValue() const
		{
			return myMxAttrGrpPrintStyle.getDefaultXDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'default-y' (aka 'DefaultY') attribute. This attribute is a member
		    of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
		MxNumberTenths getDefaultYDefaultValue() const
		{
			return myMxAttrGrpPrintStyle.getDefaultYDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'relative-x' (aka 'RelativeX') attribute. This attribute is a member
		    of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
		MxNumberTenths getRelativeXDefaultValue() const
		{
			return myMxAttrGrpPrintStyle.getRelativeXDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'relative-y' (aka 'RelativeY') attribute. This attribute is a member
		    of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
		MxNumberTenths getRelativeYDefaultValue() const
		{
			return myMxAttrGrpPrintStyle.getRelativeYDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'font-family' (aka 'FontFamily') attribute. This attribute is a
		    member of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
		MxCommaSeparatedText getFontFamilyDefaultValue() const
		{
			return myMxAttrGrpPrintStyle.getFontFamilyDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'font-style' (aka 'FontStyle') attribute. This attribute is a member
		    of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
		MxEnumFontStyle getFontStyleDefaultValue() const
		{
			return myMxAttrGrpPrintStyle.getFontStyleDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'font-size' (aka 'FontSize') attribute. This attribute is a member
		    of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
		MxFontSize getFontSizeDefaultValue() const
		{
			return myMxAttrGrpPrintStyle.getFontSizeDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'font-weight' (aka 'FontWeight') attribute. This attribute is a
		    member of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
		MxEnumFontWeight getFontWeightDefaultValue() const
		{
			return myMxAttrGrpPrintStyle.getFontWeightDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'color' (aka 'Color') attribute. This attribute is a member of
		    the 'print-style' (aka 'PrintStyle') attributeGroup. **/
		MxColor getColorDefaultValue() const
		{
			return myMxAttrGrpPrintStyle.getColorDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'halign' (aka 'Halign') attribute. This attribute is a member of
		    the 'halign' (aka 'Halign') attributeGroup. **/
		MxEnumLeftCenterRight getHalignDefaultValue() const
		{
			return myMxAttrGrpHalign.getHalignDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'valign' (aka 'Valign') attribute. This attribute is a member of
		    the 'valign' (aka 'Valign') attributeGroup. **/
		MxEnumValign getValignDefaultValue() const
		{
			return myMxAttrGrpValign.getValignDefaultValue();
		}

	}; // struct MxCxSmpKind::Impl

	const int MxCxSmpKind::Impl::myXsdID = 3575;
	const std::string MxCxSmpKind::Impl::myXmlTypeName = "kind";
	const std::string MxCxSmpKind::Impl::myCppClassName = "MxCxSmpKind";
	const std::string MxCxSmpKind::Impl::myDocumentation = "Kind indicates the type of chord. Degree elements can then add, subtract, or alter from these starting points The attributes are used to indicate the formatting of the symbol. Since the kind element is the constant in all the harmony-chord groups that can make up a polychord, many formatting attributes are here. The use-symbols attribute is yes if the kind should be represented when possible with harmony symbols rather than letters and numbers. These symbols include: major: a triangle, like Unicode 25B3 minor: -, like Unicode 002D augmented: +, like Unicode 002B diminished: , like Unicode 00B0 half-diminished: , like Unicode 00F8 For the major-minor kind, only the minor symbol is used when use-symbols is yes. The major symbol is set using the symbol attribute in the degree-value element. The corresponding degree-alter value will usually be 0 in this case. The text attribute describes how the kind should be spelled in a score. If use-symbols is yes, the value of the text attribute follows the symbol. The stack-degrees attribute is yes if the degree elements should be stacked above each other. The parentheses-degrees attribute is yes if all the degrees should be in parentheses. The bracket-degrees attribute is yes if all the degrees should be in a bracket. If not specified, these values are implementation-specific. The alignment attributes are for the entire harmony-chord group of which this kind element is a part.";

} // namespace lexicon


/* MxCxSmpKind ------------------------------------------------------------------------ */

namespace lexicon
{

/* Constructor, Destructor, Copy, Assignment ------------------------------------------ */

	MxCxSmpKind::MxCxSmpKind( const std::string& elementName, const MxEnumKindValue& value_in )
	:myImpl( new Impl( elementName, value_in ) ) {}

	MxCxSmpKind::~MxCxSmpKind() {}

	MxCxSmpKind::MxCxSmpKind( const MxCxSmpKind& other )
	:myImpl( new Impl( *(other.myImpl) ) ) {}

	MxCxSmpKind& MxCxSmpKind::operator=( const MxCxSmpKind& other )
	{
		this->myImpl = std::unique_ptr<Impl>( new Impl( *(other.myImpl) ) );
		return *this;
	}

/* GetSet Value and Element Name ------------------------------------------------------ */

	/** Returns the contained xs:simpleContent value. **/
	MxEnumKindValue MxCxSmpKind::getValue() const
	{
		return myImpl->getValue();
	}

	/** Sets the contained xs:simpleContent value. **/
	void MxCxSmpKind::setValue( const MxEnumKindValue& value_in )
	{
		myImpl->setValue( value_in );
	}

	/** Returns the name of the Xml element employing this ComplexType. **/
	std::string MxCxSmpKind::getElementName() const
	{
		return myImpl->getElementName();
	}

/* Get Class Information -------------------------------------------------------------- */

	/** Returns the name of this xs:complexType as found in the musicxml.xsd
	    document. **/
	std::string MxCxSmpKind::getXmlTypeName() const
	{
		return myImpl->getXmlTypeName();
	}

	/** Returns the name of this C++ class. **/
	std::string MxCxSmpKind::getClassName() const
	{
		return myImpl->getClassName();
	}

	/** Returns the documentation for this musicxml type as found in the musicxml.xsd
	    document. **/
	std::string MxCxSmpKind::getDocumentation() const
	{
		return myImpl->getDocumentation();
	}

/* Get Attribute Values --------------------------------------------------------------- */

	/** Returns the internal value of the 'use-symbols' (aka 'UseSymbols')
	    attribute. **/
	MxEnumYesNo MxCxSmpKind::getUseSymbols() const
	{
		return myImpl->getUseSymbols();
	}

	/** Returns the internal value of the 'text' (aka 'Text') attribute. **/
	XsToken MxCxSmpKind::getText() const
	{
		return myImpl->getText();
	}

	/** Returns the internal value of the 'stack-degrees' (aka 'StackDegrees')
	    attribute. **/
	MxEnumYesNo MxCxSmpKind::getStackDegrees() const
	{
		return myImpl->getStackDegrees();
	}

	/** Returns the internal value of the 'parentheses-degrees' (aka 'ParenthesesDegrees')
	    attribute. **/
	MxEnumYesNo MxCxSmpKind::getParenthesesDegrees() const
	{
		return myImpl->getParenthesesDegrees();
	}

	/** Returns the internal value of the 'bracket-degrees' (aka 'BracketDegrees')
	    attribute. **/
	MxEnumYesNo MxCxSmpKind::getBracketDegrees() const
	{
		return myImpl->getBracketDegrees();
	}

	/** Returns the internal value of the 'default-x' (aka 'DefaultX') attribute.
	    This attribute is a member of the 'print-style' (aka 'PrintStyle')
	    attributeGroup. **/
	MxNumberTenths MxCxSmpKind::getDefaultX() const
	{
		return myImpl->getDefaultX();
	}

	/** Returns the internal value of the 'default-y' (aka 'DefaultY') attribute.
	    This attribute is a member of the 'print-style' (aka 'PrintStyle')
	    attributeGroup. **/
	MxNumberTenths MxCxSmpKind::getDefaultY() const
	{
		return myImpl->getDefaultY();
	}

	/** Returns the internal value of the 'relative-x' (aka 'RelativeX') attribute.
	    This attribute is a member of the 'print-style' (aka 'PrintStyle')
	    attributeGroup. **/
	MxNumberTenths MxCxSmpKind::getRelativeX() const
	{
		return myImpl->getRelativeX();
	}

	/** Returns the internal value of the 'relative-y' (aka 'RelativeY') attribute.
	    This attribute is a member of the 'print-style' (aka 'PrintStyle')
	    attributeGroup. **/
	MxNumberTenths MxCxSmpKind::getRelativeY() const
	{
		return myImpl->getRelativeY();
	}

	/** Returns the internal value of the 'font-family' (aka 'FontFamily')
	    attribute. This attribute is a member of the 'print-style' (aka 'PrintStyle')
	    attributeGroup. **/
	MxCommaSeparatedText MxCxSmpKind::getFontFamily() const
	{
		return myImpl->getFontFamily();
	}

	/** Returns the internal value of the 'font-style' (aka 'FontStyle') attribute.
	    This attribute is a member of the 'print-style' (aka 'PrintStyle')
	    attributeGroup. **/
	MxEnumFontStyle MxCxSmpKind::getFontStyle() const
	{
		return myImpl->getFontStyle();
	}

	/** Returns the internal value of the 'font-size' (aka 'FontSize') attribute.
	    This attribute is a member of the 'print-style' (aka 'PrintStyle')
	    attributeGroup. **/
	MxFontSize MxCxSmpKind::getFontSize() const
	{
		return myImpl->getFontSize();
	}

	/** Returns the internal value of the 'font-weight' (aka 'FontWeight')
	    attribute. This attribute is a member of the 'print-style' (aka 'PrintStyle')
	    attributeGroup. **/
	MxEnumFontWeight MxCxSmpKind::getFontWeight() const
	{
		return myImpl->getFontWeight();
	}

	/** Returns the internal value of the 'color' (aka 'Color') attribute.
	    This attribute is a member of the 'print-style' (aka 'PrintStyle')
	    attributeGroup. **/
	MxColor MxCxSmpKind::getColor() const
	{
		return myImpl->getColor();
	}

	/** Returns the internal value of the 'halign' (aka 'Halign') attribute.
	    This attribute is a member of the 'halign' (aka 'Halign') attributeGroup. **/
	MxEnumLeftCenterRight MxCxSmpKind::getHalign() const
	{
		return myImpl->getHalign();
	}

	/** Returns the internal value of the 'valign' (aka 'Valign') attribute.
	    This attribute is a member of the 'valign' (aka 'Valign') attributeGroup. **/
	MxEnumValign MxCxSmpKind::getValign() const
	{
		return myImpl->getValign();
	}

/* Set Attribute Values --------------------------------------------------------------- */

	/** Sets the internal value of the 'use-symbols' (aka 'UseSymbols') attribute. **/
	void MxCxSmpKind::setUseSymbols( const MxEnumYesNo& value_in )
	{
		myImpl->setUseSymbols( value_in );
	}

	/** Sets the internal value of the 'text' (aka 'Text') attribute. **/
	void MxCxSmpKind::setText( const XsToken& value_in )
	{
		myImpl->setText( value_in );
	}

	/** Sets the internal value of the 'stack-degrees' (aka 'StackDegrees')
	    attribute. **/
	void MxCxSmpKind::setStackDegrees( const MxEnumYesNo& value_in )
	{
		myImpl->setStackDegrees( value_in );
	}

	/** Sets the internal value of the 'parentheses-degrees' (aka 'ParenthesesDegrees')
	    attribute. **/
	void MxCxSmpKind::setParenthesesDegrees( const MxEnumYesNo& value_in )
	{
		myImpl->setParenthesesDegrees( value_in );
	}

	/** Sets the internal value of the 'bracket-degrees' (aka 'BracketDegrees')
	    attribute. **/
	void MxCxSmpKind::setBracketDegrees( const MxEnumYesNo& value_in )
	{
		myImpl->setBracketDegrees( value_in );
	}

	/** Sets the internal value of the 'default-x' (aka 'DefaultX') attribute.
	    This attribute is a member of the 'print-style' (aka 'PrintStyle')
	    attributeGroup. **/
	void MxCxSmpKind::setDefaultX( const MxNumberTenths& value_in )
	{
		myImpl->setDefaultX( value_in );
	}

	/** Sets the internal value of the 'default-y' (aka 'DefaultY') attribute.
	    This attribute is a member of the 'print-style' (aka 'PrintStyle')
	    attributeGroup. **/
	void MxCxSmpKind::setDefaultY( const MxNumberTenths& value_in )
	{
		myImpl->setDefaultY( value_in );
	}

	/** Sets the internal value of the 'relative-x' (aka 'RelativeX') attribute.
	    This attribute is a member of the 'print-style' (aka 'PrintStyle')
	    attributeGroup. **/
	void MxCxSmpKind::setRelativeX( const MxNumberTenths& value_in )
	{
		myImpl->setRelativeX( value_in );
	}

	/** Sets the internal value of the 'relative-y' (aka 'RelativeY') attribute.
	    This attribute is a member of the 'print-style' (aka 'PrintStyle')
	    attributeGroup. **/
	void MxCxSmpKind::setRelativeY( const MxNumberTenths& value_in )
	{
		myImpl->setRelativeY( value_in );
	}

	/** Sets the internal value of the 'font-family' (aka 'FontFamily') attribute.
	    This attribute is a member of the 'print-style' (aka 'PrintStyle')
	    attributeGroup. **/
	void MxCxSmpKind::setFontFamily( const MxCommaSeparatedText& value_in )
	{
		myImpl->setFontFamily( value_in );
	}

	/** Sets the internal value of the 'font-style' (aka 'FontStyle') attribute.
	    This attribute is a member of the 'print-style' (aka 'PrintStyle')
	    attributeGroup. **/
	void MxCxSmpKind::setFontStyle( const MxEnumFontStyle& value_in )
	{
		myImpl->setFontStyle( value_in );
	}

	/** Sets the internal value of the 'font-size' (aka 'FontSize') attribute.
	    This attribute is a member of the 'print-style' (aka 'PrintStyle')
	    attributeGroup. **/
	void MxCxSmpKind::setFontSize( const MxFontSize& value_in )
	{
		myImpl->setFontSize( value_in );
	}

	/** Sets the internal value of the 'font-weight' (aka 'FontWeight') attribute.
	    This attribute is a member of the 'print-style' (aka 'PrintStyle')
	    attributeGroup. **/
	void MxCxSmpKind::setFontWeight( const MxEnumFontWeight& value_in )
	{
		myImpl->setFontWeight( value_in );
	}

	/** Sets the internal value of the 'color' (aka 'Color') attribute. This
	    attribute is a member of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	void MxCxSmpKind::setColor( const MxColor& value_in )
	{
		myImpl->setColor( value_in );
	}

	/** Sets the internal value of the 'halign' (aka 'Halign') attribute. This
	    attribute is a member of the 'halign' (aka 'Halign') attributeGroup. **/
	void MxCxSmpKind::setHalign( const MxEnumLeftCenterRight& value_in )
	{
		myImpl->setHalign( value_in );
	}

	/** Sets the internal value of the 'valign' (aka 'Valign') attribute. This
	    attribute is a member of the 'valign' (aka 'Valign') attributeGroup. **/
	void MxCxSmpKind::setValign( const MxEnumValign& value_in )
	{
		myImpl->setValign( value_in );
	}

/* Get IsAttributeRequired Values ----------------------------------------------------- */

	/** Indicates whether or not the 'use-symbols' (aka 'UseSymbols') attribute
	    is required to be present in a MusicXML document. **/
	bool MxCxSmpKind::getIsUseSymbolsRequired() const
	{
		return myImpl->getIsUseSymbolsRequired();
	}

	/** Indicates whether or not the 'text' (aka 'Text') attribute is required
	    to be present in a MusicXML document. **/
	bool MxCxSmpKind::getIsTextRequired() const
	{
		return myImpl->getIsTextRequired();
	}

	/** Indicates whether or not the 'stack-degrees' (aka 'StackDegrees') attribute
	    is required to be present in a MusicXML document. **/
	bool MxCxSmpKind::getIsStackDegreesRequired() const
	{
		return myImpl->getIsStackDegreesRequired();
	}

	/** Indicates whether or not the 'parentheses-degrees' (aka 'ParenthesesDegrees')
	    attribute is required to be present in a MusicXML document. **/
	bool MxCxSmpKind::getIsParenthesesDegreesRequired() const
	{
		return myImpl->getIsParenthesesDegreesRequired();
	}

	/** Indicates whether or not the 'bracket-degrees' (aka 'BracketDegrees')
	    attribute is required to be present in a MusicXML document. **/
	bool MxCxSmpKind::getIsBracketDegreesRequired() const
	{
		return myImpl->getIsBracketDegreesRequired();
	}

	/** Indicates whether or not the 'default-x' (aka 'DefaultX') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	bool MxCxSmpKind::getIsDefaultXRequired() const
	{
		return myImpl->getIsDefaultXRequired();
	}

	/** Indicates whether or not the 'default-y' (aka 'DefaultY') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	bool MxCxSmpKind::getIsDefaultYRequired() const
	{
		return myImpl->getIsDefaultYRequired();
	}

	/** Indicates whether or not the 'relative-x' (aka 'RelativeX') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	bool MxCxSmpKind::getIsRelativeXRequired() const
	{
		return myImpl->getIsRelativeXRequired();
	}

	/** Indicates whether or not the 'relative-y' (aka 'RelativeY') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	bool MxCxSmpKind::getIsRelativeYRequired() const
	{
		return myImpl->getIsRelativeYRequired();
	}

	/** Indicates whether or not the 'font-family' (aka 'FontFamily') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	bool MxCxSmpKind::getIsFontFamilyRequired() const
	{
		return myImpl->getIsFontFamilyRequired();
	}

	/** Indicates whether or not the 'font-style' (aka 'FontStyle') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	bool MxCxSmpKind::getIsFontStyleRequired() const
	{
		return myImpl->getIsFontStyleRequired();
	}

	/** Indicates whether or not the 'font-size' (aka 'FontSize') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	bool MxCxSmpKind::getIsFontSizeRequired() const
	{
		return myImpl->getIsFontSizeRequired();
	}

	/** Indicates whether or not the 'font-weight' (aka 'FontWeight') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	bool MxCxSmpKind::getIsFontWeightRequired() const
	{
		return myImpl->getIsFontWeightRequired();
	}

	/** Indicates whether or not the 'color' (aka 'Color') attribute is required
	    to be present in a MusicXML document. This attribute is a member of
	    the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	bool MxCxSmpKind::getIsColorRequired() const
	{
		return myImpl->getIsColorRequired();
	}

	/** Indicates whether or not the 'halign' (aka 'Halign') attribute is required
	    to be present in a MusicXML document. This attribute is a member of
	    the 'halign' (aka 'Halign') attributeGroup. **/
	bool MxCxSmpKind::getIsHalignRequired() const
	{
		return myImpl->getIsHalignRequired();
	}

	/** Indicates whether or not the 'valign' (aka 'Valign') attribute is required
	    to be present in a MusicXML document. This attribute is a member of
	    the 'valign' (aka 'Valign') attributeGroup. **/
	bool MxCxSmpKind::getIsValignRequired() const
	{
		return myImpl->getIsValignRequired();
	}

/* Get IsAttributePresent Values ------------------------------------------------------ */

	/** Indicates whether or not the 'use-symbols' (aka 'UseSymbols') attribute
	    is (or will be) present in the MusicXML document. **/
	bool MxCxSmpKind::getIsUseSymbolsPresent() const
	{
		return myImpl->getIsUseSymbolsPresent();
	}

	/** Indicates whether or not the 'text' (aka 'Text') attribute is (or will
	    be) present in the MusicXML document. **/
	bool MxCxSmpKind::getIsTextPresent() const
	{
		return myImpl->getIsTextPresent();
	}

	/** Indicates whether or not the 'stack-degrees' (aka 'StackDegrees') attribute
	    is (or will be) present in the MusicXML document. **/
	bool MxCxSmpKind::getIsStackDegreesPresent() const
	{
		return myImpl->getIsStackDegreesPresent();
	}

	/** Indicates whether or not the 'parentheses-degrees' (aka 'ParenthesesDegrees')
	    attribute is (or will be) present in the MusicXML document. **/
	bool MxCxSmpKind::getIsParenthesesDegreesPresent() const
	{
		return myImpl->getIsParenthesesDegreesPresent();
	}

	/** Indicates whether or not the 'bracket-degrees' (aka 'BracketDegrees')
	    attribute is (or will be) present in the MusicXML document. **/
	bool MxCxSmpKind::getIsBracketDegreesPresent() const
	{
		return myImpl->getIsBracketDegreesPresent();
	}

	/** Indicates whether or not the 'default-x' (aka 'DefaultX') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	bool MxCxSmpKind::getIsDefaultXPresent() const
	{
		return myImpl->getIsDefaultXPresent();
	}

	/** Indicates whether or not the 'default-y' (aka 'DefaultY') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	bool MxCxSmpKind::getIsDefaultYPresent() const
	{
		return myImpl->getIsDefaultYPresent();
	}

	/** Indicates whether or not the 'relative-x' (aka 'RelativeX') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	bool MxCxSmpKind::getIsRelativeXPresent() const
	{
		return myImpl->getIsRelativeXPresent();
	}

	/** Indicates whether or not the 'relative-y' (aka 'RelativeY') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	bool MxCxSmpKind::getIsRelativeYPresent() const
	{
		return myImpl->getIsRelativeYPresent();
	}

	/** Indicates whether or not the 'font-family' (aka 'FontFamily') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	bool MxCxSmpKind::getIsFontFamilyPresent() const
	{
		return myImpl->getIsFontFamilyPresent();
	}

	/** Indicates whether or not the 'font-style' (aka 'FontStyle') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	bool MxCxSmpKind::getIsFontStylePresent() const
	{
		return myImpl->getIsFontStylePresent();
	}

	/** Indicates whether or not the 'font-size' (aka 'FontSize') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	bool MxCxSmpKind::getIsFontSizePresent() const
	{
		return myImpl->getIsFontSizePresent();
	}

	/** Indicates whether or not the 'font-weight' (aka 'FontWeight') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	bool MxCxSmpKind::getIsFontWeightPresent() const
	{
		return myImpl->getIsFontWeightPresent();
	}

	/** Indicates whether or not the 'color' (aka 'Color') attribute is (or
	    will be) present in the MusicXML document. This attribute is a member
	    of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	bool MxCxSmpKind::getIsColorPresent() const
	{
		return myImpl->getIsColorPresent();
	}

	/** Indicates whether or not the 'halign' (aka 'Halign') attribute is (or
	    will be) present in the MusicXML document. This attribute is a member
	    of the 'halign' (aka 'Halign') attributeGroup. **/
	bool MxCxSmpKind::getIsHalignPresent() const
	{
		return myImpl->getIsHalignPresent();
	}

	/** Indicates whether or not the 'valign' (aka 'Valign') attribute is (or
	    will be) present in the MusicXML document. This attribute is a member
	    of the 'valign' (aka 'Valign') attributeGroup. **/
	bool MxCxSmpKind::getIsValignPresent() const
	{
		return myImpl->getIsValignPresent();
	}

/* Set IsAttributePresent Values ------------------------------------------------------ */

	/** Sets the value which indicates whether or not the 'use-symbols' (aka
	    'UseSymbols') attribute is (or will be) present in the MusicXML document. **/
	void MxCxSmpKind::setIsUseSymbolsPresent( const bool& value_in )
	{
		myImpl->setIsUseSymbolsPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'text' (aka 'Text')
	    attribute is (or will be) present in the MusicXML document. **/
	void MxCxSmpKind::setIsTextPresent( const bool& value_in )
	{
		myImpl->setIsTextPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'stack-degrees' (aka
	    'StackDegrees') attribute is (or will be) present in the MusicXML document. **/
	void MxCxSmpKind::setIsStackDegreesPresent( const bool& value_in )
	{
		myImpl->setIsStackDegreesPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'parentheses-degrees'
	    (aka 'ParenthesesDegrees') attribute is (or will be) present in the
	    MusicXML document. **/
	void MxCxSmpKind::setIsParenthesesDegreesPresent( const bool& value_in )
	{
		myImpl->setIsParenthesesDegreesPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'bracket-degrees'
	    (aka 'BracketDegrees') attribute is (or will be) present in the MusicXML
	    document. **/
	void MxCxSmpKind::setIsBracketDegreesPresent( const bool& value_in )
	{
		myImpl->setIsBracketDegreesPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'default-x' (aka
	    'DefaultX') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'print-style' (aka 'PrintStyle')
	    attributeGroup. **/
	void MxCxSmpKind::setIsDefaultXPresent( const bool& value_in )
	{
		myImpl->setIsDefaultXPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'default-y' (aka
	    'DefaultY') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'print-style' (aka 'PrintStyle')
	    attributeGroup. **/
	void MxCxSmpKind::setIsDefaultYPresent( const bool& value_in )
	{
		myImpl->setIsDefaultYPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'relative-x' (aka
	    'RelativeX') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'print-style' (aka 'PrintStyle')
	    attributeGroup. **/
	void MxCxSmpKind::setIsRelativeXPresent( const bool& value_in )
	{
		myImpl->setIsRelativeXPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'relative-y' (aka
	    'RelativeY') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'print-style' (aka 'PrintStyle')
	    attributeGroup. **/
	void MxCxSmpKind::setIsRelativeYPresent( const bool& value_in )
	{
		myImpl->setIsRelativeYPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'font-family' (aka
	    'FontFamily') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'print-style' (aka 'PrintStyle')
	    attributeGroup. **/
	void MxCxSmpKind::setIsFontFamilyPresent( const bool& value_in )
	{
		myImpl->setIsFontFamilyPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'font-style' (aka
	    'FontStyle') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'print-style' (aka 'PrintStyle')
	    attributeGroup. **/
	void MxCxSmpKind::setIsFontStylePresent( const bool& value_in )
	{
		myImpl->setIsFontStylePresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'font-size' (aka
	    'FontSize') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'print-style' (aka 'PrintStyle')
	    attributeGroup. **/
	void MxCxSmpKind::setIsFontSizePresent( const bool& value_in )
	{
		myImpl->setIsFontSizePresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'font-weight' (aka
	    'FontWeight') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'print-style' (aka 'PrintStyle')
	    attributeGroup. **/
	void MxCxSmpKind::setIsFontWeightPresent( const bool& value_in )
	{
		myImpl->setIsFontWeightPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'color' (aka 'Color')
	    attribute is (or will be) present in the MusicXML document. This attribute
	    is a member of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	void MxCxSmpKind::setIsColorPresent( const bool& value_in )
	{
		myImpl->setIsColorPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'halign' (aka 'Halign')
	    attribute is (or will be) present in the MusicXML document. This attribute
	    is a member of the 'halign' (aka 'Halign') attributeGroup. **/
	void MxCxSmpKind::setIsHalignPresent( const bool& value_in )
	{
		myImpl->setIsHalignPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'valign' (aka 'Valign')
	    attribute is (or will be) present in the MusicXML document. This attribute
	    is a member of the 'valign' (aka 'Valign') attributeGroup. **/
	void MxCxSmpKind::setIsValignPresent( const bool& value_in )
	{
		myImpl->setIsValignPresent( value_in );
	}

/* Stringing and Streaming ------------------------------------------------------------ */

	/** Returns the xml representation of the object's value. **/
	std::string MxCxSmpKind::toString() const
	{
		return myImpl->toString();
	}

	/** Returns the xml representation of the object's value. **/
	std::ostream& MxCxSmpKind::stream( std::ostream& os_out ) const
	{
		return myImpl->stream( os_out );
	}

/* Get IsAttributeDefaultDefined Values ----------------------------------------------- */

	/** Indicates whether or not the 'use-symbols' (aka 'UseSymbols') has a
	    default value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). **/
	bool MxCxSmpKind::getIsUseSymbolsDefaultDefined() const
	{
		return myImpl->getIsUseSymbolsDefaultDefined();
	}

	/** Indicates whether or not the 'text' (aka 'Text') has a default value
	    defined in the MusicXML xsd specification (either explicitly or in
	    the documentation). **/
	bool MxCxSmpKind::getIsTextDefaultDefined() const
	{
		return myImpl->getIsTextDefaultDefined();
	}

	/** Indicates whether or not the 'stack-degrees' (aka 'StackDegrees') has
	    a default value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). **/
	bool MxCxSmpKind::getIsStackDegreesDefaultDefined() const
	{
		return myImpl->getIsStackDegreesDefaultDefined();
	}

	/** Indicates whether or not the 'parentheses-degrees' (aka 'ParenthesesDegrees')
	    has a default value defined in the MusicXML xsd specification (either
	    explicitly or in the documentation). **/
	bool MxCxSmpKind::getIsParenthesesDegreesDefaultDefined() const
	{
		return myImpl->getIsParenthesesDegreesDefaultDefined();
	}

	/** Indicates whether or not the 'bracket-degrees' (aka 'BracketDegrees')
	    has a default value defined in the MusicXML xsd specification (either
	    explicitly or in the documentation). **/
	bool MxCxSmpKind::getIsBracketDegreesDefaultDefined() const
	{
		return myImpl->getIsBracketDegreesDefaultDefined();
	}

	/** Indicates whether or not the 'default-x' (aka 'DefaultX') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'print-style'
	    (aka 'PrintStyle') attributeGroup. **/
	bool MxCxSmpKind::getIsDefaultXDefaultDefined() const
	{
		return myImpl->getIsDefaultXDefaultDefined();
	}

	/** Indicates whether or not the 'default-y' (aka 'DefaultY') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'print-style'
	    (aka 'PrintStyle') attributeGroup. **/
	bool MxCxSmpKind::getIsDefaultYDefaultDefined() const
	{
		return myImpl->getIsDefaultYDefaultDefined();
	}

	/** Indicates whether or not the 'relative-x' (aka 'RelativeX') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'print-style'
	    (aka 'PrintStyle') attributeGroup. **/
	bool MxCxSmpKind::getIsRelativeXDefaultDefined() const
	{
		return myImpl->getIsRelativeXDefaultDefined();
	}

	/** Indicates whether or not the 'relative-y' (aka 'RelativeY') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'print-style'
	    (aka 'PrintStyle') attributeGroup. **/
	bool MxCxSmpKind::getIsRelativeYDefaultDefined() const
	{
		return myImpl->getIsRelativeYDefaultDefined();
	}

	/** Indicates whether or not the 'font-family' (aka 'FontFamily') has a
	    default value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'print-style'
	    (aka 'PrintStyle') attributeGroup. **/
	bool MxCxSmpKind::getIsFontFamilyDefaultDefined() const
	{
		return myImpl->getIsFontFamilyDefaultDefined();
	}

	/** Indicates whether or not the 'font-style' (aka 'FontStyle') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'print-style'
	    (aka 'PrintStyle') attributeGroup. **/
	bool MxCxSmpKind::getIsFontStyleDefaultDefined() const
	{
		return myImpl->getIsFontStyleDefaultDefined();
	}

	/** Indicates whether or not the 'font-size' (aka 'FontSize') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'print-style'
	    (aka 'PrintStyle') attributeGroup. **/
	bool MxCxSmpKind::getIsFontSizeDefaultDefined() const
	{
		return myImpl->getIsFontSizeDefaultDefined();
	}

	/** Indicates whether or not the 'font-weight' (aka 'FontWeight') has a
	    default value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'print-style'
	    (aka 'PrintStyle') attributeGroup. **/
	bool MxCxSmpKind::getIsFontWeightDefaultDefined() const
	{
		return myImpl->getIsFontWeightDefaultDefined();
	}

	/** Indicates whether or not the 'color' (aka 'Color') has a default value
	    defined in the MusicXML xsd specification (either explicitly or in
	    the documentation). This attribute is a member of the 'print-style'
	    (aka 'PrintStyle') attributeGroup. **/
	bool MxCxSmpKind::getIsColorDefaultDefined() const
	{
		return myImpl->getIsColorDefaultDefined();
	}

	/** Indicates whether or not the 'halign' (aka 'Halign') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'halign'
	    (aka 'Halign') attributeGroup. **/
	bool MxCxSmpKind::getIsHalignDefaultDefined() const
	{
		return myImpl->getIsHalignDefaultDefined();
	}

	/** Indicates whether or not the 'valign' (aka 'Valign') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'valign'
	    (aka 'Valign') attributeGroup. **/
	bool MxCxSmpKind::getIsValignDefaultDefined() const
	{
		return myImpl->getIsValignDefaultDefined();
	}

/* Get AttributeDefaultValue ---------------------------------------------------------- */

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'use-symbols' (aka 'UseSymbols') attribute. **/
	MxEnumYesNo MxCxSmpKind::getUseSymbolsDefaultValue() const
	{
		return myImpl->getUseSymbolsDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'text' (aka 'Text') attribute. **/
	XsToken MxCxSmpKind::getTextDefaultValue() const
	{
		return myImpl->getTextDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'stack-degrees' (aka 'StackDegrees') attribute. **/
	MxEnumYesNo MxCxSmpKind::getStackDegreesDefaultValue() const
	{
		return myImpl->getStackDegreesDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'parentheses-degrees' (aka 'ParenthesesDegrees') attribute. **/
	MxEnumYesNo MxCxSmpKind::getParenthesesDegreesDefaultValue() const
	{
		return myImpl->getParenthesesDegreesDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'bracket-degrees' (aka 'BracketDegrees') attribute. **/
	MxEnumYesNo MxCxSmpKind::getBracketDegreesDefaultValue() const
	{
		return myImpl->getBracketDegreesDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'default-x' (aka 'DefaultX') attribute. This attribute is a member
	    of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	MxNumberTenths MxCxSmpKind::getDefaultXDefaultValue() const
	{
		return myImpl->getDefaultXDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'default-y' (aka 'DefaultY') attribute. This attribute is a member
	    of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	MxNumberTenths MxCxSmpKind::getDefaultYDefaultValue() const
	{
		return myImpl->getDefaultYDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'relative-x' (aka 'RelativeX') attribute. This attribute is a member
	    of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	MxNumberTenths MxCxSmpKind::getRelativeXDefaultValue() const
	{
		return myImpl->getRelativeXDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'relative-y' (aka 'RelativeY') attribute. This attribute is a member
	    of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	MxNumberTenths MxCxSmpKind::getRelativeYDefaultValue() const
	{
		return myImpl->getRelativeYDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'font-family' (aka 'FontFamily') attribute. This attribute is a
	    member of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	MxCommaSeparatedText MxCxSmpKind::getFontFamilyDefaultValue() const
	{
		return myImpl->getFontFamilyDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'font-style' (aka 'FontStyle') attribute. This attribute is a member
	    of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	MxEnumFontStyle MxCxSmpKind::getFontStyleDefaultValue() const
	{
		return myImpl->getFontStyleDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'font-size' (aka 'FontSize') attribute. This attribute is a member
	    of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	MxFontSize MxCxSmpKind::getFontSizeDefaultValue() const
	{
		return myImpl->getFontSizeDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'font-weight' (aka 'FontWeight') attribute. This attribute is a
	    member of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	MxEnumFontWeight MxCxSmpKind::getFontWeightDefaultValue() const
	{
		return myImpl->getFontWeightDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'color' (aka 'Color') attribute. This attribute is a member of
	    the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	MxColor MxCxSmpKind::getColorDefaultValue() const
	{
		return myImpl->getColorDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'halign' (aka 'Halign') attribute. This attribute is a member of
	    the 'halign' (aka 'Halign') attributeGroup. **/
	MxEnumLeftCenterRight MxCxSmpKind::getHalignDefaultValue() const
	{
		return myImpl->getHalignDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'valign' (aka 'Valign') attribute. This attribute is a member of
	    the 'valign' (aka 'Valign') attributeGroup. **/
	MxEnumValign MxCxSmpKind::getValignDefaultValue() const
	{
		return myImpl->getValignDefaultValue();
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

