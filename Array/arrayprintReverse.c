//Write a program to read n umbers of values in an array and print it in reverse order


#include<stdio.h>
int main()
{
    int n, i;

    printf("Number of elements for array :");
    scanf("%d",&n);

    int array[n];

    printf("Input elements pf array : \n");
    for(i=0; i<n; i++)
    {
        printf("Element- %d:", i);
        scanf("%d",&array[i] );
    }
    printf("The element of arry is :\n");
    for(i=4; i>=0; i-- )
    {
        printf("%d ", array[i]);
    }
    printf("\n");

return 0;
}