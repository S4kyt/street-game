#include <iostream>
#include <stdlib.h> //srand, rand
#include <time.h> // time

using uint = unsigned int;

//FIXME: Calling these functions again results in the random value not changing. "It is recommended to use C++11's random number generation facilities to replace rand()."
uint randomGen10()
{
    uint randomNumber10;

    // Initialize random seed:
    srand (time(NULL));

    // Generate number between 1 and 10:
    randomNumber10 = rand() % 10 + 1;
    return randomNumber10;
}

uint randomGen100()
{
    uint randomNumber100;

    srand (time(NULL));

    // Generate number between 1 and 100:
    randomNumber100 = rand() % 100 + 1;
    return randomNumber100;
}

