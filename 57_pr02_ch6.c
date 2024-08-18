#include <stdio.h>
void printAddress(int a){
    printf("the address of variable a is %u\n", &a);
}
int main(){
    int i = 4;
    printf("the value of variable i is %d\n", *&i);
    printAddress(i);
    printf("the address of variable i is %u\n", &i);
    // the above address are not same as 1 is orignal and other is pass by value copy.
    return 0;
}