#include <stdio.h>
float Force(float mass);
int main(){
    float mass;
    printf("enter value of mass in kgs-:\n");
    scanf("%f", &mass);
    printf("the value of force in newton is %0.3f N", Force(mass)); // 3 decimal points are calculated.
    return 0;
}
float Force(float mass){
    float result = mass * 9.8;
    return result;
}
