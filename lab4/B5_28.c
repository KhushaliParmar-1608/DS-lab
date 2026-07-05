// Write a program to delete duplicate numbers from an array.

#include <stdio.h>

void main()
{
    int size;

    printf("Enter the size of an Array : ");
    scanf("%d", &size);

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter the element : ");
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                for (int k = j; k < size - 1; k++)
                {
                    arr[k] = arr[k + 1];
                }

                size--;
                j--;
            }
        }
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}