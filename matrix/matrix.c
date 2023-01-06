#include<stdio.h>
void main() {
    int a[3][3], b[3][3], n;
    int c[3][3] = {0};
    void inputMatrix(int[3][3], int, int);
    void outputMatrix(int[3][3], int, int);
    void additionOfMatrix(int[3][3], int[3][3], int[3][3], int, int);
    void subtractionOfMatrix(int[3][3], int[3][3], int[3][3], int, int);
    
    printf("Press 1 to print a matrix: \nPress 2 to print additon of two matrix: \nPress 3 to print subtraction of two matrix: ");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        printf("enter elemets of a 3x3 metrix: \n");
        inputMatrix(a, 3, 3);
        printf("\n***Given matrix is***\n");
        outputMatrix(a, 3, 3);
        break;
    case 2:
        printf("enter elemets of f1st, 3x3 metrix: \n");
        inputMatrix(a, 3, 3);
        printf("enter elemets of 2nd, 3x3 metrix: \n");
        inputMatrix(b, 3, 3);
        printf("\n***Additon of given matrix is***\n");
        additionOfMatrix(a, b, c, 3, 3);
        break;
    case 3:
        printf("enter elemets of f1st, 3x3 metrix: \n");
        inputMatrix(a, 3, 3);
        printf("enter elemets of 2nd, 3x3 metrix: \n");
        inputMatrix(b, 3, 3);
        printf("\n***Subtration of given matrix is***\n");
        subtractionOfMatrix(a, b, c, 3, 3);
        break;

    default:
        break;
    }

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

void additionOfMatrix(int a[3][3], int b[3][3], int c[3][3], int r, int p)
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    outputMatrix(c, 3, 3);
}
void subtractionOfMatrix(int a[3][3], int b[3][3], int sub[3][3], int r, int c)
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            sub[i][j] = a[i][j] - b[i][j];
        }
    }
    outputMatrix(sub, 3, 3);
}