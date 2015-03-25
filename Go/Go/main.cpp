
#include <iostream>
#include "goSetIsImplemented.h"
#include "goListNonImplementedElements.h"
#include "goCreateElementStub.h"

int main(int argc, const char * argv[])
{
    // go::goSetIsImplemented( std::vector<int>{ 3627, 3638 } );
    // go::goListNonImplementedElements();
    go::goCreateElementStubs( 3627 );
    return 0;
}