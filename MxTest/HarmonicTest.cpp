
#include "TestHarness.h"
#include "MxTestHelper.h"
#include "HarmonicTest.h"
#include "HarmonicTypeChoiceTest.h"
#include "HarmonicInfoChoiceTest.h"

using namespace mx::e;
using namespace mx::t;
using namespace std;
using namespace MxTestHelpers;
#include "MxTestCompileControl.h"
#ifdef RUN_PHASE4_TESTS

TEST( Test01, Harmonic )
{
    variant v = variant::one;
	HarmonicPtr object = tgenHarmonic( v );
	stringstream expected;
	tgenHarmonicExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
	object->toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( ! object->hasAttributes() )
	CHECK( ! object->hasContents() )
}
TEST( Test02, Harmonic )
{
    variant v = variant::two;
	HarmonicPtr object = tgenHarmonic( v );
	stringstream expected;
	tgenHarmonicExpected( expected, 1, v );
	stringstream actual;
	// object->toStream( std::cout, 1 );
	object->toStream( actual, 1 );
	CHECK_EQUAL( expected.str(), actual.str() )
	CHECK( object->hasAttributes() )
	CHECK( object->hasContents() )
}
TEST( Test03, Harmonic )
{
    variant v = variant::three;
	HarmonicPtr object = tgenHarmonic( v );
	stringstream expected;
	tgenHarmonicExpected( expected, 1, v );
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
    HarmonicPtr tgenHarmonic( variant v )
    {
        HarmonicPtr o = makeHarmonic();
        switch ( v )
        {
            case variant::one:
            {

            }
                break;
            case variant::two:
            {
                o->setHasHarmonicTypeChoice( true );
                o->setHarmonicTypeChoice( tgenHarmonicTypeChoice( v ) );
                o->setHasHarmonicInfoChoice( true );
                o->setHarmonicInfoChoice( tgenHarmonicInfoChoice( v ) );
                o->getAttributes()->hasPrintObject = true;
                o->getAttributes()->printObject = YesNo::no;
                o->getAttributes()->hasFontWeight = true;
                o->getAttributes()->fontWeight = FontWeight::bold;
            }
                break;
            case variant::three:
            {
                o->setHasHarmonicTypeChoice( true );
                o->setHarmonicTypeChoice( tgenHarmonicTypeChoice( v ) );
                o->setHasHarmonicInfoChoice( true );
                o->setHarmonicInfoChoice( tgenHarmonicInfoChoice( v ) );
            }
                break;
            default:
                break;
        }
        return o;
    }
    void tgenHarmonicExpected( std::ostream& os, int i, variant v )
    {
        
        switch ( v )
        {
            case variant::one:
            {

                streamLine( os, i, R"(<harmonic/>)", false );
            }
                break;
            case variant::two:
            {
                streamLine( os, i, R"(<harmonic print-object="no" font-weight="bold">)" );
                tgenHarmonicTypeChoiceExpected( os, i+1, v );
                os << std::endl;
                tgenHarmonicInfoChoiceExpected( os, i+1, v );
                os << std::endl;
                streamLine( os, i, R"(</harmonic>)", false );
            }
                break;
            case variant::three:
            {
                streamLine( os, i, R"(<harmonic>)" );
                tgenHarmonicTypeChoiceExpected( os, i+1, v );
                os << std::endl;
                tgenHarmonicInfoChoiceExpected( os, i+1, v );
                os << std::endl;
                streamLine( os, i, R"(</harmonic>)", false );
            }
                break;
            default:
                break;
        }
    }
}
