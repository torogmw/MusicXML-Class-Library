#include "TestHarness.h"
#include "MxEnumMembrane.h"
#include <string>
#include <sstream>

using namespace lexicon;
using namespace std;

/* default constructor test */
TEST( ctorDefault , MxEnumMembrane )
{
	MxEnumMembrane e1;
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* constructor test for each possible enum value */
TEST( ctorEnum0 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::bassDrum );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum1 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::bassDrumOnSide );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum2 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::bongos );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum3 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::congaDrum );
	int expected = 3;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum4 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::gobletDrum );
	int expected = 4;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum5 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::militaryDrum );
	int expected = 5;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum6 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::snareDrum );
	int expected = 6;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum7 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::snareDrumSnaresOff );
	int expected = 7;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum8 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::tambourine );
	int expected = 8;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum9 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::tenorDrum );
	int expected = 9;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum10 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::timbales );
	int expected = 10;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( ctorEnum11 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::tomtom );
	int expected = 11;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* copy constructor */
TEST( copyCtor0 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::bassDrum );
	MxEnumMembrane e2( e1 );
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
TEST( copyCtor1 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::bassDrumOnSide );
	MxEnumMembrane e2( e1 );
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
TEST( copyCtor2 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::bongos );
	MxEnumMembrane e2( e1 );
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
TEST( copyCtor3 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::congaDrum );
	MxEnumMembrane e2( e1 );
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
TEST( copyCtor4 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::gobletDrum );
	MxEnumMembrane e2( e1 );
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
TEST( copyCtor5 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::militaryDrum );
	MxEnumMembrane e2( e1 );
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
TEST( copyCtor6 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::snareDrum );
	MxEnumMembrane e2( e1 );
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
TEST( copyCtor7 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::snareDrumSnaresOff );
	MxEnumMembrane e2( e1 );
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
TEST( copyCtor8 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::tambourine );
	MxEnumMembrane e2( e1 );
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
TEST( copyCtor9 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::tenorDrum );
	MxEnumMembrane e2( e1 );
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
TEST( copyCtor10 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::timbales );
	MxEnumMembrane e2( e1 );
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
TEST( copyCtor11 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::tomtom );
	MxEnumMembrane e2( e1 );
	int expected = 11;
	int actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	e1.setValueInt( 0 );
	expected = 11;
	actual = e2.getValueInt();
	CHECK_EQUAL( expected, actual )
	
	expected = 0;
	actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* assignment operator */
TEST( assignmentOp0 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::bassDrumOnSide );
	MxEnumMembrane e2( enums::Membrane::bassDrum );
	e1 = e2;
	string expected = "bass drum";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumMembrane e3( enums::Membrane::bassDrumOnSide );
	e2 = e3;
	expected = "bass drum on side";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "bass drum";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "bass drum";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp1 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::bongos );
	MxEnumMembrane e2( enums::Membrane::bassDrumOnSide );
	e1 = e2;
	string expected = "bass drum on side";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumMembrane e3( enums::Membrane::bongos );
	e2 = e3;
	expected = "bongos";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "bass drum on side";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "bass drum on side";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp2 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::congaDrum );
	MxEnumMembrane e2( enums::Membrane::bongos );
	e1 = e2;
	string expected = "bongos";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumMembrane e3( enums::Membrane::congaDrum );
	e2 = e3;
	expected = "conga drum";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "bongos";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "bongos";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp3 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::gobletDrum );
	MxEnumMembrane e2( enums::Membrane::congaDrum );
	e1 = e2;
	string expected = "conga drum";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumMembrane e3( enums::Membrane::gobletDrum );
	e2 = e3;
	expected = "goblet drum";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "conga drum";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "conga drum";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp4 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::militaryDrum );
	MxEnumMembrane e2( enums::Membrane::gobletDrum );
	e1 = e2;
	string expected = "goblet drum";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumMembrane e3( enums::Membrane::militaryDrum );
	e2 = e3;
	expected = "military drum";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "goblet drum";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "goblet drum";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp5 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::snareDrum );
	MxEnumMembrane e2( enums::Membrane::militaryDrum );
	e1 = e2;
	string expected = "military drum";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumMembrane e3( enums::Membrane::snareDrum );
	e2 = e3;
	expected = "snare drum";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "military drum";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "military drum";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp6 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::snareDrumSnaresOff );
	MxEnumMembrane e2( enums::Membrane::snareDrum );
	e1 = e2;
	string expected = "snare drum";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumMembrane e3( enums::Membrane::snareDrumSnaresOff );
	e2 = e3;
	expected = "snare drum snares off";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "snare drum";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "snare drum";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp7 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::tambourine );
	MxEnumMembrane e2( enums::Membrane::snareDrumSnaresOff );
	e1 = e2;
	string expected = "snare drum snares off";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumMembrane e3( enums::Membrane::tambourine );
	e2 = e3;
	expected = "tambourine";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "snare drum snares off";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "snare drum snares off";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp8 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::tenorDrum );
	MxEnumMembrane e2( enums::Membrane::tambourine );
	e1 = e2;
	string expected = "tambourine";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumMembrane e3( enums::Membrane::tenorDrum );
	e2 = e3;
	expected = "tenor drum";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "tambourine";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "tambourine";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp9 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::timbales );
	MxEnumMembrane e2( enums::Membrane::tenorDrum );
	e1 = e2;
	string expected = "tenor drum";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumMembrane e3( enums::Membrane::timbales );
	e2 = e3;
	expected = "timbales";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "tenor drum";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "tenor drum";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp10 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::tomtom );
	MxEnumMembrane e2( enums::Membrane::timbales );
	e1 = e2;
	string expected = "timbales";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumMembrane e3( enums::Membrane::tomtom );
	e2 = e3;
	expected = "tomtom";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "timbales";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "timbales";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}
TEST( assignmentOp11 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::bassDrum );
	MxEnumMembrane e2( enums::Membrane::tomtom );
	e1 = e2;
	string expected = "tomtom";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	MxEnumMembrane e3( enums::Membrane::bassDrum );
	e2 = e3;
	expected = "bass drum";
	actual = e2.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "tomtom";
	actual = e1.toString();
	CHECK_EQUAL( expected, actual )
	
	expected = "tomtom";
	actual = ( e2 = e1 ).toString();
	CHECK_EQUAL( expected, actual )
}


/* getValue returns the internal enum value */
TEST( getValue0 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::bassDrum );
	CHECK( e1.getValue() == enums::Membrane::bassDrum )
}
TEST( getValue1 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::bassDrumOnSide );
	CHECK( e1.getValue() == enums::Membrane::bassDrumOnSide )
}
TEST( getValue2 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::bongos );
	CHECK( e1.getValue() == enums::Membrane::bongos )
}
TEST( getValue10 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::timbales );
	CHECK( e1.getValue() == enums::Membrane::timbales )
}
TEST( getValue11 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::tomtom );
	CHECK( e1.getValue() == enums::Membrane::tomtom )
}


/* getValueInt returns the index of the enum value */
TEST( getValueInt0 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::bassDrum );
	int expected = 0;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt1 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::bassDrumOnSide );
	int expected = 1;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt2 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::bongos );
	int expected = 2;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt3 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::congaDrum );
	int expected = 3;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt4 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::gobletDrum );
	int expected = 4;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt5 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::militaryDrum );
	int expected = 5;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt6 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::snareDrum );
	int expected = 6;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt7 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::snareDrumSnaresOff );
	int expected = 7;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt8 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::tambourine );
	int expected = 8;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt9 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::tenorDrum );
	int expected = 9;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt10 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::timbales );
	int expected = 10;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}
TEST( getValueInt11 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::tomtom );
	int expected = 11;
	int actual = e1.getValueInt();
	CHECK_EQUAL( expected, actual )
}


/* getCppEnumSymbolAsString returns the enum's C++ string symbol */
TEST( getCppEnumSymbolAsString0 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::bassDrum );
	string expected = "bassDrum";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString1 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::bassDrumOnSide );
	string expected = "bassDrumOnSide";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString2 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::bongos );
	string expected = "bongos";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString3 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::congaDrum );
	string expected = "congaDrum";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString4 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::gobletDrum );
	string expected = "gobletDrum";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString5 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::militaryDrum );
	string expected = "militaryDrum";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString6 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::snareDrum );
	string expected = "snareDrum";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString7 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::snareDrumSnaresOff );
	string expected = "snareDrumSnaresOff";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString8 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::tambourine );
	string expected = "tambourine";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString9 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::tenorDrum );
	string expected = "tenorDrum";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString10 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::timbales );
	string expected = "timbales";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( getCppEnumSymbolAsString11 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::tomtom );
	string expected = "tomtom";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}


/* toString returns the enum's MusicXml string symbol */
TEST( toString0 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::bassDrum );
	string expected = "bass drum";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString1 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::bassDrumOnSide );
	string expected = "bass drum on side";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString2 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::bongos );
	string expected = "bongos";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString3 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::congaDrum );
	string expected = "conga drum";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString4 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::gobletDrum );
	string expected = "goblet drum";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString5 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::militaryDrum );
	string expected = "military drum";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString6 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::snareDrum );
	string expected = "snare drum";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString7 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::snareDrumSnaresOff );
	string expected = "snare drum snares off";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString8 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::tambourine );
	string expected = "tambourine";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString9 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::tenorDrum );
	string expected = "tenor drum";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString10 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::timbales );
	string expected = "timbales";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}
TEST( toString11 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::tomtom );
	string expected = "tomtom";
	string actual = e1.toString();
	CHECK_EQUAL( expected, actual )
}


/* setValue(enum) changes the internal value */
TEST( setValue0 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::bassDrumOnSide );
	e1.setValue( enums::Membrane::bassDrum );
	CHECK( e1.getValue() == enums::Membrane::bassDrum )
}
TEST( setValue1 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::bongos );
	e1.setValue( enums::Membrane::bassDrumOnSide );
	CHECK( e1.getValue() == enums::Membrane::bassDrumOnSide )
}
TEST( setValue2 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::congaDrum );
	e1.setValue( enums::Membrane::bongos );
	CHECK( e1.getValue() == enums::Membrane::bongos )
}
TEST( setValue10 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::tomtom );
	e1.setValue( enums::Membrane::timbales );
	CHECK( e1.getValue() == enums::Membrane::timbales )
}
TEST( setValue11 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::bassDrum );
	e1.setValue( enums::Membrane::tomtom );
	CHECK( e1.getValue() == enums::Membrane::tomtom )
}


/* setValueInt(int) takes the index, sets internal value 
   returns true/false to indicate success/failure */
TEST( setValueIntNEG1 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::bassDrumOnSide );
	CHECK( ! e1.setValueInt( -1 ) )
	CHECK( e1.getValue() == enums::Membrane::bassDrumOnSide )
}
TEST( setValueInt0 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::bongos );
	CHECK( e1.setValueInt( 1 ) )
	CHECK( e1.getValue() == enums::Membrane::bassDrumOnSide )
}
TEST( setValueInt1 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::congaDrum );
	CHECK( e1.setValueInt( 2 ) )
	CHECK( e1.getValue() == enums::Membrane::bongos )
}
TEST( setValueInt2 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::gobletDrum );
	CHECK( e1.setValueInt( 3 ) )
	CHECK( e1.getValue() == enums::Membrane::congaDrum )
}
TEST( setValueInt10 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::bassDrum );
	CHECK( e1.setValueInt( 11 ) )
	CHECK( e1.getValue() == enums::Membrane::tomtom )
}
TEST( setValueInt11 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::bassDrumOnSide );
	CHECK( e1.setValueInt( 0 ) )
	CHECK( e1.getValue() == enums::Membrane::bassDrum )
}
TEST( setValueInt12 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::bongos );
	CHECK( ! e1.setValueInt( 12 ) )
	CHECK( e1.getValue() == enums::Membrane::bongos )
}


/* fromString takes the MusicXML symbol, sets value
   returns true/false to indicate success/failure */
TEST( fromStringNEG1 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::bassDrumOnSide );
	CHECK( ! e1.fromString( "crazyErrantValue-1" ) )
	CHECK( e1.getValue() == enums::Membrane::bassDrumOnSide )
}
TEST( fromString0 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::bongos );
	CHECK( e1.fromString( "bass drum on side" ) )
	CHECK( e1.getValue() == enums::Membrane::bassDrumOnSide )
}
TEST( fromString1 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::congaDrum );
	CHECK( e1.fromString( "bongos" ) )
	CHECK( e1.getValue() == enums::Membrane::bongos )
}
TEST( fromString2 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::gobletDrum );
	CHECK( e1.fromString( "conga drum" ) )
	CHECK( e1.getValue() == enums::Membrane::congaDrum )
}
TEST( fromString3 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::militaryDrum );
	CHECK( e1.fromString( "goblet drum" ) )
	CHECK( e1.getValue() == enums::Membrane::gobletDrum )
}
TEST( fromString4 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::snareDrum );
	CHECK( e1.fromString( "military drum" ) )
	CHECK( e1.getValue() == enums::Membrane::militaryDrum )
}
TEST( fromString5 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::snareDrumSnaresOff );
	CHECK( e1.fromString( "snare drum" ) )
	CHECK( e1.getValue() == enums::Membrane::snareDrum )
}
TEST( fromString6 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::tambourine );
	CHECK( e1.fromString( "snare drum snares off" ) )
	CHECK( e1.getValue() == enums::Membrane::snareDrumSnaresOff )
}
TEST( fromString7 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::tenorDrum );
	CHECK( e1.fromString( "tambourine" ) )
	CHECK( e1.getValue() == enums::Membrane::tambourine )
}
TEST( fromString8 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::timbales );
	CHECK( e1.fromString( "tenor drum" ) )
	CHECK( e1.getValue() == enums::Membrane::tenorDrum )
}
TEST( fromString9 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::tomtom );
	CHECK( e1.fromString( "timbales" ) )
	CHECK( e1.getValue() == enums::Membrane::timbales )
}
TEST( fromString10 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::bassDrum );
	CHECK( e1.fromString( "tomtom" ) )
	CHECK( e1.getValue() == enums::Membrane::tomtom )
}
TEST( fromString11 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::bassDrumOnSide );
	CHECK( e1.fromString( "bass drum" ) )
	CHECK( e1.getValue() == enums::Membrane::bassDrum )
}
TEST( fromString12 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::bongos );
	CHECK( ! e1.fromString( "crazyErrantValue12" ) )
	CHECK( e1.getValue() == enums::Membrane::bongos )
}


/* getSize returns the count of possible enum values */
TEST( getSize0 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::bassDrum );
	int expected = 12;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize1 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::bassDrumOnSide );
	int expected = 12;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}
TEST( getSize11 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::tomtom );
	int expected = 12;
	int actual = e1.getSize();
	CHECK_EQUAL( expected, actual )
}


/* getXmlTypeName returns the typename from musicxml.xsd */
TEST( getXmlTypeName0 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::bassDrum );
	string expected = "membrane";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName1 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::bassDrumOnSide );
	string expected = "membrane";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}
TEST( getXmlTypeName11 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::tomtom );
	string expected = "membrane";
	string actual = e1.getXmlTypeName();
	CHECK_EQUAL( expected, actual )
}


/* getClassName returns the name of the C++ class */
TEST( getClassName0 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::bassDrum );
	string expected = "MxEnumMembrane";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName1 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::bassDrumOnSide );
	string expected = "MxEnumMembrane";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}
TEST( getClassName11 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::tomtom );
	string expected = "MxEnumMembrane";
	string actual = e1.getClassName();
	CHECK_EQUAL( expected, actual )
}


/* getDocumentation returns the name of the C++ class */
TEST( getDocumentation0 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::bassDrum );
	string expected = "The membrane type represents pictograms for membrane percussion instruments. The goblet drum value is in addition to Stone's list.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation1 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::bassDrumOnSide );
	string expected = "The membrane type represents pictograms for membrane percussion instruments. The goblet drum value is in addition to Stone's list.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}
TEST( getDocumentation11 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::tomtom );
	string expected = "The membrane type represents pictograms for membrane percussion instruments. The goblet drum value is in addition to Stone's list.";
	string actual = e1.getDocumentation();
	CHECK_EQUAL( expected, actual )
}


/* stream stream the enum's MusicXml string symbol */
TEST( stream0 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::bassDrum );
	stringstream ss;
	e1.stream( ss );
	string expected = "bass drum";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "bass drum";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream1 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::bassDrumOnSide );
	stringstream ss;
	e1.stream( ss );
	string expected = "bass drum on side";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "bass drum on side";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( stream11 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::tomtom );
	stringstream ss;
	e1.stream( ss );
	string expected = "tomtom";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( e1.stream( ss2 ) ).rdbuf();
	expected = "tomtom";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* streaming operator streams the enum's MusicXml string symbol */
TEST( streamingOperator0 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::bassDrum );
	stringstream ss;
	ss << e1;
	string expected = "bass drum";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "bass drum";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator1 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::bassDrumOnSide );
	stringstream ss;
	ss << e1;
	string expected = "bass drum on side";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "bass drum on side";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}
TEST( streamingOperator11 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::tomtom );
	stringstream ss;
	ss << e1;
	string expected = "tomtom";
	string actual = ss.str();
	CHECK_EQUAL( expected, actual )
	stringstream ss2;
	stringstream ss3;
	ss3 << ( ss2 << e1 ).rdbuf();
	expected = "tomtom";
	actual = ss3.str();
	CHECK_EQUAL( expected, actual )
}


/* equality operators */
TEST( equalsEquals_true_0equals0 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::bassDrum );
	MxEnumMembrane e2( enums::Membrane::bassDrum );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals1 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::bassDrumOnSide );
	MxEnumMembrane e2( enums::Membrane::bassDrum );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_0equals11 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::tomtom );
	MxEnumMembrane e2( enums::Membrane::bassDrum );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals0 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::bassDrum );
	MxEnumMembrane e2( enums::Membrane::bassDrumOnSide );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_1equals1 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::bassDrumOnSide );
	MxEnumMembrane e2( enums::Membrane::bassDrumOnSide );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_1equals11 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::tomtom );
	MxEnumMembrane e2( enums::Membrane::bassDrumOnSide );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_11equals0 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::bassDrum );
	MxEnumMembrane e2( enums::Membrane::tomtom );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_false_11equals1 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::bassDrumOnSide );
	MxEnumMembrane e2( enums::Membrane::tomtom );
	bool expected = false;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( equalsEquals_true_11equals11 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::tomtom );
	MxEnumMembrane e2( enums::Membrane::tomtom );
	bool expected = true;
	bool actual = ( e1 == e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_0equals0 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::bassDrum );
	MxEnumMembrane e2( enums::Membrane::bassDrum );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals1 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::bassDrumOnSide );
	MxEnumMembrane e2( enums::Membrane::bassDrum );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_0equals11 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::tomtom );
	MxEnumMembrane e2( enums::Membrane::bassDrum );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals0 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::bassDrum );
	MxEnumMembrane e2( enums::Membrane::bassDrumOnSide );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_1equals1 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::bassDrumOnSide );
	MxEnumMembrane e2( enums::Membrane::bassDrumOnSide );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_1equals11 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::tomtom );
	MxEnumMembrane e2( enums::Membrane::bassDrumOnSide );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_11equals0 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::bassDrum );
	MxEnumMembrane e2( enums::Membrane::tomtom );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_true_11equals1 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::bassDrumOnSide );
	MxEnumMembrane e2( enums::Membrane::tomtom );
	bool expected = true;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( notEquals_false_11equals11 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::tomtom );
	MxEnumMembrane e2( enums::Membrane::tomtom );
	bool expected = false;
	bool actual = ( e1 != e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* comparison operators compare the result of getValueInt */
TEST( lessThanOrEqual_true_0islessthanoreq0 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::bassDrum );
	MxEnumMembrane e2( enums::Membrane::bassDrum );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_1islessthanoreq0 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::bassDrumOnSide );
	MxEnumMembrane e2( enums::Membrane::bassDrum );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_11islessthanoreq0 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::tomtom );
	MxEnumMembrane e2( enums::Membrane::bassDrum );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq1 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::bassDrum );
	MxEnumMembrane e2( enums::Membrane::bassDrumOnSide );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq1 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::bassDrumOnSide );
	MxEnumMembrane e2( enums::Membrane::bassDrumOnSide );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_false_11islessthanoreq1 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::tomtom );
	MxEnumMembrane e2( enums::Membrane::bassDrumOnSide );
	bool expected = false;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_0islessthanoreq11 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::bassDrum );
	MxEnumMembrane e2( enums::Membrane::tomtom );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_1islessthanoreq11 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::bassDrumOnSide );
	MxEnumMembrane e2( enums::Membrane::tomtom );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThanOrEqual_true_11islessthanoreq11 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::tomtom );
	MxEnumMembrane e2( enums::Membrane::tomtom );
	bool expected = true;
	bool actual = ( e1 <= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_0isgreaterthanoreq0 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::bassDrum );
	MxEnumMembrane e2( enums::Membrane::bassDrum );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq0 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::bassDrumOnSide );
	MxEnumMembrane e2( enums::Membrane::bassDrum );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_11isgreaterthanoreq0 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::tomtom );
	MxEnumMembrane e2( enums::Membrane::bassDrum );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq1 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::bassDrum );
	MxEnumMembrane e2( enums::Membrane::bassDrumOnSide );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthanoreq1 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::bassDrumOnSide );
	MxEnumMembrane e2( enums::Membrane::bassDrumOnSide );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_11isgreaterthanoreq1 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::tomtom );
	MxEnumMembrane e2( enums::Membrane::bassDrumOnSide );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthanoreq11 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::bassDrum );
	MxEnumMembrane e2( enums::Membrane::tomtom );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthanoreq11 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::bassDrumOnSide );
	MxEnumMembrane e2( enums::Membrane::tomtom );
	bool expected = false;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_11isgreaterthanoreq11 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::tomtom );
	MxEnumMembrane e2( enums::Membrane::tomtom );
	bool expected = true;
	bool actual = ( e1 >= e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_0islessthan0 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::bassDrum );
	MxEnumMembrane e2( enums::Membrane::bassDrum );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan0 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::bassDrumOnSide );
	MxEnumMembrane e2( enums::Membrane::bassDrum );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_11islessthan0 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::tomtom );
	MxEnumMembrane e2( enums::Membrane::bassDrum );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan1 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::bassDrum );
	MxEnumMembrane e2( enums::Membrane::bassDrumOnSide );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_1islessthan1 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::bassDrumOnSide );
	MxEnumMembrane e2( enums::Membrane::bassDrumOnSide );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_11islessthan1 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::tomtom );
	MxEnumMembrane e2( enums::Membrane::bassDrumOnSide );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_0islessthan11 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::bassDrum );
	MxEnumMembrane e2( enums::Membrane::tomtom );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_true_1islessthan11 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::bassDrumOnSide );
	MxEnumMembrane e2( enums::Membrane::tomtom );
	bool expected = true;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( lessThan_false_11islessthan11 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::tomtom );
	MxEnumMembrane e2( enums::Membrane::tomtom );
	bool expected = false;
	bool actual = ( e1 < e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan0 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::bassDrum );
	MxEnumMembrane e2( enums::Membrane::bassDrum );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_1isgreaterthan0 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::bassDrumOnSide );
	MxEnumMembrane e2( enums::Membrane::bassDrum );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_11isgreaterthan0 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::tomtom );
	MxEnumMembrane e2( enums::Membrane::bassDrum );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan1 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::bassDrum );
	MxEnumMembrane e2( enums::Membrane::bassDrumOnSide );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan1 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::bassDrumOnSide );
	MxEnumMembrane e2( enums::Membrane::bassDrumOnSide );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_true_11isgreaterthan1 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::tomtom );
	MxEnumMembrane e2( enums::Membrane::bassDrumOnSide );
	bool expected = true;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_0isgreaterthan11 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::bassDrum );
	MxEnumMembrane e2( enums::Membrane::tomtom );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_1isgreaterthan11 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::bassDrumOnSide );
	MxEnumMembrane e2( enums::Membrane::tomtom );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}
TEST( greaterThan_false_11isgreaterthan11 , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::tomtom );
	MxEnumMembrane e2( enums::Membrane::tomtom );
	bool expected = false;
	bool actual = ( e1 > e2 ); 
	CHECK_EQUAL( expected, actual )
}


/* increment and decrement operators cycle through values
    wrapping around to begining/end */
TEST( incrementPre_start0_11times , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::bassDrum );
	MxEnumMembrane e2( enums::Membrane::bassDrum );
	for( int i = 0; i < 11; ++i )
	{
		e2 = ++e1;
	}
	string expected = "tomtom";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "tomtom";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_11times , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::bassDrumOnSide );
	MxEnumMembrane e2( enums::Membrane::bassDrumOnSide );
	for( int i = 0; i < 11; ++i )
	{
		e2 = ++e1;
	}
	string expected = "bassDrum";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "bassDrum";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start11_11times , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::tomtom );
	MxEnumMembrane e2( enums::Membrane::tomtom );
	for( int i = 0; i < 11; ++i )
	{
		e2 = ++e1;
	}
	string expected = "timbales";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "timbales";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start0_12times , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::bassDrum );
	MxEnumMembrane e2( enums::Membrane::bassDrum );
	for( int i = 0; i < 12; ++i )
	{
		e2 = ++e1;
	}
	string expected = "bassDrum";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "bassDrum";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start1_12times , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::bassDrumOnSide );
	MxEnumMembrane e2( enums::Membrane::bassDrumOnSide );
	for( int i = 0; i < 12; ++i )
	{
		e2 = ++e1;
	}
	string expected = "bassDrumOnSide";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "bassDrumOnSide";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPre_start11_12times , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::tomtom );
	MxEnumMembrane e2( enums::Membrane::tomtom );
	for( int i = 0; i < 12; ++i )
	{
		e2 = ++e1;
	}
	string expected = "tomtom";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "tomtom";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_11times , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::bassDrum );
	MxEnumMembrane e2( enums::Membrane::bassDrum );
	for( int i = 0; i < 11; ++i )
	{
		e2 = --e1;
	}
	string expected = "bassDrumOnSide";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "bassDrumOnSide";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_11times , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::bassDrumOnSide );
	MxEnumMembrane e2( enums::Membrane::bassDrumOnSide );
	for( int i = 0; i < 11; ++i )
	{
		e2 = --e1;
	}
	string expected = "bongos";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "bongos";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start11_11times , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::tomtom );
	MxEnumMembrane e2( enums::Membrane::tomtom );
	for( int i = 0; i < 11; ++i )
	{
		e2 = --e1;
	}
	string expected = "bassDrum";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "bassDrum";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start0_12times , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::bassDrum );
	MxEnumMembrane e2( enums::Membrane::bassDrum );
	for( int i = 0; i < 12; ++i )
	{
		e2 = --e1;
	}
	string expected = "bassDrum";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "bassDrum";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start1_12times , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::bassDrumOnSide );
	MxEnumMembrane e2( enums::Membrane::bassDrumOnSide );
	for( int i = 0; i < 12; ++i )
	{
		e2 = --e1;
	}
	string expected = "bassDrumOnSide";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "bassDrumOnSide";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPre_start11_12times , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::tomtom );
	MxEnumMembrane e2( enums::Membrane::tomtom );
	for( int i = 0; i < 12; ++i )
	{
		e2 = --e1;
	}
	string expected = "tomtom";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "tomtom";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_11times , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::bassDrum );
	MxEnumMembrane e2( enums::Membrane::bassDrum );
	for( int i = 0; i < 11; ++i )
	{
		e2 = e1++;
	}
	string expected = "tomtom";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "timbales";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_11times , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::bassDrumOnSide );
	MxEnumMembrane e2( enums::Membrane::bassDrumOnSide );
	for( int i = 0; i < 11; ++i )
	{
		e2 = e1++;
	}
	string expected = "bassDrum";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "tomtom";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start11_11times , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::tomtom );
	MxEnumMembrane e2( enums::Membrane::tomtom );
	for( int i = 0; i < 11; ++i )
	{
		e2 = e1++;
	}
	string expected = "timbales";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "tenorDrum";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start0_12times , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::bassDrum );
	MxEnumMembrane e2( enums::Membrane::bassDrum );
	for( int i = 0; i < 12; ++i )
	{
		e2 = e1++;
	}
	string expected = "bassDrum";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "tomtom";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start1_12times , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::bassDrumOnSide );
	MxEnumMembrane e2( enums::Membrane::bassDrumOnSide );
	for( int i = 0; i < 12; ++i )
	{
		e2 = e1++;
	}
	string expected = "bassDrumOnSide";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "bassDrum";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( incrementPost_start11_12times , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::tomtom );
	MxEnumMembrane e2( enums::Membrane::tomtom );
	for( int i = 0; i < 12; ++i )
	{
		e2 = e1++;
	}
	string expected = "tomtom";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "timbales";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_11times , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::bassDrum );
	MxEnumMembrane e2( enums::Membrane::bassDrum );
	for( int i = 0; i < 11; ++i )
	{
		e2 = e1--;
	}
	string expected = "bassDrumOnSide";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "bongos";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_11times , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::bassDrumOnSide );
	MxEnumMembrane e2( enums::Membrane::bassDrumOnSide );
	for( int i = 0; i < 11; ++i )
	{
		e2 = e1--;
	}
	string expected = "bongos";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "congaDrum";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start11_11times , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::tomtom );
	MxEnumMembrane e2( enums::Membrane::tomtom );
	for( int i = 0; i < 11; ++i )
	{
		e2 = e1--;
	}
	string expected = "bassDrum";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "bassDrumOnSide";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start0_12times , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::bassDrum );
	MxEnumMembrane e2( enums::Membrane::bassDrum );
	for( int i = 0; i < 12; ++i )
	{
		e2 = e1--;
	}
	string expected = "bassDrum";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "bassDrumOnSide";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start1_12times , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::bassDrumOnSide );
	MxEnumMembrane e2( enums::Membrane::bassDrumOnSide );
	for( int i = 0; i < 12; ++i )
	{
		e2 = e1--;
	}
	string expected = "bassDrumOnSide";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "bongos";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}
TEST( decrementPost_start11_12times , MxEnumMembrane )
{
	MxEnumMembrane e1( enums::Membrane::tomtom );
	MxEnumMembrane e2( enums::Membrane::tomtom );
	for( int i = 0; i < 12; ++i )
	{
		e2 = e1--;
	}
	string expected = "tomtom";
	string actual = e1.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
	expected = "bassDrum";
	actual = e2.getCppEnumSymbolAsString();
	CHECK_EQUAL( expected, actual )
}

