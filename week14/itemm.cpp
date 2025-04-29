#include "itemm.h"

const string locationName[] = {"Great Hall", "Dungeon", "Courtyard", "Market", "Inventory"};

itemm::itemm() {
    cout << "Creating a new item!\n";
    name = "Random Item";
    loc = MARKET;                  // sets the default location for items
}

itemm::itemm(string itemName, location itemLocation) {
    name = itemName;
    loc = itemLocation;
}

void itemm::use() {
    cout << "I am using " << name << " in the " << locationName[loc] << ".\n";
}

void itemm::examine() {
    cout << "This item is the: " << name << "\n";
    cout << "It is found in the: " << locationName[loc] << "\n";
}