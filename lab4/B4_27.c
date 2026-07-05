// Write a program to delete a number from an array
// that is already sorted in ascending order.

#include <stdio.h>

void main() {
    int size;
    int p = 0, v;

    printf("Enter the size of an Array : ");
    scanf("%d", &size);

    int arr[size];

    for(int i = 0; i < size; i++) {
        printf("Enter the element of sorted Array : ");
        scanf("%d", &arr[i]);
    }

    printf("Enter the value to delete : ");
    scanf("%d", &v);

    while(p < size && arr[p] < v) {
        p++;
    }

    if(p == size || arr[p] != v) {
        printf("Element not found");
    }

    for(int i = p; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    size--;

    printf("Array after deletion : ");

    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}