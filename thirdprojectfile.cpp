/*
File Name: thirdprojectfile.cpp
Developer/Programmer: Charles Duncan
Date: 11/13/25
Requirements:  This program generates a bar chart showing the population growth of a town over time. It asks the user for the name of the data file and the town, then reads population figures from the file in 20-year intervals starting from 1900. For each year, it displays the year followed by a bar made of asterisks, where each asterisk represents 1,000 people. The program verifies that the file opens correctly and formats the output to clearly show population trends.
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string filename;
    string townName;
    ifstream inputFile;
    int population;
    int year = 1900;
    const int interval = 20;

    // Get file name and town name from user
    cout << "Enter the name of the data file: ";
    cin >> filename;
    cout << "Enter the name of the town: ";
    cin.ignore(); // Clear newline before getline
    getline(cin, townName);

    // Open file
    inputFile.open(filename);
    if (!inputFile) {
        cout << "Error: Could not open file " << filename << endl;
        return 1;
    }

    // Display header
    cout << "\n" << townName << " Population Growth\n";
    cout << "(each * represents 1,000 people)\n\n";

    // Read and display bar chart
    while (inputFile >> population) {
        cout << year << " ";
        for (int i = 0; i < population / 1000; i++) {
            cout << "*";
        }
        cout << endl;
        year += interval;
    }

    inputFile.close();
    return 0;
}
