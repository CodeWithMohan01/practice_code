#include<stdio.h>


void main() {
    int x, y;
    int *a, *b;
    printf("enter value of X: ");
    scanf("%d", &x);   
    printf("enter value of Y: ");   
    scanf("%d", &y);

    a = &x;   
    b = &y;   
    printf("value of X is: %d \n", *a);
    printf("value of y is: %d \n", *b);
    printf("Address of X %u \n", a);
    printf("Address of y %u \n", b);
    printf("diff bitween Address of %d and %d is : %d\n", *a, *b, a-b);
    printf("next address after X and Y %u, %u", a+1, b+1);

}