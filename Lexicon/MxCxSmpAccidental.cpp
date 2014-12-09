/* See MusicXML License at the bottom of this code page. */

/**
  * @file       MxCxSmpAccidental.cpp
  * @class      lexicon::MxCxSmpAccidental
  * @author     Matthew James Briggs
  * @email      matthew.james.briggs@gmail.com
  * @url        http://matthewjamesbriggs.com
  * @date       2014-12-02 17:31:48
  * @project    Lexicon
  * @version    1.0
  * @musicxmlid 4333
  * 
  * @brief The 'Accidental' class serves as a binding for the MusicXml 'accidental'
  * complexType.
  * 
 **/

#include "MxCxSmpAccidental.h"
#include <sstream>
#include "_hidden_attributeStream.h"
#include "MxAttrGrpLevelDisplay.h"
#include "MxAttrGrpPrintStyle.h"

/* Impl ------------------------------------------------------------------------------- */

namespace lexicon
{
	struct MxCxSmpAccidental::Impl
	{
		Impl( const std::string& elementName, const MxEnumAccidentalValue& value_in )
		:myElementName( elementName )
		,myValue( value_in )
		,myCautionary()
		,myEditorial()
		,myMxAttrGrpLevelDisplay()
		,myMxAttrGrpPrintStyle()
		,myIsCautionaryPresent( false )
		,myIsEditorialPresent( false )
		{}

	private:
		std::string myElementName;
		MxEnumAccidentalValue myValue;
		MxEnumYesNo myCautionary;
		MxEnumYesNo myEditorial;
		MxAttrGrpLevelDisplay myMxAttrGrpLevelDisplay;
		MxAttrGrpPrintStyle myMxAttrGrpPrintStyle;
		bool myIsCautionaryPresent;
		bool myIsEditorialPresent;

		const static int myXsdID;
		const static std::string myXmlTypeName;
		const static std::string myCppClassName;
		const static std::string myDocumentation;

	public:

/* GetSet Value and Element Name ------------------------------------------------------ */

		/** Returns the contained xs:simpleContent value. **/
		MxEnumAccidentalValue getValue() const
		{
			return myValue;
		}

		/** Sets the contained xs:simpleContent value. **/
		void setValue( const MxEnumAccidentalValue& value_in )
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

		/** Returns the internal value of the 'cautionary' (aka 'Cautionary') attribute. **/
		MxEnumYesNo getCautionary() const
		{
			return myCautionary;
		}

		/** Returns the internal value of the 'editorial' (aka 'Editorial') attribute. **/
		MxEnumYesNo getEditorial() const
		{
			return myEditorial;
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

/* Set Attribute Values --------------------------------------------------------------- */

		/** Sets the internal value of the 'cautionary' (aka 'Cautionary') attribute. **/
		void setCautionary( const MxEnumYesNo& value_in )
		{
			myCautionary = value_in;
		}

		/** Sets the internal value of the 'editorial' (aka 'Editorial') attribute. **/
		void setEditorial( const MxEnumYesNo& value_in )
		{
			myEditorial = value_in;
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

/* Get IsAttributeRequired Values ----------------------------------------------------- */

		/** Indicates whether or not the 'cautionary' (aka 'Cautionary') attribute
		    is required to be present in a MusicXML document. **/
		bool getIsCautionaryRequired() const
		{
			return false;
		}

		/** Indicates whether or not the 'editorial' (aka 'Editorial') attribute
		    is required to be present in a MusicXML document. **/
		bool getIsEditorialRequired() const
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

/* Get IsAttributePresent Values ------------------------------------------------------ */

		/** Indicates whether or not the 'cautionary' (aka 'Cautionary') attribute
		    is (or will be) present in the MusicXML document. **/
		bool getIsCautionaryPresent() const
		{
			return myIsCautionaryPresent;
		}

		/** Indicates whether or not the 'editorial' (aka 'Editorial') attribute
		    is (or will be) present in the MusicXML document. **/
		bool getIsEditorialPresent() const
		{
			return myIsEditorialPresent;
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

/* Set IsAttributePresent Values ------------------------------------------------------ */

		/** Sets the value which indicates whether or not the 'cautionary' (aka
		    'Cautionary') attribute is (or will be) present in the MusicXML document. **/
		void setIsCautionaryPresent( const bool& value_in )
		{
			myIsCautionaryPresent = value_in;
		}

		/** Sets the value which indicates whether or not the 'editorial' (aka
		    'Editorial') attribute is (or will be) present in the MusicXML document. **/
		void setIsEditorialPresent( const bool& value_in )
		{
			myIsEditorialPresent = value_in;
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
			hidden::attributeStream( getIsCautionaryPresent(), "cautionary", getCautionary().toString(), os_out, isFirst );
			hidden::attributeStream( getIsEditorialPresent(), "editorial", getEditorial().toString(), os_out, isFirst );
			hidden::attributeStream( getIsParenthesesPresent(), "parentheses", getParentheses().toString(), os_out, isFirst );
			hidden::attributeStream( getIsBracketPresent(), "bracket", getBracket().toString(), os_out, isFirst );
			hidden::attributeStream( getIsSizePresent(), "size", getSize().toString(), os_out, isFirst );
			hidden::attributeStream( getIsDefaultXPresent(), "default-x", getDefaultX().toString(), os_out, isFirst );
			hidden::attributeStream( getIsDefaultYPresent(), "default-y", getDefaultY().toString(), os_out, isFirst );
			hidden::attributeStream( getIsRelativeXPresent(), "relative-x", getRelativeX().toString(), os_out, isFirst );
			hidden::attributeStream( getIsRelativeYPresent(), "relative-y", getRelativeY().toString(), os_out, isFirst );
			hidden::attributeStream( getIsFontFamilyPresent(), "font-family", getFontFamily().toString(), os_out, isFirst );
			hidden::attributeStream( getIsFontStylePresent(), "font-style", getFontStyle().toString(), os_out, isFirst );
			hidden::attributeStream( getIsFontSizePresent(), "font-size", getFontSize().toString(), os_out, isFirst );
			hidden::attributeStream( getIsFontWeightPresent(), "font-weight", getFontWeight().toString(), os_out, isFirst );
			hidden::attributeStream( getIsColorPresent(), "color", getColor().toString(), os_out, isFirst );
			os_out << '>';
			os_out << getValue().toString();
			os_out << "</";
			os_out << getElementName();
			os_out << '>';
			return os_out;
		}

/* Get IsAttributeDefaultDefined Values ----------------------------------------------- */

		/** Indicates whether or not the 'cautionary' (aka 'Cautionary') has a
		    default value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). **/
		bool getIsCautionaryDefaultDefined() const
		{
			return false;
		}

		/** Indicates whether or not the 'editorial' (aka 'Editorial') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). **/
		bool getIsEditorialDefaultDefined() const
		{
			return false;
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

/* Get AttributeDefaultValue ---------------------------------------------------------- */

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'cautionary' (aka 'Cautionary') attribute. **/
		MxEnumYesNo getCautionaryDefaultValue() const
		{
			return MxEnumYesNo(  );
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'editorial' (aka 'Editorial') attribute. **/
		MxEnumYesNo getEditorialDefaultValue() const
		{
			return MxEnumYesNo(  );
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

	}; // struct MxCxSmpAccidental::Impl

	const int MxCxSmpAccidental::Impl::myXsdID = 4333;
	const std::string MxCxSmpAccidental::Impl::myXmlTypeName = "accidental";
	const std::string MxCxSmpAccidental::Impl::myCppClassName = "MxCxSmpAccidental";
	const std::string MxCxSmpAccidental::Impl::myDocumentation = "The accidental type represents actual notated accidentals. Editorial and cautionary indications are indicated by attributes. Values for these attributes are 'no' if not present. Specific graphic display such as parentheses, brackets, and size are controlled by the level-display attribute group.";

} // namespace lexicon


/* MxCxSmpAccidental ------------------------------------------------------------------ */

namespace lexicon
{

/* Constructor, Destructor, Copy, Assignment ------------------------------------------ */

	MxCxSmpAccidental::MxCxSmpAccidental( const std::string& elementName, const MxEnumAccidentalValue& value_in )
	:myImpl( new Impl( elementName, value_in ) ) {}

	MxCxSmpAccidental::~MxCxSmpAccidental() {}

	MxCxSmpAccidental::MxCxSmpAccidental( const MxCxSmpAccidental& other )
	:myImpl( new Impl( *(other.myImpl) ) ) {}

	MxCxSmpAccidental& MxCxSmpAccidental::operator=( const MxCxSmpAccidental& other )
	{
		this->myImpl = std::unique_ptr<Impl>( new Impl( *(other.myImpl) ) );
		return *this;
	}

/* GetSet Value and Element Name ------------------------------------------------------ */

	/** Returns the contained xs:simpleContent value. **/
	MxEnumAccidentalValue MxCxSmpAccidental::getValue() const
	{
		return myImpl->getValue();
	}

	/** Sets the contained xs:simpleContent value. **/
	void MxCxSmpAccidental::setValue( const MxEnumAccidentalValue& value_in )
	{
		myImpl->setValue( value_in );
	}

	/** Returns the name of the Xml element employing this ComplexType. **/
	std::string MxCxSmpAccidental::getElementName() const
	{
		return myImpl->getElementName();
	}

/* Get Class Information -------------------------------------------------------------- */

	/** Returns the name of this xs:complexType as found in the musicxml.xsd
	    document. **/
	std::string MxCxSmpAccidental::getXmlTypeName() const
	{
		return myImpl->getXmlTypeName();
	}

	/** Returns the name of this C++ class. **/
	std::string MxCxSmpAccidental::getClassName() const
	{
		return myImpl->getClassName();
	}

	/** Returns the documentation for this musicxml type as found in the musicxml.xsd
	    document. **/
	std::string MxCxSmpAccidental::getDocumentation() const
	{
		return myImpl->getDocumentation();
	}

/* Get Attribute Values --------------------------------------------------------------- */

	/** Returns the internal value of the 'cautionary' (aka 'Cautionary') attribute. **/
	MxEnumYesNo MxCxSmpAccidental::getCautionary() const
	{
		return myImpl->getCautionary();
	}

	/** Returns the internal value of the 'editorial' (aka 'Editorial') attribute. **/
	MxEnumYesNo MxCxSmpAccidental::getEditorial() const
	{
		return myImpl->getEditorial();
	}

	/** Returns the internal value of the 'parentheses' (aka 'Parentheses')
	    attribute. This attribute is a member of the 'level-display' (aka 'LevelDisplay')
	    attributeGroup. **/
	MxEnumYesNo MxCxSmpAccidental::getParentheses() const
	{
		return myImpl->getParentheses();
	}

	/** Returns the internal value of the 'bracket' (aka 'Bracket') attribute.
	    This attribute is a member of the 'level-display' (aka 'LevelDisplay')
	    attributeGroup. **/
	MxEnumYesNo MxCxSmpAccidental::getBracket() const
	{
		return myImpl->getBracket();
	}

	/** Returns the internal value of the 'size' (aka 'Size') attribute. This
	    attribute is a member of the 'level-display' (aka 'LevelDisplay') attributeGroup. **/
	MxEnumSymbolSize MxCxSmpAccidental::getSize() const
	{
		return myImpl->getSize();
	}

	/** Returns the internal value of the 'default-x' (aka 'DefaultX') attribute.
	    This attribute is a member of the 'print-style' (aka 'PrintStyle')
	    attributeGroup. **/
	MxNumberTenths MxCxSmpAccidental::getDefaultX() const
	{
		return myImpl->getDefaultX();
	}

	/** Returns the internal value of the 'default-y' (aka 'DefaultY') attribute.
	    This attribute is a member of the 'print-style' (aka 'PrintStyle')
	    attributeGroup. **/
	MxNumberTenths MxCxSmpAccidental::getDefaultY() const
	{
		return myImpl->getDefaultY();
	}

	/** Returns the internal value of the 'relative-x' (aka 'RelativeX') attribute.
	    This attribute is a member of the 'print-style' (aka 'PrintStyle')
	    attributeGroup. **/
	MxNumberTenths MxCxSmpAccidental::getRelativeX() const
	{
		return myImpl->getRelativeX();
	}

	/** Returns the internal value of the 'relative-y' (aka 'RelativeY') attribute.
	    This attribute is a member of the 'print-style' (aka 'PrintStyle')
	    attributeGroup. **/
	MxNumberTenths MxCxSmpAccidental::getRelativeY() const
	{
		return myImpl->getRelativeY();
	}

	/** Returns the internal value of the 'font-family' (aka 'FontFamily')
	    attribute. This attribute is a member of the 'print-style' (aka 'PrintStyle')
	    attributeGroup. **/
	MxCommaSeparatedText MxCxSmpAccidental::getFontFamily() const
	{
		return myImpl->getFontFamily();
	}

	/** Returns the internal value of the 'font-style' (aka 'FontStyle') attribute.
	    This attribute is a member of the 'print-style' (aka 'PrintStyle')
	    attributeGroup. **/
	MxEnumFontStyle MxCxSmpAccidental::getFontStyle() const
	{
		return myImpl->getFontStyle();
	}

	/** Returns the internal value of the 'font-size' (aka 'FontSize') attribute.
	    This attribute is a member of the 'print-style' (aka 'PrintStyle')
	    attributeGroup. **/
	MxFontSize MxCxSmpAccidental::getFontSize() const
	{
		return myImpl->getFontSize();
	}

	/** Returns the internal value of the 'font-weight' (aka 'FontWeight')
	    attribute. This attribute is a member of the 'print-style' (aka 'PrintStyle')
	    attributeGroup. **/
	MxEnumFontWeight MxCxSmpAccidental::getFontWeight() const
	{
		return myImpl->getFontWeight();
	}

	/** Returns the internal value of the 'color' (aka 'Color') attribute.
	    This attribute is a member of the 'print-style' (aka 'PrintStyle')
	    attributeGroup. **/
	MxColor MxCxSmpAccidental::getColor() const
	{
		return myImpl->getColor();
	}

/* Set Attribute Values --------------------------------------------------------------- */

	/** Sets the internal value of the 'cautionary' (aka 'Cautionary') attribute. **/
	void MxCxSmpAccidental::setCautionary( const MxEnumYesNo& value_in )
	{
		myImpl->setCautionary( value_in );
	}

	/** Sets the internal value of the 'editorial' (aka 'Editorial') attribute. **/
	void MxCxSmpAccidental::setEditorial( const MxEnumYesNo& value_in )
	{
		myImpl->setEditorial( value_in );
	}

	/** Sets the internal value of the 'parentheses' (aka 'Parentheses') attribute.
	    This attribute is a member of the 'level-display' (aka 'LevelDisplay')
	    attributeGroup. **/
	void MxCxSmpAccidental::setParentheses( const MxEnumYesNo& value_in )
	{
		myImpl->setParentheses( value_in );
	}

	/** Sets the internal value of the 'bracket' (aka 'Bracket') attribute.
	    This attribute is a member of the 'level-display' (aka 'LevelDisplay')
	    attributeGroup. **/
	void MxCxSmpAccidental::setBracket( const MxEnumYesNo& value_in )
	{
		myImpl->setBracket( value_in );
	}

	/** Sets the internal value of the 'size' (aka 'Size') attribute. This
	    attribute is a member of the 'level-display' (aka 'LevelDisplay') attributeGroup. **/
	void MxCxSmpAccidental::setSize( const MxEnumSymbolSize& value_in )
	{
		myImpl->setSize( value_in );
	}

	/** Sets the internal value of the 'default-x' (aka 'DefaultX') attribute.
	    This attribute is a member of the 'print-style' (aka 'PrintStyle')
	    attributeGroup. **/
	void MxCxSmpAccidental::setDefaultX( const MxNumberTenths& value_in )
	{
		myImpl->setDefaultX( value_in );
	}

	/** Sets the internal value of the 'default-y' (aka 'DefaultY') attribute.
	    This attribute is a member of the 'print-style' (aka 'PrintStyle')
	    attributeGroup. **/
	void MxCxSmpAccidental::setDefaultY( const MxNumberTenths& value_in )
	{
		myImpl->setDefaultY( value_in );
	}

	/** Sets the internal value of the 'relative-x' (aka 'RelativeX') attribute.
	    This attribute is a member of the 'print-style' (aka 'PrintStyle')
	    attributeGroup. **/
	void MxCxSmpAccidental::setRelativeX( const MxNumberTenths& value_in )
	{
		myImpl->setRelativeX( value_in );
	}

	/** Sets the internal value of the 'relative-y' (aka 'RelativeY') attribute.
	    This attribute is a member of the 'print-style' (aka 'PrintStyle')
	    attributeGroup. **/
	void MxCxSmpAccidental::setRelativeY( const MxNumberTenths& value_in )
	{
		myImpl->setRelativeY( value_in );
	}

	/** Sets the internal value of the 'font-family' (aka 'FontFamily') attribute.
	    This attribute is a member of the 'print-style' (aka 'PrintStyle')
	    attributeGroup. **/
	void MxCxSmpAccidental::setFontFamily( const MxCommaSeparatedText& value_in )
	{
		myImpl->setFontFamily( value_in );
	}

	/** Sets the internal value of the 'font-style' (aka 'FontStyle') attribute.
	    This attribute is a member of the 'print-style' (aka 'PrintStyle')
	    attributeGroup. **/
	void MxCxSmpAccidental::setFontStyle( const MxEnumFontStyle& value_in )
	{
		myImpl->setFontStyle( value_in );
	}

	/** Sets the internal value of the 'font-size' (aka 'FontSize') attribute.
	    This attribute is a member of the 'print-style' (aka 'PrintStyle')
	    attributeGroup. **/
	void MxCxSmpAccidental::setFontSize( const MxFontSize& value_in )
	{
		myImpl->setFontSize( value_in );
	}

	/** Sets the internal value of the 'font-weight' (aka 'FontWeight') attribute.
	    This attribute is a member of the 'print-style' (aka 'PrintStyle')
	    attributeGroup. **/
	void MxCxSmpAccidental::setFontWeight( const MxEnumFontWeight& value_in )
	{
		myImpl->setFontWeight( value_in );
	}

	/** Sets the internal value of the 'color' (aka 'Color') attribute. This
	    attribute is a member of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	void MxCxSmpAccidental::setColor( const MxColor& value_in )
	{
		myImpl->setColor( value_in );
	}

/* Get IsAttributeRequired Values ----------------------------------------------------- */

	/** Indicates whether or not the 'cautionary' (aka 'Cautionary') attribute
	    is required to be present in a MusicXML document. **/
	bool MxCxSmpAccidental::getIsCautionaryRequired() const
	{
		return myImpl->getIsCautionaryRequired();
	}

	/** Indicates whether or not the 'editorial' (aka 'Editorial') attribute
	    is required to be present in a MusicXML document. **/
	bool MxCxSmpAccidental::getIsEditorialRequired() const
	{
		return myImpl->getIsEditorialRequired();
	}

	/** Indicates whether or not the 'parentheses' (aka 'Parentheses') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'level-display' (aka 'LevelDisplay') attributeGroup. **/
	bool MxCxSmpAccidental::getIsParenthesesRequired() const
	{
		return myImpl->getIsParenthesesRequired();
	}

	/** Indicates whether or not the 'bracket' (aka 'Bracket') attribute is
	    required to be present in a MusicXML document. This attribute is a
	    member of the 'level-display' (aka 'LevelDisplay') attributeGroup. **/
	bool MxCxSmpAccidental::getIsBracketRequired() const
	{
		return myImpl->getIsBracketRequired();
	}

	/** Indicates whether or not the 'size' (aka 'Size') attribute is required
	    to be present in a MusicXML document. This attribute is a member of
	    the 'level-display' (aka 'LevelDisplay') attributeGroup. **/
	bool MxCxSmpAccidental::getIsSizeRequired() const
	{
		return myImpl->getIsSizeRequired();
	}

	/** Indicates whether or not the 'default-x' (aka 'DefaultX') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	bool MxCxSmpAccidental::getIsDefaultXRequired() const
	{
		return myImpl->getIsDefaultXRequired();
	}

	/** Indicates whether or not the 'default-y' (aka 'DefaultY') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	bool MxCxSmpAccidental::getIsDefaultYRequired() const
	{
		return myImpl->getIsDefaultYRequired();
	}

	/** Indicates whether or not the 'relative-x' (aka 'RelativeX') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	bool MxCxSmpAccidental::getIsRelativeXRequired() const
	{
		return myImpl->getIsRelativeXRequired();
	}

	/** Indicates whether or not the 'relative-y' (aka 'RelativeY') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	bool MxCxSmpAccidental::getIsRelativeYRequired() const
	{
		return myImpl->getIsRelativeYRequired();
	}

	/** Indicates whether or not the 'font-family' (aka 'FontFamily') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	bool MxCxSmpAccidental::getIsFontFamilyRequired() const
	{
		return myImpl->getIsFontFamilyRequired();
	}

	/** Indicates whether or not the 'font-style' (aka 'FontStyle') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	bool MxCxSmpAccidental::getIsFontStyleRequired() const
	{
		return myImpl->getIsFontStyleRequired();
	}

	/** Indicates whether or not the 'font-size' (aka 'FontSize') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	bool MxCxSmpAccidental::getIsFontSizeRequired() const
	{
		return myImpl->getIsFontSizeRequired();
	}

	/** Indicates whether or not the 'font-weight' (aka 'FontWeight') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	bool MxCxSmpAccidental::getIsFontWeightRequired() const
	{
		return myImpl->getIsFontWeightRequired();
	}

	/** Indicates whether or not the 'color' (aka 'Color') attribute is required
	    to be present in a MusicXML document. This attribute is a member of
	    the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	bool MxCxSmpAccidental::getIsColorRequired() const
	{
		return myImpl->getIsColorRequired();
	}

/* Get IsAttributePresent Values ------------------------------------------------------ */

	/** Indicates whether or not the 'cautionary' (aka 'Cautionary') attribute
	    is (or will be) present in the MusicXML document. **/
	bool MxCxSmpAccidental::getIsCautionaryPresent() const
	{
		return myImpl->getIsCautionaryPresent();
	}

	/** Indicates whether or not the 'editorial' (aka 'Editorial') attribute
	    is (or will be) present in the MusicXML document. **/
	bool MxCxSmpAccidental::getIsEditorialPresent() const
	{
		return myImpl->getIsEditorialPresent();
	}

	/** Indicates whether or not the 'parentheses' (aka 'Parentheses') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'level-display' (aka 'LevelDisplay') attributeGroup. **/
	bool MxCxSmpAccidental::getIsParenthesesPresent() const
	{
		return myImpl->getIsParenthesesPresent();
	}

	/** Indicates whether or not the 'bracket' (aka 'Bracket') attribute is
	    (or will be) present in the MusicXML document. This attribute is a
	    member of the 'level-display' (aka 'LevelDisplay') attributeGroup. **/
	bool MxCxSmpAccidental::getIsBracketPresent() const
	{
		return myImpl->getIsBracketPresent();
	}

	/** Indicates whether or not the 'size' (aka 'Size') attribute is (or will
	    be) present in the MusicXML document. This attribute is a member of
	    the 'level-display' (aka 'LevelDisplay') attributeGroup. **/
	bool MxCxSmpAccidental::getIsSizePresent() const
	{
		return myImpl->getIsSizePresent();
	}

	/** Indicates whether or not the 'default-x' (aka 'DefaultX') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	bool MxCxSmpAccidental::getIsDefaultXPresent() const
	{
		return myImpl->getIsDefaultXPresent();
	}

	/** Indicates whether or not the 'default-y' (aka 'DefaultY') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	bool MxCxSmpAccidental::getIsDefaultYPresent() const
	{
		return myImpl->getIsDefaultYPresent();
	}

	/** Indicates whether or not the 'relative-x' (aka 'RelativeX') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	bool MxCxSmpAccidental::getIsRelativeXPresent() const
	{
		return myImpl->getIsRelativeXPresent();
	}

	/** Indicates whether or not the 'relative-y' (aka 'RelativeY') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	bool MxCxSmpAccidental::getIsRelativeYPresent() const
	{
		return myImpl->getIsRelativeYPresent();
	}

	/** Indicates whether or not the 'font-family' (aka 'FontFamily') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	bool MxCxSmpAccidental::getIsFontFamilyPresent() const
	{
		return myImpl->getIsFontFamilyPresent();
	}

	/** Indicates whether or not the 'font-style' (aka 'FontStyle') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	bool MxCxSmpAccidental::getIsFontStylePresent() const
	{
		return myImpl->getIsFontStylePresent();
	}

	/** Indicates whether or not the 'font-size' (aka 'FontSize') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	bool MxCxSmpAccidental::getIsFontSizePresent() const
	{
		return myImpl->getIsFontSizePresent();
	}

	/** Indicates whether or not the 'font-weight' (aka 'FontWeight') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	bool MxCxSmpAccidental::getIsFontWeightPresent() const
	{
		return myImpl->getIsFontWeightPresent();
	}

	/** Indicates whether or not the 'color' (aka 'Color') attribute is (or
	    will be) present in the MusicXML document. This attribute is a member
	    of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	bool MxCxSmpAccidental::getIsColorPresent() const
	{
		return myImpl->getIsColorPresent();
	}

/* Set IsAttributePresent Values ------------------------------------------------------ */

	/** Sets the value which indicates whether or not the 'cautionary' (aka
	    'Cautionary') attribute is (or will be) present in the MusicXML document. **/
	void MxCxSmpAccidental::setIsCautionaryPresent( const bool& value_in )
	{
		myImpl->setIsCautionaryPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'editorial' (aka
	    'Editorial') attribute is (or will be) present in the MusicXML document. **/
	void MxCxSmpAccidental::setIsEditorialPresent( const bool& value_in )
	{
		myImpl->setIsEditorialPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'parentheses' (aka
	    'Parentheses') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'level-display' (aka 'LevelDisplay')
	    attributeGroup. **/
	void MxCxSmpAccidental::setIsParenthesesPresent( const bool& value_in )
	{
		myImpl->setIsParenthesesPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'bracket' (aka 'Bracket')
	    attribute is (or will be) present in the MusicXML document. This attribute
	    is a member of the 'level-display' (aka 'LevelDisplay') attributeGroup. **/
	void MxCxSmpAccidental::setIsBracketPresent( const bool& value_in )
	{
		myImpl->setIsBracketPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'size' (aka 'Size')
	    attribute is (or will be) present in the MusicXML document. This attribute
	    is a member of the 'level-display' (aka 'LevelDisplay') attributeGroup. **/
	void MxCxSmpAccidental::setIsSizePresent( const bool& value_in )
	{
		myImpl->setIsSizePresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'default-x' (aka
	    'DefaultX') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'print-style' (aka 'PrintStyle')
	    attributeGroup. **/
	void MxCxSmpAccidental::setIsDefaultXPresent( const bool& value_in )
	{
		myImpl->setIsDefaultXPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'default-y' (aka
	    'DefaultY') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'print-style' (aka 'PrintStyle')
	    attributeGroup. **/
	void MxCxSmpAccidental::setIsDefaultYPresent( const bool& value_in )
	{
		myImpl->setIsDefaultYPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'relative-x' (aka
	    'RelativeX') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'print-style' (aka 'PrintStyle')
	    attributeGroup. **/
	void MxCxSmpAccidental::setIsRelativeXPresent( const bool& value_in )
	{
		myImpl->setIsRelativeXPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'relative-y' (aka
	    'RelativeY') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'print-style' (aka 'PrintStyle')
	    attributeGroup. **/
	void MxCxSmpAccidental::setIsRelativeYPresent( const bool& value_in )
	{
		myImpl->setIsRelativeYPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'font-family' (aka
	    'FontFamily') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'print-style' (aka 'PrintStyle')
	    attributeGroup. **/
	void MxCxSmpAccidental::setIsFontFamilyPresent( const bool& value_in )
	{
		myImpl->setIsFontFamilyPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'font-style' (aka
	    'FontStyle') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'print-style' (aka 'PrintStyle')
	    attributeGroup. **/
	void MxCxSmpAccidental::setIsFontStylePresent( const bool& value_in )
	{
		myImpl->setIsFontStylePresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'font-size' (aka
	    'FontSize') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'print-style' (aka 'PrintStyle')
	    attributeGroup. **/
	void MxCxSmpAccidental::setIsFontSizePresent( const bool& value_in )
	{
		myImpl->setIsFontSizePresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'font-weight' (aka
	    'FontWeight') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'print-style' (aka 'PrintStyle')
	    attributeGroup. **/
	void MxCxSmpAccidental::setIsFontWeightPresent( const bool& value_in )
	{
		myImpl->setIsFontWeightPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'color' (aka 'Color')
	    attribute is (or will be) present in the MusicXML document. This attribute
	    is a member of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	void MxCxSmpAccidental::setIsColorPresent( const bool& value_in )
	{
		myImpl->setIsColorPresent( value_in );
	}

/* Stringing and Streaming ------------------------------------------------------------ */

	/** Returns the xml representation of the object's value. **/
	std::string MxCxSmpAccidental::toString() const
	{
		return myImpl->toString();
	}

	/** Returns the xml representation of the object's value. **/
	std::ostream& MxCxSmpAccidental::stream( std::ostream& os_out ) const
	{
		return myImpl->stream( os_out );
	}

/* Get IsAttributeDefaultDefined Values ----------------------------------------------- */

	/** Indicates whether or not the 'cautionary' (aka 'Cautionary') has a
	    default value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). **/
	bool MxCxSmpAccidental::getIsCautionaryDefaultDefined() const
	{
		return myImpl->getIsCautionaryDefaultDefined();
	}

	/** Indicates whether or not the 'editorial' (aka 'Editorial') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). **/
	bool MxCxSmpAccidental::getIsEditorialDefaultDefined() const
	{
		return myImpl->getIsEditorialDefaultDefined();
	}

	/** Indicates whether or not the 'parentheses' (aka 'Parentheses') has
	    a default value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'level-display'
	    (aka 'LevelDisplay') attributeGroup. **/
	bool MxCxSmpAccidental::getIsParenthesesDefaultDefined() const
	{
		return myImpl->getIsParenthesesDefaultDefined();
	}

	/** Indicates whether or not the 'bracket' (aka 'Bracket') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'level-display'
	    (aka 'LevelDisplay') attributeGroup. **/
	bool MxCxSmpAccidental::getIsBracketDefaultDefined() const
	{
		return myImpl->getIsBracketDefaultDefined();
	}

	/** Indicates whether or not the 'size' (aka 'Size') has a default value
	    defined in the MusicXML xsd specification (either explicitly or in
	    the documentation). This attribute is a member of the 'level-display'
	    (aka 'LevelDisplay') attributeGroup. **/
	bool MxCxSmpAccidental::getIsSizeDefaultDefined() const
	{
		return myImpl->getIsSizeDefaultDefined();
	}

	/** Indicates whether or not the 'default-x' (aka 'DefaultX') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'print-style'
	    (aka 'PrintStyle') attributeGroup. **/
	bool MxCxSmpAccidental::getIsDefaultXDefaultDefined() const
	{
		return myImpl->getIsDefaultXDefaultDefined();
	}

	/** Indicates whether or not the 'default-y' (aka 'DefaultY') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'print-style'
	    (aka 'PrintStyle') attributeGroup. **/
	bool MxCxSmpAccidental::getIsDefaultYDefaultDefined() const
	{
		return myImpl->getIsDefaultYDefaultDefined();
	}

	/** Indicates whether or not the 'relative-x' (aka 'RelativeX') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'print-style'
	    (aka 'PrintStyle') attributeGroup. **/
	bool MxCxSmpAccidental::getIsRelativeXDefaultDefined() const
	{
		return myImpl->getIsRelativeXDefaultDefined();
	}

	/** Indicates whether or not the 'relative-y' (aka 'RelativeY') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'print-style'
	    (aka 'PrintStyle') attributeGroup. **/
	bool MxCxSmpAccidental::getIsRelativeYDefaultDefined() const
	{
		return myImpl->getIsRelativeYDefaultDefined();
	}

	/** Indicates whether or not the 'font-family' (aka 'FontFamily') has a
	    default value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'print-style'
	    (aka 'PrintStyle') attributeGroup. **/
	bool MxCxSmpAccidental::getIsFontFamilyDefaultDefined() const
	{
		return myImpl->getIsFontFamilyDefaultDefined();
	}

	/** Indicates whether or not the 'font-style' (aka 'FontStyle') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'print-style'
	    (aka 'PrintStyle') attributeGroup. **/
	bool MxCxSmpAccidental::getIsFontStyleDefaultDefined() const
	{
		return myImpl->getIsFontStyleDefaultDefined();
	}

	/** Indicates whether or not the 'font-size' (aka 'FontSize') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'print-style'
	    (aka 'PrintStyle') attributeGroup. **/
	bool MxCxSmpAccidental::getIsFontSizeDefaultDefined() const
	{
		return myImpl->getIsFontSizeDefaultDefined();
	}

	/** Indicates whether or not the 'font-weight' (aka 'FontWeight') has a
	    default value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'print-style'
	    (aka 'PrintStyle') attributeGroup. **/
	bool MxCxSmpAccidental::getIsFontWeightDefaultDefined() const
	{
		return myImpl->getIsFontWeightDefaultDefined();
	}

	/** Indicates whether or not the 'color' (aka 'Color') has a default value
	    defined in the MusicXML xsd specification (either explicitly or in
	    the documentation). This attribute is a member of the 'print-style'
	    (aka 'PrintStyle') attributeGroup. **/
	bool MxCxSmpAccidental::getIsColorDefaultDefined() const
	{
		return myImpl->getIsColorDefaultDefined();
	}

/* Get AttributeDefaultValue ---------------------------------------------------------- */

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'cautionary' (aka 'Cautionary') attribute. **/
	MxEnumYesNo MxCxSmpAccidental::getCautionaryDefaultValue() const
	{
		return myImpl->getCautionaryDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'editorial' (aka 'Editorial') attribute. **/
	MxEnumYesNo MxCxSmpAccidental::getEditorialDefaultValue() const
	{
		return myImpl->getEditorialDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'parentheses' (aka 'Parentheses') attribute. This attribute is
	    a member of the 'level-display' (aka 'LevelDisplay') attributeGroup. **/
	MxEnumYesNo MxCxSmpAccidental::getParenthesesDefaultValue() const
	{
		return myImpl->getParenthesesDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'bracket' (aka 'Bracket') attribute. This attribute is a member
	    of the 'level-display' (aka 'LevelDisplay') attributeGroup. **/
	MxEnumYesNo MxCxSmpAccidental::getBracketDefaultValue() const
	{
		return myImpl->getBracketDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'size' (aka 'Size') attribute. This attribute is a member of the
	    'level-display' (aka 'LevelDisplay') attributeGroup. **/
	MxEnumSymbolSize MxCxSmpAccidental::getSizeDefaultValue() const
	{
		return myImpl->getSizeDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'default-x' (aka 'DefaultX') attribute. This attribute is a member
	    of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	MxNumberTenths MxCxSmpAccidental::getDefaultXDefaultValue() const
	{
		return myImpl->getDefaultXDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'default-y' (aka 'DefaultY') attribute. This attribute is a member
	    of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	MxNumberTenths MxCxSmpAccidental::getDefaultYDefaultValue() const
	{
		return myImpl->getDefaultYDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'relative-x' (aka 'RelativeX') attribute. This attribute is a member
	    of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	MxNumberTenths MxCxSmpAccidental::getRelativeXDefaultValue() const
	{
		return myImpl->getRelativeXDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'relative-y' (aka 'RelativeY') attribute. This attribute is a member
	    of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	MxNumberTenths MxCxSmpAccidental::getRelativeYDefaultValue() const
	{
		return myImpl->getRelativeYDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'font-family' (aka 'FontFamily') attribute. This attribute is a
	    member of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	MxCommaSeparatedText MxCxSmpAccidental::getFontFamilyDefaultValue() const
	{
		return myImpl->getFontFamilyDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'font-style' (aka 'FontStyle') attribute. This attribute is a member
	    of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	MxEnumFontStyle MxCxSmpAccidental::getFontStyleDefaultValue() const
	{
		return myImpl->getFontStyleDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'font-size' (aka 'FontSize') attribute. This attribute is a member
	    of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	MxFontSize MxCxSmpAccidental::getFontSizeDefaultValue() const
	{
		return myImpl->getFontSizeDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'font-weight' (aka 'FontWeight') attribute. This attribute is a
	    member of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	MxEnumFontWeight MxCxSmpAccidental::getFontWeightDefaultValue() const
	{
		return myImpl->getFontWeightDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'color' (aka 'Color') attribute. This attribute is a member of
	    the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	MxColor MxCxSmpAccidental::getColorDefaultValue() const
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

