
#include <iostream>
#include "goSetIsImplemented.h"
#include "goListNonImplementedElements.h"
#include "goCreateElementStub.h"

int main(int argc, const char * argv[])
{
    go::goSetIsImplemented( std::vector<int>{ 6296, 6310, 6313, 6325, 6334 } );
    go::goListNonImplementedElements();
    // go::goCreateElementStubs( 6334 );
    return 0;
}