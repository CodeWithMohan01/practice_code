#include<stdio.h>


void main() {
    int a[3][3], b[3][3], mul[3][3]={0};
    int r, c;
    void inputMatrix(int[3][3], int, int);
    void outputMatrix(int[3][3], int, int);
    void multi(int[3][3], int[3][3], int[3][3], int, int);
    printf("enter no. of row and column: ");
    scanf("%d %d",&r, &c);
    printf("enter elements of first matrix: ");
    inputMatrix(a, r, c);
    printf("enter elements of second matrix: ");
    inputMatrix(b, r, c);
    multi(a, b, mul, r, c);
}

void inputMatrix(int a[3][3], int r, int c)
{
    int i, j;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
}

void outputMatrix(int a[3][3], int r, int c)
{
    int i, j;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

void multi(int a[3][3], int b[3][3], int mul[3][3], int r, int c)
{
    int i, j, k;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            for (k = 0; k < c; k++)
            {
                mul[k][i] += a[i][j] * b[j][i];
            }
        }   
    }
    outputMatrix(mul, r, c);
}