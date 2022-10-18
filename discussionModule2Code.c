// Header Files to use basic C functions and rand()
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    // Randomizes the random number generator 
    srand(time(NULL));

    // Array that will hold the number of sums for each roll
    int diceRolls[11];

    // For loop that initializes all values in diceRolls to zero, they would be unknown values otherwise
    for (int x = 0; x < 11; x++) {
        diceRolls[x] = 0;
    }

    // This loop simulates the rolling of dice 36000 times
    for (int i = 0; i < 36000; i++) {

        // The rand function is used to obtain random values
        int rollOne = 1 + rand() % 6;
        int rollTwo = 1 + rand() % 6;

        // The sum of the two rolls is obtained, it is then subtracted by two to get a proper index
        int sumIndex = (rollOne + rollTwo) - 2;

        // Corresponding value in the diceRolls array is incremented based on sumIndex
        diceRolls[sumIndex]++;

    }

    // For loop that prints the sum that was rolled as well as how many times that value was rolled
    for (int i = 2; i < 13; i++) {
        printf("Number of %i's: %i\n", i, diceRolls[i-2]);
    }

    return 0;

    }