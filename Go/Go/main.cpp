
#include <iostream>
#include "goSetIsImplemented.h"
#include "goListNonImplementedElements.h"
#include "goCreateElementStub.h"

int main(int argc, const char * argv[])
{
    // go::goSetIsImplemented( std::vector<int>{ 3373 } );
    // go::goListNonImplementedElements();
    go::goCreateElementStubs( 3682 );
    return 0;
}