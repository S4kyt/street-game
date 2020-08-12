#include <iostream>
#include <limits> // numeric_limits, streamsize

#include "menu.h" // mainMenu()
#include "menufunc.h" // playGame(), highScores(), quitGame()
#include "util.h" // randomGen10(), randomGen100(), clearScreen()

void mainMenu()
{
    bool isInMenu = true;

    //As long as in the menu, and hasn't entered a correct menu option
    while (isInMenu == true)
    {
        //Main menu
        clearScreen();
        std::cout << "Main menu" << std::endl;
        std::cout << "< 1. Play >" << std::endl;
        std::cout << "< 2. Highscores >" << std::endl;
        std::cout << "< 3. Quit >" << std::endl;

        std::string menuChoice;

        std::cin >> menuChoice;

        if (menuChoice == "1")
        {
            clearScreen();
            isInMenu = false;
            playGame();
        }
        else if (menuChoice == "2")
        {
            clearScreen();
            isInMenu = false;
            highScores();
        }
        else if (menuChoice == "3")
        {
            clearScreen();
            isInMenu = false;
            quitGame();
        }
        else
        {
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Basically fool-proofs the input when in the menu
            clearScreen();
        }
    }
}
