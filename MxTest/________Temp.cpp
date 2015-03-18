#include "TestHarness.h"
#include "TraditionalKey.h"

using namespace mx;
using namespace types;
using namespace e;
using namespace std;

TEST( Test01, TraditionalKey )
{
    TraditionalKey object;
    object.getFifths()->setValue( FifthsValue { 5 } );
    object.setCancel( std::make_shared<Cancel>( FifthsValue ( 2 ) ) );
    object.setMode( std::make_shared<Mode>( ModeValue( ModeEnum::dorian ) ) );
    bool isOneLineOnly = false;
    object.streamContents( std::cout, 2, isOneLineOnly );
    std::cout  << std::endl;
}