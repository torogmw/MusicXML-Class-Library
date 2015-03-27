
#include <iostream>
#include "goSetIsImplemented.h"
#include "goListNonImplementedElements.h"
#include "goCreateElementStub.h"

int main(int argc, const char * argv[])
{
    // go::goSetIsImplemented( std::vector<int>{ 5028, 4935 } );
    // go::goListNonImplementedElements();
    go::goCreateElementStubs( 4935 );
    return 0;
}