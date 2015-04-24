
#include "TestHarness.h"
#include "MxTestHelper.h"
#include "DegreeTest.h"
#include "MidiInstrumentTest.h"
/* #include "MidiDeviceTest.cpp" */


using namespace mx::e;
using namespace mx::t;
using namespace std;
using namespace MxTestHelpers;
#include "MxTestCompileControl.h"
#ifdef RUN_PHASE4_TESTS

TEST( Test01, Degree )
{
    variant v = variant::one;
	DegreePtr object = tgenDegree( v );
	stringstream expected;
	tgenDegreeExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
	object->toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object->hasAttributes() )
	CHECK( object->hasContents() )
}
TEST( Test02, Degree )
{
    variant v = variant::two;
	DegreePtr object = tgenDegree( v );
	stringstream expected;
	tgenDegreeExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
	object->toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object->hasAttributes() )
	CHECK( object->hasContents() )
}
TEST( Test03, Degree )
{
    variant v = variant::three;
	DegreePtr object = tgenDegree( v );
	stringstream expected;
	tgenDegreeExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
	object->toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( object->hasAttributes() )
	CHECK( object->hasContents() )
}
#endif
namespace MxTestHelpers
{
    DegreePtr tgenDegree( variant v )
    {
        DegreePtr o = makeDegree();
        switch ( v )
        {
            case variant::one:
            {
                
            }
                break;
            case variant::two:
            {
                o->getDegreeAlter()->setValue( Semitones( 1.01 ) );
                o->getDegreeType()->setValue( DegreeTypeValue::subtract );
                o->getDegreeValue()->setValue( PositiveInteger( 9 ) );
            }
                break;
            case variant::three:
            {
                o->getAttributes()->hasPrintObject = true;
                o->getAttributes()->printObject = YesNo::no;
                o->getDegreeAlter()->setValue( Semitones( -2.01 ) );
                o->getDegreeType()->setValue( DegreeTypeValue::alter );
                o->getDegreeValue()->setValue( PositiveInteger( 7 ) );
            }
                break;
            default:
                break;
        }
        return o;
    }
    void tgenDegreeExpected( std::ostream& os, int i, variant v )
    {
        
        switch ( v )
        {
            case variant::one:
            {
                streamLine( os, i, R"(<degree>)" );
                streamLine( os, i+1, R"(<degree-value>1</degree-value>)" );
                streamLine( os, i+1, R"(<degree-alter>0</degree-alter>)" );
                streamLine( os, i+1, R"(<degree-type>add</degree-type>)" );
                streamLine( os, i, R"(</degree>)", false );
            }
                break;
            case variant::two:
            {
                streamLine( os, i, R"(<degree>)" );
                streamLine( os, i+1, R"(<degree-value>9</degree-value>)" );
                streamLine( os, i+1, R"(<degree-alter>1.01</degree-alter>)" );
                streamLine( os, i+1, R"(<degree-type>subtract</degree-type>)" );
                streamLine( os, i, R"(</degree>)", false );
            }
                break;
            case variant::three:
            {
                streamLine( os, i, R"(<degree print-object="no">)" );
                streamLine( os, i+1, R"(<degree-value>7</degree-value>)" );
                streamLine( os, i+1, R"(<degree-alter>-2.01</degree-alter>)" );
                streamLine( os, i+1, R"(<degree-type>alter</degree-type>)" );
                streamLine( os, i, R"(</degree>)", false );
            }
                break;
            default:
                break;
        }
    }
}