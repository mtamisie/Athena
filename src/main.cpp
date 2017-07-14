#include <iostream>
#include <stdlib.h>

// Local dependencies
#include "brainIF.hpp"
#include "hearingSystemIF.hpp"
#include "observer.hpp"
#include "soundSystemIF.hpp"



using namespace std;
int main()
{
    brainIF(true);
    hearingSystemIF(true);
    observer(true);
    soundSystemIF(true);


    return EXIT_SUCCESS;
}
