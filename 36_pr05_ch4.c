#include <stdio.h>

int main(){
    int i, sum, n = 10;
    for (i = 1; i <= n; i++)
    {
        sum+=i;
    }
    printf("the value of sum (1 to 10) is %d", sum);
    return 0;
}