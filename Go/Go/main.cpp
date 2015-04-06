
#include <iostream>
#include "goSetIsImplemented.h"
#include "goListNonImplementedElements.h"
#include "goCreateElementStub.h"

int main(int argc, const char * argv[])
{
    go::goSetIsImplemented( std::vector<int>{ 4929, 5402, 5424, 5807, 5817, 5921, 5936, 3861 } );
    go::goListNonImplementedElements();
    // go::goCreateElementStubs( 5936 );
    return 0;
}