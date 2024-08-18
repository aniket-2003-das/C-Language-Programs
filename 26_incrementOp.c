#include <stdio.h>

int main()
{
    int i = 5;
    printf("the of i is %d\n", i);
    printf("the of i++ on false increment is %d\n", i++); // first print then increment.
    printf("the of i++ on visible increment(after a false increment also) is %d\n", ++i); // first increment then print.
    i+=10; // compound assignment operator.
    printf("the of i now after increment of 10 is %d\n", i);
    return 0;
}