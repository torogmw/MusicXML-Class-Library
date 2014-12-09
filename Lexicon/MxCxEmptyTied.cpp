/* See MusicXML License at the bottom of this code page. */

/**
  * @file       MxCxEmptyTied.cpp
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
 **/

#include "MxCxEmptyTied.h"
#include <sstream>
#include "_hidden_attributeStream.h"
#include "MxAttrGrpBezier.h"
#include "MxAttrGrpColor.h"
#include "MxAttrGrpDashedFormatting.h"
#include "MxAttrGrpLineType.h"
#include "MxAttrGrpOrientation.h"
#include "MxAttrGrpPlacement.h"
#include "MxAttrGrpPosition.h"

/* Impl ------------------------------------------------------------------------------- */

namespace lexicon
{
	struct MxCxEmptyTied::Impl
	{
		Impl( const std::string& elementName )
		:myElementName( elementName )
		,myType()
		,myNumber()
		,myMxAttrGrpLineType()
		,myMxAttrGrpDashedFormatting()
		,myMxAttrGrpPosition()
		,myMxAttrGrpPlacement()
		,myMxAttrGrpOrientation()
		,myMxAttrGrpBezier()
		,myMxAttrGrpColor()
		,myIsTypePresent( true )
		,myIsNumberPresent( false )
		{}

	private:
		std::string myElementName;
		MxEnumStartStopContinue myType;
		MxNumberNumberLevel myNumber;
		MxAttrGrpLineType myMxAttrGrpLineType;
		MxAttrGrpDashedFormatting myMxAttrGrpDashedFormatting;
		MxAttrGrpPosition myMxAttrGrpPosition;
		MxAttrGrpPlacement myMxAttrGrpPlacement;
		MxAttrGrpOrientation myMxAttrGrpOrientation;
		MxAttrGrpBezier myMxAttrGrpBezier;
		MxAttrGrpColor myMxAttrGrpColor;
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

		/** Returns the internal value of the 'orientation' (aka 'Orientation')
		    attribute. This attribute is a member of the 'orientation' (aka 'Orientation')
		    attributeGroup. **/
		MxEnumOverUnder getOrientation() const
		{
			return myMxAttrGrpOrientation.getOrientation();
		}

		/** Returns the internal value of the 'bezier-offset' (aka 'BezierOffset')
		    attribute. This attribute is a member of the 'bezier' (aka 'Bezier')
		    attributeGroup. **/
		MxNumberDivisions getBezierOffset() const
		{
			return myMxAttrGrpBezier.getBezierOffset();
		}

		/** Returns the internal value of the 'bezier-offset2' (aka 'BezierOffset2')
		    attribute. This attribute is a member of the 'bezier' (aka 'Bezier')
		    attributeGroup. **/
		MxNumberDivisions getBezierOffset2() const
		{
			return myMxAttrGrpBezier.getBezierOffset2();
		}

		/** Returns the internal value of the 'bezier-x' (aka 'BezierX') attribute.
		    This attribute is a member of the 'bezier' (aka 'Bezier') attributeGroup. **/
		MxNumberTenths getBezierX() const
		{
			return myMxAttrGrpBezier.getBezierX();
		}

		/** Returns the internal value of the 'bezier-y' (aka 'BezierY') attribute.
		    This attribute is a member of the 'bezier' (aka 'Bezier') attributeGroup. **/
		MxNumberTenths getBezierY() const
		{
			return myMxAttrGrpBezier.getBezierY();
		}

		/** Returns the internal value of the 'bezier-x2' (aka 'BezierX2') attribute.
		    This attribute is a member of the 'bezier' (aka 'Bezier') attributeGroup. **/
		MxNumberTenths getBezierX2() const
		{
			return myMxAttrGrpBezier.getBezierX2();
		}

		/** Returns the internal value of the 'bezier-y2' (aka 'BezierY2') attribute.
		    This attribute is a member of the 'bezier' (aka 'Bezier') attributeGroup. **/
		MxNumberTenths getBezierY2() const
		{
			return myMxAttrGrpBezier.getBezierY2();
		}

		/** Returns the internal value of the 'color' (aka 'Color') attribute.
		    This attribute is a member of the 'color' (aka 'Color') attributeGroup. **/
		MxColor getColor() const
		{
			return myMxAttrGrpColor.getColor();
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

		/** Sets the internal value of the 'orientation' (aka 'Orientation') attribute.
		    This attribute is a member of the 'orientation' (aka 'Orientation')
		    attributeGroup. **/
		void setOrientation( const MxEnumOverUnder& value_in )
		{
			myMxAttrGrpOrientation.setOrientation( value_in );
		}

		/** Sets the internal value of the 'bezier-offset' (aka 'BezierOffset')
		    attribute. This attribute is a member of the 'bezier' (aka 'Bezier')
		    attributeGroup. **/
		void setBezierOffset( const MxNumberDivisions& value_in )
		{
			myMxAttrGrpBezier.setBezierOffset( value_in );
		}

		/** Sets the internal value of the 'bezier-offset2' (aka 'BezierOffset2')
		    attribute. This attribute is a member of the 'bezier' (aka 'Bezier')
		    attributeGroup. **/
		void setBezierOffset2( const MxNumberDivisions& value_in )
		{
			myMxAttrGrpBezier.setBezierOffset2( value_in );
		}

		/** Sets the internal value of the 'bezier-x' (aka 'BezierX') attribute.
		    This attribute is a member of the 'bezier' (aka 'Bezier') attributeGroup. **/
		void setBezierX( const MxNumberTenths& value_in )
		{
			myMxAttrGrpBezier.setBezierX( value_in );
		}

		/** Sets the internal value of the 'bezier-y' (aka 'BezierY') attribute.
		    This attribute is a member of the 'bezier' (aka 'Bezier') attributeGroup. **/
		void setBezierY( const MxNumberTenths& value_in )
		{
			myMxAttrGrpBezier.setBezierY( value_in );
		}

		/** Sets the internal value of the 'bezier-x2' (aka 'BezierX2') attribute.
		    This attribute is a member of the 'bezier' (aka 'Bezier') attributeGroup. **/
		void setBezierX2( const MxNumberTenths& value_in )
		{
			myMxAttrGrpBezier.setBezierX2( value_in );
		}

		/** Sets the internal value of the 'bezier-y2' (aka 'BezierY2') attribute.
		    This attribute is a member of the 'bezier' (aka 'Bezier') attributeGroup. **/
		void setBezierY2( const MxNumberTenths& value_in )
		{
			myMxAttrGrpBezier.setBezierY2( value_in );
		}

		/** Sets the internal value of the 'color' (aka 'Color') attribute. This
		    attribute is a member of the 'color' (aka 'Color') attributeGroup. **/
		void setColor( const MxColor& value_in )
		{
			myMxAttrGrpColor.setColor( value_in );
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

		/** Indicates whether or not the 'orientation' (aka 'Orientation') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'orientation' (aka 'Orientation') attributeGroup. **/
		bool getIsOrientationRequired() const
		{
			return myMxAttrGrpOrientation.getIsOrientationRequired();
		}

		/** Indicates whether or not the 'bezier-offset' (aka 'BezierOffset') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'bezier' (aka 'Bezier') attributeGroup. **/
		bool getIsBezierOffsetRequired() const
		{
			return myMxAttrGrpBezier.getIsBezierOffsetRequired();
		}

		/** Indicates whether or not the 'bezier-offset2' (aka 'BezierOffset2')
		    attribute is required to be present in a MusicXML document. This attribute
		    is a member of the 'bezier' (aka 'Bezier') attributeGroup. **/
		bool getIsBezierOffset2Required() const
		{
			return myMxAttrGrpBezier.getIsBezierOffset2Required();
		}

		/** Indicates whether or not the 'bezier-x' (aka 'BezierX') attribute is
		    required to be present in a MusicXML document. This attribute is a
		    member of the 'bezier' (aka 'Bezier') attributeGroup. **/
		bool getIsBezierXRequired() const
		{
			return myMxAttrGrpBezier.getIsBezierXRequired();
		}

		/** Indicates whether or not the 'bezier-y' (aka 'BezierY') attribute is
		    required to be present in a MusicXML document. This attribute is a
		    member of the 'bezier' (aka 'Bezier') attributeGroup. **/
		bool getIsBezierYRequired() const
		{
			return myMxAttrGrpBezier.getIsBezierYRequired();
		}

		/** Indicates whether or not the 'bezier-x2' (aka 'BezierX2') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'bezier' (aka 'Bezier') attributeGroup. **/
		bool getIsBezierX2Required() const
		{
			return myMxAttrGrpBezier.getIsBezierX2Required();
		}

		/** Indicates whether or not the 'bezier-y2' (aka 'BezierY2') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'bezier' (aka 'Bezier') attributeGroup. **/
		bool getIsBezierY2Required() const
		{
			return myMxAttrGrpBezier.getIsBezierY2Required();
		}

		/** Indicates whether or not the 'color' (aka 'Color') attribute is required
		    to be present in a MusicXML document. This attribute is a member of
		    the 'color' (aka 'Color') attributeGroup. **/
		bool getIsColorRequired() const
		{
			return myMxAttrGrpColor.getIsColorRequired();
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

		/** Indicates whether or not the 'orientation' (aka 'Orientation') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'orientation' (aka 'Orientation') attributeGroup. **/
		bool getIsOrientationPresent() const
		{
			return myMxAttrGrpOrientation.getIsOrientationPresent();
		}

		/** Indicates whether or not the 'bezier-offset' (aka 'BezierOffset') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'bezier' (aka 'Bezier') attributeGroup. **/
		bool getIsBezierOffsetPresent() const
		{
			return myMxAttrGrpBezier.getIsBezierOffsetPresent();
		}

		/** Indicates whether or not the 'bezier-offset2' (aka 'BezierOffset2')
		    attribute is (or will be) present in the MusicXML document. This attribute
		    is a member of the 'bezier' (aka 'Bezier') attributeGroup. **/
		bool getIsBezierOffset2Present() const
		{
			return myMxAttrGrpBezier.getIsBezierOffset2Present();
		}

		/** Indicates whether or not the 'bezier-x' (aka 'BezierX') attribute is
		    (or will be) present in the MusicXML document. This attribute is a
		    member of the 'bezier' (aka 'Bezier') attributeGroup. **/
		bool getIsBezierXPresent() const
		{
			return myMxAttrGrpBezier.getIsBezierXPresent();
		}

		/** Indicates whether or not the 'bezier-y' (aka 'BezierY') attribute is
		    (or will be) present in the MusicXML document. This attribute is a
		    member of the 'bezier' (aka 'Bezier') attributeGroup. **/
		bool getIsBezierYPresent() const
		{
			return myMxAttrGrpBezier.getIsBezierYPresent();
		}

		/** Indicates whether or not the 'bezier-x2' (aka 'BezierX2') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'bezier' (aka 'Bezier') attributeGroup. **/
		bool getIsBezierX2Present() const
		{
			return myMxAttrGrpBezier.getIsBezierX2Present();
		}

		/** Indicates whether or not the 'bezier-y2' (aka 'BezierY2') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'bezier' (aka 'Bezier') attributeGroup. **/
		bool getIsBezierY2Present() const
		{
			return myMxAttrGrpBezier.getIsBezierY2Present();
		}

		/** Indicates whether or not the 'color' (aka 'Color') attribute is (or
		    will be) present in the MusicXML document. This attribute is a member
		    of the 'color' (aka 'Color') attributeGroup. **/
		bool getIsColorPresent() const
		{
			return myMxAttrGrpColor.getIsColorPresent();
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

		/** Sets the value which indicates whether or not the 'orientation' (aka
		    'Orientation') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'orientation' (aka 'Orientation')
		    attributeGroup. **/
		void setIsOrientationPresent( const bool& value_in )
		{
			myMxAttrGrpOrientation.setIsOrientationPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'bezier-offset' (aka
		    'BezierOffset') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'bezier' (aka 'Bezier') attributeGroup. **/
		void setIsBezierOffsetPresent( const bool& value_in )
		{
			myMxAttrGrpBezier.setIsBezierOffsetPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'bezier-offset2'
		    (aka 'BezierOffset2') attribute is (or will be) present in the MusicXML
		    document. This attribute is a member of the 'bezier' (aka 'Bezier')
		    attributeGroup. **/
		void setIsBezierOffset2Present( const bool& value_in )
		{
			myMxAttrGrpBezier.setIsBezierOffset2Present( value_in );
		}

		/** Sets the value which indicates whether or not the 'bezier-x' (aka 'BezierX')
		    attribute is (or will be) present in the MusicXML document. This attribute
		    is a member of the 'bezier' (aka 'Bezier') attributeGroup. **/
		void setIsBezierXPresent( const bool& value_in )
		{
			myMxAttrGrpBezier.setIsBezierXPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'bezier-y' (aka 'BezierY')
		    attribute is (or will be) present in the MusicXML document. This attribute
		    is a member of the 'bezier' (aka 'Bezier') attributeGroup. **/
		void setIsBezierYPresent( const bool& value_in )
		{
			myMxAttrGrpBezier.setIsBezierYPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'bezier-x2' (aka
		    'BezierX2') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'bezier' (aka 'Bezier') attributeGroup. **/
		void setIsBezierX2Present( const bool& value_in )
		{
			myMxAttrGrpBezier.setIsBezierX2Present( value_in );
		}

		/** Sets the value which indicates whether or not the 'bezier-y2' (aka
		    'BezierY2') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'bezier' (aka 'Bezier') attributeGroup. **/
		void setIsBezierY2Present( const bool& value_in )
		{
			myMxAttrGrpBezier.setIsBezierY2Present( value_in );
		}

		/** Sets the value which indicates whether or not the 'color' (aka 'Color')
		    attribute is (or will be) present in the MusicXML document. This attribute
		    is a member of the 'color' (aka 'Color') attributeGroup. **/
		void setIsColorPresent( const bool& value_in )
		{
			myMxAttrGrpColor.setIsColorPresent( value_in );
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
			hidden::attributeStream( getIsPlacementPresent(), "placement", getPlacement().toString(), os_out, isFirst );
			hidden::attributeStream( getIsOrientationPresent(), "orientation", getOrientation().toString(), os_out, isFirst );
			hidden::attributeStream( getIsBezierOffsetPresent(), "bezier-offset", getBezierOffset().toString(), os_out, isFirst );
			hidden::attributeStream( getIsBezierOffset2Present(), "bezier-offset2", getBezierOffset2().toString(), os_out, isFirst );
			hidden::attributeStream( getIsBezierXPresent(), "bezier-x", getBezierX().toString(), os_out, isFirst );
			hidden::attributeStream( getIsBezierYPresent(), "bezier-y", getBezierY().toString(), os_out, isFirst );
			hidden::attributeStream( getIsBezierX2Present(), "bezier-x2", getBezierX2().toString(), os_out, isFirst );
			hidden::attributeStream( getIsBezierY2Present(), "bezier-y2", getBezierY2().toString(), os_out, isFirst );
			hidden::attributeStream( getIsColorPresent(), "color", getColor().toString(), os_out, isFirst );
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

		/** Indicates whether or not the 'orientation' (aka 'Orientation') has
		    a default value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'orientation'
		    (aka 'Orientation') attributeGroup. **/
		bool getIsOrientationDefaultDefined() const
		{
			return myMxAttrGrpOrientation.getIsOrientationDefaultDefined();
		}

		/** Indicates whether or not the 'bezier-offset' (aka 'BezierOffset') has
		    a default value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'bezier'
		    (aka 'Bezier') attributeGroup. **/
		bool getIsBezierOffsetDefaultDefined() const
		{
			return myMxAttrGrpBezier.getIsBezierOffsetDefaultDefined();
		}

		/** Indicates whether or not the 'bezier-offset2' (aka 'BezierOffset2')
		    has a default value defined in the MusicXML xsd specification (either
		    explicitly or in the documentation). This attribute is a member of
		    the 'bezier' (aka 'Bezier') attributeGroup. **/
		bool getIsBezierOffset2DefaultDefined() const
		{
			return myMxAttrGrpBezier.getIsBezierOffset2DefaultDefined();
		}

		/** Indicates whether or not the 'bezier-x' (aka 'BezierX') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'bezier'
		    (aka 'Bezier') attributeGroup. **/
		bool getIsBezierXDefaultDefined() const
		{
			return myMxAttrGrpBezier.getIsBezierXDefaultDefined();
		}

		/** Indicates whether or not the 'bezier-y' (aka 'BezierY') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'bezier'
		    (aka 'Bezier') attributeGroup. **/
		bool getIsBezierYDefaultDefined() const
		{
			return myMxAttrGrpBezier.getIsBezierYDefaultDefined();
		}

		/** Indicates whether or not the 'bezier-x2' (aka 'BezierX2') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'bezier'
		    (aka 'Bezier') attributeGroup. **/
		bool getIsBezierX2DefaultDefined() const
		{
			return myMxAttrGrpBezier.getIsBezierX2DefaultDefined();
		}

		/** Indicates whether or not the 'bezier-y2' (aka 'BezierY2') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'bezier'
		    (aka 'Bezier') attributeGroup. **/
		bool getIsBezierY2DefaultDefined() const
		{
			return myMxAttrGrpBezier.getIsBezierY2DefaultDefined();
		}

		/** Indicates whether or not the 'color' (aka 'Color') has a default value
		    defined in the MusicXML xsd specification (either explicitly or in
		    the documentation). This attribute is a member of the 'color' (aka
		    'Color') attributeGroup. **/
		bool getIsColorDefaultDefined() const
		{
			return myMxAttrGrpColor.getIsColorDefaultDefined();
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
		    the 'orientation' (aka 'Orientation') attribute. This attribute is
		    a member of the 'orientation' (aka 'Orientation') attributeGroup. **/
		MxEnumOverUnder getOrientationDefaultValue() const
		{
			return myMxAttrGrpOrientation.getOrientationDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'bezier-offset' (aka 'BezierOffset') attribute. This attribute
		    is a member of the 'bezier' (aka 'Bezier') attributeGroup. **/
		MxNumberDivisions getBezierOffsetDefaultValue() const
		{
			return myMxAttrGrpBezier.getBezierOffsetDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'bezier-offset2' (aka 'BezierOffset2') attribute. This attribute
		    is a member of the 'bezier' (aka 'Bezier') attributeGroup. **/
		MxNumberDivisions getBezierOffset2DefaultValue() const
		{
			return myMxAttrGrpBezier.getBezierOffset2DefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'bezier-x' (aka 'BezierX') attribute. This attribute is a member
		    of the 'bezier' (aka 'Bezier') attributeGroup. **/
		MxNumberTenths getBezierXDefaultValue() const
		{
			return myMxAttrGrpBezier.getBezierXDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'bezier-y' (aka 'BezierY') attribute. This attribute is a member
		    of the 'bezier' (aka 'Bezier') attributeGroup. **/
		MxNumberTenths getBezierYDefaultValue() const
		{
			return myMxAttrGrpBezier.getBezierYDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'bezier-x2' (aka 'BezierX2') attribute. This attribute is a member
		    of the 'bezier' (aka 'Bezier') attributeGroup. **/
		MxNumberTenths getBezierX2DefaultValue() const
		{
			return myMxAttrGrpBezier.getBezierX2DefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'bezier-y2' (aka 'BezierY2') attribute. This attribute is a member
		    of the 'bezier' (aka 'Bezier') attributeGroup. **/
		MxNumberTenths getBezierY2DefaultValue() const
		{
			return myMxAttrGrpBezier.getBezierY2DefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'color' (aka 'Color') attribute. This attribute is a member of
		    the 'color' (aka 'Color') attributeGroup. **/
		MxColor getColorDefaultValue() const
		{
			return myMxAttrGrpColor.getColorDefaultValue();
		}

	}; // struct MxCxEmptyTied::Impl

	const int MxCxEmptyTied::Impl::myXsdID = 5488;
	const std::string MxCxEmptyTied::Impl::myXmlTypeName = "tied";
	const std::string MxCxEmptyTied::Impl::myCppClassName = "MxCxEmptyTied";
	const std::string MxCxEmptyTied::Impl::myDocumentation = "The tied type represents the notated tie. The tie element represents the tie sound. The number attribute is rarely needed to disambiguate ties, since note pitches will usually suffice. The attribute is implied rather than defaulting to 1 as with most elements. It is available for use in more complex tied notation situations.";

} // namespace lexicon


/* MxCxEmptyTied ---------------------------------------------------------------------- */

namespace lexicon
{

/* Constructor, Destructor, Copy, Assignment ------------------------------------------ */

	MxCxEmptyTied::MxCxEmptyTied( const std::string& elementName )
	:myImpl( new Impl( elementName ) ) {}

	MxCxEmptyTied::~MxCxEmptyTied() {}

	MxCxEmptyTied::MxCxEmptyTied( const MxCxEmptyTied& other )
	:myImpl( new Impl( *(other.myImpl) ) ) {}

	MxCxEmptyTied& MxCxEmptyTied::operator=( const MxCxEmptyTied& other )
	{
		this->myImpl = std::unique_ptr<Impl>( new Impl( *(other.myImpl) ) );
		return *this;
	}

/* GetSet Value and Element Name ------------------------------------------------------ */

	/** Returns the name of the Xml element employing this ComplexType. **/
	std::string MxCxEmptyTied::getElementName() const
	{
		return myImpl->getElementName();
	}

/* Get Class Information -------------------------------------------------------------- */

	/** Returns the name of this xs:complexType as found in the musicxml.xsd
	    document. **/
	std::string MxCxEmptyTied::getXmlTypeName() const
	{
		return myImpl->getXmlTypeName();
	}

	/** Returns the name of this C++ class. **/
	std::string MxCxEmptyTied::getClassName() const
	{
		return myImpl->getClassName();
	}

	/** Returns the documentation for this musicxml type as found in the musicxml.xsd
	    document. **/
	std::string MxCxEmptyTied::getDocumentation() const
	{
		return myImpl->getDocumentation();
	}

/* Get Attribute Values --------------------------------------------------------------- */

	/** Returns the internal value of the 'type' (aka 'Type') attribute. **/
	MxEnumStartStopContinue MxCxEmptyTied::getType() const
	{
		return myImpl->getType();
	}

	/** Returns the internal value of the 'number' (aka 'Number') attribute. **/
	MxNumberNumberLevel MxCxEmptyTied::getNumber() const
	{
		return myImpl->getNumber();
	}

	/** Returns the internal value of the 'line-type' (aka 'LineType') attribute.
	    This attribute is a member of the 'line-type' (aka 'LineType') attributeGroup. **/
	MxEnumLineType MxCxEmptyTied::getLineType() const
	{
		return myImpl->getLineType();
	}

	/** Returns the internal value of the 'dash-length' (aka 'DashLength')
	    attribute. This attribute is a member of the 'dashed-formatting' (aka
	    'DashedFormatting') attributeGroup. **/
	MxNumberTenths MxCxEmptyTied::getDashLength() const
	{
		return myImpl->getDashLength();
	}

	/** Returns the internal value of the 'space-length' (aka 'SpaceLength')
	    attribute. This attribute is a member of the 'dashed-formatting' (aka
	    'DashedFormatting') attributeGroup. **/
	MxNumberTenths MxCxEmptyTied::getSpaceLength() const
	{
		return myImpl->getSpaceLength();
	}

	/** Returns the internal value of the 'default-x' (aka 'DefaultX') attribute.
	    This attribute is a member of the 'position' (aka 'Position') attributeGroup. **/
	MxNumberTenths MxCxEmptyTied::getDefaultX() const
	{
		return myImpl->getDefaultX();
	}

	/** Returns the internal value of the 'default-y' (aka 'DefaultY') attribute.
	    This attribute is a member of the 'position' (aka 'Position') attributeGroup. **/
	MxNumberTenths MxCxEmptyTied::getDefaultY() const
	{
		return myImpl->getDefaultY();
	}

	/** Returns the internal value of the 'relative-x' (aka 'RelativeX') attribute.
	    This attribute is a member of the 'position' (aka 'Position') attributeGroup. **/
	MxNumberTenths MxCxEmptyTied::getRelativeX() const
	{
		return myImpl->getRelativeX();
	}

	/** Returns the internal value of the 'relative-y' (aka 'RelativeY') attribute.
	    This attribute is a member of the 'position' (aka 'Position') attributeGroup. **/
	MxNumberTenths MxCxEmptyTied::getRelativeY() const
	{
		return myImpl->getRelativeY();
	}

	/** Returns the internal value of the 'placement' (aka 'Placement') attribute.
	    This attribute is a member of the 'placement' (aka 'Placement') attributeGroup. **/
	MxEnumAboveBelow MxCxEmptyTied::getPlacement() const
	{
		return myImpl->getPlacement();
	}

	/** Returns the internal value of the 'orientation' (aka 'Orientation')
	    attribute. This attribute is a member of the 'orientation' (aka 'Orientation')
	    attributeGroup. **/
	MxEnumOverUnder MxCxEmptyTied::getOrientation() const
	{
		return myImpl->getOrientation();
	}

	/** Returns the internal value of the 'bezier-offset' (aka 'BezierOffset')
	    attribute. This attribute is a member of the 'bezier' (aka 'Bezier')
	    attributeGroup. **/
	MxNumberDivisions MxCxEmptyTied::getBezierOffset() const
	{
		return myImpl->getBezierOffset();
	}

	/** Returns the internal value of the 'bezier-offset2' (aka 'BezierOffset2')
	    attribute. This attribute is a member of the 'bezier' (aka 'Bezier')
	    attributeGroup. **/
	MxNumberDivisions MxCxEmptyTied::getBezierOffset2() const
	{
		return myImpl->getBezierOffset2();
	}

	/** Returns the internal value of the 'bezier-x' (aka 'BezierX') attribute.
	    This attribute is a member of the 'bezier' (aka 'Bezier') attributeGroup. **/
	MxNumberTenths MxCxEmptyTied::getBezierX() const
	{
		return myImpl->getBezierX();
	}

	/** Returns the internal value of the 'bezier-y' (aka 'BezierY') attribute.
	    This attribute is a member of the 'bezier' (aka 'Bezier') attributeGroup. **/
	MxNumberTenths MxCxEmptyTied::getBezierY() const
	{
		return myImpl->getBezierY();
	}

	/** Returns the internal value of the 'bezier-x2' (aka 'BezierX2') attribute.
	    This attribute is a member of the 'bezier' (aka 'Bezier') attributeGroup. **/
	MxNumberTenths MxCxEmptyTied::getBezierX2() const
	{
		return myImpl->getBezierX2();
	}

	/** Returns the internal value of the 'bezier-y2' (aka 'BezierY2') attribute.
	    This attribute is a member of the 'bezier' (aka 'Bezier') attributeGroup. **/
	MxNumberTenths MxCxEmptyTied::getBezierY2() const
	{
		return myImpl->getBezierY2();
	}

	/** Returns the internal value of the 'color' (aka 'Color') attribute.
	    This attribute is a member of the 'color' (aka 'Color') attributeGroup. **/
	MxColor MxCxEmptyTied::getColor() const
	{
		return myImpl->getColor();
	}

/* Set Attribute Values --------------------------------------------------------------- */

	/** Sets the internal value of the 'type' (aka 'Type') attribute. **/
	void MxCxEmptyTied::setType( const MxEnumStartStopContinue& value_in )
	{
		myImpl->setType( value_in );
	}

	/** Sets the internal value of the 'number' (aka 'Number') attribute. **/
	void MxCxEmptyTied::setNumber( const MxNumberNumberLevel& value_in )
	{
		myImpl->setNumber( value_in );
	}

	/** Sets the internal value of the 'line-type' (aka 'LineType') attribute.
	    This attribute is a member of the 'line-type' (aka 'LineType') attributeGroup. **/
	void MxCxEmptyTied::setLineType( const MxEnumLineType& value_in )
	{
		myImpl->setLineType( value_in );
	}

	/** Sets the internal value of the 'dash-length' (aka 'DashLength') attribute.
	    This attribute is a member of the 'dashed-formatting' (aka 'DashedFormatting')
	    attributeGroup. **/
	void MxCxEmptyTied::setDashLength( const MxNumberTenths& value_in )
	{
		myImpl->setDashLength( value_in );
	}

	/** Sets the internal value of the 'space-length' (aka 'SpaceLength') attribute.
	    This attribute is a member of the 'dashed-formatting' (aka 'DashedFormatting')
	    attributeGroup. **/
	void MxCxEmptyTied::setSpaceLength( const MxNumberTenths& value_in )
	{
		myImpl->setSpaceLength( value_in );
	}

	/** Sets the internal value of the 'default-x' (aka 'DefaultX') attribute.
	    This attribute is a member of the 'position' (aka 'Position') attributeGroup. **/
	void MxCxEmptyTied::setDefaultX( const MxNumberTenths& value_in )
	{
		myImpl->setDefaultX( value_in );
	}

	/** Sets the internal value of the 'default-y' (aka 'DefaultY') attribute.
	    This attribute is a member of the 'position' (aka 'Position') attributeGroup. **/
	void MxCxEmptyTied::setDefaultY( const MxNumberTenths& value_in )
	{
		myImpl->setDefaultY( value_in );
	}

	/** Sets the internal value of the 'relative-x' (aka 'RelativeX') attribute.
	    This attribute is a member of the 'position' (aka 'Position') attributeGroup. **/
	void MxCxEmptyTied::setRelativeX( const MxNumberTenths& value_in )
	{
		myImpl->setRelativeX( value_in );
	}

	/** Sets the internal value of the 'relative-y' (aka 'RelativeY') attribute.
	    This attribute is a member of the 'position' (aka 'Position') attributeGroup. **/
	void MxCxEmptyTied::setRelativeY( const MxNumberTenths& value_in )
	{
		myImpl->setRelativeY( value_in );
	}

	/** Sets the internal value of the 'placement' (aka 'Placement') attribute.
	    This attribute is a member of the 'placement' (aka 'Placement') attributeGroup. **/
	void MxCxEmptyTied::setPlacement( const MxEnumAboveBelow& value_in )
	{
		myImpl->setPlacement( value_in );
	}

	/** Sets the internal value of the 'orientation' (aka 'Orientation') attribute.
	    This attribute is a member of the 'orientation' (aka 'Orientation')
	    attributeGroup. **/
	void MxCxEmptyTied::setOrientation( const MxEnumOverUnder& value_in )
	{
		myImpl->setOrientation( value_in );
	}

	/** Sets the internal value of the 'bezier-offset' (aka 'BezierOffset')
	    attribute. This attribute is a member of the 'bezier' (aka 'Bezier')
	    attributeGroup. **/
	void MxCxEmptyTied::setBezierOffset( const MxNumberDivisions& value_in )
	{
		myImpl->setBezierOffset( value_in );
	}

	/** Sets the internal value of the 'bezier-offset2' (aka 'BezierOffset2')
	    attribute. This attribute is a member of the 'bezier' (aka 'Bezier')
	    attributeGroup. **/
	void MxCxEmptyTied::setBezierOffset2( const MxNumberDivisions& value_in )
	{
		myImpl->setBezierOffset2( value_in );
	}

	/** Sets the internal value of the 'bezier-x' (aka 'BezierX') attribute.
	    This attribute is a member of the 'bezier' (aka 'Bezier') attributeGroup. **/
	void MxCxEmptyTied::setBezierX( const MxNumberTenths& value_in )
	{
		myImpl->setBezierX( value_in );
	}

	/** Sets the internal value of the 'bezier-y' (aka 'BezierY') attribute.
	    This attribute is a member of the 'bezier' (aka 'Bezier') attributeGroup. **/
	void MxCxEmptyTied::setBezierY( const MxNumberTenths& value_in )
	{
		myImpl->setBezierY( value_in );
	}

	/** Sets the internal value of the 'bezier-x2' (aka 'BezierX2') attribute.
	    This attribute is a member of the 'bezier' (aka 'Bezier') attributeGroup. **/
	void MxCxEmptyTied::setBezierX2( const MxNumberTenths& value_in )
	{
		myImpl->setBezierX2( value_in );
	}

	/** Sets the internal value of the 'bezier-y2' (aka 'BezierY2') attribute.
	    This attribute is a member of the 'bezier' (aka 'Bezier') attributeGroup. **/
	void MxCxEmptyTied::setBezierY2( const MxNumberTenths& value_in )
	{
		myImpl->setBezierY2( value_in );
	}

	/** Sets the internal value of the 'color' (aka 'Color') attribute. This
	    attribute is a member of the 'color' (aka 'Color') attributeGroup. **/
	void MxCxEmptyTied::setColor( const MxColor& value_in )
	{
		myImpl->setColor( value_in );
	}

/* Get IsAttributeRequired Values ----------------------------------------------------- */

	/** Indicates whether or not the 'type' (aka 'Type') attribute is required
	    to be present in a MusicXML document. **/
	bool MxCxEmptyTied::getIsTypeRequired() const
	{
		return myImpl->getIsTypeRequired();
	}

	/** Indicates whether or not the 'number' (aka 'Number') attribute is required
	    to be present in a MusicXML document. **/
	bool MxCxEmptyTied::getIsNumberRequired() const
	{
		return myImpl->getIsNumberRequired();
	}

	/** Indicates whether or not the 'line-type' (aka 'LineType') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'line-type' (aka 'LineType') attributeGroup. **/
	bool MxCxEmptyTied::getIsLineTypeRequired() const
	{
		return myImpl->getIsLineTypeRequired();
	}

	/** Indicates whether or not the 'dash-length' (aka 'DashLength') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'dashed-formatting' (aka 'DashedFormatting') attributeGroup. **/
	bool MxCxEmptyTied::getIsDashLengthRequired() const
	{
		return myImpl->getIsDashLengthRequired();
	}

	/** Indicates whether or not the 'space-length' (aka 'SpaceLength') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'dashed-formatting' (aka 'DashedFormatting') attributeGroup. **/
	bool MxCxEmptyTied::getIsSpaceLengthRequired() const
	{
		return myImpl->getIsSpaceLengthRequired();
	}

	/** Indicates whether or not the 'default-x' (aka 'DefaultX') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'position' (aka 'Position') attributeGroup. **/
	bool MxCxEmptyTied::getIsDefaultXRequired() const
	{
		return myImpl->getIsDefaultXRequired();
	}

	/** Indicates whether or not the 'default-y' (aka 'DefaultY') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'position' (aka 'Position') attributeGroup. **/
	bool MxCxEmptyTied::getIsDefaultYRequired() const
	{
		return myImpl->getIsDefaultYRequired();
	}

	/** Indicates whether or not the 'relative-x' (aka 'RelativeX') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'position' (aka 'Position') attributeGroup. **/
	bool MxCxEmptyTied::getIsRelativeXRequired() const
	{
		return myImpl->getIsRelativeXRequired();
	}

	/** Indicates whether or not the 'relative-y' (aka 'RelativeY') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'position' (aka 'Position') attributeGroup. **/
	bool MxCxEmptyTied::getIsRelativeYRequired() const
	{
		return myImpl->getIsRelativeYRequired();
	}

	/** Indicates whether or not the 'placement' (aka 'Placement') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'placement' (aka 'Placement') attributeGroup. **/
	bool MxCxEmptyTied::getIsPlacementRequired() const
	{
		return myImpl->getIsPlacementRequired();
	}

	/** Indicates whether or not the 'orientation' (aka 'Orientation') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'orientation' (aka 'Orientation') attributeGroup. **/
	bool MxCxEmptyTied::getIsOrientationRequired() const
	{
		return myImpl->getIsOrientationRequired();
	}

	/** Indicates whether or not the 'bezier-offset' (aka 'BezierOffset') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'bezier' (aka 'Bezier') attributeGroup. **/
	bool MxCxEmptyTied::getIsBezierOffsetRequired() const
	{
		return myImpl->getIsBezierOffsetRequired();
	}

	/** Indicates whether or not the 'bezier-offset2' (aka 'BezierOffset2')
	    attribute is required to be present in a MusicXML document. This attribute
	    is a member of the 'bezier' (aka 'Bezier') attributeGroup. **/
	bool MxCxEmptyTied::getIsBezierOffset2Required() const
	{
		return myImpl->getIsBezierOffset2Required();
	}

	/** Indicates whether or not the 'bezier-x' (aka 'BezierX') attribute is
	    required to be present in a MusicXML document. This attribute is a
	    member of the 'bezier' (aka 'Bezier') attributeGroup. **/
	bool MxCxEmptyTied::getIsBezierXRequired() const
	{
		return myImpl->getIsBezierXRequired();
	}

	/** Indicates whether or not the 'bezier-y' (aka 'BezierY') attribute is
	    required to be present in a MusicXML document. This attribute is a
	    member of the 'bezier' (aka 'Bezier') attributeGroup. **/
	bool MxCxEmptyTied::getIsBezierYRequired() const
	{
		return myImpl->getIsBezierYRequired();
	}

	/** Indicates whether or not the 'bezier-x2' (aka 'BezierX2') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'bezier' (aka 'Bezier') attributeGroup. **/
	bool MxCxEmptyTied::getIsBezierX2Required() const
	{
		return myImpl->getIsBezierX2Required();
	}

	/** Indicates whether or not the 'bezier-y2' (aka 'BezierY2') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'bezier' (aka 'Bezier') attributeGroup. **/
	bool MxCxEmptyTied::getIsBezierY2Required() const
	{
		return myImpl->getIsBezierY2Required();
	}

	/** Indicates whether or not the 'color' (aka 'Color') attribute is required
	    to be present in a MusicXML document. This attribute is a member of
	    the 'color' (aka 'Color') attributeGroup. **/
	bool MxCxEmptyTied::getIsColorRequired() const
	{
		return myImpl->getIsColorRequired();
	}

/* Get IsAttributePresent Values ------------------------------------------------------ */

	/** Indicates whether or not the 'type' (aka 'Type') attribute is (or will
	    be) present in the MusicXML document. Note: because 'type' is required
	    by the MusicXML specification, getIsTypePresent will always return
	    'true'. There is no corresponding setIsTypePresent function for this
	    attribute. **/
	bool MxCxEmptyTied::getIsTypePresent() const
	{
		return myImpl->getIsTypePresent();
	}

	/** Indicates whether or not the 'number' (aka 'Number') attribute is (or
	    will be) present in the MusicXML document. **/
	bool MxCxEmptyTied::getIsNumberPresent() const
	{
		return myImpl->getIsNumberPresent();
	}

	/** Indicates whether or not the 'line-type' (aka 'LineType') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'line-type' (aka 'LineType') attributeGroup. **/
	bool MxCxEmptyTied::getIsLineTypePresent() const
	{
		return myImpl->getIsLineTypePresent();
	}

	/** Indicates whether or not the 'dash-length' (aka 'DashLength') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'dashed-formatting' (aka 'DashedFormatting') attributeGroup. **/
	bool MxCxEmptyTied::getIsDashLengthPresent() const
	{
		return myImpl->getIsDashLengthPresent();
	}

	/** Indicates whether or not the 'space-length' (aka 'SpaceLength') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'dashed-formatting' (aka 'DashedFormatting') attributeGroup. **/
	bool MxCxEmptyTied::getIsSpaceLengthPresent() const
	{
		return myImpl->getIsSpaceLengthPresent();
	}

	/** Indicates whether or not the 'default-x' (aka 'DefaultX') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'position' (aka 'Position') attributeGroup. **/
	bool MxCxEmptyTied::getIsDefaultXPresent() const
	{
		return myImpl->getIsDefaultXPresent();
	}

	/** Indicates whether or not the 'default-y' (aka 'DefaultY') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'position' (aka 'Position') attributeGroup. **/
	bool MxCxEmptyTied::getIsDefaultYPresent() const
	{
		return myImpl->getIsDefaultYPresent();
	}

	/** Indicates whether or not the 'relative-x' (aka 'RelativeX') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'position' (aka 'Position') attributeGroup. **/
	bool MxCxEmptyTied::getIsRelativeXPresent() const
	{
		return myImpl->getIsRelativeXPresent();
	}

	/** Indicates whether or not the 'relative-y' (aka 'RelativeY') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'position' (aka 'Position') attributeGroup. **/
	bool MxCxEmptyTied::getIsRelativeYPresent() const
	{
		return myImpl->getIsRelativeYPresent();
	}

	/** Indicates whether or not the 'placement' (aka 'Placement') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'placement' (aka 'Placement') attributeGroup. **/
	bool MxCxEmptyTied::getIsPlacementPresent() const
	{
		return myImpl->getIsPlacementPresent();
	}

	/** Indicates whether or not the 'orientation' (aka 'Orientation') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'orientation' (aka 'Orientation') attributeGroup. **/
	bool MxCxEmptyTied::getIsOrientationPresent() const
	{
		return myImpl->getIsOrientationPresent();
	}

	/** Indicates whether or not the 'bezier-offset' (aka 'BezierOffset') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'bezier' (aka 'Bezier') attributeGroup. **/
	bool MxCxEmptyTied::getIsBezierOffsetPresent() const
	{
		return myImpl->getIsBezierOffsetPresent();
	}

	/** Indicates whether or not the 'bezier-offset2' (aka 'BezierOffset2')
	    attribute is (or will be) present in the MusicXML document. This attribute
	    is a member of the 'bezier' (aka 'Bezier') attributeGroup. **/
	bool MxCxEmptyTied::getIsBezierOffset2Present() const
	{
		return myImpl->getIsBezierOffset2Present();
	}

	/** Indicates whether or not the 'bezier-x' (aka 'BezierX') attribute is
	    (or will be) present in the MusicXML document. This attribute is a
	    member of the 'bezier' (aka 'Bezier') attributeGroup. **/
	bool MxCxEmptyTied::getIsBezierXPresent() const
	{
		return myImpl->getIsBezierXPresent();
	}

	/** Indicates whether or not the 'bezier-y' (aka 'BezierY') attribute is
	    (or will be) present in the MusicXML document. This attribute is a
	    member of the 'bezier' (aka 'Bezier') attributeGroup. **/
	bool MxCxEmptyTied::getIsBezierYPresent() const
	{
		return myImpl->getIsBezierYPresent();
	}

	/** Indicates whether or not the 'bezier-x2' (aka 'BezierX2') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'bezier' (aka 'Bezier') attributeGroup. **/
	bool MxCxEmptyTied::getIsBezierX2Present() const
	{
		return myImpl->getIsBezierX2Present();
	}

	/** Indicates whether or not the 'bezier-y2' (aka 'BezierY2') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'bezier' (aka 'Bezier') attributeGroup. **/
	bool MxCxEmptyTied::getIsBezierY2Present() const
	{
		return myImpl->getIsBezierY2Present();
	}

	/** Indicates whether or not the 'color' (aka 'Color') attribute is (or
	    will be) present in the MusicXML document. This attribute is a member
	    of the 'color' (aka 'Color') attributeGroup. **/
	bool MxCxEmptyTied::getIsColorPresent() const
	{
		return myImpl->getIsColorPresent();
	}

/* Set IsAttributePresent Values ------------------------------------------------------ */

	/** Sets the value which indicates whether or not the 'number' (aka 'Number')
	    attribute is (or will be) present in the MusicXML document. **/
	void MxCxEmptyTied::setIsNumberPresent( const bool& value_in )
	{
		myImpl->setIsNumberPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'line-type' (aka
	    'LineType') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'line-type' (aka 'LineType') attributeGroup. **/
	void MxCxEmptyTied::setIsLineTypePresent( const bool& value_in )
	{
		myImpl->setIsLineTypePresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'dash-length' (aka
	    'DashLength') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'dashed-formatting' (aka 'DashedFormatting')
	    attributeGroup. **/
	void MxCxEmptyTied::setIsDashLengthPresent( const bool& value_in )
	{
		myImpl->setIsDashLengthPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'space-length' (aka
	    'SpaceLength') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'dashed-formatting' (aka 'DashedFormatting')
	    attributeGroup. **/
	void MxCxEmptyTied::setIsSpaceLengthPresent( const bool& value_in )
	{
		myImpl->setIsSpaceLengthPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'default-x' (aka
	    'DefaultX') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'position' (aka 'Position') attributeGroup. **/
	void MxCxEmptyTied::setIsDefaultXPresent( const bool& value_in )
	{
		myImpl->setIsDefaultXPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'default-y' (aka
	    'DefaultY') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'position' (aka 'Position') attributeGroup. **/
	void MxCxEmptyTied::setIsDefaultYPresent( const bool& value_in )
	{
		myImpl->setIsDefaultYPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'relative-x' (aka
	    'RelativeX') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'position' (aka 'Position') attributeGroup. **/
	void MxCxEmptyTied::setIsRelativeXPresent( const bool& value_in )
	{
		myImpl->setIsRelativeXPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'relative-y' (aka
	    'RelativeY') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'position' (aka 'Position') attributeGroup. **/
	void MxCxEmptyTied::setIsRelativeYPresent( const bool& value_in )
	{
		myImpl->setIsRelativeYPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'placement' (aka
	    'Placement') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'placement' (aka 'Placement') attributeGroup. **/
	void MxCxEmptyTied::setIsPlacementPresent( const bool& value_in )
	{
		myImpl->setIsPlacementPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'orientation' (aka
	    'Orientation') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'orientation' (aka 'Orientation')
	    attributeGroup. **/
	void MxCxEmptyTied::setIsOrientationPresent( const bool& value_in )
	{
		myImpl->setIsOrientationPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'bezier-offset' (aka
	    'BezierOffset') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'bezier' (aka 'Bezier') attributeGroup. **/
	void MxCxEmptyTied::setIsBezierOffsetPresent( const bool& value_in )
	{
		myImpl->setIsBezierOffsetPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'bezier-offset2'
	    (aka 'BezierOffset2') attribute is (or will be) present in the MusicXML
	    document. This attribute is a member of the 'bezier' (aka 'Bezier')
	    attributeGroup. **/
	void MxCxEmptyTied::setIsBezierOffset2Present( const bool& value_in )
	{
		myImpl->setIsBezierOffset2Present( value_in );
	}

	/** Sets the value which indicates whether or not the 'bezier-x' (aka 'BezierX')
	    attribute is (or will be) present in the MusicXML document. This attribute
	    is a member of the 'bezier' (aka 'Bezier') attributeGroup. **/
	void MxCxEmptyTied::setIsBezierXPresent( const bool& value_in )
	{
		myImpl->setIsBezierXPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'bezier-y' (aka 'BezierY')
	    attribute is (or will be) present in the MusicXML document. This attribute
	    is a member of the 'bezier' (aka 'Bezier') attributeGroup. **/
	void MxCxEmptyTied::setIsBezierYPresent( const bool& value_in )
	{
		myImpl->setIsBezierYPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'bezier-x2' (aka
	    'BezierX2') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'bezier' (aka 'Bezier') attributeGroup. **/
	void MxCxEmptyTied::setIsBezierX2Present( const bool& value_in )
	{
		myImpl->setIsBezierX2Present( value_in );
	}

	/** Sets the value which indicates whether or not the 'bezier-y2' (aka
	    'BezierY2') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'bezier' (aka 'Bezier') attributeGroup. **/
	void MxCxEmptyTied::setIsBezierY2Present( const bool& value_in )
	{
		myImpl->setIsBezierY2Present( value_in );
	}

	/** Sets the value which indicates whether or not the 'color' (aka 'Color')
	    attribute is (or will be) present in the MusicXML document. This attribute
	    is a member of the 'color' (aka 'Color') attributeGroup. **/
	void MxCxEmptyTied::setIsColorPresent( const bool& value_in )
	{
		myImpl->setIsColorPresent( value_in );
	}

/* Stringing and Streaming ------------------------------------------------------------ */

	/** Returns the xml representation of the object's value. **/
	std::string MxCxEmptyTied::toString() const
	{
		return myImpl->toString();
	}

	/** Returns the xml representation of the object's value. **/
	std::ostream& MxCxEmptyTied::stream( std::ostream& os_out ) const
	{
		return myImpl->stream( os_out );
	}

/* Get IsAttributeDefaultDefined Values ----------------------------------------------- */

	/** Indicates whether or not the 'type' (aka 'Type') has a default value
	    defined in the MusicXML xsd specification (either explicitly or in
	    the documentation). **/
	bool MxCxEmptyTied::getIsTypeDefaultDefined() const
	{
		return myImpl->getIsTypeDefaultDefined();
	}

	/** Indicates whether or not the 'number' (aka 'Number') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). **/
	bool MxCxEmptyTied::getIsNumberDefaultDefined() const
	{
		return myImpl->getIsNumberDefaultDefined();
	}

	/** Indicates whether or not the 'line-type' (aka 'LineType') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'line-type'
	    (aka 'LineType') attributeGroup. **/
	bool MxCxEmptyTied::getIsLineTypeDefaultDefined() const
	{
		return myImpl->getIsLineTypeDefaultDefined();
	}

	/** Indicates whether or not the 'dash-length' (aka 'DashLength') has a
	    default value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'dashed-formatting'
	    (aka 'DashedFormatting') attributeGroup. **/
	bool MxCxEmptyTied::getIsDashLengthDefaultDefined() const
	{
		return myImpl->getIsDashLengthDefaultDefined();
	}

	/** Indicates whether or not the 'space-length' (aka 'SpaceLength') has
	    a default value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'dashed-formatting'
	    (aka 'DashedFormatting') attributeGroup. **/
	bool MxCxEmptyTied::getIsSpaceLengthDefaultDefined() const
	{
		return myImpl->getIsSpaceLengthDefaultDefined();
	}

	/** Indicates whether or not the 'default-x' (aka 'DefaultX') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'position'
	    (aka 'Position') attributeGroup. **/
	bool MxCxEmptyTied::getIsDefaultXDefaultDefined() const
	{
		return myImpl->getIsDefaultXDefaultDefined();
	}

	/** Indicates whether or not the 'default-y' (aka 'DefaultY') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'position'
	    (aka 'Position') attributeGroup. **/
	bool MxCxEmptyTied::getIsDefaultYDefaultDefined() const
	{
		return myImpl->getIsDefaultYDefaultDefined();
	}

	/** Indicates whether or not the 'relative-x' (aka 'RelativeX') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'position'
	    (aka 'Position') attributeGroup. **/
	bool MxCxEmptyTied::getIsRelativeXDefaultDefined() const
	{
		return myImpl->getIsRelativeXDefaultDefined();
	}

	/** Indicates whether or not the 'relative-y' (aka 'RelativeY') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'position'
	    (aka 'Position') attributeGroup. **/
	bool MxCxEmptyTied::getIsRelativeYDefaultDefined() const
	{
		return myImpl->getIsRelativeYDefaultDefined();
	}

	/** Indicates whether or not the 'placement' (aka 'Placement') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'placement'
	    (aka 'Placement') attributeGroup. **/
	bool MxCxEmptyTied::getIsPlacementDefaultDefined() const
	{
		return myImpl->getIsPlacementDefaultDefined();
	}

	/** Indicates whether or not the 'orientation' (aka 'Orientation') has
	    a default value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'orientation'
	    (aka 'Orientation') attributeGroup. **/
	bool MxCxEmptyTied::getIsOrientationDefaultDefined() const
	{
		return myImpl->getIsOrientationDefaultDefined();
	}

	/** Indicates whether or not the 'bezier-offset' (aka 'BezierOffset') has
	    a default value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'bezier'
	    (aka 'Bezier') attributeGroup. **/
	bool MxCxEmptyTied::getIsBezierOffsetDefaultDefined() const
	{
		return myImpl->getIsBezierOffsetDefaultDefined();
	}

	/** Indicates whether or not the 'bezier-offset2' (aka 'BezierOffset2')
	    has a default value defined in the MusicXML xsd specification (either
	    explicitly or in the documentation). This attribute is a member of
	    the 'bezier' (aka 'Bezier') attributeGroup. **/
	bool MxCxEmptyTied::getIsBezierOffset2DefaultDefined() const
	{
		return myImpl->getIsBezierOffset2DefaultDefined();
	}

	/** Indicates whether or not the 'bezier-x' (aka 'BezierX') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'bezier'
	    (aka 'Bezier') attributeGroup. **/
	bool MxCxEmptyTied::getIsBezierXDefaultDefined() const
	{
		return myImpl->getIsBezierXDefaultDefined();
	}

	/** Indicates whether or not the 'bezier-y' (aka 'BezierY') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'bezier'
	    (aka 'Bezier') attributeGroup. **/
	bool MxCxEmptyTied::getIsBezierYDefaultDefined() const
	{
		return myImpl->getIsBezierYDefaultDefined();
	}

	/** Indicates whether or not the 'bezier-x2' (aka 'BezierX2') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'bezier'
	    (aka 'Bezier') attributeGroup. **/
	bool MxCxEmptyTied::getIsBezierX2DefaultDefined() const
	{
		return myImpl->getIsBezierX2DefaultDefined();
	}

	/** Indicates whether or not the 'bezier-y2' (aka 'BezierY2') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'bezier'
	    (aka 'Bezier') attributeGroup. **/
	bool MxCxEmptyTied::getIsBezierY2DefaultDefined() const
	{
		return myImpl->getIsBezierY2DefaultDefined();
	}

	/** Indicates whether or not the 'color' (aka 'Color') has a default value
	    defined in the MusicXML xsd specification (either explicitly or in
	    the documentation). This attribute is a member of the 'color' (aka
	    'Color') attributeGroup. **/
	bool MxCxEmptyTied::getIsColorDefaultDefined() const
	{
		return myImpl->getIsColorDefaultDefined();
	}

/* Get AttributeDefaultValue ---------------------------------------------------------- */

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'type' (aka 'Type') attribute. **/
	MxEnumStartStopContinue MxCxEmptyTied::getTypeDefaultValue() const
	{
		return myImpl->getTypeDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'number' (aka 'Number') attribute. **/
	MxNumberNumberLevel MxCxEmptyTied::getNumberDefaultValue() const
	{
		return myImpl->getNumberDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'line-type' (aka 'LineType') attribute. This attribute is a member
	    of the 'line-type' (aka 'LineType') attributeGroup. **/
	MxEnumLineType MxCxEmptyTied::getLineTypeDefaultValue() const
	{
		return myImpl->getLineTypeDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'dash-length' (aka 'DashLength') attribute. This attribute is a
	    member of the 'dashed-formatting' (aka 'DashedFormatting') attributeGroup. **/
	MxNumberTenths MxCxEmptyTied::getDashLengthDefaultValue() const
	{
		return myImpl->getDashLengthDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'space-length' (aka 'SpaceLength') attribute. This attribute is
	    a member of the 'dashed-formatting' (aka 'DashedFormatting') attributeGroup. **/
	MxNumberTenths MxCxEmptyTied::getSpaceLengthDefaultValue() const
	{
		return myImpl->getSpaceLengthDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'default-x' (aka 'DefaultX') attribute. This attribute is a member
	    of the 'position' (aka 'Position') attributeGroup. **/
	MxNumberTenths MxCxEmptyTied::getDefaultXDefaultValue() const
	{
		return myImpl->getDefaultXDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'default-y' (aka 'DefaultY') attribute. This attribute is a member
	    of the 'position' (aka 'Position') attributeGroup. **/
	MxNumberTenths MxCxEmptyTied::getDefaultYDefaultValue() const
	{
		return myImpl->getDefaultYDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'relative-x' (aka 'RelativeX') attribute. This attribute is a member
	    of the 'position' (aka 'Position') attributeGroup. **/
	MxNumberTenths MxCxEmptyTied::getRelativeXDefaultValue() const
	{
		return myImpl->getRelativeXDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'relative-y' (aka 'RelativeY') attribute. This attribute is a member
	    of the 'position' (aka 'Position') attributeGroup. **/
	MxNumberTenths MxCxEmptyTied::getRelativeYDefaultValue() const
	{
		return myImpl->getRelativeYDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'placement' (aka 'Placement') attribute. This attribute is a member
	    of the 'placement' (aka 'Placement') attributeGroup. **/
	MxEnumAboveBelow MxCxEmptyTied::getPlacementDefaultValue() const
	{
		return myImpl->getPlacementDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'orientation' (aka 'Orientation') attribute. This attribute is
	    a member of the 'orientation' (aka 'Orientation') attributeGroup. **/
	MxEnumOverUnder MxCxEmptyTied::getOrientationDefaultValue() const
	{
		return myImpl->getOrientationDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'bezier-offset' (aka 'BezierOffset') attribute. This attribute
	    is a member of the 'bezier' (aka 'Bezier') attributeGroup. **/
	MxNumberDivisions MxCxEmptyTied::getBezierOffsetDefaultValue() const
	{
		return myImpl->getBezierOffsetDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'bezier-offset2' (aka 'BezierOffset2') attribute. This attribute
	    is a member of the 'bezier' (aka 'Bezier') attributeGroup. **/
	MxNumberDivisions MxCxEmptyTied::getBezierOffset2DefaultValue() const
	{
		return myImpl->getBezierOffset2DefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'bezier-x' (aka 'BezierX') attribute. This attribute is a member
	    of the 'bezier' (aka 'Bezier') attributeGroup. **/
	MxNumberTenths MxCxEmptyTied::getBezierXDefaultValue() const
	{
		return myImpl->getBezierXDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'bezier-y' (aka 'BezierY') attribute. This attribute is a member
	    of the 'bezier' (aka 'Bezier') attributeGroup. **/
	MxNumberTenths MxCxEmptyTied::getBezierYDefaultValue() const
	{
		return myImpl->getBezierYDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'bezier-x2' (aka 'BezierX2') attribute. This attribute is a member
	    of the 'bezier' (aka 'Bezier') attributeGroup. **/
	MxNumberTenths MxCxEmptyTied::getBezierX2DefaultValue() const
	{
		return myImpl->getBezierX2DefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'bezier-y2' (aka 'BezierY2') attribute. This attribute is a member
	    of the 'bezier' (aka 'Bezier') attributeGroup. **/
	MxNumberTenths MxCxEmptyTied::getBezierY2DefaultValue() const
	{
		return myImpl->getBezierY2DefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'color' (aka 'Color') attribute. This attribute is a member of
	    the 'color' (aka 'Color') attributeGroup. **/
	MxColor MxCxEmptyTied::getColorDefaultValue() const
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

