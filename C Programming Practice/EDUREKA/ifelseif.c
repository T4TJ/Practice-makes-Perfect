#include <stdio.h>

int main()
{
    int number;
    printf("Enter a number");
    scanf("%d", &number);

    if (number >= 10 && number <= 20)
    {
        printf("You are still on the right track");
    }
    else if (number >= 21 && number <= 30)
    {
        printf("You are close to the final answer");
    }
    else if (number >= 31 && number <= 35)
    {
        printf("You go the answer right. Kudos to you");
    }
    else
    {
        printf("You failed the fisrt attempt. Try again!!");
    }

    return 0;
}