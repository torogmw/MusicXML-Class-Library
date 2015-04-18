
#include <iostream>
#include "goSetIsImplemented.h"
#include "goListNonImplementedElements.h"
#include "goCreateElementStub.h"

int main(int argc, const char * argv[])
{
    // go::goSetIsImplemented( std::vector<int>{ 5349, 6328 } );
    // go::goListNonImplementedElements();
    go::goCreateElementStubs( 6328 );
    return 0;
}