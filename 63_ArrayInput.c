#include <stdio.h>

int main(){
    int marks[5];
    for(int i = 0; i < 5; i++)
    {
        printf("Enter the marks for student %d-:\n", i+1);
        scanf("%d", &marks[i+1]);
    }
    for(int i = 0; i < 5; i++)
    {
        printf("The marks for student %d is -: %d\n", i+1, marks[i]);
    }
    return 0;
}