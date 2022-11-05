// Include necessary libraries
#include <stdio.h>

int main(void) {

	// First class section: Indices 0 - 4
	// Economy section: 5 - 9
	// Array is static as it causes all values to be initialized to zero, there is also no risk of values being erased unexpectedly
	static int airPlaneSeats[10];

	// When either of these variables reach a certain number, that will indicate that section is full
	// They will also be used as indexes
	int firstClassCount = 0;
	int economyCount = 5;

	// Loop only runs 10 times, as it needs not run more than that
	for (int i = 0; i < 10; i++) {

		// Variable will hold the user input
		int userVariable = 0;
		
		printf("Please type 1 for \"first class\"\nPlease type 2 for \"economy\"\n");
		printf("Please type -1 at any time if you would like to stop purchasing tickets: ");
		scanf_s("%d", &userVariable);

		// First case checks to see if user wants to exit program
		if (userVariable == -1) {
			break;
		}

		// Second case checks if the user wants first class but first class is full
		else if (userVariable == 1 && firstClassCount >= 5) {

			printf("First class is full, if you would like a seat in economy, please type 1, otherwise, please type 2: ");
			scanf_s("%d", &userVariable);

			/*if (userVariable == 1 && economyCount >= 9) {

				puts("Economy Section is full as well, sorry for the inconvenience!");
				puts("Next flight leaves in 3 hours.");
				return 0;

			} */

			// Sub case checks if user wants to exit program
			if (userVariable == -1 || userVariable == 2) {
				puts("Next flight leaves in 3 hours.");
				return 0;
			}
			// Sub case checks if user wants seat in economy
			else if (userVariable == 1) {

				airPlaneSeats[economyCount] = 1;
				printf("Your seat is in economy class, your seat number is %d.\n", economyCount + 1);
				economyCount++;

			}

		}
		// Third case checks if the user wants economy but economy is full
		else if (userVariable == 2 && economyCount >= 10) {

			printf("Economy class is full, if you would like a seat in economy, please type 1, otherwise, please type 2: ");
			scanf_s("%d", &userVariable);

			/*if (userVariable == 1 && firstClassCount >= 4) {

				puts("First class section is full as well, sorry for the inconvenience!");
				puts("Next flight leaves in 3 hours.");
				return 0;

			}*/
			
			// Sub case checks if user wants to exit program
			if (userVariable == 2 || userVariable == -1) {

				puts("Next flight leaves in 3 hours.");
				return 0;

			}
			// Sub case checks is user wants a seat in first class
			else if (userVariable == 1) {

				airPlaneSeats[firstClassCount] = 1;
				printf("Your seat is in first class, your seat number is %d.\n", firstClassCount + 1);
				firstClassCount++;

			}

		}
		// Fourth case checks if user wants a seat in first class and first class is available
		else if (userVariable == 1) {

			airPlaneSeats[firstClassCount] = 1;
			printf("Your seat is in first class, your seat number is %d.\n", firstClassCount + 1);
			firstClassCount++;

		}
		// Fifth case checks if user wants a seat in economy and economy class is available
		else if (userVariable == 2) {

			airPlaneSeats[economyCount] = 1;
			printf("Your seat is in economy class, your seat number is %d.\n", economyCount + 1);
			economyCount++;

		}


	}

	puts("Next flight leaves in 3 hours");

	return 0;

}