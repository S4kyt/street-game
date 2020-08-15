#include <iostream>
#include <algorithm> // count

#include "tests.h" // testFunction1()

void testFunction1()
{
    bool needsName = true;

    // 1. Enter name
    // 2. Count name length
    // 3. Check to see if length is correct.
    while (needsName == true)
    {
        std::string PlayerName;

        std::cout << "Enter a player name please" << std::endl;
        std::cin >> PlayerName;
        // std::getline(std::cin, PlayerName);

        int nameLength = 0;

        // Counts the amount of characters in the string, if it encounters a null it seizes to continue (aka null termination)
        // Prints out nameLength so I can limit the max nameLength
        for (int i = 0; PlayerName[i]!='\0'; i++)
        {
            nameLength++;
        }    
    }
}

// std::empty
// std::count
// std::getline - limiting string input

/*
// Checks to see if the entered playerName is correct and meets the requirements
    int lengthMax = 30;
    int lengthMin = 0;

    if (nameLength < lengthMin)
    {
        std::cout << "Please do enter a character name, otherwise you will be stuck here for a while. :)" << std::endl;
    }
    else if (nameLength != lengthMin || nameLength != lengthMax)
    {
        std::cout << "Your character name is: " << PlayerName << std::endl;
    }
    else (nameLength > lengthMax);
    {
        std::cout << "The name you entered is too long. Enter a shorter one." << std::endl;
    }
*/