#pragma once            // only compile the stuff in here ONCE
#include <string>
#include <iostream>         // for "In Out Stream"
#include <fstream>          // for "File Stream"            // alternatively, use ifstream for reading
using namespace std;                                        // use ofstream for writing

void ReadFromFile();
void WriteToFile();
void WriteArrayToFile(string* arr, int size);
void ReadFileIntoArray(string* arr, int sizeMax);