#include "TestHarness.h"
#include "TraditionalKey.h"

using namespace mx;
using namespace types;
using namespace e;
using namespace std;

TEST( Test01, TraditionalKey )
{
    TraditionalKey object;
    object.setFifths( FifthsValue( 5 ) );
    object.setHasCancel( true );
    object.setCancel( Cancel( FifthsValue ( 2 ) ) );
    object.setHasMode( true );
    object.setMode( Mode( ModeValue( ModeEnum::dorian ) ) );
    bool isOneLineOnly = false;
    object.streamContents( std::cout, 2, isOneLineOnly );
    std::cout  << std::endl;
}