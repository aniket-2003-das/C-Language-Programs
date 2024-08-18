#include <stdio.h>
#include <string.h>
typedef struct employee
{
    int code;
    float salary;
    char name[18];
} emp;
void show (struct employee emp1){
    printf("employee code is -: %d\n", emp1.code);
    printf("employee salary is -: %.2f\n", emp1.salary);
    printf("employee name is -: %s\n", emp1.name);
    emp1.code = 34;
}
int main(){
    // Declaring e1 and pt.
    emp e1;
    emp *ptr;
    // pointing ptr to e1.
    ptr = &e1;
    // set the member values  for e1.
    (*ptr).code = 100;
    (*ptr).salary = 34.56;
    strcpy((*ptr).name, "Aniket");
    show(e1);
    printf("employee code is -: %d\n", e1.code); // Structural cpoy is given to the show so e1.code wont changes.
    return 0;
}