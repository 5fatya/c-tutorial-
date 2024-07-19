#include <stdio.h>
#include <limits.h> /* his header file defines the limits of integral types 
(char, short, int, long, and their unsigned versions)
*/
#include <float.h> // Include the float.h header to use FLT_MAX and DBL_MAX
/*This header file defines the limits and characteristics of floating-point
 types (float, double, and long double).
*/
int main(){

float f1 = 123456.789345667;
printf("%.20f\n", f1);
printf("size of f1: %ld\n", sizeof(f1));
printf("size of float: %ld\n", sizeof(float));

double d1 = 1234556.123456678990;
printf("%.20if\n", d1);
printf("size of double: %ld\n", sizeof(double));
printf("size of d1: %ld\n", sizeof(d1));

printf("MAX FLOAT: %e\n", FLT_MAX);  // Use %e to display the value in scientific notation
printf("MAX DOUBLE: %e\n", DBL_MAX); // Use %e to display the value in scientific notation
printf("MAX LONG DOUBLE: %e\n", LDBL_MAX); // Use %e
// Using %e instead of %f helps in displaying very large floating-point numbers in a more readable form, as scientific notation can handle such large values more gracefully.


const float p1 = 3.14159; // constant (const) = fixed value that cannot be altered by the program during its execution it stays the same 
const double p2 = 3.14159;

printf("p2: %lf\n", p2);

printf("p1: %f\n", p1);


    return 0;
}