// Include necessary libraries
#include <stdio.h>
#include <math.h>

// Function rounds given value to nearest integer
double nearestInt(double value) {
	double returnValue = floor(value * 1 + .5) / 1;
	return returnValue;
}

// Function rounds given value to tenths place
double tenthPlace(double value) {
	double returnValue = floor(value * 10 + .5) / 10;
	return returnValue;
}

// Function rounds given value to hundredths place
double hundredthPlace(double value) {
	double returnValue = floor(value * 100 + .5) / 100;
	return returnValue;
}

// Function rounds given value to thousandths place
double thousandthPlace(double value) {
	double returnValue = floor(value * 1000 + .5) / 1000;
	return returnValue;
}

int main(void) {

	// User input variable that will hold the user input
	double userInput = 0;
	// Count variable to protect against infinite loops
	int count = 0;

	// While loop allows program to run until user enters -1
	while (1) {

		// Count is incremented on every loop
		count++;

		if (count == 10000) {
			break;
		} 

		// User is prompted to enter a value and the value is scanned into variable declared above
		printf("Input value with any number of decimal points to be rounded (input -1 to end program): ");
		scanf_s("%lf", &userInput);

		// Causes while loop to end if user inputs -1
		if (userInput == -1) {
			break;
		}
		// Value is printed with different rounding formats using functions declared above
		else {
			printf("Original Value: %lf\n", userInput);
			printf("Rounded to the nearest integer: %lf\n", nearestInt(userInput));
			printf("Rounded to the tenths place: %lf\n", tenthPlace(userInput));
			printf("Rounded to the hundredths place: %lf\n", hundredthPlace(userInput));
			printf("Rounded to the thousandths place: %lf\n\n", thousandthPlace(userInput));
		}

	}

	return 0;

}