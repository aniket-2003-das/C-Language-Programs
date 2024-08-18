#include <stdio.h>

int main(){
    int marks[4];
    int* ptr;
    // ptr = &marks[0];
    ptr = marks; // simply mentioning marks would assign pointer to the 1st element of array.
    for(int i = 0; i<4; i++){
        printf("enter the marks of student %d-:\n", i+1);
        scanf("%d", ptr);
        ptr++;
    }
    for(int i = 0; i<4; i++){
        printf("The marks of student %d is-: %d\n", i+1, marks[i]);
    }
    return 0;
}