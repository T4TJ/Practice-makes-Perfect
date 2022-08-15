#include <stdio.h>

int main()
{
    int number;
    printf("Enter a number");
    scanf("%d", &number);

    if (number % 2 == 0)
        printf("The you entered is %d and it is an even number", number);
    else
    {
        printf("The number you is %d and it an odd number", number);
    }
    return 0;
}