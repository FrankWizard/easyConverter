#include <iostream>
#include <string>
#include "currencies.h"

void name()
{
    std::cout << R"(  
  ______                   _____                          _            
 |  ____|                 / ____|                        | |           
 | |__   __ _ ___ _   _  | |     ___  _ ____   _____ _ __| |_ ___ _ __ 
 |  __| / _` / __| | | | | |    / _ \| '_ \ \ / / _ | '__| __/ _ | '__|
 | |___| (_| \__ | |_| | | |___| (_) | | | \ V |  __| |  | ||  __| |   
 |______\__,_|___/\__, |  \_____\___/|_| |_|\_/ \___|_|   \__\___|_|   by Logerxy
                   __/ |                                               
                  |___/  
-------------------------------------------------------------------------------------------)" << std::endl;
}

void inputAndCompare(std::string login, std::string pass)
{
    std::string userLoginInput;
    std::string userPassInput;

    while (userLoginInput != login || userPassInput != pass)
    {
        std::cout << "Please enter your username: ";
        std::getline(std::cin >> std::ws, userLoginInput);

        std::cout << "Please enter your password: ";
        std::getline(std::cin >> std::ws, userPassInput);

        if (userLoginInput == login && userPassInput == pass)
        {
            std::cout << "Succesfully logged in... Welcome " << login << std::endl;
        }
        else
        {
            std::cout << "Invalid credentials...\n";
        }
    }
}

int chooseConverter()
{
    int choice = NULL;
    while (choice != 1 && 9 && 2)
    {
        std::cout << "-------------------------------------------------------------------------------------------\n";
        std::cout << "Choose which converter want to use:" << std::endl;
        std::cout << "1) Currency converter \n";
        //std::cout << "2) Length converter \n";
        std::cout << "9) Exit\n";
        std::cout << "More coming soon...\n";
        std::cout << ": ";
        std::cin >> choice;
        if (choice == 9)
        {
            exit(0);
        }

        else if (choice != 1 && 9 && 2)
        {
            std::cout << "Choose a valid option\n";
        }
    }
    return choice;
}

void currencyConverter()
{
    int currentCurrency = NULL;
    while(currentCurrency != 1, 2, 3)
    {
        std::cout << "Choose current currency:\n";
        std::cout << "1) GBP\n";
        std::cout << "2) USD\n";
        std::cout << "3) CZK\n";
        std::cout << ": ";
        std::cin >> currentCurrency;

        if (currentCurrency == 1)
        {
            GBP();
            break;
        }
        if (currentCurrency == 2)
        {
            USD();
            break;
        }
        if (currentCurrency == 3)
        {
            CZK();
            break;
        }
        else
        {
            std::cout << "Choose a valid option\n";
            std::cout << "-------------------------------------------------------------------------------------------\n";
            std::cin.clear();
            std::cin.ignore(100, '\n');
        }
    }
}

void lengthConverter()
{
    std::cout << "Choose your current length:\n";
    std::cout << "1) Kilometers\n";
    std::cout << "2) Metres\n";
    std::cout << "3) Centimeters\n";
    std::cout << ": ";

}