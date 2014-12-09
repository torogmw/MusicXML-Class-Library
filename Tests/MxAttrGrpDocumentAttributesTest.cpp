/** *******************************************************
  * 
  * MxAttrGrpDocumentAttributesTest.cpp
  * Created: 2014-11-28 19:17:14
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxAttrGrpDocumentAttributes.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxAttrGrpDocumentAttributes )
{
	MxAttrGrpDocumentAttributes object;
	CHECK( true )
}
TEST( ctorValues0, MxAttrGrpDocumentAttributes )
{
	MxAttrGrpDocumentAttributes object;
	std::string expected = ( XsToken( "1.0" ) ).toString();
	std::string actual = object.getVersion().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxAttrGrpDocumentAttributes )
{
	MxAttrGrpDocumentAttributes object;
	std::string expected = "MxAttrGrpDocumentAttributes";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxAttrGrpDocumentAttributes )
{
	MxAttrGrpDocumentAttributes object;
	std::string expected = "document-attributes";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxAttrGrpDocumentAttributes )
{
	MxAttrGrpDocumentAttributes object;
	std::string expected = "The document-attributes attribute group is used to specify the attributes for an entire MusicXML document. Currently this is used for the version attribute. The version attribute was added in Version 1.1 for the score-partwise and score-timewise documents. It provides an easier way to get version information than through the MusicXML public ID. The default value is 1.0 to make it possible for programs that handle later versions to distinguish earlier version files reliably. Programs that write MusicXML 1.1 or later files should set this attribute.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setVersion0, MxAttrGrpDocumentAttributes )
{
	XsToken value1( "ABC" );
	XsToken value2( "XYZ" );
	CHECK( ( value1 != value2 ) )
	MxAttrGrpDocumentAttributes object;
	object.setVersion( value1 );
	XsToken expected = value1;
	XsToken actual = object.getVersion();
	CHECK_EQUAL( expected, actual )
	object.setVersion( value2 );
	expected = value2;
	actual = object.getVersion();
	CHECK_EQUAL( expected, actual )
}

/* End: SetValue Functions -------------------------------------------------- */


/* Get IsAttributeRequired -------------------------------------------------- */

TEST( getIsVersionRequired0, MxAttrGrpDocumentAttributes )
{
	MxAttrGrpDocumentAttributes object;
	bool expected = false;
	bool actual = object.getIsVersionRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsVersionPresent0, MxAttrGrpDocumentAttributes )
{
	MxAttrGrpDocumentAttributes object;
	bool expected = false;
	bool actual = object.getIsVersionPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsVersionPresent( true );
	expected = true;
	actual = object.getIsVersionPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsVersionPresent( false );
	expected = false;
	actual = object.getIsVersionPresent();
	CHECK_EQUAL( expected, actual )
}

/* End: IsAttributePresent -------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxAttrGrpDocumentAttributes )
{
	MxAttrGrpDocumentAttributes object;
	std::string expected;
	std::string actual;
	object.setVersion( XsToken( "ABC" ) );
	object.setIsVersionPresent( true );
	expected = "version=\"ABC\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxAttrGrpDocumentAttributes )
{
	MxAttrGrpDocumentAttributes object;
	std::string expected;
	std::string actual;
	object.setIsVersionPresent( false );
	object.setVersion( XsToken( "DEF" ) );
	expected = "";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}

/* End: toString ------------------------------------------------------------ */


/* Is Default Defined ------------------------------------------------------- */

TEST( getIsVersionDefaultDefined, MxAttrGrpDocumentAttributes )
{
	MxAttrGrpDocumentAttributes object;
	bool expected = true;
	bool actual = object.getIsVersionDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getVersionDefaultValue, MxAttrGrpDocumentAttributes )
{
	MxAttrGrpDocumentAttributes object;
	XsToken expected( "1.0" );
	XsToken actual = object.getVersionDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


