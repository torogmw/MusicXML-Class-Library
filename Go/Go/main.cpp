
#include <iostream>
#include "goSetIsImplemented.h"
#include "goListNonImplementedElements.h"
#include "goCreateElementStub.h"

int main(int argc, const char * argv[])
{
    // go::goSetIsImplemented( std::vector<int>{ 3926, 3930, 5050, 4079, 4096 } );
    // go::goListNonImplementedElements();
    go::goCreateElementStubs( 3314 );
    return 0;
}