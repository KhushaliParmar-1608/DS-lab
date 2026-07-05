//  WAP to allocate and de-allocate memory for int, char and float variable at 
// runtime. 

#include<stdio.h>
#include<stdlib.h>

void main(){
    int *pint;
    char *pchar;
    float *pfloat;

    pint=(int*)malloc(sizeof(int));
    pchar=(char*)malloc(sizeof(char));
    pfloat=(float*)malloc(sizeof(float));

    printf("Enter the int :");
    scanf("%d" , pint);
    printf("Enter the char :");
    scanf(" %c" , pchar);
    printf("Enter the floar :");
    scanf("%f" , pfloat);

    printf("INT : %d\n", *pint);
    printf("CHAR : %c\n", *pchar);
    printf("FLOAT : %.2f\n", *pfloat);

    free(pint);
    free(pchar);
    free(pfloat);
}
