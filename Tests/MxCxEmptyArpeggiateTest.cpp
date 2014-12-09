/** *******************************************************
  * 
  * MxCxEmptyArpeggiateTest.cpp
  * Created: 2014-12-03 16:31:30
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxCxEmptyArpeggiate.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object;
	std::string expected = ( MxNumberNumberLevel(  ) ).toString();
	std::string actual = object.getNumber().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues1, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object;
	std::string expected = ( MxEnumUpDown(  ) ).toString();
	std::string actual = object.getDirection().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues2, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues3, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues4, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues5, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues6, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object;
	std::string expected = ( MxEnumAboveBelow(  ) ).toString();
	std::string actual = object.getPlacement().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues7, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object;
	std::string expected = ( MxColor(  ) ).toString();
	std::string actual = object.getColor().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValueAndElementName0, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object( "booksmart" );
	std::string expected;
	std::string actual;
	expected = "booksmart";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName2, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	expected = "musicxmlishard";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName4, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object( "charlie" );
	std::string expected;
	std::string actual;
	expected = "charlie";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName6, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object( "quiet" );
	std::string expected;
	std::string actual;
	expected = "quiet";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName8, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object( "bishop" );
	std::string expected;
	std::string actual;
	expected = "bishop";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}

/* End: Ctor tests with values  --------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object;
	std::string expected = "MxCxEmptyArpeggiate";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object;
	std::string expected = "arpeggiate";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object;
	std::string expected = "The arpeggiate type indicates that this note is part of an arpeggiated chord. The number attribute can be used to distinguish between two simultaneous chords arpeggiated separately (different numbers) or together (same number). The up-down attribute is used if there is an arrow on the arpeggio sign. By default, arpeggios go from the lowest to highest note.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setNumber0, MxCxEmptyArpeggiate )
{
	MxNumberNumberLevel value1( 1 );
	MxNumberNumberLevel value2( 2 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyArpeggiate object;
	object.setNumber( value1 );
	MxNumberNumberLevel expected = value1;
	MxNumberNumberLevel actual = object.getNumber();
	CHECK_EQUAL( expected, actual )
	object.setNumber( value2 );
	expected = value2;
	actual = object.getNumber();
	CHECK_EQUAL( expected, actual )
}
TEST( setDirection1, MxCxEmptyArpeggiate )
{
	MxEnumUpDown value1( lexicon::enums::UpDown::down );
	MxEnumUpDown value2( lexicon::enums::UpDown::up );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyArpeggiate object;
	object.setDirection( value1 );
	MxEnumUpDown expected = value1;
	MxEnumUpDown actual = object.getDirection();
	CHECK_EQUAL( expected, actual )
	object.setDirection( value2 );
	expected = value2;
	actual = object.getDirection();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultX2, MxCxEmptyArpeggiate )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyArpeggiate object;
	object.setDefaultX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
	object.setDefaultX( value2 );
	expected = value2;
	actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultY3, MxCxEmptyArpeggiate )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyArpeggiate object;
	object.setDefaultY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
	object.setDefaultY( value2 );
	expected = value2;
	actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeX4, MxCxEmptyArpeggiate )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyArpeggiate object;
	object.setRelativeX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
	object.setRelativeX( value2 );
	expected = value2;
	actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeY5, MxCxEmptyArpeggiate )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyArpeggiate object;
	object.setRelativeY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
	object.setRelativeY( value2 );
	expected = value2;
	actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
}
TEST( setPlacement6, MxCxEmptyArpeggiate )
{
	MxEnumAboveBelow value1( lexicon::enums::AboveBelow::below );
	MxEnumAboveBelow value2( lexicon::enums::AboveBelow::above );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyArpeggiate object;
	object.setPlacement( value1 );
	MxEnumAboveBelow expected = value1;
	MxEnumAboveBelow actual = object.getPlacement();
	CHECK_EQUAL( expected, actual )
	object.setPlacement( value2 );
	expected = value2;
	actual = object.getPlacement();
	CHECK_EQUAL( expected, actual )
}
TEST( setColor7, MxCxEmptyArpeggiate )
{
	MxColor value1( "#12131415" );
	MxColor value2( 155, 34, 145, 192 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyArpeggiate object;
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

TEST( getIsNumberRequired0, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object;
	bool expected = false;
	bool actual = object.getIsNumberRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDirectionRequired1, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object;
	bool expected = false;
	bool actual = object.getIsDirectionRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXRequired2, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object;
	bool expected = false;
	bool actual = object.getIsDefaultXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYRequired3, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object;
	bool expected = false;
	bool actual = object.getIsDefaultYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXRequired4, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object;
	bool expected = false;
	bool actual = object.getIsRelativeXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYRequired5, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object;
	bool expected = false;
	bool actual = object.getIsRelativeYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsPlacementRequired6, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object;
	bool expected = false;
	bool actual = object.getIsPlacementRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorRequired7, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object;
	bool expected = false;
	bool actual = object.getIsColorRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsNumberPresent0, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object;
	bool expected = false;
	bool actual = object.getIsNumberPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsNumberPresent( true );
	expected = true;
	actual = object.getIsNumberPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsNumberPresent( false );
	expected = false;
	actual = object.getIsNumberPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDirectionPresent1, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object;
	bool expected = false;
	bool actual = object.getIsDirectionPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsDirectionPresent( true );
	expected = true;
	actual = object.getIsDirectionPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsDirectionPresent( false );
	expected = false;
	actual = object.getIsDirectionPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXPresent2, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object;
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
TEST( getIsDefaultYPresent3, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object;
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
TEST( getIsRelativeXPresent4, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object;
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
TEST( getIsRelativeYPresent5, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object;
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
TEST( getIsPlacementPresent6, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object;
	bool expected = false;
	bool actual = object.getIsPlacementPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsPlacementPresent( true );
	expected = true;
	actual = object.getIsPlacementPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsPlacementPresent( false );
	expected = false;
	actual = object.getIsPlacementPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorPresent7, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object;
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


/* Is Default Defined ------------------------------------------------------- */

TEST( getIsNumberDefaultDefined, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object;
	bool expected = false;
	bool actual = object.getIsNumberDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDirectionDefaultDefined, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object;
	bool expected = false;
	bool actual = object.getIsDirectionDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXDefaultDefined, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object;
	bool expected = false;
	bool actual = object.getIsDefaultXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYDefaultDefined, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object;
	bool expected = false;
	bool actual = object.getIsDefaultYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXDefaultDefined, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object;
	bool expected = false;
	bool actual = object.getIsRelativeXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYDefaultDefined, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object;
	bool expected = false;
	bool actual = object.getIsRelativeYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsPlacementDefaultDefined, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object;
	bool expected = false;
	bool actual = object.getIsPlacementDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorDefaultDefined, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object;
	bool expected = false;
	bool actual = object.getIsColorDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getNumberDefaultValue, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object;
	MxNumberNumberLevel expected;
	MxNumberNumberLevel actual = object.getNumberDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDirectionDefaultValue, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object;
	MxEnumUpDown expected;
	MxEnumUpDown actual = object.getDirectionDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultXDefaultValue, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultYDefaultValue, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeXDefaultValue, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeYDefaultValue, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getPlacementDefaultValue, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object;
	MxEnumAboveBelow expected;
	MxEnumAboveBelow actual = object.getPlacementDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getColorDefaultValue, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object;
	MxColor expected;
	MxColor actual = object.getColorDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDirection( MxEnumUpDown( lexicon::enums::UpDown::up ) );
	object.setDefaultX( MxNumberTenths( 152.5 ) );
	object.setDefaultY( MxNumberTenths( 152.5 ) );
	object.setRelativeX( MxNumberTenths( 152.5 ) );
	object.setRelativeY( MxNumberTenths( 152.5 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#4C4B4A" ) );
	object.setIsNumberPresent( true );
	object.setIsDirectionPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( true );
	expected = "<booksmart number=\"1\" direction=\"up\" default-x=\"152.5\" default-y=\"152.5\" relative-x=\"152.5\" relative-y=\"152.5\" placement=\"below\" color=\"#4C4B4A\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDirectionPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( true );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDirection( MxEnumUpDown( lexicon::enums::UpDown::up ) );
	object.setDefaultX( MxNumberTenths( 152.6 ) );
	object.setDefaultY( MxNumberTenths( 152.6 ) );
	object.setRelativeX( MxNumberTenths( 152.6 ) );
	object.setRelativeY( MxNumberTenths( 152.6 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#4D4E4D4C" ) );
	expected = "<quiet direction=\"up\" default-x=\"152.6\" default-y=\"152.6\" relative-x=\"152.6\" relative-y=\"152.6\" placement=\"above\" color=\"#4D4E4D4C\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString2, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDirectionPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( true );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDirection( MxEnumUpDown( lexicon::enums::UpDown::up ) );
	object.setDefaultX( MxNumberTenths( 152.7 ) );
	object.setDefaultY( MxNumberTenths( 152.7 ) );
	object.setRelativeX( MxNumberTenths( 152.7 ) );
	object.setRelativeY( MxNumberTenths( 152.7 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#504F4E" ) );
	expected = "<musicxmlishard number=\"1\" default-x=\"152.7\" default-y=\"152.7\" relative-x=\"152.7\" relative-y=\"152.7\" placement=\"below\" color=\"#504F4E\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString3, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDirectionPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( true );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDirection( MxEnumUpDown( lexicon::enums::UpDown::up ) );
	object.setDefaultX( MxNumberTenths( 152.8 ) );
	object.setDefaultY( MxNumberTenths( 152.8 ) );
	object.setRelativeX( MxNumberTenths( 152.8 ) );
	object.setRelativeY( MxNumberTenths( 152.8 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#51525150" ) );
	expected = "<bishop default-y=\"152.8\" relative-x=\"152.8\" relative-y=\"152.8\" placement=\"above\" color=\"#51525150\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString4, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDirectionPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( true );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDirection( MxEnumUpDown( lexicon::enums::UpDown::up ) );
	object.setDefaultX( MxNumberTenths( 152.9 ) );
	object.setDefaultY( MxNumberTenths( 152.9 ) );
	object.setRelativeX( MxNumberTenths( 152.9 ) );
	object.setRelativeY( MxNumberTenths( 152.9 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#545352" ) );
	expected = "<charlie number=\"1\" direction=\"up\" relative-x=\"152.9\" relative-y=\"152.9\" placement=\"below\" color=\"#545352\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString5, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDirectionPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( true );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDirection( MxEnumUpDown( lexicon::enums::UpDown::up ) );
	object.setDefaultX( MxNumberTenths( 153 ) );
	object.setDefaultY( MxNumberTenths( 153 ) );
	object.setRelativeX( MxNumberTenths( 153 ) );
	object.setRelativeY( MxNumberTenths( 153 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#55565554" ) );
	expected = "<booksmart direction=\"up\" relative-y=\"153\" placement=\"above\" color=\"#55565554\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString6, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDirectionPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( true );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDirection( MxEnumUpDown( lexicon::enums::UpDown::up ) );
	object.setDefaultX( MxNumberTenths( 153.1 ) );
	object.setDefaultY( MxNumberTenths( 153.1 ) );
	object.setRelativeX( MxNumberTenths( 153.1 ) );
	object.setRelativeY( MxNumberTenths( 153.1 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#585756" ) );
	expected = "<quiet number=\"1\" default-x=\"153.1\" placement=\"below\" color=\"#585756\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString7, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDirectionPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( true );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDirection( MxEnumUpDown( lexicon::enums::UpDown::up ) );
	object.setDefaultX( MxNumberTenths( 153.2 ) );
	object.setDefaultY( MxNumberTenths( 153.2 ) );
	object.setRelativeX( MxNumberTenths( 153.2 ) );
	object.setRelativeY( MxNumberTenths( 153.2 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#595A5958" ) );
	expected = "<musicxmlishard default-x=\"153.2\" color=\"#595A5958\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString8, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDirectionPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( false );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDirection( MxEnumUpDown( lexicon::enums::UpDown::up ) );
	object.setDefaultX( MxNumberTenths( 153.3 ) );
	object.setDefaultY( MxNumberTenths( 153.3 ) );
	object.setRelativeX( MxNumberTenths( 153.3 ) );
	object.setRelativeY( MxNumberTenths( 153.3 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#5C5B5A" ) );
	expected = "<bishop number=\"1\" direction=\"up\" default-x=\"153.3\" default-y=\"153.3\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString9, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDirectionPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( false );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDirection( MxEnumUpDown( lexicon::enums::UpDown::up ) );
	object.setDefaultX( MxNumberTenths( 153.4 ) );
	object.setDefaultY( MxNumberTenths( 153.4 ) );
	object.setRelativeX( MxNumberTenths( 153.4 ) );
	object.setRelativeY( MxNumberTenths( 153.4 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#5D5E5D5C" ) );
	expected = "<charlie direction=\"up\" default-y=\"153.4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString10, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDirectionPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( false );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDirection( MxEnumUpDown( lexicon::enums::UpDown::up ) );
	object.setDefaultX( MxNumberTenths( 153.5 ) );
	object.setDefaultY( MxNumberTenths( 153.5 ) );
	object.setRelativeX( MxNumberTenths( 153.5 ) );
	object.setRelativeY( MxNumberTenths( 153.5 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#605F5E" ) );
	expected = "<booksmart number=\"1\" default-y=\"153.5\" relative-x=\"153.5\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString11, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDirectionPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( false );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDirection( MxEnumUpDown( lexicon::enums::UpDown::up ) );
	object.setDefaultX( MxNumberTenths( 153.6 ) );
	object.setDefaultY( MxNumberTenths( 153.6 ) );
	object.setRelativeX( MxNumberTenths( 153.6 ) );
	object.setRelativeY( MxNumberTenths( 153.6 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#61626160" ) );
	expected = "<quiet default-y=\"153.6\" relative-x=\"153.6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString12, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDirectionPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( false );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDirection( MxEnumUpDown( lexicon::enums::UpDown::up ) );
	object.setDefaultX( MxNumberTenths( 153.7 ) );
	object.setDefaultY( MxNumberTenths( 153.7 ) );
	object.setRelativeX( MxNumberTenths( 153.7 ) );
	object.setRelativeY( MxNumberTenths( 153.7 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#646362" ) );
	expected = "<musicxmlishard number=\"1\" direction=\"up\" default-x=\"153.7\" relative-x=\"153.7\" relative-y=\"153.7\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString13, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDirectionPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( false );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDirection( MxEnumUpDown( lexicon::enums::UpDown::up ) );
	object.setDefaultX( MxNumberTenths( 153.8 ) );
	object.setDefaultY( MxNumberTenths( 153.8 ) );
	object.setRelativeX( MxNumberTenths( 153.8 ) );
	object.setRelativeY( MxNumberTenths( 153.8 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#65666564" ) );
	expected = "<bishop direction=\"up\" default-x=\"153.8\" relative-x=\"153.8\" relative-y=\"153.8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString14, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDirectionPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( false );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDirection( MxEnumUpDown( lexicon::enums::UpDown::up ) );
	object.setDefaultX( MxNumberTenths( 153.9 ) );
	object.setDefaultY( MxNumberTenths( 153.9 ) );
	object.setRelativeX( MxNumberTenths( 153.9 ) );
	object.setRelativeY( MxNumberTenths( 153.9 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#686766" ) );
	expected = "<charlie number=\"1\" default-x=\"153.9\" relative-x=\"153.9\" relative-y=\"153.9\" placement=\"below\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString15, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDirectionPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( false );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDirection( MxEnumUpDown( lexicon::enums::UpDown::up ) );
	object.setDefaultX( MxNumberTenths( 154 ) );
	object.setDefaultY( MxNumberTenths( 154 ) );
	object.setRelativeX( MxNumberTenths( 154 ) );
	object.setRelativeY( MxNumberTenths( 154 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#696A6968" ) );
	expected = "<booksmart relative-y=\"154\" placement=\"above\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString16, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDirectionPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( true );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDirection( MxEnumUpDown( lexicon::enums::UpDown::up ) );
	object.setDefaultX( MxNumberTenths( 154.1 ) );
	object.setDefaultY( MxNumberTenths( 154.1 ) );
	object.setRelativeX( MxNumberTenths( 154.1 ) );
	object.setRelativeY( MxNumberTenths( 154.1 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#6C6B6A" ) );
	expected = "<quiet number=\"1\" direction=\"up\" default-y=\"154.1\" relative-y=\"154.1\" placement=\"below\" color=\"#6C6B6A\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString17, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDirectionPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( true );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDirection( MxEnumUpDown( lexicon::enums::UpDown::up ) );
	object.setDefaultX( MxNumberTenths( 154.2 ) );
	object.setDefaultY( MxNumberTenths( 154.2 ) );
	object.setRelativeX( MxNumberTenths( 154.2 ) );
	object.setRelativeY( MxNumberTenths( 154.2 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#6D6E6D6C" ) );
	expected = "<musicxmlishard direction=\"up\" default-y=\"154.2\" relative-y=\"154.2\" placement=\"above\" color=\"#6D6E6D6C\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString18, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDirectionPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( true );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDirection( MxEnumUpDown( lexicon::enums::UpDown::up ) );
	object.setDefaultX( MxNumberTenths( 154.3 ) );
	object.setDefaultY( MxNumberTenths( 154.3 ) );
	object.setRelativeX( MxNumberTenths( 154.3 ) );
	object.setRelativeY( MxNumberTenths( 154.3 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#706F6E" ) );
	expected = "<bishop number=\"1\" default-x=\"154.3\" default-y=\"154.3\" placement=\"below\" color=\"#706F6E\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString19, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDirectionPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( true );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDirection( MxEnumUpDown( lexicon::enums::UpDown::up ) );
	object.setDefaultX( MxNumberTenths( 154.4 ) );
	object.setDefaultY( MxNumberTenths( 154.4 ) );
	object.setRelativeX( MxNumberTenths( 154.4 ) );
	object.setRelativeY( MxNumberTenths( 154.4 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#71727170" ) );
	expected = "<charlie default-x=\"154.4\" default-y=\"154.4\" placement=\"above\" color=\"#71727170\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString20, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDirectionPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( true );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDirection( MxEnumUpDown( lexicon::enums::UpDown::up ) );
	object.setDefaultX( MxNumberTenths( 154.5 ) );
	object.setDefaultY( MxNumberTenths( 154.5 ) );
	object.setRelativeX( MxNumberTenths( 154.5 ) );
	object.setRelativeY( MxNumberTenths( 154.5 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#747372" ) );
	expected = "<booksmart number=\"1\" direction=\"up\" default-x=\"154.5\" relative-x=\"154.5\" placement=\"below\" color=\"#747372\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString21, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDirectionPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( true );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDirection( MxEnumUpDown( lexicon::enums::UpDown::up ) );
	object.setDefaultX( MxNumberTenths( 154.6 ) );
	object.setDefaultY( MxNumberTenths( 154.6 ) );
	object.setRelativeX( MxNumberTenths( 154.6 ) );
	object.setRelativeY( MxNumberTenths( 154.6 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#75767574" ) );
	expected = "<quiet direction=\"up\" relative-x=\"154.6\" color=\"#75767574\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString22, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDirectionPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( true );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDirection( MxEnumUpDown( lexicon::enums::UpDown::up ) );
	object.setDefaultX( MxNumberTenths( 154.7 ) );
	object.setDefaultY( MxNumberTenths( 154.7 ) );
	object.setRelativeX( MxNumberTenths( 154.7 ) );
	object.setRelativeY( MxNumberTenths( 154.7 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#787776" ) );
	expected = "<musicxmlishard number=\"1\" relative-x=\"154.7\" color=\"#787776\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString23, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDirectionPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( true );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDirection( MxEnumUpDown( lexicon::enums::UpDown::up ) );
	object.setDefaultX( MxNumberTenths( 154.8 ) );
	object.setDefaultY( MxNumberTenths( 154.8 ) );
	object.setRelativeX( MxNumberTenths( 154.8 ) );
	object.setRelativeY( MxNumberTenths( 154.8 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#797A7978" ) );
	expected = "<bishop relative-x=\"154.8\" color=\"#797A7978\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString24, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDirectionPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( false );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDirection( MxEnumUpDown( lexicon::enums::UpDown::up ) );
	object.setDefaultX( MxNumberTenths( 154.9 ) );
	object.setDefaultY( MxNumberTenths( 154.9 ) );
	object.setRelativeX( MxNumberTenths( 154.9 ) );
	object.setRelativeY( MxNumberTenths( 154.9 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#7C7B7A" ) );
	expected = "<charlie number=\"1\" direction=\"up\" default-x=\"154.9\" default-y=\"154.9\" relative-x=\"154.9\" relative-y=\"154.9\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString25, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDirectionPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( false );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDirection( MxEnumUpDown( lexicon::enums::UpDown::up ) );
	object.setDefaultX( MxNumberTenths( 155 ) );
	object.setDefaultY( MxNumberTenths( 155 ) );
	object.setRelativeX( MxNumberTenths( 155 ) );
	object.setRelativeY( MxNumberTenths( 155 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#7D7E7D7C" ) );
	expected = "<booksmart direction=\"up\" default-x=\"155\" default-y=\"155\" relative-y=\"155\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString26, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDirectionPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( false );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDirection( MxEnumUpDown( lexicon::enums::UpDown::up ) );
	object.setDefaultX( MxNumberTenths( 155.1 ) );
	object.setDefaultY( MxNumberTenths( 155.1 ) );
	object.setRelativeX( MxNumberTenths( 155.1 ) );
	object.setRelativeY( MxNumberTenths( 155.1 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#807F7E" ) );
	expected = "<quiet number=\"1\" default-x=\"155.1\" default-y=\"155.1\" relative-y=\"155.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString27, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDirectionPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( false );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDirection( MxEnumUpDown( lexicon::enums::UpDown::up ) );
	object.setDefaultX( MxNumberTenths( 155.2 ) );
	object.setDefaultY( MxNumberTenths( 155.2 ) );
	object.setRelativeX( MxNumberTenths( 155.2 ) );
	object.setRelativeY( MxNumberTenths( 155.2 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#81828180" ) );
	expected = "<musicxmlishard default-y=\"155.2\" relative-y=\"155.2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString28, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDirectionPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( false );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDirection( MxEnumUpDown( lexicon::enums::UpDown::up ) );
	object.setDefaultX( MxNumberTenths( 155.3 ) );
	object.setDefaultY( MxNumberTenths( 155.3 ) );
	object.setRelativeX( MxNumberTenths( 155.3 ) );
	object.setRelativeY( MxNumberTenths( 155.3 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#848382" ) );
	expected = "<bishop number=\"1\" direction=\"up\" relative-y=\"155.3\" placement=\"below\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString29, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDirectionPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( false );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDirection( MxEnumUpDown( lexicon::enums::UpDown::up ) );
	object.setDefaultX( MxNumberTenths( 155.4 ) );
	object.setDefaultY( MxNumberTenths( 155.4 ) );
	object.setRelativeX( MxNumberTenths( 155.4 ) );
	object.setRelativeY( MxNumberTenths( 155.4 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#85868584" ) );
	expected = "<charlie direction=\"up\" relative-y=\"155.4\" placement=\"above\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString30, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDirectionPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( false );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDirection( MxEnumUpDown( lexicon::enums::UpDown::up ) );
	object.setDefaultX( MxNumberTenths( 155.5 ) );
	object.setDefaultY( MxNumberTenths( 155.5 ) );
	object.setRelativeX( MxNumberTenths( 155.5 ) );
	object.setRelativeY( MxNumberTenths( 155.5 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#888786" ) );
	expected = "<booksmart number=\"1\" default-x=\"155.5\" relative-x=\"155.5\" placement=\"below\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString31, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDirectionPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( false );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDirection( MxEnumUpDown( lexicon::enums::UpDown::up ) );
	object.setDefaultX( MxNumberTenths( 155.6 ) );
	object.setDefaultY( MxNumberTenths( 155.6 ) );
	object.setRelativeX( MxNumberTenths( 155.6 ) );
	object.setRelativeY( MxNumberTenths( 155.6 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#898A8988" ) );
	expected = "<quiet default-x=\"155.6\" relative-x=\"155.6\" placement=\"above\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString32, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDirectionPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( true );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDirection( MxEnumUpDown( lexicon::enums::UpDown::up ) );
	object.setDefaultX( MxNumberTenths( 155.7 ) );
	object.setDefaultY( MxNumberTenths( 155.7 ) );
	object.setRelativeX( MxNumberTenths( 155.7 ) );
	object.setRelativeY( MxNumberTenths( 155.7 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#8C8B8A" ) );
	expected = "<musicxmlishard number=\"1\" direction=\"up\" default-x=\"155.7\" default-y=\"155.7\" relative-x=\"155.7\" placement=\"below\" color=\"#8C8B8A\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString33, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDirectionPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( true );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDirection( MxEnumUpDown( lexicon::enums::UpDown::up ) );
	object.setDefaultX( MxNumberTenths( 155.8 ) );
	object.setDefaultY( MxNumberTenths( 155.8 ) );
	object.setRelativeX( MxNumberTenths( 155.8 ) );
	object.setRelativeY( MxNumberTenths( 155.8 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#8D8E8D8C" ) );
	expected = "<bishop direction=\"up\" default-y=\"155.8\" relative-x=\"155.8\" placement=\"above\" color=\"#8D8E8D8C\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString34, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDirectionPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( true );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDirection( MxEnumUpDown( lexicon::enums::UpDown::up ) );
	object.setDefaultX( MxNumberTenths( 155.9 ) );
	object.setDefaultY( MxNumberTenths( 155.9 ) );
	object.setRelativeX( MxNumberTenths( 155.9 ) );
	object.setRelativeY( MxNumberTenths( 155.9 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#908F8E" ) );
	expected = "<charlie number=\"1\" default-y=\"155.9\" relative-x=\"155.9\" placement=\"below\" color=\"#908F8E\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString35, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDirectionPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( true );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDirection( MxEnumUpDown( lexicon::enums::UpDown::up ) );
	object.setDefaultX( MxNumberTenths( 156 ) );
	object.setDefaultY( MxNumberTenths( 156 ) );
	object.setRelativeX( MxNumberTenths( 156 ) );
	object.setRelativeY( MxNumberTenths( 156 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#91929190" ) );
	expected = "<booksmart default-y=\"156\" color=\"#91929190\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString36, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDirectionPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( true );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDirection( MxEnumUpDown( lexicon::enums::UpDown::up ) );
	object.setDefaultX( MxNumberTenths( 156.1 ) );
	object.setDefaultY( MxNumberTenths( 156.1 ) );
	object.setRelativeX( MxNumberTenths( 156.1 ) );
	object.setRelativeY( MxNumberTenths( 156.1 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#949392" ) );
	expected = "<quiet number=\"1\" direction=\"up\" default-x=\"156.1\" relative-y=\"156.1\" color=\"#949392\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString37, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDirectionPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( true );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDirection( MxEnumUpDown( lexicon::enums::UpDown::up ) );
	object.setDefaultX( MxNumberTenths( 156.2 ) );
	object.setDefaultY( MxNumberTenths( 156.2 ) );
	object.setRelativeX( MxNumberTenths( 156.2 ) );
	object.setRelativeY( MxNumberTenths( 156.2 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#95969594" ) );
	expected = "<musicxmlishard direction=\"up\" default-x=\"156.2\" relative-y=\"156.2\" color=\"#95969594\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString38, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDirectionPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( true );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDirection( MxEnumUpDown( lexicon::enums::UpDown::up ) );
	object.setDefaultX( MxNumberTenths( 156.3 ) );
	object.setDefaultY( MxNumberTenths( 156.3 ) );
	object.setRelativeX( MxNumberTenths( 156.3 ) );
	object.setRelativeY( MxNumberTenths( 156.3 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#989796" ) );
	expected = "<bishop number=\"1\" default-x=\"156.3\" relative-y=\"156.3\" color=\"#989796\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString39, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDirectionPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( true );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDirection( MxEnumUpDown( lexicon::enums::UpDown::up ) );
	object.setDefaultX( MxNumberTenths( 156.4 ) );
	object.setDefaultY( MxNumberTenths( 156.4 ) );
	object.setRelativeX( MxNumberTenths( 156.4 ) );
	object.setRelativeY( MxNumberTenths( 156.4 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#999A9998" ) );
	expected = "<charlie relative-y=\"156.4\" color=\"#999A9998\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString40, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDirectionPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( false );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDirection( MxEnumUpDown( lexicon::enums::UpDown::up ) );
	object.setDefaultX( MxNumberTenths( 156.5 ) );
	object.setDefaultY( MxNumberTenths( 156.5 ) );
	object.setRelativeX( MxNumberTenths( 156.5 ) );
	object.setRelativeY( MxNumberTenths( 156.5 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#9C9B9A" ) );
	expected = "<booksmart number=\"1\" direction=\"up\" default-y=\"156.5\" relative-x=\"156.5\" relative-y=\"156.5\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString41, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDirectionPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( false );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDirection( MxEnumUpDown( lexicon::enums::UpDown::up ) );
	object.setDefaultX( MxNumberTenths( 156.6 ) );
	object.setDefaultY( MxNumberTenths( 156.6 ) );
	object.setRelativeX( MxNumberTenths( 156.6 ) );
	object.setRelativeY( MxNumberTenths( 156.6 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#9D9E9D9C" ) );
	expected = "<quiet direction=\"up\" default-y=\"156.6\" relative-x=\"156.6\" relative-y=\"156.6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString42, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDirectionPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( false );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDirection( MxEnumUpDown( lexicon::enums::UpDown::up ) );
	object.setDefaultX( MxNumberTenths( 156.7 ) );
	object.setDefaultY( MxNumberTenths( 156.7 ) );
	object.setRelativeX( MxNumberTenths( 156.7 ) );
	object.setRelativeY( MxNumberTenths( 156.7 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#A09F9E" ) );
	expected = "<musicxmlishard number=\"1\" default-x=\"156.7\" default-y=\"156.7\" relative-x=\"156.7\" placement=\"below\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString43, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDirectionPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( false );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDirection( MxEnumUpDown( lexicon::enums::UpDown::up ) );
	object.setDefaultX( MxNumberTenths( 156.8 ) );
	object.setDefaultY( MxNumberTenths( 156.8 ) );
	object.setRelativeX( MxNumberTenths( 156.8 ) );
	object.setRelativeY( MxNumberTenths( 156.8 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#A1A2A1A0" ) );
	expected = "<bishop default-x=\"156.8\" default-y=\"156.8\" relative-x=\"156.8\" placement=\"above\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString44, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDirectionPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( false );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDirection( MxEnumUpDown( lexicon::enums::UpDown::up ) );
	object.setDefaultX( MxNumberTenths( 156.9 ) );
	object.setDefaultY( MxNumberTenths( 156.9 ) );
	object.setRelativeX( MxNumberTenths( 156.9 ) );
	object.setRelativeY( MxNumberTenths( 156.9 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#A4A3A2" ) );
	expected = "<charlie number=\"1\" direction=\"up\" default-x=\"156.9\" relative-x=\"156.9\" placement=\"below\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString45, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDirectionPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( false );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDirection( MxEnumUpDown( lexicon::enums::UpDown::up ) );
	object.setDefaultX( MxNumberTenths( 157 ) );
	object.setDefaultY( MxNumberTenths( 157 ) );
	object.setRelativeX( MxNumberTenths( 157 ) );
	object.setRelativeY( MxNumberTenths( 157 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#A5A6A5A4" ) );
	expected = "<booksmart direction=\"up\" placement=\"above\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString46, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDirectionPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( false );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDirection( MxEnumUpDown( lexicon::enums::UpDown::up ) );
	object.setDefaultX( MxNumberTenths( 157.1 ) );
	object.setDefaultY( MxNumberTenths( 157.1 ) );
	object.setRelativeX( MxNumberTenths( 157.1 ) );
	object.setRelativeY( MxNumberTenths( 157.1 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#A8A7A6" ) );
	expected = "<quiet number=\"1\" placement=\"below\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString47, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDirectionPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( false );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDirection( MxEnumUpDown( lexicon::enums::UpDown::up ) );
	object.setDefaultX( MxNumberTenths( 157.2 ) );
	object.setDefaultY( MxNumberTenths( 157.2 ) );
	object.setRelativeX( MxNumberTenths( 157.2 ) );
	object.setRelativeY( MxNumberTenths( 157.2 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#A9AAA9A8" ) );
	expected = "<musicxmlishard placement=\"above\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString48, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDirectionPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( true );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDirection( MxEnumUpDown( lexicon::enums::UpDown::up ) );
	object.setDefaultX( MxNumberTenths( 157.3 ) );
	object.setDefaultY( MxNumberTenths( 157.3 ) );
	object.setRelativeX( MxNumberTenths( 157.3 ) );
	object.setRelativeY( MxNumberTenths( 157.3 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#ACABAA" ) );
	expected = "<bishop number=\"1\" direction=\"up\" default-x=\"157.3\" default-y=\"157.3\" relative-y=\"157.3\" placement=\"below\" color=\"#ACABAA\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString49, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDirectionPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( true );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDirection( MxEnumUpDown( lexicon::enums::UpDown::up ) );
	object.setDefaultX( MxNumberTenths( 157.4 ) );
	object.setDefaultY( MxNumberTenths( 157.4 ) );
	object.setRelativeX( MxNumberTenths( 157.4 ) );
	object.setRelativeY( MxNumberTenths( 157.4 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#ADAEADAC" ) );
	expected = "<charlie direction=\"up\" default-x=\"157.4\" default-y=\"157.4\" relative-y=\"157.4\" color=\"#ADAEADAC\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString50, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDirectionPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( true );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDirection( MxEnumUpDown( lexicon::enums::UpDown::up ) );
	object.setDefaultX( MxNumberTenths( 157.5 ) );
	object.setDefaultY( MxNumberTenths( 157.5 ) );
	object.setRelativeX( MxNumberTenths( 157.5 ) );
	object.setRelativeY( MxNumberTenths( 157.5 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#B0AFAE" ) );
	expected = "<booksmart number=\"1\" default-x=\"157.5\" default-y=\"157.5\" relative-x=\"157.5\" relative-y=\"157.5\" color=\"#B0AFAE\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString51, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDirectionPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( true );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDirection( MxEnumUpDown( lexicon::enums::UpDown::up ) );
	object.setDefaultX( MxNumberTenths( 157.6 ) );
	object.setDefaultY( MxNumberTenths( 157.6 ) );
	object.setRelativeX( MxNumberTenths( 157.6 ) );
	object.setRelativeY( MxNumberTenths( 157.6 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#B1B2B1B0" ) );
	expected = "<quiet default-y=\"157.6\" relative-x=\"157.6\" relative-y=\"157.6\" color=\"#B1B2B1B0\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString52, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDirectionPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( true );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDirection( MxEnumUpDown( lexicon::enums::UpDown::up ) );
	object.setDefaultX( MxNumberTenths( 157.7 ) );
	object.setDefaultY( MxNumberTenths( 157.7 ) );
	object.setRelativeX( MxNumberTenths( 157.7 ) );
	object.setRelativeY( MxNumberTenths( 157.7 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#B4B3B2" ) );
	expected = "<musicxmlishard number=\"1\" direction=\"up\" relative-x=\"157.7\" relative-y=\"157.7\" color=\"#B4B3B2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString53, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDirectionPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( true );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDirection( MxEnumUpDown( lexicon::enums::UpDown::up ) );
	object.setDefaultX( MxNumberTenths( 157.8 ) );
	object.setDefaultY( MxNumberTenths( 157.8 ) );
	object.setRelativeX( MxNumberTenths( 157.8 ) );
	object.setRelativeY( MxNumberTenths( 157.8 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#B5B6B5B4" ) );
	expected = "<bishop direction=\"up\" relative-x=\"157.8\" relative-y=\"157.8\" color=\"#B5B6B5B4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString54, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDirectionPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( true );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDirection( MxEnumUpDown( lexicon::enums::UpDown::up ) );
	object.setDefaultX( MxNumberTenths( 157.9 ) );
	object.setDefaultY( MxNumberTenths( 157.9 ) );
	object.setRelativeX( MxNumberTenths( 157.9 ) );
	object.setRelativeY( MxNumberTenths( 157.9 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#B8B7B6" ) );
	expected = "<charlie number=\"1\" default-x=\"157.9\" relative-x=\"157.9\" color=\"#B8B7B6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString55, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDirectionPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( true );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDirection( MxEnumUpDown( lexicon::enums::UpDown::up ) );
	object.setDefaultX( MxNumberTenths( 158 ) );
	object.setDefaultY( MxNumberTenths( 158 ) );
	object.setRelativeX( MxNumberTenths( 158 ) );
	object.setRelativeY( MxNumberTenths( 158 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#B9BAB9B8" ) );
	expected = "<booksmart default-x=\"158\" color=\"#B9BAB9B8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString56, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDirectionPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( false );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDirection( MxEnumUpDown( lexicon::enums::UpDown::up ) );
	object.setDefaultX( MxNumberTenths( 158.1 ) );
	object.setDefaultY( MxNumberTenths( 158.1 ) );
	object.setRelativeX( MxNumberTenths( 158.1 ) );
	object.setRelativeY( MxNumberTenths( 158.1 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#BCBBBA" ) );
	expected = "<quiet number=\"1\" direction=\"up\" default-x=\"158.1\" default-y=\"158.1\" placement=\"below\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString57, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDirectionPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( false );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDirection( MxEnumUpDown( lexicon::enums::UpDown::up ) );
	object.setDefaultX( MxNumberTenths( 158.2 ) );
	object.setDefaultY( MxNumberTenths( 158.2 ) );
	object.setRelativeX( MxNumberTenths( 158.2 ) );
	object.setRelativeY( MxNumberTenths( 158.2 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#BDBEBDBC" ) );
	expected = "<musicxmlishard direction=\"up\" default-y=\"158.2\" placement=\"above\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString58, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDirectionPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( false );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDirection( MxEnumUpDown( lexicon::enums::UpDown::up ) );
	object.setDefaultX( MxNumberTenths( 158.3 ) );
	object.setDefaultY( MxNumberTenths( 158.3 ) );
	object.setRelativeX( MxNumberTenths( 158.3 ) );
	object.setRelativeY( MxNumberTenths( 158.3 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#C0BFBE" ) );
	expected = "<bishop number=\"1\" default-y=\"158.3\" placement=\"below\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString59, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDirectionPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( false );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDirection( MxEnumUpDown( lexicon::enums::UpDown::up ) );
	object.setDefaultX( MxNumberTenths( 158.4 ) );
	object.setDefaultY( MxNumberTenths( 158.4 ) );
	object.setRelativeX( MxNumberTenths( 158.4 ) );
	object.setRelativeY( MxNumberTenths( 158.4 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#C1C2C1C0" ) );
	expected = "<charlie default-y=\"158.4\" placement=\"above\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString60, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDirectionPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( false );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDirection( MxEnumUpDown( lexicon::enums::UpDown::up ) );
	object.setDefaultX( MxNumberTenths( 158.5 ) );
	object.setDefaultY( MxNumberTenths( 158.5 ) );
	object.setRelativeX( MxNumberTenths( 158.5 ) );
	object.setRelativeY( MxNumberTenths( 158.5 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#C4C3C2" ) );
	expected = "<booksmart number=\"1\" direction=\"up\" default-x=\"158.5\" relative-x=\"158.5\" relative-y=\"158.5\" placement=\"below\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString61, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDirectionPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( false );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDirection( MxEnumUpDown( lexicon::enums::UpDown::up ) );
	object.setDefaultX( MxNumberTenths( 158.6 ) );
	object.setDefaultY( MxNumberTenths( 158.6 ) );
	object.setRelativeX( MxNumberTenths( 158.6 ) );
	object.setRelativeY( MxNumberTenths( 158.6 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#C5C6C5C4" ) );
	expected = "<quiet direction=\"up\" default-x=\"158.6\" relative-x=\"158.6\" relative-y=\"158.6\" placement=\"above\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString62, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDirectionPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( false );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDirection( MxEnumUpDown( lexicon::enums::UpDown::up ) );
	object.setDefaultX( MxNumberTenths( 158.7 ) );
	object.setDefaultY( MxNumberTenths( 158.7 ) );
	object.setRelativeX( MxNumberTenths( 158.7 ) );
	object.setRelativeY( MxNumberTenths( 158.7 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#C8C7C6" ) );
	expected = "<musicxmlishard number=\"1\" default-x=\"158.7\" relative-x=\"158.7\" relative-y=\"158.7\" placement=\"below\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString63, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDirectionPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( false );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDirection( MxEnumUpDown( lexicon::enums::UpDown::up ) );
	object.setDefaultX( MxNumberTenths( 158.8 ) );
	object.setDefaultY( MxNumberTenths( 158.8 ) );
	object.setRelativeX( MxNumberTenths( 158.8 ) );
	object.setRelativeY( MxNumberTenths( 158.8 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#C9CAC9C8" ) );
	expected = "<bishop relative-x=\"158.8\" relative-y=\"158.8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString64, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDirectionPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( true );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDirection( MxEnumUpDown( lexicon::enums::UpDown::up ) );
	object.setDefaultX( MxNumberTenths( 158.9 ) );
	object.setDefaultY( MxNumberTenths( 158.9 ) );
	object.setRelativeX( MxNumberTenths( 158.9 ) );
	object.setRelativeY( MxNumberTenths( 158.9 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#CCCBCA" ) );
	expected = "<charlie number=\"1\" direction=\"up\" default-y=\"158.9\" relative-x=\"158.9\" relative-y=\"158.9\" color=\"#CCCBCA\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString65, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDirectionPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( true );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDirection( MxEnumUpDown( lexicon::enums::UpDown::up ) );
	object.setDefaultX( MxNumberTenths( 159 ) );
	object.setDefaultY( MxNumberTenths( 159 ) );
	object.setRelativeX( MxNumberTenths( 159 ) );
	object.setRelativeY( MxNumberTenths( 159 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#CDCECDCC" ) );
	expected = "<booksmart direction=\"up\" default-y=\"159\" relative-y=\"159\" color=\"#CDCECDCC\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString66, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDirectionPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( true );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDirection( MxEnumUpDown( lexicon::enums::UpDown::up ) );
	object.setDefaultX( MxNumberTenths( 159.1 ) );
	object.setDefaultY( MxNumberTenths( 159.1 ) );
	object.setRelativeX( MxNumberTenths( 159.1 ) );
	object.setRelativeY( MxNumberTenths( 159.1 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#D0CFCE" ) );
	expected = "<quiet number=\"1\" default-x=\"159.1\" default-y=\"159.1\" color=\"#D0CFCE\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString67, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDirectionPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( true );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDirection( MxEnumUpDown( lexicon::enums::UpDown::up ) );
	object.setDefaultX( MxNumberTenths( 159.2 ) );
	object.setDefaultY( MxNumberTenths( 159.2 ) );
	object.setRelativeX( MxNumberTenths( 159.2 ) );
	object.setRelativeY( MxNumberTenths( 159.2 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#D1D2D1D0" ) );
	expected = "<musicxmlishard default-x=\"159.2\" default-y=\"159.2\" color=\"#D1D2D1D0\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString68, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDirectionPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( true );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDirection( MxEnumUpDown( lexicon::enums::UpDown::up ) );
	object.setDefaultX( MxNumberTenths( 159.3 ) );
	object.setDefaultY( MxNumberTenths( 159.3 ) );
	object.setRelativeX( MxNumberTenths( 159.3 ) );
	object.setRelativeY( MxNumberTenths( 159.3 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#D4D3D2" ) );
	expected = "<bishop number=\"1\" direction=\"up\" default-x=\"159.3\" color=\"#D4D3D2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString69, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDirectionPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( true );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDirection( MxEnumUpDown( lexicon::enums::UpDown::up ) );
	object.setDefaultX( MxNumberTenths( 159.4 ) );
	object.setDefaultY( MxNumberTenths( 159.4 ) );
	object.setRelativeX( MxNumberTenths( 159.4 ) );
	object.setRelativeY( MxNumberTenths( 159.4 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#D5D6D5D4" ) );
	expected = "<charlie direction=\"up\" color=\"#D5D6D5D4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString70, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDirectionPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( true );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDirection( MxEnumUpDown( lexicon::enums::UpDown::up ) );
	object.setDefaultX( MxNumberTenths( 159.5 ) );
	object.setDefaultY( MxNumberTenths( 159.5 ) );
	object.setRelativeX( MxNumberTenths( 159.5 ) );
	object.setRelativeY( MxNumberTenths( 159.5 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#D8D7D6" ) );
	expected = "<booksmart number=\"1\" relative-x=\"159.5\" placement=\"below\" color=\"#D8D7D6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString71, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDirectionPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( true );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDirection( MxEnumUpDown( lexicon::enums::UpDown::up ) );
	object.setDefaultX( MxNumberTenths( 159.6 ) );
	object.setDefaultY( MxNumberTenths( 159.6 ) );
	object.setRelativeX( MxNumberTenths( 159.6 ) );
	object.setRelativeY( MxNumberTenths( 159.6 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#D9DAD9D8" ) );
	expected = "<quiet relative-x=\"159.6\" placement=\"above\" color=\"#D9DAD9D8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString72, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDirectionPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( false );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDirection( MxEnumUpDown( lexicon::enums::UpDown::up ) );
	object.setDefaultX( MxNumberTenths( 159.7 ) );
	object.setDefaultY( MxNumberTenths( 159.7 ) );
	object.setRelativeX( MxNumberTenths( 159.7 ) );
	object.setRelativeY( MxNumberTenths( 159.7 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#DCDBDA" ) );
	expected = "<musicxmlishard number=\"1\" direction=\"up\" default-x=\"159.7\" default-y=\"159.7\" relative-x=\"159.7\" relative-y=\"159.7\" placement=\"below\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString73, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDirectionPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( false );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDirection( MxEnumUpDown( lexicon::enums::UpDown::up ) );
	object.setDefaultX( MxNumberTenths( 159.8 ) );
	object.setDefaultY( MxNumberTenths( 159.8 ) );
	object.setRelativeX( MxNumberTenths( 159.8 ) );
	object.setRelativeY( MxNumberTenths( 159.8 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#DDDEDDDC" ) );
	expected = "<bishop direction=\"up\" default-x=\"159.8\" default-y=\"159.8\" relative-x=\"159.8\" relative-y=\"159.8\" placement=\"above\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString74, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDirectionPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( false );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDirection( MxEnumUpDown( lexicon::enums::UpDown::up ) );
	object.setDefaultX( MxNumberTenths( 159.9 ) );
	object.setDefaultY( MxNumberTenths( 159.9 ) );
	object.setRelativeX( MxNumberTenths( 159.9 ) );
	object.setRelativeY( MxNumberTenths( 159.9 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#E0DFDE" ) );
	expected = "<charlie number=\"1\" default-x=\"159.9\" default-y=\"159.9\" relative-x=\"159.9\" relative-y=\"159.9\" placement=\"below\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString75, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDirectionPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( false );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDirection( MxEnumUpDown( lexicon::enums::UpDown::up ) );
	object.setDefaultX( MxNumberTenths( 160 ) );
	object.setDefaultY( MxNumberTenths( 160 ) );
	object.setRelativeX( MxNumberTenths( 160 ) );
	object.setRelativeY( MxNumberTenths( 160 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#E1E2E1E0" ) );
	expected = "<booksmart default-y=\"160\" relative-y=\"160\" placement=\"above\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString76, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDirectionPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( false );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDirection( MxEnumUpDown( lexicon::enums::UpDown::up ) );
	object.setDefaultX( MxNumberTenths( 160.1 ) );
	object.setDefaultY( MxNumberTenths( 160.1 ) );
	object.setRelativeX( MxNumberTenths( 160.1 ) );
	object.setRelativeY( MxNumberTenths( 160.1 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#E4E3E2" ) );
	expected = "<quiet number=\"1\" direction=\"up\" relative-y=\"160.1\" placement=\"below\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString77, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDirectionPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( false );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDirection( MxEnumUpDown( lexicon::enums::UpDown::up ) );
	object.setDefaultX( MxNumberTenths( 160.2 ) );
	object.setDefaultY( MxNumberTenths( 160.2 ) );
	object.setRelativeX( MxNumberTenths( 160.2 ) );
	object.setRelativeY( MxNumberTenths( 160.2 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#E5E6E5E4" ) );
	expected = "<musicxmlishard direction=\"up\" relative-y=\"160.2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString78, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDirectionPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( false );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDirection( MxEnumUpDown( lexicon::enums::UpDown::up ) );
	object.setDefaultX( MxNumberTenths( 160.3 ) );
	object.setDefaultY( MxNumberTenths( 160.3 ) );
	object.setRelativeX( MxNumberTenths( 160.3 ) );
	object.setRelativeY( MxNumberTenths( 160.3 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#E8E7E6" ) );
	expected = "<bishop number=\"1\" default-x=\"160.3\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString79, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDirectionPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( false );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDirection( MxEnumUpDown( lexicon::enums::UpDown::up ) );
	object.setDefaultX( MxNumberTenths( 160.4 ) );
	object.setDefaultY( MxNumberTenths( 160.4 ) );
	object.setRelativeX( MxNumberTenths( 160.4 ) );
	object.setRelativeY( MxNumberTenths( 160.4 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#E9EAE9E8" ) );
	expected = "<charlie default-x=\"160.4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString80, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDirectionPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( true );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDirection( MxEnumUpDown( lexicon::enums::UpDown::up ) );
	object.setDefaultX( MxNumberTenths( 160.5 ) );
	object.setDefaultY( MxNumberTenths( 160.5 ) );
	object.setRelativeX( MxNumberTenths( 160.5 ) );
	object.setRelativeY( MxNumberTenths( 160.5 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#ECEBEA" ) );
	expected = "<booksmart number=\"1\" direction=\"up\" default-x=\"160.5\" default-y=\"160.5\" relative-x=\"160.5\" color=\"#ECEBEA\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString81, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDirectionPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( true );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDirection( MxEnumUpDown( lexicon::enums::UpDown::up ) );
	object.setDefaultX( MxNumberTenths( 160.6 ) );
	object.setDefaultY( MxNumberTenths( 160.6 ) );
	object.setRelativeX( MxNumberTenths( 160.6 ) );
	object.setRelativeY( MxNumberTenths( 160.6 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#EDEEEDEC" ) );
	expected = "<quiet direction=\"up\" default-y=\"160.6\" relative-x=\"160.6\" color=\"#EDEEEDEC\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString82, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDirectionPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( true );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDirection( MxEnumUpDown( lexicon::enums::UpDown::up ) );
	object.setDefaultX( MxNumberTenths( 160.7 ) );
	object.setDefaultY( MxNumberTenths( 160.7 ) );
	object.setRelativeX( MxNumberTenths( 160.7 ) );
	object.setRelativeY( MxNumberTenths( 160.7 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#F0EFEE" ) );
	expected = "<musicxmlishard number=\"1\" default-y=\"160.7\" relative-x=\"160.7\" color=\"#F0EFEE\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString83, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDirectionPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( true );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDirection( MxEnumUpDown( lexicon::enums::UpDown::up ) );
	object.setDefaultX( MxNumberTenths( 160.8 ) );
	object.setDefaultY( MxNumberTenths( 160.8 ) );
	object.setRelativeX( MxNumberTenths( 160.8 ) );
	object.setRelativeY( MxNumberTenths( 160.8 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#F1F2F1F0" ) );
	expected = "<bishop default-y=\"160.8\" relative-x=\"160.8\" color=\"#F1F2F1F0\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString84, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDirectionPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( true );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDirection( MxEnumUpDown( lexicon::enums::UpDown::up ) );
	object.setDefaultX( MxNumberTenths( 160.9 ) );
	object.setDefaultY( MxNumberTenths( 160.9 ) );
	object.setRelativeX( MxNumberTenths( 160.9 ) );
	object.setRelativeY( MxNumberTenths( 160.9 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#F4F3F2" ) );
	expected = "<charlie number=\"1\" direction=\"up\" default-x=\"160.9\" relative-x=\"160.9\" relative-y=\"160.9\" placement=\"below\" color=\"#F4F3F2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString85, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDirectionPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( true );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDirection( MxEnumUpDown( lexicon::enums::UpDown::up ) );
	object.setDefaultX( MxNumberTenths( 161 ) );
	object.setDefaultY( MxNumberTenths( 161 ) );
	object.setRelativeX( MxNumberTenths( 161 ) );
	object.setRelativeY( MxNumberTenths( 161 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#F5F6F5F4" ) );
	expected = "<booksmart direction=\"up\" default-x=\"161\" relative-y=\"161\" placement=\"above\" color=\"#F5F6F5F4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString86, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDirectionPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( true );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDirection( MxEnumUpDown( lexicon::enums::UpDown::up ) );
	object.setDefaultX( MxNumberTenths( 161.1 ) );
	object.setDefaultY( MxNumberTenths( 161.1 ) );
	object.setRelativeX( MxNumberTenths( 161.1 ) );
	object.setRelativeY( MxNumberTenths( 161.1 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#F8F7F6" ) );
	expected = "<quiet number=\"1\" default-x=\"161.1\" relative-y=\"161.1\" placement=\"below\" color=\"#F8F7F6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString87, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDirectionPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( true );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDirection( MxEnumUpDown( lexicon::enums::UpDown::up ) );
	object.setDefaultX( MxNumberTenths( 161.2 ) );
	object.setDefaultY( MxNumberTenths( 161.2 ) );
	object.setRelativeX( MxNumberTenths( 161.2 ) );
	object.setRelativeY( MxNumberTenths( 161.2 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#F9FAF9F8" ) );
	expected = "<musicxmlishard relative-y=\"161.2\" placement=\"above\" color=\"#F9FAF9F8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString88, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDirectionPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( false );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDirection( MxEnumUpDown( lexicon::enums::UpDown::up ) );
	object.setDefaultX( MxNumberTenths( 161.3 ) );
	object.setDefaultY( MxNumberTenths( 161.3 ) );
	object.setRelativeX( MxNumberTenths( 161.3 ) );
	object.setRelativeY( MxNumberTenths( 161.3 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#FCFBFA" ) );
	expected = "<bishop number=\"1\" direction=\"up\" default-y=\"161.3\" relative-y=\"161.3\" placement=\"below\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString89, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDirectionPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( false );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDirection( MxEnumUpDown( lexicon::enums::UpDown::up ) );
	object.setDefaultX( MxNumberTenths( 161.4 ) );
	object.setDefaultY( MxNumberTenths( 161.4 ) );
	object.setRelativeX( MxNumberTenths( 161.4 ) );
	object.setRelativeY( MxNumberTenths( 161.4 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#FDFEFDFC" ) );
	expected = "<charlie direction=\"up\" default-y=\"161.4\" relative-y=\"161.4\" placement=\"above\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString90, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDirectionPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( false );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDirection( MxEnumUpDown( lexicon::enums::UpDown::up ) );
	object.setDefaultX( MxNumberTenths( 161.5 ) );
	object.setDefaultY( MxNumberTenths( 161.5 ) );
	object.setRelativeX( MxNumberTenths( 161.5 ) );
	object.setRelativeY( MxNumberTenths( 161.5 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#00FFFE" ) );
	expected = "<booksmart number=\"1\" default-x=\"161.5\" default-y=\"161.5\" relative-x=\"161.5\" placement=\"below\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString91, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDirectionPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( false );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDirection( MxEnumUpDown( lexicon::enums::UpDown::up ) );
	object.setDefaultX( MxNumberTenths( 161.6 ) );
	object.setDefaultY( MxNumberTenths( 161.6 ) );
	object.setRelativeX( MxNumberTenths( 161.6 ) );
	object.setRelativeY( MxNumberTenths( 161.6 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#01020100" ) );
	expected = "<quiet default-x=\"161.6\" default-y=\"161.6\" relative-x=\"161.6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString92, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDirectionPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( false );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDirection( MxEnumUpDown( lexicon::enums::UpDown::up ) );
	object.setDefaultX( MxNumberTenths( 161.7 ) );
	object.setDefaultY( MxNumberTenths( 161.7 ) );
	object.setRelativeX( MxNumberTenths( 161.7 ) );
	object.setRelativeY( MxNumberTenths( 161.7 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#040302" ) );
	expected = "<musicxmlishard number=\"1\" direction=\"up\" default-x=\"161.7\" relative-x=\"161.7\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString93, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDirectionPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( false );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDirection( MxEnumUpDown( lexicon::enums::UpDown::up ) );
	object.setDefaultX( MxNumberTenths( 161.8 ) );
	object.setDefaultY( MxNumberTenths( 161.8 ) );
	object.setRelativeX( MxNumberTenths( 161.8 ) );
	object.setRelativeY( MxNumberTenths( 161.8 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#05060504" ) );
	expected = "<bishop direction=\"up\" relative-x=\"161.8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString94, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDirectionPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( false );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDirection( MxEnumUpDown( lexicon::enums::UpDown::up ) );
	object.setDefaultX( MxNumberTenths( 161.9 ) );
	object.setDefaultY( MxNumberTenths( 161.9 ) );
	object.setRelativeX( MxNumberTenths( 161.9 ) );
	object.setRelativeY( MxNumberTenths( 161.9 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#080706" ) );
	expected = "<charlie number=\"1\" relative-x=\"161.9\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString95, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDirectionPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( false );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDirection( MxEnumUpDown( lexicon::enums::UpDown::up ) );
	object.setDefaultX( MxNumberTenths( 162 ) );
	object.setDefaultY( MxNumberTenths( 162 ) );
	object.setRelativeX( MxNumberTenths( 162 ) );
	object.setRelativeY( MxNumberTenths( 162 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#090A0908" ) );
	expected = "<booksmart/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString96, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDirectionPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( true );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDirection( MxEnumUpDown( lexicon::enums::UpDown::up ) );
	object.setDefaultX( MxNumberTenths( 162.1 ) );
	object.setDefaultY( MxNumberTenths( 162.1 ) );
	object.setRelativeX( MxNumberTenths( 162.1 ) );
	object.setRelativeY( MxNumberTenths( 162.1 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#0C0B0A" ) );
	expected = "<quiet number=\"1\" direction=\"up\" default-x=\"162.1\" default-y=\"162.1\" relative-y=\"162.1\" color=\"#0C0B0A\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString97, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDirectionPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( true );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDirection( MxEnumUpDown( lexicon::enums::UpDown::up ) );
	object.setDefaultX( MxNumberTenths( 162.2 ) );
	object.setDefaultY( MxNumberTenths( 162.2 ) );
	object.setRelativeX( MxNumberTenths( 162.2 ) );
	object.setRelativeY( MxNumberTenths( 162.2 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#0D0E0D0C" ) );
	expected = "<musicxmlishard direction=\"up\" default-x=\"162.2\" default-y=\"162.2\" relative-y=\"162.2\" color=\"#0D0E0D0C\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString98, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDirectionPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( true );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDirection( MxEnumUpDown( lexicon::enums::UpDown::up ) );
	object.setDefaultX( MxNumberTenths( 162.3 ) );
	object.setDefaultY( MxNumberTenths( 162.3 ) );
	object.setRelativeX( MxNumberTenths( 162.3 ) );
	object.setRelativeY( MxNumberTenths( 162.3 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#100F0E" ) );
	expected = "<bishop number=\"1\" default-x=\"162.3\" default-y=\"162.3\" relative-y=\"162.3\" placement=\"below\" color=\"#100F0E\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString99, MxCxEmptyArpeggiate )
{
	MxCxEmptyArpeggiate object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDirectionPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( true );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDirection( MxEnumUpDown( lexicon::enums::UpDown::up ) );
	object.setDefaultX( MxNumberTenths( 162.4 ) );
	object.setDefaultY( MxNumberTenths( 162.4 ) );
	object.setRelativeX( MxNumberTenths( 162.4 ) );
	object.setRelativeY( MxNumberTenths( 162.4 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#11121110" ) );
	expected = "<charlie default-y=\"162.4\" relative-y=\"162.4\" placement=\"above\" color=\"#11121110\"/>";
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


