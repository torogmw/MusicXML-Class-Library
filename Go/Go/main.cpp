
#include <iostream>
#include "goSetIsImplemented.h"
#include "goListNonImplementedElements.h"
#include "goCreateElementStub.h"

int main(int argc, const char * argv[])
{
    go::goSetIsImplemented( std::vector<int>{ 3910 } );
    go::goListNonImplementedElements();
    go::goCreateElementStubs( 3926 );
    return 0;
}