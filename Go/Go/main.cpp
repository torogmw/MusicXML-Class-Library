
#include <iostream>
#include "goSetIsImplemented.h"
#include "goListNonImplementedElements.h"
#include "goCreateElementStub.h"

int main(int argc, const char * argv[])
{
    go::goSetIsImplemented( std::vector<int>{ 3314, 6331 } );
    go::goListNonImplementedElements();
    go::goCreateElementStubs( 4232 );
    return 0;
}