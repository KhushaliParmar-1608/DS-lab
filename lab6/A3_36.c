//WAP to calculate the sum of n numbers using Pointer. 
#include<stdio.h>
#include<stdlib.h>

void main()
{
    int n;
    int sum = 0;

    printf("Enter the N : ");
    scanf("%d", &n);

    int arr[n], i;
    int *ptr = arr;

    for(i = 0; i < n; i++)
    {
        printf("Enter the number : ");
        scanf("%d", (ptr + i));
    }

    for(i = 0; i < n; i++)
    {
        sum = sum + *(ptr + i);
    }

    printf("Sum = %d", sum);
}