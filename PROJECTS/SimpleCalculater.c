#include <stdio.h>

int main()
{
    char operator,choice;
    double num1, num2, result;

     do {

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter numbers 1: ");
    scanf("%lf", &num1);

    printf("Enter numbers 2: ");
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


    printf("Do you want to perform another calculation? (y= yes/n= no): ",choice);
        scanf(" %c", &choice); 

    } while (choice == 'y' || choice == 'Y');

    printf("Calculator exited.\n");



    return 0;
}
