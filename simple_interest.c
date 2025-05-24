#include<stdio.h>
int main(){

float p,r,t;


printf("Enter the principal amount: ");
scanf("%f", &p);


printf("Enter the rate of interest: ");
scanf("%f", &r);

printf("Enter the time period in month: ");
scanf("%f", &t);


float si = (p*r*t)/100;


printf("The area of circle is : %f\n",si );




    return 0;
}