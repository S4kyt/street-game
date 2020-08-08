#include <iostream>

#include "menu.h"
#include "quit.h"

using uint = unsigned int; 

void mainMenu()
{
    std::cout << "\033[2J\033[u"; // Clears screen, resets cursor
    std::cout << "Main menu" << std::endl;
    std::cout << "< 1. Play >" << std::endl;
    std::cout << "< 2. Highscores >" << std::endl;
    std::cout << "< 3. Quit >" << std::endl;

    uint menuChoice;
    bool isInMenu = true;

    while (isInMenu == true)
    {
        std::cin >> menuChoice;

        if (menuChoice == 1)
        {
            std::cout << "\033[2J\033[u"; // Clears screen, resets cursor
            isInMenu = false;
            std::cout << "Play" << std::endl;
        }
        else if (menuChoice == 2)
        {
            std::cout << "\033[2J\033[u"; // Clears screen, resets cursor
            isInMenu = false;
            std::cout << "Highscores" << std::endl;
        }
        else if (menuChoice == 3)
        {
            std::cout << "\033[2J\033[u"; // Clears screen, resets cursor
            isInMenu = false;
            quitGame(); // just about to start with the quit verification cuz its the most simple
        }
        else
        {
            std::cin.clear();std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Basically fool-proofs the input when in the menu. No idea how it works though.
            std::cout << "Please enter a valid option." << std::endl;
        }
    }
}
