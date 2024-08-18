#include <stdio.h>
#include <string.h>
struct employee
{
    int code;
    float salary;
    char name[18];
};
void show (struct employee emp){
    printf("employee code is -: %d\n", emp.code);
    printf("employee salary is -: %.2f\n", emp.salary);
    printf("employee name is -: %s\n", emp.name);
    emp.code = 34;
}
int main(){
    struct employee e1;
    struct employee *ptr;

    ptr = &e1;
    (*ptr).code = 100;
    (*ptr).salary = 34.56;
    strcpy((*ptr).name, "Aniket");
    show(e1);
    printf("employee code is -: %d\n", e1.code); // A structural copy has been given to the function so e1.code doesnt changes.
    return 0;
}