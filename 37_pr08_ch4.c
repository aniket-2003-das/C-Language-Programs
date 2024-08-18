#include <stdio.h>

int main()
{
    int i = 0, n = 9, factorial = 1;
    for (i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    printf("the value of factorial of %d is %d", n, factorial);
    return 0;
}