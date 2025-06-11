#include <stdio.h>

int main()
{
    char operator;
    double num1, num2, result;

    printf("Enter an operator (+, -, *, /): ", operator);
    scanf("%c", &operator);

    printf("Enter numbers 1: ", num1);
    scanf("%lf", &num1);

    printf("Enter numbers 2: ", num2);
    scanf("%lf", &num2);

    switch (operator)
    {
    case '+':
        result = num1 + num2;
        printf("Result: %lf\n", result);
        break;
    case '-':
        result = num1 - num2;
        printf("Result: %lf\n", result);
        break;
    case '*':
        result = num1 * num2;
        printf("Result: %lf\n", result);
        break;
    case '/':
        if (num2 != 0)
            result = num1 / num2;
        else
        {
            printf("Error! Numerator must be non  zero.\n");
            break;
        }
        printf("Result: %lf\n", result);
        break;
    default:
        printf("Invalid operator\n");
    }

    return 0;
}
