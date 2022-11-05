// Blaise Como
// 09/24/2022
// Module 2 Assignment 1

/* While testing, I tried to make it so that scanf_s would read only numbers by making sure that it's return value was not equal to zero,
if it was, I tried to output a print statemtent that would ask the user to input a number. I could not get this to work however as an 
infinite loop would keep occuring. Do know what the best way to approach this would be? Or is this just not really achievable using scanf_s?
*/


#include <stdio.h>

int main(void) {
	
	// Variable will keep count of how many values the user has input
	int count = 0;

	// Variable will help prevent infinite loops
	int infinite_count = 0;

	// All of the user inputs will be added to this variable
	double totalAverage = 0;

	// Loop will continue to run until user enters -1 or infinite_count exceeds 100,000
	while (1) {

		if (infinite_count >= 100000) {
			return -1;
		}

		infinite_count++;

		// Variable for user input
		double tempVariable = 0;

		// The prompt for the user input is printed and user input is scanned using scanf_s
		printf("Enter a positive number that you would like to add to the average (must be a number) (Enter -1 to end the program and print the average): ");
		scanf_s("%lf", &tempVariable);

		// Checks for case where user inputs -1 without entering any positive values first
		// A division by 0 would occur otherwise
		if (tempVariable == -1 && count == 0) {

			printf("No values have been input");
			return 0;

		}
		// Checks for case where user enters a negative number
		else if (tempVariable < -1) {

			printf("Please input a positive number!\n");
			continue;

		}
		// Checks for case where user wants to end program
		else if (tempVariable == -1) {
			
			break;

		}
		// Checks for case where user inputs a valid number
		// User input is then added to totalAverage and count is incremented
		else {

			totalAverage += tempVariable;
			count++;

		}

	}

	// Average is printed
	printf("The average is %.2lf", (totalAverage / count));

	return 0;

}