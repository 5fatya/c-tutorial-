#include <stdio.h>

int main(){
// while loop = checks a condition, then excutes a block of code if the condition is true 
// DO WHILE loop = always excutes a block of code once, THEN checks a CONDITION

// FOR loop = excutes a block of code a certain number of times
// FOR EACH loop = excutes a block of code for each item in a collection

int num = 0;  // Initialize variable to store user input
    int sum = 0;  // Initialize variable to store the sum of numbers

    // Start of the do-while loop
    do {
        // Prompt the user to enter a number above 0
        printf("Enter a number above 0: ");
        
        // Read the user's input and store it in 'num'
        scanf("%d", &num);
        
        // Check if the entered number is greater than 0
        if (num > 0) {
            // Add the number to 'sum' if it is greater than 0
            sum += num;
        }
    } while (num > 0);  // Repeat the loop as long as the entered number is greater than 0

    // Print the final sum of all entered numbers
    printf("Sum: %d\n", sum);

    return 0;
}
 
// this loop will keep continue until the user types 0 and then it exists