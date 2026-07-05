//Write a program to delete a number from a given location in an array.

# include <stdio.h>
void main(){
    int size;
    int p ;
    scanf("%d" , &size);
    printf("Enter the size of an Array : ");
    int arr[size];
    for(int i=0 ; i<size ; i++){
        printf("Enter the element : ");
        scanf("%d" , &arr[i]);
    }
    printf("Enter the Position : ");
    scanf("%d", &p);
    if(p<1 || p >size +1){
        printf("Invalid Input ");
    }
    else
    {
        for(int i=p -1 ; i<= size -1 ; i++){
            arr[i]=arr[i+1];
        }
    
        size--;
        for(int i=0 ; i< size ; i++){
            printf("%d ," , arr[i]);
        }
    }
}