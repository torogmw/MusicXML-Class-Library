
#include "TestHarness.h"
#include "MxTestHelper.h"
#include "DegreeTest.h"
#include "MidiInstrumentTest.h"
#include "MidiDeviceTest.cpp"


using namespace mx::e;
using namespace mx::types;
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
	CHECK( ! object->hasAttributes() )
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

            }
                break;
            case variant::three:
            {

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
                streamLine( os, i, R"(<bass>)" );
                streamLine( os, i+1, R"(<bass-step>A</bass-step>)" );
                streamLine( os, i, R"(</bass>)", false );
            }
                break;
            case variant::two:
            {
                streamLine( os, i, R"(<bass>)" );
                streamLine( os, i+1, R"(<bass-step>F</bass-step>)" );
                streamLine( os, i+1, R"(<bass-alter>-2</bass-alter>)" );
                streamLine( os, i, R"(</bass>)", false );
            }
                break;
            case variant::three:
            {
                streamLine( os, i, R"(<bass>)" );
                streamLine( os, i+1, R"(<bass-step>C</bass-step>)" );
                streamLine( os, i+1, R"(<bass-alter>1.1</bass-alter>)" );
                streamLine( os, i, R"(</bass>)", false );
            }
                break;
            default:
                break;
        }
    }
}