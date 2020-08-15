#include <iostream>
#include <limits> // numeric_limits, streamsize

#include "../../src/util.h" // randomGen10(), randomGen100(), clearScreen()

using uint = unsigned int;

std::string introQuest()
{
    std::string playerName;

    std::cout << "< Shady character >: Heh, who do we have here? I want your name. " << std::endl;
    std::cin >> playerName;
    clearScreen();

    // Verifying that player has read everything and ready to continue
    std::string toContinue;
    bool continueNow = false;

    while (continueNow == false)
    {
        // Intro quest
        std::cout << "< Shady character >: " << playerName <<"? Looks like its up to me to welcome your ass to the streets." << std::endl;
        //TODO: playername check, max amount of characters: 30, if it goes above 30, you need to type in a new one.
        //TODO: maybe it cant output more than 30 or smth so i have to test that first how the output looks like with 30 characters with ur character name
        std::cout << "                     Keep your nose clean or dont thats your choice afterall." << std::endl;
        std::cout << "                     Lay low and you just might survive today." << std::endl;
        std::cout << "                     Name is Winters by the way.\n" << std::endl;
        std::cout << "< Winters >: The fuck are you looking at me for? I ain't gonna pity your ass," << std::endl;
        std::cout << "             we've been through the same shit before as you have." << std::endl;
        std::cout << "             Get out of here and come back when you made a name for yourself.\n" << std::endl;

        std::cout << "*you take a good look around, let out a heavy sigh as you have quite the day ahead of you.*" << std::endl;
        std::cout << "you take your leave and head to the streets*\n" << std::endl;

        std::cout << "Enter 'x' to continue" << std::endl;
        std::cin >> toContinue;

        if (toContinue == "x" || toContinue == "X")
        {
            continueNow = true;
        }
        else
        {
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Basically fool-proofs the input when in the menu
            clearScreen();
        }
    }
    return playerName;
}