#include<stdio.h>

void main() {
    int num1;
    printf("Enter a decimal number to convert it into hexadecimal: ");
    scanf("%d",&num1);
    printf("\nThe hexadecimal of given number is: %x\n", num1);

    printf("Enter a hexadecimal number to convert it into decimal: ");
    scanf("%x",&num1);
    printf("\nThe decimal number is: %d\n", num1);
}   