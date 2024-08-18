#include <stdio.h>
#include <stdlib.h>

int main(){
    int *ptr;
    // printf("the size of int in this pc is %d\n", sizeof(int));
    // printf("the size of char in this pc is %d\n", sizeof(char));
    // printf("the size of float in this pc is %d\n", sizeof(float));
    ptr = (int *) malloc(6 * sizeof(int));
    for (int i = 0; i < 6; i++)
    {
        printf("Enter the value of %d element -:\n", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < 6; i++)
    {
        printf("the value of %d element is -: %d\n", i, ptr[i]);
    }
    return 0;
}