/* See MusicXML License at the bottom of this code page. */

/**
  * @file       MxCxEmptyImage.cpp
  * @class      lexicon::MxCxEmptyImage
  * @author     Matthew James Briggs
  * @email      matthew.james.briggs@gmail.com
  * @url        http://matthewjamesbriggs.com
  * @date       2014-12-03 16:31:27
  * @project    Lexicon
  * @version    1.0
  * @musicxmlid 3560
  * 
  * @brief The 'Image' class serves as a binding for the MusicXml 'image' complexType.
  * 
 **/

#include "MxCxEmptyImage.h"
#include <sstream>
#include "_hidden_attributeStream.h"
#include "MxAttrGrpImageAttributes.h"

/* Impl ------------------------------------------------------------------------------- */

namespace lexicon
{
	struct MxCxEmptyImage::Impl
	{
		Impl( const std::string& elementName )
		:myElementName( elementName )
		,myMxAttrGrpImageAttributes()
		{}

	private:
		std::string myElementName;
		MxAttrGrpImageAttributes myMxAttrGrpImageAttributes;

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

		/** Returns the internal value of the 'source' (aka 'Source') attribute.
		    This attribute is a member of the 'image-attributes' (aka 'ImageAttributes')
		    attributeGroup. **/
		XsAnyUri getSource() const
		{
			return myMxAttrGrpImageAttributes.getSource();
		}

		/** Returns the internal value of the 'type' (aka 'Type') attribute. This
		    attribute is a member of the 'image-attributes' (aka 'ImageAttributes')
		    attributeGroup. **/
		XsToken getType() const
		{
			return myMxAttrGrpImageAttributes.getType();
		}

		/** Returns the internal value of the 'default-x' (aka 'DefaultX') attribute.
		    This attribute is a member of the 'image-attributes' (aka 'ImageAttributes')
		    attributeGroup. **/
		MxNumberTenths getDefaultX() const
		{
			return myMxAttrGrpImageAttributes.getDefaultX();
		}

		/** Returns the internal value of the 'default-y' (aka 'DefaultY') attribute.
		    This attribute is a member of the 'image-attributes' (aka 'ImageAttributes')
		    attributeGroup. **/
		MxNumberTenths getDefaultY() const
		{
			return myMxAttrGrpImageAttributes.getDefaultY();
		}

		/** Returns the internal value of the 'relative-x' (aka 'RelativeX') attribute.
		    This attribute is a member of the 'image-attributes' (aka 'ImageAttributes')
		    attributeGroup. **/
		MxNumberTenths getRelativeX() const
		{
			return myMxAttrGrpImageAttributes.getRelativeX();
		}

		/** Returns the internal value of the 'relative-y' (aka 'RelativeY') attribute.
		    This attribute is a member of the 'image-attributes' (aka 'ImageAttributes')
		    attributeGroup. **/
		MxNumberTenths getRelativeY() const
		{
			return myMxAttrGrpImageAttributes.getRelativeY();
		}

		/** Returns the internal value of the 'halign' (aka 'Halign') attribute.
		    This attribute is a member of the 'image-attributes' (aka 'ImageAttributes')
		    attributeGroup. **/
		MxEnumLeftCenterRight getHalign() const
		{
			return myMxAttrGrpImageAttributes.getHalign();
		}

		/** Returns the internal value of the 'valign' (aka 'Valign') attribute.
		    This attribute is a member of the 'image-attributes' (aka 'ImageAttributes')
		    attributeGroup. **/
		MxEnumValignImage getValign() const
		{
			return myMxAttrGrpImageAttributes.getValign();
		}

/* Set Attribute Values --------------------------------------------------------------- */

		/** Sets the internal value of the 'source' (aka 'Source') attribute. This
		    attribute is a member of the 'image-attributes' (aka 'ImageAttributes')
		    attributeGroup. **/
		void setSource( const XsAnyUri& value_in )
		{
			myMxAttrGrpImageAttributes.setSource( value_in );
		}

		/** Sets the internal value of the 'type' (aka 'Type') attribute. This
		    attribute is a member of the 'image-attributes' (aka 'ImageAttributes')
		    attributeGroup. **/
		void setType( const XsToken& value_in )
		{
			myMxAttrGrpImageAttributes.setType( value_in );
		}

		/** Sets the internal value of the 'default-x' (aka 'DefaultX') attribute.
		    This attribute is a member of the 'image-attributes' (aka 'ImageAttributes')
		    attributeGroup. **/
		void setDefaultX( const MxNumberTenths& value_in )
		{
			myMxAttrGrpImageAttributes.setDefaultX( value_in );
		}

		/** Sets the internal value of the 'default-y' (aka 'DefaultY') attribute.
		    This attribute is a member of the 'image-attributes' (aka 'ImageAttributes')
		    attributeGroup. **/
		void setDefaultY( const MxNumberTenths& value_in )
		{
			myMxAttrGrpImageAttributes.setDefaultY( value_in );
		}

		/** Sets the internal value of the 'relative-x' (aka 'RelativeX') attribute.
		    This attribute is a member of the 'image-attributes' (aka 'ImageAttributes')
		    attributeGroup. **/
		void setRelativeX( const MxNumberTenths& value_in )
		{
			myMxAttrGrpImageAttributes.setRelativeX( value_in );
		}

		/** Sets the internal value of the 'relative-y' (aka 'RelativeY') attribute.
		    This attribute is a member of the 'image-attributes' (aka 'ImageAttributes')
		    attributeGroup. **/
		void setRelativeY( const MxNumberTenths& value_in )
		{
			myMxAttrGrpImageAttributes.setRelativeY( value_in );
		}

		/** Sets the internal value of the 'halign' (aka 'Halign') attribute. This
		    attribute is a member of the 'image-attributes' (aka 'ImageAttributes')
		    attributeGroup. **/
		void setHalign( const MxEnumLeftCenterRight& value_in )
		{
			myMxAttrGrpImageAttributes.setHalign( value_in );
		}

		/** Sets the internal value of the 'valign' (aka 'Valign') attribute. This
		    attribute is a member of the 'image-attributes' (aka 'ImageAttributes')
		    attributeGroup. **/
		void setValign( const MxEnumValignImage& value_in )
		{
			myMxAttrGrpImageAttributes.setValign( value_in );
		}

/* Get IsAttributeRequired Values ----------------------------------------------------- */

		/** Indicates whether or not the 'source' (aka 'Source') attribute is required
		    to be present in a MusicXML document. This attribute is a member of
		    the 'image-attributes' (aka 'ImageAttributes') attributeGroup. **/
		bool getIsSourceRequired() const
		{
			return myMxAttrGrpImageAttributes.getIsSourceRequired();
		}

		/** Indicates whether or not the 'type' (aka 'Type') attribute is required
		    to be present in a MusicXML document. This attribute is a member of
		    the 'image-attributes' (aka 'ImageAttributes') attributeGroup. **/
		bool getIsTypeRequired() const
		{
			return myMxAttrGrpImageAttributes.getIsTypeRequired();
		}

		/** Indicates whether or not the 'default-x' (aka 'DefaultX') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'image-attributes' (aka 'ImageAttributes') attributeGroup. **/
		bool getIsDefaultXRequired() const
		{
			return myMxAttrGrpImageAttributes.getIsDefaultXRequired();
		}

		/** Indicates whether or not the 'default-y' (aka 'DefaultY') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'image-attributes' (aka 'ImageAttributes') attributeGroup. **/
		bool getIsDefaultYRequired() const
		{
			return myMxAttrGrpImageAttributes.getIsDefaultYRequired();
		}

		/** Indicates whether or not the 'relative-x' (aka 'RelativeX') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'image-attributes' (aka 'ImageAttributes') attributeGroup. **/
		bool getIsRelativeXRequired() const
		{
			return myMxAttrGrpImageAttributes.getIsRelativeXRequired();
		}

		/** Indicates whether or not the 'relative-y' (aka 'RelativeY') attribute
		    is required to be present in a MusicXML document. This attribute is
		    a member of the 'image-attributes' (aka 'ImageAttributes') attributeGroup. **/
		bool getIsRelativeYRequired() const
		{
			return myMxAttrGrpImageAttributes.getIsRelativeYRequired();
		}

		/** Indicates whether or not the 'halign' (aka 'Halign') attribute is required
		    to be present in a MusicXML document. This attribute is a member of
		    the 'image-attributes' (aka 'ImageAttributes') attributeGroup. **/
		bool getIsHalignRequired() const
		{
			return myMxAttrGrpImageAttributes.getIsHalignRequired();
		}

		/** Indicates whether or not the 'valign' (aka 'Valign') attribute is required
		    to be present in a MusicXML document. This attribute is a member of
		    the 'image-attributes' (aka 'ImageAttributes') attributeGroup. **/
		bool getIsValignRequired() const
		{
			return myMxAttrGrpImageAttributes.getIsValignRequired();
		}

/* Get IsAttributePresent Values ------------------------------------------------------ */

		/** Indicates whether or not the 'source' (aka 'Source') attribute is (or
		    will be) present in the MusicXML document. Note: because 'source' is
		    required by the MusicXML specification, getIsSourcePresent will always
		    return 'true'. There is no corresponding setIsSourcePresent function
		    for this attribute. This attribute is a member of the 'image-attributes'
		    (aka 'ImageAttributes') attributeGroup. **/
		bool getIsSourcePresent() const
		{
			return myMxAttrGrpImageAttributes.getIsSourcePresent();
		}

		/** Indicates whether or not the 'type' (aka 'Type') attribute is (or will
		    be) present in the MusicXML document. Note: because 'type' is required
		    by the MusicXML specification, getIsTypePresent will always return
		    'true'. There is no corresponding setIsTypePresent function for this
		    attribute. This attribute is a member of the 'image-attributes' (aka
		    'ImageAttributes') attributeGroup. **/
		bool getIsTypePresent() const
		{
			return myMxAttrGrpImageAttributes.getIsTypePresent();
		}

		/** Indicates whether or not the 'default-x' (aka 'DefaultX') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'image-attributes' (aka 'ImageAttributes') attributeGroup. **/
		bool getIsDefaultXPresent() const
		{
			return myMxAttrGrpImageAttributes.getIsDefaultXPresent();
		}

		/** Indicates whether or not the 'default-y' (aka 'DefaultY') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'image-attributes' (aka 'ImageAttributes') attributeGroup. **/
		bool getIsDefaultYPresent() const
		{
			return myMxAttrGrpImageAttributes.getIsDefaultYPresent();
		}

		/** Indicates whether or not the 'relative-x' (aka 'RelativeX') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'image-attributes' (aka 'ImageAttributes') attributeGroup. **/
		bool getIsRelativeXPresent() const
		{
			return myMxAttrGrpImageAttributes.getIsRelativeXPresent();
		}

		/** Indicates whether or not the 'relative-y' (aka 'RelativeY') attribute
		    is (or will be) present in the MusicXML document. This attribute is
		    a member of the 'image-attributes' (aka 'ImageAttributes') attributeGroup. **/
		bool getIsRelativeYPresent() const
		{
			return myMxAttrGrpImageAttributes.getIsRelativeYPresent();
		}

		/** Indicates whether or not the 'halign' (aka 'Halign') attribute is (or
		    will be) present in the MusicXML document. This attribute is a member
		    of the 'image-attributes' (aka 'ImageAttributes') attributeGroup. **/
		bool getIsHalignPresent() const
		{
			return myMxAttrGrpImageAttributes.getIsHalignPresent();
		}

		/** Indicates whether or not the 'valign' (aka 'Valign') attribute is (or
		    will be) present in the MusicXML document. This attribute is a member
		    of the 'image-attributes' (aka 'ImageAttributes') attributeGroup. **/
		bool getIsValignPresent() const
		{
			return myMxAttrGrpImageAttributes.getIsValignPresent();
		}

/* Set IsAttributePresent Values ------------------------------------------------------ */

		/** Sets the value which indicates whether or not the 'default-x' (aka
		    'DefaultX') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'image-attributes' (aka 'ImageAttributes')
		    attributeGroup. **/
		void setIsDefaultXPresent( const bool& value_in )
		{
			myMxAttrGrpImageAttributes.setIsDefaultXPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'default-y' (aka
		    'DefaultY') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'image-attributes' (aka 'ImageAttributes')
		    attributeGroup. **/
		void setIsDefaultYPresent( const bool& value_in )
		{
			myMxAttrGrpImageAttributes.setIsDefaultYPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'relative-x' (aka
		    'RelativeX') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'image-attributes' (aka 'ImageAttributes')
		    attributeGroup. **/
		void setIsRelativeXPresent( const bool& value_in )
		{
			myMxAttrGrpImageAttributes.setIsRelativeXPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'relative-y' (aka
		    'RelativeY') attribute is (or will be) present in the MusicXML document.
		    This attribute is a member of the 'image-attributes' (aka 'ImageAttributes')
		    attributeGroup. **/
		void setIsRelativeYPresent( const bool& value_in )
		{
			myMxAttrGrpImageAttributes.setIsRelativeYPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'halign' (aka 'Halign')
		    attribute is (or will be) present in the MusicXML document. This attribute
		    is a member of the 'image-attributes' (aka 'ImageAttributes') attributeGroup. **/
		void setIsHalignPresent( const bool& value_in )
		{
			myMxAttrGrpImageAttributes.setIsHalignPresent( value_in );
		}

		/** Sets the value which indicates whether or not the 'valign' (aka 'Valign')
		    attribute is (or will be) present in the MusicXML document. This attribute
		    is a member of the 'image-attributes' (aka 'ImageAttributes') attributeGroup. **/
		void setIsValignPresent( const bool& value_in )
		{
			myMxAttrGrpImageAttributes.setIsValignPresent( value_in );
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
			hidden::attributeStream( getIsSourcePresent(), "source", getSource().toString(), os_out, isFirst );
			hidden::attributeStream( getIsTypePresent(), "type", getType().toString(), os_out, isFirst );
			hidden::attributeStream( getIsDefaultXPresent(), "default-x", getDefaultX().toString(), os_out, isFirst );
			hidden::attributeStream( getIsDefaultYPresent(), "default-y", getDefaultY().toString(), os_out, isFirst );
			hidden::attributeStream( getIsRelativeXPresent(), "relative-x", getRelativeX().toString(), os_out, isFirst );
			hidden::attributeStream( getIsRelativeYPresent(), "relative-y", getRelativeY().toString(), os_out, isFirst );
			hidden::attributeStream( getIsHalignPresent(), "halign", getHalign().toString(), os_out, isFirst );
			hidden::attributeStream( getIsValignPresent(), "valign", getValign().toString(), os_out, isFirst );
			os_out << "/>";
			return os_out;
		}

/* Get IsAttributeDefaultDefined Values ----------------------------------------------- */

		/** Indicates whether or not the 'source' (aka 'Source') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'image-attributes'
		    (aka 'ImageAttributes') attributeGroup. **/
		bool getIsSourceDefaultDefined() const
		{
			return myMxAttrGrpImageAttributes.getIsSourceDefaultDefined();
		}

		/** Indicates whether or not the 'type' (aka 'Type') has a default value
		    defined in the MusicXML xsd specification (either explicitly or in
		    the documentation). This attribute is a member of the 'image-attributes'
		    (aka 'ImageAttributes') attributeGroup. **/
		bool getIsTypeDefaultDefined() const
		{
			return myMxAttrGrpImageAttributes.getIsTypeDefaultDefined();
		}

		/** Indicates whether or not the 'default-x' (aka 'DefaultX') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'image-attributes'
		    (aka 'ImageAttributes') attributeGroup. **/
		bool getIsDefaultXDefaultDefined() const
		{
			return myMxAttrGrpImageAttributes.getIsDefaultXDefaultDefined();
		}

		/** Indicates whether or not the 'default-y' (aka 'DefaultY') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'image-attributes'
		    (aka 'ImageAttributes') attributeGroup. **/
		bool getIsDefaultYDefaultDefined() const
		{
			return myMxAttrGrpImageAttributes.getIsDefaultYDefaultDefined();
		}

		/** Indicates whether or not the 'relative-x' (aka 'RelativeX') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'image-attributes'
		    (aka 'ImageAttributes') attributeGroup. **/
		bool getIsRelativeXDefaultDefined() const
		{
			return myMxAttrGrpImageAttributes.getIsRelativeXDefaultDefined();
		}

		/** Indicates whether or not the 'relative-y' (aka 'RelativeY') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'image-attributes'
		    (aka 'ImageAttributes') attributeGroup. **/
		bool getIsRelativeYDefaultDefined() const
		{
			return myMxAttrGrpImageAttributes.getIsRelativeYDefaultDefined();
		}

		/** Indicates whether or not the 'halign' (aka 'Halign') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'image-attributes'
		    (aka 'ImageAttributes') attributeGroup. **/
		bool getIsHalignDefaultDefined() const
		{
			return myMxAttrGrpImageAttributes.getIsHalignDefaultDefined();
		}

		/** Indicates whether or not the 'valign' (aka 'Valign') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). This attribute is a member of the 'image-attributes'
		    (aka 'ImageAttributes') attributeGroup. **/
		bool getIsValignDefaultDefined() const
		{
			return myMxAttrGrpImageAttributes.getIsValignDefaultDefined();
		}

/* Get AttributeDefaultValue ---------------------------------------------------------- */

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'source' (aka 'Source') attribute. This attribute is a member of
		    the 'image-attributes' (aka 'ImageAttributes') attributeGroup. **/
		XsAnyUri getSourceDefaultValue() const
		{
			return myMxAttrGrpImageAttributes.getSourceDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'type' (aka 'Type') attribute. This attribute is a member of the
		    'image-attributes' (aka 'ImageAttributes') attributeGroup. **/
		XsToken getTypeDefaultValue() const
		{
			return myMxAttrGrpImageAttributes.getTypeDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'default-x' (aka 'DefaultX') attribute. This attribute is a member
		    of the 'image-attributes' (aka 'ImageAttributes') attributeGroup. **/
		MxNumberTenths getDefaultXDefaultValue() const
		{
			return myMxAttrGrpImageAttributes.getDefaultXDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'default-y' (aka 'DefaultY') attribute. This attribute is a member
		    of the 'image-attributes' (aka 'ImageAttributes') attributeGroup. **/
		MxNumberTenths getDefaultYDefaultValue() const
		{
			return myMxAttrGrpImageAttributes.getDefaultYDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'relative-x' (aka 'RelativeX') attribute. This attribute is a member
		    of the 'image-attributes' (aka 'ImageAttributes') attributeGroup. **/
		MxNumberTenths getRelativeXDefaultValue() const
		{
			return myMxAttrGrpImageAttributes.getRelativeXDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'relative-y' (aka 'RelativeY') attribute. This attribute is a member
		    of the 'image-attributes' (aka 'ImageAttributes') attributeGroup. **/
		MxNumberTenths getRelativeYDefaultValue() const
		{
			return myMxAttrGrpImageAttributes.getRelativeYDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'halign' (aka 'Halign') attribute. This attribute is a member of
		    the 'image-attributes' (aka 'ImageAttributes') attributeGroup. **/
		MxEnumLeftCenterRight getHalignDefaultValue() const
		{
			return myMxAttrGrpImageAttributes.getHalignDefaultValue();
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'valign' (aka 'Valign') attribute. This attribute is a member of
		    the 'image-attributes' (aka 'ImageAttributes') attributeGroup. **/
		MxEnumValignImage getValignDefaultValue() const
		{
			return myMxAttrGrpImageAttributes.getValignDefaultValue();
		}

	}; // struct MxCxEmptyImage::Impl

	const int MxCxEmptyImage::Impl::myXsdID = 3560;
	const std::string MxCxEmptyImage::Impl::myXmlTypeName = "image";
	const std::string MxCxEmptyImage::Impl::myCppClassName = "MxCxEmptyImage";
	const std::string MxCxEmptyImage::Impl::myDocumentation = "The image type is used to include graphical images in a score.";

} // namespace lexicon


/* MxCxEmptyImage --------------------------------------------------------------------- */

namespace lexicon
{

/* Constructor, Destructor, Copy, Assignment ------------------------------------------ */

	MxCxEmptyImage::MxCxEmptyImage( const std::string& elementName )
	:myImpl( new Impl( elementName ) ) {}

	MxCxEmptyImage::~MxCxEmptyImage() {}

	MxCxEmptyImage::MxCxEmptyImage( const MxCxEmptyImage& other )
	:myImpl( new Impl( *(other.myImpl) ) ) {}

	MxCxEmptyImage& MxCxEmptyImage::operator=( const MxCxEmptyImage& other )
	{
		this->myImpl = std::unique_ptr<Impl>( new Impl( *(other.myImpl) ) );
		return *this;
	}

/* GetSet Value and Element Name ------------------------------------------------------ */

	/** Returns the name of the Xml element employing this ComplexType. **/
	std::string MxCxEmptyImage::getElementName() const
	{
		return myImpl->getElementName();
	}

/* Get Class Information -------------------------------------------------------------- */

	/** Returns the name of this xs:complexType as found in the musicxml.xsd
	    document. **/
	std::string MxCxEmptyImage::getXmlTypeName() const
	{
		return myImpl->getXmlTypeName();
	}

	/** Returns the name of this C++ class. **/
	std::string MxCxEmptyImage::getClassName() const
	{
		return myImpl->getClassName();
	}

	/** Returns the documentation for this musicxml type as found in the musicxml.xsd
	    document. **/
	std::string MxCxEmptyImage::getDocumentation() const
	{
		return myImpl->getDocumentation();
	}

/* Get Attribute Values --------------------------------------------------------------- */

	/** Returns the internal value of the 'source' (aka 'Source') attribute.
	    This attribute is a member of the 'image-attributes' (aka 'ImageAttributes')
	    attributeGroup. **/
	XsAnyUri MxCxEmptyImage::getSource() const
	{
		return myImpl->getSource();
	}

	/** Returns the internal value of the 'type' (aka 'Type') attribute. This
	    attribute is a member of the 'image-attributes' (aka 'ImageAttributes')
	    attributeGroup. **/
	XsToken MxCxEmptyImage::getType() const
	{
		return myImpl->getType();
	}

	/** Returns the internal value of the 'default-x' (aka 'DefaultX') attribute.
	    This attribute is a member of the 'image-attributes' (aka 'ImageAttributes')
	    attributeGroup. **/
	MxNumberTenths MxCxEmptyImage::getDefaultX() const
	{
		return myImpl->getDefaultX();
	}

	/** Returns the internal value of the 'default-y' (aka 'DefaultY') attribute.
	    This attribute is a member of the 'image-attributes' (aka 'ImageAttributes')
	    attributeGroup. **/
	MxNumberTenths MxCxEmptyImage::getDefaultY() const
	{
		return myImpl->getDefaultY();
	}

	/** Returns the internal value of the 'relative-x' (aka 'RelativeX') attribute.
	    This attribute is a member of the 'image-attributes' (aka 'ImageAttributes')
	    attributeGroup. **/
	MxNumberTenths MxCxEmptyImage::getRelativeX() const
	{
		return myImpl->getRelativeX();
	}

	/** Returns the internal value of the 'relative-y' (aka 'RelativeY') attribute.
	    This attribute is a member of the 'image-attributes' (aka 'ImageAttributes')
	    attributeGroup. **/
	MxNumberTenths MxCxEmptyImage::getRelativeY() const
	{
		return myImpl->getRelativeY();
	}

	/** Returns the internal value of the 'halign' (aka 'Halign') attribute.
	    This attribute is a member of the 'image-attributes' (aka 'ImageAttributes')
	    attributeGroup. **/
	MxEnumLeftCenterRight MxCxEmptyImage::getHalign() const
	{
		return myImpl->getHalign();
	}

	/** Returns the internal value of the 'valign' (aka 'Valign') attribute.
	    This attribute is a member of the 'image-attributes' (aka 'ImageAttributes')
	    attributeGroup. **/
	MxEnumValignImage MxCxEmptyImage::getValign() const
	{
		return myImpl->getValign();
	}

/* Set Attribute Values --------------------------------------------------------------- */

	/** Sets the internal value of the 'source' (aka 'Source') attribute. This
	    attribute is a member of the 'image-attributes' (aka 'ImageAttributes')
	    attributeGroup. **/
	void MxCxEmptyImage::setSource( const XsAnyUri& value_in )
	{
		myImpl->setSource( value_in );
	}

	/** Sets the internal value of the 'type' (aka 'Type') attribute. This
	    attribute is a member of the 'image-attributes' (aka 'ImageAttributes')
	    attributeGroup. **/
	void MxCxEmptyImage::setType( const XsToken& value_in )
	{
		myImpl->setType( value_in );
	}

	/** Sets the internal value of the 'default-x' (aka 'DefaultX') attribute.
	    This attribute is a member of the 'image-attributes' (aka 'ImageAttributes')
	    attributeGroup. **/
	void MxCxEmptyImage::setDefaultX( const MxNumberTenths& value_in )
	{
		myImpl->setDefaultX( value_in );
	}

	/** Sets the internal value of the 'default-y' (aka 'DefaultY') attribute.
	    This attribute is a member of the 'image-attributes' (aka 'ImageAttributes')
	    attributeGroup. **/
	void MxCxEmptyImage::setDefaultY( const MxNumberTenths& value_in )
	{
		myImpl->setDefaultY( value_in );
	}

	/** Sets the internal value of the 'relative-x' (aka 'RelativeX') attribute.
	    This attribute is a member of the 'image-attributes' (aka 'ImageAttributes')
	    attributeGroup. **/
	void MxCxEmptyImage::setRelativeX( const MxNumberTenths& value_in )
	{
		myImpl->setRelativeX( value_in );
	}

	/** Sets the internal value of the 'relative-y' (aka 'RelativeY') attribute.
	    This attribute is a member of the 'image-attributes' (aka 'ImageAttributes')
	    attributeGroup. **/
	void MxCxEmptyImage::setRelativeY( const MxNumberTenths& value_in )
	{
		myImpl->setRelativeY( value_in );
	}

	/** Sets the internal value of the 'halign' (aka 'Halign') attribute. This
	    attribute is a member of the 'image-attributes' (aka 'ImageAttributes')
	    attributeGroup. **/
	void MxCxEmptyImage::setHalign( const MxEnumLeftCenterRight& value_in )
	{
		myImpl->setHalign( value_in );
	}

	/** Sets the internal value of the 'valign' (aka 'Valign') attribute. This
	    attribute is a member of the 'image-attributes' (aka 'ImageAttributes')
	    attributeGroup. **/
	void MxCxEmptyImage::setValign( const MxEnumValignImage& value_in )
	{
		myImpl->setValign( value_in );
	}

/* Get IsAttributeRequired Values ----------------------------------------------------- */

	/** Indicates whether or not the 'source' (aka 'Source') attribute is required
	    to be present in a MusicXML document. This attribute is a member of
	    the 'image-attributes' (aka 'ImageAttributes') attributeGroup. **/
	bool MxCxEmptyImage::getIsSourceRequired() const
	{
		return myImpl->getIsSourceRequired();
	}

	/** Indicates whether or not the 'type' (aka 'Type') attribute is required
	    to be present in a MusicXML document. This attribute is a member of
	    the 'image-attributes' (aka 'ImageAttributes') attributeGroup. **/
	bool MxCxEmptyImage::getIsTypeRequired() const
	{
		return myImpl->getIsTypeRequired();
	}

	/** Indicates whether or not the 'default-x' (aka 'DefaultX') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'image-attributes' (aka 'ImageAttributes') attributeGroup. **/
	bool MxCxEmptyImage::getIsDefaultXRequired() const
	{
		return myImpl->getIsDefaultXRequired();
	}

	/** Indicates whether or not the 'default-y' (aka 'DefaultY') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'image-attributes' (aka 'ImageAttributes') attributeGroup. **/
	bool MxCxEmptyImage::getIsDefaultYRequired() const
	{
		return myImpl->getIsDefaultYRequired();
	}

	/** Indicates whether or not the 'relative-x' (aka 'RelativeX') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'image-attributes' (aka 'ImageAttributes') attributeGroup. **/
	bool MxCxEmptyImage::getIsRelativeXRequired() const
	{
		return myImpl->getIsRelativeXRequired();
	}

	/** Indicates whether or not the 'relative-y' (aka 'RelativeY') attribute
	    is required to be present in a MusicXML document. This attribute is
	    a member of the 'image-attributes' (aka 'ImageAttributes') attributeGroup. **/
	bool MxCxEmptyImage::getIsRelativeYRequired() const
	{
		return myImpl->getIsRelativeYRequired();
	}

	/** Indicates whether or not the 'halign' (aka 'Halign') attribute is required
	    to be present in a MusicXML document. This attribute is a member of
	    the 'image-attributes' (aka 'ImageAttributes') attributeGroup. **/
	bool MxCxEmptyImage::getIsHalignRequired() const
	{
		return myImpl->getIsHalignRequired();
	}

	/** Indicates whether or not the 'valign' (aka 'Valign') attribute is required
	    to be present in a MusicXML document. This attribute is a member of
	    the 'image-attributes' (aka 'ImageAttributes') attributeGroup. **/
	bool MxCxEmptyImage::getIsValignRequired() const
	{
		return myImpl->getIsValignRequired();
	}

/* Get IsAttributePresent Values ------------------------------------------------------ */

	/** Indicates whether or not the 'source' (aka 'Source') attribute is (or
	    will be) present in the MusicXML document. Note: because 'source' is
	    required by the MusicXML specification, getIsSourcePresent will always
	    return 'true'. There is no corresponding setIsSourcePresent function
	    for this attribute. This attribute is a member of the 'image-attributes'
	    (aka 'ImageAttributes') attributeGroup. **/
	bool MxCxEmptyImage::getIsSourcePresent() const
	{
		return myImpl->getIsSourcePresent();
	}

	/** Indicates whether or not the 'type' (aka 'Type') attribute is (or will
	    be) present in the MusicXML document. Note: because 'type' is required
	    by the MusicXML specification, getIsTypePresent will always return
	    'true'. There is no corresponding setIsTypePresent function for this
	    attribute. This attribute is a member of the 'image-attributes' (aka
	    'ImageAttributes') attributeGroup. **/
	bool MxCxEmptyImage::getIsTypePresent() const
	{
		return myImpl->getIsTypePresent();
	}

	/** Indicates whether or not the 'default-x' (aka 'DefaultX') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'image-attributes' (aka 'ImageAttributes') attributeGroup. **/
	bool MxCxEmptyImage::getIsDefaultXPresent() const
	{
		return myImpl->getIsDefaultXPresent();
	}

	/** Indicates whether or not the 'default-y' (aka 'DefaultY') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'image-attributes' (aka 'ImageAttributes') attributeGroup. **/
	bool MxCxEmptyImage::getIsDefaultYPresent() const
	{
		return myImpl->getIsDefaultYPresent();
	}

	/** Indicates whether or not the 'relative-x' (aka 'RelativeX') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'image-attributes' (aka 'ImageAttributes') attributeGroup. **/
	bool MxCxEmptyImage::getIsRelativeXPresent() const
	{
		return myImpl->getIsRelativeXPresent();
	}

	/** Indicates whether or not the 'relative-y' (aka 'RelativeY') attribute
	    is (or will be) present in the MusicXML document. This attribute is
	    a member of the 'image-attributes' (aka 'ImageAttributes') attributeGroup. **/
	bool MxCxEmptyImage::getIsRelativeYPresent() const
	{
		return myImpl->getIsRelativeYPresent();
	}

	/** Indicates whether or not the 'halign' (aka 'Halign') attribute is (or
	    will be) present in the MusicXML document. This attribute is a member
	    of the 'image-attributes' (aka 'ImageAttributes') attributeGroup. **/
	bool MxCxEmptyImage::getIsHalignPresent() const
	{
		return myImpl->getIsHalignPresent();
	}

	/** Indicates whether or not the 'valign' (aka 'Valign') attribute is (or
	    will be) present in the MusicXML document. This attribute is a member
	    of the 'image-attributes' (aka 'ImageAttributes') attributeGroup. **/
	bool MxCxEmptyImage::getIsValignPresent() const
	{
		return myImpl->getIsValignPresent();
	}

/* Set IsAttributePresent Values ------------------------------------------------------ */

	/** Sets the value which indicates whether or not the 'default-x' (aka
	    'DefaultX') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'image-attributes' (aka 'ImageAttributes')
	    attributeGroup. **/
	void MxCxEmptyImage::setIsDefaultXPresent( const bool& value_in )
	{
		myImpl->setIsDefaultXPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'default-y' (aka
	    'DefaultY') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'image-attributes' (aka 'ImageAttributes')
	    attributeGroup. **/
	void MxCxEmptyImage::setIsDefaultYPresent( const bool& value_in )
	{
		myImpl->setIsDefaultYPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'relative-x' (aka
	    'RelativeX') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'image-attributes' (aka 'ImageAttributes')
	    attributeGroup. **/
	void MxCxEmptyImage::setIsRelativeXPresent( const bool& value_in )
	{
		myImpl->setIsRelativeXPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'relative-y' (aka
	    'RelativeY') attribute is (or will be) present in the MusicXML document.
	    This attribute is a member of the 'image-attributes' (aka 'ImageAttributes')
	    attributeGroup. **/
	void MxCxEmptyImage::setIsRelativeYPresent( const bool& value_in )
	{
		myImpl->setIsRelativeYPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'halign' (aka 'Halign')
	    attribute is (or will be) present in the MusicXML document. This attribute
	    is a member of the 'image-attributes' (aka 'ImageAttributes') attributeGroup. **/
	void MxCxEmptyImage::setIsHalignPresent( const bool& value_in )
	{
		myImpl->setIsHalignPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'valign' (aka 'Valign')
	    attribute is (or will be) present in the MusicXML document. This attribute
	    is a member of the 'image-attributes' (aka 'ImageAttributes') attributeGroup. **/
	void MxCxEmptyImage::setIsValignPresent( const bool& value_in )
	{
		myImpl->setIsValignPresent( value_in );
	}

/* Stringing and Streaming ------------------------------------------------------------ */

	/** Returns the xml representation of the object's value. **/
	std::string MxCxEmptyImage::toString() const
	{
		return myImpl->toString();
	}

	/** Returns the xml representation of the object's value. **/
	std::ostream& MxCxEmptyImage::stream( std::ostream& os_out ) const
	{
		return myImpl->stream( os_out );
	}

/* Get IsAttributeDefaultDefined Values ----------------------------------------------- */

	/** Indicates whether or not the 'source' (aka 'Source') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'image-attributes'
	    (aka 'ImageAttributes') attributeGroup. **/
	bool MxCxEmptyImage::getIsSourceDefaultDefined() const
	{
		return myImpl->getIsSourceDefaultDefined();
	}

	/** Indicates whether or not the 'type' (aka 'Type') has a default value
	    defined in the MusicXML xsd specification (either explicitly or in
	    the documentation). This attribute is a member of the 'image-attributes'
	    (aka 'ImageAttributes') attributeGroup. **/
	bool MxCxEmptyImage::getIsTypeDefaultDefined() const
	{
		return myImpl->getIsTypeDefaultDefined();
	}

	/** Indicates whether or not the 'default-x' (aka 'DefaultX') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'image-attributes'
	    (aka 'ImageAttributes') attributeGroup. **/
	bool MxCxEmptyImage::getIsDefaultXDefaultDefined() const
	{
		return myImpl->getIsDefaultXDefaultDefined();
	}

	/** Indicates whether or not the 'default-y' (aka 'DefaultY') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'image-attributes'
	    (aka 'ImageAttributes') attributeGroup. **/
	bool MxCxEmptyImage::getIsDefaultYDefaultDefined() const
	{
		return myImpl->getIsDefaultYDefaultDefined();
	}

	/** Indicates whether or not the 'relative-x' (aka 'RelativeX') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'image-attributes'
	    (aka 'ImageAttributes') attributeGroup. **/
	bool MxCxEmptyImage::getIsRelativeXDefaultDefined() const
	{
		return myImpl->getIsRelativeXDefaultDefined();
	}

	/** Indicates whether or not the 'relative-y' (aka 'RelativeY') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'image-attributes'
	    (aka 'ImageAttributes') attributeGroup. **/
	bool MxCxEmptyImage::getIsRelativeYDefaultDefined() const
	{
		return myImpl->getIsRelativeYDefaultDefined();
	}

	/** Indicates whether or not the 'halign' (aka 'Halign') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'image-attributes'
	    (aka 'ImageAttributes') attributeGroup. **/
	bool MxCxEmptyImage::getIsHalignDefaultDefined() const
	{
		return myImpl->getIsHalignDefaultDefined();
	}

	/** Indicates whether or not the 'valign' (aka 'Valign') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). This attribute is a member of the 'image-attributes'
	    (aka 'ImageAttributes') attributeGroup. **/
	bool MxCxEmptyImage::getIsValignDefaultDefined() const
	{
		return myImpl->getIsValignDefaultDefined();
	}

/* Get AttributeDefaultValue ---------------------------------------------------------- */

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'source' (aka 'Source') attribute. This attribute is a member of
	    the 'image-attributes' (aka 'ImageAttributes') attributeGroup. **/
	XsAnyUri MxCxEmptyImage::getSourceDefaultValue() const
	{
		return myImpl->getSourceDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'type' (aka 'Type') attribute. This attribute is a member of the
	    'image-attributes' (aka 'ImageAttributes') attributeGroup. **/
	XsToken MxCxEmptyImage::getTypeDefaultValue() const
	{
		return myImpl->getTypeDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'default-x' (aka 'DefaultX') attribute. This attribute is a member
	    of the 'image-attributes' (aka 'ImageAttributes') attributeGroup. **/
	MxNumberTenths MxCxEmptyImage::getDefaultXDefaultValue() const
	{
		return myImpl->getDefaultXDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'default-y' (aka 'DefaultY') attribute. This attribute is a member
	    of the 'image-attributes' (aka 'ImageAttributes') attributeGroup. **/
	MxNumberTenths MxCxEmptyImage::getDefaultYDefaultValue() const
	{
		return myImpl->getDefaultYDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'relative-x' (aka 'RelativeX') attribute. This attribute is a member
	    of the 'image-attributes' (aka 'ImageAttributes') attributeGroup. **/
	MxNumberTenths MxCxEmptyImage::getRelativeXDefaultValue() const
	{
		return myImpl->getRelativeXDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'relative-y' (aka 'RelativeY') attribute. This attribute is a member
	    of the 'image-attributes' (aka 'ImageAttributes') attributeGroup. **/
	MxNumberTenths MxCxEmptyImage::getRelativeYDefaultValue() const
	{
		return myImpl->getRelativeYDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'halign' (aka 'Halign') attribute. This attribute is a member of
	    the 'image-attributes' (aka 'ImageAttributes') attributeGroup. **/
	MxEnumLeftCenterRight MxCxEmptyImage::getHalignDefaultValue() const
	{
		return myImpl->getHalignDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'valign' (aka 'Valign') attribute. This attribute is a member of
	    the 'image-attributes' (aka 'ImageAttributes') attributeGroup. **/
	MxEnumValignImage MxCxEmptyImage::getValignDefaultValue() const
	{
		return myImpl->getValignDefaultValue();
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

