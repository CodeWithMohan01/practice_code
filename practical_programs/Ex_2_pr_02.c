#include<stdio.h>
#include<conio.h>
#include<math.h>

double fact(int n){
    int i, ans=1;
    for (i = 1; i <=n; i++)  
    {
        ans *= i;
    }
    return ans; 
}
float num_pow(int a, int b){
    
}
void main() {
    int n,x,y;
    printf("Press 1 to calculate factorial: \nPress 2 to calculate power of any number \nPress 3 for calculate sum of digits of a number: ");
    scanf("%d",&n);
    switch (n)
    {
    case 1:
        printf("Enter any number to calculate its factorial: ");
        scanf("%d",&x);
        printf("The factorial of %d is: %lf",x,fact(x));
        break;
    case 2:
        printf("Enter any number and its respective power: ");
        scanf("%d%d",&x,y);
        printf("Your result is: %d", num_pow(x,y));
        break;
    
    default:
        break;
    }
}
