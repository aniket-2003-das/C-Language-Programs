#include <stdio.h>

int main(){
    int phy, chem, math;
    float total;
    printf("enter phy marks.\n");
    scanf("%d", &phy);

    printf("enter chem marks.\n");
    scanf("%d", &chem);

    printf("enter math marks.\n");
    scanf("%d", &math);

    total = (phy + chem + math)/3;

    if ((total<40) || phy<33 || chem<33 || math<33 ){
        printf("your percentage is percentage is %f and you failed\n", (int)total); // type casting into integers.
    }
    else{
        printf("your percentage is percentage is %f and you passed\n", (int)total);
    }
    return 0;
}