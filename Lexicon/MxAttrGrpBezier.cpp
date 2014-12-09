/* See MusicXML License at the bottom of this code page. */

/**
  * @file       MxAttrGrpBezier.cpp
  * @class      lexicon::MxAttrGrpBezier
  * @author     Matthew James Briggs
  * @email      matthew.james.briggs@gmail.com
  * @url        http://matthewjamesbriggs.com
  * @date       2014-11-28 14:15:39
  * @project    Lexicon
  * @version    1.0
  * @musicxmlid 1785
  * 
  * @brief The 'Bezier' class serves as a binding for the MusicXml 'bezier' attributeGroup.
  * 
 **/

#include "MxAttrGrpBezier.h"
#include <sstream>
#include "_hidden_attributeStream.h"

/* Impl ------------------------------------------------------------------------------- */

namespace lexicon
{
	struct MxAttrGrpBezier::Impl
	{
		Impl()
		:myBezierOffset()
		,myBezierOffset2()
		,myBezierX()
		,myBezierY()
		,myBezierX2()
		,myBezierY2()
		,myIsBezierOffsetPresent( false )
		,myIsBezierOffset2Present( false )
		,myIsBezierXPresent( false )
		,myIsBezierYPresent( false )
		,myIsBezierX2Present( false )
		,myIsBezierY2Present( false )
		{}

	private:
		MxNumberDivisions myBezierOffset;
		MxNumberDivisions myBezierOffset2;
		MxNumberTenths myBezierX;
		MxNumberTenths myBezierY;
		MxNumberTenths myBezierX2;
		MxNumberTenths myBezierY2;
		bool myIsBezierOffsetPresent;
		bool myIsBezierOffset2Present;
		bool myIsBezierXPresent;
		bool myIsBezierYPresent;
		bool myIsBezierX2Present;
		bool myIsBezierY2Present;

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

		/** Returns the internal value of the 'bezier-offset' (aka 'BezierOffset')
		    attribute. **/
		MxNumberDivisions getBezierOffset() const
		{
			return myBezierOffset;
		}

		/** Returns the internal value of the 'bezier-offset2' (aka 'BezierOffset2')
		    attribute. **/
		MxNumberDivisions getBezierOffset2() const
		{
			return myBezierOffset2;
		}

		/** Returns the internal value of the 'bezier-x' (aka 'BezierX') attribute. **/
		MxNumberTenths getBezierX() const
		{
			return myBezierX;
		}

		/** Returns the internal value of the 'bezier-y' (aka 'BezierY') attribute. **/
		MxNumberTenths getBezierY() const
		{
			return myBezierY;
		}

		/** Returns the internal value of the 'bezier-x2' (aka 'BezierX2') attribute. **/
		MxNumberTenths getBezierX2() const
		{
			return myBezierX2;
		}

		/** Returns the internal value of the 'bezier-y2' (aka 'BezierY2') attribute. **/
		MxNumberTenths getBezierY2() const
		{
			return myBezierY2;
		}

/* Set Attribute Values --------------------------------------------------------------- */

		/** Sets the internal value of the 'bezier-offset' (aka 'BezierOffset')
		    attribute. **/
		void setBezierOffset( const MxNumberDivisions& value_in )
		{
			myBezierOffset = value_in;
		}

		/** Sets the internal value of the 'bezier-offset2' (aka 'BezierOffset2')
		    attribute. **/
		void setBezierOffset2( const MxNumberDivisions& value_in )
		{
			myBezierOffset2 = value_in;
		}

		/** Sets the internal value of the 'bezier-x' (aka 'BezierX') attribute. **/
		void setBezierX( const MxNumberTenths& value_in )
		{
			myBezierX = value_in;
		}

		/** Sets the internal value of the 'bezier-y' (aka 'BezierY') attribute. **/
		void setBezierY( const MxNumberTenths& value_in )
		{
			myBezierY = value_in;
		}

		/** Sets the internal value of the 'bezier-x2' (aka 'BezierX2') attribute. **/
		void setBezierX2( const MxNumberTenths& value_in )
		{
			myBezierX2 = value_in;
		}

		/** Sets the internal value of the 'bezier-y2' (aka 'BezierY2') attribute. **/
		void setBezierY2( const MxNumberTenths& value_in )
		{
			myBezierY2 = value_in;
		}

/* Get IsAttributeRequired Values ----------------------------------------------------- */

		/** Indicates whether or not the 'bezier-offset' (aka 'BezierOffset') attribute
		    is required to be present in a MusicXML document. **/
		bool getIsBezierOffsetRequired() const
		{
			return false;
		}

		/** Indicates whether or not the 'bezier-offset2' (aka 'BezierOffset2')
		    attribute is required to be present in a MusicXML document. **/
		bool getIsBezierOffset2Required() const
		{
			return false;
		}

		/** Indicates whether or not the 'bezier-x' (aka 'BezierX') attribute is
		    required to be present in a MusicXML document. **/
		bool getIsBezierXRequired() const
		{
			return false;
		}

		/** Indicates whether or not the 'bezier-y' (aka 'BezierY') attribute is
		    required to be present in a MusicXML document. **/
		bool getIsBezierYRequired() const
		{
			return false;
		}

		/** Indicates whether or not the 'bezier-x2' (aka 'BezierX2') attribute
		    is required to be present in a MusicXML document. **/
		bool getIsBezierX2Required() const
		{
			return false;
		}

		/** Indicates whether or not the 'bezier-y2' (aka 'BezierY2') attribute
		    is required to be present in a MusicXML document. **/
		bool getIsBezierY2Required() const
		{
			return false;
		}

/* Get IsAttributePresent Values ------------------------------------------------------ */

		/** Indicates whether or not the 'bezier-offset' (aka 'BezierOffset') attribute
		    is (or will be) present in the MusicXML document. **/
		bool getIsBezierOffsetPresent() const
		{
			return myIsBezierOffsetPresent;
		}

		/** Indicates whether or not the 'bezier-offset2' (aka 'BezierOffset2')
		    attribute is (or will be) present in the MusicXML document. **/
		bool getIsBezierOffset2Present() const
		{
			return myIsBezierOffset2Present;
		}

		/** Indicates whether or not the 'bezier-x' (aka 'BezierX') attribute is
		    (or will be) present in the MusicXML document. **/
		bool getIsBezierXPresent() const
		{
			return myIsBezierXPresent;
		}

		/** Indicates whether or not the 'bezier-y' (aka 'BezierY') attribute is
		    (or will be) present in the MusicXML document. **/
		bool getIsBezierYPresent() const
		{
			return myIsBezierYPresent;
		}

		/** Indicates whether or not the 'bezier-x2' (aka 'BezierX2') attribute
		    is (or will be) present in the MusicXML document. **/
		bool getIsBezierX2Present() const
		{
			return myIsBezierX2Present;
		}

		/** Indicates whether or not the 'bezier-y2' (aka 'BezierY2') attribute
		    is (or will be) present in the MusicXML document. **/
		bool getIsBezierY2Present() const
		{
			return myIsBezierY2Present;
		}

/* Set IsAttributePresent Values ------------------------------------------------------ */

		/** Sets the value which indicates whether or not the 'bezier-offset' (aka
		    'BezierOffset') attribute is (or will be) present in the MusicXML document. **/
		void setIsBezierOffsetPresent( const bool& value_in )
		{
			myIsBezierOffsetPresent = value_in;
		}

		/** Sets the value which indicates whether or not the 'bezier-offset2'
		    (aka 'BezierOffset2') attribute is (or will be) present in the MusicXML
		    document. **/
		void setIsBezierOffset2Present( const bool& value_in )
		{
			myIsBezierOffset2Present = value_in;
		}

		/** Sets the value which indicates whether or not the 'bezier-x' (aka 'BezierX')
		    attribute is (or will be) present in the MusicXML document. **/
		void setIsBezierXPresent( const bool& value_in )
		{
			myIsBezierXPresent = value_in;
		}

		/** Sets the value which indicates whether or not the 'bezier-y' (aka 'BezierY')
		    attribute is (or will be) present in the MusicXML document. **/
		void setIsBezierYPresent( const bool& value_in )
		{
			myIsBezierYPresent = value_in;
		}

		/** Sets the value which indicates whether or not the 'bezier-x2' (aka
		    'BezierX2') attribute is (or will be) present in the MusicXML document. **/
		void setIsBezierX2Present( const bool& value_in )
		{
			myIsBezierX2Present = value_in;
		}

		/** Sets the value which indicates whether or not the 'bezier-y2' (aka
		    'BezierY2') attribute is (or will be) present in the MusicXML document. **/
		void setIsBezierY2Present( const bool& value_in )
		{
			myIsBezierY2Present = value_in;
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
			hidden::attributeStream( getIsBezierOffsetPresent(), "bezier-offset", getBezierOffset().toString(), os_out, isFirst );
			hidden::attributeStream( getIsBezierOffset2Present(), "bezier-offset2", getBezierOffset2().toString(), os_out, isFirst );
			hidden::attributeStream( getIsBezierXPresent(), "bezier-x", getBezierX().toString(), os_out, isFirst );
			hidden::attributeStream( getIsBezierYPresent(), "bezier-y", getBezierY().toString(), os_out, isFirst );
			hidden::attributeStream( getIsBezierX2Present(), "bezier-x2", getBezierX2().toString(), os_out, isFirst );
			hidden::attributeStream( getIsBezierY2Present(), "bezier-y2", getBezierY2().toString(), os_out, isFirst );
			return os_out;
		}

/* Get IsAttributeDefaultDefined Values ----------------------------------------------- */

		/** Indicates whether or not the 'bezier-offset' (aka 'BezierOffset') has
		    a default value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). **/
		bool getIsBezierOffsetDefaultDefined() const
		{
			return false;
		}

		/** Indicates whether or not the 'bezier-offset2' (aka 'BezierOffset2')
		    has a default value defined in the MusicXML xsd specification (either
		    explicitly or in the documentation). **/
		bool getIsBezierOffset2DefaultDefined() const
		{
			return false;
		}

		/** Indicates whether or not the 'bezier-x' (aka 'BezierX') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). **/
		bool getIsBezierXDefaultDefined() const
		{
			return false;
		}

		/** Indicates whether or not the 'bezier-y' (aka 'BezierY') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). **/
		bool getIsBezierYDefaultDefined() const
		{
			return false;
		}

		/** Indicates whether or not the 'bezier-x2' (aka 'BezierX2') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). **/
		bool getIsBezierX2DefaultDefined() const
		{
			return false;
		}

		/** Indicates whether or not the 'bezier-y2' (aka 'BezierY2') has a default
		    value defined in the MusicXML xsd specification (either explicitly
		    or in the documentation). **/
		bool getIsBezierY2DefaultDefined() const
		{
			return false;
		}

/* Get AttributeDefaultValue ---------------------------------------------------------- */

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'bezier-offset' (aka 'BezierOffset') attribute. **/
		MxNumberDivisions getBezierOffsetDefaultValue() const
		{
			return MxNumberDivisions(  );
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'bezier-offset2' (aka 'BezierOffset2') attribute. **/
		MxNumberDivisions getBezierOffset2DefaultValue() const
		{
			return MxNumberDivisions(  );
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'bezier-x' (aka 'BezierX') attribute. **/
		MxNumberTenths getBezierXDefaultValue() const
		{
			return MxNumberTenths(  );
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'bezier-y' (aka 'BezierY') attribute. **/
		MxNumberTenths getBezierYDefaultValue() const
		{
			return MxNumberTenths(  );
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'bezier-x2' (aka 'BezierX2') attribute. **/
		MxNumberTenths getBezierX2DefaultValue() const
		{
			return MxNumberTenths(  );
		}

		/** Returns the default value as defined by the MusicXML xsd document for
		    the 'bezier-y2' (aka 'BezierY2') attribute. **/
		MxNumberTenths getBezierY2DefaultValue() const
		{
			return MxNumberTenths(  );
		}

	}; // struct MxAttrGrpBezier::Impl

	const int MxAttrGrpBezier::Impl::myXsdID = 1785;
	const std::string MxAttrGrpBezier::Impl::myXmlTypeName = "bezier";
	const std::string MxAttrGrpBezier::Impl::myCppClassName = "MxAttrGrpBezier";
	const std::string MxAttrGrpBezier::Impl::myDocumentation = "The bezier attribute group is used to indicate the curvature of slurs and ties, representing the control points for a cubic bezier curve. For ties, the bezier attribute group is used with the tied element. Normal slurs, S-shaped slurs, and ties need only two bezier points: one associated with the start of the slur or tie, the other with the stop. Complex slurs and slurs divided over system breaks can specify additional bezier data at slur elements with a continue type. The bezier-offset, bezier-x, and bezier-y attributes describe the outgoing bezier point for slurs and ties with a start type, and the incoming bezier point for slurs and ties with types of stop or continue. The attributes bezier-offset2, bezier-x2, and bezier-y2 are only valid with slurs of type continue, and describe the outgoing bezier point. The bezier-offset and bezier-offset2 attributes are measured in terms of musical divisions, like the offset element. These are the recommended attributes for specifying horizontal position. The other attributes are specified in tenths, relative to any position settings associated with the slur or tied element.";

} // namespace lexicon


/* MxAttrGrpBezier -------------------------------------------------------------------- */

namespace lexicon
{

/* Constructor, Destructor, Copy, Assignment ------------------------------------------ */

	MxAttrGrpBezier::MxAttrGrpBezier()
	:myImpl( new Impl() ) {}

	MxAttrGrpBezier::~MxAttrGrpBezier() {}

	MxAttrGrpBezier::MxAttrGrpBezier( const MxAttrGrpBezier& other )
	:myImpl( new Impl( *(other.myImpl) ) ) {}

	MxAttrGrpBezier& MxAttrGrpBezier::operator=( const MxAttrGrpBezier& other )
	{
		this->myImpl = std::unique_ptr<Impl>( new Impl( *(other.myImpl) ) );
		return *this;
	}

/* Get Class Information -------------------------------------------------------------- */

	/** Returns the name of this xs:simpleType as found in the musicxml.xsd
	    document. **/
	std::string MxAttrGrpBezier::getXmlTypeName() const
	{
		return myImpl->getXmlTypeName();
	}

	/** Returns the name of this C++ class. **/
	std::string MxAttrGrpBezier::getClassName() const
	{
		return myImpl->getClassName();
	}

	/** Returns the documentation for this musicxml type as found in the musicxml.xsd
	    document. **/
	std::string MxAttrGrpBezier::getDocumentation() const
	{
		return myImpl->getDocumentation();
	}

/* Get Attribute Values --------------------------------------------------------------- */

	/** Returns the internal value of the 'bezier-offset' (aka 'BezierOffset')
	    attribute. **/
	MxNumberDivisions MxAttrGrpBezier::getBezierOffset() const
	{
		return myImpl->getBezierOffset();
	}

	/** Returns the internal value of the 'bezier-offset2' (aka 'BezierOffset2')
	    attribute. **/
	MxNumberDivisions MxAttrGrpBezier::getBezierOffset2() const
	{
		return myImpl->getBezierOffset2();
	}

	/** Returns the internal value of the 'bezier-x' (aka 'BezierX') attribute. **/
	MxNumberTenths MxAttrGrpBezier::getBezierX() const
	{
		return myImpl->getBezierX();
	}

	/** Returns the internal value of the 'bezier-y' (aka 'BezierY') attribute. **/
	MxNumberTenths MxAttrGrpBezier::getBezierY() const
	{
		return myImpl->getBezierY();
	}

	/** Returns the internal value of the 'bezier-x2' (aka 'BezierX2') attribute. **/
	MxNumberTenths MxAttrGrpBezier::getBezierX2() const
	{
		return myImpl->getBezierX2();
	}

	/** Returns the internal value of the 'bezier-y2' (aka 'BezierY2') attribute. **/
	MxNumberTenths MxAttrGrpBezier::getBezierY2() const
	{
		return myImpl->getBezierY2();
	}

/* Set Attribute Values --------------------------------------------------------------- */

	/** Sets the internal value of the 'bezier-offset' (aka 'BezierOffset')
	    attribute. **/
	void MxAttrGrpBezier::setBezierOffset( const MxNumberDivisions& value_in )
	{
		myImpl->setBezierOffset( value_in );
	}

	/** Sets the internal value of the 'bezier-offset2' (aka 'BezierOffset2')
	    attribute. **/
	void MxAttrGrpBezier::setBezierOffset2( const MxNumberDivisions& value_in )
	{
		myImpl->setBezierOffset2( value_in );
	}

	/** Sets the internal value of the 'bezier-x' (aka 'BezierX') attribute. **/
	void MxAttrGrpBezier::setBezierX( const MxNumberTenths& value_in )
	{
		myImpl->setBezierX( value_in );
	}

	/** Sets the internal value of the 'bezier-y' (aka 'BezierY') attribute. **/
	void MxAttrGrpBezier::setBezierY( const MxNumberTenths& value_in )
	{
		myImpl->setBezierY( value_in );
	}

	/** Sets the internal value of the 'bezier-x2' (aka 'BezierX2') attribute. **/
	void MxAttrGrpBezier::setBezierX2( const MxNumberTenths& value_in )
	{
		myImpl->setBezierX2( value_in );
	}

	/** Sets the internal value of the 'bezier-y2' (aka 'BezierY2') attribute. **/
	void MxAttrGrpBezier::setBezierY2( const MxNumberTenths& value_in )
	{
		myImpl->setBezierY2( value_in );
	}

/* Get IsAttributeRequired Values ----------------------------------------------------- */

	/** Indicates whether or not the 'bezier-offset' (aka 'BezierOffset') attribute
	    is required to be present in a MusicXML document. **/
	bool MxAttrGrpBezier::getIsBezierOffsetRequired() const
	{
		return myImpl->getIsBezierOffsetRequired();
	}

	/** Indicates whether or not the 'bezier-offset2' (aka 'BezierOffset2')
	    attribute is required to be present in a MusicXML document. **/
	bool MxAttrGrpBezier::getIsBezierOffset2Required() const
	{
		return myImpl->getIsBezierOffset2Required();
	}

	/** Indicates whether or not the 'bezier-x' (aka 'BezierX') attribute is
	    required to be present in a MusicXML document. **/
	bool MxAttrGrpBezier::getIsBezierXRequired() const
	{
		return myImpl->getIsBezierXRequired();
	}

	/** Indicates whether or not the 'bezier-y' (aka 'BezierY') attribute is
	    required to be present in a MusicXML document. **/
	bool MxAttrGrpBezier::getIsBezierYRequired() const
	{
		return myImpl->getIsBezierYRequired();
	}

	/** Indicates whether or not the 'bezier-x2' (aka 'BezierX2') attribute
	    is required to be present in a MusicXML document. **/
	bool MxAttrGrpBezier::getIsBezierX2Required() const
	{
		return myImpl->getIsBezierX2Required();
	}

	/** Indicates whether or not the 'bezier-y2' (aka 'BezierY2') attribute
	    is required to be present in a MusicXML document. **/
	bool MxAttrGrpBezier::getIsBezierY2Required() const
	{
		return myImpl->getIsBezierY2Required();
	}

/* Get IsAttributePresent Values ------------------------------------------------------ */

	/** Indicates whether or not the 'bezier-offset' (aka 'BezierOffset') attribute
	    is (or will be) present in the MusicXML document. **/
	bool MxAttrGrpBezier::getIsBezierOffsetPresent() const
	{
		return myImpl->getIsBezierOffsetPresent();
	}

	/** Indicates whether or not the 'bezier-offset2' (aka 'BezierOffset2')
	    attribute is (or will be) present in the MusicXML document. **/
	bool MxAttrGrpBezier::getIsBezierOffset2Present() const
	{
		return myImpl->getIsBezierOffset2Present();
	}

	/** Indicates whether or not the 'bezier-x' (aka 'BezierX') attribute is
	    (or will be) present in the MusicXML document. **/
	bool MxAttrGrpBezier::getIsBezierXPresent() const
	{
		return myImpl->getIsBezierXPresent();
	}

	/** Indicates whether or not the 'bezier-y' (aka 'BezierY') attribute is
	    (or will be) present in the MusicXML document. **/
	bool MxAttrGrpBezier::getIsBezierYPresent() const
	{
		return myImpl->getIsBezierYPresent();
	}

	/** Indicates whether or not the 'bezier-x2' (aka 'BezierX2') attribute
	    is (or will be) present in the MusicXML document. **/
	bool MxAttrGrpBezier::getIsBezierX2Present() const
	{
		return myImpl->getIsBezierX2Present();
	}

	/** Indicates whether or not the 'bezier-y2' (aka 'BezierY2') attribute
	    is (or will be) present in the MusicXML document. **/
	bool MxAttrGrpBezier::getIsBezierY2Present() const
	{
		return myImpl->getIsBezierY2Present();
	}

/* Set IsAttributePresent Values ------------------------------------------------------ */

	/** Sets the value which indicates whether or not the 'bezier-offset' (aka
	    'BezierOffset') attribute is (or will be) present in the MusicXML document. **/
	void MxAttrGrpBezier::setIsBezierOffsetPresent( const bool& value_in )
	{
		myImpl->setIsBezierOffsetPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'bezier-offset2'
	    (aka 'BezierOffset2') attribute is (or will be) present in the MusicXML
	    document. **/
	void MxAttrGrpBezier::setIsBezierOffset2Present( const bool& value_in )
	{
		myImpl->setIsBezierOffset2Present( value_in );
	}

	/** Sets the value which indicates whether or not the 'bezier-x' (aka 'BezierX')
	    attribute is (or will be) present in the MusicXML document. **/
	void MxAttrGrpBezier::setIsBezierXPresent( const bool& value_in )
	{
		myImpl->setIsBezierXPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'bezier-y' (aka 'BezierY')
	    attribute is (or will be) present in the MusicXML document. **/
	void MxAttrGrpBezier::setIsBezierYPresent( const bool& value_in )
	{
		myImpl->setIsBezierYPresent( value_in );
	}

	/** Sets the value which indicates whether or not the 'bezier-x2' (aka
	    'BezierX2') attribute is (or will be) present in the MusicXML document. **/
	void MxAttrGrpBezier::setIsBezierX2Present( const bool& value_in )
	{
		myImpl->setIsBezierX2Present( value_in );
	}

	/** Sets the value which indicates whether or not the 'bezier-y2' (aka
	    'BezierY2') attribute is (or will be) present in the MusicXML document. **/
	void MxAttrGrpBezier::setIsBezierY2Present( const bool& value_in )
	{
		myImpl->setIsBezierY2Present( value_in );
	}

/* Stringing and Streaming ------------------------------------------------------------ */

	/** Returns the attributeGroup's value as a string where each attribute
	    is represented, if present, in the form attribute="vale". **/
	std::string MxAttrGrpBezier::toString() const
	{
		return myImpl->toString();
	}

	/** Returns the attributeGroup's value as a string where each attribute
	    is represented, if present, in the form attribute="vale". **/
	std::ostream& MxAttrGrpBezier::stream( std::ostream& os_out ) const
	{
		return myImpl->stream( os_out );
	}

/* Get IsAttributeDefaultDefined Values ----------------------------------------------- */

	/** Indicates whether or not the 'bezier-offset' (aka 'BezierOffset') has
	    a default value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). **/
	bool MxAttrGrpBezier::getIsBezierOffsetDefaultDefined() const
	{
		return myImpl->getIsBezierOffsetDefaultDefined();
	}

	/** Indicates whether or not the 'bezier-offset2' (aka 'BezierOffset2')
	    has a default value defined in the MusicXML xsd specification (either
	    explicitly or in the documentation). **/
	bool MxAttrGrpBezier::getIsBezierOffset2DefaultDefined() const
	{
		return myImpl->getIsBezierOffset2DefaultDefined();
	}

	/** Indicates whether or not the 'bezier-x' (aka 'BezierX') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). **/
	bool MxAttrGrpBezier::getIsBezierXDefaultDefined() const
	{
		return myImpl->getIsBezierXDefaultDefined();
	}

	/** Indicates whether or not the 'bezier-y' (aka 'BezierY') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). **/
	bool MxAttrGrpBezier::getIsBezierYDefaultDefined() const
	{
		return myImpl->getIsBezierYDefaultDefined();
	}

	/** Indicates whether or not the 'bezier-x2' (aka 'BezierX2') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). **/
	bool MxAttrGrpBezier::getIsBezierX2DefaultDefined() const
	{
		return myImpl->getIsBezierX2DefaultDefined();
	}

	/** Indicates whether or not the 'bezier-y2' (aka 'BezierY2') has a default
	    value defined in the MusicXML xsd specification (either explicitly
	    or in the documentation). **/
	bool MxAttrGrpBezier::getIsBezierY2DefaultDefined() const
	{
		return myImpl->getIsBezierY2DefaultDefined();
	}

/* Get AttributeDefaultValue ---------------------------------------------------------- */

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'bezier-offset' (aka 'BezierOffset') attribute. **/
	MxNumberDivisions MxAttrGrpBezier::getBezierOffsetDefaultValue() const
	{
		return myImpl->getBezierOffsetDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'bezier-offset2' (aka 'BezierOffset2') attribute. **/
	MxNumberDivisions MxAttrGrpBezier::getBezierOffset2DefaultValue() const
	{
		return myImpl->getBezierOffset2DefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'bezier-x' (aka 'BezierX') attribute. **/
	MxNumberTenths MxAttrGrpBezier::getBezierXDefaultValue() const
	{
		return myImpl->getBezierXDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'bezier-y' (aka 'BezierY') attribute. **/
	MxNumberTenths MxAttrGrpBezier::getBezierYDefaultValue() const
	{
		return myImpl->getBezierYDefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'bezier-x2' (aka 'BezierX2') attribute. **/
	MxNumberTenths MxAttrGrpBezier::getBezierX2DefaultValue() const
	{
		return myImpl->getBezierX2DefaultValue();
	}

	/** Returns the default value as defined by the MusicXML xsd document for
	    the 'bezier-y2' (aka 'BezierY2') attribute. **/
	MxNumberTenths MxAttrGrpBezier::getBezierY2DefaultValue() const
	{
		return myImpl->getBezierY2DefaultValue();
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

