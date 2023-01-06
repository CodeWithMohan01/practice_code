#include<stdio.h>

void main()
{
    int num1, num2;
    printf("Enter a octal number to convert it into hexadecimal number: ");
    scanf("%o", &num1);
    printf("hexadecimal of given number is: %x", num1);

    printf("\n\nEnter a hexadecimal number to convert it into octal number: ");
    scanf("%x", &num2);
    printf("octal of given number is: %o", num2);
}