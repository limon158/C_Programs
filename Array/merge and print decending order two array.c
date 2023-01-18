/* 
Program to merge two  array of same size stored in descending data
input: array_1[1,2,3] array_2[1,2,3] 
output: array_3[3,3,2,2,1,1]
*/
#include<stdio.h>
#define N 100
int main()
{
    int i, j, k;
    int e1, e2, e3;
    int array_1[N], array_2[N], array_3[200];
    
    printf("Input number of element for array_1:");
    scanf("%d", &e1);
    printf("Input element :\n");
    for(i=0; i<e1; i++)
    {
        printf("Element %d :", i);
        scanf("%d", &array_1[i]);
    }
    printf("Input number of element for array_2:");
    scanf("%d", &e2);
    printf("Input element :\n");
    for(i=0; i<e2; i++)
    {
        printf("Element %d :", i);
        scanf("%d", &array_2[i]);
    }
    
    e3=e1+e2;
    for(i=0; i<e1; i++)
    {
        array_3[i]=array_1[i];
    }
    for(j=0; j<e2; j++)
    {
        array_3[i]=array_2[j];
        i++;
    }
    printf("Array_3=\n");
    for(i=0; i<e3; i++)
    {
        printf("%d\t", array_3[i]);
    }
    for(i=0;i<e3; i++)
        {
           for(k=0;k<e3-1;k++)
             {
         
                if(array_3[k]<=array_3[k+1])
                 {
                   j=array_3[k+1];
                   array_3[k+1]=array_3[k];
                   array_3[k]=j;
                 }  
              }
         }
         printf("\nArray_3 in decending order=\n");
         for(i=0; i<e3; i++)
         {
            printf("%d\t", array_3[i]);
         }         
    

return 0;
}