
#include <iostream>
#include "goSetIsImplemented.h"
#include "goListNonImplementedElements.h"
#include "goCreateElementStub.h"

int main(int argc, const char * argv[])
{
    // go::goSetIsImplemented( std::vector<int>{ 3926, 5959, 6191, 6206, 6210, 6233, 6237 } );
    // go::goListNonImplementedElements();
    go::goCreateElementStubs( 6237 );
    return 0;
}