/*
File Name: fourthprojectfile.cpp
Developer/Programmer: Charles Duncan
Date: 11/13/25
Requirements:  This program displays two patterns using loops. Pattern A prints lines of plus signs starting with one and increasing to ten. Pattern B prints lines of plus signs starting with ten and decreasing to one. Each pattern is generated using nested for loops to control the number of characters per line.
*/

#include <iostream>
using namespace std;

int main() {
    // Pattern A
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "+";
        }
        cout << endl;
    }

    cout << endl;

    // Pattern B
    for (int i = 10; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "+";
        }
        cout << endl;
    }

    return 0;
}