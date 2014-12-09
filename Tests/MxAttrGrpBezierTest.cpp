/** *******************************************************
  * 
  * MxAttrGrpBezierTest.cpp
  * Created: 2014-11-28 19:17:14
  * 
  * *******************************************************
  * **/
#include "TestHarness.h"
#include "MxAttrGrpBezier.h"

using namespace lexicon;

/* Constructor -------------------------------------------------------------- */

	/** Constructor **/

TEST( Ctor, MxAttrGrpBezier )
{
	MxAttrGrpBezier object;
	CHECK( true )
}
TEST( ctorValues0, MxAttrGrpBezier )
{
	MxAttrGrpBezier object;
	std::string expected = ( MxNumberDivisions(  ) ).toString();
	std::string actual = object.getBezierOffset().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValues1, MxAttrGrpBezier )
{
	MxAttrGrpBezier object;
	std::string expected = ( MxNumberDivisions(  ) ).toString();
	std::string actual = object.getBezierOffset2().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValues2, MxAttrGrpBezier )
{
	MxAttrGrpBezier object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getBezierX().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValues3, MxAttrGrpBezier )
{
	MxAttrGrpBezier object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getBezierY().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValues4, MxAttrGrpBezier )
{
	MxAttrGrpBezier object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getBezierX2().toString();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorValues5, MxAttrGrpBezier )
{
	MxAttrGrpBezier object;
	std::string expected = ( MxNumberTenths(  ) ).toString();
	std::string actual = object.getBezierY2().toString();
	CHECK_EQUAL( expected, actual )
}

/* End: Constructor --------------------------------------------------------- */


/* Get Class Info ----------------------------------------------------------- */

TEST( getClassName, MxAttrGrpBezier )
{
	MxAttrGrpBezier object;
	std::string expected = "MxAttrGrpBezier";
	std::string actual = object.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName, MxAttrGrpBezier )
{
	MxAttrGrpBezier object;
	std::string expected = "bezier";
	std::string actual = object.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation, MxAttrGrpBezier )
{
	MxAttrGrpBezier object;
	std::string expected = "The bezier attribute group is used to indicate the curvature of slurs and ties, representing the control points for a cubic bezier curve. For ties, the bezier attribute group is used with the tied element. Normal slurs, S-shaped slurs, and ties need only two bezier points: one associated with the start of the slur or tie, the other with the stop. Complex slurs and slurs divided over system breaks can specify additional bezier data at slur elements with a continue type. The bezier-offset, bezier-x, and bezier-y attributes describe the outgoing bezier point for slurs and ties with a start type, and the incoming bezier point for slurs and ties with types of stop or continue. The attributes bezier-offset2, bezier-x2, and bezier-y2 are only valid with slurs of type continue, and describe the outgoing bezier point. The bezier-offset and bezier-offset2 attributes are measured in terms of musical divisions, like the offset element. These are the recommended attributes for specifying horizontal position. The other attributes are specified in tenths, relative to any position settings associated with the slur or tied element.";
	std::string actual = object.getDocumentation();
	CHECK_EQUAL( expected, actual )
}

/* End: Get Class Info ------------------------------------------------------ */


/* SetValue Functions ------------------------------------------------------- */

TEST( setBezierOffset0, MxAttrGrpBezier )
{
	MxNumberDivisions value1( 0.1 );
	MxNumberDivisions value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxAttrGrpBezier object;
	object.setBezierOffset( value1 );
	MxNumberDivisions expected = value1;
	MxNumberDivisions actual = object.getBezierOffset();
	CHECK_EQUAL( expected, actual )
	object.setBezierOffset( value2 );
	expected = value2;
	actual = object.getBezierOffset();
	CHECK_EQUAL( expected, actual )
}
TEST( setBezierOffset21, MxAttrGrpBezier )
{
	MxNumberDivisions value1( 0.1 );
	MxNumberDivisions value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxAttrGrpBezier object;
	object.setBezierOffset2( value1 );
	MxNumberDivisions expected = value1;
	MxNumberDivisions actual = object.getBezierOffset2();
	CHECK_EQUAL( expected, actual )
	object.setBezierOffset2( value2 );
	expected = value2;
	actual = object.getBezierOffset2();
	CHECK_EQUAL( expected, actual )
}
TEST( setBezierX2, MxAttrGrpBezier )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxAttrGrpBezier object;
	object.setBezierX( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getBezierX();
	CHECK_EQUAL( expected, actual )
	object.setBezierX( value2 );
	expected = value2;
	actual = object.getBezierX();
	CHECK_EQUAL( expected, actual )
}
TEST( setBezierY3, MxAttrGrpBezier )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxAttrGrpBezier object;
	object.setBezierY( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getBezierY();
	CHECK_EQUAL( expected, actual )
	object.setBezierY( value2 );
	expected = value2;
	actual = object.getBezierY();
	CHECK_EQUAL( expected, actual )
}
TEST( setBezierX24, MxAttrGrpBezier )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxAttrGrpBezier object;
	object.setBezierX2( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getBezierX2();
	CHECK_EQUAL( expected, actual )
	object.setBezierX2( value2 );
	expected = value2;
	actual = object.getBezierX2();
	CHECK_EQUAL( expected, actual )
}
TEST( setBezierY25, MxAttrGrpBezier )
{
	MxNumberTenths value1( 0.1 );
	MxNumberTenths value2( 0.2 );
	CHECK( ( value1 != value2 ) )
	MxAttrGrpBezier object;
	object.setBezierY2( value1 );
	MxNumberTenths expected = value1;
	MxNumberTenths actual = object.getBezierY2();
	CHECK_EQUAL( expected, actual )
	object.setBezierY2( value2 );
	expected = value2;
	actual = object.getBezierY2();
	CHECK_EQUAL( expected, actual )
}

/* End: SetValue Functions -------------------------------------------------- */


/* Get IsAttributeRequired -------------------------------------------------- */

TEST( getIsBezierOffsetRequired0, MxAttrGrpBezier )
{
	MxAttrGrpBezier object;
	bool expected = false;
	bool actual = object.getIsBezierOffsetRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsBezierOffset2Required1, MxAttrGrpBezier )
{
	MxAttrGrpBezier object;
	bool expected = false;
	bool actual = object.getIsBezierOffset2Required();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsBezierXRequired2, MxAttrGrpBezier )
{
	MxAttrGrpBezier object;
	bool expected = false;
	bool actual = object.getIsBezierXRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsBezierYRequired3, MxAttrGrpBezier )
{
	MxAttrGrpBezier object;
	bool expected = false;
	bool actual = object.getIsBezierYRequired();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsBezierX2Required4, MxAttrGrpBezier )
{
	MxAttrGrpBezier object;
	bool expected = false;
	bool actual = object.getIsBezierX2Required();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsBezierY2Required5, MxAttrGrpBezier )
{
	MxAttrGrpBezier object;
	bool expected = false;
	bool actual = object.getIsBezierY2Required();
	CHECK_EQUAL( expected, actual )
}

/* End: Get IsAttributeRequired --------------------------------------------- */


/* IsAttributePresent ------------------------------------------------------- */

TEST( getIsBezierOffsetPresent0, MxAttrGrpBezier )
{
	MxAttrGrpBezier object;
	bool expected = false;
	bool actual = object.getIsBezierOffsetPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsBezierOffsetPresent( true );
	expected = true;
	actual = object.getIsBezierOffsetPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsBezierOffsetPresent( false );
	expected = false;
	actual = object.getIsBezierOffsetPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsBezierOffset2Present1, MxAttrGrpBezier )
{
	MxAttrGrpBezier object;
	bool expected = false;
	bool actual = object.getIsBezierOffset2Present();
	CHECK_EQUAL( expected, actual )
	object.setIsBezierOffset2Present( true );
	expected = true;
	actual = object.getIsBezierOffset2Present();
	CHECK_EQUAL( expected, actual )
	object.setIsBezierOffset2Present( false );
	expected = false;
	actual = object.getIsBezierOffset2Present();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsBezierXPresent2, MxAttrGrpBezier )
{
	MxAttrGrpBezier object;
	bool expected = false;
	bool actual = object.getIsBezierXPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsBezierXPresent( true );
	expected = true;
	actual = object.getIsBezierXPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsBezierXPresent( false );
	expected = false;
	actual = object.getIsBezierXPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsBezierYPresent3, MxAttrGrpBezier )
{
	MxAttrGrpBezier object;
	bool expected = false;
	bool actual = object.getIsBezierYPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsBezierYPresent( true );
	expected = true;
	actual = object.getIsBezierYPresent();
	CHECK_EQUAL( expected, actual )
	object.setIsBezierYPresent( false );
	expected = false;
	actual = object.getIsBezierYPresent();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsBezierX2Present4, MxAttrGrpBezier )
{
	MxAttrGrpBezier object;
	bool expected = false;
	bool actual = object.getIsBezierX2Present();
	CHECK_EQUAL( expected, actual )
	object.setIsBezierX2Present( true );
	expected = true;
	actual = object.getIsBezierX2Present();
	CHECK_EQUAL( expected, actual )
	object.setIsBezierX2Present( false );
	expected = false;
	actual = object.getIsBezierX2Present();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsBezierY2Present5, MxAttrGrpBezier )
{
	MxAttrGrpBezier object;
	bool expected = false;
	bool actual = object.getIsBezierY2Present();
	CHECK_EQUAL( expected, actual )
	object.setIsBezierY2Present( true );
	expected = true;
	actual = object.getIsBezierY2Present();
	CHECK_EQUAL( expected, actual )
	object.setIsBezierY2Present( false );
	expected = false;
	actual = object.getIsBezierY2Present();
	CHECK_EQUAL( expected, actual )
}

/* End: IsAttributePresent -------------------------------------------------- */


/* toString ----------------------------------------------------------------- */

TEST( toString0, MxAttrGrpBezier )
{
	MxAttrGrpBezier object;
	std::string expected;
	std::string actual;
	object.setBezierOffset( MxNumberDivisions( 1.1 ) );
	object.setBezierOffset2( MxNumberDivisions( 1.1 ) );
	object.setBezierX( MxNumberTenths( 1.1 ) );
	object.setBezierY( MxNumberTenths( 1.1 ) );
	object.setBezierX2( MxNumberTenths( 1.1 ) );
	object.setBezierY2( MxNumberTenths( 1.1 ) );
	object.setIsBezierOffsetPresent( true );
	object.setIsBezierOffset2Present( true );
	object.setIsBezierXPresent( true );
	object.setIsBezierYPresent( true );
	object.setIsBezierX2Present( true );
	object.setIsBezierY2Present( true );
	expected = "bezier-offset=\"1.1\" bezier-offset2=\"1.1\" bezier-x=\"1.1\" bezier-y=\"1.1\" bezier-x2=\"1.1\" bezier-y2=\"1.1\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString1, MxAttrGrpBezier )
{
	MxAttrGrpBezier object;
	std::string expected;
	std::string actual;
	object.setIsBezierOffsetPresent( false );
	object.setIsBezierOffset2Present( true );
	object.setIsBezierXPresent( true );
	object.setIsBezierYPresent( true );
	object.setIsBezierX2Present( true );
	object.setIsBezierY2Present( true );
	object.setBezierOffset( MxNumberDivisions( 1.2 ) );
	object.setBezierOffset2( MxNumberDivisions( 1.2 ) );
	object.setBezierX( MxNumberTenths( 1.2 ) );
	object.setBezierY( MxNumberTenths( 1.2 ) );
	object.setBezierX2( MxNumberTenths( 1.2 ) );
	object.setBezierY2( MxNumberTenths( 1.2 ) );
	expected = "bezier-offset2=\"1.2\" bezier-x=\"1.2\" bezier-y=\"1.2\" bezier-x2=\"1.2\" bezier-y2=\"1.2\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString2, MxAttrGrpBezier )
{
	MxAttrGrpBezier object;
	std::string expected;
	std::string actual;
	object.setIsBezierOffsetPresent( true );
	object.setIsBezierOffset2Present( false );
	object.setIsBezierXPresent( true );
	object.setIsBezierYPresent( true );
	object.setIsBezierX2Present( true );
	object.setIsBezierY2Present( true );
	object.setBezierOffset( MxNumberDivisions( 1.3 ) );
	object.setBezierOffset2( MxNumberDivisions( 1.3 ) );
	object.setBezierX( MxNumberTenths( 1.3 ) );
	object.setBezierY( MxNumberTenths( 1.3 ) );
	object.setBezierX2( MxNumberTenths( 1.3 ) );
	object.setBezierY2( MxNumberTenths( 1.3 ) );
	expected = "bezier-offset=\"1.3\" bezier-x=\"1.3\" bezier-y=\"1.3\" bezier-x2=\"1.3\" bezier-y2=\"1.3\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString3, MxAttrGrpBezier )
{
	MxAttrGrpBezier object;
	std::string expected;
	std::string actual;
	object.setIsBezierOffsetPresent( false );
	object.setIsBezierOffset2Present( false );
	object.setIsBezierXPresent( false );
	object.setIsBezierYPresent( true );
	object.setIsBezierX2Present( true );
	object.setIsBezierY2Present( true );
	object.setBezierOffset( MxNumberDivisions( 1.4 ) );
	object.setBezierOffset2( MxNumberDivisions( 1.4 ) );
	object.setBezierX( MxNumberTenths( 1.4 ) );
	object.setBezierY( MxNumberTenths( 1.4 ) );
	object.setBezierX2( MxNumberTenths( 1.4 ) );
	object.setBezierY2( MxNumberTenths( 1.4 ) );
	expected = "bezier-y=\"1.4\" bezier-x2=\"1.4\" bezier-y2=\"1.4\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString4, MxAttrGrpBezier )
{
	MxAttrGrpBezier object;
	std::string expected;
	std::string actual;
	object.setIsBezierOffsetPresent( true );
	object.setIsBezierOffset2Present( true );
	object.setIsBezierXPresent( false );
	object.setIsBezierYPresent( false );
	object.setIsBezierX2Present( true );
	object.setIsBezierY2Present( true );
	object.setBezierOffset( MxNumberDivisions( 1.5 ) );
	object.setBezierOffset2( MxNumberDivisions( 1.5 ) );
	object.setBezierX( MxNumberTenths( 1.5 ) );
	object.setBezierY( MxNumberTenths( 1.5 ) );
	object.setBezierX2( MxNumberTenths( 1.5 ) );
	object.setBezierY2( MxNumberTenths( 1.5 ) );
	expected = "bezier-offset=\"1.5\" bezier-offset2=\"1.5\" bezier-x2=\"1.5\" bezier-y2=\"1.5\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString5, MxAttrGrpBezier )
{
	MxAttrGrpBezier object;
	std::string expected;
	std::string actual;
	object.setIsBezierOffsetPresent( false );
	object.setIsBezierOffset2Present( true );
	object.setIsBezierXPresent( false );
	object.setIsBezierYPresent( false );
	object.setIsBezierX2Present( false );
	object.setIsBezierY2Present( true );
	object.setBezierOffset( MxNumberDivisions( 1.6 ) );
	object.setBezierOffset2( MxNumberDivisions( 1.6 ) );
	object.setBezierX( MxNumberTenths( 1.6 ) );
	object.setBezierY( MxNumberTenths( 1.6 ) );
	object.setBezierX2( MxNumberTenths( 1.6 ) );
	object.setBezierY2( MxNumberTenths( 1.6 ) );
	expected = "bezier-offset2=\"1.6\" bezier-y2=\"1.6\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString6, MxAttrGrpBezier )
{
	MxAttrGrpBezier object;
	std::string expected;
	std::string actual;
	object.setIsBezierOffsetPresent( true );
	object.setIsBezierOffset2Present( false );
	object.setIsBezierXPresent( true );
	object.setIsBezierYPresent( false );
	object.setIsBezierX2Present( false );
	object.setIsBezierY2Present( false );
	object.setBezierOffset( MxNumberDivisions( 1.7 ) );
	object.setBezierOffset2( MxNumberDivisions( 1.7 ) );
	object.setBezierX( MxNumberTenths( 1.7 ) );
	object.setBezierY( MxNumberTenths( 1.7 ) );
	object.setBezierX2( MxNumberTenths( 1.7 ) );
	object.setBezierY2( MxNumberTenths( 1.7 ) );
	expected = "bezier-offset=\"1.7\" bezier-x=\"1.7\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString7, MxAttrGrpBezier )
{
	MxAttrGrpBezier object;
	std::string expected;
	std::string actual;
	object.setIsBezierOffsetPresent( false );
	object.setIsBezierOffset2Present( false );
	object.setIsBezierXPresent( true );
	object.setIsBezierYPresent( false );
	object.setIsBezierX2Present( false );
	object.setIsBezierY2Present( false );
	object.setBezierOffset( MxNumberDivisions( 1.8 ) );
	object.setBezierOffset2( MxNumberDivisions( 1.8 ) );
	object.setBezierX( MxNumberTenths( 1.8 ) );
	object.setBezierY( MxNumberTenths( 1.8 ) );
	object.setBezierX2( MxNumberTenths( 1.8 ) );
	object.setBezierY2( MxNumberTenths( 1.8 ) );
	expected = "bezier-x=\"1.8\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString8, MxAttrGrpBezier )
{
	MxAttrGrpBezier object;
	std::string expected;
	std::string actual;
	object.setIsBezierOffsetPresent( true );
	object.setIsBezierOffset2Present( true );
	object.setIsBezierXPresent( true );
	object.setIsBezierYPresent( true );
	object.setIsBezierX2Present( false );
	object.setIsBezierY2Present( false );
	object.setBezierOffset( MxNumberDivisions( 1.9 ) );
	object.setBezierOffset2( MxNumberDivisions( 1.9 ) );
	object.setBezierX( MxNumberTenths( 1.9 ) );
	object.setBezierY( MxNumberTenths( 1.9 ) );
	object.setBezierX2( MxNumberTenths( 1.9 ) );
	object.setBezierY2( MxNumberTenths( 1.9 ) );
	expected = "bezier-offset=\"1.9\" bezier-offset2=\"1.9\" bezier-x=\"1.9\" bezier-y=\"1.9\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString9, MxAttrGrpBezier )
{
	MxAttrGrpBezier object;
	std::string expected;
	std::string actual;
	object.setIsBezierOffsetPresent( false );
	object.setIsBezierOffset2Present( true );
	object.setIsBezierXPresent( false );
	object.setIsBezierYPresent( true );
	object.setIsBezierX2Present( false );
	object.setIsBezierY2Present( false );
	object.setBezierOffset( MxNumberDivisions( 2 ) );
	object.setBezierOffset2( MxNumberDivisions( 2 ) );
	object.setBezierX( MxNumberTenths( 2 ) );
	object.setBezierY( MxNumberTenths( 2 ) );
	object.setBezierX2( MxNumberTenths( 2 ) );
	object.setBezierY2( MxNumberTenths( 2 ) );
	expected = "bezier-offset2=\"2\" bezier-y=\"2\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString10, MxAttrGrpBezier )
{
	MxAttrGrpBezier object;
	std::string expected;
	std::string actual;
	object.setIsBezierOffsetPresent( true );
	object.setIsBezierOffset2Present( false );
	object.setIsBezierXPresent( false );
	object.setIsBezierYPresent( true );
	object.setIsBezierX2Present( true );
	object.setIsBezierY2Present( false );
	object.setBezierOffset( MxNumberDivisions( 2.1 ) );
	object.setBezierOffset2( MxNumberDivisions( 2.1 ) );
	object.setBezierX( MxNumberTenths( 2.1 ) );
	object.setBezierY( MxNumberTenths( 2.1 ) );
	object.setBezierX2( MxNumberTenths( 2.1 ) );
	object.setBezierY2( MxNumberTenths( 2.1 ) );
	expected = "bezier-offset=\"2.1\" bezier-y=\"2.1\" bezier-x2=\"2.1\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString11, MxAttrGrpBezier )
{
	MxAttrGrpBezier object;
	std::string expected;
	std::string actual;
	object.setIsBezierOffsetPresent( false );
	object.setIsBezierOffset2Present( false );
	object.setIsBezierXPresent( false );
	object.setIsBezierYPresent( true );
	object.setIsBezierX2Present( true );
	object.setIsBezierY2Present( false );
	object.setBezierOffset( MxNumberDivisions( 2.2 ) );
	object.setBezierOffset2( MxNumberDivisions( 2.2 ) );
	object.setBezierX( MxNumberTenths( 2.2 ) );
	object.setBezierY( MxNumberTenths( 2.2 ) );
	object.setBezierX2( MxNumberTenths( 2.2 ) );
	object.setBezierY2( MxNumberTenths( 2.2 ) );
	expected = "bezier-y=\"2.2\" bezier-x2=\"2.2\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString12, MxAttrGrpBezier )
{
	MxAttrGrpBezier object;
	std::string expected;
	std::string actual;
	object.setIsBezierOffsetPresent( true );
	object.setIsBezierOffset2Present( true );
	object.setIsBezierXPresent( true );
	object.setIsBezierYPresent( false );
	object.setIsBezierX2Present( true );
	object.setIsBezierY2Present( true );
	object.setBezierOffset( MxNumberDivisions( 2.3 ) );
	object.setBezierOffset2( MxNumberDivisions( 2.3 ) );
	object.setBezierX( MxNumberTenths( 2.3 ) );
	object.setBezierY( MxNumberTenths( 2.3 ) );
	object.setBezierX2( MxNumberTenths( 2.3 ) );
	object.setBezierY2( MxNumberTenths( 2.3 ) );
	expected = "bezier-offset=\"2.3\" bezier-offset2=\"2.3\" bezier-x=\"2.3\" bezier-x2=\"2.3\" bezier-y2=\"2.3\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString13, MxAttrGrpBezier )
{
	MxAttrGrpBezier object;
	std::string expected;
	std::string actual;
	object.setIsBezierOffsetPresent( false );
	object.setIsBezierOffset2Present( true );
	object.setIsBezierXPresent( true );
	object.setIsBezierYPresent( false );
	object.setIsBezierX2Present( true );
	object.setIsBezierY2Present( true );
	object.setBezierOffset( MxNumberDivisions( 2.4 ) );
	object.setBezierOffset2( MxNumberDivisions( 2.4 ) );
	object.setBezierX( MxNumberTenths( 2.4 ) );
	object.setBezierY( MxNumberTenths( 2.4 ) );
	object.setBezierX2( MxNumberTenths( 2.4 ) );
	object.setBezierY2( MxNumberTenths( 2.4 ) );
	expected = "bezier-offset2=\"2.4\" bezier-x=\"2.4\" bezier-x2=\"2.4\" bezier-y2=\"2.4\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString14, MxAttrGrpBezier )
{
	MxAttrGrpBezier object;
	std::string expected;
	std::string actual;
	object.setIsBezierOffsetPresent( true );
	object.setIsBezierOffset2Present( false );
	object.setIsBezierXPresent( true );
	object.setIsBezierYPresent( false );
	object.setIsBezierX2Present( true );
	object.setIsBezierY2Present( true );
	object.setBezierOffset( MxNumberDivisions( 2.5 ) );
	object.setBezierOffset2( MxNumberDivisions( 2.5 ) );
	object.setBezierX( MxNumberTenths( 2.5 ) );
	object.setBezierY( MxNumberTenths( 2.5 ) );
	object.setBezierX2( MxNumberTenths( 2.5 ) );
	object.setBezierY2( MxNumberTenths( 2.5 ) );
	expected = "bezier-offset=\"2.5\" bezier-x=\"2.5\" bezier-x2=\"2.5\" bezier-y2=\"2.5\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString15, MxAttrGrpBezier )
{
	MxAttrGrpBezier object;
	std::string expected;
	std::string actual;
	object.setIsBezierOffsetPresent( false );
	object.setIsBezierOffset2Present( false );
	object.setIsBezierXPresent( false );
	object.setIsBezierYPresent( false );
	object.setIsBezierX2Present( false );
	object.setIsBezierY2Present( true );
	object.setBezierOffset( MxNumberDivisions( 2.6 ) );
	object.setBezierOffset2( MxNumberDivisions( 2.6 ) );
	object.setBezierX( MxNumberTenths( 2.6 ) );
	object.setBezierY( MxNumberTenths( 2.6 ) );
	object.setBezierX2( MxNumberTenths( 2.6 ) );
	object.setBezierY2( MxNumberTenths( 2.6 ) );
	expected = "bezier-y2=\"2.6\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString16, MxAttrGrpBezier )
{
	MxAttrGrpBezier object;
	std::string expected;
	std::string actual;
	object.setIsBezierOffsetPresent( true );
	object.setIsBezierOffset2Present( true );
	object.setIsBezierXPresent( false );
	object.setIsBezierYPresent( true );
	object.setIsBezierX2Present( false );
	object.setIsBezierY2Present( true );
	object.setBezierOffset( MxNumberDivisions( 2.7 ) );
	object.setBezierOffset2( MxNumberDivisions( 2.7 ) );
	object.setBezierX( MxNumberTenths( 2.7 ) );
	object.setBezierY( MxNumberTenths( 2.7 ) );
	object.setBezierX2( MxNumberTenths( 2.7 ) );
	object.setBezierY2( MxNumberTenths( 2.7 ) );
	expected = "bezier-offset=\"2.7\" bezier-offset2=\"2.7\" bezier-y=\"2.7\" bezier-y2=\"2.7\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString17, MxAttrGrpBezier )
{
	MxAttrGrpBezier object;
	std::string expected;
	std::string actual;
	object.setIsBezierOffsetPresent( false );
	object.setIsBezierOffset2Present( true );
	object.setIsBezierXPresent( false );
	object.setIsBezierYPresent( true );
	object.setIsBezierX2Present( false );
	object.setIsBezierY2Present( true );
	object.setBezierOffset( MxNumberDivisions( 2.8 ) );
	object.setBezierOffset2( MxNumberDivisions( 2.8 ) );
	object.setBezierX( MxNumberTenths( 2.8 ) );
	object.setBezierY( MxNumberTenths( 2.8 ) );
	object.setBezierX2( MxNumberTenths( 2.8 ) );
	object.setBezierY2( MxNumberTenths( 2.8 ) );
	expected = "bezier-offset2=\"2.8\" bezier-y=\"2.8\" bezier-y2=\"2.8\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString18, MxAttrGrpBezier )
{
	MxAttrGrpBezier object;
	std::string expected;
	std::string actual;
	object.setIsBezierOffsetPresent( true );
	object.setIsBezierOffset2Present( false );
	object.setIsBezierXPresent( true );
	object.setIsBezierYPresent( true );
	object.setIsBezierX2Present( false );
	object.setIsBezierY2Present( false );
	object.setBezierOffset( MxNumberDivisions( 2.9 ) );
	object.setBezierOffset2( MxNumberDivisions( 2.9 ) );
	object.setBezierX( MxNumberTenths( 2.9 ) );
	object.setBezierY( MxNumberTenths( 2.9 ) );
	object.setBezierX2( MxNumberTenths( 2.9 ) );
	object.setBezierY2( MxNumberTenths( 2.9 ) );
	expected = "bezier-offset=\"2.9\" bezier-x=\"2.9\" bezier-y=\"2.9\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString19, MxAttrGrpBezier )
{
	MxAttrGrpBezier object;
	std::string expected;
	std::string actual;
	object.setIsBezierOffsetPresent( false );
	object.setIsBezierOffset2Present( false );
	object.setIsBezierXPresent( true );
	object.setIsBezierYPresent( true );
	object.setIsBezierX2Present( false );
	object.setIsBezierY2Present( false );
	object.setBezierOffset( MxNumberDivisions( 3 ) );
	object.setBezierOffset2( MxNumberDivisions( 3 ) );
	object.setBezierX( MxNumberTenths( 3 ) );
	object.setBezierY( MxNumberTenths( 3 ) );
	object.setBezierX2( MxNumberTenths( 3 ) );
	object.setBezierY2( MxNumberTenths( 3 ) );
	expected = "bezier-x=\"3\" bezier-y=\"3\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString20, MxAttrGrpBezier )
{
	MxAttrGrpBezier object;
	std::string expected;
	std::string actual;
	object.setIsBezierOffsetPresent( true );
	object.setIsBezierOffset2Present( true );
	object.setIsBezierXPresent( true );
	object.setIsBezierYPresent( false );
	object.setIsBezierX2Present( true );
	object.setIsBezierY2Present( false );
	object.setBezierOffset( MxNumberDivisions( 3.1 ) );
	object.setBezierOffset2( MxNumberDivisions( 3.1 ) );
	object.setBezierX( MxNumberTenths( 3.1 ) );
	object.setBezierY( MxNumberTenths( 3.1 ) );
	object.setBezierX2( MxNumberTenths( 3.1 ) );
	object.setBezierY2( MxNumberTenths( 3.1 ) );
	expected = "bezier-offset=\"3.1\" bezier-offset2=\"3.1\" bezier-x=\"3.1\" bezier-x2=\"3.1\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString21, MxAttrGrpBezier )
{
	MxAttrGrpBezier object;
	std::string expected;
	std::string actual;
	object.setIsBezierOffsetPresent( false );
	object.setIsBezierOffset2Present( true );
	object.setIsBezierXPresent( false );
	object.setIsBezierYPresent( false );
	object.setIsBezierX2Present( true );
	object.setIsBezierY2Present( false );
	object.setBezierOffset( MxNumberDivisions( 3.2 ) );
	object.setBezierOffset2( MxNumberDivisions( 3.2 ) );
	object.setBezierX( MxNumberTenths( 3.2 ) );
	object.setBezierY( MxNumberTenths( 3.2 ) );
	object.setBezierX2( MxNumberTenths( 3.2 ) );
	object.setBezierY2( MxNumberTenths( 3.2 ) );
	expected = "bezier-offset2=\"3.2\" bezier-x2=\"3.2\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString22, MxAttrGrpBezier )
{
	MxAttrGrpBezier object;
	std::string expected;
	std::string actual;
	object.setIsBezierOffsetPresent( true );
	object.setIsBezierOffset2Present( false );
	object.setIsBezierXPresent( false );
	object.setIsBezierYPresent( false );
	object.setIsBezierX2Present( true );
	object.setIsBezierY2Present( false );
	object.setBezierOffset( MxNumberDivisions( 3.3 ) );
	object.setBezierOffset2( MxNumberDivisions( 3.3 ) );
	object.setBezierX( MxNumberTenths( 3.3 ) );
	object.setBezierY( MxNumberTenths( 3.3 ) );
	object.setBezierX2( MxNumberTenths( 3.3 ) );
	object.setBezierY2( MxNumberTenths( 3.3 ) );
	expected = "bezier-offset=\"3.3\" bezier-x2=\"3.3\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString23, MxAttrGrpBezier )
{
	MxAttrGrpBezier object;
	std::string expected;
	std::string actual;
	object.setIsBezierOffsetPresent( false );
	object.setIsBezierOffset2Present( false );
	object.setIsBezierXPresent( false );
	object.setIsBezierYPresent( false );
	object.setIsBezierX2Present( true );
	object.setIsBezierY2Present( false );
	object.setBezierOffset( MxNumberDivisions( 3.4 ) );
	object.setBezierOffset2( MxNumberDivisions( 3.4 ) );
	object.setBezierX( MxNumberTenths( 3.4 ) );
	object.setBezierY( MxNumberTenths( 3.4 ) );
	object.setBezierX2( MxNumberTenths( 3.4 ) );
	object.setBezierY2( MxNumberTenths( 3.4 ) );
	expected = "bezier-x2=\"3.4\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString24, MxAttrGrpBezier )
{
	MxAttrGrpBezier object;
	std::string expected;
	std::string actual;
	object.setIsBezierOffsetPresent( false );
	object.setIsBezierOffset2Present( true );
	object.setIsBezierXPresent( true );
	object.setIsBezierYPresent( true );
	object.setIsBezierX2Present( false );
	object.setIsBezierY2Present( true );
	object.setBezierOffset( MxNumberDivisions( 3.5 ) );
	object.setBezierOffset2( MxNumberDivisions( 3.5 ) );
	object.setBezierX( MxNumberTenths( 3.5 ) );
	object.setBezierY( MxNumberTenths( 3.5 ) );
	object.setBezierX2( MxNumberTenths( 3.5 ) );
	object.setBezierY2( MxNumberTenths( 3.5 ) );
	expected = "bezier-offset2=\"3.5\" bezier-x=\"3.5\" bezier-y=\"3.5\" bezier-y2=\"3.5\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString25, MxAttrGrpBezier )
{
	MxAttrGrpBezier object;
	std::string expected;
	std::string actual;
	object.setIsBezierOffsetPresent( true );
	object.setIsBezierOffset2Present( false );
	object.setIsBezierXPresent( true );
	object.setIsBezierYPresent( true );
	object.setIsBezierX2Present( false );
	object.setIsBezierY2Present( true );
	object.setBezierOffset( MxNumberDivisions( 3.6 ) );
	object.setBezierOffset2( MxNumberDivisions( 3.6 ) );
	object.setBezierX( MxNumberTenths( 3.6 ) );
	object.setBezierY( MxNumberTenths( 3.6 ) );
	object.setBezierX2( MxNumberTenths( 3.6 ) );
	object.setBezierY2( MxNumberTenths( 3.6 ) );
	expected = "bezier-offset=\"3.6\" bezier-x=\"3.6\" bezier-y=\"3.6\" bezier-y2=\"3.6\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString26, MxAttrGrpBezier )
{
	MxAttrGrpBezier object;
	std::string expected;
	std::string actual;
	object.setIsBezierOffsetPresent( false );
	object.setIsBezierOffset2Present( false );
	object.setIsBezierXPresent( false );
	object.setIsBezierYPresent( true );
	object.setIsBezierX2Present( false );
	object.setIsBezierY2Present( true );
	object.setBezierOffset( MxNumberDivisions( 3.7 ) );
	object.setBezierOffset2( MxNumberDivisions( 3.7 ) );
	object.setBezierX( MxNumberTenths( 3.7 ) );
	object.setBezierY( MxNumberTenths( 3.7 ) );
	object.setBezierX2( MxNumberTenths( 3.7 ) );
	object.setBezierY2( MxNumberTenths( 3.7 ) );
	expected = "bezier-y=\"3.7\" bezier-y2=\"3.7\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString27, MxAttrGrpBezier )
{
	MxAttrGrpBezier object;
	std::string expected;
	std::string actual;
	object.setIsBezierOffsetPresent( true );
	object.setIsBezierOffset2Present( true );
	object.setIsBezierXPresent( false );
	object.setIsBezierYPresent( false );
	object.setIsBezierX2Present( false );
	object.setIsBezierY2Present( true );
	object.setBezierOffset( MxNumberDivisions( 3.8 ) );
	object.setBezierOffset2( MxNumberDivisions( 3.8 ) );
	object.setBezierX( MxNumberTenths( 3.8 ) );
	object.setBezierY( MxNumberTenths( 3.8 ) );
	object.setBezierX2( MxNumberTenths( 3.8 ) );
	object.setBezierY2( MxNumberTenths( 3.8 ) );
	expected = "bezier-offset=\"3.8\" bezier-offset2=\"3.8\" bezier-y2=\"3.8\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString28, MxAttrGrpBezier )
{
	MxAttrGrpBezier object;
	std::string expected;
	std::string actual;
	object.setIsBezierOffsetPresent( false );
	object.setIsBezierOffset2Present( true );
	object.setIsBezierXPresent( false );
	object.setIsBezierYPresent( false );
	object.setIsBezierX2Present( false );
	object.setIsBezierY2Present( true );
	object.setBezierOffset( MxNumberDivisions( 3.9 ) );
	object.setBezierOffset2( MxNumberDivisions( 3.9 ) );
	object.setBezierX( MxNumberTenths( 3.9 ) );
	object.setBezierY( MxNumberTenths( 3.9 ) );
	object.setBezierX2( MxNumberTenths( 3.9 ) );
	object.setBezierY2( MxNumberTenths( 3.9 ) );
	expected = "bezier-offset2=\"3.9\" bezier-y2=\"3.9\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString29, MxAttrGrpBezier )
{
	MxAttrGrpBezier object;
	std::string expected;
	std::string actual;
	object.setIsBezierOffsetPresent( true );
	object.setIsBezierOffset2Present( false );
	object.setIsBezierXPresent( true );
	object.setIsBezierYPresent( false );
	object.setIsBezierX2Present( true );
	object.setIsBezierY2Present( false );
	object.setBezierOffset( MxNumberDivisions( 4 ) );
	object.setBezierOffset2( MxNumberDivisions( 4 ) );
	object.setBezierX( MxNumberTenths( 4 ) );
	object.setBezierY( MxNumberTenths( 4 ) );
	object.setBezierX2( MxNumberTenths( 4 ) );
	object.setBezierY2( MxNumberTenths( 4 ) );
	expected = "bezier-offset=\"4\" bezier-x=\"4\" bezier-x2=\"4\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString30, MxAttrGrpBezier )
{
	MxAttrGrpBezier object;
	std::string expected;
	std::string actual;
	object.setIsBezierOffsetPresent( false );
	object.setIsBezierOffset2Present( false );
	object.setIsBezierXPresent( true );
	object.setIsBezierYPresent( false );
	object.setIsBezierX2Present( true );
	object.setIsBezierY2Present( false );
	object.setBezierOffset( MxNumberDivisions( 4.1 ) );
	object.setBezierOffset2( MxNumberDivisions( 4.1 ) );
	object.setBezierX( MxNumberTenths( 4.1 ) );
	object.setBezierY( MxNumberTenths( 4.1 ) );
	object.setBezierX2( MxNumberTenths( 4.1 ) );
	object.setBezierY2( MxNumberTenths( 4.1 ) );
	expected = "bezier-x=\"4.1\" bezier-x2=\"4.1\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString31, MxAttrGrpBezier )
{
	MxAttrGrpBezier object;
	std::string expected;
	std::string actual;
	object.setIsBezierOffsetPresent( true );
	object.setIsBezierOffset2Present( true );
	object.setIsBezierXPresent( true );
	object.setIsBezierYPresent( true );
	object.setIsBezierX2Present( true );
	object.setIsBezierY2Present( false );
	object.setBezierOffset( MxNumberDivisions( 4.2 ) );
	object.setBezierOffset2( MxNumberDivisions( 4.2 ) );
	object.setBezierX( MxNumberTenths( 4.2 ) );
	object.setBezierY( MxNumberTenths( 4.2 ) );
	object.setBezierX2( MxNumberTenths( 4.2 ) );
	object.setBezierY2( MxNumberTenths( 4.2 ) );
	expected = "bezier-offset=\"4.2\" bezier-offset2=\"4.2\" bezier-x=\"4.2\" bezier-y=\"4.2\" bezier-x2=\"4.2\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString32, MxAttrGrpBezier )
{
	MxAttrGrpBezier object;
	std::string expected;
	std::string actual;
	object.setIsBezierOffsetPresent( false );
	object.setIsBezierOffset2Present( true );
	object.setIsBezierXPresent( false );
	object.setIsBezierYPresent( true );
	object.setIsBezierX2Present( true );
	object.setIsBezierY2Present( false );
	object.setBezierOffset( MxNumberDivisions( 4.3 ) );
	object.setBezierOffset2( MxNumberDivisions( 4.3 ) );
	object.setBezierX( MxNumberTenths( 4.3 ) );
	object.setBezierY( MxNumberTenths( 4.3 ) );
	object.setBezierX2( MxNumberTenths( 4.3 ) );
	object.setBezierY2( MxNumberTenths( 4.3 ) );
	expected = "bezier-offset2=\"4.3\" bezier-y=\"4.3\" bezier-x2=\"4.3\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString33, MxAttrGrpBezier )
{
	MxAttrGrpBezier object;
	std::string expected;
	std::string actual;
	object.setIsBezierOffsetPresent( true );
	object.setIsBezierOffset2Present( false );
	object.setIsBezierXPresent( false );
	object.setIsBezierYPresent( true );
	object.setIsBezierX2Present( true );
	object.setIsBezierY2Present( false );
	object.setBezierOffset( MxNumberDivisions( 4.4 ) );
	object.setBezierOffset2( MxNumberDivisions( 4.4 ) );
	object.setBezierX( MxNumberTenths( 4.4 ) );
	object.setBezierY( MxNumberTenths( 4.4 ) );
	object.setBezierX2( MxNumberTenths( 4.4 ) );
	object.setBezierY2( MxNumberTenths( 4.4 ) );
	expected = "bezier-offset=\"4.4\" bezier-y=\"4.4\" bezier-x2=\"4.4\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString34, MxAttrGrpBezier )
{
	MxAttrGrpBezier object;
	std::string expected;
	std::string actual;
	object.setIsBezierOffsetPresent( false );
	object.setIsBezierOffset2Present( false );
	object.setIsBezierXPresent( false );
	object.setIsBezierYPresent( true );
	object.setIsBezierX2Present( false );
	object.setIsBezierY2Present( false );
	object.setBezierOffset( MxNumberDivisions( 4.5 ) );
	object.setBezierOffset2( MxNumberDivisions( 4.5 ) );
	object.setBezierX( MxNumberTenths( 4.5 ) );
	object.setBezierY( MxNumberTenths( 4.5 ) );
	object.setBezierX2( MxNumberTenths( 4.5 ) );
	object.setBezierY2( MxNumberTenths( 4.5 ) );
	expected = "bezier-y=\"4.5\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString35, MxAttrGrpBezier )
{
	MxAttrGrpBezier object;
	std::string expected;
	std::string actual;
	object.setIsBezierOffsetPresent( true );
	object.setIsBezierOffset2Present( true );
	object.setIsBezierXPresent( true );
	object.setIsBezierYPresent( false );
	object.setIsBezierX2Present( false );
	object.setIsBezierY2Present( true );
	object.setBezierOffset( MxNumberDivisions( 4.6 ) );
	object.setBezierOffset2( MxNumberDivisions( 4.6 ) );
	object.setBezierX( MxNumberTenths( 4.6 ) );
	object.setBezierY( MxNumberTenths( 4.6 ) );
	object.setBezierX2( MxNumberTenths( 4.6 ) );
	object.setBezierY2( MxNumberTenths( 4.6 ) );
	expected = "bezier-offset=\"4.6\" bezier-offset2=\"4.6\" bezier-x=\"4.6\" bezier-y2=\"4.6\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString36, MxAttrGrpBezier )
{
	MxAttrGrpBezier object;
	std::string expected;
	std::string actual;
	object.setIsBezierOffsetPresent( false );
	object.setIsBezierOffset2Present( true );
	object.setIsBezierXPresent( true );
	object.setIsBezierYPresent( false );
	object.setIsBezierX2Present( false );
	object.setIsBezierY2Present( true );
	object.setBezierOffset( MxNumberDivisions( 4.7 ) );
	object.setBezierOffset2( MxNumberDivisions( 4.7 ) );
	object.setBezierX( MxNumberTenths( 4.7 ) );
	object.setBezierY( MxNumberTenths( 4.7 ) );
	object.setBezierX2( MxNumberTenths( 4.7 ) );
	object.setBezierY2( MxNumberTenths( 4.7 ) );
	expected = "bezier-offset2=\"4.7\" bezier-x=\"4.7\" bezier-y2=\"4.7\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString37, MxAttrGrpBezier )
{
	MxAttrGrpBezier object;
	std::string expected;
	std::string actual;
	object.setIsBezierOffsetPresent( true );
	object.setIsBezierOffset2Present( false );
	object.setIsBezierXPresent( true );
	object.setIsBezierYPresent( false );
	object.setIsBezierX2Present( false );
	object.setIsBezierY2Present( true );
	object.setBezierOffset( MxNumberDivisions( 4.8 ) );
	object.setBezierOffset2( MxNumberDivisions( 4.8 ) );
	object.setBezierX( MxNumberTenths( 4.8 ) );
	object.setBezierY( MxNumberTenths( 4.8 ) );
	object.setBezierX2( MxNumberTenths( 4.8 ) );
	object.setBezierY2( MxNumberTenths( 4.8 ) );
	expected = "bezier-offset=\"4.8\" bezier-x=\"4.8\" bezier-y2=\"4.8\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString38, MxAttrGrpBezier )
{
	MxAttrGrpBezier object;
	std::string expected;
	std::string actual;
	object.setIsBezierOffsetPresent( false );
	object.setIsBezierOffset2Present( false );
	object.setIsBezierXPresent( false );
	object.setIsBezierYPresent( false );
	object.setIsBezierX2Present( false );
	object.setIsBezierY2Present( true );
	object.setBezierOffset( MxNumberDivisions( 4.9 ) );
	object.setBezierOffset2( MxNumberDivisions( 4.9 ) );
	object.setBezierX( MxNumberTenths( 4.9 ) );
	object.setBezierY( MxNumberTenths( 4.9 ) );
	object.setBezierX2( MxNumberTenths( 4.9 ) );
	object.setBezierY2( MxNumberTenths( 4.9 ) );
	expected = "bezier-y2=\"4.9\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString39, MxAttrGrpBezier )
{
	MxAttrGrpBezier object;
	std::string expected;
	std::string actual;
	object.setIsBezierOffsetPresent( true );
	object.setIsBezierOffset2Present( true );
	object.setIsBezierXPresent( false );
	object.setIsBezierYPresent( true );
	object.setIsBezierX2Present( true );
	object.setIsBezierY2Present( true );
	object.setBezierOffset( MxNumberDivisions( 5 ) );
	object.setBezierOffset2( MxNumberDivisions( 5 ) );
	object.setBezierX( MxNumberTenths( 5 ) );
	object.setBezierY( MxNumberTenths( 5 ) );
	object.setBezierX2( MxNumberTenths( 5 ) );
	object.setBezierY2( MxNumberTenths( 5 ) );
	expected = "bezier-offset=\"5\" bezier-offset2=\"5\" bezier-y=\"5\" bezier-x2=\"5\" bezier-y2=\"5\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString40, MxAttrGrpBezier )
{
	MxAttrGrpBezier object;
	std::string expected;
	std::string actual;
	object.setIsBezierOffsetPresent( false );
	object.setIsBezierOffset2Present( true );
	object.setIsBezierXPresent( false );
	object.setIsBezierYPresent( true );
	object.setIsBezierX2Present( true );
	object.setIsBezierY2Present( true );
	object.setBezierOffset( MxNumberDivisions( 5.1 ) );
	object.setBezierOffset2( MxNumberDivisions( 5.1 ) );
	object.setBezierX( MxNumberTenths( 5.1 ) );
	object.setBezierY( MxNumberTenths( 5.1 ) );
	object.setBezierX2( MxNumberTenths( 5.1 ) );
	object.setBezierY2( MxNumberTenths( 5.1 ) );
	expected = "bezier-offset2=\"5.1\" bezier-y=\"5.1\" bezier-x2=\"5.1\" bezier-y2=\"5.1\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString41, MxAttrGrpBezier )
{
	MxAttrGrpBezier object;
	std::string expected;
	std::string actual;
	object.setIsBezierOffsetPresent( true );
	object.setIsBezierOffset2Present( false );
	object.setIsBezierXPresent( true );
	object.setIsBezierYPresent( true );
	object.setIsBezierX2Present( true );
	object.setIsBezierY2Present( false );
	object.setBezierOffset( MxNumberDivisions( 5.2 ) );
	object.setBezierOffset2( MxNumberDivisions( 5.2 ) );
	object.setBezierX( MxNumberTenths( 5.2 ) );
	object.setBezierY( MxNumberTenths( 5.2 ) );
	object.setBezierX2( MxNumberTenths( 5.2 ) );
	object.setBezierY2( MxNumberTenths( 5.2 ) );
	expected = "bezier-offset=\"5.2\" bezier-x=\"5.2\" bezier-y=\"5.2\" bezier-x2=\"5.2\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString42, MxAttrGrpBezier )
{
	MxAttrGrpBezier object;
	std::string expected;
	std::string actual;
	object.setIsBezierOffsetPresent( false );
	object.setIsBezierOffset2Present( false );
	object.setIsBezierXPresent( true );
	object.setIsBezierYPresent( true );
	object.setIsBezierX2Present( true );
	object.setIsBezierY2Present( false );
	object.setBezierOffset( MxNumberDivisions( 5.3 ) );
	object.setBezierOffset2( MxNumberDivisions( 5.3 ) );
	object.setBezierX( MxNumberTenths( 5.3 ) );
	object.setBezierY( MxNumberTenths( 5.3 ) );
	object.setBezierX2( MxNumberTenths( 5.3 ) );
	object.setBezierY2( MxNumberTenths( 5.3 ) );
	expected = "bezier-x=\"5.3\" bezier-y=\"5.3\" bezier-x2=\"5.3\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString43, MxAttrGrpBezier )
{
	MxAttrGrpBezier object;
	std::string expected;
	std::string actual;
	object.setIsBezierOffsetPresent( true );
	object.setIsBezierOffset2Present( true );
	object.setIsBezierXPresent( true );
	object.setIsBezierYPresent( false );
	object.setIsBezierX2Present( true );
	object.setIsBezierY2Present( false );
	object.setBezierOffset( MxNumberDivisions( 5.4 ) );
	object.setBezierOffset2( MxNumberDivisions( 5.4 ) );
	object.setBezierX( MxNumberTenths( 5.4 ) );
	object.setBezierY( MxNumberTenths( 5.4 ) );
	object.setBezierX2( MxNumberTenths( 5.4 ) );
	object.setBezierY2( MxNumberTenths( 5.4 ) );
	expected = "bezier-offset=\"5.4\" bezier-offset2=\"5.4\" bezier-x=\"5.4\" bezier-x2=\"5.4\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString44, MxAttrGrpBezier )
{
	MxAttrGrpBezier object;
	std::string expected;
	std::string actual;
	object.setIsBezierOffsetPresent( false );
	object.setIsBezierOffset2Present( true );
	object.setIsBezierXPresent( false );
	object.setIsBezierYPresent( false );
	object.setIsBezierX2Present( false );
	object.setIsBezierY2Present( false );
	object.setBezierOffset( MxNumberDivisions( 5.5 ) );
	object.setBezierOffset2( MxNumberDivisions( 5.5 ) );
	object.setBezierX( MxNumberTenths( 5.5 ) );
	object.setBezierY( MxNumberTenths( 5.5 ) );
	object.setBezierX2( MxNumberTenths( 5.5 ) );
	object.setBezierY2( MxNumberTenths( 5.5 ) );
	expected = "bezier-offset2=\"5.5\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString45, MxAttrGrpBezier )
{
	MxAttrGrpBezier object;
	std::string expected;
	std::string actual;
	object.setIsBezierOffsetPresent( true );
	object.setIsBezierOffset2Present( false );
	object.setIsBezierXPresent( false );
	object.setIsBezierYPresent( false );
	object.setIsBezierX2Present( false );
	object.setIsBezierY2Present( false );
	object.setBezierOffset( MxNumberDivisions( 5.6 ) );
	object.setBezierOffset2( MxNumberDivisions( 5.6 ) );
	object.setBezierX( MxNumberTenths( 5.6 ) );
	object.setBezierY( MxNumberTenths( 5.6 ) );
	object.setBezierX2( MxNumberTenths( 5.6 ) );
	object.setBezierY2( MxNumberTenths( 5.6 ) );
	expected = "bezier-offset=\"5.6\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString46, MxAttrGrpBezier )
{
	MxAttrGrpBezier object;
	std::string expected;
	std::string actual;
	object.setIsBezierOffsetPresent( false );
	object.setIsBezierOffset2Present( false );
	object.setIsBezierXPresent( false );
	object.setIsBezierYPresent( false );
	object.setIsBezierX2Present( false );
	object.setIsBezierY2Present( false );
	object.setBezierOffset( MxNumberDivisions( 5.7 ) );
	object.setBezierOffset2( MxNumberDivisions( 5.7 ) );
	object.setBezierX( MxNumberTenths( 5.7 ) );
	object.setBezierY( MxNumberTenths( 5.7 ) );
	object.setBezierX2( MxNumberTenths( 5.7 ) );
	object.setBezierY2( MxNumberTenths( 5.7 ) );
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
TEST( toString47, MxAttrGrpBezier )
{
	MxAttrGrpBezier object;
	std::string expected;
	std::string actual;
	object.setIsBezierOffsetPresent( true );
	object.setIsBezierOffset2Present( true );
	object.setIsBezierXPresent( true );
	object.setIsBezierYPresent( true );
	object.setIsBezierX2Present( false );
	object.setIsBezierY2Present( true );
	object.setBezierOffset( MxNumberDivisions( 5.8 ) );
	object.setBezierOffset2( MxNumberDivisions( 5.8 ) );
	object.setBezierX( MxNumberTenths( 5.8 ) );
	object.setBezierY( MxNumberTenths( 5.8 ) );
	object.setBezierX2( MxNumberTenths( 5.8 ) );
	object.setBezierY2( MxNumberTenths( 5.8 ) );
	expected = "bezier-offset=\"5.8\" bezier-offset2=\"5.8\" bezier-x=\"5.8\" bezier-y=\"5.8\" bezier-y2=\"5.8\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString48, MxAttrGrpBezier )
{
	MxAttrGrpBezier object;
	std::string expected;
	std::string actual;
	object.setIsBezierOffsetPresent( false );
	object.setIsBezierOffset2Present( true );
	object.setIsBezierXPresent( true );
	object.setIsBezierYPresent( true );
	object.setIsBezierX2Present( false );
	object.setIsBezierY2Present( true );
	object.setBezierOffset( MxNumberDivisions( 5.9 ) );
	object.setBezierOffset2( MxNumberDivisions( 5.9 ) );
	object.setBezierX( MxNumberTenths( 5.9 ) );
	object.setBezierY( MxNumberTenths( 5.9 ) );
	object.setBezierX2( MxNumberTenths( 5.9 ) );
	object.setBezierY2( MxNumberTenths( 5.9 ) );
	expected = "bezier-offset2=\"5.9\" bezier-x=\"5.9\" bezier-y=\"5.9\" bezier-y2=\"5.9\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString49, MxAttrGrpBezier )
{
	MxAttrGrpBezier object;
	std::string expected;
	std::string actual;
	object.setIsBezierOffsetPresent( true );
	object.setIsBezierOffset2Present( false );
	object.setIsBezierXPresent( true );
	object.setIsBezierYPresent( true );
	object.setIsBezierX2Present( true );
	object.setIsBezierY2Present( true );
	object.setBezierOffset( MxNumberDivisions( 6 ) );
	object.setBezierOffset2( MxNumberDivisions( 6 ) );
	object.setBezierX( MxNumberTenths( 6 ) );
	object.setBezierY( MxNumberTenths( 6 ) );
	object.setBezierX2( MxNumberTenths( 6 ) );
	object.setBezierY2( MxNumberTenths( 6 ) );
	expected = "bezier-offset=\"6\" bezier-x=\"6\" bezier-y=\"6\" bezier-x2=\"6\" bezier-y2=\"6\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString50, MxAttrGrpBezier )
{
	MxAttrGrpBezier object;
	std::string expected;
	std::string actual;
	object.setIsBezierOffsetPresent( false );
	object.setIsBezierOffset2Present( false );
	object.setIsBezierXPresent( false );
	object.setIsBezierYPresent( true );
	object.setIsBezierX2Present( true );
	object.setIsBezierY2Present( true );
	object.setBezierOffset( MxNumberDivisions( 6.1 ) );
	object.setBezierOffset2( MxNumberDivisions( 6.1 ) );
	object.setBezierX( MxNumberTenths( 6.1 ) );
	object.setBezierY( MxNumberTenths( 6.1 ) );
	object.setBezierX2( MxNumberTenths( 6.1 ) );
	object.setBezierY2( MxNumberTenths( 6.1 ) );
	expected = "bezier-y=\"6.1\" bezier-x2=\"6.1\" bezier-y2=\"6.1\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString51, MxAttrGrpBezier )
{
	MxAttrGrpBezier object;
	std::string expected;
	std::string actual;
	object.setIsBezierOffsetPresent( true );
	object.setIsBezierOffset2Present( true );
	object.setIsBezierXPresent( false );
	object.setIsBezierYPresent( false );
	object.setIsBezierX2Present( true );
	object.setIsBezierY2Present( true );
	object.setBezierOffset( MxNumberDivisions( 6.2 ) );
	object.setBezierOffset2( MxNumberDivisions( 6.2 ) );
	object.setBezierX( MxNumberTenths( 6.2 ) );
	object.setBezierY( MxNumberTenths( 6.2 ) );
	object.setBezierX2( MxNumberTenths( 6.2 ) );
	object.setBezierY2( MxNumberTenths( 6.2 ) );
	expected = "bezier-offset=\"6.2\" bezier-offset2=\"6.2\" bezier-x2=\"6.2\" bezier-y2=\"6.2\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString52, MxAttrGrpBezier )
{
	MxAttrGrpBezier object;
	std::string expected;
	std::string actual;
	object.setIsBezierOffsetPresent( false );
	object.setIsBezierOffset2Present( true );
	object.setIsBezierXPresent( false );
	object.setIsBezierYPresent( false );
	object.setIsBezierX2Present( true );
	object.setIsBezierY2Present( true );
	object.setBezierOffset( MxNumberDivisions( 6.3 ) );
	object.setBezierOffset2( MxNumberDivisions( 6.3 ) );
	object.setBezierX( MxNumberTenths( 6.3 ) );
	object.setBezierY( MxNumberTenths( 6.3 ) );
	object.setBezierX2( MxNumberTenths( 6.3 ) );
	object.setBezierY2( MxNumberTenths( 6.3 ) );
	expected = "bezier-offset2=\"6.3\" bezier-x2=\"6.3\" bezier-y2=\"6.3\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString53, MxAttrGrpBezier )
{
	MxAttrGrpBezier object;
	std::string expected;
	std::string actual;
	object.setIsBezierOffsetPresent( true );
	object.setIsBezierOffset2Present( false );
	object.setIsBezierXPresent( true );
	object.setIsBezierYPresent( false );
	object.setIsBezierX2Present( true );
	object.setIsBezierY2Present( false );
	object.setBezierOffset( MxNumberDivisions( 6.4 ) );
	object.setBezierOffset2( MxNumberDivisions( 6.4 ) );
	object.setBezierX( MxNumberTenths( 6.4 ) );
	object.setBezierY( MxNumberTenths( 6.4 ) );
	object.setBezierX2( MxNumberTenths( 6.4 ) );
	object.setBezierY2( MxNumberTenths( 6.4 ) );
	expected = "bezier-offset=\"6.4\" bezier-x=\"6.4\" bezier-x2=\"6.4\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString54, MxAttrGrpBezier )
{
	MxAttrGrpBezier object;
	std::string expected;
	std::string actual;
	object.setIsBezierOffsetPresent( false );
	object.setIsBezierOffset2Present( false );
	object.setIsBezierXPresent( true );
	object.setIsBezierYPresent( false );
	object.setIsBezierX2Present( false );
	object.setIsBezierY2Present( false );
	object.setBezierOffset( MxNumberDivisions( 6.5 ) );
	object.setBezierOffset2( MxNumberDivisions( 6.5 ) );
	object.setBezierX( MxNumberTenths( 6.5 ) );
	object.setBezierY( MxNumberTenths( 6.5 ) );
	object.setBezierX2( MxNumberTenths( 6.5 ) );
	object.setBezierY2( MxNumberTenths( 6.5 ) );
	expected = "bezier-x=\"6.5\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString55, MxAttrGrpBezier )
{
	MxAttrGrpBezier object;
	std::string expected;
	std::string actual;
	object.setIsBezierOffsetPresent( true );
	object.setIsBezierOffset2Present( true );
	object.setIsBezierXPresent( true );
	object.setIsBezierYPresent( true );
	object.setIsBezierX2Present( false );
	object.setIsBezierY2Present( false );
	object.setBezierOffset( MxNumberDivisions( 6.6 ) );
	object.setBezierOffset2( MxNumberDivisions( 6.6 ) );
	object.setBezierX( MxNumberTenths( 6.6 ) );
	object.setBezierY( MxNumberTenths( 6.6 ) );
	object.setBezierX2( MxNumberTenths( 6.6 ) );
	object.setBezierY2( MxNumberTenths( 6.6 ) );
	expected = "bezier-offset=\"6.6\" bezier-offset2=\"6.6\" bezier-x=\"6.6\" bezier-y=\"6.6\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString56, MxAttrGrpBezier )
{
	MxAttrGrpBezier object;
	std::string expected;
	std::string actual;
	object.setIsBezierOffsetPresent( false );
	object.setIsBezierOffset2Present( true );
	object.setIsBezierXPresent( false );
	object.setIsBezierYPresent( true );
	object.setIsBezierX2Present( false );
	object.setIsBezierY2Present( false );
	object.setBezierOffset( MxNumberDivisions( 6.7 ) );
	object.setBezierOffset2( MxNumberDivisions( 6.7 ) );
	object.setBezierX( MxNumberTenths( 6.7 ) );
	object.setBezierY( MxNumberTenths( 6.7 ) );
	object.setBezierX2( MxNumberTenths( 6.7 ) );
	object.setBezierY2( MxNumberTenths( 6.7 ) );
	expected = "bezier-offset2=\"6.7\" bezier-y=\"6.7\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString57, MxAttrGrpBezier )
{
	MxAttrGrpBezier object;
	std::string expected;
	std::string actual;
	object.setIsBezierOffsetPresent( true );
	object.setIsBezierOffset2Present( false );
	object.setIsBezierXPresent( false );
	object.setIsBezierYPresent( true );
	object.setIsBezierX2Present( false );
	object.setIsBezierY2Present( false );
	object.setBezierOffset( MxNumberDivisions( 6.8 ) );
	object.setBezierOffset2( MxNumberDivisions( 6.8 ) );
	object.setBezierX( MxNumberTenths( 6.8 ) );
	object.setBezierY( MxNumberTenths( 6.8 ) );
	object.setBezierX2( MxNumberTenths( 6.8 ) );
	object.setBezierY2( MxNumberTenths( 6.8 ) );
	expected = "bezier-offset=\"6.8\" bezier-y=\"6.8\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString58, MxAttrGrpBezier )
{
	MxAttrGrpBezier object;
	std::string expected;
	std::string actual;
	object.setIsBezierOffsetPresent( false );
	object.setIsBezierOffset2Present( false );
	object.setIsBezierXPresent( false );
	object.setIsBezierYPresent( true );
	object.setIsBezierX2Present( false );
	object.setIsBezierY2Present( false );
	object.setBezierOffset( MxNumberDivisions( 6.9 ) );
	object.setBezierOffset2( MxNumberDivisions( 6.9 ) );
	object.setBezierX( MxNumberTenths( 6.9 ) );
	object.setBezierY( MxNumberTenths( 6.9 ) );
	object.setBezierX2( MxNumberTenths( 6.9 ) );
	object.setBezierY2( MxNumberTenths( 6.9 ) );
	expected = "bezier-y=\"6.9\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString59, MxAttrGrpBezier )
{
	MxAttrGrpBezier object;
	std::string expected;
	std::string actual;
	object.setIsBezierOffsetPresent( true );
	object.setIsBezierOffset2Present( true );
	object.setIsBezierXPresent( true );
	object.setIsBezierYPresent( false );
	object.setIsBezierX2Present( true );
	object.setIsBezierY2Present( true );
	object.setBezierOffset( MxNumberDivisions( 7 ) );
	object.setBezierOffset2( MxNumberDivisions( 7 ) );
	object.setBezierX( MxNumberTenths( 7 ) );
	object.setBezierY( MxNumberTenths( 7 ) );
	object.setBezierX2( MxNumberTenths( 7 ) );
	object.setBezierY2( MxNumberTenths( 7 ) );
	expected = "bezier-offset=\"7\" bezier-offset2=\"7\" bezier-x=\"7\" bezier-x2=\"7\" bezier-y2=\"7\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString60, MxAttrGrpBezier )
{
	MxAttrGrpBezier object;
	std::string expected;
	std::string actual;
	object.setIsBezierOffsetPresent( false );
	object.setIsBezierOffset2Present( true );
	object.setIsBezierXPresent( true );
	object.setIsBezierYPresent( false );
	object.setIsBezierX2Present( true );
	object.setIsBezierY2Present( true );
	object.setBezierOffset( MxNumberDivisions( 7.1 ) );
	object.setBezierOffset2( MxNumberDivisions( 7.1 ) );
	object.setBezierX( MxNumberTenths( 7.1 ) );
	object.setBezierY( MxNumberTenths( 7.1 ) );
	object.setBezierX2( MxNumberTenths( 7.1 ) );
	object.setBezierY2( MxNumberTenths( 7.1 ) );
	expected = "bezier-offset2=\"7.1\" bezier-x=\"7.1\" bezier-x2=\"7.1\" bezier-y2=\"7.1\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString61, MxAttrGrpBezier )
{
	MxAttrGrpBezier object;
	std::string expected;
	std::string actual;
	object.setIsBezierOffsetPresent( true );
	object.setIsBezierOffset2Present( false );
	object.setIsBezierXPresent( true );
	object.setIsBezierYPresent( false );
	object.setIsBezierX2Present( true );
	object.setIsBezierY2Present( true );
	object.setBezierOffset( MxNumberDivisions( 7.2 ) );
	object.setBezierOffset2( MxNumberDivisions( 7.2 ) );
	object.setBezierX( MxNumberTenths( 7.2 ) );
	object.setBezierY( MxNumberTenths( 7.2 ) );
	object.setBezierX2( MxNumberTenths( 7.2 ) );
	object.setBezierY2( MxNumberTenths( 7.2 ) );
	expected = "bezier-offset=\"7.2\" bezier-x=\"7.2\" bezier-x2=\"7.2\" bezier-y2=\"7.2\"";
	actual = object.toString();
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr1;
	object.stream( sstr1 );
	CHECK_EQUAL( expected, actual )
	std::stringstream sstr2;
	sstr2 << object;
	CHECK_EQUAL( expected, actual )
}
TEST( toString62, MxAttrGrpBezier )
{
	MxAttrGrpBezier object;
	std::string expected;
	std::string actual;
	object.setIsBezierOffsetPresent( false );
	object.setIsBezierOffset2Present( false );
	object.setIsBezierXPresent( false );
	object.setIsBezierYPresent( false );
	object.setIsBezierX2Present( true );
	object.setIsBezierY2Present( true );
	object.setBezierOffset( MxNumberDivisions( 7.3 ) );
	object.setBezierOffset2( MxNumberDivisions( 7.3 ) );
	object.setBezierX( MxNumberTenths( 7.3 ) );
	object.setBezierY( MxNumberTenths( 7.3 ) );
	object.setBezierX2( MxNumberTenths( 7.3 ) );
	object.setBezierY2( MxNumberTenths( 7.3 ) );
	expected = "bezier-x2=\"7.3\" bezier-y2=\"7.3\"";
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

TEST( getIsBezierOffsetDefaultDefined, MxAttrGrpBezier )
{
	MxAttrGrpBezier object;
	bool expected = false;
	bool actual = object.getIsBezierOffsetDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsBezierOffset2DefaultDefined, MxAttrGrpBezier )
{
	MxAttrGrpBezier object;
	bool expected = false;
	bool actual = object.getIsBezierOffset2DefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsBezierXDefaultDefined, MxAttrGrpBezier )
{
	MxAttrGrpBezier object;
	bool expected = false;
	bool actual = object.getIsBezierXDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsBezierYDefaultDefined, MxAttrGrpBezier )
{
	MxAttrGrpBezier object;
	bool expected = false;
	bool actual = object.getIsBezierYDefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsBezierX2DefaultDefined, MxAttrGrpBezier )
{
	MxAttrGrpBezier object;
	bool expected = false;
	bool actual = object.getIsBezierX2DefaultDefined();
	CHECK_EQUAL( expected, actual )
}
TEST( getIsBezierY2DefaultDefined, MxAttrGrpBezier )
{
	MxAttrGrpBezier object;
	bool expected = false;
	bool actual = object.getIsBezierY2DefaultDefined();
	CHECK_EQUAL( expected, actual )
}

/* End: Is Default Defined -------------------------------------------------- */


/* get Default Value -------------------------------------------------------- */

TEST( getBezierOffsetDefaultValue, MxAttrGrpBezier )
{
	MxAttrGrpBezier object;
	MxNumberDivisions expected;
	MxNumberDivisions actual = object.getBezierOffsetDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getBezierOffset2DefaultValue, MxAttrGrpBezier )
{
	MxAttrGrpBezier object;
	MxNumberDivisions expected;
	MxNumberDivisions actual = object.getBezierOffset2DefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getBezierXDefaultValue, MxAttrGrpBezier )
{
	MxAttrGrpBezier object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getBezierXDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getBezierYDefaultValue, MxAttrGrpBezier )
{
	MxAttrGrpBezier object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getBezierYDefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getBezierX2DefaultValue, MxAttrGrpBezier )
{
	MxAttrGrpBezier object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getBezierX2DefaultValue();
	CHECK_EQUAL( expected, actual )
}
TEST( getBezierY2DefaultValue, MxAttrGrpBezier )
{
	MxAttrGrpBezier object;
	MxNumberTenths expected;
	MxNumberTenths actual = object.getBezierY2DefaultValue();
	CHECK_EQUAL( expected, actual )
}

/* End: get Default Value --------------------------------------------------- */


