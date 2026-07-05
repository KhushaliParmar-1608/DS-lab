// WAP to find the largest element in the array using Pointer.
# include<stdio.h>
void main(){
    int n;
    printf("Enter the N :");
    scanf("%d" , &n);
    int arr[n] , i;
    int max;
    int *ptr = arr;

    for(i=0 ; i<n ; i++){
        printf("Enter the element of an Array : ");
        scanf("%d" , (ptr+i));
    }
    max=*ptr;
    for(i=0 ; i<n ; i++){
        if(*(ptr+i)>max){
            max=*(ptr+i);
        }
    }
    printf("Max : %d" , max);
}