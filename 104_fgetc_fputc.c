#include <stdio.h>

int main(){
    FILE *ptr;
    // ptr = fopen("sampleC2.txt", "r");
    // char c = fgetc(ptr); // reading charectar by charectar
    // printf("the value of my charectar is %c\n", fgetc(ptr));
    // printf("the value of my charectar is %c\n", fgetc(ptr));
    // printf("the value of my charectar is %c\n", fgetc(ptr));
    // printf("the value of my charectar is %c\n", fgetc(ptr));
    // printf("the value of my charectar is %c\n", fgetc(ptr));
    // printf("the value of my charectar is %c\n", fgetc(ptr));
    // printf("the value of my charectar is %c\n", fgetc(ptr));
    // printf("the value of my charectar is %c\n", fgetc(ptr));
    // printf("the value of my charectar is %c\n", fgetc(ptr));
    ptr = fopen("sampleC.txt", "w");
    putc('c', ptr);
    putc('c', ptr);
    putc('c', ptr);
    fclose(ptr);
    return 0;
}