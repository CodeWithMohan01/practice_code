#include<stdio.h>
#include<conio.h>

void main() {
    int i,j,k,n;
    printf("Enter number of lines: ");
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        for ( k = 0; k < (n-i); k++)
        {
            printf(" ");
        }
        
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    
}
