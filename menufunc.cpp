#include <iostream>

#include "menufunc.h"
#include "menu.h"

using uint = unsigned int; 

//Main menu 1
void playGame()
{
    std::cout << "Playing game" << std::endl;
}

// 2
void highScores()
{
    std::cout << "Highscores" << std::endl;
}

// 3
void quitGame()
{

    bool isQuitting = true;

    while (isQuitting == true)
    {

        char quitInput;    

        std::cout << "Are you sure you would like to quit? < Y/N >" << std::endl;
        std::cin >> quitInput;

        //FIXME: Same problem exists as on menu.cpp - line 24
        if (quitInput == 'y' || quitInput == 'Y')
        {
            std::cout << "Quitting game now" << std::endl;
            isQuitting = false;
        }
        else if (quitInput == 'n' || quitInput == 'N')
        {
            std::cout << "Returning to main menu." << std::endl;
            mainMenu();
        }
        else
        {
            std::cin.clear();std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Please enter a vaild input!" << std::endl;
        }
    }    
}