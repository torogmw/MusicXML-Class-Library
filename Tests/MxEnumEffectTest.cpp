#include "TestHarness.h"
#include "MxEnumEffect.h"
#include <string>
#include <sstream>

using namespace lexicon;
using namespace std;

/* default constructor test */
TEST( ctorDefault , MxEnumEffect )
{
	MxEnumEffect e1;
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* constructor test for each possible enum value */
TEST( ctorEnum0 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::anvil );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum1 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::autoHorn );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum2 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::birdWhistle );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum3 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::cannon );
	int expected = 3;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum4 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::duckCall );
	int expected = 4;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum5 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::gunShot );
	int expected = 5;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum6 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::klaxonHorn );
	int expected = 6;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum7 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::lionsRoar );
	int expected = 7;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum8 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::policeWhistle );
	int expected = 8;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum9 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::siren );
	int expected = 9;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum10 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::slideWhistle );
	int expected = 10;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum11 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::thunderSheet );
	int expected = 11;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum12 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::windMachine );
	int expected = 12;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum13 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::windWhistle );
	int expected = 13;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* copy constructor */
TEST( copyCtor0 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::anvil );
	MxEnumEffect e2( e1 );
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
TEST( copyCtor1 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::autoHorn );
	MxEnumEffect e2( e1 );
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
TEST( copyCtor2 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::birdWhistle );
	MxEnumEffect e2( e1 );
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
TEST( copyCtor3 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::cannon );
	MxEnumEffect e2( e1 );
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
TEST( copyCtor4 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::duckCall );
	MxEnumEffect e2( e1 );
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
TEST( copyCtor5 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::gunShot );
	MxEnumEffect e2( e1 );
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
TEST( copyCtor6 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::klaxonHorn );
	MxEnumEffect e2( e1 );
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
TEST( copyCtor7 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::lionsRoar );
	MxEnumEffect e2( e1 );
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
TEST( copyCtor8 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::policeWhistle );
	MxEnumEffect e2( e1 );
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
TEST( copyCtor9 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::siren );
	MxEnumEffect e2( e1 );
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
TEST( copyCtor10 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::slideWhistle );
	MxEnumEffect e2( e1 );
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
TEST( copyCtor11 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::thunderSheet );
	MxEnumEffect e2( e1 );
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
TEST( copyCtor12 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::windMachine );
	MxEnumEffect e2( e1 );
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
TEST( copyCtor13 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::windWhistle );
	MxEnumEffect e2( e1 );
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
TEST( assignmentOp0 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::autoHorn );
	MxEnumEffect e2( enums::Effect::anvil );
	e1 = e2;
	string expected = "anvil";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumEffect e3( enums::Effect::autoHorn );
	e2 = e3;
	expected = "auto horn";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "anvil";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "anvil";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp1 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::birdWhistle );
	MxEnumEffect e2( enums::Effect::autoHorn );
	e1 = e2;
	string expected = "auto horn";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumEffect e3( enums::Effect::birdWhistle );
	e2 = e3;
	expected = "bird whistle";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "auto horn";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "auto horn";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp2 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::cannon );
	MxEnumEffect e2( enums::Effect::birdWhistle );
	e1 = e2;
	string expected = "bird whistle";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumEffect e3( enums::Effect::cannon );
	e2 = e3;
	expected = "cannon";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "bird whistle";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "bird whistle";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp3 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::duckCall );
	MxEnumEffect e2( enums::Effect::cannon );
	e1 = e2;
	string expected = "cannon";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumEffect e3( enums::Effect::duckCall );
	e2 = e3;
	expected = "duck call";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "cannon";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "cannon";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp4 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::gunShot );
	MxEnumEffect e2( enums::Effect::duckCall );
	e1 = e2;
	string expected = "duck call";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumEffect e3( enums::Effect::gunShot );
	e2 = e3;
	expected = "gun shot";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "duck call";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "duck call";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp5 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::klaxonHorn );
	MxEnumEffect e2( enums::Effect::gunShot );
	e1 = e2;
	string expected = "gun shot";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumEffect e3( enums::Effect::klaxonHorn );
	e2 = e3;
	expected = "klaxon horn";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "gun shot";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "gun shot";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp6 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::lionsRoar );
	MxEnumEffect e2( enums::Effect::klaxonHorn );
	e1 = e2;
	string expected = "klaxon horn";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumEffect e3( enums::Effect::lionsRoar );
	e2 = e3;
	expected = "lions roar";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "klaxon horn";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "klaxon horn";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp7 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::policeWhistle );
	MxEnumEffect e2( enums::Effect::lionsRoar );
	e1 = e2;
	string expected = "lions roar";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumEffect e3( enums::Effect::policeWhistle );
	e2 = e3;
	expected = "police whistle";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "lions roar";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "lions roar";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp8 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::siren );
	MxEnumEffect e2( enums::Effect::policeWhistle );
	e1 = e2;
	string expected = "police whistle";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumEffect e3( enums::Effect::siren );
	e2 = e3;
	expected = "siren";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "police whistle";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "police whistle";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp9 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::slideWhistle );
	MxEnumEffect e2( enums::Effect::siren );
	e1 = e2;
	string expected = "siren";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumEffect e3( enums::Effect::slideWhistle );
	e2 = e3;
	expected = "slide whistle";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "siren";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "siren";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp10 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::thunderSheet );
	MxEnumEffect e2( enums::Effect::slideWhistle );
	e1 = e2;
	string expected = "slide whistle";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumEffect e3( enums::Effect::thunderSheet );
	e2 = e3;
	expected = "thunder sheet";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "slide whistle";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "slide whistle";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp11 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::windMachine );
	MxEnumEffect e2( enums::Effect::thunderSheet );
	e1 = e2;
	string expected = "thunder sheet";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumEffect e3( enums::Effect::windMachine );
	e2 = e3;
	expected = "wind machine";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "thunder sheet";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "thunder sheet";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp12 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::windWhistle );
	MxEnumEffect e2( enums::Effect::windMachine );
	e1 = e2;
	string expected = "wind machine";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumEffect e3( enums::Effect::windWhistle );
	e2 = e3;
	expected = "wind whistle";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "wind machine";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "wind machine";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp13 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::anvil );
	MxEnumEffect e2( enums::Effect::windWhistle );
	e1 = e2;
	string expected = "wind whistle";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumEffect e3( enums::Effect::anvil );
	e2 = e3;
	expected = "anvil";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "wind whistle";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "wind whistle";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}


/* getValue returns the internal enum value */
TEST( getValue0 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::anvil );
	CHECK( e1.getValue() == enums::Effect::anvil )
}
TEST( getValue1 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::autoHorn );
	CHECK( e1.getValue() == enums::Effect::autoHorn )
}
TEST( getValue2 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::birdWhistle );
	CHECK( e1.getValue() == enums::Effect::birdWhistle )
}
TEST( getValue12 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::windMachine );
	CHECK( e1.getValue() == enums::Effect::windMachine )
}
TEST( getValue13 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::windWhistle );
	CHECK( e1.getValue() == enums::Effect::windWhistle )
}


/* getValueInt returns the index of the enum value */
TEST( getValueInt0 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::anvil );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt1 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::autoHorn );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt2 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::birdWhistle );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt3 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::cannon );
	int expected = 3;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt4 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::duckCall );
	int expected = 4;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt5 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::gunShot );
	int expected = 5;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt6 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::klaxonHorn );
	int expected = 6;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt7 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::lionsRoar );
	int expected = 7;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt8 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::policeWhistle );
	int expected = 8;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt9 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::siren );
	int expected = 9;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt10 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::slideWhistle );
	int expected = 10;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt11 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::thunderSheet );
	int expected = 11;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt12 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::windMachine );
	int expected = 12;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt13 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::windWhistle );
	int expected = 13;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* getCppEnumSymbolAsString returns the enum's C++ string symbol */
TEST( getCppEnumSymbolAsString0 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::anvil );
	string expected = "anvil";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString1 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::autoHorn );
	string expected = "autoHorn";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString2 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::birdWhistle );
	string expected = "birdWhistle";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString3 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::cannon );
	string expected = "cannon";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString4 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::duckCall );
	string expected = "duckCall";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString5 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::gunShot );
	string expected = "gunShot";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString6 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::klaxonHorn );
	string expected = "klaxonHorn";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString7 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::lionsRoar );
	string expected = "lionsRoar";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString8 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::policeWhistle );
	string expected = "policeWhistle";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString9 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::siren );
	string expected = "siren";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString10 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::slideWhistle );
	string expected = "slideWhistle";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString11 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::thunderSheet );
	string expected = "thunderSheet";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString12 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::windMachine );
	string expected = "windMachine";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString13 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::windWhistle );
	string expected = "windWhistle";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}


/* toString returns the enum's MusicXml string symbol */
TEST( toString0 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::anvil );
	string expected = "anvil";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString1 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::autoHorn );
	string expected = "auto horn";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString2 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::birdWhistle );
	string expected = "bird whistle";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString3 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::cannon );
	string expected = "cannon";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString4 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::duckCall );
	string expected = "duck call";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString5 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::gunShot );
	string expected = "gun shot";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString6 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::klaxonHorn );
	string expected = "klaxon horn";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString7 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::lionsRoar );
	string expected = "lions roar";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString8 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::policeWhistle );
	string expected = "police whistle";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString9 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::siren );
	string expected = "siren";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString10 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::slideWhistle );
	string expected = "slide whistle";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString11 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::thunderSheet );
	string expected = "thunder sheet";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString12 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::windMachine );
	string expected = "wind machine";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString13 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::windWhistle );
	string expected = "wind whistle";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}


/* setValue(enum) changes the internal value */
TEST( setValue0 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::autoHorn );
	e1.setValue( enums::Effect::anvil );
	CHECK( e1.getValue() == enums::Effect::anvil )
}
TEST( setValue1 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::birdWhistle );
	e1.setValue( enums::Effect::autoHorn );
	CHECK( e1.getValue() == enums::Effect::autoHorn )
}
TEST( setValue2 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::cannon );
	e1.setValue( enums::Effect::birdWhistle );
	CHECK( e1.getValue() == enums::Effect::birdWhistle )
}
TEST( setValue12 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::windWhistle );
	e1.setValue( enums::Effect::windMachine );
	CHECK( e1.getValue() == enums::Effect::windMachine )
}
TEST( setValue13 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::anvil );
	e1.setValue( enums::Effect::windWhistle );
	CHECK( e1.getValue() == enums::Effect::windWhistle )
}


/* setValueInt(int) takes the index, sets internal value 
   returns true/false to indicate success/failure */
TEST( setValueIntNEG1 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::autoHorn );
	CHECK( ! e1.setValueInt( -1 ) )
	CHECK( e1.getValue() == enums::Effect::autoHorn )
}
TEST( setValueInt0 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::birdWhistle );
	CHECK( e1.setValueInt( 1 ) )
	CHECK( e1.getValue() == enums::Effect::autoHorn )
}
TEST( setValueInt1 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::cannon );
	CHECK( e1.setValueInt( 2 ) )
	CHECK( e1.getValue() == enums::Effect::birdWhistle )
}
TEST( setValueInt2 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::duckCall );
	CHECK( e1.setValueInt( 3 ) )
	CHECK( e1.getValue() == enums::Effect::cannon )
}
TEST( setValueInt12 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::anvil );
	CHECK( e1.setValueInt( 13 ) )
	CHECK( e1.getValue() == enums::Effect::windWhistle )
}
TEST( setValueInt13 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::autoHorn );
	CHECK( e1.setValueInt( 0 ) )
	CHECK( e1.getValue() == enums::Effect::anvil )
}
TEST( setValueInt14 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::birdWhistle );
	CHECK( ! e1.setValueInt( 14 ) )
	CHECK( e1.getValue() == enums::Effect::birdWhistle )
}


/* fromString takes the MusicXML symbol, sets value
   returns true/false to indicate success/failure */
TEST( fromStringNEG1 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::autoHorn );
	CHECK( ! e1.fromString( "crazyErrantValue-1" ) )
	CHECK( e1.getValue() == enums::Effect::autoHorn )
}
TEST( fromString0 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::birdWhistle );
	CHECK( e1.fromString( "auto horn" ) )
	CHECK( e1.getValue() == enums::Effect::autoHorn )
}
TEST( fromString1 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::cannon );
	CHECK( e1.fromString( "bird whistle" ) )
	CHECK( e1.getValue() == enums::Effect::birdWhistle )
}
TEST( fromString2 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::duckCall );
	CHECK( e1.fromString( "cannon" ) )
	CHECK( e1.getValue() == enums::Effect::cannon )
}
TEST( fromString3 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::gunShot );
	CHECK( e1.fromString( "duck call" ) )
	CHECK( e1.getValue() == enums::Effect::duckCall )
}
TEST( fromString4 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::klaxonHorn );
	CHECK( e1.fromString( "gun shot" ) )
	CHECK( e1.getValue() == enums::Effect::gunShot )
}
TEST( fromString5 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::lionsRoar );
	CHECK( e1.fromString( "klaxon horn" ) )
	CHECK( e1.getValue() == enums::Effect::klaxonHorn )
}
TEST( fromString6 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::policeWhistle );
	CHECK( e1.fromString( "lions roar" ) )
	CHECK( e1.getValue() == enums::Effect::lionsRoar )
}
TEST( fromString7 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::siren );
	CHECK( e1.fromString( "police whistle" ) )
	CHECK( e1.getValue() == enums::Effect::policeWhistle )
}
TEST( fromString8 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::slideWhistle );
	CHECK( e1.fromString( "siren" ) )
	CHECK( e1.getValue() == enums::Effect::siren )
}
TEST( fromString9 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::thunderSheet );
	CHECK( e1.fromString( "slide whistle" ) )
	CHECK( e1.getValue() == enums::Effect::slideWhistle )
}
TEST( fromString10 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::windMachine );
	CHECK( e1.fromString( "thunder sheet" ) )
	CHECK( e1.getValue() == enums::Effect::thunderSheet )
}
TEST( fromString11 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::windWhistle );
	CHECK( e1.fromString( "wind machine" ) )
	CHECK( e1.getValue() == enums::Effect::windMachine )
}
TEST( fromString12 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::anvil );
	CHECK( e1.fromString( "wind whistle" ) )
	CHECK( e1.getValue() == enums::Effect::windWhistle )
}
TEST( fromString13 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::autoHorn );
	CHECK( e1.fromString( "anvil" ) )
	CHECK( e1.getValue() == enums::Effect::anvil )
}
TEST( fromString14 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::birdWhistle );
	CHECK( ! e1.fromString( "crazyErrantValue14" ) )
	CHECK( e1.getValue() == enums::Effect::birdWhistle )
}


/* getSize returns the count of possible enum values */
TEST( getSize0 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::anvil );
	int expected = 14;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize1 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::autoHorn );
	int expected = 14;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize13 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::windWhistle );
	int expected = 14;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}


/* getXmlTypeName returns the typename from musicxml.xsd */
TEST( getXmlTypeName0 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::anvil );
	string expected = "effect";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName1 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::autoHorn );
	string expected = "effect";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName13 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::windWhistle );
	string expected = "effect";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}


/* getClassName returns the name of the C++ class */
TEST( getClassName0 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::anvil );
	string expected = "MxEnumEffect";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName1 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::autoHorn );
	string expected = "MxEnumEffect";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName13 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::windWhistle );
	string expected = "MxEnumEffect";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}


/* getDocumentation returns the name of the C++ class */
TEST( getDocumentation0 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::anvil );
	string expected = "The effect type represents pictograms for sound effect percussion instruments. The cannon value is in addition to Stone's list.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation1 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::autoHorn );
	string expected = "The effect type represents pictograms for sound effect percussion instruments. The cannon value is in addition to Stone's list.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation13 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::windWhistle );
	string expected = "The effect type represents pictograms for sound effect percussion instruments. The cannon value is in addition to Stone's list.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}


/* stream stream the enum's MusicXml string symbol */
TEST( stream0 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::anvil );
	stringstream ss;
	e1.stream( ss );
	string expected = "anvil";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "anvil";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream1 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::autoHorn );
	stringstream ss;
	e1.stream( ss );
	string expected = "auto horn";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "auto horn";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream13 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::windWhistle );
	stringstream ss;
	e1.stream( ss );
	string expected = "wind whistle";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "wind whistle";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* streaming operator streams the enum's MusicXml string symbol */
TEST( streamingOperator0 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::anvil );
	stringstream ss;
	ss << e1;
	string expected = "anvil";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "anvil";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator1 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::autoHorn );
	stringstream ss;
	ss << e1;
	string expected = "auto horn";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "auto horn";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator13 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::windWhistle );
	stringstream ss;
	ss << e1;
	string expected = "wind whistle";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "wind whistle";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* equality operators */
TEST( equalsEquals_true_0equals0 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::anvil );
	MxEnumEffect e2( enums::Effect::anvil );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals1 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::autoHorn );
	MxEnumEffect e2( enums::Effect::anvil );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals13 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::windWhistle );
	MxEnumEffect e2( enums::Effect::anvil );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals0 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::anvil );
	MxEnumEffect e2( enums::Effect::autoHorn );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_1equals1 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::autoHorn );
	MxEnumEffect e2( enums::Effect::autoHorn );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals13 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::windWhistle );
	MxEnumEffect e2( enums::Effect::autoHorn );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_13equals0 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::anvil );
	MxEnumEffect e2( enums::Effect::windWhistle );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_13equals1 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::autoHorn );
	MxEnumEffect e2( enums::Effect::windWhistle );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_13equals13 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::windWhistle );
	MxEnumEffect e2( enums::Effect::windWhistle );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_0equals0 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::anvil );
	MxEnumEffect e2( enums::Effect::anvil );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals1 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::autoHorn );
	MxEnumEffect e2( enums::Effect::anvil );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals13 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::windWhistle );
	MxEnumEffect e2( enums::Effect::anvil );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals0 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::anvil );
	MxEnumEffect e2( enums::Effect::autoHorn );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_1equals1 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::autoHorn );
	MxEnumEffect e2( enums::Effect::autoHorn );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals13 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::windWhistle );
	MxEnumEffect e2( enums::Effect::autoHorn );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_13equals0 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::anvil );
	MxEnumEffect e2( enums::Effect::windWhistle );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_13equals1 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::autoHorn );
	MxEnumEffect e2( enums::Effect::windWhistle );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_13equals13 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::windWhistle );
	MxEnumEffect e2( enums::Effect::windWhistle );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* comparison operators compare the result of getValueInt */
TEST( lessThanOrEqual_true_0islessthanoreq0 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::anvil );
	MxEnumEffect e2( enums::Effect::anvil );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_1islessthanoreq0 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::autoHorn );
	MxEnumEffect e2( enums::Effect::anvil );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_13islessthanoreq0 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::windWhistle );
	MxEnumEffect e2( enums::Effect::anvil );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq1 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::anvil );
	MxEnumEffect e2( enums::Effect::autoHorn );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq1 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::autoHorn );
	MxEnumEffect e2( enums::Effect::autoHorn );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_13islessthanoreq1 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::windWhistle );
	MxEnumEffect e2( enums::Effect::autoHorn );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq13 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::anvil );
	MxEnumEffect e2( enums::Effect::windWhistle );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq13 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::autoHorn );
	MxEnumEffect e2( enums::Effect::windWhistle );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_13islessthanoreq13 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::windWhistle );
	MxEnumEffect e2( enums::Effect::windWhistle );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_0isgreaterthanoreq0 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::anvil );
	MxEnumEffect e2( enums::Effect::anvil );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq0 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::autoHorn );
	MxEnumEffect e2( enums::Effect::anvil );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_13isgreaterthanoreq0 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::windWhistle );
	MxEnumEffect e2( enums::Effect::anvil );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq1 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::anvil );
	MxEnumEffect e2( enums::Effect::autoHorn );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq1 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::autoHorn );
	MxEnumEffect e2( enums::Effect::autoHorn );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_13isgreaterthanoreq1 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::windWhistle );
	MxEnumEffect e2( enums::Effect::autoHorn );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq13 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::anvil );
	MxEnumEffect e2( enums::Effect::windWhistle );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthanoreq13 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::autoHorn );
	MxEnumEffect e2( enums::Effect::windWhistle );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_13isgreaterthanoreq13 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::windWhistle );
	MxEnumEffect e2( enums::Effect::windWhistle );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_0islessthan0 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::anvil );
	MxEnumEffect e2( enums::Effect::anvil );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan0 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::autoHorn );
	MxEnumEffect e2( enums::Effect::anvil );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_13islessthan0 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::windWhistle );
	MxEnumEffect e2( enums::Effect::anvil );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan1 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::anvil );
	MxEnumEffect e2( enums::Effect::autoHorn );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan1 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::autoHorn );
	MxEnumEffect e2( enums::Effect::autoHorn );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_13islessthan1 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::windWhistle );
	MxEnumEffect e2( enums::Effect::autoHorn );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan13 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::anvil );
	MxEnumEffect e2( enums::Effect::windWhistle );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_1islessthan13 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::autoHorn );
	MxEnumEffect e2( enums::Effect::windWhistle );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_13islessthan13 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::windWhistle );
	MxEnumEffect e2( enums::Effect::windWhistle );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan0 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::anvil );
	MxEnumEffect e2( enums::Effect::anvil );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthan0 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::autoHorn );
	MxEnumEffect e2( enums::Effect::anvil );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_13isgreaterthan0 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::windWhistle );
	MxEnumEffect e2( enums::Effect::anvil );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan1 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::anvil );
	MxEnumEffect e2( enums::Effect::autoHorn );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan1 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::autoHorn );
	MxEnumEffect e2( enums::Effect::autoHorn );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_13isgreaterthan1 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::windWhistle );
	MxEnumEffect e2( enums::Effect::autoHorn );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan13 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::anvil );
	MxEnumEffect e2( enums::Effect::windWhistle );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan13 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::autoHorn );
	MxEnumEffect e2( enums::Effect::windWhistle );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_13isgreaterthan13 , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::windWhistle );
	MxEnumEffect e2( enums::Effect::windWhistle );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* increment and decrement operators cycle through values
    wrapping around to begining/end */
TEST( incrementPre_start0_13times , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::anvil );
	MxEnumEffect e2( enums::Effect::anvil );
	for( int i = 0; i < 13; ++i )
	{
		e2 = ++e1;
	}
	string expected = "windWhistle";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "windWhistle";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_13times , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::autoHorn );
	MxEnumEffect e2( enums::Effect::autoHorn );
	for( int i = 0; i < 13; ++i )
	{
		e2 = ++e1;
	}
	string expected = "anvil";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "anvil";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start13_13times , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::windWhistle );
	MxEnumEffect e2( enums::Effect::windWhistle );
	for( int i = 0; i < 13; ++i )
	{
		e2 = ++e1;
	}
	string expected = "windMachine";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "windMachine";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start0_14times , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::anvil );
	MxEnumEffect e2( enums::Effect::anvil );
	for( int i = 0; i < 14; ++i )
	{
		e2 = ++e1;
	}
	string expected = "anvil";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "anvil";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_14times , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::autoHorn );
	MxEnumEffect e2( enums::Effect::autoHorn );
	for( int i = 0; i < 14; ++i )
	{
		e2 = ++e1;
	}
	string expected = "autoHorn";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "autoHorn";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start13_14times , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::windWhistle );
	MxEnumEffect e2( enums::Effect::windWhistle );
	for( int i = 0; i < 14; ++i )
	{
		e2 = ++e1;
	}
	string expected = "windWhistle";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "windWhistle";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_13times , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::anvil );
	MxEnumEffect e2( enums::Effect::anvil );
	for( int i = 0; i < 13; ++i )
	{
		e2 = --e1;
	}
	string expected = "autoHorn";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "autoHorn";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_13times , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::autoHorn );
	MxEnumEffect e2( enums::Effect::autoHorn );
	for( int i = 0; i < 13; ++i )
	{
		e2 = --e1;
	}
	string expected = "birdWhistle";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "birdWhistle";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start13_13times , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::windWhistle );
	MxEnumEffect e2( enums::Effect::windWhistle );
	for( int i = 0; i < 13; ++i )
	{
		e2 = --e1;
	}
	string expected = "anvil";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "anvil";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_14times , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::anvil );
	MxEnumEffect e2( enums::Effect::anvil );
	for( int i = 0; i < 14; ++i )
	{
		e2 = --e1;
	}
	string expected = "anvil";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "anvil";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_14times , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::autoHorn );
	MxEnumEffect e2( enums::Effect::autoHorn );
	for( int i = 0; i < 14; ++i )
	{
		e2 = --e1;
	}
	string expected = "autoHorn";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "autoHorn";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start13_14times , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::windWhistle );
	MxEnumEffect e2( enums::Effect::windWhistle );
	for( int i = 0; i < 14; ++i )
	{
		e2 = --e1;
	}
	string expected = "windWhistle";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "windWhistle";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_13times , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::anvil );
	MxEnumEffect e2( enums::Effect::anvil );
	for( int i = 0; i < 13; ++i )
	{
		e2 = e1++;
	}
	string expected = "windWhistle";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "windMachine";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_13times , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::autoHorn );
	MxEnumEffect e2( enums::Effect::autoHorn );
	for( int i = 0; i < 13; ++i )
	{
		e2 = e1++;
	}
	string expected = "anvil";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "windWhistle";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start13_13times , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::windWhistle );
	MxEnumEffect e2( enums::Effect::windWhistle );
	for( int i = 0; i < 13; ++i )
	{
		e2 = e1++;
	}
	string expected = "windMachine";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "thunderSheet";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_14times , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::anvil );
	MxEnumEffect e2( enums::Effect::anvil );
	for( int i = 0; i < 14; ++i )
	{
		e2 = e1++;
	}
	string expected = "anvil";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "windWhistle";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_14times , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::autoHorn );
	MxEnumEffect e2( enums::Effect::autoHorn );
	for( int i = 0; i < 14; ++i )
	{
		e2 = e1++;
	}
	string expected = "autoHorn";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "anvil";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start13_14times , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::windWhistle );
	MxEnumEffect e2( enums::Effect::windWhistle );
	for( int i = 0; i < 14; ++i )
	{
		e2 = e1++;
	}
	string expected = "windWhistle";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "windMachine";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_13times , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::anvil );
	MxEnumEffect e2( enums::Effect::anvil );
	for( int i = 0; i < 13; ++i )
	{
		e2 = e1--;
	}
	string expected = "autoHorn";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "birdWhistle";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_13times , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::autoHorn );
	MxEnumEffect e2( enums::Effect::autoHorn );
	for( int i = 0; i < 13; ++i )
	{
		e2 = e1--;
	}
	string expected = "birdWhistle";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "cannon";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start13_13times , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::windWhistle );
	MxEnumEffect e2( enums::Effect::windWhistle );
	for( int i = 0; i < 13; ++i )
	{
		e2 = e1--;
	}
	string expected = "anvil";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "autoHorn";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_14times , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::anvil );
	MxEnumEffect e2( enums::Effect::anvil );
	for( int i = 0; i < 14; ++i )
	{
		e2 = e1--;
	}
	string expected = "anvil";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "autoHorn";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_14times , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::autoHorn );
	MxEnumEffect e2( enums::Effect::autoHorn );
	for( int i = 0; i < 14; ++i )
	{
		e2 = e1--;
	}
	string expected = "autoHorn";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "birdWhistle";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start13_14times , MxEnumEffect )
{
	MxEnumEffect e1( enums::Effect::windWhistle );
	MxEnumEffect e2( enums::Effect::windWhistle );
	for( int i = 0; i < 14; ++i )
	{
		e2 = e1--;
	}
	string expected = "windWhistle";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "anvil";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}

