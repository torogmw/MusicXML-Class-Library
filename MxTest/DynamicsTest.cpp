#include "MxTestCompileControl.h"
#ifdef RUN_PHASE1_TESTS
#include "TestHarness.h"
#include "Elements.h"

using namespace mx::t;
using namespace mx::e;

TEST( Test01, Dynamics )
{
    Dynamics x( (DynamicsValue( DynamicsEnum::p )) );
    DynamicsAttributesPtr da = x.getAttributes();
    da->defaultX = TenthsValue( 66 );
    da->hasDefaultX = true;
    da->defaultY = TenthsValue( -68 );
    da->hasDefaultY = true;
    da->halign = LeftCenterRight::center;
    da->hasHalign = true;
    // x.toStream( std::cout, 0 );
    std::stringstream expected;
    expected << "<dynamics default-x=\"66\" default-y=\"-68\" halign=\"center\">" << std::endl;
    expected << INDENT << "<p/>" << std::endl;
    expected << "</dynamics>";
    std::stringstream actual;
    x.toStream( actual, 0 );
    CHECK_EQUAL( expected.str(), actual.str() )
}
TEST( Test02, Dynamics )
{
    Dynamics x( (DynamicsValue( "purple" )) );
    DynamicsAttributesPtr da = x.getAttributes();
    da->defaultX = TenthsValue( 66 );
    da->hasDefaultX = true;
    da->defaultY = TenthsValue( -68 );
    da->hasDefaultY = true;
    da->halign = LeftCenterRight::center;
    da->hasHalign = true;
    std::stringstream expected;
    expected << "<dynamics default-x=\"66\" default-y=\"-68\" halign=\"center\">" << std::endl;
    expected << INDENT << "<other-dynamics>purple</other-dynamics>" << std::endl;
    expected << "</dynamics>";
    std::stringstream actual;
    x.toStream( actual, 0 );
    CHECK_EQUAL( expected.str(), actual.str() )
}
#endif