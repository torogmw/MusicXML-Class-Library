
#include <iostream>
#include "executeNonQuery.h"

int main(int argc, const char * argv[])
{
    db::executeNonQuery( "SELECT 1" );
    return 0;
}

