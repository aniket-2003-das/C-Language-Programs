#include <stdio.h>
void pr04Function(int a, int b, int *Add1, float *Add2)
{
    *Add1 = a + b;
    *Add2 = *Add1 / 2;
}
int main()
{
    int i = 7, j = 9;
    int *sumAdd;
    float avg;
    pr04Function(i, j, sumAdd, &avg);
    printf("the sum is %d\n", *sumAdd);
    printf("the average is %f\n", avg);
    return 0;
}