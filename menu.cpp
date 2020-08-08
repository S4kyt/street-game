#include <iostream>

#include "menu.h"
#include "menufunc.h"

using uint = unsigned int; 

void mainMenu()
{
    //Main menu
    std::cout << "\033[2J\033[u"; // Clears screen, resets cursor
    std::cout << "Main menu" << std::endl;
    std::cout << "< 1. Play >" << std::endl;
    std::cout << "< 2. Highscores >" << std::endl;
    std::cout << "< 3. Quit >" << std::endl;

    uint menuChoice;
    bool isInMenu = true;

    //As long as in the menu, and hasn't entered a correct menu option
    while (isInMenu == true)
    {

        //FIXME: When user enters "3." its the same as entering "3"
        std::cin >> menuChoice;

        if (menuChoice == 1)
        {
            std::cout << "\033[2J\033[u";
            isInMenu = false;
            playGame();
        }
        else if (menuChoice == 2)
        {
            std::cout << "\033[2J\033[u";
            isInMenu = false;
            highScores();
        }
        else if (menuChoice == 3)
        {
            std::cout << "\033[2J\033[u";
            isInMenu = false;
            quitGame();
        }
        else
        {
            std::cin.clear();std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Basically fool-proofs the input when in the menu
            std::cout << "Please enter a valid option." << std::endl;
        }
    }
}
