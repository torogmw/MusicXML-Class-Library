#include "TestHarness.h"
#include "Elements.h"

using namespace mx::types;
using namespace mx::e;

TEST( Test01, Dynamics )
{
    Dynamics x( (DynamicsValue( DynamicsEnum::p )) );
    DynamicsAttributesPtr da = x.getAttributes();
    da->defaultX = Tenths( 66 );
    da->hasDefaultX = true;
    da->defaultY = Tenths( -68 );
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
    da->defaultX = Tenths( 66 );
    da->hasDefaultX = true;
    da->defaultY = Tenths( -68 );
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