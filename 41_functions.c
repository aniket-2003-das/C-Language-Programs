#include <stdio.h>
void display(); // Function prototype.

int main(){
    int a;
    printf("Initialising display function.\n");
    display(); // Function call.
    printf("display function executed.\n");
    return 0;
}
// Function definition
void display(){
    printf("display functin is active.\n");
}