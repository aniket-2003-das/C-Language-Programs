#include <stdio.h>

int main()
{
    int age;
    printf("enter your age\n");
    scanf("%d", &age);
    if (age >= 70)
    {
        printf("you are retired are you getting pensions regularly.");
    }
    else if (age == 18)
    {
        printf("start exploring for jobs and internships");
    }
    else if (age < 18)
    {
        printf("study hard.");
    }
    else // the last else is optional.
    {
        printf("you have to work till your retirement");
    }
    return 0;
}