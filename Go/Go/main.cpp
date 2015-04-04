
#include <iostream>
#include "goSetIsImplemented.h"
#include "goListNonImplementedElements.h"
#include "goCreateElementStub.h"

int main(int argc, const char * argv[])
{
    // go::goSetIsImplemented( std::vector<int>{ 4929 } );
    // go::goListNonImplementedElements();
    go::goCreateElementStubs( 4929 );
    return 0;
}