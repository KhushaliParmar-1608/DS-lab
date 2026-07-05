//Write a program to insert a number in an array that is already sorted in an 
//ascending order.

# include <stdio.h>
void main(){
    int size;
    int p =0, v;
    printf("Enter the size of an Array : ");
    scanf("%d" , &size);
    int arr[size + 1];

    for(int i=0 ; i<size ; i++){
        printf("Enter the element of shorted Array : ");
        scanf("%d" , &arr[i]);
    }
    printf("Enter the value : ");
    scanf("%d" , &v);

          while(p < size && arr[p] < v) {
            p++;
        }
        for(int i=size ; i>p ; i--){
            arr[i]=arr[i-1];
        }
    
        arr[p]=v;
        size++;
        for(int i=0 ; i< size ; i++){
            printf("%d ," , arr[i]);
        }
}