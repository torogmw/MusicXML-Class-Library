/* See MusicXML License at the bottom of this code page. */

#pragma once

/**
  * @file       MxEeDampAll.h
  * @class      lexicon::MxEeDampAll
  * @author     Matthew James Briggs
  * @email      matthew.james.briggs@gmail.com
  * @url        http://matthewjamesbriggs.com
  * @date       2014-12-05 16:47:03
  * @project    Lexicon
  * @version    1.0
  * @musicxmlid 3381
  * 
  * @brief The 'DampAll' class serves as a binding for the MusicXml 'damp-all'
  * element.
  * 
  * The purpose of 'MxEeDampAll' is to provide a strongly-typed C++ representation
  * of the 'damp-all' MusicXML element with the ability to write the element
  * to XML-appropriate strings. 
  * 
  * Music XML XSD Documentation: The damp-all element specifies a harp damping
  * mark for all strings.
  * 
  * 
  * <xs:element name="damp-all" type="empty-print-style-align">
  * 	<xs:annotation>
  * 		<xs:documentation>The damp-all element specifies a harp damping mark for
  * all strings.</xs:documentation>
  * 	</xs:annotation>
  * </xs:element>
  * 
  * 
  * <xs:complexType name="empty-print-style-align">
  * 	<xs:annotation>
  * 		<xs:documentation>The empty-print-style-align type represents an empty
  * element with print-style-align attribute group.</xs:documentation>
  * 	</xs:annotation>
  * 	<xs:attributeGroup ref="print-style-align"/>
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
#include "MxEnumFontStyle.h"
#include "MxEnumFontWeight.h"
#include "MxEnumLeftCenterRight.h"
#include "MxEnumValign.h"
#include "MxFontSize.h"
#include "MxNumberTenths.h"

namespace lexicon
{
/* MxEeDampAll ------------------------------------------------------------------------ */

	class MxEeDampAll;
	typedef std::shared_ptr<MxEeDampAll> HMxEeDampAll;
	typedef std::vector<MxEeDampAll> MxEeDampAlls;
	typedef MxEeDampAlls::iterator MxEeDampAllsIter;
	typedef MxEeDampAlls::const_iterator MxEeDampAllsIterConst;

	class MxEeDampAll : public MxObject
	{
	public:

/* Constructor, Destructor, Copy, Assignment ------------------------------------------ */

		MxEeDampAll();
		virtual ~MxEeDampAll();
		MxEeDampAll( const MxEeDampAll& other );
		MxEeDampAll& operator=( const MxEeDampAll& other );

/* minOccurs maxOccurs ---------------------------------------------------------------- */

		/** Returns the minOccurs value from the Music XML xsd specification. **/
		int getMinOccurs() const;

		/** Returns the maxOccurs value from the Music XML xsd specification. **/
		int getMaxOccurs() const;

		/** Returns true if the maxOccurs value from the Music XML xsd specification
		    is 'unbounded'. **/
		bool getIsMaxOccursUnbounded() const;

/* Get Class Information -------------------------------------------------------------- */

		/** Returns the name of this xs:element as found in the musicxml.xsd document. **/
		std::string getXmlTypeName() const;

		/** Returns the name of this C++ class. **/
		std::string getClassName() const;

		/** Returns the documentation for this musicxml type as found in the musicxml.xsd
		    document. **/
		std::string getDocumentation() const;

/* Get Attribute Values --------------------------------------------------------------- */

		/** Returns the internal value of the 'default-x' (aka 'DefaultX') attribute.
		    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
		    attributeGroup. **/
		MxNumberTenths getDefaultX() const;

		/** Returns the internal value of the 'default-y' (aka 'DefaultY') attribute.
		    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
		    attributeGroup. **/
		MxNumberTenths getDefaultY() const;

		/** Returns the internal value of the 'relative-x' (aka 'RelativeX') attribute.
		    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
		    attributeGroup. **/
		MxNumberTenths getRelativeX() const;

		/** Returns the internal value of the 'relative-y' (aka 'RelativeY') attribute.
		    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
		    attributeGroup. **/
		MxNumberTenths getRelativeY() const;

		/** Returns the internal value of the 'font-family' (aka 'FontFamily')
		    attribute. This attribute is a member of the 'print-style-align' (aka
		    'PrintStyleAlign') attributeGroup. **/
		MxCommaSeparatedText getFontFamily() const;

		/** Returns the internal value of the 'font-style' (aka 'FontStyle') attribute.
		    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
		    attributeGroup. **/
		MxEnumFontStyle getFontStyle() const;

		/** Returns the internal value of the 'font-size' (aka 'FontSize') attribute.
		    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
		    attributeGroup. **/
		MxFontSize getFontSize() const;

		/** Returns the internal value of the 'font-weight' (aka 'FontWeight')
		    attribute. This attribute is a member of the 'print-style-align' (aka
		    'PrintStyleAlign') attributeGroup. **/
		MxEnumFontWeight getFontWeight() const;

		/** Returns the internal value of the 'color' (aka 'Color') attribute.
		    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
		    attributeGroup. **/
		MxColor getColor() const;

		/** Returns the internal value of the 'halign' (aka 'Halign') attribute.
		    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
		    attributeGroup. **/
		MxEnumLeftCenterRight getHalign() const;

		/** Returns the internal value of the 'valign' (aka 'Valign') attribute.
		    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
		    attributeGroup. **/
		MxEnumValign getValign() const;

/* Set Attribute Values --------------------------------------------------------------- */

		/** Sets the internal value of the 'default-x' (aka 'DefaultX') attribute.
		    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
		    attributeGroup. **/
		void setDefaultX( const MxNumberTenths& value_in );

		/** Sets the internal value of the 'default-y' (aka 'DefaultY') attribute.
		    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
		    attributeGroup. **/
		void setDefaultY( const MxNumberTenths& value_in );

		/** Sets the internal value of the 'relative-x' (aka 'RelativeX') attribute.
		    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
		    attributeGroup. **/
		void setRelativeX( const MxNumberTenths& value_in );

		/** Sets the internal value of the 'relative-y' (aka 'RelativeY') attribute.
		    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
		    attributeGroup. **/
		void setRelativeY( const MxNumberTenths& value_in );

		/** Sets the internal value of the 'font-family' (aka 'FontFamily') attribute.
		    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
		    attributeGroup. **/
		void setFontFamily( const MxCommaSeparatedText& value_in );

		/** Sets the internal value of the 'font-style' (aka 'FontStyle') attribute.
		    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
		    attributeGroup. **/
		void setFontStyle( const MxEnumFontStyle& value_in );

		/** Sets the internal value of the 'font-size' (aka 'FontSize') attribute.
		    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
		    attributeGroup. **/
		void setFontSize( const MxFontSize& value_in );

		/** Sets the internal value of the 'font-weight' (aka 'FontWeight') attribute.
		    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
		    attributeGroup. **/
		void setFontWeight( const MxEnumFontWeight& value_in );

		/** Sets the internal value of the 'color' (aka 'Color') attribute. This
		    attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
		    attributeGroup. **/
		void setColor( const MxColor& value_in );

		/** Sets the internal value of the 'halign' (aka 'Halign') attribute. This
		    attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
		    attributeGroup. **/
		void setHalign( const MxEnumLeftCenterRight& value_in );

		/** Sets the internal value of the 'valign' (aka 'Valign') attribute. This
		    attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
		    attributeGroup. **/
		void setValign( const MxEnumValign& value_in );

/* Get IsAttributeRequired Values ----------------------------------------------------- */

		/** Indicates whether or not the 'default-x' (aka 'DefaultX') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
		bool getIsDefaultXRequired() const;

		/** Indicates whether or not the 'default-y' (aka 'DefaultY') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
		bool getIsDefaultYRequired() const;

		/** Indicates whether or not the 'relative-x' (aka 'RelativeX') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
		bool getIsRelativeXRequired() const;

		/** Indicates whether or not the 'relative-y' (aka 'RelativeY') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
		bool getIsRelativeYRequired() const;

		/** Indicates whether or not the 'font-family' (aka 'FontFamily') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
		bool getIsFontFamilyRequired() const;

		/** Indicates whether or not the 'font-style' (aka 'FontStyle') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
		bool getIsFontStyleRequired() const;

		/** Indicates whether or not the 'font-size' (aka 'FontSize') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
		bool getIsFontSizeRequired() const;

		/** Indicates whether or not the 'font-weight' (aka 'FontWeight') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
		bool getIsFontWeightRequired() const;

		/** Indicates whether or not the 'color' (aka 'Color') attribute is required
		    to be present in a MusicXML document. This attribute is a member of
		    the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
		bool getIsColorRequired() const;

		/** Indicates whether or not the 'halign' (aka 'Halign') attribute is required
		    to be present in a MusicXML document. This attribute is a member of
		    the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
		bool getIsHalignRequired() const;

		/** Indicates whether or not the 'valign' (aka 'Valign') attribute is required
		    to be present in a MusicXML document. This attribute is a member of
		    the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
		bool getIsValignRequired() const;

/* Get IsAttributePresent Values ------------------------------------------------------ */

		/** Indicates whether or not the 'default-x' (aka 'DefaultX') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
		bool getIsDefaultXPresent() const;

		/** Indicates whether or not the 'default-y' (aka 'DefaultY') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
		bool getIsDefaultYPresent() const;

		/** Indicates whether or not the 'relative-x' (aka 'RelativeX') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
		bool getIsRelativeXPresent() const;

		/** Indicates whether or not the 'relative-y' (aka 'RelativeY') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
		bool getIsRelativeYPresent() const;

		/** Indicates whether or not the 'font-family' (aka 'FontFamily') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
		bool getIsFontFamilyPresent() const;

		/** Indicates whether or not the 'font-style' (aka 'FontStyle') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
		bool getIsFontStylePresent() const;

		/** Indicates whether or not the 'font-size' (aka 'FontSize') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
		bool getIsFontSizePresent() const;

		/** Indicates whether or not the 'font-weight' (aka 'FontWeight') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
		bool getIsFontWeightPresent() const;

		/** Indicates whether or not the 'color' (aka 'Color') attribute is (or
		    will be) present in the MusicXML document. This attribute is a member
		    of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
		bool getIsColorPresent() const;

		/** Indicates whether or not the 'halign' (aka 'Halign') attribute is (or
		    will be) present in the MusicXML document. This attribute is a member
		    of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
		bool getIsHalignPresent() const;

		/** Indicates whether or not the 'valign' (aka 'Valign') attribute is (or
		    will be) present in the MusicXML document. This attribute is a member
		    of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
		bool getIsValignPresent() const;

/* Set IsAttributePresent Values ------------------------------------------------------ */

		/** Sets the value which indicates whether or not the 'default-x' (aka
		    'DefaultX') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
		    attributeGroup. **/
		void setIsDefaultXPresent( const bool& value_in );

		/** Sets the value which indicates whether or not the 'default-y' (aka
		    'DefaultY') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
		    attributeGroup. **/
		void setIsDefaultYPresent( const bool& value_in );

		/** Sets the value which indicates whether or not the 'relative-x' (aka
		    'RelativeX') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
		    attributeGroup. **/
		void setIsRelativeXPresent( const bool& value_in );

		/** Sets the value which indicates whether or not the 'relative-y' (aka
		    'RelativeY') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
		    attributeGroup. **/
		void setIsRelativeYPresent( const bool& value_in );

		/** Sets the value which indicates whether or not the 'font-family' (aka
		    'FontFamily') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
		    attributeGroup. **/
		void setIsFontFamilyPresent( const bool& value_in );

		/** Sets the value which indicates whether or not the 'font-style' (aka
		    'FontStyle') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
		    attributeGroup. **/
		void setIsFontStylePresent( const bool& value_in );

		/** Sets the value which indicates whether or not the 'font-size' (aka
		    'FontSize') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
		    attributeGroup. **/
		void setIsFontSizePresent( const bool& value_in );

		/** Sets the value which indicates whether or not the 'font-weight' (aka
		    'FontWeight') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
		    attributeGroup. **/
		void setIsFontWeightPresent( const bool& value_in );

		/** Sets the value which indicates whether or not the 'color' (aka 'Color')
		    attribute is (or will be) present in the MusicXML document. This attribute
		    is a member of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
		void setIsColorPresent( const bool& value_in );

		/** Sets the value which indicates whether or not the 'halign' (aka 'Halign')
		    attribute is (or will be) present in the MusicXML document. This attribute
		    is a member of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
		void setIsHalignPresent( const bool& value_in );

		/** Sets the value which indicates whether or not the 'valign' (aka 'Valign')
		    attribute is (or will be) present in the MusicXML document. This attribute
		    is a member of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
		void setIsValignPresent( const bool& value_in );

/* Stringing and Streaming ------------------------------------------------------------ */

		/** Returns the xml representation of the object's value. **/
		std::string toString() const;

		/** Returns the xml representation of the object's value. **/
		std::ostream& stream( std::ostream& os_out ) const;

/* Get IsAttributeDefaultDefined Values ----------------------------------------------- */

		/** Indicates whether or not the 'default-x' (aka 'DefaultX') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'print-style-align'
		    (aka 'PrintStyleAlign') attributeGroup. **/
		bool getIsDefaultXDefaultDefined() const;

		/** Indicates whether or not the 'default-y' (aka 'DefaultY') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'print-style-align'
		    (aka 'PrintStyleAlign') attributeGroup. **/
		bool getIsDefaultYDefaultDefined() const;

		/** Indicates whether or not the 'relative-x' (aka 'RelativeX') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'print-style-align'
		    (aka 'PrintStyleAlign') attributeGroup. **/
		bool getIsRelativeXDefaultDefined() const;

		/** Indicates whether or not the 'relative-y' (aka 'RelativeY') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'print-style-align'
		    (aka 'PrintStyleAlign') attributeGroup. **/
		bool getIsRelativeYDefaultDefined() const;

		/** Indicates whether or not the 'font-family' (aka 'FontFamily') has a
		    default value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'print-style-align'
		    (aka 'PrintStyleAlign') attributeGroup. **/
		bool getIsFontFamilyDefaultDefined() const;

		/** Indicates whether or not the 'font-style' (aka 'FontStyle') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'print-style-align'
		    (aka 'PrintStyleAlign') attributeGroup. **/
		bool getIsFontStyleDefaultDefined() const;

		/** Indicates whether or not the 'font-size' (aka 'FontSize') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'print-style-align'
		    (aka 'PrintStyleAlign') attributeGroup. **/
		bool getIsFontSizeDefaultDefined() const;

		/** Indicates whether or not the 'font-weight' (aka 'FontWeight') has a
		    default value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'print-style-align'
		    (aka 'PrintStyleAlign') attributeGroup. **/
		bool getIsFontWeightDefaultDefined() const;

		/** Indicates whether or not the 'color' (aka 'Color') has a default value
		    defined in the MusicXML xsd specification (either explicitly or in
		    the documentation). This attribute is a member of the 'print-style-align'
		    (aka 'PrintStyleAlign') attributeGroup. **/
		bool getIsColorDefaultDefined() const;

		/** Indicates whether or not the 'halign' (aka 'Halign') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'print-style-align'
		    (aka 'PrintStyleAlign') attributeGroup. **/
		bool getIsHalignDefaultDefined() const;

		/** Indicates whether or not the 'valign' (aka 'Valign') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'print-style-align'
		    (aka 'PrintStyleAlign') attributeGroup. **/
		bool getIsValignDefaultDefined() const;

/* Get AttributeDefaultValue ---------------------------------------------------------- */

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'default-x' (aka 'DefaultX') attribute. This attribute is a member
		    of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
		MxNumberTenths getDefaultXDefaultValue() const;

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'default-y' (aka 'DefaultY') attribute. This attribute is a member
		    of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
		MxNumberTenths getDefaultYDefaultValue() const;

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'relative-x' (aka 'RelativeX') attribute. This attribute is a member
		    of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
		MxNumberTenths getRelativeXDefaultValue() const;

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'relative-y' (aka 'RelativeY') attribute. This attribute is a member
		    of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
		MxNumberTenths getRelativeYDefaultValue() const;

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'font-family' (aka 'FontFamily') attribute. This attribute is a
		    member of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
		MxCommaSeparatedText getFontFamilyDefaultValue() const;

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'font-style' (aka 'FontStyle') attribute. This attribute is a member
		    of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
		MxEnumFontStyle getFontStyleDefaultValue() const;

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'font-size' (aka 'FontSize') attribute. This attribute is a member
		    of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
		MxFontSize getFontSizeDefaultValue() const;

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'font-weight' (aka 'FontWeight') attribute. This attribute is a
		    member of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
		MxEnumFontWeight getFontWeightDefaultValue() const;

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'color' (aka 'Color') attribute. This attribute is a member of
		    the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
		MxColor getColorDefaultValue() const;

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'halign' (aka 'Halign') attribute. This attribute is a member of
		    the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
		MxEnumLeftCenterRight getHalignDefaultValue() const;

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'valign' (aka 'Valign') attribute. This attribute is a member of
		    the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
		MxEnumValign getValignDefaultValue() const;

/* Impl ------------------------------------------------------------------------------- */

	private:
		class Impl;
		std::unique_ptr<Impl> myImpl;

	}; // class MxEeDampAll

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

