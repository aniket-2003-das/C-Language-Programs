/* income tax question.
   2.5 to 5.0 lakhs === 5%
   5.0 to 10.0 lakhs === 20%
   Above 10 lakhs === 30%
*/
#include <stdio.h>

int main()
{
    float tax = 0, income;
    printf("enter your income.\n");
    scanf("%f", &income);
    /* if (income < 2.5)
    {
        tax = tax;
    }
    */
    if (income >= 2.5 && income < 5)
    {
        tax = tax + 0.05 * (income - 2.5);
    }
    if (income >= 5 && income < 10)
    {
        tax = tax + 0.20 * (income - 5);
    }
    if (income >= 10)
    {
        tax = tax + 0.30 * (income - 10);
    }
    printf("your net income tax to be paid is %f \n", tax);
    return 0;
}