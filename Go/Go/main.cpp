
#include <iostream>
#include "goSetIsImplemented.h"
#include "goListNonImplementedElements.h"
#include "goCreateElementStub.h"

int main(int argc, const char * argv[])
{
    // go::goSetIsImplemented( std::vector<int>{ 4232 } );
    // go::goListNonImplementedElements();
    go::goCreateElementStubs( 4285 );
    return 0;
}