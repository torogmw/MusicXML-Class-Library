/* See MusicXML License at the bottom of this code page. */

/**
  * @file       MxEeDashes.cpp
  * @class      lexicon::MxEeDashes
  * @author     Matthew James Briggs
  * @email      matthew.james.briggs@gmail.com
  * @url        http://matthewjamesbriggs.com
  * @date       2014-12-05 16:47:03
  * @project    Lexicon
  * @version    1.0
  * @musicxmlid 3358
  * 
  * @brief The 'Dashes' class serves as a binding for the MusicXml 'dashes' element.
  * 
 **/

#include "MxEeDashes.h"
#include <sstream>
#include "MxCxEmptyDashes.h"
#include "MxAttrGrpColor.h"
#include "MxAttrGrpDashedFormatting.h"
#include "MxAttrGrpPosition.h"

/* Impl ------------------------------------------------------------------------------- */

namespace lexicon
{
	struct MxEeDashes::Impl
	{
		Impl()
		:myMxCxEmptyValue( MxCxEmptyDashes( "dashes" ) )
		{}

	private:
		MxCxEmptyDashes myMxCxEmptyValue;

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

		/** Returns the internal value of the 'dash-length' (aka 'DashLength')
		    attribute. This attribute is a member of the 'dashed-formatting' (aka
		    'DashedFormatting') attributeGroup. **/
		MxNumberTenths getDashLength() const
		{
			return myMxCxEmptyValue.getDashLength();
		}

		/** Returns the internal value of the 'space-length' (aka 'SpaceLength')
		    attribute. This attribute is a member of the 'dashed-formatting' (aka
		    'DashedFormatting') attributeGroup. **/
		MxNumberTenths getSpaceLength() const
		{
			return myMxCxEmptyValue.getSpaceLength();
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

		/** Returns the internal value of the 'color' (aka 'Color') attribute.
		    This attribute is a member of the 'color' (aka 'Color') attributeGroup. **/
		MxColor getColor() const
		{
			return myMxCxEmptyValue.getColor();
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

		/** Sets the internal value of the 'dash-length' (aka 'DashLength') attribute.
		    This attribute is a member of the 'dashed-formatting' (aka 'DashedFormatting')
		    attributeGroup. **/
		void setDashLength( const MxNumberTenths& value_in )
		{
			myMxCxEmptyValue.setDashLength( value_in );
		}

		/** Sets the internal value of the 'space-length' (aka 'SpaceLength') attribute.
		    This attribute is a member of the 'dashed-formatting' (aka 'DashedFormatting')
		    attributeGroup. **/
		void setSpaceLength( const MxNumberTenths& value_in )
		{
			myMxCxEmptyValue.setSpaceLength( value_in );
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

		/** Sets the internal value of the 'color' (aka 'Color') attribute. This
		    attribute is a member of the 'color' (aka 'Color') attributeGroup. **/
		void setColor( const MxColor& value_in )
		{
			myMxCxEmptyValue.setColor( value_in );
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

		/** Indicates whether or not the 'dash-length' (aka 'DashLength') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'dashed-formatting' (aka 'DashedFormatting') attributeGroup. **/
		bool getIsDashLengthRequired() const
		{
			return myMxCxEmptyValue.getIsDashLengthRequired();
		}

		/** Indicates whether or not the 'space-length' (aka 'SpaceLength') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'dashed-formatting' (aka 'DashedFormatting') attributeGroup. **/
		bool getIsSpaceLengthRequired() const
		{
			return myMxCxEmptyValue.getIsSpaceLengthRequired();
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

		/** Indicates whether or not the 'color' (aka 'Color') attribute is required
		    to be present in a MusicXML document. This attribute is a member of
		    the 'color' (aka 'Color') attributeGroup. **/
		bool getIsColorRequired() const
		{
			return myMxCxEmptyValue.getIsColorRequired();
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

		/** Indicates whether or not the 'dash-length' (aka 'DashLength') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'dashed-formatting' (aka 'DashedFormatting') attributeGroup. **/
		bool getIsDashLengthPresent() const
		{
			return myMxCxEmptyValue.getIsDashLengthPresent();
		}

		/** Indicates whether or not the 'space-length' (aka 'SpaceLength') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'dashed-formatting' (aka 'DashedFormatting') attributeGroup. **/
		bool getIsSpaceLengthPresent() const
		{
			return myMxCxEmptyValue.getIsSpaceLengthPresent();
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

		/** Indicates whether or not the 'color' (aka 'Color') attribute is (or
		    will be) present in the MusicXML document. This attribute is a member
		    of the 'color' (aka 'Color') attributeGroup. **/
		bool getIsColorPresent() const
		{
			return myMxCxEmptyValue.getIsColorPresent();
		}

/* Set IsAttributePresent Values ------------------------------------------------------ */

		/** Sets the value which indicates whether or not the 'number' (aka 'Number')
		    attribute is (or will be) present in the MusicXML document. **/
		void setIsNumberPresent( const bool& value_in )
		{
			myMxCxEmptyValue.setIsNumberPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'dash-length' (aka
		    'DashLength') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'dashed-formatting' (aka 'DashedFormatting')
		    attributeGroup. **/
		void setIsDashLengthPresent( const bool& value_in )
		{
			myMxCxEmptyValue.setIsDashLengthPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'space-length' (aka
		    'SpaceLength') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'dashed-formatting' (aka 'DashedFormatting')
		    attributeGroup. **/
		void setIsSpaceLengthPresent( const bool& value_in )
		{
			myMxCxEmptyValue.setIsSpaceLengthPresent( value_in );
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

		/** Sets the value which indicates whether or not the 'color' (aka 'Color')
		    attribute is (or will be) present in the MusicXML document. This attribute
		    is a member of the 'color' (aka 'Color') attributeGroup. **/
		void setIsColorPresent( const bool& value_in )
		{
			myMxCxEmptyValue.setIsColorPresent( value_in );
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

		/** Indicates whether or not the 'dash-length' (aka 'DashLength') has a
		    default value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'dashed-formatting'
		    (aka 'DashedFormatting') attributeGroup. **/
		bool getIsDashLengthDefaultDefined() const
		{
			return myMxCxEmptyValue.getIsDashLengthDefaultDefined();
		}

		/** Indicates whether or not the 'space-length' (aka 'SpaceLength') has
		    a default value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'dashed-formatting'
		    (aka 'DashedFormatting') attributeGroup. **/
		bool getIsSpaceLengthDefaultDefined() const
		{
			return myMxCxEmptyValue.getIsSpaceLengthDefaultDefined();
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

		/** Indicates whether or not the 'color' (aka 'Color') has a default value
		    defined in the MusicXML xsd specification (either explicitly or in
		    the documentation). This attribute is a member of the 'color' (aka
		    'Color') attributeGroup. **/
		bool getIsColorDefaultDefined() const
		{
			return myMxCxEmptyValue.getIsColorDefaultDefined();
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
		    the 'dash-length' (aka 'DashLength') attribute. This attribute is a
		    member of the 'dashed-formatting' (aka 'DashedFormatting') attributeGroup. **/
		MxNumberTenths getDashLengthDefaultValue() const
		{
			return myMxCxEmptyValue.getDashLengthDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'space-length' (aka 'SpaceLength') attribute. This attribute is
		    a member of the 'dashed-formatting' (aka 'DashedFormatting') attributeGroup. **/
		MxNumberTenths getSpaceLengthDefaultValue() const
		{
			return myMxCxEmptyValue.getSpaceLengthDefaultValue();
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
		    the 'color' (aka 'Color') attribute. This attribute is a member of
		    the 'color' (aka 'Color') attributeGroup. **/
		MxColor getColorDefaultValue() const
		{
			return myMxCxEmptyValue.getColorDefaultValue();
		}

	}; // struct MxEeDashes::Impl

	const int MxEeDashes::Impl::myXsdID = 3358;
	const std::string MxEeDashes::Impl::myXmlTypeName = "dashes";
	const std::string MxEeDashes::Impl::myCppClassName = "MxEeDashes";
	const std::string MxEeDashes::Impl::myDocumentation = "( no documentation )";
	const int MxEeDashes::Impl::myMinOccurs = 1;
	const int MxEeDashes::Impl::myMaxOccurs = 1;
	const int MxEeDashes::Impl::myIsMaxOccursUnbounded = false;

} // namespace lexicon


/* MxEeDashes ------------------------------------------------------------------------- */

namespace lexicon
{

/* Constructor, Destructor, Copy, Assignment ------------------------------------------ */

	MxEeDashes::MxEeDashes()
	:myImpl( new Impl() ) {}

	MxEeDashes::~MxEeDashes() {}

	MxEeDashes::MxEeDashes( const MxEeDashes& other )
	:myImpl( new Impl( *(other.myImpl) ) ) {}

	MxEeDashes& MxEeDashes::operator=( const MxEeDashes& other )
	{
		this->myImpl = std::unique_ptr<Impl>( new Impl( *(other.myImpl) ) );
		return *this;
	}

/* minOccurs maxOccurs ---------------------------------------------------------------- */

	/** Returns the minOccurs value from the Music XML xsd specification. **/
	int MxEeDashes::getMinOccurs() const
	{
		return myImpl->getMinOccurs();
	}

	/** Returns the maxOccurs value from the Music XML xsd specification. **/
	int MxEeDashes::getMaxOccurs() const
	{
		return myImpl->getMaxOccurs();
	}

	/** Returns true if the maxOccurs value from the Music XML xsd specification
	    is 'unbounded'. **/
	bool MxEeDashes::getIsMaxOccursUnbounded() const
	{
		return myImpl->getIsMaxOccursUnbounded();
	}

/* Get Class Information -------------------------------------------------------------- */

	/** Returns the name of this xs:element as found in the musicxml.xsd document. **/
	std::string MxEeDashes::getXmlTypeName() const
	{
		return myImpl->getXmlTypeName();
	}

	/** Returns the name of this C++ class. **/
	std::string MxEeDashes::getClassName() const
	{
		return myImpl->getClassName();
	}

	/** Returns the documentation for this musicxml type as found in the musicxml.xsd
	    document. **/
	std::string MxEeDashes::getDocumentation() const
	{
		return myImpl->getDocumentation();
	}

/* Get Attribute Values --------------------------------------------------------------- */

	/** Returns the internal value of the 'type' (aka 'Type') attribute. **/
	MxEnumStartStopContinue MxEeDashes::getType() const
	{
		return myImpl->getType();
	}

	/** Returns the internal value of the 'number' (aka 'Number') attribute. **/
	MxNumberNumberLevel MxEeDashes::getNumber() const
	{
		return myImpl->getNumber();
	}

	/** Returns the internal value of the 'dash-length' (aka 'DashLength')
	    attribute. This attribute is a member of the 'dashed-formatting' (aka
	    'DashedFormatting') attributeGroup. **/
	MxNumberTenths MxEeDashes::getDashLength() const
	{
		return myImpl->getDashLength();
	}

	/** Returns the internal value of the 'space-length' (aka 'SpaceLength')
	    attribute. This attribute is a member of the 'dashed-formatting' (aka
	    'DashedFormatting') attributeGroup. **/
	MxNumberTenths MxEeDashes::getSpaceLength() const
	{
		return myImpl->getSpaceLength();
	}

	/** Returns the internal value of the 'default-x' (aka 'DefaultX') attribute.
	    This attribute is a member of the 'position' (aka 'Position') attributeGroup. **/
	MxNumberTenths MxEeDashes::getDefaultX() const
	{
		return myImpl->getDefaultX();
	}

	/** Returns the internal value of the 'default-y' (aka 'DefaultY') attribute.
	    This attribute is a member of the 'position' (aka 'Position') attributeGroup. **/
	MxNumberTenths MxEeDashes::getDefaultY() const
	{
		return myImpl->getDefaultY();
	}

	/** Returns the internal value of the 'relative-x' (aka 'RelativeX') attribute.
	    This attribute is a member of the 'position' (aka 'Position') attributeGroup. **/
	MxNumberTenths MxEeDashes::getRelativeX() const
	{
		return myImpl->getRelativeX();
	}

	/** Returns the internal value of the 'relative-y' (aka 'RelativeY') attribute.
	    This attribute is a member of the 'position' (aka 'Position') attributeGroup. **/
	MxNumberTenths MxEeDashes::getRelativeY() const
	{
		return myImpl->getRelativeY();
	}

	/** Returns the internal value of the 'color' (aka 'Color') attribute.
	    This attribute is a member of the 'color' (aka 'Color') attributeGroup. **/
	MxColor MxEeDashes::getColor() const
	{
		return myImpl->getColor();
	}

/* Set Attribute Values --------------------------------------------------------------- */

	/** Sets the internal value of the 'type' (aka 'Type') attribute. **/
	void MxEeDashes::setType( const MxEnumStartStopContinue& value_in )
	{
		myImpl->setType( value_in );
	}

	/** Sets the internal value of the 'number' (aka 'Number') attribute. **/
	void MxEeDashes::setNumber( const MxNumberNumberLevel& value_in )
	{
		myImpl->setNumber( value_in );
	}

	/** Sets the internal value of the 'dash-length' (aka 'DashLength') attribute.
	    This attribute is a member of the 'dashed-formatting' (aka 'DashedFormatting')
	    attributeGroup. **/
	void MxEeDashes::setDashLength( const MxNumberTenths& value_in )
	{
		myImpl->setDashLength( value_in );
	}

	/** Sets the internal value of the 'space-length' (aka 'SpaceLength') attribute.
	    This attribute is a member of the 'dashed-formatting' (aka 'DashedFormatting')
	    attributeGroup. **/
	void MxEeDashes::setSpaceLength( const MxNumberTenths& value_in )
	{
		myImpl->setSpaceLength( value_in );
	}

	/** Sets the internal value of the 'default-x' (aka 'DefaultX') attribute.
	    This attribute is a member of the 'position' (aka 'Position') attributeGroup. **/
	void MxEeDashes::setDefaultX( const MxNumberTenths& value_in )
	{
		myImpl->setDefaultX( value_in );
	}

	/** Sets the internal value of the 'default-y' (aka 'DefaultY') attribute.
	    This attribute is a member of the 'position' (aka 'Position') attributeGroup. **/
	void MxEeDashes::setDefaultY( const MxNumberTenths& value_in )
	{
		myImpl->setDefaultY( value_in );
	}

	/** Sets the internal value of the 'relative-x' (aka 'RelativeX') attribute.
	    This attribute is a member of the 'position' (aka 'Position') attributeGroup. **/
	void MxEeDashes::setRelativeX( const MxNumberTenths& value_in )
	{
		myImpl->setRelativeX( value_in );
	}

	/** Sets the internal value of the 'relative-y' (aka 'RelativeY') attribute.
	    This attribute is a member of the 'position' (aka 'Position') attributeGroup. **/
	void MxEeDashes::setRelativeY( const MxNumberTenths& value_in )
	{
		myImpl->setRelativeY( value_in );
	}

	/** Sets the internal value of the 'color' (aka 'Color') attribute. This
	    attribute is a member of the 'color' (aka 'Color') attributeGroup. **/
	void MxEeDashes::setColor( const MxColor& value_in )
	{
		myImpl->setColor( value_in );
	}

/* Get IsAttributeRequired Values ----------------------------------------------------- */

	/** Indicates whether or not the 'type' (aka 'Type') attribute is required
	    to be present in a MusicXML document. **/
	bool MxEeDashes::getIsTypeRequired() const
	{
		return myImpl->getIsTypeRequired();
	}

	/** Indicates whether or not the 'number' (aka 'Number') attribute is required
	    to be present in a MusicXML document. **/
	bool MxEeDashes::getIsNumberRequired() const
	{
		return myImpl->getIsNumberRequired();
	}

	/** Indicates whether or not the 'dash-length' (aka 'DashLength') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'dashed-formatting' (aka 'DashedFormatting') attributeGroup. **/
	bool MxEeDashes::getIsDashLengthRequired() const
	{
		return myImpl->getIsDashLengthRequired();
	}

	/** Indicates whether or not the 'space-length' (aka 'SpaceLength') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'dashed-formatting' (aka 'DashedFormatting') attributeGroup. **/
	bool MxEeDashes::getIsSpaceLengthRequired() const
	{
		return myImpl->getIsSpaceLengthRequired();
	}

	/** Indicates whether or not the 'default-x' (aka 'DefaultX') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'position' (aka 'Position') attributeGroup. **/
	bool MxEeDashes::getIsDefaultXRequired() const
	{
		return myImpl->getIsDefaultXRequired();
	}

	/** Indicates whether or not the 'default-y' (aka 'DefaultY') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'position' (aka 'Position') attributeGroup. **/
	bool MxEeDashes::getIsDefaultYRequired() const
	{
		return myImpl->getIsDefaultYRequired();
	}

	/** Indicates whether or not the 'relative-x' (aka 'RelativeX') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'position' (aka 'Position') attributeGroup. **/
	bool MxEeDashes::getIsRelativeXRequired() const
	{
		return myImpl->getIsRelativeXRequired();
	}

	/** Indicates whether or not the 'relative-y' (aka 'RelativeY') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'position' (aka 'Position') attributeGroup. **/
	bool MxEeDashes::getIsRelativeYRequired() const
	{
		return myImpl->getIsRelativeYRequired();
	}

	/** Indicates whether or not the 'color' (aka 'Color') attribute is required
	    to be present in a MusicXML document. This attribute is a member of
	    the 'color' (aka 'Color') attributeGroup. **/
	bool MxEeDashes::getIsColorRequired() const
	{
		return myImpl->getIsColorRequired();
	}

/* Get IsAttributePresent Values ------------------------------------------------------ */

	/** Indicates whether or not the 'type' (aka 'Type') attribute is (or will
	    be) present in the MusicXML document. Note: because 'type' is required
	    by the MusicXML specification, getIsTypePresent will always return
	    'true'. There is no corresponding setIsTypePresent function for this
	    attribute. **/
	bool MxEeDashes::getIsTypePresent() const
	{
		return myImpl->getIsTypePresent();
	}

	/** Indicates whether or not the 'number' (aka 'Number') attribute is (or
	    will be) present in the MusicXML document. **/
	bool MxEeDashes::getIsNumberPresent() const
	{
		return myImpl->getIsNumberPresent();
	}

	/** Indicates whether or not the 'dash-length' (aka 'DashLength') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'dashed-formatting' (aka 'DashedFormatting') attributeGroup. **/
	bool MxEeDashes::getIsDashLengthPresent() const
	{
		return myImpl->getIsDashLengthPresent();
	}

	/** Indicates whether or not the 'space-length' (aka 'SpaceLength') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'dashed-formatting' (aka 'DashedFormatting') attributeGroup. **/
	bool MxEeDashes::getIsSpaceLengthPresent() const
	{
		return myImpl->getIsSpaceLengthPresent();
	}

	/** Indicates whether or not the 'default-x' (aka 'DefaultX') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'position' (aka 'Position') attributeGroup. **/
	bool MxEeDashes::getIsDefaultXPresent() const
	{
		return myImpl->getIsDefaultXPresent();
	}

	/** Indicates whether or not the 'default-y' (aka 'DefaultY') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'position' (aka 'Position') attributeGroup. **/
	bool MxEeDashes::getIsDefaultYPresent() const
	{
		return myImpl->getIsDefaultYPresent();
	}

	/** Indicates whether or not the 'relative-x' (aka 'RelativeX') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'position' (aka 'Position') attributeGroup. **/
	bool MxEeDashes::getIsRelativeXPresent() const
	{
		return myImpl->getIsRelativeXPresent();
	}

	/** Indicates whether or not the 'relative-y' (aka 'RelativeY') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'position' (aka 'Position') attributeGroup. **/
	bool MxEeDashes::getIsRelativeYPresent() const
	{
		return myImpl->getIsRelativeYPresent();
	}

	/** Indicates whether or not the 'color' (aka 'Color') attribute is (or
	    will be) present in the MusicXML document. This attribute is a member
	    of the 'color' (aka 'Color') attributeGroup. **/
	bool MxEeDashes::getIsColorPresent() const
	{
		return myImpl->getIsColorPresent();
	}

/* Set IsAttributePresent Values ------------------------------------------------------ */

	/** Sets the value which indicates whether or not the 'number' (aka 'Number')
	    attribute is (or will be) present in the MusicXML document. **/
	void MxEeDashes::setIsNumberPresent( const bool& value_in )
	{
		myImpl->setIsNumberPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'dash-length' (aka
	    'DashLength') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'dashed-formatting' (aka 'DashedFormatting')
	    attributeGroup. **/
	void MxEeDashes::setIsDashLengthPresent( const bool& value_in )
	{
		myImpl->setIsDashLengthPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'space-length' (aka
	    'SpaceLength') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'dashed-formatting' (aka 'DashedFormatting')
	    attributeGroup. **/
	void MxEeDashes::setIsSpaceLengthPresent( const bool& value_in )
	{
		myImpl->setIsSpaceLengthPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'default-x' (aka
	    'DefaultX') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'position' (aka 'Position') attributeGroup. **/
	void MxEeDashes::setIsDefaultXPresent( const bool& value_in )
	{
		myImpl->setIsDefaultXPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'default-y' (aka
	    'DefaultY') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'position' (aka 'Position') attributeGroup. **/
	void MxEeDashes::setIsDefaultYPresent( const bool& value_in )
	{
		myImpl->setIsDefaultYPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'relative-x' (aka
	    'RelativeX') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'position' (aka 'Position') attributeGroup. **/
	void MxEeDashes::setIsRelativeXPresent( const bool& value_in )
	{
		myImpl->setIsRelativeXPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'relative-y' (aka
	    'RelativeY') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'position' (aka 'Position') attributeGroup. **/
	void MxEeDashes::setIsRelativeYPresent( const bool& value_in )
	{
		myImpl->setIsRelativeYPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'color' (aka 'Color')
	    attribute is (or will be) present in the MusicXML document. This attribute
	    is a member of the 'color' (aka 'Color') attributeGroup. **/
	void MxEeDashes::setIsColorPresent( const bool& value_in )
	{
		myImpl->setIsColorPresent( value_in );
	}

/* Stringing and Streaming ------------------------------------------------------------ */

	/** Returns the xml representation of the object's value. **/
	std::string MxEeDashes::toString() const
	{
		return myImpl->toString();
	}

	/** Returns the xml representation of the object's value. **/
	std::ostream& MxEeDashes::stream( std::ostream& os_out ) const
	{
		return myImpl->stream( os_out );
	}

/* Get IsAttributeDefaultDefined Values ----------------------------------------------- */

	/** Indicates whether or not the 'type' (aka 'Type') has a default value
	    defined in the MusicXML xsd specification (either explicitly or in
	    the documentation). **/
	bool MxEeDashes::getIsTypeDefaultDefined() const
	{
		return myImpl->getIsTypeDefaultDefined();
	}

	/** Indicates whether or not the 'number' (aka 'Number') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). **/
	bool MxEeDashes::getIsNumberDefaultDefined() const
	{
		return myImpl->getIsNumberDefaultDefined();
	}

	/** Indicates whether or not the 'dash-length' (aka 'DashLength') has a
	    default value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'dashed-formatting'
	    (aka 'DashedFormatting') attributeGroup. **/
	bool MxEeDashes::getIsDashLengthDefaultDefined() const
	{
		return myImpl->getIsDashLengthDefaultDefined();
	}

	/** Indicates whether or not the 'space-length' (aka 'SpaceLength') has
	    a default value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'dashed-formatting'
	    (aka 'DashedFormatting') attributeGroup. **/
	bool MxEeDashes::getIsSpaceLengthDefaultDefined() const
	{
		return myImpl->getIsSpaceLengthDefaultDefined();
	}

	/** Indicates whether or not the 'default-x' (aka 'DefaultX') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'position'
	    (aka 'Position') attributeGroup. **/
	bool MxEeDashes::getIsDefaultXDefaultDefined() const
	{
		return myImpl->getIsDefaultXDefaultDefined();
	}

	/** Indicates whether or not the 'default-y' (aka 'DefaultY') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'position'
	    (aka 'Position') attributeGroup. **/
	bool MxEeDashes::getIsDefaultYDefaultDefined() const
	{
		return myImpl->getIsDefaultYDefaultDefined();
	}

	/** Indicates whether or not the 'relative-x' (aka 'RelativeX') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'position'
	    (aka 'Position') attributeGroup. **/
	bool MxEeDashes::getIsRelativeXDefaultDefined() const
	{
		return myImpl->getIsRelativeXDefaultDefined();
	}

	/** Indicates whether or not the 'relative-y' (aka 'RelativeY') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'position'
	    (aka 'Position') attributeGroup. **/
	bool MxEeDashes::getIsRelativeYDefaultDefined() const
	{
		return myImpl->getIsRelativeYDefaultDefined();
	}

	/** Indicates whether or not the 'color' (aka 'Color') has a default value
	    defined in the MusicXML xsd specification (either explicitly or in
	    the documentation). This attribute is a member of the 'color' (aka
	    'Color') attributeGroup. **/
	bool MxEeDashes::getIsColorDefaultDefined() const
	{
		return myImpl->getIsColorDefaultDefined();
	}

/* Get AttributeDefaultValue ---------------------------------------------------------- */

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'type' (aka 'Type') attribute. **/
	MxEnumStartStopContinue MxEeDashes::getTypeDefaultValue() const
	{
		return myImpl->getTypeDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'number' (aka 'Number') attribute. **/
	MxNumberNumberLevel MxEeDashes::getNumberDefaultValue() const
	{
		return myImpl->getNumberDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'dash-length' (aka 'DashLength') attribute. This attribute is a
	    member of the 'dashed-formatting' (aka 'DashedFormatting') attributeGroup. **/
	MxNumberTenths MxEeDashes::getDashLengthDefaultValue() const
	{
		return myImpl->getDashLengthDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'space-length' (aka 'SpaceLength') attribute. This attribute is
	    a member of the 'dashed-formatting' (aka 'DashedFormatting') attributeGroup. **/
	MxNumberTenths MxEeDashes::getSpaceLengthDefaultValue() const
	{
		return myImpl->getSpaceLengthDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'default-x' (aka 'DefaultX') attribute. This attribute is a member
	    of the 'position' (aka 'Position') attributeGroup. **/
	MxNumberTenths MxEeDashes::getDefaultXDefaultValue() const
	{
		return myImpl->getDefaultXDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'default-y' (aka 'DefaultY') attribute. This attribute is a member
	    of the 'position' (aka 'Position') attributeGroup. **/
	MxNumberTenths MxEeDashes::getDefaultYDefaultValue() const
	{
		return myImpl->getDefaultYDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'relative-x' (aka 'RelativeX') attribute. This attribute is a member
	    of the 'position' (aka 'Position') attributeGroup. **/
	MxNumberTenths MxEeDashes::getRelativeXDefaultValue() const
	{
		return myImpl->getRelativeXDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'relative-y' (aka 'RelativeY') attribute. This attribute is a member
	    of the 'position' (aka 'Position') attributeGroup. **/
	MxNumberTenths MxEeDashes::getRelativeYDefaultValue() const
	{
		return myImpl->getRelativeYDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'color' (aka 'Color') attribute. This attribute is a member of
	    the 'color' (aka 'Color') attributeGroup. **/
	MxColor MxEeDashes::getColorDefaultValue() const
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

