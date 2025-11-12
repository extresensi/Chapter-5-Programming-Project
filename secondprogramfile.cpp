/*
File Name: secondprogramfile.cpp
Developer/Programmer: Charles Duncan
Date: 11/12/25
requirements: This program reads student names from a file called LineUp.txt. It counts how many names are in the file and determines which student would be first and last in line based on alphabetical order. The program assumes all names are unique and uses string comparison to find the earliest and latest names alphabetically.
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream inputFile("LineUp.txt");
    if (!inputFile) {
        cout << "Error: Could not open LineUp.txt" << endl;
        return 1;
    }

    string name;
    string firstName;
    string lastName;
    int count = 0;

    // Read the first name to initialize
    if (inputFile >> name) {
        firstName = name;
        lastName = name;
        count = 1;
    }

    // Read remaining names and update first/last alphabetically
    while (inputFile >> name) {
        count++;
        if (name < firstName) {
            firstName = name;
        }
        if (name > lastName) {
            lastName = name;
        }
    }

    inputFile.close();

    // Display results
    cout << "Number of students in class: " << count << endl;
    cout << "First in line: " << firstName << endl;
    cout << "Last in line: " << lastName << endl;

    return 0;
}
