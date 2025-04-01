 #include <iostream>
 #include <cstdlib>
 #include <ctime>
 #include <string>
 using namespace std;
 
 int health = 20;
 int totalValuables = 0;
 
 void story() {
    cout << "Well, hello there, dear traveler. It seems you have awakened from your slumber.\n";
    cout << "You can call me Sorcerer. Come, let us go on an adventure together in search of valuables.\n";
 }

 bool askYesNo(string question) {
    do {
        cout << question << " Yes or No?" << endl;
        string input;
        getline(cin, input);

        if (input == "Yes") {           // if Yes, return true
            return true;                // this quits the function
        }
        else if (input == "No") {       //if No, return false
            return false;
        }
        else {                          // else, loop again
            cout << "Please type 'Yes' or 'No', dear traveler.\n";
        }
    } while (true);
 }
 
 int rollDie(int sides = 6) {           // sets the default sides value to 6
    return (rand() % sides) + 1;
 }

 void adventure() {
    int attack = rollDie();             // this should roll the six sided dice for all
    int defend = rollDie();           
    int valuables = rollDie();          

    cout << "The ferocious beast is attacking! Watch out, dear traveler!\n";
    cout << "You stood your ground, attempting to defend yourself from the beast.\n";

    if (defend > attack) {
        cout << "As the dust kicked up, you were unscathed. You successfully defended yourself.\n";         // if block success, get rewarded
        cout << "As the air cleared, you saw something shiny. You found " << valuables << " valuables!\n";
        totalValuables += valuables;
    }
    else {
        cout << "As the air cleared, you felt the blood drip off of you. Your blood. You have lost " << attack << " health.\n"; // if block fail, get nothing. except hurt.
        health -= attack;
    }

    cout << "Currently, your health is at: " << health << "\n";                             // after each loop, get a health and valuable counter
    cout << "The amount of valuables that you have collected: " << totalValuables << "\n";
 }

 void ending() {
    if (health <= 0) {
        cout << "Your body weak, your vision blurred, your hearing buzzing, you fall to the ground.\n";                 // "death" text
        cout << "As your vision fades to black, Sorcerer stands over you. Maybe it is not over for you after all...\n";
    }
    else {
        cout << "We may continue this adventure another day! You finished with " << health << " health remaining.\n";
        cout << "During your adventure, you claimed a total of " << totalValuables << " valuable items.\n";             // "retreat" text
    }
 }

 int main () {
    srand(time(0));         // seeding random number generator

    story();

    while (health > 0) {
        if (askYesNo("Would you like to continue adventuring, traveler?")) {
            cout << "Great choice, traveler! Let us continue!\n";
            adventure();
        }
        else {
            cout << "Wise choice, traveler. Let us head back.\n";
            break;
        }
    }

    ending();
    return 0;
 }