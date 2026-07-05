// Write a program to merge two unsorted arrays. 

// Write a program to merge two unsorted arrays.

#include <stdio.h>

void main()
{
    int size1, size2;

    printf("Enter the size of first array : ");
    scanf("%d", &size1);

    int arr1[size1];

    for(int i = 0; i < size1; i++)
    {
        printf("Enter the element : ");
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of second array : ");
    scanf("%d", &size2);

    int arr2[size2];

    for(int i = 0; i < size2; i++)
    {
        printf("Enter the element : ");
        scanf("%d", &arr2[i]);
    }

    int arr3[size1 + size2];

    for(int i = 0; i < size1; i++)
    {
        arr3[i] = arr1[i];
    }

    for(int i = 0; i < size2; i++)
    {
        arr3[size1 + i] = arr2[i];
    }

    printf("Merged Array : ");

    for(int i = 0; i < size1 + size2; i++)
    {
        printf("%d ", arr3[i]);
    }
}