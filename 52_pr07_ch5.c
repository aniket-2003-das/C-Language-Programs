#include <stdio.h>
void StarPattern(int n);
int main(){
    int n = 4;
    StarPattern(n);
    return 0;
}
void StarPattern(int n){ // in void function dont return 0.
    if (n==1){
        printf("*\n");
        return;
    }
    StarPattern(n-1);
    for(int i=0;i<(2*n-1);i++){
        printf("*");
    }
    printf("\n");
}