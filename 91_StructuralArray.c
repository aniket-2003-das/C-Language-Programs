#include <stdio.h>
#include <string.h>
struct employee
{
    int code;
    float salary;
    char name[10];
};
int main(){
    struct employee facebook[100];
    facebook[0].code = 100;
    facebook[0].salary = 100.54;
    strcpy(facebook[0].name, "Aniket");

    facebook[1].code = 110;
    facebook[1].salary = 103.48;
    strcpy(facebook[1].name, "Shubham");

    facebook[2].code = 120;
    facebook[2].salary = 111.22;
    strcpy(facebook[2].name, "Omar");
    
    return 0;
}