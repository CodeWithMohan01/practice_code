#include<stdio.h>

void main() {
    int num1, num2, n=0;
    printf("Enter a decimal number to convert it into octal: ");
    scanf("%d",&num1);
    printf("\nThe octal number is: %o\n", num1);
    
    printf("Enter a octal number to convert it into decimal: ");
    scanf("%o",&num2);
    printf("\nThe decimal number is: %d\n", num2);
}   