#include <stdio.h>

int main(){
    int marks[4];
    printf("%d\n", marks); // will print the pointer address of first element of array.
    marks[0] = 95;
    marks[1] = 95;
    printf("Enter the marks for student 3-:\n");
    scanf("%d", &marks[2]);
    printf("Enter the marks for student 3-:\n");
    scanf("%d", &marks[3]);

    printf("you entered %d, %d", marks[2], marks[3]);
    return 0;
}