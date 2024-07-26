#include <stdio.h>

int main(){

    int number;
printf("enter the number between 1 to 7: ");
scanf("%d", &number);

switch (number) { 
    case 1:
    printf("sunday");
    break;
    case 2:
printf("monday");
break;
case 3:
printf("tuesday");
break;
case 4:
printf("wednesday");
break;
case 5:
printf("thursday");
break;
case 6:
printf("friday");
break;
case 7:
printf("saturday");
break;

default:
printf("invalid number");
}

    return 0; 
}