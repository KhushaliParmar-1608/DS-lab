//WAP to convert number of days into year, week & days [e.g. 375 days mean 1 
//year, 1 week and 3 days].

#include <stdio.h>
void main(){
    int d;
    int m;
    int y;
    printf("Enter the days : ");
    scanf("%d" , &d);

    y = d /365;
    d = d % 365;

    m = d /7;
    d = d % 7;

    printf("years : %d \n" , y);
    printf("months : %d \n" , m);
    printf("days : %d" , d);
}