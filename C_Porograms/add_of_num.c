#include<stdio.h>
#include<conio.h>

void main() {
    int i, n, sum=0;
    printf("enter any number to calculate sum of numbers 1 to that number: ");
    scanf("%d",&n);
    for (i = 0; i <= n; i++)
        sum +=i;
    printf("sum of numbers is: %d", sum);
    
}
