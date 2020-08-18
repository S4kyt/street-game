#include <iostream>
#include <limits> // numeric limites, streamsize
#include <string>

#include "menu.h" // mainMenu()
#include "menufunc.h" // playGame(), highScores(), quitGame()
#include "util.h" // randomGen10(), randomGen100(), clearScreen()

using uint = unsigned int; 

int main()
{
    bool onTitleScreen = true;

    //User can only continue if they enter 'x' or 'X' as input. Transits to the main menu after.
    while (onTitleScreen == true)
        {
        std::string toContinue;

        std::cout << "Street game" << std::endl;
        std::cout << "< Enter 'x' to continue >" << std::endl;
        std::cin >> toContinue;

        if (toContinue == "x" || toContinue == "X")
        {
            onTitleScreen = false;
            mainMenu();
        }
        else
        {
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Basically fool-proofs the input when in the menu
            clearScreen();
        }
    }
    return 0;
}