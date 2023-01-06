#include<stdio.h>


void main() {
    int arr[10], i;
    int *a;
    a = &arr[0];     
    printf("enter 10 values: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", a+i);
    }
    printf("entered values:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d\n", *(a+i));
    }
    
}