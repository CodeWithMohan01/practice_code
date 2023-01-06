#include<stdio.h>


void main() {
    int a[5], b[5], diff[5]={0};
    int *x, *y, *z, i;
    x = &a[0];
    y = &b[0];
    z = &diff[0];
    printf("enter array 1 values: ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", a+i);
    }
    printf("enter array 2 values: ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", b+i);
    }
    
    for (i = 0; i < 5; i++)
    {
        
        *(z+i) = *(x+i) + *(y+i);
    }

    for (i = 0; i < 5; i++)
    {
        printf("%d  ", *(z+i));
    }
       
}