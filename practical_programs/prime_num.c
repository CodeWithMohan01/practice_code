#include<stdio.h>
#include<math.h>

void main() {
    int i,n, flage=0;
    printf("enter number");
    scanf("%d",&n);
   for ( i = 2; i < sqrt(n); i++)
   {
    if (n%i) 
        flage = 1;
   }
   if (flage==1)
    printf("***Prime number***");
   else
    printf("non prime");
   
}
