// WAP to reverse a number. 

#include <stdio.h>
void main(){
    int n , i;
    int remainder;
    int reverse;
    printf("Enter the number : ");
    scanf("%d" , &n);

    while(n!=0){
        remainder=n%10;
        reverse = remainder*10;
        n=n/10;
    }
    printf("Reverse of given number %d" , reverse);
}