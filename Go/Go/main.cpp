
#include <iostream>
#include "goMsItemSimpleTypeDecimal.h"
#include <cmath>

double round( double value, unsigned int places )
{
    long double power = pow( 10, places );
    std::cout << power << std::endl;
    long double up = value * ( power );
    std::cout << up << std::endl;
    long double rounded = roundf( up );
    std::cout << rounded << std::endl;
    return rounded / power;
}

int main(int argc, const char * argv[])
{
    // go::goMsItemSimpleTypeDecimal();
    std::cout << round( 1423.049384, 20 ) << std::endl;
    return 0;
}