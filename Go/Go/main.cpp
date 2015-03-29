
#include <iostream>
#include "goSetIsImplemented.h"
#include "goListNonImplementedElements.h"
#include "goCreateElementStub.h"

int main(int argc, const char * argv[])
{
    // go::goSetIsImplemented( std::vector<int>{ 5166, 5171, 5410, 5413 } );
    //go::goListNonImplementedElements();
    go::goCreateElementStubs( 5410 );
    return 0;
}