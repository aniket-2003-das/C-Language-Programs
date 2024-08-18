#include <stdio.h>
int sum(int a, int b);
// sum is a function which takes a nd b as input and returns integer as output.
int main()
{
    int c;
    c = sum(21, 53);
    printf("The value of c is %d\n", c);
    return 0;
}

int sum(int a, int b)
{
    int result;
    result = a + b;
    return result;
}