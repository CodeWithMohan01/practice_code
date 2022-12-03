#include<stdio.h>
#include<conio.h>

void main() {
    char o;
    int a, b;
    // clrscr();
    printf("write your expression: ");
    scanf("%d %c %d", &a, &o, &b);
    switch (o)              
    {
    case '+':
        printf("sum is: %d", a+b);
        break;
    case '-':
        printf("sub is: %d", a-b);
        break;
    case '*':
        printf("mul is: %d", a*b);
        break;
    case '/':
        printf("div is: %d", a/b);
        break;  
    default:
    printf("invalid operator");
        break;
    }

}
