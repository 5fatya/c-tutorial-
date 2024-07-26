#include <stdio.h> 
#include <limits.h> // // Include the limits.h header to use INT_MAX

int main(){

int a = 10;
int b = 20;
int c = 30;



printf("%d + %d = %d\n", a, b, c);

printf("%ld\n", sizeof(a)); // sizeof is a function to show us the size of the variable 
printf("%ld\n", sizeof(b));
printf("%ld\n", sizeof(c));
printf("%ld\n", sizeof(a+b)); // this is the size of the sum of the variables
printf("%ld\n", sizeof(a+b+c)); // this is the size of the sum of the


int d = 2147483647;
printf("%d\n", d);
printf("%ld\n", sizeof(d));

printf("INT MAX VALUE: %d\n", INT_MAX); // Print the maximum value of an int
printf("INT MIN VALUE: %d\n", INT_MIN);

short e = 500; 
printf("%d\n", e);
printf("%ld\n", sizeof(e));
printf("SHORT MAX VALUE: %d\n", SHRT_MAX); // Print the maximum value of a short int
printf("SHORT MIN VALUE: %d\n", SHRT_MIN);


long f = 3422277191;
long long h = 12345678976;
printf("%ld\n", f);
printf("%lld\n", h);

printf("size long %ld\n", sizeof(f));
printf("size long long %ld\n", sizeof(h));

printf("LONG MAX VALUE: %ld\n", LONG_MAX); // Print the maximum value of a long int
printf("LONG LONG MAX VALUE: %lld\n", LLONG_MIN);


unsigned int g = 3547493757;
printf("%u\n", g); // %u is for unsigned 

unsigned long int x = 214748364722339;
printf("%lu\n", x); 
printf("UNSIGNED LONG LONG MAX: %lu\n", ULONG_MAX);




    return 0;
}