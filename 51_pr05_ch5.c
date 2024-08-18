#include <stdio.h>

int main(){
    int a = 3;
    printf("%d %d %d", a, ++a, a++); // arguements are taken in order of right to left.
    return 0;
}