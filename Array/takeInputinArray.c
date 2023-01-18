/* Program to store element in array and print it. */
#include<stdio.h>
int main()
{
    int array[10];
    int i;

    printf("Input 10 element :\n");

    for(i=0; i<10; i++)
    {
        printf("Element- %d :", i);
        scanf("%d", &array[i]);
    }
    printf("\n Elements of array are :");
    for(i=0; i<10; i++)
    {
        printf("%d \n", array[i]);
    }
    printf("\n");

    return 0;
}