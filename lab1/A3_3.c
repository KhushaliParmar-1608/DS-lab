// WAP to determine whether the entered character is vowel or not.

#inclide <stdio.h>
 void main()
 {
    char n;
    printf("Enter the charecter : ");
    scanf("%c" , &n);
    if(n==A|| n==E|| n==I || n==O || n==U || n==a || n==e || n==i || n==o || n==u){
        printf("Given Charecter is Vowel ");
    }
    else{
        printf("Given Charecter is Consonant  ");
    }
 }
