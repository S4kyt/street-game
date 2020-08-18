#include <iostream>
#include <limits> // numeric_limits, streamsize
#include <cstdlib> // exit
#include <string>

#include "menu.h" // mainMenu()
#include "menufunc.h" // playGame(), highScores(), quitGame()
#include "util.h" // randomGen10(), randomGen100(), clearScreen()
#include "quests/quest.h" // introQuest()
#include "../src/player/player.h" // playerOptions()

using uint = unsigned int; 

// 1
void playGame()
{
    // std::string playerName = introQuest();
    std::string playerName = "Jason";

    bool isPlaying = true;

    while (isPlaying == true)
    {
        // testFunction1();
        // isPlaying = false; // this is needed because otherwise the while loop wont end after testFunction1

        float playerMoney = 0;
        float playerReputation = 0;
        std::string playerLocation;
        uint dayCount = 0;

        // Having this output as an active, updating stat screen is a bad idea because I need code to extend-shorten it on itself so that it wont break with longer values.
        clearScreen();
        std::cout << "----------------------------------------" << std::endl;
        std::cout << "| Character name: " << playerName << "                |" << std::endl;
        std::cout << "| Money: " << playerMoney << "$                          |" << std::endl;
        std::cout << "| Reputation: " << playerReputation << "                        |" << std::endl;
        std::cout << "----------------------------------------" << std::endl;

        std::cout << "Its Day: " << dayCount << std::endl;
        std::cout << "\nCurrently in / on: " << playerLocation << std::endl;
        std::cout << "You consider your options: "<< std::endl;
        playerOptions();

        uint playerAction;
        std::cin >> playerAction;
    }
}

// 2
void highScores()
{

    bool onHighscores = true;

    // Will display the highscores each player earned, could have a detailed view on each of the players with all their stats
    // 1-10 will be for players, 
    while (onHighscores == true)
    {
        std::cout << "Highscores" << std::endl;
        std::cout << "-----------" << std::endl;
        std::cout << "Player 1: Lorum Johnson" << std::endl;
        std::cout << "Player 2: Jason Ipsum" << std::endl;
        std::cout << "Player 3: Hashtag Adams\n" << std::endl;

        std::string toContinue;

        std::cout << "< Enter 'x' to return to the main menu >" << std::endl;
        std::cin >> toContinue;

        if (toContinue == "x" || toContinue == "X")
        {
            onHighscores = false;
            mainMenu();
        }
        else
        {
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Basically fool-proofs the input when in the menu
            clearScreen();
        }
    }
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
            break; // I'd really like this to work, but for some reason it doesn't do what you'd expect it to do
                   // My debugger is faulty because of my competence, thats why Im asking questions at the moment
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