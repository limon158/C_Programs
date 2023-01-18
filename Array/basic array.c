#include<stdio.h>
#define N 10
int main()
{
    int i, j;
    int n;
    int array1[N], array2[N];
    printf("Enter value of N:");
    scanf("%d", &n);
    printf("\nEnter elements of array1:\n");
    for(i=0; i<n; i++)
    {
        printf("[%d]:", i);
        scanf("%d", &array1[i]);
    }
    printf("\nEnter elements of array2:\n");
    for(j=0; j<n; j++)
    {
        printf("[%d]:",j);
        scanf("%d", &array2[j]);
    }
    printf("\nElements of array1 is:\n");
    for(i=0; i<n; i++)
    {
        printf("%d", array1[i]);
    }
    printf("\nElements of array2 is:\n");
    for(j=0; j<n; j++)
    {
        printf("%d", array1[j]);
    }

}