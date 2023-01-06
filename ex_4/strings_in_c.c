#include <stdio.h>
#include <string.h>
 
void main()
{   
    int n;
    char s[] = "My name is ";
    char s2[] = "Mohan";
    char s3[30]; 

    n = strlen(s);

    printf("%d \n", n);

    strcpy(s3, strcat(s, s2));
    printf("\nstring copy: ");
    puts(s3);

    printf("string concatenation");
    puts(strcat(s, s2));

    printf("reverse of the given string is: ");
    puts(strrev(s));



}