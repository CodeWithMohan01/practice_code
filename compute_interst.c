#include<stdio.h>
#include<conio.h>
#include<math.h>
void main() {
    int a,n,t;
    float p,r,si,ci;
    printf(" Press 1 to calculate SI: \n Press 2 to calculate CI: ");
    scanf("%d",&a);
    switch (a)
    {
    case 1:
    {
        printf("Enter value of principal value: ");
        scanf("%f",&p);
        printf("Enter value of intrest rate: ");
        scanf("%f",&r);
        printf("Enter time in years: ");
        scanf("%f",&t);
        si = (p*r*t)/100;
        printf("The value of simple intrest: %f");
        break;
    }
    case 2:
    { 
        printf("Enter value of principal value: ");
        scanf("%f",&p);
        printf("Enter value of intrest rate: ");
        scanf("%f",&r);
        printf("Enter time in years: ");
        scanf("%f",&t);
        printf("number of times interest applied per time period: ");
        scanf("%f",&n);
        ci = p * (pow((1 + (r/n)),(n*t)));
        printf("The value of simple intrest: %f", ci);
    }
    default:
    printf("***invalid input***");
        break;
    }
    getch();
}
