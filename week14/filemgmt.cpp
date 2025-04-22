#include "filemgmt.h"

void ReadFromFile() {
    // this string will hold what the file contains
    string fileContents;

    // open the file
    ifstream file("file.txt");

    // for each line in the file, add it to the string
    while(getline(file, fileContents)) {
        cout << fileContents << "\n";
    }

    // close the file so that other prgrams can use it
    file.close();
}

void WriteToFile() {
    // opening the file.txt file. if it doesn't exist, create it.
    ofstream file("file.txt");

    // write a line to the file. or, to the buffer of the open file.
    file << "Play Ocarina of Time!\n";

    // close the file (saves it to the disk)
    file.close();
}

void WriteArrayToFile(string* arr, int size) {
    ofstream file("favs.txt");          //open or create the file favs.txt

    if (!file.is_open()) {
        return;
    }

    for(int i = 0; i < size; i++) {     //for each line in the array, add a line to the file
        file << arr[i] << "\n";
    }

    // close the file and saves it to the disk
    file.close();
}