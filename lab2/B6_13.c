// WAP to print prime numbers between given interval

# include<stdio.h>
void isPrime(int);
void main(){
    int i , j;
    int a,b;
    printf("Enter the a : ");
    scanf("%d" , &a);
    printf("Enter the  b : ");
    scanf("%d" , &b);

    for(i=a ; i<=b ; i++)
    {
        isPrime(i);
    }
}
void isPrime(int n){
    int i1;
    int count=0;
     for(i1=2 ; i1<n ; i1++){
        if(n%i1==0){
            count++;
        }
    }
    if(count==0){
    }
    printf("%d \n" , n);
}
