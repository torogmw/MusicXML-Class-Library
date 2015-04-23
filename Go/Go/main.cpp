
#include <iostream>
#include "goSetIsImplemented.h"
#include "goListNonImplementedElements.h"
#include "goCreateElementStub.h"

int main(int argc, const char * argv[])
{
    // go::goSetIsImplemented( std::vector<int>{ 6418, 6440, 6413, 6445 } );
    // go::goListNonImplementedElements();
    go::goCreateElementStubs( 6413 );
    return 0;
}