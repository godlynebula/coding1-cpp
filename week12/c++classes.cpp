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

class Human {
    string name;
    int health;
    int damage;

public:

Human(string givenName, int givenHealth = 10, int baseDamage = 4) {
    name = givenName;
    health = givenHealth;
    damage = baseDamage;
}

void SayHello() {
    cout << "Hey, how's it going? My name is " << name << ".\n";
}
    
    void SetHealth(int byAmount) {
            health = byAmount;
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
    anoki.SayHello();
    cout << "My health is: " << anoki.GetHealth() << " and my damage is: " << anoki.GetDamage() << ".\n";

    anoki.SetHealth(25);
    anoki.SetDamage(7);

    cout << "Ha, I feel stronger! My health is now: " << anoki.GetHealth() << " and my damage is now: " << anoki.GetDamage() << ".\n";

    return 0;
}