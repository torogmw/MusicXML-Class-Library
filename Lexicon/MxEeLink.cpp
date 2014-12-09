/* See MusicXML License at the bottom of this code page. */

/**
  * @file       MxEeLink.cpp
  * @class      lexicon::MxEeLink
  * @author     Matthew James Briggs
  * @email      matthew.james.briggs@gmail.com
  * @url        http://matthewjamesbriggs.com
  * @date       2014-12-05 16:47:03
  * @project    Lexicon
  * @version    1.0
  * @musicxmlid 5662
  * 
  * @brief The 'Link' class serves as a binding for the MusicXml 'link' element.
  * 
 **/

#include "MxEeLink.h"
#include <sstream>
#include "MxCxEmptyLink.h"
#include "MxAttrGrpElementPosition.h"
#include "MxAttrGrpLinkAttributes.h"
#include "MxAttrGrpPosition.h"

/* Impl ------------------------------------------------------------------------------- */

namespace lexicon
{
	struct MxEeLink::Impl
	{
		Impl()
		:myMxCxEmptyValue( MxCxEmptyLink( "link" ) )
		{}

	private:
		MxCxEmptyLink myMxCxEmptyValue;

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

		/** Returns the internal value of the 'xlink:href' (aka 'XlinkHref') attribute.
		    This attribute is a member of the 'link-attributes' (aka 'LinkAttributes')
		    attributeGroup. **/
		XlinkHref getXlinkHref() const
		{
			return myMxCxEmptyValue.getXlinkHref();
		}

		/** Returns the internal value of the 'xlink:type' (aka 'XlinkType') attribute.
		    This attribute is a member of the 'link-attributes' (aka 'LinkAttributes')
		    attributeGroup. **/
		XlinkType getXlinkType() const
		{
			return myMxCxEmptyValue.getXlinkType();
		}

		/** Returns the internal value of the 'xlink:role' (aka 'XlinkRole') attribute.
		    This attribute is a member of the 'link-attributes' (aka 'LinkAttributes')
		    attributeGroup. **/
		XlinkRole getXlinkRole() const
		{
			return myMxCxEmptyValue.getXlinkRole();
		}

		/** Returns the internal value of the 'xlink:title' (aka 'XlinkTitle')
		    attribute. This attribute is a member of the 'link-attributes' (aka
		    'LinkAttributes') attributeGroup. **/
		XlinkTitle getXlinkTitle() const
		{
			return myMxCxEmptyValue.getXlinkTitle();
		}

		/** Returns the internal value of the 'xlink:show' (aka 'XlinkShow') attribute.
		    This attribute is a member of the 'link-attributes' (aka 'LinkAttributes')
		    attributeGroup. **/
		XlinkShow getXlinkShow() const
		{
			return myMxCxEmptyValue.getXlinkShow();
		}

		/** Returns the internal value of the 'xlink:actuate' (aka 'XlinkActuate')
		    attribute. This attribute is a member of the 'link-attributes' (aka
		    'LinkAttributes') attributeGroup. **/
		XlinkActuate getXlinkActuate() const
		{
			return myMxCxEmptyValue.getXlinkActuate();
		}

		/** Returns the internal value of the 'name' (aka 'Name') attribute. **/
		XsToken getName() const
		{
			return myMxCxEmptyValue.getName();
		}

		/** Returns the internal value of the 'element' (aka 'Element') attribute.
		    This attribute is a member of the 'element-position' (aka 'ElementPosition')
		    attributeGroup. **/
		XsNmToken getElement() const
		{
			return myMxCxEmptyValue.getElement();
		}

		/** Returns the internal value of the 'position' (aka 'Position') attribute.
		    This attribute is a member of the 'element-position' (aka 'ElementPosition')
		    attributeGroup. **/
		XsPositiveInteger getPosition() const
		{
			return myMxCxEmptyValue.getPosition();
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

/* Set Attribute Values --------------------------------------------------------------- */

		/** Sets the internal value of the 'xlink:href' (aka 'XlinkHref') attribute.
		    This attribute is a member of the 'link-attributes' (aka 'LinkAttributes')
		    attributeGroup. **/
		void setXlinkHref( const XlinkHref& value_in )
		{
			myMxCxEmptyValue.setXlinkHref( value_in );
		}

		/** Sets the internal value of the 'xlink:role' (aka 'XlinkRole') attribute.
		    This attribute is a member of the 'link-attributes' (aka 'LinkAttributes')
		    attributeGroup. **/
		void setXlinkRole( const XlinkRole& value_in )
		{
			myMxCxEmptyValue.setXlinkRole( value_in );
		}

		/** Sets the internal value of the 'xlink:title' (aka 'XlinkTitle') attribute.
		    This attribute is a member of the 'link-attributes' (aka 'LinkAttributes')
		    attributeGroup. **/
		void setXlinkTitle( const XlinkTitle& value_in )
		{
			myMxCxEmptyValue.setXlinkTitle( value_in );
		}

		/** Sets the internal value of the 'xlink:show' (aka 'XlinkShow') attribute.
		    This attribute is a member of the 'link-attributes' (aka 'LinkAttributes')
		    attributeGroup. **/
		void setXlinkShow( const XlinkShow& value_in )
		{
			myMxCxEmptyValue.setXlinkShow( value_in );
		}

		/** Sets the internal value of the 'xlink:actuate' (aka 'XlinkActuate')
		    attribute. This attribute is a member of the 'link-attributes' (aka
		    'LinkAttributes') attributeGroup. **/
		void setXlinkActuate( const XlinkActuate& value_in )
		{
			myMxCxEmptyValue.setXlinkActuate( value_in );
		}

		/** Sets the internal value of the 'name' (aka 'Name') attribute. **/
		void setName( const XsToken& value_in )
		{
			myMxCxEmptyValue.setName( value_in );
		}

		/** Sets the internal value of the 'element' (aka 'Element') attribute.
		    This attribute is a member of the 'element-position' (aka 'ElementPosition')
		    attributeGroup. **/
		void setElement( const XsNmToken& value_in )
		{
			myMxCxEmptyValue.setElement( value_in );
		}

		/** Sets the internal value of the 'position' (aka 'Position') attribute.
		    This attribute is a member of the 'element-position' (aka 'ElementPosition')
		    attributeGroup. **/
		void setPosition( const XsPositiveInteger& value_in )
		{
			myMxCxEmptyValue.setPosition( value_in );
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

/* Get IsAttributeRequired Values ----------------------------------------------------- */

		/** Indicates whether or not the 'xlink:href' (aka 'XlinkHref') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'link-attributes' (aka 'LinkAttributes') attributeGroup. **/
		bool getIsXlinkHrefRequired() const
		{
			return myMxCxEmptyValue.getIsXlinkHrefRequired();
		}

		/** Indicates whether or not the 'xlink:type' (aka 'XlinkType') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'link-attributes' (aka 'LinkAttributes') attributeGroup. **/
		bool getIsXlinkTypeRequired() const
		{
			return myMxCxEmptyValue.getIsXlinkTypeRequired();
		}

		/** Indicates whether or not the 'xlink:role' (aka 'XlinkRole') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'link-attributes' (aka 'LinkAttributes') attributeGroup. **/
		bool getIsXlinkRoleRequired() const
		{
			return myMxCxEmptyValue.getIsXlinkRoleRequired();
		}

		/** Indicates whether or not the 'xlink:title' (aka 'XlinkTitle') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'link-attributes' (aka 'LinkAttributes') attributeGroup. **/
		bool getIsXlinkTitleRequired() const
		{
			return myMxCxEmptyValue.getIsXlinkTitleRequired();
		}

		/** Indicates whether or not the 'xlink:show' (aka 'XlinkShow') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'link-attributes' (aka 'LinkAttributes') attributeGroup. **/
		bool getIsXlinkShowRequired() const
		{
			return myMxCxEmptyValue.getIsXlinkShowRequired();
		}

		/** Indicates whether or not the 'xlink:actuate' (aka 'XlinkActuate') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'link-attributes' (aka 'LinkAttributes') attributeGroup. **/
		bool getIsXlinkActuateRequired() const
		{
			return myMxCxEmptyValue.getIsXlinkActuateRequired();
		}

		/** Indicates whether or not the 'name' (aka 'Name') attribute is required
		    to be present in a MusicXML document. **/
		bool getIsNameRequired() const
		{
			return myMxCxEmptyValue.getIsNameRequired();
		}

		/** Indicates whether or not the 'element' (aka 'Element') attribute is
		    required to be present in a MusicXML document. This attribute is a
		    member of the 'element-position' (aka 'ElementPosition') attributeGroup. **/
		bool getIsElementRequired() const
		{
			return myMxCxEmptyValue.getIsElementRequired();
		}

		/** Indicates whether or not the 'position' (aka 'Position') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'element-position' (aka 'ElementPosition') attributeGroup. **/
		bool getIsPositionRequired() const
		{
			return myMxCxEmptyValue.getIsPositionRequired();
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

/* Get IsAttributePresent Values ------------------------------------------------------ */

		/** Indicates whether or not the 'xlink:href' (aka 'XlinkHref') attribute
		    is (or will be) present in the MusicXML document. Note: because 'xlink:href'
		    is required by the MusicXML specification, getIsXlinkHrefPresent will
		    always return 'true'. There is no corresponding setIsXlinkHrefPresent
		    function for this attribute. This attribute is a member of the 'link-attributes'
		    (aka 'LinkAttributes') attributeGroup. **/
		bool getIsXlinkHrefPresent() const
		{
			return myMxCxEmptyValue.getIsXlinkHrefPresent();
		}

		/** Indicates whether or not the 'xlink:type' (aka 'XlinkType') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'link-attributes' (aka 'LinkAttributes') attributeGroup. **/
		bool getIsXlinkTypePresent() const
		{
			return myMxCxEmptyValue.getIsXlinkTypePresent();
		}

		/** Indicates whether or not the 'xlink:role' (aka 'XlinkRole') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'link-attributes' (aka 'LinkAttributes') attributeGroup. **/
		bool getIsXlinkRolePresent() const
		{
			return myMxCxEmptyValue.getIsXlinkRolePresent();
		}

		/** Indicates whether or not the 'xlink:title' (aka 'XlinkTitle') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'link-attributes' (aka 'LinkAttributes') attributeGroup. **/
		bool getIsXlinkTitlePresent() const
		{
			return myMxCxEmptyValue.getIsXlinkTitlePresent();
		}

		/** Indicates whether or not the 'xlink:show' (aka 'XlinkShow') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'link-attributes' (aka 'LinkAttributes') attributeGroup. **/
		bool getIsXlinkShowPresent() const
		{
			return myMxCxEmptyValue.getIsXlinkShowPresent();
		}

		/** Indicates whether or not the 'xlink:actuate' (aka 'XlinkActuate') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'link-attributes' (aka 'LinkAttributes') attributeGroup. **/
		bool getIsXlinkActuatePresent() const
		{
			return myMxCxEmptyValue.getIsXlinkActuatePresent();
		}

		/** Indicates whether or not the 'name' (aka 'Name') attribute is (or will
		    be) present in the MusicXML document. **/
		bool getIsNamePresent() const
		{
			return myMxCxEmptyValue.getIsNamePresent();
		}

		/** Indicates whether or not the 'element' (aka 'Element') attribute is
		    (or will be) present in the MusicXML document. This attribute is a
		    member of the 'element-position' (aka 'ElementPosition') attributeGroup. **/
		bool getIsElementPresent() const
		{
			return myMxCxEmptyValue.getIsElementPresent();
		}

		/** Indicates whether or not the 'position' (aka 'Position') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'element-position' (aka 'ElementPosition') attributeGroup. **/
		bool getIsPositionPresent() const
		{
			return myMxCxEmptyValue.getIsPositionPresent();
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

/* Set IsAttributePresent Values ------------------------------------------------------ */

		/** Sets the value which indicates whether or not the 'xlink:type' (aka
		    'XlinkType') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'link-attributes' (aka 'LinkAttributes')
		    attributeGroup. **/
		void setIsXlinkTypePresent( const bool& value_in )
		{
			myMxCxEmptyValue.setIsXlinkTypePresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'xlink:role' (aka
		    'XlinkRole') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'link-attributes' (aka 'LinkAttributes')
		    attributeGroup. **/
		void setIsXlinkRolePresent( const bool& value_in )
		{
			myMxCxEmptyValue.setIsXlinkRolePresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'xlink:title' (aka
		    'XlinkTitle') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'link-attributes' (aka 'LinkAttributes')
		    attributeGroup. **/
		void setIsXlinkTitlePresent( const bool& value_in )
		{
			myMxCxEmptyValue.setIsXlinkTitlePresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'xlink:show' (aka
		    'XlinkShow') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'link-attributes' (aka 'LinkAttributes')
		    attributeGroup. **/
		void setIsXlinkShowPresent( const bool& value_in )
		{
			myMxCxEmptyValue.setIsXlinkShowPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'xlink:actuate' (aka
		    'XlinkActuate') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'link-attributes' (aka 'LinkAttributes')
		    attributeGroup. **/
		void setIsXlinkActuatePresent( const bool& value_in )
		{
			myMxCxEmptyValue.setIsXlinkActuatePresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'name' (aka 'Name')
		    attribute is (or will be) present in the MusicXML document. **/
		void setIsNamePresent( const bool& value_in )
		{
			myMxCxEmptyValue.setIsNamePresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'element' (aka 'Element')
		    attribute is (or will be) present in the MusicXML document. This attribute
		    is a member of the 'element-position' (aka 'ElementPosition') attributeGroup. **/
		void setIsElementPresent( const bool& value_in )
		{
			myMxCxEmptyValue.setIsElementPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'position' (aka 'Position')
		    attribute is (or will be) present in the MusicXML document. This attribute
		    is a member of the 'element-position' (aka 'ElementPosition') attributeGroup. **/
		void setIsPositionPresent( const bool& value_in )
		{
			myMxCxEmptyValue.setIsPositionPresent( value_in );
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

		/** Indicates whether or not the 'xlink:href' (aka 'XlinkHref') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'link-attributes'
		    (aka 'LinkAttributes') attributeGroup. **/
		bool getIsXlinkHrefDefaultDefined() const
		{
			return myMxCxEmptyValue.getIsXlinkHrefDefaultDefined();
		}

		/** Indicates whether or not the 'xlink:type' (aka 'XlinkType') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'link-attributes'
		    (aka 'LinkAttributes') attributeGroup. **/
		bool getIsXlinkTypeDefaultDefined() const
		{
			return myMxCxEmptyValue.getIsXlinkTypeDefaultDefined();
		}

		/** Indicates whether or not the 'xlink:role' (aka 'XlinkRole') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'link-attributes'
		    (aka 'LinkAttributes') attributeGroup. **/
		bool getIsXlinkRoleDefaultDefined() const
		{
			return myMxCxEmptyValue.getIsXlinkRoleDefaultDefined();
		}

		/** Indicates whether or not the 'xlink:title' (aka 'XlinkTitle') has a
		    default value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'link-attributes'
		    (aka 'LinkAttributes') attributeGroup. **/
		bool getIsXlinkTitleDefaultDefined() const
		{
			return myMxCxEmptyValue.getIsXlinkTitleDefaultDefined();
		}

		/** Indicates whether or not the 'xlink:show' (aka 'XlinkShow') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'link-attributes'
		    (aka 'LinkAttributes') attributeGroup. **/
		bool getIsXlinkShowDefaultDefined() const
		{
			return myMxCxEmptyValue.getIsXlinkShowDefaultDefined();
		}

		/** Indicates whether or not the 'xlink:actuate' (aka 'XlinkActuate') has
		    a default value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'link-attributes'
		    (aka 'LinkAttributes') attributeGroup. **/
		bool getIsXlinkActuateDefaultDefined() const
		{
			return myMxCxEmptyValue.getIsXlinkActuateDefaultDefined();
		}

		/** Indicates whether or not the 'name' (aka 'Name') has a default value
		    defined in the MusicXML xsd specification (either explicitly or in
		    the documentation). **/
		bool getIsNameDefaultDefined() const
		{
			return myMxCxEmptyValue.getIsNameDefaultDefined();
		}

		/** Indicates whether or not the 'element' (aka 'Element') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'element-position'
		    (aka 'ElementPosition') attributeGroup. **/
		bool getIsElementDefaultDefined() const
		{
			return myMxCxEmptyValue.getIsElementDefaultDefined();
		}

		/** Indicates whether or not the 'position' (aka 'Position') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'element-position'
		    (aka 'ElementPosition') attributeGroup. **/
		bool getIsPositionDefaultDefined() const
		{
			return myMxCxEmptyValue.getIsPositionDefaultDefined();
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

/* Get AttributeDefaultValue ---------------------------------------------------------- */

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'xlink:href' (aka 'XlinkHref') attribute. This attribute is a member
		    of the 'link-attributes' (aka 'LinkAttributes') attributeGroup. **/
		XlinkHref getXlinkHrefDefaultValue() const
		{
			return myMxCxEmptyValue.getXlinkHrefDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'xlink:type' (aka 'XlinkType') attribute. This attribute is a member
		    of the 'link-attributes' (aka 'LinkAttributes') attributeGroup. **/
		XlinkType getXlinkTypeDefaultValue() const
		{
			return myMxCxEmptyValue.getXlinkTypeDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'xlink:role' (aka 'XlinkRole') attribute. This attribute is a member
		    of the 'link-attributes' (aka 'LinkAttributes') attributeGroup. **/
		XlinkRole getXlinkRoleDefaultValue() const
		{
			return myMxCxEmptyValue.getXlinkRoleDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'xlink:title' (aka 'XlinkTitle') attribute. This attribute is a
		    member of the 'link-attributes' (aka 'LinkAttributes') attributeGroup. **/
		XlinkTitle getXlinkTitleDefaultValue() const
		{
			return myMxCxEmptyValue.getXlinkTitleDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'xlink:show' (aka 'XlinkShow') attribute. This attribute is a member
		    of the 'link-attributes' (aka 'LinkAttributes') attributeGroup. **/
		XlinkShow getXlinkShowDefaultValue() const
		{
			return myMxCxEmptyValue.getXlinkShowDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'xlink:actuate' (aka 'XlinkActuate') attribute. This attribute
		    is a member of the 'link-attributes' (aka 'LinkAttributes') attributeGroup. **/
		XlinkActuate getXlinkActuateDefaultValue() const
		{
			return myMxCxEmptyValue.getXlinkActuateDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'name' (aka 'Name') attribute. **/
		XsToken getNameDefaultValue() const
		{
			return myMxCxEmptyValue.getNameDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'element' (aka 'Element') attribute. This attribute is a member
		    of the 'element-position' (aka 'ElementPosition') attributeGroup. **/
		XsNmToken getElementDefaultValue() const
		{
			return myMxCxEmptyValue.getElementDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'position' (aka 'Position') attribute. This attribute is a member
		    of the 'element-position' (aka 'ElementPosition') attributeGroup. **/
		XsPositiveInteger getPositionDefaultValue() const
		{
			return myMxCxEmptyValue.getPositionDefaultValue();
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

	}; // struct MxEeLink::Impl

	const int MxEeLink::Impl::myXsdID = 5662;
	const std::string MxEeLink::Impl::myXmlTypeName = "link";
	const std::string MxEeLink::Impl::myCppClassName = "MxEeLink";
	const std::string MxEeLink::Impl::myDocumentation = "( no documentation )";
	const int MxEeLink::Impl::myMinOccurs = 0;
	const int MxEeLink::Impl::myMaxOccurs = 32767;
	const int MxEeLink::Impl::myIsMaxOccursUnbounded = true;

} // namespace lexicon


/* MxEeLink --------------------------------------------------------------------------- */

namespace lexicon
{

/* Constructor, Destructor, Copy, Assignment ------------------------------------------ */

	MxEeLink::MxEeLink()
	:myImpl( new Impl() ) {}

	MxEeLink::~MxEeLink() {}

	MxEeLink::MxEeLink( const MxEeLink& other )
	:myImpl( new Impl( *(other.myImpl) ) ) {}

	MxEeLink& MxEeLink::operator=( const MxEeLink& other )
	{
		this->myImpl = std::unique_ptr<Impl>( new Impl( *(other.myImpl) ) );
		return *this;
	}

/* minOccurs maxOccurs ---------------------------------------------------------------- */

	/** Returns the minOccurs value from the Music XML xsd specification. **/
	int MxEeLink::getMinOccurs() const
	{
		return myImpl->getMinOccurs();
	}

	/** Returns the maxOccurs value from the Music XML xsd specification. **/
	int MxEeLink::getMaxOccurs() const
	{
		return myImpl->getMaxOccurs();
	}

	/** Returns true if the maxOccurs value from the Music XML xsd specification
	    is 'unbounded'. **/
	bool MxEeLink::getIsMaxOccursUnbounded() const
	{
		return myImpl->getIsMaxOccursUnbounded();
	}

/* Get Class Information -------------------------------------------------------------- */

	/** Returns the name of this xs:element as found in the musicxml.xsd document. **/
	std::string MxEeLink::getXmlTypeName() const
	{
		return myImpl->getXmlTypeName();
	}

	/** Returns the name of this C++ class. **/
	std::string MxEeLink::getClassName() const
	{
		return myImpl->getClassName();
	}

	/** Returns the documentation for this musicxml type as found in the musicxml.xsd
	    document. **/
	std::string MxEeLink::getDocumentation() const
	{
		return myImpl->getDocumentation();
	}

/* Get Attribute Values --------------------------------------------------------------- */

	/** Returns the internal value of the 'xlink:href' (aka 'XlinkHref') attribute.
	    This attribute is a member of the 'link-attributes' (aka 'LinkAttributes')
	    attributeGroup. **/
	XlinkHref MxEeLink::getXlinkHref() const
	{
		return myImpl->getXlinkHref();
	}

	/** Returns the internal value of the 'xlink:type' (aka 'XlinkType') attribute.
	    This attribute is a member of the 'link-attributes' (aka 'LinkAttributes')
	    attributeGroup. **/
	XlinkType MxEeLink::getXlinkType() const
	{
		return myImpl->getXlinkType();
	}

	/** Returns the internal value of the 'xlink:role' (aka 'XlinkRole') attribute.
	    This attribute is a member of the 'link-attributes' (aka 'LinkAttributes')
	    attributeGroup. **/
	XlinkRole MxEeLink::getXlinkRole() const
	{
		return myImpl->getXlinkRole();
	}

	/** Returns the internal value of the 'xlink:title' (aka 'XlinkTitle')
	    attribute. This attribute is a member of the 'link-attributes' (aka
	    'LinkAttributes') attributeGroup. **/
	XlinkTitle MxEeLink::getXlinkTitle() const
	{
		return myImpl->getXlinkTitle();
	}

	/** Returns the internal value of the 'xlink:show' (aka 'XlinkShow') attribute.
	    This attribute is a member of the 'link-attributes' (aka 'LinkAttributes')
	    attributeGroup. **/
	XlinkShow MxEeLink::getXlinkShow() const
	{
		return myImpl->getXlinkShow();
	}

	/** Returns the internal value of the 'xlink:actuate' (aka 'XlinkActuate')
	    attribute. This attribute is a member of the 'link-attributes' (aka
	    'LinkAttributes') attributeGroup. **/
	XlinkActuate MxEeLink::getXlinkActuate() const
	{
		return myImpl->getXlinkActuate();
	}

	/** Returns the internal value of the 'name' (aka 'Name') attribute. **/
	XsToken MxEeLink::getName() const
	{
		return myImpl->getName();
	}

	/** Returns the internal value of the 'element' (aka 'Element') attribute.
	    This attribute is a member of the 'element-position' (aka 'ElementPosition')
	    attributeGroup. **/
	XsNmToken MxEeLink::getElement() const
	{
		return myImpl->getElement();
	}

	/** Returns the internal value of the 'position' (aka 'Position') attribute.
	    This attribute is a member of the 'element-position' (aka 'ElementPosition')
	    attributeGroup. **/
	XsPositiveInteger MxEeLink::getPosition() const
	{
		return myImpl->getPosition();
	}

	/** Returns the internal value of the 'default-x' (aka 'DefaultX') attribute.
	    This attribute is a member of the 'position' (aka 'Position') attributeGroup. **/
	MxNumberTenths MxEeLink::getDefaultX() const
	{
		return myImpl->getDefaultX();
	}

	/** Returns the internal value of the 'default-y' (aka 'DefaultY') attribute.
	    This attribute is a member of the 'position' (aka 'Position') attributeGroup. **/
	MxNumberTenths MxEeLink::getDefaultY() const
	{
		return myImpl->getDefaultY();
	}

	/** Returns the internal value of the 'relative-x' (aka 'RelativeX') attribute.
	    This attribute is a member of the 'position' (aka 'Position') attributeGroup. **/
	MxNumberTenths MxEeLink::getRelativeX() const
	{
		return myImpl->getRelativeX();
	}

	/** Returns the internal value of the 'relative-y' (aka 'RelativeY') attribute.
	    This attribute is a member of the 'position' (aka 'Position') attributeGroup. **/
	MxNumberTenths MxEeLink::getRelativeY() const
	{
		return myImpl->getRelativeY();
	}

/* Set Attribute Values --------------------------------------------------------------- */

	/** Sets the internal value of the 'xlink:href' (aka 'XlinkHref') attribute.
	    This attribute is a member of the 'link-attributes' (aka 'LinkAttributes')
	    attributeGroup. **/
	void MxEeLink::setXlinkHref( const XlinkHref& value_in )
	{
		myImpl->setXlinkHref( value_in );
	}

	/** Sets the internal value of the 'xlink:role' (aka 'XlinkRole') attribute.
	    This attribute is a member of the 'link-attributes' (aka 'LinkAttributes')
	    attributeGroup. **/
	void MxEeLink::setXlinkRole( const XlinkRole& value_in )
	{
		myImpl->setXlinkRole( value_in );
	}

	/** Sets the internal value of the 'xlink:title' (aka 'XlinkTitle') attribute.
	    This attribute is a member of the 'link-attributes' (aka 'LinkAttributes')
	    attributeGroup. **/
	void MxEeLink::setXlinkTitle( const XlinkTitle& value_in )
	{
		myImpl->setXlinkTitle( value_in );
	}

	/** Sets the internal value of the 'xlink:show' (aka 'XlinkShow') attribute.
	    This attribute is a member of the 'link-attributes' (aka 'LinkAttributes')
	    attributeGroup. **/
	void MxEeLink::setXlinkShow( const XlinkShow& value_in )
	{
		myImpl->setXlinkShow( value_in );
	}

	/** Sets the internal value of the 'xlink:actuate' (aka 'XlinkActuate')
	    attribute. This attribute is a member of the 'link-attributes' (aka
	    'LinkAttributes') attributeGroup. **/
	void MxEeLink::setXlinkActuate( const XlinkActuate& value_in )
	{
		myImpl->setXlinkActuate( value_in );
	}

	/** Sets the internal value of the 'name' (aka 'Name') attribute. **/
	void MxEeLink::setName( const XsToken& value_in )
	{
		myImpl->setName( value_in );
	}

	/** Sets the internal value of the 'element' (aka 'Element') attribute.
	    This attribute is a member of the 'element-position' (aka 'ElementPosition')
	    attributeGroup. **/
	void MxEeLink::setElement( const XsNmToken& value_in )
	{
		myImpl->setElement( value_in );
	}

	/** Sets the internal value of the 'position' (aka 'Position') attribute.
	    This attribute is a member of the 'element-position' (aka 'ElementPosition')
	    attributeGroup. **/
	void MxEeLink::setPosition( const XsPositiveInteger& value_in )
	{
		myImpl->setPosition( value_in );
	}

	/** Sets the internal value of the 'default-x' (aka 'DefaultX') attribute.
	    This attribute is a member of the 'position' (aka 'Position') attributeGroup. **/
	void MxEeLink::setDefaultX( const MxNumberTenths& value_in )
	{
		myImpl->setDefaultX( value_in );
	}

	/** Sets the internal value of the 'default-y' (aka 'DefaultY') attribute.
	    This attribute is a member of the 'position' (aka 'Position') attributeGroup. **/
	void MxEeLink::setDefaultY( const MxNumberTenths& value_in )
	{
		myImpl->setDefaultY( value_in );
	}

	/** Sets the internal value of the 'relative-x' (aka 'RelativeX') attribute.
	    This attribute is a member of the 'position' (aka 'Position') attributeGroup. **/
	void MxEeLink::setRelativeX( const MxNumberTenths& value_in )
	{
		myImpl->setRelativeX( value_in );
	}

	/** Sets the internal value of the 'relative-y' (aka 'RelativeY') attribute.
	    This attribute is a member of the 'position' (aka 'Position') attributeGroup. **/
	void MxEeLink::setRelativeY( const MxNumberTenths& value_in )
	{
		myImpl->setRelativeY( value_in );
	}

/* Get IsAttributeRequired Values ----------------------------------------------------- */

	/** Indicates whether or not the 'xlink:href' (aka 'XlinkHref') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'link-attributes' (aka 'LinkAttributes') attributeGroup. **/
	bool MxEeLink::getIsXlinkHrefRequired() const
	{
		return myImpl->getIsXlinkHrefRequired();
	}

	/** Indicates whether or not the 'xlink:type' (aka 'XlinkType') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'link-attributes' (aka 'LinkAttributes') attributeGroup. **/
	bool MxEeLink::getIsXlinkTypeRequired() const
	{
		return myImpl->getIsXlinkTypeRequired();
	}

	/** Indicates whether or not the 'xlink:role' (aka 'XlinkRole') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'link-attributes' (aka 'LinkAttributes') attributeGroup. **/
	bool MxEeLink::getIsXlinkRoleRequired() const
	{
		return myImpl->getIsXlinkRoleRequired();
	}

	/** Indicates whether or not the 'xlink:title' (aka 'XlinkTitle') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'link-attributes' (aka 'LinkAttributes') attributeGroup. **/
	bool MxEeLink::getIsXlinkTitleRequired() const
	{
		return myImpl->getIsXlinkTitleRequired();
	}

	/** Indicates whether or not the 'xlink:show' (aka 'XlinkShow') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'link-attributes' (aka 'LinkAttributes') attributeGroup. **/
	bool MxEeLink::getIsXlinkShowRequired() const
	{
		return myImpl->getIsXlinkShowRequired();
	}

	/** Indicates whether or not the 'xlink:actuate' (aka 'XlinkActuate') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'link-attributes' (aka 'LinkAttributes') attributeGroup. **/
	bool MxEeLink::getIsXlinkActuateRequired() const
	{
		return myImpl->getIsXlinkActuateRequired();
	}

	/** Indicates whether or not the 'name' (aka 'Name') attribute is required
	    to be present in a MusicXML document. **/
	bool MxEeLink::getIsNameRequired() const
	{
		return myImpl->getIsNameRequired();
	}

	/** Indicates whether or not the 'element' (aka 'Element') attribute is
	    required to be present in a MusicXML document. This attribute is a
	    member of the 'element-position' (aka 'ElementPosition') attributeGroup. **/
	bool MxEeLink::getIsElementRequired() const
	{
		return myImpl->getIsElementRequired();
	}

	/** Indicates whether or not the 'position' (aka 'Position') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'element-position' (aka 'ElementPosition') attributeGroup. **/
	bool MxEeLink::getIsPositionRequired() const
	{
		return myImpl->getIsPositionRequired();
	}

	/** Indicates whether or not the 'default-x' (aka 'DefaultX') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'position' (aka 'Position') attributeGroup. **/
	bool MxEeLink::getIsDefaultXRequired() const
	{
		return myImpl->getIsDefaultXRequired();
	}

	/** Indicates whether or not the 'default-y' (aka 'DefaultY') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'position' (aka 'Position') attributeGroup. **/
	bool MxEeLink::getIsDefaultYRequired() const
	{
		return myImpl->getIsDefaultYRequired();
	}

	/** Indicates whether or not the 'relative-x' (aka 'RelativeX') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'position' (aka 'Position') attributeGroup. **/
	bool MxEeLink::getIsRelativeXRequired() const
	{
		return myImpl->getIsRelativeXRequired();
	}

	/** Indicates whether or not the 'relative-y' (aka 'RelativeY') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'position' (aka 'Position') attributeGroup. **/
	bool MxEeLink::getIsRelativeYRequired() const
	{
		return myImpl->getIsRelativeYRequired();
	}

/* Get IsAttributePresent Values ------------------------------------------------------ */

	/** Indicates whether or not the 'xlink:href' (aka 'XlinkHref') attribute
	    is (or will be) present in the MusicXML document. Note: because 'xlink:href'
	    is required by the MusicXML specification, getIsXlinkHrefPresent will
	    always return 'true'. There is no corresponding setIsXlinkHrefPresent
	    function for this attribute. This attribute is a member of the 'link-attributes'
	    (aka 'LinkAttributes') attributeGroup. **/
	bool MxEeLink::getIsXlinkHrefPresent() const
	{
		return myImpl->getIsXlinkHrefPresent();
	}

	/** Indicates whether or not the 'xlink:type' (aka 'XlinkType') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'link-attributes' (aka 'LinkAttributes') attributeGroup. **/
	bool MxEeLink::getIsXlinkTypePresent() const
	{
		return myImpl->getIsXlinkTypePresent();
	}

	/** Indicates whether or not the 'xlink:role' (aka 'XlinkRole') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'link-attributes' (aka 'LinkAttributes') attributeGroup. **/
	bool MxEeLink::getIsXlinkRolePresent() const
	{
		return myImpl->getIsXlinkRolePresent();
	}

	/** Indicates whether or not the 'xlink:title' (aka 'XlinkTitle') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'link-attributes' (aka 'LinkAttributes') attributeGroup. **/
	bool MxEeLink::getIsXlinkTitlePresent() const
	{
		return myImpl->getIsXlinkTitlePresent();
	}

	/** Indicates whether or not the 'xlink:show' (aka 'XlinkShow') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'link-attributes' (aka 'LinkAttributes') attributeGroup. **/
	bool MxEeLink::getIsXlinkShowPresent() const
	{
		return myImpl->getIsXlinkShowPresent();
	}

	/** Indicates whether or not the 'xlink:actuate' (aka 'XlinkActuate') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'link-attributes' (aka 'LinkAttributes') attributeGroup. **/
	bool MxEeLink::getIsXlinkActuatePresent() const
	{
		return myImpl->getIsXlinkActuatePresent();
	}

	/** Indicates whether or not the 'name' (aka 'Name') attribute is (or will
	    be) present in the MusicXML document. **/
	bool MxEeLink::getIsNamePresent() const
	{
		return myImpl->getIsNamePresent();
	}

	/** Indicates whether or not the 'element' (aka 'Element') attribute is
	    (or will be) present in the MusicXML document. This attribute is a
	    member of the 'element-position' (aka 'ElementPosition') attributeGroup. **/
	bool MxEeLink::getIsElementPresent() const
	{
		return myImpl->getIsElementPresent();
	}

	/** Indicates whether or not the 'position' (aka 'Position') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'element-position' (aka 'ElementPosition') attributeGroup. **/
	bool MxEeLink::getIsPositionPresent() const
	{
		return myImpl->getIsPositionPresent();
	}

	/** Indicates whether or not the 'default-x' (aka 'DefaultX') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'position' (aka 'Position') attributeGroup. **/
	bool MxEeLink::getIsDefaultXPresent() const
	{
		return myImpl->getIsDefaultXPresent();
	}

	/** Indicates whether or not the 'default-y' (aka 'DefaultY') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'position' (aka 'Position') attributeGroup. **/
	bool MxEeLink::getIsDefaultYPresent() const
	{
		return myImpl->getIsDefaultYPresent();
	}

	/** Indicates whether or not the 'relative-x' (aka 'RelativeX') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'position' (aka 'Position') attributeGroup. **/
	bool MxEeLink::getIsRelativeXPresent() const
	{
		return myImpl->getIsRelativeXPresent();
	}

	/** Indicates whether or not the 'relative-y' (aka 'RelativeY') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'position' (aka 'Position') attributeGroup. **/
	bool MxEeLink::getIsRelativeYPresent() const
	{
		return myImpl->getIsRelativeYPresent();
	}

/* Set IsAttributePresent Values ------------------------------------------------------ */

	/** Sets the value which indicates whether or not the 'xlink:type' (aka
	    'XlinkType') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'link-attributes' (aka 'LinkAttributes')
	    attributeGroup. **/
	void MxEeLink::setIsXlinkTypePresent( const bool& value_in )
	{
		myImpl->setIsXlinkTypePresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'xlink:role' (aka
	    'XlinkRole') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'link-attributes' (aka 'LinkAttributes')
	    attributeGroup. **/
	void MxEeLink::setIsXlinkRolePresent( const bool& value_in )
	{
		myImpl->setIsXlinkRolePresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'xlink:title' (aka
	    'XlinkTitle') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'link-attributes' (aka 'LinkAttributes')
	    attributeGroup. **/
	void MxEeLink::setIsXlinkTitlePresent( const bool& value_in )
	{
		myImpl->setIsXlinkTitlePresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'xlink:show' (aka
	    'XlinkShow') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'link-attributes' (aka 'LinkAttributes')
	    attributeGroup. **/
	void MxEeLink::setIsXlinkShowPresent( const bool& value_in )
	{
		myImpl->setIsXlinkShowPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'xlink:actuate' (aka
	    'XlinkActuate') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'link-attributes' (aka 'LinkAttributes')
	    attributeGroup. **/
	void MxEeLink::setIsXlinkActuatePresent( const bool& value_in )
	{
		myImpl->setIsXlinkActuatePresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'name' (aka 'Name')
	    attribute is (or will be) present in the MusicXML document. **/
	void MxEeLink::setIsNamePresent( const bool& value_in )
	{
		myImpl->setIsNamePresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'element' (aka 'Element')
	    attribute is (or will be) present in the MusicXML document. This attribute
	    is a member of the 'element-position' (aka 'ElementPosition') attributeGroup. **/
	void MxEeLink::setIsElementPresent( const bool& value_in )
	{
		myImpl->setIsElementPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'position' (aka 'Position')
	    attribute is (or will be) present in the MusicXML document. This attribute
	    is a member of the 'element-position' (aka 'ElementPosition') attributeGroup. **/
	void MxEeLink::setIsPositionPresent( const bool& value_in )
	{
		myImpl->setIsPositionPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'default-x' (aka
	    'DefaultX') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'position' (aka 'Position') attributeGroup. **/
	void MxEeLink::setIsDefaultXPresent( const bool& value_in )
	{
		myImpl->setIsDefaultXPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'default-y' (aka
	    'DefaultY') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'position' (aka 'Position') attributeGroup. **/
	void MxEeLink::setIsDefaultYPresent( const bool& value_in )
	{
		myImpl->setIsDefaultYPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'relative-x' (aka
	    'RelativeX') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'position' (aka 'Position') attributeGroup. **/
	void MxEeLink::setIsRelativeXPresent( const bool& value_in )
	{
		myImpl->setIsRelativeXPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'relative-y' (aka
	    'RelativeY') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'position' (aka 'Position') attributeGroup. **/
	void MxEeLink::setIsRelativeYPresent( const bool& value_in )
	{
		myImpl->setIsRelativeYPresent( value_in );
	}

/* Stringing and Streaming ------------------------------------------------------------ */

	/** Returns the xml representation of the object's value. **/
	std::string MxEeLink::toString() const
	{
		return myImpl->toString();
	}

	/** Returns the xml representation of the object's value. **/
	std::ostream& MxEeLink::stream( std::ostream& os_out ) const
	{
		return myImpl->stream( os_out );
	}

/* Get IsAttributeDefaultDefined Values ----------------------------------------------- */

	/** Indicates whether or not the 'xlink:href' (aka 'XlinkHref') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'link-attributes'
	    (aka 'LinkAttributes') attributeGroup. **/
	bool MxEeLink::getIsXlinkHrefDefaultDefined() const
	{
		return myImpl->getIsXlinkHrefDefaultDefined();
	}

	/** Indicates whether or not the 'xlink:type' (aka 'XlinkType') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'link-attributes'
	    (aka 'LinkAttributes') attributeGroup. **/
	bool MxEeLink::getIsXlinkTypeDefaultDefined() const
	{
		return myImpl->getIsXlinkTypeDefaultDefined();
	}

	/** Indicates whether or not the 'xlink:role' (aka 'XlinkRole') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'link-attributes'
	    (aka 'LinkAttributes') attributeGroup. **/
	bool MxEeLink::getIsXlinkRoleDefaultDefined() const
	{
		return myImpl->getIsXlinkRoleDefaultDefined();
	}

	/** Indicates whether or not the 'xlink:title' (aka 'XlinkTitle') has a
	    default value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'link-attributes'
	    (aka 'LinkAttributes') attributeGroup. **/
	bool MxEeLink::getIsXlinkTitleDefaultDefined() const
	{
		return myImpl->getIsXlinkTitleDefaultDefined();
	}

	/** Indicates whether or not the 'xlink:show' (aka 'XlinkShow') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'link-attributes'
	    (aka 'LinkAttributes') attributeGroup. **/
	bool MxEeLink::getIsXlinkShowDefaultDefined() const
	{
		return myImpl->getIsXlinkShowDefaultDefined();
	}

	/** Indicates whether or not the 'xlink:actuate' (aka 'XlinkActuate') has
	    a default value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'link-attributes'
	    (aka 'LinkAttributes') attributeGroup. **/
	bool MxEeLink::getIsXlinkActuateDefaultDefined() const
	{
		return myImpl->getIsXlinkActuateDefaultDefined();
	}

	/** Indicates whether or not the 'name' (aka 'Name') has a default value
	    defined in the MusicXML xsd specification (either explicitly or in
	    the documentation). **/
	bool MxEeLink::getIsNameDefaultDefined() const
	{
		return myImpl->getIsNameDefaultDefined();
	}

	/** Indicates whether or not the 'element' (aka 'Element') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'element-position'
	    (aka 'ElementPosition') attributeGroup. **/
	bool MxEeLink::getIsElementDefaultDefined() const
	{
		return myImpl->getIsElementDefaultDefined();
	}

	/** Indicates whether or not the 'position' (aka 'Position') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'element-position'
	    (aka 'ElementPosition') attributeGroup. **/
	bool MxEeLink::getIsPositionDefaultDefined() const
	{
		return myImpl->getIsPositionDefaultDefined();
	}

	/** Indicates whether or not the 'default-x' (aka 'DefaultX') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'position'
	    (aka 'Position') attributeGroup. **/
	bool MxEeLink::getIsDefaultXDefaultDefined() const
	{
		return myImpl->getIsDefaultXDefaultDefined();
	}

	/** Indicates whether or not the 'default-y' (aka 'DefaultY') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'position'
	    (aka 'Position') attributeGroup. **/
	bool MxEeLink::getIsDefaultYDefaultDefined() const
	{
		return myImpl->getIsDefaultYDefaultDefined();
	}

	/** Indicates whether or not the 'relative-x' (aka 'RelativeX') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'position'
	    (aka 'Position') attributeGroup. **/
	bool MxEeLink::getIsRelativeXDefaultDefined() const
	{
		return myImpl->getIsRelativeXDefaultDefined();
	}

	/** Indicates whether or not the 'relative-y' (aka 'RelativeY') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'position'
	    (aka 'Position') attributeGroup. **/
	bool MxEeLink::getIsRelativeYDefaultDefined() const
	{
		return myImpl->getIsRelativeYDefaultDefined();
	}

/* Get AttributeDefaultValue ---------------------------------------------------------- */

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'xlink:href' (aka 'XlinkHref') attribute. This attribute is a member
	    of the 'link-attributes' (aka 'LinkAttributes') attributeGroup. **/
	XlinkHref MxEeLink::getXlinkHrefDefaultValue() const
	{
		return myImpl->getXlinkHrefDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'xlink:type' (aka 'XlinkType') attribute. This attribute is a member
	    of the 'link-attributes' (aka 'LinkAttributes') attributeGroup. **/
	XlinkType MxEeLink::getXlinkTypeDefaultValue() const
	{
		return myImpl->getXlinkTypeDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'xlink:role' (aka 'XlinkRole') attribute. This attribute is a member
	    of the 'link-attributes' (aka 'LinkAttributes') attributeGroup. **/
	XlinkRole MxEeLink::getXlinkRoleDefaultValue() const
	{
		return myImpl->getXlinkRoleDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'xlink:title' (aka 'XlinkTitle') attribute. This attribute is a
	    member of the 'link-attributes' (aka 'LinkAttributes') attributeGroup. **/
	XlinkTitle MxEeLink::getXlinkTitleDefaultValue() const
	{
		return myImpl->getXlinkTitleDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'xlink:show' (aka 'XlinkShow') attribute. This attribute is a member
	    of the 'link-attributes' (aka 'LinkAttributes') attributeGroup. **/
	XlinkShow MxEeLink::getXlinkShowDefaultValue() const
	{
		return myImpl->getXlinkShowDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'xlink:actuate' (aka 'XlinkActuate') attribute. This attribute
	    is a member of the 'link-attributes' (aka 'LinkAttributes') attributeGroup. **/
	XlinkActuate MxEeLink::getXlinkActuateDefaultValue() const
	{
		return myImpl->getXlinkActuateDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'name' (aka 'Name') attribute. **/
	XsToken MxEeLink::getNameDefaultValue() const
	{
		return myImpl->getNameDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'element' (aka 'Element') attribute. This attribute is a member
	    of the 'element-position' (aka 'ElementPosition') attributeGroup. **/
	XsNmToken MxEeLink::getElementDefaultValue() const
	{
		return myImpl->getElementDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'position' (aka 'Position') attribute. This attribute is a member
	    of the 'element-position' (aka 'ElementPosition') attributeGroup. **/
	XsPositiveInteger MxEeLink::getPositionDefaultValue() const
	{
		return myImpl->getPositionDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'default-x' (aka 'DefaultX') attribute. This attribute is a member
	    of the 'position' (aka 'Position') attributeGroup. **/
	MxNumberTenths MxEeLink::getDefaultXDefaultValue() const
	{
		return myImpl->getDefaultXDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'default-y' (aka 'DefaultY') attribute. This attribute is a member
	    of the 'position' (aka 'Position') attributeGroup. **/
	MxNumberTenths MxEeLink::getDefaultYDefaultValue() const
	{
		return myImpl->getDefaultYDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'relative-x' (aka 'RelativeX') attribute. This attribute is a member
	    of the 'position' (aka 'Position') attributeGroup. **/
	MxNumberTenths MxEeLink::getRelativeXDefaultValue() const
	{
		return myImpl->getRelativeXDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'relative-y' (aka 'RelativeY') attribute. This attribute is a member
	    of the 'position' (aka 'Position') attributeGroup. **/
	MxNumberTenths MxEeLink::getRelativeYDefaultValue() const
	{
		return myImpl->getRelativeYDefaultValue();
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

