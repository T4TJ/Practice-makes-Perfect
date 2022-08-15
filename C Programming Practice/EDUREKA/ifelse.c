#include <stdio.h>

int main()
{
    int digit;
    printf("Enter a digit");
    scanf("%d", &digit);

    if (digit == 10)
    {
        printf("The number you enetered match 10", digit);
    }
    else
    {
        printf("You entered the wrong the number");
    }
    return 0;
}