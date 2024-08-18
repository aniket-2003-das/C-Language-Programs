#include <stdio.h>
#include <string.h>

int main(){
    char *st = "Hello";
    int a = strlen(st); // Excludes the null charectar.
    printf("The length is string st is %d", a);
    return 0;
}