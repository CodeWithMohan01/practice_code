#include<stdio.h>
#include<math.h>

int num_of_digi(int n)
{
    int a = 0;
    while (n>0)
    {
        n = n/10;
        a = a+1;
    }
    return a;
}
int is_armstrong(int n)
{
    int a, b, sum = 0;
    a = num_of_digi(n);
    while (n!=0)
    {
        b = n % 10;
        n = n/10;       
        sum += pow(b, a);
    }
        return sum;
}

void main() {
    int num;
    int no_ofdigi(int);
    int is_armstrong(int);

    printf("enter any number to check its armstrong or not; ");
    scanf("%d",&num);
    if (is_armstrong(num) == num)
        printf("\n***%d: is an armstrong number***", num);
    else
        printf("\n***%d: is not an armstrong number***", num);
}
