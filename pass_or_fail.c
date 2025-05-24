#include <stdio.h>

int main(){
    
    int m,p,c;

    printf("enter the marks in maths :");
    scanf("%d",&m);
    

    printf("enter the marks in physics :");
    scanf("%d",&p);
    
    printf("enter the marks in chemistry :");
    scanf("%d",&c);
    

    if (m < 0 || m > 100 || p < 0 || p > 100 || c < 0 || c > 100) {
        printf("Invalid input. Marks should be between 0 and 100.\n");
    
    
return 1;
    }




int total=m+p+c;

printf("The total marks is :%d\n",total);

float percentage=total/3;

printf("percentage is %f\n",percentage);


if(percentage<33){

    printf("Fail");

}
else{
    printf("Pass");
}

    
}