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
            remove the game that corresponds with the player's input by removing the "bad" element and then movimng the other elements down the list, keeping order
        4. Show
            using a for loop where i is less than gameCount and goes through every game, show the player a current list of their games
        5. Quit
            thank the player for playing/listing their favorite games, and then break to end the code
    */ 

#include <iostream>
#include <string>

using namespace std;

int main () {

    const int MAX_GAMES = 100;
    string favGames [100];
    int gameCount = 0;
    int element = 0;

    string input;

    do {
        cout << "Welcome, User! What Would You Like to Do?\n";
        cout << "1. Add\n";
        cout << "2. Edit\n";
        cout << "3. Remove\n";
        cout << "4. Show\n";                                        // welcome user and ask for the next step
        cout << "5. Quit\n";
        cout << "Select the number of your choice here: ";
        getline(cin, input);

        if(input == "5") {                                                                   // quit function, works as it should
            cout << "Thanks for sharing some of your favorite games with me!\n";             // this should quit the program if chosen
            break;
        }

        if(gameCount >= 99) {                            
            cout << "Sorry, you have passed the limit of games allowed! Somehow...\n";      // this should quit the program if it reaches 100 games
            break;
        }

        if(input == "1") {                                                                  // this SHOULD allow users to add new games to their list, as well as inform them of when they have done so.
            cout << "Enter the name of the game that you would like to add: ";              // the add function, it works as expected!
            string game;
            getline(cin, game);
            favGames[gameCount++] = game;  
            cout << "Nice, you have added: " << game << "\n";
        }

        else if(input == "2") {                                                             // I switched to "else if" instead of "if" and it kept some dialogue from repeating over and over.
            if (gameCount == 0) {                                                           // this block runs as expected, this is the edit function
                cout << "There are no games to edit quite yet. Try adding one now!\n";
                continue;
            }
            cout << "Enter the name of the game that you would like to edit: ";
            string oName;                                                                   // old name, for the name of the old game
            string nName;                                                                   // new name, for the name of the new game
            getline(cin, oName);

            int i;
            for (i = 0; i < gameCount; i++) {
                if (favGames[i] == oName) {
                    cout << "Game Found! Please enter the new name for this game: ";
                    getline(cin, nName);
                    favGames[i] = nName;                                                    // I did a lot of digging around to find out how to do this
                    cout << "Success! You have changed the name of the game to: " << nName << "\n";
                    break;
                }
            }
            if (i == gameCount) {
                    cout << "Sorry, I could not find that game. Check your spelling and try again!\n";
            }
        }
        else if (input == "3") {                                                            // after plenty of tweaks, this code block is running now. this operates the "remove" function as expected
            if (gameCount == 0) {
                cout << "There are no games to remove quite yet. Go try adding one now!\n";
                continue;
            }
            cout << "Enter the name of the game that you would like to remove: ";
            string rName;                                                                   // remove game, to remove the game
            getline(cin, rName);

            int i;
            for (i = 0; i < gameCount; i++) {                                           // I think that I would have to run this again here as well as in the edit section. We will see
                if (favGames[i] == rName) {
                    for (int j = i; j < gameCount - 1; j++) {
                        favGames[j] = favGames[j + 1];                                   // lots of issues, but fixed. this moves the elements over after removal, fixing the order.
                    }
                    gameCount--;
                    cout << "As you wish, I have removed " << rName << " from your games!\n";
                    break;
                }                                                                           
            }    
            if (i == gameCount) {                                                                          
                    cout << "Sorry, I could not find that game. Check your spelling and try again!\n";
            }                                        
        }

        else if (input == "4") {                                                            // this code block shows the games. works as supposed to, it seems. good!
            if (gameCount == 0) {
                cout << "Sorry, there are no games to list here yet. Go try adding some now!\n";
                continue;
            }
            cout << "Here is a current list of your favorite games!\n";
            for (int i = 0; i < gameCount; i++) {
                if (favGames[i] == "") {
                    continue;
            }
                cout << i + 1 << ".\t";                             
                cout << favGames[i] << "\n"; 
            }
            
        }
        else {
            cout << "Sorry, that is not an option. Please make a selection between 1 and 5!\n";     // this should properly display if the selection made is not 1 - 5
        }
    } while (true);
}