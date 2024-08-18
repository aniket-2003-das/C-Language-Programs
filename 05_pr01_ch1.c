/* #include <stdio.h>

int main(){
    int length = 3, breath = 4;
    int area = length*breath;
    printf("the area of rectangle is %d", area);
    return 0;
}
*/
#include <stdio.h>

int main(){
    int length, breath;
    printf("what is the length of rectangle-:\n");
    scanf("%d", &length);
    printf("what is the breath of rectangle-:\n");
    scanf("%d", &breath);
    printf("the area of rectangle is %d", length*breath);
    return 0;
}
