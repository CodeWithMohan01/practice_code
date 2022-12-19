#include<stdio.h>

void main() {
    int a, c, b,z=0;
    a =50;
    b =51;
    c =1;
    z = (a>b) ? ((a>c) ? a : b) : ((b>c) ? b : c);

    printf("The greatest number is: %d",z);

}