//WAP to find power of a number using loop. 

#include <stdio.h>
void main(){
    int a,b;
    int i;
    int power=1;
    printf("Enter a :");
    scanf("%d" , &a);
    printf("Enter b :");
    scanf("%d" , &b);

    for(i=1; i<=b ; i++){
        power=power*a;
    }
    printf("Power of given number is %d" , power);
}