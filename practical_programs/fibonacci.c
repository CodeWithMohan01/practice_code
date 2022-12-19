#include<stdio.h>
#include<conio.h>

void main() {
    int n, i, a, b, nt;
    a = 0;
    b = 1;
    nt = 0;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    for (i = 0; i < n; i++)
    {
        nt = a+b;
        a = b;
        b = nt;
        printf("%d \t", nt); 
    }
    
}
