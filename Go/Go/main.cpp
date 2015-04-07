
#include <iostream>
#include "goSetIsImplemented.h"
#include "goListNonImplementedElements.h"
#include "goCreateElementStub.h"

int main(int argc, const char * argv[])
{
    // go::goSetIsImplemented( std::vector<int>{ 5947 } );
    // go::goListNonImplementedElements();
    go::goCreateElementStubs( 5947 );
    return 0;
}