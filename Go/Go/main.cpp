
#include <iostream>
#include "goSetIsImplemented.h"
#include "goListNonImplementedElements.h"
#include "goCreateElementStub.h"

int main(int argc, const char * argv[])
{
    // go::goSetIsImplemented( std::vector<int>{ 6403, 6430 } );
    // go::goListNonImplementedElements();
    go::goCreateElementStubs( 6430 );
    return 0;
}