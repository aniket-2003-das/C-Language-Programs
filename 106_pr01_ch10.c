#include <stdio.h>

int main(){
    FILE *ptr;
    int a, b, c;
    ptr = fopen("pr01_ch10.txt", "r");
    fscanf(ptr, "%d %d %d", &a, &b, &c);
    printf("the values of a  b and  c are %d %d %d", a, b, c);
    return 0;
}