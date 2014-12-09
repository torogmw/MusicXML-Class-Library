/* See MusicXML License at the bottom of this code page. */

/**
  * @file       MxCxEmptyLink.cpp
  * @class      lexicon::MxCxEmptyLink
  * @author     Matthew James Briggs
  * @email      matthew.james.briggs@gmail.com
  * @url        http://matthewjamesbriggs.com
  * @date       2014-12-03 16:31:27
  * @project    Lexicon
  * @version    1.0
  * @musicxmlid 4320
  * 
  * @brief The 'Link' class serves as a binding for the MusicXml 'link' complexType.
  * 
 **/

#include "MxCxEmptyLink.h"
#include <sstream>
#include "_hidden_attributeStream.h"
#include "MxAttrGrpElementPosition.h"
#include "MxAttrGrpLinkAttributes.h"
#include "MxAttrGrpPosition.h"

/* Impl ------------------------------------------------------------------------------- */

namespace lexicon
{
	struct MxCxEmptyLink::Impl
	{
		Impl( const std::string& elementName )
		:myElementName( elementName )
		,myMxAttrGrpLinkAttributes()
		,myName()
		,myMxAttrGrpElementPosition()
		,myMxAttrGrpPosition()
		,myIsNamePresent( false )
		{}

	private:
		std::string myElementName;
		MxAttrGrpLinkAttributes myMxAttrGrpLinkAttributes;
		XsToken myName;
		MxAttrGrpElementPosition myMxAttrGrpElementPosition;
		MxAttrGrpPosition myMxAttrGrpPosition;
		bool myIsNamePresent;

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

		/** Returns the internal value of the 'xlink:href' (aka 'XlinkHref') attribute.
		    This attribute is a member of the 'link-attributes' (aka 'LinkAttributes')
		    attributeGroup. **/
		XlinkHref getXlinkHref() const
		{
			return myMxAttrGrpLinkAttributes.getXlinkHref();
		}

		/** Returns the internal value of the 'xlink:type' (aka 'XlinkType') attribute.
		    This attribute is a member of the 'link-attributes' (aka 'LinkAttributes')
		    attributeGroup. **/
		XlinkType getXlinkType() const
		{
			return myMxAttrGrpLinkAttributes.getXlinkType();
		}

		/** Returns the internal value of the 'xlink:role' (aka 'XlinkRole') attribute.
		    This attribute is a member of the 'link-attributes' (aka 'LinkAttributes')
		    attributeGroup. **/
		XlinkRole getXlinkRole() const
		{
			return myMxAttrGrpLinkAttributes.getXlinkRole();
		}

		/** Returns the internal value of the 'xlink:title' (aka 'XlinkTitle')
		    attribute. This attribute is a member of the 'link-attributes' (aka
		    'LinkAttributes') attributeGroup. **/
		XlinkTitle getXlinkTitle() const
		{
			return myMxAttrGrpLinkAttributes.getXlinkTitle();
		}

		/** Returns the internal value of the 'xlink:show' (aka 'XlinkShow') attribute.
		    This attribute is a member of the 'link-attributes' (aka 'LinkAttributes')
		    attributeGroup. **/
		XlinkShow getXlinkShow() const
		{
			return myMxAttrGrpLinkAttributes.getXlinkShow();
		}

		/** Returns the internal value of the 'xlink:actuate' (aka 'XlinkActuate')
		    attribute. This attribute is a member of the 'link-attributes' (aka
		    'LinkAttributes') attributeGroup. **/
		XlinkActuate getXlinkActuate() const
		{
			return myMxAttrGrpLinkAttributes.getXlinkActuate();
		}

		/** Returns the internal value of the 'name' (aka 'Name') attribute. **/
		XsToken getName() const
		{
			return myName;
		}

		/** Returns the internal value of the 'element' (aka 'Element') attribute.
		    This attribute is a member of the 'element-position' (aka 'ElementPosition')
		    attributeGroup. **/
		XsNmToken getElement() const
		{
			return myMxAttrGrpElementPosition.getElement();
		}

		/** Returns the internal value of the 'position' (aka 'Position') attribute.
		    This attribute is a member of the 'element-position' (aka 'ElementPosition')
		    attributeGroup. **/
		XsPositiveInteger getPosition() const
		{
			return myMxAttrGrpElementPosition.getPosition();
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

/* Set Attribute Values --------------------------------------------------------------- */

		/** Sets the internal value of the 'xlink:href' (aka 'XlinkHref') attribute.
		    This attribute is a member of the 'link-attributes' (aka 'LinkAttributes')
		    attributeGroup. **/
		void setXlinkHref( const XlinkHref& value_in )
		{
			myMxAttrGrpLinkAttributes.setXlinkHref( value_in );
		}

		/** Sets the internal value of the 'xlink:role' (aka 'XlinkRole') attribute.
		    This attribute is a member of the 'link-attributes' (aka 'LinkAttributes')
		    attributeGroup. **/
		void setXlinkRole( const XlinkRole& value_in )
		{
			myMxAttrGrpLinkAttributes.setXlinkRole( value_in );
		}

		/** Sets the internal value of the 'xlink:title' (aka 'XlinkTitle') attribute.
		    This attribute is a member of the 'link-attributes' (aka 'LinkAttributes')
		    attributeGroup. **/
		void setXlinkTitle( const XlinkTitle& value_in )
		{
			myMxAttrGrpLinkAttributes.setXlinkTitle( value_in );
		}

		/** Sets the internal value of the 'xlink:show' (aka 'XlinkShow') attribute.
		    This attribute is a member of the 'link-attributes' (aka 'LinkAttributes')
		    attributeGroup. **/
		void setXlinkShow( const XlinkShow& value_in )
		{
			myMxAttrGrpLinkAttributes.setXlinkShow( value_in );
		}

		/** Sets the internal value of the 'xlink:actuate' (aka 'XlinkActuate')
		    attribute. This attribute is a member of the 'link-attributes' (aka
		    'LinkAttributes') attributeGroup. **/
		void setXlinkActuate( const XlinkActuate& value_in )
		{
			myMxAttrGrpLinkAttributes.setXlinkActuate( value_in );
		}

		/** Sets the internal value of the 'name' (aka 'Name') attribute. **/
		void setName( const XsToken& value_in )
		{
			myName = value_in;
		}

		/** Sets the internal value of the 'element' (aka 'Element') attribute.
		    This attribute is a member of the 'element-position' (aka 'ElementPosition')
		    attributeGroup. **/
		void setElement( const XsNmToken& value_in )
		{
			myMxAttrGrpElementPosition.setElement( value_in );
		}

		/** Sets the internal value of the 'position' (aka 'Position') attribute.
		    This attribute is a member of the 'element-position' (aka 'ElementPosition')
		    attributeGroup. **/
		void setPosition( const XsPositiveInteger& value_in )
		{
			myMxAttrGrpElementPosition.setPosition( value_in );
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

/* Get IsAttributeRequired Values ----------------------------------------------------- */

		/** Indicates whether or not the 'xlink:href' (aka 'XlinkHref') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'link-attributes' (aka 'LinkAttributes') attributeGroup. **/
		bool getIsXlinkHrefRequired() const
		{
			return myMxAttrGrpLinkAttributes.getIsXlinkHrefRequired();
		}

		/** Indicates whether or not the 'xlink:type' (aka 'XlinkType') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'link-attributes' (aka 'LinkAttributes') attributeGroup. **/
		bool getIsXlinkTypeRequired() const
		{
			return myMxAttrGrpLinkAttributes.getIsXlinkTypeRequired();
		}

		/** Indicates whether or not the 'xlink:role' (aka 'XlinkRole') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'link-attributes' (aka 'LinkAttributes') attributeGroup. **/
		bool getIsXlinkRoleRequired() const
		{
			return myMxAttrGrpLinkAttributes.getIsXlinkRoleRequired();
		}

		/** Indicates whether or not the 'xlink:title' (aka 'XlinkTitle') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'link-attributes' (aka 'LinkAttributes') attributeGroup. **/
		bool getIsXlinkTitleRequired() const
		{
			return myMxAttrGrpLinkAttributes.getIsXlinkTitleRequired();
		}

		/** Indicates whether or not the 'xlink:show' (aka 'XlinkShow') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'link-attributes' (aka 'LinkAttributes') attributeGroup. **/
		bool getIsXlinkShowRequired() const
		{
			return myMxAttrGrpLinkAttributes.getIsXlinkShowRequired();
		}

		/** Indicates whether or not the 'xlink:actuate' (aka 'XlinkActuate') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'link-attributes' (aka 'LinkAttributes') attributeGroup. **/
		bool getIsXlinkActuateRequired() const
		{
			return myMxAttrGrpLinkAttributes.getIsXlinkActuateRequired();
		}

		/** Indicates whether or not the 'name' (aka 'Name') attribute is required
		    to be present in a MusicXML document. **/
		bool getIsNameRequired() const
		{
			return false;
		}

		/** Indicates whether or not the 'element' (aka 'Element') attribute is
		    required to be present in a MusicXML document. This attribute is a
		    member of the 'element-position' (aka 'ElementPosition') attributeGroup. **/
		bool getIsElementRequired() const
		{
			return myMxAttrGrpElementPosition.getIsElementRequired();
		}

		/** Indicates whether or not the 'position' (aka 'Position') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'element-position' (aka 'ElementPosition') attributeGroup. **/
		bool getIsPositionRequired() const
		{
			return myMxAttrGrpElementPosition.getIsPositionRequired();
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

/* Get IsAttributePresent Values ------------------------------------------------------ */

		/** Indicates whether or not the 'xlink:href' (aka 'XlinkHref') attribute
		    is (or will be) present in the MusicXML document. Note: because 'xlink:href'
		    is required by the MusicXML specification, getIsXlinkHrefPresent will
		    always return 'true'. There is no corresponding setIsXlinkHrefPresent
		    function for this attribute. This attribute is a member of the 'link-attributes'
		    (aka 'LinkAttributes') attributeGroup. **/
		bool getIsXlinkHrefPresent() const
		{
			return myMxAttrGrpLinkAttributes.getIsXlinkHrefPresent();
		}

		/** Indicates whether or not the 'xlink:type' (aka 'XlinkType') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'link-attributes' (aka 'LinkAttributes') attributeGroup. **/
		bool getIsXlinkTypePresent() const
		{
			return myMxAttrGrpLinkAttributes.getIsXlinkTypePresent();
		}

		/** Indicates whether or not the 'xlink:role' (aka 'XlinkRole') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'link-attributes' (aka 'LinkAttributes') attributeGroup. **/
		bool getIsXlinkRolePresent() const
		{
			return myMxAttrGrpLinkAttributes.getIsXlinkRolePresent();
		}

		/** Indicates whether or not the 'xlink:title' (aka 'XlinkTitle') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'link-attributes' (aka 'LinkAttributes') attributeGroup. **/
		bool getIsXlinkTitlePresent() const
		{
			return myMxAttrGrpLinkAttributes.getIsXlinkTitlePresent();
		}

		/** Indicates whether or not the 'xlink:show' (aka 'XlinkShow') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'link-attributes' (aka 'LinkAttributes') attributeGroup. **/
		bool getIsXlinkShowPresent() const
		{
			return myMxAttrGrpLinkAttributes.getIsXlinkShowPresent();
		}

		/** Indicates whether or not the 'xlink:actuate' (aka 'XlinkActuate') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'link-attributes' (aka 'LinkAttributes') attributeGroup. **/
		bool getIsXlinkActuatePresent() const
		{
			return myMxAttrGrpLinkAttributes.getIsXlinkActuatePresent();
		}

		/** Indicates whether or not the 'name' (aka 'Name') attribute is (or will
		    be) present in the MusicXML document. **/
		bool getIsNamePresent() const
		{
			return myIsNamePresent;
		}

		/** Indicates whether or not the 'element' (aka 'Element') attribute is
		    (or will be) present in the MusicXML document. This attribute is a
		    member of the 'element-position' (aka 'ElementPosition') attributeGroup. **/
		bool getIsElementPresent() const
		{
			return myMxAttrGrpElementPosition.getIsElementPresent();
		}

		/** Indicates whether or not the 'position' (aka 'Position') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'element-position' (aka 'ElementPosition') attributeGroup. **/
		bool getIsPositionPresent() const
		{
			return myMxAttrGrpElementPosition.getIsPositionPresent();
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

/* Set IsAttributePresent Values ------------------------------------------------------ */

		/** Sets the value which indicates whether or not the 'xlink:type' (aka
		    'XlinkType') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'link-attributes' (aka 'LinkAttributes')
		    attributeGroup. **/
		void setIsXlinkTypePresent( const bool& value_in )
		{
			myMxAttrGrpLinkAttributes.setIsXlinkTypePresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'xlink:role' (aka
		    'XlinkRole') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'link-attributes' (aka 'LinkAttributes')
		    attributeGroup. **/
		void setIsXlinkRolePresent( const bool& value_in )
		{
			myMxAttrGrpLinkAttributes.setIsXlinkRolePresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'xlink:title' (aka
		    'XlinkTitle') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'link-attributes' (aka 'LinkAttributes')
		    attributeGroup. **/
		void setIsXlinkTitlePresent( const bool& value_in )
		{
			myMxAttrGrpLinkAttributes.setIsXlinkTitlePresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'xlink:show' (aka
		    'XlinkShow') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'link-attributes' (aka 'LinkAttributes')
		    attributeGroup. **/
		void setIsXlinkShowPresent( const bool& value_in )
		{
			myMxAttrGrpLinkAttributes.setIsXlinkShowPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'xlink:actuate' (aka
		    'XlinkActuate') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'link-attributes' (aka 'LinkAttributes')
		    attributeGroup. **/
		void setIsXlinkActuatePresent( const bool& value_in )
		{
			myMxAttrGrpLinkAttributes.setIsXlinkActuatePresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'name' (aka 'Name')
		    attribute is (or will be) present in the MusicXML document. **/
		void setIsNamePresent( const bool& value_in )
		{
			myIsNamePresent = value_in;
		}

		/** Sets the value which indicates whether or not the 'element' (aka 'Element')
		    attribute is (or will be) present in the MusicXML document. This attribute
		    is a member of the 'element-position' (aka 'ElementPosition') attributeGroup. **/
		void setIsElementPresent( const bool& value_in )
		{
			myMxAttrGrpElementPosition.setIsElementPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'position' (aka 'Position')
		    attribute is (or will be) present in the MusicXML document. This attribute
		    is a member of the 'element-position' (aka 'ElementPosition') attributeGroup. **/
		void setIsPositionPresent( const bool& value_in )
		{
			myMxAttrGrpElementPosition.setIsPositionPresent( value_in );
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
			hidden::attributeStream( getIsXlinkHrefPresent(), "xlink:href", getXlinkHref().toString(), os_out, isFirst );
			hidden::attributeStream( getIsXlinkTypePresent(), "xlink:type", getXlinkType().toString(), os_out, isFirst );
			hidden::attributeStream( getIsXlinkRolePresent(), "xlink:role", getXlinkRole().toString(), os_out, isFirst );
			hidden::attributeStream( getIsXlinkTitlePresent(), "xlink:title", getXlinkTitle().toString(), os_out, isFirst );
			hidden::attributeStream( getIsXlinkShowPresent(), "xlink:show", getXlinkShow().toString(), os_out, isFirst );
			hidden::attributeStream( getIsXlinkActuatePresent(), "xlink:actuate", getXlinkActuate().toString(), os_out, isFirst );
			hidden::attributeStream( getIsNamePresent(), "name", getName().toString(), os_out, isFirst );
			hidden::attributeStream( getIsElementPresent(), "element", getElement().toString(), os_out, isFirst );
			hidden::attributeStream( getIsPositionPresent(), "position", getPosition().toString(), os_out, isFirst );
			hidden::attributeStream( getIsDefaultXPresent(), "default-x", getDefaultX().toString(), os_out, isFirst );
			hidden::attributeStream( getIsDefaultYPresent(), "default-y", getDefaultY().toString(), os_out, isFirst );
			hidden::attributeStream( getIsRelativeXPresent(), "relative-x", getRelativeX().toString(), os_out, isFirst );
			hidden::attributeStream( getIsRelativeYPresent(), "relative-y", getRelativeY().toString(), os_out, isFirst );
			os_out << "/>";
			return os_out;
		}

/* Get IsAttributeDefaultDefined Values ----------------------------------------------- */

		/** Indicates whether or not the 'xlink:href' (aka 'XlinkHref') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'link-attributes'
		    (aka 'LinkAttributes') attributeGroup. **/
		bool getIsXlinkHrefDefaultDefined() const
		{
			return myMxAttrGrpLinkAttributes.getIsXlinkHrefDefaultDefined();
		}

		/** Indicates whether or not the 'xlink:type' (aka 'XlinkType') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'link-attributes'
		    (aka 'LinkAttributes') attributeGroup. **/
		bool getIsXlinkTypeDefaultDefined() const
		{
			return myMxAttrGrpLinkAttributes.getIsXlinkTypeDefaultDefined();
		}

		/** Indicates whether or not the 'xlink:role' (aka 'XlinkRole') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'link-attributes'
		    (aka 'LinkAttributes') attributeGroup. **/
		bool getIsXlinkRoleDefaultDefined() const
		{
			return myMxAttrGrpLinkAttributes.getIsXlinkRoleDefaultDefined();
		}

		/** Indicates whether or not the 'xlink:title' (aka 'XlinkTitle') has a
		    default value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'link-attributes'
		    (aka 'LinkAttributes') attributeGroup. **/
		bool getIsXlinkTitleDefaultDefined() const
		{
			return myMxAttrGrpLinkAttributes.getIsXlinkTitleDefaultDefined();
		}

		/** Indicates whether or not the 'xlink:show' (aka 'XlinkShow') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'link-attributes'
		    (aka 'LinkAttributes') attributeGroup. **/
		bool getIsXlinkShowDefaultDefined() const
		{
			return myMxAttrGrpLinkAttributes.getIsXlinkShowDefaultDefined();
		}

		/** Indicates whether or not the 'xlink:actuate' (aka 'XlinkActuate') has
		    a default value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'link-attributes'
		    (aka 'LinkAttributes') attributeGroup. **/
		bool getIsXlinkActuateDefaultDefined() const
		{
			return myMxAttrGrpLinkAttributes.getIsXlinkActuateDefaultDefined();
		}

		/** Indicates whether or not the 'name' (aka 'Name') has a default value
		    defined in the MusicXML xsd specification (either explicitly or in
		    the documentation). **/
		bool getIsNameDefaultDefined() const
		{
			return false;
		}

		/** Indicates whether or not the 'element' (aka 'Element') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'element-position'
		    (aka 'ElementPosition') attributeGroup. **/
		bool getIsElementDefaultDefined() const
		{
			return myMxAttrGrpElementPosition.getIsElementDefaultDefined();
		}

		/** Indicates whether or not the 'position' (aka 'Position') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'element-position'
		    (aka 'ElementPosition') attributeGroup. **/
		bool getIsPositionDefaultDefined() const
		{
			return myMxAttrGrpElementPosition.getIsPositionDefaultDefined();
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

/* Get AttributeDefaultValue ---------------------------------------------------------- */

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'xlink:href' (aka 'XlinkHref') attribute. This attribute is a member
		    of the 'link-attributes' (aka 'LinkAttributes') attributeGroup. **/
		XlinkHref getXlinkHrefDefaultValue() const
		{
			return myMxAttrGrpLinkAttributes.getXlinkHrefDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'xlink:type' (aka 'XlinkType') attribute. This attribute is a member
		    of the 'link-attributes' (aka 'LinkAttributes') attributeGroup. **/
		XlinkType getXlinkTypeDefaultValue() const
		{
			return myMxAttrGrpLinkAttributes.getXlinkTypeDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'xlink:role' (aka 'XlinkRole') attribute. This attribute is a member
		    of the 'link-attributes' (aka 'LinkAttributes') attributeGroup. **/
		XlinkRole getXlinkRoleDefaultValue() const
		{
			return myMxAttrGrpLinkAttributes.getXlinkRoleDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'xlink:title' (aka 'XlinkTitle') attribute. This attribute is a
		    member of the 'link-attributes' (aka 'LinkAttributes') attributeGroup. **/
		XlinkTitle getXlinkTitleDefaultValue() const
		{
			return myMxAttrGrpLinkAttributes.getXlinkTitleDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'xlink:show' (aka 'XlinkShow') attribute. This attribute is a member
		    of the 'link-attributes' (aka 'LinkAttributes') attributeGroup. **/
		XlinkShow getXlinkShowDefaultValue() const
		{
			return myMxAttrGrpLinkAttributes.getXlinkShowDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'xlink:actuate' (aka 'XlinkActuate') attribute. This attribute
		    is a member of the 'link-attributes' (aka 'LinkAttributes') attributeGroup. **/
		XlinkActuate getXlinkActuateDefaultValue() const
		{
			return myMxAttrGrpLinkAttributes.getXlinkActuateDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'name' (aka 'Name') attribute. **/
		XsToken getNameDefaultValue() const
		{
			return XsToken(  );
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'element' (aka 'Element') attribute. This attribute is a member
		    of the 'element-position' (aka 'ElementPosition') attributeGroup. **/
		XsNmToken getElementDefaultValue() const
		{
			return myMxAttrGrpElementPosition.getElementDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'position' (aka 'Position') attribute. This attribute is a member
		    of the 'element-position' (aka 'ElementPosition') attributeGroup. **/
		XsPositiveInteger getPositionDefaultValue() const
		{
			return myMxAttrGrpElementPosition.getPositionDefaultValue();
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

	}; // struct MxCxEmptyLink::Impl

	const int MxCxEmptyLink::Impl::myXsdID = 4320;
	const std::string MxCxEmptyLink::Impl::myXmlTypeName = "link";
	const std::string MxCxEmptyLink::Impl::myCppClassName = "MxCxEmptyLink";
	const std::string MxCxEmptyLink::Impl::myDocumentation = "The link type serves as an outgoing simple XLink. It is also used to connect a MusicXML score with a MusicXML opus. If a relative link is used within a document that is part of a compressed MusicXML file, the link is relative to the root folder of the zip file.";

} // namespace lexicon


/* MxCxEmptyLink ---------------------------------------------------------------------- */

namespace lexicon
{

/* Constructor, Destructor, Copy, Assignment ------------------------------------------ */

	MxCxEmptyLink::MxCxEmptyLink( const std::string& elementName )
	:myImpl( new Impl( elementName ) ) {}

	MxCxEmptyLink::~MxCxEmptyLink() {}

	MxCxEmptyLink::MxCxEmptyLink( const MxCxEmptyLink& other )
	:myImpl( new Impl( *(other.myImpl) ) ) {}

	MxCxEmptyLink& MxCxEmptyLink::operator=( const MxCxEmptyLink& other )
	{
		this->myImpl = std::unique_ptr<Impl>( new Impl( *(other.myImpl) ) );
		return *this;
	}

/* GetSet Value and Element Name ------------------------------------------------------ */

	/** Returns the name of the Xml element employing this ComplexType. **/
	std::string MxCxEmptyLink::getElementName() const
	{
		return myImpl->getElementName();
	}

/* Get Class Information -------------------------------------------------------------- */

	/** Returns the name of this xs:complexType as found in the musicxml.xsd
	    document. **/
	std::string MxCxEmptyLink::getXmlTypeName() const
	{
		return myImpl->getXmlTypeName();
	}

	/** Returns the name of this C++ class. **/
	std::string MxCxEmptyLink::getClassName() const
	{
		return myImpl->getClassName();
	}

	/** Returns the documentation for this musicxml type as found in the musicxml.xsd
	    document. **/
	std::string MxCxEmptyLink::getDocumentation() const
	{
		return myImpl->getDocumentation();
	}

/* Get Attribute Values --------------------------------------------------------------- */

	/** Returns the internal value of the 'xlink:href' (aka 'XlinkHref') attribute.
	    This attribute is a member of the 'link-attributes' (aka 'LinkAttributes')
	    attributeGroup. **/
	XlinkHref MxCxEmptyLink::getXlinkHref() const
	{
		return myImpl->getXlinkHref();
	}

	/** Returns the internal value of the 'xlink:type' (aka 'XlinkType') attribute.
	    This attribute is a member of the 'link-attributes' (aka 'LinkAttributes')
	    attributeGroup. **/
	XlinkType MxCxEmptyLink::getXlinkType() const
	{
		return myImpl->getXlinkType();
	}

	/** Returns the internal value of the 'xlink:role' (aka 'XlinkRole') attribute.
	    This attribute is a member of the 'link-attributes' (aka 'LinkAttributes')
	    attributeGroup. **/
	XlinkRole MxCxEmptyLink::getXlinkRole() const
	{
		return myImpl->getXlinkRole();
	}

	/** Returns the internal value of the 'xlink:title' (aka 'XlinkTitle')
	    attribute. This attribute is a member of the 'link-attributes' (aka
	    'LinkAttributes') attributeGroup. **/
	XlinkTitle MxCxEmptyLink::getXlinkTitle() const
	{
		return myImpl->getXlinkTitle();
	}

	/** Returns the internal value of the 'xlink:show' (aka 'XlinkShow') attribute.
	    This attribute is a member of the 'link-attributes' (aka 'LinkAttributes')
	    attributeGroup. **/
	XlinkShow MxCxEmptyLink::getXlinkShow() const
	{
		return myImpl->getXlinkShow();
	}

	/** Returns the internal value of the 'xlink:actuate' (aka 'XlinkActuate')
	    attribute. This attribute is a member of the 'link-attributes' (aka
	    'LinkAttributes') attributeGroup. **/
	XlinkActuate MxCxEmptyLink::getXlinkActuate() const
	{
		return myImpl->getXlinkActuate();
	}

	/** Returns the internal value of the 'name' (aka 'Name') attribute. **/
	XsToken MxCxEmptyLink::getName() const
	{
		return myImpl->getName();
	}

	/** Returns the internal value of the 'element' (aka 'Element') attribute.
	    This attribute is a member of the 'element-position' (aka 'ElementPosition')
	    attributeGroup. **/
	XsNmToken MxCxEmptyLink::getElement() const
	{
		return myImpl->getElement();
	}

	/** Returns the internal value of the 'position' (aka 'Position') attribute.
	    This attribute is a member of the 'element-position' (aka 'ElementPosition')
	    attributeGroup. **/
	XsPositiveInteger MxCxEmptyLink::getPosition() const
	{
		return myImpl->getPosition();
	}

	/** Returns the internal value of the 'default-x' (aka 'DefaultX') attribute.
	    This attribute is a member of the 'position' (aka 'Position') attributeGroup. **/
	MxNumberTenths MxCxEmptyLink::getDefaultX() const
	{
		return myImpl->getDefaultX();
	}

	/** Returns the internal value of the 'default-y' (aka 'DefaultY') attribute.
	    This attribute is a member of the 'position' (aka 'Position') attributeGroup. **/
	MxNumberTenths MxCxEmptyLink::getDefaultY() const
	{
		return myImpl->getDefaultY();
	}

	/** Returns the internal value of the 'relative-x' (aka 'RelativeX') attribute.
	    This attribute is a member of the 'position' (aka 'Position') attributeGroup. **/
	MxNumberTenths MxCxEmptyLink::getRelativeX() const
	{
		return myImpl->getRelativeX();
	}

	/** Returns the internal value of the 'relative-y' (aka 'RelativeY') attribute.
	    This attribute is a member of the 'position' (aka 'Position') attributeGroup. **/
	MxNumberTenths MxCxEmptyLink::getRelativeY() const
	{
		return myImpl->getRelativeY();
	}

/* Set Attribute Values --------------------------------------------------------------- */

	/** Sets the internal value of the 'xlink:href' (aka 'XlinkHref') attribute.
	    This attribute is a member of the 'link-attributes' (aka 'LinkAttributes')
	    attributeGroup. **/
	void MxCxEmptyLink::setXlinkHref( const XlinkHref& value_in )
	{
		myImpl->setXlinkHref( value_in );
	}

	/** Sets the internal value of the 'xlink:role' (aka 'XlinkRole') attribute.
	    This attribute is a member of the 'link-attributes' (aka 'LinkAttributes')
	    attributeGroup. **/
	void MxCxEmptyLink::setXlinkRole( const XlinkRole& value_in )
	{
		myImpl->setXlinkRole( value_in );
	}

	/** Sets the internal value of the 'xlink:title' (aka 'XlinkTitle') attribute.
	    This attribute is a member of the 'link-attributes' (aka 'LinkAttributes')
	    attributeGroup. **/
	void MxCxEmptyLink::setXlinkTitle( const XlinkTitle& value_in )
	{
		myImpl->setXlinkTitle( value_in );
	}

	/** Sets the internal value of the 'xlink:show' (aka 'XlinkShow') attribute.
	    This attribute is a member of the 'link-attributes' (aka 'LinkAttributes')
	    attributeGroup. **/
	void MxCxEmptyLink::setXlinkShow( const XlinkShow& value_in )
	{
		myImpl->setXlinkShow( value_in );
	}

	/** Sets the internal value of the 'xlink:actuate' (aka 'XlinkActuate')
	    attribute. This attribute is a member of the 'link-attributes' (aka
	    'LinkAttributes') attributeGroup. **/
	void MxCxEmptyLink::setXlinkActuate( const XlinkActuate& value_in )
	{
		myImpl->setXlinkActuate( value_in );
	}

	/** Sets the internal value of the 'name' (aka 'Name') attribute. **/
	void MxCxEmptyLink::setName( const XsToken& value_in )
	{
		myImpl->setName( value_in );
	}

	/** Sets the internal value of the 'element' (aka 'Element') attribute.
	    This attribute is a member of the 'element-position' (aka 'ElementPosition')
	    attributeGroup. **/
	void MxCxEmptyLink::setElement( const XsNmToken& value_in )
	{
		myImpl->setElement( value_in );
	}

	/** Sets the internal value of the 'position' (aka 'Position') attribute.
	    This attribute is a member of the 'element-position' (aka 'ElementPosition')
	    attributeGroup. **/
	void MxCxEmptyLink::setPosition( const XsPositiveInteger& value_in )
	{
		myImpl->setPosition( value_in );
	}

	/** Sets the internal value of the 'default-x' (aka 'DefaultX') attribute.
	    This attribute is a member of the 'position' (aka 'Position') attributeGroup. **/
	void MxCxEmptyLink::setDefaultX( const MxNumberTenths& value_in )
	{
		myImpl->setDefaultX( value_in );
	}

	/** Sets the internal value of the 'default-y' (aka 'DefaultY') attribute.
	    This attribute is a member of the 'position' (aka 'Position') attributeGroup. **/
	void MxCxEmptyLink::setDefaultY( const MxNumberTenths& value_in )
	{
		myImpl->setDefaultY( value_in );
	}

	/** Sets the internal value of the 'relative-x' (aka 'RelativeX') attribute.
	    This attribute is a member of the 'position' (aka 'Position') attributeGroup. **/
	void MxCxEmptyLink::setRelativeX( const MxNumberTenths& value_in )
	{
		myImpl->setRelativeX( value_in );
	}

	/** Sets the internal value of the 'relative-y' (aka 'RelativeY') attribute.
	    This attribute is a member of the 'position' (aka 'Position') attributeGroup. **/
	void MxCxEmptyLink::setRelativeY( const MxNumberTenths& value_in )
	{
		myImpl->setRelativeY( value_in );
	}

/* Get IsAttributeRequired Values ----------------------------------------------------- */

	/** Indicates whether or not the 'xlink:href' (aka 'XlinkHref') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'link-attributes' (aka 'LinkAttributes') attributeGroup. **/
	bool MxCxEmptyLink::getIsXlinkHrefRequired() const
	{
		return myImpl->getIsXlinkHrefRequired();
	}

	/** Indicates whether or not the 'xlink:type' (aka 'XlinkType') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'link-attributes' (aka 'LinkAttributes') attributeGroup. **/
	bool MxCxEmptyLink::getIsXlinkTypeRequired() const
	{
		return myImpl->getIsXlinkTypeRequired();
	}

	/** Indicates whether or not the 'xlink:role' (aka 'XlinkRole') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'link-attributes' (aka 'LinkAttributes') attributeGroup. **/
	bool MxCxEmptyLink::getIsXlinkRoleRequired() const
	{
		return myImpl->getIsXlinkRoleRequired();
	}

	/** Indicates whether or not the 'xlink:title' (aka 'XlinkTitle') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'link-attributes' (aka 'LinkAttributes') attributeGroup. **/
	bool MxCxEmptyLink::getIsXlinkTitleRequired() const
	{
		return myImpl->getIsXlinkTitleRequired();
	}

	/** Indicates whether or not the 'xlink:show' (aka 'XlinkShow') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'link-attributes' (aka 'LinkAttributes') attributeGroup. **/
	bool MxCxEmptyLink::getIsXlinkShowRequired() const
	{
		return myImpl->getIsXlinkShowRequired();
	}

	/** Indicates whether or not the 'xlink:actuate' (aka 'XlinkActuate') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'link-attributes' (aka 'LinkAttributes') attributeGroup. **/
	bool MxCxEmptyLink::getIsXlinkActuateRequired() const
	{
		return myImpl->getIsXlinkActuateRequired();
	}

	/** Indicates whether or not the 'name' (aka 'Name') attribute is required
	    to be present in a MusicXML document. **/
	bool MxCxEmptyLink::getIsNameRequired() const
	{
		return myImpl->getIsNameRequired();
	}

	/** Indicates whether or not the 'element' (aka 'Element') attribute is
	    required to be present in a MusicXML document. This attribute is a
	    member of the 'element-position' (aka 'ElementPosition') attributeGroup. **/
	bool MxCxEmptyLink::getIsElementRequired() const
	{
		return myImpl->getIsElementRequired();
	}

	/** Indicates whether or not the 'position' (aka 'Position') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'element-position' (aka 'ElementPosition') attributeGroup. **/
	bool MxCxEmptyLink::getIsPositionRequired() const
	{
		return myImpl->getIsPositionRequired();
	}

	/** Indicates whether or not the 'default-x' (aka 'DefaultX') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'position' (aka 'Position') attributeGroup. **/
	bool MxCxEmptyLink::getIsDefaultXRequired() const
	{
		return myImpl->getIsDefaultXRequired();
	}

	/** Indicates whether or not the 'default-y' (aka 'DefaultY') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'position' (aka 'Position') attributeGroup. **/
	bool MxCxEmptyLink::getIsDefaultYRequired() const
	{
		return myImpl->getIsDefaultYRequired();
	}

	/** Indicates whether or not the 'relative-x' (aka 'RelativeX') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'position' (aka 'Position') attributeGroup. **/
	bool MxCxEmptyLink::getIsRelativeXRequired() const
	{
		return myImpl->getIsRelativeXRequired();
	}

	/** Indicates whether or not the 'relative-y' (aka 'RelativeY') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'position' (aka 'Position') attributeGroup. **/
	bool MxCxEmptyLink::getIsRelativeYRequired() const
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
	bool MxCxEmptyLink::getIsXlinkHrefPresent() const
	{
		return myImpl->getIsXlinkHrefPresent();
	}

	/** Indicates whether or not the 'xlink:type' (aka 'XlinkType') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'link-attributes' (aka 'LinkAttributes') attributeGroup. **/
	bool MxCxEmptyLink::getIsXlinkTypePresent() const
	{
		return myImpl->getIsXlinkTypePresent();
	}

	/** Indicates whether or not the 'xlink:role' (aka 'XlinkRole') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'link-attributes' (aka 'LinkAttributes') attributeGroup. **/
	bool MxCxEmptyLink::getIsXlinkRolePresent() const
	{
		return myImpl->getIsXlinkRolePresent();
	}

	/** Indicates whether or not the 'xlink:title' (aka 'XlinkTitle') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'link-attributes' (aka 'LinkAttributes') attributeGroup. **/
	bool MxCxEmptyLink::getIsXlinkTitlePresent() const
	{
		return myImpl->getIsXlinkTitlePresent();
	}

	/** Indicates whether or not the 'xlink:show' (aka 'XlinkShow') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'link-attributes' (aka 'LinkAttributes') attributeGroup. **/
	bool MxCxEmptyLink::getIsXlinkShowPresent() const
	{
		return myImpl->getIsXlinkShowPresent();
	}

	/** Indicates whether or not the 'xlink:actuate' (aka 'XlinkActuate') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'link-attributes' (aka 'LinkAttributes') attributeGroup. **/
	bool MxCxEmptyLink::getIsXlinkActuatePresent() const
	{
		return myImpl->getIsXlinkActuatePresent();
	}

	/** Indicates whether or not the 'name' (aka 'Name') attribute is (or will
	    be) present in the MusicXML document. **/
	bool MxCxEmptyLink::getIsNamePresent() const
	{
		return myImpl->getIsNamePresent();
	}

	/** Indicates whether or not the 'element' (aka 'Element') attribute is
	    (or will be) present in the MusicXML document. This attribute is a
	    member of the 'element-position' (aka 'ElementPosition') attributeGroup. **/
	bool MxCxEmptyLink::getIsElementPresent() const
	{
		return myImpl->getIsElementPresent();
	}

	/** Indicates whether or not the 'position' (aka 'Position') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'element-position' (aka 'ElementPosition') attributeGroup. **/
	bool MxCxEmptyLink::getIsPositionPresent() const
	{
		return myImpl->getIsPositionPresent();
	}

	/** Indicates whether or not the 'default-x' (aka 'DefaultX') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'position' (aka 'Position') attributeGroup. **/
	bool MxCxEmptyLink::getIsDefaultXPresent() const
	{
		return myImpl->getIsDefaultXPresent();
	}

	/** Indicates whether or not the 'default-y' (aka 'DefaultY') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'position' (aka 'Position') attributeGroup. **/
	bool MxCxEmptyLink::getIsDefaultYPresent() const
	{
		return myImpl->getIsDefaultYPresent();
	}

	/** Indicates whether or not the 'relative-x' (aka 'RelativeX') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'position' (aka 'Position') attributeGroup. **/
	bool MxCxEmptyLink::getIsRelativeXPresent() const
	{
		return myImpl->getIsRelativeXPresent();
	}

	/** Indicates whether or not the 'relative-y' (aka 'RelativeY') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'position' (aka 'Position') attributeGroup. **/
	bool MxCxEmptyLink::getIsRelativeYPresent() const
	{
		return myImpl->getIsRelativeYPresent();
	}

/* Set IsAttributePresent Values ------------------------------------------------------ */

	/** Sets the value which indicates whether or not the 'xlink:type' (aka
	    'XlinkType') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'link-attributes' (aka 'LinkAttributes')
	    attributeGroup. **/
	void MxCxEmptyLink::setIsXlinkTypePresent( const bool& value_in )
	{
		myImpl->setIsXlinkTypePresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'xlink:role' (aka
	    'XlinkRole') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'link-attributes' (aka 'LinkAttributes')
	    attributeGroup. **/
	void MxCxEmptyLink::setIsXlinkRolePresent( const bool& value_in )
	{
		myImpl->setIsXlinkRolePresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'xlink:title' (aka
	    'XlinkTitle') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'link-attributes' (aka 'LinkAttributes')
	    attributeGroup. **/
	void MxCxEmptyLink::setIsXlinkTitlePresent( const bool& value_in )
	{
		myImpl->setIsXlinkTitlePresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'xlink:show' (aka
	    'XlinkShow') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'link-attributes' (aka 'LinkAttributes')
	    attributeGroup. **/
	void MxCxEmptyLink::setIsXlinkShowPresent( const bool& value_in )
	{
		myImpl->setIsXlinkShowPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'xlink:actuate' (aka
	    'XlinkActuate') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'link-attributes' (aka 'LinkAttributes')
	    attributeGroup. **/
	void MxCxEmptyLink::setIsXlinkActuatePresent( const bool& value_in )
	{
		myImpl->setIsXlinkActuatePresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'name' (aka 'Name')
	    attribute is (or will be) present in the MusicXML document. **/
	void MxCxEmptyLink::setIsNamePresent( const bool& value_in )
	{
		myImpl->setIsNamePresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'element' (aka 'Element')
	    attribute is (or will be) present in the MusicXML document. This attribute
	    is a member of the 'element-position' (aka 'ElementPosition') attributeGroup. **/
	void MxCxEmptyLink::setIsElementPresent( const bool& value_in )
	{
		myImpl->setIsElementPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'position' (aka 'Position')
	    attribute is (or will be) present in the MusicXML document. This attribute
	    is a member of the 'element-position' (aka 'ElementPosition') attributeGroup. **/
	void MxCxEmptyLink::setIsPositionPresent( const bool& value_in )
	{
		myImpl->setIsPositionPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'default-x' (aka
	    'DefaultX') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'position' (aka 'Position') attributeGroup. **/
	void MxCxEmptyLink::setIsDefaultXPresent( const bool& value_in )
	{
		myImpl->setIsDefaultXPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'default-y' (aka
	    'DefaultY') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'position' (aka 'Position') attributeGroup. **/
	void MxCxEmptyLink::setIsDefaultYPresent( const bool& value_in )
	{
		myImpl->setIsDefaultYPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'relative-x' (aka
	    'RelativeX') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'position' (aka 'Position') attributeGroup. **/
	void MxCxEmptyLink::setIsRelativeXPresent( const bool& value_in )
	{
		myImpl->setIsRelativeXPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'relative-y' (aka
	    'RelativeY') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'position' (aka 'Position') attributeGroup. **/
	void MxCxEmptyLink::setIsRelativeYPresent( const bool& value_in )
	{
		myImpl->setIsRelativeYPresent( value_in );
	}

/* Stringing and Streaming ------------------------------------------------------------ */

	/** Returns the xml representation of the object's value. **/
	std::string MxCxEmptyLink::toString() const
	{
		return myImpl->toString();
	}

	/** Returns the xml representation of the object's value. **/
	std::ostream& MxCxEmptyLink::stream( std::ostream& os_out ) const
	{
		return myImpl->stream( os_out );
	}

/* Get IsAttributeDefaultDefined Values ----------------------------------------------- */

	/** Indicates whether or not the 'xlink:href' (aka 'XlinkHref') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'link-attributes'
	    (aka 'LinkAttributes') attributeGroup. **/
	bool MxCxEmptyLink::getIsXlinkHrefDefaultDefined() const
	{
		return myImpl->getIsXlinkHrefDefaultDefined();
	}

	/** Indicates whether or not the 'xlink:type' (aka 'XlinkType') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'link-attributes'
	    (aka 'LinkAttributes') attributeGroup. **/
	bool MxCxEmptyLink::getIsXlinkTypeDefaultDefined() const
	{
		return myImpl->getIsXlinkTypeDefaultDefined();
	}

	/** Indicates whether or not the 'xlink:role' (aka 'XlinkRole') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'link-attributes'
	    (aka 'LinkAttributes') attributeGroup. **/
	bool MxCxEmptyLink::getIsXlinkRoleDefaultDefined() const
	{
		return myImpl->getIsXlinkRoleDefaultDefined();
	}

	/** Indicates whether or not the 'xlink:title' (aka 'XlinkTitle') has a
	    default value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'link-attributes'
	    (aka 'LinkAttributes') attributeGroup. **/
	bool MxCxEmptyLink::getIsXlinkTitleDefaultDefined() const
	{
		return myImpl->getIsXlinkTitleDefaultDefined();
	}

	/** Indicates whether or not the 'xlink:show' (aka 'XlinkShow') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'link-attributes'
	    (aka 'LinkAttributes') attributeGroup. **/
	bool MxCxEmptyLink::getIsXlinkShowDefaultDefined() const
	{
		return myImpl->getIsXlinkShowDefaultDefined();
	}

	/** Indicates whether or not the 'xlink:actuate' (aka 'XlinkActuate') has
	    a default value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'link-attributes'
	    (aka 'LinkAttributes') attributeGroup. **/
	bool MxCxEmptyLink::getIsXlinkActuateDefaultDefined() const
	{
		return myImpl->getIsXlinkActuateDefaultDefined();
	}

	/** Indicates whether or not the 'name' (aka 'Name') has a default value
	    defined in the MusicXML xsd specification (either explicitly or in
	    the documentation). **/
	bool MxCxEmptyLink::getIsNameDefaultDefined() const
	{
		return myImpl->getIsNameDefaultDefined();
	}

	/** Indicates whether or not the 'element' (aka 'Element') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'element-position'
	    (aka 'ElementPosition') attributeGroup. **/
	bool MxCxEmptyLink::getIsElementDefaultDefined() const
	{
		return myImpl->getIsElementDefaultDefined();
	}

	/** Indicates whether or not the 'position' (aka 'Position') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'element-position'
	    (aka 'ElementPosition') attributeGroup. **/
	bool MxCxEmptyLink::getIsPositionDefaultDefined() const
	{
		return myImpl->getIsPositionDefaultDefined();
	}

	/** Indicates whether or not the 'default-x' (aka 'DefaultX') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'position'
	    (aka 'Position') attributeGroup. **/
	bool MxCxEmptyLink::getIsDefaultXDefaultDefined() const
	{
		return myImpl->getIsDefaultXDefaultDefined();
	}

	/** Indicates whether or not the 'default-y' (aka 'DefaultY') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'position'
	    (aka 'Position') attributeGroup. **/
	bool MxCxEmptyLink::getIsDefaultYDefaultDefined() const
	{
		return myImpl->getIsDefaultYDefaultDefined();
	}

	/** Indicates whether or not the 'relative-x' (aka 'RelativeX') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'position'
	    (aka 'Position') attributeGroup. **/
	bool MxCxEmptyLink::getIsRelativeXDefaultDefined() const
	{
		return myImpl->getIsRelativeXDefaultDefined();
	}

	/** Indicates whether or not the 'relative-y' (aka 'RelativeY') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'position'
	    (aka 'Position') attributeGroup. **/
	bool MxCxEmptyLink::getIsRelativeYDefaultDefined() const
	{
		return myImpl->getIsRelativeYDefaultDefined();
	}

/* Get AttributeDefaultValue ---------------------------------------------------------- */

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'xlink:href' (aka 'XlinkHref') attribute. This attribute is a member
	    of the 'link-attributes' (aka 'LinkAttributes') attributeGroup. **/
	XlinkHref MxCxEmptyLink::getXlinkHrefDefaultValue() const
	{
		return myImpl->getXlinkHrefDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'xlink:type' (aka 'XlinkType') attribute. This attribute is a member
	    of the 'link-attributes' (aka 'LinkAttributes') attributeGroup. **/
	XlinkType MxCxEmptyLink::getXlinkTypeDefaultValue() const
	{
		return myImpl->getXlinkTypeDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'xlink:role' (aka 'XlinkRole') attribute. This attribute is a member
	    of the 'link-attributes' (aka 'LinkAttributes') attributeGroup. **/
	XlinkRole MxCxEmptyLink::getXlinkRoleDefaultValue() const
	{
		return myImpl->getXlinkRoleDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'xlink:title' (aka 'XlinkTitle') attribute. This attribute is a
	    member of the 'link-attributes' (aka 'LinkAttributes') attributeGroup. **/
	XlinkTitle MxCxEmptyLink::getXlinkTitleDefaultValue() const
	{
		return myImpl->getXlinkTitleDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'xlink:show' (aka 'XlinkShow') attribute. This attribute is a member
	    of the 'link-attributes' (aka 'LinkAttributes') attributeGroup. **/
	XlinkShow MxCxEmptyLink::getXlinkShowDefaultValue() const
	{
		return myImpl->getXlinkShowDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'xlink:actuate' (aka 'XlinkActuate') attribute. This attribute
	    is a member of the 'link-attributes' (aka 'LinkAttributes') attributeGroup. **/
	XlinkActuate MxCxEmptyLink::getXlinkActuateDefaultValue() const
	{
		return myImpl->getXlinkActuateDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'name' (aka 'Name') attribute. **/
	XsToken MxCxEmptyLink::getNameDefaultValue() const
	{
		return myImpl->getNameDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'element' (aka 'Element') attribute. This attribute is a member
	    of the 'element-position' (aka 'ElementPosition') attributeGroup. **/
	XsNmToken MxCxEmptyLink::getElementDefaultValue() const
	{
		return myImpl->getElementDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'position' (aka 'Position') attribute. This attribute is a member
	    of the 'element-position' (aka 'ElementPosition') attributeGroup. **/
	XsPositiveInteger MxCxEmptyLink::getPositionDefaultValue() const
	{
		return myImpl->getPositionDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'default-x' (aka 'DefaultX') attribute. This attribute is a member
	    of the 'position' (aka 'Position') attributeGroup. **/
	MxNumberTenths MxCxEmptyLink::getDefaultXDefaultValue() const
	{
		return myImpl->getDefaultXDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'default-y' (aka 'DefaultY') attribute. This attribute is a member
	    of the 'position' (aka 'Position') attributeGroup. **/
	MxNumberTenths MxCxEmptyLink::getDefaultYDefaultValue() const
	{
		return myImpl->getDefaultYDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'relative-x' (aka 'RelativeX') attribute. This attribute is a member
	    of the 'position' (aka 'Position') attributeGroup. **/
	MxNumberTenths MxCxEmptyLink::getRelativeXDefaultValue() const
	{
		return myImpl->getRelativeXDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'relative-y' (aka 'RelativeY') attribute. This attribute is a member
	    of the 'position' (aka 'Position') attributeGroup. **/
	MxNumberTenths MxCxEmptyLink::getRelativeYDefaultValue() const
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

