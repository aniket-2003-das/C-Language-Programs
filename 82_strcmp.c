#include <stdio.h>
#include <string.h>
int main(){
    char st1[45] = "Hello";
    char *st2 = "Hallo";
    int val = strcmp(st1, st2); // 0 for same ascii values in string. had produced -1 if ascii(str1)-ascii(str2) would give a negetive value.
    printf("now the val is %d", val); // +1 as ascii(e)-ascii(a) = (+)ve.
    return 0;
}