#include <stdio.h>
void changeValue(int* g){
    printf("the new value is %d\n", 10*(*g));
}
int main(){
    int a = 9;
    changeValue(&a);
    return 0;
}