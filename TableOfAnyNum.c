#include <stdio.h>

int main()
{
    int n, i;
    printf("Enter the numner :", n);
    scanf("%d", &n);

    for (i = 1; i <= 10; i++)
    {

        printf("%d\n", i * n);
    }
    return 0;
}