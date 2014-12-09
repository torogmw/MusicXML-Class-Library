/** *******************************************************
  * 
  * MxCxEmptyDashesTest.cpp
  * Created: 2014-12-03 16:31:28
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxCxEmptyDashes.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxCxEmptyDashes )
{
	MxCxEmptyDashes object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxCxEmptyDashes )
{
	MxCxEmptyDashes object;
	std::string expected = ( MxEnumStartStopContinue(  ) ).toString();
	std::string actual = object.getType().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues1, MxCxEmptyDashes )
{
	MxCxEmptyDashes object;
	std::string expected = ( MxNumberNumberLevel(  ) ).toString();
	std::string actual = object.getNumber().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues2, MxCxEmptyDashes )
{
	MxCxEmptyDashes object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDashLength().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues3, MxCxEmptyDashes )
{
	MxCxEmptyDashes object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getSpaceLength().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues4, MxCxEmptyDashes )
{
	MxCxEmptyDashes object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues5, MxCxEmptyDashes )
{
	MxCxEmptyDashes object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues6, MxCxEmptyDashes )
{
	MxCxEmptyDashes object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues7, MxCxEmptyDashes )
{
	MxCxEmptyDashes object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues8, MxCxEmptyDashes )
{
	MxCxEmptyDashes object;
	std::string expected = ( MxColor(  ) ).toString();
	std::string actual = object.getColor().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* Ctor tests with values  -------------------------------------------------- */

TEST( ctorValueAndElementName0, MxCxEmptyDashes )
{
	MxCxEmptyDashes object( "booksmart" );
	std::string expected;
	std::string actual;
	expected = "booksmart";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName2, MxCxEmptyDashes )
{
	MxCxEmptyDashes object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	expected = "musicxmlishard";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName4, MxCxEmptyDashes )
{
	MxCxEmptyDashes object( "charlie" );
	std::string expected;
	std::string actual;
	expected = "charlie";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName6, MxCxEmptyDashes )
{
	MxCxEmptyDashes object( "quiet" );
	std::string expected;
	std::string actual;
	expected = "quiet";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValueAndElementName8, MxCxEmptyDashes )
{
	MxCxEmptyDashes object( "bishop" );
	std::string expected;
	std::string actual;
	expected = "bishop";
	actual = object.getElementName();
	CHECK_EQUAL( expected, actual )
}

/* End: Ctor tests with values  --------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxCxEmptyDashes )
{
	MxCxEmptyDashes object;
	std::string expected = "MxCxEmptyDashes";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxCxEmptyDashes )
{
	MxCxEmptyDashes object;
	std::string expected = "dashes";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxCxEmptyDashes )
{
	MxCxEmptyDashes object;
	std::string expected = "The dashes type represents dashes, used for instance with cresc. and dim. marks.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setType0, MxCxEmptyDashes )
{
	MxEnumStartStopContinue value1( lexicon::enums::StartStopContinue::continue_ );
	MxEnumStartStopContinue value2( lexicon::enums::StartStopContinue::stop );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyDashes object;
	object.setType( value1 );
	MxEnumStartStopContinue expected = value1;
	MxEnumStartStopContinue actual = object.getType();
	CHECK_EQUAL( expected, actual )
	object.setType( value2 );
	expected = value2;
	actual = object.getType();
	CHECK_EQUAL( expected, actual )
}
TEST( setNumber1, MxCxEmptyDashes )
{
	MxNumberNumberLevel value1( 1 );
	MxNumberNumberLevel value2( 2 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyDashes object;
	object.setNumber( value1 );
	MxNumberNumberLevel expected = value1;
	MxNumberNumberLevel actual = object.getNumber();
	CHECK_EQUAL( expected, actual )
	object.setNumber( value2 );
	expected = value2;
	actual = object.getNumber();
	CHECK_EQUAL( expected, actual )
}
TEST( setDashLength2, MxCxEmptyDashes )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyDashes object;
	object.setDashLength( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDashLength();
	CHECK_EQUAL( expected, actual )
	object.setDashLength( value2 );
	expected = value2;
	actual = object.getDashLength();
	CHECK_EQUAL( expected, actual )
}
TEST( setSpaceLength3, MxCxEmptyDashes )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyDashes object;
	object.setSpaceLength( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getSpaceLength();
	CHECK_EQUAL( expected, actual )
	object.setSpaceLength( value2 );
	expected = value2;
	actual = object.getSpaceLength();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultX4, MxCxEmptyDashes )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyDashes object;
	object.setDefaultX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
	object.setDefaultX( value2 );
	expected = value2;
	actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultY5, MxCxEmptyDashes )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyDashes object;
	object.setDefaultY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
	object.setDefaultY( value2 );
	expected = value2;
	actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeX6, MxCxEmptyDashes )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyDashes object;
	object.setRelativeX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
	object.setRelativeX( value2 );
	expected = value2;
	actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeY7, MxCxEmptyDashes )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyDashes object;
	object.setRelativeY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
	object.setRelativeY( value2 );
	expected = value2;
	actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
}
TEST( setColor8, MxCxEmptyDashes )
{
	MxColor value1( "#12131415" );
	MxColor value2( 155, 34, 145, 192 );
	CHECK( ( value1 != value2 ) )
	MxCxEmptyDashes object;
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

TEST( getIsTypeRequired0, MxCxEmptyDashes )
{
	MxCxEmptyDashes object;
	bool expected = true;
	bool actual = object.getIsTypeRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsNumberRequired1, MxCxEmptyDashes )
{
	MxCxEmptyDashes object;
	bool expected = false;
	bool actual = object.getIsNumberRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDashLengthRequired2, MxCxEmptyDashes )
{
	MxCxEmptyDashes object;
	bool expected = false;
	bool actual = object.getIsDashLengthRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsSpaceLengthRequired3, MxCxEmptyDashes )
{
	MxCxEmptyDashes object;
	bool expected = false;
	bool actual = object.getIsSpaceLengthRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXRequired4, MxCxEmptyDashes )
{
	MxCxEmptyDashes object;
	bool expected = false;
	bool actual = object.getIsDefaultXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYRequired5, MxCxEmptyDashes )
{
	MxCxEmptyDashes object;
	bool expected = false;
	bool actual = object.getIsDefaultYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXRequired6, MxCxEmptyDashes )
{
	MxCxEmptyDashes object;
	bool expected = false;
	bool actual = object.getIsRelativeXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYRequired7, MxCxEmptyDashes )
{
	MxCxEmptyDashes object;
	bool expected = false;
	bool actual = object.getIsRelativeYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorRequired8, MxCxEmptyDashes )
{
	MxCxEmptyDashes object;
	bool expected = false;
	bool actual = object.getIsColorRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsTypePresent0, MxCxEmptyDashes )
{
	MxCxEmptyDashes object;
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
TEST( getIsNumberPresent1, MxCxEmptyDashes )
{
	MxCxEmptyDashes object;
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
TEST( getIsDashLengthPresent2, MxCxEmptyDashes )
{
	MxCxEmptyDashes object;
	bool expected = false;
	bool actual = object.getIsDashLengthPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsDashLengthPresent( true );
	expected = true;
	actual = object.getIsDashLengthPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsDashLengthPresent( false );
	expected = false;
	actual = object.getIsDashLengthPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsSpaceLengthPresent3, MxCxEmptyDashes )
{
	MxCxEmptyDashes object;
	bool expected = false;
	bool actual = object.getIsSpaceLengthPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsSpaceLengthPresent( true );
	expected = true;
	actual = object.getIsSpaceLengthPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsSpaceLengthPresent( false );
	expected = false;
	actual = object.getIsSpaceLengthPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXPresent4, MxCxEmptyDashes )
{
	MxCxEmptyDashes object;
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
TEST( getIsDefaultYPresent5, MxCxEmptyDashes )
{
	MxCxEmptyDashes object;
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
TEST( getIsRelativeXPresent6, MxCxEmptyDashes )
{
	MxCxEmptyDashes object;
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
TEST( getIsRelativeYPresent7, MxCxEmptyDashes )
{
	MxCxEmptyDashes object;
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
TEST( getIsColorPresent8, MxCxEmptyDashes )
{
	MxCxEmptyDashes object;
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

TEST( getIsTypeDefaultDefined, MxCxEmptyDashes )
{
	MxCxEmptyDashes object;
	bool expected = false;
	bool actual = object.getIsTypeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsNumberDefaultDefined, MxCxEmptyDashes )
{
	MxCxEmptyDashes object;
	bool expected = false;
	bool actual = object.getIsNumberDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDashLengthDefaultDefined, MxCxEmptyDashes )
{
	MxCxEmptyDashes object;
	bool expected = false;
	bool actual = object.getIsDashLengthDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsSpaceLengthDefaultDefined, MxCxEmptyDashes )
{
	MxCxEmptyDashes object;
	bool expected = false;
	bool actual = object.getIsSpaceLengthDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXDefaultDefined, MxCxEmptyDashes )
{
	MxCxEmptyDashes object;
	bool expected = false;
	bool actual = object.getIsDefaultXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYDefaultDefined, MxCxEmptyDashes )
{
	MxCxEmptyDashes object;
	bool expected = false;
	bool actual = object.getIsDefaultYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXDefaultDefined, MxCxEmptyDashes )
{
	MxCxEmptyDashes object;
	bool expected = false;
	bool actual = object.getIsRelativeXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYDefaultDefined, MxCxEmptyDashes )
{
	MxCxEmptyDashes object;
	bool expected = false;
	bool actual = object.getIsRelativeYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorDefaultDefined, MxCxEmptyDashes )
{
	MxCxEmptyDashes object;
	bool expected = false;
	bool actual = object.getIsColorDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getTypeDefaultValue, MxCxEmptyDashes )
{
	MxCxEmptyDashes object;
	MxEnumStartStopContinue expected;
	MxEnumStartStopContinue actual = object.getTypeDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getNumberDefaultValue, MxCxEmptyDashes )
{
	MxCxEmptyDashes object;
	MxNumberNumberLevel expected;
	MxNumberNumberLevel actual = object.getNumberDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDashLengthDefaultValue, MxCxEmptyDashes )
{
	MxCxEmptyDashes object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDashLengthDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getSpaceLengthDefaultValue, MxCxEmptyDashes )
{
	MxCxEmptyDashes object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getSpaceLengthDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultXDefaultValue, MxCxEmptyDashes )
{
	MxCxEmptyDashes object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultYDefaultValue, MxCxEmptyDashes )
{
	MxCxEmptyDashes object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeXDefaultValue, MxCxEmptyDashes )
{
	MxCxEmptyDashes object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeYDefaultValue, MxCxEmptyDashes )
{
	MxCxEmptyDashes object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getColorDefaultValue, MxCxEmptyDashes )
{
	MxCxEmptyDashes object;
	MxColor expected;
	MxColor actual = object.getColorDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxCxEmptyDashes )
{
	MxCxEmptyDashes object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDashLength( MxNumberTenths( 11.2 ) );
	object.setSpaceLength( MxNumberTenths( 11.2 ) );
	object.setDefaultX( MxNumberTenths( 81.9 ) );
	object.setDefaultY( MxNumberTenths( 81.9 ) );
	object.setRelativeX( MxNumberTenths( 81.9 ) );
	object.setRelativeY( MxNumberTenths( 81.9 ) );
	object.setColor( MxColor( "#595A5958" ) );
	object.setIsNumberPresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	expected = "<booksmart type=\"start\" number=\"1\" dash-length=\"11.2\" space-length=\"11.2\" default-x=\"81.9\" default-y=\"81.9\" relative-x=\"81.9\" relative-y=\"81.9\" color=\"#595A5958\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxCxEmptyDashes )
{
	MxCxEmptyDashes object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDashLength( MxNumberTenths( 11.3 ) );
	object.setSpaceLength( MxNumberTenths( 11.3 ) );
	object.setDefaultX( MxNumberTenths( 82 ) );
	object.setDefaultY( MxNumberTenths( 82 ) );
	object.setRelativeX( MxNumberTenths( 82 ) );
	object.setRelativeY( MxNumberTenths( 82 ) );
	object.setColor( MxColor( "#5C5B5A" ) );
	expected = "<quiet type=\"start\" number=\"1\" dash-length=\"11.3\" space-length=\"11.3\" default-x=\"82\" default-y=\"82\" relative-x=\"82\" relative-y=\"82\" color=\"#5C5B5A\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString2, MxCxEmptyDashes )
{
	MxCxEmptyDashes object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDashLength( MxNumberTenths( 11.4 ) );
	object.setSpaceLength( MxNumberTenths( 11.4 ) );
	object.setDefaultX( MxNumberTenths( 82.1 ) );
	object.setDefaultY( MxNumberTenths( 82.1 ) );
	object.setRelativeX( MxNumberTenths( 82.1 ) );
	object.setRelativeY( MxNumberTenths( 82.1 ) );
	object.setColor( MxColor( "#5D5E5D5C" ) );
	expected = "<musicxmlishard type=\"start\" dash-length=\"11.4\" space-length=\"11.4\" default-x=\"82.1\" default-y=\"82.1\" relative-x=\"82.1\" relative-y=\"82.1\" color=\"#5D5E5D5C\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString3, MxCxEmptyDashes )
{
	MxCxEmptyDashes object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDashLength( MxNumberTenths( 11.5 ) );
	object.setSpaceLength( MxNumberTenths( 11.5 ) );
	object.setDefaultX( MxNumberTenths( 82.2 ) );
	object.setDefaultY( MxNumberTenths( 82.2 ) );
	object.setRelativeX( MxNumberTenths( 82.2 ) );
	object.setRelativeY( MxNumberTenths( 82.2 ) );
	object.setColor( MxColor( "#605F5E" ) );
	expected = "<bishop type=\"start\" space-length=\"11.5\" default-x=\"82.2\" default-y=\"82.2\" relative-x=\"82.2\" relative-y=\"82.2\" color=\"#605F5E\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString4, MxCxEmptyDashes )
{
	MxCxEmptyDashes object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDashLength( MxNumberTenths( 11.6 ) );
	object.setSpaceLength( MxNumberTenths( 11.6 ) );
	object.setDefaultX( MxNumberTenths( 82.3 ) );
	object.setDefaultY( MxNumberTenths( 82.3 ) );
	object.setRelativeX( MxNumberTenths( 82.3 ) );
	object.setRelativeY( MxNumberTenths( 82.3 ) );
	object.setColor( MxColor( "#61626160" ) );
	expected = "<charlie type=\"start\" number=\"1\" default-x=\"82.3\" default-y=\"82.3\" relative-x=\"82.3\" relative-y=\"82.3\" color=\"#61626160\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString5, MxCxEmptyDashes )
{
	MxCxEmptyDashes object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDashLength( MxNumberTenths( 11.7 ) );
	object.setSpaceLength( MxNumberTenths( 11.7 ) );
	object.setDefaultX( MxNumberTenths( 82.4 ) );
	object.setDefaultY( MxNumberTenths( 82.4 ) );
	object.setRelativeX( MxNumberTenths( 82.4 ) );
	object.setRelativeY( MxNumberTenths( 82.4 ) );
	object.setColor( MxColor( "#646362" ) );
	expected = "<booksmart type=\"start\" number=\"1\" default-y=\"82.4\" relative-x=\"82.4\" relative-y=\"82.4\" color=\"#646362\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString6, MxCxEmptyDashes )
{
	MxCxEmptyDashes object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDashLength( MxNumberTenths( 11.8 ) );
	object.setSpaceLength( MxNumberTenths( 11.8 ) );
	object.setDefaultX( MxNumberTenths( 82.5 ) );
	object.setDefaultY( MxNumberTenths( 82.5 ) );
	object.setRelativeX( MxNumberTenths( 82.5 ) );
	object.setRelativeY( MxNumberTenths( 82.5 ) );
	object.setColor( MxColor( "#65666564" ) );
	expected = "<quiet type=\"start\" dash-length=\"11.8\" relative-x=\"82.5\" relative-y=\"82.5\" color=\"#65666564\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString7, MxCxEmptyDashes )
{
	MxCxEmptyDashes object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDashLength( MxNumberTenths( 11.9 ) );
	object.setSpaceLength( MxNumberTenths( 11.9 ) );
	object.setDefaultX( MxNumberTenths( 82.6 ) );
	object.setDefaultY( MxNumberTenths( 82.6 ) );
	object.setRelativeX( MxNumberTenths( 82.6 ) );
	object.setRelativeY( MxNumberTenths( 82.6 ) );
	object.setColor( MxColor( "#686766" ) );
	expected = "<musicxmlishard type=\"start\" dash-length=\"11.9\" relative-y=\"82.6\" color=\"#686766\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString8, MxCxEmptyDashes )
{
	MxCxEmptyDashes object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDashLength( MxNumberTenths( 12 ) );
	object.setSpaceLength( MxNumberTenths( 12 ) );
	object.setDefaultX( MxNumberTenths( 82.7 ) );
	object.setDefaultY( MxNumberTenths( 82.7 ) );
	object.setRelativeX( MxNumberTenths( 82.7 ) );
	object.setRelativeY( MxNumberTenths( 82.7 ) );
	object.setColor( MxColor( "#696A6968" ) );
	expected = "<bishop type=\"start\" number=\"1\" dash-length=\"12\" space-length=\"12\" color=\"#696A6968\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString9, MxCxEmptyDashes )
{
	MxCxEmptyDashes object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDashLength( MxNumberTenths( 12.1 ) );
	object.setSpaceLength( MxNumberTenths( 12.1 ) );
	object.setDefaultX( MxNumberTenths( 82.8 ) );
	object.setDefaultY( MxNumberTenths( 82.8 ) );
	object.setRelativeX( MxNumberTenths( 82.8 ) );
	object.setRelativeY( MxNumberTenths( 82.8 ) );
	object.setColor( MxColor( "#6C6B6A" ) );
	expected = "<charlie type=\"start\" number=\"1\" space-length=\"12.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString10, MxCxEmptyDashes )
{
	MxCxEmptyDashes object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDashLength( MxNumberTenths( 12.2 ) );
	object.setSpaceLength( MxNumberTenths( 12.2 ) );
	object.setDefaultX( MxNumberTenths( 82.9 ) );
	object.setDefaultY( MxNumberTenths( 82.9 ) );
	object.setRelativeX( MxNumberTenths( 82.9 ) );
	object.setRelativeY( MxNumberTenths( 82.9 ) );
	object.setColor( MxColor( "#6D6E6D6C" ) );
	expected = "<booksmart type=\"start\" space-length=\"12.2\" default-x=\"82.9\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString11, MxCxEmptyDashes )
{
	MxCxEmptyDashes object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDashLength( MxNumberTenths( 12.3 ) );
	object.setSpaceLength( MxNumberTenths( 12.3 ) );
	object.setDefaultX( MxNumberTenths( 83 ) );
	object.setDefaultY( MxNumberTenths( 83 ) );
	object.setRelativeX( MxNumberTenths( 83 ) );
	object.setRelativeY( MxNumberTenths( 83 ) );
	object.setColor( MxColor( "#706F6E" ) );
	expected = "<quiet type=\"start\" space-length=\"12.3\" default-x=\"83\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString12, MxCxEmptyDashes )
{
	MxCxEmptyDashes object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDashLength( MxNumberTenths( 12.4 ) );
	object.setSpaceLength( MxNumberTenths( 12.4 ) );
	object.setDefaultX( MxNumberTenths( 83.1 ) );
	object.setDefaultY( MxNumberTenths( 83.1 ) );
	object.setRelativeX( MxNumberTenths( 83.1 ) );
	object.setRelativeY( MxNumberTenths( 83.1 ) );
	object.setColor( MxColor( "#71727170" ) );
	expected = "<musicxmlishard type=\"start\" number=\"1\" dash-length=\"12.4\" default-x=\"83.1\" default-y=\"83.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString13, MxCxEmptyDashes )
{
	MxCxEmptyDashes object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDashLength( MxNumberTenths( 12.5 ) );
	object.setSpaceLength( MxNumberTenths( 12.5 ) );
	object.setDefaultX( MxNumberTenths( 83.2 ) );
	object.setDefaultY( MxNumberTenths( 83.2 ) );
	object.setRelativeX( MxNumberTenths( 83.2 ) );
	object.setRelativeY( MxNumberTenths( 83.2 ) );
	object.setColor( MxColor( "#747372" ) );
	expected = "<bishop type=\"start\" number=\"1\" dash-length=\"12.5\" default-x=\"83.2\" default-y=\"83.2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString14, MxCxEmptyDashes )
{
	MxCxEmptyDashes object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDashLength( MxNumberTenths( 12.6 ) );
	object.setSpaceLength( MxNumberTenths( 12.6 ) );
	object.setDefaultX( MxNumberTenths( 83.3 ) );
	object.setDefaultY( MxNumberTenths( 83.3 ) );
	object.setRelativeX( MxNumberTenths( 83.3 ) );
	object.setRelativeY( MxNumberTenths( 83.3 ) );
	object.setColor( MxColor( "#75767574" ) );
	expected = "<charlie type=\"start\" dash-length=\"12.6\" default-x=\"83.3\" default-y=\"83.3\" relative-x=\"83.3\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString15, MxCxEmptyDashes )
{
	MxCxEmptyDashes object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDashLength( MxNumberTenths( 12.7 ) );
	object.setSpaceLength( MxNumberTenths( 12.7 ) );
	object.setDefaultX( MxNumberTenths( 83.4 ) );
	object.setDefaultY( MxNumberTenths( 83.4 ) );
	object.setRelativeX( MxNumberTenths( 83.4 ) );
	object.setRelativeY( MxNumberTenths( 83.4 ) );
	object.setColor( MxColor( "#787776" ) );
	expected = "<booksmart type=\"start\" default-y=\"83.4\" relative-x=\"83.4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString16, MxCxEmptyDashes )
{
	MxCxEmptyDashes object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDashLength( MxNumberTenths( 12.8 ) );
	object.setSpaceLength( MxNumberTenths( 12.8 ) );
	object.setDefaultX( MxNumberTenths( 83.5 ) );
	object.setDefaultY( MxNumberTenths( 83.5 ) );
	object.setRelativeX( MxNumberTenths( 83.5 ) );
	object.setRelativeY( MxNumberTenths( 83.5 ) );
	object.setColor( MxColor( "#797A7978" ) );
	expected = "<quiet type=\"start\" number=\"1\" space-length=\"12.8\" default-y=\"83.5\" relative-x=\"83.5\" relative-y=\"83.5\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString17, MxCxEmptyDashes )
{
	MxCxEmptyDashes object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDashLength( MxNumberTenths( 12.9 ) );
	object.setSpaceLength( MxNumberTenths( 12.9 ) );
	object.setDefaultX( MxNumberTenths( 83.6 ) );
	object.setDefaultY( MxNumberTenths( 83.6 ) );
	object.setRelativeX( MxNumberTenths( 83.6 ) );
	object.setRelativeY( MxNumberTenths( 83.6 ) );
	object.setColor( MxColor( "#7C7B7A" ) );
	expected = "<musicxmlishard type=\"start\" number=\"1\" space-length=\"12.9\" default-y=\"83.6\" relative-x=\"83.6\" relative-y=\"83.6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString18, MxCxEmptyDashes )
{
	MxCxEmptyDashes object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDashLength( MxNumberTenths( 13 ) );
	object.setSpaceLength( MxNumberTenths( 13 ) );
	object.setDefaultX( MxNumberTenths( 83.7 ) );
	object.setDefaultY( MxNumberTenths( 83.7 ) );
	object.setRelativeX( MxNumberTenths( 83.7 ) );
	object.setRelativeY( MxNumberTenths( 83.7 ) );
	object.setColor( MxColor( "#7D7E7D7C" ) );
	expected = "<bishop type=\"start\" dash-length=\"13\" space-length=\"13\" relative-x=\"83.7\" relative-y=\"83.7\" color=\"#7D7E7D7C\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString19, MxCxEmptyDashes )
{
	MxCxEmptyDashes object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDashLength( MxNumberTenths( 13.1 ) );
	object.setSpaceLength( MxNumberTenths( 13.1 ) );
	object.setDefaultX( MxNumberTenths( 83.8 ) );
	object.setDefaultY( MxNumberTenths( 83.8 ) );
	object.setRelativeX( MxNumberTenths( 83.8 ) );
	object.setRelativeY( MxNumberTenths( 83.8 ) );
	object.setColor( MxColor( "#807F7E" ) );
	expected = "<charlie type=\"start\" dash-length=\"13.1\" space-length=\"13.1\" relative-x=\"83.8\" relative-y=\"83.8\" color=\"#807F7E\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString20, MxCxEmptyDashes )
{
	MxCxEmptyDashes object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDashLength( MxNumberTenths( 13.2 ) );
	object.setSpaceLength( MxNumberTenths( 13.2 ) );
	object.setDefaultX( MxNumberTenths( 83.9 ) );
	object.setDefaultY( MxNumberTenths( 83.9 ) );
	object.setRelativeX( MxNumberTenths( 83.9 ) );
	object.setRelativeY( MxNumberTenths( 83.9 ) );
	object.setColor( MxColor( "#81828180" ) );
	expected = "<booksmart type=\"start\" number=\"1\" dash-length=\"13.2\" default-x=\"83.9\" relative-x=\"83.9\" relative-y=\"83.9\" color=\"#81828180\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString21, MxCxEmptyDashes )
{
	MxCxEmptyDashes object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDashLength( MxNumberTenths( 13.3 ) );
	object.setSpaceLength( MxNumberTenths( 13.3 ) );
	object.setDefaultX( MxNumberTenths( 84 ) );
	object.setDefaultY( MxNumberTenths( 84 ) );
	object.setRelativeX( MxNumberTenths( 84 ) );
	object.setRelativeY( MxNumberTenths( 84 ) );
	object.setColor( MxColor( "#848382" ) );
	expected = "<quiet type=\"start\" number=\"1\" default-x=\"84\" relative-y=\"84\" color=\"#848382\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString22, MxCxEmptyDashes )
{
	MxCxEmptyDashes object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDashLength( MxNumberTenths( 13.4 ) );
	object.setSpaceLength( MxNumberTenths( 13.4 ) );
	object.setDefaultX( MxNumberTenths( 84.1 ) );
	object.setDefaultY( MxNumberTenths( 84.1 ) );
	object.setRelativeX( MxNumberTenths( 84.1 ) );
	object.setRelativeY( MxNumberTenths( 84.1 ) );
	object.setColor( MxColor( "#85868584" ) );
	expected = "<musicxmlishard type=\"start\" default-x=\"84.1\" relative-y=\"84.1\" color=\"#85868584\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString23, MxCxEmptyDashes )
{
	MxCxEmptyDashes object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDashLength( MxNumberTenths( 13.5 ) );
	object.setSpaceLength( MxNumberTenths( 13.5 ) );
	object.setDefaultX( MxNumberTenths( 84.2 ) );
	object.setDefaultY( MxNumberTenths( 84.2 ) );
	object.setRelativeX( MxNumberTenths( 84.2 ) );
	object.setRelativeY( MxNumberTenths( 84.2 ) );
	object.setColor( MxColor( "#888786" ) );
	expected = "<bishop type=\"start\" default-x=\"84.2\" relative-y=\"84.2\" color=\"#888786\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString24, MxCxEmptyDashes )
{
	MxCxEmptyDashes object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDashLength( MxNumberTenths( 13.6 ) );
	object.setSpaceLength( MxNumberTenths( 13.6 ) );
	object.setDefaultX( MxNumberTenths( 84.3 ) );
	object.setDefaultY( MxNumberTenths( 84.3 ) );
	object.setRelativeX( MxNumberTenths( 84.3 ) );
	object.setRelativeY( MxNumberTenths( 84.3 ) );
	object.setColor( MxColor( "#898A8988" ) );
	expected = "<charlie type=\"start\" number=\"1\" dash-length=\"13.6\" space-length=\"13.6\" default-x=\"84.3\" default-y=\"84.3\" color=\"#898A8988\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString25, MxCxEmptyDashes )
{
	MxCxEmptyDashes object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDashLength( MxNumberTenths( 13.7 ) );
	object.setSpaceLength( MxNumberTenths( 13.7 ) );
	object.setDefaultX( MxNumberTenths( 84.4 ) );
	object.setDefaultY( MxNumberTenths( 84.4 ) );
	object.setRelativeX( MxNumberTenths( 84.4 ) );
	object.setRelativeY( MxNumberTenths( 84.4 ) );
	object.setColor( MxColor( "#8C8B8A" ) );
	expected = "<booksmart type=\"start\" number=\"1\" dash-length=\"13.7\" space-length=\"13.7\" default-y=\"84.4\" color=\"#8C8B8A\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString26, MxCxEmptyDashes )
{
	MxCxEmptyDashes object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDashLength( MxNumberTenths( 13.8 ) );
	object.setSpaceLength( MxNumberTenths( 13.8 ) );
	object.setDefaultX( MxNumberTenths( 84.5 ) );
	object.setDefaultY( MxNumberTenths( 84.5 ) );
	object.setRelativeX( MxNumberTenths( 84.5 ) );
	object.setRelativeY( MxNumberTenths( 84.5 ) );
	object.setColor( MxColor( "#8D8E8D8C" ) );
	expected = "<quiet type=\"start\" dash-length=\"13.8\" space-length=\"13.8\" default-y=\"84.5\" color=\"#8D8E8D8C\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString27, MxCxEmptyDashes )
{
	MxCxEmptyDashes object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDashLength( MxNumberTenths( 13.9 ) );
	object.setSpaceLength( MxNumberTenths( 13.9 ) );
	object.setDefaultX( MxNumberTenths( 84.6 ) );
	object.setDefaultY( MxNumberTenths( 84.6 ) );
	object.setRelativeX( MxNumberTenths( 84.6 ) );
	object.setRelativeY( MxNumberTenths( 84.6 ) );
	object.setColor( MxColor( "#908F8E" ) );
	expected = "<musicxmlishard type=\"start\" space-length=\"13.9\" default-y=\"84.6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString28, MxCxEmptyDashes )
{
	MxCxEmptyDashes object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDashLength( MxNumberTenths( 14 ) );
	object.setSpaceLength( MxNumberTenths( 14 ) );
	object.setDefaultX( MxNumberTenths( 84.7 ) );
	object.setDefaultY( MxNumberTenths( 84.7 ) );
	object.setRelativeX( MxNumberTenths( 84.7 ) );
	object.setRelativeY( MxNumberTenths( 84.7 ) );
	object.setColor( MxColor( "#91929190" ) );
	expected = "<bishop type=\"start\" number=\"1\" default-y=\"84.7\" relative-x=\"84.7\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString29, MxCxEmptyDashes )
{
	MxCxEmptyDashes object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDashLength( MxNumberTenths( 14.1 ) );
	object.setSpaceLength( MxNumberTenths( 14.1 ) );
	object.setDefaultX( MxNumberTenths( 84.8 ) );
	object.setDefaultY( MxNumberTenths( 84.8 ) );
	object.setRelativeX( MxNumberTenths( 84.8 ) );
	object.setRelativeY( MxNumberTenths( 84.8 ) );
	object.setColor( MxColor( "#949392" ) );
	expected = "<charlie type=\"start\" number=\"1\" default-y=\"84.8\" relative-x=\"84.8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString30, MxCxEmptyDashes )
{
	MxCxEmptyDashes object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDashLength( MxNumberTenths( 14.2 ) );
	object.setSpaceLength( MxNumberTenths( 14.2 ) );
	object.setDefaultX( MxNumberTenths( 84.9 ) );
	object.setDefaultY( MxNumberTenths( 84.9 ) );
	object.setRelativeX( MxNumberTenths( 84.9 ) );
	object.setRelativeY( MxNumberTenths( 84.9 ) );
	object.setColor( MxColor( "#95969594" ) );
	expected = "<booksmart type=\"start\" dash-length=\"14.2\" default-x=\"84.9\" relative-x=\"84.9\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString31, MxCxEmptyDashes )
{
	MxCxEmptyDashes object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDashLength( MxNumberTenths( 14.3 ) );
	object.setSpaceLength( MxNumberTenths( 14.3 ) );
	object.setDefaultX( MxNumberTenths( 85 ) );
	object.setDefaultY( MxNumberTenths( 85 ) );
	object.setRelativeX( MxNumberTenths( 85 ) );
	object.setRelativeY( MxNumberTenths( 85 ) );
	object.setColor( MxColor( "#989796" ) );
	expected = "<quiet type=\"start\" dash-length=\"14.3\" default-x=\"85\" relative-x=\"85\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString32, MxCxEmptyDashes )
{
	MxCxEmptyDashes object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDashLength( MxNumberTenths( 14.4 ) );
	object.setSpaceLength( MxNumberTenths( 14.4 ) );
	object.setDefaultX( MxNumberTenths( 85.1 ) );
	object.setDefaultY( MxNumberTenths( 85.1 ) );
	object.setRelativeX( MxNumberTenths( 85.1 ) );
	object.setRelativeY( MxNumberTenths( 85.1 ) );
	object.setColor( MxColor( "#999A9998" ) );
	expected = "<musicxmlishard type=\"start\" number=\"1\" dash-length=\"14.4\" space-length=\"14.4\" default-x=\"85.1\" relative-x=\"85.1\" relative-y=\"85.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString33, MxCxEmptyDashes )
{
	MxCxEmptyDashes object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDashLength( MxNumberTenths( 14.5 ) );
	object.setSpaceLength( MxNumberTenths( 14.5 ) );
	object.setDefaultX( MxNumberTenths( 85.2 ) );
	object.setDefaultY( MxNumberTenths( 85.2 ) );
	object.setRelativeX( MxNumberTenths( 85.2 ) );
	object.setRelativeY( MxNumberTenths( 85.2 ) );
	object.setColor( MxColor( "#9C9B9A" ) );
	expected = "<bishop type=\"start\" number=\"1\" space-length=\"14.5\" default-x=\"85.2\" relative-x=\"85.2\" relative-y=\"85.2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString34, MxCxEmptyDashes )
{
	MxCxEmptyDashes object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDashLength( MxNumberTenths( 14.6 ) );
	object.setSpaceLength( MxNumberTenths( 14.6 ) );
	object.setDefaultX( MxNumberTenths( 85.3 ) );
	object.setDefaultY( MxNumberTenths( 85.3 ) );
	object.setRelativeX( MxNumberTenths( 85.3 ) );
	object.setRelativeY( MxNumberTenths( 85.3 ) );
	object.setColor( MxColor( "#9D9E9D9C" ) );
	expected = "<charlie type=\"start\" space-length=\"14.6\" default-x=\"85.3\" relative-x=\"85.3\" relative-y=\"85.3\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString35, MxCxEmptyDashes )
{
	MxCxEmptyDashes object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDashLength( MxNumberTenths( 14.7 ) );
	object.setSpaceLength( MxNumberTenths( 14.7 ) );
	object.setDefaultX( MxNumberTenths( 85.4 ) );
	object.setDefaultY( MxNumberTenths( 85.4 ) );
	object.setRelativeX( MxNumberTenths( 85.4 ) );
	object.setRelativeY( MxNumberTenths( 85.4 ) );
	object.setColor( MxColor( "#A09F9E" ) );
	expected = "<booksmart type=\"start\" space-length=\"14.7\" relative-y=\"85.4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString36, MxCxEmptyDashes )
{
	MxCxEmptyDashes object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDashLength( MxNumberTenths( 14.8 ) );
	object.setSpaceLength( MxNumberTenths( 14.8 ) );
	object.setDefaultX( MxNumberTenths( 85.5 ) );
	object.setDefaultY( MxNumberTenths( 85.5 ) );
	object.setRelativeX( MxNumberTenths( 85.5 ) );
	object.setRelativeY( MxNumberTenths( 85.5 ) );
	object.setColor( MxColor( "#A1A2A1A0" ) );
	expected = "<quiet type=\"start\" number=\"1\" dash-length=\"14.8\" default-y=\"85.5\" relative-y=\"85.5\" color=\"#A1A2A1A0\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString37, MxCxEmptyDashes )
{
	MxCxEmptyDashes object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDashLength( MxNumberTenths( 14.9 ) );
	object.setSpaceLength( MxNumberTenths( 14.9 ) );
	object.setDefaultX( MxNumberTenths( 85.6 ) );
	object.setDefaultY( MxNumberTenths( 85.6 ) );
	object.setRelativeX( MxNumberTenths( 85.6 ) );
	object.setRelativeY( MxNumberTenths( 85.6 ) );
	object.setColor( MxColor( "#A4A3A2" ) );
	expected = "<musicxmlishard type=\"start\" number=\"1\" dash-length=\"14.9\" default-y=\"85.6\" relative-y=\"85.6\" color=\"#A4A3A2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString38, MxCxEmptyDashes )
{
	MxCxEmptyDashes object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDashLength( MxNumberTenths( 15 ) );
	object.setSpaceLength( MxNumberTenths( 15 ) );
	object.setDefaultX( MxNumberTenths( 85.7 ) );
	object.setDefaultY( MxNumberTenths( 85.7 ) );
	object.setRelativeX( MxNumberTenths( 85.7 ) );
	object.setRelativeY( MxNumberTenths( 85.7 ) );
	object.setColor( MxColor( "#A5A6A5A4" ) );
	expected = "<bishop type=\"start\" dash-length=\"15\" default-y=\"85.7\" relative-y=\"85.7\" color=\"#A5A6A5A4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString39, MxCxEmptyDashes )
{
	MxCxEmptyDashes object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDashLength( MxNumberTenths( 15.1 ) );
	object.setSpaceLength( MxNumberTenths( 15.1 ) );
	object.setDefaultX( MxNumberTenths( 85.8 ) );
	object.setDefaultY( MxNumberTenths( 85.8 ) );
	object.setRelativeX( MxNumberTenths( 85.8 ) );
	object.setRelativeY( MxNumberTenths( 85.8 ) );
	object.setColor( MxColor( "#A8A7A6" ) );
	expected = "<charlie type=\"start\" default-y=\"85.8\" relative-y=\"85.8\" color=\"#A8A7A6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString40, MxCxEmptyDashes )
{
	MxCxEmptyDashes object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDashLength( MxNumberTenths( 15.2 ) );
	object.setSpaceLength( MxNumberTenths( 15.2 ) );
	object.setDefaultX( MxNumberTenths( 85.9 ) );
	object.setDefaultY( MxNumberTenths( 85.9 ) );
	object.setRelativeX( MxNumberTenths( 85.9 ) );
	object.setRelativeY( MxNumberTenths( 85.9 ) );
	object.setColor( MxColor( "#A9AAA9A8" ) );
	expected = "<booksmart type=\"start\" number=\"1\" space-length=\"15.2\" default-x=\"85.9\" default-y=\"85.9\" color=\"#A9AAA9A8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString41, MxCxEmptyDashes )
{
	MxCxEmptyDashes object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDashLength( MxNumberTenths( 15.3 ) );
	object.setSpaceLength( MxNumberTenths( 15.3 ) );
	object.setDefaultX( MxNumberTenths( 86 ) );
	object.setDefaultY( MxNumberTenths( 86 ) );
	object.setRelativeX( MxNumberTenths( 86 ) );
	object.setRelativeY( MxNumberTenths( 86 ) );
	object.setColor( MxColor( "#ACABAA" ) );
	expected = "<quiet type=\"start\" number=\"1\" space-length=\"15.3\" default-x=\"86\" default-y=\"86\" color=\"#ACABAA\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString42, MxCxEmptyDashes )
{
	MxCxEmptyDashes object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDashLength( MxNumberTenths( 15.4 ) );
	object.setSpaceLength( MxNumberTenths( 15.4 ) );
	object.setDefaultX( MxNumberTenths( 86.1 ) );
	object.setDefaultY( MxNumberTenths( 86.1 ) );
	object.setRelativeX( MxNumberTenths( 86.1 ) );
	object.setRelativeY( MxNumberTenths( 86.1 ) );
	object.setColor( MxColor( "#ADAEADAC" ) );
	expected = "<musicxmlishard type=\"start\" dash-length=\"15.4\" space-length=\"15.4\" default-x=\"86.1\" relative-x=\"86.1\" color=\"#ADAEADAC\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString43, MxCxEmptyDashes )
{
	MxCxEmptyDashes object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDashLength( MxNumberTenths( 15.5 ) );
	object.setSpaceLength( MxNumberTenths( 15.5 ) );
	object.setDefaultX( MxNumberTenths( 86.2 ) );
	object.setDefaultY( MxNumberTenths( 86.2 ) );
	object.setRelativeX( MxNumberTenths( 86.2 ) );
	object.setRelativeY( MxNumberTenths( 86.2 ) );
	object.setColor( MxColor( "#B0AFAE" ) );
	expected = "<bishop type=\"start\" dash-length=\"15.5\" space-length=\"15.5\" default-x=\"86.2\" relative-x=\"86.2\" color=\"#B0AFAE\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString44, MxCxEmptyDashes )
{
	MxCxEmptyDashes object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDashLength( MxNumberTenths( 15.6 ) );
	object.setSpaceLength( MxNumberTenths( 15.6 ) );
	object.setDefaultX( MxNumberTenths( 86.3 ) );
	object.setDefaultY( MxNumberTenths( 86.3 ) );
	object.setRelativeX( MxNumberTenths( 86.3 ) );
	object.setRelativeY( MxNumberTenths( 86.3 ) );
	object.setColor( MxColor( "#B1B2B1B0" ) );
	expected = "<charlie type=\"start\" number=\"1\" dash-length=\"15.6\" default-x=\"86.3\" relative-x=\"86.3\" color=\"#B1B2B1B0\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString45, MxCxEmptyDashes )
{
	MxCxEmptyDashes object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDashLength( MxNumberTenths( 15.7 ) );
	object.setSpaceLength( MxNumberTenths( 15.7 ) );
	object.setDefaultX( MxNumberTenths( 86.4 ) );
	object.setDefaultY( MxNumberTenths( 86.4 ) );
	object.setRelativeX( MxNumberTenths( 86.4 ) );
	object.setRelativeY( MxNumberTenths( 86.4 ) );
	object.setColor( MxColor( "#B4B3B2" ) );
	expected = "<booksmart type=\"start\" number=\"1\" relative-x=\"86.4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString46, MxCxEmptyDashes )
{
	MxCxEmptyDashes object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDashLength( MxNumberTenths( 15.8 ) );
	object.setSpaceLength( MxNumberTenths( 15.8 ) );
	object.setDefaultX( MxNumberTenths( 86.5 ) );
	object.setDefaultY( MxNumberTenths( 86.5 ) );
	object.setRelativeX( MxNumberTenths( 86.5 ) );
	object.setRelativeY( MxNumberTenths( 86.5 ) );
	object.setColor( MxColor( "#B5B6B5B4" ) );
	expected = "<quiet type=\"start\" relative-x=\"86.5\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString47, MxCxEmptyDashes )
{
	MxCxEmptyDashes object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDashLength( MxNumberTenths( 15.9 ) );
	object.setSpaceLength( MxNumberTenths( 15.9 ) );
	object.setDefaultX( MxNumberTenths( 86.6 ) );
	object.setDefaultY( MxNumberTenths( 86.6 ) );
	object.setRelativeX( MxNumberTenths( 86.6 ) );
	object.setRelativeY( MxNumberTenths( 86.6 ) );
	object.setColor( MxColor( "#B8B7B6" ) );
	expected = "<musicxmlishard type=\"start\" relative-x=\"86.6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString48, MxCxEmptyDashes )
{
	MxCxEmptyDashes object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDashLength( MxNumberTenths( 16 ) );
	object.setSpaceLength( MxNumberTenths( 16 ) );
	object.setDefaultX( MxNumberTenths( 86.7 ) );
	object.setDefaultY( MxNumberTenths( 86.7 ) );
	object.setRelativeX( MxNumberTenths( 86.7 ) );
	object.setRelativeY( MxNumberTenths( 86.7 ) );
	object.setColor( MxColor( "#B9BAB9B8" ) );
	expected = "<bishop type=\"start\" number=\"1\" dash-length=\"16\" space-length=\"16\" default-y=\"86.7\" relative-x=\"86.7\" relative-y=\"86.7\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString49, MxCxEmptyDashes )
{
	MxCxEmptyDashes object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDashLength( MxNumberTenths( 16.1 ) );
	object.setSpaceLength( MxNumberTenths( 16.1 ) );
	object.setDefaultX( MxNumberTenths( 86.8 ) );
	object.setDefaultY( MxNumberTenths( 86.8 ) );
	object.setRelativeX( MxNumberTenths( 86.8 ) );
	object.setRelativeY( MxNumberTenths( 86.8 ) );
	object.setColor( MxColor( "#BCBBBA" ) );
	expected = "<charlie type=\"start\" number=\"1\" dash-length=\"16.1\" space-length=\"16.1\" default-y=\"86.8\" relative-y=\"86.8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString50, MxCxEmptyDashes )
{
	MxCxEmptyDashes object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDashLength( MxNumberTenths( 16.2 ) );
	object.setSpaceLength( MxNumberTenths( 16.2 ) );
	object.setDefaultX( MxNumberTenths( 86.9 ) );
	object.setDefaultY( MxNumberTenths( 86.9 ) );
	object.setRelativeX( MxNumberTenths( 86.9 ) );
	object.setRelativeY( MxNumberTenths( 86.9 ) );
	object.setColor( MxColor( "#BDBEBDBC" ) );
	expected = "<booksmart type=\"start\" dash-length=\"16.2\" space-length=\"16.2\" default-x=\"86.9\" default-y=\"86.9\" relative-y=\"86.9\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString51, MxCxEmptyDashes )
{
	MxCxEmptyDashes object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDashLength( MxNumberTenths( 16.3 ) );
	object.setSpaceLength( MxNumberTenths( 16.3 ) );
	object.setDefaultX( MxNumberTenths( 87 ) );
	object.setDefaultY( MxNumberTenths( 87 ) );
	object.setRelativeX( MxNumberTenths( 87 ) );
	object.setRelativeY( MxNumberTenths( 87 ) );
	object.setColor( MxColor( "#C0BFBE" ) );
	expected = "<quiet type=\"start\" space-length=\"16.3\" default-x=\"87\" default-y=\"87\" relative-y=\"87\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString52, MxCxEmptyDashes )
{
	MxCxEmptyDashes object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDashLength( MxNumberTenths( 16.4 ) );
	object.setSpaceLength( MxNumberTenths( 16.4 ) );
	object.setDefaultX( MxNumberTenths( 87.1 ) );
	object.setDefaultY( MxNumberTenths( 87.1 ) );
	object.setRelativeX( MxNumberTenths( 87.1 ) );
	object.setRelativeY( MxNumberTenths( 87.1 ) );
	object.setColor( MxColor( "#C1C2C1C0" ) );
	expected = "<musicxmlishard type=\"start\" number=\"1\" default-x=\"87.1\" default-y=\"87.1\" relative-y=\"87.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString53, MxCxEmptyDashes )
{
	MxCxEmptyDashes object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDashLength( MxNumberTenths( 16.5 ) );
	object.setSpaceLength( MxNumberTenths( 16.5 ) );
	object.setDefaultX( MxNumberTenths( 87.2 ) );
	object.setDefaultY( MxNumberTenths( 87.2 ) );
	object.setRelativeX( MxNumberTenths( 87.2 ) );
	object.setRelativeY( MxNumberTenths( 87.2 ) );
	object.setColor( MxColor( "#C4C3C2" ) );
	expected = "<bishop type=\"start\" number=\"1\" default-x=\"87.2\" default-y=\"87.2\" relative-y=\"87.2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString54, MxCxEmptyDashes )
{
	MxCxEmptyDashes object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDashLength( MxNumberTenths( 16.6 ) );
	object.setSpaceLength( MxNumberTenths( 16.6 ) );
	object.setDefaultX( MxNumberTenths( 87.3 ) );
	object.setDefaultY( MxNumberTenths( 87.3 ) );
	object.setRelativeX( MxNumberTenths( 87.3 ) );
	object.setRelativeY( MxNumberTenths( 87.3 ) );
	object.setColor( MxColor( "#C5C6C5C4" ) );
	expected = "<charlie type=\"start\" dash-length=\"16.6\" default-x=\"87.3\" relative-y=\"87.3\" color=\"#C5C6C5C4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString55, MxCxEmptyDashes )
{
	MxCxEmptyDashes object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDashLength( MxNumberTenths( 16.7 ) );
	object.setSpaceLength( MxNumberTenths( 16.7 ) );
	object.setDefaultX( MxNumberTenths( 87.4 ) );
	object.setDefaultY( MxNumberTenths( 87.4 ) );
	object.setRelativeX( MxNumberTenths( 87.4 ) );
	object.setRelativeY( MxNumberTenths( 87.4 ) );
	object.setColor( MxColor( "#C8C7C6" ) );
	expected = "<booksmart type=\"start\" dash-length=\"16.7\" relative-y=\"87.4\" color=\"#C8C7C6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString56, MxCxEmptyDashes )
{
	MxCxEmptyDashes object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDashLength( MxNumberTenths( 16.8 ) );
	object.setSpaceLength( MxNumberTenths( 16.8 ) );
	object.setDefaultX( MxNumberTenths( 87.5 ) );
	object.setDefaultY( MxNumberTenths( 87.5 ) );
	object.setRelativeX( MxNumberTenths( 87.5 ) );
	object.setRelativeY( MxNumberTenths( 87.5 ) );
	object.setColor( MxColor( "#C9CAC9C8" ) );
	expected = "<quiet type=\"start\" number=\"1\" dash-length=\"16.8\" space-length=\"16.8\" relative-x=\"87.5\" color=\"#C9CAC9C8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString57, MxCxEmptyDashes )
{
	MxCxEmptyDashes object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDashLength( MxNumberTenths( 16.9 ) );
	object.setSpaceLength( MxNumberTenths( 16.9 ) );
	object.setDefaultX( MxNumberTenths( 87.6 ) );
	object.setDefaultY( MxNumberTenths( 87.6 ) );
	object.setRelativeX( MxNumberTenths( 87.6 ) );
	object.setRelativeY( MxNumberTenths( 87.6 ) );
	object.setColor( MxColor( "#CCCBCA" ) );
	expected = "<musicxmlishard type=\"start\" number=\"1\" space-length=\"16.9\" relative-x=\"87.6\" color=\"#CCCBCA\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString58, MxCxEmptyDashes )
{
	MxCxEmptyDashes object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDashLength( MxNumberTenths( 17 ) );
	object.setSpaceLength( MxNumberTenths( 17 ) );
	object.setDefaultX( MxNumberTenths( 87.7 ) );
	object.setDefaultY( MxNumberTenths( 87.7 ) );
	object.setRelativeX( MxNumberTenths( 87.7 ) );
	object.setRelativeY( MxNumberTenths( 87.7 ) );
	object.setColor( MxColor( "#CDCECDCC" ) );
	expected = "<bishop type=\"start\" space-length=\"17\" relative-x=\"87.7\" color=\"#CDCECDCC\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString59, MxCxEmptyDashes )
{
	MxCxEmptyDashes object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDashLength( MxNumberTenths( 17.1 ) );
	object.setSpaceLength( MxNumberTenths( 17.1 ) );
	object.setDefaultX( MxNumberTenths( 87.8 ) );
	object.setDefaultY( MxNumberTenths( 87.8 ) );
	object.setRelativeX( MxNumberTenths( 87.8 ) );
	object.setRelativeY( MxNumberTenths( 87.8 ) );
	object.setColor( MxColor( "#D0CFCE" ) );
	expected = "<charlie type=\"start\" space-length=\"17.1\" relative-x=\"87.8\" color=\"#D0CFCE\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString60, MxCxEmptyDashes )
{
	MxCxEmptyDashes object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDashLength( MxNumberTenths( 17.2 ) );
	object.setSpaceLength( MxNumberTenths( 17.2 ) );
	object.setDefaultX( MxNumberTenths( 87.9 ) );
	object.setDefaultY( MxNumberTenths( 87.9 ) );
	object.setRelativeX( MxNumberTenths( 87.9 ) );
	object.setRelativeY( MxNumberTenths( 87.9 ) );
	object.setColor( MxColor( "#D1D2D1D0" ) );
	expected = "<booksmart type=\"start\" number=\"1\" dash-length=\"17.2\" default-x=\"87.9\" default-y=\"87.9\" relative-x=\"87.9\" color=\"#D1D2D1D0\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString61, MxCxEmptyDashes )
{
	MxCxEmptyDashes object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDashLength( MxNumberTenths( 17.3 ) );
	object.setSpaceLength( MxNumberTenths( 17.3 ) );
	object.setDefaultX( MxNumberTenths( 88 ) );
	object.setDefaultY( MxNumberTenths( 88 ) );
	object.setRelativeX( MxNumberTenths( 88 ) );
	object.setRelativeY( MxNumberTenths( 88 ) );
	object.setColor( MxColor( "#D4D3D2" ) );
	expected = "<quiet type=\"start\" number=\"1\" dash-length=\"17.3\" default-x=\"88\" default-y=\"88\" relative-x=\"88\" color=\"#D4D3D2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString62, MxCxEmptyDashes )
{
	MxCxEmptyDashes object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDashLength( MxNumberTenths( 17.4 ) );
	object.setSpaceLength( MxNumberTenths( 17.4 ) );
	object.setDefaultX( MxNumberTenths( 88.1 ) );
	object.setDefaultY( MxNumberTenths( 88.1 ) );
	object.setRelativeX( MxNumberTenths( 88.1 ) );
	object.setRelativeY( MxNumberTenths( 88.1 ) );
	object.setColor( MxColor( "#D5D6D5D4" ) );
	expected = "<musicxmlishard type=\"start\" dash-length=\"17.4\" default-x=\"88.1\" default-y=\"88.1\" relative-x=\"88.1\" color=\"#D5D6D5D4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString63, MxCxEmptyDashes )
{
	MxCxEmptyDashes object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDashLength( MxNumberTenths( 17.5 ) );
	object.setSpaceLength( MxNumberTenths( 17.5 ) );
	object.setDefaultX( MxNumberTenths( 88.2 ) );
	object.setDefaultY( MxNumberTenths( 88.2 ) );
	object.setRelativeX( MxNumberTenths( 88.2 ) );
	object.setRelativeY( MxNumberTenths( 88.2 ) );
	object.setColor( MxColor( "#D8D7D6" ) );
	expected = "<bishop type=\"start\" default-x=\"88.2\" default-y=\"88.2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString64, MxCxEmptyDashes )
{
	MxCxEmptyDashes object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDashLength( MxNumberTenths( 17.6 ) );
	object.setSpaceLength( MxNumberTenths( 17.6 ) );
	object.setDefaultX( MxNumberTenths( 88.3 ) );
	object.setDefaultY( MxNumberTenths( 88.3 ) );
	object.setRelativeX( MxNumberTenths( 88.3 ) );
	object.setRelativeY( MxNumberTenths( 88.3 ) );
	object.setColor( MxColor( "#D9DAD9D8" ) );
	expected = "<charlie type=\"start\" number=\"1\" space-length=\"17.6\" default-x=\"88.3\" default-y=\"88.3\" relative-y=\"88.3\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString65, MxCxEmptyDashes )
{
	MxCxEmptyDashes object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDashLength( MxNumberTenths( 17.7 ) );
	object.setSpaceLength( MxNumberTenths( 17.7 ) );
	object.setDefaultX( MxNumberTenths( 88.4 ) );
	object.setDefaultY( MxNumberTenths( 88.4 ) );
	object.setRelativeX( MxNumberTenths( 88.4 ) );
	object.setRelativeY( MxNumberTenths( 88.4 ) );
	object.setColor( MxColor( "#DCDBDA" ) );
	expected = "<booksmart type=\"start\" number=\"1\" space-length=\"17.7\" default-y=\"88.4\" relative-y=\"88.4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString66, MxCxEmptyDashes )
{
	MxCxEmptyDashes object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDashLength( MxNumberTenths( 17.8 ) );
	object.setSpaceLength( MxNumberTenths( 17.8 ) );
	object.setDefaultX( MxNumberTenths( 88.5 ) );
	object.setDefaultY( MxNumberTenths( 88.5 ) );
	object.setRelativeX( MxNumberTenths( 88.5 ) );
	object.setRelativeY( MxNumberTenths( 88.5 ) );
	object.setColor( MxColor( "#DDDEDDDC" ) );
	expected = "<quiet type=\"start\" dash-length=\"17.8\" space-length=\"17.8\" relative-y=\"88.5\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString67, MxCxEmptyDashes )
{
	MxCxEmptyDashes object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDashLength( MxNumberTenths( 17.9 ) );
	object.setSpaceLength( MxNumberTenths( 17.9 ) );
	object.setDefaultX( MxNumberTenths( 88.6 ) );
	object.setDefaultY( MxNumberTenths( 88.6 ) );
	object.setRelativeX( MxNumberTenths( 88.6 ) );
	object.setRelativeY( MxNumberTenths( 88.6 ) );
	object.setColor( MxColor( "#E0DFDE" ) );
	expected = "<musicxmlishard type=\"start\" dash-length=\"17.9\" space-length=\"17.9\" relative-y=\"88.6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString68, MxCxEmptyDashes )
{
	MxCxEmptyDashes object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDashLength( MxNumberTenths( 18 ) );
	object.setSpaceLength( MxNumberTenths( 18 ) );
	object.setDefaultX( MxNumberTenths( 88.7 ) );
	object.setDefaultY( MxNumberTenths( 88.7 ) );
	object.setRelativeX( MxNumberTenths( 88.7 ) );
	object.setRelativeY( MxNumberTenths( 88.7 ) );
	object.setColor( MxColor( "#E1E2E1E0" ) );
	expected = "<bishop type=\"start\" number=\"1\" dash-length=\"18\" relative-y=\"88.7\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString69, MxCxEmptyDashes )
{
	MxCxEmptyDashes object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDashLength( MxNumberTenths( 18.1 ) );
	object.setSpaceLength( MxNumberTenths( 18.1 ) );
	object.setDefaultX( MxNumberTenths( 88.8 ) );
	object.setDefaultY( MxNumberTenths( 88.8 ) );
	object.setRelativeX( MxNumberTenths( 88.8 ) );
	object.setRelativeY( MxNumberTenths( 88.8 ) );
	object.setColor( MxColor( "#E4E3E2" ) );
	expected = "<charlie type=\"start\" number=\"1\" relative-y=\"88.8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString70, MxCxEmptyDashes )
{
	MxCxEmptyDashes object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDashLength( MxNumberTenths( 18.2 ) );
	object.setSpaceLength( MxNumberTenths( 18.2 ) );
	object.setDefaultX( MxNumberTenths( 88.9 ) );
	object.setDefaultY( MxNumberTenths( 88.9 ) );
	object.setRelativeX( MxNumberTenths( 88.9 ) );
	object.setRelativeY( MxNumberTenths( 88.9 ) );
	object.setColor( MxColor( "#E5E6E5E4" ) );
	expected = "<booksmart type=\"start\" default-x=\"88.9\" relative-x=\"88.9\" relative-y=\"88.9\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString71, MxCxEmptyDashes )
{
	MxCxEmptyDashes object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDashLength( MxNumberTenths( 18.3 ) );
	object.setSpaceLength( MxNumberTenths( 18.3 ) );
	object.setDefaultX( MxNumberTenths( 89 ) );
	object.setDefaultY( MxNumberTenths( 89 ) );
	object.setRelativeX( MxNumberTenths( 89 ) );
	object.setRelativeY( MxNumberTenths( 89 ) );
	object.setColor( MxColor( "#E8E7E6" ) );
	expected = "<quiet type=\"start\" default-x=\"89\" relative-x=\"89\" relative-y=\"89\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString72, MxCxEmptyDashes )
{
	MxCxEmptyDashes object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDashLength( MxNumberTenths( 18.4 ) );
	object.setSpaceLength( MxNumberTenths( 18.4 ) );
	object.setDefaultX( MxNumberTenths( 89.1 ) );
	object.setDefaultY( MxNumberTenths( 89.1 ) );
	object.setRelativeX( MxNumberTenths( 89.1 ) );
	object.setRelativeY( MxNumberTenths( 89.1 ) );
	object.setColor( MxColor( "#E9EAE9E8" ) );
	expected = "<musicxmlishard type=\"start\" number=\"1\" dash-length=\"18.4\" space-length=\"18.4\" default-x=\"89.1\" default-y=\"89.1\" relative-x=\"89.1\" color=\"#E9EAE9E8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString73, MxCxEmptyDashes )
{
	MxCxEmptyDashes object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDashLength( MxNumberTenths( 18.5 ) );
	object.setSpaceLength( MxNumberTenths( 18.5 ) );
	object.setDefaultX( MxNumberTenths( 89.2 ) );
	object.setDefaultY( MxNumberTenths( 89.2 ) );
	object.setRelativeX( MxNumberTenths( 89.2 ) );
	object.setRelativeY( MxNumberTenths( 89.2 ) );
	object.setColor( MxColor( "#ECEBEA" ) );
	expected = "<bishop type=\"start\" number=\"1\" dash-length=\"18.5\" space-length=\"18.5\" default-x=\"89.2\" default-y=\"89.2\" relative-x=\"89.2\" color=\"#ECEBEA\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString74, MxCxEmptyDashes )
{
	MxCxEmptyDashes object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDashLength( MxNumberTenths( 18.6 ) );
	object.setSpaceLength( MxNumberTenths( 18.6 ) );
	object.setDefaultX( MxNumberTenths( 89.3 ) );
	object.setDefaultY( MxNumberTenths( 89.3 ) );
	object.setRelativeX( MxNumberTenths( 89.3 ) );
	object.setRelativeY( MxNumberTenths( 89.3 ) );
	object.setColor( MxColor( "#EDEEEDEC" ) );
	expected = "<charlie type=\"start\" dash-length=\"18.6\" space-length=\"18.6\" default-x=\"89.3\" default-y=\"89.3\" relative-x=\"89.3\" color=\"#EDEEEDEC\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString75, MxCxEmptyDashes )
{
	MxCxEmptyDashes object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDashLength( MxNumberTenths( 18.7 ) );
	object.setSpaceLength( MxNumberTenths( 18.7 ) );
	object.setDefaultX( MxNumberTenths( 89.4 ) );
	object.setDefaultY( MxNumberTenths( 89.4 ) );
	object.setRelativeX( MxNumberTenths( 89.4 ) );
	object.setRelativeY( MxNumberTenths( 89.4 ) );
	object.setColor( MxColor( "#F0EFEE" ) );
	expected = "<booksmart type=\"start\" space-length=\"18.7\" default-y=\"89.4\" relative-x=\"89.4\" color=\"#F0EFEE\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString76, MxCxEmptyDashes )
{
	MxCxEmptyDashes object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDashLength( MxNumberTenths( 18.8 ) );
	object.setSpaceLength( MxNumberTenths( 18.8 ) );
	object.setDefaultX( MxNumberTenths( 89.5 ) );
	object.setDefaultY( MxNumberTenths( 89.5 ) );
	object.setRelativeX( MxNumberTenths( 89.5 ) );
	object.setRelativeY( MxNumberTenths( 89.5 ) );
	object.setColor( MxColor( "#F1F2F1F0" ) );
	expected = "<quiet type=\"start\" number=\"1\" default-y=\"89.5\" relative-x=\"89.5\" color=\"#F1F2F1F0\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString77, MxCxEmptyDashes )
{
	MxCxEmptyDashes object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDashLength( MxNumberTenths( 18.9 ) );
	object.setSpaceLength( MxNumberTenths( 18.9 ) );
	object.setDefaultX( MxNumberTenths( 89.6 ) );
	object.setDefaultY( MxNumberTenths( 89.6 ) );
	object.setRelativeX( MxNumberTenths( 89.6 ) );
	object.setRelativeY( MxNumberTenths( 89.6 ) );
	object.setColor( MxColor( "#F4F3F2" ) );
	expected = "<musicxmlishard type=\"start\" number=\"1\" default-y=\"89.6\" color=\"#F4F3F2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString78, MxCxEmptyDashes )
{
	MxCxEmptyDashes object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDashLength( MxNumberTenths( 19 ) );
	object.setSpaceLength( MxNumberTenths( 19 ) );
	object.setDefaultX( MxNumberTenths( 89.7 ) );
	object.setDefaultY( MxNumberTenths( 89.7 ) );
	object.setRelativeX( MxNumberTenths( 89.7 ) );
	object.setRelativeY( MxNumberTenths( 89.7 ) );
	object.setColor( MxColor( "#F5F6F5F4" ) );
	expected = "<bishop type=\"start\" dash-length=\"19\" color=\"#F5F6F5F4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString79, MxCxEmptyDashes )
{
	MxCxEmptyDashes object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDashLength( MxNumberTenths( 19.1 ) );
	object.setSpaceLength( MxNumberTenths( 19.1 ) );
	object.setDefaultX( MxNumberTenths( 89.8 ) );
	object.setDefaultY( MxNumberTenths( 89.8 ) );
	object.setRelativeX( MxNumberTenths( 89.8 ) );
	object.setRelativeY( MxNumberTenths( 89.8 ) );
	object.setColor( MxColor( "#F8F7F6" ) );
	expected = "<charlie type=\"start\" dash-length=\"19.1\" color=\"#F8F7F6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString80, MxCxEmptyDashes )
{
	MxCxEmptyDashes object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDashLength( MxNumberTenths( 19.2 ) );
	object.setSpaceLength( MxNumberTenths( 19.2 ) );
	object.setDefaultX( MxNumberTenths( 89.9 ) );
	object.setDefaultY( MxNumberTenths( 89.9 ) );
	object.setRelativeX( MxNumberTenths( 89.9 ) );
	object.setRelativeY( MxNumberTenths( 89.9 ) );
	object.setColor( MxColor( "#F9FAF9F8" ) );
	expected = "<booksmart type=\"start\" number=\"1\" dash-length=\"19.2\" space-length=\"19.2\" default-x=\"89.9\" relative-y=\"89.9\" color=\"#F9FAF9F8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString81, MxCxEmptyDashes )
{
	MxCxEmptyDashes object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDashLength( MxNumberTenths( 19.3 ) );
	object.setSpaceLength( MxNumberTenths( 19.3 ) );
	object.setDefaultX( MxNumberTenths( 90 ) );
	object.setDefaultY( MxNumberTenths( 90 ) );
	object.setRelativeX( MxNumberTenths( 90 ) );
	object.setRelativeY( MxNumberTenths( 90 ) );
	object.setColor( MxColor( "#FCFBFA" ) );
	expected = "<quiet type=\"start\" number=\"1\" space-length=\"19.3\" default-x=\"90\" relative-y=\"90\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString82, MxCxEmptyDashes )
{
	MxCxEmptyDashes object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDashLength( MxNumberTenths( 19.4 ) );
	object.setSpaceLength( MxNumberTenths( 19.4 ) );
	object.setDefaultX( MxNumberTenths( 90.1 ) );
	object.setDefaultY( MxNumberTenths( 90.1 ) );
	object.setRelativeX( MxNumberTenths( 90.1 ) );
	object.setRelativeY( MxNumberTenths( 90.1 ) );
	object.setColor( MxColor( "#FDFEFDFC" ) );
	expected = "<musicxmlishard type=\"start\" space-length=\"19.4\" default-x=\"90.1\" relative-y=\"90.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString83, MxCxEmptyDashes )
{
	MxCxEmptyDashes object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDashLength( MxNumberTenths( 19.5 ) );
	object.setSpaceLength( MxNumberTenths( 19.5 ) );
	object.setDefaultX( MxNumberTenths( 90.2 ) );
	object.setDefaultY( MxNumberTenths( 90.2 ) );
	object.setRelativeX( MxNumberTenths( 90.2 ) );
	object.setRelativeY( MxNumberTenths( 90.2 ) );
	object.setColor( MxColor( "#00FFFE" ) );
	expected = "<bishop type=\"start\" space-length=\"19.5\" default-x=\"90.2\" relative-y=\"90.2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString84, MxCxEmptyDashes )
{
	MxCxEmptyDashes object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDashLength( MxNumberTenths( 19.6 ) );
	object.setSpaceLength( MxNumberTenths( 19.6 ) );
	object.setDefaultX( MxNumberTenths( 90.3 ) );
	object.setDefaultY( MxNumberTenths( 90.3 ) );
	object.setRelativeX( MxNumberTenths( 90.3 ) );
	object.setRelativeY( MxNumberTenths( 90.3 ) );
	object.setColor( MxColor( "#01020100" ) );
	expected = "<charlie type=\"start\" number=\"1\" dash-length=\"19.6\" default-x=\"90.3\" default-y=\"90.3\" relative-x=\"90.3\" relative-y=\"90.3\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString85, MxCxEmptyDashes )
{
	MxCxEmptyDashes object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDashLength( MxNumberTenths( 19.7 ) );
	object.setSpaceLength( MxNumberTenths( 19.7 ) );
	object.setDefaultX( MxNumberTenths( 90.4 ) );
	object.setDefaultY( MxNumberTenths( 90.4 ) );
	object.setRelativeX( MxNumberTenths( 90.4 ) );
	object.setRelativeY( MxNumberTenths( 90.4 ) );
	object.setColor( MxColor( "#040302" ) );
	expected = "<booksmart type=\"start\" number=\"1\" dash-length=\"19.7\" default-y=\"90.4\" relative-x=\"90.4\" relative-y=\"90.4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString86, MxCxEmptyDashes )
{
	MxCxEmptyDashes object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDashLength( MxNumberTenths( 19.8 ) );
	object.setSpaceLength( MxNumberTenths( 19.8 ) );
	object.setDefaultX( MxNumberTenths( 90.5 ) );
	object.setDefaultY( MxNumberTenths( 90.5 ) );
	object.setRelativeX( MxNumberTenths( 90.5 ) );
	object.setRelativeY( MxNumberTenths( 90.5 ) );
	object.setColor( MxColor( "#05060504" ) );
	expected = "<quiet type=\"start\" dash-length=\"19.8\" default-y=\"90.5\" relative-x=\"90.5\" relative-y=\"90.5\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString87, MxCxEmptyDashes )
{
	MxCxEmptyDashes object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDashLength( MxNumberTenths( 19.9 ) );
	object.setSpaceLength( MxNumberTenths( 19.9 ) );
	object.setDefaultX( MxNumberTenths( 90.6 ) );
	object.setDefaultY( MxNumberTenths( 90.6 ) );
	object.setRelativeX( MxNumberTenths( 90.6 ) );
	object.setRelativeY( MxNumberTenths( 90.6 ) );
	object.setColor( MxColor( "#080706" ) );
	expected = "<musicxmlishard type=\"start\" default-y=\"90.6\" relative-x=\"90.6\" relative-y=\"90.6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString88, MxCxEmptyDashes )
{
	MxCxEmptyDashes object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDashLength( MxNumberTenths( 20 ) );
	object.setSpaceLength( MxNumberTenths( 20 ) );
	object.setDefaultX( MxNumberTenths( 90.7 ) );
	object.setDefaultY( MxNumberTenths( 90.7 ) );
	object.setRelativeX( MxNumberTenths( 90.7 ) );
	object.setRelativeY( MxNumberTenths( 90.7 ) );
	object.setColor( MxColor( "#090A0908" ) );
	expected = "<bishop type=\"start\" number=\"1\" space-length=\"20\" default-y=\"90.7\" relative-x=\"90.7\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString89, MxCxEmptyDashes )
{
	MxCxEmptyDashes object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDashLength( MxNumberTenths( 20.1 ) );
	object.setSpaceLength( MxNumberTenths( 20.1 ) );
	object.setDefaultX( MxNumberTenths( 90.8 ) );
	object.setDefaultY( MxNumberTenths( 90.8 ) );
	object.setRelativeX( MxNumberTenths( 90.8 ) );
	object.setRelativeY( MxNumberTenths( 90.8 ) );
	object.setColor( MxColor( "#0C0B0A" ) );
	expected = "<charlie type=\"start\" number=\"1\" space-length=\"20.1\" default-y=\"90.8\" relative-x=\"90.8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString90, MxCxEmptyDashes )
{
	MxCxEmptyDashes object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDashLength( MxNumberTenths( 20.2 ) );
	object.setSpaceLength( MxNumberTenths( 20.2 ) );
	object.setDefaultX( MxNumberTenths( 90.9 ) );
	object.setDefaultY( MxNumberTenths( 90.9 ) );
	object.setRelativeX( MxNumberTenths( 90.9 ) );
	object.setRelativeY( MxNumberTenths( 90.9 ) );
	object.setColor( MxColor( "#0D0E0D0C" ) );
	expected = "<booksmart type=\"start\" dash-length=\"20.2\" space-length=\"20.2\" default-x=\"90.9\" relative-x=\"90.9\" color=\"#0D0E0D0C\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString91, MxCxEmptyDashes )
{
	MxCxEmptyDashes object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDashLength( MxNumberTenths( 20.3 ) );
	object.setSpaceLength( MxNumberTenths( 20.3 ) );
	object.setDefaultX( MxNumberTenths( 91 ) );
	object.setDefaultY( MxNumberTenths( 91 ) );
	object.setRelativeX( MxNumberTenths( 91 ) );
	object.setRelativeY( MxNumberTenths( 91 ) );
	object.setColor( MxColor( "#100F0E" ) );
	expected = "<quiet type=\"start\" dash-length=\"20.3\" space-length=\"20.3\" default-x=\"91\" color=\"#100F0E\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString92, MxCxEmptyDashes )
{
	MxCxEmptyDashes object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDashLength( MxNumberTenths( 20.4 ) );
	object.setSpaceLength( MxNumberTenths( 20.4 ) );
	object.setDefaultX( MxNumberTenths( 91.1 ) );
	object.setDefaultY( MxNumberTenths( 91.1 ) );
	object.setRelativeX( MxNumberTenths( 91.1 ) );
	object.setRelativeY( MxNumberTenths( 91.1 ) );
	object.setColor( MxColor( "#11121110" ) );
	expected = "<musicxmlishard type=\"start\" number=\"1\" dash-length=\"20.4\" default-x=\"91.1\" color=\"#11121110\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString93, MxCxEmptyDashes )
{
	MxCxEmptyDashes object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDashLength( MxNumberTenths( 20.5 ) );
	object.setSpaceLength( MxNumberTenths( 20.5 ) );
	object.setDefaultX( MxNumberTenths( 91.2 ) );
	object.setDefaultY( MxNumberTenths( 91.2 ) );
	object.setRelativeX( MxNumberTenths( 91.2 ) );
	object.setRelativeY( MxNumberTenths( 91.2 ) );
	object.setColor( MxColor( "#141312" ) );
	expected = "<bishop type=\"start\" number=\"1\" default-x=\"91.2\" color=\"#141312\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString94, MxCxEmptyDashes )
{
	MxCxEmptyDashes object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDashLength( MxNumberTenths( 20.6 ) );
	object.setSpaceLength( MxNumberTenths( 20.6 ) );
	object.setDefaultX( MxNumberTenths( 91.3 ) );
	object.setDefaultY( MxNumberTenths( 91.3 ) );
	object.setRelativeX( MxNumberTenths( 91.3 ) );
	object.setRelativeY( MxNumberTenths( 91.3 ) );
	object.setColor( MxColor( "#15161514" ) );
	expected = "<charlie type=\"start\" default-x=\"91.3\" color=\"#15161514\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString95, MxCxEmptyDashes )
{
	MxCxEmptyDashes object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDashLength( MxNumberTenths( 20.7 ) );
	object.setSpaceLength( MxNumberTenths( 20.7 ) );
	object.setDefaultX( MxNumberTenths( 91.4 ) );
	object.setDefaultY( MxNumberTenths( 91.4 ) );
	object.setRelativeX( MxNumberTenths( 91.4 ) );
	object.setRelativeY( MxNumberTenths( 91.4 ) );
	object.setColor( MxColor( "#181716" ) );
	expected = "<booksmart type=\"start\" color=\"#181716\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString96, MxCxEmptyDashes )
{
	MxCxEmptyDashes object( "quiet" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDashLength( MxNumberTenths( 20.8 ) );
	object.setSpaceLength( MxNumberTenths( 20.8 ) );
	object.setDefaultX( MxNumberTenths( 91.5 ) );
	object.setDefaultY( MxNumberTenths( 91.5 ) );
	object.setRelativeX( MxNumberTenths( 91.5 ) );
	object.setRelativeY( MxNumberTenths( 91.5 ) );
	object.setColor( MxColor( "#191A1918" ) );
	expected = "<quiet type=\"start\" number=\"1\" dash-length=\"20.8\" space-length=\"20.8\" default-y=\"91.5\" relative-y=\"91.5\" color=\"#191A1918\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString97, MxCxEmptyDashes )
{
	MxCxEmptyDashes object( "musicxmlishard" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDashLength( MxNumberTenths( 20.9 ) );
	object.setSpaceLength( MxNumberTenths( 20.9 ) );
	object.setDefaultX( MxNumberTenths( 91.6 ) );
	object.setDefaultY( MxNumberTenths( 91.6 ) );
	object.setRelativeX( MxNumberTenths( 91.6 ) );
	object.setRelativeY( MxNumberTenths( 91.6 ) );
	object.setColor( MxColor( "#1C1B1A" ) );
	expected = "<musicxmlishard type=\"start\" number=\"1\" dash-length=\"20.9\" space-length=\"20.9\" default-y=\"91.6\" relative-y=\"91.6\" color=\"#1C1B1A\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString98, MxCxEmptyDashes )
{
	MxCxEmptyDashes object( "bishop" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDashLength( MxNumberTenths( 21 ) );
	object.setSpaceLength( MxNumberTenths( 21 ) );
	object.setDefaultX( MxNumberTenths( 91.7 ) );
	object.setDefaultY( MxNumberTenths( 91.7 ) );
	object.setRelativeX( MxNumberTenths( 91.7 ) );
	object.setRelativeY( MxNumberTenths( 91.7 ) );
	object.setColor( MxColor( "#1D1E1D1C" ) );
	expected = "<bishop type=\"start\" dash-length=\"21\" space-length=\"21\" default-y=\"91.7\" relative-x=\"91.7\" relative-y=\"91.7\" color=\"#1D1E1D1C\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString99, MxCxEmptyDashes )
{
	MxCxEmptyDashes object( "charlie" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDashLength( MxNumberTenths( 21.1 ) );
	object.setSpaceLength( MxNumberTenths( 21.1 ) );
	object.setDefaultX( MxNumberTenths( 91.8 ) );
	object.setDefaultY( MxNumberTenths( 91.8 ) );
	object.setRelativeX( MxNumberTenths( 91.8 ) );
	object.setRelativeY( MxNumberTenths( 91.8 ) );
	object.setColor( MxColor( "#201F1E" ) );
	expected = "<charlie type=\"start\" space-length=\"21.1\" default-y=\"91.8\" relative-x=\"91.8\" relative-y=\"91.8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString100, MxCxEmptyDashes )
{
	MxCxEmptyDashes object( "booksmart" );
	std::string expected;
	std::string actual;
	object.setIsNumberPresent( false );
	object.setIsDashLengthPresent( false );
	object.setIsSpaceLengthPresent( false );
	object.setIsDefaultXPresent( false );
	object.setIsDefaultYPresent( false );
	object.setIsRelativeXPresent( false );
	object.setIsRelativeYPresent( false );
	object.setIsColorPresent( false );
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDashLength( MxNumberTenths( 21.2 ) );
	object.setSpaceLength( MxNumberTenths( 21.2 ) );
	object.setDefaultX( MxNumberTenths( 91.9 ) );
	object.setDefaultY( MxNumberTenths( 91.9 ) );
	object.setRelativeX( MxNumberTenths( 91.9 ) );
	object.setRelativeY( MxNumberTenths( 91.9 ) );
	object.setColor( MxColor( "#21222120" ) );
	expected = "<booksmart type=\"start\"/>";
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


