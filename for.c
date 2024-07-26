#include <stdio.h>

int main(){

// FOR loop = excutes a block of code a certain number of times
// FOR EACH loop = excutes a block of code for each item in a collection

for(int i = 1; i <= 10; i++) // i index is less than or equal 
{
 printf("test\n"); // first example
 printf("%d\n", i);
}
printf("second example\n");
for (int i = 0; i < 5; i++) { // second example
    printf("%d\n", i);
}

    return 0; 
} 