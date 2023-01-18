#include<stdio.h>
#define N 10
int main()
{
    int numbs[N];
    int i, n;

    printf("Input how many integer wish you input: ");
    scanf("%d", &n);
    printf("\nInput numbers:\n");
    for(i=0; i<n; i++)
    {
        printf("index[i]:");
        scanf("%d", &numbs[i]);
    }

    int min;
    min = numbs[0];
    for(i=1; i<n; i++)
    {
        if(min>numbs[i])
        {
            min = numbs[i];
        }
    }
    printf("Smallest integer is: %d", min);

    int max;
    max = numbs[0];
    for(i=1; i<n; i++)
    {
        if(max<numbs[1])
        {
            max = numbs[1];
        }
    }
    printf("\nBigest integer is: %d", max);

}