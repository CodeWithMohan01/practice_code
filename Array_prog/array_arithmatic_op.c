#include<stdio.h>


void main() {
    int *a, *b, *c;
    int x, y, z;
    a = &x;
    b = &y;
    c = &z;
    printf("\n Address of X: %u",a);
    printf("\n Address of y: %u",b);
    printf("\n Address of z: %u",c);
    z = a-b;
    printf("\n %u - %u  Address subtraction: %d",a, b, z);
}