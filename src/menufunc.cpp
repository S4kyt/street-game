#include <iostream>
#include <limits> // numeric_limits, streamsize
#include <cstdlib> // exit

#include "menu.h" // mainMenu()
#include "menufunc.h" // playGame(), highScores(), quitGame()
#include "util.h" // randomGen10(), randomGen100(), clearScreen()
#include "quests/quest.h" // introQuest()

using uint = unsigned int; 

// 1
void playGame()
{
    std::string playerName = introQuest();

    bool isPlaying = true;    

    while (isPlaying == true)
    {
        // testFunction1();
        // isPlaying = false; // this is needed because otherwise the while loop wont end after testFunction1

        float playerMoney = 0.5, playerReputation = 0;

        // Having this output as an active, updating stat screen is a bad idea because I need code to extend-shorten it on itself so that it wont break with longer values.
        std::cout << "----------------------------------------" << std::endl;
        std::cout << "| Character name: " << playerName << "                |" << std::endl;
        std::cout << "| Money: " << playerMoney << "$                            |" << std::endl;
        std::cout << "| Reputation: " << playerReputation << "                        |" << std::endl;
        std::cout << "----------------------------------------" << std::endl;

        isPlaying = false;
    }
}

// 2
void highScores()
{
    std::cout << "Highscores" << std::endl;
}

// 3
void quitGame()
{
    bool isQuitting = false;

    while (isQuitting == false)
    {
        std::cout << "Are you sure you would like to quit? < Y/N >" << std::endl;

        std::string quitInput;   
         
        std::cin >> quitInput;

        if (quitInput == "y" || quitInput == "Y")
        {
            std::cout << "Quitting game now" << std::endl;
            isQuitting = true;
        }
        else if (quitInput == "n" || quitInput == "N")
        {
            isQuitting = true;
            mainMenu();
        }
        else
        {
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Basically fool-proofs the input when in the menu
            clearScreen();
        }
    }
}

/*
// This works well with calling random numbers whenever I need from rand.cpp and using them for whatever
// Dont forget to assign the returned random number to an uint
void playGame()
{
    std::cout << "Playing game" << std::endl;

    uint randomNumb10 = randomGen10();
    uint randomNumb11 = randomGen10();
    uint randomNumb12 = randomGen10();
    uint randomNumb100 = randomGen100();

    std::cout << "Random number between 1-10: " << randomNumb10 << std::endl;
    std::cout << "Random number between 1-10: " << randomNumb11 << std::endl;
    std::cout << "Random number between 1-10: " << randomNumb12 << std::endl;
    std::cout << "Random number between 1-100: " << randomNumb100 << std::endl;
}
*/