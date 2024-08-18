// greatest of four integers.
#include <stdio.h>

int main()
{
    int integer1, integer2, integer3, integer4;
    printf("enter integer1 \n");
    scanf("%d", &integer1);

    printf("enter integer2 \n");
    scanf("%d", &integer2);

    printf("enter integer3 \n");
    scanf("%d", &integer3);

    printf("enter integer4 \n");
    scanf("%d", &integer4);

    if (integer1 > integer2)
    {
        if (integer3 > integer4)
        {
            if (integer1 > integer3)
            {
                printf("%d is the greatest", integer1);
            }
            else
            {
                printf("%d is the greatest", integer3);
            }
        }
        else
        {
            if (integer1 > integer4)
            {
                printf("%d is the greatest", integer1);
            }
            else
            {
                printf("%d is the greatest", integer4);
            }
        }
    }
    else
    {
        if (integer3 > integer4)
        {
            if (integer2 > integer3)
            {
                printf("%d is the greatest", integer2);
            }
            else
            {
                printf("%d is the greatest", integer3);
            }
        }
        else
        {
            if (integer2 > integer4)
            {
                printf("%d is the greatest", integer2);
            }
            else
            {
                printf("%d is the greatest", integer4);
            }
        }
    }
    return 0;
}