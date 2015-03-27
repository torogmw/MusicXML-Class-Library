
#include <iostream>
#include "goSetIsImplemented.h"
#include "goListNonImplementedElements.h"
#include "goCreateElementStub.h"

int main(int argc, const char * argv[])
{
    // go::goSetIsImplemented( std::vector<int>{ 3926, 3930, 5050 } );
    // go::goListNonImplementedElements();
    go::goCreateElementStubs( 3930 );
    return 0;
}