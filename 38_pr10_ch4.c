#include <stdio.h>

int main()
{
    int i, n = 7, prime = 1;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0 && n != 2)
        {
            prime = 0;
            break;
        }
    }
    if (prime == 0)
    {
        printf("%d is not a prime number", n);
    }
    else
    {
        printf("this is a prime number");
    }
    return 0;
}