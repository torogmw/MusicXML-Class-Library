/** *******************************************************
  * 
  * MxEeDashesTest.cpp
  * Created: 2014-12-05 16:47:04
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxEeDashes.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxEeDashes )
{
	MxEeDashes object;
	CHECK( true )
}
TEST( ctorAttributeValues0, MxEeDashes )
{
	MxEeDashes object;
	std::string expected = ( MxEnumStartStopContinue(  ) ).toString();
	std::string actual = object.getType().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues1, MxEeDashes )
{
	MxEeDashes object;
	std::string expected = ( MxNumberNumberLevel(  ) ).toString();
	std::string actual = object.getNumber().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues2, MxEeDashes )
{
	MxEeDashes object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDashLength().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues3, MxEeDashes )
{
	MxEeDashes object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getSpaceLength().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues4, MxEeDashes )
{
	MxEeDashes object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues5, MxEeDashes )
{
	MxEeDashes object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getDefaultY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues6, MxEeDashes )
{
	MxEeDashes object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues7, MxEeDashes )
{
	MxEeDashes object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getRelativeY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorAttributeValues8, MxEeDashes )
{
	MxEeDashes object;
	std::string expected = ( MxColor(  ) ).toString();
	std::string actual = object.getColor().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* minOccurs maxOccurs ------------------------------------------------------ */

TEST( getMinOccurs, MxEeDashes )
{
	MxEeDashes object;
	int expected = 1;
	int actual = object.getMinOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getMaxOccurs, MxEeDashes )
{
	MxEeDashes object;
	int expected = 1;
	int actual = object.getMaxOccurs();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsMaxOccursUnbounded, MxEeDashes )
{
	MxEeDashes object;
	bool expected = false;
	bool actual = object.getIsMaxOccursUnbounded();
	CHECK_EQUAL( expected, actual )
}

/* End: minOccurs maxOccurs ------------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxEeDashes )
{
	MxEeDashes object;
	std::string expected = "MxEeDashes";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxEeDashes )
{
	MxEeDashes object;
	std::string expected = "dashes";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxEeDashes )
{
	MxEeDashes object;
	std::string expected = "( no documentation )";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setType0, MxEeDashes )
{
	MxEnumStartStopContinue value1( lexicon::enums::StartStopContinue::continue_ );
	MxEnumStartStopContinue value2( lexicon::enums::StartStopContinue::stop );
	CHECK( ( value1 != value2 ) )
	MxEeDashes object;
	object.setType( value1 );
	MxEnumStartStopContinue expected = value1;
	MxEnumStartStopContinue actual = object.getType();
	CHECK_EQUAL( expected, actual )
	object.setType( value2 );
	expected = value2;
	actual = object.getType();
	CHECK_EQUAL( expected, actual )
}
TEST( setNumber1, MxEeDashes )
{
	MxNumberNumberLevel value1( 1 );
	MxNumberNumberLevel value2( 2 );
	CHECK( ( value1 != value2 ) )
	MxEeDashes object;
	object.setNumber( value1 );
	MxNumberNumberLevel expected = value1;
	MxNumberNumberLevel actual = object.getNumber();
	CHECK_EQUAL( expected, actual )
	object.setNumber( value2 );
	expected = value2;
	actual = object.getNumber();
	CHECK_EQUAL( expected, actual )
}
TEST( setDashLength2, MxEeDashes )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEeDashes object;
	object.setDashLength( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDashLength();
	CHECK_EQUAL( expected, actual )
	object.setDashLength( value2 );
	expected = value2;
	actual = object.getDashLength();
	CHECK_EQUAL( expected, actual )
}
TEST( setSpaceLength3, MxEeDashes )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEeDashes object;
	object.setSpaceLength( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getSpaceLength();
	CHECK_EQUAL( expected, actual )
	object.setSpaceLength( value2 );
	expected = value2;
	actual = object.getSpaceLength();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultX4, MxEeDashes )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEeDashes object;
	object.setDefaultX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
	object.setDefaultX( value2 );
	expected = value2;
	actual = object.getDefaultX();
	CHECK_EQUAL( expected, actual )
}
TEST( setDefaultY5, MxEeDashes )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEeDashes object;
	object.setDefaultY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
	object.setDefaultY( value2 );
	expected = value2;
	actual = object.getDefaultY();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeX6, MxEeDashes )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEeDashes object;
	object.setRelativeX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
	object.setRelativeX( value2 );
	expected = value2;
	actual = object.getRelativeX();
	CHECK_EQUAL( expected, actual )
}
TEST( setRelativeY7, MxEeDashes )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxEeDashes object;
	object.setRelativeY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
	object.setRelativeY( value2 );
	expected = value2;
	actual = object.getRelativeY();
	CHECK_EQUAL( expected, actual )
}
TEST( setColor8, MxEeDashes )
{
	MxColor value1( "#12131415" );
	MxColor value2( 155, 34, 145, 192 );
	CHECK( ( value1 != value2 ) )
	MxEeDashes object;
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

TEST( getIsTypeRequired0, MxEeDashes )
{
	MxEeDashes object;
	bool expected = true;
	bool actual = object.getIsTypeRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsNumberRequired1, MxEeDashes )
{
	MxEeDashes object;
	bool expected = false;
	bool actual = object.getIsNumberRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDashLengthRequired2, MxEeDashes )
{
	MxEeDashes object;
	bool expected = false;
	bool actual = object.getIsDashLengthRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsSpaceLengthRequired3, MxEeDashes )
{
	MxEeDashes object;
	bool expected = false;
	bool actual = object.getIsSpaceLengthRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXRequired4, MxEeDashes )
{
	MxEeDashes object;
	bool expected = false;
	bool actual = object.getIsDefaultXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYRequired5, MxEeDashes )
{
	MxEeDashes object;
	bool expected = false;
	bool actual = object.getIsDefaultYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXRequired6, MxEeDashes )
{
	MxEeDashes object;
	bool expected = false;
	bool actual = object.getIsRelativeXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYRequired7, MxEeDashes )
{
	MxEeDashes object;
	bool expected = false;
	bool actual = object.getIsRelativeYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorRequired8, MxEeDashes )
{
	MxEeDashes object;
	bool expected = false;
	bool actual = object.getIsColorRequired();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsTypePresent0, MxEeDashes )
{
	MxEeDashes object;
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
TEST( getIsNumberPresent1, MxEeDashes )
{
	MxEeDashes object;
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
TEST( getIsDashLengthPresent2, MxEeDashes )
{
	MxEeDashes object;
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
TEST( getIsSpaceLengthPresent3, MxEeDashes )
{
	MxEeDashes object;
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
TEST( getIsDefaultXPresent4, MxEeDashes )
{
	MxEeDashes object;
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
TEST( getIsDefaultYPresent5, MxEeDashes )
{
	MxEeDashes object;
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
TEST( getIsRelativeXPresent6, MxEeDashes )
{
	MxEeDashes object;
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
TEST( getIsRelativeYPresent7, MxEeDashes )
{
	MxEeDashes object;
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
TEST( getIsColorPresent8, MxEeDashes )
{
	MxEeDashes object;
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

TEST( getIsTypeDefaultDefined, MxEeDashes )
{
	MxEeDashes object;
	bool expected = false;
	bool actual = object.getIsTypeDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsNumberDefaultDefined, MxEeDashes )
{
	MxEeDashes object;
	bool expected = false;
	bool actual = object.getIsNumberDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDashLengthDefaultDefined, MxEeDashes )
{
	MxEeDashes object;
	bool expected = false;
	bool actual = object.getIsDashLengthDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsSpaceLengthDefaultDefined, MxEeDashes )
{
	MxEeDashes object;
	bool expected = false;
	bool actual = object.getIsSpaceLengthDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultXDefaultDefined, MxEeDashes )
{
	MxEeDashes object;
	bool expected = false;
	bool actual = object.getIsDefaultXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsDefaultYDefaultDefined, MxEeDashes )
{
	MxEeDashes object;
	bool expected = false;
	bool actual = object.getIsDefaultYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeXDefaultDefined, MxEeDashes )
{
	MxEeDashes object;
	bool expected = false;
	bool actual = object.getIsRelativeXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsRelativeYDefaultDefined, MxEeDashes )
{
	MxEeDashes object;
	bool expected = false;
	bool actual = object.getIsRelativeYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsColorDefaultDefined, MxEeDashes )
{
	MxEeDashes object;
	bool expected = false;
	bool actual = object.getIsColorDefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getTypeDefaultValue, MxEeDashes )
{
	MxEeDashes object;
	MxEnumStartStopContinue expected;
	MxEnumStartStopContinue actual = object.getTypeDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getNumberDefaultValue, MxEeDashes )
{
	MxEeDashes object;
	MxNumberNumberLevel expected;
	MxNumberNumberLevel actual = object.getNumberDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDashLengthDefaultValue, MxEeDashes )
{
	MxEeDashes object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDashLengthDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getSpaceLengthDefaultValue, MxEeDashes )
{
	MxEeDashes object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getSpaceLengthDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultXDefaultValue, MxEeDashes )
{
	MxEeDashes object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getDefaultYDefaultValue, MxEeDashes )
{
	MxEeDashes object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getDefaultYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeXDefaultValue, MxEeDashes )
{
	MxEeDashes object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getRelativeYDefaultValue, MxEeDashes )
{
	MxEeDashes object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getRelativeYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getColorDefaultValue, MxEeDashes )
{
	MxEeDashes object;
	MxColor expected;
	MxColor actual = object.getColorDefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxEeDashes )
{
	MxEeDashes object;
	std::string expected;
	std::string actual;
	object.setType( MxEnumStartStopContinue( lexicon::enums::StartStopContinue::start ) );
	object.setNumber( MxNumberNumberLevel( 1 ) );
	object.setDashLength( MxNumberTenths( 11.2 ) );
	object.setSpaceLength( MxNumberTenths( 11.2 ) );
	object.setDefaultX( MxNumberTenths( 61.7 ) );
	object.setDefaultY( MxNumberTenths( 61.7 ) );
	object.setRelativeX( MxNumberTenths( 61.7 ) );
	object.setRelativeY( MxNumberTenths( 61.7 ) );
	object.setColor( MxColor( "#BDBEBDBC" ) );
	object.setIsNumberPresent( true );
	object.setIsDashLengthPresent( true );
	object.setIsSpaceLengthPresent( true );
	object.setIsDefaultXPresent( true );
	object.setIsDefaultYPresent( true );
	object.setIsRelativeXPresent( true );
	object.setIsRelativeYPresent( true );
	object.setIsColorPresent( true );
	expected = "<dashes type=\"start\" number=\"1\" dash-length=\"11.2\" space-length=\"11.2\" default-x=\"61.7\" default-y=\"61.7\" relative-x=\"61.7\" relative-y=\"61.7\" color=\"#BDBEBDBC\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxEeDashes )
{
	MxEeDashes object;
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
	object.setDefaultX( MxNumberTenths( 61.8 ) );
	object.setDefaultY( MxNumberTenths( 61.8 ) );
	object.setRelativeX( MxNumberTenths( 61.8 ) );
	object.setRelativeY( MxNumberTenths( 61.8 ) );
	object.setColor( MxColor( "#C0BFBE" ) );
	expected = "<dashes type=\"start\" number=\"1\" dash-length=\"11.3\" space-length=\"11.3\" default-x=\"61.8\" default-y=\"61.8\" relative-x=\"61.8\" relative-y=\"61.8\" color=\"#C0BFBE\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString2, MxEeDashes )
{
	MxEeDashes object;
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
	object.setDefaultX( MxNumberTenths( 61.9 ) );
	object.setDefaultY( MxNumberTenths( 61.9 ) );
	object.setRelativeX( MxNumberTenths( 61.9 ) );
	object.setRelativeY( MxNumberTenths( 61.9 ) );
	object.setColor( MxColor( "#C1C2C1C0" ) );
	expected = "<dashes type=\"start\" dash-length=\"11.4\" space-length=\"11.4\" default-x=\"61.9\" default-y=\"61.9\" relative-x=\"61.9\" relative-y=\"61.9\" color=\"#C1C2C1C0\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString3, MxEeDashes )
{
	MxEeDashes object;
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
	object.setDefaultX( MxNumberTenths( 62 ) );
	object.setDefaultY( MxNumberTenths( 62 ) );
	object.setRelativeX( MxNumberTenths( 62 ) );
	object.setRelativeY( MxNumberTenths( 62 ) );
	object.setColor( MxColor( "#C4C3C2" ) );
	expected = "<dashes type=\"start\" space-length=\"11.5\" default-x=\"62\" default-y=\"62\" relative-x=\"62\" relative-y=\"62\" color=\"#C4C3C2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString4, MxEeDashes )
{
	MxEeDashes object;
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
	object.setDefaultX( MxNumberTenths( 62.1 ) );
	object.setDefaultY( MxNumberTenths( 62.1 ) );
	object.setRelativeX( MxNumberTenths( 62.1 ) );
	object.setRelativeY( MxNumberTenths( 62.1 ) );
	object.setColor( MxColor( "#C5C6C5C4" ) );
	expected = "<dashes type=\"start\" number=\"1\" default-x=\"62.1\" default-y=\"62.1\" relative-x=\"62.1\" relative-y=\"62.1\" color=\"#C5C6C5C4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString5, MxEeDashes )
{
	MxEeDashes object;
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
	object.setDefaultX( MxNumberTenths( 62.2 ) );
	object.setDefaultY( MxNumberTenths( 62.2 ) );
	object.setRelativeX( MxNumberTenths( 62.2 ) );
	object.setRelativeY( MxNumberTenths( 62.2 ) );
	object.setColor( MxColor( "#C8C7C6" ) );
	expected = "<dashes type=\"start\" number=\"1\" default-y=\"62.2\" relative-x=\"62.2\" relative-y=\"62.2\" color=\"#C8C7C6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString6, MxEeDashes )
{
	MxEeDashes object;
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
	object.setDefaultX( MxNumberTenths( 62.3 ) );
	object.setDefaultY( MxNumberTenths( 62.3 ) );
	object.setRelativeX( MxNumberTenths( 62.3 ) );
	object.setRelativeY( MxNumberTenths( 62.3 ) );
	object.setColor( MxColor( "#C9CAC9C8" ) );
	expected = "<dashes type=\"start\" dash-length=\"11.8\" relative-x=\"62.3\" relative-y=\"62.3\" color=\"#C9CAC9C8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString7, MxEeDashes )
{
	MxEeDashes object;
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
	object.setDefaultX( MxNumberTenths( 62.4 ) );
	object.setDefaultY( MxNumberTenths( 62.4 ) );
	object.setRelativeX( MxNumberTenths( 62.4 ) );
	object.setRelativeY( MxNumberTenths( 62.4 ) );
	object.setColor( MxColor( "#CCCBCA" ) );
	expected = "<dashes type=\"start\" dash-length=\"11.9\" relative-y=\"62.4\" color=\"#CCCBCA\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString8, MxEeDashes )
{
	MxEeDashes object;
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
	object.setDefaultX( MxNumberTenths( 62.5 ) );
	object.setDefaultY( MxNumberTenths( 62.5 ) );
	object.setRelativeX( MxNumberTenths( 62.5 ) );
	object.setRelativeY( MxNumberTenths( 62.5 ) );
	object.setColor( MxColor( "#CDCECDCC" ) );
	expected = "<dashes type=\"start\" number=\"1\" dash-length=\"12\" space-length=\"12\" color=\"#CDCECDCC\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString9, MxEeDashes )
{
	MxEeDashes object;
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
	object.setDefaultX( MxNumberTenths( 62.6 ) );
	object.setDefaultY( MxNumberTenths( 62.6 ) );
	object.setRelativeX( MxNumberTenths( 62.6 ) );
	object.setRelativeY( MxNumberTenths( 62.6 ) );
	object.setColor( MxColor( "#D0CFCE" ) );
	expected = "<dashes type=\"start\" number=\"1\" space-length=\"12.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString10, MxEeDashes )
{
	MxEeDashes object;
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
	object.setDefaultX( MxNumberTenths( 62.7 ) );
	object.setDefaultY( MxNumberTenths( 62.7 ) );
	object.setRelativeX( MxNumberTenths( 62.7 ) );
	object.setRelativeY( MxNumberTenths( 62.7 ) );
	object.setColor( MxColor( "#D1D2D1D0" ) );
	expected = "<dashes type=\"start\" space-length=\"12.2\" default-x=\"62.7\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString11, MxEeDashes )
{
	MxEeDashes object;
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
	object.setDefaultX( MxNumberTenths( 62.8 ) );
	object.setDefaultY( MxNumberTenths( 62.8 ) );
	object.setRelativeX( MxNumberTenths( 62.8 ) );
	object.setRelativeY( MxNumberTenths( 62.8 ) );
	object.setColor( MxColor( "#D4D3D2" ) );
	expected = "<dashes type=\"start\" space-length=\"12.3\" default-x=\"62.8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString12, MxEeDashes )
{
	MxEeDashes object;
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
	object.setDefaultX( MxNumberTenths( 62.9 ) );
	object.setDefaultY( MxNumberTenths( 62.9 ) );
	object.setRelativeX( MxNumberTenths( 62.9 ) );
	object.setRelativeY( MxNumberTenths( 62.9 ) );
	object.setColor( MxColor( "#D5D6D5D4" ) );
	expected = "<dashes type=\"start\" number=\"1\" dash-length=\"12.4\" default-x=\"62.9\" default-y=\"62.9\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString13, MxEeDashes )
{
	MxEeDashes object;
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
	object.setDefaultX( MxNumberTenths( 63 ) );
	object.setDefaultY( MxNumberTenths( 63 ) );
	object.setRelativeX( MxNumberTenths( 63 ) );
	object.setRelativeY( MxNumberTenths( 63 ) );
	object.setColor( MxColor( "#D8D7D6" ) );
	expected = "<dashes type=\"start\" number=\"1\" dash-length=\"12.5\" default-x=\"63\" default-y=\"63\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString14, MxEeDashes )
{
	MxEeDashes object;
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
	object.setDefaultX( MxNumberTenths( 63.1 ) );
	object.setDefaultY( MxNumberTenths( 63.1 ) );
	object.setRelativeX( MxNumberTenths( 63.1 ) );
	object.setRelativeY( MxNumberTenths( 63.1 ) );
	object.setColor( MxColor( "#D9DAD9D8" ) );
	expected = "<dashes type=\"start\" dash-length=\"12.6\" default-x=\"63.1\" default-y=\"63.1\" relative-x=\"63.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString15, MxEeDashes )
{
	MxEeDashes object;
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
	object.setDefaultX( MxNumberTenths( 63.2 ) );
	object.setDefaultY( MxNumberTenths( 63.2 ) );
	object.setRelativeX( MxNumberTenths( 63.2 ) );
	object.setRelativeY( MxNumberTenths( 63.2 ) );
	object.setColor( MxColor( "#DCDBDA" ) );
	expected = "<dashes type=\"start\" default-y=\"63.2\" relative-x=\"63.2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString16, MxEeDashes )
{
	MxEeDashes object;
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
	object.setDefaultX( MxNumberTenths( 63.3 ) );
	object.setDefaultY( MxNumberTenths( 63.3 ) );
	object.setRelativeX( MxNumberTenths( 63.3 ) );
	object.setRelativeY( MxNumberTenths( 63.3 ) );
	object.setColor( MxColor( "#DDDEDDDC" ) );
	expected = "<dashes type=\"start\" number=\"1\" space-length=\"12.8\" default-y=\"63.3\" relative-x=\"63.3\" relative-y=\"63.3\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString17, MxEeDashes )
{
	MxEeDashes object;
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
	object.setDefaultX( MxNumberTenths( 63.4 ) );
	object.setDefaultY( MxNumberTenths( 63.4 ) );
	object.setRelativeX( MxNumberTenths( 63.4 ) );
	object.setRelativeY( MxNumberTenths( 63.4 ) );
	object.setColor( MxColor( "#E0DFDE" ) );
	expected = "<dashes type=\"start\" number=\"1\" space-length=\"12.9\" default-y=\"63.4\" relative-x=\"63.4\" relative-y=\"63.4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString18, MxEeDashes )
{
	MxEeDashes object;
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
	object.setDefaultX( MxNumberTenths( 63.5 ) );
	object.setDefaultY( MxNumberTenths( 63.5 ) );
	object.setRelativeX( MxNumberTenths( 63.5 ) );
	object.setRelativeY( MxNumberTenths( 63.5 ) );
	object.setColor( MxColor( "#E1E2E1E0" ) );
	expected = "<dashes type=\"start\" dash-length=\"13\" space-length=\"13\" relative-x=\"63.5\" relative-y=\"63.5\" color=\"#E1E2E1E0\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString19, MxEeDashes )
{
	MxEeDashes object;
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
	object.setDefaultX( MxNumberTenths( 63.6 ) );
	object.setDefaultY( MxNumberTenths( 63.6 ) );
	object.setRelativeX( MxNumberTenths( 63.6 ) );
	object.setRelativeY( MxNumberTenths( 63.6 ) );
	object.setColor( MxColor( "#E4E3E2" ) );
	expected = "<dashes type=\"start\" dash-length=\"13.1\" space-length=\"13.1\" relative-x=\"63.6\" relative-y=\"63.6\" color=\"#E4E3E2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString20, MxEeDashes )
{
	MxEeDashes object;
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
	object.setDefaultX( MxNumberTenths( 63.7 ) );
	object.setDefaultY( MxNumberTenths( 63.7 ) );
	object.setRelativeX( MxNumberTenths( 63.7 ) );
	object.setRelativeY( MxNumberTenths( 63.7 ) );
	object.setColor( MxColor( "#E5E6E5E4" ) );
	expected = "<dashes type=\"start\" number=\"1\" dash-length=\"13.2\" default-x=\"63.7\" relative-x=\"63.7\" relative-y=\"63.7\" color=\"#E5E6E5E4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString21, MxEeDashes )
{
	MxEeDashes object;
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
	object.setDefaultX( MxNumberTenths( 63.8 ) );
	object.setDefaultY( MxNumberTenths( 63.8 ) );
	object.setRelativeX( MxNumberTenths( 63.8 ) );
	object.setRelativeY( MxNumberTenths( 63.8 ) );
	object.setColor( MxColor( "#E8E7E6" ) );
	expected = "<dashes type=\"start\" number=\"1\" default-x=\"63.8\" relative-y=\"63.8\" color=\"#E8E7E6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString22, MxEeDashes )
{
	MxEeDashes object;
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
	object.setDefaultX( MxNumberTenths( 63.9 ) );
	object.setDefaultY( MxNumberTenths( 63.9 ) );
	object.setRelativeX( MxNumberTenths( 63.9 ) );
	object.setRelativeY( MxNumberTenths( 63.9 ) );
	object.setColor( MxColor( "#E9EAE9E8" ) );
	expected = "<dashes type=\"start\" default-x=\"63.9\" relative-y=\"63.9\" color=\"#E9EAE9E8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString23, MxEeDashes )
{
	MxEeDashes object;
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
	object.setDefaultX( MxNumberTenths( 64 ) );
	object.setDefaultY( MxNumberTenths( 64 ) );
	object.setRelativeX( MxNumberTenths( 64 ) );
	object.setRelativeY( MxNumberTenths( 64 ) );
	object.setColor( MxColor( "#ECEBEA" ) );
	expected = "<dashes type=\"start\" default-x=\"64\" relative-y=\"64\" color=\"#ECEBEA\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString24, MxEeDashes )
{
	MxEeDashes object;
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
	object.setDefaultX( MxNumberTenths( 64.1 ) );
	object.setDefaultY( MxNumberTenths( 64.1 ) );
	object.setRelativeX( MxNumberTenths( 64.1 ) );
	object.setRelativeY( MxNumberTenths( 64.1 ) );
	object.setColor( MxColor( "#EDEEEDEC" ) );
	expected = "<dashes type=\"start\" number=\"1\" dash-length=\"13.6\" space-length=\"13.6\" default-x=\"64.1\" default-y=\"64.1\" color=\"#EDEEEDEC\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString25, MxEeDashes )
{
	MxEeDashes object;
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
	object.setDefaultX( MxNumberTenths( 64.2 ) );
	object.setDefaultY( MxNumberTenths( 64.2 ) );
	object.setRelativeX( MxNumberTenths( 64.2 ) );
	object.setRelativeY( MxNumberTenths( 64.2 ) );
	object.setColor( MxColor( "#F0EFEE" ) );
	expected = "<dashes type=\"start\" number=\"1\" dash-length=\"13.7\" space-length=\"13.7\" default-y=\"64.2\" color=\"#F0EFEE\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString26, MxEeDashes )
{
	MxEeDashes object;
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
	object.setDefaultX( MxNumberTenths( 64.3 ) );
	object.setDefaultY( MxNumberTenths( 64.3 ) );
	object.setRelativeX( MxNumberTenths( 64.3 ) );
	object.setRelativeY( MxNumberTenths( 64.3 ) );
	object.setColor( MxColor( "#F1F2F1F0" ) );
	expected = "<dashes type=\"start\" dash-length=\"13.8\" space-length=\"13.8\" default-y=\"64.3\" color=\"#F1F2F1F0\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString27, MxEeDashes )
{
	MxEeDashes object;
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
	object.setDefaultX( MxNumberTenths( 64.4 ) );
	object.setDefaultY( MxNumberTenths( 64.4 ) );
	object.setRelativeX( MxNumberTenths( 64.4 ) );
	object.setRelativeY( MxNumberTenths( 64.4 ) );
	object.setColor( MxColor( "#F4F3F2" ) );
	expected = "<dashes type=\"start\" space-length=\"13.9\" default-y=\"64.4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString28, MxEeDashes )
{
	MxEeDashes object;
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
	object.setDefaultX( MxNumberTenths( 64.5 ) );
	object.setDefaultY( MxNumberTenths( 64.5 ) );
	object.setRelativeX( MxNumberTenths( 64.5 ) );
	object.setRelativeY( MxNumberTenths( 64.5 ) );
	object.setColor( MxColor( "#F5F6F5F4" ) );
	expected = "<dashes type=\"start\" number=\"1\" default-y=\"64.5\" relative-x=\"64.5\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString29, MxEeDashes )
{
	MxEeDashes object;
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
	object.setDefaultX( MxNumberTenths( 64.6 ) );
	object.setDefaultY( MxNumberTenths( 64.6 ) );
	object.setRelativeX( MxNumberTenths( 64.6 ) );
	object.setRelativeY( MxNumberTenths( 64.6 ) );
	object.setColor( MxColor( "#F8F7F6" ) );
	expected = "<dashes type=\"start\" number=\"1\" default-y=\"64.6\" relative-x=\"64.6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString30, MxEeDashes )
{
	MxEeDashes object;
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
	object.setDefaultX( MxNumberTenths( 64.7 ) );
	object.setDefaultY( MxNumberTenths( 64.7 ) );
	object.setRelativeX( MxNumberTenths( 64.7 ) );
	object.setRelativeY( MxNumberTenths( 64.7 ) );
	object.setColor( MxColor( "#F9FAF9F8" ) );
	expected = "<dashes type=\"start\" dash-length=\"14.2\" default-x=\"64.7\" relative-x=\"64.7\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString31, MxEeDashes )
{
	MxEeDashes object;
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
	object.setDefaultX( MxNumberTenths( 64.8 ) );
	object.setDefaultY( MxNumberTenths( 64.8 ) );
	object.setRelativeX( MxNumberTenths( 64.8 ) );
	object.setRelativeY( MxNumberTenths( 64.8 ) );
	object.setColor( MxColor( "#FCFBFA" ) );
	expected = "<dashes type=\"start\" dash-length=\"14.3\" default-x=\"64.8\" relative-x=\"64.8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString32, MxEeDashes )
{
	MxEeDashes object;
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
	object.setDefaultX( MxNumberTenths( 64.9 ) );
	object.setDefaultY( MxNumberTenths( 64.9 ) );
	object.setRelativeX( MxNumberTenths( 64.9 ) );
	object.setRelativeY( MxNumberTenths( 64.9 ) );
	object.setColor( MxColor( "#FDFEFDFC" ) );
	expected = "<dashes type=\"start\" number=\"1\" dash-length=\"14.4\" space-length=\"14.4\" default-x=\"64.9\" relative-x=\"64.9\" relative-y=\"64.9\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString33, MxEeDashes )
{
	MxEeDashes object;
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
	object.setDefaultX( MxNumberTenths( 65 ) );
	object.setDefaultY( MxNumberTenths( 65 ) );
	object.setRelativeX( MxNumberTenths( 65 ) );
	object.setRelativeY( MxNumberTenths( 65 ) );
	object.setColor( MxColor( "#00FFFE" ) );
	expected = "<dashes type=\"start\" number=\"1\" space-length=\"14.5\" default-x=\"65\" relative-x=\"65\" relative-y=\"65\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString34, MxEeDashes )
{
	MxEeDashes object;
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
	object.setDefaultX( MxNumberTenths( 65.1 ) );
	object.setDefaultY( MxNumberTenths( 65.1 ) );
	object.setRelativeX( MxNumberTenths( 65.1 ) );
	object.setRelativeY( MxNumberTenths( 65.1 ) );
	object.setColor( MxColor( "#01020100" ) );
	expected = "<dashes type=\"start\" space-length=\"14.6\" default-x=\"65.1\" relative-x=\"65.1\" relative-y=\"65.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString35, MxEeDashes )
{
	MxEeDashes object;
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
	object.setDefaultX( MxNumberTenths( 65.2 ) );
	object.setDefaultY( MxNumberTenths( 65.2 ) );
	object.setRelativeX( MxNumberTenths( 65.2 ) );
	object.setRelativeY( MxNumberTenths( 65.2 ) );
	object.setColor( MxColor( "#040302" ) );
	expected = "<dashes type=\"start\" space-length=\"14.7\" relative-y=\"65.2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString36, MxEeDashes )
{
	MxEeDashes object;
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
	object.setDefaultX( MxNumberTenths( 65.3 ) );
	object.setDefaultY( MxNumberTenths( 65.3 ) );
	object.setRelativeX( MxNumberTenths( 65.3 ) );
	object.setRelativeY( MxNumberTenths( 65.3 ) );
	object.setColor( MxColor( "#05060504" ) );
	expected = "<dashes type=\"start\" number=\"1\" dash-length=\"14.8\" default-y=\"65.3\" relative-y=\"65.3\" color=\"#05060504\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString37, MxEeDashes )
{
	MxEeDashes object;
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
	object.setDefaultX( MxNumberTenths( 65.4 ) );
	object.setDefaultY( MxNumberTenths( 65.4 ) );
	object.setRelativeX( MxNumberTenths( 65.4 ) );
	object.setRelativeY( MxNumberTenths( 65.4 ) );
	object.setColor( MxColor( "#080706" ) );
	expected = "<dashes type=\"start\" number=\"1\" dash-length=\"14.9\" default-y=\"65.4\" relative-y=\"65.4\" color=\"#080706\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString38, MxEeDashes )
{
	MxEeDashes object;
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
	object.setDefaultX( MxNumberTenths( 65.5 ) );
	object.setDefaultY( MxNumberTenths( 65.5 ) );
	object.setRelativeX( MxNumberTenths( 65.5 ) );
	object.setRelativeY( MxNumberTenths( 65.5 ) );
	object.setColor( MxColor( "#090A0908" ) );
	expected = "<dashes type=\"start\" dash-length=\"15\" default-y=\"65.5\" relative-y=\"65.5\" color=\"#090A0908\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString39, MxEeDashes )
{
	MxEeDashes object;
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
	object.setDefaultX( MxNumberTenths( 65.6 ) );
	object.setDefaultY( MxNumberTenths( 65.6 ) );
	object.setRelativeX( MxNumberTenths( 65.6 ) );
	object.setRelativeY( MxNumberTenths( 65.6 ) );
	object.setColor( MxColor( "#0C0B0A" ) );
	expected = "<dashes type=\"start\" default-y=\"65.6\" relative-y=\"65.6\" color=\"#0C0B0A\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString40, MxEeDashes )
{
	MxEeDashes object;
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
	object.setDefaultX( MxNumberTenths( 65.7 ) );
	object.setDefaultY( MxNumberTenths( 65.7 ) );
	object.setRelativeX( MxNumberTenths( 65.7 ) );
	object.setRelativeY( MxNumberTenths( 65.7 ) );
	object.setColor( MxColor( "#0D0E0D0C" ) );
	expected = "<dashes type=\"start\" number=\"1\" space-length=\"15.2\" default-x=\"65.7\" default-y=\"65.7\" color=\"#0D0E0D0C\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString41, MxEeDashes )
{
	MxEeDashes object;
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
	object.setDefaultX( MxNumberTenths( 65.8 ) );
	object.setDefaultY( MxNumberTenths( 65.8 ) );
	object.setRelativeX( MxNumberTenths( 65.8 ) );
	object.setRelativeY( MxNumberTenths( 65.8 ) );
	object.setColor( MxColor( "#100F0E" ) );
	expected = "<dashes type=\"start\" number=\"1\" space-length=\"15.3\" default-x=\"65.8\" default-y=\"65.8\" color=\"#100F0E\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString42, MxEeDashes )
{
	MxEeDashes object;
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
	object.setDefaultX( MxNumberTenths( 65.9 ) );
	object.setDefaultY( MxNumberTenths( 65.9 ) );
	object.setRelativeX( MxNumberTenths( 65.9 ) );
	object.setRelativeY( MxNumberTenths( 65.9 ) );
	object.setColor( MxColor( "#11121110" ) );
	expected = "<dashes type=\"start\" dash-length=\"15.4\" space-length=\"15.4\" default-x=\"65.9\" relative-x=\"65.9\" color=\"#11121110\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString43, MxEeDashes )
{
	MxEeDashes object;
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
	object.setDefaultX( MxNumberTenths( 66 ) );
	object.setDefaultY( MxNumberTenths( 66 ) );
	object.setRelativeX( MxNumberTenths( 66 ) );
	object.setRelativeY( MxNumberTenths( 66 ) );
	object.setColor( MxColor( "#141312" ) );
	expected = "<dashes type=\"start\" dash-length=\"15.5\" space-length=\"15.5\" default-x=\"66\" relative-x=\"66\" color=\"#141312\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString44, MxEeDashes )
{
	MxEeDashes object;
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
	object.setDefaultX( MxNumberTenths( 66.1 ) );
	object.setDefaultY( MxNumberTenths( 66.1 ) );
	object.setRelativeX( MxNumberTenths( 66.1 ) );
	object.setRelativeY( MxNumberTenths( 66.1 ) );
	object.setColor( MxColor( "#15161514" ) );
	expected = "<dashes type=\"start\" number=\"1\" dash-length=\"15.6\" default-x=\"66.1\" relative-x=\"66.1\" color=\"#15161514\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString45, MxEeDashes )
{
	MxEeDashes object;
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
	object.setDefaultX( MxNumberTenths( 66.2 ) );
	object.setDefaultY( MxNumberTenths( 66.2 ) );
	object.setRelativeX( MxNumberTenths( 66.2 ) );
	object.setRelativeY( MxNumberTenths( 66.2 ) );
	object.setColor( MxColor( "#181716" ) );
	expected = "<dashes type=\"start\" number=\"1\" relative-x=\"66.2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString46, MxEeDashes )
{
	MxEeDashes object;
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
	object.setDefaultX( MxNumberTenths( 66.3 ) );
	object.setDefaultY( MxNumberTenths( 66.3 ) );
	object.setRelativeX( MxNumberTenths( 66.3 ) );
	object.setRelativeY( MxNumberTenths( 66.3 ) );
	object.setColor( MxColor( "#191A1918" ) );
	expected = "<dashes type=\"start\" relative-x=\"66.3\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString47, MxEeDashes )
{
	MxEeDashes object;
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
	object.setDefaultX( MxNumberTenths( 66.4 ) );
	object.setDefaultY( MxNumberTenths( 66.4 ) );
	object.setRelativeX( MxNumberTenths( 66.4 ) );
	object.setRelativeY( MxNumberTenths( 66.4 ) );
	object.setColor( MxColor( "#1C1B1A" ) );
	expected = "<dashes type=\"start\" relative-x=\"66.4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString48, MxEeDashes )
{
	MxEeDashes object;
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
	object.setDefaultX( MxNumberTenths( 66.5 ) );
	object.setDefaultY( MxNumberTenths( 66.5 ) );
	object.setRelativeX( MxNumberTenths( 66.5 ) );
	object.setRelativeY( MxNumberTenths( 66.5 ) );
	object.setColor( MxColor( "#1D1E1D1C" ) );
	expected = "<dashes type=\"start\" number=\"1\" dash-length=\"16\" space-length=\"16\" default-y=\"66.5\" relative-x=\"66.5\" relative-y=\"66.5\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString49, MxEeDashes )
{
	MxEeDashes object;
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
	object.setDefaultX( MxNumberTenths( 66.6 ) );
	object.setDefaultY( MxNumberTenths( 66.6 ) );
	object.setRelativeX( MxNumberTenths( 66.6 ) );
	object.setRelativeY( MxNumberTenths( 66.6 ) );
	object.setColor( MxColor( "#201F1E" ) );
	expected = "<dashes type=\"start\" number=\"1\" dash-length=\"16.1\" space-length=\"16.1\" default-y=\"66.6\" relative-y=\"66.6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString50, MxEeDashes )
{
	MxEeDashes object;
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
	object.setDefaultX( MxNumberTenths( 66.7 ) );
	object.setDefaultY( MxNumberTenths( 66.7 ) );
	object.setRelativeX( MxNumberTenths( 66.7 ) );
	object.setRelativeY( MxNumberTenths( 66.7 ) );
	object.setColor( MxColor( "#21222120" ) );
	expected = "<dashes type=\"start\" dash-length=\"16.2\" space-length=\"16.2\" default-x=\"66.7\" default-y=\"66.7\" relative-y=\"66.7\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString51, MxEeDashes )
{
	MxEeDashes object;
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
	object.setDefaultX( MxNumberTenths( 66.8 ) );
	object.setDefaultY( MxNumberTenths( 66.8 ) );
	object.setRelativeX( MxNumberTenths( 66.8 ) );
	object.setRelativeY( MxNumberTenths( 66.8 ) );
	object.setColor( MxColor( "#242322" ) );
	expected = "<dashes type=\"start\" space-length=\"16.3\" default-x=\"66.8\" default-y=\"66.8\" relative-y=\"66.8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString52, MxEeDashes )
{
	MxEeDashes object;
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
	object.setDefaultX( MxNumberTenths( 66.9 ) );
	object.setDefaultY( MxNumberTenths( 66.9 ) );
	object.setRelativeX( MxNumberTenths( 66.9 ) );
	object.setRelativeY( MxNumberTenths( 66.9 ) );
	object.setColor( MxColor( "#25262524" ) );
	expected = "<dashes type=\"start\" number=\"1\" default-x=\"66.9\" default-y=\"66.9\" relative-y=\"66.9\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString53, MxEeDashes )
{
	MxEeDashes object;
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
	object.setDefaultX( MxNumberTenths( 67 ) );
	object.setDefaultY( MxNumberTenths( 67 ) );
	object.setRelativeX( MxNumberTenths( 67 ) );
	object.setRelativeY( MxNumberTenths( 67 ) );
	object.setColor( MxColor( "#282726" ) );
	expected = "<dashes type=\"start\" number=\"1\" default-x=\"67\" default-y=\"67\" relative-y=\"67\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString54, MxEeDashes )
{
	MxEeDashes object;
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
	object.setDefaultX( MxNumberTenths( 67.1 ) );
	object.setDefaultY( MxNumberTenths( 67.1 ) );
	object.setRelativeX( MxNumberTenths( 67.1 ) );
	object.setRelativeY( MxNumberTenths( 67.1 ) );
	object.setColor( MxColor( "#292A2928" ) );
	expected = "<dashes type=\"start\" dash-length=\"16.6\" default-x=\"67.1\" relative-y=\"67.1\" color=\"#292A2928\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString55, MxEeDashes )
{
	MxEeDashes object;
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
	object.setDefaultX( MxNumberTenths( 67.2 ) );
	object.setDefaultY( MxNumberTenths( 67.2 ) );
	object.setRelativeX( MxNumberTenths( 67.2 ) );
	object.setRelativeY( MxNumberTenths( 67.2 ) );
	object.setColor( MxColor( "#2C2B2A" ) );
	expected = "<dashes type=\"start\" dash-length=\"16.7\" relative-y=\"67.2\" color=\"#2C2B2A\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString56, MxEeDashes )
{
	MxEeDashes object;
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
	object.setDefaultX( MxNumberTenths( 67.3 ) );
	object.setDefaultY( MxNumberTenths( 67.3 ) );
	object.setRelativeX( MxNumberTenths( 67.3 ) );
	object.setRelativeY( MxNumberTenths( 67.3 ) );
	object.setColor( MxColor( "#2D2E2D2C" ) );
	expected = "<dashes type=\"start\" number=\"1\" dash-length=\"16.8\" space-length=\"16.8\" relative-x=\"67.3\" color=\"#2D2E2D2C\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString57, MxEeDashes )
{
	MxEeDashes object;
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
	object.setDefaultX( MxNumberTenths( 67.4 ) );
	object.setDefaultY( MxNumberTenths( 67.4 ) );
	object.setRelativeX( MxNumberTenths( 67.4 ) );
	object.setRelativeY( MxNumberTenths( 67.4 ) );
	object.setColor( MxColor( "#302F2E" ) );
	expected = "<dashes type=\"start\" number=\"1\" space-length=\"16.9\" relative-x=\"67.4\" color=\"#302F2E\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString58, MxEeDashes )
{
	MxEeDashes object;
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
	object.setDefaultX( MxNumberTenths( 67.5 ) );
	object.setDefaultY( MxNumberTenths( 67.5 ) );
	object.setRelativeX( MxNumberTenths( 67.5 ) );
	object.setRelativeY( MxNumberTenths( 67.5 ) );
	object.setColor( MxColor( "#31323130" ) );
	expected = "<dashes type=\"start\" space-length=\"17\" relative-x=\"67.5\" color=\"#31323130\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString59, MxEeDashes )
{
	MxEeDashes object;
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
	object.setDefaultX( MxNumberTenths( 67.6 ) );
	object.setDefaultY( MxNumberTenths( 67.6 ) );
	object.setRelativeX( MxNumberTenths( 67.6 ) );
	object.setRelativeY( MxNumberTenths( 67.6 ) );
	object.setColor( MxColor( "#343332" ) );
	expected = "<dashes type=\"start\" space-length=\"17.1\" relative-x=\"67.6\" color=\"#343332\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString60, MxEeDashes )
{
	MxEeDashes object;
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
	object.setDefaultX( MxNumberTenths( 67.7 ) );
	object.setDefaultY( MxNumberTenths( 67.7 ) );
	object.setRelativeX( MxNumberTenths( 67.7 ) );
	object.setRelativeY( MxNumberTenths( 67.7 ) );
	object.setColor( MxColor( "#35363534" ) );
	expected = "<dashes type=\"start\" number=\"1\" dash-length=\"17.2\" default-x=\"67.7\" default-y=\"67.7\" relative-x=\"67.7\" color=\"#35363534\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString61, MxEeDashes )
{
	MxEeDashes object;
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
	object.setDefaultX( MxNumberTenths( 67.8 ) );
	object.setDefaultY( MxNumberTenths( 67.8 ) );
	object.setRelativeX( MxNumberTenths( 67.8 ) );
	object.setRelativeY( MxNumberTenths( 67.8 ) );
	object.setColor( MxColor( "#383736" ) );
	expected = "<dashes type=\"start\" number=\"1\" dash-length=\"17.3\" default-x=\"67.8\" default-y=\"67.8\" relative-x=\"67.8\" color=\"#383736\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString62, MxEeDashes )
{
	MxEeDashes object;
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
	object.setDefaultX( MxNumberTenths( 67.9 ) );
	object.setDefaultY( MxNumberTenths( 67.9 ) );
	object.setRelativeX( MxNumberTenths( 67.9 ) );
	object.setRelativeY( MxNumberTenths( 67.9 ) );
	object.setColor( MxColor( "#393A3938" ) );
	expected = "<dashes type=\"start\" dash-length=\"17.4\" default-x=\"67.9\" default-y=\"67.9\" relative-x=\"67.9\" color=\"#393A3938\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString63, MxEeDashes )
{
	MxEeDashes object;
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
	object.setDefaultX( MxNumberTenths( 68 ) );
	object.setDefaultY( MxNumberTenths( 68 ) );
	object.setRelativeX( MxNumberTenths( 68 ) );
	object.setRelativeY( MxNumberTenths( 68 ) );
	object.setColor( MxColor( "#3C3B3A" ) );
	expected = "<dashes type=\"start\" default-x=\"68\" default-y=\"68\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString64, MxEeDashes )
{
	MxEeDashes object;
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
	object.setDefaultX( MxNumberTenths( 68.1 ) );
	object.setDefaultY( MxNumberTenths( 68.1 ) );
	object.setRelativeX( MxNumberTenths( 68.1 ) );
	object.setRelativeY( MxNumberTenths( 68.1 ) );
	object.setColor( MxColor( "#3D3E3D3C" ) );
	expected = "<dashes type=\"start\" number=\"1\" space-length=\"17.6\" default-x=\"68.1\" default-y=\"68.1\" relative-y=\"68.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString65, MxEeDashes )
{
	MxEeDashes object;
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
	object.setDefaultX( MxNumberTenths( 68.2 ) );
	object.setDefaultY( MxNumberTenths( 68.2 ) );
	object.setRelativeX( MxNumberTenths( 68.2 ) );
	object.setRelativeY( MxNumberTenths( 68.2 ) );
	object.setColor( MxColor( "#403F3E" ) );
	expected = "<dashes type=\"start\" number=\"1\" space-length=\"17.7\" default-y=\"68.2\" relative-y=\"68.2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString66, MxEeDashes )
{
	MxEeDashes object;
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
	object.setDefaultX( MxNumberTenths( 68.3 ) );
	object.setDefaultY( MxNumberTenths( 68.3 ) );
	object.setRelativeX( MxNumberTenths( 68.3 ) );
	object.setRelativeY( MxNumberTenths( 68.3 ) );
	object.setColor( MxColor( "#41424140" ) );
	expected = "<dashes type=\"start\" dash-length=\"17.8\" space-length=\"17.8\" relative-y=\"68.3\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString67, MxEeDashes )
{
	MxEeDashes object;
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
	object.setDefaultX( MxNumberTenths( 68.4 ) );
	object.setDefaultY( MxNumberTenths( 68.4 ) );
	object.setRelativeX( MxNumberTenths( 68.4 ) );
	object.setRelativeY( MxNumberTenths( 68.4 ) );
	object.setColor( MxColor( "#444342" ) );
	expected = "<dashes type=\"start\" dash-length=\"17.9\" space-length=\"17.9\" relative-y=\"68.4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString68, MxEeDashes )
{
	MxEeDashes object;
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
	object.setDefaultX( MxNumberTenths( 68.5 ) );
	object.setDefaultY( MxNumberTenths( 68.5 ) );
	object.setRelativeX( MxNumberTenths( 68.5 ) );
	object.setRelativeY( MxNumberTenths( 68.5 ) );
	object.setColor( MxColor( "#45464544" ) );
	expected = "<dashes type=\"start\" number=\"1\" dash-length=\"18\" relative-y=\"68.5\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString69, MxEeDashes )
{
	MxEeDashes object;
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
	object.setDefaultX( MxNumberTenths( 68.6 ) );
	object.setDefaultY( MxNumberTenths( 68.6 ) );
	object.setRelativeX( MxNumberTenths( 68.6 ) );
	object.setRelativeY( MxNumberTenths( 68.6 ) );
	object.setColor( MxColor( "#484746" ) );
	expected = "<dashes type=\"start\" number=\"1\" relative-y=\"68.6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString70, MxEeDashes )
{
	MxEeDashes object;
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
	object.setDefaultX( MxNumberTenths( 68.7 ) );
	object.setDefaultY( MxNumberTenths( 68.7 ) );
	object.setRelativeX( MxNumberTenths( 68.7 ) );
	object.setRelativeY( MxNumberTenths( 68.7 ) );
	object.setColor( MxColor( "#494A4948" ) );
	expected = "<dashes type=\"start\" default-x=\"68.7\" relative-x=\"68.7\" relative-y=\"68.7\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString71, MxEeDashes )
{
	MxEeDashes object;
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
	object.setDefaultX( MxNumberTenths( 68.8 ) );
	object.setDefaultY( MxNumberTenths( 68.8 ) );
	object.setRelativeX( MxNumberTenths( 68.8 ) );
	object.setRelativeY( MxNumberTenths( 68.8 ) );
	object.setColor( MxColor( "#4C4B4A" ) );
	expected = "<dashes type=\"start\" default-x=\"68.8\" relative-x=\"68.8\" relative-y=\"68.8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString72, MxEeDashes )
{
	MxEeDashes object;
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
	object.setDefaultX( MxNumberTenths( 68.9 ) );
	object.setDefaultY( MxNumberTenths( 68.9 ) );
	object.setRelativeX( MxNumberTenths( 68.9 ) );
	object.setRelativeY( MxNumberTenths( 68.9 ) );
	object.setColor( MxColor( "#4D4E4D4C" ) );
	expected = "<dashes type=\"start\" number=\"1\" dash-length=\"18.4\" space-length=\"18.4\" default-x=\"68.9\" default-y=\"68.9\" relative-x=\"68.9\" color=\"#4D4E4D4C\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString73, MxEeDashes )
{
	MxEeDashes object;
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
	object.setDefaultX( MxNumberTenths( 69 ) );
	object.setDefaultY( MxNumberTenths( 69 ) );
	object.setRelativeX( MxNumberTenths( 69 ) );
	object.setRelativeY( MxNumberTenths( 69 ) );
	object.setColor( MxColor( "#504F4E" ) );
	expected = "<dashes type=\"start\" number=\"1\" dash-length=\"18.5\" space-length=\"18.5\" default-x=\"69\" default-y=\"69\" relative-x=\"69\" color=\"#504F4E\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString74, MxEeDashes )
{
	MxEeDashes object;
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
	object.setDefaultX( MxNumberTenths( 69.1 ) );
	object.setDefaultY( MxNumberTenths( 69.1 ) );
	object.setRelativeX( MxNumberTenths( 69.1 ) );
	object.setRelativeY( MxNumberTenths( 69.1 ) );
	object.setColor( MxColor( "#51525150" ) );
	expected = "<dashes type=\"start\" dash-length=\"18.6\" space-length=\"18.6\" default-x=\"69.1\" default-y=\"69.1\" relative-x=\"69.1\" color=\"#51525150\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString75, MxEeDashes )
{
	MxEeDashes object;
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
	object.setDefaultX( MxNumberTenths( 69.2 ) );
	object.setDefaultY( MxNumberTenths( 69.2 ) );
	object.setRelativeX( MxNumberTenths( 69.2 ) );
	object.setRelativeY( MxNumberTenths( 69.2 ) );
	object.setColor( MxColor( "#545352" ) );
	expected = "<dashes type=\"start\" space-length=\"18.7\" default-y=\"69.2\" relative-x=\"69.2\" color=\"#545352\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString76, MxEeDashes )
{
	MxEeDashes object;
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
	object.setDefaultX( MxNumberTenths( 69.3 ) );
	object.setDefaultY( MxNumberTenths( 69.3 ) );
	object.setRelativeX( MxNumberTenths( 69.3 ) );
	object.setRelativeY( MxNumberTenths( 69.3 ) );
	object.setColor( MxColor( "#55565554" ) );
	expected = "<dashes type=\"start\" number=\"1\" default-y=\"69.3\" relative-x=\"69.3\" color=\"#55565554\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString77, MxEeDashes )
{
	MxEeDashes object;
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
	object.setDefaultX( MxNumberTenths( 69.4 ) );
	object.setDefaultY( MxNumberTenths( 69.4 ) );
	object.setRelativeX( MxNumberTenths( 69.4 ) );
	object.setRelativeY( MxNumberTenths( 69.4 ) );
	object.setColor( MxColor( "#585756" ) );
	expected = "<dashes type=\"start\" number=\"1\" default-y=\"69.4\" color=\"#585756\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString78, MxEeDashes )
{
	MxEeDashes object;
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
	object.setDefaultX( MxNumberTenths( 69.5 ) );
	object.setDefaultY( MxNumberTenths( 69.5 ) );
	object.setRelativeX( MxNumberTenths( 69.5 ) );
	object.setRelativeY( MxNumberTenths( 69.5 ) );
	object.setColor( MxColor( "#595A5958" ) );
	expected = "<dashes type=\"start\" dash-length=\"19\" color=\"#595A5958\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString79, MxEeDashes )
{
	MxEeDashes object;
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
	object.setDefaultX( MxNumberTenths( 69.6 ) );
	object.setDefaultY( MxNumberTenths( 69.6 ) );
	object.setRelativeX( MxNumberTenths( 69.6 ) );
	object.setRelativeY( MxNumberTenths( 69.6 ) );
	object.setColor( MxColor( "#5C5B5A" ) );
	expected = "<dashes type=\"start\" dash-length=\"19.1\" color=\"#5C5B5A\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString80, MxEeDashes )
{
	MxEeDashes object;
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
	object.setDefaultX( MxNumberTenths( 69.7 ) );
	object.setDefaultY( MxNumberTenths( 69.7 ) );
	object.setRelativeX( MxNumberTenths( 69.7 ) );
	object.setRelativeY( MxNumberTenths( 69.7 ) );
	object.setColor( MxColor( "#5D5E5D5C" ) );
	expected = "<dashes type=\"start\" number=\"1\" dash-length=\"19.2\" space-length=\"19.2\" default-x=\"69.7\" relative-y=\"69.7\" color=\"#5D5E5D5C\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString81, MxEeDashes )
{
	MxEeDashes object;
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
	object.setDefaultX( MxNumberTenths( 69.8 ) );
	object.setDefaultY( MxNumberTenths( 69.8 ) );
	object.setRelativeX( MxNumberTenths( 69.8 ) );
	object.setRelativeY( MxNumberTenths( 69.8 ) );
	object.setColor( MxColor( "#605F5E" ) );
	expected = "<dashes type=\"start\" number=\"1\" space-length=\"19.3\" default-x=\"69.8\" relative-y=\"69.8\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString82, MxEeDashes )
{
	MxEeDashes object;
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
	object.setDefaultX( MxNumberTenths( 69.9 ) );
	object.setDefaultY( MxNumberTenths( 69.9 ) );
	object.setRelativeX( MxNumberTenths( 69.9 ) );
	object.setRelativeY( MxNumberTenths( 69.9 ) );
	object.setColor( MxColor( "#61626160" ) );
	expected = "<dashes type=\"start\" space-length=\"19.4\" default-x=\"69.9\" relative-y=\"69.9\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString83, MxEeDashes )
{
	MxEeDashes object;
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
	object.setDefaultX( MxNumberTenths( 70 ) );
	object.setDefaultY( MxNumberTenths( 70 ) );
	object.setRelativeX( MxNumberTenths( 70 ) );
	object.setRelativeY( MxNumberTenths( 70 ) );
	object.setColor( MxColor( "#646362" ) );
	expected = "<dashes type=\"start\" space-length=\"19.5\" default-x=\"70\" relative-y=\"70\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString84, MxEeDashes )
{
	MxEeDashes object;
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
	object.setDefaultX( MxNumberTenths( 70.1 ) );
	object.setDefaultY( MxNumberTenths( 70.1 ) );
	object.setRelativeX( MxNumberTenths( 70.1 ) );
	object.setRelativeY( MxNumberTenths( 70.1 ) );
	object.setColor( MxColor( "#65666564" ) );
	expected = "<dashes type=\"start\" number=\"1\" dash-length=\"19.6\" default-x=\"70.1\" default-y=\"70.1\" relative-x=\"70.1\" relative-y=\"70.1\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString85, MxEeDashes )
{
	MxEeDashes object;
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
	object.setDefaultX( MxNumberTenths( 70.2 ) );
	object.setDefaultY( MxNumberTenths( 70.2 ) );
	object.setRelativeX( MxNumberTenths( 70.2 ) );
	object.setRelativeY( MxNumberTenths( 70.2 ) );
	object.setColor( MxColor( "#686766" ) );
	expected = "<dashes type=\"start\" number=\"1\" dash-length=\"19.7\" default-y=\"70.2\" relative-x=\"70.2\" relative-y=\"70.2\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString86, MxEeDashes )
{
	MxEeDashes object;
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
	object.setDefaultX( MxNumberTenths( 70.3 ) );
	object.setDefaultY( MxNumberTenths( 70.3 ) );
	object.setRelativeX( MxNumberTenths( 70.3 ) );
	object.setRelativeY( MxNumberTenths( 70.3 ) );
	object.setColor( MxColor( "#696A6968" ) );
	expected = "<dashes type=\"start\" dash-length=\"19.8\" default-y=\"70.3\" relative-x=\"70.3\" relative-y=\"70.3\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString87, MxEeDashes )
{
	MxEeDashes object;
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
	object.setDefaultX( MxNumberTenths( 70.4 ) );
	object.setDefaultY( MxNumberTenths( 70.4 ) );
	object.setRelativeX( MxNumberTenths( 70.4 ) );
	object.setRelativeY( MxNumberTenths( 70.4 ) );
	object.setColor( MxColor( "#6C6B6A" ) );
	expected = "<dashes type=\"start\" default-y=\"70.4\" relative-x=\"70.4\" relative-y=\"70.4\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString88, MxEeDashes )
{
	MxEeDashes object;
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
	object.setDefaultX( MxNumberTenths( 70.5 ) );
	object.setDefaultY( MxNumberTenths( 70.5 ) );
	object.setRelativeX( MxNumberTenths( 70.5 ) );
	object.setRelativeY( MxNumberTenths( 70.5 ) );
	object.setColor( MxColor( "#6D6E6D6C" ) );
	expected = "<dashes type=\"start\" number=\"1\" space-length=\"20\" default-y=\"70.5\" relative-x=\"70.5\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString89, MxEeDashes )
{
	MxEeDashes object;
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
	object.setDefaultX( MxNumberTenths( 70.6 ) );
	object.setDefaultY( MxNumberTenths( 70.6 ) );
	object.setRelativeX( MxNumberTenths( 70.6 ) );
	object.setRelativeY( MxNumberTenths( 70.6 ) );
	object.setColor( MxColor( "#706F6E" ) );
	expected = "<dashes type=\"start\" number=\"1\" space-length=\"20.1\" default-y=\"70.6\" relative-x=\"70.6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString90, MxEeDashes )
{
	MxEeDashes object;
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
	object.setDefaultX( MxNumberTenths( 70.7 ) );
	object.setDefaultY( MxNumberTenths( 70.7 ) );
	object.setRelativeX( MxNumberTenths( 70.7 ) );
	object.setRelativeY( MxNumberTenths( 70.7 ) );
	object.setColor( MxColor( "#71727170" ) );
	expected = "<dashes type=\"start\" dash-length=\"20.2\" space-length=\"20.2\" default-x=\"70.7\" relative-x=\"70.7\" color=\"#71727170\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString91, MxEeDashes )
{
	MxEeDashes object;
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
	object.setDefaultX( MxNumberTenths( 70.8 ) );
	object.setDefaultY( MxNumberTenths( 70.8 ) );
	object.setRelativeX( MxNumberTenths( 70.8 ) );
	object.setRelativeY( MxNumberTenths( 70.8 ) );
	object.setColor( MxColor( "#747372" ) );
	expected = "<dashes type=\"start\" dash-length=\"20.3\" space-length=\"20.3\" default-x=\"70.8\" color=\"#747372\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString92, MxEeDashes )
{
	MxEeDashes object;
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
	object.setDefaultX( MxNumberTenths( 70.9 ) );
	object.setDefaultY( MxNumberTenths( 70.9 ) );
	object.setRelativeX( MxNumberTenths( 70.9 ) );
	object.setRelativeY( MxNumberTenths( 70.9 ) );
	object.setColor( MxColor( "#75767574" ) );
	expected = "<dashes type=\"start\" number=\"1\" dash-length=\"20.4\" default-x=\"70.9\" color=\"#75767574\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString93, MxEeDashes )
{
	MxEeDashes object;
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
	object.setDefaultX( MxNumberTenths( 71 ) );
	object.setDefaultY( MxNumberTenths( 71 ) );
	object.setRelativeX( MxNumberTenths( 71 ) );
	object.setRelativeY( MxNumberTenths( 71 ) );
	object.setColor( MxColor( "#787776" ) );
	expected = "<dashes type=\"start\" number=\"1\" default-x=\"71\" color=\"#787776\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString94, MxEeDashes )
{
	MxEeDashes object;
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
	object.setDefaultX( MxNumberTenths( 71.1 ) );
	object.setDefaultY( MxNumberTenths( 71.1 ) );
	object.setRelativeX( MxNumberTenths( 71.1 ) );
	object.setRelativeY( MxNumberTenths( 71.1 ) );
	object.setColor( MxColor( "#797A7978" ) );
	expected = "<dashes type=\"start\" default-x=\"71.1\" color=\"#797A7978\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString95, MxEeDashes )
{
	MxEeDashes object;
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
	object.setDefaultX( MxNumberTenths( 71.2 ) );
	object.setDefaultY( MxNumberTenths( 71.2 ) );
	object.setRelativeX( MxNumberTenths( 71.2 ) );
	object.setRelativeY( MxNumberTenths( 71.2 ) );
	object.setColor( MxColor( "#7C7B7A" ) );
	expected = "<dashes type=\"start\" color=\"#7C7B7A\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString96, MxEeDashes )
{
	MxEeDashes object;
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
	object.setDefaultX( MxNumberTenths( 71.3 ) );
	object.setDefaultY( MxNumberTenths( 71.3 ) );
	object.setRelativeX( MxNumberTenths( 71.3 ) );
	object.setRelativeY( MxNumberTenths( 71.3 ) );
	object.setColor( MxColor( "#7D7E7D7C" ) );
	expected = "<dashes type=\"start\" number=\"1\" dash-length=\"20.8\" space-length=\"20.8\" default-y=\"71.3\" relative-y=\"71.3\" color=\"#7D7E7D7C\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString97, MxEeDashes )
{
	MxEeDashes object;
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
	object.setDefaultX( MxNumberTenths( 71.4 ) );
	object.setDefaultY( MxNumberTenths( 71.4 ) );
	object.setRelativeX( MxNumberTenths( 71.4 ) );
	object.setRelativeY( MxNumberTenths( 71.4 ) );
	object.setColor( MxColor( "#807F7E" ) );
	expected = "<dashes type=\"start\" number=\"1\" dash-length=\"20.9\" space-length=\"20.9\" default-y=\"71.4\" relative-y=\"71.4\" color=\"#807F7E\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString98, MxEeDashes )
{
	MxEeDashes object;
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
	object.setDefaultX( MxNumberTenths( 71.5 ) );
	object.setDefaultY( MxNumberTenths( 71.5 ) );
	object.setRelativeX( MxNumberTenths( 71.5 ) );
	object.setRelativeY( MxNumberTenths( 71.5 ) );
	object.setColor( MxColor( "#81828180" ) );
	expected = "<dashes type=\"start\" dash-length=\"21\" space-length=\"21\" default-y=\"71.5\" relative-x=\"71.5\" relative-y=\"71.5\" color=\"#81828180\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString99, MxEeDashes )
{
	MxEeDashes object;
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
	object.setDefaultX( MxNumberTenths( 71.6 ) );
	object.setDefaultY( MxNumberTenths( 71.6 ) );
	object.setRelativeX( MxNumberTenths( 71.6 ) );
	object.setRelativeY( MxNumberTenths( 71.6 ) );
	object.setColor( MxColor( "#848382" ) );
	expected = "<dashes type=\"start\" space-length=\"21.1\" default-y=\"71.6\" relative-x=\"71.6\" relative-y=\"71.6\"/>";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString100, MxEeDashes )
{
	MxEeDashes object;
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
	object.setDefaultX( MxNumberTenths( 71.7 ) );
	object.setDefaultY( MxNumberTenths( 71.7 ) );
	object.setRelativeX( MxNumberTenths( 71.7 ) );
	object.setRelativeY( MxNumberTenths( 71.7 ) );
	object.setColor( MxColor( "#85868584" ) );
	expected = "<dashes type=\"start\"/>";
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


