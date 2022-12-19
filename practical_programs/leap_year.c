#include<stdio.h>
#include<conio.h>

void main() {
    int y;
    printf("Enter any year to check it is leap year or no: ");
    scanf("%d",&y);
    
    if(y%400==0)
        printf("This year is leap year: ");
    else if (y%100==0)
    
        printf("This year is not leap year");
    else if (y%4==0)     
    {
        printf("This year is a leap year: ");
    }
    else
    printf("This not not leap year: ");
    
   
}
