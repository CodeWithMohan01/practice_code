#include<stdio.h>
#include<conio.h>


is_armstrong(int n){
    int a, i=0,  sum;
    while (n!=0)
    {
        a = n % 10;
        n = n/10;
        i += 1;
        }
    pow(n,i);

    if (n==sum)
        return 1;
    else
        return 0;
    
    

}
void main() {
    int n;
    int is_armstrong(int);
    printf("enter any number to check its armstrong or not; ");
    scanf("%d",&n);
    printf("%d",is_armstrong(n));
    if (is_armstrong(n))
        printf("***This is an armstrong number***");
    else
        printf("***its not an armstrong number***");
}
