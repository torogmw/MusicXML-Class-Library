
#include <iostream>
#include "goSetIsImplemented.h"
#include "goListNonImplementedElements.h"
#include "goCreateElementStub.h"

int main(int argc, const char * argv[])
{
    // go::goSetIsImplemented( std::vector<int>{ 6418, 6440 } );
    // go::goListNonImplementedElements();
    go::goCreateElementStubs( 6418 );
    return 0;
}