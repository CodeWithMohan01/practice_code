#include<stdio.h>
#include<conio.h>

void main() {
    int n, i, r=1;
    printf("Enter any number to calculte its factorial");
    scanf("%d",&n);
    for (i = 1; i <= n; i++)    
    {
        r = i*r;
    //    printf("%d %d %d\n",i, n, r);
    }
    printf("%d",r);
    getch();
    
}
