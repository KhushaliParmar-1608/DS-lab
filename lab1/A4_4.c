//WAP to find the largest among the given three numbers by user. 

# include <stdio.h>
void main()
{
    int a , b, c;
    printf("Enter the three number : ");
    scanf("%d" , &a);
    scanf("%d" , &b);
    scanf("%d" , &c);

    if(a<b){
        if(b<c){
            printf("%d" , c);
        }
        else{
            printf("%d" , b);
        }
    }
    else{
        if(a<c){
            printf("%d" , c);
        }
        else{
            printf("%d" , a);
        }
    }

}