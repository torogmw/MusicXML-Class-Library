/* See MusicXML License at the bottom of this code page. */

#pragma once

/**
  * @file       MxEsCreditWords.h
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
  * The purpose of 'MxEsCreditWords' is to provide a strongly-typed C++ representation
  * of the 'credit-words' MusicXML element with the ability to write the element
  * to XML-appropriate strings. 
  * 
  * Music XML XSD Documentation: ( no documentation )
  * 
  * 
  * <xs:element name="credit-words" type="formatted-text"/>
  * 
  * 
  * <xs:complexType name="formatted-text">
  * 	<xs:annotation>
  * 		<xs:documentation>The formatted-text type represents a text element with
  * text-formatting attributes.</xs:documentation>
  * 	</xs:annotation>
  * 	<xs:simpleContent>
  * 		<xs:extension base="xs:string">
  * 			<xs:attributeGroup ref="text-formatting"/>
  * 		</xs:extension>
  * 	</xs:simpleContent>
  * </xs:complexType>
  * 
  * 
  * 
  * 
 **/

#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include "LexiconBaseObjects.h"
#include "MxColor.h"
#include "MxCommaSeparatedText.h"
#include "MxEnumEnclosureShape.h"
#include "MxEnumFontStyle.h"
#include "MxEnumFontWeight.h"
#include "MxEnumLeftCenterRight.h"
#include "MxEnumTextDirection.h"
#include "MxEnumValign.h"
#include "MxFontSize.h"
#include "MxNumberNumberOfLines.h"
#include "MxNumberOrNormal.h"
#include "MxNumberRotationDegrees.h"
#include "MxNumberTenths.h"
#include "XmlLang.h"
#include "XmlSpace.h"
#include "XsString.h"

namespace lexicon
{
/* MxEsCreditWords -------------------------------------------------------------------- */

	class MxEsCreditWords;
	typedef std::shared_ptr<MxEsCreditWords> HMxEsCreditWords;
	typedef std::vector<MxEsCreditWords> MxEsCreditWordss;
	typedef MxEsCreditWordss::iterator MxEsCreditWordssIter;
	typedef MxEsCreditWordss::const_iterator MxEsCreditWordssIterConst;

	class MxEsCreditWords : public MxElementSimple
	{
	public:

/* Constructor, Destructor, Copy, Assignment ------------------------------------------ */

		MxEsCreditWords(  const XsString& value_in = XsString() );
		virtual ~MxEsCreditWords();
		MxEsCreditWords( const MxEsCreditWords& other );
		MxEsCreditWords& operator=( const MxEsCreditWords& other );

/* minOccurs maxOccurs ---------------------------------------------------------------- */

		/** Returns the minOccurs value from the Music XML xsd specification. **/
		int getMinOccurs() const;

		/** Returns the maxOccurs value from the Music XML xsd specification. **/
		int getMaxOccurs() const;

		/** Returns true if the maxOccurs value from the Music XML xsd specification
		    is 'unbounded'. **/
		bool getIsMaxOccursUnbounded() const;

/* Get Set Value ---------------------------------------------------------------------- */

		/** Returns the contained xs:simpleContent value. **/
		XsString getValue() const;

		/** Sets the contained xs:simpleContent value. **/
		void setValue( const XsString& value_in );

/* Get Class Information -------------------------------------------------------------- */

		/** Returns the name of this xs:element as found in the musicxml.xsd document. **/
		std::string getXmlTypeName() const;

		/** Returns the name of this C++ class. **/
		std::string getClassName() const;

		/** Returns the documentation for this musicxml type as found in the musicxml.xsd
		    document. **/
		std::string getDocumentation() const;

/* Get Attribute Values --------------------------------------------------------------- */

		/** Returns the internal value of the 'justify' (aka 'Justify') attribute.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		MxEnumLeftCenterRight getJustify() const;

		/** Returns the internal value of the 'default-x' (aka 'DefaultX') attribute.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		MxNumberTenths getDefaultX() const;

		/** Returns the internal value of the 'default-y' (aka 'DefaultY') attribute.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		MxNumberTenths getDefaultY() const;

		/** Returns the internal value of the 'relative-x' (aka 'RelativeX') attribute.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		MxNumberTenths getRelativeX() const;

		/** Returns the internal value of the 'relative-y' (aka 'RelativeY') attribute.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		MxNumberTenths getRelativeY() const;

		/** Returns the internal value of the 'font-family' (aka 'FontFamily')
		    attribute. This attribute is a member of the 'text-formatting' (aka
		    'TextFormatting') attributeGroup. **/
		MxCommaSeparatedText getFontFamily() const;

		/** Returns the internal value of the 'font-style' (aka 'FontStyle') attribute.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		MxEnumFontStyle getFontStyle() const;

		/** Returns the internal value of the 'font-size' (aka 'FontSize') attribute.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		MxFontSize getFontSize() const;

		/** Returns the internal value of the 'font-weight' (aka 'FontWeight')
		    attribute. This attribute is a member of the 'text-formatting' (aka
		    'TextFormatting') attributeGroup. **/
		MxEnumFontWeight getFontWeight() const;

		/** Returns the internal value of the 'color' (aka 'Color') attribute.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		MxColor getColor() const;

		/** Returns the internal value of the 'halign' (aka 'Halign') attribute.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		MxEnumLeftCenterRight getHalign() const;

		/** Returns the internal value of the 'valign' (aka 'Valign') attribute.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		MxEnumValign getValign() const;

		/** Returns the internal value of the 'underline' (aka 'Underline') attribute.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		MxNumberNumberOfLines getUnderline() const;

		/** Returns the internal value of the 'overline' (aka 'Overline') attribute.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		MxNumberNumberOfLines getOverline() const;

		/** Returns the internal value of the 'line-through' (aka 'LineThrough')
		    attribute. This attribute is a member of the 'text-formatting' (aka
		    'TextFormatting') attributeGroup. **/
		MxNumberNumberOfLines getLineThrough() const;

		/** Returns the internal value of the 'rotation' (aka 'Rotation') attribute.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		MxNumberRotationDegrees getRotation() const;

		/** Returns the internal value of the 'letter-spacing' (aka 'LetterSpacing')
		    attribute. This attribute is a member of the 'text-formatting' (aka
		    'TextFormatting') attributeGroup. **/
		MxNumberOrNormal getLetterSpacing() const;

		/** Returns the internal value of the 'line-height' (aka 'LineHeight')
		    attribute. This attribute is a member of the 'text-formatting' (aka
		    'TextFormatting') attributeGroup. **/
		MxNumberOrNormal getLineHeight() const;

		/** Returns the internal value of the 'xml:lang' (aka 'XmlLang') attribute.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		XmlLang getXmlLang() const;

		/** Returns the internal value of the 'xml:space' (aka 'XmlSpace') attribute.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		XmlSpace getXmlSpace() const;

		/** Returns the internal value of the 'dir' (aka 'Dir') attribute. This
		    attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		MxEnumTextDirection getDir() const;

		/** Returns the internal value of the 'enclosure' (aka 'Enclosure') attribute.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		MxEnumEnclosureShape getEnclosure() const;

/* Set Attribute Values --------------------------------------------------------------- */

		/** Sets the internal value of the 'justify' (aka 'Justify') attribute.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		void setJustify( const MxEnumLeftCenterRight& value_in );

		/** Sets the internal value of the 'default-x' (aka 'DefaultX') attribute.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		void setDefaultX( const MxNumberTenths& value_in );

		/** Sets the internal value of the 'default-y' (aka 'DefaultY') attribute.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		void setDefaultY( const MxNumberTenths& value_in );

		/** Sets the internal value of the 'relative-x' (aka 'RelativeX') attribute.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		void setRelativeX( const MxNumberTenths& value_in );

		/** Sets the internal value of the 'relative-y' (aka 'RelativeY') attribute.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		void setRelativeY( const MxNumberTenths& value_in );

		/** Sets the internal value of the 'font-family' (aka 'FontFamily') attribute.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		void setFontFamily( const MxCommaSeparatedText& value_in );

		/** Sets the internal value of the 'font-style' (aka 'FontStyle') attribute.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		void setFontStyle( const MxEnumFontStyle& value_in );

		/** Sets the internal value of the 'font-size' (aka 'FontSize') attribute.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		void setFontSize( const MxFontSize& value_in );

		/** Sets the internal value of the 'font-weight' (aka 'FontWeight') attribute.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		void setFontWeight( const MxEnumFontWeight& value_in );

		/** Sets the internal value of the 'color' (aka 'Color') attribute. This
		    attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		void setColor( const MxColor& value_in );

		/** Sets the internal value of the 'halign' (aka 'Halign') attribute. This
		    attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		void setHalign( const MxEnumLeftCenterRight& value_in );

		/** Sets the internal value of the 'valign' (aka 'Valign') attribute. This
		    attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		void setValign( const MxEnumValign& value_in );

		/** Sets the internal value of the 'underline' (aka 'Underline') attribute.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		void setUnderline( const MxNumberNumberOfLines& value_in );

		/** Sets the internal value of the 'overline' (aka 'Overline') attribute.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		void setOverline( const MxNumberNumberOfLines& value_in );

		/** Sets the internal value of the 'line-through' (aka 'LineThrough') attribute.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		void setLineThrough( const MxNumberNumberOfLines& value_in );

		/** Sets the internal value of the 'rotation' (aka 'Rotation') attribute.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		void setRotation( const MxNumberRotationDegrees& value_in );

		/** Sets the internal value of the 'letter-spacing' (aka 'LetterSpacing')
		    attribute. This attribute is a member of the 'text-formatting' (aka
		    'TextFormatting') attributeGroup. **/
		void setLetterSpacing( const MxNumberOrNormal& value_in );

		/** Sets the internal value of the 'line-height' (aka 'LineHeight') attribute.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		void setLineHeight( const MxNumberOrNormal& value_in );

		/** Sets the internal value of the 'xml:lang' (aka 'XmlLang') attribute.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		void setXmlLang( const XmlLang& value_in );

		/** Sets the internal value of the 'xml:space' (aka 'XmlSpace') attribute.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		void setXmlSpace( const XmlSpace& value_in );

		/** Sets the internal value of the 'dir' (aka 'Dir') attribute. This attribute
		    is a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		void setDir( const MxEnumTextDirection& value_in );

		/** Sets the internal value of the 'enclosure' (aka 'Enclosure') attribute.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		void setEnclosure( const MxEnumEnclosureShape& value_in );

/* Get IsAttributeRequired Values ----------------------------------------------------- */

		/** Indicates whether or not the 'justify' (aka 'Justify') attribute is
		    required to be present in a MusicXML document. This attribute is a
		    member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsJustifyRequired() const;

		/** Indicates whether or not the 'default-x' (aka 'DefaultX') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsDefaultXRequired() const;

		/** Indicates whether or not the 'default-y' (aka 'DefaultY') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsDefaultYRequired() const;

		/** Indicates whether or not the 'relative-x' (aka 'RelativeX') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsRelativeXRequired() const;

		/** Indicates whether or not the 'relative-y' (aka 'RelativeY') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsRelativeYRequired() const;

		/** Indicates whether or not the 'font-family' (aka 'FontFamily') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsFontFamilyRequired() const;

		/** Indicates whether or not the 'font-style' (aka 'FontStyle') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsFontStyleRequired() const;

		/** Indicates whether or not the 'font-size' (aka 'FontSize') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsFontSizeRequired() const;

		/** Indicates whether or not the 'font-weight' (aka 'FontWeight') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsFontWeightRequired() const;

		/** Indicates whether or not the 'color' (aka 'Color') attribute is required
		    to be present in a MusicXML document. This attribute is a member of
		    the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsColorRequired() const;

		/** Indicates whether or not the 'halign' (aka 'Halign') attribute is required
		    to be present in a MusicXML document. This attribute is a member of
		    the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsHalignRequired() const;

		/** Indicates whether or not the 'valign' (aka 'Valign') attribute is required
		    to be present in a MusicXML document. This attribute is a member of
		    the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsValignRequired() const;

		/** Indicates whether or not the 'underline' (aka 'Underline') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsUnderlineRequired() const;

		/** Indicates whether or not the 'overline' (aka 'Overline') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsOverlineRequired() const;

		/** Indicates whether or not the 'line-through' (aka 'LineThrough') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsLineThroughRequired() const;

		/** Indicates whether or not the 'rotation' (aka 'Rotation') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsRotationRequired() const;

		/** Indicates whether or not the 'letter-spacing' (aka 'LetterSpacing')
		    attribute is required to be present in a MusicXML document. This attribute
		    is a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsLetterSpacingRequired() const;

		/** Indicates whether or not the 'line-height' (aka 'LineHeight') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsLineHeightRequired() const;

		/** Indicates whether or not the 'xml:lang' (aka 'XmlLang') attribute is
		    required to be present in a MusicXML document. This attribute is a
		    member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsXmlLangRequired() const;

		/** Indicates whether or not the 'xml:space' (aka 'XmlSpace') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsXmlSpaceRequired() const;

		/** Indicates whether or not the 'dir' (aka 'Dir') attribute is required
		    to be present in a MusicXML document. This attribute is a member of
		    the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsDirRequired() const;

		/** Indicates whether or not the 'enclosure' (aka 'Enclosure') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsEnclosureRequired() const;

/* Get IsAttributePresent Values ------------------------------------------------------ */

		/** Indicates whether or not the 'justify' (aka 'Justify') attribute is
		    (or will be) present in the MusicXML document. This attribute is a
		    member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsJustifyPresent() const;

		/** Indicates whether or not the 'default-x' (aka 'DefaultX') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsDefaultXPresent() const;

		/** Indicates whether or not the 'default-y' (aka 'DefaultY') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsDefaultYPresent() const;

		/** Indicates whether or not the 'relative-x' (aka 'RelativeX') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsRelativeXPresent() const;

		/** Indicates whether or not the 'relative-y' (aka 'RelativeY') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsRelativeYPresent() const;

		/** Indicates whether or not the 'font-family' (aka 'FontFamily') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsFontFamilyPresent() const;

		/** Indicates whether or not the 'font-style' (aka 'FontStyle') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsFontStylePresent() const;

		/** Indicates whether or not the 'font-size' (aka 'FontSize') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsFontSizePresent() const;

		/** Indicates whether or not the 'font-weight' (aka 'FontWeight') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsFontWeightPresent() const;

		/** Indicates whether or not the 'color' (aka 'Color') attribute is (or
		    will be) present in the MusicXML document. This attribute is a member
		    of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsColorPresent() const;

		/** Indicates whether or not the 'halign' (aka 'Halign') attribute is (or
		    will be) present in the MusicXML document. This attribute is a member
		    of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsHalignPresent() const;

		/** Indicates whether or not the 'valign' (aka 'Valign') attribute is (or
		    will be) present in the MusicXML document. This attribute is a member
		    of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsValignPresent() const;

		/** Indicates whether or not the 'underline' (aka 'Underline') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsUnderlinePresent() const;

		/** Indicates whether or not the 'overline' (aka 'Overline') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsOverlinePresent() const;

		/** Indicates whether or not the 'line-through' (aka 'LineThrough') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsLineThroughPresent() const;

		/** Indicates whether or not the 'rotation' (aka 'Rotation') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsRotationPresent() const;

		/** Indicates whether or not the 'letter-spacing' (aka 'LetterSpacing')
		    attribute is (or will be) present in the MusicXML document. This attribute
		    is a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsLetterSpacingPresent() const;

		/** Indicates whether or not the 'line-height' (aka 'LineHeight') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsLineHeightPresent() const;

		/** Indicates whether or not the 'xml:lang' (aka 'XmlLang') attribute is
		    (or will be) present in the MusicXML document. This attribute is a
		    member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsXmlLangPresent() const;

		/** Indicates whether or not the 'xml:space' (aka 'XmlSpace') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsXmlSpacePresent() const;

		/** Indicates whether or not the 'dir' (aka 'Dir') attribute is (or will
		    be) present in the MusicXML document. This attribute is a member of
		    the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsDirPresent() const;

		/** Indicates whether or not the 'enclosure' (aka 'Enclosure') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsEnclosurePresent() const;

/* Set IsAttributePresent Values ------------------------------------------------------ */

		/** Sets the value which indicates whether or not the 'justify' (aka 'Justify')
		    attribute is (or will be) present in the MusicXML document. This attribute
		    is a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		void setIsJustifyPresent( const bool& value_in );

		/** Sets the value which indicates whether or not the 'default-x' (aka
		    'DefaultX') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		void setIsDefaultXPresent( const bool& value_in );

		/** Sets the value which indicates whether or not the 'default-y' (aka
		    'DefaultY') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		void setIsDefaultYPresent( const bool& value_in );

		/** Sets the value which indicates whether or not the 'relative-x' (aka
		    'RelativeX') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		void setIsRelativeXPresent( const bool& value_in );

		/** Sets the value which indicates whether or not the 'relative-y' (aka
		    'RelativeY') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		void setIsRelativeYPresent( const bool& value_in );

		/** Sets the value which indicates whether or not the 'font-family' (aka
		    'FontFamily') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		void setIsFontFamilyPresent( const bool& value_in );

		/** Sets the value which indicates whether or not the 'font-style' (aka
		    'FontStyle') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		void setIsFontStylePresent( const bool& value_in );

		/** Sets the value which indicates whether or not the 'font-size' (aka
		    'FontSize') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		void setIsFontSizePresent( const bool& value_in );

		/** Sets the value which indicates whether or not the 'font-weight' (aka
		    'FontWeight') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		void setIsFontWeightPresent( const bool& value_in );

		/** Sets the value which indicates whether or not the 'color' (aka 'Color')
		    attribute is (or will be) present in the MusicXML document. This attribute
		    is a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		void setIsColorPresent( const bool& value_in );

		/** Sets the value which indicates whether or not the 'halign' (aka 'Halign')
		    attribute is (or will be) present in the MusicXML document. This attribute
		    is a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		void setIsHalignPresent( const bool& value_in );

		/** Sets the value which indicates whether or not the 'valign' (aka 'Valign')
		    attribute is (or will be) present in the MusicXML document. This attribute
		    is a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		void setIsValignPresent( const bool& value_in );

		/** Sets the value which indicates whether or not the 'underline' (aka
		    'Underline') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		void setIsUnderlinePresent( const bool& value_in );

		/** Sets the value which indicates whether or not the 'overline' (aka 'Overline')
		    attribute is (or will be) present in the MusicXML document. This attribute
		    is a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		void setIsOverlinePresent( const bool& value_in );

		/** Sets the value which indicates whether or not the 'line-through' (aka
		    'LineThrough') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		void setIsLineThroughPresent( const bool& value_in );

		/** Sets the value which indicates whether or not the 'rotation' (aka 'Rotation')
		    attribute is (or will be) present in the MusicXML document. This attribute
		    is a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		void setIsRotationPresent( const bool& value_in );

		/** Sets the value which indicates whether or not the 'letter-spacing'
		    (aka 'LetterSpacing') attribute is (or will be) present in the MusicXML
		    document. This attribute is a member of the 'text-formatting' (aka
		    'TextFormatting') attributeGroup. **/
		void setIsLetterSpacingPresent( const bool& value_in );

		/** Sets the value which indicates whether or not the 'line-height' (aka
		    'LineHeight') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		void setIsLineHeightPresent( const bool& value_in );

		/** Sets the value which indicates whether or not the 'xml:lang' (aka 'XmlLang')
		    attribute is (or will be) present in the MusicXML document. This attribute
		    is a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		void setIsXmlLangPresent( const bool& value_in );

		/** Sets the value which indicates whether or not the 'xml:space' (aka
		    'XmlSpace') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		void setIsXmlSpacePresent( const bool& value_in );

		/** Sets the value which indicates whether or not the 'dir' (aka 'Dir')
		    attribute is (or will be) present in the MusicXML document. This attribute
		    is a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		void setIsDirPresent( const bool& value_in );

		/** Sets the value which indicates whether or not the 'enclosure' (aka
		    'Enclosure') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'text-formatting' (aka 'TextFormatting')
		    attributeGroup. **/
		void setIsEnclosurePresent( const bool& value_in );

/* Stringing and Streaming ------------------------------------------------------------ */

		/** Returns the xml representation of the object's value. **/
		std::string toString() const;

		/** Returns the xml representation of the object's value. **/
		std::ostream& stream( std::ostream& os_out ) const;

/* Get IsAttributeDefaultDefined Values ----------------------------------------------- */

		/** Indicates whether or not the 'justify' (aka 'Justify') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'text-formatting'
		    (aka 'TextFormatting') attributeGroup. **/
		bool getIsJustifyDefaultDefined() const;

		/** Indicates whether or not the 'default-x' (aka 'DefaultX') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'text-formatting'
		    (aka 'TextFormatting') attributeGroup. **/
		bool getIsDefaultXDefaultDefined() const;

		/** Indicates whether or not the 'default-y' (aka 'DefaultY') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'text-formatting'
		    (aka 'TextFormatting') attributeGroup. **/
		bool getIsDefaultYDefaultDefined() const;

		/** Indicates whether or not the 'relative-x' (aka 'RelativeX') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'text-formatting'
		    (aka 'TextFormatting') attributeGroup. **/
		bool getIsRelativeXDefaultDefined() const;

		/** Indicates whether or not the 'relative-y' (aka 'RelativeY') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'text-formatting'
		    (aka 'TextFormatting') attributeGroup. **/
		bool getIsRelativeYDefaultDefined() const;

		/** Indicates whether or not the 'font-family' (aka 'FontFamily') has a
		    default value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'text-formatting'
		    (aka 'TextFormatting') attributeGroup. **/
		bool getIsFontFamilyDefaultDefined() const;

		/** Indicates whether or not the 'font-style' (aka 'FontStyle') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'text-formatting'
		    (aka 'TextFormatting') attributeGroup. **/
		bool getIsFontStyleDefaultDefined() const;

		/** Indicates whether or not the 'font-size' (aka 'FontSize') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'text-formatting'
		    (aka 'TextFormatting') attributeGroup. **/
		bool getIsFontSizeDefaultDefined() const;

		/** Indicates whether or not the 'font-weight' (aka 'FontWeight') has a
		    default value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'text-formatting'
		    (aka 'TextFormatting') attributeGroup. **/
		bool getIsFontWeightDefaultDefined() const;

		/** Indicates whether or not the 'color' (aka 'Color') has a default value
		    defined in the MusicXML xsd specification (either explicitly or in
		    the documentation). This attribute is a member of the 'text-formatting'
		    (aka 'TextFormatting') attributeGroup. **/
		bool getIsColorDefaultDefined() const;

		/** Indicates whether or not the 'halign' (aka 'Halign') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'text-formatting'
		    (aka 'TextFormatting') attributeGroup. **/
		bool getIsHalignDefaultDefined() const;

		/** Indicates whether or not the 'valign' (aka 'Valign') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'text-formatting'
		    (aka 'TextFormatting') attributeGroup. **/
		bool getIsValignDefaultDefined() const;

		/** Indicates whether or not the 'underline' (aka 'Underline') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'text-formatting'
		    (aka 'TextFormatting') attributeGroup. **/
		bool getIsUnderlineDefaultDefined() const;

		/** Indicates whether or not the 'overline' (aka 'Overline') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'text-formatting'
		    (aka 'TextFormatting') attributeGroup. **/
		bool getIsOverlineDefaultDefined() const;

		/** Indicates whether or not the 'line-through' (aka 'LineThrough') has
		    a default value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'text-formatting'
		    (aka 'TextFormatting') attributeGroup. **/
		bool getIsLineThroughDefaultDefined() const;

		/** Indicates whether or not the 'rotation' (aka 'Rotation') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'text-formatting'
		    (aka 'TextFormatting') attributeGroup. **/
		bool getIsRotationDefaultDefined() const;

		/** Indicates whether or not the 'letter-spacing' (aka 'LetterSpacing')
		    has a default value defined in the MusicXML xsd specification (either
		    explicitly or in the documentation). This attribute is a member of
		    the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		bool getIsLetterSpacingDefaultDefined() const;

		/** Indicates whether or not the 'line-height' (aka 'LineHeight') has a
		    default value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'text-formatting'
		    (aka 'TextFormatting') attributeGroup. **/
		bool getIsLineHeightDefaultDefined() const;

		/** Indicates whether or not the 'xml:lang' (aka 'XmlLang') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'text-formatting'
		    (aka 'TextFormatting') attributeGroup. **/
		bool getIsXmlLangDefaultDefined() const;

		/** Indicates whether or not the 'xml:space' (aka 'XmlSpace') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'text-formatting'
		    (aka 'TextFormatting') attributeGroup. **/
		bool getIsXmlSpaceDefaultDefined() const;

		/** Indicates whether or not the 'dir' (aka 'Dir') has a default value
		    defined in the MusicXML xsd specification (either explicitly or in
		    the documentation). This attribute is a member of the 'text-formatting'
		    (aka 'TextFormatting') attributeGroup. **/
		bool getIsDirDefaultDefined() const;

		/** Indicates whether or not the 'enclosure' (aka 'Enclosure') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'text-formatting'
		    (aka 'TextFormatting') attributeGroup. **/
		bool getIsEnclosureDefaultDefined() const;

/* Get AttributeDefaultValue ---------------------------------------------------------- */

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'justify' (aka 'Justify') attribute. This attribute is a member
		    of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		MxEnumLeftCenterRight getJustifyDefaultValue() const;

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'default-x' (aka 'DefaultX') attribute. This attribute is a member
		    of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		MxNumberTenths getDefaultXDefaultValue() const;

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'default-y' (aka 'DefaultY') attribute. This attribute is a member
		    of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		MxNumberTenths getDefaultYDefaultValue() const;

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'relative-x' (aka 'RelativeX') attribute. This attribute is a member
		    of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		MxNumberTenths getRelativeXDefaultValue() const;

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'relative-y' (aka 'RelativeY') attribute. This attribute is a member
		    of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		MxNumberTenths getRelativeYDefaultValue() const;

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'font-family' (aka 'FontFamily') attribute. This attribute is a
		    member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		MxCommaSeparatedText getFontFamilyDefaultValue() const;

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'font-style' (aka 'FontStyle') attribute. This attribute is a member
		    of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		MxEnumFontStyle getFontStyleDefaultValue() const;

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'font-size' (aka 'FontSize') attribute. This attribute is a member
		    of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		MxFontSize getFontSizeDefaultValue() const;

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'font-weight' (aka 'FontWeight') attribute. This attribute is a
		    member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		MxEnumFontWeight getFontWeightDefaultValue() const;

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'color' (aka 'Color') attribute. This attribute is a member of
		    the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		MxColor getColorDefaultValue() const;

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'halign' (aka 'Halign') attribute. This attribute is a member of
		    the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		MxEnumLeftCenterRight getHalignDefaultValue() const;

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'valign' (aka 'Valign') attribute. This attribute is a member of
		    the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		MxEnumValign getValignDefaultValue() const;

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'underline' (aka 'Underline') attribute. This attribute is a member
		    of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		MxNumberNumberOfLines getUnderlineDefaultValue() const;

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'overline' (aka 'Overline') attribute. This attribute is a member
		    of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		MxNumberNumberOfLines getOverlineDefaultValue() const;

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'line-through' (aka 'LineThrough') attribute. This attribute is
		    a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		MxNumberNumberOfLines getLineThroughDefaultValue() const;

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'rotation' (aka 'Rotation') attribute. This attribute is a member
		    of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		MxNumberRotationDegrees getRotationDefaultValue() const;

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'letter-spacing' (aka 'LetterSpacing') attribute. This attribute
		    is a member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		MxNumberOrNormal getLetterSpacingDefaultValue() const;

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'line-height' (aka 'LineHeight') attribute. This attribute is a
		    member of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		MxNumberOrNormal getLineHeightDefaultValue() const;

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'xml:lang' (aka 'XmlLang') attribute. This attribute is a member
		    of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		XmlLang getXmlLangDefaultValue() const;

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'xml:space' (aka 'XmlSpace') attribute. This attribute is a member
		    of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		XmlSpace getXmlSpaceDefaultValue() const;

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'dir' (aka 'Dir') attribute. This attribute is a member of the
		    'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		MxEnumTextDirection getDirDefaultValue() const;

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'enclosure' (aka 'Enclosure') attribute. This attribute is a member
		    of the 'text-formatting' (aka 'TextFormatting') attributeGroup. **/
		MxEnumEnclosureShape getEnclosureDefaultValue() const;

/* Impl ------------------------------------------------------------------------------- */

	private:
		class Impl;
		std::unique_ptr<Impl> myImpl;

	}; // class MxEsCreditWords

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

