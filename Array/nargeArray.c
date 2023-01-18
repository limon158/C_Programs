#include<stdio.h>
#define N 100
int main()
{
    int i=0, j=0, k=0;
    int n1=5, n2=6, n3;
    int array1[N]={3, 4, 5, 11, 7}, array2[N]={2, 10, 9, 6, 1, 8}, array3[N];
    n3=n1+n2;

    for(i=0; i<n1; i++)
    {
        array3[i]=array1[i];
    }
    for(j=0; j<n2; j++)
    {
        array3[i]=array2[j];
        i++;
    } 
    printf("Array 3=\n");
    for(i=0; i<n3; i++)
    {
        printf("%d ", array3[i]);
    }  
return 0;
}