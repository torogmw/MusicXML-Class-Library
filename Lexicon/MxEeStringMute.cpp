/* See MusicXML License at the bottom of this code page. */

/**
  * @file       MxEeStringMute.cpp
  * @class      lexicon::MxEeStringMute
  * @author     Matthew James Briggs
  * @email      matthew.james.briggs@gmail.com
  * @url        http://matthewjamesbriggs.com
  * @date       2014-12-05 16:47:03
  * @project    Lexicon
  * @version    1.0
  * @musicxmlid 3391
  * 
  * @brief The 'StringMute' class serves as a binding for the MusicXml 'string-mute'
  * element.
  * 
 **/

#include "MxEeStringMute.h"
#include <sstream>
#include "MxCxEmptyStringMute.h"
#include "MxAttrGrpPrintStyleAlign.h"

/* Impl ------------------------------------------------------------------------------- */

namespace lexicon
{
	struct MxEeStringMute::Impl
	{
		Impl()
		:myMxCxEmptyValue( MxCxEmptyStringMute( "string-mute" ) )
		{}

	private:
		MxCxEmptyStringMute myMxCxEmptyValue;

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

		/** Returns the internal value of the 'type' (aka 'Type') attribute. **/
		MxEnumOnOff getType() const
		{
			return myMxCxEmptyValue.getType();
		}

		/** Returns the internal value of the 'default-x' (aka 'DefaultX') attribute.
		    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
		    attributeGroup. **/
		MxNumberTenths getDefaultX() const
		{
			return myMxCxEmptyValue.getDefaultX();
		}

		/** Returns the internal value of the 'default-y' (aka 'DefaultY') attribute.
		    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
		    attributeGroup. **/
		MxNumberTenths getDefaultY() const
		{
			return myMxCxEmptyValue.getDefaultY();
		}

		/** Returns the internal value of the 'relative-x' (aka 'RelativeX') attribute.
		    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
		    attributeGroup. **/
		MxNumberTenths getRelativeX() const
		{
			return myMxCxEmptyValue.getRelativeX();
		}

		/** Returns the internal value of the 'relative-y' (aka 'RelativeY') attribute.
		    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
		    attributeGroup. **/
		MxNumberTenths getRelativeY() const
		{
			return myMxCxEmptyValue.getRelativeY();
		}

		/** Returns the internal value of the 'font-family' (aka 'FontFamily')
		    attribute. This attribute is a member of the 'print-style-align' (aka
		    'PrintStyleAlign') attributeGroup. **/
		MxCommaSeparatedText getFontFamily() const
		{
			return myMxCxEmptyValue.getFontFamily();
		}

		/** Returns the internal value of the 'font-style' (aka 'FontStyle') attribute.
		    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
		    attributeGroup. **/
		MxEnumFontStyle getFontStyle() const
		{
			return myMxCxEmptyValue.getFontStyle();
		}

		/** Returns the internal value of the 'font-size' (aka 'FontSize') attribute.
		    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
		    attributeGroup. **/
		MxFontSize getFontSize() const
		{
			return myMxCxEmptyValue.getFontSize();
		}

		/** Returns the internal value of the 'font-weight' (aka 'FontWeight')
		    attribute. This attribute is a member of the 'print-style-align' (aka
		    'PrintStyleAlign') attributeGroup. **/
		MxEnumFontWeight getFontWeight() const
		{
			return myMxCxEmptyValue.getFontWeight();
		}

		/** Returns the internal value of the 'color' (aka 'Color') attribute.
		    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
		    attributeGroup. **/
		MxColor getColor() const
		{
			return myMxCxEmptyValue.getColor();
		}

		/** Returns the internal value of the 'halign' (aka 'Halign') attribute.
		    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
		    attributeGroup. **/
		MxEnumLeftCenterRight getHalign() const
		{
			return myMxCxEmptyValue.getHalign();
		}

		/** Returns the internal value of the 'valign' (aka 'Valign') attribute.
		    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
		    attributeGroup. **/
		MxEnumValign getValign() const
		{
			return myMxCxEmptyValue.getValign();
		}

/* Set Attribute Values --------------------------------------------------------------- */

		/** Sets the internal value of the 'type' (aka 'Type') attribute. **/
		void setType( const MxEnumOnOff& value_in )
		{
			myMxCxEmptyValue.setType( value_in );
		}

		/** Sets the internal value of the 'default-x' (aka 'DefaultX') attribute.
		    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
		    attributeGroup. **/
		void setDefaultX( const MxNumberTenths& value_in )
		{
			myMxCxEmptyValue.setDefaultX( value_in );
		}

		/** Sets the internal value of the 'default-y' (aka 'DefaultY') attribute.
		    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
		    attributeGroup. **/
		void setDefaultY( const MxNumberTenths& value_in )
		{
			myMxCxEmptyValue.setDefaultY( value_in );
		}

		/** Sets the internal value of the 'relative-x' (aka 'RelativeX') attribute.
		    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
		    attributeGroup. **/
		void setRelativeX( const MxNumberTenths& value_in )
		{
			myMxCxEmptyValue.setRelativeX( value_in );
		}

		/** Sets the internal value of the 'relative-y' (aka 'RelativeY') attribute.
		    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
		    attributeGroup. **/
		void setRelativeY( const MxNumberTenths& value_in )
		{
			myMxCxEmptyValue.setRelativeY( value_in );
		}

		/** Sets the internal value of the 'font-family' (aka 'FontFamily') attribute.
		    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
		    attributeGroup. **/
		void setFontFamily( const MxCommaSeparatedText& value_in )
		{
			myMxCxEmptyValue.setFontFamily( value_in );
		}

		/** Sets the internal value of the 'font-style' (aka 'FontStyle') attribute.
		    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
		    attributeGroup. **/
		void setFontStyle( const MxEnumFontStyle& value_in )
		{
			myMxCxEmptyValue.setFontStyle( value_in );
		}

		/** Sets the internal value of the 'font-size' (aka 'FontSize') attribute.
		    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
		    attributeGroup. **/
		void setFontSize( const MxFontSize& value_in )
		{
			myMxCxEmptyValue.setFontSize( value_in );
		}

		/** Sets the internal value of the 'font-weight' (aka 'FontWeight') attribute.
		    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
		    attributeGroup. **/
		void setFontWeight( const MxEnumFontWeight& value_in )
		{
			myMxCxEmptyValue.setFontWeight( value_in );
		}

		/** Sets the internal value of the 'color' (aka 'Color') attribute. This
		    attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
		    attributeGroup. **/
		void setColor( const MxColor& value_in )
		{
			myMxCxEmptyValue.setColor( value_in );
		}

		/** Sets the internal value of the 'halign' (aka 'Halign') attribute. This
		    attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
		    attributeGroup. **/
		void setHalign( const MxEnumLeftCenterRight& value_in )
		{
			myMxCxEmptyValue.setHalign( value_in );
		}

		/** Sets the internal value of the 'valign' (aka 'Valign') attribute. This
		    attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
		    attributeGroup. **/
		void setValign( const MxEnumValign& value_in )
		{
			myMxCxEmptyValue.setValign( value_in );
		}

/* Get IsAttributeRequired Values ----------------------------------------------------- */

		/** Indicates whether or not the 'type' (aka 'Type') attribute is required
		    to be present in a MusicXML document. **/
		bool getIsTypeRequired() const
		{
			return myMxCxEmptyValue.getIsTypeRequired();
		}

		/** Indicates whether or not the 'default-x' (aka 'DefaultX') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
		bool getIsDefaultXRequired() const
		{
			return myMxCxEmptyValue.getIsDefaultXRequired();
		}

		/** Indicates whether or not the 'default-y' (aka 'DefaultY') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
		bool getIsDefaultYRequired() const
		{
			return myMxCxEmptyValue.getIsDefaultYRequired();
		}

		/** Indicates whether or not the 'relative-x' (aka 'RelativeX') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
		bool getIsRelativeXRequired() const
		{
			return myMxCxEmptyValue.getIsRelativeXRequired();
		}

		/** Indicates whether or not the 'relative-y' (aka 'RelativeY') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
		bool getIsRelativeYRequired() const
		{
			return myMxCxEmptyValue.getIsRelativeYRequired();
		}

		/** Indicates whether or not the 'font-family' (aka 'FontFamily') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
		bool getIsFontFamilyRequired() const
		{
			return myMxCxEmptyValue.getIsFontFamilyRequired();
		}

		/** Indicates whether or not the 'font-style' (aka 'FontStyle') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
		bool getIsFontStyleRequired() const
		{
			return myMxCxEmptyValue.getIsFontStyleRequired();
		}

		/** Indicates whether or not the 'font-size' (aka 'FontSize') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
		bool getIsFontSizeRequired() const
		{
			return myMxCxEmptyValue.getIsFontSizeRequired();
		}

		/** Indicates whether or not the 'font-weight' (aka 'FontWeight') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
		bool getIsFontWeightRequired() const
		{
			return myMxCxEmptyValue.getIsFontWeightRequired();
		}

		/** Indicates whether or not the 'color' (aka 'Color') attribute is required
		    to be present in a MusicXML document. This attribute is a member of
		    the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
		bool getIsColorRequired() const
		{
			return myMxCxEmptyValue.getIsColorRequired();
		}

		/** Indicates whether or not the 'halign' (aka 'Halign') attribute is required
		    to be present in a MusicXML document. This attribute is a member of
		    the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
		bool getIsHalignRequired() const
		{
			return myMxCxEmptyValue.getIsHalignRequired();
		}

		/** Indicates whether or not the 'valign' (aka 'Valign') attribute is required
		    to be present in a MusicXML document. This attribute is a member of
		    the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
		bool getIsValignRequired() const
		{
			return myMxCxEmptyValue.getIsValignRequired();
		}

/* Get IsAttributePresent Values ------------------------------------------------------ */

		/** Indicates whether or not the 'type' (aka 'Type') attribute is (or will
		    be) present in the MusicXML document. Note: because 'type' is required
		    by the MusicXML specification, getIsTypePresent will always return
		    'true'. There is no corresponding setIsTypePresent function for this
		    attribute. **/
		bool getIsTypePresent() const
		{
			return myMxCxEmptyValue.getIsTypePresent();
		}

		/** Indicates whether or not the 'default-x' (aka 'DefaultX') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
		bool getIsDefaultXPresent() const
		{
			return myMxCxEmptyValue.getIsDefaultXPresent();
		}

		/** Indicates whether or not the 'default-y' (aka 'DefaultY') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
		bool getIsDefaultYPresent() const
		{
			return myMxCxEmptyValue.getIsDefaultYPresent();
		}

		/** Indicates whether or not the 'relative-x' (aka 'RelativeX') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
		bool getIsRelativeXPresent() const
		{
			return myMxCxEmptyValue.getIsRelativeXPresent();
		}

		/** Indicates whether or not the 'relative-y' (aka 'RelativeY') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
		bool getIsRelativeYPresent() const
		{
			return myMxCxEmptyValue.getIsRelativeYPresent();
		}

		/** Indicates whether or not the 'font-family' (aka 'FontFamily') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
		bool getIsFontFamilyPresent() const
		{
			return myMxCxEmptyValue.getIsFontFamilyPresent();
		}

		/** Indicates whether or not the 'font-style' (aka 'FontStyle') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
		bool getIsFontStylePresent() const
		{
			return myMxCxEmptyValue.getIsFontStylePresent();
		}

		/** Indicates whether or not the 'font-size' (aka 'FontSize') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
		bool getIsFontSizePresent() const
		{
			return myMxCxEmptyValue.getIsFontSizePresent();
		}

		/** Indicates whether or not the 'font-weight' (aka 'FontWeight') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
		bool getIsFontWeightPresent() const
		{
			return myMxCxEmptyValue.getIsFontWeightPresent();
		}

		/** Indicates whether or not the 'color' (aka 'Color') attribute is (or
		    will be) present in the MusicXML document. This attribute is a member
		    of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
		bool getIsColorPresent() const
		{
			return myMxCxEmptyValue.getIsColorPresent();
		}

		/** Indicates whether or not the 'halign' (aka 'Halign') attribute is (or
		    will be) present in the MusicXML document. This attribute is a member
		    of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
		bool getIsHalignPresent() const
		{
			return myMxCxEmptyValue.getIsHalignPresent();
		}

		/** Indicates whether or not the 'valign' (aka 'Valign') attribute is (or
		    will be) present in the MusicXML document. This attribute is a member
		    of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
		bool getIsValignPresent() const
		{
			return myMxCxEmptyValue.getIsValignPresent();
		}

/* Set IsAttributePresent Values ------------------------------------------------------ */

		/** Sets the value which indicates whether or not the 'default-x' (aka
		    'DefaultX') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
		    attributeGroup. **/
		void setIsDefaultXPresent( const bool& value_in )
		{
			myMxCxEmptyValue.setIsDefaultXPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'default-y' (aka
		    'DefaultY') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
		    attributeGroup. **/
		void setIsDefaultYPresent( const bool& value_in )
		{
			myMxCxEmptyValue.setIsDefaultYPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'relative-x' (aka
		    'RelativeX') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
		    attributeGroup. **/
		void setIsRelativeXPresent( const bool& value_in )
		{
			myMxCxEmptyValue.setIsRelativeXPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'relative-y' (aka
		    'RelativeY') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
		    attributeGroup. **/
		void setIsRelativeYPresent( const bool& value_in )
		{
			myMxCxEmptyValue.setIsRelativeYPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'font-family' (aka
		    'FontFamily') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
		    attributeGroup. **/
		void setIsFontFamilyPresent( const bool& value_in )
		{
			myMxCxEmptyValue.setIsFontFamilyPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'font-style' (aka
		    'FontStyle') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
		    attributeGroup. **/
		void setIsFontStylePresent( const bool& value_in )
		{
			myMxCxEmptyValue.setIsFontStylePresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'font-size' (aka
		    'FontSize') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
		    attributeGroup. **/
		void setIsFontSizePresent( const bool& value_in )
		{
			myMxCxEmptyValue.setIsFontSizePresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'font-weight' (aka
		    'FontWeight') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
		    attributeGroup. **/
		void setIsFontWeightPresent( const bool& value_in )
		{
			myMxCxEmptyValue.setIsFontWeightPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'color' (aka 'Color')
		    attribute is (or will be) present in the MusicXML document. This attribute
		    is a member of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
		void setIsColorPresent( const bool& value_in )
		{
			myMxCxEmptyValue.setIsColorPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'halign' (aka 'Halign')
		    attribute is (or will be) present in the MusicXML document. This attribute
		    is a member of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
		void setIsHalignPresent( const bool& value_in )
		{
			myMxCxEmptyValue.setIsHalignPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'valign' (aka 'Valign')
		    attribute is (or will be) present in the MusicXML document. This attribute
		    is a member of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
		void setIsValignPresent( const bool& value_in )
		{
			myMxCxEmptyValue.setIsValignPresent( value_in );
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
			return myMxCxEmptyValue.stream( os_out );
		}

/* Get IsAttributeDefaultDefined Values ----------------------------------------------- */

		/** Indicates whether or not the 'type' (aka 'Type') has a default value
		    defined in the MusicXML xsd specification (either explicitly or in
		    the documentation). **/
		bool getIsTypeDefaultDefined() const
		{
			return myMxCxEmptyValue.getIsTypeDefaultDefined();
		}

		/** Indicates whether or not the 'default-x' (aka 'DefaultX') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'print-style-align'
		    (aka 'PrintStyleAlign') attributeGroup. **/
		bool getIsDefaultXDefaultDefined() const
		{
			return myMxCxEmptyValue.getIsDefaultXDefaultDefined();
		}

		/** Indicates whether or not the 'default-y' (aka 'DefaultY') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'print-style-align'
		    (aka 'PrintStyleAlign') attributeGroup. **/
		bool getIsDefaultYDefaultDefined() const
		{
			return myMxCxEmptyValue.getIsDefaultYDefaultDefined();
		}

		/** Indicates whether or not the 'relative-x' (aka 'RelativeX') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'print-style-align'
		    (aka 'PrintStyleAlign') attributeGroup. **/
		bool getIsRelativeXDefaultDefined() const
		{
			return myMxCxEmptyValue.getIsRelativeXDefaultDefined();
		}

		/** Indicates whether or not the 'relative-y' (aka 'RelativeY') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'print-style-align'
		    (aka 'PrintStyleAlign') attributeGroup. **/
		bool getIsRelativeYDefaultDefined() const
		{
			return myMxCxEmptyValue.getIsRelativeYDefaultDefined();
		}

		/** Indicates whether or not the 'font-family' (aka 'FontFamily') has a
		    default value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'print-style-align'
		    (aka 'PrintStyleAlign') attributeGroup. **/
		bool getIsFontFamilyDefaultDefined() const
		{
			return myMxCxEmptyValue.getIsFontFamilyDefaultDefined();
		}

		/** Indicates whether or not the 'font-style' (aka 'FontStyle') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'print-style-align'
		    (aka 'PrintStyleAlign') attributeGroup. **/
		bool getIsFontStyleDefaultDefined() const
		{
			return myMxCxEmptyValue.getIsFontStyleDefaultDefined();
		}

		/** Indicates whether or not the 'font-size' (aka 'FontSize') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'print-style-align'
		    (aka 'PrintStyleAlign') attributeGroup. **/
		bool getIsFontSizeDefaultDefined() const
		{
			return myMxCxEmptyValue.getIsFontSizeDefaultDefined();
		}

		/** Indicates whether or not the 'font-weight' (aka 'FontWeight') has a
		    default value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'print-style-align'
		    (aka 'PrintStyleAlign') attributeGroup. **/
		bool getIsFontWeightDefaultDefined() const
		{
			return myMxCxEmptyValue.getIsFontWeightDefaultDefined();
		}

		/** Indicates whether or not the 'color' (aka 'Color') has a default value
		    defined in the MusicXML xsd specification (either explicitly or in
		    the documentation). This attribute is a member of the 'print-style-align'
		    (aka 'PrintStyleAlign') attributeGroup. **/
		bool getIsColorDefaultDefined() const
		{
			return myMxCxEmptyValue.getIsColorDefaultDefined();
		}

		/** Indicates whether or not the 'halign' (aka 'Halign') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'print-style-align'
		    (aka 'PrintStyleAlign') attributeGroup. **/
		bool getIsHalignDefaultDefined() const
		{
			return myMxCxEmptyValue.getIsHalignDefaultDefined();
		}

		/** Indicates whether or not the 'valign' (aka 'Valign') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'print-style-align'
		    (aka 'PrintStyleAlign') attributeGroup. **/
		bool getIsValignDefaultDefined() const
		{
			return myMxCxEmptyValue.getIsValignDefaultDefined();
		}

/* Get AttributeDefaultValue ---------------------------------------------------------- */

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'type' (aka 'Type') attribute. **/
		MxEnumOnOff getTypeDefaultValue() const
		{
			return myMxCxEmptyValue.getTypeDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'default-x' (aka 'DefaultX') attribute. This attribute is a member
		    of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
		MxNumberTenths getDefaultXDefaultValue() const
		{
			return myMxCxEmptyValue.getDefaultXDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'default-y' (aka 'DefaultY') attribute. This attribute is a member
		    of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
		MxNumberTenths getDefaultYDefaultValue() const
		{
			return myMxCxEmptyValue.getDefaultYDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'relative-x' (aka 'RelativeX') attribute. This attribute is a member
		    of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
		MxNumberTenths getRelativeXDefaultValue() const
		{
			return myMxCxEmptyValue.getRelativeXDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'relative-y' (aka 'RelativeY') attribute. This attribute is a member
		    of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
		MxNumberTenths getRelativeYDefaultValue() const
		{
			return myMxCxEmptyValue.getRelativeYDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'font-family' (aka 'FontFamily') attribute. This attribute is a
		    member of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
		MxCommaSeparatedText getFontFamilyDefaultValue() const
		{
			return myMxCxEmptyValue.getFontFamilyDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'font-style' (aka 'FontStyle') attribute. This attribute is a member
		    of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
		MxEnumFontStyle getFontStyleDefaultValue() const
		{
			return myMxCxEmptyValue.getFontStyleDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'font-size' (aka 'FontSize') attribute. This attribute is a member
		    of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
		MxFontSize getFontSizeDefaultValue() const
		{
			return myMxCxEmptyValue.getFontSizeDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'font-weight' (aka 'FontWeight') attribute. This attribute is a
		    member of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
		MxEnumFontWeight getFontWeightDefaultValue() const
		{
			return myMxCxEmptyValue.getFontWeightDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'color' (aka 'Color') attribute. This attribute is a member of
		    the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
		MxColor getColorDefaultValue() const
		{
			return myMxCxEmptyValue.getColorDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'halign' (aka 'Halign') attribute. This attribute is a member of
		    the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
		MxEnumLeftCenterRight getHalignDefaultValue() const
		{
			return myMxCxEmptyValue.getHalignDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'valign' (aka 'Valign') attribute. This attribute is a member of
		    the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
		MxEnumValign getValignDefaultValue() const
		{
			return myMxCxEmptyValue.getValignDefaultValue();
		}

	}; // struct MxEeStringMute::Impl

	const int MxEeStringMute::Impl::myXsdID = 3391;
	const std::string MxEeStringMute::Impl::myXmlTypeName = "string-mute";
	const std::string MxEeStringMute::Impl::myCppClassName = "MxEeStringMute";
	const std::string MxEeStringMute::Impl::myDocumentation = "( no documentation )";
	const int MxEeStringMute::Impl::myMinOccurs = 1;
	const int MxEeStringMute::Impl::myMaxOccurs = 1;
	const int MxEeStringMute::Impl::myIsMaxOccursUnbounded = false;

} // namespace lexicon


/* MxEeStringMute --------------------------------------------------------------------- */

namespace lexicon
{

/* Constructor, Destructor, Copy, Assignment ------------------------------------------ */

	MxEeStringMute::MxEeStringMute()
	:myImpl( new Impl() ) {}

	MxEeStringMute::~MxEeStringMute() {}

	MxEeStringMute::MxEeStringMute( const MxEeStringMute& other )
	:myImpl( new Impl( *(other.myImpl) ) ) {}

	MxEeStringMute& MxEeStringMute::operator=( const MxEeStringMute& other )
	{
		this->myImpl = std::unique_ptr<Impl>( new Impl( *(other.myImpl) ) );
		return *this;
	}

/* minOccurs maxOccurs ---------------------------------------------------------------- */

	/** Returns the minOccurs value from the Music XML xsd specification. **/
	int MxEeStringMute::getMinOccurs() const
	{
		return myImpl->getMinOccurs();
	}

	/** Returns the maxOccurs value from the Music XML xsd specification. **/
	int MxEeStringMute::getMaxOccurs() const
	{
		return myImpl->getMaxOccurs();
	}

	/** Returns true if the maxOccurs value from the Music XML xsd specification
	    is 'unbounded'. **/
	bool MxEeStringMute::getIsMaxOccursUnbounded() const
	{
		return myImpl->getIsMaxOccursUnbounded();
	}

/* Get Class Information -------------------------------------------------------------- */

	/** Returns the name of this xs:element as found in the musicxml.xsd document. **/
	std::string MxEeStringMute::getXmlTypeName() const
	{
		return myImpl->getXmlTypeName();
	}

	/** Returns the name of this C++ class. **/
	std::string MxEeStringMute::getClassName() const
	{
		return myImpl->getClassName();
	}

	/** Returns the documentation for this musicxml type as found in the musicxml.xsd
	    document. **/
	std::string MxEeStringMute::getDocumentation() const
	{
		return myImpl->getDocumentation();
	}

/* Get Attribute Values --------------------------------------------------------------- */

	/** Returns the internal value of the 'type' (aka 'Type') attribute. **/
	MxEnumOnOff MxEeStringMute::getType() const
	{
		return myImpl->getType();
	}

	/** Returns the internal value of the 'default-x' (aka 'DefaultX') attribute.
	    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
	    attributeGroup. **/
	MxNumberTenths MxEeStringMute::getDefaultX() const
	{
		return myImpl->getDefaultX();
	}

	/** Returns the internal value of the 'default-y' (aka 'DefaultY') attribute.
	    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
	    attributeGroup. **/
	MxNumberTenths MxEeStringMute::getDefaultY() const
	{
		return myImpl->getDefaultY();
	}

	/** Returns the internal value of the 'relative-x' (aka 'RelativeX') attribute.
	    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
	    attributeGroup. **/
	MxNumberTenths MxEeStringMute::getRelativeX() const
	{
		return myImpl->getRelativeX();
	}

	/** Returns the internal value of the 'relative-y' (aka 'RelativeY') attribute.
	    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
	    attributeGroup. **/
	MxNumberTenths MxEeStringMute::getRelativeY() const
	{
		return myImpl->getRelativeY();
	}

	/** Returns the internal value of the 'font-family' (aka 'FontFamily')
	    attribute. This attribute is a member of the 'print-style-align' (aka
	    'PrintStyleAlign') attributeGroup. **/
	MxCommaSeparatedText MxEeStringMute::getFontFamily() const
	{
		return myImpl->getFontFamily();
	}

	/** Returns the internal value of the 'font-style' (aka 'FontStyle') attribute.
	    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
	    attributeGroup. **/
	MxEnumFontStyle MxEeStringMute::getFontStyle() const
	{
		return myImpl->getFontStyle();
	}

	/** Returns the internal value of the 'font-size' (aka 'FontSize') attribute.
	    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
	    attributeGroup. **/
	MxFontSize MxEeStringMute::getFontSize() const
	{
		return myImpl->getFontSize();
	}

	/** Returns the internal value of the 'font-weight' (aka 'FontWeight')
	    attribute. This attribute is a member of the 'print-style-align' (aka
	    'PrintStyleAlign') attributeGroup. **/
	MxEnumFontWeight MxEeStringMute::getFontWeight() const
	{
		return myImpl->getFontWeight();
	}

	/** Returns the internal value of the 'color' (aka 'Color') attribute.
	    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
	    attributeGroup. **/
	MxColor MxEeStringMute::getColor() const
	{
		return myImpl->getColor();
	}

	/** Returns the internal value of the 'halign' (aka 'Halign') attribute.
	    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
	    attributeGroup. **/
	MxEnumLeftCenterRight MxEeStringMute::getHalign() const
	{
		return myImpl->getHalign();
	}

	/** Returns the internal value of the 'valign' (aka 'Valign') attribute.
	    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
	    attributeGroup. **/
	MxEnumValign MxEeStringMute::getValign() const
	{
		return myImpl->getValign();
	}

/* Set Attribute Values --------------------------------------------------------------- */

	/** Sets the internal value of the 'type' (aka 'Type') attribute. **/
	void MxEeStringMute::setType( const MxEnumOnOff& value_in )
	{
		myImpl->setType( value_in );
	}

	/** Sets the internal value of the 'default-x' (aka 'DefaultX') attribute.
	    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
	    attributeGroup. **/
	void MxEeStringMute::setDefaultX( const MxNumberTenths& value_in )
	{
		myImpl->setDefaultX( value_in );
	}

	/** Sets the internal value of the 'default-y' (aka 'DefaultY') attribute.
	    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
	    attributeGroup. **/
	void MxEeStringMute::setDefaultY( const MxNumberTenths& value_in )
	{
		myImpl->setDefaultY( value_in );
	}

	/** Sets the internal value of the 'relative-x' (aka 'RelativeX') attribute.
	    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
	    attributeGroup. **/
	void MxEeStringMute::setRelativeX( const MxNumberTenths& value_in )
	{
		myImpl->setRelativeX( value_in );
	}

	/** Sets the internal value of the 'relative-y' (aka 'RelativeY') attribute.
	    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
	    attributeGroup. **/
	void MxEeStringMute::setRelativeY( const MxNumberTenths& value_in )
	{
		myImpl->setRelativeY( value_in );
	}

	/** Sets the internal value of the 'font-family' (aka 'FontFamily') attribute.
	    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
	    attributeGroup. **/
	void MxEeStringMute::setFontFamily( const MxCommaSeparatedText& value_in )
	{
		myImpl->setFontFamily( value_in );
	}

	/** Sets the internal value of the 'font-style' (aka 'FontStyle') attribute.
	    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
	    attributeGroup. **/
	void MxEeStringMute::setFontStyle( const MxEnumFontStyle& value_in )
	{
		myImpl->setFontStyle( value_in );
	}

	/** Sets the internal value of the 'font-size' (aka 'FontSize') attribute.
	    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
	    attributeGroup. **/
	void MxEeStringMute::setFontSize( const MxFontSize& value_in )
	{
		myImpl->setFontSize( value_in );
	}

	/** Sets the internal value of the 'font-weight' (aka 'FontWeight') attribute.
	    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
	    attributeGroup. **/
	void MxEeStringMute::setFontWeight( const MxEnumFontWeight& value_in )
	{
		myImpl->setFontWeight( value_in );
	}

	/** Sets the internal value of the 'color' (aka 'Color') attribute. This
	    attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
	    attributeGroup. **/
	void MxEeStringMute::setColor( const MxColor& value_in )
	{
		myImpl->setColor( value_in );
	}

	/** Sets the internal value of the 'halign' (aka 'Halign') attribute. This
	    attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
	    attributeGroup. **/
	void MxEeStringMute::setHalign( const MxEnumLeftCenterRight& value_in )
	{
		myImpl->setHalign( value_in );
	}

	/** Sets the internal value of the 'valign' (aka 'Valign') attribute. This
	    attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
	    attributeGroup. **/
	void MxEeStringMute::setValign( const MxEnumValign& value_in )
	{
		myImpl->setValign( value_in );
	}

/* Get IsAttributeRequired Values ----------------------------------------------------- */

	/** Indicates whether or not the 'type' (aka 'Type') attribute is required
	    to be present in a MusicXML document. **/
	bool MxEeStringMute::getIsTypeRequired() const
	{
		return myImpl->getIsTypeRequired();
	}

	/** Indicates whether or not the 'default-x' (aka 'DefaultX') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
	bool MxEeStringMute::getIsDefaultXRequired() const
	{
		return myImpl->getIsDefaultXRequired();
	}

	/** Indicates whether or not the 'default-y' (aka 'DefaultY') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
	bool MxEeStringMute::getIsDefaultYRequired() const
	{
		return myImpl->getIsDefaultYRequired();
	}

	/** Indicates whether or not the 'relative-x' (aka 'RelativeX') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
	bool MxEeStringMute::getIsRelativeXRequired() const
	{
		return myImpl->getIsRelativeXRequired();
	}

	/** Indicates whether or not the 'relative-y' (aka 'RelativeY') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
	bool MxEeStringMute::getIsRelativeYRequired() const
	{
		return myImpl->getIsRelativeYRequired();
	}

	/** Indicates whether or not the 'font-family' (aka 'FontFamily') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
	bool MxEeStringMute::getIsFontFamilyRequired() const
	{
		return myImpl->getIsFontFamilyRequired();
	}

	/** Indicates whether or not the 'font-style' (aka 'FontStyle') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
	bool MxEeStringMute::getIsFontStyleRequired() const
	{
		return myImpl->getIsFontStyleRequired();
	}

	/** Indicates whether or not the 'font-size' (aka 'FontSize') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
	bool MxEeStringMute::getIsFontSizeRequired() const
	{
		return myImpl->getIsFontSizeRequired();
	}

	/** Indicates whether or not the 'font-weight' (aka 'FontWeight') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
	bool MxEeStringMute::getIsFontWeightRequired() const
	{
		return myImpl->getIsFontWeightRequired();
	}

	/** Indicates whether or not the 'color' (aka 'Color') attribute is required
	    to be present in a MusicXML document. This attribute is a member of
	    the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
	bool MxEeStringMute::getIsColorRequired() const
	{
		return myImpl->getIsColorRequired();
	}

	/** Indicates whether or not the 'halign' (aka 'Halign') attribute is required
	    to be present in a MusicXML document. This attribute is a member of
	    the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
	bool MxEeStringMute::getIsHalignRequired() const
	{
		return myImpl->getIsHalignRequired();
	}

	/** Indicates whether or not the 'valign' (aka 'Valign') attribute is required
	    to be present in a MusicXML document. This attribute is a member of
	    the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
	bool MxEeStringMute::getIsValignRequired() const
	{
		return myImpl->getIsValignRequired();
	}

/* Get IsAttributePresent Values ------------------------------------------------------ */

	/** Indicates whether or not the 'type' (aka 'Type') attribute is (or will
	    be) present in the MusicXML document. Note: because 'type' is required
	    by the MusicXML specification, getIsTypePresent will always return
	    'true'. There is no corresponding setIsTypePresent function for this
	    attribute. **/
	bool MxEeStringMute::getIsTypePresent() const
	{
		return myImpl->getIsTypePresent();
	}

	/** Indicates whether or not the 'default-x' (aka 'DefaultX') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
	bool MxEeStringMute::getIsDefaultXPresent() const
	{
		return myImpl->getIsDefaultXPresent();
	}

	/** Indicates whether or not the 'default-y' (aka 'DefaultY') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
	bool MxEeStringMute::getIsDefaultYPresent() const
	{
		return myImpl->getIsDefaultYPresent();
	}

	/** Indicates whether or not the 'relative-x' (aka 'RelativeX') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
	bool MxEeStringMute::getIsRelativeXPresent() const
	{
		return myImpl->getIsRelativeXPresent();
	}

	/** Indicates whether or not the 'relative-y' (aka 'RelativeY') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
	bool MxEeStringMute::getIsRelativeYPresent() const
	{
		return myImpl->getIsRelativeYPresent();
	}

	/** Indicates whether or not the 'font-family' (aka 'FontFamily') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
	bool MxEeStringMute::getIsFontFamilyPresent() const
	{
		return myImpl->getIsFontFamilyPresent();
	}

	/** Indicates whether or not the 'font-style' (aka 'FontStyle') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
	bool MxEeStringMute::getIsFontStylePresent() const
	{
		return myImpl->getIsFontStylePresent();
	}

	/** Indicates whether or not the 'font-size' (aka 'FontSize') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
	bool MxEeStringMute::getIsFontSizePresent() const
	{
		return myImpl->getIsFontSizePresent();
	}

	/** Indicates whether or not the 'font-weight' (aka 'FontWeight') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
	bool MxEeStringMute::getIsFontWeightPresent() const
	{
		return myImpl->getIsFontWeightPresent();
	}

	/** Indicates whether or not the 'color' (aka 'Color') attribute is (or
	    will be) present in the MusicXML document. This attribute is a member
	    of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
	bool MxEeStringMute::getIsColorPresent() const
	{
		return myImpl->getIsColorPresent();
	}

	/** Indicates whether or not the 'halign' (aka 'Halign') attribute is (or
	    will be) present in the MusicXML document. This attribute is a member
	    of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
	bool MxEeStringMute::getIsHalignPresent() const
	{
		return myImpl->getIsHalignPresent();
	}

	/** Indicates whether or not the 'valign' (aka 'Valign') attribute is (or
	    will be) present in the MusicXML document. This attribute is a member
	    of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
	bool MxEeStringMute::getIsValignPresent() const
	{
		return myImpl->getIsValignPresent();
	}

/* Set IsAttributePresent Values ------------------------------------------------------ */

	/** Sets the value which indicates whether or not the 'default-x' (aka
	    'DefaultX') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
	    attributeGroup. **/
	void MxEeStringMute::setIsDefaultXPresent( const bool& value_in )
	{
		myImpl->setIsDefaultXPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'default-y' (aka
	    'DefaultY') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
	    attributeGroup. **/
	void MxEeStringMute::setIsDefaultYPresent( const bool& value_in )
	{
		myImpl->setIsDefaultYPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'relative-x' (aka
	    'RelativeX') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
	    attributeGroup. **/
	void MxEeStringMute::setIsRelativeXPresent( const bool& value_in )
	{
		myImpl->setIsRelativeXPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'relative-y' (aka
	    'RelativeY') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
	    attributeGroup. **/
	void MxEeStringMute::setIsRelativeYPresent( const bool& value_in )
	{
		myImpl->setIsRelativeYPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'font-family' (aka
	    'FontFamily') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
	    attributeGroup. **/
	void MxEeStringMute::setIsFontFamilyPresent( const bool& value_in )
	{
		myImpl->setIsFontFamilyPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'font-style' (aka
	    'FontStyle') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
	    attributeGroup. **/
	void MxEeStringMute::setIsFontStylePresent( const bool& value_in )
	{
		myImpl->setIsFontStylePresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'font-size' (aka
	    'FontSize') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
	    attributeGroup. **/
	void MxEeStringMute::setIsFontSizePresent( const bool& value_in )
	{
		myImpl->setIsFontSizePresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'font-weight' (aka
	    'FontWeight') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'print-style-align' (aka 'PrintStyleAlign')
	    attributeGroup. **/
	void MxEeStringMute::setIsFontWeightPresent( const bool& value_in )
	{
		myImpl->setIsFontWeightPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'color' (aka 'Color')
	    attribute is (or will be) present in the MusicXML document. This attribute
	    is a member of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
	void MxEeStringMute::setIsColorPresent( const bool& value_in )
	{
		myImpl->setIsColorPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'halign' (aka 'Halign')
	    attribute is (or will be) present in the MusicXML document. This attribute
	    is a member of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
	void MxEeStringMute::setIsHalignPresent( const bool& value_in )
	{
		myImpl->setIsHalignPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'valign' (aka 'Valign')
	    attribute is (or will be) present in the MusicXML document. This attribute
	    is a member of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
	void MxEeStringMute::setIsValignPresent( const bool& value_in )
	{
		myImpl->setIsValignPresent( value_in );
	}

/* Stringing and Streaming ------------------------------------------------------------ */

	/** Returns the xml representation of the object's value. **/
	std::string MxEeStringMute::toString() const
	{
		return myImpl->toString();
	}

	/** Returns the xml representation of the object's value. **/
	std::ostream& MxEeStringMute::stream( std::ostream& os_out ) const
	{
		return myImpl->stream( os_out );
	}

/* Get IsAttributeDefaultDefined Values ----------------------------------------------- */

	/** Indicates whether or not the 'type' (aka 'Type') has a default value
	    defined in the MusicXML xsd specification (either explicitly or in
	    the documentation). **/
	bool MxEeStringMute::getIsTypeDefaultDefined() const
	{
		return myImpl->getIsTypeDefaultDefined();
	}

	/** Indicates whether or not the 'default-x' (aka 'DefaultX') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'print-style-align'
	    (aka 'PrintStyleAlign') attributeGroup. **/
	bool MxEeStringMute::getIsDefaultXDefaultDefined() const
	{
		return myImpl->getIsDefaultXDefaultDefined();
	}

	/** Indicates whether or not the 'default-y' (aka 'DefaultY') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'print-style-align'
	    (aka 'PrintStyleAlign') attributeGroup. **/
	bool MxEeStringMute::getIsDefaultYDefaultDefined() const
	{
		return myImpl->getIsDefaultYDefaultDefined();
	}

	/** Indicates whether or not the 'relative-x' (aka 'RelativeX') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'print-style-align'
	    (aka 'PrintStyleAlign') attributeGroup. **/
	bool MxEeStringMute::getIsRelativeXDefaultDefined() const
	{
		return myImpl->getIsRelativeXDefaultDefined();
	}

	/** Indicates whether or not the 'relative-y' (aka 'RelativeY') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'print-style-align'
	    (aka 'PrintStyleAlign') attributeGroup. **/
	bool MxEeStringMute::getIsRelativeYDefaultDefined() const
	{
		return myImpl->getIsRelativeYDefaultDefined();
	}

	/** Indicates whether or not the 'font-family' (aka 'FontFamily') has a
	    default value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'print-style-align'
	    (aka 'PrintStyleAlign') attributeGroup. **/
	bool MxEeStringMute::getIsFontFamilyDefaultDefined() const
	{
		return myImpl->getIsFontFamilyDefaultDefined();
	}

	/** Indicates whether or not the 'font-style' (aka 'FontStyle') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'print-style-align'
	    (aka 'PrintStyleAlign') attributeGroup. **/
	bool MxEeStringMute::getIsFontStyleDefaultDefined() const
	{
		return myImpl->getIsFontStyleDefaultDefined();
	}

	/** Indicates whether or not the 'font-size' (aka 'FontSize') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'print-style-align'
	    (aka 'PrintStyleAlign') attributeGroup. **/
	bool MxEeStringMute::getIsFontSizeDefaultDefined() const
	{
		return myImpl->getIsFontSizeDefaultDefined();
	}

	/** Indicates whether or not the 'font-weight' (aka 'FontWeight') has a
	    default value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'print-style-align'
	    (aka 'PrintStyleAlign') attributeGroup. **/
	bool MxEeStringMute::getIsFontWeightDefaultDefined() const
	{
		return myImpl->getIsFontWeightDefaultDefined();
	}

	/** Indicates whether or not the 'color' (aka 'Color') has a default value
	    defined in the MusicXML xsd specification (either explicitly or in
	    the documentation). This attribute is a member of the 'print-style-align'
	    (aka 'PrintStyleAlign') attributeGroup. **/
	bool MxEeStringMute::getIsColorDefaultDefined() const
	{
		return myImpl->getIsColorDefaultDefined();
	}

	/** Indicates whether or not the 'halign' (aka 'Halign') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'print-style-align'
	    (aka 'PrintStyleAlign') attributeGroup. **/
	bool MxEeStringMute::getIsHalignDefaultDefined() const
	{
		return myImpl->getIsHalignDefaultDefined();
	}

	/** Indicates whether or not the 'valign' (aka 'Valign') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'print-style-align'
	    (aka 'PrintStyleAlign') attributeGroup. **/
	bool MxEeStringMute::getIsValignDefaultDefined() const
	{
		return myImpl->getIsValignDefaultDefined();
	}

/* Get AttributeDefaultValue ---------------------------------------------------------- */

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'type' (aka 'Type') attribute. **/
	MxEnumOnOff MxEeStringMute::getTypeDefaultValue() const
	{
		return myImpl->getTypeDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'default-x' (aka 'DefaultX') attribute. This attribute is a member
	    of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
	MxNumberTenths MxEeStringMute::getDefaultXDefaultValue() const
	{
		return myImpl->getDefaultXDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'default-y' (aka 'DefaultY') attribute. This attribute is a member
	    of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
	MxNumberTenths MxEeStringMute::getDefaultYDefaultValue() const
	{
		return myImpl->getDefaultYDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'relative-x' (aka 'RelativeX') attribute. This attribute is a member
	    of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
	MxNumberTenths MxEeStringMute::getRelativeXDefaultValue() const
	{
		return myImpl->getRelativeXDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'relative-y' (aka 'RelativeY') attribute. This attribute is a member
	    of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
	MxNumberTenths MxEeStringMute::getRelativeYDefaultValue() const
	{
		return myImpl->getRelativeYDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'font-family' (aka 'FontFamily') attribute. This attribute is a
	    member of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
	MxCommaSeparatedText MxEeStringMute::getFontFamilyDefaultValue() const
	{
		return myImpl->getFontFamilyDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'font-style' (aka 'FontStyle') attribute. This attribute is a member
	    of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
	MxEnumFontStyle MxEeStringMute::getFontStyleDefaultValue() const
	{
		return myImpl->getFontStyleDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'font-size' (aka 'FontSize') attribute. This attribute is a member
	    of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
	MxFontSize MxEeStringMute::getFontSizeDefaultValue() const
	{
		return myImpl->getFontSizeDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'font-weight' (aka 'FontWeight') attribute. This attribute is a
	    member of the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
	MxEnumFontWeight MxEeStringMute::getFontWeightDefaultValue() const
	{
		return myImpl->getFontWeightDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'color' (aka 'Color') attribute. This attribute is a member of
	    the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
	MxColor MxEeStringMute::getColorDefaultValue() const
	{
		return myImpl->getColorDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'halign' (aka 'Halign') attribute. This attribute is a member of
	    the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
	MxEnumLeftCenterRight MxEeStringMute::getHalignDefaultValue() const
	{
		return myImpl->getHalignDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'valign' (aka 'Valign') attribute. This attribute is a member of
	    the 'print-style-align' (aka 'PrintStyleAlign') attributeGroup. **/
	MxEnumValign MxEeStringMute::getValignDefaultValue() const
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

