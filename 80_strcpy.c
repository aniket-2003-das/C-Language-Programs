#include <stdio.h>
#include <string.h>

int main(){
    char *st = "New string.";
    char st2[45];
    strcpy(st2, st);
    printf("now the str2 string is %s", st2);
    return 0;
}