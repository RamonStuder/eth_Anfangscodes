//
// Created by Ramon Studer on 20.09.23.
//
#include <iostream>

int main()
{
    int code; // defines an integer variable code, without initializing it.
    std::cout << "Enter the code :" << std::endl; // prompt the user
    std::cin >> code; // store the user input into the variable code

    if (code == 1515) // check if the code is correct.
        std::cout << "Access granted." <<std::endl;
    else
        std::cout << "Access denied." << std::endl;
    return 0; // ends the program
}
