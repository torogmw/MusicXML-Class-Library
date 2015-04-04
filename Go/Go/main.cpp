
#include <iostream>
#include "goSetIsImplemented.h"
#include "goListNonImplementedElements.h"
#include "goCreateElementStub.h"

int main(int argc, const char * argv[])
{
    // go::goSetIsImplemented( std::vector<int>{ 6337, 6359, 6379 } );
    // go::goListNonImplementedElements();
    go::goCreateElementStubs( 6379 );
    return 0;
}