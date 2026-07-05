//Write a program to read and display n numbers using an array. 

# include <stdio.h >
void main(){
    int size;
    printf("Enter the size of an array : ");
    scanf("%d" , &size);
    int arr[size];
    for(int i=0 ; i<size ; i++){
        printf("Enter the element of an array : ");
        scanf("%d" , &arr[i]);
    }
    for(int i=0 ; i<size ; i++){
        printf("%d \n" , arr[i]);
    }
}