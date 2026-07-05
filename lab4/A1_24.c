//Write a program to insert a number at a given location in an array.

# include <stdio.h>
void main(){
    int size;
    int p , v;
    printf("Enter the size of an Array : ");
    scanf("%d" , &size);
    int arr[size + 1];
    for(int i=0 ; i<size ; i++){
        printf("Enter the element : ");
        scanf("%d" , &arr[i]);
    }
    printf("Enter the Position : ");
    scanf("%d", &p);
    printf("Enter the value : ");
    scanf("%d" , &v);
    if(p<1 || p >size +1){
        printf("Invalid Input ");
    }
    else
    {
        for(int i=size ; i>=p ; i--){
            arr[i]=arr[i-1];
        }
    
        arr[p-1]=v;
        size++;
        for(int i=0 ; i< size ; i++){
            printf("%d ," , arr[i]);
        }
    }
}