// Anoki Adams
// Coding 1 Week 12
// Homework Assignment: Classes in C++
/*
Create a human class with the following:

string Name
int Health = 10
int Damage = 4
a Constructor with parameters for name, health, baseDamage
void SayHello()
void SetHealth(int byAmount)
void SetDamage(int givenDamage)
int GetHealth()
int GetDamage()
*/
#include <iostream>
#include <string>
using namespace std;

// global debugging variable
bool debug = true;

class Human {
    string name;
    int health;
    int damage;         // no values here, causes warnings on Mac compiler

public:

Human(string givenName, int givenHealth = 10, int baseDamage = 4) {     // defaults instead go in the constructor
    name = givenName;
    health = givenHealth;
    damage = baseDamage;

    SayHello();
}

Human() {
    SayHello();
}

void SayHello() {
    cout << "Hey, how's it going? My name is " << name << ".\n";
    cout << "My health is: " << health << " and my damage is: " << damage << ".\n";
}
    
    void SetHealth(int byAmount) {
            if (debug) {
                cout << "at top of SetHealth(byAmount), health = " << health << ", byAmount " << byAmount << ".\n"; 
            }
             health += byAmount;

            if (health < 0) health = 0;         // I had this originally, and deleted it in class. Back it comes. Never doubt myself.
            if (health > 100) health = 100;     // also, you can one-line if statements and such if they only use one line.     
    }

    void SetDamage(int givenDamage) {
            damage = givenDamage;
    }

    int GetHealth() {
        return health;
    }

    int GetDamage() {
        return damage;
    }
};

int main() {                        // not in the assignment, just thought I would check on the code
    Human anoki("Anoki", 10, 4);
    anoki.SetHealth(25);
    anoki.SetDamage(7);

    cout << "Ha, I feel stronger! My health is now: " << anoki.GetHealth() << " and my damage is now: " << anoki.GetDamage() << ".\n";

    return 0;
}