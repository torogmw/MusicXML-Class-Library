
#include <iostream>
#include "goSetIsImplemented.h"
#include "goListNonImplementedElements.h"
#include "goCreateElementStub.h"

int main(int argc, const char * argv[])
{
    //go::goSetIsImplemented( std::vector<int>{ 2653 } );
    //go::goListNonImplementedElements();
    go::goCreateElementStubs( 2681 );
    return 0;
}