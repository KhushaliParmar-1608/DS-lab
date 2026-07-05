// Read two 2x2 matrices and perform addition of matrices into third matrix and 
// print it

#include <stdio.h>

void main()
{
    int row, col;

    printf("Enter number of rows : ");
    scanf("%d", &row);

    printf("Enter number of columns : ");
    scanf("%d", &col);

    int a[row][col], b[row][col], c[row][col];

    printf("Enter elements of First Matrix:\n");
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of Second Matrix:\n");
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("Addition of Matrices:\n");

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
}