#include <stdio.h>
// print N natural numbers in reverse order
int main(){
    int n;
    printf("enter the value of n\n");
    scanf("%d", &n);
    for (int i = n; i; i--)
    {
        printf("the value of i is %d\n", i);
    }
    return 0;
}