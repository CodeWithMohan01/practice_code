#include<stdio.h>
#include<conio.h>

void main() {
    for (char i = 0; i <= 126; i++)
    {
        printf("%c  %d\n", i, i);
        if(i=='25'){
            clrscr();
        }
    }
    
}
