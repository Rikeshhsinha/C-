#include <stdio.h>

int main(){
    int n;
 

    printf("enter a number :");
    scanf("%d",&n);

int i =n%97;
    printf("If numer is 0 then the number is divisible by 9.\n%d",i);

    return 0;
}