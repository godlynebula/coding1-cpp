// header files contain declarations
// source files contain definitions
#pragma once
#include <string>
#include <iostream>
using namespace std;

// in-class assignment:
// in a new source file (.cpp) and with a header file (.h)
// create a new class named item with the following variables and functions
    // string name, enum location, item(), use(), examine()

/*
    homework:
    1. create a function in filemgmt.cpp to read a file into an array
        a. each new line becomes a new element in the array
    2. finish the item class
    3. in main, create an array of 5 items and display them with a loop
        a. use itemArray[i].examine() to show all of the details of the item
    4. upload the folder of files to GitHub
        a. submit a link to the assignment page with the folder in GitHub
*/

// in C++, the first enum value is 0, and then it counts up
enum location {GREATHALL, DUNGEON, COURTYARD, MARKET, INVENTORY};

class itemm
{
private:
    string name;
    location loc;
public:
    itemm();                // constructor 
    itemm(string itemName, location itemLocation);
    void use();
    void examine();
};