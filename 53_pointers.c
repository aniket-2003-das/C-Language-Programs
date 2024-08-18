#include <stdio.h>

int main(){
    int i = 34;
    int *j = &i; // j stores the value of address of i.
    printf("the value of i is %d\n", i);
    printf("the value of i is %d\n", *j);
    printf("the value of i is %u\n", *(&i));

    printf("the address of i is %u\n", j);
    printf("the address of i is %u\n", &i);

    printf("the value of j which is also address of i is %u\n", j);
    printf("the address of j is %u\n", &j);
    printf("the value of j which is also address of i is %u\n", *(&j));
    return 0;
}