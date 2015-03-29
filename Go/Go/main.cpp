
#include <iostream>
#include "goSetIsImplemented.h"
#include "goListNonImplementedElements.h"
#include "goCreateElementStub.h"

int main(int argc, const char * argv[])
{
    // go::goSetIsImplemented( std::vector<int>{ 5166 } );
    //go::goListNonImplementedElements();
    go::goCreateElementStubs( 5166 );
    return 0;
}