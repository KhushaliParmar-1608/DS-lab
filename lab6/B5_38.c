// WAP to sort the array elements using Pointer. 
#include<stdio.h>

void main()
{
    int size;
    printf("Enter the size of an Array : ");
    scanf("%d", &size);

    int arr[size];
    int i, j, temp;
    int *ptr = arr;

    for(i = 0; i < size; i++)
    {
        printf("Enter the element : ");
        scanf("%d", ptr + i);
    }

    for(i = 0; i < size - 1; i++)
    {
        for(j = i + 1; j < size; j++)
        {
            if(*(ptr + i) > *(ptr + j))
            {
                temp = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = temp;
            }
        }
    }
    for(i = 0; i < size; i++)
    {
        printf("%4d ", *(ptr + i));
    }
}