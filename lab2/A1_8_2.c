//WAP to find fectorial of number (using recursion)

#include <stdio.h>
int fect(int);
void main()
{
    int n;
    int f=1;
    printf("Enter the number :");
    scanf("%d" , &n);
    int i=fect( n);
    printf("Fectorial of given number is %d" ,i);
}
int fect(int n){
    if(n==1 || n==0){
        return 1;
    }
    return n*fect(n-1);
}