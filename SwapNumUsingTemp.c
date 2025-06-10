#include <stdio.h>

int main()
{
    int a, b, temp;

    printf("enter the number a :", a);
    scanf("%d", &a);

    printf("enter the number b :", b);

    scanf("%d", &b);

    temp = a;
    a = b;
    b = temp;

    printf("After swapping a = %d\n", a);
    printf("After swapping b = %d\n", b);

    return 0;
}