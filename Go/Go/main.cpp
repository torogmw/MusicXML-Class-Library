
#include <iostream>
#include "goSetIsImplemented.h"
#include "goListNonImplementedElements.h"
#include "goCreateElementStub.h"

int main(int argc, const char * argv[])
{
    // go::goSetIsImplemented( std::vector<int>{ 4232, 4285, 4297, 4389, 4608, 5016 } );
    // go::goListNonImplementedElements();
    go::goCreateElementStubs( 5016 );
    return 0;
}