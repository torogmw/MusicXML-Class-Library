/* See MusicXML License at the bottom of this code page. */

/**
  * @file       MxEeWavyLine.cpp
  * @class      lexicon::MxEeWavyLine
  * @author     Matthew James Briggs
  * @email      matthew.james.briggs@gmail.com
  * @url        http://matthewjamesbriggs.com
  * @date       2014-12-05 16:47:03
  * @project    Lexicon
  * @version    1.0
  * @musicxmlid 3026
  * 
  * @brief The 'WavyLine' class serves as a binding for the MusicXml 'wavy-line'
  * element.
  * 
 **/

#include "MxEeWavyLine.h"
#include <sstream>
#include "MxCxEmptyWavyLine.h"
#include "MxAttrGrpColor.h"
#include "MxAttrGrpPlacement.h"
#include "MxAttrGrpPosition.h"
#include "MxAttrGrpTrillSound.h"

/* Impl ------------------------------------------------------------------------------- */

namespace lexicon
{
	struct MxEeWavyLine::Impl
	{
		Impl()
		:myMxCxEmptyValue( MxCxEmptyWavyLine( "wavy-line" ) )
		{}

	private:
		MxCxEmptyWavyLine myMxCxEmptyValue;

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
		MxEnumStartStopContinue getType() const
		{
			return myMxCxEmptyValue.getType();
		}

		/** Returns the internal value of the 'number' (aka 'Number') attribute. **/
		MxNumberNumberLevel getNumber() const
		{
			return myMxCxEmptyValue.getNumber();
		}

		/** Returns the internal value of the 'default-x' (aka 'DefaultX') attribute.
		    This attribute is a member of the 'position' (aka 'Position') attributeGroup. **/
		MxNumberTenths getDefaultX() const
		{
			return myMxCxEmptyValue.getDefaultX();
		}

		/** Returns the internal value of the 'default-y' (aka 'DefaultY') attribute.
		    This attribute is a member of the 'position' (aka 'Position') attributeGroup. **/
		MxNumberTenths getDefaultY() const
		{
			return myMxCxEmptyValue.getDefaultY();
		}

		/** Returns the internal value of the 'relative-x' (aka 'RelativeX') attribute.
		    This attribute is a member of the 'position' (aka 'Position') attributeGroup. **/
		MxNumberTenths getRelativeX() const
		{
			return myMxCxEmptyValue.getRelativeX();
		}

		/** Returns the internal value of the 'relative-y' (aka 'RelativeY') attribute.
		    This attribute is a member of the 'position' (aka 'Position') attributeGroup. **/
		MxNumberTenths getRelativeY() const
		{
			return myMxCxEmptyValue.getRelativeY();
		}

		/** Returns the internal value of the 'placement' (aka 'Placement') attribute.
		    This attribute is a member of the 'placement' (aka 'Placement') attributeGroup. **/
		MxEnumAboveBelow getPlacement() const
		{
			return myMxCxEmptyValue.getPlacement();
		}

		/** Returns the internal value of the 'color' (aka 'Color') attribute.
		    This attribute is a member of the 'color' (aka 'Color') attributeGroup. **/
		MxColor getColor() const
		{
			return myMxCxEmptyValue.getColor();
		}

		/** Returns the internal value of the 'start-note' (aka 'StartNote') attribute.
		    This attribute is a member of the 'trill-sound' (aka 'TrillSound')
		    attributeGroup. **/
		MxEnumStartNote getStartNote() const
		{
			return myMxCxEmptyValue.getStartNote();
		}

		/** Returns the internal value of the 'trill-step' (aka 'TrillStep') attribute.
		    This attribute is a member of the 'trill-sound' (aka 'TrillSound')
		    attributeGroup. **/
		MxEnumTrillStep getTrillStep() const
		{
			return myMxCxEmptyValue.getTrillStep();
		}

		/** Returns the internal value of the 'two-note-turn' (aka 'TwoNoteTurn')
		    attribute. This attribute is a member of the 'trill-sound' (aka 'TrillSound')
		    attributeGroup. **/
		MxEnumTwoNoteTurn getTwoNoteTurn() const
		{
			return myMxCxEmptyValue.getTwoNoteTurn();
		}

		/** Returns the internal value of the 'accelerate' (aka 'Accelerate') attribute.
		    This attribute is a member of the 'trill-sound' (aka 'TrillSound')
		    attributeGroup. **/
		MxEnumYesNo getAccelerate() const
		{
			return myMxCxEmptyValue.getAccelerate();
		}

		/** Returns the internal value of the 'beats' (aka 'Beats') attribute.
		    This attribute is a member of the 'trill-sound' (aka 'TrillSound')
		    attributeGroup. **/
		MxNumberTrillBeats getBeats() const
		{
			return myMxCxEmptyValue.getBeats();
		}

		/** Returns the internal value of the 'second-beat' (aka 'SecondBeat')
		    attribute. This attribute is a member of the 'trill-sound' (aka 'TrillSound')
		    attributeGroup. **/
		MxNumberPercent getSecondBeat() const
		{
			return myMxCxEmptyValue.getSecondBeat();
		}

		/** Returns the internal value of the 'last-beat' (aka 'LastBeat') attribute.
		    This attribute is a member of the 'trill-sound' (aka 'TrillSound')
		    attributeGroup. **/
		MxNumberPercent getLastBeat() const
		{
			return myMxCxEmptyValue.getLastBeat();
		}

/* Set Attribute Values --------------------------------------------------------------- */

		/** Sets the internal value of the 'type' (aka 'Type') attribute. **/
		void setType( const MxEnumStartStopContinue& value_in )
		{
			myMxCxEmptyValue.setType( value_in );
		}

		/** Sets the internal value of the 'number' (aka 'Number') attribute. **/
		void setNumber( const MxNumberNumberLevel& value_in )
		{
			myMxCxEmptyValue.setNumber( value_in );
		}

		/** Sets the internal value of the 'default-x' (aka 'DefaultX') attribute.
		    This attribute is a member of the 'position' (aka 'Position') attributeGroup. **/
		void setDefaultX( const MxNumberTenths& value_in )
		{
			myMxCxEmptyValue.setDefaultX( value_in );
		}

		/** Sets the internal value of the 'default-y' (aka 'DefaultY') attribute.
		    This attribute is a member of the 'position' (aka 'Position') attributeGroup. **/
		void setDefaultY( const MxNumberTenths& value_in )
		{
			myMxCxEmptyValue.setDefaultY( value_in );
		}

		/** Sets the internal value of the 'relative-x' (aka 'RelativeX') attribute.
		    This attribute is a member of the 'position' (aka 'Position') attributeGroup. **/
		void setRelativeX( const MxNumberTenths& value_in )
		{
			myMxCxEmptyValue.setRelativeX( value_in );
		}

		/** Sets the internal value of the 'relative-y' (aka 'RelativeY') attribute.
		    This attribute is a member of the 'position' (aka 'Position') attributeGroup. **/
		void setRelativeY( const MxNumberTenths& value_in )
		{
			myMxCxEmptyValue.setRelativeY( value_in );
		}

		/** Sets the internal value of the 'placement' (aka 'Placement') attribute.
		    This attribute is a member of the 'placement' (aka 'Placement') attributeGroup. **/
		void setPlacement( const MxEnumAboveBelow& value_in )
		{
			myMxCxEmptyValue.setPlacement( value_in );
		}

		/** Sets the internal value of the 'color' (aka 'Color') attribute. This
		    attribute is a member of the 'color' (aka 'Color') attributeGroup. **/
		void setColor( const MxColor& value_in )
		{
			myMxCxEmptyValue.setColor( value_in );
		}

		/** Sets the internal value of the 'start-note' (aka 'StartNote') attribute.
		    This attribute is a member of the 'trill-sound' (aka 'TrillSound')
		    attributeGroup. **/
		void setStartNote( const MxEnumStartNote& value_in )
		{
			myMxCxEmptyValue.setStartNote( value_in );
		}

		/** Sets the internal value of the 'trill-step' (aka 'TrillStep') attribute.
		    This attribute is a member of the 'trill-sound' (aka 'TrillSound')
		    attributeGroup. **/
		void setTrillStep( const MxEnumTrillStep& value_in )
		{
			myMxCxEmptyValue.setTrillStep( value_in );
		}

		/** Sets the internal value of the 'two-note-turn' (aka 'TwoNoteTurn')
		    attribute. This attribute is a member of the 'trill-sound' (aka 'TrillSound')
		    attributeGroup. **/
		void setTwoNoteTurn( const MxEnumTwoNoteTurn& value_in )
		{
			myMxCxEmptyValue.setTwoNoteTurn( value_in );
		}

		/** Sets the internal value of the 'accelerate' (aka 'Accelerate') attribute.
		    This attribute is a member of the 'trill-sound' (aka 'TrillSound')
		    attributeGroup. **/
		void setAccelerate( const MxEnumYesNo& value_in )
		{
			myMxCxEmptyValue.setAccelerate( value_in );
		}

		/** Sets the internal value of the 'beats' (aka 'Beats') attribute. This
		    attribute is a member of the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
		void setBeats( const MxNumberTrillBeats& value_in )
		{
			myMxCxEmptyValue.setBeats( value_in );
		}

		/** Sets the internal value of the 'second-beat' (aka 'SecondBeat') attribute.
		    This attribute is a member of the 'trill-sound' (aka 'TrillSound')
		    attributeGroup. **/
		void setSecondBeat( const MxNumberPercent& value_in )
		{
			myMxCxEmptyValue.setSecondBeat( value_in );
		}

		/** Sets the internal value of the 'last-beat' (aka 'LastBeat') attribute.
		    This attribute is a member of the 'trill-sound' (aka 'TrillSound')
		    attributeGroup. **/
		void setLastBeat( const MxNumberPercent& value_in )
		{
			myMxCxEmptyValue.setLastBeat( value_in );
		}

/* Get IsAttributeRequired Values ----------------------------------------------------- */

		/** Indicates whether or not the 'type' (aka 'Type') attribute is required
		    to be present in a MusicXML document. **/
		bool getIsTypeRequired() const
		{
			return myMxCxEmptyValue.getIsTypeRequired();
		}

		/** Indicates whether or not the 'number' (aka 'Number') attribute is required
		    to be present in a MusicXML document. **/
		bool getIsNumberRequired() const
		{
			return myMxCxEmptyValue.getIsNumberRequired();
		}

		/** Indicates whether or not the 'default-x' (aka 'DefaultX') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'position' (aka 'Position') attributeGroup. **/
		bool getIsDefaultXRequired() const
		{
			return myMxCxEmptyValue.getIsDefaultXRequired();
		}

		/** Indicates whether or not the 'default-y' (aka 'DefaultY') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'position' (aka 'Position') attributeGroup. **/
		bool getIsDefaultYRequired() const
		{
			return myMxCxEmptyValue.getIsDefaultYRequired();
		}

		/** Indicates whether or not the 'relative-x' (aka 'RelativeX') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'position' (aka 'Position') attributeGroup. **/
		bool getIsRelativeXRequired() const
		{
			return myMxCxEmptyValue.getIsRelativeXRequired();
		}

		/** Indicates whether or not the 'relative-y' (aka 'RelativeY') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'position' (aka 'Position') attributeGroup. **/
		bool getIsRelativeYRequired() const
		{
			return myMxCxEmptyValue.getIsRelativeYRequired();
		}

		/** Indicates whether or not the 'placement' (aka 'Placement') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'placement' (aka 'Placement') attributeGroup. **/
		bool getIsPlacementRequired() const
		{
			return myMxCxEmptyValue.getIsPlacementRequired();
		}

		/** Indicates whether or not the 'color' (aka 'Color') attribute is required
		    to be present in a MusicXML document. This attribute is a member of
		    the 'color' (aka 'Color') attributeGroup. **/
		bool getIsColorRequired() const
		{
			return myMxCxEmptyValue.getIsColorRequired();
		}

		/** Indicates whether or not the 'start-note' (aka 'StartNote') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
		bool getIsStartNoteRequired() const
		{
			return myMxCxEmptyValue.getIsStartNoteRequired();
		}

		/** Indicates whether or not the 'trill-step' (aka 'TrillStep') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
		bool getIsTrillStepRequired() const
		{
			return myMxCxEmptyValue.getIsTrillStepRequired();
		}

		/** Indicates whether or not the 'two-note-turn' (aka 'TwoNoteTurn') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
		bool getIsTwoNoteTurnRequired() const
		{
			return myMxCxEmptyValue.getIsTwoNoteTurnRequired();
		}

		/** Indicates whether or not the 'accelerate' (aka 'Accelerate') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
		bool getIsAccelerateRequired() const
		{
			return myMxCxEmptyValue.getIsAccelerateRequired();
		}

		/** Indicates whether or not the 'beats' (aka 'Beats') attribute is required
		    to be present in a MusicXML document. This attribute is a member of
		    the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
		bool getIsBeatsRequired() const
		{
			return myMxCxEmptyValue.getIsBeatsRequired();
		}

		/** Indicates whether or not the 'second-beat' (aka 'SecondBeat') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
		bool getIsSecondBeatRequired() const
		{
			return myMxCxEmptyValue.getIsSecondBeatRequired();
		}

		/** Indicates whether or not the 'last-beat' (aka 'LastBeat') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
		bool getIsLastBeatRequired() const
		{
			return myMxCxEmptyValue.getIsLastBeatRequired();
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

		/** Indicates whether or not the 'number' (aka 'Number') attribute is (or
		    will be) present in the MusicXML document. **/
		bool getIsNumberPresent() const
		{
			return myMxCxEmptyValue.getIsNumberPresent();
		}

		/** Indicates whether or not the 'default-x' (aka 'DefaultX') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'position' (aka 'Position') attributeGroup. **/
		bool getIsDefaultXPresent() const
		{
			return myMxCxEmptyValue.getIsDefaultXPresent();
		}

		/** Indicates whether or not the 'default-y' (aka 'DefaultY') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'position' (aka 'Position') attributeGroup. **/
		bool getIsDefaultYPresent() const
		{
			return myMxCxEmptyValue.getIsDefaultYPresent();
		}

		/** Indicates whether or not the 'relative-x' (aka 'RelativeX') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'position' (aka 'Position') attributeGroup. **/
		bool getIsRelativeXPresent() const
		{
			return myMxCxEmptyValue.getIsRelativeXPresent();
		}

		/** Indicates whether or not the 'relative-y' (aka 'RelativeY') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'position' (aka 'Position') attributeGroup. **/
		bool getIsRelativeYPresent() const
		{
			return myMxCxEmptyValue.getIsRelativeYPresent();
		}

		/** Indicates whether or not the 'placement' (aka 'Placement') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'placement' (aka 'Placement') attributeGroup. **/
		bool getIsPlacementPresent() const
		{
			return myMxCxEmptyValue.getIsPlacementPresent();
		}

		/** Indicates whether or not the 'color' (aka 'Color') attribute is (or
		    will be) present in the MusicXML document. This attribute is a member
		    of the 'color' (aka 'Color') attributeGroup. **/
		bool getIsColorPresent() const
		{
			return myMxCxEmptyValue.getIsColorPresent();
		}

		/** Indicates whether or not the 'start-note' (aka 'StartNote') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
		bool getIsStartNotePresent() const
		{
			return myMxCxEmptyValue.getIsStartNotePresent();
		}

		/** Indicates whether or not the 'trill-step' (aka 'TrillStep') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
		bool getIsTrillStepPresent() const
		{
			return myMxCxEmptyValue.getIsTrillStepPresent();
		}

		/** Indicates whether or not the 'two-note-turn' (aka 'TwoNoteTurn') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
		bool getIsTwoNoteTurnPresent() const
		{
			return myMxCxEmptyValue.getIsTwoNoteTurnPresent();
		}

		/** Indicates whether or not the 'accelerate' (aka 'Accelerate') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
		bool getIsAcceleratePresent() const
		{
			return myMxCxEmptyValue.getIsAcceleratePresent();
		}

		/** Indicates whether or not the 'beats' (aka 'Beats') attribute is (or
		    will be) present in the MusicXML document. This attribute is a member
		    of the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
		bool getIsBeatsPresent() const
		{
			return myMxCxEmptyValue.getIsBeatsPresent();
		}

		/** Indicates whether or not the 'second-beat' (aka 'SecondBeat') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
		bool getIsSecondBeatPresent() const
		{
			return myMxCxEmptyValue.getIsSecondBeatPresent();
		}

		/** Indicates whether or not the 'last-beat' (aka 'LastBeat') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
		bool getIsLastBeatPresent() const
		{
			return myMxCxEmptyValue.getIsLastBeatPresent();
		}

/* Set IsAttributePresent Values ------------------------------------------------------ */

		/** Sets the value which indicates whether or not the 'number' (aka 'Number')
		    attribute is (or will be) present in the MusicXML document. **/
		void setIsNumberPresent( const bool& value_in )
		{
			myMxCxEmptyValue.setIsNumberPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'default-x' (aka
		    'DefaultX') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'position' (aka 'Position') attributeGroup. **/
		void setIsDefaultXPresent( const bool& value_in )
		{
			myMxCxEmptyValue.setIsDefaultXPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'default-y' (aka
		    'DefaultY') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'position' (aka 'Position') attributeGroup. **/
		void setIsDefaultYPresent( const bool& value_in )
		{
			myMxCxEmptyValue.setIsDefaultYPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'relative-x' (aka
		    'RelativeX') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'position' (aka 'Position') attributeGroup. **/
		void setIsRelativeXPresent( const bool& value_in )
		{
			myMxCxEmptyValue.setIsRelativeXPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'relative-y' (aka
		    'RelativeY') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'position' (aka 'Position') attributeGroup. **/
		void setIsRelativeYPresent( const bool& value_in )
		{
			myMxCxEmptyValue.setIsRelativeYPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'placement' (aka
		    'Placement') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'placement' (aka 'Placement') attributeGroup. **/
		void setIsPlacementPresent( const bool& value_in )
		{
			myMxCxEmptyValue.setIsPlacementPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'color' (aka 'Color')
		    attribute is (or will be) present in the MusicXML document. This attribute
		    is a member of the 'color' (aka 'Color') attributeGroup. **/
		void setIsColorPresent( const bool& value_in )
		{
			myMxCxEmptyValue.setIsColorPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'start-note' (aka
		    'StartNote') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'trill-sound' (aka 'TrillSound')
		    attributeGroup. **/
		void setIsStartNotePresent( const bool& value_in )
		{
			myMxCxEmptyValue.setIsStartNotePresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'trill-step' (aka
		    'TrillStep') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'trill-sound' (aka 'TrillSound')
		    attributeGroup. **/
		void setIsTrillStepPresent( const bool& value_in )
		{
			myMxCxEmptyValue.setIsTrillStepPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'two-note-turn' (aka
		    'TwoNoteTurn') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'trill-sound' (aka 'TrillSound')
		    attributeGroup. **/
		void setIsTwoNoteTurnPresent( const bool& value_in )
		{
			myMxCxEmptyValue.setIsTwoNoteTurnPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'accelerate' (aka
		    'Accelerate') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'trill-sound' (aka 'TrillSound')
		    attributeGroup. **/
		void setIsAcceleratePresent( const bool& value_in )
		{
			myMxCxEmptyValue.setIsAcceleratePresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'beats' (aka 'Beats')
		    attribute is (or will be) present in the MusicXML document. This attribute
		    is a member of the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
		void setIsBeatsPresent( const bool& value_in )
		{
			myMxCxEmptyValue.setIsBeatsPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'second-beat' (aka
		    'SecondBeat') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'trill-sound' (aka 'TrillSound')
		    attributeGroup. **/
		void setIsSecondBeatPresent( const bool& value_in )
		{
			myMxCxEmptyValue.setIsSecondBeatPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'last-beat' (aka
		    'LastBeat') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'trill-sound' (aka 'TrillSound')
		    attributeGroup. **/
		void setIsLastBeatPresent( const bool& value_in )
		{
			myMxCxEmptyValue.setIsLastBeatPresent( value_in );
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

		/** Indicates whether or not the 'number' (aka 'Number') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). **/
		bool getIsNumberDefaultDefined() const
		{
			return myMxCxEmptyValue.getIsNumberDefaultDefined();
		}

		/** Indicates whether or not the 'default-x' (aka 'DefaultX') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'position'
		    (aka 'Position') attributeGroup. **/
		bool getIsDefaultXDefaultDefined() const
		{
			return myMxCxEmptyValue.getIsDefaultXDefaultDefined();
		}

		/** Indicates whether or not the 'default-y' (aka 'DefaultY') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'position'
		    (aka 'Position') attributeGroup. **/
		bool getIsDefaultYDefaultDefined() const
		{
			return myMxCxEmptyValue.getIsDefaultYDefaultDefined();
		}

		/** Indicates whether or not the 'relative-x' (aka 'RelativeX') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'position'
		    (aka 'Position') attributeGroup. **/
		bool getIsRelativeXDefaultDefined() const
		{
			return myMxCxEmptyValue.getIsRelativeXDefaultDefined();
		}

		/** Indicates whether or not the 'relative-y' (aka 'RelativeY') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'position'
		    (aka 'Position') attributeGroup. **/
		bool getIsRelativeYDefaultDefined() const
		{
			return myMxCxEmptyValue.getIsRelativeYDefaultDefined();
		}

		/** Indicates whether or not the 'placement' (aka 'Placement') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'placement'
		    (aka 'Placement') attributeGroup. **/
		bool getIsPlacementDefaultDefined() const
		{
			return myMxCxEmptyValue.getIsPlacementDefaultDefined();
		}

		/** Indicates whether or not the 'color' (aka 'Color') has a default value
		    defined in the MusicXML xsd specification (either explicitly or in
		    the documentation). This attribute is a member of the 'color' (aka
		    'Color') attributeGroup. **/
		bool getIsColorDefaultDefined() const
		{
			return myMxCxEmptyValue.getIsColorDefaultDefined();
		}

		/** Indicates whether or not the 'start-note' (aka 'StartNote') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'trill-sound'
		    (aka 'TrillSound') attributeGroup. **/
		bool getIsStartNoteDefaultDefined() const
		{
			return myMxCxEmptyValue.getIsStartNoteDefaultDefined();
		}

		/** Indicates whether or not the 'trill-step' (aka 'TrillStep') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'trill-sound'
		    (aka 'TrillSound') attributeGroup. **/
		bool getIsTrillStepDefaultDefined() const
		{
			return myMxCxEmptyValue.getIsTrillStepDefaultDefined();
		}

		/** Indicates whether or not the 'two-note-turn' (aka 'TwoNoteTurn') has
		    a default value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'trill-sound'
		    (aka 'TrillSound') attributeGroup. **/
		bool getIsTwoNoteTurnDefaultDefined() const
		{
			return myMxCxEmptyValue.getIsTwoNoteTurnDefaultDefined();
		}

		/** Indicates whether or not the 'accelerate' (aka 'Accelerate') has a
		    default value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'trill-sound'
		    (aka 'TrillSound') attributeGroup. **/
		bool getIsAccelerateDefaultDefined() const
		{
			return myMxCxEmptyValue.getIsAccelerateDefaultDefined();
		}

		/** Indicates whether or not the 'beats' (aka 'Beats') has a default value
		    defined in the MusicXML xsd specification (either explicitly or in
		    the documentation). This attribute is a member of the 'trill-sound'
		    (aka 'TrillSound') attributeGroup. **/
		bool getIsBeatsDefaultDefined() const
		{
			return myMxCxEmptyValue.getIsBeatsDefaultDefined();
		}

		/** Indicates whether or not the 'second-beat' (aka 'SecondBeat') has a
		    default value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'trill-sound'
		    (aka 'TrillSound') attributeGroup. **/
		bool getIsSecondBeatDefaultDefined() const
		{
			return myMxCxEmptyValue.getIsSecondBeatDefaultDefined();
		}

		/** Indicates whether or not the 'last-beat' (aka 'LastBeat') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'trill-sound'
		    (aka 'TrillSound') attributeGroup. **/
		bool getIsLastBeatDefaultDefined() const
		{
			return myMxCxEmptyValue.getIsLastBeatDefaultDefined();
		}

/* Get AttributeDefaultValue ---------------------------------------------------------- */

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'type' (aka 'Type') attribute. **/
		MxEnumStartStopContinue getTypeDefaultValue() const
		{
			return myMxCxEmptyValue.getTypeDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'number' (aka 'Number') attribute. **/
		MxNumberNumberLevel getNumberDefaultValue() const
		{
			return myMxCxEmptyValue.getNumberDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'default-x' (aka 'DefaultX') attribute. This attribute is a member
		    of the 'position' (aka 'Position') attributeGroup. **/
		MxNumberTenths getDefaultXDefaultValue() const
		{
			return myMxCxEmptyValue.getDefaultXDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'default-y' (aka 'DefaultY') attribute. This attribute is a member
		    of the 'position' (aka 'Position') attributeGroup. **/
		MxNumberTenths getDefaultYDefaultValue() const
		{
			return myMxCxEmptyValue.getDefaultYDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'relative-x' (aka 'RelativeX') attribute. This attribute is a member
		    of the 'position' (aka 'Position') attributeGroup. **/
		MxNumberTenths getRelativeXDefaultValue() const
		{
			return myMxCxEmptyValue.getRelativeXDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'relative-y' (aka 'RelativeY') attribute. This attribute is a member
		    of the 'position' (aka 'Position') attributeGroup. **/
		MxNumberTenths getRelativeYDefaultValue() const
		{
			return myMxCxEmptyValue.getRelativeYDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'placement' (aka 'Placement') attribute. This attribute is a member
		    of the 'placement' (aka 'Placement') attributeGroup. **/
		MxEnumAboveBelow getPlacementDefaultValue() const
		{
			return myMxCxEmptyValue.getPlacementDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'color' (aka 'Color') attribute. This attribute is a member of
		    the 'color' (aka 'Color') attributeGroup. **/
		MxColor getColorDefaultValue() const
		{
			return myMxCxEmptyValue.getColorDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'start-note' (aka 'StartNote') attribute. This attribute is a member
		    of the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
		MxEnumStartNote getStartNoteDefaultValue() const
		{
			return myMxCxEmptyValue.getStartNoteDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'trill-step' (aka 'TrillStep') attribute. This attribute is a member
		    of the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
		MxEnumTrillStep getTrillStepDefaultValue() const
		{
			return myMxCxEmptyValue.getTrillStepDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'two-note-turn' (aka 'TwoNoteTurn') attribute. This attribute is
		    a member of the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
		MxEnumTwoNoteTurn getTwoNoteTurnDefaultValue() const
		{
			return myMxCxEmptyValue.getTwoNoteTurnDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'accelerate' (aka 'Accelerate') attribute. This attribute is a
		    member of the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
		MxEnumYesNo getAccelerateDefaultValue() const
		{
			return myMxCxEmptyValue.getAccelerateDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'beats' (aka 'Beats') attribute. This attribute is a member of
		    the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
		MxNumberTrillBeats getBeatsDefaultValue() const
		{
			return myMxCxEmptyValue.getBeatsDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'second-beat' (aka 'SecondBeat') attribute. This attribute is a
		    member of the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
		MxNumberPercent getSecondBeatDefaultValue() const
		{
			return myMxCxEmptyValue.getSecondBeatDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'last-beat' (aka 'LastBeat') attribute. This attribute is a member
		    of the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
		MxNumberPercent getLastBeatDefaultValue() const
		{
			return myMxCxEmptyValue.getLastBeatDefaultValue();
		}

	}; // struct MxEeWavyLine::Impl

	const int MxEeWavyLine::Impl::myXsdID = 3026;
	const std::string MxEeWavyLine::Impl::myXmlTypeName = "wavy-line";
	const std::string MxEeWavyLine::Impl::myCppClassName = "MxEeWavyLine";
	const std::string MxEeWavyLine::Impl::myDocumentation = "( no documentation )";
	const int MxEeWavyLine::Impl::myMinOccurs = 0;
	const int MxEeWavyLine::Impl::myMaxOccurs = 1;
	const int MxEeWavyLine::Impl::myIsMaxOccursUnbounded = false;

} // namespace lexicon


/* MxEeWavyLine ----------------------------------------------------------------------- */

namespace lexicon
{

/* Constructor, Destructor, Copy, Assignment ------------------------------------------ */

	MxEeWavyLine::MxEeWavyLine()
	:myImpl( new Impl() ) {}

	MxEeWavyLine::~MxEeWavyLine() {}

	MxEeWavyLine::MxEeWavyLine( const MxEeWavyLine& other )
	:myImpl( new Impl( *(other.myImpl) ) ) {}

	MxEeWavyLine& MxEeWavyLine::operator=( const MxEeWavyLine& other )
	{
		this->myImpl = std::unique_ptr<Impl>( new Impl( *(other.myImpl) ) );
		return *this;
	}

/* minOccurs maxOccurs ---------------------------------------------------------------- */

	/** Returns the minOccurs value from the Music XML xsd specification. **/
	int MxEeWavyLine::getMinOccurs() const
	{
		return myImpl->getMinOccurs();
	}

	/** Returns the maxOccurs value from the Music XML xsd specification. **/
	int MxEeWavyLine::getMaxOccurs() const
	{
		return myImpl->getMaxOccurs();
	}

	/** Returns true if the maxOccurs value from the Music XML xsd specification
	    is 'unbounded'. **/
	bool MxEeWavyLine::getIsMaxOccursUnbounded() const
	{
		return myImpl->getIsMaxOccursUnbounded();
	}

/* Get Class Information -------------------------------------------------------------- */

	/** Returns the name of this xs:element as found in the musicxml.xsd document. **/
	std::string MxEeWavyLine::getXmlTypeName() const
	{
		return myImpl->getXmlTypeName();
	}

	/** Returns the name of this C++ class. **/
	std::string MxEeWavyLine::getClassName() const
	{
		return myImpl->getClassName();
	}

	/** Returns the documentation for this musicxml type as found in the musicxml.xsd
	    document. **/
	std::string MxEeWavyLine::getDocumentation() const
	{
		return myImpl->getDocumentation();
	}

/* Get Attribute Values --------------------------------------------------------------- */

	/** Returns the internal value of the 'type' (aka 'Type') attribute. **/
	MxEnumStartStopContinue MxEeWavyLine::getType() const
	{
		return myImpl->getType();
	}

	/** Returns the internal value of the 'number' (aka 'Number') attribute. **/
	MxNumberNumberLevel MxEeWavyLine::getNumber() const
	{
		return myImpl->getNumber();
	}

	/** Returns the internal value of the 'default-x' (aka 'DefaultX') attribute.
	    This attribute is a member of the 'position' (aka 'Position') attributeGroup. **/
	MxNumberTenths MxEeWavyLine::getDefaultX() const
	{
		return myImpl->getDefaultX();
	}

	/** Returns the internal value of the 'default-y' (aka 'DefaultY') attribute.
	    This attribute is a member of the 'position' (aka 'Position') attributeGroup. **/
	MxNumberTenths MxEeWavyLine::getDefaultY() const
	{
		return myImpl->getDefaultY();
	}

	/** Returns the internal value of the 'relative-x' (aka 'RelativeX') attribute.
	    This attribute is a member of the 'position' (aka 'Position') attributeGroup. **/
	MxNumberTenths MxEeWavyLine::getRelativeX() const
	{
		return myImpl->getRelativeX();
	}

	/** Returns the internal value of the 'relative-y' (aka 'RelativeY') attribute.
	    This attribute is a member of the 'position' (aka 'Position') attributeGroup. **/
	MxNumberTenths MxEeWavyLine::getRelativeY() const
	{
		return myImpl->getRelativeY();
	}

	/** Returns the internal value of the 'placement' (aka 'Placement') attribute.
	    This attribute is a member of the 'placement' (aka 'Placement') attributeGroup. **/
	MxEnumAboveBelow MxEeWavyLine::getPlacement() const
	{
		return myImpl->getPlacement();
	}

	/** Returns the internal value of the 'color' (aka 'Color') attribute.
	    This attribute is a member of the 'color' (aka 'Color') attributeGroup. **/
	MxColor MxEeWavyLine::getColor() const
	{
		return myImpl->getColor();
	}

	/** Returns the internal value of the 'start-note' (aka 'StartNote') attribute.
	    This attribute is a member of the 'trill-sound' (aka 'TrillSound')
	    attributeGroup. **/
	MxEnumStartNote MxEeWavyLine::getStartNote() const
	{
		return myImpl->getStartNote();
	}

	/** Returns the internal value of the 'trill-step' (aka 'TrillStep') attribute.
	    This attribute is a member of the 'trill-sound' (aka 'TrillSound')
	    attributeGroup. **/
	MxEnumTrillStep MxEeWavyLine::getTrillStep() const
	{
		return myImpl->getTrillStep();
	}

	/** Returns the internal value of the 'two-note-turn' (aka 'TwoNoteTurn')
	    attribute. This attribute is a member of the 'trill-sound' (aka 'TrillSound')
	    attributeGroup. **/
	MxEnumTwoNoteTurn MxEeWavyLine::getTwoNoteTurn() const
	{
		return myImpl->getTwoNoteTurn();
	}

	/** Returns the internal value of the 'accelerate' (aka 'Accelerate') attribute.
	    This attribute is a member of the 'trill-sound' (aka 'TrillSound')
	    attributeGroup. **/
	MxEnumYesNo MxEeWavyLine::getAccelerate() const
	{
		return myImpl->getAccelerate();
	}

	/** Returns the internal value of the 'beats' (aka 'Beats') attribute.
	    This attribute is a member of the 'trill-sound' (aka 'TrillSound')
	    attributeGroup. **/
	MxNumberTrillBeats MxEeWavyLine::getBeats() const
	{
		return myImpl->getBeats();
	}

	/** Returns the internal value of the 'second-beat' (aka 'SecondBeat')
	    attribute. This attribute is a member of the 'trill-sound' (aka 'TrillSound')
	    attributeGroup. **/
	MxNumberPercent MxEeWavyLine::getSecondBeat() const
	{
		return myImpl->getSecondBeat();
	}

	/** Returns the internal value of the 'last-beat' (aka 'LastBeat') attribute.
	    This attribute is a member of the 'trill-sound' (aka 'TrillSound')
	    attributeGroup. **/
	MxNumberPercent MxEeWavyLine::getLastBeat() const
	{
		return myImpl->getLastBeat();
	}

/* Set Attribute Values --------------------------------------------------------------- */

	/** Sets the internal value of the 'type' (aka 'Type') attribute. **/
	void MxEeWavyLine::setType( const MxEnumStartStopContinue& value_in )
	{
		myImpl->setType( value_in );
	}

	/** Sets the internal value of the 'number' (aka 'Number') attribute. **/
	void MxEeWavyLine::setNumber( const MxNumberNumberLevel& value_in )
	{
		myImpl->setNumber( value_in );
	}

	/** Sets the internal value of the 'default-x' (aka 'DefaultX') attribute.
	    This attribute is a member of the 'position' (aka 'Position') attributeGroup. **/
	void MxEeWavyLine::setDefaultX( const MxNumberTenths& value_in )
	{
		myImpl->setDefaultX( value_in );
	}

	/** Sets the internal value of the 'default-y' (aka 'DefaultY') attribute.
	    This attribute is a member of the 'position' (aka 'Position') attributeGroup. **/
	void MxEeWavyLine::setDefaultY( const MxNumberTenths& value_in )
	{
		myImpl->setDefaultY( value_in );
	}

	/** Sets the internal value of the 'relative-x' (aka 'RelativeX') attribute.
	    This attribute is a member of the 'position' (aka 'Position') attributeGroup. **/
	void MxEeWavyLine::setRelativeX( const MxNumberTenths& value_in )
	{
		myImpl->setRelativeX( value_in );
	}

	/** Sets the internal value of the 'relative-y' (aka 'RelativeY') attribute.
	    This attribute is a member of the 'position' (aka 'Position') attributeGroup. **/
	void MxEeWavyLine::setRelativeY( const MxNumberTenths& value_in )
	{
		myImpl->setRelativeY( value_in );
	}

	/** Sets the internal value of the 'placement' (aka 'Placement') attribute.
	    This attribute is a member of the 'placement' (aka 'Placement') attributeGroup. **/
	void MxEeWavyLine::setPlacement( const MxEnumAboveBelow& value_in )
	{
		myImpl->setPlacement( value_in );
	}

	/** Sets the internal value of the 'color' (aka 'Color') attribute. This
	    attribute is a member of the 'color' (aka 'Color') attributeGroup. **/
	void MxEeWavyLine::setColor( const MxColor& value_in )
	{
		myImpl->setColor( value_in );
	}

	/** Sets the internal value of the 'start-note' (aka 'StartNote') attribute.
	    This attribute is a member of the 'trill-sound' (aka 'TrillSound')
	    attributeGroup. **/
	void MxEeWavyLine::setStartNote( const MxEnumStartNote& value_in )
	{
		myImpl->setStartNote( value_in );
	}

	/** Sets the internal value of the 'trill-step' (aka 'TrillStep') attribute.
	    This attribute is a member of the 'trill-sound' (aka 'TrillSound')
	    attributeGroup. **/
	void MxEeWavyLine::setTrillStep( const MxEnumTrillStep& value_in )
	{
		myImpl->setTrillStep( value_in );
	}

	/** Sets the internal value of the 'two-note-turn' (aka 'TwoNoteTurn')
	    attribute. This attribute is a member of the 'trill-sound' (aka 'TrillSound')
	    attributeGroup. **/
	void MxEeWavyLine::setTwoNoteTurn( const MxEnumTwoNoteTurn& value_in )
	{
		myImpl->setTwoNoteTurn( value_in );
	}

	/** Sets the internal value of the 'accelerate' (aka 'Accelerate') attribute.
	    This attribute is a member of the 'trill-sound' (aka 'TrillSound')
	    attributeGroup. **/
	void MxEeWavyLine::setAccelerate( const MxEnumYesNo& value_in )
	{
		myImpl->setAccelerate( value_in );
	}

	/** Sets the internal value of the 'beats' (aka 'Beats') attribute. This
	    attribute is a member of the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
	void MxEeWavyLine::setBeats( const MxNumberTrillBeats& value_in )
	{
		myImpl->setBeats( value_in );
	}

	/** Sets the internal value of the 'second-beat' (aka 'SecondBeat') attribute.
	    This attribute is a member of the 'trill-sound' (aka 'TrillSound')
	    attributeGroup. **/
	void MxEeWavyLine::setSecondBeat( const MxNumberPercent& value_in )
	{
		myImpl->setSecondBeat( value_in );
	}

	/** Sets the internal value of the 'last-beat' (aka 'LastBeat') attribute.
	    This attribute is a member of the 'trill-sound' (aka 'TrillSound')
	    attributeGroup. **/
	void MxEeWavyLine::setLastBeat( const MxNumberPercent& value_in )
	{
		myImpl->setLastBeat( value_in );
	}

/* Get IsAttributeRequired Values ----------------------------------------------------- */

	/** Indicates whether or not the 'type' (aka 'Type') attribute is required
	    to be present in a MusicXML document. **/
	bool MxEeWavyLine::getIsTypeRequired() const
	{
		return myImpl->getIsTypeRequired();
	}

	/** Indicates whether or not the 'number' (aka 'Number') attribute is required
	    to be present in a MusicXML document. **/
	bool MxEeWavyLine::getIsNumberRequired() const
	{
		return myImpl->getIsNumberRequired();
	}

	/** Indicates whether or not the 'default-x' (aka 'DefaultX') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'position' (aka 'Position') attributeGroup. **/
	bool MxEeWavyLine::getIsDefaultXRequired() const
	{
		return myImpl->getIsDefaultXRequired();
	}

	/** Indicates whether or not the 'default-y' (aka 'DefaultY') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'position' (aka 'Position') attributeGroup. **/
	bool MxEeWavyLine::getIsDefaultYRequired() const
	{
		return myImpl->getIsDefaultYRequired();
	}

	/** Indicates whether or not the 'relative-x' (aka 'RelativeX') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'position' (aka 'Position') attributeGroup. **/
	bool MxEeWavyLine::getIsRelativeXRequired() const
	{
		return myImpl->getIsRelativeXRequired();
	}

	/** Indicates whether or not the 'relative-y' (aka 'RelativeY') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'position' (aka 'Position') attributeGroup. **/
	bool MxEeWavyLine::getIsRelativeYRequired() const
	{
		return myImpl->getIsRelativeYRequired();
	}

	/** Indicates whether or not the 'placement' (aka 'Placement') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'placement' (aka 'Placement') attributeGroup. **/
	bool MxEeWavyLine::getIsPlacementRequired() const
	{
		return myImpl->getIsPlacementRequired();
	}

	/** Indicates whether or not the 'color' (aka 'Color') attribute is required
	    to be present in a MusicXML document. This attribute is a member of
	    the 'color' (aka 'Color') attributeGroup. **/
	bool MxEeWavyLine::getIsColorRequired() const
	{
		return myImpl->getIsColorRequired();
	}

	/** Indicates whether or not the 'start-note' (aka 'StartNote') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
	bool MxEeWavyLine::getIsStartNoteRequired() const
	{
		return myImpl->getIsStartNoteRequired();
	}

	/** Indicates whether or not the 'trill-step' (aka 'TrillStep') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
	bool MxEeWavyLine::getIsTrillStepRequired() const
	{
		return myImpl->getIsTrillStepRequired();
	}

	/** Indicates whether or not the 'two-note-turn' (aka 'TwoNoteTurn') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
	bool MxEeWavyLine::getIsTwoNoteTurnRequired() const
	{
		return myImpl->getIsTwoNoteTurnRequired();
	}

	/** Indicates whether or not the 'accelerate' (aka 'Accelerate') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
	bool MxEeWavyLine::getIsAccelerateRequired() const
	{
		return myImpl->getIsAccelerateRequired();
	}

	/** Indicates whether or not the 'beats' (aka 'Beats') attribute is required
	    to be present in a MusicXML document. This attribute is a member of
	    the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
	bool MxEeWavyLine::getIsBeatsRequired() const
	{
		return myImpl->getIsBeatsRequired();
	}

	/** Indicates whether or not the 'second-beat' (aka 'SecondBeat') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
	bool MxEeWavyLine::getIsSecondBeatRequired() const
	{
		return myImpl->getIsSecondBeatRequired();
	}

	/** Indicates whether or not the 'last-beat' (aka 'LastBeat') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
	bool MxEeWavyLine::getIsLastBeatRequired() const
	{
		return myImpl->getIsLastBeatRequired();
	}

/* Get IsAttributePresent Values ------------------------------------------------------ */

	/** Indicates whether or not the 'type' (aka 'Type') attribute is (or will
	    be) present in the MusicXML document. Note: because 'type' is required
	    by the MusicXML specification, getIsTypePresent will always return
	    'true'. There is no corresponding setIsTypePresent function for this
	    attribute. **/
	bool MxEeWavyLine::getIsTypePresent() const
	{
		return myImpl->getIsTypePresent();
	}

	/** Indicates whether or not the 'number' (aka 'Number') attribute is (or
	    will be) present in the MusicXML document. **/
	bool MxEeWavyLine::getIsNumberPresent() const
	{
		return myImpl->getIsNumberPresent();
	}

	/** Indicates whether or not the 'default-x' (aka 'DefaultX') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'position' (aka 'Position') attributeGroup. **/
	bool MxEeWavyLine::getIsDefaultXPresent() const
	{
		return myImpl->getIsDefaultXPresent();
	}

	/** Indicates whether or not the 'default-y' (aka 'DefaultY') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'position' (aka 'Position') attributeGroup. **/
	bool MxEeWavyLine::getIsDefaultYPresent() const
	{
		return myImpl->getIsDefaultYPresent();
	}

	/** Indicates whether or not the 'relative-x' (aka 'RelativeX') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'position' (aka 'Position') attributeGroup. **/
	bool MxEeWavyLine::getIsRelativeXPresent() const
	{
		return myImpl->getIsRelativeXPresent();
	}

	/** Indicates whether or not the 'relative-y' (aka 'RelativeY') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'position' (aka 'Position') attributeGroup. **/
	bool MxEeWavyLine::getIsRelativeYPresent() const
	{
		return myImpl->getIsRelativeYPresent();
	}

	/** Indicates whether or not the 'placement' (aka 'Placement') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'placement' (aka 'Placement') attributeGroup. **/
	bool MxEeWavyLine::getIsPlacementPresent() const
	{
		return myImpl->getIsPlacementPresent();
	}

	/** Indicates whether or not the 'color' (aka 'Color') attribute is (or
	    will be) present in the MusicXML document. This attribute is a member
	    of the 'color' (aka 'Color') attributeGroup. **/
	bool MxEeWavyLine::getIsColorPresent() const
	{
		return myImpl->getIsColorPresent();
	}

	/** Indicates whether or not the 'start-note' (aka 'StartNote') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
	bool MxEeWavyLine::getIsStartNotePresent() const
	{
		return myImpl->getIsStartNotePresent();
	}

	/** Indicates whether or not the 'trill-step' (aka 'TrillStep') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
	bool MxEeWavyLine::getIsTrillStepPresent() const
	{
		return myImpl->getIsTrillStepPresent();
	}

	/** Indicates whether or not the 'two-note-turn' (aka 'TwoNoteTurn') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
	bool MxEeWavyLine::getIsTwoNoteTurnPresent() const
	{
		return myImpl->getIsTwoNoteTurnPresent();
	}

	/** Indicates whether or not the 'accelerate' (aka 'Accelerate') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
	bool MxEeWavyLine::getIsAcceleratePresent() const
	{
		return myImpl->getIsAcceleratePresent();
	}

	/** Indicates whether or not the 'beats' (aka 'Beats') attribute is (or
	    will be) present in the MusicXML document. This attribute is a member
	    of the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
	bool MxEeWavyLine::getIsBeatsPresent() const
	{
		return myImpl->getIsBeatsPresent();
	}

	/** Indicates whether or not the 'second-beat' (aka 'SecondBeat') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
	bool MxEeWavyLine::getIsSecondBeatPresent() const
	{
		return myImpl->getIsSecondBeatPresent();
	}

	/** Indicates whether or not the 'last-beat' (aka 'LastBeat') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
	bool MxEeWavyLine::getIsLastBeatPresent() const
	{
		return myImpl->getIsLastBeatPresent();
	}

/* Set IsAttributePresent Values ------------------------------------------------------ */

	/** Sets the value which indicates whether or not the 'number' (aka 'Number')
	    attribute is (or will be) present in the MusicXML document. **/
	void MxEeWavyLine::setIsNumberPresent( const bool& value_in )
	{
		myImpl->setIsNumberPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'default-x' (aka
	    'DefaultX') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'position' (aka 'Position') attributeGroup. **/
	void MxEeWavyLine::setIsDefaultXPresent( const bool& value_in )
	{
		myImpl->setIsDefaultXPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'default-y' (aka
	    'DefaultY') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'position' (aka 'Position') attributeGroup. **/
	void MxEeWavyLine::setIsDefaultYPresent( const bool& value_in )
	{
		myImpl->setIsDefaultYPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'relative-x' (aka
	    'RelativeX') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'position' (aka 'Position') attributeGroup. **/
	void MxEeWavyLine::setIsRelativeXPresent( const bool& value_in )
	{
		myImpl->setIsRelativeXPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'relative-y' (aka
	    'RelativeY') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'position' (aka 'Position') attributeGroup. **/
	void MxEeWavyLine::setIsRelativeYPresent( const bool& value_in )
	{
		myImpl->setIsRelativeYPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'placement' (aka
	    'Placement') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'placement' (aka 'Placement') attributeGroup. **/
	void MxEeWavyLine::setIsPlacementPresent( const bool& value_in )
	{
		myImpl->setIsPlacementPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'color' (aka 'Color')
	    attribute is (or will be) present in the MusicXML document. This attribute
	    is a member of the 'color' (aka 'Color') attributeGroup. **/
	void MxEeWavyLine::setIsColorPresent( const bool& value_in )
	{
		myImpl->setIsColorPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'start-note' (aka
	    'StartNote') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'trill-sound' (aka 'TrillSound')
	    attributeGroup. **/
	void MxEeWavyLine::setIsStartNotePresent( const bool& value_in )
	{
		myImpl->setIsStartNotePresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'trill-step' (aka
	    'TrillStep') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'trill-sound' (aka 'TrillSound')
	    attributeGroup. **/
	void MxEeWavyLine::setIsTrillStepPresent( const bool& value_in )
	{
		myImpl->setIsTrillStepPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'two-note-turn' (aka
	    'TwoNoteTurn') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'trill-sound' (aka 'TrillSound')
	    attributeGroup. **/
	void MxEeWavyLine::setIsTwoNoteTurnPresent( const bool& value_in )
	{
		myImpl->setIsTwoNoteTurnPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'accelerate' (aka
	    'Accelerate') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'trill-sound' (aka 'TrillSound')
	    attributeGroup. **/
	void MxEeWavyLine::setIsAcceleratePresent( const bool& value_in )
	{
		myImpl->setIsAcceleratePresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'beats' (aka 'Beats')
	    attribute is (or will be) present in the MusicXML document. This attribute
	    is a member of the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
	void MxEeWavyLine::setIsBeatsPresent( const bool& value_in )
	{
		myImpl->setIsBeatsPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'second-beat' (aka
	    'SecondBeat') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'trill-sound' (aka 'TrillSound')
	    attributeGroup. **/
	void MxEeWavyLine::setIsSecondBeatPresent( const bool& value_in )
	{
		myImpl->setIsSecondBeatPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'last-beat' (aka
	    'LastBeat') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'trill-sound' (aka 'TrillSound')
	    attributeGroup. **/
	void MxEeWavyLine::setIsLastBeatPresent( const bool& value_in )
	{
		myImpl->setIsLastBeatPresent( value_in );
	}

/* Stringing and Streaming ------------------------------------------------------------ */

	/** Returns the xml representation of the object's value. **/
	std::string MxEeWavyLine::toString() const
	{
		return myImpl->toString();
	}

	/** Returns the xml representation of the object's value. **/
	std::ostream& MxEeWavyLine::stream( std::ostream& os_out ) const
	{
		return myImpl->stream( os_out );
	}

/* Get IsAttributeDefaultDefined Values ----------------------------------------------- */

	/** Indicates whether or not the 'type' (aka 'Type') has a default value
	    defined in the MusicXML xsd specification (either explicitly or in
	    the documentation). **/
	bool MxEeWavyLine::getIsTypeDefaultDefined() const
	{
		return myImpl->getIsTypeDefaultDefined();
	}

	/** Indicates whether or not the 'number' (aka 'Number') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). **/
	bool MxEeWavyLine::getIsNumberDefaultDefined() const
	{
		return myImpl->getIsNumberDefaultDefined();
	}

	/** Indicates whether or not the 'default-x' (aka 'DefaultX') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'position'
	    (aka 'Position') attributeGroup. **/
	bool MxEeWavyLine::getIsDefaultXDefaultDefined() const
	{
		return myImpl->getIsDefaultXDefaultDefined();
	}

	/** Indicates whether or not the 'default-y' (aka 'DefaultY') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'position'
	    (aka 'Position') attributeGroup. **/
	bool MxEeWavyLine::getIsDefaultYDefaultDefined() const
	{
		return myImpl->getIsDefaultYDefaultDefined();
	}

	/** Indicates whether or not the 'relative-x' (aka 'RelativeX') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'position'
	    (aka 'Position') attributeGroup. **/
	bool MxEeWavyLine::getIsRelativeXDefaultDefined() const
	{
		return myImpl->getIsRelativeXDefaultDefined();
	}

	/** Indicates whether or not the 'relative-y' (aka 'RelativeY') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'position'
	    (aka 'Position') attributeGroup. **/
	bool MxEeWavyLine::getIsRelativeYDefaultDefined() const
	{
		return myImpl->getIsRelativeYDefaultDefined();
	}

	/** Indicates whether or not the 'placement' (aka 'Placement') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'placement'
	    (aka 'Placement') attributeGroup. **/
	bool MxEeWavyLine::getIsPlacementDefaultDefined() const
	{
		return myImpl->getIsPlacementDefaultDefined();
	}

	/** Indicates whether or not the 'color' (aka 'Color') has a default value
	    defined in the MusicXML xsd specification (either explicitly or in
	    the documentation). This attribute is a member of the 'color' (aka
	    'Color') attributeGroup. **/
	bool MxEeWavyLine::getIsColorDefaultDefined() const
	{
		return myImpl->getIsColorDefaultDefined();
	}

	/** Indicates whether or not the 'start-note' (aka 'StartNote') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'trill-sound'
	    (aka 'TrillSound') attributeGroup. **/
	bool MxEeWavyLine::getIsStartNoteDefaultDefined() const
	{
		return myImpl->getIsStartNoteDefaultDefined();
	}

	/** Indicates whether or not the 'trill-step' (aka 'TrillStep') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'trill-sound'
	    (aka 'TrillSound') attributeGroup. **/
	bool MxEeWavyLine::getIsTrillStepDefaultDefined() const
	{
		return myImpl->getIsTrillStepDefaultDefined();
	}

	/** Indicates whether or not the 'two-note-turn' (aka 'TwoNoteTurn') has
	    a default value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'trill-sound'
	    (aka 'TrillSound') attributeGroup. **/
	bool MxEeWavyLine::getIsTwoNoteTurnDefaultDefined() const
	{
		return myImpl->getIsTwoNoteTurnDefaultDefined();
	}

	/** Indicates whether or not the 'accelerate' (aka 'Accelerate') has a
	    default value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'trill-sound'
	    (aka 'TrillSound') attributeGroup. **/
	bool MxEeWavyLine::getIsAccelerateDefaultDefined() const
	{
		return myImpl->getIsAccelerateDefaultDefined();
	}

	/** Indicates whether or not the 'beats' (aka 'Beats') has a default value
	    defined in the MusicXML xsd specification (either explicitly or in
	    the documentation). This attribute is a member of the 'trill-sound'
	    (aka 'TrillSound') attributeGroup. **/
	bool MxEeWavyLine::getIsBeatsDefaultDefined() const
	{
		return myImpl->getIsBeatsDefaultDefined();
	}

	/** Indicates whether or not the 'second-beat' (aka 'SecondBeat') has a
	    default value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'trill-sound'
	    (aka 'TrillSound') attributeGroup. **/
	bool MxEeWavyLine::getIsSecondBeatDefaultDefined() const
	{
		return myImpl->getIsSecondBeatDefaultDefined();
	}

	/** Indicates whether or not the 'last-beat' (aka 'LastBeat') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'trill-sound'
	    (aka 'TrillSound') attributeGroup. **/
	bool MxEeWavyLine::getIsLastBeatDefaultDefined() const
	{
		return myImpl->getIsLastBeatDefaultDefined();
	}

/* Get AttributeDefaultValue ---------------------------------------------------------- */

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'type' (aka 'Type') attribute. **/
	MxEnumStartStopContinue MxEeWavyLine::getTypeDefaultValue() const
	{
		return myImpl->getTypeDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'number' (aka 'Number') attribute. **/
	MxNumberNumberLevel MxEeWavyLine::getNumberDefaultValue() const
	{
		return myImpl->getNumberDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'default-x' (aka 'DefaultX') attribute. This attribute is a member
	    of the 'position' (aka 'Position') attributeGroup. **/
	MxNumberTenths MxEeWavyLine::getDefaultXDefaultValue() const
	{
		return myImpl->getDefaultXDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'default-y' (aka 'DefaultY') attribute. This attribute is a member
	    of the 'position' (aka 'Position') attributeGroup. **/
	MxNumberTenths MxEeWavyLine::getDefaultYDefaultValue() const
	{
		return myImpl->getDefaultYDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'relative-x' (aka 'RelativeX') attribute. This attribute is a member
	    of the 'position' (aka 'Position') attributeGroup. **/
	MxNumberTenths MxEeWavyLine::getRelativeXDefaultValue() const
	{
		return myImpl->getRelativeXDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'relative-y' (aka 'RelativeY') attribute. This attribute is a member
	    of the 'position' (aka 'Position') attributeGroup. **/
	MxNumberTenths MxEeWavyLine::getRelativeYDefaultValue() const
	{
		return myImpl->getRelativeYDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'placement' (aka 'Placement') attribute. This attribute is a member
	    of the 'placement' (aka 'Placement') attributeGroup. **/
	MxEnumAboveBelow MxEeWavyLine::getPlacementDefaultValue() const
	{
		return myImpl->getPlacementDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'color' (aka 'Color') attribute. This attribute is a member of
	    the 'color' (aka 'Color') attributeGroup. **/
	MxColor MxEeWavyLine::getColorDefaultValue() const
	{
		return myImpl->getColorDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'start-note' (aka 'StartNote') attribute. This attribute is a member
	    of the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
	MxEnumStartNote MxEeWavyLine::getStartNoteDefaultValue() const
	{
		return myImpl->getStartNoteDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'trill-step' (aka 'TrillStep') attribute. This attribute is a member
	    of the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
	MxEnumTrillStep MxEeWavyLine::getTrillStepDefaultValue() const
	{
		return myImpl->getTrillStepDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'two-note-turn' (aka 'TwoNoteTurn') attribute. This attribute is
	    a member of the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
	MxEnumTwoNoteTurn MxEeWavyLine::getTwoNoteTurnDefaultValue() const
	{
		return myImpl->getTwoNoteTurnDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'accelerate' (aka 'Accelerate') attribute. This attribute is a
	    member of the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
	MxEnumYesNo MxEeWavyLine::getAccelerateDefaultValue() const
	{
		return myImpl->getAccelerateDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'beats' (aka 'Beats') attribute. This attribute is a member of
	    the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
	MxNumberTrillBeats MxEeWavyLine::getBeatsDefaultValue() const
	{
		return myImpl->getBeatsDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'second-beat' (aka 'SecondBeat') attribute. This attribute is a
	    member of the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
	MxNumberPercent MxEeWavyLine::getSecondBeatDefaultValue() const
	{
		return myImpl->getSecondBeatDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'last-beat' (aka 'LastBeat') attribute. This attribute is a member
	    of the 'trill-sound' (aka 'TrillSound') attributeGroup. **/
	MxNumberPercent MxEeWavyLine::getLastBeatDefaultValue() const
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

