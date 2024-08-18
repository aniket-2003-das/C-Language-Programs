#include <stdio.h>
void goodMorning(), goodAfternoon(), goodEvening(), goodNight();
int main()
{
    goodMorning(), goodAfternoon();
    goodEvening(), goodNight();
    return 0;
}
void goodMorning()
{
    printf("good morning\n");
}
void goodAfternoon()
{
    printf("good Afternoon\n");
}
void goodEvening()
{
    printf("good Evening\n");
}
void goodNight()
{
    printf("good Night\n");
}
