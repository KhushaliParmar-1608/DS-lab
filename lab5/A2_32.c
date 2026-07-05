// Read two matrices, first 3x2 and second 2x3, perform multiplication operation 
//and store result in third matrix and print it.

#include <stdio.h>
  
void main()
{
    int r1, c1, r2, c2;

    printf("Enter rows and columns of First Matrix : ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns of Second Matrix : ");
    scanf("%d %d", &r2, &c2);

    if(c1 != r2)
    {
        printf("Matrix multiplication is not possible.");
        return;
    }

    int a[r1][c1], b[r2][c2], c[r1][c2];

    printf("Enter elements of First Matrix:\n");
    for(int i = 0; i < r1; i++)
    {
        for(int j = 0; j < c1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of Second Matrix:\n");
    for(int i = 0; i < r2; i++)
    {
        for(int j = 0; j < c2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    for(int i = 0; i < r1; i++)
    {
        for(int j = 0; j < c2; j++)
        {
            c[i][j] = 0;

            for(int k = 0; k < c1; k++)
            {
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
            }
        }
    }

    printf("Result Matrix:\n");

    for(int i = 0; i < r1; i++)
    {
        for(int j = 0; j < c2; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
}