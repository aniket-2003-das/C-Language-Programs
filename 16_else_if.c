#include <stdio.h>

int main()
{
    int num;
    int fraudcard=1;
    // fraudcard=1; // fraudcard activation.
    printf("enter your num\n");
    scanf("%d", &num);
    if (num == 45)
    {
        printf("you won lottery of 1000 rs.");
    }
    else if (num == 32)
    {
        printf("you won lottery of 10k rs.");
    }
    else if (num == 79)
    {

        printf("you won a lottery of 1 lakh rs.");
    }
    else if (fraudcard==1)
    {
        printf("you won a lottery of 1 lakh rs."); // if won lottery using fraudcard when  num = 45,32,79 write its elif above and first.
        
    }
    else
    {
        printf("you didnt won anything.");
    }
}