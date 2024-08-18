#include <stdio.h>
#include <string.h>

int main(){
    char str1[34];
    char str2[34];
    char c;
    int i = 0;

    printf("Enter the value of str1-:\n");
    scanf("%s", str1);
    printf("Enter the value of second string charectar by charectar-:\n");

    while(c!='\n'){
        fflush(stdin);
        scanf("%c", &c);
        str2[i]= c;
        i++;
    }
    str2[i-1]='\0';
    printf("the value of str1 is %s\n", str1);
    printf("the value of str2 is %s\n", str2);
    printf("strcmp for this string returns %d\n", strcmp(str1, str2));
    return 0;
}