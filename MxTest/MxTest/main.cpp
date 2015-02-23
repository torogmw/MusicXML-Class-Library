#include "TestHarness.h"
#include <iostream>

int main()
{
	// random number generator used in some tests
	srand(::time_t(NULL));
    
    TestResult tr;
    TestRegistry::runAllTests(tr);
    
	/* don't do this with Xcode
     // force console screen to hold
     char ch;
     std::cin >> ch;
     */
    
    return 0;
}
