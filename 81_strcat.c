#include <stdio.h>
#include <string.h>
int main(){
    char st1[45] = " Hello";
    char *st2 = "New string.";
    strcat(st1, st2); // does not counts spaces directly pastes. 
    printf("now the str1 string is %s", st1);
    return 0;
}