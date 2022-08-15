#include <stdio.h>

int main()
{
    int v1, v2;
    printf("Enter First digit\n");
    scanf("%d", &v1);
    printf("Enter second digit\n");
    scanf("%d", &v2);

    if (v1 != v2)
    {
        printf("\nThe fisrt digit is not equal to the second digit\n");
        if (v1 < v2)
        {
            printf("\nThe fisrt digit is not equal to the second digit\n");
        }
        else
        {
            printf("\nThe second digit is greater than the first digit\n");
        }
    }
    printf("First digit is equal to second digit");

    return 0;
}