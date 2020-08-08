#include <iostream>

#include "menu.h"

using uint = unsigned int; 

int main()
{

    bool onTitleScreen = true;

    while (onTitleScreen == true)
    {

        char toContinue;

        std::cout << "Street game" << std::endl;
        std::cout << "Enter 'x' to continue" << std::endl;
        std::cin >> toContinue;

        if (toContinue == 'x' || toContinue == 'X')
        {
            onTitleScreen = false;
            mainMenu();
        }
        else
        {
            std::cout << "You entered something else other than 'x'." << std::endl;
            std::cout << "Please enter 'x' to continue." << std::endl;
            std::cout << "\033[2J\033[u"; // Clears screen, resets cursor
        }
        
    }

    return 0;
}