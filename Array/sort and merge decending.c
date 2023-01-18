/*
Merge two arrays of same size sorted in decending ofder
*/
#include<stdio.h>
#define N 100
int main()
{
    int i, j, k, n1, n2, n3, temp;
    int array1[N], array2[N], arr_mgd[N];

    printf("input number of element[Array1] :");
    scanf("%d", &n1);
    printf("\nInput elements:\n");
    for(i=0; i<n1; i++)
    {
        printf("element [%d]:", i);
        scanf("%d", &array1[i]);
    }
    printf("Array 1= ");
    for(i=0; i<n1; i++)
    {
        printf("%d ", array1[i]);
    }
    printf("\nInput number of element[Array2] :");
    scanf("%d", &n2);
    printf("\nInput elements:\n");
    for(j=0; j<n2; j++)
    {
        printf("element [%d]:", j);
        scanf("%d", &array2[j]);
    }
    printf("\nArray 2= ");
    for(j=0; j<n2; j++)
    {
        printf("%d ", array2[j]);
    }

    n3=n1+n2;
    
    for(i=0; i<n1; i++)
    {
        arr_mgd[i]=array1[i];
    }
    for(j=0; j<n2; j++)
    {
        arr_mgd[i]=array2[j];
        i++;
    }
    printf("\nMerged array= ");
    for(i=0; i<n3; i++)
    {
        printf("%d ", arr_mgd[i]);
    }
    for(i=0;i<n3; i++)
        {
           for(k=0;k<n3-1;k++)
             {
         
                if(arr_mgd[k]<=arr_mgd[k+1])
                 {
                   temp=arr_mgd[k+1];
                   arr_mgd[k+1]=arr_mgd[k];
                   arr_mgd[k]=temp;
                 }  
              }
         }                
    printf("\nMerged array(decending order)= ");
    for(i=0; i<n3; i++)
    {
        printf("%d ", arr_mgd[i]);
    }

return 0;
}