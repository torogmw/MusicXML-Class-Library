#include "TestHarness.h"
#include "MxEnumHandbellValue.h"
#include <string>
#include <sstream>

using namespace lexicon;
using namespace std;

/* default constructor test */
TEST( ctorDefault , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1;
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* constructor test for each possible enum value */
TEST( ctorEnum0 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::damp );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum1 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::echo );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum2 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::gyro );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum3 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::handMartellato );
	int expected = 3;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum4 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::malletLift );
	int expected = 4;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum5 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::malletTable );
	int expected = 5;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum6 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::martellato );
	int expected = 6;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum7 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::martellatoLift );
	int expected = 7;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum8 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::mutedMartellato );
	int expected = 8;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum9 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::pluckLift );
	int expected = 9;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum10 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::swing );
	int expected = 10;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* copy constructor */
TEST( copyCtor0 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::damp );
	MxEnumHandbellValue e2( e1 );
	int expected = 0;
	int actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	e1.setValueInt( 1 );
	expected = 0;
	actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	expected = 1;
	actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( copyCtor1 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::echo );
	MxEnumHandbellValue e2( e1 );
	int expected = 1;
	int actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	e1.setValueInt( 2 );
	expected = 1;
	actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	expected = 2;
	actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( copyCtor2 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::gyro );
	MxEnumHandbellValue e2( e1 );
	int expected = 2;
	int actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	e1.setValueInt( 3 );
	expected = 2;
	actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	expected = 3;
	actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( copyCtor3 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::handMartellato );
	MxEnumHandbellValue e2( e1 );
	int expected = 3;
	int actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	e1.setValueInt( 4 );
	expected = 3;
	actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	expected = 4;
	actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( copyCtor4 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::malletLift );
	MxEnumHandbellValue e2( e1 );
	int expected = 4;
	int actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	e1.setValueInt( 5 );
	expected = 4;
	actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	expected = 5;
	actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( copyCtor5 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::malletTable );
	MxEnumHandbellValue e2( e1 );
	int expected = 5;
	int actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	e1.setValueInt( 6 );
	expected = 5;
	actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	expected = 6;
	actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( copyCtor6 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::martellato );
	MxEnumHandbellValue e2( e1 );
	int expected = 6;
	int actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	e1.setValueInt( 7 );
	expected = 6;
	actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	expected = 7;
	actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( copyCtor7 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::martellatoLift );
	MxEnumHandbellValue e2( e1 );
	int expected = 7;
	int actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	e1.setValueInt( 8 );
	expected = 7;
	actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	expected = 8;
	actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( copyCtor8 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::mutedMartellato );
	MxEnumHandbellValue e2( e1 );
	int expected = 8;
	int actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	e1.setValueInt( 9 );
	expected = 8;
	actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	expected = 9;
	actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( copyCtor9 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::pluckLift );
	MxEnumHandbellValue e2( e1 );
	int expected = 9;
	int actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	e1.setValueInt( 10 );
	expected = 9;
	actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	expected = 10;
	actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( copyCtor10 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::swing );
	MxEnumHandbellValue e2( e1 );
	int expected = 10;
	int actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	e1.setValueInt( 0 );
	expected = 10;
	actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	expected = 0;
	actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* assignment operator */
TEST( assignmentOp0 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::echo );
	MxEnumHandbellValue e2( enums::HandbellValue::damp );
	e1 = e2;
	string expected = "damp";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumHandbellValue e3( enums::HandbellValue::echo );
	e2 = e3;
	expected = "echo";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "damp";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "damp";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp1 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::gyro );
	MxEnumHandbellValue e2( enums::HandbellValue::echo );
	e1 = e2;
	string expected = "echo";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumHandbellValue e3( enums::HandbellValue::gyro );
	e2 = e3;
	expected = "gyro";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "echo";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "echo";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp2 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::handMartellato );
	MxEnumHandbellValue e2( enums::HandbellValue::gyro );
	e1 = e2;
	string expected = "gyro";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumHandbellValue e3( enums::HandbellValue::handMartellato );
	e2 = e3;
	expected = "hand martellato";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "gyro";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "gyro";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp3 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::malletLift );
	MxEnumHandbellValue e2( enums::HandbellValue::handMartellato );
	e1 = e2;
	string expected = "hand martellato";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumHandbellValue e3( enums::HandbellValue::malletLift );
	e2 = e3;
	expected = "mallet lift";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "hand martellato";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "hand martellato";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp4 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::malletTable );
	MxEnumHandbellValue e2( enums::HandbellValue::malletLift );
	e1 = e2;
	string expected = "mallet lift";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumHandbellValue e3( enums::HandbellValue::malletTable );
	e2 = e3;
	expected = "mallet table";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "mallet lift";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "mallet lift";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp5 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::martellato );
	MxEnumHandbellValue e2( enums::HandbellValue::malletTable );
	e1 = e2;
	string expected = "mallet table";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumHandbellValue e3( enums::HandbellValue::martellato );
	e2 = e3;
	expected = "martellato";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "mallet table";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "mallet table";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp6 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::martellatoLift );
	MxEnumHandbellValue e2( enums::HandbellValue::martellato );
	e1 = e2;
	string expected = "martellato";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumHandbellValue e3( enums::HandbellValue::martellatoLift );
	e2 = e3;
	expected = "martellato lift";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "martellato";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "martellato";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp7 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::mutedMartellato );
	MxEnumHandbellValue e2( enums::HandbellValue::martellatoLift );
	e1 = e2;
	string expected = "martellato lift";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumHandbellValue e3( enums::HandbellValue::mutedMartellato );
	e2 = e3;
	expected = "muted martellato";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "martellato lift";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "martellato lift";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp8 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::pluckLift );
	MxEnumHandbellValue e2( enums::HandbellValue::mutedMartellato );
	e1 = e2;
	string expected = "muted martellato";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumHandbellValue e3( enums::HandbellValue::pluckLift );
	e2 = e3;
	expected = "pluck lift";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "muted martellato";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "muted martellato";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp9 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::swing );
	MxEnumHandbellValue e2( enums::HandbellValue::pluckLift );
	e1 = e2;
	string expected = "pluck lift";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumHandbellValue e3( enums::HandbellValue::swing );
	e2 = e3;
	expected = "swing";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "pluck lift";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "pluck lift";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp10 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::damp );
	MxEnumHandbellValue e2( enums::HandbellValue::swing );
	e1 = e2;
	string expected = "swing";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumHandbellValue e3( enums::HandbellValue::damp );
	e2 = e3;
	expected = "damp";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "swing";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "swing";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}


/* getValue returns the internal enum value */
TEST( getValue0 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::damp );
	CHECK( e1.getValue() == enums::HandbellValue::damp )
}
TEST( getValue1 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::echo );
	CHECK( e1.getValue() == enums::HandbellValue::echo )
}
TEST( getValue2 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::gyro );
	CHECK( e1.getValue() == enums::HandbellValue::gyro )
}
TEST( getValue9 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::pluckLift );
	CHECK( e1.getValue() == enums::HandbellValue::pluckLift )
}
TEST( getValue10 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::swing );
	CHECK( e1.getValue() == enums::HandbellValue::swing )
}


/* getValueInt returns the index of the enum value */
TEST( getValueInt0 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::damp );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt1 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::echo );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt2 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::gyro );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt3 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::handMartellato );
	int expected = 3;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt4 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::malletLift );
	int expected = 4;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt5 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::malletTable );
	int expected = 5;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt6 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::martellato );
	int expected = 6;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt7 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::martellatoLift );
	int expected = 7;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt8 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::mutedMartellato );
	int expected = 8;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt9 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::pluckLift );
	int expected = 9;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt10 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::swing );
	int expected = 10;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* getCppEnumSymbolAsString returns the enum's C++ string symbol */
TEST( getCppEnumSymbolAsString0 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::damp );
	string expected = "damp";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString1 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::echo );
	string expected = "echo";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString2 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::gyro );
	string expected = "gyro";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString3 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::handMartellato );
	string expected = "handMartellato";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString4 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::malletLift );
	string expected = "malletLift";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString5 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::malletTable );
	string expected = "malletTable";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString6 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::martellato );
	string expected = "martellato";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString7 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::martellatoLift );
	string expected = "martellatoLift";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString8 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::mutedMartellato );
	string expected = "mutedMartellato";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString9 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::pluckLift );
	string expected = "pluckLift";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString10 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::swing );
	string expected = "swing";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}


/* toString returns the enum's MusicXml string symbol */
TEST( toString0 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::damp );
	string expected = "damp";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString1 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::echo );
	string expected = "echo";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString2 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::gyro );
	string expected = "gyro";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString3 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::handMartellato );
	string expected = "hand martellato";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString4 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::malletLift );
	string expected = "mallet lift";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString5 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::malletTable );
	string expected = "mallet table";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString6 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::martellato );
	string expected = "martellato";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString7 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::martellatoLift );
	string expected = "martellato lift";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString8 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::mutedMartellato );
	string expected = "muted martellato";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString9 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::pluckLift );
	string expected = "pluck lift";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString10 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::swing );
	string expected = "swing";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}


/* setValue(enum) changes the internal value */
TEST( setValue0 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::echo );
	e1.setValue( enums::HandbellValue::damp );
	CHECK( e1.getValue() == enums::HandbellValue::damp )
}
TEST( setValue1 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::gyro );
	e1.setValue( enums::HandbellValue::echo );
	CHECK( e1.getValue() == enums::HandbellValue::echo )
}
TEST( setValue2 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::handMartellato );
	e1.setValue( enums::HandbellValue::gyro );
	CHECK( e1.getValue() == enums::HandbellValue::gyro )
}
TEST( setValue9 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::swing );
	e1.setValue( enums::HandbellValue::pluckLift );
	CHECK( e1.getValue() == enums::HandbellValue::pluckLift )
}
TEST( setValue10 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::damp );
	e1.setValue( enums::HandbellValue::swing );
	CHECK( e1.getValue() == enums::HandbellValue::swing )
}


/* setValueInt(int) takes the index, sets internal value 
   returns true/false to indicate success/failure */
TEST( setValueIntNEG1 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::echo );
	CHECK( ! e1.setValueInt( -1 ) )
	CHECK( e1.getValue() == enums::HandbellValue::echo )
}
TEST( setValueInt0 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::gyro );
	CHECK( e1.setValueInt( 1 ) )
	CHECK( e1.getValue() == enums::HandbellValue::echo )
}
TEST( setValueInt1 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::handMartellato );
	CHECK( e1.setValueInt( 2 ) )
	CHECK( e1.getValue() == enums::HandbellValue::gyro )
}
TEST( setValueInt2 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::malletLift );
	CHECK( e1.setValueInt( 3 ) )
	CHECK( e1.getValue() == enums::HandbellValue::handMartellato )
}
TEST( setValueInt9 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::damp );
	CHECK( e1.setValueInt( 10 ) )
	CHECK( e1.getValue() == enums::HandbellValue::swing )
}
TEST( setValueInt10 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::echo );
	CHECK( e1.setValueInt( 0 ) )
	CHECK( e1.getValue() == enums::HandbellValue::damp )
}
TEST( setValueInt11 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::gyro );
	CHECK( ! e1.setValueInt( 11 ) )
	CHECK( e1.getValue() == enums::HandbellValue::gyro )
}


/* fromString takes the MusicXML symbol, sets value
   returns true/false to indicate success/failure */
TEST( fromStringNEG1 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::echo );
	CHECK( ! e1.fromString( "crazyErrantValue-1" ) )
	CHECK( e1.getValue() == enums::HandbellValue::echo )
}
TEST( fromString0 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::gyro );
	CHECK( e1.fromString( "echo" ) )
	CHECK( e1.getValue() == enums::HandbellValue::echo )
}
TEST( fromString1 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::handMartellato );
	CHECK( e1.fromString( "gyro" ) )
	CHECK( e1.getValue() == enums::HandbellValue::gyro )
}
TEST( fromString2 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::malletLift );
	CHECK( e1.fromString( "hand martellato" ) )
	CHECK( e1.getValue() == enums::HandbellValue::handMartellato )
}
TEST( fromString3 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::malletTable );
	CHECK( e1.fromString( "mallet lift" ) )
	CHECK( e1.getValue() == enums::HandbellValue::malletLift )
}
TEST( fromString4 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::martellato );
	CHECK( e1.fromString( "mallet table" ) )
	CHECK( e1.getValue() == enums::HandbellValue::malletTable )
}
TEST( fromString5 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::martellatoLift );
	CHECK( e1.fromString( "martellato" ) )
	CHECK( e1.getValue() == enums::HandbellValue::martellato )
}
TEST( fromString6 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::mutedMartellato );
	CHECK( e1.fromString( "martellato lift" ) )
	CHECK( e1.getValue() == enums::HandbellValue::martellatoLift )
}
TEST( fromString7 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::pluckLift );
	CHECK( e1.fromString( "muted martellato" ) )
	CHECK( e1.getValue() == enums::HandbellValue::mutedMartellato )
}
TEST( fromString8 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::swing );
	CHECK( e1.fromString( "pluck lift" ) )
	CHECK( e1.getValue() == enums::HandbellValue::pluckLift )
}
TEST( fromString9 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::damp );
	CHECK( e1.fromString( "swing" ) )
	CHECK( e1.getValue() == enums::HandbellValue::swing )
}
TEST( fromString10 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::echo );
	CHECK( e1.fromString( "damp" ) )
	CHECK( e1.getValue() == enums::HandbellValue::damp )
}
TEST( fromString11 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::gyro );
	CHECK( ! e1.fromString( "crazyErrantValue11" ) )
	CHECK( e1.getValue() == enums::HandbellValue::gyro )
}


/* getSize returns the count of possible enum values */
TEST( getSize0 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::damp );
	int expected = 11;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize1 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::echo );
	int expected = 11;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize10 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::swing );
	int expected = 11;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}


/* getXmlTypeName returns the typename from musicxml.xsd */
TEST( getXmlTypeName0 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::damp );
	string expected = "handbell-value";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName1 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::echo );
	string expected = "handbell-value";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName10 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::swing );
	string expected = "handbell-value";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}


/* getClassName returns the name of the C++ class */
TEST( getClassName0 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::damp );
	string expected = "MxEnumHandbellValue";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName1 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::echo );
	string expected = "MxEnumHandbellValue";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName10 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::swing );
	string expected = "MxEnumHandbellValue";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}


/* getDocumentation returns the name of the C++ class */
TEST( getDocumentation0 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::damp );
	string expected = "The handbell-value type represents the type of handbell technique being notated.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation1 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::echo );
	string expected = "The handbell-value type represents the type of handbell technique being notated.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation10 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::swing );
	string expected = "The handbell-value type represents the type of handbell technique being notated.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}


/* stream stream the enum's MusicXml string symbol */
TEST( stream0 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::damp );
	stringstream ss;
	e1.stream( ss );
	string expected = "damp";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "damp";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream1 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::echo );
	stringstream ss;
	e1.stream( ss );
	string expected = "echo";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "echo";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream10 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::swing );
	stringstream ss;
	e1.stream( ss );
	string expected = "swing";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "swing";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* streaming operator streams the enum's MusicXml string symbol */
TEST( streamingOperator0 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::damp );
	stringstream ss;
	ss << e1;
	string expected = "damp";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "damp";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator1 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::echo );
	stringstream ss;
	ss << e1;
	string expected = "echo";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "echo";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator10 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::swing );
	stringstream ss;
	ss << e1;
	string expected = "swing";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "swing";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* equality operators */
TEST( equalsEquals_true_0equals0 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::damp );
	MxEnumHandbellValue e2( enums::HandbellValue::damp );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals1 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::echo );
	MxEnumHandbellValue e2( enums::HandbellValue::damp );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals10 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::swing );
	MxEnumHandbellValue e2( enums::HandbellValue::damp );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals0 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::damp );
	MxEnumHandbellValue e2( enums::HandbellValue::echo );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_1equals1 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::echo );
	MxEnumHandbellValue e2( enums::HandbellValue::echo );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals10 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::swing );
	MxEnumHandbellValue e2( enums::HandbellValue::echo );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_10equals0 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::damp );
	MxEnumHandbellValue e2( enums::HandbellValue::swing );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_10equals1 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::echo );
	MxEnumHandbellValue e2( enums::HandbellValue::swing );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_10equals10 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::swing );
	MxEnumHandbellValue e2( enums::HandbellValue::swing );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_0equals0 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::damp );
	MxEnumHandbellValue e2( enums::HandbellValue::damp );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals1 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::echo );
	MxEnumHandbellValue e2( enums::HandbellValue::damp );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals10 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::swing );
	MxEnumHandbellValue e2( enums::HandbellValue::damp );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals0 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::damp );
	MxEnumHandbellValue e2( enums::HandbellValue::echo );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_1equals1 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::echo );
	MxEnumHandbellValue e2( enums::HandbellValue::echo );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals10 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::swing );
	MxEnumHandbellValue e2( enums::HandbellValue::echo );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_10equals0 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::damp );
	MxEnumHandbellValue e2( enums::HandbellValue::swing );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_10equals1 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::echo );
	MxEnumHandbellValue e2( enums::HandbellValue::swing );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_10equals10 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::swing );
	MxEnumHandbellValue e2( enums::HandbellValue::swing );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* comparison operators compare the result of getValueInt */
TEST( lessThanOrEqual_true_0islessthanoreq0 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::damp );
	MxEnumHandbellValue e2( enums::HandbellValue::damp );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_1islessthanoreq0 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::echo );
	MxEnumHandbellValue e2( enums::HandbellValue::damp );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_10islessthanoreq0 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::swing );
	MxEnumHandbellValue e2( enums::HandbellValue::damp );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq1 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::damp );
	MxEnumHandbellValue e2( enums::HandbellValue::echo );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq1 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::echo );
	MxEnumHandbellValue e2( enums::HandbellValue::echo );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_10islessthanoreq1 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::swing );
	MxEnumHandbellValue e2( enums::HandbellValue::echo );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq10 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::damp );
	MxEnumHandbellValue e2( enums::HandbellValue::swing );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq10 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::echo );
	MxEnumHandbellValue e2( enums::HandbellValue::swing );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_10islessthanoreq10 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::swing );
	MxEnumHandbellValue e2( enums::HandbellValue::swing );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_0isgreaterthanoreq0 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::damp );
	MxEnumHandbellValue e2( enums::HandbellValue::damp );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq0 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::echo );
	MxEnumHandbellValue e2( enums::HandbellValue::damp );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_10isgreaterthanoreq0 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::swing );
	MxEnumHandbellValue e2( enums::HandbellValue::damp );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq1 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::damp );
	MxEnumHandbellValue e2( enums::HandbellValue::echo );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq1 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::echo );
	MxEnumHandbellValue e2( enums::HandbellValue::echo );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_10isgreaterthanoreq1 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::swing );
	MxEnumHandbellValue e2( enums::HandbellValue::echo );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq10 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::damp );
	MxEnumHandbellValue e2( enums::HandbellValue::swing );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthanoreq10 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::echo );
	MxEnumHandbellValue e2( enums::HandbellValue::swing );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_10isgreaterthanoreq10 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::swing );
	MxEnumHandbellValue e2( enums::HandbellValue::swing );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_0islessthan0 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::damp );
	MxEnumHandbellValue e2( enums::HandbellValue::damp );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan0 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::echo );
	MxEnumHandbellValue e2( enums::HandbellValue::damp );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_10islessthan0 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::swing );
	MxEnumHandbellValue e2( enums::HandbellValue::damp );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan1 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::damp );
	MxEnumHandbellValue e2( enums::HandbellValue::echo );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan1 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::echo );
	MxEnumHandbellValue e2( enums::HandbellValue::echo );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_10islessthan1 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::swing );
	MxEnumHandbellValue e2( enums::HandbellValue::echo );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan10 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::damp );
	MxEnumHandbellValue e2( enums::HandbellValue::swing );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_1islessthan10 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::echo );
	MxEnumHandbellValue e2( enums::HandbellValue::swing );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_10islessthan10 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::swing );
	MxEnumHandbellValue e2( enums::HandbellValue::swing );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan0 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::damp );
	MxEnumHandbellValue e2( enums::HandbellValue::damp );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthan0 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::echo );
	MxEnumHandbellValue e2( enums::HandbellValue::damp );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_10isgreaterthan0 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::swing );
	MxEnumHandbellValue e2( enums::HandbellValue::damp );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan1 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::damp );
	MxEnumHandbellValue e2( enums::HandbellValue::echo );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan1 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::echo );
	MxEnumHandbellValue e2( enums::HandbellValue::echo );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_10isgreaterthan1 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::swing );
	MxEnumHandbellValue e2( enums::HandbellValue::echo );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan10 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::damp );
	MxEnumHandbellValue e2( enums::HandbellValue::swing );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan10 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::echo );
	MxEnumHandbellValue e2( enums::HandbellValue::swing );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_10isgreaterthan10 , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::swing );
	MxEnumHandbellValue e2( enums::HandbellValue::swing );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* increment and decrement operators cycle through values
    wrapping around to begining/end */
TEST( incrementPre_start0_10times , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::damp );
	MxEnumHandbellValue e2( enums::HandbellValue::damp );
	for( int i = 0; i < 10; ++i )
	{
		e2 = ++e1;
	}
	string expected = "swing";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "swing";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_10times , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::echo );
	MxEnumHandbellValue e2( enums::HandbellValue::echo );
	for( int i = 0; i < 10; ++i )
	{
		e2 = ++e1;
	}
	string expected = "damp";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "damp";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start10_10times , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::swing );
	MxEnumHandbellValue e2( enums::HandbellValue::swing );
	for( int i = 0; i < 10; ++i )
	{
		e2 = ++e1;
	}
	string expected = "pluckLift";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "pluckLift";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start0_11times , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::damp );
	MxEnumHandbellValue e2( enums::HandbellValue::damp );
	for( int i = 0; i < 11; ++i )
	{
		e2 = ++e1;
	}
	string expected = "damp";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "damp";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_11times , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::echo );
	MxEnumHandbellValue e2( enums::HandbellValue::echo );
	for( int i = 0; i < 11; ++i )
	{
		e2 = ++e1;
	}
	string expected = "echo";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "echo";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start10_11times , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::swing );
	MxEnumHandbellValue e2( enums::HandbellValue::swing );
	for( int i = 0; i < 11; ++i )
	{
		e2 = ++e1;
	}
	string expected = "swing";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "swing";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_10times , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::damp );
	MxEnumHandbellValue e2( enums::HandbellValue::damp );
	for( int i = 0; i < 10; ++i )
	{
		e2 = --e1;
	}
	string expected = "echo";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "echo";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_10times , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::echo );
	MxEnumHandbellValue e2( enums::HandbellValue::echo );
	for( int i = 0; i < 10; ++i )
	{
		e2 = --e1;
	}
	string expected = "gyro";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "gyro";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start10_10times , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::swing );
	MxEnumHandbellValue e2( enums::HandbellValue::swing );
	for( int i = 0; i < 10; ++i )
	{
		e2 = --e1;
	}
	string expected = "damp";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "damp";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_11times , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::damp );
	MxEnumHandbellValue e2( enums::HandbellValue::damp );
	for( int i = 0; i < 11; ++i )
	{
		e2 = --e1;
	}
	string expected = "damp";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "damp";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_11times , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::echo );
	MxEnumHandbellValue e2( enums::HandbellValue::echo );
	for( int i = 0; i < 11; ++i )
	{
		e2 = --e1;
	}
	string expected = "echo";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "echo";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start10_11times , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::swing );
	MxEnumHandbellValue e2( enums::HandbellValue::swing );
	for( int i = 0; i < 11; ++i )
	{
		e2 = --e1;
	}
	string expected = "swing";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "swing";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_10times , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::damp );
	MxEnumHandbellValue e2( enums::HandbellValue::damp );
	for( int i = 0; i < 10; ++i )
	{
		e2 = e1++;
	}
	string expected = "swing";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "pluckLift";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_10times , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::echo );
	MxEnumHandbellValue e2( enums::HandbellValue::echo );
	for( int i = 0; i < 10; ++i )
	{
		e2 = e1++;
	}
	string expected = "damp";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "swing";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start10_10times , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::swing );
	MxEnumHandbellValue e2( enums::HandbellValue::swing );
	for( int i = 0; i < 10; ++i )
	{
		e2 = e1++;
	}
	string expected = "pluckLift";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "mutedMartellato";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_11times , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::damp );
	MxEnumHandbellValue e2( enums::HandbellValue::damp );
	for( int i = 0; i < 11; ++i )
	{
		e2 = e1++;
	}
	string expected = "damp";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "swing";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_11times , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::echo );
	MxEnumHandbellValue e2( enums::HandbellValue::echo );
	for( int i = 0; i < 11; ++i )
	{
		e2 = e1++;
	}
	string expected = "echo";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "damp";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start10_11times , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::swing );
	MxEnumHandbellValue e2( enums::HandbellValue::swing );
	for( int i = 0; i < 11; ++i )
	{
		e2 = e1++;
	}
	string expected = "swing";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "pluckLift";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_10times , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::damp );
	MxEnumHandbellValue e2( enums::HandbellValue::damp );
	for( int i = 0; i < 10; ++i )
	{
		e2 = e1--;
	}
	string expected = "echo";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "gyro";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_10times , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::echo );
	MxEnumHandbellValue e2( enums::HandbellValue::echo );
	for( int i = 0; i < 10; ++i )
	{
		e2 = e1--;
	}
	string expected = "gyro";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "handMartellato";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start10_10times , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::swing );
	MxEnumHandbellValue e2( enums::HandbellValue::swing );
	for( int i = 0; i < 10; ++i )
	{
		e2 = e1--;
	}
	string expected = "damp";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "echo";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_11times , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::damp );
	MxEnumHandbellValue e2( enums::HandbellValue::damp );
	for( int i = 0; i < 11; ++i )
	{
		e2 = e1--;
	}
	string expected = "damp";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "echo";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_11times , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::echo );
	MxEnumHandbellValue e2( enums::HandbellValue::echo );
	for( int i = 0; i < 11; ++i )
	{
		e2 = e1--;
	}
	string expected = "echo";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "gyro";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start10_11times , MxEnumHandbellValue )
{
	MxEnumHandbellValue e1( enums::HandbellValue::swing );
	MxEnumHandbellValue e2( enums::HandbellValue::swing );
	for( int i = 0; i < 11; ++i )
	{
		e2 = e1--;
	}
	string expected = "swing";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "damp";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}

