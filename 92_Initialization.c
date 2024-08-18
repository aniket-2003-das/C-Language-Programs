#include <stdio.h>
#include <string.h>
struct employee
{
    int code;
    float salary;
    char name[18];
};
int main(){
    struct employee Aniket ={100, 34.23, "Aniket"};

    printf("employee code is -: %d\n", Aniket.code);
    printf("employee salary is -: %.2f\n", Aniket.salary);
    printf("employee name is -: %s\n", Aniket.name);
    
    return 0;
}