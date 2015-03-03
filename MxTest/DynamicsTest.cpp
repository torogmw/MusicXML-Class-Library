#include "TestHarness.h"
#include "Elements.h"

using namespace mx::types;
using namespace mx::e;

TEST( Test01, Dynamics )
{
    DynamicsValue pp( DynamicsEnum::pp );
    Dynamics x( pp );
    AttributesPtr da = x.getAttributes();
    Tenths relativeX( 1.1 );
    da->relativeX = relativeX;
    da->hasRelativeX = true;
    x.stream( std::cout, 0 );
    std::cout << std::endl << std::endl;
}