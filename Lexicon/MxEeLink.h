/* See MusicXML License at the bottom of this code page. */

#pragma once

/**
  * @file       MxEeLink.h
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
  * The purpose of 'MxEeLink' is to provide a strongly-typed C++ representation
  * of the 'link' MusicXML element with the ability to write the element to XML-appropriate
  * strings. 
  * 
  * Music XML XSD Documentation: ( no documentation )
  * 
  * 
  * <xs:element name="link" type="link" minOccurs="0" maxOccurs="unbounded"/>
  * 
  * 
  * <xs:complexType name="link">
  * 	<xs:annotation>
  * 		<xs:documentation>The link type serves as an outgoing simple XLink. It
  * is also used to connect a MusicXML score with a MusicXML opus. If a relative
  * link is used within a document that is part of a compressed MusicXML file,
  * the link is relative to the  root folder of the zip file.</xs:documentation>
  * </xs:annotation>
  * 	<xs:attributeGroup ref="link-attributes"/>
  * 	<xs:attribute name="name" type="xs:token"/>
  * 	<xs:attributeGroup ref="element-position"/>
  * 	<xs:attributeGroup ref="position"/>
  * </xs:complexType>
  * 
  * 
  * 
  * 
 **/

#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include "LexiconBaseObjects.h"
#include "MxNumberTenths.h"
#include "XlinkActuate.h"
#include "XlinkHref.h"
#include "XlinkRole.h"
#include "XlinkShow.h"
#include "XlinkTitle.h"
#include "XlinkType.h"
#include "XsNmToken.h"
#include "XsPositiveInteger.h"
#include "XsToken.h"

namespace lexicon
{
/* MxEeLink --------------------------------------------------------------------------- */

	class MxEeLink;
	typedef std::shared_ptr<MxEeLink> HMxEeLink;
	typedef std::vector<MxEeLink> MxEeLinks;
	typedef MxEeLinks::iterator MxEeLinksIter;
	typedef MxEeLinks::const_iterator MxEeLinksIterConst;

	class MxEeLink : public MxObject
	{
	public:

/* Constructor, Destructor, Copy, Assignment ------------------------------------------ */

		MxEeLink();
		virtual ~MxEeLink();
		MxEeLink( const MxEeLink& other );
		MxEeLink& operator=( const MxEeLink& other );

/* minOccurs maxOccurs ---------------------------------------------------------------- */

		/** Returns the minOccurs value from the Music XML xsd specification. **/
		int getMinOccurs() const;

		/** Returns the maxOccurs value from the Music XML xsd specification. **/
		int getMaxOccurs() const;

		/** Returns true if the maxOccurs value from the Music XML xsd specification
		    is 'unbounded'. **/
		bool getIsMaxOccursUnbounded() const;

/* Get Class Information -------------------------------------------------------------- */

		/** Returns the name of this xs:element as found in the musicxml.xsd document. **/
		std::string getXmlTypeName() const;

		/** Returns the name of this C++ class. **/
		std::string getClassName() const;

		/** Returns the documentation for this musicxml type as found in the musicxml.xsd
		    document. **/
		std::string getDocumentation() const;

/* Get Attribute Values --------------------------------------------------------------- */

		/** Returns the internal value of the 'xlink:href' (aka 'XlinkHref') attribute.
		    This attribute is a member of the 'link-attributes' (aka 'LinkAttributes')
		    attributeGroup. **/
		XlinkHref getXlinkHref() const;

		/** Returns the internal value of the 'xlink:type' (aka 'XlinkType') attribute.
		    This attribute is a member of the 'link-attributes' (aka 'LinkAttributes')
		    attributeGroup. **/
		XlinkType getXlinkType() const;

		/** Returns the internal value of the 'xlink:role' (aka 'XlinkRole') attribute.
		    This attribute is a member of the 'link-attributes' (aka 'LinkAttributes')
		    attributeGroup. **/
		XlinkRole getXlinkRole() const;

		/** Returns the internal value of the 'xlink:title' (aka 'XlinkTitle')
		    attribute. This attribute is a member of the 'link-attributes' (aka
		    'LinkAttributes') attributeGroup. **/
		XlinkTitle getXlinkTitle() const;

		/** Returns the internal value of the 'xlink:show' (aka 'XlinkShow') attribute.
		    This attribute is a member of the 'link-attributes' (aka 'LinkAttributes')
		    attributeGroup. **/
		XlinkShow getXlinkShow() const;

		/** Returns the internal value of the 'xlink:actuate' (aka 'XlinkActuate')
		    attribute. This attribute is a member of the 'link-attributes' (aka
		    'LinkAttributes') attributeGroup. **/
		XlinkActuate getXlinkActuate() const;

		/** Returns the internal value of the 'name' (aka 'Name') attribute. **/
		XsToken getName() const;

		/** Returns the internal value of the 'element' (aka 'Element') attribute.
		    This attribute is a member of the 'element-position' (aka 'ElementPosition')
		    attributeGroup. **/
		XsNmToken getElement() const;

		/** Returns the internal value of the 'position' (aka 'Position') attribute.
		    This attribute is a member of the 'element-position' (aka 'ElementPosition')
		    attributeGroup. **/
		XsPositiveInteger getPosition() const;

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

/* Set Attribute Values --------------------------------------------------------------- */

		/** Sets the internal value of the 'xlink:href' (aka 'XlinkHref') attribute.
		    This attribute is a member of the 'link-attributes' (aka 'LinkAttributes')
		    attributeGroup. **/
		void setXlinkHref( const XlinkHref& value_in );

		/** Sets the internal value of the 'xlink:role' (aka 'XlinkRole') attribute.
		    This attribute is a member of the 'link-attributes' (aka 'LinkAttributes')
		    attributeGroup. **/
		void setXlinkRole( const XlinkRole& value_in );

		/** Sets the internal value of the 'xlink:title' (aka 'XlinkTitle') attribute.
		    This attribute is a member of the 'link-attributes' (aka 'LinkAttributes')
		    attributeGroup. **/
		void setXlinkTitle( const XlinkTitle& value_in );

		/** Sets the internal value of the 'xlink:show' (aka 'XlinkShow') attribute.
		    This attribute is a member of the 'link-attributes' (aka 'LinkAttributes')
		    attributeGroup. **/
		void setXlinkShow( const XlinkShow& value_in );

		/** Sets the internal value of the 'xlink:actuate' (aka 'XlinkActuate')
		    attribute. This attribute is a member of the 'link-attributes' (aka
		    'LinkAttributes') attributeGroup. **/
		void setXlinkActuate( const XlinkActuate& value_in );

		/** Sets the internal value of the 'name' (aka 'Name') attribute. **/
		void setName( const XsToken& value_in );

		/** Sets the internal value of the 'element' (aka 'Element') attribute.
		    This attribute is a member of the 'element-position' (aka 'ElementPosition')
		    attributeGroup. **/
		void setElement( const XsNmToken& value_in );

		/** Sets the internal value of the 'position' (aka 'Position') attribute.
		    This attribute is a member of the 'element-position' (aka 'ElementPosition')
		    attributeGroup. **/
		void setPosition( const XsPositiveInteger& value_in );

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

/* Get IsAttributeRequired Values ----------------------------------------------------- */

		/** Indicates whether or not the 'xlink:href' (aka 'XlinkHref') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'link-attributes' (aka 'LinkAttributes') attributeGroup. **/
		bool getIsXlinkHrefRequired() const;

		/** Indicates whether or not the 'xlink:type' (aka 'XlinkType') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'link-attributes' (aka 'LinkAttributes') attributeGroup. **/
		bool getIsXlinkTypeRequired() const;

		/** Indicates whether or not the 'xlink:role' (aka 'XlinkRole') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'link-attributes' (aka 'LinkAttributes') attributeGroup. **/
		bool getIsXlinkRoleRequired() const;

		/** Indicates whether or not the 'xlink:title' (aka 'XlinkTitle') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'link-attributes' (aka 'LinkAttributes') attributeGroup. **/
		bool getIsXlinkTitleRequired() const;

		/** Indicates whether or not the 'xlink:show' (aka 'XlinkShow') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'link-attributes' (aka 'LinkAttributes') attributeGroup. **/
		bool getIsXlinkShowRequired() const;

		/** Indicates whether or not the 'xlink:actuate' (aka 'XlinkActuate') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'link-attributes' (aka 'LinkAttributes') attributeGroup. **/
		bool getIsXlinkActuateRequired() const;

		/** Indicates whether or not the 'name' (aka 'Name') attribute is required
		    to be present in a MusicXML document. **/
		bool getIsNameRequired() const;

		/** Indicates whether or not the 'element' (aka 'Element') attribute is
		    required to be present in a MusicXML document. This attribute is a
		    member of the 'element-position' (aka 'ElementPosition') attributeGroup. **/
		bool getIsElementRequired() const;

		/** Indicates whether or not the 'position' (aka 'Position') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'element-position' (aka 'ElementPosition') attributeGroup. **/
		bool getIsPositionRequired() const;

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

/* Get IsAttributePresent Values ------------------------------------------------------ */

		/** Indicates whether or not the 'xlink:href' (aka 'XlinkHref') attribute
		    is (or will be) present in the MusicXML document. Note: because 'xlink:href'
		    is required by the MusicXML specification, getIsXlinkHrefPresent will
		    always return 'true'. There is no corresponding setIsXlinkHrefPresent
		    function for this attribute. This attribute is a member of the 'link-attributes'
		    (aka 'LinkAttributes') attributeGroup. **/
		bool getIsXlinkHrefPresent() const;

		/** Indicates whether or not the 'xlink:type' (aka 'XlinkType') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'link-attributes' (aka 'LinkAttributes') attributeGroup. **/
		bool getIsXlinkTypePresent() const;

		/** Indicates whether or not the 'xlink:role' (aka 'XlinkRole') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'link-attributes' (aka 'LinkAttributes') attributeGroup. **/
		bool getIsXlinkRolePresent() const;

		/** Indicates whether or not the 'xlink:title' (aka 'XlinkTitle') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'link-attributes' (aka 'LinkAttributes') attributeGroup. **/
		bool getIsXlinkTitlePresent() const;

		/** Indicates whether or not the 'xlink:show' (aka 'XlinkShow') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'link-attributes' (aka 'LinkAttributes') attributeGroup. **/
		bool getIsXlinkShowPresent() const;

		/** Indicates whether or not the 'xlink:actuate' (aka 'XlinkActuate') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'link-attributes' (aka 'LinkAttributes') attributeGroup. **/
		bool getIsXlinkActuatePresent() const;

		/** Indicates whether or not the 'name' (aka 'Name') attribute is (or will
		    be) present in the MusicXML document. **/
		bool getIsNamePresent() const;

		/** Indicates whether or not the 'element' (aka 'Element') attribute is
		    (or will be) present in the MusicXML document. This attribute is a
		    member of the 'element-position' (aka 'ElementPosition') attributeGroup. **/
		bool getIsElementPresent() const;

		/** Indicates whether or not the 'position' (aka 'Position') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'element-position' (aka 'ElementPosition') attributeGroup. **/
		bool getIsPositionPresent() const;

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

/* Set IsAttributePresent Values ------------------------------------------------------ */

		/** Sets the value which indicates whether or not the 'xlink:type' (aka
		    'XlinkType') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'link-attributes' (aka 'LinkAttributes')
		    attributeGroup. **/
		void setIsXlinkTypePresent( const bool& value_in );

		/** Sets the value which indicates whether or not the 'xlink:role' (aka
		    'XlinkRole') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'link-attributes' (aka 'LinkAttributes')
		    attributeGroup. **/
		void setIsXlinkRolePresent( const bool& value_in );

		/** Sets the value which indicates whether or not the 'xlink:title' (aka
		    'XlinkTitle') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'link-attributes' (aka 'LinkAttributes')
		    attributeGroup. **/
		void setIsXlinkTitlePresent( const bool& value_in );

		/** Sets the value which indicates whether or not the 'xlink:show' (aka
		    'XlinkShow') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'link-attributes' (aka 'LinkAttributes')
		    attributeGroup. **/
		void setIsXlinkShowPresent( const bool& value_in );

		/** Sets the value which indicates whether or not the 'xlink:actuate' (aka
		    'XlinkActuate') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'link-attributes' (aka 'LinkAttributes')
		    attributeGroup. **/
		void setIsXlinkActuatePresent( const bool& value_in );

		/** Sets the value which indicates whether or not the 'name' (aka 'Name')
		    attribute is (or will be) present in the MusicXML document. **/
		void setIsNamePresent( const bool& value_in );

		/** Sets the value which indicates whether or not the 'element' (aka 'Element')
		    attribute is (or will be) present in the MusicXML document. This attribute
		    is a member of the 'element-position' (aka 'ElementPosition') attributeGroup. **/
		void setIsElementPresent( const bool& value_in );

		/** Sets the value which indicates whether or not the 'position' (aka 'Position')
		    attribute is (or will be) present in the MusicXML document. This attribute
		    is a member of the 'element-position' (aka 'ElementPosition') attributeGroup. **/
		void setIsPositionPresent( const bool& value_in );

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

/* Stringing and Streaming ------------------------------------------------------------ */

		/** Returns the xml representation of the object's value. **/
		std::string toString() const;

		/** Returns the xml representation of the object's value. **/
		std::ostream& stream( std::ostream& os_out ) const;

/* Get IsAttributeDefaultDefined Values ----------------------------------------------- */

		/** Indicates whether or not the 'xlink:href' (aka 'XlinkHref') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'link-attributes'
		    (aka 'LinkAttributes') attributeGroup. **/
		bool getIsXlinkHrefDefaultDefined() const;

		/** Indicates whether or not the 'xlink:type' (aka 'XlinkType') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'link-attributes'
		    (aka 'LinkAttributes') attributeGroup. **/
		bool getIsXlinkTypeDefaultDefined() const;

		/** Indicates whether or not the 'xlink:role' (aka 'XlinkRole') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'link-attributes'
		    (aka 'LinkAttributes') attributeGroup. **/
		bool getIsXlinkRoleDefaultDefined() const;

		/** Indicates whether or not the 'xlink:title' (aka 'XlinkTitle') has a
		    default value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'link-attributes'
		    (aka 'LinkAttributes') attributeGroup. **/
		bool getIsXlinkTitleDefaultDefined() const;

		/** Indicates whether or not the 'xlink:show' (aka 'XlinkShow') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'link-attributes'
		    (aka 'LinkAttributes') attributeGroup. **/
		bool getIsXlinkShowDefaultDefined() const;

		/** Indicates whether or not the 'xlink:actuate' (aka 'XlinkActuate') has
		    a default value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'link-attributes'
		    (aka 'LinkAttributes') attributeGroup. **/
		bool getIsXlinkActuateDefaultDefined() const;

		/** Indicates whether or not the 'name' (aka 'Name') has a default value
		    defined in the MusicXML xsd specification (either explicitly or in
		    the documentation). **/
		bool getIsNameDefaultDefined() const;

		/** Indicates whether or not the 'element' (aka 'Element') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'element-position'
		    (aka 'ElementPosition') attributeGroup. **/
		bool getIsElementDefaultDefined() const;

		/** Indicates whether or not the 'position' (aka 'Position') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'element-position'
		    (aka 'ElementPosition') attributeGroup. **/
		bool getIsPositionDefaultDefined() const;

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

/* Get AttributeDefaultValue ---------------------------------------------------------- */

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'xlink:href' (aka 'XlinkHref') attribute. This attribute is a member
		    of the 'link-attributes' (aka 'LinkAttributes') attributeGroup. **/
		XlinkHref getXlinkHrefDefaultValue() const;

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'xlink:type' (aka 'XlinkType') attribute. This attribute is a member
		    of the 'link-attributes' (aka 'LinkAttributes') attributeGroup. **/
		XlinkType getXlinkTypeDefaultValue() const;

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'xlink:role' (aka 'XlinkRole') attribute. This attribute is a member
		    of the 'link-attributes' (aka 'LinkAttributes') attributeGroup. **/
		XlinkRole getXlinkRoleDefaultValue() const;

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'xlink:title' (aka 'XlinkTitle') attribute. This attribute is a
		    member of the 'link-attributes' (aka 'LinkAttributes') attributeGroup. **/
		XlinkTitle getXlinkTitleDefaultValue() const;

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'xlink:show' (aka 'XlinkShow') attribute. This attribute is a member
		    of the 'link-attributes' (aka 'LinkAttributes') attributeGroup. **/
		XlinkShow getXlinkShowDefaultValue() const;

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'xlink:actuate' (aka 'XlinkActuate') attribute. This attribute
		    is a member of the 'link-attributes' (aka 'LinkAttributes') attributeGroup. **/
		XlinkActuate getXlinkActuateDefaultValue() const;

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'name' (aka 'Name') attribute. **/
		XsToken getNameDefaultValue() const;

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'element' (aka 'Element') attribute. This attribute is a member
		    of the 'element-position' (aka 'ElementPosition') attributeGroup. **/
		XsNmToken getElementDefaultValue() const;

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'position' (aka 'Position') attribute. This attribute is a member
		    of the 'element-position' (aka 'ElementPosition') attributeGroup. **/
		XsPositiveInteger getPositionDefaultValue() const;

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

/* Impl ------------------------------------------------------------------------------- */

	private:
		class Impl;
		std::unique_ptr<Impl> myImpl;

	}; // class MxEeLink

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

