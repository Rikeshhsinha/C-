#include <stdio.h>

int main()
{
    int a, b, c;

    printf("enter the number a:", a);
    scanf("%d", &a);

    printf("enter the number b:", b);
    scanf("%d", &b);

    printf("enter the number c:", c);
    scanf("%d", &c);

    if (a > b && a > c)
    {
        printf("a=%d is the largest number", a);
    }
    else if (b > c && b > a)
    {
        printf("b=%d is the largest number", b);
    }
    else if (c > a && c > b)
    {
        printf("c=%d is the largest number", c);
    }
    else
    {
        printf("All numbers are equal");
    }
    return 0;
}