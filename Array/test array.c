#include<stdio.h>
#define N 200
int main()
{
    int k=0, l=0, m=0;
    int n3=7, In=11, Tn;
    int arr3[N]={12, 13, 14, 15, 16, 17, 18}, arr_I[N]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11},
    arr_R[N];
    Tn=n3+In;
    while(k<n3&&l<In)          
    {
        if(arr3[k]<arr_I[l])
        {
            arr_R[m]=arr3[k];
            m++;
            k++;
        }
        else if (arr3[k]>arr_I[l])
        {
            arr_R[m]=arr_I[l];
            m++;
            l++;
        }
    }
    while (k<n3)
    {
        arr_R[m]=arr3[k];
        m++;
        k++;
    }
    while (l<In)
    {
        arr_R[m]=arr_I[l];
        m++;
        l++;
    }
    printf("\nArray_R =\n");
    for(k=0; k<Tn; k++)
    {
        printf("%d\t", arr_R[k]);
    }
    return 0;
}