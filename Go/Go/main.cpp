
#include <iostream>
#include "goSetIsImplemented.h"
#include "goListNonImplementedElements.h"
#include "goCreateElementStub.h"

int main(int argc, const char * argv[])
{
    // go::goSetIsImplemented( std::vector<int>{ 6403 } );
    // go::goListNonImplementedElements();
    go::goCreateElementStubs( 6403 );
    return 0;
}