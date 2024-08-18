#include <stdio.h>

int main()
{
    int a; // could be float also.
    printf("enter the value of a \n");
    scanf("%d", &a);
    while (a <= 10)
    {
        printf("%d\n", a);
        a++;
    }

    return 0;
}