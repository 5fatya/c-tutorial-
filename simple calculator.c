#include <stdio.h>

int main(){

char operator;
printf("choose an operator ['+', '-', '*', '/' ]");
scanf(" %c", &operator);

double num1, num2;
printf("Enter first number: ");
scanf("%lf", &num1);

printf("Enter second number: ");
scanf("%lf", &num2);

double result;

switch(operator){
case '+':
result = num1 + num2;
break;
case '-':
result = num1 - num2;
break;
case '*':
result = num1 * num2;
break;
case '/':
result = num1 / num2;
break;

  default:
            printf("Invalid operator!\n");
            return 1;
}

 printf("The result is: %lf\n", result);

    return 0;
}