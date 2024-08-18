#include <stdio.h>
#include <string.h>
void slice(char *st, int m, int n){
    int i = 0;
    while((i+m)<n){
        st[i] = st[i+m];
        i++;
    }
    st[i] = '\0';
}
int main(){
    char st[] = "helloWorldThisisCLanguage";
    slice(st, 4, 17);
    printf("%s", st);
    return 0;
}