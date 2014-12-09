/* See MusicXML License at the bottom of this code page. */

/**
  * @file       MxCxEmptyWavyLine.cpp
  * @class      lexicon::MxCxEmptyWavyLine
  * @author     Matthew James Briggs
  * @email      matthew.james.briggs@gmail.com
  * @url        http://matthewjamesbriggs.com
  * @date       2014-12-03 16:31:27
  * @project    Lexicon
  * @version    1.0
  * @musicxmlid 2582
  * 
  * @brief The 'WavyLine' class serves as a binding for the MusicXml 'wavy-line'
  * complexType.
  * 
 **/

#include "MxCxEmptyWavyLine.h"
#include <sstream>
#include "_hidden_attributeStream.h"
#include "MxAttrGrpColor.h"
#include "MxAttrGrpPlacement.h"
#include "MxAttrGrpPosition.h"
#include "MxAttrGrpTrillSound.h"

/* Impl ------------------------------------------------------------------------------- */

namespace lexicon
{
	struct MxCxEmptyWavyLine::Impl
	{
		Impl( const std::string& elementName )
		:myElementName( elementName )
		,myType()
		,myNumber()
		,myMxAttrGrpPosition()
		,myMxAttrGrpPlacement()
		,myMxAttrGrpColor()
		,myMxAttrGrpTrillSound()
		,myIsTypePresent( true )
		,myIsNumberPresent( false )
		{}

	private:
		std::string myElementName;
		MxEnumStartStopContinue myType;
		MxNumberNumberLevel myNumber;
		MxAttrGrpPosition myMxAttrGrpPosition;
		MxAttrGrpPlacement myMxAttrGrpPlacement;
		MxAttrGrpColor myMxAttrGrpColor;
		MxAttrGrpTrillSound myMxAttrGrpTrillSound;
		bool myIsTypePresent;
		bool myIsNumberPresent;

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

		/** Returns the internal value of the 'type' (aka 'Type') attribute. **/
		MxEnumStartStopContinue getType() const
		{
			return myType;
		}

		/** Returns the internal value of the 'number' (aka 'Number') attribute. **/
		MxNumberNumberLevel getNumber() const
		{
			return myNumber;
		}

		/** Returns the internal value of the 'default-x' (aka 'DefaultX') attribute.
		    This attribute is a member of the 'position' (aka 'Position') attributeGroup. **/
		MxNumberTenths getDefaultX() const
		{
			return myMxAttrGrpPosition.getDefaultX();
		}

		/** Returns the internal value of the 'default-y' (aka 'DefaultY') attribute.
		    This attribute is a member of the 'position' (aka 'Position') attributeGroup. **/
		MxNumberTenths getDefaultY() const
		{
			return myMxAttrGrpPosition.getDefaultY();
		}

		/** Returns the internal value of the 'relative-x' (aka 'RelativeX') attribute.
		    This attribute is a member of the 'position' (aka 'Position') attributeGroup. **/
		MxNumberTenths getRelativeX() const
		{
			return myMxAttrGrpPosition.getRelativeX();
		}

		/** Returns the internal value of the 'relative-y' (aka 'RelativeY') attribute.
		    This attribute is a member of the 'position' (aka 'Position') attributeGroup. **/
		MxNumberTenths getRelativeY() const
		{
			return myMxAttrGrpPosition.getRelativeY();
		}

		/** Returns the internal value of the 'placement' (aka 'Placement') attribute.
		    This attribute is a member of the 'placement' (aka 'Placement') attributeGroup. **/
		MxEnumAboveBelow getPlacement() const
		{
			return myMxAttrGrpPlacement.getPlacement();
		}

		/** Returns the internal value of the 'color' (aka 'Color') attribute.
		    This attribute is a member of the 'color' (aka 'Color') attributeGroup. **/
		MxColor getColor() const
		{
			return myMxAttrGrpColor.getColor();
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

		/** Sets the internal value of the 'type' (aka 'Type') attribute. **/
		void setType( const MxEnumStartStopContinue& value_in )
		{
			myType = value_in;
		}

		/** Sets the internal value of the 'number' (aka 'Number') attribute. **/
		void setNumber( const MxNumberNumberLevel& value_in )
		{
			myNumber = value_in;
		}

		/** Sets the internal value of the 'default-x' (aka 'DefaultX') attribute.
		    This attribute is a member of the 'position' (aka 'Position') attributeGroup. **/
		void setDefaultX( const MxNumberTenths& value_in )
		{
			myMxAttrGrpPosition.setDefaultX( value_in );
		}

		/** Sets the internal value of the 'default-y' (aka 'DefaultY') attribute.
		    This attribute is a member of the 'position' (aka 'Position') attributeGroup. **/
		void setDefaultY( const MxNumberTenths& value_in )
		{
			myMxAttrGrpPosition.setDefaultY( value_in );
		}

		/** Sets the internal value of the 'relative-x' (aka 'RelativeX') attribute.
		    This attribute is a member of the 'position' (aka 'Position') attributeGroup. **/
		void setRelativeX( const MxNumberTenths& value_in )
		{
			myMxAttrGrpPosition.setRelativeX( value_in );
		}

		/** Sets the internal value of the 'relative-y' (aka 'RelativeY') attribute.
		    This attribute is a member of the 'position' (aka 'Position') attributeGroup. **/
		void setRelativeY( const MxNumberTenths& value_in )
		{
			myMxAttrGrpPosition.setRelativeY( value_in );
		}

		/** Sets the internal value of the 'placement' (aka 'Placement') attribute.
		    This attribute is a member of the 'placement' (aka 'Placement') attributeGroup. **/
		void setPlacement( const MxEnumAboveBelow& value_in )
		{
			myMxAttrGrpPlacement.setPlacement( value_in );
		}

		/** Sets the internal value of the 'color' (aka 'Color') attribute. This
		    attribute is a member of the 'color' (aka 'Color') attributeGroup. **/
		void setColor( const MxColor& value_in )
		{
			myMxAttrGrpColor.setColor( value_in );
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

		/** Indicates whether or not the 'default-x' (aka 'DefaultX') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'position' (aka 'Position') attributeGroup. **/
		bool getIsDefaultXRequired() const
		{
			return myMxAttrGrpPosition.getIsDefaultXRequired();
		}

		/** Indicates whether or not the 'default-y' (aka 'DefaultY') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'position' (aka 'Position') attributeGroup. **/
		bool getIsDefaultYRequired() const
		{
			return myMxAttrGrpPosition.getIsDefaultYRequired();
		}

		/** Indicates whether or not the 'relative-x' (aka 'RelativeX') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'position' (aka 'Position') attributeGroup. **/
		bool getIsRelativeXRequired() const
		{
			return myMxAttrGrpPosition.getIsRelativeXRequired();
		}

		/** Indicates whether or not the 'relative-y' (aka 'RelativeY') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'position' (aka 'Position') attributeGroup. **/
		bool getIsRelativeYRequired() const
		{
			return myMxAttrGrpPosition.getIsRelativeYRequired();
		}

		/** Indicates whether or not the 'placement' (aka 'Placement') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'placement' (aka 'Placement') attributeGroup. **/
		bool getIsPlacementRequired() const
		{
			return myMxAttrGrpPlacement.getIsPlacementRequired();
		}

		/** Indicates whether or not the 'color' (aka 'Color') attribute is required
		    to be present in a MusicXML document. This attribute is a member of
		    the 'color' (aka 'Color') attributeGroup. **/
		bool getIsColorRequired() const
		{
			return myMxAttrGrpColor.getIsColorRequired();
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

		/** Indicates whether or not the 'default-x' (aka 'DefaultX') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'position' (aka 'Position') attributeGroup. **/
		bool getIsDefaultXPresent() const
		{
			return myMxAttrGrpPosition.getIsDefaultXPresent();
		}

		/** Indicates whether or not the 'default-y' (aka 'DefaultY') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'position' (aka 'Position') attributeGroup. **/
		bool getIsDefaultYPresent() const
		{
			return myMxAttrGrpPosition.getIsDefaultYPresent();
		}

		/** Indicates whether or not the 'relative-x' (aka 'RelativeX') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'position' (aka 'Position') attributeGroup. **/
		bool getIsRelativeXPresent() const
		{
			return myMxAttrGrpPosition.getIsRelativeXPresent();
		}

		/** Indicates whether or not the 'relative-y' (aka 'RelativeY') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'position' (aka 'Position') attributeGroup. **/
		bool getIsRelativeYPresent() const
		{
			return myMxAttrGrpPosition.getIsRelativeYPresent();
		}

		/** Indicates whether or not the 'placement' (aka 'Placement') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'placement' (aka 'Placement') attributeGroup. **/
		bool getIsPlacementPresent() const
		{
			return myMxAttrGrpPlacement.getIsPlacementPresent();
		}

		/** Indicates whether or not the 'color' (aka 'Color') attribute is (or
		    will be) present in the MusicXML document. This attribute is a member
		    of the 'color' (aka 'Color') attributeGroup. **/
		bool getIsColorPresent() const
		{
			return myMxAttrGrpColor.getIsColorPresent();
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

		/** Sets the value which indicates whether or not the 'number' (aka 'Number')
		    attribute is (or will be) present in the MusicXML document. **/
		void setIsNumberPresent( const bool& value_in )
		{
			myIsNumberPresent = value_in;
		}

		/** Sets the value which indicates whether or not the 'default-x' (aka
		    'DefaultX') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'position' (aka 'Position') attributeGroup. **/
		void setIsDefaultXPresent( const bool& value_in )
		{
			myMxAttrGrpPosition.setIsDefaultXPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'default-y' (aka
		    'DefaultY') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'position' (aka 'Position') attributeGroup. **/
		void setIsDefaultYPresent( const bool& value_in )
		{
			myMxAttrGrpPosition.setIsDefaultYPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'relative-x' (aka
		    'RelativeX') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'position' (aka 'Position') attributeGroup. **/
		void setIsRelativeXPresent( const bool& value_in )
		{
			myMxAttrGrpPosition.setIsRelativeXPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'relative-y' (aka
		    'RelativeY') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'position' (aka 'Position') attributeGroup. **/
		void setIsRelativeYPresent( const bool& value_in )
		{
			myMxAttrGrpPosition.setIsRelativeYPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'placement' (aka
		    'Placement') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'placement' (aka 'Placement') attributeGroup. **/
		void setIsPlacementPresent( const bool& value_in )
		{
			myMxAttrGrpPlacement.setIsPlacementPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'color' (aka 'Color')
		    attribute is (or will be) present in the MusicXML document. This attribute
		    is a member of the 'color' (aka 'Color') attributeGroup. **/
		void setIsColorPresent( const bool& value_in )
		{
			myMxAttrGrpColor.setIsColorPresent( value_in );
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
			hidden::attributeStream( getIsTypePresent(), "type", getType().toString(), os_out, isFirst );
			hidden::attributeStream( getIsNumberPresent(), "number", getNumber().toString(), os_out, isFirst );
			hidden::attributeStream( getIsDefaultXPresent(), "default-x", getDefaultX().toString(), os_out, isFirst );
			hidden::attributeStream( getIsDefaultYPresent(), "default-y", getDefaultY().toString(), os_out, isFirst );
			hidden::attributeStream( getIsRelativeXPresent(), "relative-x", getRelativeX().toString(), os_out, isFirst );
			hidden::attributeStream( getIsRelativeYPresent(), "relative-y", getRelativeY().toString(), os_out, isFirst );
			hidden::attributeStream( getIsPlacementPresent(), "placement", getPlacement().toString(), os_out, isFirst );
			hidden::attributeStream( getIsColorPresent(), "color", getColor().toString(), os_out, isFirst );
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
			return false;
		}

		/** Indicates whether or not the 'default-x' (aka 'DefaultX') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'position'
		    (aka 'Position') attributeGroup. **/
		bool getIsDefaultXDefaultDefined() const
		{
			return myMxAttrGrpPosition.getIsDefaultXDefaultDefined();
		}

		/** Indicates whether or not the 'default-y' (aka 'DefaultY') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'position'
		    (aka 'Position') attributeGroup. **/
		bool getIsDefaultYDefaultDefined() const
		{
			return myMxAttrGrpPosition.getIsDefaultYDefaultDefined();
		}

		/** Indicates whether or not the 'relative-x' (aka 'RelativeX') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'position'
		    (aka 'Position') attributeGroup. **/
		bool getIsRelativeXDefaultDefined() const
		{
			return myMxAttrGrpPosition.getIsRelativeXDefaultDefined();
		}

		/** Indicates whether or not the 'relative-y' (aka 'RelativeY') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'position'
		    (aka 'Position') attributeGroup. **/
		bool getIsRelativeYDefaultDefined() const
		{
			return myMxAttrGrpPosition.getIsRelativeYDefaultDefined();
		}

		/** Indicates whether or not the 'placement' (aka 'Placement') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'placement'
		    (aka 'Placement') attributeGroup. **/
		bool getIsPlacementDefaultDefined() const
		{
			return myMxAttrGrpPlacement.getIsPlacementDefaultDefined();
		}

		/** Indicates whether or not the 'color' (aka 'Color') has a default value
		    defined in the MusicXML xsd specification (either explicitly or in
		    the documentation). This attribute is a member of the 'color' (aka
		    'Color') attributeGroup. **/
		bool getIsColorDefaultDefined() const
		{
			return myMxAttrGrpColor.getIsColorDefaultDefined();
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
		    the 'type' (aka 'Type') attribute. **/
		MxEnumStartStopContinue getTypeDefaultValue() const
		{
			return MxEnumStartStopContinue(  );
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'number' (aka 'Number') attribute. **/
		MxNumberNumberLevel getNumberDefaultValue() const
		{
			return MxNumberNumberLevel(  );
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'default-x' (aka 'DefaultX') attribute. This attribute is a member
		    of the 'position' (aka 'Position') attributeGroup. **/
		MxNumberTenths getDefaultXDefaultValue() const
		{
			return myMxAttrGrpPosition.getDefaultXDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'default-y' (aka 'DefaultY') attribute. This attribute is a member
		    of the 'position' (aka 'Position') attributeGroup. **/
		MxNumberTenths getDefaultYDefaultValue() const
		{
			return myMxAttrGrpPosition.getDefaultYDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'relative-x' (aka 'RelativeX') attribute. This attribute is a member
		    of the 'position' (aka 'Position') attributeGroup. **/
		MxNumberTenths getRelativeXDefaultValue() const
		{
			return myMxAttrGrpPosition.getRelativeXDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'relative-y' (aka 'RelativeY') attribute. This attribute is a member
		    of the 'position' (aka 'Position') attributeGroup. **/
		MxNumberTenths getRelativeYDefaultValue() const
		{
			return myMxAttrGrpPosition.getRelativeYDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'placement' (aka 'Placement') attribute. This attribute is a member
		    of the 'placement' (aka 'Placement') attributeGroup. **/
		MxEnumAboveBelow getPlacementDefaultValue() const
		{
			return myMxAttrGrpPlacement.getPlacementDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'color' (aka 'Color') attribute. This attribute is a member of
		    the 'color' (aka 'Color') attributeGroup. **/
		MxColor getColorDefaultValue() const
		{
			return myMxAttrGrpColor.getColorDefaultValue();
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

	}; // struct MxCxEmptyWavyLine::Impl

	const int MxCxEmptyWavyLine::Impl::myXsdID = 2582;
	const std::string MxCxEmptyWavyLine::Impl::myXmlTypeName = "wavy-line";
	const std::string MxCxEmptyWavyLine::Impl::myCppClassName = "MxCxEmptyWavyLine";
	const std::string MxCxEmptyWavyLine::Impl::myDocumentation = "Wavy lines are one way to indicate trills. When used with a measure element, they should always have type='continue' set.";

} // namespace lexicon


/* MxCxEmptyWavyLine ------------------------------------------------------------------ */

namespace lexicon
{

/* Constructor, Destructor, Copy, Assignment ------------------------------------------ */

	MxCxEmptyWavyLine::MxCxEmptyWavyLine( const std::string& elementName )
	:myImpl( new Impl( elementName ) ) {}

	MxCxEmptyWavyLine::~MxCxEmptyWavyLine() {}

	MxCxEmptyWavyLine::MxCxEmptyWavyLine( const MxCxEmptyWavyLine& other )
	:myImpl( new Impl( *(other.myImpl) ) ) {}

	MxCxEmptyWavyLine& MxCxEmptyWavyLine::operator=( const MxCxEmptyWavyLine& other )
	{
		this->myImpl = std::unique_ptr<Impl>( new Impl( *(other.myImpl) ) );
		return *this;
	}

/* GetSet Value and Element Name ------------------------------------------------------ */

	/** Returns the name of the Xml element employing this ComplexType. **/
	std::string MxCxEmptyWavyLine::getElementName() const
	{
		return myImpl->getElementName();
	}

/* Get Class Information -------------------------------------------------------------- */

	/** Returns the name of this xs:complexType as found in the musicxml.xsd
	    document. **/
	std::string MxCxEmptyWavyLine::getXmlTypeName() const
	{
		return myImpl->getXmlTypeName();
	}

	/** Returns the name of this C++ class. **/
	std::string MxCxEmptyWavyLine::getClassName() const
	{
		return myImpl->getClassName();
	}

	/** Returns the documentation for this musicxml type as found in the musicxml.xsd
	    document. **/
	std::string MxCxEmptyWavyLine::getDocumentation() const
	{
		return myImpl->getDocumentation();
	}

/* Get Attribute Values --------------------------------------------------------------- */

	/** Returns the internal value of the 'type' (aka 'Type') attribute. **/
	MxEnumStartStopContinue MxCxEmptyWavyLine::getType() const
	{
		return myImpl->getType();
	}

	/** Returns the internal value of the 'number' (aka 'Number') attribute. **/
	MxNumberNumberLevel MxCxEmptyWavyLine::getNumber() const
	{
		return myImpl->getNumber();
	}

	/** Returns the internal value of the 'default-x' (aka 'DefaultX') attribute.
	    This attribute is a member of the 'position' (aka 'Position') attributeGroup. **/
	MxNumberTenths MxCxEmptyWavyLine::getDefaultX() const
	{
		return myImpl->getDefaultX();
	}

	/** Returns the internal value of the 'default-y' (aka 'DefaultY') attribute.
	    This attribute is a member of the 'position' (aka 'Position') attributeGroup. **/
	MxNumberTenths MxCxEmptyWavyLine::getDefaultY() const
	{
		return myImpl->getDefaultY();
	}

	/** Returns the internal value of the 'relative-x' (aka 'RelativeX') attribute.
	    This attribute is a member of the 'position' (aka 'Position') attributeGroup. **/
	MxNumberTenths MxCxEmptyWavyLine::getRelativeX() const
	{
		return myImpl->getRelativeX();
	}

	/** Returns the internal value of the 'relative-y' (aka 'RelativeY') attribute.
	    This attribute is a member of the 'position' (aka 'Position') attributeGroup. **/
	MxNumberTenths MxCxEmptyWavyLine::getRelativeY() const
	{
		return myImpl->getRelativeY();
	}

	/** Returns the internal value of the 'placement' (aka 'Placement') attribute.
	    This attribute is a member of the 'placement' (aka 'Placement') attributeGroup. **/
	MxEnumAboveBelow MxCxEmptyWavyLine::getPlacement() const
	{
		return myImpl->getPlacement();
	}

	/** Returns the internal value of the 'color' (aka 'Color') attribute.
	    This attribute is a member of the 'color' (aka 'Color') attributeGroup. **/
	MxColor MxCxEmptyWavyLine::getColor() const
	{
		return myImpl->getColor();
	}

	/** Returns the internal value of the 'start-note' (aka 'StartNote') attribute.
	    This attribute is a member of the 'trill-sound' (aka 'TrillSound')
	    attributeGroup. **/
	MxEnumStartNote MxCxEmptyWavyLine::getStartNote() const
	{
		return myImpl->getStartNote();
	}

	/** Returns the internal value of the 'trill-step' (aka 'TrillStep') attribute.
	    This attribute is a member of the 'trill-sound' (aka 'TrillSound')
	    attributeGroup. **/
	MxEnumTrillStep MxCxEmptyWavyLine::getTrillStep() const
	{
		return myImpl->getTrillStep();
	}

	/** Returns the internal value of the 'two-note-turn' (aka 'TwoNoteTurn')
	    attribute. This attribute is a member of the 'trill-sound' (aka 'TrillSound')
	    attributeGroup. **/
	MxEnumTwoNoteTurn MxCxEmptyWavyLine::getTwoNoteTurn() const
	{
		return myImpl->getTwoNoteTurn();
	}

	/** Returns the internal value of the 'accelerate' (aka 'Accelerate') attribute.
	    This attribute is a member of the 'trill-sound' (aka 'TrillSound')
	    attributeGroup. **/
	MxEnumYesNo MxCxEmptyWavyLine::getAccelerate() const
	{
		return myImpl->getAccelerate();
	}

	/** Returns the internal value of the 'beats' (aka 'Beats') attribute.
	    This attribute is a member of the 'trill-sound' (aka 'TrillSound')
	    attributeGroup. **/
	MxNumberTrillBeats MxCxEmptyWavyLine::getBeats() const
	{
		return myImpl->getBeats();
	}

	/** Returns the internal value of the 'second-beat' (aka 'SecondBeat')
	    attribute. This attribute is a member of the 'trill-sound' (aka 'TrillSound')
	    attributeGroup. **/
	MxNumberPercent MxCxEmptyWavyLine::getSecondBeat() const
	{
		return myImpl->getSecondBeat();
	}

	/** Returns the internal value of the 'last-beat' (aka 'LastBeat') attribute.
	    This attribute is a member of the 'trill-sound' (aka 'TrillSound')
	    attributeGroup. **/
	MxNumberPercent MxCxEmptyWavyLine::getLastBeat() const
	{
		return myImpl->getLastBeat();
	}

/* Set Attribute Values --------------------------------------------------------------- */

	/** Sets the internal value of the 'type' (aka 'Type') attribute. **/
	void MxCxEmptyWavyLine::setType( const MxEnumStartStopContinue& value_in )
	{
		myImpl->setType( value_in );
	}

	/** Sets the internal value of the 'number' (aka 'Number') attribute. **/
	void MxCxEmptyWavyLine::setNumber( const MxNumberNumberLevel& value_in )
	{
		myImpl->setNumber( value_in );
	}

	/** Sets the internal value of the 'default-x' (aka 'DefaultX') attribute.
	    This attribute is a member of the 'position' (aka 'Position') attributeGroup. **/
	void MxCxEmptyWavyLine::setDefaultX( const MxNumberTenths& value_in )
	{
		myImpl->setDefaultX( value_in );
	}

	/** Sets the internal value of the 'default-y' (aka 'DefaultY') attribute.
	    This attribute is a member of the 'position' (aka 'Position') attributeGroup. **/
	void MxCxEmptyWavyLine::setDefaultY( const MxNumberTenths& value_in )
	{
		myImpl->setDefaultY( value_in );
	}

	/** Sets the internal value of the 'relative-x' (aka 'RelativeX') attribute.
	    This attribute is a member of the 'position' (aka 'Position') attributeGroup. **/
	void MxCxEmptyWavyLine::setRelativeX( const MxNumberTenths& value_in )
	{
		myImpl->setRelativeX( value_in );
	}

	/** Sets the internal value of the 'relative-y' (aka 'RelativeY') attribute.
	    This attribute is a member of the 'position' (aka 'Position') attributeGroup. **/
	void MxCxEmptyWavyLine::setRelativeY( const MxNumberTenths& value_in )
	{
		myImpl->setRelativeY( value_in );
	}

	/** Sets the internal value of the 'placement' (aka 'Placement') attribute.
	    This attribute is a member of the 'placement' (aka 'Placement') attributeGroup. **/
	void MxCxEmptyWavyLine::setPlacement( const MxEnumAboveBelow& value_in )
	{
		myImpl->setPlacement( value_in );
	}

	/** Sets the internal value of the 'color' (aka 'Color') attribute. This
	    attribute is a member of the 'color' (aka 'Color') attributeGroup. **/
	void MxCxEmptyWavyLine::setColor( const MxColor& value_in )
	{
		myImpl->setColor( value_in );
	}

	/** Sets the internal value of the 'start-note' (aka 'StartNote') attribute.
	    This attribute is a member of the 'trill-sound' (aka 'TrillSound')
	    attributeGroup. **/
	void MxCxEmptyWavyLine::setStartNote( const MxEnumStartNote& value_in )
	{
		myImpl->setStartNote( value_in );
	}

	/** Sets the internal value of the 'trill-step' (aka 'TrillStep') attribute.
	    This attribute is a member of the 'trill-sound' (aka 'TrillSound')
	    attributeGroup. **/
	void MxCxEmptyWavyLine::setTrillStep( const MxEnumTrillStep& value_in )
	{
		myImpl->setTrillStep( value_in );
	}

	/** Sets the internal value of the 'two-note-turn' (aka 'TwoNoteTurn')
	    attribute. This attribute is a member of the 'trill-sound' (aka 'TrillSound')
	    attributeGroup. **/
	void MxCxEmptyWavyLine::setTwoNoteTurn( const MxEnumTwoNoteTurn& value_in )
	{
		myImpl->setTwoNoteTurn( value_in );
	}

	/** Sets the internal value of the 'accelerate' (aka 'Accelerate') attribute.
	    This attribute is a member of the 'trill-sound' (aka 'TrillSound')
	    attributeGroup. **/
	void MxCxEmptyWavyLine::setAccelerate( const MxEnumYesNo& value_in )
	{
		myImpl->setAccelerate( value_in );
	}

	/** Sets the internal value of the 'beats' (aka 'Beats') attribute. This
	    attribute is a member of the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
	void MxCxEmptyWavyLine::setBeats( const MxNumberTrillBeats& value_in )
	{
		myImpl->setBeats( value_in );
	}

	/** Sets the internal value of the 'second-beat' (aka 'SecondBeat') attribute.
	    This attribute is a member of the 'trill-sound' (aka 'TrillSound')
	    attributeGroup. **/
	void MxCxEmptyWavyLine::setSecondBeat( const MxNumberPercent& value_in )
	{
		myImpl->setSecondBeat( value_in );
	}

	/** Sets the internal value of the 'last-beat' (aka 'LastBeat') attribute.
	    This attribute is a member of the 'trill-sound' (aka 'TrillSound')
	    attributeGroup. **/
	void MxCxEmptyWavyLine::setLastBeat( const MxNumberPercent& value_in )
	{
		myImpl->setLastBeat( value_in );
	}

/* Get IsAttributeRequired Values ----------------------------------------------------- */

	/** Indicates whether or not the 'type' (aka 'Type') attribute is required
	    to be present in a MusicXML document. **/
	bool MxCxEmptyWavyLine::getIsTypeRequired() const
	{
		return myImpl->getIsTypeRequired();
	}

	/** Indicates whether or not the 'number' (aka 'Number') attribute is required
	    to be present in a MusicXML document. **/
	bool MxCxEmptyWavyLine::getIsNumberRequired() const
	{
		return myImpl->getIsNumberRequired();
	}

	/** Indicates whether or not the 'default-x' (aka 'DefaultX') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'position' (aka 'Position') attributeGroup. **/
	bool MxCxEmptyWavyLine::getIsDefaultXRequired() const
	{
		return myImpl->getIsDefaultXRequired();
	}

	/** Indicates whether or not the 'default-y' (aka 'DefaultY') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'position' (aka 'Position') attributeGroup. **/
	bool MxCxEmptyWavyLine::getIsDefaultYRequired() const
	{
		return myImpl->getIsDefaultYRequired();
	}

	/** Indicates whether or not the 'relative-x' (aka 'RelativeX') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'position' (aka 'Position') attributeGroup. **/
	bool MxCxEmptyWavyLine::getIsRelativeXRequired() const
	{
		return myImpl->getIsRelativeXRequired();
	}

	/** Indicates whether or not the 'relative-y' (aka 'RelativeY') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'position' (aka 'Position') attributeGroup. **/
	bool MxCxEmptyWavyLine::getIsRelativeYRequired() const
	{
		return myImpl->getIsRelativeYRequired();
	}

	/** Indicates whether or not the 'placement' (aka 'Placement') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'placement' (aka 'Placement') attributeGroup. **/
	bool MxCxEmptyWavyLine::getIsPlacementRequired() const
	{
		return myImpl->getIsPlacementRequired();
	}

	/** Indicates whether or not the 'color' (aka 'Color') attribute is required
	    to be present in a MusicXML document. This attribute is a member of
	    the 'color' (aka 'Color') attributeGroup. **/
	bool MxCxEmptyWavyLine::getIsColorRequired() const
	{
		return myImpl->getIsColorRequired();
	}

	/** Indicates whether or not the 'start-note' (aka 'StartNote') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
	bool MxCxEmptyWavyLine::getIsStartNoteRequired() const
	{
		return myImpl->getIsStartNoteRequired();
	}

	/** Indicates whether or not the 'trill-step' (aka 'TrillStep') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
	bool MxCxEmptyWavyLine::getIsTrillStepRequired() const
	{
		return myImpl->getIsTrillStepRequired();
	}

	/** Indicates whether or not the 'two-note-turn' (aka 'TwoNoteTurn') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
	bool MxCxEmptyWavyLine::getIsTwoNoteTurnRequired() const
	{
		return myImpl->getIsTwoNoteTurnRequired();
	}

	/** Indicates whether or not the 'accelerate' (aka 'Accelerate') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
	bool MxCxEmptyWavyLine::getIsAccelerateRequired() const
	{
		return myImpl->getIsAccelerateRequired();
	}

	/** Indicates whether or not the 'beats' (aka 'Beats') attribute is required
	    to be present in a MusicXML document. This attribute is a member of
	    the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
	bool MxCxEmptyWavyLine::getIsBeatsRequired() const
	{
		return myImpl->getIsBeatsRequired();
	}

	/** Indicates whether or not the 'second-beat' (aka 'SecondBeat') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
	bool MxCxEmptyWavyLine::getIsSecondBeatRequired() const
	{
		return myImpl->getIsSecondBeatRequired();
	}

	/** Indicates whether or not the 'last-beat' (aka 'LastBeat') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
	bool MxCxEmptyWavyLine::getIsLastBeatRequired() const
	{
		return myImpl->getIsLastBeatRequired();
	}

/* Get IsAttributePresent Values ------------------------------------------------------ */

	/** Indicates whether or not the 'type' (aka 'Type') attribute is (or will
	    be) present in the MusicXML document. Note: because 'type' is required
	    by the MusicXML specification, getIsTypePresent will always return
	    'true'. There is no corresponding setIsTypePresent function for this
	    attribute. **/
	bool MxCxEmptyWavyLine::getIsTypePresent() const
	{
		return myImpl->getIsTypePresent();
	}

	/** Indicates whether or not the 'number' (aka 'Number') attribute is (or
	    will be) present in the MusicXML document. **/
	bool MxCxEmptyWavyLine::getIsNumberPresent() const
	{
		return myImpl->getIsNumberPresent();
	}

	/** Indicates whether or not the 'default-x' (aka 'DefaultX') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'position' (aka 'Position') attributeGroup. **/
	bool MxCxEmptyWavyLine::getIsDefaultXPresent() const
	{
		return myImpl->getIsDefaultXPresent();
	}

	/** Indicates whether or not the 'default-y' (aka 'DefaultY') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'position' (aka 'Position') attributeGroup. **/
	bool MxCxEmptyWavyLine::getIsDefaultYPresent() const
	{
		return myImpl->getIsDefaultYPresent();
	}

	/** Indicates whether or not the 'relative-x' (aka 'RelativeX') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'position' (aka 'Position') attributeGroup. **/
	bool MxCxEmptyWavyLine::getIsRelativeXPresent() const
	{
		return myImpl->getIsRelativeXPresent();
	}

	/** Indicates whether or not the 'relative-y' (aka 'RelativeY') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'position' (aka 'Position') attributeGroup. **/
	bool MxCxEmptyWavyLine::getIsRelativeYPresent() const
	{
		return myImpl->getIsRelativeYPresent();
	}

	/** Indicates whether or not the 'placement' (aka 'Placement') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'placement' (aka 'Placement') attributeGroup. **/
	bool MxCxEmptyWavyLine::getIsPlacementPresent() const
	{
		return myImpl->getIsPlacementPresent();
	}

	/** Indicates whether or not the 'color' (aka 'Color') attribute is (or
	    will be) present in the MusicXML document. This attribute is a member
	    of the 'color' (aka 'Color') attributeGroup. **/
	bool MxCxEmptyWavyLine::getIsColorPresent() const
	{
		return myImpl->getIsColorPresent();
	}

	/** Indicates whether or not the 'start-note' (aka 'StartNote') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
	bool MxCxEmptyWavyLine::getIsStartNotePresent() const
	{
		return myImpl->getIsStartNotePresent();
	}

	/** Indicates whether or not the 'trill-step' (aka 'TrillStep') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
	bool MxCxEmptyWavyLine::getIsTrillStepPresent() const
	{
		return myImpl->getIsTrillStepPresent();
	}

	/** Indicates whether or not the 'two-note-turn' (aka 'TwoNoteTurn') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
	bool MxCxEmptyWavyLine::getIsTwoNoteTurnPresent() const
	{
		return myImpl->getIsTwoNoteTurnPresent();
	}

	/** Indicates whether or not the 'accelerate' (aka 'Accelerate') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
	bool MxCxEmptyWavyLine::getIsAcceleratePresent() const
	{
		return myImpl->getIsAcceleratePresent();
	}

	/** Indicates whether or not the 'beats' (aka 'Beats') attribute is (or
	    will be) present in the MusicXML document. This attribute is a member
	    of the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
	bool MxCxEmptyWavyLine::getIsBeatsPresent() const
	{
		return myImpl->getIsBeatsPresent();
	}

	/** Indicates whether or not the 'second-beat' (aka 'SecondBeat') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
	bool MxCxEmptyWavyLine::getIsSecondBeatPresent() const
	{
		return myImpl->getIsSecondBeatPresent();
	}

	/** Indicates whether or not the 'last-beat' (aka 'LastBeat') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
	bool MxCxEmptyWavyLine::getIsLastBeatPresent() const
	{
		return myImpl->getIsLastBeatPresent();
	}

/* Set IsAttributePresent Values ------------------------------------------------------ */

	/** Sets the value which indicates whether or not the 'number' (aka 'Number')
	    attribute is (or will be) present in the MusicXML document. **/
	void MxCxEmptyWavyLine::setIsNumberPresent( const bool& value_in )
	{
		myImpl->setIsNumberPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'default-x' (aka
	    'DefaultX') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'position' (aka 'Position') attributeGroup. **/
	void MxCxEmptyWavyLine::setIsDefaultXPresent( const bool& value_in )
	{
		myImpl->setIsDefaultXPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'default-y' (aka
	    'DefaultY') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'position' (aka 'Position') attributeGroup. **/
	void MxCxEmptyWavyLine::setIsDefaultYPresent( const bool& value_in )
	{
		myImpl->setIsDefaultYPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'relative-x' (aka
	    'RelativeX') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'position' (aka 'Position') attributeGroup. **/
	void MxCxEmptyWavyLine::setIsRelativeXPresent( const bool& value_in )
	{
		myImpl->setIsRelativeXPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'relative-y' (aka
	    'RelativeY') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'position' (aka 'Position') attributeGroup. **/
	void MxCxEmptyWavyLine::setIsRelativeYPresent( const bool& value_in )
	{
		myImpl->setIsRelativeYPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'placement' (aka
	    'Placement') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'placement' (aka 'Placement') attributeGroup. **/
	void MxCxEmptyWavyLine::setIsPlacementPresent( const bool& value_in )
	{
		myImpl->setIsPlacementPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'color' (aka 'Color')
	    attribute is (or will be) present in the MusicXML document. This attribute
	    is a member of the 'color' (aka 'Color') attributeGroup. **/
	void MxCxEmptyWavyLine::setIsColorPresent( const bool& value_in )
	{
		myImpl->setIsColorPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'start-note' (aka
	    'StartNote') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'trill-sound' (aka 'TrillSound')
	    attributeGroup. **/
	void MxCxEmptyWavyLine::setIsStartNotePresent( const bool& value_in )
	{
		myImpl->setIsStartNotePresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'trill-step' (aka
	    'TrillStep') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'trill-sound' (aka 'TrillSound')
	    attributeGroup. **/
	void MxCxEmptyWavyLine::setIsTrillStepPresent( const bool& value_in )
	{
		myImpl->setIsTrillStepPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'two-note-turn' (aka
	    'TwoNoteTurn') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'trill-sound' (aka 'TrillSound')
	    attributeGroup. **/
	void MxCxEmptyWavyLine::setIsTwoNoteTurnPresent( const bool& value_in )
	{
		myImpl->setIsTwoNoteTurnPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'accelerate' (aka
	    'Accelerate') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'trill-sound' (aka 'TrillSound')
	    attributeGroup. **/
	void MxCxEmptyWavyLine::setIsAcceleratePresent( const bool& value_in )
	{
		myImpl->setIsAcceleratePresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'beats' (aka 'Beats')
	    attribute is (or will be) present in the MusicXML document. This attribute
	    is a member of the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
	void MxCxEmptyWavyLine::setIsBeatsPresent( const bool& value_in )
	{
		myImpl->setIsBeatsPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'second-beat' (aka
	    'SecondBeat') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'trill-sound' (aka 'TrillSound')
	    attributeGroup. **/
	void MxCxEmptyWavyLine::setIsSecondBeatPresent( const bool& value_in )
	{
		myImpl->setIsSecondBeatPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'last-beat' (aka
	    'LastBeat') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'trill-sound' (aka 'TrillSound')
	    attributeGroup. **/
	void MxCxEmptyWavyLine::setIsLastBeatPresent( const bool& value_in )
	{
		myImpl->setIsLastBeatPresent( value_in );
	}

/* Stringing and Streaming ------------------------------------------------------------ */

	/** Returns the xml representation of the object's value. **/
	std::string MxCxEmptyWavyLine::toString() const
	{
		return myImpl->toString();
	}

	/** Returns the xml representation of the object's value. **/
	std::ostream& MxCxEmptyWavyLine::stream( std::ostream& os_out ) const
	{
		return myImpl->stream( os_out );
	}

/* Get IsAttributeDefaultDefined Values ----------------------------------------------- */

	/** Indicates whether or not the 'type' (aka 'Type') has a default value
	    defined in the MusicXML xsd specification (either explicitly or in
	    the documentation). **/
	bool MxCxEmptyWavyLine::getIsTypeDefaultDefined() const
	{
		return myImpl->getIsTypeDefaultDefined();
	}

	/** Indicates whether or not the 'number' (aka 'Number') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). **/
	bool MxCxEmptyWavyLine::getIsNumberDefaultDefined() const
	{
		return myImpl->getIsNumberDefaultDefined();
	}

	/** Indicates whether or not the 'default-x' (aka 'DefaultX') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'position'
	    (aka 'Position') attributeGroup. **/
	bool MxCxEmptyWavyLine::getIsDefaultXDefaultDefined() const
	{
		return myImpl->getIsDefaultXDefaultDefined();
	}

	/** Indicates whether or not the 'default-y' (aka 'DefaultY') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'position'
	    (aka 'Position') attributeGroup. **/
	bool MxCxEmptyWavyLine::getIsDefaultYDefaultDefined() const
	{
		return myImpl->getIsDefaultYDefaultDefined();
	}

	/** Indicates whether or not the 'relative-x' (aka 'RelativeX') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'position'
	    (aka 'Position') attributeGroup. **/
	bool MxCxEmptyWavyLine::getIsRelativeXDefaultDefined() const
	{
		return myImpl->getIsRelativeXDefaultDefined();
	}

	/** Indicates whether or not the 'relative-y' (aka 'RelativeY') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'position'
	    (aka 'Position') attributeGroup. **/
	bool MxCxEmptyWavyLine::getIsRelativeYDefaultDefined() const
	{
		return myImpl->getIsRelativeYDefaultDefined();
	}

	/** Indicates whether or not the 'placement' (aka 'Placement') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'placement'
	    (aka 'Placement') attributeGroup. **/
	bool MxCxEmptyWavyLine::getIsPlacementDefaultDefined() const
	{
		return myImpl->getIsPlacementDefaultDefined();
	}

	/** Indicates whether or not the 'color' (aka 'Color') has a default value
	    defined in the MusicXML xsd specification (either explicitly or in
	    the documentation). This attribute is a member of the 'color' (aka
	    'Color') attributeGroup. **/
	bool MxCxEmptyWavyLine::getIsColorDefaultDefined() const
	{
		return myImpl->getIsColorDefaultDefined();
	}

	/** Indicates whether or not the 'start-note' (aka 'StartNote') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'trill-sound'
	    (aka 'TrillSound') attributeGroup. **/
	bool MxCxEmptyWavyLine::getIsStartNoteDefaultDefined() const
	{
		return myImpl->getIsStartNoteDefaultDefined();
	}

	/** Indicates whether or not the 'trill-step' (aka 'TrillStep') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'trill-sound'
	    (aka 'TrillSound') attributeGroup. **/
	bool MxCxEmptyWavyLine::getIsTrillStepDefaultDefined() const
	{
		return myImpl->getIsTrillStepDefaultDefined();
	}

	/** Indicates whether or not the 'two-note-turn' (aka 'TwoNoteTurn') has
	    a default value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'trill-sound'
	    (aka 'TrillSound') attributeGroup. **/
	bool MxCxEmptyWavyLine::getIsTwoNoteTurnDefaultDefined() const
	{
		return myImpl->getIsTwoNoteTurnDefaultDefined();
	}

	/** Indicates whether or not the 'accelerate' (aka 'Accelerate') has a
	    default value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'trill-sound'
	    (aka 'TrillSound') attributeGroup. **/
	bool MxCxEmptyWavyLine::getIsAccelerateDefaultDefined() const
	{
		return myImpl->getIsAccelerateDefaultDefined();
	}

	/** Indicates whether or not the 'beats' (aka 'Beats') has a default value
	    defined in the MusicXML xsd specification (either explicitly or in
	    the documentation). This attribute is a member of the 'trill-sound'
	    (aka 'TrillSound') attributeGroup. **/
	bool MxCxEmptyWavyLine::getIsBeatsDefaultDefined() const
	{
		return myImpl->getIsBeatsDefaultDefined();
	}

	/** Indicates whether or not the 'second-beat' (aka 'SecondBeat') has a
	    default value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'trill-sound'
	    (aka 'TrillSound') attributeGroup. **/
	bool MxCxEmptyWavyLine::getIsSecondBeatDefaultDefined() const
	{
		return myImpl->getIsSecondBeatDefaultDefined();
	}

	/** Indicates whether or not the 'last-beat' (aka 'LastBeat') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'trill-sound'
	    (aka 'TrillSound') attributeGroup. **/
	bool MxCxEmptyWavyLine::getIsLastBeatDefaultDefined() const
	{
		return myImpl->getIsLastBeatDefaultDefined();
	}

/* Get AttributeDefaultValue ---------------------------------------------------------- */

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'type' (aka 'Type') attribute. **/
	MxEnumStartStopContinue MxCxEmptyWavyLine::getTypeDefaultValue() const
	{
		return myImpl->getTypeDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'number' (aka 'Number') attribute. **/
	MxNumberNumberLevel MxCxEmptyWavyLine::getNumberDefaultValue() const
	{
		return myImpl->getNumberDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'default-x' (aka 'DefaultX') attribute. This attribute is a member
	    of the 'position' (aka 'Position') attributeGroup. **/
	MxNumberTenths MxCxEmptyWavyLine::getDefaultXDefaultValue() const
	{
		return myImpl->getDefaultXDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'default-y' (aka 'DefaultY') attribute. This attribute is a member
	    of the 'position' (aka 'Position') attributeGroup. **/
	MxNumberTenths MxCxEmptyWavyLine::getDefaultYDefaultValue() const
	{
		return myImpl->getDefaultYDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'relative-x' (aka 'RelativeX') attribute. This attribute is a member
	    of the 'position' (aka 'Position') attributeGroup. **/
	MxNumberTenths MxCxEmptyWavyLine::getRelativeXDefaultValue() const
	{
		return myImpl->getRelativeXDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'relative-y' (aka 'RelativeY') attribute. This attribute is a member
	    of the 'position' (aka 'Position') attributeGroup. **/
	MxNumberTenths MxCxEmptyWavyLine::getRelativeYDefaultValue() const
	{
		return myImpl->getRelativeYDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'placement' (aka 'Placement') attribute. This attribute is a member
	    of the 'placement' (aka 'Placement') attributeGroup. **/
	MxEnumAboveBelow MxCxEmptyWavyLine::getPlacementDefaultValue() const
	{
		return myImpl->getPlacementDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'color' (aka 'Color') attribute. This attribute is a member of
	    the 'color' (aka 'Color') attributeGroup. **/
	MxColor MxCxEmptyWavyLine::getColorDefaultValue() const
	{
		return myImpl->getColorDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'start-note' (aka 'StartNote') attribute. This attribute is a member
	    of the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
	MxEnumStartNote MxCxEmptyWavyLine::getStartNoteDefaultValue() const
	{
		return myImpl->getStartNoteDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'trill-step' (aka 'TrillStep') attribute. This attribute is a member
	    of the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
	MxEnumTrillStep MxCxEmptyWavyLine::getTrillStepDefaultValue() const
	{
		return myImpl->getTrillStepDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'two-note-turn' (aka 'TwoNoteTurn') attribute. This attribute is
	    a member of the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
	MxEnumTwoNoteTurn MxCxEmptyWavyLine::getTwoNoteTurnDefaultValue() const
	{
		return myImpl->getTwoNoteTurnDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'accelerate' (aka 'Accelerate') attribute. This attribute is a
	    member of the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
	MxEnumYesNo MxCxEmptyWavyLine::getAccelerateDefaultValue() const
	{
		return myImpl->getAccelerateDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'beats' (aka 'Beats') attribute. This attribute is a member of
	    the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
	MxNumberTrillBeats MxCxEmptyWavyLine::getBeatsDefaultValue() const
	{
		return myImpl->getBeatsDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'second-beat' (aka 'SecondBeat') attribute. This attribute is a
	    member of the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
	MxNumberPercent MxCxEmptyWavyLine::getSecondBeatDefaultValue() const
	{
		return myImpl->getSecondBeatDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'last-beat' (aka 'LastBeat') attribute. This attribute is a member
	    of the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
	MxNumberPercent MxCxEmptyWavyLine::getLastBeatDefaultValue() const
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

