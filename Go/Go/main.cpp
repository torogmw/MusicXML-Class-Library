
#include <iostream>
#include "goSetIsImplemented.h"
#include "goListNonImplementedElements.h"
// #include "goCreateAttributesForOne.h"
#include "goCreateElementStub.h"

int main(int argc, const char * argv[])
{
    // go::goSetIsImplemented( std::vector<int>{ 2614 } );
    // go::goListNonImplementedElements();
    // go::goCreateAttributesForOne( 2614 );
    go::goCreateElementStubs( 2646 );
    return 0;
}