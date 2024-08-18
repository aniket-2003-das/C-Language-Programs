#include <stdio.h>

int main(){
    char *ptr = "Paa Bhai";
    char pointer[11]= "Suu Bhai";
    ptr = "Paa Bhai is great."; // We cant change array named pointer.
    printf("%s\n", ptr);
    printf("%s", pointer);
    return 0;
}