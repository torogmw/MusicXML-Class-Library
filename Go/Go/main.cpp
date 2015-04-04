
#include <iostream>
#include "goSetIsImplemented.h"
#include "goListNonImplementedElements.h"
#include "goCreateElementStub.h"

int main(int argc, const char * argv[])
{
    // go::goSetIsImplemented( std::vector<int>{ 6337 } );
    // go::goListNonImplementedElements();
    go::goCreateElementStubs( 6337 );
    return 0;
}