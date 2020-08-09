#include <iostream>
#include <limits> // numeric_limits, streamsize

#include "menu.h" // mainMenu()
#include "menufunc.h" // playGame(), highScores(), quitGame()

void mainMenu()
{
    //Main menu
    std::cout << "\033[2J\033[u"; // Clears screen, resets cursor
    std::cout << "Main menu" << std::endl;
    std::cout << "< 1. Play >" << std::endl;
    std::cout << "< 2. Highscores >" << std::endl;
    std::cout << "< 3. Quit >" << std::endl;

    std::string menuChoice;
    bool isInMenu = true;

    //As long as in the menu, and hasn't entered a correct menu option
    while (isInMenu == true)
    {
        std::cin >> menuChoice;

        if (menuChoice == "1")
        {
            std::cout << "\033[2J\033[u";
            isInMenu = false;
            playGame();
        }
        else if (menuChoice == "2")
        {
            std::cout << "\033[2J\033[u";
            isInMenu = false;
            highScores();
        }
        else if (menuChoice == "3")
        {
            std::cout << "\033[2J\033[u";
            isInMenu = false;
            quitGame();
        }
        else
        {
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Basically fool-proofs the input when in the menu
            std::cout << "Please enter a valid option." << std::endl;
        }
    }
}
