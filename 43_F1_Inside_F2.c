#include <stdio.h>
// Functions inside functions.
void goodMorning(), goodAfternoon(), goodEvening(), goodNight();
int main()
{
    goodMorning(); 
    return 0;
}
void goodMorning()
{
    printf("good morning\n");
    goodAfternoon();
}
void goodAfternoon()
{
    printf("good Afternoon\n");
    goodEvening();
}
void goodEvening()
{
    printf("good Evening\n");
    goodNight();
}
void goodNight()
{
    printf("good Night\n");
}