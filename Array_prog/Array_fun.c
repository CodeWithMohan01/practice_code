#include<stdio.h>


void main() {
    int arr[100], size, sum=0, n;
    void inputArray(int[], int);
    void outputArray(int[], int);
    int sumofArray(int[], int);
    int maxelement(int[], int);
    int minelement(int[], int);
    
    printf("Enter the size of array which you want to input: ");
    scanf("%d",&size);
    inputArray(arr, size);
    printf("press 1 if you wnat to print Array: \n");
    printf("press 2 if you wnat to print sum of all elements: \n");
    printf("press 3 if you wnat to print maxelement of Array: \n");
    printf("press 4 if you wnat to print minelement of Array: ");
    scanf("%d",&n);

    switch (n)
    {   
    case 1:
        outputArray(arr, size);
        break;
    case 2:
        printf("\nThe sum of the all elements is: %d\n", sumofArray(arr, size));
        break;
    case 3:
        printf("\nThe minimum element of the array is: %d\n", minelement(arr, size));
        break;
    case 4:
         printf("\nhe maxmum element of the array is: %d\n", maxelement(arr, size));
        break;
    
    default:
        break;
    }

    }   

void inputArray(int a[], int s)
{
    int i;
    printf("\nEnter the %d values: \n", s);
    for (i = 0; i < s; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("***Values enter successfull***\n\n");
}

void outputArray(int a[], int s)
{
    int i;
    printf("\nvalues of array is: \n");
    for (i = 0; i < s; i++)
    {
        printf("%d\n", a[i]);
    }
    printf("\n***Value print successfully***\n");
}

int sumofArray(int a[], int s)
{
    int i, sum=0;
    for (i = 0; i < s; i++)
    {
        sum += a[i];
    }
    return sum;
}

int maxelement(int a[], int s)
{
    int i, temp;
    temp = a[0];
    for (i = 1; i < s; i++)
    {
        if (temp < a[i])
        {
            temp = a[i];
        }
    }
    return temp;
}
int minelement(int a[], int s)
{
    int i, temp;
    temp = a[0];
    for (i = 1; i < s; i++)
    {
        if (temp > a[i])
        {
            temp = a[i];
        }
    }
    return temp;
}
