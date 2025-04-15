// Anoki Adams
// Coding 1 Week 12
// Getters and Setters
// This Lesson Will Reuse the Code from "Classes"
#include <iostream>
#include <string>
using namespace std;

// use the class keyword to create a class
// use the semi-colon after the curly braces
// unlike structs, classes are PRIVATE by default
class robot {
private:
    //Data Members
    string name;
    string phrase;
    int charge = 10;
    int maxCharge = 100;
    int minCharge = 0;

public:
    // Member Functions
    // function declarations to be defined later
    // function declarations don't require parameters
    robot(string, string, int);
    robot();
    void SayHello();

    // Setters and Getters give access to priuvate variables
    // through whatever tests we want to write.

    // SetCharge clamps charge to a range 0-100 (inclusive)
    // Setters will always have an input parameter
    void SetCharge(int givenCharge) {
        if(givenCharge < 0) {
            charge = 0;
        } else if(givenCharge > 100) {
            charge = 100;
        } else {
            charge = givenCharge;
        }
    }
    void ChangeCharge(int by = -1) {
        charge += by;
        SetCharge(charge);          // for clamping charge.
    }
    // Getters will always have a return type
    int GetCharge() {
        return charge;
    }
    void SetName(string givenName) {
        if(givenName.size() < 2) {
            cout << "Name is too short!\n";
            return;
        }
        else if(givenName.size() > 20) {
            cout << "Name is too long!\n";
            return;
        }
        else {
            name = givenName;
        }
    }
    string GetName() {
        return name;
    }
    // no need to let people set the phrase
    // or hear it! the robot gets to be in charge of when they speak

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
        ChangeCharge();         // this task is not very expensive on our charge.
    }

int main() {
    cout << "Classes, yeah?\n";

    robot bobert;           // constructor runs here
    bobert.SetName("Bobert Junior");
    bobert.SetCharge(5);

    cout << "Have a look at my new robot! Their name is " << bobert.GetName() << ".\n";
    cout << "I am currently charging them. Their charge is " << bobert.GetCharge() << ".\n";

    bobert.ChangeCharge(50);
    cout << "Two hours later, Bobert's charge is now " << bobert.GetCharge() << ".\n";

    robot rob("Roberto", "I can fix anything!", 25);
    cout << "My new robot was very expensive! They work on my nuclear reactor.\n";
    cout << "They can introduce themselves, watch!\n";
    rob.ChangeCharge(-200);
    rob.SayHello();

    bobert.SayHello();

    return 0;
}