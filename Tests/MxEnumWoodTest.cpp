#include "TestHarness.h"
#include "MxEnumWood.h"
#include <string>
#include <sstream>

using namespace lexicon;
using namespace std;

/* default constructor test */
TEST( ctorDefault , MxEnumWood )
{
	MxEnumWood e1;
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* constructor test for each possible enum value */
TEST( ctorEnum0 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::boardClapper );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum1 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::cabasa );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum2 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::castanets );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum3 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::claves );
	int expected = 3;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum4 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::guiro );
	int expected = 4;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum5 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::logDrum );
	int expected = 5;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum6 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::maraca );
	int expected = 6;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum7 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::maracas );
	int expected = 7;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum8 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::ratchet );
	int expected = 8;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum9 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::sandpaperBlocks );
	int expected = 9;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum10 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::slitDrum );
	int expected = 10;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum11 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::templeBlock );
	int expected = 11;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum12 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::vibraslap );
	int expected = 12;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum13 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::woodBlock );
	int expected = 13;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* copy constructor */
TEST( copyCtor0 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::boardClapper );
	MxEnumWood e2( e1 );
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
TEST( copyCtor1 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::cabasa );
	MxEnumWood e2( e1 );
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
TEST( copyCtor2 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::castanets );
	MxEnumWood e2( e1 );
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
TEST( copyCtor3 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::claves );
	MxEnumWood e2( e1 );
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
TEST( copyCtor4 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::guiro );
	MxEnumWood e2( e1 );
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
TEST( copyCtor5 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::logDrum );
	MxEnumWood e2( e1 );
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
TEST( copyCtor6 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::maraca );
	MxEnumWood e2( e1 );
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
TEST( copyCtor7 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::maracas );
	MxEnumWood e2( e1 );
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
TEST( copyCtor8 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::ratchet );
	MxEnumWood e2( e1 );
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
TEST( copyCtor9 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::sandpaperBlocks );
	MxEnumWood e2( e1 );
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
TEST( copyCtor10 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::slitDrum );
	MxEnumWood e2( e1 );
	int expected = 10;
	int actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	e1.setValueInt( 11 );
	expected = 10;
	actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	expected = 11;
	actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( copyCtor11 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::templeBlock );
	MxEnumWood e2( e1 );
	int expected = 11;
	int actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	e1.setValueInt( 12 );
	expected = 11;
	actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	expected = 12;
	actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( copyCtor12 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::vibraslap );
	MxEnumWood e2( e1 );
	int expected = 12;
	int actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	e1.setValueInt( 13 );
	expected = 12;
	actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	expected = 13;
	actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( copyCtor13 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::woodBlock );
	MxEnumWood e2( e1 );
	int expected = 13;
	int actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	e1.setValueInt( 0 );
	expected = 13;
	actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	expected = 0;
	actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* assignment operator */
TEST( assignmentOp0 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::cabasa );
	MxEnumWood e2( enums::Wood::boardClapper );
	e1 = e2;
	string expected = "board clapper";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumWood e3( enums::Wood::cabasa );
	e2 = e3;
	expected = "cabasa";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "board clapper";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "board clapper";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp1 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::castanets );
	MxEnumWood e2( enums::Wood::cabasa );
	e1 = e2;
	string expected = "cabasa";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumWood e3( enums::Wood::castanets );
	e2 = e3;
	expected = "castanets";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "cabasa";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "cabasa";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp2 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::claves );
	MxEnumWood e2( enums::Wood::castanets );
	e1 = e2;
	string expected = "castanets";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumWood e3( enums::Wood::claves );
	e2 = e3;
	expected = "claves";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "castanets";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "castanets";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp3 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::guiro );
	MxEnumWood e2( enums::Wood::claves );
	e1 = e2;
	string expected = "claves";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumWood e3( enums::Wood::guiro );
	e2 = e3;
	expected = "guiro";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "claves";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "claves";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp4 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::logDrum );
	MxEnumWood e2( enums::Wood::guiro );
	e1 = e2;
	string expected = "guiro";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumWood e3( enums::Wood::logDrum );
	e2 = e3;
	expected = "log drum";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "guiro";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "guiro";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp5 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::maraca );
	MxEnumWood e2( enums::Wood::logDrum );
	e1 = e2;
	string expected = "log drum";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumWood e3( enums::Wood::maraca );
	e2 = e3;
	expected = "maraca";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "log drum";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "log drum";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp6 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::maracas );
	MxEnumWood e2( enums::Wood::maraca );
	e1 = e2;
	string expected = "maraca";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumWood e3( enums::Wood::maracas );
	e2 = e3;
	expected = "maracas";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "maraca";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "maraca";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp7 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::ratchet );
	MxEnumWood e2( enums::Wood::maracas );
	e1 = e2;
	string expected = "maracas";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumWood e3( enums::Wood::ratchet );
	e2 = e3;
	expected = "ratchet";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "maracas";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "maracas";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp8 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::sandpaperBlocks );
	MxEnumWood e2( enums::Wood::ratchet );
	e1 = e2;
	string expected = "ratchet";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumWood e3( enums::Wood::sandpaperBlocks );
	e2 = e3;
	expected = "sandpaper blocks";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "ratchet";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "ratchet";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp9 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::slitDrum );
	MxEnumWood e2( enums::Wood::sandpaperBlocks );
	e1 = e2;
	string expected = "sandpaper blocks";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumWood e3( enums::Wood::slitDrum );
	e2 = e3;
	expected = "slit drum";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "sandpaper blocks";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "sandpaper blocks";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp10 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::templeBlock );
	MxEnumWood e2( enums::Wood::slitDrum );
	e1 = e2;
	string expected = "slit drum";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumWood e3( enums::Wood::templeBlock );
	e2 = e3;
	expected = "temple block";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "slit drum";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "slit drum";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp11 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::vibraslap );
	MxEnumWood e2( enums::Wood::templeBlock );
	e1 = e2;
	string expected = "temple block";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumWood e3( enums::Wood::vibraslap );
	e2 = e3;
	expected = "vibraslap";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "temple block";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "temple block";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp12 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::woodBlock );
	MxEnumWood e2( enums::Wood::vibraslap );
	e1 = e2;
	string expected = "vibraslap";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumWood e3( enums::Wood::woodBlock );
	e2 = e3;
	expected = "wood block";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "vibraslap";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "vibraslap";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp13 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::boardClapper );
	MxEnumWood e2( enums::Wood::woodBlock );
	e1 = e2;
	string expected = "wood block";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumWood e3( enums::Wood::boardClapper );
	e2 = e3;
	expected = "board clapper";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "wood block";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "wood block";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}


/* getValue returns the internal enum value */
TEST( getValue0 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::boardClapper );
	CHECK( e1.getValue() == enums::Wood::boardClapper )
}
TEST( getValue1 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::cabasa );
	CHECK( e1.getValue() == enums::Wood::cabasa )
}
TEST( getValue2 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::castanets );
	CHECK( e1.getValue() == enums::Wood::castanets )
}
TEST( getValue12 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::vibraslap );
	CHECK( e1.getValue() == enums::Wood::vibraslap )
}
TEST( getValue13 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::woodBlock );
	CHECK( e1.getValue() == enums::Wood::woodBlock )
}


/* getValueInt returns the index of the enum value */
TEST( getValueInt0 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::boardClapper );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt1 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::cabasa );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt2 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::castanets );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt3 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::claves );
	int expected = 3;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt4 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::guiro );
	int expected = 4;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt5 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::logDrum );
	int expected = 5;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt6 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::maraca );
	int expected = 6;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt7 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::maracas );
	int expected = 7;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt8 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::ratchet );
	int expected = 8;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt9 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::sandpaperBlocks );
	int expected = 9;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt10 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::slitDrum );
	int expected = 10;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt11 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::templeBlock );
	int expected = 11;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt12 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::vibraslap );
	int expected = 12;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt13 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::woodBlock );
	int expected = 13;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* getCppEnumSymbolAsString returns the enum's C++ string symbol */
TEST( getCppEnumSymbolAsString0 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::boardClapper );
	string expected = "boardClapper";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString1 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::cabasa );
	string expected = "cabasa";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString2 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::castanets );
	string expected = "castanets";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString3 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::claves );
	string expected = "claves";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString4 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::guiro );
	string expected = "guiro";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString5 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::logDrum );
	string expected = "logDrum";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString6 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::maraca );
	string expected = "maraca";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString7 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::maracas );
	string expected = "maracas";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString8 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::ratchet );
	string expected = "ratchet";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString9 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::sandpaperBlocks );
	string expected = "sandpaperBlocks";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString10 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::slitDrum );
	string expected = "slitDrum";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString11 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::templeBlock );
	string expected = "templeBlock";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString12 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::vibraslap );
	string expected = "vibraslap";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString13 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::woodBlock );
	string expected = "woodBlock";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}


/* toString returns the enum's MusicXml string symbol */
TEST( toString0 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::boardClapper );
	string expected = "board clapper";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString1 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::cabasa );
	string expected = "cabasa";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString2 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::castanets );
	string expected = "castanets";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString3 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::claves );
	string expected = "claves";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString4 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::guiro );
	string expected = "guiro";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString5 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::logDrum );
	string expected = "log drum";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString6 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::maraca );
	string expected = "maraca";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString7 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::maracas );
	string expected = "maracas";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString8 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::ratchet );
	string expected = "ratchet";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString9 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::sandpaperBlocks );
	string expected = "sandpaper blocks";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString10 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::slitDrum );
	string expected = "slit drum";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString11 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::templeBlock );
	string expected = "temple block";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString12 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::vibraslap );
	string expected = "vibraslap";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString13 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::woodBlock );
	string expected = "wood block";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}


/* setValue(enum) changes the internal value */
TEST( setValue0 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::cabasa );
	e1.setValue( enums::Wood::boardClapper );
	CHECK( e1.getValue() == enums::Wood::boardClapper )
}
TEST( setValue1 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::castanets );
	e1.setValue( enums::Wood::cabasa );
	CHECK( e1.getValue() == enums::Wood::cabasa )
}
TEST( setValue2 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::claves );
	e1.setValue( enums::Wood::castanets );
	CHECK( e1.getValue() == enums::Wood::castanets )
}
TEST( setValue12 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::woodBlock );
	e1.setValue( enums::Wood::vibraslap );
	CHECK( e1.getValue() == enums::Wood::vibraslap )
}
TEST( setValue13 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::boardClapper );
	e1.setValue( enums::Wood::woodBlock );
	CHECK( e1.getValue() == enums::Wood::woodBlock )
}


/* setValueInt(int) takes the index, sets internal value 
   returns true/false to indicate success/failure */
TEST( setValueIntNEG1 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::cabasa );
	CHECK( ! e1.setValueInt( -1 ) )
	CHECK( e1.getValue() == enums::Wood::cabasa )
}
TEST( setValueInt0 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::castanets );
	CHECK( e1.setValueInt( 1 ) )
	CHECK( e1.getValue() == enums::Wood::cabasa )
}
TEST( setValueInt1 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::claves );
	CHECK( e1.setValueInt( 2 ) )
	CHECK( e1.getValue() == enums::Wood::castanets )
}
TEST( setValueInt2 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::guiro );
	CHECK( e1.setValueInt( 3 ) )
	CHECK( e1.getValue() == enums::Wood::claves )
}
TEST( setValueInt12 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::boardClapper );
	CHECK( e1.setValueInt( 13 ) )
	CHECK( e1.getValue() == enums::Wood::woodBlock )
}
TEST( setValueInt13 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::cabasa );
	CHECK( e1.setValueInt( 0 ) )
	CHECK( e1.getValue() == enums::Wood::boardClapper )
}
TEST( setValueInt14 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::castanets );
	CHECK( ! e1.setValueInt( 14 ) )
	CHECK( e1.getValue() == enums::Wood::castanets )
}


/* fromString takes the MusicXML symbol, sets value
   returns true/false to indicate success/failure */
TEST( fromStringNEG1 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::cabasa );
	CHECK( ! e1.fromString( "crazyErrantValue-1" ) )
	CHECK( e1.getValue() == enums::Wood::cabasa )
}
TEST( fromString0 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::castanets );
	CHECK( e1.fromString( "cabasa" ) )
	CHECK( e1.getValue() == enums::Wood::cabasa )
}
TEST( fromString1 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::claves );
	CHECK( e1.fromString( "castanets" ) )
	CHECK( e1.getValue() == enums::Wood::castanets )
}
TEST( fromString2 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::guiro );
	CHECK( e1.fromString( "claves" ) )
	CHECK( e1.getValue() == enums::Wood::claves )
}
TEST( fromString3 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::logDrum );
	CHECK( e1.fromString( "guiro" ) )
	CHECK( e1.getValue() == enums::Wood::guiro )
}
TEST( fromString4 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::maraca );
	CHECK( e1.fromString( "log drum" ) )
	CHECK( e1.getValue() == enums::Wood::logDrum )
}
TEST( fromString5 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::maracas );
	CHECK( e1.fromString( "maraca" ) )
	CHECK( e1.getValue() == enums::Wood::maraca )
}
TEST( fromString6 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::ratchet );
	CHECK( e1.fromString( "maracas" ) )
	CHECK( e1.getValue() == enums::Wood::maracas )
}
TEST( fromString7 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::sandpaperBlocks );
	CHECK( e1.fromString( "ratchet" ) )
	CHECK( e1.getValue() == enums::Wood::ratchet )
}
TEST( fromString8 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::slitDrum );
	CHECK( e1.fromString( "sandpaper blocks" ) )
	CHECK( e1.getValue() == enums::Wood::sandpaperBlocks )
}
TEST( fromString9 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::templeBlock );
	CHECK( e1.fromString( "slit drum" ) )
	CHECK( e1.getValue() == enums::Wood::slitDrum )
}
TEST( fromString10 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::vibraslap );
	CHECK( e1.fromString( "temple block" ) )
	CHECK( e1.getValue() == enums::Wood::templeBlock )
}
TEST( fromString11 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::woodBlock );
	CHECK( e1.fromString( "vibraslap" ) )
	CHECK( e1.getValue() == enums::Wood::vibraslap )
}
TEST( fromString12 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::boardClapper );
	CHECK( e1.fromString( "wood block" ) )
	CHECK( e1.getValue() == enums::Wood::woodBlock )
}
TEST( fromString13 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::cabasa );
	CHECK( e1.fromString( "board clapper" ) )
	CHECK( e1.getValue() == enums::Wood::boardClapper )
}
TEST( fromString14 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::castanets );
	CHECK( ! e1.fromString( "crazyErrantValue14" ) )
	CHECK( e1.getValue() == enums::Wood::castanets )
}


/* getSize returns the count of possible enum values */
TEST( getSize0 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::boardClapper );
	int expected = 14;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize1 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::cabasa );
	int expected = 14;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize13 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::woodBlock );
	int expected = 14;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}


/* getXmlTypeName returns the typename from musicxml.xsd */
TEST( getXmlTypeName0 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::boardClapper );
	string expected = "wood";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName1 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::cabasa );
	string expected = "wood";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName13 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::woodBlock );
	string expected = "wood";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}


/* getClassName returns the name of the C++ class */
TEST( getClassName0 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::boardClapper );
	string expected = "MxEnumWood";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName1 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::cabasa );
	string expected = "MxEnumWood";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName13 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::woodBlock );
	string expected = "MxEnumWood";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}


/* getDocumentation returns the name of the C++ class */
TEST( getDocumentation0 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::boardClapper );
	string expected = "The wood type represents pictograms for wood percussion instruments. The maraca and maracas values distinguish the one- and two-maraca versions of the pictogram. The vibraslap and castanets values are in addition to Stone's list.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation1 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::cabasa );
	string expected = "The wood type represents pictograms for wood percussion instruments. The maraca and maracas values distinguish the one- and two-maraca versions of the pictogram. The vibraslap and castanets values are in addition to Stone's list.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation13 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::woodBlock );
	string expected = "The wood type represents pictograms for wood percussion instruments. The maraca and maracas values distinguish the one- and two-maraca versions of the pictogram. The vibraslap and castanets values are in addition to Stone's list.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}


/* stream stream the enum's MusicXml string symbol */
TEST( stream0 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::boardClapper );
	stringstream ss;
	e1.stream( ss );
	string expected = "board clapper";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "board clapper";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream1 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::cabasa );
	stringstream ss;
	e1.stream( ss );
	string expected = "cabasa";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "cabasa";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream13 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::woodBlock );
	stringstream ss;
	e1.stream( ss );
	string expected = "wood block";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "wood block";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* streaming operator streams the enum's MusicXml string symbol */
TEST( streamingOperator0 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::boardClapper );
	stringstream ss;
	ss << e1;
	string expected = "board clapper";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "board clapper";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator1 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::cabasa );
	stringstream ss;
	ss << e1;
	string expected = "cabasa";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "cabasa";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator13 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::woodBlock );
	stringstream ss;
	ss << e1;
	string expected = "wood block";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "wood block";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* equality operators */
TEST( equalsEquals_true_0equals0 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::boardClapper );
	MxEnumWood e2( enums::Wood::boardClapper );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals1 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::cabasa );
	MxEnumWood e2( enums::Wood::boardClapper );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals13 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::woodBlock );
	MxEnumWood e2( enums::Wood::boardClapper );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals0 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::boardClapper );
	MxEnumWood e2( enums::Wood::cabasa );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_1equals1 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::cabasa );
	MxEnumWood e2( enums::Wood::cabasa );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals13 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::woodBlock );
	MxEnumWood e2( enums::Wood::cabasa );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_13equals0 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::boardClapper );
	MxEnumWood e2( enums::Wood::woodBlock );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_13equals1 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::cabasa );
	MxEnumWood e2( enums::Wood::woodBlock );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_13equals13 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::woodBlock );
	MxEnumWood e2( enums::Wood::woodBlock );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_0equals0 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::boardClapper );
	MxEnumWood e2( enums::Wood::boardClapper );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals1 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::cabasa );
	MxEnumWood e2( enums::Wood::boardClapper );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals13 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::woodBlock );
	MxEnumWood e2( enums::Wood::boardClapper );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals0 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::boardClapper );
	MxEnumWood e2( enums::Wood::cabasa );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_1equals1 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::cabasa );
	MxEnumWood e2( enums::Wood::cabasa );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals13 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::woodBlock );
	MxEnumWood e2( enums::Wood::cabasa );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_13equals0 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::boardClapper );
	MxEnumWood e2( enums::Wood::woodBlock );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_13equals1 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::cabasa );
	MxEnumWood e2( enums::Wood::woodBlock );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_13equals13 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::woodBlock );
	MxEnumWood e2( enums::Wood::woodBlock );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* comparison operators compare the result of getValueInt */
TEST( lessThanOrEqual_true_0islessthanoreq0 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::boardClapper );
	MxEnumWood e2( enums::Wood::boardClapper );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_1islessthanoreq0 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::cabasa );
	MxEnumWood e2( enums::Wood::boardClapper );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_13islessthanoreq0 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::woodBlock );
	MxEnumWood e2( enums::Wood::boardClapper );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq1 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::boardClapper );
	MxEnumWood e2( enums::Wood::cabasa );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq1 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::cabasa );
	MxEnumWood e2( enums::Wood::cabasa );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_13islessthanoreq1 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::woodBlock );
	MxEnumWood e2( enums::Wood::cabasa );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq13 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::boardClapper );
	MxEnumWood e2( enums::Wood::woodBlock );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq13 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::cabasa );
	MxEnumWood e2( enums::Wood::woodBlock );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_13islessthanoreq13 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::woodBlock );
	MxEnumWood e2( enums::Wood::woodBlock );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_0isgreaterthanoreq0 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::boardClapper );
	MxEnumWood e2( enums::Wood::boardClapper );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq0 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::cabasa );
	MxEnumWood e2( enums::Wood::boardClapper );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_13isgreaterthanoreq0 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::woodBlock );
	MxEnumWood e2( enums::Wood::boardClapper );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq1 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::boardClapper );
	MxEnumWood e2( enums::Wood::cabasa );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq1 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::cabasa );
	MxEnumWood e2( enums::Wood::cabasa );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_13isgreaterthanoreq1 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::woodBlock );
	MxEnumWood e2( enums::Wood::cabasa );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq13 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::boardClapper );
	MxEnumWood e2( enums::Wood::woodBlock );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthanoreq13 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::cabasa );
	MxEnumWood e2( enums::Wood::woodBlock );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_13isgreaterthanoreq13 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::woodBlock );
	MxEnumWood e2( enums::Wood::woodBlock );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_0islessthan0 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::boardClapper );
	MxEnumWood e2( enums::Wood::boardClapper );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan0 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::cabasa );
	MxEnumWood e2( enums::Wood::boardClapper );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_13islessthan0 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::woodBlock );
	MxEnumWood e2( enums::Wood::boardClapper );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan1 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::boardClapper );
	MxEnumWood e2( enums::Wood::cabasa );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan1 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::cabasa );
	MxEnumWood e2( enums::Wood::cabasa );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_13islessthan1 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::woodBlock );
	MxEnumWood e2( enums::Wood::cabasa );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan13 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::boardClapper );
	MxEnumWood e2( enums::Wood::woodBlock );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_1islessthan13 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::cabasa );
	MxEnumWood e2( enums::Wood::woodBlock );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_13islessthan13 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::woodBlock );
	MxEnumWood e2( enums::Wood::woodBlock );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan0 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::boardClapper );
	MxEnumWood e2( enums::Wood::boardClapper );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthan0 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::cabasa );
	MxEnumWood e2( enums::Wood::boardClapper );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_13isgreaterthan0 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::woodBlock );
	MxEnumWood e2( enums::Wood::boardClapper );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan1 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::boardClapper );
	MxEnumWood e2( enums::Wood::cabasa );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan1 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::cabasa );
	MxEnumWood e2( enums::Wood::cabasa );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_13isgreaterthan1 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::woodBlock );
	MxEnumWood e2( enums::Wood::cabasa );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan13 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::boardClapper );
	MxEnumWood e2( enums::Wood::woodBlock );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan13 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::cabasa );
	MxEnumWood e2( enums::Wood::woodBlock );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_13isgreaterthan13 , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::woodBlock );
	MxEnumWood e2( enums::Wood::woodBlock );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* increment and decrement operators cycle through values
    wrapping around to begining/end */
TEST( incrementPre_start0_13times , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::boardClapper );
	MxEnumWood e2( enums::Wood::boardClapper );
	for( int i = 0; i < 13; ++i )
	{
		e2 = ++e1;
	}
	string expected = "woodBlock";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "woodBlock";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_13times , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::cabasa );
	MxEnumWood e2( enums::Wood::cabasa );
	for( int i = 0; i < 13; ++i )
	{
		e2 = ++e1;
	}
	string expected = "boardClapper";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "boardClapper";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start13_13times , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::woodBlock );
	MxEnumWood e2( enums::Wood::woodBlock );
	for( int i = 0; i < 13; ++i )
	{
		e2 = ++e1;
	}
	string expected = "vibraslap";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "vibraslap";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start0_14times , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::boardClapper );
	MxEnumWood e2( enums::Wood::boardClapper );
	for( int i = 0; i < 14; ++i )
	{
		e2 = ++e1;
	}
	string expected = "boardClapper";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "boardClapper";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_14times , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::cabasa );
	MxEnumWood e2( enums::Wood::cabasa );
	for( int i = 0; i < 14; ++i )
	{
		e2 = ++e1;
	}
	string expected = "cabasa";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "cabasa";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start13_14times , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::woodBlock );
	MxEnumWood e2( enums::Wood::woodBlock );
	for( int i = 0; i < 14; ++i )
	{
		e2 = ++e1;
	}
	string expected = "woodBlock";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "woodBlock";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_13times , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::boardClapper );
	MxEnumWood e2( enums::Wood::boardClapper );
	for( int i = 0; i < 13; ++i )
	{
		e2 = --e1;
	}
	string expected = "cabasa";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "cabasa";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_13times , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::cabasa );
	MxEnumWood e2( enums::Wood::cabasa );
	for( int i = 0; i < 13; ++i )
	{
		e2 = --e1;
	}
	string expected = "castanets";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "castanets";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start13_13times , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::woodBlock );
	MxEnumWood e2( enums::Wood::woodBlock );
	for( int i = 0; i < 13; ++i )
	{
		e2 = --e1;
	}
	string expected = "boardClapper";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "boardClapper";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_14times , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::boardClapper );
	MxEnumWood e2( enums::Wood::boardClapper );
	for( int i = 0; i < 14; ++i )
	{
		e2 = --e1;
	}
	string expected = "boardClapper";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "boardClapper";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_14times , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::cabasa );
	MxEnumWood e2( enums::Wood::cabasa );
	for( int i = 0; i < 14; ++i )
	{
		e2 = --e1;
	}
	string expected = "cabasa";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "cabasa";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start13_14times , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::woodBlock );
	MxEnumWood e2( enums::Wood::woodBlock );
	for( int i = 0; i < 14; ++i )
	{
		e2 = --e1;
	}
	string expected = "woodBlock";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "woodBlock";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_13times , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::boardClapper );
	MxEnumWood e2( enums::Wood::boardClapper );
	for( int i = 0; i < 13; ++i )
	{
		e2 = e1++;
	}
	string expected = "woodBlock";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "vibraslap";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_13times , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::cabasa );
	MxEnumWood e2( enums::Wood::cabasa );
	for( int i = 0; i < 13; ++i )
	{
		e2 = e1++;
	}
	string expected = "boardClapper";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "woodBlock";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start13_13times , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::woodBlock );
	MxEnumWood e2( enums::Wood::woodBlock );
	for( int i = 0; i < 13; ++i )
	{
		e2 = e1++;
	}
	string expected = "vibraslap";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "templeBlock";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_14times , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::boardClapper );
	MxEnumWood e2( enums::Wood::boardClapper );
	for( int i = 0; i < 14; ++i )
	{
		e2 = e1++;
	}
	string expected = "boardClapper";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "woodBlock";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_14times , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::cabasa );
	MxEnumWood e2( enums::Wood::cabasa );
	for( int i = 0; i < 14; ++i )
	{
		e2 = e1++;
	}
	string expected = "cabasa";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "boardClapper";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start13_14times , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::woodBlock );
	MxEnumWood e2( enums::Wood::woodBlock );
	for( int i = 0; i < 14; ++i )
	{
		e2 = e1++;
	}
	string expected = "woodBlock";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "vibraslap";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_13times , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::boardClapper );
	MxEnumWood e2( enums::Wood::boardClapper );
	for( int i = 0; i < 13; ++i )
	{
		e2 = e1--;
	}
	string expected = "cabasa";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "castanets";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_13times , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::cabasa );
	MxEnumWood e2( enums::Wood::cabasa );
	for( int i = 0; i < 13; ++i )
	{
		e2 = e1--;
	}
	string expected = "castanets";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "claves";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start13_13times , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::woodBlock );
	MxEnumWood e2( enums::Wood::woodBlock );
	for( int i = 0; i < 13; ++i )
	{
		e2 = e1--;
	}
	string expected = "boardClapper";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "cabasa";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_14times , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::boardClapper );
	MxEnumWood e2( enums::Wood::boardClapper );
	for( int i = 0; i < 14; ++i )
	{
		e2 = e1--;
	}
	string expected = "boardClapper";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "cabasa";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_14times , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::cabasa );
	MxEnumWood e2( enums::Wood::cabasa );
	for( int i = 0; i < 14; ++i )
	{
		e2 = e1--;
	}
	string expected = "cabasa";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "castanets";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start13_14times , MxEnumWood )
{
	MxEnumWood e1( enums::Wood::woodBlock );
	MxEnumWood e2( enums::Wood::woodBlock );
	for( int i = 0; i < 14; ++i )
	{
		e2 = e1--;
	}
	string expected = "woodBlock";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "boardClapper";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}

