/* See MusicXML License at the bottom of this code page. */

/**
  * @file       MxCxEmptyEmptyTrillSound.cpp
  * @class      lexicon::MxCxEmptyEmptyTrillSound
  * @author     Matthew James Briggs
  * @email      matthew.james.briggs@gmail.com
  * @url        http://matthewjamesbriggs.com
  * @date       2014-12-03 16:31:27
  * @project    Lexicon
  * @version    1.0
  * @musicxmlid 2355
  * 
  * @brief The 'EmptyTrillSound' class serves as a binding for the MusicXml 'empty-trill-sound'
  * complexType.
  * 
 **/

#include "MxCxEmptyEmptyTrillSound.h"
#include <sstream>
#include "_hidden_attributeStream.h"
#include "MxAttrGrpPlacement.h"
#include "MxAttrGrpPrintStyle.h"
#include "MxAttrGrpTrillSound.h"

/* Impl ------------------------------------------------------------------------------- */

namespace lexicon
{
	struct MxCxEmptyEmptyTrillSound::Impl
	{
		Impl( const std::string& elementName )
		:myElementName( elementName )
		,myMxAttrGrpPrintStyle()
		,myMxAttrGrpPlacement()
		,myMxAttrGrpTrillSound()
		{}

	private:
		std::string myElementName;
		MxAttrGrpPrintStyle myMxAttrGrpPrintStyle;
		MxAttrGrpPlacement myMxAttrGrpPlacement;
		MxAttrGrpTrillSound myMxAttrGrpTrillSound;

		const static int myXsdID;
		const static std::string myXmlTypeName;
		const static std::string myCppClassName;
		const static std::string myDocumentation;

	public:

/* GetSet Value and Element Name ------------------------------------------------------ */

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

		/** Returns the internal value of the 'placement' (aka 'Placement') attribute.
		    This attribute is a member of the 'placement' (aka 'Placement') attributeGroup. **/
		MxEnumAboveBelow getPlacement() const
		{
			return myMxAttrGrpPlacement.getPlacement();
		}

		/** Returns the internal value of the 'start-note' (aka 'StartNote') attribute.
		    This attribute is a member of the 'trill-sound' (aka 'TrillSound')
		    attributeGroup. **/
		MxEnumStartNote getStartNote() const
		{
			return myMxAttrGrpTrillSound.getStartNote();
		}

		/** Returns the internal value of the 'trill-step' (aka 'TrillStep') attribute.
		    This attribute is a member of the 'trill-sound' (aka 'TrillSound')
		    attributeGroup. **/
		MxEnumTrillStep getTrillStep() const
		{
			return myMxAttrGrpTrillSound.getTrillStep();
		}

		/** Returns the internal value of the 'two-note-turn' (aka 'TwoNoteTurn')
		    attribute. This attribute is a member of the 'trill-sound' (aka 'TrillSound')
		    attributeGroup. **/
		MxEnumTwoNoteTurn getTwoNoteTurn() const
		{
			return myMxAttrGrpTrillSound.getTwoNoteTurn();
		}

		/** Returns the internal value of the 'accelerate' (aka 'Accelerate') attribute.
		    This attribute is a member of the 'trill-sound' (aka 'TrillSound')
		    attributeGroup. **/
		MxEnumYesNo getAccelerate() const
		{
			return myMxAttrGrpTrillSound.getAccelerate();
		}

		/** Returns the internal value of the 'beats' (aka 'Beats') attribute.
		    This attribute is a member of the 'trill-sound' (aka 'TrillSound')
		    attributeGroup. **/
		MxNumberTrillBeats getBeats() const
		{
			return myMxAttrGrpTrillSound.getBeats();
		}

		/** Returns the internal value of the 'second-beat' (aka 'SecondBeat')
		    attribute. This attribute is a member of the 'trill-sound' (aka 'TrillSound')
		    attributeGroup. **/
		MxNumberPercent getSecondBeat() const
		{
			return myMxAttrGrpTrillSound.getSecondBeat();
		}

		/** Returns the internal value of the 'last-beat' (aka 'LastBeat') attribute.
		    This attribute is a member of the 'trill-sound' (aka 'TrillSound')
		    attributeGroup. **/
		MxNumberPercent getLastBeat() const
		{
			return myMxAttrGrpTrillSound.getLastBeat();
		}

/* Set Attribute Values --------------------------------------------------------------- */

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

		/** Sets the internal value of the 'placement' (aka 'Placement') attribute.
		    This attribute is a member of the 'placement' (aka 'Placement') attributeGroup. **/
		void setPlacement( const MxEnumAboveBelow& value_in )
		{
			myMxAttrGrpPlacement.setPlacement( value_in );
		}

		/** Sets the internal value of the 'start-note' (aka 'StartNote') attribute.
		    This attribute is a member of the 'trill-sound' (aka 'TrillSound')
		    attributeGroup. **/
		void setStartNote( const MxEnumStartNote& value_in )
		{
			myMxAttrGrpTrillSound.setStartNote( value_in );
		}

		/** Sets the internal value of the 'trill-step' (aka 'TrillStep') attribute.
		    This attribute is a member of the 'trill-sound' (aka 'TrillSound')
		    attributeGroup. **/
		void setTrillStep( const MxEnumTrillStep& value_in )
		{
			myMxAttrGrpTrillSound.setTrillStep( value_in );
		}

		/** Sets the internal value of the 'two-note-turn' (aka 'TwoNoteTurn')
		    attribute. This attribute is a member of the 'trill-sound' (aka 'TrillSound')
		    attributeGroup. **/
		void setTwoNoteTurn( const MxEnumTwoNoteTurn& value_in )
		{
			myMxAttrGrpTrillSound.setTwoNoteTurn( value_in );
		}

		/** Sets the internal value of the 'accelerate' (aka 'Accelerate') attribute.
		    This attribute is a member of the 'trill-sound' (aka 'TrillSound')
		    attributeGroup. **/
		void setAccelerate( const MxEnumYesNo& value_in )
		{
			myMxAttrGrpTrillSound.setAccelerate( value_in );
		}

		/** Sets the internal value of the 'beats' (aka 'Beats') attribute. This
		    attribute is a member of the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
		void setBeats( const MxNumberTrillBeats& value_in )
		{
			myMxAttrGrpTrillSound.setBeats( value_in );
		}

		/** Sets the internal value of the 'second-beat' (aka 'SecondBeat') attribute.
		    This attribute is a member of the 'trill-sound' (aka 'TrillSound')
		    attributeGroup. **/
		void setSecondBeat( const MxNumberPercent& value_in )
		{
			myMxAttrGrpTrillSound.setSecondBeat( value_in );
		}

		/** Sets the internal value of the 'last-beat' (aka 'LastBeat') attribute.
		    This attribute is a member of the 'trill-sound' (aka 'TrillSound')
		    attributeGroup. **/
		void setLastBeat( const MxNumberPercent& value_in )
		{
			myMxAttrGrpTrillSound.setLastBeat( value_in );
		}

/* Get IsAttributeRequired Values ----------------------------------------------------- */

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

		/** Indicates whether or not the 'placement' (aka 'Placement') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'placement' (aka 'Placement') attributeGroup. **/
		bool getIsPlacementRequired() const
		{
			return myMxAttrGrpPlacement.getIsPlacementRequired();
		}

		/** Indicates whether or not the 'start-note' (aka 'StartNote') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
		bool getIsStartNoteRequired() const
		{
			return myMxAttrGrpTrillSound.getIsStartNoteRequired();
		}

		/** Indicates whether or not the 'trill-step' (aka 'TrillStep') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
		bool getIsTrillStepRequired() const
		{
			return myMxAttrGrpTrillSound.getIsTrillStepRequired();
		}

		/** Indicates whether or not the 'two-note-turn' (aka 'TwoNoteTurn') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
		bool getIsTwoNoteTurnRequired() const
		{
			return myMxAttrGrpTrillSound.getIsTwoNoteTurnRequired();
		}

		/** Indicates whether or not the 'accelerate' (aka 'Accelerate') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
		bool getIsAccelerateRequired() const
		{
			return myMxAttrGrpTrillSound.getIsAccelerateRequired();
		}

		/** Indicates whether or not the 'beats' (aka 'Beats') attribute is required
		    to be present in a MusicXML document. This attribute is a member of
		    the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
		bool getIsBeatsRequired() const
		{
			return myMxAttrGrpTrillSound.getIsBeatsRequired();
		}

		/** Indicates whether or not the 'second-beat' (aka 'SecondBeat') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
		bool getIsSecondBeatRequired() const
		{
			return myMxAttrGrpTrillSound.getIsSecondBeatRequired();
		}

		/** Indicates whether or not the 'last-beat' (aka 'LastBeat') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
		bool getIsLastBeatRequired() const
		{
			return myMxAttrGrpTrillSound.getIsLastBeatRequired();
		}

/* Get IsAttributePresent Values ------------------------------------------------------ */

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

		/** Indicates whether or not the 'placement' (aka 'Placement') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'placement' (aka 'Placement') attributeGroup. **/
		bool getIsPlacementPresent() const
		{
			return myMxAttrGrpPlacement.getIsPlacementPresent();
		}

		/** Indicates whether or not the 'start-note' (aka 'StartNote') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
		bool getIsStartNotePresent() const
		{
			return myMxAttrGrpTrillSound.getIsStartNotePresent();
		}

		/** Indicates whether or not the 'trill-step' (aka 'TrillStep') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
		bool getIsTrillStepPresent() const
		{
			return myMxAttrGrpTrillSound.getIsTrillStepPresent();
		}

		/** Indicates whether or not the 'two-note-turn' (aka 'TwoNoteTurn') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
		bool getIsTwoNoteTurnPresent() const
		{
			return myMxAttrGrpTrillSound.getIsTwoNoteTurnPresent();
		}

		/** Indicates whether or not the 'accelerate' (aka 'Accelerate') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
		bool getIsAcceleratePresent() const
		{
			return myMxAttrGrpTrillSound.getIsAcceleratePresent();
		}

		/** Indicates whether or not the 'beats' (aka 'Beats') attribute is (or
		    will be) present in the MusicXML document. This attribute is a member
		    of the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
		bool getIsBeatsPresent() const
		{
			return myMxAttrGrpTrillSound.getIsBeatsPresent();
		}

		/** Indicates whether or not the 'second-beat' (aka 'SecondBeat') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
		bool getIsSecondBeatPresent() const
		{
			return myMxAttrGrpTrillSound.getIsSecondBeatPresent();
		}

		/** Indicates whether or not the 'last-beat' (aka 'LastBeat') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
		bool getIsLastBeatPresent() const
		{
			return myMxAttrGrpTrillSound.getIsLastBeatPresent();
		}

/* Set IsAttributePresent Values ------------------------------------------------------ */

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

		/** Sets the value which indicates whether or not the 'placement' (aka
		    'Placement') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'placement' (aka 'Placement') attributeGroup. **/
		void setIsPlacementPresent( const bool& value_in )
		{
			myMxAttrGrpPlacement.setIsPlacementPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'start-note' (aka
		    'StartNote') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'trill-sound' (aka 'TrillSound')
		    attributeGroup. **/
		void setIsStartNotePresent( const bool& value_in )
		{
			myMxAttrGrpTrillSound.setIsStartNotePresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'trill-step' (aka
		    'TrillStep') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'trill-sound' (aka 'TrillSound')
		    attributeGroup. **/
		void setIsTrillStepPresent( const bool& value_in )
		{
			myMxAttrGrpTrillSound.setIsTrillStepPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'two-note-turn' (aka
		    'TwoNoteTurn') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'trill-sound' (aka 'TrillSound')
		    attributeGroup. **/
		void setIsTwoNoteTurnPresent( const bool& value_in )
		{
			myMxAttrGrpTrillSound.setIsTwoNoteTurnPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'accelerate' (aka
		    'Accelerate') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'trill-sound' (aka 'TrillSound')
		    attributeGroup. **/
		void setIsAcceleratePresent( const bool& value_in )
		{
			myMxAttrGrpTrillSound.setIsAcceleratePresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'beats' (aka 'Beats')
		    attribute is (or will be) present in the MusicXML document. This attribute
		    is a member of the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
		void setIsBeatsPresent( const bool& value_in )
		{
			myMxAttrGrpTrillSound.setIsBeatsPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'second-beat' (aka
		    'SecondBeat') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'trill-sound' (aka 'TrillSound')
		    attributeGroup. **/
		void setIsSecondBeatPresent( const bool& value_in )
		{
			myMxAttrGrpTrillSound.setIsSecondBeatPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'last-beat' (aka
		    'LastBeat') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'trill-sound' (aka 'TrillSound')
		    attributeGroup. **/
		void setIsLastBeatPresent( const bool& value_in )
		{
			myMxAttrGrpTrillSound.setIsLastBeatPresent( value_in );
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
			hidden::attributeStream( getIsDefaultXPresent(), "default-x", getDefaultX().toString(), os_out, isFirst );
			hidden::attributeStream( getIsDefaultYPresent(), "default-y", getDefaultY().toString(), os_out, isFirst );
			hidden::attributeStream( getIsRelativeXPresent(), "relative-x", getRelativeX().toString(), os_out, isFirst );
			hidden::attributeStream( getIsRelativeYPresent(), "relative-y", getRelativeY().toString(), os_out, isFirst );
			hidden::attributeStream( getIsFontFamilyPresent(), "font-family", getFontFamily().toString(), os_out, isFirst );
			hidden::attributeStream( getIsFontStylePresent(), "font-style", getFontStyle().toString(), os_out, isFirst );
			hidden::attributeStream( getIsFontSizePresent(), "font-size", getFontSize().toString(), os_out, isFirst );
			hidden::attributeStream( getIsFontWeightPresent(), "font-weight", getFontWeight().toString(), os_out, isFirst );
			hidden::attributeStream( getIsColorPresent(), "color", getColor().toString(), os_out, isFirst );
			hidden::attributeStream( getIsPlacementPresent(), "placement", getPlacement().toString(), os_out, isFirst );
			hidden::attributeStream( getIsStartNotePresent(), "start-note", getStartNote().toString(), os_out, isFirst );
			hidden::attributeStream( getIsTrillStepPresent(), "trill-step", getTrillStep().toString(), os_out, isFirst );
			hidden::attributeStream( getIsTwoNoteTurnPresent(), "two-note-turn", getTwoNoteTurn().toString(), os_out, isFirst );
			hidden::attributeStream( getIsAcceleratePresent(), "accelerate", getAccelerate().toString(), os_out, isFirst );
			hidden::attributeStream( getIsBeatsPresent(), "beats", getBeats().toString(), os_out, isFirst );
			hidden::attributeStream( getIsSecondBeatPresent(), "second-beat", getSecondBeat().toString(), os_out, isFirst );
			hidden::attributeStream( getIsLastBeatPresent(), "last-beat", getLastBeat().toString(), os_out, isFirst );
			os_out << "/>";
			return os_out;
		}

/* Get IsAttributeDefaultDefined Values ----------------------------------------------- */

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

		/** Indicates whether or not the 'placement' (aka 'Placement') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'placement'
		    (aka 'Placement') attributeGroup. **/
		bool getIsPlacementDefaultDefined() const
		{
			return myMxAttrGrpPlacement.getIsPlacementDefaultDefined();
		}

		/** Indicates whether or not the 'start-note' (aka 'StartNote') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'trill-sound'
		    (aka 'TrillSound') attributeGroup. **/
		bool getIsStartNoteDefaultDefined() const
		{
			return myMxAttrGrpTrillSound.getIsStartNoteDefaultDefined();
		}

		/** Indicates whether or not the 'trill-step' (aka 'TrillStep') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'trill-sound'
		    (aka 'TrillSound') attributeGroup. **/
		bool getIsTrillStepDefaultDefined() const
		{
			return myMxAttrGrpTrillSound.getIsTrillStepDefaultDefined();
		}

		/** Indicates whether or not the 'two-note-turn' (aka 'TwoNoteTurn') has
		    a default value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'trill-sound'
		    (aka 'TrillSound') attributeGroup. **/
		bool getIsTwoNoteTurnDefaultDefined() const
		{
			return myMxAttrGrpTrillSound.getIsTwoNoteTurnDefaultDefined();
		}

		/** Indicates whether or not the 'accelerate' (aka 'Accelerate') has a
		    default value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'trill-sound'
		    (aka 'TrillSound') attributeGroup. **/
		bool getIsAccelerateDefaultDefined() const
		{
			return myMxAttrGrpTrillSound.getIsAccelerateDefaultDefined();
		}

		/** Indicates whether or not the 'beats' (aka 'Beats') has a default value
		    defined in the MusicXML xsd specification (either explicitly or in
		    the documentation). This attribute is a member of the 'trill-sound'
		    (aka 'TrillSound') attributeGroup. **/
		bool getIsBeatsDefaultDefined() const
		{
			return myMxAttrGrpTrillSound.getIsBeatsDefaultDefined();
		}

		/** Indicates whether or not the 'second-beat' (aka 'SecondBeat') has a
		    default value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'trill-sound'
		    (aka 'TrillSound') attributeGroup. **/
		bool getIsSecondBeatDefaultDefined() const
		{
			return myMxAttrGrpTrillSound.getIsSecondBeatDefaultDefined();
		}

		/** Indicates whether or not the 'last-beat' (aka 'LastBeat') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'trill-sound'
		    (aka 'TrillSound') attributeGroup. **/
		bool getIsLastBeatDefaultDefined() const
		{
			return myMxAttrGrpTrillSound.getIsLastBeatDefaultDefined();
		}

/* Get AttributeDefaultValue ---------------------------------------------------------- */

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
		    the 'placement' (aka 'Placement') attribute. This attribute is a member
		    of the 'placement' (aka 'Placement') attributeGroup. **/
		MxEnumAboveBelow getPlacementDefaultValue() const
		{
			return myMxAttrGrpPlacement.getPlacementDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'start-note' (aka 'StartNote') attribute. This attribute is a member
		    of the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
		MxEnumStartNote getStartNoteDefaultValue() const
		{
			return myMxAttrGrpTrillSound.getStartNoteDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'trill-step' (aka 'TrillStep') attribute. This attribute is a member
		    of the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
		MxEnumTrillStep getTrillStepDefaultValue() const
		{
			return myMxAttrGrpTrillSound.getTrillStepDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'two-note-turn' (aka 'TwoNoteTurn') attribute. This attribute is
		    a member of the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
		MxEnumTwoNoteTurn getTwoNoteTurnDefaultValue() const
		{
			return myMxAttrGrpTrillSound.getTwoNoteTurnDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'accelerate' (aka 'Accelerate') attribute. This attribute is a
		    member of the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
		MxEnumYesNo getAccelerateDefaultValue() const
		{
			return myMxAttrGrpTrillSound.getAccelerateDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'beats' (aka 'Beats') attribute. This attribute is a member of
		    the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
		MxNumberTrillBeats getBeatsDefaultValue() const
		{
			return myMxAttrGrpTrillSound.getBeatsDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'second-beat' (aka 'SecondBeat') attribute. This attribute is a
		    member of the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
		MxNumberPercent getSecondBeatDefaultValue() const
		{
			return myMxAttrGrpTrillSound.getSecondBeatDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'last-beat' (aka 'LastBeat') attribute. This attribute is a member
		    of the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
		MxNumberPercent getLastBeatDefaultValue() const
		{
			return myMxAttrGrpTrillSound.getLastBeatDefaultValue();
		}

	}; // struct MxCxEmptyEmptyTrillSound::Impl

	const int MxCxEmptyEmptyTrillSound::Impl::myXsdID = 2355;
	const std::string MxCxEmptyEmptyTrillSound::Impl::myXmlTypeName = "empty-trill-sound";
	const std::string MxCxEmptyEmptyTrillSound::Impl::myCppClassName = "MxCxEmptyEmptyTrillSound";
	const std::string MxCxEmptyEmptyTrillSound::Impl::myDocumentation = "The empty-trill-sound type represents an empty element with print-style, placement, and trill-sound attributes.";

} // namespace lexicon


/* MxCxEmptyEmptyTrillSound ----------------------------------------------------------- */

namespace lexicon
{

/* Constructor, Destructor, Copy, Assignment ------------------------------------------ */

	MxCxEmptyEmptyTrillSound::MxCxEmptyEmptyTrillSound( const std::string& elementName )
	:myImpl( new Impl( elementName ) ) {}

	MxCxEmptyEmptyTrillSound::~MxCxEmptyEmptyTrillSound() {}

	MxCxEmptyEmptyTrillSound::MxCxEmptyEmptyTrillSound( const MxCxEmptyEmptyTrillSound& other )
	:myImpl( new Impl( *(other.myImpl) ) ) {}

	MxCxEmptyEmptyTrillSound& MxCxEmptyEmptyTrillSound::operator=( const MxCxEmptyEmptyTrillSound& other )
	{
		this->myImpl = std::unique_ptr<Impl>( new Impl( *(other.myImpl) ) );
		return *this;
	}

/* GetSet Value and Element Name ------------------------------------------------------ */

	/** Returns the name of the Xml element employing this ComplexType. **/
	std::string MxCxEmptyEmptyTrillSound::getElementName() const
	{
		return myImpl->getElementName();
	}

/* Get Class Information -------------------------------------------------------------- */

	/** Returns the name of this xs:complexType as found in the musicxml.xsd
	    document. **/
	std::string MxCxEmptyEmptyTrillSound::getXmlTypeName() const
	{
		return myImpl->getXmlTypeName();
	}

	/** Returns the name of this C++ class. **/
	std::string MxCxEmptyEmptyTrillSound::getClassName() const
	{
		return myImpl->getClassName();
	}

	/** Returns the documentation for this musicxml type as found in the musicxml.xsd
	    document. **/
	std::string MxCxEmptyEmptyTrillSound::getDocumentation() const
	{
		return myImpl->getDocumentation();
	}

/* Get Attribute Values --------------------------------------------------------------- */

	/** Returns the internal value of the 'default-x' (aka 'DefaultX') attribute.
	    This attribute is a member of the 'print-style' (aka 'PrintStyle')
	    attributeGroup. **/
	MxNumberTenths MxCxEmptyEmptyTrillSound::getDefaultX() const
	{
		return myImpl->getDefaultX();
	}

	/** Returns the internal value of the 'default-y' (aka 'DefaultY') attribute.
	    This attribute is a member of the 'print-style' (aka 'PrintStyle')
	    attributeGroup. **/
	MxNumberTenths MxCxEmptyEmptyTrillSound::getDefaultY() const
	{
		return myImpl->getDefaultY();
	}

	/** Returns the internal value of the 'relative-x' (aka 'RelativeX') attribute.
	    This attribute is a member of the 'print-style' (aka 'PrintStyle')
	    attributeGroup. **/
	MxNumberTenths MxCxEmptyEmptyTrillSound::getRelativeX() const
	{
		return myImpl->getRelativeX();
	}

	/** Returns the internal value of the 'relative-y' (aka 'RelativeY') attribute.
	    This attribute is a member of the 'print-style' (aka 'PrintStyle')
	    attributeGroup. **/
	MxNumberTenths MxCxEmptyEmptyTrillSound::getRelativeY() const
	{
		return myImpl->getRelativeY();
	}

	/** Returns the internal value of the 'font-family' (aka 'FontFamily')
	    attribute. This attribute is a member of the 'print-style' (aka 'PrintStyle')
	    attributeGroup. **/
	MxCommaSeparatedText MxCxEmptyEmptyTrillSound::getFontFamily() const
	{
		return myImpl->getFontFamily();
	}

	/** Returns the internal value of the 'font-style' (aka 'FontStyle') attribute.
	    This attribute is a member of the 'print-style' (aka 'PrintStyle')
	    attributeGroup. **/
	MxEnumFontStyle MxCxEmptyEmptyTrillSound::getFontStyle() const
	{
		return myImpl->getFontStyle();
	}

	/** Returns the internal value of the 'font-size' (aka 'FontSize') attribute.
	    This attribute is a member of the 'print-style' (aka 'PrintStyle')
	    attributeGroup. **/
	MxFontSize MxCxEmptyEmptyTrillSound::getFontSize() const
	{
		return myImpl->getFontSize();
	}

	/** Returns the internal value of the 'font-weight' (aka 'FontWeight')
	    attribute. This attribute is a member of the 'print-style' (aka 'PrintStyle')
	    attributeGroup. **/
	MxEnumFontWeight MxCxEmptyEmptyTrillSound::getFontWeight() const
	{
		return myImpl->getFontWeight();
	}

	/** Returns the internal value of the 'color' (aka 'Color') attribute.
	    This attribute is a member of the 'print-style' (aka 'PrintStyle')
	    attributeGroup. **/
	MxColor MxCxEmptyEmptyTrillSound::getColor() const
	{
		return myImpl->getColor();
	}

	/** Returns the internal value of the 'placement' (aka 'Placement') attribute.
	    This attribute is a member of the 'placement' (aka 'Placement') attributeGroup. **/
	MxEnumAboveBelow MxCxEmptyEmptyTrillSound::getPlacement() const
	{
		return myImpl->getPlacement();
	}

	/** Returns the internal value of the 'start-note' (aka 'StartNote') attribute.
	    This attribute is a member of the 'trill-sound' (aka 'TrillSound')
	    attributeGroup. **/
	MxEnumStartNote MxCxEmptyEmptyTrillSound::getStartNote() const
	{
		return myImpl->getStartNote();
	}

	/** Returns the internal value of the 'trill-step' (aka 'TrillStep') attribute.
	    This attribute is a member of the 'trill-sound' (aka 'TrillSound')
	    attributeGroup. **/
	MxEnumTrillStep MxCxEmptyEmptyTrillSound::getTrillStep() const
	{
		return myImpl->getTrillStep();
	}

	/** Returns the internal value of the 'two-note-turn' (aka 'TwoNoteTurn')
	    attribute. This attribute is a member of the 'trill-sound' (aka 'TrillSound')
	    attributeGroup. **/
	MxEnumTwoNoteTurn MxCxEmptyEmptyTrillSound::getTwoNoteTurn() const
	{
		return myImpl->getTwoNoteTurn();
	}

	/** Returns the internal value of the 'accelerate' (aka 'Accelerate') attribute.
	    This attribute is a member of the 'trill-sound' (aka 'TrillSound')
	    attributeGroup. **/
	MxEnumYesNo MxCxEmptyEmptyTrillSound::getAccelerate() const
	{
		return myImpl->getAccelerate();
	}

	/** Returns the internal value of the 'beats' (aka 'Beats') attribute.
	    This attribute is a member of the 'trill-sound' (aka 'TrillSound')
	    attributeGroup. **/
	MxNumberTrillBeats MxCxEmptyEmptyTrillSound::getBeats() const
	{
		return myImpl->getBeats();
	}

	/** Returns the internal value of the 'second-beat' (aka 'SecondBeat')
	    attribute. This attribute is a member of the 'trill-sound' (aka 'TrillSound')
	    attributeGroup. **/
	MxNumberPercent MxCxEmptyEmptyTrillSound::getSecondBeat() const
	{
		return myImpl->getSecondBeat();
	}

	/** Returns the internal value of the 'last-beat' (aka 'LastBeat') attribute.
	    This attribute is a member of the 'trill-sound' (aka 'TrillSound')
	    attributeGroup. **/
	MxNumberPercent MxCxEmptyEmptyTrillSound::getLastBeat() const
	{
		return myImpl->getLastBeat();
	}

/* Set Attribute Values --------------------------------------------------------------- */

	/** Sets the internal value of the 'default-x' (aka 'DefaultX') attribute.
	    This attribute is a member of the 'print-style' (aka 'PrintStyle')
	    attributeGroup. **/
	void MxCxEmptyEmptyTrillSound::setDefaultX( const MxNumberTenths& value_in )
	{
		myImpl->setDefaultX( value_in );
	}

	/** Sets the internal value of the 'default-y' (aka 'DefaultY') attribute.
	    This attribute is a member of the 'print-style' (aka 'PrintStyle')
	    attributeGroup. **/
	void MxCxEmptyEmptyTrillSound::setDefaultY( const MxNumberTenths& value_in )
	{
		myImpl->setDefaultY( value_in );
	}

	/** Sets the internal value of the 'relative-x' (aka 'RelativeX') attribute.
	    This attribute is a member of the 'print-style' (aka 'PrintStyle')
	    attributeGroup. **/
	void MxCxEmptyEmptyTrillSound::setRelativeX( const MxNumberTenths& value_in )
	{
		myImpl->setRelativeX( value_in );
	}

	/** Sets the internal value of the 'relative-y' (aka 'RelativeY') attribute.
	    This attribute is a member of the 'print-style' (aka 'PrintStyle')
	    attributeGroup. **/
	void MxCxEmptyEmptyTrillSound::setRelativeY( const MxNumberTenths& value_in )
	{
		myImpl->setRelativeY( value_in );
	}

	/** Sets the internal value of the 'font-family' (aka 'FontFamily') attribute.
	    This attribute is a member of the 'print-style' (aka 'PrintStyle')
	    attributeGroup. **/
	void MxCxEmptyEmptyTrillSound::setFontFamily( const MxCommaSeparatedText& value_in )
	{
		myImpl->setFontFamily( value_in );
	}

	/** Sets the internal value of the 'font-style' (aka 'FontStyle') attribute.
	    This attribute is a member of the 'print-style' (aka 'PrintStyle')
	    attributeGroup. **/
	void MxCxEmptyEmptyTrillSound::setFontStyle( const MxEnumFontStyle& value_in )
	{
		myImpl->setFontStyle( value_in );
	}

	/** Sets the internal value of the 'font-size' (aka 'FontSize') attribute.
	    This attribute is a member of the 'print-style' (aka 'PrintStyle')
	    attributeGroup. **/
	void MxCxEmptyEmptyTrillSound::setFontSize( const MxFontSize& value_in )
	{
		myImpl->setFontSize( value_in );
	}

	/** Sets the internal value of the 'font-weight' (aka 'FontWeight') attribute.
	    This attribute is a member of the 'print-style' (aka 'PrintStyle')
	    attributeGroup. **/
	void MxCxEmptyEmptyTrillSound::setFontWeight( const MxEnumFontWeight& value_in )
	{
		myImpl->setFontWeight( value_in );
	}

	/** Sets the internal value of the 'color' (aka 'Color') attribute. This
	    attribute is a member of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	void MxCxEmptyEmptyTrillSound::setColor( const MxColor& value_in )
	{
		myImpl->setColor( value_in );
	}

	/** Sets the internal value of the 'placement' (aka 'Placement') attribute.
	    This attribute is a member of the 'placement' (aka 'Placement') attributeGroup. **/
	void MxCxEmptyEmptyTrillSound::setPlacement( const MxEnumAboveBelow& value_in )
	{
		myImpl->setPlacement( value_in );
	}

	/** Sets the internal value of the 'start-note' (aka 'StartNote') attribute.
	    This attribute is a member of the 'trill-sound' (aka 'TrillSound')
	    attributeGroup. **/
	void MxCxEmptyEmptyTrillSound::setStartNote( const MxEnumStartNote& value_in )
	{
		myImpl->setStartNote( value_in );
	}

	/** Sets the internal value of the 'trill-step' (aka 'TrillStep') attribute.
	    This attribute is a member of the 'trill-sound' (aka 'TrillSound')
	    attributeGroup. **/
	void MxCxEmptyEmptyTrillSound::setTrillStep( const MxEnumTrillStep& value_in )
	{
		myImpl->setTrillStep( value_in );
	}

	/** Sets the internal value of the 'two-note-turn' (aka 'TwoNoteTurn')
	    attribute. This attribute is a member of the 'trill-sound' (aka 'TrillSound')
	    attributeGroup. **/
	void MxCxEmptyEmptyTrillSound::setTwoNoteTurn( const MxEnumTwoNoteTurn& value_in )
	{
		myImpl->setTwoNoteTurn( value_in );
	}

	/** Sets the internal value of the 'accelerate' (aka 'Accelerate') attribute.
	    This attribute is a member of the 'trill-sound' (aka 'TrillSound')
	    attributeGroup. **/
	void MxCxEmptyEmptyTrillSound::setAccelerate( const MxEnumYesNo& value_in )
	{
		myImpl->setAccelerate( value_in );
	}

	/** Sets the internal value of the 'beats' (aka 'Beats') attribute. This
	    attribute is a member of the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
	void MxCxEmptyEmptyTrillSound::setBeats( const MxNumberTrillBeats& value_in )
	{
		myImpl->setBeats( value_in );
	}

	/** Sets the internal value of the 'second-beat' (aka 'SecondBeat') attribute.
	    This attribute is a member of the 'trill-sound' (aka 'TrillSound')
	    attributeGroup. **/
	void MxCxEmptyEmptyTrillSound::setSecondBeat( const MxNumberPercent& value_in )
	{
		myImpl->setSecondBeat( value_in );
	}

	/** Sets the internal value of the 'last-beat' (aka 'LastBeat') attribute.
	    This attribute is a member of the 'trill-sound' (aka 'TrillSound')
	    attributeGroup. **/
	void MxCxEmptyEmptyTrillSound::setLastBeat( const MxNumberPercent& value_in )
	{
		myImpl->setLastBeat( value_in );
	}

/* Get IsAttributeRequired Values ----------------------------------------------------- */

	/** Indicates whether or not the 'default-x' (aka 'DefaultX') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	bool MxCxEmptyEmptyTrillSound::getIsDefaultXRequired() const
	{
		return myImpl->getIsDefaultXRequired();
	}

	/** Indicates whether or not the 'default-y' (aka 'DefaultY') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	bool MxCxEmptyEmptyTrillSound::getIsDefaultYRequired() const
	{
		return myImpl->getIsDefaultYRequired();
	}

	/** Indicates whether or not the 'relative-x' (aka 'RelativeX') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	bool MxCxEmptyEmptyTrillSound::getIsRelativeXRequired() const
	{
		return myImpl->getIsRelativeXRequired();
	}

	/** Indicates whether or not the 'relative-y' (aka 'RelativeY') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	bool MxCxEmptyEmptyTrillSound::getIsRelativeYRequired() const
	{
		return myImpl->getIsRelativeYRequired();
	}

	/** Indicates whether or not the 'font-family' (aka 'FontFamily') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	bool MxCxEmptyEmptyTrillSound::getIsFontFamilyRequired() const
	{
		return myImpl->getIsFontFamilyRequired();
	}

	/** Indicates whether or not the 'font-style' (aka 'FontStyle') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	bool MxCxEmptyEmptyTrillSound::getIsFontStyleRequired() const
	{
		return myImpl->getIsFontStyleRequired();
	}

	/** Indicates whether or not the 'font-size' (aka 'FontSize') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	bool MxCxEmptyEmptyTrillSound::getIsFontSizeRequired() const
	{
		return myImpl->getIsFontSizeRequired();
	}

	/** Indicates whether or not the 'font-weight' (aka 'FontWeight') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	bool MxCxEmptyEmptyTrillSound::getIsFontWeightRequired() const
	{
		return myImpl->getIsFontWeightRequired();
	}

	/** Indicates whether or not the 'color' (aka 'Color') attribute is required
	    to be present in a MusicXML document. This attribute is a member of
	    the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	bool MxCxEmptyEmptyTrillSound::getIsColorRequired() const
	{
		return myImpl->getIsColorRequired();
	}

	/** Indicates whether or not the 'placement' (aka 'Placement') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'placement' (aka 'Placement') attributeGroup. **/
	bool MxCxEmptyEmptyTrillSound::getIsPlacementRequired() const
	{
		return myImpl->getIsPlacementRequired();
	}

	/** Indicates whether or not the 'start-note' (aka 'StartNote') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
	bool MxCxEmptyEmptyTrillSound::getIsStartNoteRequired() const
	{
		return myImpl->getIsStartNoteRequired();
	}

	/** Indicates whether or not the 'trill-step' (aka 'TrillStep') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
	bool MxCxEmptyEmptyTrillSound::getIsTrillStepRequired() const
	{
		return myImpl->getIsTrillStepRequired();
	}

	/** Indicates whether or not the 'two-note-turn' (aka 'TwoNoteTurn') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
	bool MxCxEmptyEmptyTrillSound::getIsTwoNoteTurnRequired() const
	{
		return myImpl->getIsTwoNoteTurnRequired();
	}

	/** Indicates whether or not the 'accelerate' (aka 'Accelerate') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
	bool MxCxEmptyEmptyTrillSound::getIsAccelerateRequired() const
	{
		return myImpl->getIsAccelerateRequired();
	}

	/** Indicates whether or not the 'beats' (aka 'Beats') attribute is required
	    to be present in a MusicXML document. This attribute is a member of
	    the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
	bool MxCxEmptyEmptyTrillSound::getIsBeatsRequired() const
	{
		return myImpl->getIsBeatsRequired();
	}

	/** Indicates whether or not the 'second-beat' (aka 'SecondBeat') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
	bool MxCxEmptyEmptyTrillSound::getIsSecondBeatRequired() const
	{
		return myImpl->getIsSecondBeatRequired();
	}

	/** Indicates whether or not the 'last-beat' (aka 'LastBeat') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
	bool MxCxEmptyEmptyTrillSound::getIsLastBeatRequired() const
	{
		return myImpl->getIsLastBeatRequired();
	}

/* Get IsAttributePresent Values ------------------------------------------------------ */

	/** Indicates whether or not the 'default-x' (aka 'DefaultX') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	bool MxCxEmptyEmptyTrillSound::getIsDefaultXPresent() const
	{
		return myImpl->getIsDefaultXPresent();
	}

	/** Indicates whether or not the 'default-y' (aka 'DefaultY') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	bool MxCxEmptyEmptyTrillSound::getIsDefaultYPresent() const
	{
		return myImpl->getIsDefaultYPresent();
	}

	/** Indicates whether or not the 'relative-x' (aka 'RelativeX') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	bool MxCxEmptyEmptyTrillSound::getIsRelativeXPresent() const
	{
		return myImpl->getIsRelativeXPresent();
	}

	/** Indicates whether or not the 'relative-y' (aka 'RelativeY') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	bool MxCxEmptyEmptyTrillSound::getIsRelativeYPresent() const
	{
		return myImpl->getIsRelativeYPresent();
	}

	/** Indicates whether or not the 'font-family' (aka 'FontFamily') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	bool MxCxEmptyEmptyTrillSound::getIsFontFamilyPresent() const
	{
		return myImpl->getIsFontFamilyPresent();
	}

	/** Indicates whether or not the 'font-style' (aka 'FontStyle') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	bool MxCxEmptyEmptyTrillSound::getIsFontStylePresent() const
	{
		return myImpl->getIsFontStylePresent();
	}

	/** Indicates whether or not the 'font-size' (aka 'FontSize') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	bool MxCxEmptyEmptyTrillSound::getIsFontSizePresent() const
	{
		return myImpl->getIsFontSizePresent();
	}

	/** Indicates whether or not the 'font-weight' (aka 'FontWeight') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	bool MxCxEmptyEmptyTrillSound::getIsFontWeightPresent() const
	{
		return myImpl->getIsFontWeightPresent();
	}

	/** Indicates whether or not the 'color' (aka 'Color') attribute is (or
	    will be) present in the MusicXML document. This attribute is a member
	    of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	bool MxCxEmptyEmptyTrillSound::getIsColorPresent() const
	{
		return myImpl->getIsColorPresent();
	}

	/** Indicates whether or not the 'placement' (aka 'Placement') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'placement' (aka 'Placement') attributeGroup. **/
	bool MxCxEmptyEmptyTrillSound::getIsPlacementPresent() const
	{
		return myImpl->getIsPlacementPresent();
	}

	/** Indicates whether or not the 'start-note' (aka 'StartNote') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
	bool MxCxEmptyEmptyTrillSound::getIsStartNotePresent() const
	{
		return myImpl->getIsStartNotePresent();
	}

	/** Indicates whether or not the 'trill-step' (aka 'TrillStep') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
	bool MxCxEmptyEmptyTrillSound::getIsTrillStepPresent() const
	{
		return myImpl->getIsTrillStepPresent();
	}

	/** Indicates whether or not the 'two-note-turn' (aka 'TwoNoteTurn') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
	bool MxCxEmptyEmptyTrillSound::getIsTwoNoteTurnPresent() const
	{
		return myImpl->getIsTwoNoteTurnPresent();
	}

	/** Indicates whether or not the 'accelerate' (aka 'Accelerate') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
	bool MxCxEmptyEmptyTrillSound::getIsAcceleratePresent() const
	{
		return myImpl->getIsAcceleratePresent();
	}

	/** Indicates whether or not the 'beats' (aka 'Beats') attribute is (or
	    will be) present in the MusicXML document. This attribute is a member
	    of the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
	bool MxCxEmptyEmptyTrillSound::getIsBeatsPresent() const
	{
		return myImpl->getIsBeatsPresent();
	}

	/** Indicates whether or not the 'second-beat' (aka 'SecondBeat') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
	bool MxCxEmptyEmptyTrillSound::getIsSecondBeatPresent() const
	{
		return myImpl->getIsSecondBeatPresent();
	}

	/** Indicates whether or not the 'last-beat' (aka 'LastBeat') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
	bool MxCxEmptyEmptyTrillSound::getIsLastBeatPresent() const
	{
		return myImpl->getIsLastBeatPresent();
	}

/* Set IsAttributePresent Values ------------------------------------------------------ */

	/** Sets the value which indicates whether or not the 'default-x' (aka
	    'DefaultX') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'print-style' (aka 'PrintStyle')
	    attributeGroup. **/
	void MxCxEmptyEmptyTrillSound::setIsDefaultXPresent( const bool& value_in )
	{
		myImpl->setIsDefaultXPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'default-y' (aka
	    'DefaultY') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'print-style' (aka 'PrintStyle')
	    attributeGroup. **/
	void MxCxEmptyEmptyTrillSound::setIsDefaultYPresent( const bool& value_in )
	{
		myImpl->setIsDefaultYPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'relative-x' (aka
	    'RelativeX') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'print-style' (aka 'PrintStyle')
	    attributeGroup. **/
	void MxCxEmptyEmptyTrillSound::setIsRelativeXPresent( const bool& value_in )
	{
		myImpl->setIsRelativeXPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'relative-y' (aka
	    'RelativeY') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'print-style' (aka 'PrintStyle')
	    attributeGroup. **/
	void MxCxEmptyEmptyTrillSound::setIsRelativeYPresent( const bool& value_in )
	{
		myImpl->setIsRelativeYPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'font-family' (aka
	    'FontFamily') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'print-style' (aka 'PrintStyle')
	    attributeGroup. **/
	void MxCxEmptyEmptyTrillSound::setIsFontFamilyPresent( const bool& value_in )
	{
		myImpl->setIsFontFamilyPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'font-style' (aka
	    'FontStyle') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'print-style' (aka 'PrintStyle')
	    attributeGroup. **/
	void MxCxEmptyEmptyTrillSound::setIsFontStylePresent( const bool& value_in )
	{
		myImpl->setIsFontStylePresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'font-size' (aka
	    'FontSize') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'print-style' (aka 'PrintStyle')
	    attributeGroup. **/
	void MxCxEmptyEmptyTrillSound::setIsFontSizePresent( const bool& value_in )
	{
		myImpl->setIsFontSizePresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'font-weight' (aka
	    'FontWeight') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'print-style' (aka 'PrintStyle')
	    attributeGroup. **/
	void MxCxEmptyEmptyTrillSound::setIsFontWeightPresent( const bool& value_in )
	{
		myImpl->setIsFontWeightPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'color' (aka 'Color')
	    attribute is (or will be) present in the MusicXML document. This attribute
	    is a member of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	void MxCxEmptyEmptyTrillSound::setIsColorPresent( const bool& value_in )
	{
		myImpl->setIsColorPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'placement' (aka
	    'Placement') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'placement' (aka 'Placement') attributeGroup. **/
	void MxCxEmptyEmptyTrillSound::setIsPlacementPresent( const bool& value_in )
	{
		myImpl->setIsPlacementPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'start-note' (aka
	    'StartNote') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'trill-sound' (aka 'TrillSound')
	    attributeGroup. **/
	void MxCxEmptyEmptyTrillSound::setIsStartNotePresent( const bool& value_in )
	{
		myImpl->setIsStartNotePresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'trill-step' (aka
	    'TrillStep') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'trill-sound' (aka 'TrillSound')
	    attributeGroup. **/
	void MxCxEmptyEmptyTrillSound::setIsTrillStepPresent( const bool& value_in )
	{
		myImpl->setIsTrillStepPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'two-note-turn' (aka
	    'TwoNoteTurn') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'trill-sound' (aka 'TrillSound')
	    attributeGroup. **/
	void MxCxEmptyEmptyTrillSound::setIsTwoNoteTurnPresent( const bool& value_in )
	{
		myImpl->setIsTwoNoteTurnPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'accelerate' (aka
	    'Accelerate') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'trill-sound' (aka 'TrillSound')
	    attributeGroup. **/
	void MxCxEmptyEmptyTrillSound::setIsAcceleratePresent( const bool& value_in )
	{
		myImpl->setIsAcceleratePresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'beats' (aka 'Beats')
	    attribute is (or will be) present in the MusicXML document. This attribute
	    is a member of the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
	void MxCxEmptyEmptyTrillSound::setIsBeatsPresent( const bool& value_in )
	{
		myImpl->setIsBeatsPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'second-beat' (aka
	    'SecondBeat') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'trill-sound' (aka 'TrillSound')
	    attributeGroup. **/
	void MxCxEmptyEmptyTrillSound::setIsSecondBeatPresent( const bool& value_in )
	{
		myImpl->setIsSecondBeatPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'last-beat' (aka
	    'LastBeat') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'trill-sound' (aka 'TrillSound')
	    attributeGroup. **/
	void MxCxEmptyEmptyTrillSound::setIsLastBeatPresent( const bool& value_in )
	{
		myImpl->setIsLastBeatPresent( value_in );
	}

/* Stringing and Streaming ------------------------------------------------------------ */

	/** Returns the xml representation of the object's value. **/
	std::string MxCxEmptyEmptyTrillSound::toString() const
	{
		return myImpl->toString();
	}

	/** Returns the xml representation of the object's value. **/
	std::ostream& MxCxEmptyEmptyTrillSound::stream( std::ostream& os_out ) const
	{
		return myImpl->stream( os_out );
	}

/* Get IsAttributeDefaultDefined Values ----------------------------------------------- */

	/** Indicates whether or not the 'default-x' (aka 'DefaultX') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'print-style'
	    (aka 'PrintStyle') attributeGroup. **/
	bool MxCxEmptyEmptyTrillSound::getIsDefaultXDefaultDefined() const
	{
		return myImpl->getIsDefaultXDefaultDefined();
	}

	/** Indicates whether or not the 'default-y' (aka 'DefaultY') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'print-style'
	    (aka 'PrintStyle') attributeGroup. **/
	bool MxCxEmptyEmptyTrillSound::getIsDefaultYDefaultDefined() const
	{
		return myImpl->getIsDefaultYDefaultDefined();
	}

	/** Indicates whether or not the 'relative-x' (aka 'RelativeX') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'print-style'
	    (aka 'PrintStyle') attributeGroup. **/
	bool MxCxEmptyEmptyTrillSound::getIsRelativeXDefaultDefined() const
	{
		return myImpl->getIsRelativeXDefaultDefined();
	}

	/** Indicates whether or not the 'relative-y' (aka 'RelativeY') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'print-style'
	    (aka 'PrintStyle') attributeGroup. **/
	bool MxCxEmptyEmptyTrillSound::getIsRelativeYDefaultDefined() const
	{
		return myImpl->getIsRelativeYDefaultDefined();
	}

	/** Indicates whether or not the 'font-family' (aka 'FontFamily') has a
	    default value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'print-style'
	    (aka 'PrintStyle') attributeGroup. **/
	bool MxCxEmptyEmptyTrillSound::getIsFontFamilyDefaultDefined() const
	{
		return myImpl->getIsFontFamilyDefaultDefined();
	}

	/** Indicates whether or not the 'font-style' (aka 'FontStyle') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'print-style'
	    (aka 'PrintStyle') attributeGroup. **/
	bool MxCxEmptyEmptyTrillSound::getIsFontStyleDefaultDefined() const
	{
		return myImpl->getIsFontStyleDefaultDefined();
	}

	/** Indicates whether or not the 'font-size' (aka 'FontSize') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'print-style'
	    (aka 'PrintStyle') attributeGroup. **/
	bool MxCxEmptyEmptyTrillSound::getIsFontSizeDefaultDefined() const
	{
		return myImpl->getIsFontSizeDefaultDefined();
	}

	/** Indicates whether or not the 'font-weight' (aka 'FontWeight') has a
	    default value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'print-style'
	    (aka 'PrintStyle') attributeGroup. **/
	bool MxCxEmptyEmptyTrillSound::getIsFontWeightDefaultDefined() const
	{
		return myImpl->getIsFontWeightDefaultDefined();
	}

	/** Indicates whether or not the 'color' (aka 'Color') has a default value
	    defined in the MusicXML xsd specification (either explicitly or in
	    the documentation). This attribute is a member of the 'print-style'
	    (aka 'PrintStyle') attributeGroup. **/
	bool MxCxEmptyEmptyTrillSound::getIsColorDefaultDefined() const
	{
		return myImpl->getIsColorDefaultDefined();
	}

	/** Indicates whether or not the 'placement' (aka 'Placement') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'placement'
	    (aka 'Placement') attributeGroup. **/
	bool MxCxEmptyEmptyTrillSound::getIsPlacementDefaultDefined() const
	{
		return myImpl->getIsPlacementDefaultDefined();
	}

	/** Indicates whether or not the 'start-note' (aka 'StartNote') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'trill-sound'
	    (aka 'TrillSound') attributeGroup. **/
	bool MxCxEmptyEmptyTrillSound::getIsStartNoteDefaultDefined() const
	{
		return myImpl->getIsStartNoteDefaultDefined();
	}

	/** Indicates whether or not the 'trill-step' (aka 'TrillStep') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'trill-sound'
	    (aka 'TrillSound') attributeGroup. **/
	bool MxCxEmptyEmptyTrillSound::getIsTrillStepDefaultDefined() const
	{
		return myImpl->getIsTrillStepDefaultDefined();
	}

	/** Indicates whether or not the 'two-note-turn' (aka 'TwoNoteTurn') has
	    a default value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'trill-sound'
	    (aka 'TrillSound') attributeGroup. **/
	bool MxCxEmptyEmptyTrillSound::getIsTwoNoteTurnDefaultDefined() const
	{
		return myImpl->getIsTwoNoteTurnDefaultDefined();
	}

	/** Indicates whether or not the 'accelerate' (aka 'Accelerate') has a
	    default value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'trill-sound'
	    (aka 'TrillSound') attributeGroup. **/
	bool MxCxEmptyEmptyTrillSound::getIsAccelerateDefaultDefined() const
	{
		return myImpl->getIsAccelerateDefaultDefined();
	}

	/** Indicates whether or not the 'beats' (aka 'Beats') has a default value
	    defined in the MusicXML xsd specification (either explicitly or in
	    the documentation). This attribute is a member of the 'trill-sound'
	    (aka 'TrillSound') attributeGroup. **/
	bool MxCxEmptyEmptyTrillSound::getIsBeatsDefaultDefined() const
	{
		return myImpl->getIsBeatsDefaultDefined();
	}

	/** Indicates whether or not the 'second-beat' (aka 'SecondBeat') has a
	    default value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'trill-sound'
	    (aka 'TrillSound') attributeGroup. **/
	bool MxCxEmptyEmptyTrillSound::getIsSecondBeatDefaultDefined() const
	{
		return myImpl->getIsSecondBeatDefaultDefined();
	}

	/** Indicates whether or not the 'last-beat' (aka 'LastBeat') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'trill-sound'
	    (aka 'TrillSound') attributeGroup. **/
	bool MxCxEmptyEmptyTrillSound::getIsLastBeatDefaultDefined() const
	{
		return myImpl->getIsLastBeatDefaultDefined();
	}

/* Get AttributeDefaultValue ---------------------------------------------------------- */

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'default-x' (aka 'DefaultX') attribute. This attribute is a member
	    of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	MxNumberTenths MxCxEmptyEmptyTrillSound::getDefaultXDefaultValue() const
	{
		return myImpl->getDefaultXDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'default-y' (aka 'DefaultY') attribute. This attribute is a member
	    of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	MxNumberTenths MxCxEmptyEmptyTrillSound::getDefaultYDefaultValue() const
	{
		return myImpl->getDefaultYDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'relative-x' (aka 'RelativeX') attribute. This attribute is a member
	    of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	MxNumberTenths MxCxEmptyEmptyTrillSound::getRelativeXDefaultValue() const
	{
		return myImpl->getRelativeXDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'relative-y' (aka 'RelativeY') attribute. This attribute is a member
	    of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	MxNumberTenths MxCxEmptyEmptyTrillSound::getRelativeYDefaultValue() const
	{
		return myImpl->getRelativeYDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'font-family' (aka 'FontFamily') attribute. This attribute is a
	    member of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	MxCommaSeparatedText MxCxEmptyEmptyTrillSound::getFontFamilyDefaultValue() const
	{
		return myImpl->getFontFamilyDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'font-style' (aka 'FontStyle') attribute. This attribute is a member
	    of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	MxEnumFontStyle MxCxEmptyEmptyTrillSound::getFontStyleDefaultValue() const
	{
		return myImpl->getFontStyleDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'font-size' (aka 'FontSize') attribute. This attribute is a member
	    of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	MxFontSize MxCxEmptyEmptyTrillSound::getFontSizeDefaultValue() const
	{
		return myImpl->getFontSizeDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'font-weight' (aka 'FontWeight') attribute. This attribute is a
	    member of the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	MxEnumFontWeight MxCxEmptyEmptyTrillSound::getFontWeightDefaultValue() const
	{
		return myImpl->getFontWeightDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'color' (aka 'Color') attribute. This attribute is a member of
	    the 'print-style' (aka 'PrintStyle') attributeGroup. **/
	MxColor MxCxEmptyEmptyTrillSound::getColorDefaultValue() const
	{
		return myImpl->getColorDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'placement' (aka 'Placement') attribute. This attribute is a member
	    of the 'placement' (aka 'Placement') attributeGroup. **/
	MxEnumAboveBelow MxCxEmptyEmptyTrillSound::getPlacementDefaultValue() const
	{
		return myImpl->getPlacementDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'start-note' (aka 'StartNote') attribute. This attribute is a member
	    of the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
	MxEnumStartNote MxCxEmptyEmptyTrillSound::getStartNoteDefaultValue() const
	{
		return myImpl->getStartNoteDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'trill-step' (aka 'TrillStep') attribute. This attribute is a member
	    of the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
	MxEnumTrillStep MxCxEmptyEmptyTrillSound::getTrillStepDefaultValue() const
	{
		return myImpl->getTrillStepDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'two-note-turn' (aka 'TwoNoteTurn') attribute. This attribute is
	    a member of the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
	MxEnumTwoNoteTurn MxCxEmptyEmptyTrillSound::getTwoNoteTurnDefaultValue() const
	{
		return myImpl->getTwoNoteTurnDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'accelerate' (aka 'Accelerate') attribute. This attribute is a
	    member of the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
	MxEnumYesNo MxCxEmptyEmptyTrillSound::getAccelerateDefaultValue() const
	{
		return myImpl->getAccelerateDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'beats' (aka 'Beats') attribute. This attribute is a member of
	    the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
	MxNumberTrillBeats MxCxEmptyEmptyTrillSound::getBeatsDefaultValue() const
	{
		return myImpl->getBeatsDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'second-beat' (aka 'SecondBeat') attribute. This attribute is a
	    member of the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
	MxNumberPercent MxCxEmptyEmptyTrillSound::getSecondBeatDefaultValue() const
	{
		return myImpl->getSecondBeatDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'last-beat' (aka 'LastBeat') attribute. This attribute is a member
	    of the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
	MxNumberPercent MxCxEmptyEmptyTrillSound::getLastBeatDefaultValue() const
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

