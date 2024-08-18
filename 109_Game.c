#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int snakeWaterGun(char you, char computer)
{
    if (you == computer)
    {
        return 0;
    }

    if (you == 's' && computer == 'g')
    {
        return -1;
    }
    else if (you == 'g' && computer == 's')
    {
        return 1;
    }

    if (you == 's' && computer == 'w')
    {
        return 1;
    }
    else if (you == 'w' && computer == 's')
    {
        return -1;
    }

    if (you == 'g' && computer == 'w')
    {
        return 1;
    }
    else if (you == 'w' && computer == 'g')
    {
        return -1;
    }
}

int main()
{
    char you, computer;
    int number = rand() % 100 + 1;
    if (number <= 33)
    {
        computer = 's';
    }
    else if (number > 33 && number < 66)
    {
        computer = 'w';
    }
    else
    {
        computer = 'g';
    }
    printf("Enter 's for Snake, 'w for Water and 'g' for Gun-:\n");
    scanf("%c", &you);
    int result = snakeWaterGun(you, computer);
    printf("You choosed-: %c\nComputer choosed-: %c.\n", you, computer);
    if (result == 0)
    {
        printf("Game Drawn.\n");
    }
    else if (result == 1)
    {
        printf("You Win.\n");
    }
    else
    {
        printf("You Lose.\n");
    }
    return 0;
}