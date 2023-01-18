#include<stdio.h>
#define N 200
int main()
{
    int i=0, j=0, k=0, l=0, m=0;
    int n1=5, n2=6, n3=7, In, Tn;
    int arr1[N]={1, 2, 3, 4, 5}, arr2[N]={6, 7, 8, 9, 10, 11}, arr3[N]={12, 13, 14, 15, 16, 17, 18},
    arr_I[N], arr_R[N];

    In=n1+n2;
    Tn=In+n3;
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