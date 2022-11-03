#include <stdio.h>
int main()
{
    char operator;
    double n1, n2;
    printf("Enter any Operator (+, -, *, /): \n");
    scanf("%c", &operator);
    printf("Enter two operands: \n");
    scanf("%lf %lf", &n1, &n2);
    switch (operator)
    {
    case '+':
        printf("%.2lf+%.2lf = %.2lf", n1, n2, n1 + n2);
        break;
    case '-':
        printf("%.1lf-%.1lf = %.1f", n1, n2, n1 - n2);
        break;
    case '*':
        printf("%.1lf*%.1f = %.1lf", n1, n2, n1 * n2);
        break;
    case '/':
        printf("%.1lf/%.1lf = %.1f", n1, n2, n1 / n2);
        break;
    default:
        printf("Error! Operator is not correct");
    }
    return 0;
}
