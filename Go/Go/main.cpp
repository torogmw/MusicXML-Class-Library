
#include <iostream>
#include "goSetIsImplemented.h"
#include "goListNonImplementedElements.h"
#include "goCreateElementStub.h"

int main(int argc, const char * argv[])
{
    // go::goSetIsImplemented( std::vector<int>{ 4920, 5704, 5710 } );
    // go::goListNonImplementedElements();
    go::goCreateElementStubs( 5710 );
    return 0;
}