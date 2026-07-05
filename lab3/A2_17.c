//Write a program to calculate sum of numbers from m to n.

# include <stdio.h>
void main(){
    int m,n;
    int sum=0;
    printf("Enter the m :");
    scanf("%d" , &m);
    printf("Enter the n :");
    scanf("%d" , &n);

    if(m<n){
        for(int i=m ; i<=n ; i++){
            sum=sum + i;
        }
    }
    else{
        for(int i=n ; i<=m ; i++){
            sum=sum + i;
        }
    }
    printf("Sum is %d" , sum);
}