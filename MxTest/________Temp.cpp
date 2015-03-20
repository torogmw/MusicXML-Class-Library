#include "TestHarness.h"
#include "TraditionalKey.h"
#include "NonTraditionalKey.h"
#include "KeyChoice.h"
#include "Key.h"

using namespace mx;
using namespace types;
using namespace e;
using namespace std;

TEST( Test01, TraditionalKey )
{
    Key object;
    object.toStream( std::cout, 1 );
    std::cout  << std::endl;
}