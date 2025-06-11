#include <stdio.h>

int main()
{
    int num, r;
    int sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num != 0)
    {
        for (; num > 0;)
        {

            r = num % 10;
            sum = sum + r;
            num = num / 10;
        }

        printf("The sum of digit is: %d\n", sum);
    }
    else 
    {
        printf("Invalid input");
    }

    return 0;
}