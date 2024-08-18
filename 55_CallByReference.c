#include <stdio.h>
void wrongSwap(int a, int b);
void swap(int*a, int*b);
int main(){
    int x=3, y=4;
    printf("the value of x and y before swap is %d and %d\n", x,y);
    // wrongSwap(x,y); // dont work due to call by value.
    swap(&x,&y); // will work due to call by reference.
    printf("the value of x and y after swap is %d and %d\n", x,y);
    return 0;
}

void wrongSwap(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
