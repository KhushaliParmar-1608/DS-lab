// Write a program to calculate average of first n numbers.

# include <stdio.h>
void main(){
    int n;
    int sum=0;
    float avg=1;
    printf("Enter the number : ");
    scanf("%d" ,&n);
    for(int i=1 ; i<=n ; i++){
        sum = sum + i;
    }
    avg = sum / n;
    printf("%f" , avg);
}