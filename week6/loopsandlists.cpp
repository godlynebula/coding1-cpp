// Anoki Adams Coding 1 Week 6 Spring 25, February 25
// Loops and Lists

#include <iostream>
#include <string>

using namespace std;

int main() {
    // we are going to build an array
    // an array is an ordered list of a single type of variable.

    // create an array of integers with a size of 10.

const int MAX_SIZE = 10;           // this variable cannot be changed after this line.
                                   // we use ALL_CAPS for constant variable names.
                       
    int element = 0;               // this keeps track of where in the array we are.

    int scores[MAX_SIZE];          // this array has just created 10 spots for integers

    // add a value to the first element in the array
    scores[0] = 9001;

    // display the value to confirm that it works.
    cout << "The highest score in scores is " << scores[0] << ".\n";

    // add 3 more scores using element++ to keep track of where you are in the list.

    element = 1;                             // point at the second element in the list
    scores[element++] = 682;                 // the postfix increment operator adds 1 AFTER the line runs
    scores[element++] = 604;
    scores[element++] = 412;
    scores[element++] = -12;
    scores[element++] = 333;
    scores[element++] = 254;

    cout << "the second score is " << scores[1] << ".\n";

    // print all the scores.
        // use a while loop to run through all of the scores.
        // the loop is done when the loop counter is equal to element.
    int counter = 0;
    while (counter < element) {   
        if (scores[counter] < 0) {
            counter+= 1;
            continue;                                // stop the code here, go to the next loop
        }                   // while counter is less than element, keep looping.
        cout << scores[counter] << ".\n";
        counter += 1;                                // add 1 to the counter every loop, so it points to the next thing
    }

    // create an array of strings named bestFriends
    // use a do-while loop to ask the user to add names or quit.
    // at the end, we will use a for loop, to display all of the names.

    // create an array of string variables. you MUST specify a size, 20 being the one we picked.
    string bestFriends[20];
    int friendCount = 0;

    string input;

    do {
        cout << "We're making a list of best friends! Who would you like to add?\n";
        cout << "or type 'quit' to quit.\n";
         getline(cin, input);                               // get input from the player. "getline" allows input but with spaces. better than cin.

        // add your fail cases first
        if(input == "quit") {                               // if they typed 'quit', stop the loop
            cout << "Thanks for adding names to the list!\n";
            break;
        }

        if(friendCount >= 19) {                             // if they filled up the list, stop the loop
            cout << "Oh no, that is all the friends that we can have!\n";
            break;
        }

        // then add your functionality
        bestFriends[friendCount++] = input;                 // add what the player typed to the array
                                                            // then add 1 to friendCount

    } while (true);

    cout << "Here is a list of your best friends!\n";

    // a for loop runs "for a certain amount of times"
    // a for loop includes the counter, the test, and the incrmeent action
        // all on the same line

    // standard for a loop looks like this
    // for(setup; test; action;) { code }
    for (int i = 0; i < friendCount; i++) {                 // for as long as i (starting at 0),
        if (bestFriends[i] == "") {
            continue;
        }
        cout << i + 1 << ".\t";                             // is less than friendCount
        cout << bestFriends[i] << "\n";                     // add 1 to i, and keep looping
    }

    /*
        pseudocode for FavGames assignment

        Setup
            int gameCount = 0;
            string games[size];
        start loop

        0. Greet player and ask for input.
        1. Add
            ask the player "what game do you want to add?"
            get input
            add that name to the array and increment
                gamecount
            (optional) tell player what name they have added
        2. Edit
            ask the player "what game would you like to edit?"
            get input
            try to find that game in the list
            use a for loop to to compare input to games[i]
                if we found a match:
                    ask the player "what would you like to edit this game to?"
                     get input
                    change the name of the game they want to edit with their new game
                otherwise,
                    if the game is not found, tell the player "this game could not be found"
                    (optional) display a list of the current games in the list that they can choose
        3. Remove
            ask the player "what game would you like to remove?"
            get input
            use a for loop to locate the game they would like to remove
                if the game is not found, tell the player "this game could not be found"
                (optional) display a list of the current games in the list that they can choose
            remove the game that corresponds with the player's input
        4. Show
            using a for loop where i is less than gameCount, show the player a current list of their games
        5. Quit
            thank the player for playing/listing their favorite games, and then break

    */
}