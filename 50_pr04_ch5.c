// fibonacci(n) = fibonacci(n-1) + fibonacci(n-2) and fibonacci(1) = 0, fibonacci(2) = 1
#include <stdio.h>
int fibonacci(int x);
int main(){
    int a;
    printf("enter term no n(i)-:\n");
    scanf("%d", &a);
    printf("the fibonacci term n(i) is-:\n%d", fibonacci(a));
    return 0;
}
int fibonacci(int x){
    if (x==1){
        return 0;
    }
    else if (x==2)
    {
        return 1;
    }
    else{
        return fibonacci(x-1) + fibonacci(x-2);
    }
}