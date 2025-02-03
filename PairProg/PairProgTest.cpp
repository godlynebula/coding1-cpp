// PairProgTest.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

int main()
{
    std::cout << "Hello, Turner!\n";
    std::cout << "Hello, Anoki!\n";

    //variables
    int distance = 45;  //in miles

    //type is string, name is destination, and the value is "portland, OR"
    std::string destination = "Portland, OR";

    //type is bool, name is areWeThereYet, and the value is "false"
    bool areWeThereYet = false;

    int bob = 1;

    std::cout << "We are going to " << destination << ".\n"; 
    std::cout << "It is " << distance << "miles away.\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
