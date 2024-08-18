#include <stdio.h>
#include <string.h>
struct employee
{
    int code;
    float salary;
    char name[10];
};

int main(){
    int a = 34;
    char b = 'g';
    float d = 32.76;
    struct employee e1;
    e1.code = 100;
    e1.salary = 34.56;
    // e1.name = "Aniket"; // wont work
    strcpy(e1.name, "Aniket");
    printf("%s\n", e1.name);
    printf("%.3f\n", e1.salary);
    printf("%d\n", e1.code);
    return 0;
}