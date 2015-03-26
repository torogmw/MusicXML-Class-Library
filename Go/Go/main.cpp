
#include <iostream>
#include "goSetIsImplemented.h"
#include "goListNonImplementedElements.h"
#include "goCreateElementStub.h"

int main(int argc, const char * argv[])
{
    // go::goSetIsImplemented( std::vector<int>{ 3857 } );
    // go::goListNonImplementedElements();
    go::goCreateElementStubs( 3406 );
    return 0;
}