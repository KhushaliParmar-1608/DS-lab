// Read n numbers in an array then read two different numbers, replace 1st 
//number with 2nd number in an array and print its index and final array. 

# include <stdio.h >
void main(){
    int size;
    int n1 , n2;
    printf("Enter the size of an array : ");
    scanf("%d" , &size);
    int arr[size];
    for(int i=0 ; i<size ; i++){
        printf("Enter the element of an array : ");
        scanf("%d" , &arr[i]);
    }
    printf("Enter the number n1 : ");
    scanf("%d" , &n1);
    printf("Enter the number n2 : ");
    scanf("%d" , &n2);

    for(int i=0 ; i<size ; i++){
        if(arr[i]==n1){
            arr[i]=n2;
            printf("Index is %d \n", i);
        }
    }
    for(int i=0 ; i<size ; i++){
        printf("%d \n" , arr[i]);
    }
}