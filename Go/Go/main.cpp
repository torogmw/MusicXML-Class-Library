
#include <iostream>
#include "goSetIsImplemented.h"
#include "goListNonImplementedElements.h"
#include "goCreateElementStub.h"

int main(int argc, const char * argv[])
{
    go::goSetIsImplemented( std::vector<int>{ 4232, 4285, 4297, 4389, 4608, 5016, 5028 } );
    go::goListNonImplementedElements();
    go::goCreateElementStubs( 5028 );
    return 0;
}