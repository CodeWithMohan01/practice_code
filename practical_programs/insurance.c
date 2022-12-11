#include<stdio.h>
#include<conio.h>

void main() 
{
    int age, amnt=0;
    char s, g;
    printf("Enter your age: ");
    scanf("%d",&age);
    fflush(stdin);
    printf("\nSpecify your gender 'f' for female 'm' for mail: ");
    scanf("%c",&g);
    fflush(stdin);
    printf("\nAre you smoker press 'y' for yes 'n' for no: ");
    scanf("%c",&s);

    if(g == 'm' && s == 'y')
    {
        
        if (age >= 21 && age <= 30)
            amnt = 10000;
        else if (age >= 31 && age <= 40)
            amnt = 15000;
        else if (age >= 41 && age <= 50)
            amnt = 20000;
        else if (age >= 51 && age <= 60)
            amnt= 400000;  
        amnt = amnt + amnt*10/100;
    }
    else if (g =='m' && s == 'n')
    {
        if (age >= 21 && age <= 30)
            amnt = 10000;
        else if (age >= 31 && age <= 40)
            amnt = 15000;
        else if (age >= 41 && age <= 50)
            amnt = 20000;
        else if (age >= 51 && age <= 60)
            amnt= 400000;
    }
    else if (g =='f' && s == 'y')        
    {
        if (age >= 21 && age <= 30)
            amnt = 10000;
        else if (age >= 31 && age <= 40)
            amnt = 15000;
        else if (age >= 41 && age <= 50)
            amnt = 20000;
        else if (age >= 51 && age <= 60)
            amnt= 400000;
            
        amnt = amnt - amnt*10/100;
        amnt = amnt + amnt*10/100;
    }
    else if (g =='f' && s =='n')
    {
        if (age >= 21 && age <= 30)
            amnt = 10000;
        else if (age >= 31 && age <= 40)
            amnt = 15000;
        else if (age >= 41 && age <= 50)
            amnt = 20000;
        else if (age >= 51 && age <= 60)
            amnt= 400000;

        amnt = amnt - amnt*10/100;   
    }
    // else
    // {
    //     printf("***sorry you are not eligibl for insourance***");
    // }
      printf("The final amount is: %d", amnt);
}