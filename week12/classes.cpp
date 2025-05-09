// Anoki Adams
// Coding 1 Week 12
// Classes
#include <iostream>
#include <string>
using namespace std;

// use the class keyword to create a class
// use the semi-colon after the curly braces
// unlike structs, classes are PRIVATE by default
class robot {
public:             // anyone can see this, call this, change this.
    //Data Members
    string name;
    string phrase;
    int charge;

    // Member Functions
    // function declarations to be defined later
    // function declarations don't require parameters
    robot(string, string, int);
    robot();
    void SayHello();

private:            // only I can see this, call this, change this.
protected:
}; 

// Function Definitions must be outside of the class definition
    //constructor, has to be named the same as the class, and doesn't have a return type.
    robot::robot(string givenName, string givenPhrase, int givenCharge) {
        // assigns this instance's variables to the given values.
        name = givenName;
        phrase = givenPhrase;
        charge = givenCharge;

        // let's us know this constructor has run.
        cout << "A new robot has been constructed!\n";
    }

    // overloading the constructor with a "default constructor"
    robot::robot () {
        cout << "Using the DEFAULT constructor.\n";    
        cout << "Hey programmer Dean, please fix this in the source code.\n";
    }

    void robot::SayHello() {
        cout << "My name is " << name << " and my charge is " << charge << ".\n";
        cout << phrase << "\n";
    }

int main() {
    cout << "Classes, yeah?\n";

    robot bobert;           // constructor runs here
    bobert.name = "Bobert Junior";
    bobert.charge = 5;

    cout << "Have a look at my new robot! Their name is " << bobert.name << ".\n";
    cout << "I am currently charging them. Their charge is " << bobert.charge << ".\n";

    robot rob("Roberto", "I can fix anything!", 25);
    cout << "My new robot was very expensive! They work on my nuclear reactor.\n";
    cout << "They can introduce themselves, watch!\n";
    rob.SayHello();

    bobert.SayHello();

    return 0;
}