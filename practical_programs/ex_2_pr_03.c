#include<stdio.h>
#include<conio.h>
#include<math.h>

int num_of_digits(int n)
{
    int a = 0;
    while (n>0)
    {
        n = n / 10;
        a = a + 1;
    }
    return a;    
}

int is_armstrong(int n)
{
    int a, b, sum = 1;
    a = num_of_digits(n);
    while (n!=0)
    {
        b = n % 10;
        n = n/10;
        sum = sum + pow(b, a);
    }
    return sum;  
}

int is_prime(int n)
{
    int i;
    for ( i = 2; i <= n; i++)
    {
        if (n % i == 0) 
            return 0;
    }
    return 1;
    
}

void main() {
    int n, num;
    int is_armstrong(int);
    int num_of_digi(int);
    printf("Press 1 to check given number is armstrong: \nPress 2 for check prime number: ");
    scanf("%d",&n);
    switch (n)
    {
    case 1:
        printf("Enter any number to check it is armstrong or not: ");
        scanf("%d",&num);
        if (is_armstrong(num) == num)
            printf("%d is armstrong number",num);
        else
            printf("%d is not armstrong number",num);
        break;
    case 2:
        printf("enter any number to check it is prime or not: ");
        scanf("%d",&num);
        if (is_prime(num))
            printf("%d is prime number",num);
        else
            printf("%d is not prime number",num);
        

    default:
        break;
    }
}
