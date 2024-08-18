#include <stdio.h>
void Decrypt(char *c){
    char *ptr = c;
    while(*ptr!='\0'){
        *ptr = *ptr - 1;
        ptr++;
    }
}

int main(){
    char c[] = "Ifmmp!xpsme!uijt!jt!d!mbohvbhf";
    Decrypt(c);
    printf("Decrypted string is-: %s", c);
    return 0;
}