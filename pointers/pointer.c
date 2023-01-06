#include<stdio.h>


void main() {
    int x, y, z;
    int *a, *b, *c;
    printf("enter three numbers: ");
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&z);

    a = &x;
    b = &y;
    c = &z;

    printf("value of x %d\n",*a);
    printf("value of y %d\n",*b);
    printf("value of z %d\n",*c);

}