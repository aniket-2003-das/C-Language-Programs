#include <stdio.h>

int main(){
    char s[34];
    printf("enter your name-:\n");
    gets(s); //Inputs multi words string. Reads from standard input.
    printf("your name is %s\n", s);
    puts(s); //reads the string input from standard output.
    return 0;
}