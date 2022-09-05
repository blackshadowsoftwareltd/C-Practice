#include <stdio.h>

void main()
{
    int r, c;
    printf("Enter number of row & column of matrix : ");
    scanf("%d%d", &r, &c);

    int A[r][c], B[r][c], mul[r][c], i, j, k;
    printf("Enter elements of matrix A : ");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    printf("Enter elements of matrix B : ");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }
    printf("matrix A :\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    printf("matrix B :\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }

    printf("multiply of the matrix :\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            mul[i][j] = 0;
            for (k = 0; k < c; k++)
            {
                mul[i][j] += A[i][k] * B[k][j]; //? first matrix one row element is multiplied by second matrix all column elements
            }
        }
    }
    ///? printing the result
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d\t", mul[i][j]);
        }
        printf("\n");
    }
}