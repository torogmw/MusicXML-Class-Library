/* See MusicXML License at the bottom of this code page. */

/**
  * @file       MxAttrGrpPrintAttributes.cpp
  * @class      lexicon::MxAttrGrpPrintAttributes
  * @author     Matthew James Briggs
  * @email      matthew.james.briggs@gmail.com
  * @url        http://matthewjamesbriggs.com
  * @date       2014-11-28 14:15:41
  * @project    Lexicon
  * @version    1.0
  * @musicxmlid 2135
  * 
  * @brief The 'PrintAttributes' class serves as a binding for the MusicXml 'print-attributes'
  * attributeGroup.
  * 
 **/

#include "MxAttrGrpPrintAttributes.h"
#include <sstream>
#include "_hidden_attributeStream.h"

/* Impl ------------------------------------------------------------------------------- */

namespace lexicon
{
	struct MxAttrGrpPrintAttributes::Impl
	{
		Impl()
		:myStaffSpacing()
		,myNewSystem()
		,myNewPage()
		,myBlankPage()
		,myPageNumber()
		,myIsStaffSpacingPresent( false )
		,myIsNewSystemPresent( false )
		,myIsNewPagePresent( false )
		,myIsBlankPagePresent( false )
		,myIsPageNumberPresent( false )
		{}

	private:
		MxNumberTenths myStaffSpacing;
		MxEnumYesNo myNewSystem;
		MxEnumYesNo myNewPage;
		XsPositiveInteger myBlankPage;
		XsToken myPageNumber;
		bool myIsStaffSpacingPresent;
		bool myIsNewSystemPresent;
		bool myIsNewPagePresent;
		bool myIsBlankPagePresent;
		bool myIsPageNumberPresent;

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

		/** Returns the internal value of the 'staff-spacing' (aka 'StaffSpacing')
		    attribute. **/
		MxNumberTenths getStaffSpacing() const
		{
			return myStaffSpacing;
		}

		/** Returns the internal value of the 'new-system' (aka 'NewSystem') attribute. **/
		MxEnumYesNo getNewSystem() const
		{
			return myNewSystem;
		}

		/** Returns the internal value of the 'new-page' (aka 'NewPage') attribute. **/
		MxEnumYesNo getNewPage() const
		{
			return myNewPage;
		}

		/** Returns the internal value of the 'blank-page' (aka 'BlankPage') attribute. **/
		XsPositiveInteger getBlankPage() const
		{
			return myBlankPage;
		}

		/** Returns the internal value of the 'page-number' (aka 'PageNumber')
		    attribute. **/
		XsToken getPageNumber() const
		{
			return myPageNumber;
		}

/* Set Attribute Values --------------------------------------------------------------- */

		/** Sets the internal value of the 'staff-spacing' (aka 'StaffSpacing')
		    attribute. **/
		void setStaffSpacing( const MxNumberTenths& value_in )
		{
			myStaffSpacing = value_in;
		}

		/** Sets the internal value of the 'new-system' (aka 'NewSystem') attribute. **/
		void setNewSystem( const MxEnumYesNo& value_in )
		{
			myNewSystem = value_in;
		}

		/** Sets the internal value of the 'new-page' (aka 'NewPage') attribute. **/
		void setNewPage( const MxEnumYesNo& value_in )
		{
			myNewPage = value_in;
		}

		/** Sets the internal value of the 'blank-page' (aka 'BlankPage') attribute. **/
		void setBlankPage( const XsPositiveInteger& value_in )
		{
			myBlankPage = value_in;
		}

		/** Sets the internal value of the 'page-number' (aka 'PageNumber') attribute. **/
		void setPageNumber( const XsToken& value_in )
		{
			myPageNumber = value_in;
		}

/* Get IsAttributeRequired Values ----------------------------------------------------- */

		/** Indicates whether or not the 'staff-spacing' (aka 'StaffSpacing') attribute
		    is required to be present in a MusicXML document. **/
		bool getIsStaffSpacingRequired() const
		{
			return false;
		}

		/** Indicates whether or not the 'new-system' (aka 'NewSystem') attribute
		    is required to be present in a MusicXML document. **/
		bool getIsNewSystemRequired() const
		{
			return false;
		}

		/** Indicates whether or not the 'new-page' (aka 'NewPage') attribute is
		    required to be present in a MusicXML document. **/
		bool getIsNewPageRequired() const
		{
			return false;
		}

		/** Indicates whether or not the 'blank-page' (aka 'BlankPage') attribute
		    is required to be present in a MusicXML document. **/
		bool getIsBlankPageRequired() const
		{
			return false;
		}

		/** Indicates whether or not the 'page-number' (aka 'PageNumber') attribute
		    is required to be present in a MusicXML document. **/
		bool getIsPageNumberRequired() const
		{
			return false;
		}

/* Get IsAttributePresent Values ------------------------------------------------------ */

		/** Indicates whether or not the 'staff-spacing' (aka 'StaffSpacing') attribute
		    is (or will be) present in the MusicXML document. **/
		bool getIsStaffSpacingPresent() const
		{
			return myIsStaffSpacingPresent;
		}

		/** Indicates whether or not the 'new-system' (aka 'NewSystem') attribute
		    is (or will be) present in the MusicXML document. **/
		bool getIsNewSystemPresent() const
		{
			return myIsNewSystemPresent;
		}

		/** Indicates whether or not the 'new-page' (aka 'NewPage') attribute is
		    (or will be) present in the MusicXML document. **/
		bool getIsNewPagePresent() const
		{
			return myIsNewPagePresent;
		}

		/** Indicates whether or not the 'blank-page' (aka 'BlankPage') attribute
		    is (or will be) present in the MusicXML document. **/
		bool getIsBlankPagePresent() const
		{
			return myIsBlankPagePresent;
		}

		/** Indicates whether or not the 'page-number' (aka 'PageNumber') attribute
		    is (or will be) present in the MusicXML document. **/
		bool getIsPageNumberPresent() const
		{
			return myIsPageNumberPresent;
		}

/* Set IsAttributePresent Values ------------------------------------------------------ */

		/** Sets the value which indicates whether or not the 'staff-spacing' (aka
		    'StaffSpacing') attribute is (or will be) present in the MusicXML document. **/
		void setIsStaffSpacingPresent( const bool& value_in )
		{
			myIsStaffSpacingPresent = value_in;
		}

		/** Sets the value which indicates whether or not the 'new-system' (aka
		    'NewSystem') attribute is (or will be) present in the MusicXML document. **/
		void setIsNewSystemPresent( const bool& value_in )
		{
			myIsNewSystemPresent = value_in;
		}

		/** Sets the value which indicates whether or not the 'new-page' (aka 'NewPage')
		    attribute is (or will be) present in the MusicXML document. **/
		void setIsNewPagePresent( const bool& value_in )
		{
			myIsNewPagePresent = value_in;
		}

		/** Sets the value which indicates whether or not the 'blank-page' (aka
		    'BlankPage') attribute is (or will be) present in the MusicXML document. **/
		void setIsBlankPagePresent( const bool& value_in )
		{
			myIsBlankPagePresent = value_in;
		}

		/** Sets the value which indicates whether or not the 'page-number' (aka
		    'PageNumber') attribute is (or will be) present in the MusicXML document. **/
		void setIsPageNumberPresent( const bool& value_in )
		{
			myIsPageNumberPresent = value_in;
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
			hidden::attributeStream( getIsStaffSpacingPresent(), "staff-spacing", getStaffSpacing().toString(), os_out, isFirst );
			hidden::attributeStream( getIsNewSystemPresent(), "new-system", getNewSystem().toString(), os_out, isFirst );
			hidden::attributeStream( getIsNewPagePresent(), "new-page", getNewPage().toString(), os_out, isFirst );
			hidden::attributeStream( getIsBlankPagePresent(), "blank-page", getBlankPage().toString(), os_out, isFirst );
			hidden::attributeStream( getIsPageNumberPresent(), "page-number", getPageNumber().toString(), os_out, isFirst );
			return os_out;
		}

/* Get IsAttributeDefaultDefined Values ----------------------------------------------- */

		/** Indicates whether or not the 'staff-spacing' (aka 'StaffSpacing') has
		    a default value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). **/
		bool getIsStaffSpacingDefaultDefined() const
		{
			return false;
		}

		/** Indicates whether or not the 'new-system' (aka 'NewSystem') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). **/
		bool getIsNewSystemDefaultDefined() const
		{
			return false;
		}

		/** Indicates whether or not the 'new-page' (aka 'NewPage') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). **/
		bool getIsNewPageDefaultDefined() const
		{
			return false;
		}

		/** Indicates whether or not the 'blank-page' (aka 'BlankPage') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). **/
		bool getIsBlankPageDefaultDefined() const
		{
			return false;
		}

		/** Indicates whether or not the 'page-number' (aka 'PageNumber') has a
		    default value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). **/
		bool getIsPageNumberDefaultDefined() const
		{
			return false;
		}

/* Get AttributeDefaultValue ---------------------------------------------------------- */

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'staff-spacing' (aka 'StaffSpacing') attribute. **/
		MxNumberTenths getStaffSpacingDefaultValue() const
		{
			return MxNumberTenths(  );
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'new-system' (aka 'NewSystem') attribute. **/
		MxEnumYesNo getNewSystemDefaultValue() const
		{
			return MxEnumYesNo(  );
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'new-page' (aka 'NewPage') attribute. **/
		MxEnumYesNo getNewPageDefaultValue() const
		{
			return MxEnumYesNo(  );
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'blank-page' (aka 'BlankPage') attribute. **/
		XsPositiveInteger getBlankPageDefaultValue() const
		{
			return XsPositiveInteger(  );
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'page-number' (aka 'PageNumber') attribute. **/
		XsToken getPageNumberDefaultValue() const
		{
			return XsToken(  );
		}

	}; // struct MxAttrGrpPrintAttributes::Impl

	const int MxAttrGrpPrintAttributes::Impl::myXsdID = 2135;
	const std::string MxAttrGrpPrintAttributes::Impl::myXmlTypeName = "print-attributes";
	const std::string MxAttrGrpPrintAttributes::Impl::myCppClassName = "MxAttrGrpPrintAttributes";
	const std::string MxAttrGrpPrintAttributes::Impl::myDocumentation = "The print-attributes group is used by the print element. The new-system and new-page attributes indicate whether to force a system or page break, or to force the current music onto the same system or page as the preceding music. Normally this is the first music data within a measure. If used in multi-part music, they should be placed in the same positions within each part, or the results are undefined. The page-number attribute sets the number of a new page; it is ignored if new-page is not yes. Version 2.0 adds a blank-page attribute. This is a positive integer value that specifies the number of blank pages to insert before the current measure. It is ignored if new-page is not yes. These blank pages have no music, but may have text or images specified by the credit element. This is used to allow a combination of pages that are all text, or all text and images, together with pages of music. The staff-spacing attribute specifies spacing between multiple staves in tenths of staff space. This is deprecated as of Version 1.1; the staff-layout element should be used instead. If both are present, the staff-layout values take priority.";

} // namespace lexicon


/* MxAttrGrpPrintAttributes ----------------------------------------------------------- */

namespace lexicon
{

/* Constructor, Destructor, Copy, Assignment ------------------------------------------ */

	MxAttrGrpPrintAttributes::MxAttrGrpPrintAttributes()
	:myImpl( new Impl() ) {}

	MxAttrGrpPrintAttributes::~MxAttrGrpPrintAttributes() {}

	MxAttrGrpPrintAttributes::MxAttrGrpPrintAttributes( const MxAttrGrpPrintAttributes& other )
	:myImpl( new Impl( *(other.myImpl) ) ) {}

	MxAttrGrpPrintAttributes& MxAttrGrpPrintAttributes::operator=( const MxAttrGrpPrintAttributes& other )
	{
		this->myImpl = std::unique_ptr<Impl>( new Impl( *(other.myImpl) ) );
		return *this;
	}

/* Get Class Information -------------------------------------------------------------- */

	/** Returns the name of this xs:simpleType as found in the musicxml.xsd
	    document. **/
	std::string MxAttrGrpPrintAttributes::getXmlTypeName() const
	{
		return myImpl->getXmlTypeName();
	}

	/** Returns the name of this C++ class. **/
	std::string MxAttrGrpPrintAttributes::getClassName() const
	{
		return myImpl->getClassName();
	}

	/** Returns the documentation for this musicxml type as found in the musicxml.xsd
	    document. **/
	std::string MxAttrGrpPrintAttributes::getDocumentation() const
	{
		return myImpl->getDocumentation();
	}

/* Get Attribute Values --------------------------------------------------------------- */

	/** Returns the internal value of the 'staff-spacing' (aka 'StaffSpacing')
	    attribute. **/
	MxNumberTenths MxAttrGrpPrintAttributes::getStaffSpacing() const
	{
		return myImpl->getStaffSpacing();
	}

	/** Returns the internal value of the 'new-system' (aka 'NewSystem') attribute. **/
	MxEnumYesNo MxAttrGrpPrintAttributes::getNewSystem() const
	{
		return myImpl->getNewSystem();
	}

	/** Returns the internal value of the 'new-page' (aka 'NewPage') attribute. **/
	MxEnumYesNo MxAttrGrpPrintAttributes::getNewPage() const
	{
		return myImpl->getNewPage();
	}

	/** Returns the internal value of the 'blank-page' (aka 'BlankPage') attribute. **/
	XsPositiveInteger MxAttrGrpPrintAttributes::getBlankPage() const
	{
		return myImpl->getBlankPage();
	}

	/** Returns the internal value of the 'page-number' (aka 'PageNumber')
	    attribute. **/
	XsToken MxAttrGrpPrintAttributes::getPageNumber() const
	{
		return myImpl->getPageNumber();
	}

/* Set Attribute Values --------------------------------------------------------------- */

	/** Sets the internal value of the 'staff-spacing' (aka 'StaffSpacing')
	    attribute. **/
	void MxAttrGrpPrintAttributes::setStaffSpacing( const MxNumberTenths& value_in )
	{
		myImpl->setStaffSpacing( value_in );
	}

	/** Sets the internal value of the 'new-system' (aka 'NewSystem') attribute. **/
	void MxAttrGrpPrintAttributes::setNewSystem( const MxEnumYesNo& value_in )
	{
		myImpl->setNewSystem( value_in );
	}

	/** Sets the internal value of the 'new-page' (aka 'NewPage') attribute. **/
	void MxAttrGrpPrintAttributes::setNewPage( const MxEnumYesNo& value_in )
	{
		myImpl->setNewPage( value_in );
	}

	/** Sets the internal value of the 'blank-page' (aka 'BlankPage') attribute. **/
	void MxAttrGrpPrintAttributes::setBlankPage( const XsPositiveInteger& value_in )
	{
		myImpl->setBlankPage( value_in );
	}

	/** Sets the internal value of the 'page-number' (aka 'PageNumber') attribute. **/
	void MxAttrGrpPrintAttributes::setPageNumber( const XsToken& value_in )
	{
		myImpl->setPageNumber( value_in );
	}

/* Get IsAttributeRequired Values ----------------------------------------------------- */

	/** Indicates whether or not the 'staff-spacing' (aka 'StaffSpacing') attribute
	    is required to be present in a MusicXML document. **/
	bool MxAttrGrpPrintAttributes::getIsStaffSpacingRequired() const
	{
		return myImpl->getIsStaffSpacingRequired();
	}

	/** Indicates whether or not the 'new-system' (aka 'NewSystem') attribute
	    is required to be present in a MusicXML document. **/
	bool MxAttrGrpPrintAttributes::getIsNewSystemRequired() const
	{
		return myImpl->getIsNewSystemRequired();
	}

	/** Indicates whether or not the 'new-page' (aka 'NewPage') attribute is
	    required to be present in a MusicXML document. **/
	bool MxAttrGrpPrintAttributes::getIsNewPageRequired() const
	{
		return myImpl->getIsNewPageRequired();
	}

	/** Indicates whether or not the 'blank-page' (aka 'BlankPage') attribute
	    is required to be present in a MusicXML document. **/
	bool MxAttrGrpPrintAttributes::getIsBlankPageRequired() const
	{
		return myImpl->getIsBlankPageRequired();
	}

	/** Indicates whether or not the 'page-number' (aka 'PageNumber') attribute
	    is required to be present in a MusicXML document. **/
	bool MxAttrGrpPrintAttributes::getIsPageNumberRequired() const
	{
		return myImpl->getIsPageNumberRequired();
	}

/* Get IsAttributePresent Values ------------------------------------------------------ */

	/** Indicates whether or not the 'staff-spacing' (aka 'StaffSpacing') attribute
	    is (or will be) present in the MusicXML document. **/
	bool MxAttrGrpPrintAttributes::getIsStaffSpacingPresent() const
	{
		return myImpl->getIsStaffSpacingPresent();
	}

	/** Indicates whether or not the 'new-system' (aka 'NewSystem') attribute
	    is (or will be) present in the MusicXML document. **/
	bool MxAttrGrpPrintAttributes::getIsNewSystemPresent() const
	{
		return myImpl->getIsNewSystemPresent();
	}

	/** Indicates whether or not the 'new-page' (aka 'NewPage') attribute is
	    (or will be) present in the MusicXML document. **/
	bool MxAttrGrpPrintAttributes::getIsNewPagePresent() const
	{
		return myImpl->getIsNewPagePresent();
	}

	/** Indicates whether or not the 'blank-page' (aka 'BlankPage') attribute
	    is (or will be) present in the MusicXML document. **/
	bool MxAttrGrpPrintAttributes::getIsBlankPagePresent() const
	{
		return myImpl->getIsBlankPagePresent();
	}

	/** Indicates whether or not the 'page-number' (aka 'PageNumber') attribute
	    is (or will be) present in the MusicXML document. **/
	bool MxAttrGrpPrintAttributes::getIsPageNumberPresent() const
	{
		return myImpl->getIsPageNumberPresent();
	}

/* Set IsAttributePresent Values ------------------------------------------------------ */

	/** Sets the value which indicates whether or not the 'staff-spacing' (aka
	    'StaffSpacing') attribute is (or will be) present in the MusicXML document. **/
	void MxAttrGrpPrintAttributes::setIsStaffSpacingPresent( const bool& value_in )
	{
		myImpl->setIsStaffSpacingPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'new-system' (aka
	    'NewSystem') attribute is (or will be) present in the MusicXML document. **/
	void MxAttrGrpPrintAttributes::setIsNewSystemPresent( const bool& value_in )
	{
		myImpl->setIsNewSystemPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'new-page' (aka 'NewPage')
	    attribute is (or will be) present in the MusicXML document. **/
	void MxAttrGrpPrintAttributes::setIsNewPagePresent( const bool& value_in )
	{
		myImpl->setIsNewPagePresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'blank-page' (aka
	    'BlankPage') attribute is (or will be) present in the MusicXML document. **/
	void MxAttrGrpPrintAttributes::setIsBlankPagePresent( const bool& value_in )
	{
		myImpl->setIsBlankPagePresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'page-number' (aka
	    'PageNumber') attribute is (or will be) present in the MusicXML document. **/
	void MxAttrGrpPrintAttributes::setIsPageNumberPresent( const bool& value_in )
	{
		myImpl->setIsPageNumberPresent( value_in );
	}

/* Stringing and Streaming ------------------------------------------------------------ */

	/** Returns the attributeGroup's value as a string where each attribute
	    is represented, if present, in the form attribute="vale". **/
	std::string MxAttrGrpPrintAttributes::toString() const
	{
		return myImpl->toString();
	}

	/** Returns the attributeGroup's value as a string where each attribute
	    is represented, if present, in the form attribute="vale". **/
	std::ostream& MxAttrGrpPrintAttributes::stream( std::ostream& os_out ) const
	{
		return myImpl->stream( os_out );
	}

/* Get IsAttributeDefaultDefined Values ----------------------------------------------- */

	/** Indicates whether or not the 'staff-spacing' (aka 'StaffSpacing') has
	    a default value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). **/
	bool MxAttrGrpPrintAttributes::getIsStaffSpacingDefaultDefined() const
	{
		return myImpl->getIsStaffSpacingDefaultDefined();
	}

	/** Indicates whether or not the 'new-system' (aka 'NewSystem') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). **/
	bool MxAttrGrpPrintAttributes::getIsNewSystemDefaultDefined() const
	{
		return myImpl->getIsNewSystemDefaultDefined();
	}

	/** Indicates whether or not the 'new-page' (aka 'NewPage') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). **/
	bool MxAttrGrpPrintAttributes::getIsNewPageDefaultDefined() const
	{
		return myImpl->getIsNewPageDefaultDefined();
	}

	/** Indicates whether or not the 'blank-page' (aka 'BlankPage') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). **/
	bool MxAttrGrpPrintAttributes::getIsBlankPageDefaultDefined() const
	{
		return myImpl->getIsBlankPageDefaultDefined();
	}

	/** Indicates whether or not the 'page-number' (aka 'PageNumber') has a
	    default value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). **/
	bool MxAttrGrpPrintAttributes::getIsPageNumberDefaultDefined() const
	{
		return myImpl->getIsPageNumberDefaultDefined();
	}

/* Get AttributeDefaultValue ---------------------------------------------------------- */

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'staff-spacing' (aka 'StaffSpacing') attribute. **/
	MxNumberTenths MxAttrGrpPrintAttributes::getStaffSpacingDefaultValue() const
	{
		return myImpl->getStaffSpacingDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'new-system' (aka 'NewSystem') attribute. **/
	MxEnumYesNo MxAttrGrpPrintAttributes::getNewSystemDefaultValue() const
	{
		return myImpl->getNewSystemDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'new-page' (aka 'NewPage') attribute. **/
	MxEnumYesNo MxAttrGrpPrintAttributes::getNewPageDefaultValue() const
	{
		return myImpl->getNewPageDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'blank-page' (aka 'BlankPage') attribute. **/
	XsPositiveInteger MxAttrGrpPrintAttributes::getBlankPageDefaultValue() const
	{
		return myImpl->getBlankPageDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'page-number' (aka 'PageNumber') attribute. **/
	XsToken MxAttrGrpPrintAttributes::getPageNumberDefaultValue() const
	{
		return myImpl->getPageNumberDefaultValue();
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

