//WAP to find fectorial of number (using loop)

#include <stdio.h>
void main(){
    int n , i;
    int fectorial=1;
    printf("Enter the number :");
    scanf("%d" , &n);
    for(i=1 ; i<=n ; i++){
        fectorial = fectorial *i;
    }
    printf("fectorial of given number is %d" , fectorial);
}