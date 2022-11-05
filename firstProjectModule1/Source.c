// Blaise Como
// 9/6/2022
// Module 1 Assignment 2

#include <stdio.h>

int main(void) {

	// Count variable will be used to prevent infinite loops
	int count = 0;

	// Flag variable used to exit while loop
	unsigned int flag = 0; 

	// While loop that runs the program until user wishes to leave by pressing -1
	while (flag != -1) {

		unsigned int userInput = 0;
		
		// Printf and Scanf statements grab user input
		printf("Input integer to determine if it is even or odd (-1 to close program): ");
		scanf_s("%i", &userInput);

		// If Else statements determine what action user wants to take
		if (userInput == -1) {
			flag = -1;
		}
		else if (userInput % 2 == 0 || userInput == 0) {
			printf("Even\n");
		}
		else {
			printf("Odd\n");
		}

		// Count is incremented each loop
		count++;

		// If count ever goes above 10000 (unlikely unless an infinite loop is occuring) then the program will end 
		if (count >= 10000) {
			return 0;
		}
		
	}

	return 0;

}