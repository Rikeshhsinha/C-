#include<stdio.h>

int main(){

int M,S,E,H,G;





printf("The toatl marks obtain in maths :");
scanf("%d",&M);


printf("The toatl marks obtain in science :");
scanf("%d",&S);


printf("The toatl marks obtain in english :");
scanf("%d",&E);


printf("The toatl marks obtain in history :");
scanf("%d",&H);


printf("The toatl marks obtain in geography :");
scanf("%d",&G);







if (M <= 100 && S <= 100 && E <= 100 && H <= 100 && G <= 100 &&
        M >= 0 && S >= 0 && E >= 0 && H >= 0 && G >= 0) {

        int total = M + S + E + H + G;
        float percentage = total / 5.0;

        printf("The total marks obtained in all subjects is: %d\n", total);

        printf("The percentage of marks obtained is: %.2f%%\n", percentage);


    } else {
        printf("Invalid input. Marks should be between 0 and 100.\n");








       }   return 0;
}