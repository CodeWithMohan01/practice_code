#include<stdio.h>

void main() {
    int a[10];
    int *b, i, sum=0;
    b = &a[0];
    printf("Enter 10 elements of array: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", b+i);
    }
    for (i = 0; i< 10; i++)
    {
        sum += *(a+i);
    }
    printf("sum of all array elements is: %d", sum);
    
    
}   