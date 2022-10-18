#include <stdio.h>
#include <string.h>

int main(void) {

    // Test code to specify how typecasting works
    // In this case, the ascii decimal value of '2' is 50, so subtracting it by 48 converts it to 2
    // This works for all other char integers as well
    //char x = (int)('2') - 48;

    //printf("%d\n", x);

    // Integer to hold the final sum
    long int sum = 0;
    
    // Array of 4 strings that can each hold 100 chars
    char arrayOfInputs[4][100];

    // For loop used to get user input 
    for (int i = 1; i <= 4; i++) {

        // String that can hold 100 chars
        char userInput[100];

        printf("Please input number %d: ", i);
        scanf("%s", userInput);
        // Using strcpy to copy the user input into the specified index of the array that is outside the loop
        strcpy(arrayOfInputs[i-1], userInput);

    }

    // For loop used to iterate through the array
    for (int i = 0; i < 4; i++) {

        // This will be the num that values are added to
        // This value will then be added to the sum after the end of the inner for loop
        int currentNum = 0;
        // This variable will help with place values 
        int multiplier = 1;

        // Variable will hold the length of the current string
        int stringCount = 0;

        // Loop is used to get the length of the current string
        // The \0 terminating value is used as the sentinel
        // This loop is mostly necessary to get the correct multiplier value
        while (arrayOfInputs[i][stringCount] != '\0') {
            multiplier *= 10;
            stringCount++;
        }

        // This loops iterates through the current string
        // It multiplies the current char value (converted to an integer) by the multiplier 
        // to give it the correct value and then adds it to current num
        // The final number only matches the number in the string after this loop has finished
        // You can uncomment the print statement in the loop to see how this works in a more visual way!!
        for (int x = 0; x < stringCount; x++) {

            // Current char gets converted to int using typecasting
            char num = (int)(arrayOfInputs[i][x]) - 48;
            
            // Multiplier initially needs to be divided by 10
            multiplier /= 10;

            // Current char is multiplied by the multiplier and made into a long int 
            long int newNum = num * multiplier;

            currentNum += newNum;

            //printf("%ld\n", newNum);

        }

        // Used for newline
        puts("");

        // The current number is added to the sum
        sum += currentNum;

    }

    // Sum is printed
    printf("The final sum is: %ld\n", sum);

    return 0;

}