#include <iostream>     //this sends and receives text from the console.
#include <string>       //allows us to use string variable type
using namespace std;     //adds a lot of bloat, but keeps us from typing "std::" all the time

//this is where the program starts running
int main() {
    //an if statement is a test.
    //if a test is true, the code block runs.
    //if the test ius false, or NOT true, the code block does not run.
    //if(test) { code block }

    cout << "This is the start of Week 3's lecture on\n";
    cout << "\tVariables and Logic!\n";

    if(true) {
        cout << "This line of code will always run\n";
    }   //end of if(true)

    if(false) {
        cout << "This line of code will never run\n";
    }   //end of if(false)
}   //this is the end of main()