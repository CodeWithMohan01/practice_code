#include<stdio.h>
#include<conio.h>

void main() {
    char c;
    printf("Enter any character: ");
    c = getchar();
    printf("\n");
    if(c=='a'||c=='A')
    {
      printf("'%c' is a vowel", c);
    }

    else if(c=='e'||c=='E')
    {
      printf("'%c' is a vowel", c);
    }

    else if(c=='i'||c=='I')
    {
      printf("'%c' is a vowel", c);
    }

    else if(c=='o'||c=='O')
    {
      printf("'%c' is a vowel", c);
    }

    else if(c=='u'||c=='U')
    {
      printf("'%c' is a vowel", c);
    }

    else
      printf("not a vowel");
}
