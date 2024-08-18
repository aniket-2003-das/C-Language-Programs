#include <stdio.h>
#include <stdlib.h>

int main(){
    int *ptr, *ptr2;
    ptr = (int *) malloc(6 * sizeof(int));
    for (int i = 0; i < 600000; i++)
    {
        ptr2 = (int *) malloc(6 * sizeof(int));
        printf("Enter the value of %d element -:\n", i);
        scanf("%d", &ptr[i]);
        free(ptr2);
    }
    for (int i = 0; i < 600000; i++)
    {
        printf("the value of %d element is -: %d\n", i, ptr[i]);
    }
    return 0;
}