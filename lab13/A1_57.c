// 57. Write a menu driven program to implement following operations on the Stack 
// using an Array 
//  PUSH, POP, DISPLAY 
//  PEEP, CHANGE 
#include<stdio.h>
#include<stdlib.h>
void push( int arr[] , int *top , int n , int value){
    if(*top >= n-1){
        printf("Stack Overflow");
    }
    else{
        (*top)++;
        arr[*top]=value;
    }
}
void pop(int arr[],int *top){
    if(*top == -1){
        printf("stack is empty");
    }
    else{
        printf("The popped element is : %d" , arr[*top]);
        (*top)--;
    }
}
void display(int arr[] , int *top){
    if(*top == -1){
        printf("stack is empty");
    }
    else{
        printf("The elements in the stack are : ");
        for(int i=0;i<=*top;i++){
            printf("%d " , arr[i]);
        }
        printf("\n");
    }
}
void peep(int arr[] , int *top , int position){
    if(*top == -1){
        printf("stack is empty");
    }
    else if(position > *top + 1 || position <= 0){
        printf("Invalid position");
    }
    else{
        printf("The element at position %d is : %d" , position , arr[position-1]);
    }
}
void change(int arr[] , int *top , int position , int value){
    if(*top == -1){
        printf("stack is empty");
    }
    else if(position > *top + 1 || position <= 0){
        printf("Invalid position");
    }
    else{
        arr[position-1] = value;
        printf("The element at position %d is changed to : %d" , position , value);
    }
}
int main(){
    int n;
    printf("Enter the Number : ");
    scanf("%d" , &n);
    int arr[n];
    int top=-1;

    int choice;
    printf("Enter the choice : \n 1. PUSH \n 2. POP \n 3. DISPLAY \n 4. PEEP \n 5. CHANGE \n");
    scanf("%d" , &choice);
    if(choice == 1){
        push(arr , &top ,n ,1);
        push(arr , &top ,n ,2);
        push(arr , &top ,n ,3);
        push(arr , &top ,n ,4);
    }
    else if(choice == 2){
        pop(arr , &top);
        pop(arr , &top);
    }
    else if(choice == 3){
        display(arr , &top);
    }
    else if(choice == 4){
        int position;
        printf("Enter the position : ");
        scanf("%d" , &position);
        peep(arr , &top , position);
    }
    else if(choice == 5){
        int position , value;
        printf("Enter the position and value : ");
        scanf("%d %d" , &position , &value);
        change(arr , &top , position , value);
    }
    else{
        printf("Invalid choice");
    }
}