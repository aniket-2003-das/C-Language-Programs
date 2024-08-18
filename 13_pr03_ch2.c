#include <stdio.h>

int main(){
    int num;
    printf("enter the number\n");
    scanf("%d", &num);
    printf("Divisibility test returns : %d\n", num%97);
    return 0;
}