// WAP to sort the N names in an alphabetical order. 

# include <stdio.h>
# include <string.h>
void main(){
    int n;
    printf("Enter the number that you want to enter the number : ");
    scanf("%d" , &n);
    char word[n][100];
    char temp[100];
    for(int i=0 ; i<n ; i++){
        printf("Enter the name : ");
        scanf("%c" , &word[i][100]);
    }
    for(int i=0 ; i<n ; i++){
        for (int j=i+1 ; j<n-1 ; j++){
            if(strcmp(word[i] , word[j])>0){
                strcpy(temp , word[i]);
                strcpy(word[i] , word[j]);
                strcpy(word[j] , temp);
            }
        }
    }
    for(int i=0 ; i<n ; i++){
        for(int j=i+1 ; j<n-1 ; j++){
            printf("%c" , word[i][j]);
        }
    }
}