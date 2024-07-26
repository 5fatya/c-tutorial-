#include <stdio.h>

int main()
{
    int age; 

    printf("\nEnter your age: ");
    scanf("%d", &age); // scanf is used to type in the variable 

    if(age >= 18){ // greater than or equal
    printf("now you are signed up!");
}
else if(age < 0){ // less than <

    printf(" you haven't been born yet");
}
 else if(age == 0){
        printf("You can't sign up! You were just born!");
    }

else{

    printf("you are not allegable to sign in");
}

    return 0;
}