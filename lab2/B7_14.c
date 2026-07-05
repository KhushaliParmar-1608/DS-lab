//WAP to find the sum of 1 + (1+2) + (1+2+3) + (1+2+3+4)+ …+(1+2+3+4+….+n). 

#include <stdio.h>
void main(){
    int n;
    int i,j;
    int sum=0;
    int sum2=0;
    int k=0;
    printf("Enter the n : ");
    scanf("%d", &n);

    for(i=1 ; i<=n ; i++){
        for(j=1 ; j<=i ; j++){
            sum2=sum2+j;
        }
        sum=sum+sum2;
    }
    printf("%d" , sum);
}