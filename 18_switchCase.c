#include <stdio.h>

int main(){
    int rating;
    printf("enter your rating (1-5)\n");
    scanf("%d", &rating);
    switch (rating)
    {
    case 1: // 1,2,3,4,5 are naming contants can also name its as case i1.
        printf("your rating is 1.\n");
        break;
    case 2:
        printf("your rating is 2.\n");
        break;
    case 3:
        printf("your rating is 3.\n");
        break;
    case 4:
        printf("your rating is 4.\n");
        break;
    case 5:
        printf("your rating is 5.\n");
        break;
    default:
        printf("invalid rating");
        break;
    }
    return 0;
}