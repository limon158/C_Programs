#include<stdio.h>
#define N 100
int main()
{
    int i, j, n=5, temp;
    int array[N]={4, 2, 8, 3, 7};
    printf("array before acending :");
    for(i=0; i<n; i++)
    {
        printf("%d ", array[i]);
    }
    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-1-i; j++)
        {
            if(array[j]<array[j+1])
            {
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
    printf("\narray after acending:");
    for(i=0; i<n; i++)
    {
        printf("%d ", array[i]);
    }
return 0;
}