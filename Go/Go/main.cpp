
#include <iostream>
#include "goSetIsImplemented.h"
#include "goListNonImplementedElements.h"
#include "goCreateElementStub.h"

int main(int argc, const char * argv[])
{
    go::goSetIsImplemented( std::vector<int>{ 5947, 6322, 5921, 6375, 6383 } );
    go::goListNonImplementedElements();
    // go::goCreateElementStubs( 6383 );
    return 0;
}