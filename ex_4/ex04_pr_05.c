#include<stdio.h>

void main() {
    int i;
    char c[30];

    printf("Enter string: ");
    for (i = 0; i < sizeof(c); i++)
    {
        c[i] = getchar();
    }

    printf("\n %s", c);

}   