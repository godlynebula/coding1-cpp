#include <iostream>
#include <string>       
#include <cstdlib>      
#include <ctime>        
using namespace std;            //I think that I understand what these do, but not sure if I need them all. So why not just add them all anyways.

int main() {
    srand(time(0));             //seeding thy generator

    cout << "Welcome, weary traveler. It is time for us to go on an adventure together.\n";     //welcoming our dearest player

    int health = 10;
    int attack = 0;
    int block = 0;
    int turns = 0;              //setting up the game variables. I may have to revisit this.

    cout << "Oh, barncales! A dastardly monster has us trapped!\n";

    while (health > 0 && turns < 4) {               //I was not aware of this "&&" thing. I found it out as a mistake.
        turns += 1;                                  //this should increase turns by 1? hopefully.

        attack = rand() % 4;
        block = rand() % 4;

        cout << "As the snarling monster attacked, you blocked with honor.\n";

        if (block >= attack) {
            cout << "You held the nasty monster at bay! Keep up your courage!\n";
        }
        else {
            health -= (attack - block);
            cout << "Oh no, the monster was too strong! You have lost " << (attack - block) << "health.\n";
        }

        if (health > 0) {
            char answer = 'n';
            cout << "Your health: " << health << ".\n";
            cout << "Are you sure that you want to continue in this engagement?\n";
            cin >> answer;
            if (answer == 'y') {
                cout << "I knew you were a great warrior. Let us continue.\n";
            }
            else {
                cout << "Even the strongest warriors must know when it is time to flee. Let us get out of here.\n";
                return 0;
            }
        }
    
    }
if (health > 0) {
        cout << "Oh dear warrior, the beast has succumbed to your blade. Thank you, my friend.\n";
    }
    else {
        cout << "Do not fret, my dear friend. I will stay by your side as you go. Just listen to my voice...\n";
    }
    return 0;

}








