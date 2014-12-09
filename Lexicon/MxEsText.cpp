/* See MusicXML License at the bottom of this code page. */

/**
  * @file       MxEsText.cpp
  * @class      lexicon::MxEsText
  * @author     Matthew James Briggs
  * @email      matthew.james.briggs@gmail.com
  * @url        http://matthewjamesbriggs.com
  * @date       2014-12-05 20:57:50
  * @project    Lexicon
  * @version    1.0
  * @musicxmlid 4806
  * 
  * @brief The 'Text' class serves as a binding for the MusicXml 'text' element.
  * 
 **/

#include "MxEsText.h"
#include <sstream>
#include "MxCxSmpTextElementData.h"
#include "MxAttrGrpColor.h"
#include "MxAttrGrpFont.h"
#include "MxAttrGrpLetterSpacing.h"
#include "MxAttrGrpTextDecoration.h"
#include "MxAttrGrpTextDirection.h"
#include "MxAttrGrpTextRotation.h"

/* Impl ------------------------------------------------------------------------------- */

namespace lexicon
{
	struct MxEsText::Impl
	{
		Impl( const XsString& value_in )
		:myMxCxSmpValue( MxCxSmpTextElementData( "text", value_in ) )
		{}

	private:
		MxCxSmpTextElementData myMxCxSmpValue;

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

		/** Returns the internal value of the 'underline' (aka 'Underline') attribute.
		    This attribute is a member of the 'text-decoration' (aka 'TextDecoration')
		    attributeGroup. **/
		MxNumberNumberOfLines getUnderline() const
		{
			return myMxCxSmpValue.getUnderline();
		}

		/** Returns the internal value of the 'overline' (aka 'Overline') attribute.
		    This attribute is a member of the 'text-decoration' (aka 'TextDecoration')
		    attributeGroup. **/
		MxNumberNumberOfLines getOverline() const
		{
			return myMxCxSmpValue.getOverline();
		}

		/** Returns the internal value of the 'line-through' (aka 'LineThrough')
		    attribute. This attribute is a member of the 'text-decoration' (aka
		    'TextDecoration') attributeGroup. **/
		MxNumberNumberOfLines getLineThrough() const
		{
			return myMxCxSmpValue.getLineThrough();
		}

		/** Returns the internal value of the 'rotation' (aka 'Rotation') attribute.
		    This attribute is a member of the 'text-rotation' (aka 'TextRotation')
		    attributeGroup. **/
		MxNumberRotationDegrees getRotation() const
		{
			return myMxCxSmpValue.getRotation();
		}

		/** Returns the internal value of the 'letter-spacing' (aka 'LetterSpacing')
		    attribute. This attribute is a member of the 'letter-spacing' (aka
		    'LetterSpacing') attributeGroup. **/
		MxNumberOrNormal getLetterSpacing() const
		{
			return myMxCxSmpValue.getLetterSpacing();
		}

		/** Returns the internal value of the 'xml:lang' (aka 'XmlLang') attribute. **/
		XmlLang getXmlLang() const
		{
			return myMxCxSmpValue.getXmlLang();
		}

		/** Returns the internal value of the 'dir' (aka 'Dir') attribute. This
		    attribute is a member of the 'text-direction' (aka 'TextDirection')
		    attributeGroup. **/
		MxEnumTextDirection getDir() const
		{
			return myMxCxSmpValue.getDir();
		}

/* Set Attribute Values --------------------------------------------------------------- */

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

		/** Sets the internal value of the 'underline' (aka 'Underline') attribute.
		    This attribute is a member of the 'text-decoration' (aka 'TextDecoration')
		    attributeGroup. **/
		void setUnderline( const MxNumberNumberOfLines& value_in )
		{
			myMxCxSmpValue.setUnderline( value_in );
		}

		/** Sets the internal value of the 'overline' (aka 'Overline') attribute.
		    This attribute is a member of the 'text-decoration' (aka 'TextDecoration')
		    attributeGroup. **/
		void setOverline( const MxNumberNumberOfLines& value_in )
		{
			myMxCxSmpValue.setOverline( value_in );
		}

		/** Sets the internal value of the 'line-through' (aka 'LineThrough') attribute.
		    This attribute is a member of the 'text-decoration' (aka 'TextDecoration')
		    attributeGroup. **/
		void setLineThrough( const MxNumberNumberOfLines& value_in )
		{
			myMxCxSmpValue.setLineThrough( value_in );
		}

		/** Sets the internal value of the 'rotation' (aka 'Rotation') attribute.
		    This attribute is a member of the 'text-rotation' (aka 'TextRotation')
		    attributeGroup. **/
		void setRotation( const MxNumberRotationDegrees& value_in )
		{
			myMxCxSmpValue.setRotation( value_in );
		}

		/** Sets the internal value of the 'letter-spacing' (aka 'LetterSpacing')
		    attribute. This attribute is a member of the 'letter-spacing' (aka
		    'LetterSpacing') attributeGroup. **/
		void setLetterSpacing( const MxNumberOrNormal& value_in )
		{
			myMxCxSmpValue.setLetterSpacing( value_in );
		}

		/** Sets the internal value of the 'xml:lang' (aka 'XmlLang') attribute. **/
		void setXmlLang( const XmlLang& value_in )
		{
			myMxCxSmpValue.setXmlLang( value_in );
		}

		/** Sets the internal value of the 'dir' (aka 'Dir') attribute. This attribute
		    is a member of the 'text-direction' (aka 'TextDirection') attributeGroup. **/
		void setDir( const MxEnumTextDirection& value_in )
		{
			myMxCxSmpValue.setDir( value_in );
		}

/* Get IsAttributeRequired Values ----------------------------------------------------- */

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

		/** Indicates whether or not the 'underline' (aka 'Underline') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'text-decoration' (aka 'TextDecoration') attributeGroup. **/
		bool getIsUnderlineRequired() const
		{
			return myMxCxSmpValue.getIsUnderlineRequired();
		}

		/** Indicates whether or not the 'overline' (aka 'Overline') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'text-decoration' (aka 'TextDecoration') attributeGroup. **/
		bool getIsOverlineRequired() const
		{
			return myMxCxSmpValue.getIsOverlineRequired();
		}

		/** Indicates whether or not the 'line-through' (aka 'LineThrough') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'text-decoration' (aka 'TextDecoration') attributeGroup. **/
		bool getIsLineThroughRequired() const
		{
			return myMxCxSmpValue.getIsLineThroughRequired();
		}

		/** Indicates whether or not the 'rotation' (aka 'Rotation') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'text-rotation' (aka 'TextRotation') attributeGroup. **/
		bool getIsRotationRequired() const
		{
			return myMxCxSmpValue.getIsRotationRequired();
		}

		/** Indicates whether or not the 'letter-spacing' (aka 'LetterSpacing')
		    attribute is required to be present in a MusicXML document. This attribute
		    is a member of the 'letter-spacing' (aka 'LetterSpacing') attributeGroup. **/
		bool getIsLetterSpacingRequired() const
		{
			return myMxCxSmpValue.getIsLetterSpacingRequired();
		}

		/** Indicates whether or not the 'xml:lang' (aka 'XmlLang') attribute is
		    required to be present in a MusicXML document. **/
		bool getIsXmlLangRequired() const
		{
			return myMxCxSmpValue.getIsXmlLangRequired();
		}

		/** Indicates whether or not the 'dir' (aka 'Dir') attribute is required
		    to be present in a MusicXML document. This attribute is a member of
		    the 'text-direction' (aka 'TextDirection') attributeGroup. **/
		bool getIsDirRequired() const
		{
			return myMxCxSmpValue.getIsDirRequired();
		}

/* Get IsAttributePresent Values ------------------------------------------------------ */

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

		/** Indicates whether or not the 'underline' (aka 'Underline') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'text-decoration' (aka 'TextDecoration') attributeGroup. **/
		bool getIsUnderlinePresent() const
		{
			return myMxCxSmpValue.getIsUnderlinePresent();
		}

		/** Indicates whether or not the 'overline' (aka 'Overline') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'text-decoration' (aka 'TextDecoration') attributeGroup. **/
		bool getIsOverlinePresent() const
		{
			return myMxCxSmpValue.getIsOverlinePresent();
		}

		/** Indicates whether or not the 'line-through' (aka 'LineThrough') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'text-decoration' (aka 'TextDecoration') attributeGroup. **/
		bool getIsLineThroughPresent() const
		{
			return myMxCxSmpValue.getIsLineThroughPresent();
		}

		/** Indicates whether or not the 'rotation' (aka 'Rotation') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'text-rotation' (aka 'TextRotation') attributeGroup. **/
		bool getIsRotationPresent() const
		{
			return myMxCxSmpValue.getIsRotationPresent();
		}

		/** Indicates whether or not the 'letter-spacing' (aka 'LetterSpacing')
		    attribute is (or will be) present in the MusicXML document. This attribute
		    is a member of the 'letter-spacing' (aka 'LetterSpacing') attributeGroup. **/
		bool getIsLetterSpacingPresent() const
		{
			return myMxCxSmpValue.getIsLetterSpacingPresent();
		}

		/** Indicates whether or not the 'xml:lang' (aka 'XmlLang') attribute is
		    (or will be) present in the MusicXML document. **/
		bool getIsXmlLangPresent() const
		{
			return myMxCxSmpValue.getIsXmlLangPresent();
		}

		/** Indicates whether or not the 'dir' (aka 'Dir') attribute is (or will
		    be) present in the MusicXML document. This attribute is a member of
		    the 'text-direction' (aka 'TextDirection') attributeGroup. **/
		bool getIsDirPresent() const
		{
			return myMxCxSmpValue.getIsDirPresent();
		}

/* Set IsAttributePresent Values ------------------------------------------------------ */

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

		/** Sets the value which indicates whether or not the 'underline' (aka
		    'Underline') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'text-decoration' (aka 'TextDecoration')
		    attributeGroup. **/
		void setIsUnderlinePresent( const bool& value_in )
		{
			myMxCxSmpValue.setIsUnderlinePresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'overline' (aka 'Overline')
		    attribute is (or will be) present in the MusicXML document. This attribute
		    is a member of the 'text-decoration' (aka 'TextDecoration') attributeGroup. **/
		void setIsOverlinePresent( const bool& value_in )
		{
			myMxCxSmpValue.setIsOverlinePresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'line-through' (aka
		    'LineThrough') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'text-decoration' (aka 'TextDecoration')
		    attributeGroup. **/
		void setIsLineThroughPresent( const bool& value_in )
		{
			myMxCxSmpValue.setIsLineThroughPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'rotation' (aka 'Rotation')
		    attribute is (or will be) present in the MusicXML document. This attribute
		    is a member of the 'text-rotation' (aka 'TextRotation') attributeGroup. **/
		void setIsRotationPresent( const bool& value_in )
		{
			myMxCxSmpValue.setIsRotationPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'letter-spacing'
		    (aka 'LetterSpacing') attribute is (or will be) present in the MusicXML
		    document. This attribute is a member of the 'letter-spacing' (aka 'LetterSpacing')
		    attributeGroup. **/
		void setIsLetterSpacingPresent( const bool& value_in )
		{
			myMxCxSmpValue.setIsLetterSpacingPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'xml:lang' (aka 'XmlLang')
		    attribute is (or will be) present in the MusicXML document. **/
		void setIsXmlLangPresent( const bool& value_in )
		{
			myMxCxSmpValue.setIsXmlLangPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'dir' (aka 'Dir')
		    attribute is (or will be) present in the MusicXML document. This attribute
		    is a member of the 'text-direction' (aka 'TextDirection') attributeGroup. **/
		void setIsDirPresent( const bool& value_in )
		{
			myMxCxSmpValue.setIsDirPresent( value_in );
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

		/** Indicates whether or not the 'underline' (aka 'Underline') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'text-decoration'
		    (aka 'TextDecoration') attributeGroup. **/
		bool getIsUnderlineDefaultDefined() const
		{
			return myMxCxSmpValue.getIsUnderlineDefaultDefined();
		}

		/** Indicates whether or not the 'overline' (aka 'Overline') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'text-decoration'
		    (aka 'TextDecoration') attributeGroup. **/
		bool getIsOverlineDefaultDefined() const
		{
			return myMxCxSmpValue.getIsOverlineDefaultDefined();
		}

		/** Indicates whether or not the 'line-through' (aka 'LineThrough') has
		    a default value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'text-decoration'
		    (aka 'TextDecoration') attributeGroup. **/
		bool getIsLineThroughDefaultDefined() const
		{
			return myMxCxSmpValue.getIsLineThroughDefaultDefined();
		}

		/** Indicates whether or not the 'rotation' (aka 'Rotation') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'text-rotation'
		    (aka 'TextRotation') attributeGroup. **/
		bool getIsRotationDefaultDefined() const
		{
			return myMxCxSmpValue.getIsRotationDefaultDefined();
		}

		/** Indicates whether or not the 'letter-spacing' (aka 'LetterSpacing')
		    has a default value defined in the MusicXML xsd specification (either
		    explicitly or in the documentation). This attribute is a member of
		    the 'letter-spacing' (aka 'LetterSpacing') attributeGroup. **/
		bool getIsLetterSpacingDefaultDefined() const
		{
			return myMxCxSmpValue.getIsLetterSpacingDefaultDefined();
		}

		/** Indicates whether or not the 'xml:lang' (aka 'XmlLang') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). **/
		bool getIsXmlLangDefaultDefined() const
		{
			return myMxCxSmpValue.getIsXmlLangDefaultDefined();
		}

		/** Indicates whether or not the 'dir' (aka 'Dir') has a default value
		    defined in the MusicXML xsd specification (either explicitly or in
		    the documentation). This attribute is a member of the 'text-direction'
		    (aka 'TextDirection') attributeGroup. **/
		bool getIsDirDefaultDefined() const
		{
			return myMxCxSmpValue.getIsDirDefaultDefined();
		}

/* Get AttributeDefaultValue ---------------------------------------------------------- */

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

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'underline' (aka 'Underline') attribute. This attribute is a member
		    of the 'text-decoration' (aka 'TextDecoration') attributeGroup. **/
		MxNumberNumberOfLines getUnderlineDefaultValue() const
		{
			return myMxCxSmpValue.getUnderlineDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'overline' (aka 'Overline') attribute. This attribute is a member
		    of the 'text-decoration' (aka 'TextDecoration') attributeGroup. **/
		MxNumberNumberOfLines getOverlineDefaultValue() const
		{
			return myMxCxSmpValue.getOverlineDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'line-through' (aka 'LineThrough') attribute. This attribute is
		    a member of the 'text-decoration' (aka 'TextDecoration') attributeGroup. **/
		MxNumberNumberOfLines getLineThroughDefaultValue() const
		{
			return myMxCxSmpValue.getLineThroughDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'rotation' (aka 'Rotation') attribute. This attribute is a member
		    of the 'text-rotation' (aka 'TextRotation') attributeGroup. **/
		MxNumberRotationDegrees getRotationDefaultValue() const
		{
			return myMxCxSmpValue.getRotationDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'letter-spacing' (aka 'LetterSpacing') attribute. This attribute
		    is a member of the 'letter-spacing' (aka 'LetterSpacing') attributeGroup. **/
		MxNumberOrNormal getLetterSpacingDefaultValue() const
		{
			return myMxCxSmpValue.getLetterSpacingDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'xml:lang' (aka 'XmlLang') attribute. **/
		XmlLang getXmlLangDefaultValue() const
		{
			return myMxCxSmpValue.getXmlLangDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'dir' (aka 'Dir') attribute. This attribute is a member of the
		    'text-direction' (aka 'TextDirection') attributeGroup. **/
		MxEnumTextDirection getDirDefaultValue() const
		{
			return myMxCxSmpValue.getDirDefaultValue();
		}

	}; // struct MxEsText::Impl

	const int MxEsText::Impl::myXsdID = 4806;
	const std::string MxEsText::Impl::myXmlTypeName = "text";
	const std::string MxEsText::Impl::myCppClassName = "MxEsText";
	const std::string MxEsText::Impl::myDocumentation = "( no documentation )";
	const int MxEsText::Impl::myMinOccurs = 1;
	const int MxEsText::Impl::myMaxOccurs = 1;
	const int MxEsText::Impl::myIsMaxOccursUnbounded = false;

} // namespace lexicon


/* MxEsText --------------------------------------------------------------------------- */

namespace lexicon
{

/* Constructor, Destructor, Copy, Assignment ------------------------------------------ */

	MxEsText::MxEsText( const XsString& value_in )
	:myImpl( new Impl( value_in ) ) {}

	MxEsText::~MxEsText() {}

	MxEsText::MxEsText( const MxEsText& other )
	:myImpl( new Impl( *(other.myImpl) ) ) {}

	MxEsText& MxEsText::operator=( const MxEsText& other )
	{
		this->myImpl = std::unique_ptr<Impl>( new Impl( *(other.myImpl) ) );
		return *this;
	}

/* minOccurs maxOccurs ---------------------------------------------------------------- */

	/** Returns the minOccurs value from the Music XML xsd specification. **/
	int MxEsText::getMinOccurs() const
	{
		return myImpl->getMinOccurs();
	}

	/** Returns the maxOccurs value from the Music XML xsd specification. **/
	int MxEsText::getMaxOccurs() const
	{
		return myImpl->getMaxOccurs();
	}

	/** Returns true if the maxOccurs value from the Music XML xsd specification
	    is 'unbounded'. **/
	bool MxEsText::getIsMaxOccursUnbounded() const
	{
		return myImpl->getIsMaxOccursUnbounded();
	}

/* Get Set Value ---------------------------------------------------------------------- */

	/** Returns the contained xs:simpleContent value. **/
	XsString MxEsText::getValue() const
	{
		return myImpl->getValue();
	}

	/** Sets the contained xs:simpleContent value. **/
	void MxEsText::setValue( const XsString& value_in )
	{
		myImpl->setValue( value_in );
	}

/* Get Class Information -------------------------------------------------------------- */

	/** Returns the name of this xs:element as found in the musicxml.xsd document. **/
	std::string MxEsText::getXmlTypeName() const
	{
		return myImpl->getXmlTypeName();
	}

	/** Returns the name of this C++ class. **/
	std::string MxEsText::getClassName() const
	{
		return myImpl->getClassName();
	}

	/** Returns the documentation for this musicxml type as found in the musicxml.xsd
	    document. **/
	std::string MxEsText::getDocumentation() const
	{
		return myImpl->getDocumentation();
	}

/* Get Attribute Values --------------------------------------------------------------- */

	/** Returns the internal value of the 'font-family' (aka 'FontFamily')
	    attribute. This attribute is a member of the 'font' (aka 'Font') attributeGroup. **/
	MxCommaSeparatedText MxEsText::getFontFamily() const
	{
		return myImpl->getFontFamily();
	}

	/** Returns the internal value of the 'font-style' (aka 'FontStyle') attribute.
	    This attribute is a member of the 'font' (aka 'Font') attributeGroup. **/
	MxEnumFontStyle MxEsText::getFontStyle() const
	{
		return myImpl->getFontStyle();
	}

	/** Returns the internal value of the 'font-size' (aka 'FontSize') attribute.
	    This attribute is a member of the 'font' (aka 'Font') attributeGroup. **/
	MxFontSize MxEsText::getFontSize() const
	{
		return myImpl->getFontSize();
	}

	/** Returns the internal value of the 'font-weight' (aka 'FontWeight')
	    attribute. This attribute is a member of the 'font' (aka 'Font') attributeGroup. **/
	MxEnumFontWeight MxEsText::getFontWeight() const
	{
		return myImpl->getFontWeight();
	}

	/** Returns the internal value of the 'color' (aka 'Color') attribute.
	    This attribute is a member of the 'color' (aka 'Color') attributeGroup. **/
	MxColor MxEsText::getColor() const
	{
		return myImpl->getColor();
	}

	/** Returns the internal value of the 'underline' (aka 'Underline') attribute.
	    This attribute is a member of the 'text-decoration' (aka 'TextDecoration')
	    attributeGroup. **/
	MxNumberNumberOfLines MxEsText::getUnderline() const
	{
		return myImpl->getUnderline();
	}

	/** Returns the internal value of the 'overline' (aka 'Overline') attribute.
	    This attribute is a member of the 'text-decoration' (aka 'TextDecoration')
	    attributeGroup. **/
	MxNumberNumberOfLines MxEsText::getOverline() const
	{
		return myImpl->getOverline();
	}

	/** Returns the internal value of the 'line-through' (aka 'LineThrough')
	    attribute. This attribute is a member of the 'text-decoration' (aka
	    'TextDecoration') attributeGroup. **/
	MxNumberNumberOfLines MxEsText::getLineThrough() const
	{
		return myImpl->getLineThrough();
	}

	/** Returns the internal value of the 'rotation' (aka 'Rotation') attribute.
	    This attribute is a member of the 'text-rotation' (aka 'TextRotation')
	    attributeGroup. **/
	MxNumberRotationDegrees MxEsText::getRotation() const
	{
		return myImpl->getRotation();
	}

	/** Returns the internal value of the 'letter-spacing' (aka 'LetterSpacing')
	    attribute. This attribute is a member of the 'letter-spacing' (aka
	    'LetterSpacing') attributeGroup. **/
	MxNumberOrNormal MxEsText::getLetterSpacing() const
	{
		return myImpl->getLetterSpacing();
	}

	/** Returns the internal value of the 'xml:lang' (aka 'XmlLang') attribute. **/
	XmlLang MxEsText::getXmlLang() const
	{
		return myImpl->getXmlLang();
	}

	/** Returns the internal value of the 'dir' (aka 'Dir') attribute. This
	    attribute is a member of the 'text-direction' (aka 'TextDirection')
	    attributeGroup. **/
	MxEnumTextDirection MxEsText::getDir() const
	{
		return myImpl->getDir();
	}

/* Set Attribute Values --------------------------------------------------------------- */

	/** Sets the internal value of the 'font-family' (aka 'FontFamily') attribute.
	    This attribute is a member of the 'font' (aka 'Font') attributeGroup. **/
	void MxEsText::setFontFamily( const MxCommaSeparatedText& value_in )
	{
		myImpl->setFontFamily( value_in );
	}

	/** Sets the internal value of the 'font-style' (aka 'FontStyle') attribute.
	    This attribute is a member of the 'font' (aka 'Font') attributeGroup. **/
	void MxEsText::setFontStyle( const MxEnumFontStyle& value_in )
	{
		myImpl->setFontStyle( value_in );
	}

	/** Sets the internal value of the 'font-size' (aka 'FontSize') attribute.
	    This attribute is a member of the 'font' (aka 'Font') attributeGroup. **/
	void MxEsText::setFontSize( const MxFontSize& value_in )
	{
		myImpl->setFontSize( value_in );
	}

	/** Sets the internal value of the 'font-weight' (aka 'FontWeight') attribute.
	    This attribute is a member of the 'font' (aka 'Font') attributeGroup. **/
	void MxEsText::setFontWeight( const MxEnumFontWeight& value_in )
	{
		myImpl->setFontWeight( value_in );
	}

	/** Sets the internal value of the 'color' (aka 'Color') attribute. This
	    attribute is a member of the 'color' (aka 'Color') attributeGroup. **/
	void MxEsText::setColor( const MxColor& value_in )
	{
		myImpl->setColor( value_in );
	}

	/** Sets the internal value of the 'underline' (aka 'Underline') attribute.
	    This attribute is a member of the 'text-decoration' (aka 'TextDecoration')
	    attributeGroup. **/
	void MxEsText::setUnderline( const MxNumberNumberOfLines& value_in )
	{
		myImpl->setUnderline( value_in );
	}

	/** Sets the internal value of the 'overline' (aka 'Overline') attribute.
	    This attribute is a member of the 'text-decoration' (aka 'TextDecoration')
	    attributeGroup. **/
	void MxEsText::setOverline( const MxNumberNumberOfLines& value_in )
	{
		myImpl->setOverline( value_in );
	}

	/** Sets the internal value of the 'line-through' (aka 'LineThrough') attribute.
	    This attribute is a member of the 'text-decoration' (aka 'TextDecoration')
	    attributeGroup. **/
	void MxEsText::setLineThrough( const MxNumberNumberOfLines& value_in )
	{
		myImpl->setLineThrough( value_in );
	}

	/** Sets the internal value of the 'rotation' (aka 'Rotation') attribute.
	    This attribute is a member of the 'text-rotation' (aka 'TextRotation')
	    attributeGroup. **/
	void MxEsText::setRotation( const MxNumberRotationDegrees& value_in )
	{
		myImpl->setRotation( value_in );
	}

	/** Sets the internal value of the 'letter-spacing' (aka 'LetterSpacing')
	    attribute. This attribute is a member of the 'letter-spacing' (aka
	    'LetterSpacing') attributeGroup. **/
	void MxEsText::setLetterSpacing( const MxNumberOrNormal& value_in )
	{
		myImpl->setLetterSpacing( value_in );
	}

	/** Sets the internal value of the 'xml:lang' (aka 'XmlLang') attribute. **/
	void MxEsText::setXmlLang( const XmlLang& value_in )
	{
		myImpl->setXmlLang( value_in );
	}

	/** Sets the internal value of the 'dir' (aka 'Dir') attribute. This attribute
	    is a member of the 'text-direction' (aka 'TextDirection') attributeGroup. **/
	void MxEsText::setDir( const MxEnumTextDirection& value_in )
	{
		myImpl->setDir( value_in );
	}

/* Get IsAttributeRequired Values ----------------------------------------------------- */

	/** Indicates whether or not the 'font-family' (aka 'FontFamily') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'font' (aka 'Font') attributeGroup. **/
	bool MxEsText::getIsFontFamilyRequired() const
	{
		return myImpl->getIsFontFamilyRequired();
	}

	/** Indicates whether or not the 'font-style' (aka 'FontStyle') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'font' (aka 'Font') attributeGroup. **/
	bool MxEsText::getIsFontStyleRequired() const
	{
		return myImpl->getIsFontStyleRequired();
	}

	/** Indicates whether or not the 'font-size' (aka 'FontSize') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'font' (aka 'Font') attributeGroup. **/
	bool MxEsText::getIsFontSizeRequired() const
	{
		return myImpl->getIsFontSizeRequired();
	}

	/** Indicates whether or not the 'font-weight' (aka 'FontWeight') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'font' (aka 'Font') attributeGroup. **/
	bool MxEsText::getIsFontWeightRequired() const
	{
		return myImpl->getIsFontWeightRequired();
	}

	/** Indicates whether or not the 'color' (aka 'Color') attribute is required
	    to be present in a MusicXML document. This attribute is a member of
	    the 'color' (aka 'Color') attributeGroup. **/
	bool MxEsText::getIsColorRequired() const
	{
		return myImpl->getIsColorRequired();
	}

	/** Indicates whether or not the 'underline' (aka 'Underline') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'text-decoration' (aka 'TextDecoration') attributeGroup. **/
	bool MxEsText::getIsUnderlineRequired() const
	{
		return myImpl->getIsUnderlineRequired();
	}

	/** Indicates whether or not the 'overline' (aka 'Overline') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'text-decoration' (aka 'TextDecoration') attributeGroup. **/
	bool MxEsText::getIsOverlineRequired() const
	{
		return myImpl->getIsOverlineRequired();
	}

	/** Indicates whether or not the 'line-through' (aka 'LineThrough') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'text-decoration' (aka 'TextDecoration') attributeGroup. **/
	bool MxEsText::getIsLineThroughRequired() const
	{
		return myImpl->getIsLineThroughRequired();
	}

	/** Indicates whether or not the 'rotation' (aka 'Rotation') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'text-rotation' (aka 'TextRotation') attributeGroup. **/
	bool MxEsText::getIsRotationRequired() const
	{
		return myImpl->getIsRotationRequired();
	}

	/** Indicates whether or not the 'letter-spacing' (aka 'LetterSpacing')
	    attribute is required to be present in a MusicXML document. This attribute
	    is a member of the 'letter-spacing' (aka 'LetterSpacing') attributeGroup. **/
	bool MxEsText::getIsLetterSpacingRequired() const
	{
		return myImpl->getIsLetterSpacingRequired();
	}

	/** Indicates whether or not the 'xml:lang' (aka 'XmlLang') attribute is
	    required to be present in a MusicXML document. **/
	bool MxEsText::getIsXmlLangRequired() const
	{
		return myImpl->getIsXmlLangRequired();
	}

	/** Indicates whether or not the 'dir' (aka 'Dir') attribute is required
	    to be present in a MusicXML document. This attribute is a member of
	    the 'text-direction' (aka 'TextDirection') attributeGroup. **/
	bool MxEsText::getIsDirRequired() const
	{
		return myImpl->getIsDirRequired();
	}

/* Get IsAttributePresent Values ------------------------------------------------------ */

	/** Indicates whether or not the 'font-family' (aka 'FontFamily') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'font' (aka 'Font') attributeGroup. **/
	bool MxEsText::getIsFontFamilyPresent() const
	{
		return myImpl->getIsFontFamilyPresent();
	}

	/** Indicates whether or not the 'font-style' (aka 'FontStyle') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'font' (aka 'Font') attributeGroup. **/
	bool MxEsText::getIsFontStylePresent() const
	{
		return myImpl->getIsFontStylePresent();
	}

	/** Indicates whether or not the 'font-size' (aka 'FontSize') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'font' (aka 'Font') attributeGroup. **/
	bool MxEsText::getIsFontSizePresent() const
	{
		return myImpl->getIsFontSizePresent();
	}

	/** Indicates whether or not the 'font-weight' (aka 'FontWeight') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'font' (aka 'Font') attributeGroup. **/
	bool MxEsText::getIsFontWeightPresent() const
	{
		return myImpl->getIsFontWeightPresent();
	}

	/** Indicates whether or not the 'color' (aka 'Color') attribute is (or
	    will be) present in the MusicXML document. This attribute is a member
	    of the 'color' (aka 'Color') attributeGroup. **/
	bool MxEsText::getIsColorPresent() const
	{
		return myImpl->getIsColorPresent();
	}

	/** Indicates whether or not the 'underline' (aka 'Underline') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'text-decoration' (aka 'TextDecoration') attributeGroup. **/
	bool MxEsText::getIsUnderlinePresent() const
	{
		return myImpl->getIsUnderlinePresent();
	}

	/** Indicates whether or not the 'overline' (aka 'Overline') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'text-decoration' (aka 'TextDecoration') attributeGroup. **/
	bool MxEsText::getIsOverlinePresent() const
	{
		return myImpl->getIsOverlinePresent();
	}

	/** Indicates whether or not the 'line-through' (aka 'LineThrough') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'text-decoration' (aka 'TextDecoration') attributeGroup. **/
	bool MxEsText::getIsLineThroughPresent() const
	{
		return myImpl->getIsLineThroughPresent();
	}

	/** Indicates whether or not the 'rotation' (aka 'Rotation') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'text-rotation' (aka 'TextRotation') attributeGroup. **/
	bool MxEsText::getIsRotationPresent() const
	{
		return myImpl->getIsRotationPresent();
	}

	/** Indicates whether or not the 'letter-spacing' (aka 'LetterSpacing')
	    attribute is (or will be) present in the MusicXML document. This attribute
	    is a member of the 'letter-spacing' (aka 'LetterSpacing') attributeGroup. **/
	bool MxEsText::getIsLetterSpacingPresent() const
	{
		return myImpl->getIsLetterSpacingPresent();
	}

	/** Indicates whether or not the 'xml:lang' (aka 'XmlLang') attribute is
	    (or will be) present in the MusicXML document. **/
	bool MxEsText::getIsXmlLangPresent() const
	{
		return myImpl->getIsXmlLangPresent();
	}

	/** Indicates whether or not the 'dir' (aka 'Dir') attribute is (or will
	    be) present in the MusicXML document. This attribute is a member of
	    the 'text-direction' (aka 'TextDirection') attributeGroup. **/
	bool MxEsText::getIsDirPresent() const
	{
		return myImpl->getIsDirPresent();
	}

/* Set IsAttributePresent Values ------------------------------------------------------ */

	/** Sets the value which indicates whether or not the 'font-family' (aka
	    'FontFamily') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'font' (aka 'Font') attributeGroup. **/
	void MxEsText::setIsFontFamilyPresent( const bool& value_in )
	{
		myImpl->setIsFontFamilyPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'font-style' (aka
	    'FontStyle') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'font' (aka 'Font') attributeGroup. **/
	void MxEsText::setIsFontStylePresent( const bool& value_in )
	{
		myImpl->setIsFontStylePresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'font-size' (aka
	    'FontSize') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'font' (aka 'Font') attributeGroup. **/
	void MxEsText::setIsFontSizePresent( const bool& value_in )
	{
		myImpl->setIsFontSizePresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'font-weight' (aka
	    'FontWeight') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'font' (aka 'Font') attributeGroup. **/
	void MxEsText::setIsFontWeightPresent( const bool& value_in )
	{
		myImpl->setIsFontWeightPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'color' (aka 'Color')
	    attribute is (or will be) present in the MusicXML document. This attribute
	    is a member of the 'color' (aka 'Color') attributeGroup. **/
	void MxEsText::setIsColorPresent( const bool& value_in )
	{
		myImpl->setIsColorPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'underline' (aka
	    'Underline') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'text-decoration' (aka 'TextDecoration')
	    attributeGroup. **/
	void MxEsText::setIsUnderlinePresent( const bool& value_in )
	{
		myImpl->setIsUnderlinePresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'overline' (aka 'Overline')
	    attribute is (or will be) present in the MusicXML document. This attribute
	    is a member of the 'text-decoration' (aka 'TextDecoration') attributeGroup. **/
	void MxEsText::setIsOverlinePresent( const bool& value_in )
	{
		myImpl->setIsOverlinePresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'line-through' (aka
	    'LineThrough') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'text-decoration' (aka 'TextDecoration')
	    attributeGroup. **/
	void MxEsText::setIsLineThroughPresent( const bool& value_in )
	{
		myImpl->setIsLineThroughPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'rotation' (aka 'Rotation')
	    attribute is (or will be) present in the MusicXML document. This attribute
	    is a member of the 'text-rotation' (aka 'TextRotation') attributeGroup. **/
	void MxEsText::setIsRotationPresent( const bool& value_in )
	{
		myImpl->setIsRotationPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'letter-spacing'
	    (aka 'LetterSpacing') attribute is (or will be) present in the MusicXML
	    document. This attribute is a member of the 'letter-spacing' (aka 'LetterSpacing')
	    attributeGroup. **/
	void MxEsText::setIsLetterSpacingPresent( const bool& value_in )
	{
		myImpl->setIsLetterSpacingPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'xml:lang' (aka 'XmlLang')
	    attribute is (or will be) present in the MusicXML document. **/
	void MxEsText::setIsXmlLangPresent( const bool& value_in )
	{
		myImpl->setIsXmlLangPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'dir' (aka 'Dir')
	    attribute is (or will be) present in the MusicXML document. This attribute
	    is a member of the 'text-direction' (aka 'TextDirection') attributeGroup. **/
	void MxEsText::setIsDirPresent( const bool& value_in )
	{
		myImpl->setIsDirPresent( value_in );
	}

/* Stringing and Streaming ------------------------------------------------------------ */

	/** Returns the xml representation of the object's value. **/
	std::string MxEsText::toString() const
	{
		return myImpl->toString();
	}

	/** Returns the xml representation of the object's value. **/
	std::ostream& MxEsText::stream( std::ostream& os_out ) const
	{
		return myImpl->stream( os_out );
	}

/* Get IsAttributeDefaultDefined Values ----------------------------------------------- */

	/** Indicates whether or not the 'font-family' (aka 'FontFamily') has a
	    default value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'font'
	    (aka 'Font') attributeGroup. **/
	bool MxEsText::getIsFontFamilyDefaultDefined() const
	{
		return myImpl->getIsFontFamilyDefaultDefined();
	}

	/** Indicates whether or not the 'font-style' (aka 'FontStyle') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'font'
	    (aka 'Font') attributeGroup. **/
	bool MxEsText::getIsFontStyleDefaultDefined() const
	{
		return myImpl->getIsFontStyleDefaultDefined();
	}

	/** Indicates whether or not the 'font-size' (aka 'FontSize') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'font'
	    (aka 'Font') attributeGroup. **/
	bool MxEsText::getIsFontSizeDefaultDefined() const
	{
		return myImpl->getIsFontSizeDefaultDefined();
	}

	/** Indicates whether or not the 'font-weight' (aka 'FontWeight') has a
	    default value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'font'
	    (aka 'Font') attributeGroup. **/
	bool MxEsText::getIsFontWeightDefaultDefined() const
	{
		return myImpl->getIsFontWeightDefaultDefined();
	}

	/** Indicates whether or not the 'color' (aka 'Color') has a default value
	    defined in the MusicXML xsd specification (either explicitly or in
	    the documentation). This attribute is a member of the 'color' (aka
	    'Color') attributeGroup. **/
	bool MxEsText::getIsColorDefaultDefined() const
	{
		return myImpl->getIsColorDefaultDefined();
	}

	/** Indicates whether or not the 'underline' (aka 'Underline') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'text-decoration'
	    (aka 'TextDecoration') attributeGroup. **/
	bool MxEsText::getIsUnderlineDefaultDefined() const
	{
		return myImpl->getIsUnderlineDefaultDefined();
	}

	/** Indicates whether or not the 'overline' (aka 'Overline') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'text-decoration'
	    (aka 'TextDecoration') attributeGroup. **/
	bool MxEsText::getIsOverlineDefaultDefined() const
	{
		return myImpl->getIsOverlineDefaultDefined();
	}

	/** Indicates whether or not the 'line-through' (aka 'LineThrough') has
	    a default value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'text-decoration'
	    (aka 'TextDecoration') attributeGroup. **/
	bool MxEsText::getIsLineThroughDefaultDefined() const
	{
		return myImpl->getIsLineThroughDefaultDefined();
	}

	/** Indicates whether or not the 'rotation' (aka 'Rotation') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'text-rotation'
	    (aka 'TextRotation') attributeGroup. **/
	bool MxEsText::getIsRotationDefaultDefined() const
	{
		return myImpl->getIsRotationDefaultDefined();
	}

	/** Indicates whether or not the 'letter-spacing' (aka 'LetterSpacing')
	    has a default value defined in the MusicXML xsd specification (either
	    explicitly or in the documentation). This attribute is a member of
	    the 'letter-spacing' (aka 'LetterSpacing') attributeGroup. **/
	bool MxEsText::getIsLetterSpacingDefaultDefined() const
	{
		return myImpl->getIsLetterSpacingDefaultDefined();
	}

	/** Indicates whether or not the 'xml:lang' (aka 'XmlLang') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). **/
	bool MxEsText::getIsXmlLangDefaultDefined() const
	{
		return myImpl->getIsXmlLangDefaultDefined();
	}

	/** Indicates whether or not the 'dir' (aka 'Dir') has a default value
	    defined in the MusicXML xsd specification (either explicitly or in
	    the documentation). This attribute is a member of the 'text-direction'
	    (aka 'TextDirection') attributeGroup. **/
	bool MxEsText::getIsDirDefaultDefined() const
	{
		return myImpl->getIsDirDefaultDefined();
	}

/* Get AttributeDefaultValue ---------------------------------------------------------- */

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'font-family' (aka 'FontFamily') attribute. This attribute is a
	    member of the 'font' (aka 'Font') attributeGroup. **/
	MxCommaSeparatedText MxEsText::getFontFamilyDefaultValue() const
	{
		return myImpl->getFontFamilyDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'font-style' (aka 'FontStyle') attribute. This attribute is a member
	    of the 'font' (aka 'Font') attributeGroup. **/
	MxEnumFontStyle MxEsText::getFontStyleDefaultValue() const
	{
		return myImpl->getFontStyleDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'font-size' (aka 'FontSize') attribute. This attribute is a member
	    of the 'font' (aka 'Font') attributeGroup. **/
	MxFontSize MxEsText::getFontSizeDefaultValue() const
	{
		return myImpl->getFontSizeDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'font-weight' (aka 'FontWeight') attribute. This attribute is a
	    member of the 'font' (aka 'Font') attributeGroup. **/
	MxEnumFontWeight MxEsText::getFontWeightDefaultValue() const
	{
		return myImpl->getFontWeightDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'color' (aka 'Color') attribute. This attribute is a member of
	    the 'color' (aka 'Color') attributeGroup. **/
	MxColor MxEsText::getColorDefaultValue() const
	{
		return myImpl->getColorDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'underline' (aka 'Underline') attribute. This attribute is a member
	    of the 'text-decoration' (aka 'TextDecoration') attributeGroup. **/
	MxNumberNumberOfLines MxEsText::getUnderlineDefaultValue() const
	{
		return myImpl->getUnderlineDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'overline' (aka 'Overline') attribute. This attribute is a member
	    of the 'text-decoration' (aka 'TextDecoration') attributeGroup. **/
	MxNumberNumberOfLines MxEsText::getOverlineDefaultValue() const
	{
		return myImpl->getOverlineDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'line-through' (aka 'LineThrough') attribute. This attribute is
	    a member of the 'text-decoration' (aka 'TextDecoration') attributeGroup. **/
	MxNumberNumberOfLines MxEsText::getLineThroughDefaultValue() const
	{
		return myImpl->getLineThroughDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'rotation' (aka 'Rotation') attribute. This attribute is a member
	    of the 'text-rotation' (aka 'TextRotation') attributeGroup. **/
	MxNumberRotationDegrees MxEsText::getRotationDefaultValue() const
	{
		return myImpl->getRotationDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'letter-spacing' (aka 'LetterSpacing') attribute. This attribute
	    is a member of the 'letter-spacing' (aka 'LetterSpacing') attributeGroup. **/
	MxNumberOrNormal MxEsText::getLetterSpacingDefaultValue() const
	{
		return myImpl->getLetterSpacingDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'xml:lang' (aka 'XmlLang') attribute. **/
	XmlLang MxEsText::getXmlLangDefaultValue() const
	{
		return myImpl->getXmlLangDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'dir' (aka 'Dir') attribute. This attribute is a member of the
	    'text-direction' (aka 'TextDirection') attributeGroup. **/
	MxEnumTextDirection MxEsText::getDirDefaultValue() const
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

