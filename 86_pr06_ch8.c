#include <stdio.h>
void encrypt(char *c){
    char *ptr = c;
    while(*ptr!='\0'){
        *ptr = *ptr + 1;
        ptr++;
    }
}

int main(){
    char c[] = "Hello world this is c language";
    encrypt(c);
    printf("Encrypted string is-: %s", c);
    return 0;
}