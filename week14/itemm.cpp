#include "itemm.h"

// in C++, the first enum value is 0, and then it counts up
enum location {GREATHALL, DUNGEON, COURTYARD, MARKET, INVENTORY};

itemm::itemm() {
    cout << "Creating a new item!\n";
    location = MARKET;                  // sets the default location for items
}