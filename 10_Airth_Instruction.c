#include <stdio.h>
#include <math.h>
// a and b are operand and +-*/ are airthmatic operators.
int main()
{
    int a = 4;
    int b = 8;
    int z = b * a;
    // int b*a = z; //we cant write its illegal.
    printf("the value of a + b is: %d\n", a + b);
    printf("the value of a - b is: %d\n", a - b);
    printf("the value of a * b is: %d\n", a * b);
    printf("the value of b / a is: %d\n", b / a);
    printf("the value of a / b is: %d\n", a / b); // gives 0 for fractional values as int operator int is a int.
    printf("5 when divided by 2 gives a remainder of %d\n", 5 % 2);
    printf("5 when divided by 2 gives a remainder of %d\n", -5 % 2);// sign of first operand.
    printf("5 when divided by 2 gives a remainder of %d\n", 5 % -2);
    printf("5 when divided by 2 gives a remainder of %d\n", -5 % -2);// sign of first operand.
    // No operator is assumed to be present we always have to call for operators.
    // There is no operator to perform exponentiation 4^5 is logical bitwise XOR operator.
    printf("4 raised to the power of 5 is %f\n", pow(4,5));
    printf("the value of 6 + 5 is %d\n", 6 + 5);
    printf("the value of 6 + 5.6 is %f\n", 6 + 5.6);
    printf("the value of 6.2 + 5.6 is %f\n", 6.2 + 5.6);
    return 0;
}