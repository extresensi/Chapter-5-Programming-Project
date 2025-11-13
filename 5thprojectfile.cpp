/*
File Name: 5thprojectfile.cpp
Developer/Programmer: Charles Duncan
Date: 11/13/25
Requirements:  This program generates a random number between 1 and 100 and asks the user to guess it. After each guess, the program tells the user whether the guess was too high or too low. It continues looping until the correct number is guessed, then displays how many attempts it took.
*/


#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int guess;
    int number;
    int attempts = 0;

    // Seed the random number generator
    srand(static_cast<unsigned int>(time(0)));
    number = rand() % 100 + 1; // Random number between 1 and 100

    cout << "Guess the number (between 1 and 100): ";

    // Loop until correct guess
    do {
        cin >> guess;
        attempts++;

        if (guess > number) {
            cout << "Too high, try again: ";
        } else if (guess < number) {
            cout << "Too low, try again: ";
        }
    } while (guess != number);

    cout << "Correct! You guessed the number in " << attempts << " attempts." << endl;

    return 0;
}
