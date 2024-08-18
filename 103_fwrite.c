#include <stdio.h>

int main(){
    FILE *fptr;
    int number = 45;
    fptr = fopen("sampleC2.txt", "w");
    fprintf(fptr, "the value of number is %d\n", number);
    fprintf(fptr, "we used fprint to write the above line.");
    fclose(fptr);
    return 0;
}