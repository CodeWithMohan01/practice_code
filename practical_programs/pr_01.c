#include<stdio.h>
#include<conio.h>

void main() {
    int a, b;
    printf("Enter two number to check greater number: ");
    scanf("%d%d",&a,&b);
    if(a>b){
        printf("The greater number is: %d",a);
    }
    else{
        printf("The greater number is: %d",b);
    }
}
