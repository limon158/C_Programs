#include<stdio.h>
#define N 100
int main()
{
    int i, n, A[N];

    printf("Input size of array: ");
    scanf("%d", &n);
    printf("\nInput elements for A:\n");
    for(i=0; i<n; i++)
    {
        printf("Index[%d]:", i);
        scanf("%d", &A[i]);
    }
    printf("Array A is:\n");
    for(i=0; i<n; i++)
    {
        printf("%d\t", A[i]);
    }
    printf("Array A is reverse order:\n");
    for(i=n-1; i>=0; i--)
    {
        printf("%d\t", A[i]);
    }
return 0;
}