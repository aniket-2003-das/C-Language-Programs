#include <stdio.h>

int main(){
    FILE *ptr;
    int num;
    printf("enter an integer to print its table\n");
    scanf("%d", &num);
    ptr = fopen("pr02_ch10.txt", "w");
    for (int i = 0; i<10; i++){
        fprintf(ptr, "%d X %d = %d\n", num, i+1, num*(i+1));
    }
    fclose(ptr);
    printf("table generated in pr02_ch10.txt.");
    return 0;
}