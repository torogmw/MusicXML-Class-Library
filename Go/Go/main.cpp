
#include <iostream>
#include "goSetIsImplemented.h"
#include "goListNonImplementedElements.h"
#include "goCreateElementStub.h"

int main(int argc, const char * argv[])
{
    // go::goSetIsImplemented( std::vector<int>{ 6296, 6310, 6313 } );
    // go::goListNonImplementedElements();
    go::goCreateElementStubs( 6313 );
    return 0;
}