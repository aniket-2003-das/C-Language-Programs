#include <stdio.h>
int strlen(char * st){
    char *ptr = st;
    int len = 0;
    while(*ptr !='\0'){
        len++;
        ptr++;
    }
    return len;
}
int main(){
    char st[]= "Hello world";
    int length = strlen(st);
    printf("the length of the string is %d", length);
    return 0;
}