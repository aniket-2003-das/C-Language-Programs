#include <stdio.h>
void printArray(int ptr[], int n) // int*ptr
{
    for(int i = 0; i<n;i++){
        printf("the value of element %d is %d\n", i+1, ptr[i]);   //, *(ptr + i)
    }
    ptr[2] = 55; // array changes as its call by reference.
}
int main(){
    int arr[]= {17,22,43,34,36,64,23};
    printArray(arr,7);
    printf("%d\n", arr[2]);  // array changes as its call by reference.
    return 0;
}