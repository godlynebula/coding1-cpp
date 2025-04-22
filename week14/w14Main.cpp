// Anoki Adams
// Coding 1 Week 14
// Final Week of C++
// Header Files - Writing to Files - Reading from Files     

// NOTE: When compiling code using headers and more than one file, use "-std=c++17" after g++, and make sure to compile both files together

#include "filemgmt.h"       // import the extra functions that we have created
using namespace std;                                        


// read array from file, which will be homework
// now time for header files and other source files! yippee!!!

int main() {
    cout << "Play Ocarina of Time.\n";

    ReadFromFile();
    WriteToFile();          // confirm the creation of the file on the hard drive.

    string favs[100];
    int nextIndex = 0;

    cout << "Type out your favorites, or type 'done' to stop:\n";
    while (true) {
        string input;               // store user's input
        getline(cin, input);        // get user's input

        if(input == "done") {       // check to see if they are done
            break;                  // if so, break out of the loop
        }
        favs[nextIndex] = input;    // otherwise, assign the user's input to the array
        nextIndex++;                // and point at the next element in the array
    }

    WriteArrayToFile(favs, nextIndex);
}