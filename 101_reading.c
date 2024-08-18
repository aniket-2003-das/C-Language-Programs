#include <stdio.h>

int main(){
    FILE *ptr;
    int num, num2;
    ptr = fopen("sampleC.txt", "r");
    fscanf(ptr, "%d", &num);
    fscanf(ptr, "%d", &num2);
    printf("the value of num is %d\n", num);
    printf("the value of num is %d\n", num2);
    fclose(ptr);
    return 0;
}