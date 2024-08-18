// lower case check detecter. ASCII-lower(97-122)
#include <stdio.h>

int main(){
    char ch;
    printf("enter the charectar\n");
    scanf("%c", &ch);

    if (ch<=122 && ch>=97){
        printf("the chatrectar %c is lowercase. ");
    }
    else{
        printf("the chatrectar %c is lowercase. ");
    }
    return 0;
}