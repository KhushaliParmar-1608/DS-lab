//WAP to calculate area of a Circle (A = πr2).

#include <stdio.h>
void main()
{
    float r;
    printf("Enter the redius of circle : ");
    scanf("%f" , &r);
    float a;
    a=3.14*r*r;
    printf("%f" , a);
}