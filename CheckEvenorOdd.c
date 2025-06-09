#include <stdio.h>

int main()
{
    int a;

    printf("enter the number :", a);
    scanf("%d", &a);

    int num = a % 2;

    if (num == 0)
    {
        printf("The number is Even");
    }
    else
    {
        printf("The number is Odd");
    }

    return 0;
}