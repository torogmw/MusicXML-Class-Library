/* See MusicXML License at the bottom of this code page. */

/**
  * @file       MxCxEmptyOpus.cpp
  * @class      lexicon::MxCxEmptyOpus
  * @author     Matthew James Briggs
  * @email      matthew.james.briggs@gmail.com
  * @url        http://matthewjamesbriggs.com
  * @date       2014-12-03 16:31:27
  * @project    Lexicon
  * @version    1.0
  * @musicxmlid 5792
  * 
  * @brief The 'Opus' class serves as a binding for the MusicXml 'opus' complexType.
  * 
 **/

#include "MxCxEmptyOpus.h"
#include <sstream>
#include "_hidden_attributeStream.h"
#include "MxAttrGrpLinkAttributes.h"

/* Impl ------------------------------------------------------------------------------- */

namespace lexicon
{
	struct MxCxEmptyOpus::Impl
	{
		Impl( const std::string& elementName )
		:myElementName( elementName )
		,myMxAttrGrpLinkAttributes()
		{}

	private:
		std::string myElementName;
		MxAttrGrpLinkAttributes myMxAttrGrpLinkAttributes;

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

	}; // struct MxCxEmptyOpus::Impl

	const int MxCxEmptyOpus::Impl::myXsdID = 5792;
	const std::string MxCxEmptyOpus::Impl::myXmlTypeName = "opus";
	const std::string MxCxEmptyOpus::Impl::myCppClassName = "MxCxEmptyOpus";
	const std::string MxCxEmptyOpus::Impl::myDocumentation = "The opus type represents a link to a MusicXML opus document that composes multiple MusicXML scores into a collection.";

} // namespace lexicon


/* MxCxEmptyOpus ---------------------------------------------------------------------- */

namespace lexicon
{

/* Constructor, Destructor, Copy, Assignment ------------------------------------------ */

	MxCxEmptyOpus::MxCxEmptyOpus( const std::string& elementName )
	:myImpl( new Impl( elementName ) ) {}

	MxCxEmptyOpus::~MxCxEmptyOpus() {}

	MxCxEmptyOpus::MxCxEmptyOpus( const MxCxEmptyOpus& other )
	:myImpl( new Impl( *(other.myImpl) ) ) {}

	MxCxEmptyOpus& MxCxEmptyOpus::operator=( const MxCxEmptyOpus& other )
	{
		this->myImpl = std::unique_ptr<Impl>( new Impl( *(other.myImpl) ) );
		return *this;
	}

/* GetSet Value and Element Name ------------------------------------------------------ */

	/** Returns the name of the Xml element employing this ComplexType. **/
	std::string MxCxEmptyOpus::getElementName() const
	{
		return myImpl->getElementName();
	}

/* Get Class Information -------------------------------------------------------------- */

	/** Returns the name of this xs:complexType as found in the musicxml.xsd
	    document. **/
	std::string MxCxEmptyOpus::getXmlTypeName() const
	{
		return myImpl->getXmlTypeName();
	}

	/** Returns the name of this C++ class. **/
	std::string MxCxEmptyOpus::getClassName() const
	{
		return myImpl->getClassName();
	}

	/** Returns the documentation for this musicxml type as found in the musicxml.xsd
	    document. **/
	std::string MxCxEmptyOpus::getDocumentation() const
	{
		return myImpl->getDocumentation();
	}

/* Get Attribute Values --------------------------------------------------------------- */

	/** Returns the internal value of the 'xlink:href' (aka 'XlinkHref') attribute.
	    This attribute is a member of the 'link-attributes' (aka 'LinkAttributes')
	    attributeGroup. **/
	XlinkHref MxCxEmptyOpus::getXlinkHref() const
	{
		return myImpl->getXlinkHref();
	}

	/** Returns the internal value of the 'xlink:type' (aka 'XlinkType') attribute.
	    This attribute is a member of the 'link-attributes' (aka 'LinkAttributes')
	    attributeGroup. **/
	XlinkType MxCxEmptyOpus::getXlinkType() const
	{
		return myImpl->getXlinkType();
	}

	/** Returns the internal value of the 'xlink:role' (aka 'XlinkRole') attribute.
	    This attribute is a member of the 'link-attributes' (aka 'LinkAttributes')
	    attributeGroup. **/
	XlinkRole MxCxEmptyOpus::getXlinkRole() const
	{
		return myImpl->getXlinkRole();
	}

	/** Returns the internal value of the 'xlink:title' (aka 'XlinkTitle')
	    attribute. This attribute is a member of the 'link-attributes' (aka
	    'LinkAttributes') attributeGroup. **/
	XlinkTitle MxCxEmptyOpus::getXlinkTitle() const
	{
		return myImpl->getXlinkTitle();
	}

	/** Returns the internal value of the 'xlink:show' (aka 'XlinkShow') attribute.
	    This attribute is a member of the 'link-attributes' (aka 'LinkAttributes')
	    attributeGroup. **/
	XlinkShow MxCxEmptyOpus::getXlinkShow() const
	{
		return myImpl->getXlinkShow();
	}

	/** Returns the internal value of the 'xlink:actuate' (aka 'XlinkActuate')
	    attribute. This attribute is a member of the 'link-attributes' (aka
	    'LinkAttributes') attributeGroup. **/
	XlinkActuate MxCxEmptyOpus::getXlinkActuate() const
	{
		return myImpl->getXlinkActuate();
	}

/* Set Attribute Values --------------------------------------------------------------- */

	/** Sets the internal value of the 'xlink:href' (aka 'XlinkHref') attribute.
	    This attribute is a member of the 'link-attributes' (aka 'LinkAttributes')
	    attributeGroup. **/
	void MxCxEmptyOpus::setXlinkHref( const XlinkHref& value_in )
	{
		myImpl->setXlinkHref( value_in );
	}

	/** Sets the internal value of the 'xlink:role' (aka 'XlinkRole') attribute.
	    This attribute is a member of the 'link-attributes' (aka 'LinkAttributes')
	    attributeGroup. **/
	void MxCxEmptyOpus::setXlinkRole( const XlinkRole& value_in )
	{
		myImpl->setXlinkRole( value_in );
	}

	/** Sets the internal value of the 'xlink:title' (aka 'XlinkTitle') attribute.
	    This attribute is a member of the 'link-attributes' (aka 'LinkAttributes')
	    attributeGroup. **/
	void MxCxEmptyOpus::setXlinkTitle( const XlinkTitle& value_in )
	{
		myImpl->setXlinkTitle( value_in );
	}

	/** Sets the internal value of the 'xlink:show' (aka 'XlinkShow') attribute.
	    This attribute is a member of the 'link-attributes' (aka 'LinkAttributes')
	    attributeGroup. **/
	void MxCxEmptyOpus::setXlinkShow( const XlinkShow& value_in )
	{
		myImpl->setXlinkShow( value_in );
	}

	/** Sets the internal value of the 'xlink:actuate' (aka 'XlinkActuate')
	    attribute. This attribute is a member of the 'link-attributes' (aka
	    'LinkAttributes') attributeGroup. **/
	void MxCxEmptyOpus::setXlinkActuate( const XlinkActuate& value_in )
	{
		myImpl->setXlinkActuate( value_in );
	}

/* Get IsAttributeRequired Values ----------------------------------------------------- */

	/** Indicates whether or not the 'xlink:href' (aka 'XlinkHref') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'link-attributes' (aka 'LinkAttributes') attributeGroup. **/
	bool MxCxEmptyOpus::getIsXlinkHrefRequired() const
	{
		return myImpl->getIsXlinkHrefRequired();
	}

	/** Indicates whether or not the 'xlink:type' (aka 'XlinkType') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'link-attributes' (aka 'LinkAttributes') attributeGroup. **/
	bool MxCxEmptyOpus::getIsXlinkTypeRequired() const
	{
		return myImpl->getIsXlinkTypeRequired();
	}

	/** Indicates whether or not the 'xlink:role' (aka 'XlinkRole') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'link-attributes' (aka 'LinkAttributes') attributeGroup. **/
	bool MxCxEmptyOpus::getIsXlinkRoleRequired() const
	{
		return myImpl->getIsXlinkRoleRequired();
	}

	/** Indicates whether or not the 'xlink:title' (aka 'XlinkTitle') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'link-attributes' (aka 'LinkAttributes') attributeGroup. **/
	bool MxCxEmptyOpus::getIsXlinkTitleRequired() const
	{
		return myImpl->getIsXlinkTitleRequired();
	}

	/** Indicates whether or not the 'xlink:show' (aka 'XlinkShow') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'link-attributes' (aka 'LinkAttributes') attributeGroup. **/
	bool MxCxEmptyOpus::getIsXlinkShowRequired() const
	{
		return myImpl->getIsXlinkShowRequired();
	}

	/** Indicates whether or not the 'xlink:actuate' (aka 'XlinkActuate') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'link-attributes' (aka 'LinkAttributes') attributeGroup. **/
	bool MxCxEmptyOpus::getIsXlinkActuateRequired() const
	{
		return myImpl->getIsXlinkActuateRequired();
	}

/* Get IsAttributePresent Values ------------------------------------------------------ */

	/** Indicates whether or not the 'xlink:href' (aka 'XlinkHref') attribute
	    is (or will be) present in the MusicXML document. Note: because 'xlink:href'
	    is required by the MusicXML specification, getIsXlinkHrefPresent will
	    always return 'true'. There is no corresponding setIsXlinkHrefPresent
	    function for this attribute. This attribute is a member of the 'link-attributes'
	    (aka 'LinkAttributes') attributeGroup. **/
	bool MxCxEmptyOpus::getIsXlinkHrefPresent() const
	{
		return myImpl->getIsXlinkHrefPresent();
	}

	/** Indicates whether or not the 'xlink:type' (aka 'XlinkType') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'link-attributes' (aka 'LinkAttributes') attributeGroup. **/
	bool MxCxEmptyOpus::getIsXlinkTypePresent() const
	{
		return myImpl->getIsXlinkTypePresent();
	}

	/** Indicates whether or not the 'xlink:role' (aka 'XlinkRole') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'link-attributes' (aka 'LinkAttributes') attributeGroup. **/
	bool MxCxEmptyOpus::getIsXlinkRolePresent() const
	{
		return myImpl->getIsXlinkRolePresent();
	}

	/** Indicates whether or not the 'xlink:title' (aka 'XlinkTitle') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'link-attributes' (aka 'LinkAttributes') attributeGroup. **/
	bool MxCxEmptyOpus::getIsXlinkTitlePresent() const
	{
		return myImpl->getIsXlinkTitlePresent();
	}

	/** Indicates whether or not the 'xlink:show' (aka 'XlinkShow') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'link-attributes' (aka 'LinkAttributes') attributeGroup. **/
	bool MxCxEmptyOpus::getIsXlinkShowPresent() const
	{
		return myImpl->getIsXlinkShowPresent();
	}

	/** Indicates whether or not the 'xlink:actuate' (aka 'XlinkActuate') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'link-attributes' (aka 'LinkAttributes') attributeGroup. **/
	bool MxCxEmptyOpus::getIsXlinkActuatePresent() const
	{
		return myImpl->getIsXlinkActuatePresent();
	}

/* Set IsAttributePresent Values ------------------------------------------------------ */

	/** Sets the value which indicates whether or not the 'xlink:type' (aka
	    'XlinkType') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'link-attributes' (aka 'LinkAttributes')
	    attributeGroup. **/
	void MxCxEmptyOpus::setIsXlinkTypePresent( const bool& value_in )
	{
		myImpl->setIsXlinkTypePresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'xlink:role' (aka
	    'XlinkRole') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'link-attributes' (aka 'LinkAttributes')
	    attributeGroup. **/
	void MxCxEmptyOpus::setIsXlinkRolePresent( const bool& value_in )
	{
		myImpl->setIsXlinkRolePresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'xlink:title' (aka
	    'XlinkTitle') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'link-attributes' (aka 'LinkAttributes')
	    attributeGroup. **/
	void MxCxEmptyOpus::setIsXlinkTitlePresent( const bool& value_in )
	{
		myImpl->setIsXlinkTitlePresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'xlink:show' (aka
	    'XlinkShow') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'link-attributes' (aka 'LinkAttributes')
	    attributeGroup. **/
	void MxCxEmptyOpus::setIsXlinkShowPresent( const bool& value_in )
	{
		myImpl->setIsXlinkShowPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'xlink:actuate' (aka
	    'XlinkActuate') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'link-attributes' (aka 'LinkAttributes')
	    attributeGroup. **/
	void MxCxEmptyOpus::setIsXlinkActuatePresent( const bool& value_in )
	{
		myImpl->setIsXlinkActuatePresent( value_in );
	}

/* Stringing and Streaming ------------------------------------------------------------ */

	/** Returns the xml representation of the object's value. **/
	std::string MxCxEmptyOpus::toString() const
	{
		return myImpl->toString();
	}

	/** Returns the xml representation of the object's value. **/
	std::ostream& MxCxEmptyOpus::stream( std::ostream& os_out ) const
	{
		return myImpl->stream( os_out );
	}

/* Get IsAttributeDefaultDefined Values ----------------------------------------------- */

	/** Indicates whether or not the 'xlink:href' (aka 'XlinkHref') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'link-attributes'
	    (aka 'LinkAttributes') attributeGroup. **/
	bool MxCxEmptyOpus::getIsXlinkHrefDefaultDefined() const
	{
		return myImpl->getIsXlinkHrefDefaultDefined();
	}

	/** Indicates whether or not the 'xlink:type' (aka 'XlinkType') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'link-attributes'
	    (aka 'LinkAttributes') attributeGroup. **/
	bool MxCxEmptyOpus::getIsXlinkTypeDefaultDefined() const
	{
		return myImpl->getIsXlinkTypeDefaultDefined();
	}

	/** Indicates whether or not the 'xlink:role' (aka 'XlinkRole') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'link-attributes'
	    (aka 'LinkAttributes') attributeGroup. **/
	bool MxCxEmptyOpus::getIsXlinkRoleDefaultDefined() const
	{
		return myImpl->getIsXlinkRoleDefaultDefined();
	}

	/** Indicates whether or not the 'xlink:title' (aka 'XlinkTitle') has a
	    default value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'link-attributes'
	    (aka 'LinkAttributes') attributeGroup. **/
	bool MxCxEmptyOpus::getIsXlinkTitleDefaultDefined() const
	{
		return myImpl->getIsXlinkTitleDefaultDefined();
	}

	/** Indicates whether or not the 'xlink:show' (aka 'XlinkShow') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'link-attributes'
	    (aka 'LinkAttributes') attributeGroup. **/
	bool MxCxEmptyOpus::getIsXlinkShowDefaultDefined() const
	{
		return myImpl->getIsXlinkShowDefaultDefined();
	}

	/** Indicates whether or not the 'xlink:actuate' (aka 'XlinkActuate') has
	    a default value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'link-attributes'
	    (aka 'LinkAttributes') attributeGroup. **/
	bool MxCxEmptyOpus::getIsXlinkActuateDefaultDefined() const
	{
		return myImpl->getIsXlinkActuateDefaultDefined();
	}

/* Get AttributeDefaultValue ---------------------------------------------------------- */

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'xlink:href' (aka 'XlinkHref') attribute. This attribute is a member
	    of the 'link-attributes' (aka 'LinkAttributes') attributeGroup. **/
	XlinkHref MxCxEmptyOpus::getXlinkHrefDefaultValue() const
	{
		return myImpl->getXlinkHrefDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'xlink:type' (aka 'XlinkType') attribute. This attribute is a member
	    of the 'link-attributes' (aka 'LinkAttributes') attributeGroup. **/
	XlinkType MxCxEmptyOpus::getXlinkTypeDefaultValue() const
	{
		return myImpl->getXlinkTypeDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'xlink:role' (aka 'XlinkRole') attribute. This attribute is a member
	    of the 'link-attributes' (aka 'LinkAttributes') attributeGroup. **/
	XlinkRole MxCxEmptyOpus::getXlinkRoleDefaultValue() const
	{
		return myImpl->getXlinkRoleDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'xlink:title' (aka 'XlinkTitle') attribute. This attribute is a
	    member of the 'link-attributes' (aka 'LinkAttributes') attributeGroup. **/
	XlinkTitle MxCxEmptyOpus::getXlinkTitleDefaultValue() const
	{
		return myImpl->getXlinkTitleDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'xlink:show' (aka 'XlinkShow') attribute. This attribute is a member
	    of the 'link-attributes' (aka 'LinkAttributes') attributeGroup. **/
	XlinkShow MxCxEmptyOpus::getXlinkShowDefaultValue() const
	{
		return myImpl->getXlinkShowDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'xlink:actuate' (aka 'XlinkActuate') attribute. This attribute
	    is a member of the 'link-attributes' (aka 'LinkAttributes') attributeGroup. **/
	XlinkActuate MxCxEmptyOpus::getXlinkActuateDefaultValue() const
	{
		return myImpl->getXlinkActuateDefaultValue();
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

