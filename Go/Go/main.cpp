
#include <iostream>
#include "goSetIsImplemented.h"
#include "goListNonImplementedElements.h"
#include "goCreateElementStub.h"

int main(int argc, const char * argv[])
{
    // go::goSetIsImplemented( std::vector<int>{ 5040, 6307, 6388 } );
    // go::goListNonImplementedElements();
    go::goCreateElementStubs( 6388 );
    return 0;
}