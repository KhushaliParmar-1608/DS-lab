//WAP to check whether a number is prime or not. 

# include<stdio.h>
void main(){
    int n;
    int i , count=0;
    printf("Enter the number : ");
    scanf("%d" , &n);

    for(i=2 ; i<n ; i++){
        if(n%i==0){
            count++;
        }
    }
    if(count==0){
        printf("Given number is prime");
    }
    else{
        printf("Given number is not prime");
    }
}