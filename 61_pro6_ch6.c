#include <stdio.h>
void changeValue(int g){
    printf("the functional value of the copy variable is %d\n", 10*(g));
}
int main(){
    int a = 9;
    changeValue(a);
    printf("the orignal value of main variable is %d\n", a);
    return 0;
}