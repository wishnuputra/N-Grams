// This is the CPP file you will edit and turn in.
// Also remove these comments here and add your own.
// TODO: remove this comment header

#include <cctype>
#include <cmath>
#include <fstream>
#include <iostream>
#include <string>
#include "console.h"
#include "map.h"
#include "filelib.h"
#include "simpio.h"

using namespace std;

void welcomeMessage();
void buildMap(Map<string, string> &map);

int main() {
    Map<string,string> map;

    welcomeMessage();
    buildMap(map);


    cout << "Exiting." << endl;
    return 0;
}

void welcomeMessage() {
    cout << "Welcome to Random Writer ('N-Grams')." << endl;
    cout << "This program makes random text based on a document." << endl;
    cout << "Give me an input file and an 'N' value for groups" << endl;
    cout << "of words, and I'll create random text for you." << endl;
    cout << endl;
}

void buildMap(Map<string, string> &map) {
    ifstream input;
    promptUserForFile(input, "Input file name? ");
    int N = getInteger("Value of N? ");
    string word;
    while (input >> word) {

    }
}
