/*
Find smallest number from a number set/array.
Sample input: 2 5 1 7 8
Sample output: 1
*/
#include<stdio.h>
#define N 100
int main()
{
    int set[N];
    int i, n, result;
    printf("\nInput number of element : ");
    scanf("%d", &n);
    printf("\nInput elements :\n");
    for(i=0; i<n; i++)
    {
        printf("index-[i]:", i);
        scanf("%d", &set[i]);
    }
    printf("\nThe number set is :");
    for(i=0; i<n; i++)
    {
        printf("%d\t", set[i]);
    }
    printf("\n");

    result=set[0];
    for(i=1; i<n; i++)
    {
        if(result>set[i])
        {
            result=set[i];
        }
    }
    printf("\n Smallest element is : %d\n", result);

}