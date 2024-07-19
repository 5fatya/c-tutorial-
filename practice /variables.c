// variables and print output 
#include <stdio.h>





int main()
{
    int age; //variable declaration
    // int stores integer values
// int can also store data types like floats and doubles
age = 25 ; // variable initilzation 

// but also we can write as 

/* int age = 25; */

printf("c programming is %d\n", age); 

age = 31; 
printf("new age: %d\n", age); 

int firstNumber = 10;
printf("first number = %d\n", firstNumber);

int secondNumber = firstNumber; 
printf("second = %d\n", secondNumber);

// variables with more details 

int x; // declaration 
x = 123; //initialization 
int y = 321; //declaration + initialization 

float GPA = 2.66; 
char grade = 'c'; 
char name[] = "bro"; // array of characters 

printf("hello %s\n", name); // to declare a character array we use %s
printf("you are %d years old\n", age); // you can put the declaration anywhere you want it in the sentence
printf("the average grade is %.2c\n", grade); // to declare character we use %c
printf("the average GPA is %.2f\n", GPA); // to declare float we use %f

  
  
  
    return 0;
}
