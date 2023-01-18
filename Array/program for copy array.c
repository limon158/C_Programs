// Write a program to copy the elements of one array to another arry.
#include<stdio.h>
int main()
{
    int array[100], array2[100];
    int i, n;

    printf("Copy the elements of first array to second array :\n");
    printf("*************************************************\n");

    printf("Input the Number of element to be stored in the array : ");
    scanf("%d", &n);

    printf("Input %d element of the array :\n", n);
    for(i=0; i<n; i++)
    {
        printf("Element-%d:",i);
        scanf("%d", &array[i]);
    }
    //copy the elements stored first array to second array
    for(i=0; i<n; i++)
    {
        array2[i] = array[i];
    }
    //print the element of first array
    printf("\nElements of first array is :\n");
    for(i=0; i<n; i++)
    {
        printf("%d ", array[i]);
    }
    //print  the element of second array that copied from first arry.
    printf("\nElements that copied from first array :\n");
    for(i=0; i<n; i++)
    {
        printf("%d ", array2[i]);
    }

return 0;
}