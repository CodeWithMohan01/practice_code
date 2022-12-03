#include<stdio.h>
#include<conio.h>

void main() {
    int b,p,r=1;
    printf("Enter the base number; ");
    scanf("%d",&b);
    printf("Enter the power number; ");
    scanf("%d",&p);
    for (int i = 0; i <= p; i++)
    {
        r *= b;
        printf("%d",r);
    }
    

}
