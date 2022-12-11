#include<stdio.h>
#include<conio.h>

void main() {
    long n;
    printf("Enter any number to check its is even or odd: ");
    scanf("%d",&n);
    if (n%2==0)
    {
        printf("%d is even number", n);
    }
    else 
        printf("%d is odd number", n);
}
