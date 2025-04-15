// Anoki Adams
// Coding 1 Week 13
// Built Off of "C++ Classes" Homework Code
// Inheritance

#include <iostream>
#include <string>
using namespace std;

// global debugging variable
bool debug = true;

class Human {

protected:              // must be set to protected for other classes to inherit
    string name;
    int health;
    int damage;         // no values here, causes warnings on Mac compiler

public:
Human(string givenName, int givenHealth = 10, int givenDamage = 4) {     // defaults instead go in the constructor
    name = givenName;
    health = givenHealth;
    damage = givenDamage;

    //SayHello();
}

Human() {
    //SayHello();
}

void SayHello() {
    cout << "Hey, how's it going? My name is " << name << ".\n";
    cout << "My health is: " << health << " and my damage is: " << damage << ".\n";
}
    
    virtual void SetHealth(int byAmount) {
            if (debug) {
                cout << "at top of SetHealth(byAmount), health = " << health << ", byAmount " << byAmount << ".\n"; 
            }
            // somehow the health starts out at a large number
            // we should clamp it before fixing it
            if (health < 0) health = 0;      
            if (health > 100) health = 100;
            
            
             health += byAmount;

            if (health < 0) health = 0;      
            if (health > 100) health = 100;     // you can one-line if statements and such if they only use one line.     
    }

    void SetName(string givenName) {
        name = givenName;
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

    string GetName() {
        return name;
    }
};

// if private or protected, all public things in class Human are made private
class Barbarian : public Human {
    // this class should inherit all of the things that a human has
    // add a constructor
    // add a Yell() function
    // add a doubleSwing() function
public:

Barbarian(string givenName, int givenHealth = 10, int givenDamage = 4) {     
    name = givenName;
    health = givenHealth;
    damage = givenDamage;
    }

   void Yell() {
        cout << "The barbarian releases a ferocious yell, boosting his team's stats.\n";
   }

    void doubleSwing(Human& target) {
        cout << "The barbarian swings both weapons at " << target.GetName() << "!\n";

        // call the SetDamage function on a human target
        // use the damage from "This" instance of a barabrian
        // double damage because it's a double swing
        int tempDamage = this->GetDamage() * 2;
        target.SetHealth(-tempDamage);
     }


};  //end of Barbarian class

// I must distill my learning by making a shopkeep class that inherits from the human class
// add a dropGold() function
// add a shopName variable

class Shopkeep : public Human {
private:
    int gold;
    string shopName;
public:
Shopkeep(string givenName, int givenHealth = 10, int baseDamage = 4) {     
    SetName(givenName);
    SetHealth(givenHealth);
    SetDamage(baseDamage);
    }   
    Shopkeep() {
        gold = 15;
    }

    void SetShopName(string givenShopName) {
        shopName = givenShopName;
    }

    string GetShopName() { return shopName; }

    // overloading the Human::SetHealth() function
    void SetHealth(int byAmount) override {         // override keyword says "do this one, not the parent class"
        if (health < 0) health = 0;                 // the parent class function must be virtual
        if (health > 100) health = 100;

        health += byAmount;

        if (health <=0) {
            cout << "The proprietor of " << shopName << " has died!\n";
            cout << "They dropped " << gold << " gold.\n";
            gold = 0;
        }
            
    }

    void dropGold() {

    }
};

int main() { 
    Barbarian bane("Bane", 22, 4);
    bane.SayHello();

    Human anoki("Anoki", 10, 4);
    anoki.SayHello();
    anoki.SetHealth(5);
    anoki.SetDamage(5);

    cout << "Ha, I feel stronger! My health is now: " << anoki.GetHealth() << " and my damage is now: " << anoki.GetDamage() << ".\n";

    cout << "Let's have the barbarian attack Anoki.\n";
    bane.doubleSwing(anoki);

    anoki.SayHello();

    Shopkeep papaJohn;
    papaJohn.SetName("Papa John");
    papaJohn.SetShopName("Papa John's Pizza Tavern");
    papaJohn.SetHealth(5);

    bane.doubleSwing(papaJohn);

    papaJohn.SayHello();

    return 0;
}