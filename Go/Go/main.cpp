
#include <iostream>
#include "goSetIsImplemented.h"
#include "goListNonImplementedElements.h"
#include "goCreateElementStub.h"

int main(int argc, const char * argv[])
{
    // go::goSetIsImplemented( std::vector<int>{ 3481, 3455 } );
    // go::goListNonImplementedElements();
    go::goCreateElementStubs( 3524 );
    return 0;
}