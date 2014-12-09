/* See MusicXML License at the bottom of this code page. */

/**
  * @file       MxAttrGrpTrillSound.cpp
  * @class      lexicon::MxAttrGrpTrillSound
  * @author     Matthew James Briggs
  * @email      matthew.james.briggs@gmail.com
  * @url        http://matthewjamesbriggs.com
  * @date       2014-11-28 14:15:41
  * @project    Lexicon
  * @version    1.0
  * @musicxmlid 2046
  * 
  * @brief The 'TrillSound' class serves as a binding for the MusicXml 'trill-sound'
  * attributeGroup.
  * 
 **/

#include "MxAttrGrpTrillSound.h"
#include <sstream>
#include "_hidden_attributeStream.h"

/* Impl ------------------------------------------------------------------------------- */

namespace lexicon
{
	struct MxAttrGrpTrillSound::Impl
	{
		Impl()
		:myStartNote( lexicon::enums::StartNote::upper )
		,myTrillStep( lexicon::enums::TrillStep::whole )
		,myTwoNoteTurn( lexicon::enums::TwoNoteTurn::none )
		,myAccelerate( lexicon::enums::YesNo::no )
		,myBeats( 4 )
		,mySecondBeat( 0.25 )
		,myLastBeat( 0.75 )
		,myIsStartNotePresent( false )
		,myIsTrillStepPresent( false )
		,myIsTwoNoteTurnPresent( false )
		,myIsAcceleratePresent( false )
		,myIsBeatsPresent( false )
		,myIsSecondBeatPresent( false )
		,myIsLastBeatPresent( false )
		{}

	private:
		MxEnumStartNote myStartNote;
		MxEnumTrillStep myTrillStep;
		MxEnumTwoNoteTurn myTwoNoteTurn;
		MxEnumYesNo myAccelerate;
		MxNumberTrillBeats myBeats;
		MxNumberPercent mySecondBeat;
		MxNumberPercent myLastBeat;
		bool myIsStartNotePresent;
		bool myIsTrillStepPresent;
		bool myIsTwoNoteTurnPresent;
		bool myIsAcceleratePresent;
		bool myIsBeatsPresent;
		bool myIsSecondBeatPresent;
		bool myIsLastBeatPresent;

		const static int myXsdID;
		const static std::string myXmlTypeName;
		const static std::string myCppClassName;
		const static std::string myDocumentation;

	public:

/* Get Class Information -------------------------------------------------------------- */

		/** Returns the name of this xs:simpleType as found in the musicxml.xsd
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

		/** Returns the internal value of the 'start-note' (aka 'StartNote') attribute. **/
		MxEnumStartNote getStartNote() const
		{
			return myStartNote;
		}

		/** Returns the internal value of the 'trill-step' (aka 'TrillStep') attribute. **/
		MxEnumTrillStep getTrillStep() const
		{
			return myTrillStep;
		}

		/** Returns the internal value of the 'two-note-turn' (aka 'TwoNoteTurn')
		    attribute. **/
		MxEnumTwoNoteTurn getTwoNoteTurn() const
		{
			return myTwoNoteTurn;
		}

		/** Returns the internal value of the 'accelerate' (aka 'Accelerate') attribute. **/
		MxEnumYesNo getAccelerate() const
		{
			return myAccelerate;
		}

		/** Returns the internal value of the 'beats' (aka 'Beats') attribute. **/
		MxNumberTrillBeats getBeats() const
		{
			return myBeats;
		}

		/** Returns the internal value of the 'second-beat' (aka 'SecondBeat')
		    attribute. **/
		MxNumberPercent getSecondBeat() const
		{
			return mySecondBeat;
		}

		/** Returns the internal value of the 'last-beat' (aka 'LastBeat') attribute. **/
		MxNumberPercent getLastBeat() const
		{
			return myLastBeat;
		}

/* Set Attribute Values --------------------------------------------------------------- */

		/** Sets the internal value of the 'start-note' (aka 'StartNote') attribute. **/
		void setStartNote( const MxEnumStartNote& value_in )
		{
			myStartNote = value_in;
		}

		/** Sets the internal value of the 'trill-step' (aka 'TrillStep') attribute. **/
		void setTrillStep( const MxEnumTrillStep& value_in )
		{
			myTrillStep = value_in;
		}

		/** Sets the internal value of the 'two-note-turn' (aka 'TwoNoteTurn')
		    attribute. **/
		void setTwoNoteTurn( const MxEnumTwoNoteTurn& value_in )
		{
			myTwoNoteTurn = value_in;
		}

		/** Sets the internal value of the 'accelerate' (aka 'Accelerate') attribute. **/
		void setAccelerate( const MxEnumYesNo& value_in )
		{
			myAccelerate = value_in;
		}

		/** Sets the internal value of the 'beats' (aka 'Beats') attribute. **/
		void setBeats( const MxNumberTrillBeats& value_in )
		{
			myBeats = value_in;
		}

		/** Sets the internal value of the 'second-beat' (aka 'SecondBeat') attribute. **/
		void setSecondBeat( const MxNumberPercent& value_in )
		{
			mySecondBeat = value_in;
		}

		/** Sets the internal value of the 'last-beat' (aka 'LastBeat') attribute. **/
		void setLastBeat( const MxNumberPercent& value_in )
		{
			myLastBeat = value_in;
		}

/* Get IsAttributeRequired Values ----------------------------------------------------- */

		/** Indicates whether or not the 'start-note' (aka 'StartNote') attribute
		    is required to be present in a MusicXML document. **/
		bool getIsStartNoteRequired() const
		{
			return false;
		}

		/** Indicates whether or not the 'trill-step' (aka 'TrillStep') attribute
		    is required to be present in a MusicXML document. **/
		bool getIsTrillStepRequired() const
		{
			return false;
		}

		/** Indicates whether or not the 'two-note-turn' (aka 'TwoNoteTurn') attribute
		    is required to be present in a MusicXML document. **/
		bool getIsTwoNoteTurnRequired() const
		{
			return false;
		}

		/** Indicates whether or not the 'accelerate' (aka 'Accelerate') attribute
		    is required to be present in a MusicXML document. **/
		bool getIsAccelerateRequired() const
		{
			return false;
		}

		/** Indicates whether or not the 'beats' (aka 'Beats') attribute is required
		    to be present in a MusicXML document. **/
		bool getIsBeatsRequired() const
		{
			return false;
		}

		/** Indicates whether or not the 'second-beat' (aka 'SecondBeat') attribute
		    is required to be present in a MusicXML document. **/
		bool getIsSecondBeatRequired() const
		{
			return false;
		}

		/** Indicates whether or not the 'last-beat' (aka 'LastBeat') attribute
		    is required to be present in a MusicXML document. **/
		bool getIsLastBeatRequired() const
		{
			return false;
		}

/* Get IsAttributePresent Values ------------------------------------------------------ */

		/** Indicates whether or not the 'start-note' (aka 'StartNote') attribute
		    is (or will be) present in the MusicXML document. **/
		bool getIsStartNotePresent() const
		{
			return myIsStartNotePresent;
		}

		/** Indicates whether or not the 'trill-step' (aka 'TrillStep') attribute
		    is (or will be) present in the MusicXML document. **/
		bool getIsTrillStepPresent() const
		{
			return myIsTrillStepPresent;
		}

		/** Indicates whether or not the 'two-note-turn' (aka 'TwoNoteTurn') attribute
		    is (or will be) present in the MusicXML document. **/
		bool getIsTwoNoteTurnPresent() const
		{
			return myIsTwoNoteTurnPresent;
		}

		/** Indicates whether or not the 'accelerate' (aka 'Accelerate') attribute
		    is (or will be) present in the MusicXML document. **/
		bool getIsAcceleratePresent() const
		{
			return myIsAcceleratePresent;
		}

		/** Indicates whether or not the 'beats' (aka 'Beats') attribute is (or
		    will be) present in the MusicXML document. **/
		bool getIsBeatsPresent() const
		{
			return myIsBeatsPresent;
		}

		/** Indicates whether or not the 'second-beat' (aka 'SecondBeat') attribute
		    is (or will be) present in the MusicXML document. **/
		bool getIsSecondBeatPresent() const
		{
			return myIsSecondBeatPresent;
		}

		/** Indicates whether or not the 'last-beat' (aka 'LastBeat') attribute
		    is (or will be) present in the MusicXML document. **/
		bool getIsLastBeatPresent() const
		{
			return myIsLastBeatPresent;
		}

/* Set IsAttributePresent Values ------------------------------------------------------ */

		/** Sets the value which indicates whether or not the 'start-note' (aka
		    'StartNote') attribute is (or will be) present in the MusicXML document. **/
		void setIsStartNotePresent( const bool& value_in )
		{
			myIsStartNotePresent = value_in;
		}

		/** Sets the value which indicates whether or not the 'trill-step' (aka
		    'TrillStep') attribute is (or will be) present in the MusicXML document. **/
		void setIsTrillStepPresent( const bool& value_in )
		{
			myIsTrillStepPresent = value_in;
		}

		/** Sets the value which indicates whether or not the 'two-note-turn' (aka
		    'TwoNoteTurn') attribute is (or will be) present in the MusicXML document. **/
		void setIsTwoNoteTurnPresent( const bool& value_in )
		{
			myIsTwoNoteTurnPresent = value_in;
		}

		/** Sets the value which indicates whether or not the 'accelerate' (aka
		    'Accelerate') attribute is (or will be) present in the MusicXML document. **/
		void setIsAcceleratePresent( const bool& value_in )
		{
			myIsAcceleratePresent = value_in;
		}

		/** Sets the value which indicates whether or not the 'beats' (aka 'Beats')
		    attribute is (or will be) present in the MusicXML document. **/
		void setIsBeatsPresent( const bool& value_in )
		{
			myIsBeatsPresent = value_in;
		}

		/** Sets the value which indicates whether or not the 'second-beat' (aka
		    'SecondBeat') attribute is (or will be) present in the MusicXML document. **/
		void setIsSecondBeatPresent( const bool& value_in )
		{
			myIsSecondBeatPresent = value_in;
		}

		/** Sets the value which indicates whether or not the 'last-beat' (aka
		    'LastBeat') attribute is (or will be) present in the MusicXML document. **/
		void setIsLastBeatPresent( const bool& value_in )
		{
			myIsLastBeatPresent = value_in;
		}

/* Stringing and Streaming ------------------------------------------------------------ */

		/** Returns the attributeGroup's value as a string where each attribute
		    is represented, if present, in the form attribute="vale". **/
		std::string toString() const
		{
			std::stringstream ss;
			stream( ss );
			return ss.str();
		}

		/** Returns the attributeGroup's value as a string where each attribute
		    is represented, if present, in the form attribute="vale". **/
		std::ostream& stream( std::ostream& os_out ) const
		{
			bool isFirst = true;
			hidden::attributeStream( getIsStartNotePresent(), "start-note", getStartNote().toString(), os_out, isFirst );
			hidden::attributeStream( getIsTrillStepPresent(), "trill-step", getTrillStep().toString(), os_out, isFirst );
			hidden::attributeStream( getIsTwoNoteTurnPresent(), "two-note-turn", getTwoNoteTurn().toString(), os_out, isFirst );
			hidden::attributeStream( getIsAcceleratePresent(), "accelerate", getAccelerate().toString(), os_out, isFirst );
			hidden::attributeStream( getIsBeatsPresent(), "beats", getBeats().toString(), os_out, isFirst );
			hidden::attributeStream( getIsSecondBeatPresent(), "second-beat", getSecondBeat().toString(), os_out, isFirst );
			hidden::attributeStream( getIsLastBeatPresent(), "last-beat", getLastBeat().toString(), os_out, isFirst );
			return os_out;
		}

/* Get IsAttributeDefaultDefined Values ----------------------------------------------- */

		/** Indicates whether or not the 'start-note' (aka 'StartNote') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). **/
		bool getIsStartNoteDefaultDefined() const
		{
			return true;
		}

		/** Indicates whether or not the 'trill-step' (aka 'TrillStep') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). **/
		bool getIsTrillStepDefaultDefined() const
		{
			return true;
		}

		/** Indicates whether or not the 'two-note-turn' (aka 'TwoNoteTurn') has
		    a default value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). **/
		bool getIsTwoNoteTurnDefaultDefined() const
		{
			return true;
		}

		/** Indicates whether or not the 'accelerate' (aka 'Accelerate') has a
		    default value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). **/
		bool getIsAccelerateDefaultDefined() const
		{
			return true;
		}

		/** Indicates whether or not the 'beats' (aka 'Beats') has a default value
		    defined in the MusicXML xsd specification (either explicitly or in
		    the documentation). **/
		bool getIsBeatsDefaultDefined() const
		{
			return true;
		}

		/** Indicates whether or not the 'second-beat' (aka 'SecondBeat') has a
		    default value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). **/
		bool getIsSecondBeatDefaultDefined() const
		{
			return true;
		}

		/** Indicates whether or not the 'last-beat' (aka 'LastBeat') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). **/
		bool getIsLastBeatDefaultDefined() const
		{
			return true;
		}

/* Get AttributeDefaultValue ---------------------------------------------------------- */

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'start-note' (aka 'StartNote') attribute. **/
		MxEnumStartNote getStartNoteDefaultValue() const
		{
			return MxEnumStartNote( lexicon::enums::StartNote::upper );
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'trill-step' (aka 'TrillStep') attribute. **/
		MxEnumTrillStep getTrillStepDefaultValue() const
		{
			return MxEnumTrillStep( lexicon::enums::TrillStep::whole );
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'two-note-turn' (aka 'TwoNoteTurn') attribute. **/
		MxEnumTwoNoteTurn getTwoNoteTurnDefaultValue() const
		{
			return MxEnumTwoNoteTurn( lexicon::enums::TwoNoteTurn::none );
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'accelerate' (aka 'Accelerate') attribute. **/
		MxEnumYesNo getAccelerateDefaultValue() const
		{
			return MxEnumYesNo( lexicon::enums::YesNo::no );
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'beats' (aka 'Beats') attribute. **/
		MxNumberTrillBeats getBeatsDefaultValue() const
		{
			return MxNumberTrillBeats( 4 );
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'second-beat' (aka 'SecondBeat') attribute. **/
		MxNumberPercent getSecondBeatDefaultValue() const
		{
			return MxNumberPercent( 0.25 );
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'last-beat' (aka 'LastBeat') attribute. **/
		MxNumberPercent getLastBeatDefaultValue() const
		{
			return MxNumberPercent( 0.75 );
		}

	}; // struct MxAttrGrpTrillSound::Impl

	const int MxAttrGrpTrillSound::Impl::myXsdID = 2046;
	const std::string MxAttrGrpTrillSound::Impl::myXmlTypeName = "trill-sound";
	const std::string MxAttrGrpTrillSound::Impl::myCppClassName = "MxAttrGrpTrillSound";
	const std::string MxAttrGrpTrillSound::Impl::myDocumentation = "The trill-sound attribute group includes attributes used to guide the sound of trills, mordents, turns, shakes, and wavy lines, based on MuseData sound suggestions. The default choices are: start-note = upper trill-step = whole two-note-turn = none accelerate = no beats = 4. Second-beat and last-beat are percentages for landing on the indicated beat, with defaults of 25 and 75 respectively. For mordent and inverted-mordent elements, the defaults are different: The default start-note is main, not upper. The default for beats is 3, not 4. The default for second-beat is 12, not 25. The default for last-beat is 24, not 75.";

} // namespace lexicon


/* MxAttrGrpTrillSound ---------------------------------------------------------------- */

namespace lexicon
{

/* Constructor, Destructor, Copy, Assignment ------------------------------------------ */

	MxAttrGrpTrillSound::MxAttrGrpTrillSound()
	:myImpl( new Impl() ) {}

	MxAttrGrpTrillSound::~MxAttrGrpTrillSound() {}

	MxAttrGrpTrillSound::MxAttrGrpTrillSound( const MxAttrGrpTrillSound& other )
	:myImpl( new Impl( *(other.myImpl) ) ) {}

	MxAttrGrpTrillSound& MxAttrGrpTrillSound::operator=( const MxAttrGrpTrillSound& other )
	{
		this->myImpl = std::unique_ptr<Impl>( new Impl( *(other.myImpl) ) );
		return *this;
	}

/* Get Class Information -------------------------------------------------------------- */

	/** Returns the name of this xs:simpleType as found in the musicxml.xsd
	    document. **/
	std::string MxAttrGrpTrillSound::getXmlTypeName() const
	{
		return myImpl->getXmlTypeName();
	}

	/** Returns the name of this C++ class. **/
	std::string MxAttrGrpTrillSound::getClassName() const
	{
		return myImpl->getClassName();
	}

	/** Returns the documentation for this musicxml type as found in the musicxml.xsd
	    document. **/
	std::string MxAttrGrpTrillSound::getDocumentation() const
	{
		return myImpl->getDocumentation();
	}

/* Get Attribute Values --------------------------------------------------------------- */

	/** Returns the internal value of the 'start-note' (aka 'StartNote') attribute. **/
	MxEnumStartNote MxAttrGrpTrillSound::getStartNote() const
	{
		return myImpl->getStartNote();
	}

	/** Returns the internal value of the 'trill-step' (aka 'TrillStep') attribute. **/
	MxEnumTrillStep MxAttrGrpTrillSound::getTrillStep() const
	{
		return myImpl->getTrillStep();
	}

	/** Returns the internal value of the 'two-note-turn' (aka 'TwoNoteTurn')
	    attribute. **/
	MxEnumTwoNoteTurn MxAttrGrpTrillSound::getTwoNoteTurn() const
	{
		return myImpl->getTwoNoteTurn();
	}

	/** Returns the internal value of the 'accelerate' (aka 'Accelerate') attribute. **/
	MxEnumYesNo MxAttrGrpTrillSound::getAccelerate() const
	{
		return myImpl->getAccelerate();
	}

	/** Returns the internal value of the 'beats' (aka 'Beats') attribute. **/
	MxNumberTrillBeats MxAttrGrpTrillSound::getBeats() const
	{
		return myImpl->getBeats();
	}

	/** Returns the internal value of the 'second-beat' (aka 'SecondBeat')
	    attribute. **/
	MxNumberPercent MxAttrGrpTrillSound::getSecondBeat() const
	{
		return myImpl->getSecondBeat();
	}

	/** Returns the internal value of the 'last-beat' (aka 'LastBeat') attribute. **/
	MxNumberPercent MxAttrGrpTrillSound::getLastBeat() const
	{
		return myImpl->getLastBeat();
	}

/* Set Attribute Values --------------------------------------------------------------- */

	/** Sets the internal value of the 'start-note' (aka 'StartNote') attribute. **/
	void MxAttrGrpTrillSound::setStartNote( const MxEnumStartNote& value_in )
	{
		myImpl->setStartNote( value_in );
	}

	/** Sets the internal value of the 'trill-step' (aka 'TrillStep') attribute. **/
	void MxAttrGrpTrillSound::setTrillStep( const MxEnumTrillStep& value_in )
	{
		myImpl->setTrillStep( value_in );
	}

	/** Sets the internal value of the 'two-note-turn' (aka 'TwoNoteTurn')
	    attribute. **/
	void MxAttrGrpTrillSound::setTwoNoteTurn( const MxEnumTwoNoteTurn& value_in )
	{
		myImpl->setTwoNoteTurn( value_in );
	}

	/** Sets the internal value of the 'accelerate' (aka 'Accelerate') attribute. **/
	void MxAttrGrpTrillSound::setAccelerate( const MxEnumYesNo& value_in )
	{
		myImpl->setAccelerate( value_in );
	}

	/** Sets the internal value of the 'beats' (aka 'Beats') attribute. **/
	void MxAttrGrpTrillSound::setBeats( const MxNumberTrillBeats& value_in )
	{
		myImpl->setBeats( value_in );
	}

	/** Sets the internal value of the 'second-beat' (aka 'SecondBeat') attribute. **/
	void MxAttrGrpTrillSound::setSecondBeat( const MxNumberPercent& value_in )
	{
		myImpl->setSecondBeat( value_in );
	}

	/** Sets the internal value of the 'last-beat' (aka 'LastBeat') attribute. **/
	void MxAttrGrpTrillSound::setLastBeat( const MxNumberPercent& value_in )
	{
		myImpl->setLastBeat( value_in );
	}

/* Get IsAttributeRequired Values ----------------------------------------------------- */

	/** Indicates whether or not the 'start-note' (aka 'StartNote') attribute
	    is required to be present in a MusicXML document. **/
	bool MxAttrGrpTrillSound::getIsStartNoteRequired() const
	{
		return myImpl->getIsStartNoteRequired();
	}

	/** Indicates whether or not the 'trill-step' (aka 'TrillStep') attribute
	    is required to be present in a MusicXML document. **/
	bool MxAttrGrpTrillSound::getIsTrillStepRequired() const
	{
		return myImpl->getIsTrillStepRequired();
	}

	/** Indicates whether or not the 'two-note-turn' (aka 'TwoNoteTurn') attribute
	    is required to be present in a MusicXML document. **/
	bool MxAttrGrpTrillSound::getIsTwoNoteTurnRequired() const
	{
		return myImpl->getIsTwoNoteTurnRequired();
	}

	/** Indicates whether or not the 'accelerate' (aka 'Accelerate') attribute
	    is required to be present in a MusicXML document. **/
	bool MxAttrGrpTrillSound::getIsAccelerateRequired() const
	{
		return myImpl->getIsAccelerateRequired();
	}

	/** Indicates whether or not the 'beats' (aka 'Beats') attribute is required
	    to be present in a MusicXML document. **/
	bool MxAttrGrpTrillSound::getIsBeatsRequired() const
	{
		return myImpl->getIsBeatsRequired();
	}

	/** Indicates whether or not the 'second-beat' (aka 'SecondBeat') attribute
	    is required to be present in a MusicXML document. **/
	bool MxAttrGrpTrillSound::getIsSecondBeatRequired() const
	{
		return myImpl->getIsSecondBeatRequired();
	}

	/** Indicates whether or not the 'last-beat' (aka 'LastBeat') attribute
	    is required to be present in a MusicXML document. **/
	bool MxAttrGrpTrillSound::getIsLastBeatRequired() const
	{
		return myImpl->getIsLastBeatRequired();
	}

/* Get IsAttributePresent Values ------------------------------------------------------ */

	/** Indicates whether or not the 'start-note' (aka 'StartNote') attribute
	    is (or will be) present in the MusicXML document. **/
	bool MxAttrGrpTrillSound::getIsStartNotePresent() const
	{
		return myImpl->getIsStartNotePresent();
	}

	/** Indicates whether or not the 'trill-step' (aka 'TrillStep') attribute
	    is (or will be) present in the MusicXML document. **/
	bool MxAttrGrpTrillSound::getIsTrillStepPresent() const
	{
		return myImpl->getIsTrillStepPresent();
	}

	/** Indicates whether or not the 'two-note-turn' (aka 'TwoNoteTurn') attribute
	    is (or will be) present in the MusicXML document. **/
	bool MxAttrGrpTrillSound::getIsTwoNoteTurnPresent() const
	{
		return myImpl->getIsTwoNoteTurnPresent();
	}

	/** Indicates whether or not the 'accelerate' (aka 'Accelerate') attribute
	    is (or will be) present in the MusicXML document. **/
	bool MxAttrGrpTrillSound::getIsAcceleratePresent() const
	{
		return myImpl->getIsAcceleratePresent();
	}

	/** Indicates whether or not the 'beats' (aka 'Beats') attribute is (or
	    will be) present in the MusicXML document. **/
	bool MxAttrGrpTrillSound::getIsBeatsPresent() const
	{
		return myImpl->getIsBeatsPresent();
	}

	/** Indicates whether or not the 'second-beat' (aka 'SecondBeat') attribute
	    is (or will be) present in the MusicXML document. **/
	bool MxAttrGrpTrillSound::getIsSecondBeatPresent() const
	{
		return myImpl->getIsSecondBeatPresent();
	}

	/** Indicates whether or not the 'last-beat' (aka 'LastBeat') attribute
	    is (or will be) present in the MusicXML document. **/
	bool MxAttrGrpTrillSound::getIsLastBeatPresent() const
	{
		return myImpl->getIsLastBeatPresent();
	}

/* Set IsAttributePresent Values ------------------------------------------------------ */

	/** Sets the value which indicates whether or not the 'start-note' (aka
	    'StartNote') attribute is (or will be) present in the MusicXML document. **/
	void MxAttrGrpTrillSound::setIsStartNotePresent( const bool& value_in )
	{
		myImpl->setIsStartNotePresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'trill-step' (aka
	    'TrillStep') attribute is (or will be) present in the MusicXML document. **/
	void MxAttrGrpTrillSound::setIsTrillStepPresent( const bool& value_in )
	{
		myImpl->setIsTrillStepPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'two-note-turn' (aka
	    'TwoNoteTurn') attribute is (or will be) present in the MusicXML document. **/
	void MxAttrGrpTrillSound::setIsTwoNoteTurnPresent( const bool& value_in )
	{
		myImpl->setIsTwoNoteTurnPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'accelerate' (aka
	    'Accelerate') attribute is (or will be) present in the MusicXML document. **/
	void MxAttrGrpTrillSound::setIsAcceleratePresent( const bool& value_in )
	{
		myImpl->setIsAcceleratePresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'beats' (aka 'Beats')
	    attribute is (or will be) present in the MusicXML document. **/
	void MxAttrGrpTrillSound::setIsBeatsPresent( const bool& value_in )
	{
		myImpl->setIsBeatsPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'second-beat' (aka
	    'SecondBeat') attribute is (or will be) present in the MusicXML document. **/
	void MxAttrGrpTrillSound::setIsSecondBeatPresent( const bool& value_in )
	{
		myImpl->setIsSecondBeatPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'last-beat' (aka
	    'LastBeat') attribute is (or will be) present in the MusicXML document. **/
	void MxAttrGrpTrillSound::setIsLastBeatPresent( const bool& value_in )
	{
		myImpl->setIsLastBeatPresent( value_in );
	}

/* Stringing and Streaming ------------------------------------------------------------ */

	/** Returns the attributeGroup's value as a string where each attribute
	    is represented, if present, in the form attribute="vale". **/
	std::string MxAttrGrpTrillSound::toString() const
	{
		return myImpl->toString();
	}

	/** Returns the attributeGroup's value as a string where each attribute
	    is represented, if present, in the form attribute="vale". **/
	std::ostream& MxAttrGrpTrillSound::stream( std::ostream& os_out ) const
	{
		return myImpl->stream( os_out );
	}

/* Get IsAttributeDefaultDefined Values ----------------------------------------------- */

	/** Indicates whether or not the 'start-note' (aka 'StartNote') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). **/
	bool MxAttrGrpTrillSound::getIsStartNoteDefaultDefined() const
	{
		return myImpl->getIsStartNoteDefaultDefined();
	}

	/** Indicates whether or not the 'trill-step' (aka 'TrillStep') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). **/
	bool MxAttrGrpTrillSound::getIsTrillStepDefaultDefined() const
	{
		return myImpl->getIsTrillStepDefaultDefined();
	}

	/** Indicates whether or not the 'two-note-turn' (aka 'TwoNoteTurn') has
	    a default value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). **/
	bool MxAttrGrpTrillSound::getIsTwoNoteTurnDefaultDefined() const
	{
		return myImpl->getIsTwoNoteTurnDefaultDefined();
	}

	/** Indicates whether or not the 'accelerate' (aka 'Accelerate') has a
	    default value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). **/
	bool MxAttrGrpTrillSound::getIsAccelerateDefaultDefined() const
	{
		return myImpl->getIsAccelerateDefaultDefined();
	}

	/** Indicates whether or not the 'beats' (aka 'Beats') has a default value
	    defined in the MusicXML xsd specification (either explicitly or in
	    the documentation). **/
	bool MxAttrGrpTrillSound::getIsBeatsDefaultDefined() const
	{
		return myImpl->getIsBeatsDefaultDefined();
	}

	/** Indicates whether or not the 'second-beat' (aka 'SecondBeat') has a
	    default value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). **/
	bool MxAttrGrpTrillSound::getIsSecondBeatDefaultDefined() const
	{
		return myImpl->getIsSecondBeatDefaultDefined();
	}

	/** Indicates whether or not the 'last-beat' (aka 'LastBeat') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). **/
	bool MxAttrGrpTrillSound::getIsLastBeatDefaultDefined() const
	{
		return myImpl->getIsLastBeatDefaultDefined();
	}

/* Get AttributeDefaultValue ---------------------------------------------------------- */

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'start-note' (aka 'StartNote') attribute. **/
	MxEnumStartNote MxAttrGrpTrillSound::getStartNoteDefaultValue() const
	{
		return myImpl->getStartNoteDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'trill-step' (aka 'TrillStep') attribute. **/
	MxEnumTrillStep MxAttrGrpTrillSound::getTrillStepDefaultValue() const
	{
		return myImpl->getTrillStepDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'two-note-turn' (aka 'TwoNoteTurn') attribute. **/
	MxEnumTwoNoteTurn MxAttrGrpTrillSound::getTwoNoteTurnDefaultValue() const
	{
		return myImpl->getTwoNoteTurnDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'accelerate' (aka 'Accelerate') attribute. **/
	MxEnumYesNo MxAttrGrpTrillSound::getAccelerateDefaultValue() const
	{
		return myImpl->getAccelerateDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'beats' (aka 'Beats') attribute. **/
	MxNumberTrillBeats MxAttrGrpTrillSound::getBeatsDefaultValue() const
	{
		return myImpl->getBeatsDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'second-beat' (aka 'SecondBeat') attribute. **/
	MxNumberPercent MxAttrGrpTrillSound::getSecondBeatDefaultValue() const
	{
		return myImpl->getSecondBeatDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'last-beat' (aka 'LastBeat') attribute. **/
	MxNumberPercent MxAttrGrpTrillSound::getLastBeatDefaultValue() const
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

