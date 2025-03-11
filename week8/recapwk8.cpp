// Anoki Adams
// Week 8 Recap

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main () {
    cout << "Hello World!\n";
    srand (time(0));

    bool debug = true;      // this should be turned to false when shipping a game

    // ask the player if they prefer cheese or pepperoni pizza
    // use an if, else if, and else to check their input
    // have the computer agree or disagree with their choice, or berate them for any other option.
    cout << "Alright, User. What is Your Favorite Pizza, Cheese or Pepperoni?\n";

    string input = "";
    getline (cin, input);

    if (input == "Cheese") {
        cout << "Heh, pretty boring huh? I guess it's not that bad.\n Sometimes, depending on the cheese, it can be great!\n";
    }
    else if (input == "Pepperoni") {
        cout << "Hey, GOOD CHOICE. Very delicious, I agree.\n";
    }
    else {
        cout << "Nope, nope nope. Invalid. Your opinion is irrelevant, I dislike " << input << ". Get Out.\n";
    }
    // build a random number game
    // have the computer choose a random number between 1 and 10.
    // start a while loop
    // ask the player to guess the number
    // if the number is too low, have the computer say "lower!"
    // if the number is too high, have the computer say "higher!"
    // if the number is correct, tell the player, end the loop
    // don't forget
        //#include <cstdlib>
        //#include <ctime>
        // in main(), srand (time(0));

    // after trying for a minute, I can see that I'm not really able to get the computer to generate and hold a number for me to guess.
    // I am not sure what code or statement I would need to make this happen.
    int theNumber = rand() % 10 + 1;

    cout << "I, the computer, am thinking of a number between 1 and 10.\nPlease, try to guess which number I am thinking of.\n";
    while (true) {

        if (debug) cout << "The number is " << theNumber << ".\n";
        getline (cin, input);
        int playerGuess = 0;

        try {
            playerGuess = stoi(input);
        }
        catch (invalid_argument) {
            cout << "That's not a number. Try again!\n";
        }

        if (input == "quit") {
            cout << "Fine, fine, I won't bother you anymore. Get outta here.\n";
            break;
        }
        
        if (playerGuess == theNumber) {         //(stoi(input) == theNumber) {
            cout << "Wow, great, you guessed my number! Good job, congrats, yay.\n";
            break;
        }

        if (playerGuess > theNumber) {
            cout << "Sorry, that is not my number. You are guessing too high. Uhhh... try again!\n";
        }
        else {
            cout << "Nope, too low. Keep trying, pal.\n";
        }
    }
    return 0;
}
/* post C++ recap notes:
learned about stoi(input) and invalid_arguemnt.
kind of bettered my skills, it seems. 
all the coding here makes sense, and that is good. */