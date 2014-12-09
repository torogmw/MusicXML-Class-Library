/** *******************************************************
  * 
  * MxCxEmptyNonArpeggiateTest.cpp
  * Created: 2014-12-03 16:31:30
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxCxEmptyNonArpeggiate.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object;
	std::string expected = ( MxEnumTopBottom(  ) ).toString();
	std::string actual = object.getType().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues1, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object;
	std::string expected = ( MxNumberNumberLevel(  ) ).toString();
	std::string actual = object.getNumber().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues2, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues3, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues4, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues5, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues6, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object;
	std::string expected = ( MxEnumAboveBelow(  ) ).toString();
	std::string actual = object.getPlacement().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues7, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object;
	std::string expected = ( MxColor(  ) ).toString();
	std::string actual = object.getColor().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValueAndElementName0, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object( "booksmart" );
	std::string expected;
	std::string actual;
	expected = "booksmart";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName2, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	expected = "musicxmlishard";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName4, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object( "charlie" );
	std::string expected;
	std::string actual;
	expected = "charlie";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName6, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object( "quiet" );
	std::string expected;
	std::string actual;
	expected = "quiet";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName8, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object( "bishop" );
	std::string expected;
	std::string actual;
	expected = "bishop";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}

/* End: Ctor tests with values  --------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object;
	std::string expected = "MxCxEmptyNonArpeggiate";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object;
	std::string expected = "non-arpeggiate";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object;
	std::string expected = "The non-arpeggiate type indicates that this note is at the top or bottom of a bracket indicating to not arpeggiate these notes. Since this does not involve playback, it is only used on the top or bottom notes, not on each note as for the arpeggiate type.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setType0, MxCxEmptyNonArpeggiate )
{
	MxEnumTopBottom value1( lexicon::enums::TopBottom::bottom );
	MxEnumTopBottom value2( lexicon::enums::TopBottom::top );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyNonArpeggiate object;
	object.setType( value1 );
	MxEnumTopBottom expected = value1;
	MxEnumTopBottom actual = object.getType();
	CHECK_EQUAL( expected, actual )
	object.setType( value2 );
	expected = value2;
	actual = object.getType();
	CHECK_EQUAL( expected, actual )
}
TEST( setNumber1, MxCxEmptyNonArpeggiate )
{
	MxNumberNumberLevel value1( 1 );
	MxNumberNumberLevel value2( 2 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyNonArpeggiate object;
	object.setNumber( value1 );
	MxNumberNumberLevel expected = value1;
	MxNumberNumberLevel actual = object.getNumber();
	CHECK_EQUAL( expected, actual )
	object.setNumber( value2 );
	expected = value2;
	actual = object.getNumber();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultX2, MxCxEmptyNonArpeggiate )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyNonArpeggiate object;
	object.setDefaultX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
	object.setDefaultX( value2 );
	expected = value2;
	actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultY3, MxCxEmptyNonArpeggiate )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyNonArpeggiate object;
	object.setDefaultY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
	object.setDefaultY( value2 );
	expected = value2;
	actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeX4, MxCxEmptyNonArpeggiate )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyNonArpeggiate object;
	object.setRelativeX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
	object.setRelativeX( value2 );
	expected = value2;
	actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeY5, MxCxEmptyNonArpeggiate )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyNonArpeggiate object;
	object.setRelativeY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
	object.setRelativeY( value2 );
	expected = value2;
	actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
}
TEST( setPlacement6, MxCxEmptyNonArpeggiate )
{
	MxEnumAboveBelow value1( lexicon::enums::AboveBelow::below );
	MxEnumAboveBelow value2( lexicon::enums::AboveBelow::above );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyNonArpeggiate object;
	object.setPlacement( value1 );
	MxEnumAboveBelow expected = value1;
	MxEnumAboveBelow actual = object.getPlacement();
	CHECK_EQUAL( expected, actual )
	object.setPlacement( value2 );
	expected = value2;
	actual = object.getPlacement();
	CHECK_EQUAL( expected, actual )
}
TEST( setColor7, MxCxEmptyNonArpeggiate )
{
	MxColor value1( "#12131415" );
	MxColor value2( 155, 34, 145, 192 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyNonArpeggiate object;
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

TEST( getIsTypeRequired0, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object;
	bool expected = true;
	bool actual = object.getIsTypeRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsNumberRequired1, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object;
	bool expected = false;
	bool actual = object.getIsNumberRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXRequired2, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object;
	bool expected = false;
	bool actual = object.getIsDefaultXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYRequired3, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object;
	bool expected = false;
	bool actual = object.getIsDefaultYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXRequired4, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object;
	bool expected = false;
	bool actual = object.getIsRelativeXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYRequired5, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object;
	bool expected = false;
	bool actual = object.getIsRelativeYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsPlacementRequired6, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object;
	bool expected = false;
	bool actual = object.getIsPlacementRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorRequired7, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object;
	bool expected = false;
	bool actual = object.getIsColorRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsTypePresent0, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object;
	bool expected = true;
	bool actual = object.getIsTypePresent();
	CHECK_EQUAL( expected, actual )
	/* setter does not exist because this attribute is required */
	expected = true;
	actual = object.getIsTypePresent();
	CHECK_EQUAL( expected, actual )
	/* setter does not exist because this attribute is required */
	expected = true;
	actual = object.getIsTypePresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsNumberPresent1, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object;
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
TEST( getIsDefaultXPresent2, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object;
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
TEST( getIsDefaultYPresent3, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object;
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
TEST( getIsRelativeXPresent4, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object;
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
TEST( getIsRelativeYPresent5, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object;
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
TEST( getIsPlacementPresent6, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object;
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
TEST( getIsColorPresent7, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object;
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

TEST( getIsTypeDefaultDefined, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object;
	bool expected = false;
	bool actual = object.getIsTypeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsNumberDefaultDefined, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object;
	bool expected = false;
	bool actual = object.getIsNumberDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXDefaultDefined, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object;
	bool expected = false;
	bool actual = object.getIsDefaultXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYDefaultDefined, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object;
	bool expected = false;
	bool actual = object.getIsDefaultYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXDefaultDefined, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object;
	bool expected = false;
	bool actual = object.getIsRelativeXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYDefaultDefined, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object;
	bool expected = false;
	bool actual = object.getIsRelativeYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsPlacementDefaultDefined, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object;
	bool expected = false;
	bool actual = object.getIsPlacementDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorDefaultDefined, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object;
	bool expected = false;
	bool actual = object.getIsColorDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getTypeDefaultValue, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object;
	MxEnumTopBottom expected;
	MxEnumTopBottom actual = object.getTypeDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getNumberDefaultValue, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object;
	MxNumberNumberLevel expected;
	MxNumberNumberLevel actual = object.getNumberDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultXDefaultValue, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultYDefaultValue, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeXDefaultValue, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeYDefaultValue, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getPlacementDefaultValue, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object;
	MxEnumAboveBelow expected;
	MxEnumAboveBelow actual = object.getPlacementDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getColorDefaultValue, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object;
	MxColor expected;
	MxColor actual = object.getColorDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setType( MxEnumTopBottom( lexicon::enums::TopBottom::top ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 182.7 ) );
	object.setDefaultY( MxNumberTenths( 182.7 ) );
	object.setRelativeX( MxNumberTenths( 182.7 ) );
	object.setRelativeY( MxNumberTenths( 182.7 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#A8A7A6" ) );
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( true );
	expected = "<booksmart type=\"top\" number=\"1\" default-x=\"182.7\" default-y=\"182.7\" relative-x=\"182.7\" relative-y=\"182.7\" placement=\"above\" color=\"#A8A7A6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumTopBottom( lexicon::enums::TopBottom::top ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 182.8 ) );
	object.setDefaultY( MxNumberTenths( 182.8 ) );
	object.setRelativeX( MxNumberTenths( 182.8 ) );
	object.setRelativeY( MxNumberTenths( 182.8 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#A9AAA9A8" ) );
	expected = "<quiet type=\"top\" number=\"1\" default-x=\"182.8\" default-y=\"182.8\" relative-x=\"182.8\" relative-y=\"182.8\" placement=\"below\" color=\"#A9AAA9A8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString2, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumTopBottom( lexicon::enums::TopBottom::top ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 182.9 ) );
	object.setDefaultY( MxNumberTenths( 182.9 ) );
	object.setRelativeX( MxNumberTenths( 182.9 ) );
	object.setRelativeY( MxNumberTenths( 182.9 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#ACABAA" ) );
	expected = "<musicxmlishard type=\"top\" default-x=\"182.9\" default-y=\"182.9\" relative-x=\"182.9\" relative-y=\"182.9\" placement=\"above\" color=\"#ACABAA\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString3, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumTopBottom( lexicon::enums::TopBottom::top ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 183 ) );
	object.setDefaultY( MxNumberTenths( 183 ) );
	object.setRelativeX( MxNumberTenths( 183 ) );
	object.setRelativeY( MxNumberTenths( 183 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#ADAEADAC" ) );
	expected = "<bishop type=\"top\" default-y=\"183\" relative-x=\"183\" relative-y=\"183\" placement=\"below\" color=\"#ADAEADAC\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString4, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumTopBottom( lexicon::enums::TopBottom::top ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 183.1 ) );
	object.setDefaultY( MxNumberTenths( 183.1 ) );
	object.setRelativeX( MxNumberTenths( 183.1 ) );
	object.setRelativeY( MxNumberTenths( 183.1 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#B0AFAE" ) );
	expected = "<charlie type=\"top\" number=\"1\" relative-x=\"183.1\" relative-y=\"183.1\" placement=\"above\" color=\"#B0AFAE\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString5, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumTopBottom( lexicon::enums::TopBottom::top ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 183.2 ) );
	object.setDefaultY( MxNumberTenths( 183.2 ) );
	object.setRelativeX( MxNumberTenths( 183.2 ) );
	object.setRelativeY( MxNumberTenths( 183.2 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#B1B2B1B0" ) );
	expected = "<booksmart type=\"top\" number=\"1\" relative-y=\"183.2\" placement=\"below\" color=\"#B1B2B1B0\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString6, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumTopBottom( lexicon::enums::TopBottom::top ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 183.3 ) );
	object.setDefaultY( MxNumberTenths( 183.3 ) );
	object.setRelativeX( MxNumberTenths( 183.3 ) );
	object.setRelativeY( MxNumberTenths( 183.3 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#B4B3B2" ) );
	expected = "<quiet type=\"top\" default-x=\"183.3\" placement=\"above\" color=\"#B4B3B2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString7, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumTopBottom( lexicon::enums::TopBottom::top ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 183.4 ) );
	object.setDefaultY( MxNumberTenths( 183.4 ) );
	object.setRelativeX( MxNumberTenths( 183.4 ) );
	object.setRelativeY( MxNumberTenths( 183.4 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#B5B6B5B4" ) );
	expected = "<musicxmlishard type=\"top\" default-x=\"183.4\" color=\"#B5B6B5B4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString8, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumTopBottom( lexicon::enums::TopBottom::top ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 183.5 ) );
	object.setDefaultY( MxNumberTenths( 183.5 ) );
	object.setRelativeX( MxNumberTenths( 183.5 ) );
	object.setRelativeY( MxNumberTenths( 183.5 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#B8B7B6" ) );
	expected = "<bishop type=\"top\" number=\"1\" default-x=\"183.5\" default-y=\"183.5\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString9, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumTopBottom( lexicon::enums::TopBottom::top ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 183.6 ) );
	object.setDefaultY( MxNumberTenths( 183.6 ) );
	object.setRelativeX( MxNumberTenths( 183.6 ) );
	object.setRelativeY( MxNumberTenths( 183.6 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#B9BAB9B8" ) );
	expected = "<charlie type=\"top\" number=\"1\" default-y=\"183.6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString10, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumTopBottom( lexicon::enums::TopBottom::top ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 183.7 ) );
	object.setDefaultY( MxNumberTenths( 183.7 ) );
	object.setRelativeX( MxNumberTenths( 183.7 ) );
	object.setRelativeY( MxNumberTenths( 183.7 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#BCBBBA" ) );
	expected = "<booksmart type=\"top\" default-y=\"183.7\" relative-x=\"183.7\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString11, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumTopBottom( lexicon::enums::TopBottom::top ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 183.8 ) );
	object.setDefaultY( MxNumberTenths( 183.8 ) );
	object.setRelativeX( MxNumberTenths( 183.8 ) );
	object.setRelativeY( MxNumberTenths( 183.8 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#BDBEBDBC" ) );
	expected = "<quiet type=\"top\" default-y=\"183.8\" relative-x=\"183.8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString12, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumTopBottom( lexicon::enums::TopBottom::top ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 183.9 ) );
	object.setDefaultY( MxNumberTenths( 183.9 ) );
	object.setRelativeX( MxNumberTenths( 183.9 ) );
	object.setRelativeY( MxNumberTenths( 183.9 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#C0BFBE" ) );
	expected = "<musicxmlishard type=\"top\" number=\"1\" default-x=\"183.9\" relative-x=\"183.9\" relative-y=\"183.9\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString13, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumTopBottom( lexicon::enums::TopBottom::top ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 184 ) );
	object.setDefaultY( MxNumberTenths( 184 ) );
	object.setRelativeX( MxNumberTenths( 184 ) );
	object.setRelativeY( MxNumberTenths( 184 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#C1C2C1C0" ) );
	expected = "<bishop type=\"top\" number=\"1\" default-x=\"184\" relative-x=\"184\" relative-y=\"184\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString14, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumTopBottom( lexicon::enums::TopBottom::top ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 184.1 ) );
	object.setDefaultY( MxNumberTenths( 184.1 ) );
	object.setRelativeX( MxNumberTenths( 184.1 ) );
	object.setRelativeY( MxNumberTenths( 184.1 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#C4C3C2" ) );
	expected = "<charlie type=\"top\" default-x=\"184.1\" relative-x=\"184.1\" relative-y=\"184.1\" placement=\"above\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString15, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumTopBottom( lexicon::enums::TopBottom::top ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 184.2 ) );
	object.setDefaultY( MxNumberTenths( 184.2 ) );
	object.setRelativeX( MxNumberTenths( 184.2 ) );
	object.setRelativeY( MxNumberTenths( 184.2 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#C5C6C5C4" ) );
	expected = "<booksmart type=\"top\" relative-y=\"184.2\" placement=\"below\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString16, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumTopBottom( lexicon::enums::TopBottom::top ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 184.3 ) );
	object.setDefaultY( MxNumberTenths( 184.3 ) );
	object.setRelativeX( MxNumberTenths( 184.3 ) );
	object.setRelativeY( MxNumberTenths( 184.3 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#C8C7C6" ) );
	expected = "<quiet type=\"top\" number=\"1\" default-y=\"184.3\" relative-y=\"184.3\" placement=\"above\" color=\"#C8C7C6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString17, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumTopBottom( lexicon::enums::TopBottom::top ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 184.4 ) );
	object.setDefaultY( MxNumberTenths( 184.4 ) );
	object.setRelativeX( MxNumberTenths( 184.4 ) );
	object.setRelativeY( MxNumberTenths( 184.4 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#C9CAC9C8" ) );
	expected = "<musicxmlishard type=\"top\" number=\"1\" default-y=\"184.4\" relative-y=\"184.4\" placement=\"below\" color=\"#C9CAC9C8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString18, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumTopBottom( lexicon::enums::TopBottom::top ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 184.5 ) );
	object.setDefaultY( MxNumberTenths( 184.5 ) );
	object.setRelativeX( MxNumberTenths( 184.5 ) );
	object.setRelativeY( MxNumberTenths( 184.5 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#CCCBCA" ) );
	expected = "<bishop type=\"top\" default-x=\"184.5\" default-y=\"184.5\" placement=\"above\" color=\"#CCCBCA\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString19, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumTopBottom( lexicon::enums::TopBottom::top ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 184.6 ) );
	object.setDefaultY( MxNumberTenths( 184.6 ) );
	object.setRelativeX( MxNumberTenths( 184.6 ) );
	object.setRelativeY( MxNumberTenths( 184.6 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#CDCECDCC" ) );
	expected = "<charlie type=\"top\" default-x=\"184.6\" default-y=\"184.6\" placement=\"below\" color=\"#CDCECDCC\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString20, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumTopBottom( lexicon::enums::TopBottom::top ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 184.7 ) );
	object.setDefaultY( MxNumberTenths( 184.7 ) );
	object.setRelativeX( MxNumberTenths( 184.7 ) );
	object.setRelativeY( MxNumberTenths( 184.7 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#D0CFCE" ) );
	expected = "<booksmart type=\"top\" number=\"1\" default-x=\"184.7\" relative-x=\"184.7\" placement=\"above\" color=\"#D0CFCE\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString21, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumTopBottom( lexicon::enums::TopBottom::top ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 184.8 ) );
	object.setDefaultY( MxNumberTenths( 184.8 ) );
	object.setRelativeX( MxNumberTenths( 184.8 ) );
	object.setRelativeY( MxNumberTenths( 184.8 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#D1D2D1D0" ) );
	expected = "<quiet type=\"top\" number=\"1\" relative-x=\"184.8\" color=\"#D1D2D1D0\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString22, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumTopBottom( lexicon::enums::TopBottom::top ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 184.9 ) );
	object.setDefaultY( MxNumberTenths( 184.9 ) );
	object.setRelativeX( MxNumberTenths( 184.9 ) );
	object.setRelativeY( MxNumberTenths( 184.9 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#D4D3D2" ) );
	expected = "<musicxmlishard type=\"top\" relative-x=\"184.9\" color=\"#D4D3D2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString23, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumTopBottom( lexicon::enums::TopBottom::top ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 185 ) );
	object.setDefaultY( MxNumberTenths( 185 ) );
	object.setRelativeX( MxNumberTenths( 185 ) );
	object.setRelativeY( MxNumberTenths( 185 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#D5D6D5D4" ) );
	expected = "<bishop type=\"top\" relative-x=\"185\" color=\"#D5D6D5D4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString24, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumTopBottom( lexicon::enums::TopBottom::top ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 185.1 ) );
	object.setDefaultY( MxNumberTenths( 185.1 ) );
	object.setRelativeX( MxNumberTenths( 185.1 ) );
	object.setRelativeY( MxNumberTenths( 185.1 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#D8D7D6" ) );
	expected = "<charlie type=\"top\" number=\"1\" default-x=\"185.1\" default-y=\"185.1\" relative-x=\"185.1\" relative-y=\"185.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString25, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumTopBottom( lexicon::enums::TopBottom::top ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 185.2 ) );
	object.setDefaultY( MxNumberTenths( 185.2 ) );
	object.setRelativeX( MxNumberTenths( 185.2 ) );
	object.setRelativeY( MxNumberTenths( 185.2 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#D9DAD9D8" ) );
	expected = "<booksmart type=\"top\" number=\"1\" default-x=\"185.2\" default-y=\"185.2\" relative-y=\"185.2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString26, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumTopBottom( lexicon::enums::TopBottom::top ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 185.3 ) );
	object.setDefaultY( MxNumberTenths( 185.3 ) );
	object.setRelativeX( MxNumberTenths( 185.3 ) );
	object.setRelativeY( MxNumberTenths( 185.3 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#DCDBDA" ) );
	expected = "<quiet type=\"top\" default-x=\"185.3\" default-y=\"185.3\" relative-y=\"185.3\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString27, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumTopBottom( lexicon::enums::TopBottom::top ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 185.4 ) );
	object.setDefaultY( MxNumberTenths( 185.4 ) );
	object.setRelativeX( MxNumberTenths( 185.4 ) );
	object.setRelativeY( MxNumberTenths( 185.4 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#DDDEDDDC" ) );
	expected = "<musicxmlishard type=\"top\" default-y=\"185.4\" relative-y=\"185.4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString28, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumTopBottom( lexicon::enums::TopBottom::top ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 185.5 ) );
	object.setDefaultY( MxNumberTenths( 185.5 ) );
	object.setRelativeX( MxNumberTenths( 185.5 ) );
	object.setRelativeY( MxNumberTenths( 185.5 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#E0DFDE" ) );
	expected = "<bishop type=\"top\" number=\"1\" relative-y=\"185.5\" placement=\"above\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString29, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumTopBottom( lexicon::enums::TopBottom::top ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 185.6 ) );
	object.setDefaultY( MxNumberTenths( 185.6 ) );
	object.setRelativeX( MxNumberTenths( 185.6 ) );
	object.setRelativeY( MxNumberTenths( 185.6 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#E1E2E1E0" ) );
	expected = "<charlie type=\"top\" number=\"1\" relative-y=\"185.6\" placement=\"below\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString30, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumTopBottom( lexicon::enums::TopBottom::top ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 185.7 ) );
	object.setDefaultY( MxNumberTenths( 185.7 ) );
	object.setRelativeX( MxNumberTenths( 185.7 ) );
	object.setRelativeY( MxNumberTenths( 185.7 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#E4E3E2" ) );
	expected = "<booksmart type=\"top\" default-x=\"185.7\" relative-x=\"185.7\" placement=\"above\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString31, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumTopBottom( lexicon::enums::TopBottom::top ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 185.8 ) );
	object.setDefaultY( MxNumberTenths( 185.8 ) );
	object.setRelativeX( MxNumberTenths( 185.8 ) );
	object.setRelativeY( MxNumberTenths( 185.8 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#E5E6E5E4" ) );
	expected = "<quiet type=\"top\" default-x=\"185.8\" relative-x=\"185.8\" placement=\"below\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString32, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumTopBottom( lexicon::enums::TopBottom::top ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 185.9 ) );
	object.setDefaultY( MxNumberTenths( 185.9 ) );
	object.setRelativeX( MxNumberTenths( 185.9 ) );
	object.setRelativeY( MxNumberTenths( 185.9 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#E8E7E6" ) );
	expected = "<musicxmlishard type=\"top\" number=\"1\" default-x=\"185.9\" default-y=\"185.9\" relative-x=\"185.9\" placement=\"above\" color=\"#E8E7E6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString33, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumTopBottom( lexicon::enums::TopBottom::top ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 186 ) );
	object.setDefaultY( MxNumberTenths( 186 ) );
	object.setRelativeX( MxNumberTenths( 186 ) );
	object.setRelativeY( MxNumberTenths( 186 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#E9EAE9E8" ) );
	expected = "<bishop type=\"top\" number=\"1\" default-y=\"186\" relative-x=\"186\" placement=\"below\" color=\"#E9EAE9E8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString34, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumTopBottom( lexicon::enums::TopBottom::top ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 186.1 ) );
	object.setDefaultY( MxNumberTenths( 186.1 ) );
	object.setRelativeX( MxNumberTenths( 186.1 ) );
	object.setRelativeY( MxNumberTenths( 186.1 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#ECEBEA" ) );
	expected = "<charlie type=\"top\" default-y=\"186.1\" relative-x=\"186.1\" placement=\"above\" color=\"#ECEBEA\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString35, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumTopBottom( lexicon::enums::TopBottom::top ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 186.2 ) );
	object.setDefaultY( MxNumberTenths( 186.2 ) );
	object.setRelativeX( MxNumberTenths( 186.2 ) );
	object.setRelativeY( MxNumberTenths( 186.2 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#EDEEEDEC" ) );
	expected = "<booksmart type=\"top\" default-y=\"186.2\" color=\"#EDEEEDEC\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString36, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumTopBottom( lexicon::enums::TopBottom::top ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 186.3 ) );
	object.setDefaultY( MxNumberTenths( 186.3 ) );
	object.setRelativeX( MxNumberTenths( 186.3 ) );
	object.setRelativeY( MxNumberTenths( 186.3 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#F0EFEE" ) );
	expected = "<quiet type=\"top\" number=\"1\" default-x=\"186.3\" relative-y=\"186.3\" color=\"#F0EFEE\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString37, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumTopBottom( lexicon::enums::TopBottom::top ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 186.4 ) );
	object.setDefaultY( MxNumberTenths( 186.4 ) );
	object.setRelativeX( MxNumberTenths( 186.4 ) );
	object.setRelativeY( MxNumberTenths( 186.4 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#F1F2F1F0" ) );
	expected = "<musicxmlishard type=\"top\" number=\"1\" default-x=\"186.4\" relative-y=\"186.4\" color=\"#F1F2F1F0\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString38, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumTopBottom( lexicon::enums::TopBottom::top ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 186.5 ) );
	object.setDefaultY( MxNumberTenths( 186.5 ) );
	object.setRelativeX( MxNumberTenths( 186.5 ) );
	object.setRelativeY( MxNumberTenths( 186.5 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#F4F3F2" ) );
	expected = "<bishop type=\"top\" default-x=\"186.5\" relative-y=\"186.5\" color=\"#F4F3F2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString39, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumTopBottom( lexicon::enums::TopBottom::top ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 186.6 ) );
	object.setDefaultY( MxNumberTenths( 186.6 ) );
	object.setRelativeX( MxNumberTenths( 186.6 ) );
	object.setRelativeY( MxNumberTenths( 186.6 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#F5F6F5F4" ) );
	expected = "<charlie type=\"top\" relative-y=\"186.6\" color=\"#F5F6F5F4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString40, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumTopBottom( lexicon::enums::TopBottom::top ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 186.7 ) );
	object.setDefaultY( MxNumberTenths( 186.7 ) );
	object.setRelativeX( MxNumberTenths( 186.7 ) );
	object.setRelativeY( MxNumberTenths( 186.7 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#F8F7F6" ) );
	expected = "<booksmart type=\"top\" number=\"1\" default-y=\"186.7\" relative-x=\"186.7\" relative-y=\"186.7\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString41, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumTopBottom( lexicon::enums::TopBottom::top ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 186.8 ) );
	object.setDefaultY( MxNumberTenths( 186.8 ) );
	object.setRelativeX( MxNumberTenths( 186.8 ) );
	object.setRelativeY( MxNumberTenths( 186.8 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#F9FAF9F8" ) );
	expected = "<quiet type=\"top\" number=\"1\" default-y=\"186.8\" relative-x=\"186.8\" relative-y=\"186.8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString42, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumTopBottom( lexicon::enums::TopBottom::top ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 186.9 ) );
	object.setDefaultY( MxNumberTenths( 186.9 ) );
	object.setRelativeX( MxNumberTenths( 186.9 ) );
	object.setRelativeY( MxNumberTenths( 186.9 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#FCFBFA" ) );
	expected = "<musicxmlishard type=\"top\" default-x=\"186.9\" default-y=\"186.9\" relative-x=\"186.9\" placement=\"above\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString43, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumTopBottom( lexicon::enums::TopBottom::top ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 187 ) );
	object.setDefaultY( MxNumberTenths( 187 ) );
	object.setRelativeX( MxNumberTenths( 187 ) );
	object.setRelativeY( MxNumberTenths( 187 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#FDFEFDFC" ) );
	expected = "<bishop type=\"top\" default-x=\"187\" default-y=\"187\" relative-x=\"187\" placement=\"below\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString44, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumTopBottom( lexicon::enums::TopBottom::top ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 187.1 ) );
	object.setDefaultY( MxNumberTenths( 187.1 ) );
	object.setRelativeX( MxNumberTenths( 187.1 ) );
	object.setRelativeY( MxNumberTenths( 187.1 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#00FFFE" ) );
	expected = "<charlie type=\"top\" number=\"1\" default-x=\"187.1\" relative-x=\"187.1\" placement=\"above\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString45, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumTopBottom( lexicon::enums::TopBottom::top ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 187.2 ) );
	object.setDefaultY( MxNumberTenths( 187.2 ) );
	object.setRelativeX( MxNumberTenths( 187.2 ) );
	object.setRelativeY( MxNumberTenths( 187.2 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#01020100" ) );
	expected = "<booksmart type=\"top\" number=\"1\" placement=\"below\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString46, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumTopBottom( lexicon::enums::TopBottom::top ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 187.3 ) );
	object.setDefaultY( MxNumberTenths( 187.3 ) );
	object.setRelativeX( MxNumberTenths( 187.3 ) );
	object.setRelativeY( MxNumberTenths( 187.3 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#040302" ) );
	expected = "<quiet type=\"top\" placement=\"above\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString47, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumTopBottom( lexicon::enums::TopBottom::top ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 187.4 ) );
	object.setDefaultY( MxNumberTenths( 187.4 ) );
	object.setRelativeX( MxNumberTenths( 187.4 ) );
	object.setRelativeY( MxNumberTenths( 187.4 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#05060504" ) );
	expected = "<musicxmlishard type=\"top\" placement=\"below\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString48, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumTopBottom( lexicon::enums::TopBottom::top ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 187.5 ) );
	object.setDefaultY( MxNumberTenths( 187.5 ) );
	object.setRelativeX( MxNumberTenths( 187.5 ) );
	object.setRelativeY( MxNumberTenths( 187.5 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#080706" ) );
	expected = "<bishop type=\"top\" number=\"1\" default-x=\"187.5\" default-y=\"187.5\" relative-y=\"187.5\" placement=\"above\" color=\"#080706\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString49, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumTopBottom( lexicon::enums::TopBottom::top ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 187.6 ) );
	object.setDefaultY( MxNumberTenths( 187.6 ) );
	object.setRelativeX( MxNumberTenths( 187.6 ) );
	object.setRelativeY( MxNumberTenths( 187.6 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#090A0908" ) );
	expected = "<charlie type=\"top\" number=\"1\" default-x=\"187.6\" default-y=\"187.6\" relative-y=\"187.6\" color=\"#090A0908\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString50, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumTopBottom( lexicon::enums::TopBottom::top ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 187.7 ) );
	object.setDefaultY( MxNumberTenths( 187.7 ) );
	object.setRelativeX( MxNumberTenths( 187.7 ) );
	object.setRelativeY( MxNumberTenths( 187.7 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#0C0B0A" ) );
	expected = "<booksmart type=\"top\" default-x=\"187.7\" default-y=\"187.7\" relative-x=\"187.7\" relative-y=\"187.7\" color=\"#0C0B0A\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString51, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumTopBottom( lexicon::enums::TopBottom::top ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 187.8 ) );
	object.setDefaultY( MxNumberTenths( 187.8 ) );
	object.setRelativeX( MxNumberTenths( 187.8 ) );
	object.setRelativeY( MxNumberTenths( 187.8 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#0D0E0D0C" ) );
	expected = "<quiet type=\"top\" default-y=\"187.8\" relative-x=\"187.8\" relative-y=\"187.8\" color=\"#0D0E0D0C\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString52, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumTopBottom( lexicon::enums::TopBottom::top ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 187.9 ) );
	object.setDefaultY( MxNumberTenths( 187.9 ) );
	object.setRelativeX( MxNumberTenths( 187.9 ) );
	object.setRelativeY( MxNumberTenths( 187.9 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#100F0E" ) );
	expected = "<musicxmlishard type=\"top\" number=\"1\" relative-x=\"187.9\" relative-y=\"187.9\" color=\"#100F0E\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString53, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumTopBottom( lexicon::enums::TopBottom::top ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 188 ) );
	object.setDefaultY( MxNumberTenths( 188 ) );
	object.setRelativeX( MxNumberTenths( 188 ) );
	object.setRelativeY( MxNumberTenths( 188 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#11121110" ) );
	expected = "<bishop type=\"top\" number=\"1\" relative-x=\"188\" relative-y=\"188\" color=\"#11121110\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString54, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumTopBottom( lexicon::enums::TopBottom::top ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 188.1 ) );
	object.setDefaultY( MxNumberTenths( 188.1 ) );
	object.setRelativeX( MxNumberTenths( 188.1 ) );
	object.setRelativeY( MxNumberTenths( 188.1 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#141312" ) );
	expected = "<charlie type=\"top\" default-x=\"188.1\" relative-x=\"188.1\" color=\"#141312\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString55, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumTopBottom( lexicon::enums::TopBottom::top ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 188.2 ) );
	object.setDefaultY( MxNumberTenths( 188.2 ) );
	object.setRelativeX( MxNumberTenths( 188.2 ) );
	object.setRelativeY( MxNumberTenths( 188.2 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#15161514" ) );
	expected = "<booksmart type=\"top\" default-x=\"188.2\" color=\"#15161514\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString56, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumTopBottom( lexicon::enums::TopBottom::top ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 188.3 ) );
	object.setDefaultY( MxNumberTenths( 188.3 ) );
	object.setRelativeX( MxNumberTenths( 188.3 ) );
	object.setRelativeY( MxNumberTenths( 188.3 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#181716" ) );
	expected = "<quiet type=\"top\" number=\"1\" default-x=\"188.3\" default-y=\"188.3\" placement=\"above\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString57, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumTopBottom( lexicon::enums::TopBottom::top ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 188.4 ) );
	object.setDefaultY( MxNumberTenths( 188.4 ) );
	object.setRelativeX( MxNumberTenths( 188.4 ) );
	object.setRelativeY( MxNumberTenths( 188.4 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#191A1918" ) );
	expected = "<musicxmlishard type=\"top\" number=\"1\" default-y=\"188.4\" placement=\"below\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString58, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumTopBottom( lexicon::enums::TopBottom::top ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 188.5 ) );
	object.setDefaultY( MxNumberTenths( 188.5 ) );
	object.setRelativeX( MxNumberTenths( 188.5 ) );
	object.setRelativeY( MxNumberTenths( 188.5 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#1C1B1A" ) );
	expected = "<bishop type=\"top\" default-y=\"188.5\" placement=\"above\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString59, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumTopBottom( lexicon::enums::TopBottom::top ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 188.6 ) );
	object.setDefaultY( MxNumberTenths( 188.6 ) );
	object.setRelativeX( MxNumberTenths( 188.6 ) );
	object.setRelativeY( MxNumberTenths( 188.6 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#1D1E1D1C" ) );
	expected = "<charlie type=\"top\" default-y=\"188.6\" placement=\"below\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString60, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumTopBottom( lexicon::enums::TopBottom::top ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 188.7 ) );
	object.setDefaultY( MxNumberTenths( 188.7 ) );
	object.setRelativeX( MxNumberTenths( 188.7 ) );
	object.setRelativeY( MxNumberTenths( 188.7 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#201F1E" ) );
	expected = "<booksmart type=\"top\" number=\"1\" default-x=\"188.7\" relative-x=\"188.7\" relative-y=\"188.7\" placement=\"above\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString61, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumTopBottom( lexicon::enums::TopBottom::top ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 188.8 ) );
	object.setDefaultY( MxNumberTenths( 188.8 ) );
	object.setRelativeX( MxNumberTenths( 188.8 ) );
	object.setRelativeY( MxNumberTenths( 188.8 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#21222120" ) );
	expected = "<quiet type=\"top\" number=\"1\" default-x=\"188.8\" relative-x=\"188.8\" relative-y=\"188.8\" placement=\"below\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString62, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumTopBottom( lexicon::enums::TopBottom::top ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 188.9 ) );
	object.setDefaultY( MxNumberTenths( 188.9 ) );
	object.setRelativeX( MxNumberTenths( 188.9 ) );
	object.setRelativeY( MxNumberTenths( 188.9 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#242322" ) );
	expected = "<musicxmlishard type=\"top\" default-x=\"188.9\" relative-x=\"188.9\" relative-y=\"188.9\" placement=\"above\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString63, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumTopBottom( lexicon::enums::TopBottom::top ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 189 ) );
	object.setDefaultY( MxNumberTenths( 189 ) );
	object.setRelativeX( MxNumberTenths( 189 ) );
	object.setRelativeY( MxNumberTenths( 189 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#25262524" ) );
	expected = "<bishop type=\"top\" relative-x=\"189\" relative-y=\"189\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString64, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumTopBottom( lexicon::enums::TopBottom::top ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 189.1 ) );
	object.setDefaultY( MxNumberTenths( 189.1 ) );
	object.setRelativeX( MxNumberTenths( 189.1 ) );
	object.setRelativeY( MxNumberTenths( 189.1 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#282726" ) );
	expected = "<charlie type=\"top\" number=\"1\" default-y=\"189.1\" relative-x=\"189.1\" relative-y=\"189.1\" color=\"#282726\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString65, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumTopBottom( lexicon::enums::TopBottom::top ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 189.2 ) );
	object.setDefaultY( MxNumberTenths( 189.2 ) );
	object.setRelativeX( MxNumberTenths( 189.2 ) );
	object.setRelativeY( MxNumberTenths( 189.2 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#292A2928" ) );
	expected = "<booksmart type=\"top\" number=\"1\" default-y=\"189.2\" relative-y=\"189.2\" color=\"#292A2928\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString66, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumTopBottom( lexicon::enums::TopBottom::top ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 189.3 ) );
	object.setDefaultY( MxNumberTenths( 189.3 ) );
	object.setRelativeX( MxNumberTenths( 189.3 ) );
	object.setRelativeY( MxNumberTenths( 189.3 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#2C2B2A" ) );
	expected = "<quiet type=\"top\" default-x=\"189.3\" default-y=\"189.3\" color=\"#2C2B2A\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString67, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumTopBottom( lexicon::enums::TopBottom::top ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 189.4 ) );
	object.setDefaultY( MxNumberTenths( 189.4 ) );
	object.setRelativeX( MxNumberTenths( 189.4 ) );
	object.setRelativeY( MxNumberTenths( 189.4 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#2D2E2D2C" ) );
	expected = "<musicxmlishard type=\"top\" default-x=\"189.4\" default-y=\"189.4\" color=\"#2D2E2D2C\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString68, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumTopBottom( lexicon::enums::TopBottom::top ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 189.5 ) );
	object.setDefaultY( MxNumberTenths( 189.5 ) );
	object.setRelativeX( MxNumberTenths( 189.5 ) );
	object.setRelativeY( MxNumberTenths( 189.5 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#302F2E" ) );
	expected = "<bishop type=\"top\" number=\"1\" default-x=\"189.5\" color=\"#302F2E\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString69, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumTopBottom( lexicon::enums::TopBottom::top ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 189.6 ) );
	object.setDefaultY( MxNumberTenths( 189.6 ) );
	object.setRelativeX( MxNumberTenths( 189.6 ) );
	object.setRelativeY( MxNumberTenths( 189.6 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#31323130" ) );
	expected = "<charlie type=\"top\" number=\"1\" color=\"#31323130\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString70, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumTopBottom( lexicon::enums::TopBottom::top ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 189.7 ) );
	object.setDefaultY( MxNumberTenths( 189.7 ) );
	object.setRelativeX( MxNumberTenths( 189.7 ) );
	object.setRelativeY( MxNumberTenths( 189.7 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#343332" ) );
	expected = "<booksmart type=\"top\" relative-x=\"189.7\" placement=\"above\" color=\"#343332\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString71, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumTopBottom( lexicon::enums::TopBottom::top ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 189.8 ) );
	object.setDefaultY( MxNumberTenths( 189.8 ) );
	object.setRelativeX( MxNumberTenths( 189.8 ) );
	object.setRelativeY( MxNumberTenths( 189.8 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#35363534" ) );
	expected = "<quiet type=\"top\" relative-x=\"189.8\" placement=\"below\" color=\"#35363534\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString72, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumTopBottom( lexicon::enums::TopBottom::top ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 189.9 ) );
	object.setDefaultY( MxNumberTenths( 189.9 ) );
	object.setRelativeX( MxNumberTenths( 189.9 ) );
	object.setRelativeY( MxNumberTenths( 189.9 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#383736" ) );
	expected = "<musicxmlishard type=\"top\" number=\"1\" default-x=\"189.9\" default-y=\"189.9\" relative-x=\"189.9\" relative-y=\"189.9\" placement=\"above\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString73, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumTopBottom( lexicon::enums::TopBottom::top ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 190 ) );
	object.setDefaultY( MxNumberTenths( 190 ) );
	object.setRelativeX( MxNumberTenths( 190 ) );
	object.setRelativeY( MxNumberTenths( 190 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#393A3938" ) );
	expected = "<bishop type=\"top\" number=\"1\" default-x=\"190\" default-y=\"190\" relative-x=\"190\" relative-y=\"190\" placement=\"below\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString74, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumTopBottom( lexicon::enums::TopBottom::top ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 190.1 ) );
	object.setDefaultY( MxNumberTenths( 190.1 ) );
	object.setRelativeX( MxNumberTenths( 190.1 ) );
	object.setRelativeY( MxNumberTenths( 190.1 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#3C3B3A" ) );
	expected = "<charlie type=\"top\" default-x=\"190.1\" default-y=\"190.1\" relative-x=\"190.1\" relative-y=\"190.1\" placement=\"above\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString75, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumTopBottom( lexicon::enums::TopBottom::top ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 190.2 ) );
	object.setDefaultY( MxNumberTenths( 190.2 ) );
	object.setRelativeX( MxNumberTenths( 190.2 ) );
	object.setRelativeY( MxNumberTenths( 190.2 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#3D3E3D3C" ) );
	expected = "<booksmart type=\"top\" default-y=\"190.2\" relative-y=\"190.2\" placement=\"below\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString76, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumTopBottom( lexicon::enums::TopBottom::top ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 190.3 ) );
	object.setDefaultY( MxNumberTenths( 190.3 ) );
	object.setRelativeX( MxNumberTenths( 190.3 ) );
	object.setRelativeY( MxNumberTenths( 190.3 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#403F3E" ) );
	expected = "<quiet type=\"top\" number=\"1\" relative-y=\"190.3\" placement=\"above\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString77, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumTopBottom( lexicon::enums::TopBottom::top ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 190.4 ) );
	object.setDefaultY( MxNumberTenths( 190.4 ) );
	object.setRelativeX( MxNumberTenths( 190.4 ) );
	object.setRelativeY( MxNumberTenths( 190.4 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#41424140" ) );
	expected = "<musicxmlishard type=\"top\" number=\"1\" relative-y=\"190.4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString78, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumTopBottom( lexicon::enums::TopBottom::top ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 190.5 ) );
	object.setDefaultY( MxNumberTenths( 190.5 ) );
	object.setRelativeX( MxNumberTenths( 190.5 ) );
	object.setRelativeY( MxNumberTenths( 190.5 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#444342" ) );
	expected = "<bishop type=\"top\" default-x=\"190.5\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString79, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumTopBottom( lexicon::enums::TopBottom::top ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 190.6 ) );
	object.setDefaultY( MxNumberTenths( 190.6 ) );
	object.setRelativeX( MxNumberTenths( 190.6 ) );
	object.setRelativeY( MxNumberTenths( 190.6 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#45464544" ) );
	expected = "<charlie type=\"top\" default-x=\"190.6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString80, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumTopBottom( lexicon::enums::TopBottom::top ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 190.7 ) );
	object.setDefaultY( MxNumberTenths( 190.7 ) );
	object.setRelativeX( MxNumberTenths( 190.7 ) );
	object.setRelativeY( MxNumberTenths( 190.7 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#484746" ) );
	expected = "<booksmart type=\"top\" number=\"1\" default-x=\"190.7\" default-y=\"190.7\" relative-x=\"190.7\" color=\"#484746\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString81, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumTopBottom( lexicon::enums::TopBottom::top ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 190.8 ) );
	object.setDefaultY( MxNumberTenths( 190.8 ) );
	object.setRelativeX( MxNumberTenths( 190.8 ) );
	object.setRelativeY( MxNumberTenths( 190.8 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#494A4948" ) );
	expected = "<quiet type=\"top\" number=\"1\" default-y=\"190.8\" relative-x=\"190.8\" color=\"#494A4948\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString82, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumTopBottom( lexicon::enums::TopBottom::top ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 190.9 ) );
	object.setDefaultY( MxNumberTenths( 190.9 ) );
	object.setRelativeX( MxNumberTenths( 190.9 ) );
	object.setRelativeY( MxNumberTenths( 190.9 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#4C4B4A" ) );
	expected = "<musicxmlishard type=\"top\" default-y=\"190.9\" relative-x=\"190.9\" color=\"#4C4B4A\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString83, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumTopBottom( lexicon::enums::TopBottom::top ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 191 ) );
	object.setDefaultY( MxNumberTenths( 191 ) );
	object.setRelativeX( MxNumberTenths( 191 ) );
	object.setRelativeY( MxNumberTenths( 191 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#4D4E4D4C" ) );
	expected = "<bishop type=\"top\" default-y=\"191\" relative-x=\"191\" color=\"#4D4E4D4C\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString84, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumTopBottom( lexicon::enums::TopBottom::top ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 191.1 ) );
	object.setDefaultY( MxNumberTenths( 191.1 ) );
	object.setRelativeX( MxNumberTenths( 191.1 ) );
	object.setRelativeY( MxNumberTenths( 191.1 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#504F4E" ) );
	expected = "<charlie type=\"top\" number=\"1\" default-x=\"191.1\" relative-x=\"191.1\" relative-y=\"191.1\" placement=\"above\" color=\"#504F4E\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString85, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumTopBottom( lexicon::enums::TopBottom::top ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 191.2 ) );
	object.setDefaultY( MxNumberTenths( 191.2 ) );
	object.setRelativeX( MxNumberTenths( 191.2 ) );
	object.setRelativeY( MxNumberTenths( 191.2 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#51525150" ) );
	expected = "<booksmart type=\"top\" number=\"1\" default-x=\"191.2\" relative-y=\"191.2\" placement=\"below\" color=\"#51525150\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString86, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumTopBottom( lexicon::enums::TopBottom::top ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 191.3 ) );
	object.setDefaultY( MxNumberTenths( 191.3 ) );
	object.setRelativeX( MxNumberTenths( 191.3 ) );
	object.setRelativeY( MxNumberTenths( 191.3 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#545352" ) );
	expected = "<quiet type=\"top\" default-x=\"191.3\" relative-y=\"191.3\" placement=\"above\" color=\"#545352\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString87, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumTopBottom( lexicon::enums::TopBottom::top ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 191.4 ) );
	object.setDefaultY( MxNumberTenths( 191.4 ) );
	object.setRelativeX( MxNumberTenths( 191.4 ) );
	object.setRelativeY( MxNumberTenths( 191.4 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#55565554" ) );
	expected = "<musicxmlishard type=\"top\" relative-y=\"191.4\" placement=\"below\" color=\"#55565554\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString88, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumTopBottom( lexicon::enums::TopBottom::top ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 191.5 ) );
	object.setDefaultY( MxNumberTenths( 191.5 ) );
	object.setRelativeX( MxNumberTenths( 191.5 ) );
	object.setRelativeY( MxNumberTenths( 191.5 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#585756" ) );
	expected = "<bishop type=\"top\" number=\"1\" default-y=\"191.5\" relative-y=\"191.5\" placement=\"above\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString89, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumTopBottom( lexicon::enums::TopBottom::top ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 191.6 ) );
	object.setDefaultY( MxNumberTenths( 191.6 ) );
	object.setRelativeX( MxNumberTenths( 191.6 ) );
	object.setRelativeY( MxNumberTenths( 191.6 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#595A5958" ) );
	expected = "<charlie type=\"top\" number=\"1\" default-y=\"191.6\" relative-y=\"191.6\" placement=\"below\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString90, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumTopBottom( lexicon::enums::TopBottom::top ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 191.7 ) );
	object.setDefaultY( MxNumberTenths( 191.7 ) );
	object.setRelativeX( MxNumberTenths( 191.7 ) );
	object.setRelativeY( MxNumberTenths( 191.7 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#5C5B5A" ) );
	expected = "<booksmart type=\"top\" default-x=\"191.7\" default-y=\"191.7\" relative-x=\"191.7\" placement=\"above\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString91, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumTopBottom( lexicon::enums::TopBottom::top ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 191.8 ) );
	object.setDefaultY( MxNumberTenths( 191.8 ) );
	object.setRelativeX( MxNumberTenths( 191.8 ) );
	object.setRelativeY( MxNumberTenths( 191.8 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#5D5E5D5C" ) );
	expected = "<quiet type=\"top\" default-x=\"191.8\" default-y=\"191.8\" relative-x=\"191.8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString92, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumTopBottom( lexicon::enums::TopBottom::top ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 191.9 ) );
	object.setDefaultY( MxNumberTenths( 191.9 ) );
	object.setRelativeX( MxNumberTenths( 191.9 ) );
	object.setRelativeY( MxNumberTenths( 191.9 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#605F5E" ) );
	expected = "<musicxmlishard type=\"top\" number=\"1\" default-x=\"191.9\" relative-x=\"191.9\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString93, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumTopBottom( lexicon::enums::TopBottom::top ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 192 ) );
	object.setDefaultY( MxNumberTenths( 192 ) );
	object.setRelativeX( MxNumberTenths( 192 ) );
	object.setRelativeY( MxNumberTenths( 192 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#61626160" ) );
	expected = "<bishop type=\"top\" number=\"1\" relative-x=\"192\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString94, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumTopBottom( lexicon::enums::TopBottom::top ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 192.1 ) );
	object.setDefaultY( MxNumberTenths( 192.1 ) );
	object.setRelativeX( MxNumberTenths( 192.1 ) );
	object.setRelativeY( MxNumberTenths( 192.1 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#646362" ) );
	expected = "<charlie type=\"top\" relative-x=\"192.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString95, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumTopBottom( lexicon::enums::TopBottom::top ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 192.2 ) );
	object.setDefaultY( MxNumberTenths( 192.2 ) );
	object.setRelativeX( MxNumberTenths( 192.2 ) );
	object.setRelativeY( MxNumberTenths( 192.2 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#65666564" ) );
	expected = "<booksmart type=\"top\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString96, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumTopBottom( lexicon::enums::TopBottom::top ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 192.3 ) );
	object.setDefaultY( MxNumberTenths( 192.3 ) );
	object.setRelativeX( MxNumberTenths( 192.3 ) );
	object.setRelativeY( MxNumberTenths( 192.3 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#686766" ) );
	expected = "<quiet type=\"top\" number=\"1\" default-x=\"192.3\" default-y=\"192.3\" relative-y=\"192.3\" color=\"#686766\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString97, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumTopBottom( lexicon::enums::TopBottom::top ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 192.4 ) );
	object.setDefaultY( MxNumberTenths( 192.4 ) );
	object.setRelativeX( MxNumberTenths( 192.4 ) );
	object.setRelativeY( MxNumberTenths( 192.4 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#696A6968" ) );
	expected = "<musicxmlishard type=\"top\" number=\"1\" default-x=\"192.4\" default-y=\"192.4\" relative-y=\"192.4\" color=\"#696A6968\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString98, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumTopBottom( lexicon::enums::TopBottom::top ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 192.5 ) );
	object.setDefaultY( MxNumberTenths( 192.5 ) );
	object.setRelativeX( MxNumberTenths( 192.5 ) );
	object.setRelativeY( MxNumberTenths( 192.5 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::above ) );
	object.setColor( MxColor( "#6C6B6A" ) );
	expected = "<bishop type=\"top\" default-x=\"192.5\" default-y=\"192.5\" relative-y=\"192.5\" placement=\"above\" color=\"#6C6B6A\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString99, MxCxEmptyNonArpeggiate )
{
	MxCxEmptyNonArpeggiate object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsPlacementPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumTopBottom( lexicon::enums::TopBottom::top ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDefaultX( MxNumberTenths( 192.6 ) );
	object.setDefaultY( MxNumberTenths( 192.6 ) );
	object.setRelativeX( MxNumberTenths( 192.6 ) );
	object.setRelativeY( MxNumberTenths( 192.6 ) );
	object.setPlacement( MxEnumAboveBelow( lexicon::enums::AboveBelow::below ) );
	object.setColor( MxColor( "#6D6E6D6C" ) );
	expected = "<charlie type=\"top\" default-y=\"192.6\" relative-y=\"192.6\" placement=\"below\" color=\"#6D6E6D6C\"/>";
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


