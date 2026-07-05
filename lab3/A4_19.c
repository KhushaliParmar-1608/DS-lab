// Write a program to find position of the smallest number & the largest number 
//from given n numbers.

# include <stdio.h>
void main(){
    int size;
    int max;
    int min;
    int temp1;
    int temp2;
    printf("Enter the size of an array : ");
    scanf("%d" , &size);
    int arr[size];
    for(int i=0 ; i<size ; i++){
        printf("Enter the element of an array : ");
        scanf("%d" , &arr[i]);
    }
    for(int i=0 ; i<size ; i++){
        max=arr[0];
        if(arr[i]>=max){
            max=arr[i];
            temp1=i;
        }
    }
    for(int i=0 ; i<size ; i++){
        min=arr[0];
        if(arr[i]<= min){
            min=arr[i];
            temp2=i;
        }
    }
    printf("Laegest number position is index %d \n" , temp1);
    printf("Smallest number position is index %d" , temp2);
}