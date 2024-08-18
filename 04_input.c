#include <stdio.h>
// in scanf we use "&".
int main()
{
    int a, b;
    printf("enter the value of a\n");
    scanf("%d", &a);
    printf("enter the value of b\n");
    scanf("%d", &b);
    printf("the sum of a and b is %d\n", a+b);
    return 0;
}