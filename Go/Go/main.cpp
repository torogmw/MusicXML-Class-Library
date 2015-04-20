
#include <iostream>
#include "goSetIsImplemented.h"
#include "goListNonImplementedElements.h"
#include "goCreateElementStub.h"

int main(int argc, const char * argv[])
{
    go::goSetIsImplemented( std::vector<int>{ 4932, 6316, 6319, 6396 } );
    go::goListNonImplementedElements();
    // go::goCreateElementStubs( 6396 );
    return 0;
}