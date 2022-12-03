#include<stdio.h>
#include<conio.h>

void main() {
    int i, n, r=1;
    printf("Enter any number to print its table: ");
    scanf("%d",&n);
    for ( i = 1; i <=10; i++)
    {
        r = i * n;
        printf("%d X %d = %d \n", n, i, r);
    }
    
}
