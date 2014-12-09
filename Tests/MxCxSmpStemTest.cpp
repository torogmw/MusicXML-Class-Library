/** *******************************************************
  * 
  * MxCxSmpStemTest.cpp
  * Created: 2014-12-02 17:31:54
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxCxSmpStem.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxCxSmpStem )
{
	MxCxSmpStem object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxCxSmpStem )
{
	MxCxSmpStem object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues1, MxCxSmpStem )
{
	MxCxSmpStem object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues2, MxCxSmpStem )
{
	MxCxSmpStem object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues3, MxCxSmpStem )
{
	MxCxSmpStem object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues4, MxCxSmpStem )
{
	MxCxSmpStem object;
	std::string expected = ( MxColor(  ) ).toString();
	std::string actual = object.getColor().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValueAndElementName0, MxCxSmpStem )
{
	MxCxSmpStem object( "booksmart", MxEnumStemValue( lexicon::enums::StemValue::down ) );
	std::string expected;
	std::string actual;
	expected = "booksmart";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "down";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumStemValue( lexicon::enums::StemValue::up ) );
	expected = "up";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName2, MxCxSmpStem )
{
	MxCxSmpStem object( "musicxmlishard", MxEnumStemValue( lexicon::enums::StemValue::double_ ) );
	std::string expected;
	std::string actual;
	expected = "musicxmlishard";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "double";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumStemValue( lexicon::enums::StemValue::none ) );
	expected = "none";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName4, MxCxSmpStem )
{
	MxCxSmpStem object( "charlie", MxEnumStemValue( lexicon::enums::StemValue::down ) );
	std::string expected;
	std::string actual;
	expected = "charlie";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "down";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumStemValue( lexicon::enums::StemValue::up ) );
	expected = "up";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName6, MxCxSmpStem )
{
	MxCxSmpStem object( "quiet", MxEnumStemValue( lexicon::enums::StemValue::double_ ) );
	std::string expected;
	std::string actual;
	expected = "quiet";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "double";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumStemValue( lexicon::enums::StemValue::none ) );
	expected = "none";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName8, MxCxSmpStem )
{
	MxCxSmpStem object( "bishop", MxEnumStemValue( lexicon::enums::StemValue::down ) );
	std::string expected;
	std::string actual;
	expected = "bishop";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
	expected = "down";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
	object.setValue( MxEnumStemValue( lexicon::enums::StemValue::up ) );
	expected = "up";
	actual = object.getValue().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Ctor tests with values  --------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxCxSmpStem )
{
	MxCxSmpStem object;
	std::string expected = "MxCxSmpStem";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxCxSmpStem )
{
	MxCxSmpStem object;
	std::string expected = "stem";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxCxSmpStem )
{
	MxCxSmpStem object;
	std::string expected = "Stems can be down, up, none, or double. For down and up stems, the position attributes can be used to specify stem length. The relative values specify the end of the stem relative to the program default. Default values specify an absolute end stem position. Negative values of relative-y that would flip a stem instead of shortening it are ignored. A stem element associated with a rest refers to a stemlet.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setDefaultX0, MxCxSmpStem )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpStem object;
	object.setDefaultX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
	object.setDefaultX( value2 );
	expected = value2;
	actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultY1, MxCxSmpStem )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpStem object;
	object.setDefaultY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
	object.setDefaultY( value2 );
	expected = value2;
	actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeX2, MxCxSmpStem )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpStem object;
	object.setRelativeX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
	object.setRelativeX( value2 );
	expected = value2;
	actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeY3, MxCxSmpStem )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpStem object;
	object.setRelativeY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
	object.setRelativeY( value2 );
	expected = value2;
	actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
}
TEST( setColor4, MxCxSmpStem )
{
	MxColor value1( "#12131415" );
	MxColor value2( 155, 34, 145, 192 );
	CHECK( ( value1 != value2 ) )
	MxCxSmpStem object;
	object.setColor( value1 );
	MxColor expected = value1;
	MxColor actual = object.getColor();
	CHECK_EQUAL( expected, actual )
	object.setColor( value2 );
	expected = value2;
	actual = object.getColor();
	CHECK_EQUAL( expected, actual )
}

/* End: SetValue Functions -------------------------------------------------- */


/* Get IsAttributeRequired -------------------------------------------------- */

TEST( getIsDefaultXRequired0, MxCxSmpStem )
{
	MxCxSmpStem object;
	bool expected = false;
	bool actual = object.getIsDefaultXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYRequired1, MxCxSmpStem )
{
	MxCxSmpStem object;
	bool expected = false;
	bool actual = object.getIsDefaultYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXRequired2, MxCxSmpStem )
{
	MxCxSmpStem object;
	bool expected = false;
	bool actual = object.getIsRelativeXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYRequired3, MxCxSmpStem )
{
	MxCxSmpStem object;
	bool expected = false;
	bool actual = object.getIsRelativeYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorRequired4, MxCxSmpStem )
{
	MxCxSmpStem object;
	bool expected = false;
	bool actual = object.getIsColorRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsDefaultXPresent0, MxCxSmpStem )
{
	MxCxSmpStem object;
	bool expected = false;
	bool actual = object.getIsDefaultXPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsDefaultXPresent( true );
	expected = true;
	actual = object.getIsDefaultXPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsDefaultXPresent( false );
	expected = false;
	actual = object.getIsDefaultXPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYPresent1, MxCxSmpStem )
{
	MxCxSmpStem object;
	bool expected = false;
	bool actual = object.getIsDefaultYPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsDefaultYPresent( true );
	expected = true;
	actual = object.getIsDefaultYPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsDefaultYPresent( false );
	expected = false;
	actual = object.getIsDefaultYPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXPresent2, MxCxSmpStem )
{
	MxCxSmpStem object;
	bool expected = false;
	bool actual = object.getIsRelativeXPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsRelativeXPresent( true );
	expected = true;
	actual = object.getIsRelativeXPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsRelativeXPresent( false );
	expected = false;
	actual = object.getIsRelativeXPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYPresent3, MxCxSmpStem )
{
	MxCxSmpStem object;
	bool expected = false;
	bool actual = object.getIsRelativeYPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsRelativeYPresent( true );
	expected = true;
	actual = object.getIsRelativeYPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsRelativeYPresent( false );
	expected = false;
	actual = object.getIsRelativeYPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorPresent4, MxCxSmpStem )
{
	MxCxSmpStem object;
	bool expected = false;
	bool actual = object.getIsColorPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsColorPresent( true );
	expected = true;
	actual = object.getIsColorPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsColorPresent( false );
	expected = false;
	actual = object.getIsColorPresent();
	CHECK_EQUAL( expected, actual )
}

/* End: IsAttributePresent -------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxCxSmpStem )
{
	MxCxSmpStem object( "booksmart", MxEnumStemValue( lexicon::enums::StemValue::double_ ) );
	std::string expected;
	std::string actual;
	object.setDefaultX( MxNumberTenths( 1.1 ) );
	object.setDefaultY( MxNumberTenths( 1.1 ) );
	object.setRelativeX( MxNumberTenths( 1.1 ) );
	object.setRelativeY( MxNumberTenths( 1.1 ) );
	object.setColor( MxColor( "#3C3B3A" ) );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	expected = "<booksmart default-x=\"1.1\" default-y=\"1.1\" relative-x=\"1.1\" relative-y=\"1.1\" color=\"#3C3B3A\">double</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxCxSmpStem )
{
	MxCxSmpStem object( "quiet", MxEnumStemValue( lexicon::enums::StemValue::double_ ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setDefaultX( MxNumberTenths( 1.2 ) );
	object.setDefaultY( MxNumberTenths( 1.2 ) );
	object.setRelativeX( MxNumberTenths( 1.2 ) );
	object.setRelativeY( MxNumberTenths( 1.2 ) );
	object.setColor( MxColor( "#3D3E3D3C" ) );
	expected = "<quiet default-y=\"1.2\" relative-x=\"1.2\" relative-y=\"1.2\" color=\"#3D3E3D3C\">double</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString2, MxCxSmpStem )
{
	MxCxSmpStem object( "musicxmlishard", MxEnumStemValue( lexicon::enums::StemValue::double_ ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setDefaultX( MxNumberTenths( 1.3 ) );
	object.setDefaultY( MxNumberTenths( 1.3 ) );
	object.setRelativeX( MxNumberTenths( 1.3 ) );
	object.setRelativeY( MxNumberTenths( 1.3 ) );
	object.setColor( MxColor( "#403F3E" ) );
	expected = "<musicxmlishard default-x=\"1.3\" relative-x=\"1.3\" relative-y=\"1.3\" color=\"#403F3E\">double</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString3, MxCxSmpStem )
{
	MxCxSmpStem object( "bishop", MxEnumStemValue( lexicon::enums::StemValue::double_ ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setDefaultX( MxNumberTenths( 1.4 ) );
	object.setDefaultY( MxNumberTenths( 1.4 ) );
	object.setRelativeX( MxNumberTenths( 1.4 ) );
	object.setRelativeY( MxNumberTenths( 1.4 ) );
	object.setColor( MxColor( "#41424140" ) );
	expected = "<bishop relative-y=\"1.4\" color=\"#41424140\">double</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString4, MxCxSmpStem )
{
	MxCxSmpStem object( "charlie", MxEnumStemValue( lexicon::enums::StemValue::double_ ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setDefaultX( MxNumberTenths( 1.5 ) );
	object.setDefaultY( MxNumberTenths( 1.5 ) );
	object.setRelativeX( MxNumberTenths( 1.5 ) );
	object.setRelativeY( MxNumberTenths( 1.5 ) );
	object.setColor( MxColor( "#444342" ) );
	expected = "<charlie default-x=\"1.5\" default-y=\"1.5\" color=\"#444342\">double</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString5, MxCxSmpStem )
{
	MxCxSmpStem object( "booksmart", MxEnumStemValue( lexicon::enums::StemValue::double_ ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setDefaultX( MxNumberTenths( 1.6 ) );
	object.setDefaultY( MxNumberTenths( 1.6 ) );
	object.setRelativeX( MxNumberTenths( 1.6 ) );
	object.setRelativeY( MxNumberTenths( 1.6 ) );
	object.setColor( MxColor( "#45464544" ) );
	expected = "<booksmart default-y=\"1.6\">double</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString6, MxCxSmpStem )
{
	MxCxSmpStem object( "quiet", MxEnumStemValue( lexicon::enums::StemValue::double_ ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setDefaultX( MxNumberTenths( 1.7 ) );
	object.setDefaultY( MxNumberTenths( 1.7 ) );
	object.setRelativeX( MxNumberTenths( 1.7 ) );
	object.setRelativeY( MxNumberTenths( 1.7 ) );
	object.setColor( MxColor( "#484746" ) );
	expected = "<quiet default-x=\"1.7\" relative-x=\"1.7\">double</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString7, MxCxSmpStem )
{
	MxCxSmpStem object( "musicxmlishard", MxEnumStemValue( lexicon::enums::StemValue::double_ ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setDefaultX( MxNumberTenths( 1.8 ) );
	object.setDefaultY( MxNumberTenths( 1.8 ) );
	object.setRelativeX( MxNumberTenths( 1.8 ) );
	object.setRelativeY( MxNumberTenths( 1.8 ) );
	object.setColor( MxColor( "#494A4948" ) );
	expected = "<musicxmlishard relative-x=\"1.8\">double</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString8, MxCxSmpStem )
{
	MxCxSmpStem object( "bishop", MxEnumStemValue( lexicon::enums::StemValue::double_ ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setDefaultX( MxNumberTenths( 1.9 ) );
	object.setDefaultY( MxNumberTenths( 1.9 ) );
	object.setRelativeX( MxNumberTenths( 1.9 ) );
	object.setRelativeY( MxNumberTenths( 1.9 ) );
	object.setColor( MxColor( "#4C4B4A" ) );
	expected = "<bishop default-x=\"1.9\" default-y=\"1.9\" relative-x=\"1.9\" relative-y=\"1.9\">double</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString9, MxCxSmpStem )
{
	MxCxSmpStem object( "charlie", MxEnumStemValue( lexicon::enums::StemValue::double_ ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setDefaultX( MxNumberTenths( 2 ) );
	object.setDefaultY( MxNumberTenths( 2 ) );
	object.setRelativeX( MxNumberTenths( 2 ) );
	object.setRelativeY( MxNumberTenths( 2 ) );
	object.setColor( MxColor( "#4D4E4D4C" ) );
	expected = "<charlie default-y=\"2\" relative-y=\"2\">double</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString10, MxCxSmpStem )
{
	MxCxSmpStem object( "booksmart", MxEnumStemValue( lexicon::enums::StemValue::double_ ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setDefaultX( MxNumberTenths( 2.1 ) );
	object.setDefaultY( MxNumberTenths( 2.1 ) );
	object.setRelativeX( MxNumberTenths( 2.1 ) );
	object.setRelativeY( MxNumberTenths( 2.1 ) );
	object.setColor( MxColor( "#504F4E" ) );
	expected = "<booksmart default-x=\"2.1\" relative-y=\"2.1\" color=\"#504F4E\">double</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString11, MxCxSmpStem )
{
	MxCxSmpStem object( "quiet", MxEnumStemValue( lexicon::enums::StemValue::double_ ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setDefaultX( MxNumberTenths( 2.2 ) );
	object.setDefaultY( MxNumberTenths( 2.2 ) );
	object.setRelativeX( MxNumberTenths( 2.2 ) );
	object.setRelativeY( MxNumberTenths( 2.2 ) );
	object.setColor( MxColor( "#51525150" ) );
	expected = "<quiet relative-y=\"2.2\" color=\"#51525150\">double</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString12, MxCxSmpStem )
{
	MxCxSmpStem object( "musicxmlishard", MxEnumStemValue( lexicon::enums::StemValue::double_ ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setDefaultX( MxNumberTenths( 2.3 ) );
	object.setDefaultY( MxNumberTenths( 2.3 ) );
	object.setRelativeX( MxNumberTenths( 2.3 ) );
	object.setRelativeY( MxNumberTenths( 2.3 ) );
	object.setColor( MxColor( "#545352" ) );
	expected = "<musicxmlishard default-x=\"2.3\" default-y=\"2.3\" relative-x=\"2.3\" color=\"#545352\">double</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString13, MxCxSmpStem )
{
	MxCxSmpStem object( "bishop", MxEnumStemValue( lexicon::enums::StemValue::double_ ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setDefaultX( MxNumberTenths( 2.4 ) );
	object.setDefaultY( MxNumberTenths( 2.4 ) );
	object.setRelativeX( MxNumberTenths( 2.4 ) );
	object.setRelativeY( MxNumberTenths( 2.4 ) );
	object.setColor( MxColor( "#55565554" ) );
	expected = "<bishop default-y=\"2.4\" relative-x=\"2.4\" color=\"#55565554\">double</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString14, MxCxSmpStem )
{
	MxCxSmpStem object( "charlie", MxEnumStemValue( lexicon::enums::StemValue::double_ ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setDefaultX( MxNumberTenths( 2.5 ) );
	object.setDefaultY( MxNumberTenths( 2.5 ) );
	object.setRelativeX( MxNumberTenths( 2.5 ) );
	object.setRelativeY( MxNumberTenths( 2.5 ) );
	object.setColor( MxColor( "#585756" ) );
	expected = "<charlie default-x=\"2.5\" relative-x=\"2.5\" color=\"#585756\">double</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString15, MxCxSmpStem )
{
	MxCxSmpStem object( "booksmart", MxEnumStemValue( lexicon::enums::StemValue::double_ ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setDefaultX( MxNumberTenths( 2.6 ) );
	object.setDefaultY( MxNumberTenths( 2.6 ) );
	object.setRelativeX( MxNumberTenths( 2.6 ) );
	object.setRelativeY( MxNumberTenths( 2.6 ) );
	object.setColor( MxColor( "#595A5958" ) );
	expected = "<booksmart>double</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString16, MxCxSmpStem )
{
	MxCxSmpStem object( "quiet", MxEnumStemValue( lexicon::enums::StemValue::double_ ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setDefaultX( MxNumberTenths( 2.7 ) );
	object.setDefaultY( MxNumberTenths( 2.7 ) );
	object.setRelativeX( MxNumberTenths( 2.7 ) );
	object.setRelativeY( MxNumberTenths( 2.7 ) );
	object.setColor( MxColor( "#5C5B5A" ) );
	expected = "<quiet default-x=\"2.7\" default-y=\"2.7\" relative-y=\"2.7\">double</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString17, MxCxSmpStem )
{
	MxCxSmpStem object( "musicxmlishard", MxEnumStemValue( lexicon::enums::StemValue::double_ ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setDefaultX( MxNumberTenths( 2.8 ) );
	object.setDefaultY( MxNumberTenths( 2.8 ) );
	object.setRelativeX( MxNumberTenths( 2.8 ) );
	object.setRelativeY( MxNumberTenths( 2.8 ) );
	object.setColor( MxColor( "#5D5E5D5C" ) );
	expected = "<musicxmlishard default-y=\"2.8\" relative-y=\"2.8\">double</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString18, MxCxSmpStem )
{
	MxCxSmpStem object( "bishop", MxEnumStemValue( lexicon::enums::StemValue::double_ ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setDefaultX( MxNumberTenths( 2.9 ) );
	object.setDefaultY( MxNumberTenths( 2.9 ) );
	object.setRelativeX( MxNumberTenths( 2.9 ) );
	object.setRelativeY( MxNumberTenths( 2.9 ) );
	object.setColor( MxColor( "#605F5E" ) );
	expected = "<bishop default-x=\"2.9\" relative-x=\"2.9\" relative-y=\"2.9\">double</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString19, MxCxSmpStem )
{
	MxCxSmpStem object( "charlie", MxEnumStemValue( lexicon::enums::StemValue::double_ ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setDefaultX( MxNumberTenths( 3 ) );
	object.setDefaultY( MxNumberTenths( 3 ) );
	object.setRelativeX( MxNumberTenths( 3 ) );
	object.setRelativeY( MxNumberTenths( 3 ) );
	object.setColor( MxColor( "#61626160" ) );
	expected = "<charlie relative-x=\"3\" relative-y=\"3\">double</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString20, MxCxSmpStem )
{
	MxCxSmpStem object( "booksmart", MxEnumStemValue( lexicon::enums::StemValue::double_ ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setDefaultX( MxNumberTenths( 3.1 ) );
	object.setDefaultY( MxNumberTenths( 3.1 ) );
	object.setRelativeX( MxNumberTenths( 3.1 ) );
	object.setRelativeY( MxNumberTenths( 3.1 ) );
	object.setColor( MxColor( "#646362" ) );
	expected = "<booksmart default-x=\"3.1\" default-y=\"3.1\" relative-x=\"3.1\" color=\"#646362\">double</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString21, MxCxSmpStem )
{
	MxCxSmpStem object( "quiet", MxEnumStemValue( lexicon::enums::StemValue::double_ ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setDefaultX( MxNumberTenths( 3.2 ) );
	object.setDefaultY( MxNumberTenths( 3.2 ) );
	object.setRelativeX( MxNumberTenths( 3.2 ) );
	object.setRelativeY( MxNumberTenths( 3.2 ) );
	object.setColor( MxColor( "#65666564" ) );
	expected = "<quiet default-y=\"3.2\" color=\"#65666564\">double</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString22, MxCxSmpStem )
{
	MxCxSmpStem object( "musicxmlishard", MxEnumStemValue( lexicon::enums::StemValue::double_ ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setDefaultX( MxNumberTenths( 3.3 ) );
	object.setDefaultY( MxNumberTenths( 3.3 ) );
	object.setRelativeX( MxNumberTenths( 3.3 ) );
	object.setRelativeY( MxNumberTenths( 3.3 ) );
	object.setColor( MxColor( "#686766" ) );
	expected = "<musicxmlishard default-x=\"3.3\" color=\"#686766\">double</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString23, MxCxSmpStem )
{
	MxCxSmpStem object( "bishop", MxEnumStemValue( lexicon::enums::StemValue::double_ ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setDefaultX( MxNumberTenths( 3.4 ) );
	object.setDefaultY( MxNumberTenths( 3.4 ) );
	object.setRelativeX( MxNumberTenths( 3.4 ) );
	object.setRelativeY( MxNumberTenths( 3.4 ) );
	object.setColor( MxColor( "#696A6968" ) );
	expected = "<bishop color=\"#696A6968\">double</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString24, MxCxSmpStem )
{
	MxCxSmpStem object( "charlie", MxEnumStemValue( lexicon::enums::StemValue::double_ ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setDefaultX( MxNumberTenths( 3.5 ) );
	object.setDefaultY( MxNumberTenths( 3.5 ) );
	object.setRelativeX( MxNumberTenths( 3.5 ) );
	object.setRelativeY( MxNumberTenths( 3.5 ) );
	object.setColor( MxColor( "#6C6B6A" ) );
	expected = "<charlie default-y=\"3.5\" relative-x=\"3.5\" relative-y=\"3.5\">double</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString25, MxCxSmpStem )
{
	MxCxSmpStem object( "booksmart", MxEnumStemValue( lexicon::enums::StemValue::double_ ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setDefaultX( MxNumberTenths( 3.6 ) );
	object.setDefaultY( MxNumberTenths( 3.6 ) );
	object.setRelativeX( MxNumberTenths( 3.6 ) );
	object.setRelativeY( MxNumberTenths( 3.6 ) );
	object.setColor( MxColor( "#6D6E6D6C" ) );
	expected = "<booksmart default-x=\"3.6\" relative-x=\"3.6\" relative-y=\"3.6\">double</booksmart>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString26, MxCxSmpStem )
{
	MxCxSmpStem object( "quiet", MxEnumStemValue( lexicon::enums::StemValue::double_ ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setDefaultX( MxNumberTenths( 3.7 ) );
	object.setDefaultY( MxNumberTenths( 3.7 ) );
	object.setRelativeX( MxNumberTenths( 3.7 ) );
	object.setRelativeY( MxNumberTenths( 3.7 ) );
	object.setColor( MxColor( "#706F6E" ) );
	expected = "<quiet relative-y=\"3.7\">double</quiet>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString27, MxCxSmpStem )
{
	MxCxSmpStem object( "musicxmlishard", MxEnumStemValue( lexicon::enums::StemValue::double_ ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setDefaultX( MxNumberTenths( 3.8 ) );
	object.setDefaultY( MxNumberTenths( 3.8 ) );
	object.setRelativeX( MxNumberTenths( 3.8 ) );
	object.setRelativeY( MxNumberTenths( 3.8 ) );
	object.setColor( MxColor( "#71727170" ) );
	expected = "<musicxmlishard default-x=\"3.8\" default-y=\"3.8\">double</musicxmlishard>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString28, MxCxSmpStem )
{
	MxCxSmpStem object( "bishop", MxEnumStemValue( lexicon::enums::StemValue::double_ ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setDefaultX( MxNumberTenths( 3.9 ) );
	object.setDefaultY( MxNumberTenths( 3.9 ) );
	object.setRelativeX( MxNumberTenths( 3.9 ) );
	object.setRelativeY( MxNumberTenths( 3.9 ) );
	object.setColor( MxColor( "#747372" ) );
	expected = "<bishop default-y=\"3.9\">double</bishop>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString29, MxCxSmpStem )
{
	MxCxSmpStem object( "charlie", MxEnumStemValue( lexicon::enums::StemValue::double_ ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setDefaultX( MxNumberTenths( 4 ) );
	object.setDefaultY( MxNumberTenths( 4 ) );
	object.setRelativeX( MxNumberTenths( 4 ) );
	object.setRelativeY( MxNumberTenths( 4 ) );
	object.setColor( MxColor( "#75767574" ) );
	expected = "<charlie default-x=\"4\" relative-x=\"4\" color=\"#75767574\">double</charlie>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString30, MxCxSmpStem )
{
	MxCxSmpStem object( "booksmart", MxEnumStemValue( lexicon::enums::StemValue::double_ ) );
	std::string expected;
	std::string actual;
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setDefaultX( MxNumberTenths( 4.1 ) );
	object.setDefaultY( MxNumberTenths( 4.1 ) );
	object.setRelativeX( MxNumberTenths( 4.1 ) );
	object.setRelativeY( MxNumberTenths( 4.1 ) );
	object.setColor( MxColor( "#787776" ) );
	expected = "<booksmart relative-x=\"4.1\" color=\"#787776\">double</booksmart>";
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

TEST( getIsDefaultXDefaultDefined, MxCxSmpStem )
{
	MxCxSmpStem object;
	bool expected = false;
	bool actual = object.getIsDefaultXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYDefaultDefined, MxCxSmpStem )
{
	MxCxSmpStem object;
	bool expected = false;
	bool actual = object.getIsDefaultYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXDefaultDefined, MxCxSmpStem )
{
	MxCxSmpStem object;
	bool expected = false;
	bool actual = object.getIsRelativeXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYDefaultDefined, MxCxSmpStem )
{
	MxCxSmpStem object;
	bool expected = false;
	bool actual = object.getIsRelativeYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorDefaultDefined, MxCxSmpStem )
{
	MxCxSmpStem object;
	bool expected = false;
	bool actual = object.getIsColorDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getDefaultXDefaultValue, MxCxSmpStem )
{
	MxCxSmpStem object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultYDefaultValue, MxCxSmpStem )
{
	MxCxSmpStem object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeXDefaultValue, MxCxSmpStem )
{
	MxCxSmpStem object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeYDefaultValue, MxCxSmpStem )
{
	MxCxSmpStem object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getColorDefaultValue, MxCxSmpStem )
{
	MxCxSmpStem object;
	MxColor expected;
	MxColor actual = object.getColorDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


