#include <stdio.h>

int main(){
    int i = 34; // size of integer and float is 4 byte, size of charectar is 1 byte.
    int *ptr = &i;
    char c = 'h';
    char* cptr = &c;
    float f = 4.6;
    float* fptr = &f;
    printf("the address of i is %u\n", ptr);
    ptr++;
    printf("the address of i is %u\n", ptr);
    ptr--;
    printf("the address of i is %u\n", ptr);
    ptr = ptr + 2;
    printf("the address of i is %u\n", ptr);
    ptr = ptr - 1;
    printf("the address of i is %u\n\n", ptr);

    printf("the value of cptr is %u\n", cptr);
    cptr++;
    printf("the value of cptr is %u\n", cptr);
    cptr--;
    printf("the value of cptr is %u\n", cptr);
    cptr = cptr + 2;
    printf("the value of cptr is %u\n", cptr);
    cptr = cptr - 1;
    printf("the value of cptr is %u\n\n", cptr);

    printf("the value of fptr is %u\n", fptr);
    fptr++;
    printf("the value of fptr is %u\n", fptr);
    fptr--;
    printf("the value of fptr is %u\n", fptr);
    fptr = fptr + 2;
    printf("the value of fptr is %u\n", fptr);
    fptr = fptr - 1;
    printf("the value of fptr is %u\n\n", fptr);
    return 0;
}