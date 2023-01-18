//Write a program to read n umbers of values in an array and print the sum of all values


#include<stdio.h>
int main()
{
    int n, i;

    printf("Number of elements for array :");
    scanf("%d",&n);

    int array[n];

    printf("Input elements of array : \n");
    for(i=0; i<n; i++)
    {
        printf("Element- %d:", i);
        scanf("%d",&array[i] );
    }
    int result=0;
    for(i=0; i<=n; i++)
    {
        result+=array[i];
    }
    printf("The sum of all values : %d", result);
return 0;
}