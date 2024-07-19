#include <stdio.h>
/*1. Arithmetic Operators
+ (Addition)
- (Subtraction)
* (Multiplication)
/ (Division)
% (Modulus)
2. Relational Operators
== (Equal to)
!= (Not equal to)
> (Greater than)
< (Less than)
>= (Greater than or equal to)
<= (Less than or equal to)
3. Logical Operators
&& (Logical AND)
|| (Logical OR)
! (Logical NOT)
4. Bitwise Operators
& (Bitwise AND)
| (Bitwise OR)
^ (Bitwise XOR)
~ (Bitwise NOT)
<< (Left shift)
>> (Right shift)
5. Assignment Operators
= (Assignment)
+= (Add and assign)
-= (Subtract and assign)
*= (Multiply and assign)
/= (Divide and assign)
%= (Modulus and assign)
&= (Bitwise AND and assign)
|= (Bitwise OR and assign)
^= (Bitwise XOR and assign)
<<= (Left shift and assign)
>>= (Right shift and assign)
6. Increment and Decrement Operators
++ (Increment)
-- (Decrement)
7. Conditional (Ternary) Operator
? :
8. Comma Operator
,
9. Sizeof Operator
sizeof
10. Pointer Operators
* (Dereference)
& (Address-of)*/
int main() {
    int a = 10, b = 20;
    int result; // Variable declaration

    // Arithmetic Operators
    result = a + b;
    printf("a + b = %d\n", result); // // Displays the result of a + b

    result = b - a; // bunu qoymasam ne olacag 
    printf("b - a = %d\n", result); // // Displays the result of b - a

    result = a * b;
    printf("a * b = %d\n", result);

    result = b / a;
    printf("b / a = %d\n", result);

    result = b % a;
    printf("b %% a = %d\n", result);

    // Relational Operators
    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);
    printf("a > b: %d\n", a > b);
    printf("a < b: %d\n", a < b);
    printf("a >= b: %d\n", a >= b);
    printf("a <= b: %d\n", a <= b);

    // Logical Operators // we use this more 
    printf("(a < b) && (a > 5): %d\n", (a < b) && (a > 5)); 
    printf("(a < b) || (a > 15): %d\n", (a < b) || (a > 15));
    printf("!(a < b): %d\n", !(a < b)); 

    // Bitwise Operators
    printf("a & b: %d\n", a & b);
    printf("a | b: %d\n", a | b);
    printf("a ^ b: %d\n", a ^ b);
    printf("~a: %d\n", ~a);
    printf("a << 1: %d\n", a << 1);
    printf("a >> 1: %d\n", a >> 1);

    // Assignment Operators
    result = a;
    result += b;
    printf("result += b: %d\n", result);
    result -= b;
    printf("result -= b: %d\n", result);
    result *= a;
    printf("result *= a: %d\n", result);
    result /= a;
    printf("result /= a: %d\n", result);
    result %= a;
    printf("result %%= a: %d\n", result);

    // Increment and Decrement Operators
    a++;
    printf("a++: %d\n", a);
    a--;
    printf("a--: %d\n", a);

    // Conditional Operator
    result = (a < b) ? a : b;
    printf("Conditional (a < b) ? a : b: %d\n", result);

    // Comma Operator
    result = (a = 1, b = 2, a + b);
    printf("Comma Operator result: %d\n", result);

    // Sizeof Operator
    printf("Sizeof int: %lu\n", sizeof(int));
    printf("Sizeof float: %lu\n", sizeof(float));
    printf("Sizeof double: %lu\n", sizeof(double));

    // Pointer Operators
    int *ptr = &a;
    printf("Address of a: %p\n", ptr);
    printf("Value of a through ptr: %d\n", *ptr);

    return 0;
}
