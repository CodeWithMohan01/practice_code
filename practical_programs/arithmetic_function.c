#include<stdio.h>
#include<conio.h>

int sum(int a, int b){
    return (a+b);
}
int sub(int a, int b){
    return (a-b);
}
int mul(int a, int b){
    return (a*b);
}
int div(int a, int b){
    return (a/b);
}
int rem(int a, int b){
    return (a%b);
}
void main() 
{
    int a,b;
    char o;
    printf("Enter your expression: ");
    scanf("%d%c%d",&a,&o,&b);
    switch (o)
    {
    case '+':
        printf("The sum of two numbers is: %d",sum(a,b));
        break;
    case '-':
        printf("The subtraction of two numbers is: %d",sub(a,b));
        break;
    case '*':
        printf("The multiplicaton of two numbers is: %d",mul(a,b));
        break;
    case '/':
        printf("The division of two numbers is: %d",div(a,b));
        break;
    case '%':
        printf("The remender of two numbers is: %d",rem(a,b));
        break;
    
    default:
        break;
    }
}
