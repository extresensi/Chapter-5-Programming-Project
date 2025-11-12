/*
File Name: iluvarcraiders.cpp
Developer/Programmer: Charles Duncan
Date: 11/12/25
Requirements: This program simulates population growth over a given number of days. It asks the user for a starting population size, a daily percentage increase, and the number of days to run the simulation. The program validates the inputs to make sure they are reasonable, then uses a loop to calculate and display the population size for each day based on the growth rate.
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int startingSize;       // starting number of organisms
    double dailyIncrease;   // average daily increase (percentage)
    int days;               // number of days to multiply

    // Get starting size with validation
    cout << "Enter the starting number of organisms (must be at least 2): ";
    cin >> startingSize;
    while (startingSize < 2) {
        cout << "Invalid input. Starting size must be at least 2. Try again: ";
        cin >> startingSize;
    }

    // Get daily increase with validation
    cout << "Enter the average daily population increase (as a percentage, must be non-negative): ";
    cin >> dailyIncrease;
    while (dailyIncrease < 0) {
        cout << "Invalid input. Daily increase cannot be negative. Try again: ";
        cin >> dailyIncrease;
    }

    // Get number of days with validation
    cout << "Enter the number of days they will multiply (must be at least 1): ";
    cin >> days;
    while (days < 1) {
        cout << "Invalid input. Number of days must be at least 1. Try again: ";
        cin >> days;
    }

    // Display results
    cout << fixed << setprecision(2);
    cout << "\nPopulation Growth Over " << days << " Days\n";
    cout << "------------------------------------------\n";

    double population = startingSize;
    for (int day = 1; day <= days; day++) {
        cout << "Day " << day << ": " << population << endl;
        population += population * (dailyIncrease / 100.0);
    }

    return 0;
}
