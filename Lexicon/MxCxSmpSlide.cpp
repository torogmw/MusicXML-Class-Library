/* See MusicXML License at the bottom of this code page. */

/**
  * @file       MxCxSmpSlide.cpp
  * @class      lexicon::MxCxSmpSlide
  * @author     Matthew James Briggs
  * @email      matthew.james.briggs@gmail.com
  * @url        http://matthewjamesbriggs.com
  * @date       2014-12-02 17:31:48
  * @project    Lexicon
  * @version    1.0
  * @musicxmlid 5252
  * 
  * @brief The 'Slide' class serves as a binding for the MusicXml 'slide' complexType.
  * 
 **/

#include "MxCxSmpSlide.h"
#include <sstream>
#include "_hidden_attributeStream.h"
#include "MxAttrGrpBendSound.h"
#include "MxAttrGrpDashedFormatting.h"
#include "MxAttrGrpLineType.h"
#include "MxAttrGrpPrintStyle.h"

/* Impl ------------------------------------------------------------------------------- */

namespace lexicon
{
	struct MxCxSmpSlide::Impl
	{
		Impl( const std::string& elementName, const XsString& value_in )
		:myElementName( elementName )
		,myValue( value_in )
		,myType()
		,myNumber( MxNumberNumberLevel( 1 ) )
		,myMxAttrGrpLineType()
		,myMxAttrGrpDashedFormatting()
		,myMxAttrGrpPrintStyle()
		,myMxAttrGrpBendSound()
		,myIsTypePresent( true )
		,myIsNumberPresent( false )
		{}

	private:
		std::string myElementName;
		XsString myValue;
		MxEnumStartStop myType;
		MxNumberNumberLevel myNumber;
		MxAttrGrpLineType myMxAttrGrpLineType;
		MxAttrGrpDashedFormatting myMxAttrGrpDashedFormatting;
		MxAttrGrpPrintStyle myMxAttrGrpPrintStyle;
		MxAttrGrpBendSound myMxAttrGrpBendSound;
		bool myIsTypePresent;
		bool myIsNumberPresent;

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

		/** Returns the internal value of the 'type' (aka 'Type') attribute. **/
		MxEnumStartStop getType() const
		{
			return myType;
		}

		/** Returns the internal value of the 'number' (aka 'Number') attribute. **/
		MxNumberNumberLevel getNumber() const
		{
			return myNumber;
		}

		/** Returns the internal value of the 'line-type' (aka 'LineType') attribute.
		    This attribute is a member of the 'line-type' (aka 'LineType') attributeGroup. **/
		MxEnumLineType getLineType() const
		{
			return myMxAttrGrpLineType.getLineType();
		}

		/** Returns the internal value of the 'dash-length' (aka 'DashLength')
		    attribute. This attribute is a member of the 'dashed-formatting' (aka
		    'DashedFormatting') attributeGroup. **/
		MxNumberTenths getDashLength() const
		{
			return myMxAttrGrpDashedFormatting.getDashLength();
		}

		/** Returns the internal value of the 'space-length' (aka 'SpaceLength')
		    attribute. This attribute is a member of the 'dashed-formatting' (aka
		    'DashedFormatting') attributeGroup. **/
		MxNumberTenths getSpaceLength() const
		{
			return myMxAttrGrpDashedFormatting.getSpaceLength();
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

		/** Returns the internal value of the 'accelerate' (aka 'Accelerate') attribute.
		    This attribute is a member of the 'bend-sound' (aka 'BendSound') attributeGroup. **/
		MxEnumYesNo getAccelerate() const
		{
			return myMxAttrGrpBendSound.getAccelerate();
		}

		/** Returns the internal value of the 'beats' (aka 'Beats') attribute.
		    This attribute is a member of the 'bend-sound' (aka 'BendSound') attributeGroup. **/
		MxNumberTrillBeats getBeats() const
		{
			return myMxAttrGrpBendSound.getBeats();
		}

		/** Returns the internal value of the 'first-beat' (aka 'FirstBeat') attribute.
		    This attribute is a member of the 'bend-sound' (aka 'BendSound') attributeGroup. **/
		MxNumberPercent getFirstBeat() const
		{
			return myMxAttrGrpBendSound.getFirstBeat();
		}

		/** Returns the internal value of the 'last-beat' (aka 'LastBeat') attribute.
		    This attribute is a member of the 'bend-sound' (aka 'BendSound') attributeGroup. **/
		MxNumberPercent getLastBeat() const
		{
			return myMxAttrGrpBendSound.getLastBeat();
		}

/* Set Attribute Values --------------------------------------------------------------- */

		/** Sets the internal value of the 'type' (aka 'Type') attribute. **/
		void setType( const MxEnumStartStop& value_in )
		{
			myType = value_in;
		}

		/** Sets the internal value of the 'number' (aka 'Number') attribute. **/
		void setNumber( const MxNumberNumberLevel& value_in )
		{
			myNumber = value_in;
		}

		/** Sets the internal value of the 'line-type' (aka 'LineType') attribute.
		    This attribute is a member of the 'line-type' (aka 'LineType') attributeGroup. **/
		void setLineType( const MxEnumLineType& value_in )
		{
			myMxAttrGrpLineType.setLineType( value_in );
		}

		/** Sets the internal value of the 'dash-length' (aka 'DashLength') attribute.
		    This attribute is a member of the 'dashed-formatting' (aka 'DashedFormatting')
		    attributeGroup. **/
		void setDashLength( const MxNumberTenths& value_in )
		{
			myMxAttrGrpDashedFormatting.setDashLength( value_in );
		}

		/** Sets the internal value of the 'space-length' (aka 'SpaceLength') attribute.
		    This attribute is a member of the 'dashed-formatting' (aka 'DashedFormatting')
		    attributeGroup. **/
		void setSpaceLength( const MxNumberTenths& value_in )
		{
			myMxAttrGrpDashedFormatting.setSpaceLength( value_in );
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

		/** Sets the internal value of the 'accelerate' (aka 'Accelerate') attribute.
		    This attribute is a member of the 'bend-sound' (aka 'BendSound') attributeGroup. **/
		void setAccelerate( const MxEnumYesNo& value_in )
		{
			myMxAttrGrpBendSound.setAccelerate( value_in );
		}

		/** Sets the internal value of the 'beats' (aka 'Beats') attribute. This
		    attribute is a member of the 'bend-sound' (aka 'BendSound') attributeGroup. **/
		void setBeats( const MxNumberTrillBeats& value_in )
		{
			myMxAttrGrpBendSound.setBeats( value_in );
		}

		/** Sets the internal value of the 'first-beat' (aka 'FirstBeat') attribute.
		    This attribute is a member of the 'bend-sound' (aka 'BendSound') attributeGroup. **/
		void setFirstBeat( const MxNumberPercent& value_in )
		{
			myMxAttrGrpBendSound.setFirstBeat( value_in );
		}

		/** Sets the internal value of the 'last-beat' (aka 'LastBeat') attribute.
		    This attribute is a member of the 'bend-sound' (aka 'BendSound') attributeGroup. **/
		void setLastBeat( const MxNumberPercent& value_in )
		{
			myMxAttrGrpBendSound.setLastBeat( value_in );
		}

/* Get IsAttributeRequired Values ----------------------------------------------------- */

		/** Indicates whether or not the 'type' (aka 'Type') attribute is required
		    to be present in a MusicXML document. **/
		bool getIsTypeRequired() const
		{
			return true;
		}

		/** Indicates whether or not the 'number' (aka 'Number') attribute is required
		    to be present in a MusicXML document. **/
		bool getIsNumberRequired() const
		{
			return false;
		}

		/** Indicates whether or not the 'line-type' (aka 'LineType') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'line-type' (aka 'LineType') attributeGroup. **/
		bool getIsLineTypeRequired() const
		{
			return myMxAttrGrpLineType.getIsLineTypeRequired();
		}

		/** Indicates whether or not the 'dash-length' (aka 'DashLength') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'dashed-formatting' (aka 'DashedFormatting') attributeGroup. **/
		bool getIsDashLengthRequired() const
		{
			return myMxAttrGrpDashedFormatting.getIsDashLengthRequired();
		}

		/** Indicates whether or not the 'space-length' (aka 'SpaceLength') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'dashed-formatting' (aka 'DashedFormatting') attributeGroup. **/
		bool getIsSpaceLengthRequired() const
		{
			return myMxAttrGrpDashedFormatting.getIsSpaceLengthRequired();
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

		/** Indicates whether or not the 'accelerate' (aka 'Accelerate') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'bend-sound' (aka 'BendSound') attributeGroup. **/
		bool getIsAccelerateRequired() const
		{
			return myMxAttrGrpBendSound.getIsAccelerateRequired();
		}

		/** Indicates whether or not the 'beats' (aka 'Beats') attribute is required
		    to be present in a MusicXML document. This attribute is a member of
		    the 'bend-sound' (aka 'BendSound') attributeGroup. **/
		bool getIsBeatsRequired() const
		{
			return myMxAttrGrpBendSound.getIsBeatsRequired();
		}

		/** Indicates whether or not the 'first-beat' (aka 'FirstBeat') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'bend-sound' (aka 'BendSound') attributeGroup. **/
		bool getIsFirstBeatRequired() const
		{
			return myMxAttrGrpBendSound.getIsFirstBeatRequired();
		}

		/** Indicates whether or not the 'last-beat' (aka 'LastBeat') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'bend-sound' (aka 'BendSound') attributeGroup. **/
		bool getIsLastBeatRequired() const
		{
			return myMxAttrGrpBendSound.getIsLastBeatRequired();
		}

/* Get IsAttributePresent Values ------------------------------------------------------ */

		/** Indicates whether or not the 'type' (aka 'Type') attribute is (or will
		    be) present in the MusicXML document. Note: because 'type' is required
		    by the MusicXML specification, getIsTypePresent will always return
		    'true'. There is no corresponding setIsTypePresent function for this
		    attribute. **/
		bool getIsTypePresent() const
		{
			return myIsTypePresent;
		}

		/** Indicates whether or not the 'number' (aka 'Number') attribute is (or
		    will be) present in the MusicXML document. **/
		bool getIsNumberPresent() const
		{
			return myIsNumberPresent;
		}

		/** Indicates whether or not the 'line-type' (aka 'LineType') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'line-type' (aka 'LineType') attributeGroup. **/
		bool getIsLineTypePresent() const
		{
			return myMxAttrGrpLineType.getIsLineTypePresent();
		}

		/** Indicates whether or not the 'dash-length' (aka 'DashLength') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'dashed-formatting' (aka 'DashedFormatting') attributeGroup. **/
		bool getIsDashLengthPresent() const
		{
			return myMxAttrGrpDashedFormatting.getIsDashLengthPresent();
		}

		/** Indicates whether or not the 'space-length' (aka 'SpaceLength') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'dashed-formatting' (aka 'DashedFormatting') attributeGroup. **/
		bool getIsSpaceLengthPresent() const
		{
			return myMxAttrGrpDashedFormatting.getIsSpaceLengthPresent();
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

		/** Indicates whether or not the 'accelerate' (aka 'Accelerate') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'bend-sound' (aka 'BendSound') attributeGroup. **/
		bool getIsAcceleratePresent() const
		{
			return myMxAttrGrpBendSound.getIsAcceleratePresent();
		}

		/** Indicates whether or not the 'beats' (aka 'Beats') attribute is (or
		    will be) present in the MusicXML document. This attribute is a member
		    of the 'bend-sound' (aka 'BendSound') attributeGroup. **/
		bool getIsBeatsPresent() const
		{
			return myMxAttrGrpBendSound.getIsBeatsPresent();
		}

		/** Indicates whether or not the 'first-beat' (aka 'FirstBeat') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'bend-sound' (aka 'BendSound') attributeGroup. **/
		bool getIsFirstBeatPresent() const
		{
			return myMxAttrGrpBendSound.getIsFirstBeatPresent();
		}

		/** Indicates whether or not the 'last-beat' (aka 'LastBeat') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'bend-sound' (aka 'BendSound') attributeGroup. **/
		bool getIsLastBeatPresent() const
		{
			return myMxAttrGrpBendSound.getIsLastBeatPresent();
		}

/* Set IsAttributePresent Values ------------------------------------------------------ */

		/** Sets the value which indicates whether or not the 'number' (aka 'Number')
		    attribute is (or will be) present in the MusicXML document. **/
		void setIsNumberPresent( const bool& value_in )
		{
			myIsNumberPresent = value_in;
		}

		/** Sets the value which indicates whether or not the 'line-type' (aka
		    'LineType') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'line-type' (aka 'LineType') attributeGroup. **/
		void setIsLineTypePresent( const bool& value_in )
		{
			myMxAttrGrpLineType.setIsLineTypePresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'dash-length' (aka
		    'DashLength') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'dashed-formatting' (aka 'DashedFormatting')
		    attributeGroup. **/
		void setIsDashLengthPresent( const bool& value_in )
		{
			myMxAttrGrpDashedFormatting.setIsDashLengthPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'space-length' (aka
		    'SpaceLength') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'dashed-formatting' (aka 'DashedFormatting')
		    attributeGroup. **/
		void setIsSpaceLengthPresent( const bool& value_in )
		{
			myMxAttrGrpDashedFormatting.setIsSpaceLengthPresent( value_in );
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

		/** Sets the value which indicates whether or not the 'accelerate' (aka
		    'Accelerate') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'bend-sound' (aka 'BendSound') attributeGroup. **/
		void setIsAcceleratePresent( const bool& value_in )
		{
			myMxAttrGrpBendSound.setIsAcceleratePresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'beats' (aka 'Beats')
		    attribute is (or will be) present in the MusicXML document. This attribute
		    is a member of the 'bend-sound' (aka 'BendSound') attributeGroup. **/
		void setIsBeatsPresent( const bool& value_in )
		{
			myMxAttrGrpBendSound.setIsBeatsPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'first-beat' (aka
		    'FirstBeat') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'bend-sound' (aka 'BendSound') attributeGroup. **/
		void setIsFirstBeatPresent( const bool& value_in )
		{
			myMxAttrGrpBendSound.setIsFirstBeatPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'last-beat' (aka
		    'LastBeat') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'bend-sound' (aka 'BendSound') attributeGroup. **/
		void setIsLastBeatPresent( const bool& value_in )
		{
			myMxAttrGrpBendSound.setIsLastBeatPresent( value_in );
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
			hidden::attributeStream( getIsTypePresent(), "type", getType().toString(), os_out, isFirst );
			hidden::attributeStream( getIsNumberPresent(), "number", getNumber().toString(), os_out, isFirst );
			hidden::attributeStream( getIsLineTypePresent(), "line-type", getLineType().toString(), os_out, isFirst );
			hidden::attributeStream( getIsDashLengthPresent(), "dash-length", getDashLength().toString(), os_out, isFirst );
			hidden::attributeStream( getIsSpaceLengthPresent(), "space-length", getSpaceLength().toString(), os_out, isFirst );
			hidden::attributeStream( getIsDefaultXPresent(), "default-x", getDefaultX().toString(), os_out, isFirst );
			hidden::attributeStream( getIsDefaultYPresent(), "default-y", getDefaultY().toString(), os_out, isFirst );
			hidden::attributeStream( getIsRelativeXPresent(), "relative-x", getRelativeX().toString(), os_out, isFirst );
			hidden::attributeStream( getIsRelativeYPresent(), "relative-y", getRelativeY().toString(), os_out, isFirst );
			hidden::attributeStream( getIsFontFamilyPresent(), "font-family", getFontFamily().toString(), os_out, isFirst );
			hidden::attributeStream( getIsFontStylePresent(), "font-style", getFontStyle().toString(), os_out, isFirst );
			hidden::attributeStream( getIsFontSizePresent(), "font-size", getFontSize().toString(), os_out, isFirst );
			hidden::attributeStream( getIsFontWeightPresent(), "font-weight", getFontWeight().toString(), os_out, isFirst );
			hidden::attributeStream( getIsColorPresent(), "color", getColor().toString(), os_out, isFirst );
			hidden::attributeStream( getIsAcceleratePresent(), "accelerate", getAccelerate().toString(), os_out, isFirst );
			hidden::attributeStream( getIsBeatsPresent(), "beats", getBeats().toString(), os_out, isFirst );
			hidden::attributeStream( getIsFirstBeatPresent(), "first-beat", getFirstBeat().toString(), os_out, isFirst );
			hidden::attributeStream( getIsLastBeatPresent(), "last-beat", getLastBeat().toString(), os_out, isFirst );
			os_out << '>';
			os_out << getValue().toString();
			os_out << "</";
			os_out << getElementName();
			os_out << '>';
			return os_out;
		}

/* Get IsAttributeDefaultDefined Values ----------------------------------------------- */

		/** Indicates whether or not the 'type' (aka 'Type') has a default value
		    defined in the MusicXML xsd specification (either explicitly or in
		    the documentation). **/
		bool getIsTypeDefaultDefined() const
		{
			return false;
		}

		/** Indicates whether or not the 'number' (aka 'Number') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). **/
		bool getIsNumberDefaultDefined() const
		{
			return true;
		}

		/** Indicates whether or not the 'line-type' (aka 'LineType') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'line-type'
		    (aka 'LineType') attributeGroup. **/
		bool getIsLineTypeDefaultDefined() const
		{
			return myMxAttrGrpLineType.getIsLineTypeDefaultDefined();
		}

		/** Indicates whether or not the 'dash-length' (aka 'DashLength') has a
		    default value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'dashed-formatting'
		    (aka 'DashedFormatting') attributeGroup. **/
		bool getIsDashLengthDefaultDefined() const
		{
			return myMxAttrGrpDashedFormatting.getIsDashLengthDefaultDefined();
		}

		/** Indicates whether or not the 'space-length' (aka 'SpaceLength') has
		    a default value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'dashed-formatting'
		    (aka 'DashedFormatting') attributeGroup. **/
		bool getIsSpaceLengthDefaultDefined() const
		{
			return myMxAttrGrpDashedFormatting.getIsSpaceLengthDefaultDefined();
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

		/** Indicates whether or not the 'accelerate' (aka 'Accelerate') has a
		    default value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'bend-sound'
		    (aka 'BendSound') attributeGroup. **/
		bool getIsAccelerateDefaultDefined() const
		{
			return myMxAttrGrpBendSound.getIsAccelerateDefaultDefined();
		}

		/** Indicates whether or not the 'beats' (aka 'Beats') has a default value
		    defined in the MusicXML xsd specification (either explicitly or in
		    the documentation). This attribute is a member of the 'bend-sound'
		    (aka 'BendSound') attributeGroup. **/
		bool getIsBeatsDefaultDefined() const
		{
			return myMxAttrGrpBendSound.getIsBeatsDefaultDefined();
		}

		/** Indicates whether or not the 'first-beat' (aka 'FirstBeat') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'bend-sound'
		    (aka 'BendSound') attributeGroup. **/
		bool getIsFirstBeatDefaultDefined() const
		{
			return myMxAttrGrpBendSound.getIsFirstBeatDefaultDefined();
		}

		/** Indicates whether or not the 'last-beat' (aka 'LastBeat') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'bend-sound'
		    (aka 'BendSound') attributeGroup. **/
		bool getIsLastBeatDefaultDefined() const
		{
			return myMxAttrGrpBendSound.getIsLastBeatDefaultDefined();
		}

/* Get AttributeDefaultValue ---------------------------------------------------------- */

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'type' (aka 'Type') attribute. **/
		MxEnumStartStop getTypeDefaultValue() const
		{
			return MxEnumStartStop(  );
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'number' (aka 'Number') attribute. **/
		MxNumberNumberLevel getNumberDefaultValue() const
		{
			return MxNumberNumberLevel( 1 );
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'line-type' (aka 'LineType') attribute. This attribute is a member
		    of the 'line-type' (aka 'LineType') attributeGroup. **/
		MxEnumLineType getLineTypeDefaultValue() const
		{
			return myMxAttrGrpLineType.getLineTypeDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'dash-length' (aka 'DashLength') attribute. This attribute is a
		    member of the 'dashed-formatting' (aka 'DashedFormatting') attributeGroup. **/
		MxNumberTenths getDashLengthDefaultValue() const
		{
			return myMxAttrGrpDashedFormatting.getDashLengthDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'space-length' (aka 'SpaceLength') attribute. This attribute is
		    a member of the 'dashed-formatting' (aka 'DashedFormatting') attributeGroup. **/
		MxNumberTenths getSpaceLengthDefaultValue() const
		{
			return myMxAttrGrpDashedFormatting.getSpaceLengthDefaultValue();
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
		    the 'accelerate' (aka 'Accelerate') attribute. This attribute is a
		    member of the 'bend-sound' (aka 'BendSound') attributeGroup. **/
		MxEnumYesNo getAccelerateDefaultValue() const
		{
			return myMxAttrGrpBendSound.getAccelerateDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'beats' (aka 'Beats') attribute. This attribute is a member of
		    the 'bend-sound' (aka 'BendSound') attributeGroup. **/
		MxNumberTrillBeats getBeatsDefaultValue() const
		{
			return myMxAttrGrpBendSound.getBeatsDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'first-beat' (aka 'FirstBeat') attribute. This attribute is a member
		    of the 'bend-sound' (aka 'BendSound') attributeGroup. **/
		MxNumberPercent getFirstBeatDefaultValue() const
		{
			return myMxAttrGrpBendSound.getFirstBeatDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'last-beat' (aka 'LastBeat') attribute. This attribute is a member
		    of the 'bend-sound' (aka 'BendSound') attributeGroup. **/
		MxNumberPercent getLastBeatDefaultValue() const
		{
			return myMxAttrGrpBendSound.getLastBeatDefaultValue();
		}

	}; // struct MxCxSmpSlide::Impl

	const int MxCxSmpSlide::Impl::myXsdID = 5252;
	const std::string MxCxSmpSlide::Impl::myXmlTypeName = "slide";
	const std::string MxCxSmpSlide::Impl::myCppClassName = "MxCxSmpSlide";
	const std::string MxCxSmpSlide::Impl::myDocumentation = "Glissando and slide types both indicate rapidly moving from one pitch to the other so that individual notes are not discerned. The distinction is similar to that between NIFF's glissando and portamento elements. A slide is continuous between two notes and defaults to a solid line. The optional text for a is printed alongside the line.";

} // namespace lexicon


/* MxCxSmpSlide ----------------------------------------------------------------------- */

namespace lexicon
{

/* Constructor, Destructor, Copy, Assignment ------------------------------------------ */

	MxCxSmpSlide::MxCxSmpSlide( const std::string& elementName, const XsString& value_in )
	:myImpl( new Impl( elementName, value_in ) ) {}

	MxCxSmpSlide::~MxCxSmpSlide() {}

	MxCxSmpSlide::MxCxSmpSlide( const MxCxSmpSlide& other )
	:myImpl( new Impl( *(other.myImpl) ) ) {}

	MxCxSmpSlide& MxCxSmpSlide::operator=( const MxCxSmpSlide& other )
	{
		this->myImpl = std::unique_ptr<Impl>( new Impl( *(other.myImpl) ) );
		return *this;
	}

/* GetSet Value and Element Name ------------------------------------------------------ */

	/** Returns the contained xs:simpleContent value. **/
	XsString MxCxSmpSlide::getValue() const
	{
		return myImpl->getValue();
	}

	/** Sets the contained xs:simpleContent value. **/
	void MxCxSmpSlide::setValue( const XsString& value_in )
	{
		myImpl->setValue( value_in );
	}

	/** Returns the name of the Xml element employing this ComplexType. **/
	std::string MxCxSmpSlide::getElementName() const
	{
		return myImpl->getElementName();
	}

/* Get Class Information -------------------------------------------------------------- */

	/** Returns the name of this xs:complexType as found in the musicxml.xsd
	    document. **/
	std::string MxCxSmpSlide::getXmlTypeName() const
	{
		return myImpl->getXmlTypeName();
	}

	/** Returns the name of this C++ class. **/
	std::string MxCxSmpSlide::getClassName() const
	{
		return myImpl->getClassName();
	}

	/** Returns the documentation for this musicxml type as found in the musicxml.xsd
	    document. **/
	std::string MxCxSmpSlide::getDocumentation() const
	{
		return myImpl->getDocumentation();
	}

/* Get Attribute Values --------------------------------------------------------------- */

	/** Returns the internal value of the 'type' (aka 'Type') attribute. **/
	MxEnumStartStop MxCxSmpSlide::getType() const
	{
		return myImpl->getType();
	}

	/** Returns the internal value of the 'number' (aka 'Number') attribute. **/
	MxNumberNumberLevel MxCxSmpSlide::getNumber() const
	{
		return myImpl->getNumber();
	}

	/** Returns the internal value of the 'line-type' (aka 'LineType') attribute.
	    This attribute is a member of the 'line-type' (aka 'LineType') attributeGroup. **/
	MxEnumLineType MxCxSmpSlide::getLineType() const
	{
		return myImpl->getLineType();
	}

	/** Returns the internal value of the 'dash-length' (aka 'DashLength')
	    attribute. This attribute is a member of the 'dashed-formatting' (aka
	    'DashedFormatting') attributeGroup. **/
	MxNumberTenths MxCxSmpSlide::getDashLength() const
	{
		return myImpl->getDashLength();
	}

	/** Returns the internal value of the 'space-length' (aka 'SpaceLength')
	    attribute. This attribute is a member of the 'dashed-formatting' (aka
	    'DashedFormatting') attributeGroup. **/
	MxNumberTenths MxCxSmpSlide::getSpaceLength() const
	{
		return myImpl->getSpaceLength();
	}

	/** Returns the internal value of the 'default-x' (aka 'DefaultX') attribute.
	    This attribute is a member of the 'print-style' (aka 'PrintStyle')
	    attributeGroup. **/
	MxNumberTenths MxCxSmpSlide::getDefaultX() const
	{
		return myImpl->getDefaultX();
	}

	/** Returns the internal value of the 'default-y' (aka 'DefaultY') attribute.
	    This attribute is a member of the 'print-style' (aka 'PrintStyle')
	    attributeGroup. **/
	MxNumberTenths MxCxSmpSlide::getDefaultY() const
	{
		return myImpl->getDefaultY();
	}

	/** Returns the internal value of the 'relative-x' (aka 'RelativeX') attribute.
	    This attribute is a member of the 'print-style' (aka 'PrintStyle')
	    attributeGroup. **/
	MxNumberTenths MxCxSmpSlide::getRelativeX() const
	{
		return myImpl->getRelativeX();
	}

	/** Returns the internal value of the 'relative-y' (aka 'RelativeY') attribute.
	    This attribute is a member of the 'print-style' (aka 'PrintStyle')
	    attributeGroup. **/
	MxNumberTenths MxCxSmpSlide::getRelativeY() const
	{
		return myImpl->getRelativeY();
	}

	/** Returns the internal value of the 'font-family' (aka 'FontFamily')
	    attribute. This attribute is a member of the 'print-style' (aka 'PrintStyle')
	    attributeGroup. **/
	MxCommaSeparatedText MxCxSmpSlide::getFontFamily() const
	{
		return myImpl->getFontFamily();
	}

	/** Returns the internal value of the 'font-style' (aka 'FontStyle') attribute.
	    This attribute is a member of the 'print-style' (aka 'PrintStyle')
	    attributeGroup. **/
	MxEnumFontStyle MxCxSmpSlide::getFontStyle() const
	{
		return myImpl->getFontStyle();
	}

	/** Returns the internal value of the 'font-size' (aka 'FontSize') attribute.
	    This attribute is a member of the 'print-style' (aka 'PrintStyle')
	    attributeGroup. **/
	MxFontSize MxCxSmpSlide::getFontSize() const
	{
		return myImpl->getFontSize();
	}

	/** Returns the internal value of the 'font-weight' (aka 'FontWeight')
	    attribute. This attribute is a member of the 'print-style' (aka 'PrintStyle')
	    attributeGroup. **/
	MxEnumFontWeight MxCxSmpSlide::getFontWeight() const
	{
		return myImpl->getFontWeight();
	}

	/** Returns the internal value of the 'color' (aka 'Color') attribute.
	    This attribute is a member of the 'print-style' (aka 'PrintStyle')
	    attributeGroup. **/
	MxColor MxCxSmpSlide::getColor() const
	{
		return myImpl->getColor();
	}

	/** Returns the internal value of the 'accelerate' (aka 'Accelerate') attribute.
	    This attribute is a member of the 'bend-sound' (aka 'BendSound') attributeGroup. **/
	MxEnumYesNo MxCxSmpSlide::getAccelerate() const
	{
		return myImpl->getAccelerate();
	}

	/** Returns the internal value of the 'beats' (aka 'Beats') attribute.
	    This attribute is a member of the 'bend-sound' (aka 'BendSound') attributeGroup. **/
	MxNumberTrillBeats MxCxSmpSlide::getBeats() const
	{
		return myImpl->getBeats();
	}

	/** Returns the internal value of the 'first-beat' (aka 'FirstBeat') attribute.
	    This attribute is a member of the 'bend-sound' (aka 'BendSound') attributeGroup. **/
	MxNumberPercent MxCxSmpSlide::getFirstBeat() const
	{
		return myImpl->getFirstBeat();
	}

	/** Returns the internal value of the 'last-beat' (aka 'LastBeat') attribute.
	    This attribute is a member of the 'bend-sound' (aka 'BendSound') attributeGroup. **/
	MxNumberPercent MxCxSmpSlide::getLastBeat() const
	{
		return myImpl->getLastBeat();
	}

/* Set Attribute Values --------------------------------------------------------------- */

	/** Sets the internal value of the 'type' (aka 'Type') attribute. **/
	void MxCxSmpSlide::setType( const MxEnumStartStop& value_in )
	{
		myImpl->setType( value_in );
	}

	/** Sets the internal value of the 'number' (aka 'Number') attribute. **/
	void MxCxSmpSlide::setNumber( const MxNumberNumberLevel& value_in )
	{
		myImpl->setNumber( value_in );
	}

	/** Sets the internal value of the 'line-type' (aka 'LineType') attribute.
	    This attribute is a member of the 'line-type' (aka 'LineType') attributeGroup. **/
	void MxCxSmpSlide::setLineType( const MxEnumLineType& value_in )
	{
		myImpl->setLineType( value_in );
	}

	/** Sets the internal value of the 'dash-length' (aka 'DashLength') attribute.
	    This attribute is a member of the 'dashed-formatting' (aka 'DashedFormatting')
	    attributeGroup. **/
	void MxCxSmpSlide::setDashLength( const MxNumberTenths& value_in )
	{
		myImpl->setDashLength( value_in );
	}

	/** Sets the internal value of the 'space-length' (aka 'SpaceLength') attribute.
	    This attribute is a member of the 'dashed-formatting' (aka 'DashedFormatting')
	    attributeGroup. **/
	void MxCxSmpSlide::setSpaceLength( const MxNumberTenths& value_in )
	{
		myImpl->setSpaceLength( value_in );
	}

	/** Sets the internal value of the 'default-x' (aka 'DefaultX') attribute.
	    This attribute is a member of the 'print-style' (aka 'PrintStyle')
	    attributeGroup. **/
	void MxCxSmpSlide::setDefaultX( const MxNumberTenths& value_in )
	{
		myImpl->setDefaultX( value_in );
	}

	/** Sets the internal value of the 'default-y' (aka 'DefaultY') attribute.
	    This attribute is a member of the 'print-style' (aka 'PrintStyle')
	    attributeGroup. **/
	void MxCxSmpSlide::setDefaultY( const MxNumberTenths& value_in )
	{
		myImpl->setDefaultY( value_in );
	}

	/** Sets the internal value of the 'relative-x' (aka 'RelativeX') attribute.
	    This attribute is a member of the 'print-style' (aka 'PrintStyle')
	    attributeGroup. **/
	void MxCxSmpSlide::setRelativeX( const MxNumberTenths& value_in )
	{
		myImpl->setRelativeX( value_in );
	}

	/** Sets the internal value of the 'relative-y' (aka 'RelativeY') attribute.
	    This attribute is a member of the 'print-style' (aka 'PrintStyle')
	    attributeGroup. **/
	void MxCxSmpSlide::setRelativeY( const MxNumberTenths& value_in )
	{
		myImpl->setRelativeY( value_in );
	}

	/** Sets the internal value of the 'font-family' (aka 'FontFamily') attribute.
	    This attribute is a member of the 'print-style' (aka 'PrintStyle')
	    attributeGroup. **/
	void MxCxSmpSlide::setFontFamily( const MxCommaSeparatedText& value_in )
	{
		myImpl->setFontFamily( value_in );
	}

	/** Sets the internal value of the 'font-style' (aka 'FontStyle') attribute.
	    This attribute is a member of the 'print-style' (aka 'PrintStyle')
	    attributeGroup. **/
	void MxCxSmpSlide::setFontStyle( const MxEnumFontStyle& value_in )
	{
		myImpl->setFontStyle( value_in );
	}

	/** Sets the internal value of the 'font-size' (aka 'FontSize') attribute.
	    This attribute is a member of the 'print-style' (aka 'PrintStyle')
	    attributeGroup. **/
	void MxCxSmpSlide::setFontSize( const MxFontSize& value_in )
	{
		myImpl->setFontSize( value_in );
	}

	/** Sets the internal value of the 'font-weight' (aka 'FontWeight') attribute.
	    This attribute is a member of the 'print-style' (aka 'PrintStyle')
	    attributeGroup. **/
	void MxCxSmpSlide::setFontWeight( const MxEnumFontWeight& value_in )
	{
		myImpl->setFontWeight( value_in );
	}

	/** Sets the internal value of the 'color' (aka 'Color') attribute. This
	    attribute is a member of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	void MxCxSmpSlide::setColor( const MxColor& value_in )
	{
		myImpl->setColor( value_in );
	}

	/** Sets the internal value of the 'accelerate' (aka 'Accelerate') attribute.
	    This attribute is a member of the 'bend-sound' (aka 'BendSound') attributeGroup. **/
	void MxCxSmpSlide::setAccelerate( const MxEnumYesNo& value_in )
	{
		myImpl->setAccelerate( value_in );
	}

	/** Sets the internal value of the 'beats' (aka 'Beats') attribute. This
	    attribute is a member of the 'bend-sound' (aka 'BendSound') attributeGroup. **/
	void MxCxSmpSlide::setBeats( const MxNumberTrillBeats& value_in )
	{
		myImpl->setBeats( value_in );
	}

	/** Sets the internal value of the 'first-beat' (aka 'FirstBeat') attribute.
	    This attribute is a member of the 'bend-sound' (aka 'BendSound') attributeGroup. **/
	void MxCxSmpSlide::setFirstBeat( const MxNumberPercent& value_in )
	{
		myImpl->setFirstBeat( value_in );
	}

	/** Sets the internal value of the 'last-beat' (aka 'LastBeat') attribute.
	    This attribute is a member of the 'bend-sound' (aka 'BendSound') attributeGroup. **/
	void MxCxSmpSlide::setLastBeat( const MxNumberPercent& value_in )
	{
		myImpl->setLastBeat( value_in );
	}

/* Get IsAttributeRequired Values ----------------------------------------------------- */

	/** Indicates whether or not the 'type' (aka 'Type') attribute is required
	    to be present in a MusicXML document. **/
	bool MxCxSmpSlide::getIsTypeRequired() const
	{
		return myImpl->getIsTypeRequired();
	}

	/** Indicates whether or not the 'number' (aka 'Number') attribute is required
	    to be present in a MusicXML document. **/
	bool MxCxSmpSlide::getIsNumberRequired() const
	{
		return myImpl->getIsNumberRequired();
	}

	/** Indicates whether or not the 'line-type' (aka 'LineType') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'line-type' (aka 'LineType') attributeGroup. **/
	bool MxCxSmpSlide::getIsLineTypeRequired() const
	{
		return myImpl->getIsLineTypeRequired();
	}

	/** Indicates whether or not the 'dash-length' (aka 'DashLength') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'dashed-formatting' (aka 'DashedFormatting') attributeGroup. **/
	bool MxCxSmpSlide::getIsDashLengthRequired() const
	{
		return myImpl->getIsDashLengthRequired();
	}

	/** Indicates whether or not the 'space-length' (aka 'SpaceLength') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'dashed-formatting' (aka 'DashedFormatting') attributeGroup. **/
	bool MxCxSmpSlide::getIsSpaceLengthRequired() const
	{
		return myImpl->getIsSpaceLengthRequired();
	}

	/** Indicates whether or not the 'default-x' (aka 'DefaultX') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	bool MxCxSmpSlide::getIsDefaultXRequired() const
	{
		return myImpl->getIsDefaultXRequired();
	}

	/** Indicates whether or not the 'default-y' (aka 'DefaultY') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	bool MxCxSmpSlide::getIsDefaultYRequired() const
	{
		return myImpl->getIsDefaultYRequired();
	}

	/** Indicates whether or not the 'relative-x' (aka 'RelativeX') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	bool MxCxSmpSlide::getIsRelativeXRequired() const
	{
		return myImpl->getIsRelativeXRequired();
	}

	/** Indicates whether or not the 'relative-y' (aka 'RelativeY') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	bool MxCxSmpSlide::getIsRelativeYRequired() const
	{
		return myImpl->getIsRelativeYRequired();
	}

	/** Indicates whether or not the 'font-family' (aka 'FontFamily') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	bool MxCxSmpSlide::getIsFontFamilyRequired() const
	{
		return myImpl->getIsFontFamilyRequired();
	}

	/** Indicates whether or not the 'font-style' (aka 'FontStyle') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	bool MxCxSmpSlide::getIsFontStyleRequired() const
	{
		return myImpl->getIsFontStyleRequired();
	}

	/** Indicates whether or not the 'font-size' (aka 'FontSize') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	bool MxCxSmpSlide::getIsFontSizeRequired() const
	{
		return myImpl->getIsFontSizeRequired();
	}

	/** Indicates whether or not the 'font-weight' (aka 'FontWeight') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	bool MxCxSmpSlide::getIsFontWeightRequired() const
	{
		return myImpl->getIsFontWeightRequired();
	}

	/** Indicates whether or not the 'color' (aka 'Color') attribute is required
	    to be present in a MusicXML document. This attribute is a member of
	    the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	bool MxCxSmpSlide::getIsColorRequired() const
	{
		return myImpl->getIsColorRequired();
	}

	/** Indicates whether or not the 'accelerate' (aka 'Accelerate') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'bend-sound' (aka 'BendSound') attributeGroup. **/
	bool MxCxSmpSlide::getIsAccelerateRequired() const
	{
		return myImpl->getIsAccelerateRequired();
	}

	/** Indicates whether or not the 'beats' (aka 'Beats') attribute is required
	    to be present in a MusicXML document. This attribute is a member of
	    the 'bend-sound' (aka 'BendSound') attributeGroup. **/
	bool MxCxSmpSlide::getIsBeatsRequired() const
	{
		return myImpl->getIsBeatsRequired();
	}

	/** Indicates whether or not the 'first-beat' (aka 'FirstBeat') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'bend-sound' (aka 'BendSound') attributeGroup. **/
	bool MxCxSmpSlide::getIsFirstBeatRequired() const
	{
		return myImpl->getIsFirstBeatRequired();
	}

	/** Indicates whether or not the 'last-beat' (aka 'LastBeat') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'bend-sound' (aka 'BendSound') attributeGroup. **/
	bool MxCxSmpSlide::getIsLastBeatRequired() const
	{
		return myImpl->getIsLastBeatRequired();
	}

/* Get IsAttributePresent Values ------------------------------------------------------ */

	/** Indicates whether or not the 'type' (aka 'Type') attribute is (or will
	    be) present in the MusicXML document. Note: because 'type' is required
	    by the MusicXML specification, getIsTypePresent will always return
	    'true'. There is no corresponding setIsTypePresent function for this
	    attribute. **/
	bool MxCxSmpSlide::getIsTypePresent() const
	{
		return myImpl->getIsTypePresent();
	}

	/** Indicates whether or not the 'number' (aka 'Number') attribute is (or
	    will be) present in the MusicXML document. **/
	bool MxCxSmpSlide::getIsNumberPresent() const
	{
		return myImpl->getIsNumberPresent();
	}

	/** Indicates whether or not the 'line-type' (aka 'LineType') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'line-type' (aka 'LineType') attributeGroup. **/
	bool MxCxSmpSlide::getIsLineTypePresent() const
	{
		return myImpl->getIsLineTypePresent();
	}

	/** Indicates whether or not the 'dash-length' (aka 'DashLength') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'dashed-formatting' (aka 'DashedFormatting') attributeGroup. **/
	bool MxCxSmpSlide::getIsDashLengthPresent() const
	{
		return myImpl->getIsDashLengthPresent();
	}

	/** Indicates whether or not the 'space-length' (aka 'SpaceLength') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'dashed-formatting' (aka 'DashedFormatting') attributeGroup. **/
	bool MxCxSmpSlide::getIsSpaceLengthPresent() const
	{
		return myImpl->getIsSpaceLengthPresent();
	}

	/** Indicates whether or not the 'default-x' (aka 'DefaultX') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	bool MxCxSmpSlide::getIsDefaultXPresent() const
	{
		return myImpl->getIsDefaultXPresent();
	}

	/** Indicates whether or not the 'default-y' (aka 'DefaultY') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	bool MxCxSmpSlide::getIsDefaultYPresent() const
	{
		return myImpl->getIsDefaultYPresent();
	}

	/** Indicates whether or not the 'relative-x' (aka 'RelativeX') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	bool MxCxSmpSlide::getIsRelativeXPresent() const
	{
		return myImpl->getIsRelativeXPresent();
	}

	/** Indicates whether or not the 'relative-y' (aka 'RelativeY') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	bool MxCxSmpSlide::getIsRelativeYPresent() const
	{
		return myImpl->getIsRelativeYPresent();
	}

	/** Indicates whether or not the 'font-family' (aka 'FontFamily') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	bool MxCxSmpSlide::getIsFontFamilyPresent() const
	{
		return myImpl->getIsFontFamilyPresent();
	}

	/** Indicates whether or not the 'font-style' (aka 'FontStyle') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	bool MxCxSmpSlide::getIsFontStylePresent() const
	{
		return myImpl->getIsFontStylePresent();
	}

	/** Indicates whether or not the 'font-size' (aka 'FontSize') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	bool MxCxSmpSlide::getIsFontSizePresent() const
	{
		return myImpl->getIsFontSizePresent();
	}

	/** Indicates whether or not the 'font-weight' (aka 'FontWeight') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	bool MxCxSmpSlide::getIsFontWeightPresent() const
	{
		return myImpl->getIsFontWeightPresent();
	}

	/** Indicates whether or not the 'color' (aka 'Color') attribute is (or
	    will be) present in the MusicXML document. This attribute is a member
	    of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	bool MxCxSmpSlide::getIsColorPresent() const
	{
		return myImpl->getIsColorPresent();
	}

	/** Indicates whether or not the 'accelerate' (aka 'Accelerate') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'bend-sound' (aka 'BendSound') attributeGroup. **/
	bool MxCxSmpSlide::getIsAcceleratePresent() const
	{
		return myImpl->getIsAcceleratePresent();
	}

	/** Indicates whether or not the 'beats' (aka 'Beats') attribute is (or
	    will be) present in the MusicXML document. This attribute is a member
	    of the 'bend-sound' (aka 'BendSound') attributeGroup. **/
	bool MxCxSmpSlide::getIsBeatsPresent() const
	{
		return myImpl->getIsBeatsPresent();
	}

	/** Indicates whether or not the 'first-beat' (aka 'FirstBeat') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'bend-sound' (aka 'BendSound') attributeGroup. **/
	bool MxCxSmpSlide::getIsFirstBeatPresent() const
	{
		return myImpl->getIsFirstBeatPresent();
	}

	/** Indicates whether or not the 'last-beat' (aka 'LastBeat') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'bend-sound' (aka 'BendSound') attributeGroup. **/
	bool MxCxSmpSlide::getIsLastBeatPresent() const
	{
		return myImpl->getIsLastBeatPresent();
	}

/* Set IsAttributePresent Values ------------------------------------------------------ */

	/** Sets the value which indicates whether or not the 'number' (aka 'Number')
	    attribute is (or will be) present in the MusicXML document. **/
	void MxCxSmpSlide::setIsNumberPresent( const bool& value_in )
	{
		myImpl->setIsNumberPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'line-type' (aka
	    'LineType') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'line-type' (aka 'LineType') attributeGroup. **/
	void MxCxSmpSlide::setIsLineTypePresent( const bool& value_in )
	{
		myImpl->setIsLineTypePresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'dash-length' (aka
	    'DashLength') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'dashed-formatting' (aka 'DashedFormatting')
	    attributeGroup. **/
	void MxCxSmpSlide::setIsDashLengthPresent( const bool& value_in )
	{
		myImpl->setIsDashLengthPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'space-length' (aka
	    'SpaceLength') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'dashed-formatting' (aka 'DashedFormatting')
	    attributeGroup. **/
	void MxCxSmpSlide::setIsSpaceLengthPresent( const bool& value_in )
	{
		myImpl->setIsSpaceLengthPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'default-x' (aka
	    'DefaultX') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'print-style' (aka 'PrintStyle')
	    attributeGroup. **/
	void MxCxSmpSlide::setIsDefaultXPresent( const bool& value_in )
	{
		myImpl->setIsDefaultXPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'default-y' (aka
	    'DefaultY') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'print-style' (aka 'PrintStyle')
	    attributeGroup. **/
	void MxCxSmpSlide::setIsDefaultYPresent( const bool& value_in )
	{
		myImpl->setIsDefaultYPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'relative-x' (aka
	    'RelativeX') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'print-style' (aka 'PrintStyle')
	    attributeGroup. **/
	void MxCxSmpSlide::setIsRelativeXPresent( const bool& value_in )
	{
		myImpl->setIsRelativeXPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'relative-y' (aka
	    'RelativeY') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'print-style' (aka 'PrintStyle')
	    attributeGroup. **/
	void MxCxSmpSlide::setIsRelativeYPresent( const bool& value_in )
	{
		myImpl->setIsRelativeYPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'font-family' (aka
	    'FontFamily') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'print-style' (aka 'PrintStyle')
	    attributeGroup. **/
	void MxCxSmpSlide::setIsFontFamilyPresent( const bool& value_in )
	{
		myImpl->setIsFontFamilyPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'font-style' (aka
	    'FontStyle') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'print-style' (aka 'PrintStyle')
	    attributeGroup. **/
	void MxCxSmpSlide::setIsFontStylePresent( const bool& value_in )
	{
		myImpl->setIsFontStylePresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'font-size' (aka
	    'FontSize') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'print-style' (aka 'PrintStyle')
	    attributeGroup. **/
	void MxCxSmpSlide::setIsFontSizePresent( const bool& value_in )
	{
		myImpl->setIsFontSizePresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'font-weight' (aka
	    'FontWeight') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'print-style' (aka 'PrintStyle')
	    attributeGroup. **/
	void MxCxSmpSlide::setIsFontWeightPresent( const bool& value_in )
	{
		myImpl->setIsFontWeightPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'color' (aka 'Color')
	    attribute is (or will be) present in the MusicXML document. This attribute
	    is a member of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	void MxCxSmpSlide::setIsColorPresent( const bool& value_in )
	{
		myImpl->setIsColorPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'accelerate' (aka
	    'Accelerate') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'bend-sound' (aka 'BendSound') attributeGroup. **/
	void MxCxSmpSlide::setIsAcceleratePresent( const bool& value_in )
	{
		myImpl->setIsAcceleratePresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'beats' (aka 'Beats')
	    attribute is (or will be) present in the MusicXML document. This attribute
	    is a member of the 'bend-sound' (aka 'BendSound') attributeGroup. **/
	void MxCxSmpSlide::setIsBeatsPresent( const bool& value_in )
	{
		myImpl->setIsBeatsPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'first-beat' (aka
	    'FirstBeat') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'bend-sound' (aka 'BendSound') attributeGroup. **/
	void MxCxSmpSlide::setIsFirstBeatPresent( const bool& value_in )
	{
		myImpl->setIsFirstBeatPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'last-beat' (aka
	    'LastBeat') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'bend-sound' (aka 'BendSound') attributeGroup. **/
	void MxCxSmpSlide::setIsLastBeatPresent( const bool& value_in )
	{
		myImpl->setIsLastBeatPresent( value_in );
	}

/* Stringing and Streaming ------------------------------------------------------------ */

	/** Returns the xml representation of the object's value. **/
	std::string MxCxSmpSlide::toString() const
	{
		return myImpl->toString();
	}

	/** Returns the xml representation of the object's value. **/
	std::ostream& MxCxSmpSlide::stream( std::ostream& os_out ) const
	{
		return myImpl->stream( os_out );
	}

/* Get IsAttributeDefaultDefined Values ----------------------------------------------- */

	/** Indicates whether or not the 'type' (aka 'Type') has a default value
	    defined in the MusicXML xsd specification (either explicitly or in
	    the documentation). **/
	bool MxCxSmpSlide::getIsTypeDefaultDefined() const
	{
		return myImpl->getIsTypeDefaultDefined();
	}

	/** Indicates whether or not the 'number' (aka 'Number') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). **/
	bool MxCxSmpSlide::getIsNumberDefaultDefined() const
	{
		return myImpl->getIsNumberDefaultDefined();
	}

	/** Indicates whether or not the 'line-type' (aka 'LineType') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'line-type'
	    (aka 'LineType') attributeGroup. **/
	bool MxCxSmpSlide::getIsLineTypeDefaultDefined() const
	{
		return myImpl->getIsLineTypeDefaultDefined();
	}

	/** Indicates whether or not the 'dash-length' (aka 'DashLength') has a
	    default value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'dashed-formatting'
	    (aka 'DashedFormatting') attributeGroup. **/
	bool MxCxSmpSlide::getIsDashLengthDefaultDefined() const
	{
		return myImpl->getIsDashLengthDefaultDefined();
	}

	/** Indicates whether or not the 'space-length' (aka 'SpaceLength') has
	    a default value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'dashed-formatting'
	    (aka 'DashedFormatting') attributeGroup. **/
	bool MxCxSmpSlide::getIsSpaceLengthDefaultDefined() const
	{
		return myImpl->getIsSpaceLengthDefaultDefined();
	}

	/** Indicates whether or not the 'default-x' (aka 'DefaultX') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'print-style'
	    (aka 'PrintStyle') attributeGroup. **/
	bool MxCxSmpSlide::getIsDefaultXDefaultDefined() const
	{
		return myImpl->getIsDefaultXDefaultDefined();
	}

	/** Indicates whether or not the 'default-y' (aka 'DefaultY') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'print-style'
	    (aka 'PrintStyle') attributeGroup. **/
	bool MxCxSmpSlide::getIsDefaultYDefaultDefined() const
	{
		return myImpl->getIsDefaultYDefaultDefined();
	}

	/** Indicates whether or not the 'relative-x' (aka 'RelativeX') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'print-style'
	    (aka 'PrintStyle') attributeGroup. **/
	bool MxCxSmpSlide::getIsRelativeXDefaultDefined() const
	{
		return myImpl->getIsRelativeXDefaultDefined();
	}

	/** Indicates whether or not the 'relative-y' (aka 'RelativeY') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'print-style'
	    (aka 'PrintStyle') attributeGroup. **/
	bool MxCxSmpSlide::getIsRelativeYDefaultDefined() const
	{
		return myImpl->getIsRelativeYDefaultDefined();
	}

	/** Indicates whether or not the 'font-family' (aka 'FontFamily') has a
	    default value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'print-style'
	    (aka 'PrintStyle') attributeGroup. **/
	bool MxCxSmpSlide::getIsFontFamilyDefaultDefined() const
	{
		return myImpl->getIsFontFamilyDefaultDefined();
	}

	/** Indicates whether or not the 'font-style' (aka 'FontStyle') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'print-style'
	    (aka 'PrintStyle') attributeGroup. **/
	bool MxCxSmpSlide::getIsFontStyleDefaultDefined() const
	{
		return myImpl->getIsFontStyleDefaultDefined();
	}

	/** Indicates whether or not the 'font-size' (aka 'FontSize') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'print-style'
	    (aka 'PrintStyle') attributeGroup. **/
	bool MxCxSmpSlide::getIsFontSizeDefaultDefined() const
	{
		return myImpl->getIsFontSizeDefaultDefined();
	}

	/** Indicates whether or not the 'font-weight' (aka 'FontWeight') has a
	    default value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'print-style'
	    (aka 'PrintStyle') attributeGroup. **/
	bool MxCxSmpSlide::getIsFontWeightDefaultDefined() const
	{
		return myImpl->getIsFontWeightDefaultDefined();
	}

	/** Indicates whether or not the 'color' (aka 'Color') has a default value
	    defined in the MusicXML xsd specification (either explicitly or in
	    the documentation). This attribute is a member of the 'print-style'
	    (aka 'PrintStyle') attributeGroup. **/
	bool MxCxSmpSlide::getIsColorDefaultDefined() const
	{
		return myImpl->getIsColorDefaultDefined();
	}

	/** Indicates whether or not the 'accelerate' (aka 'Accelerate') has a
	    default value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'bend-sound'
	    (aka 'BendSound') attributeGroup. **/
	bool MxCxSmpSlide::getIsAccelerateDefaultDefined() const
	{
		return myImpl->getIsAccelerateDefaultDefined();
	}

	/** Indicates whether or not the 'beats' (aka 'Beats') has a default value
	    defined in the MusicXML xsd specification (either explicitly or in
	    the documentation). This attribute is a member of the 'bend-sound'
	    (aka 'BendSound') attributeGroup. **/
	bool MxCxSmpSlide::getIsBeatsDefaultDefined() const
	{
		return myImpl->getIsBeatsDefaultDefined();
	}

	/** Indicates whether or not the 'first-beat' (aka 'FirstBeat') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'bend-sound'
	    (aka 'BendSound') attributeGroup. **/
	bool MxCxSmpSlide::getIsFirstBeatDefaultDefined() const
	{
		return myImpl->getIsFirstBeatDefaultDefined();
	}

	/** Indicates whether or not the 'last-beat' (aka 'LastBeat') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'bend-sound'
	    (aka 'BendSound') attributeGroup. **/
	bool MxCxSmpSlide::getIsLastBeatDefaultDefined() const
	{
		return myImpl->getIsLastBeatDefaultDefined();
	}

/* Get AttributeDefaultValue ---------------------------------------------------------- */

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'type' (aka 'Type') attribute. **/
	MxEnumStartStop MxCxSmpSlide::getTypeDefaultValue() const
	{
		return myImpl->getTypeDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'number' (aka 'Number') attribute. **/
	MxNumberNumberLevel MxCxSmpSlide::getNumberDefaultValue() const
	{
		return myImpl->getNumberDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'line-type' (aka 'LineType') attribute. This attribute is a member
	    of the 'line-type' (aka 'LineType') attributeGroup. **/
	MxEnumLineType MxCxSmpSlide::getLineTypeDefaultValue() const
	{
		return myImpl->getLineTypeDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'dash-length' (aka 'DashLength') attribute. This attribute is a
	    member of the 'dashed-formatting' (aka 'DashedFormatting') attributeGroup. **/
	MxNumberTenths MxCxSmpSlide::getDashLengthDefaultValue() const
	{
		return myImpl->getDashLengthDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'space-length' (aka 'SpaceLength') attribute. This attribute is
	    a member of the 'dashed-formatting' (aka 'DashedFormatting') attributeGroup. **/
	MxNumberTenths MxCxSmpSlide::getSpaceLengthDefaultValue() const
	{
		return myImpl->getSpaceLengthDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'default-x' (aka 'DefaultX') attribute. This attribute is a member
	    of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	MxNumberTenths MxCxSmpSlide::getDefaultXDefaultValue() const
	{
		return myImpl->getDefaultXDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'default-y' (aka 'DefaultY') attribute. This attribute is a member
	    of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	MxNumberTenths MxCxSmpSlide::getDefaultYDefaultValue() const
	{
		return myImpl->getDefaultYDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'relative-x' (aka 'RelativeX') attribute. This attribute is a member
	    of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	MxNumberTenths MxCxSmpSlide::getRelativeXDefaultValue() const
	{
		return myImpl->getRelativeXDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'relative-y' (aka 'RelativeY') attribute. This attribute is a member
	    of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	MxNumberTenths MxCxSmpSlide::getRelativeYDefaultValue() const
	{
		return myImpl->getRelativeYDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'font-family' (aka 'FontFamily') attribute. This attribute is a
	    member of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	MxCommaSeparatedText MxCxSmpSlide::getFontFamilyDefaultValue() const
	{
		return myImpl->getFontFamilyDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'font-style' (aka 'FontStyle') attribute. This attribute is a member
	    of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	MxEnumFontStyle MxCxSmpSlide::getFontStyleDefaultValue() const
	{
		return myImpl->getFontStyleDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'font-size' (aka 'FontSize') attribute. This attribute is a member
	    of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	MxFontSize MxCxSmpSlide::getFontSizeDefaultValue() const
	{
		return myImpl->getFontSizeDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'font-weight' (aka 'FontWeight') attribute. This attribute is a
	    member of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	MxEnumFontWeight MxCxSmpSlide::getFontWeightDefaultValue() const
	{
		return myImpl->getFontWeightDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'color' (aka 'Color') attribute. This attribute is a member of
	    the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	MxColor MxCxSmpSlide::getColorDefaultValue() const
	{
		return myImpl->getColorDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'accelerate' (aka 'Accelerate') attribute. This attribute is a
	    member of the 'bend-sound' (aka 'BendSound') attributeGroup. **/
	MxEnumYesNo MxCxSmpSlide::getAccelerateDefaultValue() const
	{
		return myImpl->getAccelerateDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'beats' (aka 'Beats') attribute. This attribute is a member of
	    the 'bend-sound' (aka 'BendSound') attributeGroup. **/
	MxNumberTrillBeats MxCxSmpSlide::getBeatsDefaultValue() const
	{
		return myImpl->getBeatsDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'first-beat' (aka 'FirstBeat') attribute. This attribute is a member
	    of the 'bend-sound' (aka 'BendSound') attributeGroup. **/
	MxNumberPercent MxCxSmpSlide::getFirstBeatDefaultValue() const
	{
		return myImpl->getFirstBeatDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'last-beat' (aka 'LastBeat') attribute. This attribute is a member
	    of the 'bend-sound' (aka 'BendSound') attributeGroup. **/
	MxNumberPercent MxCxSmpSlide::getLastBeatDefaultValue() const
	{
		return myImpl->getLastBeatDefaultValue();
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

