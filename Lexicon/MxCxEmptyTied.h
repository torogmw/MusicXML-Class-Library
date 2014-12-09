/* See MusicXML License at the bottom of this code page. */

#pragma once

/**
  * @file       MxCxEmptyTied.h
  * @class      lexicon::MxCxEmptyTied
  * @author     Matthew James Briggs
  * @email      matthew.james.briggs@gmail.com
  * @url        http://matthewjamesbriggs.com
  * @date       2014-12-03 16:31:27
  * @project    Lexicon
  * @version    1.0
  * @musicxmlid 5488
  * 
  * @brief The 'Tied' class serves as a binding for the MusicXml 'tied' complexType.
  * 
  * The purpose of 'MxCxEmptyTied' is to provide a strongly-typed C++ representation
  * of the 'tied' MusicXML complexType with the ability to write the attribute
  * values to XML-appropriate strings. 
  * 
  * Music XML XSD Documentation: The tied type represents the notated tie. The
  * tie element represents the tie sound. The number attribute is rarely needed
  * to disambiguate ties, since note pitches will usually suffice. The attribute
  * is implied rather than defaulting to 1 as with most elements. It is available
  * for use in more complex tied notation situations.
  * 
  * <xs:complexType name="tied">
  * 	<xs:annotation>
  * 		<xs:documentation>The tied type represents the notated tie. The tie element
  * represents the tie sound.
  * 
  * The number attribute is rarely needed to disambiguate ties, since note pitches
  * will usually suffice. The attribute is implied rather than defaulting to
  * 1 as with most elements. It is available for use in more complex tied notation
  * situations.</xs:documentation>
  * 	</xs:annotation>
  * 	<xs:attribute name="type" type="start-stop-continue" use="required"/>
  * 	<xs:attribute name="number" type="number-level"/>
  * 	<xs:attributeGroup ref="line-type"/>
  * 	<xs:attributeGroup ref="dashed-formatting"/>
  * 	<xs:attributeGroup ref="position"/>
  * 	<xs:attributeGroup ref="placement"/>
  * 	<xs:attributeGroup ref="orientation"/>
  * 	<xs:attributeGroup ref="bezier"/>
  * 	<xs:attributeGroup ref="color"/>
  * </xs:complexType>
  * 
  * 
  * 
  * 
 **/

#include <iostream>
#include <string>
#include <memory>
#include "LexiconBaseObjects.h"
#include "MxColor.h"
#include "MxEnumAboveBelow.h"
#include "MxEnumLineType.h"
#include "MxEnumOverUnder.h"
#include "MxEnumStartStopContinue.h"
#include "MxNumberDivisions.h"
#include "MxNumberNumberLevel.h"
#include "MxNumberTenths.h"

namespace lexicon
{
/* MxCxEmptyTied ---------------------------------------------------------------------- */

	class MxCxEmptyTied : public MxObject
	{
	public:

/* Constructor, Destructor, Copy, Assignment ------------------------------------------ */

		MxCxEmptyTied( const std::string& elementName = "unknown" );
		virtual ~MxCxEmptyTied();
		MxCxEmptyTied( const MxCxEmptyTied& other );
		MxCxEmptyTied& operator=( const MxCxEmptyTied& other );

/* GetSet Value and Element Name ------------------------------------------------------ */

		/** Returns the name of the Xml element employing this ComplexType. **/
		std::string getElementName() const;

/* Get Class Information -------------------------------------------------------------- */

		/** Returns the name of this xs:complexType as found in the musicxml.xsd
		    document. **/
		std::string getXmlTypeName() const;

		/** Returns the name of this C++ class. **/
		std::string getClassName() const;

		/** Returns the documentation for this musicxml type as found in the musicxml.xsd
		    document. **/
		std::string getDocumentation() const;

/* Get Attribute Values --------------------------------------------------------------- */

		/** Returns the internal value of the 'type' (aka 'Type') attribute. **/
		MxEnumStartStopContinue getType() const;

		/** Returns the internal value of the 'number' (aka 'Number') attribute. **/
		MxNumberNumberLevel getNumber() const;

		/** Returns the internal value of the 'line-type' (aka 'LineType') attribute.
		    This attribute is a member of the 'line-type' (aka 'LineType') attributeGroup. **/
		MxEnumLineType getLineType() const;

		/** Returns the internal value of the 'dash-length' (aka 'DashLength')
		    attribute. This attribute is a member of the 'dashed-formatting' (aka
		    'DashedFormatting') attributeGroup. **/
		MxNumberTenths getDashLength() const;

		/** Returns the internal value of the 'space-length' (aka 'SpaceLength')
		    attribute. This attribute is a member of the 'dashed-formatting' (aka
		    'DashedFormatting') attributeGroup. **/
		MxNumberTenths getSpaceLength() const;

		/** Returns the internal value of the 'default-x' (aka 'DefaultX') attribute.
		    This attribute is a member of the 'position' (aka 'Position') attributeGroup. **/
		MxNumberTenths getDefaultX() const;

		/** Returns the internal value of the 'default-y' (aka 'DefaultY') attribute.
		    This attribute is a member of the 'position' (aka 'Position') attributeGroup. **/
		MxNumberTenths getDefaultY() const;

		/** Returns the internal value of the 'relative-x' (aka 'RelativeX') attribute.
		    This attribute is a member of the 'position' (aka 'Position') attributeGroup. **/
		MxNumberTenths getRelativeX() const;

		/** Returns the internal value of the 'relative-y' (aka 'RelativeY') attribute.
		    This attribute is a member of the 'position' (aka 'Position') attributeGroup. **/
		MxNumberTenths getRelativeY() const;

		/** Returns the internal value of the 'placement' (aka 'Placement') attribute.
		    This attribute is a member of the 'placement' (aka 'Placement') attributeGroup. **/
		MxEnumAboveBelow getPlacement() const;

		/** Returns the internal value of the 'orientation' (aka 'Orientation')
		    attribute. This attribute is a member of the 'orientation' (aka 'Orientation')
		    attributeGroup. **/
		MxEnumOverUnder getOrientation() const;

		/** Returns the internal value of the 'bezier-offset' (aka 'BezierOffset')
		    attribute. This attribute is a member of the 'bezier' (aka 'Bezier')
		    attributeGroup. **/
		MxNumberDivisions getBezierOffset() const;

		/** Returns the internal value of the 'bezier-offset2' (aka 'BezierOffset2')
		    attribute. This attribute is a member of the 'bezier' (aka 'Bezier')
		    attributeGroup. **/
		MxNumberDivisions getBezierOffset2() const;

		/** Returns the internal value of the 'bezier-x' (aka 'BezierX') attribute.
		    This attribute is a member of the 'bezier' (aka 'Bezier') attributeGroup. **/
		MxNumberTenths getBezierX() const;

		/** Returns the internal value of the 'bezier-y' (aka 'BezierY') attribute.
		    This attribute is a member of the 'bezier' (aka 'Bezier') attributeGroup. **/
		MxNumberTenths getBezierY() const;

		/** Returns the internal value of the 'bezier-x2' (aka 'BezierX2') attribute.
		    This attribute is a member of the 'bezier' (aka 'Bezier') attributeGroup. **/
		MxNumberTenths getBezierX2() const;

		/** Returns the internal value of the 'bezier-y2' (aka 'BezierY2') attribute.
		    This attribute is a member of the 'bezier' (aka 'Bezier') attributeGroup. **/
		MxNumberTenths getBezierY2() const;

		/** Returns the internal value of the 'color' (aka 'Color') attribute.
		    This attribute is a member of the 'color' (aka 'Color') attributeGroup. **/
		MxColor getColor() const;

/* Set Attribute Values --------------------------------------------------------------- */

		/** Sets the internal value of the 'type' (aka 'Type') attribute. **/
		void setType( const MxEnumStartStopContinue& value_in );

		/** Sets the internal value of the 'number' (aka 'Number') attribute. **/
		void setNumber( const MxNumberNumberLevel& value_in );

		/** Sets the internal value of the 'line-type' (aka 'LineType') attribute.
		    This attribute is a member of the 'line-type' (aka 'LineType') attributeGroup. **/
		void setLineType( const MxEnumLineType& value_in );

		/** Sets the internal value of the 'dash-length' (aka 'DashLength') attribute.
		    This attribute is a member of the 'dashed-formatting' (aka 'DashedFormatting')
		    attributeGroup. **/
		void setDashLength( const MxNumberTenths& value_in );

		/** Sets the internal value of the 'space-length' (aka 'SpaceLength') attribute.
		    This attribute is a member of the 'dashed-formatting' (aka 'DashedFormatting')
		    attributeGroup. **/
		void setSpaceLength( const MxNumberTenths& value_in );

		/** Sets the internal value of the 'default-x' (aka 'DefaultX') attribute.
		    This attribute is a member of the 'position' (aka 'Position') attributeGroup. **/
		void setDefaultX( const MxNumberTenths& value_in );

		/** Sets the internal value of the 'default-y' (aka 'DefaultY') attribute.
		    This attribute is a member of the 'position' (aka 'Position') attributeGroup. **/
		void setDefaultY( const MxNumberTenths& value_in );

		/** Sets the internal value of the 'relative-x' (aka 'RelativeX') attribute.
		    This attribute is a member of the 'position' (aka 'Position') attributeGroup. **/
		void setRelativeX( const MxNumberTenths& value_in );

		/** Sets the internal value of the 'relative-y' (aka 'RelativeY') attribute.
		    This attribute is a member of the 'position' (aka 'Position') attributeGroup. **/
		void setRelativeY( const MxNumberTenths& value_in );

		/** Sets the internal value of the 'placement' (aka 'Placement') attribute.
		    This attribute is a member of the 'placement' (aka 'Placement') attributeGroup. **/
		void setPlacement( const MxEnumAboveBelow& value_in );

		/** Sets the internal value of the 'orientation' (aka 'Orientation') attribute.
		    This attribute is a member of the 'orientation' (aka 'Orientation')
		    attributeGroup. **/
		void setOrientation( const MxEnumOverUnder& value_in );

		/** Sets the internal value of the 'bezier-offset' (aka 'BezierOffset')
		    attribute. This attribute is a member of the 'bezier' (aka 'Bezier')
		    attributeGroup. **/
		void setBezierOffset( const MxNumberDivisions& value_in );

		/** Sets the internal value of the 'bezier-offset2' (aka 'BezierOffset2')
		    attribute. This attribute is a member of the 'bezier' (aka 'Bezier')
		    attributeGroup. **/
		void setBezierOffset2( const MxNumberDivisions& value_in );

		/** Sets the internal value of the 'bezier-x' (aka 'BezierX') attribute.
		    This attribute is a member of the 'bezier' (aka 'Bezier') attributeGroup. **/
		void setBezierX( const MxNumberTenths& value_in );

		/** Sets the internal value of the 'bezier-y' (aka 'BezierY') attribute.
		    This attribute is a member of the 'bezier' (aka 'Bezier') attributeGroup. **/
		void setBezierY( const MxNumberTenths& value_in );

		/** Sets the internal value of the 'bezier-x2' (aka 'BezierX2') attribute.
		    This attribute is a member of the 'bezier' (aka 'Bezier') attributeGroup. **/
		void setBezierX2( const MxNumberTenths& value_in );

		/** Sets the internal value of the 'bezier-y2' (aka 'BezierY2') attribute.
		    This attribute is a member of the 'bezier' (aka 'Bezier') attributeGroup. **/
		void setBezierY2( const MxNumberTenths& value_in );

		/** Sets the internal value of the 'color' (aka 'Color') attribute. This
		    attribute is a member of the 'color' (aka 'Color') attributeGroup. **/
		void setColor( const MxColor& value_in );

/* Get IsAttributeRequired Values ----------------------------------------------------- */

		/** Indicates whether or not the 'type' (aka 'Type') attribute is required
		    to be present in a MusicXML document. **/
		bool getIsTypeRequired() const;

		/** Indicates whether or not the 'number' (aka 'Number') attribute is required
		    to be present in a MusicXML document. **/
		bool getIsNumberRequired() const;

		/** Indicates whether or not the 'line-type' (aka 'LineType') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'line-type' (aka 'LineType') attributeGroup. **/
		bool getIsLineTypeRequired() const;

		/** Indicates whether or not the 'dash-length' (aka 'DashLength') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'dashed-formatting' (aka 'DashedFormatting') attributeGroup. **/
		bool getIsDashLengthRequired() const;

		/** Indicates whether or not the 'space-length' (aka 'SpaceLength') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'dashed-formatting' (aka 'DashedFormatting') attributeGroup. **/
		bool getIsSpaceLengthRequired() const;

		/** Indicates whether or not the 'default-x' (aka 'DefaultX') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'position' (aka 'Position') attributeGroup. **/
		bool getIsDefaultXRequired() const;

		/** Indicates whether or not the 'default-y' (aka 'DefaultY') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'position' (aka 'Position') attributeGroup. **/
		bool getIsDefaultYRequired() const;

		/** Indicates whether or not the 'relative-x' (aka 'RelativeX') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'position' (aka 'Position') attributeGroup. **/
		bool getIsRelativeXRequired() const;

		/** Indicates whether or not the 'relative-y' (aka 'RelativeY') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'position' (aka 'Position') attributeGroup. **/
		bool getIsRelativeYRequired() const;

		/** Indicates whether or not the 'placement' (aka 'Placement') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'placement' (aka 'Placement') attributeGroup. **/
		bool getIsPlacementRequired() const;

		/** Indicates whether or not the 'orientation' (aka 'Orientation') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'orientation' (aka 'Orientation') attributeGroup. **/
		bool getIsOrientationRequired() const;

		/** Indicates whether or not the 'bezier-offset' (aka 'BezierOffset') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'bezier' (aka 'Bezier') attributeGroup. **/
		bool getIsBezierOffsetRequired() const;

		/** Indicates whether or not the 'bezier-offset2' (aka 'BezierOffset2')
		    attribute is required to be present in a MusicXML document. This attribute
		    is a member of the 'bezier' (aka 'Bezier') attributeGroup. **/
		bool getIsBezierOffset2Required() const;

		/** Indicates whether or not the 'bezier-x' (aka 'BezierX') attribute is
		    required to be present in a MusicXML document. This attribute is a
		    member of the 'bezier' (aka 'Bezier') attributeGroup. **/
		bool getIsBezierXRequired() const;

		/** Indicates whether or not the 'bezier-y' (aka 'BezierY') attribute is
		    required to be present in a MusicXML document. This attribute is a
		    member of the 'bezier' (aka 'Bezier') attributeGroup. **/
		bool getIsBezierYRequired() const;

		/** Indicates whether or not the 'bezier-x2' (aka 'BezierX2') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'bezier' (aka 'Bezier') attributeGroup. **/
		bool getIsBezierX2Required() const;

		/** Indicates whether or not the 'bezier-y2' (aka 'BezierY2') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'bezier' (aka 'Bezier') attributeGroup. **/
		bool getIsBezierY2Required() const;

		/** Indicates whether or not the 'color' (aka 'Color') attribute is required
		    to be present in a MusicXML document. This attribute is a member of
		    the 'color' (aka 'Color') attributeGroup. **/
		bool getIsColorRequired() const;

/* Get IsAttributePresent Values ------------------------------------------------------ */

		/** Indicates whether or not the 'type' (aka 'Type') attribute is (or will
		    be) present in the MusicXML document. Note: because 'type' is required
		    by the MusicXML specification, getIsTypePresent will always return
		    'true'. There is no corresponding setIsTypePresent function for this
		    attribute. **/
		bool getIsTypePresent() const;

		/** Indicates whether or not the 'number' (aka 'Number') attribute is (or
		    will be) present in the MusicXML document. **/
		bool getIsNumberPresent() const;

		/** Indicates whether or not the 'line-type' (aka 'LineType') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'line-type' (aka 'LineType') attributeGroup. **/
		bool getIsLineTypePresent() const;

		/** Indicates whether or not the 'dash-length' (aka 'DashLength') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'dashed-formatting' (aka 'DashedFormatting') attributeGroup. **/
		bool getIsDashLengthPresent() const;

		/** Indicates whether or not the 'space-length' (aka 'SpaceLength') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'dashed-formatting' (aka 'DashedFormatting') attributeGroup. **/
		bool getIsSpaceLengthPresent() const;

		/** Indicates whether or not the 'default-x' (aka 'DefaultX') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'position' (aka 'Position') attributeGroup. **/
		bool getIsDefaultXPresent() const;

		/** Indicates whether or not the 'default-y' (aka 'DefaultY') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'position' (aka 'Position') attributeGroup. **/
		bool getIsDefaultYPresent() const;

		/** Indicates whether or not the 'relative-x' (aka 'RelativeX') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'position' (aka 'Position') attributeGroup. **/
		bool getIsRelativeXPresent() const;

		/** Indicates whether or not the 'relative-y' (aka 'RelativeY') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'position' (aka 'Position') attributeGroup. **/
		bool getIsRelativeYPresent() const;

		/** Indicates whether or not the 'placement' (aka 'Placement') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'placement' (aka 'Placement') attributeGroup. **/
		bool getIsPlacementPresent() const;

		/** Indicates whether or not the 'orientation' (aka 'Orientation') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'orientation' (aka 'Orientation') attributeGroup. **/
		bool getIsOrientationPresent() const;

		/** Indicates whether or not the 'bezier-offset' (aka 'BezierOffset') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'bezier' (aka 'Bezier') attributeGroup. **/
		bool getIsBezierOffsetPresent() const;

		/** Indicates whether or not the 'bezier-offset2' (aka 'BezierOffset2')
		    attribute is (or will be) present in the MusicXML document. This attribute
		    is a member of the 'bezier' (aka 'Bezier') attributeGroup. **/
		bool getIsBezierOffset2Present() const;

		/** Indicates whether or not the 'bezier-x' (aka 'BezierX') attribute is
		    (or will be) present in the MusicXML document. This attribute is a
		    member of the 'bezier' (aka 'Bezier') attributeGroup. **/
		bool getIsBezierXPresent() const;

		/** Indicates whether or not the 'bezier-y' (aka 'BezierY') attribute is
		    (or will be) present in the MusicXML document. This attribute is a
		    member of the 'bezier' (aka 'Bezier') attributeGroup. **/
		bool getIsBezierYPresent() const;

		/** Indicates whether or not the 'bezier-x2' (aka 'BezierX2') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'bezier' (aka 'Bezier') attributeGroup. **/
		bool getIsBezierX2Present() const;

		/** Indicates whether or not the 'bezier-y2' (aka 'BezierY2') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'bezier' (aka 'Bezier') attributeGroup. **/
		bool getIsBezierY2Present() const;

		/** Indicates whether or not the 'color' (aka 'Color') attribute is (or
		    will be) present in the MusicXML document. This attribute is a member
		    of the 'color' (aka 'Color') attributeGroup. **/
		bool getIsColorPresent() const;

/* Set IsAttributePresent Values ------------------------------------------------------ */

		/** Sets the value which indicates whether or not the 'number' (aka 'Number')
		    attribute is (or will be) present in the MusicXML document. **/
		void setIsNumberPresent( const bool& value_in );

		/** Sets the value which indicates whether or not the 'line-type' (aka
		    'LineType') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'line-type' (aka 'LineType') attributeGroup. **/
		void setIsLineTypePresent( const bool& value_in );

		/** Sets the value which indicates whether or not the 'dash-length' (aka
		    'DashLength') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'dashed-formatting' (aka 'DashedFormatting')
		    attributeGroup. **/
		void setIsDashLengthPresent( const bool& value_in );

		/** Sets the value which indicates whether or not the 'space-length' (aka
		    'SpaceLength') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'dashed-formatting' (aka 'DashedFormatting')
		    attributeGroup. **/
		void setIsSpaceLengthPresent( const bool& value_in );

		/** Sets the value which indicates whether or not the 'default-x' (aka
		    'DefaultX') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'position' (aka 'Position') attributeGroup. **/
		void setIsDefaultXPresent( const bool& value_in );

		/** Sets the value which indicates whether or not the 'default-y' (aka
		    'DefaultY') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'position' (aka 'Position') attributeGroup. **/
		void setIsDefaultYPresent( const bool& value_in );

		/** Sets the value which indicates whether or not the 'relative-x' (aka
		    'RelativeX') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'position' (aka 'Position') attributeGroup. **/
		void setIsRelativeXPresent( const bool& value_in );

		/** Sets the value which indicates whether or not the 'relative-y' (aka
		    'RelativeY') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'position' (aka 'Position') attributeGroup. **/
		void setIsRelativeYPresent( const bool& value_in );

		/** Sets the value which indicates whether or not the 'placement' (aka
		    'Placement') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'placement' (aka 'Placement') attributeGroup. **/
		void setIsPlacementPresent( const bool& value_in );

		/** Sets the value which indicates whether or not the 'orientation' (aka
		    'Orientation') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'orientation' (aka 'Orientation')
		    attributeGroup. **/
		void setIsOrientationPresent( const bool& value_in );

		/** Sets the value which indicates whether or not the 'bezier-offset' (aka
		    'BezierOffset') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'bezier' (aka 'Bezier') attributeGroup. **/
		void setIsBezierOffsetPresent( const bool& value_in );

		/** Sets the value which indicates whether or not the 'bezier-offset2'
		    (aka 'BezierOffset2') attribute is (or will be) present in the MusicXML
		    document. This attribute is a member of the 'bezier' (aka 'Bezier')
		    attributeGroup. **/
		void setIsBezierOffset2Present( const bool& value_in );

		/** Sets the value which indicates whether or not the 'bezier-x' (aka 'BezierX')
		    attribute is (or will be) present in the MusicXML document. This attribute
		    is a member of the 'bezier' (aka 'Bezier') attributeGroup. **/
		void setIsBezierXPresent( const bool& value_in );

		/** Sets the value which indicates whether or not the 'bezier-y' (aka 'BezierY')
		    attribute is (or will be) present in the MusicXML document. This attribute
		    is a member of the 'bezier' (aka 'Bezier') attributeGroup. **/
		void setIsBezierYPresent( const bool& value_in );

		/** Sets the value which indicates whether or not the 'bezier-x2' (aka
		    'BezierX2') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'bezier' (aka 'Bezier') attributeGroup. **/
		void setIsBezierX2Present( const bool& value_in );

		/** Sets the value which indicates whether or not the 'bezier-y2' (aka
		    'BezierY2') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'bezier' (aka 'Bezier') attributeGroup. **/
		void setIsBezierY2Present( const bool& value_in );

		/** Sets the value which indicates whether or not the 'color' (aka 'Color')
		    attribute is (or will be) present in the MusicXML document. This attribute
		    is a member of the 'color' (aka 'Color') attributeGroup. **/
		void setIsColorPresent( const bool& value_in );

/* Stringing and Streaming ------------------------------------------------------------ */

		/** Returns the xml representation of the object's value. **/
		std::string toString() const;

		/** Returns the xml representation of the object's value. **/
		std::ostream& stream( std::ostream& os_out ) const;

/* Get IsAttributeDefaultDefined Values ----------------------------------------------- */

		/** Indicates whether or not the 'type' (aka 'Type') has a default value
		    defined in the MusicXML xsd specification (either explicitly or in
		    the documentation). **/
		bool getIsTypeDefaultDefined() const;

		/** Indicates whether or not the 'number' (aka 'Number') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). **/
		bool getIsNumberDefaultDefined() const;

		/** Indicates whether or not the 'line-type' (aka 'LineType') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'line-type'
		    (aka 'LineType') attributeGroup. **/
		bool getIsLineTypeDefaultDefined() const;

		/** Indicates whether or not the 'dash-length' (aka 'DashLength') has a
		    default value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'dashed-formatting'
		    (aka 'DashedFormatting') attributeGroup. **/
		bool getIsDashLengthDefaultDefined() const;

		/** Indicates whether or not the 'space-length' (aka 'SpaceLength') has
		    a default value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'dashed-formatting'
		    (aka 'DashedFormatting') attributeGroup. **/
		bool getIsSpaceLengthDefaultDefined() const;

		/** Indicates whether or not the 'default-x' (aka 'DefaultX') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'position'
		    (aka 'Position') attributeGroup. **/
		bool getIsDefaultXDefaultDefined() const;

		/** Indicates whether or not the 'default-y' (aka 'DefaultY') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'position'
		    (aka 'Position') attributeGroup. **/
		bool getIsDefaultYDefaultDefined() const;

		/** Indicates whether or not the 'relative-x' (aka 'RelativeX') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'position'
		    (aka 'Position') attributeGroup. **/
		bool getIsRelativeXDefaultDefined() const;

		/** Indicates whether or not the 'relative-y' (aka 'RelativeY') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'position'
		    (aka 'Position') attributeGroup. **/
		bool getIsRelativeYDefaultDefined() const;

		/** Indicates whether or not the 'placement' (aka 'Placement') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'placement'
		    (aka 'Placement') attributeGroup. **/
		bool getIsPlacementDefaultDefined() const;

		/** Indicates whether or not the 'orientation' (aka 'Orientation') has
		    a default value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'orientation'
		    (aka 'Orientation') attributeGroup. **/
		bool getIsOrientationDefaultDefined() const;

		/** Indicates whether or not the 'bezier-offset' (aka 'BezierOffset') has
		    a default value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'bezier'
		    (aka 'Bezier') attributeGroup. **/
		bool getIsBezierOffsetDefaultDefined() const;

		/** Indicates whether or not the 'bezier-offset2' (aka 'BezierOffset2')
		    has a default value defined in the MusicXML xsd specification (either
		    explicitly or in the documentation). This attribute is a member of
		    the 'bezier' (aka 'Bezier') attributeGroup. **/
		bool getIsBezierOffset2DefaultDefined() const;

		/** Indicates whether or not the 'bezier-x' (aka 'BezierX') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'bezier'
		    (aka 'Bezier') attributeGroup. **/
		bool getIsBezierXDefaultDefined() const;

		/** Indicates whether or not the 'bezier-y' (aka 'BezierY') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'bezier'
		    (aka 'Bezier') attributeGroup. **/
		bool getIsBezierYDefaultDefined() const;

		/** Indicates whether or not the 'bezier-x2' (aka 'BezierX2') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'bezier'
		    (aka 'Bezier') attributeGroup. **/
		bool getIsBezierX2DefaultDefined() const;

		/** Indicates whether or not the 'bezier-y2' (aka 'BezierY2') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'bezier'
		    (aka 'Bezier') attributeGroup. **/
		bool getIsBezierY2DefaultDefined() const;

		/** Indicates whether or not the 'color' (aka 'Color') has a default value
		    defined in the MusicXML xsd specification (either explicitly or in
		    the documentation). This attribute is a member of the 'color' (aka
		    'Color') attributeGroup. **/
		bool getIsColorDefaultDefined() const;

/* Get AttributeDefaultValue ---------------------------------------------------------- */

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'type' (aka 'Type') attribute. **/
		MxEnumStartStopContinue getTypeDefaultValue() const;

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'number' (aka 'Number') attribute. **/
		MxNumberNumberLevel getNumberDefaultValue() const;

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'line-type' (aka 'LineType') attribute. This attribute is a member
		    of the 'line-type' (aka 'LineType') attributeGroup. **/
		MxEnumLineType getLineTypeDefaultValue() const;

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'dash-length' (aka 'DashLength') attribute. This attribute is a
		    member of the 'dashed-formatting' (aka 'DashedFormatting') attributeGroup. **/
		MxNumberTenths getDashLengthDefaultValue() const;

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'space-length' (aka 'SpaceLength') attribute. This attribute is
		    a member of the 'dashed-formatting' (aka 'DashedFormatting') attributeGroup. **/
		MxNumberTenths getSpaceLengthDefaultValue() const;

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'default-x' (aka 'DefaultX') attribute. This attribute is a member
		    of the 'position' (aka 'Position') attributeGroup. **/
		MxNumberTenths getDefaultXDefaultValue() const;

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'default-y' (aka 'DefaultY') attribute. This attribute is a member
		    of the 'position' (aka 'Position') attributeGroup. **/
		MxNumberTenths getDefaultYDefaultValue() const;

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'relative-x' (aka 'RelativeX') attribute. This attribute is a member
		    of the 'position' (aka 'Position') attributeGroup. **/
		MxNumberTenths getRelativeXDefaultValue() const;

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'relative-y' (aka 'RelativeY') attribute. This attribute is a member
		    of the 'position' (aka 'Position') attributeGroup. **/
		MxNumberTenths getRelativeYDefaultValue() const;

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'placement' (aka 'Placement') attribute. This attribute is a member
		    of the 'placement' (aka 'Placement') attributeGroup. **/
		MxEnumAboveBelow getPlacementDefaultValue() const;

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'orientation' (aka 'Orientation') attribute. This attribute is
		    a member of the 'orientation' (aka 'Orientation') attributeGroup. **/
		MxEnumOverUnder getOrientationDefaultValue() const;

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'bezier-offset' (aka 'BezierOffset') attribute. This attribute
		    is a member of the 'bezier' (aka 'Bezier') attributeGroup. **/
		MxNumberDivisions getBezierOffsetDefaultValue() const;

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'bezier-offset2' (aka 'BezierOffset2') attribute. This attribute
		    is a member of the 'bezier' (aka 'Bezier') attributeGroup. **/
		MxNumberDivisions getBezierOffset2DefaultValue() const;

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'bezier-x' (aka 'BezierX') attribute. This attribute is a member
		    of the 'bezier' (aka 'Bezier') attributeGroup. **/
		MxNumberTenths getBezierXDefaultValue() const;

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'bezier-y' (aka 'BezierY') attribute. This attribute is a member
		    of the 'bezier' (aka 'Bezier') attributeGroup. **/
		MxNumberTenths getBezierYDefaultValue() const;

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'bezier-x2' (aka 'BezierX2') attribute. This attribute is a member
		    of the 'bezier' (aka 'Bezier') attributeGroup. **/
		MxNumberTenths getBezierX2DefaultValue() const;

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'bezier-y2' (aka 'BezierY2') attribute. This attribute is a member
		    of the 'bezier' (aka 'Bezier') attributeGroup. **/
		MxNumberTenths getBezierY2DefaultValue() const;

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'color' (aka 'Color') attribute. This attribute is a member of
		    the 'color' (aka 'Color') attributeGroup. **/
		MxColor getColorDefaultValue() const;

/* Impl ------------------------------------------------------------------------------- */

	private:
		class Impl;
		std::unique_ptr<Impl> myImpl;

	}; // class MxCxEmptyTied

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

