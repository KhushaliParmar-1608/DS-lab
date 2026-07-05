//Write a program to find whether the array contains a duplicate number or not. 

# include <stdio.h >
void main(){
    int size;
    int count=0;
    printf("Enter the size of an array : ");
    scanf("%d" , &size);
    int arr[size];
    for(int i=0 ; i<size ; i++){
        printf("Enter the element of an array : ");
        scanf("%d" , &arr[i]);
    }
    for(int i=0 ; i<size ; i++){
        for(int j=i+1 ; i<size-1 ; j++){
            if(arr[i] == arr[j]){
                count=1;
                break;
            }
        }
    }
    if(count == 1){
        printf("Given array is contains duplicate element ");
    }
    else{
        printf("Given array is not contains duplicate element ");
    }
}