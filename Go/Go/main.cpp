
#include <iostream>
#include "goSetIsImplemented.h"
#include "goListNonImplementedElements.h"
#include "goCreateElementStub.h"

int main(int argc, const char * argv[])
{
    // go::goSetIsImplemented( std::vector<int>{ 4929, 5402 } );
    // go::goListNonImplementedElements();
    go::goCreateElementStubs( 5402 );
    return 0;
}