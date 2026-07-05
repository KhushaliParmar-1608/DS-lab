//WAP to get and print the array elements using Pointer
# include<stdio.h>
#include<stdlib.h>

void main(){
    int n;
    printf("Enter the N :");
    scanf("%d" , &n);
    int arr[n] , i;
    int *ptr = arr;

    for(i=0 ; i<n ; i++){
        printf("Enter the element of an Array : ");
        scanf("%d" , (ptr+i));
    }
    for(i=0 ; i<n ; i++){
        printf("%4d" , *(ptr+i));
    }
}